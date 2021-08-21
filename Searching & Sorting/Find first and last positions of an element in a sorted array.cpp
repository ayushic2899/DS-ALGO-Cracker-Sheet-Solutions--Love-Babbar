link-https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1#

````````


class Solution {
public:
    int firsto(vector<int>&nums,int target){
       int start=0;
        int end=nums.size()-1;
        int res=-1;
        while(start<=end){
           int mid=(start+end)/2;
            if(nums[mid] == target){
                res=mid;
                end=mid-1;
            }
            else if(target<nums[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return res;
    }
    
    int  secondo(vector<int>&nums,int target){
       int start=0;
        int end=nums.size()-1;
        int res=-1;
        while(start<=end){
           int mid=(start+end)/2;
            if(nums[mid] == target){
                res=mid;
                start=mid+1;
            }
            else if(target<nums[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
         return res;
    }
    
        
        
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int>ans;
       ans.push_back(firsto(nums,target));
       ans.push_back(secondo(nums,target));
       return ans;  
    }
};

 


 
    
