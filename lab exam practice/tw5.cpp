#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class books
{
public:
    char name[20], author[20], publisher[20];
    int stock;
    float price;
    void loadbooks();
    void displaybooks();
    friend int search(books, int);
};

void books ::loadbooks()
{
    cout << "-----------------------------------" << endl;
    cout << "enter the details of the books : " << endl;
    cout << "book name : ";
    cin >> name;
    cout << "author name : ";
    cin >> author;
    cout << "publisher name : ";
    cin >> publisher;
    cout << "price : ";
    cin >> price;
    cout << "stock : ";
    cin >> stock;
}

void books ::displaybooks()
{
    cout << "------" << endl;
    cout << "name : " << name << endl;
    cout << "author : " << author << endl;
    cout << "publisher : " << publisher << endl;
    cout << "price : " << price << endl;
    cout << "stock : " << stock << endl;
}

int search(books b[], int n)
{
    cout << "-------------------------------------------" << endl;
    cout << "enter the book name and author to search : " << endl;
    char bname[30], aname[30];
    cout << "book name : ";
    cin >> bname;
    cout << "author name : ";
    cin >> aname;
    for (int i = 0; i < n; i++)
    {
        if ((strcmp(bname, b[i].name) == 0) && (strcmp(aname, b[i].author) == 0))
        {
            cout << "------" << endl;
            cout << "name : " << b[i].name << endl;
            cout << "author : " << b[i].author << endl;
            cout << "publisher : " << b[i].publisher << endl;
            cout << "price : " << b[i].price << endl;
            cout << "stock : " << b[i].stock << endl;
            return 0;
        }
    }
    cout<<"\nThis book is not available....\n"<<endl;
}

int main()
{
    int n, ch;
    books b[10];
    while (1)
    {
        cout << endl
             << endl
             << "enter the choice : "
             << endl
             << "1.load books.\n2.display books.\n3.search\n4.exit\n:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "enter the number of books : ";
            cin >> n;
            for (int i = 0; i < n; i++)
                b[i].loadbooks();
            break;
        case 2:
            cout << "\n\nthe available books are : "<<endl;
            for (int i = 0; i < n; i++)
                b[i].displaybooks();
            break;
        case 3:
            search(b, n);
            break;
        case 4:
            exit(0);
        }
    }
    return 0;
}