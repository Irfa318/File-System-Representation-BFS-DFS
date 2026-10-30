
# File System Representation and Search Using BFS and DFS

## Project Overview
This project implements a file system representation using a graph data structure in C programming. Each file or directory is represented as a node, and the connections between them are represented as edges using an adjacency matrix.

The project uses Breadth-First Search (BFS) and Depth-First Search (DFS) algorithms to search for a specified file or directory.

## Objectives
- To represent a file system as a graph.
- To implement an adjacency matrix.
- To perform Breadth-First Search (BFS).
- To perform Depth-First Search (DFS).
- To search and identify a specified file or directory.

## Technologies Used
- Programming Language: C
- Data Structure: Graph
- Graph Representation: Adjacency Matrix
- Algorithms: BFS and DFS
- Compiler: GCC

## Algorithms Used

### 1. Breadth-First Search (BFS)
BFS visits nodes level by level using a queue. It searches the connected files and directories starting from the given node.

### 2. Depth-First Search (DFS)
DFS explores one path as deeply as possible before backtracking. It uses recursion to visit connected nodes.

## How to Run the Program

1. Download or clone this repository.
2. Open the project in VS Code.
3. Compile the C program using:

```bash
gcc main.c -o main
```

4. Run the program:

```bash
./main
```

For Windows:

```bash
main.exe
```

## Sample Input

```text
Number of files/directories: 5

Node 0: Root
Node 1: Documents
Node 2: Pictures
Node 3: Notes
Node 4: Resume

Adjacency Matrix:
0 1 1 0 0
0 0 0 1 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0

Starting node: 0
File to search: Resume
```

## Sample Output

```text
BFS Traversal:
Root Documents Pictures Notes Resume

File found using BFS.

DFS Traversal:
Root Documents Notes Resume Pictures

File found using DFS.
```

## Conclusion

This project demonstrates how a file system can be represented using a graph and how BFS and DFS algorithms can be used to search for files and directories efficiently.

## Author
Irfana N

UKF College of Engineering & Technology
Third Semester
