#include<iostream>
#include<list>
#include<iterator>
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
    list<int>l1={10,20,20,30,40,40,1,1,50};
    list<int >l2={3,4,5,6,7,8};

    cout<<"First list element"<<endl;
    display(l1);

    cout<<"Second list element "<<endl;
    display(l2);

    l1.merge(l2);
    cout<<"List merge after elements"<<endl;
    display(l1);
    return 0;
}
