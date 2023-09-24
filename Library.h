#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Library
{
private:
    class Book
    {
    private:
        string name;
        string author;
        int year;
        bool availability;

    public:
        Book(string, string, int);
        string getName();
        string getAuthor();
        int getYear();
    };
    vector<Book*> books;
public:
    void addBook(string name, string author, int year);
    int searchBook(string, string);
    void deleteBook(string, string);
    void display();
};
