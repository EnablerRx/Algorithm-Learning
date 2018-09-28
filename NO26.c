class Solution {
    public int removeDuplicates(int[] nums) {
    if (nums.length == 0) return 0;            //代码的鲁棒性
    int i = 0;
    for (int j = 1; j < nums.length; j++) {
        if (nums[j] != nums[i]) {              //若前一个数字与后一个数字不相等，则将nums中的第i个元素赋值为nums[j]
            i++;
            nums[i] = nums[j];
        }                                      //若前一个数字与后一个数字重复，则j往后指，而i不变化
    }
    return i + 1;                              //返回有效数组的长度，+1是题干要求的多一个位置
    }
}