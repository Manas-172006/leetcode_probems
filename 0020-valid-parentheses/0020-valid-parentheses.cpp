class Solution {
public:
    bool isValid(string s) {
        
        stack<char> stk;
        for(char b :s){
            if(b==('(')||b==('{')||b==('[')){
                stk.push(b);
            }else{
                if(stk.size()==0) return false;
                if((b==')'&&stk.top()=='(')||
                (b=='}'&&stk.top()=='{')||
                (b==']'&&stk.top()=='[')){
                    stk.pop();
                }else{
                    return false;
                }
            }
        }
        return stk.size()==0;
    }
};