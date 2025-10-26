class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        for(int i=1;i<=nums.size();i++){
            if(find(nums.begin(),nums.end(),k*i)==nums.end()){
                return k*i;
            }
        }
        return k*(nums.size()+1);
    }
};
