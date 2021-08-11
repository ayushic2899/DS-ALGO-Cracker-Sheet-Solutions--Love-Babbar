class Solution:
    def countAndSay(self, n: int) -> str:
        if n==1:
            return "1"
        s="11"
        if n==2:
            return s
        
        for i in range(3,n+1):
            s+="$"
            c=1
            res=""
            for j in range(1,len(s)):
                if s[j-1]==s[j]:
                    c+=1
                else:
                    res+=str(c)+s[j-1]
                    c=1
            s=res
        
        return s
                    
            
 
            
        
