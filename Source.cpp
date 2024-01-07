#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int removeDuplicates(vector<int>& nums);
void testRemoveDuplicates();

int main() {
    testRemoveDuplicates();
	return 0;
}

int removeDuplicates(vector<int>& nums) {
    // Check for edge-case
    if (nums.empty()) {
        return 0;
    }

    // Use the unique() function to reorder the elements removing duplicate values
    auto it = unique(nums.begin(), nums.end());
    nums.erase(it, nums.end()); // Erase the undefined indexes of the vector nums

    return nums.size();
}

void testRemoveDuplicates() {
    // Test 1: Empty vector
    vector<int> test1;
    cout << "Test 1 - Expected: 0, Got: " << removeDuplicates(test1) << endl;

    // Test 2: No duplicates
    vector<int> test2 = { 1, 2, 3, 4, 5 };
    cout << "Test 2 - Expected: 5, Got: " << removeDuplicates(test2) << endl;

    // Test 3: All duplicates
    vector<int> test3 = { 1, 1, 1, 1 };
    cout << "Test 3 - Expected: 1, Got: " << removeDuplicates(test3) << endl;

    // Test 4: Some duplicates
    vector<int> test4 = { 1, 2, 2, 3, 4, 4, 4, 5 };
    cout << "Test 4 - Expected: 5, Got: " << removeDuplicates(test4) << endl;

    // Test 5: Large vector
    vector<int> test5(10000, 1); // A vector of 10000 '1's
    cout << "Test 5 - Expected: 1, Got: " << removeDuplicates(test5) << endl;
}