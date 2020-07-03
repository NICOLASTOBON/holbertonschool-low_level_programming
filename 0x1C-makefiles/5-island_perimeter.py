#!/usr/bin/python3
""" module """

def island_perimeter(grid):
    """ Island perimeter """
    value = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                value += 2
                if i > 0 and grid[i - 1][j] == 1:
                    value -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    value -= 1
  
    return value * 2
