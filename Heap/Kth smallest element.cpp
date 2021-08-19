 link-https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
Example 1:

Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given 
array is 7.
  
  ````````



class Solution{
    public:
    
    int kthSmallest(int arr[], int l, int r, int k) {
       priority_queue<int>maxh;
       for(int i=1;i<=r;i++){
           maxh.push(arr[i]);
           if(maxh.size()>k){
               maxh.pop();
           }
       }
       return maxh.top();
    }
};
