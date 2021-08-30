link-https://practice.geeksforgeeks.org/problems/common-elements1132/1

Example 1:

Input:
n1 = 6; A = {1, 5, 10, 20, 40, 80}
n2 = 5; B = {6, 7, 20, 80, 100}
n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
Output: 20 80
Explanation: 20 and 80 are the only
common elements in A, B and C.
  
  ```````````


class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int>ans;
             unordered_map<int,int>mp1,mp2,mp3;
             for(int i=0;i<n1;i++){
                 mp1[A[i]]++;
             }
              for(int i=0;i<n2;i++){
                 mp2[B[i]]++;
             }
              for(int i=0;i<n3;i++){
                 mp3[C[i]]++;
             }
             for(int i=0;i<n1;i++){
                 if(mp1[A[i]] && mp2[A[i]] && mp3[A[i]]){
                     ans.push_back(A[i]);
                     mp1[A[i]]=0;
                 }
             }
             return ans;
        }

};
