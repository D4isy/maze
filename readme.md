# maze
Create and solve mazes in Python.

## How to use
```python
from maze import *

m = Maze()
m.create(25, 25, Maze.Create.BACKTRACKING)
m.save_maze()
m.solve((0, 0), (24, 24), Maze.Solve.DEPTH)
m.save_solution()
```
The code above creates the following pictures:

![maze.png](https://raw.githubusercontent.com/jsmolka/maze/master/example/maze.png) ![solution.png](https://raw.githubusercontent.com/jsmolka/maze/master/example/solution.png)

## Algorithms
### Creating
- Recursive backtracking algorithm
- Hunt and kill algorithm
- Eller's algorithm
- Sidewinder algorithm
- Prim's algorithm
- Kruskal's algorithm

### Solving
- Depth-first search
- Breadth-first search

### C
The recursive backtracking algorithm and depth-first search are also implemented in C. They are around 100x faster than their Python counterparts.

## How to install
Simply go into the ```setup.py``` directory and run ```pip install .``` to install the package.

## Requirements
- NumPy
- Pillow
- [pyprocessing](https://github.com/jsmolka/pyprocessing) if you want to run the visual examples
