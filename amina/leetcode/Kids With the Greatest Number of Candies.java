class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        List<Boolean> out = new ArrayList<>();
        int max = 0;
        for(int candy : candies){
            if(candy> max){
                max = candy;
            }
        }
        for(int candy: candies){
            out.add(candy+extraCandies>=max);
        }
        return out;
    }
