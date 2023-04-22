/*Two sum Problem Leetcode*/
class Solution {
public:
    #include<unordered_map>
    
    
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ump;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int more=target-a;
            if(ump.find(more)!=ump.end()){
                return {ump[more],i};
            }
            ump[a]=i;
        }
        return{-1,-1};
    }
};