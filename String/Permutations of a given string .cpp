Input: ABC
Output:
ABC ACB BAC BCA CAB CBA
Explanation:
Given string ABC has permutations in 6 
forms as ABC, ACB, BAC, BCA, CAB and CBA .
  
  ````````

class Solution
{
	public:
	    void permute(string &s,int i,vector<string>&ans){
	        if(i==s.size()-1){
	            ans.push_back(s);
	            return;
	        }
	        for(int j=i;j<s.size();j++){
	            swap(s[i],s[j]);
	            permute(s,i+1,ans);
	            swap(s[i],s[j]);
	        }
	        return;
	    }
		vector<string>find_permutation(string s)
		{
		    // Code here there
		     vector<string>ans;
		     permute(s,0,ans);
		     sort(ans.begin(),ans.end());
		     return ans;
		}
};
