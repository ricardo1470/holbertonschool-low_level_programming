#!/usr/yin/python3
""" create function """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid """

    len_grid = len(grid)

    i = 0

    if grid != []:
        ncol = len(grid[0])

    for j in range(len_grid):
        for k in range(ncol):
            if grid[j][k] == 1:
                if (j - 1) == -1 or grid[j - 1][k] == 0:
                    i += 1
                if (j + 1) == len_grid or grid[j + 1][k] == 0:
                    i += 1
                if (k - 1) == -1 or grid[j][k - 1] == 0:
                    i += 1
                if (k + 1) == ncol or grid[j][k + 1] == 0:
                    i += 1

    return i
