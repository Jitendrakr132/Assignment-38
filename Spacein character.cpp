#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<char>l;

    for(char i='A';i<='Z';++i)
    {
        l.push_back(i);
    }
    cout<<"List (clist)elements: "<<endl;
    for(char x:l)
        cout<<x<<' ';
    cout<<endl;
    return 0;
}
