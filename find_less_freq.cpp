#include <stdio.h>
#include <bits/stdc++.h> 
using namespace std; 
 
void find_less_freq(int arr[], int n) 
{ 
    map<int, int> freq_map; 
    for (int i = 0; i < n; i++) 
        freq_map[arr[i]]++; 
    for (auto x : freq_map) 
    {    if(x.second == 1)
        {    
            cout <<x.first<<" "; 
        }
    }

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
    find_less_freq(arr, n); 
    return 0; 
} 
