class Solution {
public:
    string minWindow(string s, string t) {
        map<char,int>mpp;
        for(int i=0;i<t.length();i++){
            mpp[t[i]]++;
        }
        int l=0,r=0,cnt=0;
        int minlen=INT_MAX;
        int startind=-1;
        while(r<s.length()){
            if(mpp[s[r]]>0){
                cnt++;
            }
            mpp[s[r]]--;
            while(cnt==t.length()){
                mpp[s[l]]++;
                if((r-l+1)<minlen){
                    minlen=(r-l+1);
                    startind=l;
                }
                
                
                if(mpp[s[l]]>0){
                    cnt--;
                }
                l++;

            }
            r++;

        }
        if(minlen==INT_MAX){
            return "";
        }
        return s.substr(startind,minlen);
        
    }
};