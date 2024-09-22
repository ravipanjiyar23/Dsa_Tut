#include<bits/stdc++.h>
using namespace std;

int main(){

    // int arr[5];

    // vector<int> v;

    // int n;
    // cin>>n;

    // vector<int> v(n);

    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }


    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // } cout<<endl;


    // v.push_back(6);
    // v.push_back(7);


    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // } cout<<endl;

    // cout<<v.size()<<endl;


    // v.pop_back();

    // cout<<v.size()<<endl;

    int n;
    cin>>n;

    vector<vector<int> > v(n,vector<int>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        } cout<<endl;
    }

    

    return 0;
}