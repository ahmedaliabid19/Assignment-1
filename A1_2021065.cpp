#include <iostream>
#include <string>
#include "ConsoleApplication2.h"
using namespace std;

struct BOOK {
	int id;
	string bookname;
	string author;
	string isbn;
	int price;
	int pages;

	void emptyarr() 
	{
		id = 0;
		bookname = "";
		author = "";
		isbn = "";
		price = 0;
		pages = 0;
	}
	void printdetails() 
	{
		cout << "ID = " << id << endl;
		cout << "Book Name = " << bookname << endl;
		cout << "Author = " << author << endl;
		cout << "ISBN = " << isbn << endl;
		cout << "Price = " << price << endl;
		cout << "Pages = " << pages << endl;
	}
};

struct booklist 
{
	BOOK books[5];
	void EMPTYARR()
	{
		for (int i = 0; i < 5; i++)
		{
			books[i].emptyarr();
		}
	}

	void printbooks()
	{
		for (int i = 0; i < 5; i++)
			books[i].printdetails();

	}

	void addbook()
	{
		int i;
		cout << "Enter the index where you whant to enter  the book = ";
		cin >> i;
		if (books[i-1].id == 0)
		{
			books[i].id = i;
			cout << "enter name of the book= ";
			cin >> books[i - 1].bookname;
			cout << "enter author of the book = ";
			cin >> books[i - 1].author;
			cout << "enter ISBN of the bookk = ";
			cin >> books[i - 1].isbn;
			cout << "enter price of the book = ";
			cin >> books[i - 1].price;
			cout << "enter pages of the book = ";
			cin >> books[i - 1].pages;
		}

		else
		{
			char ans;
			cout << "A book already exists at this slot would you like to over write [Y/N] = ";
			cin >> ans;
			if (ans == 'Y' || ans == 'y')
			{
				books[i].id = i;
				cout << "enter name of the book= ";
				cin >> books[i - 1].bookname;
				cout << "enter author of the book = ";
				cin >> books[i - 1].author;
				cout << "enter ISBN of the bookk = ";
				cin >> books[i - 1].isbn;
				cout << "enter price of the book = ";
				cin >> books[i-1].price;
				cout << "enter pages of the book = ";
				cin >> books[i-1].pages;
			}
		}

	}
	
	void sorting(int x)
	{
		if (x == 0)
		{
			for (int i = 0; i < 5; i++)
			{
				BOOK temp;
				temp.emptyarr();

				for (int j = i + 1; j < 5; j++)
				{
					if (books[i].id > books[j].id)
					{
						temp = books[i];
						books[i] = books[j];
						books[j] = temp;
					}
				}
			}
			for (int i = 0; i < 5; i++)
			{
				books[i].printdetails();
			}
			/*printbooks();*/
		}

		else 
		{
			for (int i = 0; i < 5; i++)
			{
				BOOK temp;
				temp.emptyarr();

				for (int j = i + 1; j < 5; j++)
				{
					if (books[i].id > books[j].id)
					{
						temp = books[i];
						books[i] = books[j];
						books[j] = temp;
					}
				}
			}
			for (int i = 0; i < 5; i++)
			{
				books[i].printdetails();
			}
			/*printbooks();*/
		}
		

	}

};

struct STUDENT
{
	int id;
	string name;
	int rollno;

	void printdetails()
	{
		cout << "Student ID: " << id << endl;
		cout << "Student's Name: " << name << endl;
		cout << "Student Roll Number: " << rollno << endl;
		cout << endl;
	}
};

struct students 
{
	STUDENT los[5];

	void emptyarr()
	{
		for (int i = 0; i < 5; i++)
		{
			los[i].id = 0;
			los[i].name = "";
			los[i].rollno = 0;
		}
	}

	void printarr()
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "Student ID: " << los[i].id << endl;
			cout << "Student's Name: " << los[i].name << endl;
			cout << "Student Roll Number: " << los[i].rollno << endl;
		}
	}

	void add_student()
	{
		bool full = false;
		for (int i = 0; i < 5; i++)
		{
			if (los[i].id == 0)
			{
				los[i].id = i + 1;
				cout << "Enter Student Name: ";
				cin >> los[i].name;
				cout << "Enter Student Roll Number: ";
				cin >> los[i].rollno;
				full = false;
				break;
			}
			else
			{
				full = true;
			}
				

			if (full == true && i < 4)
			{
				cout << "ID " << i << "is full enter in " << i + 1 << endl;
			}
			else
				cout << " Array is full " << endl;
		}
	}

	void deletestd()
	{
		int id;
		cout << "Enter the id of user you want to delete = ";
		cin >> id;

		for (int i = 0; i < 5; i++)
		{
			if (los[i].id == id)
			{
				los[i].id = 0;
				los[i].name = "";
				los[i].rollno = 0;
				cout << "student is successfully deleted!!!..." << endl;
			}
		}
	}
};

int main()
{
	


	booklist books;
	students stds;
	books.EMPTYARR();
	stds.emptyarr();
	while (1)
	{
		int choice;
		cout << "..........MAIN MENU.........." << endl;
		cout << "1. Add New Student" << endl;
		cout << "2. Delete Existing Student" << endl;
		cout << "3. Show all Students" << endl;
		cout << "4. Add New Book" << endl;
		cout << "5. Delete Existing book" << endl;
		cout << "6. Show particular book" << endl;
		cout << "7. Show all Books" << endl;
		cout << "8. Sort books in Ascending order" << endl;
		cout << "9. Sort books in Descending Order" << endl;
		cout << "10. Exit" << endl << endl;
		cout << "enter your choice = ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			stds.add_student();
			break;
		case 2:
			stds.deletestd();
			break;
		case 3:
			stds.printarr();
			break;
		case 4:
			books.addbook();
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			books.printbooks();
			break;
		case 8:
			books.sorting(0);
			break;
		case 9:
			books.sorting(1);
			break;
		case 10:
			break;
		default:
			cout << "you have entered wrong choice  " << endl;
			break;

		}
		if (choice == 10)
		{
			break;
		}
	}

}