class Solution {
public:
    bool isValid(string s) {
        stack<char> stringCheck;
        for(char c: s){
            if(c=='(' || c=='{' || c=='['){
                stringCheck.push(c);
            }
            else{
                if(stringCheck.empty()) return false;


                char top=stringCheck.top();
                if((c==')'&& top=='(' )||(c=='}'&& top=='{' )||(c==']'&& top=='[' )){
                    stringCheck.pop();
                }
                else return false;
            }
        }
        return stringCheck.empty();
    }
};
