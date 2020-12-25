int firstDuplicate(int[] a) {
    if(a.length < 1){
        return 0;
    }else{
        int min_diff = a.length-1;
        boolean occured = false;
        for(int i = 0; i< a.length-1;i++){
            for(int j=i+1; j< a.length; j++){
                if(a[i]==a[j]){
                    occured = true;
                    if(j < min_diff){
                        min_diff = j;
                    }
                }
            }
        }
        if(occured){
                    return a[min_diff];

            
        }else{
            return -1;
        }
        
    }
}
