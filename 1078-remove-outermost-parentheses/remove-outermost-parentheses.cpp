class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt1=0;
        string temp="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                if(cnt1!=0){
                    temp=temp+'(';
                }
                cnt1++;
                
            }
            else if(s[i]==')'){
                cnt1--;
                if(cnt1!=0){
                    temp=temp+')';
                }
                
            }
            

        }
        return temp;

        
    }
};