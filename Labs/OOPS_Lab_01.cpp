#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

set<char> end_punctuations = {'.', '!', '?'};
set<char> punctuations = {
    ',', ':', ';', '-', '(', ')', '[', ']', '{', '}', '\'',
    '"', '/', '\\', '|', '@', '&', '*', '#', '%', '^', '_', '~'};

map<string, int> word_frequency;
map<char, int> punctuation_frequency;

void wordCount(string &sentence)
{
    string word = "";
    for (char &symbol : sentence)
    {
        if (punctuations.find(symbol) == punctuations.end() && end_punctuations.find(symbol) == end_punctuations.end() && symbol != ' ')
        {
            word += symbol;
        }
        else if(symbol == '\''){
            word += symbol;
        }
        else if(word.length() > 0)
        {
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            if (word_frequency.find(word) != word_frequency.end())
            {
                word_frequency[word] += 1;
            }
            else
            {
                word_frequency[word] = 1;
            }

            word = "";
        }
    }
}

void punctuationCount(string &sentence)
{
    for (char &symbol : sentence)
    {
        if (end_punctuations.find(symbol) != end_punctuations.end() || punctuations.find(symbol) != punctuations.end())
        {
            if (punctuation_frequency.find(symbol) != punctuation_frequency.end())
            {
                punctuation_frequency[symbol] += 1;
            }
            else
            {
                punctuation_frequency[symbol] = 1;
            }
        }
    }
}

int32_t main()
{
    // Taking the Paragraph and Breaking it into sentences
    vector<string> paragraph;
    string unbroken_paragraph;
    getline(cin, unbroken_paragraph);
    string sentence = "";
    for (char &letter : unbroken_paragraph)
    {
        if (end_punctuations.find(letter) != end_punctuations.end())
        {
            paragraph.push_back(sentence + letter);
            sentence = "";
        }
        else
        {
            if (letter == ' ' && sentence.length() == 0)
                continue;
            else
                sentence += letter;
        }
    }

    for(auto& sentence : paragraph){
        cout << sentence << endl;
    }

    // Sentence Count
    cout << "Sentence Count is: " << paragraph.size() << endl;

    // Word & Punctuation count
    for (string &sentence : paragraph)
    {
        wordCount(sentence);
        punctuationCount(sentence);
    }

    // Total Word Count
    int word_ct = 0;
    for (auto &pair : word_frequency)
    {
        word_ct += pair.second;
    }

    cout << "Total Word Count is : " << word_ct << endl;

    // Unique Word Count

    int unique_word_ct = 0;
    for (auto &pair : word_frequency)
    {
        if (pair.second == 1)
        {
            unique_word_ct++;
        }
    }

    cout << "Unique Word Count is : " << unique_word_ct << endl;

    // Punctuation Count
    int punctuation_ct = 0;
    for (auto &pair : punctuation_frequency)
    {
        punctuation_ct += pair.second;
    }

    cout << "Total Punctuation Count is : " << punctuation_ct << endl;

    // Frequency Map of the Words
    int rows = word_frequency.size() / 3, ct = 1;
    for (auto &pair : word_frequency)
    {
        if (ct % 3 != 0)
        {
            cout << pair.first << " : " << pair.second << " | ";
        }
        else
        {
            cout << pair.first << " : " << pair.second << endl;
        }

        ct++;
    }

    return 0;
}