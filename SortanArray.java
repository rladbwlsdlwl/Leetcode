class Solution {

    public int[] sortArray(int[] nums) {

        for(int i=0;i<nums.length;i++){
            int mx=0,j;
            for(j=0;j<nums.length-i;j++){
                if(nums[mx]<nums[j])
                    mx=j;
            }
            
            int temp=nums[j-1];
            nums[j-1]=nums[mx];
            nums[mx]=temp;
            
        }
        
        return nums;
    }
    
}
