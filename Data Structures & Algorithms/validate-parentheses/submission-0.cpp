class Solution {
public:
    bool isValid(string s) {
        stack<char> t;
        for(char c : s) {
            if(c=='[' || c=='(' || c=='{')
                t.push(c);
            else if(t.empty() || abs(t.top()-c)>2)
                return false;
            else
                t.pop();
        }
        return t.empty();
    }
};
