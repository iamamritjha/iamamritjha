#include <iostream>
using namespace std;
int main()
{
	int i,j,k,l,n;
	
	cout<<"Enter the range = ";
	cin>>n;
	
	for(i =1; i<= n; i++)
	{
		for(j=i; j<=n-1; j++)
		{
			cout<<" ";
		}
		for(k=1; k<=i; k++)
		{
			cout<<k;
		}
		for(l=i-1; l>=1; l--)
		{
			cout<<l;
		}
	cout<<endl;
	}
   
   return 0;
}
