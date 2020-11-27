//my solution
// mistakes: cant do answer[i] = 3 if the vector[i] does not exist, instead need to push_back
// 4 ms, faster than 80 ms
// can improve finding max with STL function 
// int maxEl = *max_element(candies.begin(), candies.end());
// and instead of for i < candies.size() can do (auto num : candies) which is faster

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = candies[0];
        for(int i = 0; i < candies.size(); i++) {
            if (candies[i] > max) max= candies[i];
        }
        vector<bool> answer;
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] == max) answer.push_back(true);
            else if(candies[i] + extraCandies >= max) answer.push_back(true);
            
            else answer.push_back(false);
        }
        return answer;
    }
};
