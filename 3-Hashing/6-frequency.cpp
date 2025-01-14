#include <bits/stdc++.h>


using namespace std;

void freq(int n,int arr[])
{
    
    
      unordered_map<int, int> map;
    for(int i=0;i<n;i++)
    {
           map[arr[i]]++;
    }
  

  
    int maxFreq = 0, minFreq = n;
    int maxEle , minEle;

    
    for (auto it : map) {
        int count = it.second; 
        int element = it.first;

        
        if (count > maxFreq) {
            maxEle = element;
            maxFreq = count;
        }

        
        if (count < minFreq) {
            minEle = element;
            minFreq = count;
        }
    }

   
    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
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
    
    freq(n,arr);

    return 0;
}
