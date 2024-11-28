// C++ Program to move all zeros to end using temporary array

#include <bits/stdc++.h>
using namespace std;

void display(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void pushZerosToEnd(int n,int arr[]) {
    vector<int> temp(n);

    int j = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0)
            temp[j++] = arr[i];
    }

    while (j < n) {
        temp[j++] = 0;
    }

    for (int i = 0; i < n; i++)
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

    pushZerosToEnd(n,arr);
    display(n,arr);
    return 0;
}