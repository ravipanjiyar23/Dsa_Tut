// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5]={3,4,2,5,6};

//     for(int i=1;i<5;i++){
//         int temp = arr[i];
//         int j=i-1;
//         while(j>=0){
//             if(arr[j]>temp){
//                 arr[j+1]=arr[j];
//             }
//             else break;
//             j--;
            
            
//         }

//         arr[j+1]=temp;
//     }

//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     } cout<<endl;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; 
    int left = low;      
    int right = mid + 1;   

    

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i-low];
    }

}

void merge_sort(vector<int> &a,int low, int high)
{
	if(low>=high)
	{
		return ;
	}
	int mid=(low+high)/2;
	merge_sort(a,low,mid);
	merge_sort(a,mid+1,high);
	merge(a,low,mid,high);
}

int main(){
    // int n;
	// cin>>n;
	// vector<int> a(n);
    vector<int> a = {5,4,3,2,1};
	
	// for(int i=0;i<n;i++)
	// {
	// 	cin>>a[i];
	// }
	merge_sort(a,0,4);
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
}