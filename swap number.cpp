//SWAP NUMBER WITHOUT USE OF THIRD VERIABLE

#include <iostream>
using namespace std;
int main()
{
	int a; int b;
	cout<<"Enter the value of a and b : ";
	cin>>a>>b;
	
	a = a+b;
	b = a-b;
	a = a-b;
	cout<<a<<endl<<b;
   
   return 0;
}
