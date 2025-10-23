#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

// Function to find a pair with a given sum using the two-pointer technique
bool findPairWithSum(std::vector<int>& arr, int targetSum) {
    // Ensure the array is sorted (crucial for the two-pointer technique)
    std::sort(arr.begin(), arr.end());

    int left = 0; // Pointer at the beginning of the array
    int right = arr.size() - 1; // Pointer at the end of the array

    while (left < right) {
        int currentSum = arr[left] + arr[right];

        if (currentSum == targetSum) {
            std::cout << "Pair found: (" << arr[left] << ", " << arr[right] << ")" << std::endl;
            return true; // Pair found
        } else if (currentSum < targetSum) {
            left++; // Move left pointer to increase the sum
        } else {
            right--; // Move right pointer to decrease the sum
        }
    }
    std::cout << "No pair found with the target sum." << std::endl;
    return false; // No pair found
}

int main() {
    std::vector<int> numbers = {2, 7, 11, 15, 3, 6};
    int target = 9;

    findPairWithSum(numbers, target); // Example 1

    std::vector<int> anotherNumbers = {1, 2, 3, 4, 5};
    int anotherTarget = 10;

    findPairWithSum(anotherNumbers, anotherTarget); // Example 2

    return 0;
}
