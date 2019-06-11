#include<ctype.h>
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	
	char str[1000000];
	cin.get(str, 1000000);
	cout<<(char)toupper(str[0]);
	for(int i=1;str[i];i++)
	{
	    if(str[i]==' ')
	    {
	        cout<<str[i];
	        str[i+1]=toupper(str[i+1]);
	    }
	    else
	    {
	        cout<<str[i];
	    }
	}
	
   return 0;
}
