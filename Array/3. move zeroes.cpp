class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //brute force 
        //pushing the non zero elements to temp
        int n=nums.size();
        vector<int>temp;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                temp.push_back(nums[i]);
            }
        }
        //push the non zero elements back into the array
        int nz=temp.size();
        for(int i=0;i<nz;i++){
            nums[i]=temp[i];
        }
        //add zeros in the rest of the places of the array
        for(int i=nz;i<n;i++){
            nums[i]=0;
        }
    }
};
