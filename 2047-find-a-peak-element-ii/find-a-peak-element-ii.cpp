class Solution {
public:
    int maxele(vector<vector<int>>& mat,int mid){
        int m=mat.size();
        int n=mat[0].size();
        int maxi=INT_MIN;
        int idx=-1;
        for(int i=0;i<m;i++){
            if(mat[i][mid]>maxi){
                maxi=mat[i][mid];
                idx=i;
            }
        }
        return idx;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int low=0;
        int high=n-1;
       
        while(low<=high){
            int mid=(low+high)/2;
            int row=maxele(mat,mid);
            int right=(mid+1<n) ? mat[row][mid+1] : -1;
            int left=(mid-1>=0) ? mat[row][mid-1] : -1;
            if(mat[row][mid]>right && mat[row][mid]>left){
              return {row,mid};
                
            }
            else if(mat[row][mid]>right){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return {-1,-1}; 
        
    }
};