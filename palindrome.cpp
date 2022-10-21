//GET NUMBER FROM USER 
/*HOLD THE NUMBER IN TEMPORARY VARIABLE
  REVERSE THE NUMBER 
  COMPARE THE TEMP AND SUM VARIABLE 
  IF BOTH NUMBER ARE EQUAL "NUMBER ARE PALINDROME" ELSE "NOT PALINDRME"
*/
#include <iostream>  
using namespace std;  
int main()  

{
	int n;
	int sum =0;
	cout<<"Enter a number to cheak palindrome : ";
	cin>>n;
	int temp= n;
	while (n>0)
	{
	
	    int r = n %10;
	    sum = (sum*10)+r;
	    n   = n/10;
   	}
	if(temp==sum)
	{
		cout<<"Number is palindrome";
	}
	else
	    cout<<"Number not palindrome";
	return 0;
}  
