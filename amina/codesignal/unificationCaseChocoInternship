/*Или так, или так!
Вам дана строка с символами в разных регистрах. Если в строке больше символов в нижнем регистре, вам необходимо вернуть всю строку в нижнем регистре. Аналогично если символов больше в верхнем регистре, вернуть всю строку в верхнем регистре. Например, для inputString = "Aba", необходимо вернуть "aba". В случае inputString = "ABa" вернуть "ABA".

[execution time limit] 3 seconds (java)

[input] string inputString

[output] string
nput:
inputString: "Aba"
Expected Output:
"aba"
*/
String unificationCaseChocoInternship(String inputString) {
    int low = 0;
    int upp = 0;
    for( int i =0; i < inputString.length(); i++){
        if(inputString.charAt(i)>=65 && inputString.charAt(i)<=90){
            upp++;
        }
        if(inputString.charAt(i)>=97 && inputString.charAt(i)<=122){
            low++;
        }
    }
    if (upp > low){
        return inputString.toUpperCase();
    }else{
        return inputString.toLowerCase();
    }
}
