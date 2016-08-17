class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multimap<int,int,greater<int>> vecsort;
        for(int i=0;i<nums.size();++i){
            vecsort.insert(pair<int,int>(nums[i],i));
        }
        multimap<int,int>::iterator it=vecsort.begin();
        while(--k){
            it++;
        }
        return it->first;
    }
};
