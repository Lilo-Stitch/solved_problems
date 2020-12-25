/*Given a string s consisting of small English letters, find and return the first instance of a non-repeating character in it. If there is no such character, return '_'.

Example

For s = "abacabad", the output should be
firstNotRepeatingCharacter(s) = 'c'.

There are 2 non-repeating characters in the string: 'c' and 'd'. Return c since it appears in the string first.

For s = "abacabaabacaba", the output should be
firstNotRepeatingCharacter(s) = '_'.

There are no characters in this string that do not repeat.*/
char firstNotRepeatingCharacter(String s) {
    if(s.length()==1){
        return s.charAt(0);
    }
         for( int i = 1; i< s.length()-1 ; i++){
        if(!s.substring(i+1).contains(s.substring(i, i+1)) && !s.substring(0, i-1).contains(s.substring(i, i+1)) ){
            return s.charAt(i);
        }
    }
   
    return '_';

}
//ignore case T, T
// find case F and F
