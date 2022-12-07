#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["Jayesh"] = 98;
    marksMap["Jayes"] = 59;
    marksMap["Jaye"] = 2;

    marksMap.insert({{"jay",45},{"ja",65}});

    map<string,int> :: iterator iter;
    for(iter = marksMap.begin();iter!=marksMap.end();iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }

    cout<<"the size of the marksMap : "<<marksMap.size()<<endl;
    cout<<"the max size : "<<marksMap.max_size()<<endl;
    cout<<"the empty return value : "<<marksMap.empty()<<endl;
    return 0;
}