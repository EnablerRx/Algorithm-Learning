	int majorityElement(int* nums, int numsSize) {
	    int currentMajor = 0;
	    int count=0;
	    for(int i=0;i<numsSize;i++){
	        if(count==0){
	            currentMajor=nums[i];
	        }
	        if(nums[i]==currentMajor){
	            count++;
	        }
	        else{
	            count--;
	        }
	    }      
	    return currentMajor;
	}
