class Solution {
    /**
     * @param {number[]} nums
     * @param {number} k
     * @return {number[]}
     */
    topKFrequent(nums, k) {
        const HashMap = new Map();

        for (let i = 0; i< nums.length; i++){
            if(HashMap.has(nums[i])){
                HashMap.set(nums[i], HashMap.get(nums[i])+1);
            } else{
                HashMap.set(nums[i], 1);
            }
        }
        let sorted = [...HashMap].sort((a, b) => b[1] - a[1]);

        const topK = [];

        for (let i = 0; i < k; i++) {
            topK.push(sorted[i][0]);
        return topK;
        }
    }
}
