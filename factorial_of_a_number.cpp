
#include <iostream>
using namespace std;

int main() {
	
	int num,i;
     long int fact=1;
	cin>>num;
	if(num>=1&&num<=20)
	{
	    
	    for(i=1;i<=num;i++)
	    {
	        fact=fact*i;
	    }
	    
	    cout<<fact;
	}
	else
	{
	    cout<<"-1";
	}
	
	
	return 0;
}
