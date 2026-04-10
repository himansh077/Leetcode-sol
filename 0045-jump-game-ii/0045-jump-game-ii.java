class Solution {
    public int jump(int[] nums) {
        if(nums.length<=2) return nums.length-1;
        int farthest = 0;
        int jump = 0;
        int current = 0; 
        for(int i=0;i<nums.length-1;i++){
            farthest=Math.max(farthest,nums[i]+i);
            if(i==current){
                current=farthest;
                jump++;
            }
        }
        return jump;
    }
}