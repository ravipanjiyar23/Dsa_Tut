#include <iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;


    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }



    // int arr2[n];

    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     for(int j=0;j<m;j++){
    //         sum+=arr[i][j];
    //     }
    //     arr2[i]=sum;
    // }



    











    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<arr[i][j]<<" ";
    //     } cout<<endl;
    // }

    // int maxElement = arr[0][0];  // Initialize maxElement as the first element
    // int minElement = arr[0][0];  // Initialize minElement as the first element

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         if (arr[i][j] > maxElement) {
    //             maxElement = arr[i][j];  // Update maxElement if a larger value is found
    //         }
    //         if (arr[i][j] < minElement) {
    //             minElement = arr[i][j];  // Update minElement if a smaller value is found
    //         }
    //     }
    // }

    // cout<<maxElement<<endl;


    // int target;
    // cin>>target;

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(arr[i][j]==target){
    //             cout<<"true"<<endl;
    //             break ;
    //         }
    //     }
    // }



    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }






    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }

        }
        cout<<endl;
    }





    


    return 0;
}