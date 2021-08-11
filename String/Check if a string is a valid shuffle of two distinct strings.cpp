#include<bits/stdc++.h>
using namespace std;

int main(){
	 string str1 = "xy", str2 = "12";
	 string result="x1y2";
	 int n1=str1.length();
	 int n2=str2.length();
	 int n3=result.length();
	 if((n1+n1) != n3){
	 	cout<<"No";
	 }
	 else{
	 	int i=0,j=0,k=0;
	 	int flag=0;
	 	while(k<n3){
	 		if(i<n1 && str1[i]==result[k]){
	 			i++;
			}
			else if(j<n2 && str2[j]==result[k]){
				j++;
			}
			else{
				flag=1;
				break;
			}
			k++;
		}
		
		if(i<n1 && j<n2){
			cout<<"No";
		}
		else{
			cout<<"yes";
		}
	 }
	 return 0;
}
