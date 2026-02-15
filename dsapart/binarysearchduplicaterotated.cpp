#include <iostream>
#include <vector>
using namespace std;

int searchRotatedArray(vector<int>& res, int target) {
    int lo = 0, hi = res.size() - 1;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;

        if (res[mid] == target) return 1;

        if (res[lo] == res[mid] && res[mid] == res[hi]) {
            lo++;
            hi--;
        }
        else if (res[lo] <= res[mid]) {
            if (res[lo] <= target && target < res[mid]) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        else {
            if (res[mid] < target && target <= res[hi]) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> res(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> res[i];

    int target;
    cout << "Enter target value: ";
    cin >> target;

    int result = searchRotatedArray(res, target);
    cout << result << "\n";

    return 0;
}
