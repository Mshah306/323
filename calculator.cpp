#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
    cout<<"enter any two"<<endl;
    cin>>a>>b;
    cout<<"enter +,-,*,/,%"<<endl;
    cin>>c;
    switch(c)
    {
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;
        case '%':
        cout<<a%b<<endl;
        break;
        default:
        cout<<"wrong choice"<<endl;
        break;
    }
    return 0;
}