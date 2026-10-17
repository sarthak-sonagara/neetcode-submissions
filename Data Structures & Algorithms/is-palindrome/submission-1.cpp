class Solution {

    bool isValidChar(char c) {
        return (c>='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9');
    }

    bool isEqual(char a, char b) {
        int dif = 'a'-'A';
        if(a>='a')
            a -= dif;
        if(b>='a')
            b -= dif;
        return a==b;
    }

public:
    bool isPalindrome(string s) {
        int left=0, right=s.size()-1;
        while(left<right) {
            if(!isValidChar(s[left]))
                left++;
            else if(!isValidChar(s[right]))
                right--;
            else if(!isEqual(s[left],s[right]))
                return false;
            else {
                left++;
                right--;
            }
        }
        return true;
    }
};
