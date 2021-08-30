link-https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1#

Example 1:

Input:
N = 4, K = 6
arr[] = {1, 5, 7, 1}
Output: 2
Explanation: 
arr[0] + arr[1] = 1 + 5 = 6 
and arr[1] + arr[3] = 5 + 1 = 6.
  
  ````````````````


class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<n;i++){
            if(mp.find(k-arr[i]) != mp.end()){
                count+=mp[k-arr[i]];
            }
            mp[arr[i]]++;
        }
        return count;
    }
};
