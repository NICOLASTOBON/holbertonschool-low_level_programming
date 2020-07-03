#!/usr/bin/python3


def island_perimeter(grid):
    """ Island perimeter """
    value = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                value += 1
                if grid[i - 1][j] == 1 and grid[i][j + 1] == 1:
                    value += 1

    return int(value * 4 / 2)
