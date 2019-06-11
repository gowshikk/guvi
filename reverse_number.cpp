
#include <iostream>
using namespace std;

int main() {
	
   long int rem,num,res=0;
	cin>>num;
	if(num>=1)
	{
	    while(num)
        {
            rem=num%10;
	        res=(res*10)+rem;
	         num/=10;
        }
        cout<<res;
	}
	else
	{
	    cout<<"-1";
	}
	
	//cout<<"GfG!";
	return 0;
}
