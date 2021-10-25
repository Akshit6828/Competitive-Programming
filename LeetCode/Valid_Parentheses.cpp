//https://leetcode.com/problems/valid-parentheses/
#include<bits/stdc++.h>

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        if(s.length()&1)
            return false;
        
        for(char c:s){
            if(c=='{'||c=='('||c=='[')
                st.push(c);
            else{
                // brac-> `)`
                if(c == ')'){
                if(!st.empty()&&st.top() == '(')
                st.pop();
                else
                    st.push(c);
                }
                
                // brac = `}`
                else if(c=='}'){
                if(!st.empty()&&st.top() == '{')
                st.pop();
                else
                    st.push(c);
                    
                }
                else{
                    if(!st.empty()&&st.top() == '[')
                    st.pop();
                    else
                    st.push(c);
                }
            
                
            }  
        }
        
        if(st.empty())
            return true;
        else
            return false;
    }
    
};
