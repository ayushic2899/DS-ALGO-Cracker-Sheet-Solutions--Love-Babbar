link-https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1

`````````

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	     
	    int res=-1;
	    for(int col=0;col<m;col++){
	        for(int row=0;row<n;row++){
	            if(arr[row][col]==1){
	                return row;
	            }
	        }
	    }
	    return res;
	}

};
