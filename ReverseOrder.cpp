#include<iostream>
#include<list>
#include<iterator>
using namespace std;

int main()
{
    list<int>x={2,3,4,5,67};

    list<int>::iterator l;

    for(auto l=x.rbegin();l!=x.rend();l++)
        cout<<*l<<" ";
    cout<<endl;
    return 0;

}
