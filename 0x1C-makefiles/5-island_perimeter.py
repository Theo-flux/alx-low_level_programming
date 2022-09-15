#!/usr/bin/python3
"""
5-island_perimeter
"""
def island_perimeter(grid):
    """function that returns the perimeter of the
    island described in the grid
    """
    width = len(grid[0])
    height = len(grid)
    perimeter = 0
    size = 0

    for i in range(0, height):
        for j in range(0, width):
            if(grid[i][j] == 1):
                sides = 0
                if(i == 0):
                    sides += 1
                else:
                    sides += (grid[i - 1][j] == 0);
                if(j == 0):
                    sides += 1
                else:
                    sides += (grid[i][j - 1] == 0);
                if(i == width - 1):
                    sides += 1
                else:
                    sides += (grid[i + 1][j] == 0)
                if(j == height - 1):
                    sides += 1
                else:
                    sides += (grid[i][j + 1] == 0)
                perimeter += sides

    return perimeter

