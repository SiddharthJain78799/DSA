/* Maximum Of Subarray || Kadane’s Algorithm
#include <iostream>
#include <vector>
using namespace std;

int maxOfSubarray(vector <int> &arr) {
    int n = arr.size();
    int cursum = arr[0];
    int maxsum = arr[0];
    for(int i=1;i<n;i++) {
        cursum = max(cursum + arr[i], arr[i]);
        maxsum = max(cursum ,maxsum);
    }
    return maxsum;
}

int main() {
    vector <int> arr = {2, 3, -8, 7, -1, 2, 3};
    cout<<maxOfSubarray(arr);
    return 0;
}
*/

// OR

#include <iostream>
#include <vector>
using namespace std;

int maxOfSubarray(vector <int> &arr) {
    int n = arr.size();
    int cursum = 0;
    int maxsum = INT_MIN;
    for(int val : arr) {
        cursum += val;
        maxsum = max(cursum ,maxsum);
        if(cursum<0) {
            cursum=0;
        }
    }
    return maxsum;
}

int main() {
    vector <int> arr = {2, 3, -8, 7, -1, 2, 3};
    cout<<maxOfSubarray(arr);
    return 0;
}