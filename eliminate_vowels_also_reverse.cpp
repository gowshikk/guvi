#include<ctype.h>
#include<bits/stdc++.h>
#include<string.h>
#include <iostream>
using namespace std;

int main() {
	
	int num;
	string str;
	cin>>num;
	cin>>str;
	int i;
	for(i=num-1;i>=0;i--)
	{
	    if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
	    {
	        //do nothing
	   }
	   else
	   {
	       cout<<str[i];
	   }
	}
	
	
	return 0;
}
