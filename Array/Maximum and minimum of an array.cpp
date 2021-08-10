#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int min=INT_MAX;
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
		}
		if(arr[i]>max){
			max=arr[i];
		}
	}
	cout<<"MAX element is ="<<max<<endl;
	cout<<"MIN element is ="<<min;
	return 0;
}
