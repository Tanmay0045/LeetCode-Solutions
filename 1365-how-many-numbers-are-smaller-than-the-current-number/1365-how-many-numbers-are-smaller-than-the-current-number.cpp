class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
vector<int> result;
int n = nums.size();
 
for(int i=0;i<n;i++){
    int count = 0;
    for(int j=n-1;j>=0;j--){
        if(nums[j]<nums[i] && j != i){
        count++;
        }
    }
    result.push_back(count);
}
return result;

    }
};