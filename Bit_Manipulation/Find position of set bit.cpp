 class Solution {
  public:
    int findPosition(int n) {
        
        if(n<=0)
            return -1;
         
        int i=1;
        int res=0;
        int c=0;
        while(n){
            int a=n%2;
            if(a==1){
               res=i;
               c+=1;
            }
                 
            if(c>1){
                return -1;
            }
                
            n=n>>1; 
            i+=1; 
        }
            
        return res;
    }
};
