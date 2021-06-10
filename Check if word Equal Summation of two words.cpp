class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int i=0,j=0,sum=0,sum1=0,sum2=0,k=0;
        while(i<firstWord.size() || j<secondWord.size() || k<targetWord.size()){
            if(i<firstWord.size()){
                sum = sum*10 + int(firstWord[i])-97;
                i++;
            }
            if(j<secondWord.size()){
                sum1 = sum1*10 +  int(secondWord[j])-97;
                j++;
            }
            if(k<targetWord.size()){
                sum2 = sum2*10 +  int(targetWord[k])-97;
                k++;
            }   
        }
        return (sum+sum1 == sum2)? 1 : 0;
    }
};
