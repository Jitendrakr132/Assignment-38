#include<iostream>
#include<list>
#include<iterator>
using namespace std;

int main()
{
    list<string>itr;

    list<string>::iterator st;
    string str;

    while(true)
    {
        cout<<"Enter string (\"EXIT\" to quit): ";
        getline(cin,str);
        if(str=="EXIT")
            break;
        itr.push_back(str);
    }
  cout<<"List element are "<<endl;
  for(st=itr.begin();st!=itr.end();st++)

    cout<<*st<<endl;
  return 0;
}
