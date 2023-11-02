
# Critical Data Structures for Coding Interviews

## Array
Arrays are fixed-size collections of elements. Each element can be identified by an index or a unique integer.

- **Type:** Linear, contiguous.
- **Complexities:** Access: O(1), Search: O(n), Insertion: O(n), Deletion: O(n).
- **Usage:** Known size and quick index-based access.
- **Where to Use:** Algorithms that require fast access by index, like binary search.
### Constructor Initialization:
```cpp
int arr[10];        // Declare an array of size 10
```
### Useful Tricks:
- **Range-based for iteration:** `for(const auto& val : arr) {/* use val */}`
```cpp
arr[5] = 42;        // Assignment
int val = arr[5];   // Access
```

## Vector (std::vector)
Vectors are dynamic arrays, resizing automatically when elements are added or removed. Ideal for varying data sizes.

- **Type:** Dynamic array.
- **Complexities:** Access: O(1), Search: O(n), Push_back: O(1), Insertion: O(n), Deletion: O(n).
- **Usage:** Dynamic array size, elements added or removed.
- **Where to Use:** Situations where array size can change, like implementing dynamic lists or stacks.
### Constructor Initialization:
```cpp
std::vector<int> vec;               // Empty vector
std::vector<int> vec(5);            // Vector with 5 default-initialized elements
std::vector<int> vec(5, 10);        // Vector with 5 elements, each initialized to 10
```
### Useful Tricks:
- **Resizing:** `vec.resize(10);`
- **Capacity Check:** `vec.capacity();`
- **Shrink to Fit:** `vec.shrink_to_fit();`
```cpp
vec.push_back(42);   // Add to end
vec.insert(vec.begin() + 5, 43); // Insert at position
vec.erase(vec.begin() + 5);      // Remove from position
```

## List (std::list)
`std::list` is a doubly-linked list. Allows fast insertions and deletions from both start and end.

- **Type:** Linear, non-contiguous.
- **Complexities:** Access: O(n), Search: O(n), Insertion: O(1), Deletion: O(1).
- **Usage:** Dynamic list with frequent insertions and deletions.
- **Where to Use:** Algorithms that require constant-time insertions and deletions from any position, like certain cache algorithms.
### Constructor Initialization:
```cpp
std::list<int> lst;                 // Empty list
std::list<int> lst(5);              // List with 5 default-initialized elements
std::list<int> lst(5, 10);          // List with 5 elements, each initialized to 10
```
### Useful Tricks:
- **Push to Front:** `lst.push_front(42);`
- **Pop from Front:** `lst.pop_front();`
```cpp
lst.push_back(43);   // Add to end
lst.pop_back();      // Remove from end
```

## Stack (std::stack)
Stacks are LIFO (Last In First Out) structures, much like a stack of plates. They are used to reverse items, for depth-first searches, and for tracking operations in scenarios like the "undo" functionality in software.

- **Type:** Linear.
- **Complexities:** Push: O(1), Pop: O(1), Top: O(1).
- **Usage:** Last in, first out access.
- **Where to Use:** Depth-first searches in algorithms, parsing expressions, tracking operations (e.g., undo functionality).
### Constructor Initialization:
```cpp
std::stack<int> s;
```
### Useful Tricks:
- **Checking if empty:** `if(s.empty()) {/* stack is empty */}`
```cpp
s.push(42);   // Push to top
int top_val = s.top();  // Access top
s.pop();      // Remove top
```

## Queue (std::queue)
Queues are FIFO (First In First Out) structures. They are like real-life queues or lines and are used in breadth-first searches and order processing.

- **Type:** Linear.
- **Complexities:** Enqueue: O(1), Dequeue: O(1), Front: O(1).
- **Usage:** First in, first out access.
- **Where to Use:** Breadth-first searches in algorithms, task scheduling, order processing.
### Constructor Initialization:
```cpp
std::queue<int> q;
```
### Useful Tricks:
- **Checking if empty:** `if(q.empty()) {/* queue is empty */}`
```cpp
q.push(42);   // Enqueue
int front_val = q.front();  // Access front
q.pop();      // Dequeue
```

## Priority Queue (std::priority_queue)
A queue where elements have priorities. Elements with higher priority are dequeued before those with lower priority.

- **Type:** Heap.
- **Complexities:** Insertion: O(log n), Deletion: O(log n), Max extraction: O(1).
- **Usage:** Elements with priority.
- **Where to Use:** Algorithms like Dijkstra's, Huffman coding tree, and other greedy algorithms.
### Constructor Initialization:
```cpp
std::priority_queue<int> pq;
```
### Useful Tricks:
- **Custom comparator for min-heap:** `std::priority_queue<int, std::vector<int>, std::greater<int>> min_pq;`
```cpp
pq.push(42);   // Insert
int top_val = pq.top();  // Access max
pq.pop();      // Remove max
```

## Hash Table (std::unordered_map)
A structure that stores key-value pairs and uses a hash function for rapid access based on its search key.

- **Type:** Hashed.
- **Complexities:** Average case - Access: O(1), Insertion: O(1), Deletion: O(1). Worst case - O(n) due to collisions.
- **Usage:** Fast lookups by key.
- **Where to Use:** Situations needing rapid key-based lookups, caches, frequency counters.
### Constructor Initialization:
```cpp
std::unordered_map<string, int> map;
```
### Useful Tricks:
- **Iterate through map:** `for(const auto& [key, value] : map) {/* use key and value */}`
```cpp
map["key"] = 42;  // Insert
int val = map["key"];  // Access
map.erase("key");      // Delete
```

## Set (std::set and std::unordered_set)
A collection of unique elements. `std::set` maintains order, while `std::unordered_set` does not.

- **Type:** Binary search tree (for `std::set`) and hashed (for `std::unordered_set`).
- **Complexities:** (`std::set`) - Search, Insertion, Deletion: O(log n); (`std::unordered_set`) - Average case O(1), Worst case O(n).
- **Usage:** Keep track of unique items.
- **Where to Use:** When you need to ensure uniqueness, set operations like union, intersection.
### Constructor Initialization:
```cpp
std::set<int> set;
std::unordered_set<int> uset;
```
### Useful Tricks:
- **Check for existence:** `if(set.find(42) != set.end()) {/* element exists */}`
```cpp
set.insert(42);   // Insert
set.erase(42);    // Delete
```

