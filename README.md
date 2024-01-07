## Overview

The `removeDuplicates` function takes a reference to a vector of integers and removes all duplicate elements from it. The function then returns the new size of the vector. This project also includes a comprehensive suite of tests to ensure the correctness of the function across various scenarios.

### Algorithm

The core algorithm of `removeDuplicates` utilizes the `std::unique` function from the C++ Standard Library. The `std::unique` function reorders elements in the vector such that all duplicates are placed at the end of the vector, then returns an iterator pointing just past the last unique element. Following this, the `std::vector::erase` method is used to remove these duplicate elements.

#### Example

```cpp
std::vector<int> nums = {1, 2, 2, 3, 4, 4, 4, 5};
auto newSize = removeDuplicates(nums);
// nums is now {1, 2, 3, 4, 5}
```

## Time and Space Complexity

- **Time Complexity**: The time complexity of `removeDuplicates` is O(N), where N is the number of elements in the vector. This efficiency is due to the linear time complexity of `std::unique`.

- **Space Complexity**: The space complexity is O(1), meaning it's constant. The function modifies the vector in place and does not require any additional space proportional to the input size.

## Potential Improvements

1. **Handling Larger Data Sets**: For extremely large vectors, consider implementing more sophisticated algorithms or parallel processing to enhance performance.

2. **Custom Comparison Function**: Allow custom comparison functions to be passed to handle more complex data structures or specific duplication criteria.

3. **Return Updated Vector**: Modify the function to return the updated vector directly, making it more intuitive and in line with functional programming practices.

4. **Exception Handling**: Implement robust exception handling to manage scenarios like invalid inputs.

5. **Optimization for Sorted Vectors**: For sorted vectors, the algorithm can be optimized to skip already checked elements.

## Building and Running the Tests

To build and run the tests, follow these steps:

```sh
g++ -o vectorDuplicateRemover main.cpp
./vectorDuplicateRemover
```
