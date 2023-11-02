# Search Algorithms Explained with Pseudocode

## 1. Depth-First Search (DFS)

DFS is like exploring a deep cave: you keep going as far as you can, and when you reach a dead-end, you backtrack and try another path. The key data structure here is a **stack**, either explicitly or via recursion.

### Pseudocode:
```cpp
DFS(node):
    if node is visited:
        return
    mark node as visited
    for each neighbor of node:
        DFS(neighbor)
```

## 2. Binary Search

Imagine you're looking for a word in a dictionary. Instead of reading every word, you open it in the middle, see if your word comes before or after the middle word, and then eliminate half the dictionary. You repeat this process, halving the search space each time.

### Pseudocode:
```cpp
BinarySearch(array, target):
    low = 0, high = array.size() - 1
    while low <= high:
        mid = (low + high) / 2
        if array[mid] == target:
            return mid
        else if array[mid] < target:
            low = mid + 1
        else:
            high = mid - 1
    return not found
```

## 3. Linear Search (Sequential Search)

This is like looking for a book on a shelf by examining each book one by one from left to right until you find what you're after.

### Pseudocode:
```cpp
LinearSearch(array, target):
    for i from 0 to array.size():
        if array[i] == target:
            return i
    return not found
```

## 4. Uniform Cost Search

Imagine you want to find the cheapest way to travel between cities. Even if one route is shorter, if another is cheaper, you'll prefer it. The primary data structure used is a **priority queue** to keep track of the cheapest path.

### Pseudocode:
```cpp
UniformCostSearch(start, goal):
    queue = empty priority queue
    queue.add(start, cost=0)
    while queue is not empty:
        current = queue.pop()
        if current == goal:
            return success
        for each neighbor of current:
            cost = calculate cost to neighbor
            queue.add(neighbor, cost)
```

## 5. A* Search Algorithm

Imagine you're driving and using a GPS. A* not only considers how far you've traveled but also estimates how far you are from your destination, aiming to find the fastest route. The **priority queue** is vital here, prioritizing paths that seem faster.

### Pseudocode:
```cpp
AStarSearch(start, goal):
    queue = empty priority queue
    queue.add(start, cost=0)
    while queue is not empty:
        current = queue.pop()
        if current == goal:
            return success
        for each neighbor of current:
            cost = calculate cost to neighbor + heuristic(neighbor)
            queue.add(neighbor, cost)
```

## 6. Dijkstra's Algorithm

Imagine you're at the center of a spider web. Dijkstra's algorithm will find the shortest path to every other point on the web, starting from you. A **priority queue** is used to always pick the next closest point.

### Pseudocode:
```cpp
Dijkstra(start):
    distances = initialize distances to INFINITY
    distances[start] = 0
    while there are unvisited nodes:
        current = node with shortest distance
        for each neighbor of current:
            calculate new distance to neighbor
            if new distance < current distance of neighbor:
                update distance of neighbor
    return distances
```
