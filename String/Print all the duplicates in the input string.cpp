#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	map<char,int>mp;
	for(int i=0;i<s.length();i++){
		mp[s[i]]++;
	}
	for(auto it:mp){
		if(it.second>1){
			cout<<it.first<<" "<<it.second<<endl;
		}
	}
	return 0;
}
