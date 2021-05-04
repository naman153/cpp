class Solution {
public:
    string interpret(string command) {
        string res;
        int i=0;
        while(i<command.size()){
            if(command[i] == '(' && command[i+1] == ')'){
                res += 'o';
                i+=2;
            }
            if(command[i] == '(' && command[i+1] == 'a' && command[i+2] == 'l' && command[i+3] == ')'){
                res += "al";
                i+=4;
            }
            if(command[i] == 'G'){
                res += 'G';
                i++;
            }
        }
        return res;
    }
};
