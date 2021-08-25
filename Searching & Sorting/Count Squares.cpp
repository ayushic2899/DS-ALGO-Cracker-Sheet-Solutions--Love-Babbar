Example 2:

Input :
N = 3
Output:
1
Explanation:
1 is the only Perfect Square
less than 3. So, the Output is 1.

``````

class Solution {
  public:
    int countSquares(int N) {
        
        int count=0;
        for(int i=1;i*i<N;i++){
            count++;
        }
        return count;
    }
 
};
