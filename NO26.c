class Solution {
    public int removeDuplicates(int[] nums) {
    if (nums.length == 0) return 0;            //�����³����
    int i = 0;
    for (int j = 1; j < nums.length; j++) {
        if (nums[j] != nums[i]) {              //��ǰһ���������һ�����ֲ���ȣ���nums�еĵ�i��Ԫ�ظ�ֵΪnums[j]
            i++;
            nums[i] = nums[j];
        }                                      //��ǰһ���������һ�������ظ�����j����ָ����i���仯
    }
    return i + 1;                              //������Ч����ĳ��ȣ�+1�����Ҫ��Ķ�һ��λ��
    }
}