link-https://practice.geeksforgeeks.org/problems/value-equal-to-index-value1330/1#

Example 1:

Input: 
N = 5
Arr[] = {15, 2, 45, 12, 7}
Output: 2
Explanation: Only Arr[2] = 2 exists here.
  
  `````````````


class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	   
	    vector<int>ans;
	    for(int i=0;i<n;i++){
	        if(arr[i]==i+1){
	           ans.push_back(arr[i]);
	        }
	    }
	    return ans;
	}
};
