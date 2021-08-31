//Note: This problem shares similarities with Chapter 2. The solution to either chapter may help with solving the other, so please consider reading both first.
// Connie received a string SS for her birthday, consisting entirely of uppercase letters (each between "A" and "Z", inclusive).
// However, Connie really only likes nice, consistent strings. She considers a string to be consistent if and only if all of its letters are the same.
// Each second, Connie may choose one letter in SS and replace it with a different letter. If her chosen letter is a vowel, then she may replace it with any consonant of her choice. On the other hand, if her chosen letter is a consonant, then she may replace it with any vowel of her choice. The 55 letters "A", "E", "I", "O", and "U" are considered vowels, while the remaining 2121 letters of the alphabet are considered consonants. If a letter appears multiple times in SS, she may only replace a single occurrence per second.
// Help her determine the minimum number of seconds required to change SS into any consistent string. Note that SS might already be consistent, in which case 00 seconds would be required.
// Constraints
// 1 \le T \le 451≤T≤45
// 1 \le |S| \le 1001≤∣S∣≤100
// "A" \le S_i \le≤S 
// i
// ​
//  ≤ "Z"
// The sum of |S|∣S∣ across all test cases is at most 4{,}5004,500.
// Input
// Input begins with an integer TT, the number of birthdays Connie has had. For each birthday, there is a single line containing the string SS.
// Output
// For the iith string, print a line containing "Case #i: " followed by the minimum number of seconds required to change SS into any consistent string.
// Sample Explanation
// In the first case, Connie could replace the second and third letters ("B" and "C") each with "A", yielding the string "AAA" in 22 seconds.
// In the second case, "F" is already consistent.
// In the third case, Connie could replace the first, third, and fifth letters ("B", "N", and "N") each with "A", yielding the string "AAAAAA" in 33 seconds

#include<bits/stdc++.h>
using namespace std;


int check(string birthday){
    int min_time=INT_MAX;

    for(int i=0;i<birthday.size();i++){
        int vorc=0;
        int count=0;
        if(birthday[i] =='A' || birthday[i]=='E' ||birthday[i]=='I' ||birthday[i]=='O' ||birthday[i]=='U'){
            vorc=1;
        }
        for(int j=0;j<birthday.size();j++){

            if(vorc==1){
                if((birthday[j] =='A' || birthday[j]=='E' ||birthday[j]=='I' ||birthday[j]=='O' ||birthday[j]=='U') && (birthday[i]!=birthday[j])){
                    count+=2;
                }
                else if(birthday[i]!=birthday[j]){
                    count+=1;
                }
            }
            else if(vorc==0){
                if((birthday[j] =='A' || birthday[j]=='E' ||birthday[j]=='I' ||birthday[j]=='O' ||birthday[j]=='U') && (birthday[i]!=birthday[j])){
                    count+=1;
                }
                else if(birthday[i]!=birthday[j]){
                    count+=2;
                }
            }
        }
        if(count < min_time){
            min_time = count;
        }
    }
    int vowel=0, consonent=0;
    for(int i=0;i<birthday.size();i++){
        if(birthday[i] =='A' || birthday[i]=='E' ||birthday[i]=='I' ||birthday[i]=='O' ||birthday[i]=='U'){
            vowel++;
        }
        else{
            consonent++;
        }
    }
    if(vowel==birthday.size() || consonent == birthday.size() && birthday.size()!=1 && min_time>birthday.size()){
        
        return birthday.size();
    }
    
    return min_time;
}



int main(){

    #ifndef ONLINE_JUDGE
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif

    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        string s;
        cin>>s;
        int ans=check(s);
        cout<<"Case #"<<i+1<<": "<<ans;
        if(i<T-1){
            cout<<"\n";
        }
    }
    return 0;
}