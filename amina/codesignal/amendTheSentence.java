String amendTheSentence(String s) {
    String new_s = "";
    for (int i = 0; i< s.length(); i++){
        if(s.charAt(i)>=65 && s.charAt(i)<= 90){
            if(i != 0){
                new_s = new_s + " ";
            }
            new_s = new_s + s.substring(i, i+1).toLowerCase();
        }else{
            new_s = new_s + s.charAt(i);
        }
    }
    return new_s;

}
/* other solution 
String amendTheSentence(String s) {
    String[] split = s.split("(?=[A-Z])");
    return String.join(" ", split).toLowerCase();
}*/
