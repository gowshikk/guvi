#include <stdio.h>
#include <bits/stdc++.h> 
using namespace std; 
 
void freq(int arr[], int n) 
{ 
    map<int, int> freq_map; 
    for (int i = 0; i < n; i++) 
        freq_map[arr[i]]++; 
  int flag=0;
    for (auto x : freq_map) 
    {    if(x.second > 1)
        {    cout <<x.first<<" "; 
            flag=1;
        }
    }
    if(!flag)
        cout<<"unique";
    
} 
  
int main() 
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    freq(arr, n); 
    return 0; 
} 
