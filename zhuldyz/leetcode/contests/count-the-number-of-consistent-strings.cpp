class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char, int> all;
        int answ = 0;
        bool cont = false;
        for(int i = 0; i < allowed.length(); i++) {
            all[allowed[i]]++;
        }
        for(int i = 0; i < words.size(); i++) {
            cont = false;
            for(int j = 0; j < words[i].length(); j++) {
                if(all[words[i][j]] >0) continue;
                else cont = true;
            }
            if (cont == false) {answ++;}
        
        }
        return answ;
    }
};
