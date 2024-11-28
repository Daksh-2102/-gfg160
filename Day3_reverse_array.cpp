// C++ Program to reverse an array using temporary array

#include <iostream>
#include <vector>
using namespace std;

void display(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void reverseArray(int n,int arr[]) {
    
    vector<int> temp(n);
  
    for(int i = 0; i < n; i++)
        temp[i] = arr[n - i - 1];
  
    for(int i = 0; i < n; i++)
        arr[i] = temp[i];
}

int main() {
    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"Enter the elements of array : ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    reverseArray(n,arr);
    display(n,arr);
    
    return 0;
}