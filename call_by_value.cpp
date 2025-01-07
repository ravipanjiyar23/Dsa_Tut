#include<bits/stdc++.h>
using namespace std;

void update(int x,vector<int> &v){
    v[3]=x;
}

int main(){
    vector<int> v = {1,2,3,4,5};


    update(6,v);

    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}