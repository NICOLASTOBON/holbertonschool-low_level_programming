#!/usr/bin/python3


def island_perimeter(grid):
    """  perimeter of the island """
    value = 0
    for i in range(len(grid)):
        for j in range(len(grid)):
            if grid[i][j] == 1:
                value += 1
    value += 1

    return value * 2
