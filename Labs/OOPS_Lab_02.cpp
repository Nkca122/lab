#include <iostream>
using namespace std;

class Student
{
private:
    int marks[5];
    string subjects[5];
    int ct = 0;

public:
    void add(string sub, int mark)
    {
        if (ct < 5)
        {
            marks[ct] = mark;

            subjects[ct++] = sub;
        }
    }

    void result()
    {
        cout << "Subject |\t" << "Marks |\t" << "Grade\n";
        for (int i = 0; i < ct; i++)
        {
            char grade;
            int mark = marks[i];

            if (mark >= 90)
                grade = 'A';
            else if (mark >= 80)
                grade = 'B';
            else if (mark >= 70)
                grade = 'C';
            else if (mark >= 60)
                grade = 'D';
            else
                grade = 'F';

            cout << subjects[i] << " \t" << mark << " \t" << grade << endl;
        }
    }
};

int main()
{
    Student s;
    for(int i = 0; i < 5; i++){
        int mark; string sub;
        cin >> sub >> mark;

        s.add(sub, mark);
    }

    s.result();
}