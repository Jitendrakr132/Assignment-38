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
    list<int>l1;
    list<int>l2;
    l1.assign(5,100);
    cout<<"Size of list "<<l1.size()<<endl;
    cout<<"Element of list : ";
    display(l1);

    int arr[]={10,20,30,40};
   l2.assign(arr,arr+4);
  cout<<"Size of list "<<l2.size()<<endl;
  cout<<"Element of list 3 :";
   display(l2);

    return 0;


}


