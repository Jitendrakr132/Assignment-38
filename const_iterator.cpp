#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<char>l;

    for(char i='A';i<='Z';++i)
    {
        l.push_back(i);
    }
  list<char>::const_iterator it;
  cout<<"list (clist) elements:"<<endl;
  for(it=l.begin();it!=l.end();++it)
  {
      cout<<*it<<' ';
  }
  cout<<endl;
  return 0;
}
