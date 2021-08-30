link-https://practice.geeksforgeeks.org/problems/middle-of-three2926/1#

Example 1:

Input:
A = 978, B = 518, C = 300
Output:
518
Explanation:
Since 518>300 and 518<978, so 
518 is the middle element.
  
  ```````````````

class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        if(A>B && B>C){
            return B;
        }
        else if(A>C && C>B){
            return C;
        }
        else if(B>A && A>C){
            return A;
        }
        else if(C>A && A>B){
            return A;
        }
        else if(B>C && C>A){
            return C;
        }
        else if(A<B && B>C){
            return A;
        }
        else if(A>B && B<C){
            return A;
        }
        else{
            return B;
        }
    }
};
