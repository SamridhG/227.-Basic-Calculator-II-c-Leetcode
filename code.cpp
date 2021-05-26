class Solution {
public:
    int check(char A)
    {
        if(A=='+' || A=='-')
        {
            return 1;
        }
        else
            return 2;
    }
    {
        if(z=='+')
                    {
                        int d=A.top();
                        A.pop();
                        int c=A.top();
                        A.pop();
                        A.push(c+d);
                    }
                    else if(z=='-')
                    {
                        int d=A.top();
                        A.pop();
                        int c=A.top();
                        A.pop();
                        A.push(c-d);
                    }
                    else if(z=='/')
                    {
                        int d=A.top();
                        A.pop();
                        int c=A.top();
                        A.pop();
                        A.push(c/d);
                    }
                    else if(z=='*')
                    {
                        int d=A.top();
                        A.pop();
                        int c=A.top();
                        A.pop();
                        A.push(c*d);
                    }
    }
    int calculate(string s) {
        stack<int>A;
        stack<char>B;
        for(int i=0;i<s.size();i++)
        {
           
            if(s[i]==' '){}
            if(isdigit(s[i]))
            {
                if(i-1>=0 && isdigit(s[i-1]))
                {
                    int q=A.top()*10 + (s[i]-48);
                    A.pop();
                    A.push(q);
                }
                else
                {
                    A.push(s[i]-48);
                }
            }
            else if(s[i]==' '){}
            else
            {
                 m:
                if(B.empty())
                {
                    B.push(s[i]);
                }
                else if(check(s[i])>check(B.top()))
                {
                    B.push(s[i]);
                }
                else
                {
                    char z= B.top();
                    B.pop();
                    
                    goto m;
                }
            }
        }
        while(!B.empty())
        {
           char z= B.top();
                    B.pop();
                    if(z=='+')
                    {
                        int d=A.top();
                        A.pop();
                        int c=A.top();
                        A.pop();
                        A.push(c+d);
                    }
                    else if(z=='-')
                    {
                        int d=A.top();
                        A.pop();
                        int c=A.top();
                        A.pop();
                        A.push(c-d);
                    }
                    else if(z=='/')
                    {
                        int d=A.top();
                        A.pop();
                        int c=A.top();
                        A.pop();
                        A.push(c/d);
                    }
                    else if(z=='*')
                    {
                        int d=A.top();
                        A.pop();
                        int c=A.top();
                        A.pop();
                        A.push(c*d);
                    } 
        }
        return A.top();
    }
};
