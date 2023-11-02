
## C++ Containers Overview

Containers in C++ are objects that store collections of other objects. They're fundamental in the C++ Standard Library, providing structures to efficiently store, access, and manipulate data.

### 1. Sequence Containers
- Store elements linearly.
  - `vector`: Dynamic array, resizable.
  - `list`: Doubly-linked list.
  - `deque`: Double-ended queue, insert/delete at both ends.
  - `array` (C++11): Static-size array.
  - `forward_list` (C++11): Singly-linked list.

### 2. Associative Containers
- Store elements with keys for fast retrieval.
  - `set`: Unique keys, sorted.
  - `multiset`: Like `set`, but allows duplicate keys.
  - `map`: Key-value pairs, unique and sorted keys.
  - `multimap`: Like `map`, but allows duplicate keys.

### 3. Unordered Associative Containers (C++11)
- Use hashing, so elements aren't sorted.
  - `unordered_set`: Hashed collection of unique keys.
  - `unordered_multiset`: Allows duplicate keys.
  - `unordered_map`: Hashed key-value pairs.
  - `unordered_multimap`: Allows duplicate key-value pairs.

### 4. Container Adapters
- Adapt existing containers with specific functionalities.
  - `stack`: Last-In-First-Out (LIFO) structure.
  - `queue`: First-In-First-Out (FIFO) structure.
  - `priority_queue`: Highest (or lowest) priority element first.

Choose a container based on your primary operations (insertion, deletion, access) and the performance needs of those operations.
*
