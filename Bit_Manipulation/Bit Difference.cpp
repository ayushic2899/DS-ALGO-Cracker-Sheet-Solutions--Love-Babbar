class Solution{
    public:
    int countBitsFlip(int a, int b){
        int n=a^b;    
        int c=0;
        while(n!=0){
            n=n&(n-1);
            c++;  
        }
             
        return c;
        
    }
};
