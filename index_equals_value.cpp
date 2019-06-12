#include <stdio.h>
#include <bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
    int n,flag=0;
    cin>>n;
    std::vector<int> V ;
    int value;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        V.push_back(value);
    }
    
    for(int i=0;i<n;i++)
    {
        if(i==V[i])
        {    cout<<V[i]<<" ";
            flag=1;
        }
    }
    if(!flag)
        cout<<"-1";


    return 0; 
} 
