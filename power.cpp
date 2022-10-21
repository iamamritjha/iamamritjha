#include <iostream>
using namespace std;

power()
{
	int a, b, c=1,i;
	cout<<"Enter a number which you want to square or cube or anything : ";
	cin>> a ;
	cout<<endl;
	cout<<"Enter want you want to do : ";
	cin>> b ;
	cout<<endl;
	for( i =1; i<=b; i++)
	{
		
		c = a * c;
	}
	return c;
}
int main()
{
	int j = power();
	cout<<"Value : "<< j <<endl;
   
   return 0;
}
