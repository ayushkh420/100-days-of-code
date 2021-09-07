//  To find the maximum and mininmum number in array.

#include<iostream>
#include<climits>    /* FOR LINE NO. 18 AND 19 */
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n]; 

   for(int i =0; i<n; i++)
   {
      cin>>arr[i];
   }

   int maxno = INT_MIN;   /*we can initialize by 0 but it is better approach */
   int minno = INT_MAX;

   for (int i = 0; i < n ; i++)
   {
      maxno = max(maxno,arr[i]);  /*MAX AND MIN ARE BUILT IN FUNCTION */
      minno = min(minno,arr[i]);
   }
   cout<<maxno<<" "<<minno<<endl;
   
    return 0;
}