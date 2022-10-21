//Sum of digits 

#include <iostream>
using namespace std;
int main()
{
	int n;
	int rem;
	int sum=0;
	
	cout<<"Enter a number : ";
	cin>>n;
	cout<<endl;
	while(n>0)
	{
		rem = n%10;
		n = n/10;
		sum = sum + rem;
		
	}
	cout<<sum;
	
   
   return 0;
}
