#include<iostream>
using namespace std;
int main()
{
	int a,b,i;
	cin>>a>>b;
	for(i=0;i<b;i++)
	{
		a=a*a;
		a%=1000;
	}
	cout<<a;
}
