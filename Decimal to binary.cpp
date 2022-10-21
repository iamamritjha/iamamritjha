// DECIMAL TO BINARY 

#include <iostream>
using namespace std;
int main()
{
	int i , n;
	cout<<"Enter a number ";
	cin>>n;
	cout<<endl;
	int m;
	int rem , quo;
	quo = n;
	m = (quo / 2);
	cout<<"Binary number of decimal "<<quo <<" is ";
	for(i=1; i<=m; i++)
	{
		rem = quo % 2;
		cout <<rem;
		quo = quo / 2;
		
	}
	
	cout<<endl;
/*	
	cout<<" Change the digit 1 insted of 0 and 0 instead of 1";
	cout<<endl;
	cout<<"After changing the digit";
	
	for(i=1; i<=m; i++)
	{
		
		rem = quo % 2;
		
		/*if (rem==1)
		{
			cout<<"0";
		}
		else if (rem== 0)
		{
			cout<<"1";
		}
		   

		quo = quo / 2;
			if (rem==1)
		{
			cout<<"0";
		}
		else if (rem== 0)
		{
			cout<<"1";
		}
		
	}
	*/
   
   return 0;
}
