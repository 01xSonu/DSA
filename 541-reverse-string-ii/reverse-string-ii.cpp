class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i=0;i<s.length()-1;i=i+2*k){
            int p=i;
            int e=min(i+k-1,(int)s.length()-1);
            while(p<e){
                swap(s[p],s[e]);
                p++;
                e--;
            }
                   


                    }
                    return s;

   
    }
};