class Solution {
public:
    string defangIPaddr(string address) {
        string defanged = "";
        for(int i=0; i < address.size(); i++){
            if(address[i] == '.'){
                defanged = defanged + "[.]";
            }
            else{
                defanged = defanged + address[i];
            }
            
        }
        return defanged;
    }
};
