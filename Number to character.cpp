#include <iostream>
using namespace std;
int main()
{
	int n;
	int rem;
	cout<<"Enter a number = ";
	cin>>n;
	cout<<endl;
	
	int q, sum=0 ;
	
	while ( n > 0 ) 
	{
		rem = n % 10;
		sum = sum * 10 + rem;
		n = n / 10;
	}
	
	n = sum;
	
	while ( n > 0 )
	{
		rem = n % 10;
		
		switch ( rem )
		{
		
		        
			case 1 :
			    cout<<"One ";
			    break ;
			    
			case 2 :
			    cout<<"Two ";
				break ;
				
			case 3 :
				cout<<"Three ";
				
			case 4 :
			    cout<<"Four ";
			    break ;
			    
			case 5 :
				cout<<"Five ";
				break ;
				
			case 6 :
				cout<<"Six ";
				break ;
				
			case 7 :
			 	cout<<"Seven ";
			    break ;
			    
			case 8 :
				cout<<"Eight ";
			    break ;
			    
			case 9 :
			    cout<<"Nine ";
			    break ;
			    
			case 0 :
		    	cout<<"Zero ";
		        break ;    
			    
			default :
			    cout<<"Something Wrong ";  
				break ;  
	    }
	    
	    n = n / 10;
					
		
	}
	
   
   return 0;
}
