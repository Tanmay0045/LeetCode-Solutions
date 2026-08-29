class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> v=nums;
for(int i=0;i<v.size();i++){
if(v[i]==val){
    v.erase(v.begin()+i);
    i--;
}

}

nums=v;
return v.size();
    }
};