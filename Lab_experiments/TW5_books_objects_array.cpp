#include <iostream>
#include <string>
#include <cstring>
#include <conio.h>

using namespace std;

class books
{
public:
    int stock;
    char author[20], bookname[20], publisher[20];
    float price;
    void loadbooks();
    void display();
    friend void search(books, int);
};

void books ::loadbooks()
{
    cout << "\n-------------------------------\n"
         << endl;
    cout << "Enter book name : ";
    cin >> bookname;
    cout << "Enter author name : ";
    cin >> author;
    cout << "Enter publisher name : ";
    cin >> publisher;
    cout << "Enter price : ";
    cin >> price;
    cout << "Enter stock present : ";
    cin >> stock;
}

void books ::display()
{
    cout << "\n-------------------------------\n"
         << endl;
    cout << "Name of book : " << bookname << endl;
    cout << "Author name : " << author << endl;
    cout << "Publisher name : " << publisher << endl;
    cout << "price of the book : " << price << endl;
    cout << "Stock present : " << stock << endl;
}

void search(books b[], int n)
{
    int ch;
    char bname[20], aname[20];
    cout << "Enter name of the book : ";
    cin >> bname;
    cout << "Enter name of the author : ";
    cin >> aname;
    for (int i = 0; i < n; i++)
    {
        cout <<endl<<b[i].bookname;
        if ((strcmp(bname, b[i].bookname) == 0) && (strcmp(aname, b[i].author) == 0)) // need only char constants to compare
        {
            cout << "\n-------------------------------\n";
            cout << "Name of book : " << b[i].bookname << endl;
            cout << "Author name : " << b[i].author << endl;
            cout << "Publisher name : " << b[i].publisher << endl;
            cout << "price of the book : " << b[i].price << endl;
            cout << "Stock present : " << b[i].stock << endl;
            break;
        }
        else
        {
            cout << " Book is not present..." << endl;
            //break;
        }
    }
}

int main()
{
    int ch, n;
    books b[10];
    do
    {
        cout << "\n-------------------------------\n"
             << endl;
        cout << "1.Load Books.\n2.Display available books.\n3.Search.\n4.exit\n";
        cout << "Enter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter number of books : ";
            cin >> n;
            for (int i = 0; i < n; i++)
                b[i].loadbooks();
            break;

        case 2:
            cout << "\nDisplaying available book list : ";
            for (int i = 0; i < n; i++)
                b[i].display();
            break;

        case 3:
            cout << "Searching for books : ";
            search(b, n);
            break;

        case 4:
            exit(0);

        default:
            cout << "invalid choice......" << endl;
            break;
        }
    } while (1);
}