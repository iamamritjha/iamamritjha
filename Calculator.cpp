#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;
int main()
{
	cout << "Select any operator from the calculator  " << endl  ;
	cout << " 1 . Addittion " << endl ;
	cout << " 2 . Substraction " << endl ;
	cout << " 3 . Multiplication " << endl  ;
	cout << " 4 . Division " << endl ;
	cout << " 5 . Square " << endl ;
	cout << " 6 . square root " << endl ;
	cout << " 7 . Cube " << endl ;
	cout << " 8 . Cube root "<< endl  ;
	cout << " 9 . Exit " << endl ;
	
	int task ;
	
	cin >> task ;
	
    
	
    switch ( task )
	{
		case 1 :
			
			{
				int n ;
			    int sum = 0;
			    cout << "Enter how many number you want to add : " ;
			    cin >> n ;
			
			    cout << endl ;
			
			    for ( int i = 1 ; i <= n ; i++ )
		     	{
				
		    		cin>> i ;
		    		sum += i;
				
		    	}
			
		    	cout << " Sum of these number is "<< sum ;
			
			    break ;
			}
		
		case 2 :
			
			{
				int a , b ;
			    cout << " Enter number for substracting " ;
			    cout << "Enter greater number first then smaller " ;
		    	cin >> a >> b ;
		    	int c = a - b;
		    	break ;
			}
			
		case 3 :
		
		    {
				
			    int n , mul = 1 ;
		    	cout << "Enter how many number you want to multiply : " ;
		    	cin >> n ;
		    	cout << endl ;
		    	cout << "______________________________" ;
		    	cout << endl ;
		    	for ( int i = 0; i < n ; i++ )
		    	{
		    		mul *= mul ;
		    	}
		    	cout << endl ;
		    	cout << " The product of these number are "<< mul ;
		    	break;
		
	    	}
			
		case 4 :
			
            {
            	int a , b , quo , rem ;
		    	cout << "Enter two number for division " ;
		    	cin >> a >> b ;
		        cout << endl ;
		    	quo = a / b ;
		    	rem = a % b ;
		    	cout << "The quotient is "<< quo << "and the remainder is "<< rem ;
		    	break ;
			}
			
		case 5 :
			
			{
				int n , l ;
			    cout << "Enter a number : ";
		    	cin >> n ;
		    	cout << endl ;
			    l = n * n ;
		    	cout << "The square of "<< n <<" is "<<l ;
		    	break ;
			}
			
		case 6 :
			
			{
				int n , j ;
			    cout << "Enter a number to find squareroot : " ;
		     	cin >> n ;
		    	cout << endl ;
		    	j = sqrt(n);
		    	cout << "The squareroot of "<<n << " is "<<j ;
		    	break ;
			}
			
		case 7 :
			{
				int n , l;
				cout << "Enter a number for cube : ";
				cin >> n ;
				cout << endl ;
				l = n * n * n ;
				cout << "Cube of "<<n <<" is "<<l ;
			}
			
		default :
			
		    	cout << " Entered wrong number " ;
			
	}
    
   return 0;
	
}
