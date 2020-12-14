class Solution {
public:
    void reverseString(vector<char>& s) {
        if (s.size() == 0) return;
        char* right = &s[0];
        char* left = &s[s.size()-1];
        for(int i = 0; i < s.size(); i++) {
            if (right > left) return;
            char temp = *right;
            *right = *left;
            *left = temp;
            *right++;
            *left--;
        }
     }
};
