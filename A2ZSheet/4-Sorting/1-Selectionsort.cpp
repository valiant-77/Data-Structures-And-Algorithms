//TC=O(n^2)
//SC=O(1)

#include<bits/stdc++.h>

using namespace std;
void selection_sort(int arr[], int n) {
  // selection sort
  for (int i = 0; i < n - 1; i++) 
  {
    int mini = i;
    for (int j = i+1 ; j <= n-1; j++) 
    {
      if (arr[j] < arr[mini]) 
      {
        mini = j;
      }
    }
    swap(arr[i],arr[mini]);
  }

  cout << "After selection sort: " << "\n";
  for (int i = 0; i < n; i++) 
  {
    cout << arr[i] << " ";
  }
  cout << "\n";

}
int main() {
  int n;
  cin>>n;
  int arr[n];
  
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
   cout << "Before selection sort: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  selection_sort(arr, n);

  cin.get();
  return 0;
}