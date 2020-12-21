// Time complexity O(n^2)?
// Space complexity O(1)
bool isCryptSolution(vector<string> crypt, vector<vector<char>> solution) {
    //find no learning zeroes
    // make sure that the addition is right
    unordered_map<char, int> sol;
    for (int i = 0; i < solution.size(); i++) {
        sol[solution[i][0]] = (solution[i][1] - '0')%48;
    }
    int x= 0;
    int sum = 0;
    for (int i = 0 ; i < crypt.size(); i++) {
        for (int j = 0; j < crypt[i].length(); j++) {
            if(j == 0 && sol[crypt[i][j]] == 0 && crypt[i].length() != 1) return false;
            x*= 10; x+= sol[crypt[i][j]]; 
        }
        if (i < 2) {
        sum+= x;
        x = 0;
        }
        cout<< sum<<endl;
        cout<< x;
       
    }
    if (x != sum) return false;
    return true;
}

//shortened, not my version
// same logic

bool isCryptSolution(std::vector<std::string> crypt,
                     std::vector<std::vector<char>> solution) 
{
    unordered_map<char, int> hash;
    for(s : solution)
        hash[s[0]] = s[1] - '0';
    vector<int> w(3);
    for(int i = 0; i < 3; i++)
    {
        if(hash[crypt[i][0]] == 0 && crypt[i].size() > 1)
            return false;
        for(c : crypt[i])
            w[i] = w[i] * 10 + hash[c];
    }
    return w[0] + w[1] == w[2];
}


