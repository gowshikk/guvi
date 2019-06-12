#include <stdio.h>
#include <bits/stdc++.h> 
using namespace std; 
 
void find_large(vector<int> &V,int n) 
{ 
    sort(V.begin(),V.end());
    for(int i=V.size()-1;i>=0;i--)
    {
        cout<<V[i];
    }
    
} 
  
int main() 
{ 
    int n;
    cin>>n;
    std::vector<int> V ;
    int value;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        V.push_back(value);
    }
    find_large(V,n);


    return 0; 
} 
