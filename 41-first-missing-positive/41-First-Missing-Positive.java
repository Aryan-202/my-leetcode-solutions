import java.util.*;

class Solution {
    public int firstMissingPositive(int[] nums) {
        Arrays.sort(nums);
        int min = 2;
        int idx = 0;
        
        
        do {
            min = nums[idx];
            idx++;
        } while (nums[idx] < 0);

        int result = min;

        for (int i = 0; i < n; i++) {
            if (min == nums[i]) {
                result++;
            }
        }



    }
}