Example 1:

Input:
N = 9, K = 3
arr[] = 1 2 3 1 4 5 2 3 6
Output: 
3 3 4 5 5 5 6 
Explanation: 
1st contiguous subarray = {1 2 3} Max = 3
2nd contiguous subarray = {2 3 1} Max = 3
3rd contiguous subarray = {3 1 4} Max = 4
4th contiguous subarray = {1 4 5} Max = 5
5th contiguous subarray = {4 5 2} Max = 5
6th contiguous subarray = {5 2 3} Max = 5
7th contiguous subarray = {2 3 6} Max = 6
  
  
  ```````


class Solution
{
  public:
    
    vector <int> max_of_subarrays(int *nums, int n, int k)
    {
         
        vector<int> ans;
        list<int> l;
        int i=0;
        int j=0;
        
        while (j<n)
        {
            while(l.size()>0 && l.back() <nums[j])
            {
                l.pop_back();
            }
            l.push_back(nums[j]);
            if ((j-i+1)<k)
                j++;
            else if (j-i+1==k)
            {
                ans.push_back(l.front());
                if (l.front()==nums[i])
                    l.pop_front();
                i++;
                j++;
            }
            
        }
        return ans;
    }
};
