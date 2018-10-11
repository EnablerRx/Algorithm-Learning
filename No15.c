public class Solution {
    /**
     * @param nums : Give an array numbers of n integer
     * @return : Find all unique triplets in the array which gives the sum of zero.
     */
    /**
     *����˼�룺���������ÿһ��Ԫ�أ�ȡ����һ��Ԫ���ø���ΪĿ����ֵ����������ѱ��������������Ŀ��Ԫ��
     */
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> results = new ArrayList<>();
        
        if (nums == null || nums.length < 3) {                                       //������鳤��С��3���򷵻ؿ�
            return results;
        }
        
        Arrays.sort(nums);                                                           //�������ɴ�С��������

        for (int i = 0; i < nums.length - 2; i++) {                                  //������Щ��һ������ͬ��Ԫ��
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            //��ȷ����һ��Ԫ���Ԫ���Ժ��������Ϊi+1����Ϊ��i���Ѿ���ΪԪ���׸�Ԫ�أ�right��Ҫ-1��ΪԪ���±���㿪ʼ            
            int left = i + 1, right = nums.length - 1;        
            int target = -nums[i];                                                  //��Ϊ��ӱ���Ϊ�㣬�ʽ�Ԫ����׸�Ԫ���ø�����ΪĿ��ȥ����
            
            twoSum(nums, left, right, target, results);
        }
        
        return results;
    }
    
    public void twoSum(int[] nums,
                       int left,
                       int right,
                       int target,
                       List<List<Integer>> results) {
        while (left < right) {                                                     //ѭ����ʼ����������������������
            if (nums[left] + nums[right] == target) {
                ArrayList<Integer> triple = new ArrayList<>();
                triple.add(-target);
                triple.add(nums[left]);
                triple.add(nums[right]);
                results.add(triple);
                
                left++;
                right--;
                while (left < right && nums[left] == nums[left - 1]) {            //���������ǰ��һ����ЧԪ����ͬ�����
                    left++;
                }
                //���������ǰ��һ����ЧԪ���Ҳ���ͬ�������������ͬ���޽���ظ���ֱ������                     
                while (left < right && nums[right] == nums[right + 1]) {          
                    right--;
                }
            } else if (nums[left] + nums[right] < target) {                      //���վ����С��������������
                left++;
            } else {
                right--;
            }
        }
    }
}