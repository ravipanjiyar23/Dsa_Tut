#include<bits/stdc++.h>
using namespace std;


int kth_max(vector<int> &v,int k){
    priority_queue<int> pq;

    for(int i=0;i<v.size();i++){
        pq.push(v[i]);
    }

    while(k-->1){
        pq.pop();
    }

    return pq.top();
}

int kth_min(vector<int> &v,int k){
    priority_queue<int,vector<int> , greater<int> > pq;

    for(int i=0;i<v.size();i++){
        pq.push(v[i]);
    }

    while(k-->1){
        pq.pop();
    }

    return pq.top();
}


int pivot(vector<int> &v){
    for(int i=1;i<v.size()-1;i++){
        if(v[i]>v[i+1] && v[i]>v[i-1]){
            return i;
        }
    }
    return -1;
}


void rotate(vector<int> &v){

    for(int i=0;i<v.size()-1;i++){
        swap(v[i],v[i+1]);
    }

}
int main(){
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    rotate(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


    // cout<<pivot(v)<<endl;;
    // int k;
    // cin>>k;



    // cout<<kth_max(v,k)<<endl;;
    // cout<<kth_min(v,k)<<endl;;

    // priority_queue<int> pq;

    // for(int i=0;i<n;i++){
    //     pq.push(v[i]);
    // }

    // int x = pq.top();

    // cout<<x<<endl;

    //2nd highest

    // int k;
    // cin>>k;

    // while(k-->1 && !pq.empty()){
    //     pq.pop();
    // }

    // int x = pq.top();

    // cout<<x<<endl;

    return 0;
}