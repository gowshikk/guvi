#include<ctype.h>
#include<bits/stdc++.h>
#include<string.h>
#include <iostream>
using namespace std;

int main() {
	
	char str[50];
	while((cin>>str))
	{
	    if(strcmp(str,"Saturday")==0 || strcmp(str,"saturday")==0 || strcmp(str,"Sunday")==0 || strcmp(str,"sunday")==0)
	        cout<<"yes";
	   else
	    cout<<"no";
	   cout<<endl;
	}
   return 0;
}
