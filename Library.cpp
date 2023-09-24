#include "Library.h"


Library::Book::Book(string name, string author, int year)
{
	this->name = name;
	this->author = author;
	this->year = year;
}
string Library::Book::getName()
{
	return name;
}
string Library::Book::getAuthor()
{
	return author;
}
int Library::Book::getYear()
{
	return year;
}
// Додавання нової книги до бібліотеки з заданими параметрами.
void Library::addBook(string name, string author, int year)
{
	books.push_back(new Book(name, author, year));
}
// Пошук книги в бібліотеці за назвою та автором.
// Повертає індекс першої знайденої книги або -1, якщо книгу не знайдено.
int Library::searchBook(string name, string author)
{
	for (int i = 0; i < books.size(); i++)
	{
		if (books[i]->getName() == name && books[i]->getAuthor() == author)
		{
			return i;
		}
	}
	return -1;
}
// Видалення книги з бібліотеки за назвою та автором.
void Library::deleteBook(string name, string author)
{
	int bookIndex = searchBook(name, author);

	if (bookIndex == -1)
	{
		return;
	}

	books.erase(books.begin() + bookIndex);
}
// Виведення інформації про всі книги у бібліотеці.
void Library::display()
{
	for (Book* b : books)
	{
		cout << b->getName() << " : " << b->getAuthor() << " : " << b->getYear() << " : " << endl;
	}
}