#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
         int l=0;
        int h=n-1;
        int m=0;
        while(m<=h){
            if(a[m]==0){
                swap(a[l],a[m]);
                l++;
                m++;
            }
            else if(a[m]==1){
                m++;
            }
            else{
                swap(a[m],a[h]);
                h--;
            }
        }
    }
    
};
