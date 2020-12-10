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
