#include<ctype.h>
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	
   char str1[100000],str2[100000];
   int map1[26]={0};
   int map2[26]={0};
   cin>>str1;
   int i,count=0;
   for(i=0;str1[i];i++)
   {
       map1[str1[i]-'a']++;
   }
   int s1=strlen(str1);
   cin>>str2;
   for(i=0;str2[i];i++)
   {
       map2[str2[i]-'a']++;
   }
   int s2=strlen(str2);
   if(s1==s2)
   {
        for(i=0;i<=25;i++)
        {
            if(map1[i]!=map2[i])
                count++;
        }
        if((count/2)>=2)
            cout<<"no";
        else
            cout<<"yes";
   }
   else
   {
       cout<<"-1";
   }
	
	//cout<<"GfG!";
	return 0;
}
