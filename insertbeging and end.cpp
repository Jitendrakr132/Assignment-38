#include<iostream>
#include<list>
using namespace std;
void display(list<int>L)
{
    list<int>::iterator it;
    for(it=L.begin();it!=L.end();it++)
        cout<<*it<<" ";
        cout<<endl;
}
int main()
{
    list<int>l1;

    l1.push_front(11);
      l1.push_back(60);
    cout<<"Begin and end element "<<endl;
    display(l1);

    return 0;
}
