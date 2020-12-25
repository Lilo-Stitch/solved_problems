#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'longestSubarray' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int longestSubarray(vector<int> arr) {
  if (arr.size() < 2)
    return arr.size();
    
  int best = 1;
  int bestLower = 1;
  int bestHigher = 1;
  
  for (int i=1; i<arr.size(); i++){
    if (arr[i] == arr[i-1]){
      bestLower = bestLower + 1;
      bestHigher = bestHigher + 1;
    
    } else if (arr[i] - 1 == arr[i-1]){
      bestLower = 1 + bestHigher;
      bestHigher = 1;
    
    } else if (arr[i] + 1 == arr[i-1]){
      bestHigher = 1 + bestLower;
      bestLower = 1;
    
    } else {
      bestLower = 1;
      bestHigher = 1;
    }

    best = max(best, bestLower);
    best = max(best, bestHigher);
  }
  
  return best;
}
