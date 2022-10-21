#include <iostream>
using namespace std;
int main()
{
	int n, rem, quo;
	int i=0;
	int temp;
	int cheak;
	cout<<"Enter a number to cheak : ";
	cin>>n;
	temp = n;
	cout<<endl;
	while(n>0)
	{
		rem = n%10;
		//i = (rem*rem*rem)+i;
		n = n/10;
		i = (rem*rem*rem)+i;
		
	}
	if(temp == i)
	{
		cout<<"Number is Armstrong";
	}
	else
	{
		cout<<"Number is not armstrong";
	}
    return 0;
}
