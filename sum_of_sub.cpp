	
#include <iostream>
using namespace std;

int arr[] = {3, 5, 6, 7};
int n = 4;

void sumSubset(int index, int currentSum, int target, string subsetStr) {
    // Base case: sum equals target
    if (currentSum == target) {
        cout << "{ " << subsetStr << "}" << endl;
        return;
    }

    // If end of array or sum exceeds target
    if (index == n || currentSum > target)
        return;

    // 1. Include current element
    sumSubset(index + 1, currentSum + arr[index], target, subsetStr + to_string(arr[index]) + " ");

    // 2. Exclude current element
    sumSubset(index + 1, currentSum, target, subsetStr);
}

int main() {
    int target = 15;
    cout << "Subsets with sum " << target << " are:\n";
    sumSubset(0, 0, target, "");
    return 0;
}
