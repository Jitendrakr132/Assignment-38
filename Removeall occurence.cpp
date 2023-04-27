#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int>l={30,11,33,11,20,40,50,11};

    list<int>::iterator it;
    cout<<"Element of list"<<endl;
    for(it=l.begin();it!=l.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    l.remove(11);
    cout<<"Remove after list elements"<<endl;
    for(it=l.begin();it!=l.end();it++)
            cout<<*it<<" ";
    cout<<endl;
    return 0;


}
