Different algorthms in c programming

Breadth First Search (BFS) for a Graph Algorithm:
Let’s discuss the algorithm for the BFS:

Initialization: Enqueue the starting node into a queue and mark it as visited.
Exploration: While the queue is not empty:
Dequeue a node from the queue and visit it (e.g., print its value).
For each unvisited neighbor of the dequeued node:
Enqueue the neighbor into the queue.
Mark the neighbor as visited.
Termination: Repeat step 2 until the queue is empty.
This algorithm ensures that all nodes in the graph are visited in a breadth-first manner, starting from the starting node.

How Does the BFS Algorithm Work?
Starting from the root, all the nodes at a particular level are visited first and then the nodes of the next level are traversed till all the nodes are visited.

To do this a queue is used. All the adjacent unvisited nodes of the current level are pushed into the queue and the nodes of the current level are marked visited and popped from the queue.

Illustration:

Let us understand the working of the algorithm with the help of the following example.

Step1: Initially queue and visited arrays are empty.


Queue and visited arrays are empty initially.

Step2: Push node 0 into queue and mark it visited.

Push node 0 into queue and mark it visited.
Push node 0 into queue and mark it visited.

Step 3: Remove node 0 from the front of queue and visit the unvisited neighbours and push them into queue.

Remove node 0 from the front of queue and visited the unvisited neighbours and push into queue.
Remove node 0 from the front of queue and visited the unvisited neighbours and push into queue.

Step 4: Remove node 1 from the front of queue and visit the unvisited neighbours and push them into queue.

Remove node 1 from the front of queue and visited the unvisited neighbours and push
Remove node 1 from the front of queue and visited the unvisited neighbours and push

Step 5: Remove node 2 from the front of queue and visit the unvisited neighbours and push them into queue.

Remove node 2 from the front of queue and visit the unvisited neighbours and push them into queue.
Remove node 2 from the front of queue and visit the unvisited neighbours and push them into queue.

Step 6: Remove node 3 from the front of queue and visit the unvisited neighbours and push them into queue.
As we can see that every neighbours of node 3 is visited, so move to the next node that are in the front of the queue.

Remove node 3 from the front of queue and visit the unvisited neighbours and push them into queue. 
Remove node 3 from the front of queue and visit the unvisited neighbours and push them into queue.

Steps 7: Remove node 4 from the front of queue and visit the unvisited neighbours and push them into queue.
As we can see that every neighbours of node 4 are visited, so move to the next node that is in the front of the queue.

Remove node 4 from the front of queue and and visit the unvisited neighbours and push ithem into queue. 
Remove node 4 from the front of queue and visit the unvisited neighbours and push them into queue.

Now, Queue becomes empty, So, terminate these process of iteration.
Depth First Search or DFS for a Graph
Last Updated : 31 Jul, 2024
Depth First Traversal (or DFS) for a graph is similar to Depth First Traversal of a tree. The only catch here is, that, unlike trees, graphs may contain cycles (a node may be visited twice). To avoid processing a node more than once, use a boolean visited array. A graph can have more than one DFS traversal.

Example:

Input: n = 4, e = 6
0 -> 1, 0 -> 2, 1 -> 2, 2 -> 0, 2 -> 3, 3 -> 3
Output: DFS from vertex 1 : 1 2 0 3
Explanation:
DFS Diagram:

Example 1
Example 1

Input: n = 4, e = 6
2 -> 0, 0 -> 2, 1 -> 2, 0 -> 1, 3 -> 3, 1 -> 3
Output: DFS from vertex 2 : 2 0 1 3
Explanation:
DFS Diagram:

Example 2
Example 2

How does DFS work?
Depth-first search is an algorithm for traversing or searching tree or graph data structures. The algorithm starts at the root node (selecting some arbitrary node as the root node in the case of a graph) and explores as far as possible along each branch before backtracking.
