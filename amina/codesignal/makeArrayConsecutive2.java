int makeArrayConsecutive2(int[] statues) {
    int min = statues[0];
    int max = statues[0];
    for(int i = 1; i < statues.length; i++){
        if(statues[i] > max ){
            max = statues[i];
        }
        if(statues[i]<min){
            min = statues[i];
        }
        
    }
    //an= a1 + (n-1)*d
    //an = max, a1= min, d=1
    //find n (statue supposed to be)
    // n = (an-a1)/d +1
    //statues-n return
    return (max-min)+1-statues.length;

}
