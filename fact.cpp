//FACTORIAL PROGRAMME IN C++
//USING RECURSION AND LOOP

#include <iostream>
using namespace std;

int fact(int l)
{
	if(l<0)
	{
		return -1;
	}
	if(l==0)
	{
		return (1);
	}
	else
	{
	    return (l*fact(l-1));
    }
}
int main()
{
    int a, n;
    int s,l;
    s=1;
    int mul =1,value;
    int fact(int);
    cout<<"Enter a number : ";
    cin>>n;
   /* for(int i=1; i<=n; i++)
    {
   	    
   	    mul = mul *i;
    }
    cout<<"Value is : "<<mul;
    cout<<endl<<endl;
    
    */
    
    int ans = fact(n);
	cout<<"Value is : "<<ans;
    
    return 0;
}
