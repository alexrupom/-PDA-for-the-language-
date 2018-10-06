#include "stacktype.cpp"
#include <iostream>

using namespace std;
bool balance(string str)
{
   StackType<char> s1;
   for(int i=0;i<str.length();i++)
   {

       if(str[i]=='0')
       {
           s1.Push(str[i]);
           continue;
       }
       if(s1.IsEmpty())
        return false;
       if(str[i]=='1')
       {
           s1.Pop();
       }
   }
   return (s1.IsEmpty());
}
int main()
{
    char c;
    string str;
    do {
    cout << "Enter a string: ";
    cin >> str;

    cout << "You entered: " << str << endl;
    if(balance(str))
        cout << "accepted"<<endl;
    else
        cout <<"not accepted"<<endl;
    cout << "Press Y to Continue"<<endl;
    cin >> c;

    }
    while(c=='y');
}

