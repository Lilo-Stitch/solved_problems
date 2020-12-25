class Solution {
    public int reverse(int x) {
        if(x >= Integer.MAX_VALUE || x <= Integer.MIN_VALUE){
                return 0;
        }
        //-2147483648 to 2147483647.
        int digit;
        int reversed = 0; 
        while( x!= 0){
            digit = x%10;
            if(reversed > Integer.MAX_VALUE/10 || reversed< Integer.MIN_VALUE/10){
                return 0;
            }else if((reversed == Integer.MAX_VALUE/10) && digit >7 ){
                return 0;
            }else if((reversed == Integer.MIN_VALUE/10) && digit <-8 ){
                
            }else{
                reversed = reversed*10+digit;
                x /= 10;
            }

            
            
        }
        return reversed;
    }
}
//more clean ver
class Solution {
  public int reverse(int x) {
        long reversed = 0;
        while (x != 0) {
            reversed = reversed * 10 + x % 10;
            x = x / 10;
        }
        if (reversed < Integer.MIN_VALUE || reversed > Integer.MAX_VALUE) {
            return 0;
        } else {
            return (int)reversed;
        }
    }
}
