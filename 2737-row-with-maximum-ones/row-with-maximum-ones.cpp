class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>ans;
        int idx=-1;
        int max_ones=-1;
        for(int i=0;i<mat.size();i++){
            sort(mat[i].begin(),mat[i].end());
        }
        for(int i=0;i<mat.size();i++){
            int lb=lower_bound(mat[i].begin(),mat[i].end(),1)-mat[i].begin();
            int cnt_ones=mat[i].size()-lb;
            if(cnt_ones>max_ones){
                max_ones=cnt_ones;
                idx=i;
            }
            
           
        }
        ans.push_back(idx);
        ans.push_back(max_ones);
        
        return ans;
        
    }
    
    
};