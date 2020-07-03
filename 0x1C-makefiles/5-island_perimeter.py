#!/usr/bin/python3
""" create function """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid """

    count = 0
    count2 = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                count += 1
                if i != 0 and grid[i - 1][j] == 1:
                    count2 += 1
                if j != 0 and grid[i][j - 1] == 1:
                    count2 += 1

    return 4 * count - 2 * count2
