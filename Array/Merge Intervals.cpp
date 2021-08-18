link-https://leetcode.com/problems/merge-intervals/

Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6]

````


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        int start=intervals[0][0];
        int end=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
           if(intervals[i][0]<=end){
              end=max(end,intervals[i][1]);
           }
            else{
                ans.push_back({start,end});
                start = intervals[i][0];
                end= intervals[i][1];         
            }
        }
        ans.push_back({start,end});
        return ans;
    }
}; 
