// selection sort

#include<iostream>
using namespace std;

void selectionsort(int a[],int n)
{
    for(int i = 0; i < n-1; i++){
        // Assume the current (ith) is min 
        int minindex = i;
        // Min element in rem part
        for(int j=i+1; j<n; j++){
            if(a[j] < a[minindex])
            {
               minindex = j;
             }
            
        }
        swap(a[minindex],a[i]);
    }
}
int main(){
    int a[]={5,4,1,2,3};
    int n=5;
    selectionsort(a,n);
    for (int i = 0; i < 5; i++)
    {
       cout<<a[i]<<" ";
    }
    
    return 0;
}