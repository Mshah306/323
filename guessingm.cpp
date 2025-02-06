#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,c=0;
	const int lowerbound=50;
	const int upperbound=1000;
	float time;
    int	b=rand()% (upperbound-lowerbound+1)+lowerbound;
	cout<<setw(70)<<"welcome to number guessing game"<<endl;
	cout<<setw(75)<<"guess the number in between 1 to 1000"<<endl;
	cout<<setw(60)<<"you the five attempt"<<endl;
	cout<<"attempt="<<c<<endl;
	cin>>a;
    for(c=1;c<=5;c++)
	{
	if(a<b)
	{
		cout<<setw(60)<<"please enter greater number"<<endl;
		cout<<"attempt="<<c<<endl;;
		cin>>setw(100)>>a;
		cout<<setw(100)<<time;
	}
    
	else if(a==b)
    {
    	cout<<setw(60)<<"congratulation you guess the number";
    	cout<<setw(100)<<b<<endl;
    	break;
	}
	else
	{
	cout<<setw(60)<<"please enter smaller number"<<endl;
	cout<<"attempt="<<c<<endl;
	cin>>a;
	}
	}
	cout<<setw(100)<<b<<endl;
return 0;
}