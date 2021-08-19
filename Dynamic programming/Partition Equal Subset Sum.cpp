link-https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1#

`````

class Solution{
public:
    bool subset(int nums[],int sum,int n){
            sum=sum/2;
            
            bool t[n+1][sum+1];
            for(int i=0;i<n+1;i++){
                for(int j=0;j<sum+1;j++){
                   if(i==0){
                       t[i][j]=false;
                   } 
                   if(j==0){
                       t[i][j]=true;
                   }
                }
            }
            for(int i=1;i<n+1;i++){
                for(int j=1;j<sum+1;j++){
                   if(nums[i-1]<=j){
                       t[i][j]=t[i-1][j-nums[i-1]] || t[i-1][j];
                   } 
                   else{
                       t[i][j]=t[i-1][j];
                   }
                 }
            }    
            return t[n][sum];
    }
    int equalPartition(int N, int arr[])
    {
         
        int sum=0;
        for(int i=0;i<N;i++){
            sum=sum+arr[i];
        }
        if(sum%2 !=0){
            return 0;
        }
        else{
            return subset(arr,sum,N);
        }
         
         
    }
};
