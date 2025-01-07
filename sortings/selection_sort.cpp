#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[5] = {5,4,3,2,1};

    for (int i = 0; i <=n-2; i++) {
        // int min = arr[i];
        int mini=i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[mini]) {
                // min = arr[j];
                mini=j;
            }
        }

        // cout<<min<<endl;

        swap(arr[i],arr[mini]);
        for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    } cout<<endl;

        cout<<"nxt"<<endl;
    }


    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }



    return 0;
}