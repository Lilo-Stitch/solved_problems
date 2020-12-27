//O(n^2)
class Solution {
    public int maximumWealth(int[][] accounts) {
        int max = 0; 
        for(int i =0; i< accounts.length; i++){
            int total = 0;
            for(int wealth : accounts[i]){
                total += wealth;
            }
            if(total > max){
                max = total;
            }
        }
        return max;
    }
}
