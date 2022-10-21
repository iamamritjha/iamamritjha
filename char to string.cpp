#include <iostream>
using namespace std;
int main()
{
	char j ;
    string 	i =" ";
	char ch_arr[]={'A','M','R','I','T','J','H','A'};
	
	for ( j = 0; j <sizeof( ch_arr ); j++ )
	{
		i = i + ch_arr[j];
	}
	cout<< i;
	
   
   return 0;
}
