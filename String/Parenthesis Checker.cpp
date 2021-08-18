class Solution
{
    public:
   
    bool ispar(string x)
    {
         
        stack<int>s;
        int len=x.length();
        
        for(int i=0;i<len;i++){
            if(x[i]=='{' || x[i]=='(' || x[i]=='['){
                s.push(x[i]);
            }
            else if(x[i]=='}' || x[i]==')' || x[i]==']'){
                if(s.empty()){
                    return false;
                }
                else if(x[i]==')' && s.top() !='('){
                    return false;
                }
                else if(x[i]=='}' && s.top() !='{'){
                    return false;
                }
                else if(x[i]==']' && s.top() !='['){
                    return false;
                }
                else{
                    s.pop();
                }
            }
        }
        if(s.empty()){
            return true;
        }
        return false;
    }

};
