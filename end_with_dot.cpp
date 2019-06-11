#include<ctype.h>
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	
   char str[100];
   cin>>str;
   if(isalpha(str[0]))
   {
       cout<<str<<".";
   }
	else
	{
	    cout<<"-1";
	}
	
	//cout<<"GfG!";
	return 0;
}
