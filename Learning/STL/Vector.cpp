#include<iostream>
#include<vector>

using namespace std;

template<class t>
void display(vector<t> &v)
{
    // cout<<"displaying the vector : "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main()
{
    vector <int> vec1;  //zero size vector.
    // vector <char> vec2(4);  //4-element charector vector.
    // vector <char> vec3(vec2);  //cahrector vector from vec2.
    // vector <int> v(6,3);    //6-element integer vector of 3s

    // display(vec1);
    // display(vec2);
    // display(vec3);
    // display(v);

    int element,size;
    cout<<"enter the size of the vector : ";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"enter an element to add to this vector : ";
        cin>>element;
        vec1.push_back(element);
    }
    cout<<"after puchback : "<<endl;
    display(vec1);
    
    cout<<"elements to be iterated : 566 at index iter+0." <<endl;
    vector<int> ::iterator iter = vec1.begin();
    //vector.insert(iterator+index,numberOfCopies,element);
    vec1.insert(iter+0,1,566); 
    display(vec1);
    
    cout<<"the size of vec1 : "<<vec1.size()<<endl;

    for(int i=0;i<vec1.size();i++){
        vec1.pop_back();
    }
    cout<<"after pop back : "<<endl;
    display(vec1);
    return 0;
}