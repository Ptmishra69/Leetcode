class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        vector<int> alternate;
        int st=0,end=nums.size()-1;
        while(st<=end){
            if(st==end){
                alternate.push_back(nums[st]);
                break;
            }
            else{
            alternate.push_back(nums[end]);
            alternate.push_back(nums[st]);
            }
            end--;
            st++;
        }
        long long ans=0;

        for(int i=0;i<alternate.size();i++){
            if(i%2==0){
                ans+=alternate[i];
            }
            else ans-=alternate[i];
        }
        return ans;
    }
};