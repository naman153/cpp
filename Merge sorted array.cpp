class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = 0;
        int k = nums1.size()-nums2.size();
        for(int i=0;i<nums1.size() && j<nums2.size();i++){
            if(nums1[i]>=nums2[j]){
                nums1.insert(nums1.begin()+i, nums2[j++]);
                k++;
                nums1.erase(nums1.begin()+k,nums1.begin()+k+1);
            }
            else if(i>=k){
                nums1[i]=nums2[j++];
            }
        }
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        for(int i=0;i<nums1.size() && j<n;i++){
            if(nums1[i]>=nums2[j]){
                nums1.insert(nums1.begin()+i,nums2[j++]);
                nums1.erase(nums1.begin()+m+j,nums1.begin()+m+j+1);
            }
            else if(i>=m+j){
                nums1[i] = nums2[j++];
            }
        }
    }
};
