//Maximum Average Subarray
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    double findMaxAverage(vector<int>&nums,int k){
        double current_sum=0;
        for(int i=0;i<k;++i){
            current_sum+=nums[i];
        }
        double max_sum=current_sum;
        for(int i=k;i<nums.size();++i){
            current_sum+=nums[i]-nums[i-k];
            max_sum=max(max_sum,current_sum);
        }
        return max_sum/k;
    }
};
int main(){
    vector<int> nums={1,12,-5,-6,50,3};
    int k=4;
    double result=findMaxAverage(nums,k);
    cout<<"max average:"<<result<<endl;
    return 0;
}
git config --global user.name "navneeta88"
git config --global user.email "mohapatra.navneet26@gmail.com"