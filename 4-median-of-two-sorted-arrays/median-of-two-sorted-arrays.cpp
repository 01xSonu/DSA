class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int n=n1+n2;
        int idx1=(n/2);
        int idx2=idx1-1;
        int i=0;
        int j=0;
        int cnt=0;
        int idx1ele=-1;
        int idx2ele=-1;
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                if(cnt==idx2){
                    idx2ele=nums1[i];

                }
                if(cnt==idx1){
                    idx1ele=nums1[i];
                }
                cnt++;
                i++;

            }
            else{
                 if(cnt==idx2){
                    idx2ele=nums2[j];

                }
                  if(cnt==idx1){
                    idx1ele=nums2[j];
                    
                }
                cnt++;
                    j++;

            }
            
        }
        while(i<n1){
                if(cnt==idx2){
                    idx2ele=nums1[i];
                 
                }
                if(cnt==idx1){
                    idx1ele=nums1[i];
                 

                }
                   cnt++;
                    i++;

            }
            while(j<n2){
                if(cnt==idx2){
                    idx2ele=nums2[j];
                   
                }
                if(cnt==idx1){
                    idx1ele=nums2[j];
                  


                }
                   cnt++;
                    j++;

            }
        if(n%2==0){
            double ans=(idx1ele+idx2ele)/2.0;
            return ans;
        }
        else{
        
            return idx1ele;
        }        
    }
};