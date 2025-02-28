/* Majority Element || Moore's Voting Algorithm

Brute Force Approach :-

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int MajorityElement(vector <int> &nums) {
    int n=nums.size();
    for(int val : nums) {
        int freq=0;
        for( int el : nums) {
            if(el == val) freq++;
        }
        if(freq > n/2) return val;
    }
}

int main() {
    vector <int> nums = {1,1,2,2,1,1};
    cout<<MajorityElement(nums);
    return -1;
}

Optimize Approach :-

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int MajorityElement(vector <int> &nums) {
    int n=nums.size();
    sort(nums.begin(),nums.end());
    int freq=1, ans=nums[0];
    for(int i=0;i<n;i++) {
        if(nums[i] == nums[i-1]) {
            freq++;
        } else {
            freq=1;
            ans=nums[i];
        } if(freq > n/2) {
            return ans;
        }
    }
    return ans;
}

int main() {
    vector <int> nums = {1,1,2,2,1,1};
    cout<<MajorityElement(nums);
    return -1;
}

Moore's Algorithm :-
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int MajorityElement(vector <int> &nums) {
    int n=nums.size();
    int freq=0, ans=0;
    for(int i=0;i<n;i++) {
        if(freq == 0) {
            ans = nums[i];
        }
        if(ans == nums[i]) {
            freq++;
        }
        else {
            freq--;
        }
    }
    return ans;
}

int main() {
    vector <int> nums = {1,1,2,2,1,1};
    cout<<MajorityElement(nums);
    return -1;
}