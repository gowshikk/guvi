#include<ctype.h>
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	
	long int start,end;
	cin>>start;
	cin>>end;
	int i,j;
	bool prime[end+1];
	memset(prime,true,(end+1)*sizeof(bool));
	if(start==end||start>end)
	{
	    cout<<"-1";
	}
	else{
	for(i=2;i*i<=end;i++)
	{
	    if(prime[i]==true)
	    {
	        for(j=i*i;j<=end;j+=i)
	        {
	            prime[j]=false;
	        }
	    }
	}
	for(i=start;i<=end;i++)
	{
	    if(prime[i])
	        cout<<i<<" ";
	}
	}
   return 0;
}
