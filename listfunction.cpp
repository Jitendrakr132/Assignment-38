#include<iostream>
#include<list>
#include<iterator>
using namespace std;
 void display(list<int>L)
{
    list<int>::iterator lt;
    for(lt=L.begin();lt!=L.end();lt++)
        cout<<*lt<<endl;

}
int main()
{
    list<int >l;
    if(l.empty())
        cout<<"List is empty "<<endl;
    else
        cout<<"List is not empty"<<endl;

    l.push_front(10);
    l.push_front(13);
    l.push_front(30);
    l.push_back(59);
    l.push_back(60);
    l.push_back(100);
    cout<<"List is push_front and push_back "<<endl;
    display(l);


    list<int>::iterator itl;
    itl=l.begin();
    l.insert(itl,20);
    itl++;
    l.insert(itl,15);
    l.insert(itl,19);
    cout<<" after Insert list element"<<endl;
    display(l);

    cout<<"Size of list "<<l.size()<<endl;

    l.pop_front();
    display(l);

    l.sort();
    cout<<"Sort after list "<<endl;
    display(l);
    return 0;
}
