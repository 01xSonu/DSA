class Solution {
public:
    bool isValid(string word) {
        int cnt=0;
        int snt=0;
        if(word.length()>=3){
            for(int i=0;i<word.length();i++){
                if(!isalnum(word[i]))
                return false;
            
                    if(tolower(word[i])=='a' || tolower(word[i])=='e'|| tolower(word[i])=='i'|| tolower(word[i])=='o' || tolower(word[i])=='u'){
                        cnt++;
                    }
                     if(tolower(word[i])!='a' && tolower(word[i])!='e'&& tolower(word[i])!='i'&& tolower(word[i])!='o' && tolower(word[i])!='u' && isalpha(word[i])){
                        snt++;
                    }                   
                
            }
            if(cnt>0 && snt>0)
             return true;
        }
       
    
    return false;
   
    }
};