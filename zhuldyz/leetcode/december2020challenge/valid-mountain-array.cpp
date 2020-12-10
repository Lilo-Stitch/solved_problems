class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3) return false;
        
        int max = arr[0];
        int pos = 0;
        
        //find maximum value and position
        for (int i = 0; i < arr.size(); i++) 
        {
            if (max < arr[i])  { max = arr[i]; pos = i;}
        }
        
        //corner cases
        if (max == arr[0] || max == arr[arr.size()-1]) return false;
        for (int i = 1; i < arr.size(); i++) {
            //check uphill trend until the maximum position, then check downhill position after maximum 
            if (i <= pos ){
                if (arr[i] <= arr[i-1] ) return false;
            }  else {
                if (arr[i] >= arr[i-1] ) return false;
            }
        }
        return true;
    }
};
/* much simpler code taken from leetcode solution

      // Edge case:
        if (arr.size() <= 1)
            return false;
        
        int i = 0;
        
        // Go while there's a hill up, untill we reach peak:
        while (i < arr.size()-1 && arr[i] < arr[i+1])
            i++;
           
        // Peak can't be the first or last:
        if (i == 0 || i == arr.size()-1)
            return false;
        
        // Walk downhill:
        while (i < arr.size()-1 && arr[i] > arr[i+1])
            i++;
        
        // If there's a larger number after we started walking down, this will be false:
        return i == arr.size()-1;
*/
