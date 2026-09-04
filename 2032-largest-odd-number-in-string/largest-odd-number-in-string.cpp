class Solution {
public:
    string largestOddNumber(string num) {
        if((num.back()-'0')%2!=0){
            return num;
        }
        else{
            int i=num.length()-1;
            while( !num.empty() && (num[i]-'0')%2==0 ){
                num.pop_back();
                i--;
                
            }
        }
        return num;


    }
};