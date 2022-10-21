#include <iostream>
using namespace std;
int main()
{
/*	
	int m, n, i, j;
	cout<<"Enter the number of row : ";
	cin>>m;
	cout<<"Enter the number of column : ";
	cin>>n;
	int a[m][n];
	int b[m][n];
	int k[m][n];
	cout<<"Enter the element of first matrix ";
	for ( i = 0; i < m; i++ )
	{
		for ( j = 0; j < n; j++ )
		{
			cin>>a[i][j];
		}
		cout<<endl;
		
	}
	cout<<"Enter the element of second matrix ";
	for ( i = 0; i < m; i++ )
	{
		for ( j = 0; j < n; j++ )
		{
			cin>>b[i][j] ;
		}
		cout<<endl;
	}
	cout<<"After multiple of both matrix new matrix is ";
	for(i = 0; i < m; i++ )
	{
		for(int k=0; k<n; k++)
		{
		
	       int mul[i][k]=0;
		   for( j = 0; j < n; j++ )
		   {
			
		    	mul[i][j] += a[i][j]*b[i][j];
		    }
		cout<<endl;
	}
	for(i = 0; i < m; i++ )
	{
		for( j = 0; j < n; j++ )
		{
			
			cout<<k[i][j];
		}
		cout<<endl;
	}
	
*/	


int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
cout<<"enter the number of row=";    
cin>>r;    
cout<<"enter the number of column=";    
cin>>c;    
cout<<"enter the first matrix element=\n";    
for(i=0;i<r;i++)    
   {    
    for(j=0;j<c;j++)    
        {    
           cin>>a[i][j];  
        }    
    }    
    cout<<"enter the second matrix element=\n";    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
            cin>>b[i][j];    
        }    
    }    
    cout<<"multiply of the matrix=\n";    
    for(i=0;i<r;i++)    
       {    
        for(j=0;j<c;j++)    
           {    
            mul[i][j]=0;    
            for(k=0;k<c;k++)    
               {    
                mul[i][j]+=a[i][k]*b[k][j];    
               }    
            }    
        }    
        //for printing result    
        for(i=0;i<r;i++)    
        {    
            for(j=0;j<c;j++)    
            {    
            cout<<mul[i][j]<<" ";    
            }    
        cout<<"\n";    
        }    
 
   return 0;
}
