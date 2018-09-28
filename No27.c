int removeElement(int* nums, int numsSize, int val) {
int point1,point2;
for(int i=0;i<numsSize;i++){
    if(nums[i]==val){
        point2++;
    }
    else{
        nums[point1]=nums[i];
        point1++;
        point2++;
    }  
}
numsSize=point1;
return numsSize;
}