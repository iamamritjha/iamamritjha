#include <iostream>
using namespace std;
int main()
{
	int i, j, k, l, n;
	cout<<"Enter the number of rows = ";
	cin>>n;
	
	for ( i = 1 ; i <= n ; i++ )
	{
		int a = 0;
		int b = 1;
		
		cout<<b <<" ";
		for ( j = 1; j < i; j++)
		{
			int c = a + b;
			cout<< c <<" " ;
			a = b;
			b = c;
		}
		cout<<endl;
	}
   
   return 0;
}
