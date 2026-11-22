class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }
            else if(s[i]==')' || s[i]==']' || s[i]=='}'){
                if(st.empty()){
                    return false;  //stack is empty can push close bracket
                }
                int ch=st.top();
                if(ch=='(' && s[i]==')' || ch=='{' && s[i]=='}' || ch=='[' && s[i]==']' ){
                    st.pop();
                }
                else{
                    return false; //order is not maintained
                }
                
            }
            

        }
        return st.empty();
        
    }
};