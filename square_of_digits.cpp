#include<ctype.h>
#include<bits/stdc++.h>
#include<string.h>
#include <iostream>
using namespace std;

int main() {
	
	long long int num,res=0;int rem;
	cin>>num;
	while(num)
	{
	    rem=num%10;
	    res=res+(rem*rem);
	    num/=10;
	}
	cout<<res;
   return 0;
}
