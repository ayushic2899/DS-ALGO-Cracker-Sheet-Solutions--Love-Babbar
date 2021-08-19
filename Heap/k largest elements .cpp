link-https://practice.geeksforgeeks.org/problems/k-largest-elements4206/1

Input:
N = 5, K = 2
Arr[] = {12, 5, 787, 1, 23}
Output: 787 23
Explanation: 1st largest element in the
array is 787 and second largest is 23.
  
  `````````



class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	     
	    vector<int>v;
	    priority_queue<int,vector<int>,greater<int>>minh;
	    for(int i=0;i<n;i++){
	        minh.push(arr[i]);
	        if(minh.size()>k){
	            minh.pop();
	        }
	    }
	    while(minh.size()>0){
	        v.push_back(minh.top());
	        minh.pop();
	    }
	    reverse(v.begin(),v.end());
	    return v;
	}

};
