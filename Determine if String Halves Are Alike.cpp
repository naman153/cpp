#include <bits/stdc++.h>
class Solution {
public:
    bool halvesAreAlike(string s) {
        set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int a=0,b=0;
        
        for(int i=0; i<s.size()/2; i++){
            set<char>::iterator it = vowels.find(s[i]);
            if(it != vowels.end())
                a++;
        }
        
        for(int i=s.size()/2; i<s.size(); i++){
            set<char>::iterator it = vowels.find(s[i]);
            if(it != vowels.end())
                b++;
        }
        return a==b;
    }
};
