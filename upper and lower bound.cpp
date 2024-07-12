//Lower bound-arr[ind]>=x
//Upper bound-arr[ind]>x
//ceil-arr[ind]>=x  {smallest number in array >=x}
//floor -largest number in array <=x

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Sample vector
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // Target value
    int target = 5;
    
    // Find the lower bound
    auto lower = std::lower_bound(vec.begin(), vec.end(), target);
    
    // Find the upper bound
    auto upper = std::upper_bound(vec.begin(), vec.end(), target);
    
    // Print the results
    std::cout << "Lower bound of " << target << " is at position: " 
              << (lower - vec.begin()) << std::endl;
    
    std::cout << "Upper bound of " << target << " is at position: " 
              << (upper - vec.begin()) << std::endl;
    
    return 0;
}
//In the code above, for a target value of 5:
//The lower_bound will point to the element 5 (index 4).
//The upper_bound will point to the element 6 (index 5).
