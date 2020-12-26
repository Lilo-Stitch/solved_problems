/*You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".

 

Example 1:

Input: jewels = "aA", stones = "aAAbbbb"
Output: 3
Example 2:

Input: jewels = "z", stones = "ZZ"
Output: 0 */

//simple solution O(n^2)
class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        int counter =0;
        for(int i = 0; i < stones.length(); i++){
            if(jewels.contains(Character.toString(stones.charAt(i)))){
                counter++;
            }
           
        }
        return counter;
    }
}
// O(n) solution with HashSet
class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        HashSet<Character> set = new HashSet<>(); 
        for(int i = 0; i< jewels.length(); i++){
            set.add(jewels.charAt(i));
        }
        int counter =0;
        for(int i = 0; i < stones.length(); i++){
            if(set.contains((stones.charAt(i)))){
                counter++;
            }
           
        }
        return counter;
    }
}
