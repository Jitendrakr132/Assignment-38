#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list<int>l;

    l.push_back(2);

    list<int>::iterator L;

    for(L=l.begin();L!=l.end();L++)
        cout<<*L<<" ";
    cout<<endl;
    return 0;

}
