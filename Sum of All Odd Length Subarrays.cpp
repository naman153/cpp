class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        signed long long int sum = 0;
        for(int i=0; i<arr.size(); i+=2){
            for(int j=0; j < arr.size()-i; ++j){
                int k=0;
                while(k<=i){
                    sum += arr[j+k];
                    k++;
                }
            }
        }
        return sum ;
    }
}; 
