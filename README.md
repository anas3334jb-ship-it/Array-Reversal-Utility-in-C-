# Array Reversal Utility in C++

A high-performance, memory-safe C++ utility designed to reverse an array in-place using modern C++ standards and optimal complexity.

##  Features
* **In-Place Reversal:** Operates directly on the vector to save memory.
* **Modern C++ Standards:** Utilizes `std::vector` for dynamic sizing and safety, avoiding raw array pointer decay.
* **Standard Library Optimization:** Leverages `<algorithm>` (`std::reverse`) under the hood for maximum compiler-level efficiency.

##  Complexity Analysis
* **Time Complexity:** $O(n)$ — Traverses the elements linearly to swap them.
* **Space Complexity:** $O(1)$ — Auxiliary space is constant as the reversal is performed in-place.
