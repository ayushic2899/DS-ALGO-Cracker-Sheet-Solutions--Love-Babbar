 Example 1:

Input:
N = 5
arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.
  
 link-https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

``````
 
 
 class Solution{
    public:
    
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            maxi=max(sum,maxi);
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
        
    }
};
