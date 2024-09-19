/*Q.No 1. Bookshop Management System
File handling has been effectively used for each feature of this project
Operations
1. Add Book Records:
2. Show Book Records:
3. Check Availability:
4. Modify Book Records:
5. Delete Book Records: */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Book {
    int id;
    string t;
    string a;
    int q;

    void display() {
        cout<<"ID:"<<id<<",Title:"<<t<<",Author:"<<a<<",Quantity:"<<q<< endl;
    }
};

void addBook();
void showBooks();
void checkAvailability();
void modifyBook();
void deleteBook();

int main() {
    int choice;
    do {
        cout << "\nBookshop Management System\n";
        cout << "1. Add Book Records\n";
        cout << "2. Show Book Records\n";
        cout << "3. Check Availability\n";
        cout << "4. Modify Book Records\n";
        cout << "5. Delete Book Records\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addBook(); break;
            case 2: showBooks(); break;
            case 3: checkAvailability(); break;
            case 4: modifyBook(); break;
            case 5: deleteBook(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}

void addBook() {
    ofstream outFile("bookstore.txt", ios::app);
    Book book;
    cout << "Enter Book ID: ";
    cin >> book.id;
    cin.ignore();
    cout << "Enter Book Title: ";
    getline(cin, book.t);
    cout << "Enter Author Name: ";
    getline(cin, book.a);
    cout << "Enter Quantity: ";
    cin >> book.q;

    outFile << book.id << endl;
    outFile << book.t << endl;
    outFile << book.a << endl;
    outFile << book.q << endl;
    outFile.close();
    cout << "Book added successfully!\n";
}

void showBooks() {
    ifstream inFile("bookstore.txt");
    Book book;
    cout << "\nBook Records:\n";
    while (inFile >> book.id) {
        inFile.ignore();
        getline(inFile, book.t);
        getline(inFile, book.a);
        inFile >> book.q;
        inFile.ignore();
        book.display();
    }
    inFile.close();
}

void checkAvailability() {
    ifstream inFile("bookstore.txt");
    Book book;
    int id;
    cout << "Enter Book ID to check availability: ";
    cin >> id;

    bool found = false;
    while (inFile >> book.id) {
        inFile.ignore();
        getline(inFile, book.t);
        getline(inFile, book.a);
        inFile >> book.q;
        inFile.ignore();
        
        if (book.id == id) {
            found = true;
            cout << "Book is available. Quantity: " << book.q<< endl;
            break;
        }
    }
    if (!found) {
        cout << "Book not found!\n";
    }
    inFile.close();
}

void modifyBook() {
    fstream file("bookstore.txt", ios::in | ios::out);
    Book book;
    int id, pos = -1;

    cout << "Enter Book ID to modify: ";
    cin >> id;

    while (file >> book.id) {
        file.ignore();
        getline(file, book.t);
        getline(file, book.a);
        file >> book.q;
        file.ignore();

        if (book.id == id) {
            pos = file.tellg();
            cout << "Enter new Title: ";
            cin.ignore();
            getline(cin, book.t;
            cout << "Enter new Author: ";
            getline(cin, book.a);
            cout << "Enter new Quantity: ";
            cin >> book.q;

            file.seekp(pos - sizeof(Book) * 3);
            file << book.id << endl;
            file << book.t << endl;
            file << book.a << endl;
            file << book.q << endl;
            cout << "Book modified successfully!\n";
            break;
        }
    }
    if (pos == -1) {
        cout << "Book not found!\n";
    }
    file.close();
}

void deleteBook() {
    ifstream inFile("bookstore.txt");
    ofstream outFile("book.txt");
    Book book;
    int id;

    cout << "Enter Book ID to delete: ";
    cin >> id;

    bool found = false;
    while (inFile >> book.id) {
        inFile.ignore();
        getline(inFile, book.t);
        getline(inFile, book.a);
        inFile >> book.q;
        inFile.ignore();

        if (book.id == id) {
            found = true;
            cout << "Book deleted successfully!\n";
            continue;
        }
        outFile << book.id << endl;
        outFile << book.t << endl;
        outFile << book.a << endl;
        outFile << book.q<< endl;
    }
    if (!found) {
        cout << "Book not found!\n";
    }

    inFile.close();
    outFile.close();
    remove("bookstore.txt");
    rename("book.txt", "bookstore.txt");
}
















































































































































































































































