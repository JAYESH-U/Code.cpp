#include<iostream>
#include<list>

using namespace std;

void disply(list<int> &l){
    list<int> ::iterator iter;
    for(iter = l.begin();iter!=l.end();iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
}

int main()
{
    list<int> l1;   //list of zero length.
    l1.push_back(7);
    l1.push_back(1);
    l1.push_back(12);
    l1.push_back(9);
    l1.push_back(5);
    l1.push_back(9);
    // list<int> :: iterator iter1;
    // iter1 = l1.begin();
    // cout<<*iter1<<" ";
    // iter1++;
    // cout<<*iter1<<" ";
    cout<<"l1 : ";
    disply(l1);

    // // sorting the list.
    // cout<<"after sorting l1 : ";
    // l1.sort();
    // disply(l1);

    // // removing the elements from the list.
    // cout<<"pop back : "<<endl;
    // l1.pop_back();
    // disply(l1);
        
    // cout<<"pop front : "<<endl;
    // l1.pop_front();
    // disply(l1);

    // cout<<"remove(9) : "<<endl;
    // l1.remove(9);
    // disply(l1);

    list<int> l2(3); //empty list of size 7.
    list<int> :: iterator iter2;
    iter2 = l2.begin();
    *iter2 = 45;
    iter2++;
    *iter2 = 50;
    iter2++;
    *iter2 = 55;
    iter2++;
    cout<<"l2 : ";
    disply(l2);

    // // merging l1 with l2.
    // l1.merge(l2);
    // cout<<"l1 after merging with l2 and sorting : ";
    // l1.sort();
    // disply(l1);
    // return 0;

    // // reversing the list.
    // cout<<"reversing the list l1 : ";
    // l1.reverse();
    // disply(l1);
}