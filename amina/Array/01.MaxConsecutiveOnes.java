class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        
        if(nums.length == 1){
            //case 1. nums[0]=0
            if(nums[0]==0){
                return 0;
            }else{
            //case 2. nums[0]=1
                return 1;
            }
        }else{
        int consecutive = 1;
        //max setting to 0 in case nums contain only 0
        int max = 0; 
        for(int i = 0; i < nums.length; i++){
            // nums[i]=nums[i+1]=1 -> consecutive increase
            //case 3. nums[0] = 1 nums[1] =1 
            // case 4. [0,1]
            // case 5. [1,0]
            if(nums[i]==1){
                if( i < nums.length-1 ){
                //checking arratmaxBound
                 if(nums[i]==nums[i+1]){
                     consecutive++;   
                 }
                } 
                // recording max consecutiveness
                if(consecutive > max){
                    max = consecutive;
                    }

            }else{
            //case 4. nums[i]=0 and nums[i+1]=1 or visa versa then cons again 1
                consecutive = 1;
            }
               
       

        }
        //returninx max consecutiveness
        return max;  
        }

    }
}
