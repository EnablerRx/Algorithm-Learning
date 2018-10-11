public class Solution {
    /**
     * @param nums : Give an array numbers of n integer
     * @return : Find all unique triplets in the array which gives the sum of zero.
     */
    /**
     *核心思想：遍历数组的每一个元素，取出第一个元素置负作为目标数值，而后遍历已被排序的数组搜索目标元组
     */
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> results = new ArrayList<>();
        
        if (nums == null || nums.length < 3) {                                       //如果数组长度小于3，则返回空
            return results;
        }
        
        Arrays.sort(nums);                                                           //将数组由大到小进行排序

        for (int i = 0; i < nums.length - 2; i++) {                                  //跳过那些第一个数相同的元组
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            //在确定第一个元组的元素以后，区间左端为i+1，因为第i个已经置为元组首个元素，right需要-1因为元组下标从零开始            
            int left = i + 1, right = nums.length - 1;        
            int target = -nums[i];                                                  //因为相加必须为零，故将元组的首个元素置负并作为目标去搜索
            
            twoSum(nums, left, right, target, results);
        }
        
        return results;
    }
    
    public void twoSum(int[] nums,
                       int left,
                       int right,
                       int target,
                       List<List<Integer>> results) {
        while (left < right) {                                                     //循环开始的条件，避免出现特殊情况
            if (nums[left] + nums[right] == target) {
                ArrayList<Integer> triple = new ArrayList<>();
                triple.add(-target);
                triple.add(nums[left]);
                triple.add(nums[right]);
                results.add(triple);
                
                left++;
                right--;
                while (left < right && nums[left] == nums[left - 1]) {            //避免出现与前面一个有效元组相同的情况
                    left++;
                }
                //避免出现与前面一个有效元组右侧相同的情况，两侧相同或无解或重复，直接跳过                     
                while (left < right && nums[right] == nums[right + 1]) {          
                    right--;
                }
            } else if (nums[left] + nums[right] < target) {                      //依照具体大小情况进行区间调整
                left++;
            } else {
                right--;
            }
        }
    }
}