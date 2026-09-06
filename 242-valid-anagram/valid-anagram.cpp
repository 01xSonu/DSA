class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        map<char,int>mpp1;
        map<char,int>mpp2;

        for(int i=0;i<s.length();i++){
            mpp1[s[i]]++;
        }
        for(int j=0;j<t.length();j++){
            mpp2[t[j]]++;
        }
        if(mpp1==mpp2){
            return true;
        }
        else{
            return false;
        }
      
            

    }
};