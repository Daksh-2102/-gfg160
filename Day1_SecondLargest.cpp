// C++ program to find second largest element in an array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



// function to find the second largest element
int getSecondLargest(int n ,int arr[]) {

    int max = arr[0];
    int smax = -1;
        
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }
        else if(arr[i]!=max && arr[i]>smax){
            smax=arr[i];
        }
    }
   return smax;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Second largest number = "<<getSecondLargest(n,arr);
    return 0;
}