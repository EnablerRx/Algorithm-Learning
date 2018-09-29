int searchInsert(int* nums, int numsSize, int target) {
    int result;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==target){
            result=i;
        }
        else{
            if((nums[i]<target)&&(nums[i+1]>target)){
                result=i+1;
            }
            else if((result==0)&&(nums[i]<target))
                result=numsSize;
            else if((result==0)&&(nums[0]>target))
                return 0;
        }
    }
    return result;
}