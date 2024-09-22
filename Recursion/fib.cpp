#include<bits/stdc++.h>
using namespace std;


int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int a = fib(n-1);
    int b = fib(n-2);
    

    return a+b;
}

int main(){


    int n;
    cin>>n;


    fib(n);

    for(int i=0;i<n;i++){
        int x = fib(i);
        cout<<x<<" ";
    } cout<<endl;
    return 0;
}