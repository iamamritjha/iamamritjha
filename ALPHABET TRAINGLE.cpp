//ALPHABET TRAINGLE

#include <iostream>
using namespace std;
int main()
{
	int i;
	int j;
	char ch='A';
	for (int k =1; k<=5; k++)
	{
		ch = 'A';
		for (i=5; i>=k; i--)
		{
			cout<<" ";
		}
		
		for (j = 1; j<= k; j++)
		{
			
			cout<<ch++;
			
		}
		
		for (int l =1; l<k; l++)
		{
			
			cout<<ch;
			ch++;
		}
		cout<<endl;
		
		
	}
   
   return 0;
}
