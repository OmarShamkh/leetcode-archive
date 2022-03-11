class Solution {
public:
    void swap(vector<int>& nums, int i, int j) {
    nums[i] ^= nums[j];
    nums[j] ^= nums[i];
    nums[i] ^= nums[j];
}
    int firstMissingPositive(vector<int>& nums) {

        int i = 0;
        while(i<nums.size()){
            if(nums[i] > 0 && nums[i] <= nums.size() && nums[i] != nums[nums[i] -1]){
                swap(nums , i , nums[i]-1);
            }
            else i++;
        }
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != i+1) return i+1;
        }
        return nums.size() + 1;
    }

};