class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int > n(nums1.size()+ nums2.size());
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), n.begin());
        sort(n.begin(), n.end());
        if(n.size()%2!=0){
            return n[int(n.size()/2)];
        }
        
        return double(n[int(n.size()/2)]+n[int(n.size()/2)-1])/2;;
        
    }
};
