link-https://www.geeksforgeeks.org/split-the-binary-string-into-substrings-with-equal-number-of-0s-and-1s/

`````

#include <bits/stdc++.h>
using namespace std;
 
int maxSubStr(string str,int n){
	int count1 =0,count2=0;
	int count3=0;
	for(int i=0;i<n;i++){
		if(str[i]=='0'){
			count1++;
		}
		else{
			count2++;
		}
		if(count1 == count2){
			count3++;
		}
	}
	if(count3==0){
		return -1;
	}
	return count3;
}
int main(){
	string str = "0100110101";
    int n = str.length();
 
    cout << maxSubStr(str, n);
    return 0;
}
