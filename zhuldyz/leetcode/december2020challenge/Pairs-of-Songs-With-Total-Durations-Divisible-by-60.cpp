// TLE
/* class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count = 0;
        for(int i = 0; i < time.size()-1; i++) { 
            for (int j = i+1; j< time.size(); j++) {
                if((time[i]+time[j]) % 60 == 0) count++; 
            }
        }
        return count;
    }
};
*/

class Solution {
public:
    
// making factorial from the beggining. For example, if i need 8C2, i make factorial 8*7, so i will not get big number
int fact(int n, int r) 
{ 
    int res = 1; 
    for (int i = n; i > n - r; i--) 
        res = res * i; 
    return res; 
} 
  
int nCr(int n, int r) 
{ 
    return fact(n, r)/2; 
} 
  

    int numPairsDivisibleBy60(vector<int>& time) {
        int count = 0;
        int arr[60] = {0};
        for(int i = 0; i < time.size(); i++) { 
            // time[i] = time[i] % 60;
            arr[time[i] % 60]++;
        }
        int len = (sizeof(arr)/sizeof(arr[0]));
        for(int i = 1; i< len/2; i++) {
            int j = len  -i;
            count+= arr[i]*arr[j];
        }
        //corner case when there is numbers 60 in array
        count+= nCr(arr[0], 2);
        // corner case when there is numbers 30 in array
        count+= nCr(arr[len/2], 2);
        return count;
    }
};
