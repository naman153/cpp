class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()<= nums2.size()){
            for(int i=0;i<nums1.size();i++){
                vector<int>::iterator it=find(nums2.begin(), nums2.end(),nums1[i]);
                if(it==nums2.end()){
                    nums1.erase(nums1.begin()+i, nums1.begin()+i+1);
                    i--;
                }
                else{
                    nums2.erase(it, it+1);
                }
                
            }
            return nums1;
        }
        
        if(nums1.size()>nums2.size()){
            for(int i=0;i<nums2.size();i++){
                vector<int>::iterator it=find(nums1.begin(), nums1.end(),nums2[i]);
                if(it==nums1.end()){
                    nums2.erase(nums2.begin()+i, nums2.begin()+i+1);
                    i--;
                }
                else{
                    nums1.erase(it, it+1);
                }
                
            }
        }
        return nums2;
    }
};
