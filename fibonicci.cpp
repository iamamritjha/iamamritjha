//GET FIBONICCI USING RECURSION AND LOOPING

#include <iostream>
using namespace std;

int sum(int n)
{
	static int n1 =0, n2=1, n3;
	if(n>0)
	{
	
	    int n3;
	    n3 = n1+ n2;
	    n1=n2;
	    n2=n3;
	    cout<<n3<<" ";
	    sum(n-1);
    }
	
}
int main()
{
   int a=0, b=1, c, n;
   cout<<"Enter the number of element : ";
   cin>>n;
   cout<<"Fibonnici series : ";
   cout<<"0"<<" "<<"1"<<" ";
  /*
  for(int i=2; i<=n; i++)
   {
   	    int j = a+b;
   	    cout<<j<<" ";
   	    a = b;
   	    b = j;
   }
   */
   sum(n-2 );
   return 0;
}
