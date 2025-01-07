#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int arr[100];

    int t=-1;

    void push(int x){
        t++;
        arr[t]=x;
    }

    void pop(){
        if(t>=0){
            t--;
        }
        else cout<<"overflow"<<endl;
    }

    int top(){
        if(t!=-1) return arr[t];
    }



};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<s.top()<<endl;

    s.pop();

    cout<<s.top()<<endl;


    return 0;
}