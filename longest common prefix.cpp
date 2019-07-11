#include <iostream>
#include<bits/stdc++.h> 
#include<string.h>
using namespace std;
struct prefix
{
    string name;
};

string findprefix(string one,string two)
{
    string longestprefix;
    int ind,ctr;
    for(ind=0,ctr=0;ind<one.length()&&ctr<two.length();ind++,ctr++)
    {
        if(one[ind]!=two[ctr])
        {
            break;
            
        }
        longestprefix.push_back(one[ind]);
    }

    return longestprefix;
}


int main() {
    
    int test;
    cin>>test;
   struct prefix n[test];
    for(int ind=0;ind<test;ind++)
    {
        cin>>n[ind].name;
    }
    
    string result=n[0].name;
    for(int ind =1;ind<test;ind++)
    {
        result=findprefix(result,n[ind].name);
        //cout<<result<<endl;
    }
    cout<<result;
	return 0;
}
