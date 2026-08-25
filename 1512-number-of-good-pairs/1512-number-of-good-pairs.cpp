class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
 int count[101]={0};
 int result=0;
 for(int num : nums){
    result += count[num];
    count[num]++;
 }
return result;
   
    }
};