class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());

int closedifff = INT_MAX;
int closesum;

for(int i=0;i<nums.size()-2;i++)
{
    int sum =0;
    int j=i+1,k=nums.size()-1;
    sum+=nums[i]+nums[j]+nums[k];
    
    while(j<k)
    {
        if(abs(sum-target)<closedifff)
        {
            closedifff = abs(sum-target);
            closesum=sum;
        }
        if(sum<target)
        {
            sum -=nums[j];
            j++;
            sum+=nums[j];
        }
        else if(sum > target){
               sum -=nums[k];
            k--;
            sum+=nums[k];
        }
         else
         {
             break;
         }
    }
}
return closesum;
        
    }
};