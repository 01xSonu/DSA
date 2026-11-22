class Solution {
public:
    bool checkString(string s) {
        if(s.length()==1){
            return true;
        }
        int i=0;
        int j=1;
        int cnt=0;
        while(j<s.length()){
            if(s[i]=='b' && s[j]=='a'){
                return false;
            }
            if(s[i]==s[j]){
                i++;
                j++;
            }
            else if(s[i]!=s[j]){
                cnt++;
                i++;
                j++;
            }
        }
        if(cnt>1){
            return false;
        }
        else{
            return true;
        }
        
    }
};