#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    int id;
    bool isIssued;

    Book() {
        id = -1;
        title = "";
        author = "";
        isIssued = false;
    }

    Book(int bookId, string bookTitle, string bookAuthor) {
        id = bookId;
        title = bookTitle;
        author = bookAuthor;
        isIssued = false;
    }
};

class Library {
private:
    static const int MAX_BOOKS = 100;
    Book books[MAX_BOOKS];
    int bookCount;

public:
    Library() : bookCount(0) {}
    
    void addBook(int id, string title, string author) {
        if (bookCount < MAX_BOOKS) {
            books[bookCount++] = Book(id, title, author);
        } else {
            cout << "Library is full! Cannot add more books." << endl;
        }
    }
    
    void issueBook(int id) {
        for (int i = 0; i < bookCount; i++) {
            if (books[i].id == id && !books[i].isIssued) {
                books[i].isIssued = true;
                cout << "Book issued successfully." << endl;
                return;
            }
        }
        cout << "Book not available or already issued." << endl;
    }
    
    void returnBook(int id) {
        for (int i = 0; i < bookCount; i++) {
            if (books[i].id == id && books[i].isIssued) {
                books[i].isIssued = false;
                cout << "Book returned successfully." << endl;
                return;
            }
        }
        cout << "Invalid return request." << endl;
    }
    
    void displayBooks() {
        cout << "\nLibrary Books:\n";
        for (int i = 0; i < bookCount; i++) {
            cout << "ID: " << books[i].id << ", Title: " << books[i].title << ", Author: " << books[i].author << ", Issued: " << (books[i].isIssued ? "Yes" : "No") << endl;
        }
    }
};

int main() {
    Library library;
    library.addBook(1, "The Great Gatsby", "F. Scott Fitzgerald");
    library.addBook(2, "1984", "George Orwell");
    library.addBook(3, "To Kill a Mockingbird", "Harper Lee");
    
    library.displayBooks();
    
    library.issueBook(2);
    library.displayBooks();
    
    library.returnBook(2);
    library.displayBooks();
    
    return 0;
}
