class Solution {
public:
    string removeDigit(string number, char digit) {
        
        string ans="0";
        
        for(int i=0;i<number.length() ; i++){
            if(number[i] == digit){
                string temp = number.substr(0,i)  + number.substr(i+1 , number.size());
                
                ans = max(temp ,ans);
            }
        }
        return ans;
    }
};