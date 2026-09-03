class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        string temp="";
        while(i!=s.length() && j!=t.length()){
            if(s[i]==t[j]){
                temp=temp+s[i];
                i++;
                j++;
            }
            else if(s[i]!=t[j]){
                j++;
            }
        }
        if(s==temp){
            return true;
        }
        else{
            return false;
        }
      

    }
};