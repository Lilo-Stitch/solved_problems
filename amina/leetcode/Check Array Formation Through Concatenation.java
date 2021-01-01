class Solution {
    public boolean canFormArray(int[] arr, int[][] pieces) {
           HashMap<Integer, Integer> map = new HashMap<>();
            for(int i = 0; i< arr.length; i++){
                map.put(arr[i], i);
            }
        int prev;
            for( int i = 0; i < pieces.length; i++){
                for(int j = 0; j < pieces[i].length; j++){
                    if(!map.containsKey(pieces[i][j])){
                        return false;
                    }else{
                        if(j == 0){
                           prev = map.get(pieces[i][j]); 
                            continue;
                        }else{
                            prev = map.get(pieces[i][j-1]); 
                        }
                        int cur = map.get(pieces[i][j]);
                       if(cur < prev || prev+1!=cur){
                           return false;
                           
                       }
                    }
                }
            }
        return true;

    }
}
