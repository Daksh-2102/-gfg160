// C++ Program to left rotate the array by d positions by rotating one element at a time

#include <bits/stdc++.h>
using namespace std;

void display(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void rotateArr(int n,int  arr[], int d) {
  
    for (int i = 0; i < d; i++) {
      
        int first = arr[0];
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = first;
    }
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
    int d ;
    cout<<"Enter d : ";
    cin>>d;

    rotateArr(n,arr, d);
    display(n,arr);
   
    return 0;
}