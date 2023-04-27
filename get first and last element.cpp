#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l1={10,30,20,50};
    cout<<"First element "<<l1.front()<<endl;
    cout<<"Second element "<<l1.back()<<endl;
    return 0;
}
