#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr1[n];

    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }


    int z=0;

    int m = sqrt(n);


    int arr2[m][m];

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            arr2[i][j]=arr1[z];
            z++;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr2[i][j]<<" ";
        } cout<<endl;
    }




    return 0;
}