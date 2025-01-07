#include<bits/stdc++.h>
using namespace std;


// int n;

// void inverse(int i,int n,vector<int> &v,vector<int> &inverted){
// 	if(i>=n) return ;

// 	inverted[v[i]]=i;

// 	inverse(i+1,v,inverted);
// }
int main() {
	int n;
	cin>>n;

	vector<int> v(n);

	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	vector<int> inverted(n);

	for(int i=0;i<n;i++){
		inverted[v[i]]=i;
	}

	for(int i=0;i<n;i++){
		cout<<inverted[i]<<" ";
	} cout<<endl;
	




	return 0;
}