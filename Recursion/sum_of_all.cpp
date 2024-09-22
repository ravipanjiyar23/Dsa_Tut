#include<bits/stdc++.h>
using namespace std;


int sum(int n){
    //base case
    if(n==1){
        return 1;

    }
    // logic
    int prev_sum = sum(n-1);

    //final ans
    return n+prev_sum;
}

int main(){

    int n;
    cin>>n;

    int x=sum(n);
    cout<<x<<endl;
    return 0;
}