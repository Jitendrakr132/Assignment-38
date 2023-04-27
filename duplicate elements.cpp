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
    list<int>l={10,20,20,30,40,40,1,1,50};

    cout<<"list of elements"<<endl;
    display(l);


    l.unique();
    cout<<" List after removing consecutive duplicate elements"<<endl;
    display(l);
    return 0;

}
