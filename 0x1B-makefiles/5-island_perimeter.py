#!/usr/bin/python3
""" island perimeter module
"""


def island_perimeter(grid):
    """ finds perimeter of island if island is 1s in a matrix of 0s
    """
    perimeter = 0
    for grid_index, line in enumerate(grid):
        for line_index, digit in enumerate(line):
            if digit is 1:
                if grid_index is 0 or grid[grid_index - 1][line_index] is 0:
                    perimeter += 1
                if line_index is 0 or line[line_index - 1] is 0:
                    perimeter += 1
                if line_index is len(line) - 1 or line[line_index + 1] is 0:
                    perimeter += 1
                if grid_index is len(grid) - 1 or grid[grid_index
                                                       + 1][line_index] is 0:
                    perimeter += 1
    return perimeter
