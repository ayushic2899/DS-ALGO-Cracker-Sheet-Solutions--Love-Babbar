Example 1:


Input: S="GeeksforGeeks"
Output: skeeGrofskeeG

`````


char* reverse(char *S, int len)
{
    stack<char>s;
     for(int i=0; i<=len-1; i++)
    {
         s.push(S[i]);
    }
    for(int i=0; i<=len-1; i++)
    {
     S[i]=s.top();
     s.pop();
     }
    return S;
}
