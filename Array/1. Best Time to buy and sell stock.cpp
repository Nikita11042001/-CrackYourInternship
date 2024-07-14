class Solution {
public:
    int maxProfit(vector<int>& nums) {
        vector<int> ans;
        stack<int>st;
        int maxi=0;
        
        for(int i=nums.size()-1;i>=0;i--){
            if(st.empty()) {
                st.push(nums[i]);
                continue;
            }
            if(st.top()<nums[i]){
                   st.push(nums[i]);
                   continue;
            }
            maxi=max(maxi,st.top()-nums[i]);
        //st.push(nums[i]);

        }
        return maxi;
    }
    //     int maxi=0;
    //     for(int i=0;i<nums.size();i++){
    //         for(int j=i+1;j<nums.size();j++){
    //             if(nums[j]>nums[i])
    //                 maxi=max(maxi,nums[j]-nums[i]);
    //         }
    //     }
    //     return maxi;
    // }
};
