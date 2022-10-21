#include <iostream>
using namespace std;
int main()
{
	int a, i,j;
	cout<<"Enter a number : ";
	cin>>a;
	cout<<endl;
	j=a/2;
	for(i=2; i<=j; i++)
	{
		if(a%i==0)
		{
			cout<<"Number is not prime";
		}
		else
		{
			cout<<"Number is prime";
			exit(0);
		}
	}
   
   return 0;
}
