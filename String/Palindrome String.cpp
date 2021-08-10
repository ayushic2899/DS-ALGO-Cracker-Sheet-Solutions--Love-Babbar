  
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    // Your code goes here
	    int i=0;
        int j=S.length()-1;
        int flag=1;
        while(i<j){
            if(S[i]==S[j]){
                flag=1;
                i++;
                j--;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag==1){
            return 1;
        }
        else{
            return 0;
        }
	}

};
