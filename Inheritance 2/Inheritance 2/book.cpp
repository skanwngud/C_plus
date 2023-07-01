// Book, EBook Ŭ���� ����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

class Book
{
private:
	char * title;
	char * isbn;
	int price;

public:
	Book(const char * name, const char * serial, int value)
		: price(value)
	{
		title = new char[strlen(name) + 1];
		strcpy(title, name);

		isbn = new char[strlen(serial) + 1];
		strcpy(isbn, serial);
	}

	void ShowBookInfo()
	{
		std::cout << "����: " << title << std::endl;
		std::cout << "ISBN: " << isbn << std::endl;
		std::cout << "����: " << price << std::endl;
	}

	~Book()
	{
		delete[]title;
		delete[]isbn;
	}
};

class EBook: public Book
{
private:
	char * DRMKey;

public:
	EBook(const char * name, const char * serial, int value, const char * key)
		: Book(name, serial, value)
	{
		DRMKey = new char[strlen(key) + 1];
		strcpy(DRMKey, key);
	}

	void ShowEBookInfo()
	{
		ShowBookInfo();
		std::cout << "����Ű: " << DRMKey << std::endl;
	}

	~EBook()
	{
		delete[]DRMKey;
	}
};

int main(void)
{
	Book book("���� cpp", "555-12345-890-0", 20000);
	book.ShowBookInfo();

	std::cout << std::endl;

	EBook ebook("���� cpp Ebook", "555-123456-890-1", 10000, "fdx123dfs");
	ebook.ShowEBookInfo();

	return 0;
}