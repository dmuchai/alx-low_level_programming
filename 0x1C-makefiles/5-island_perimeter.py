#!/usr/bin/python3
"""
This module calculates the perimeter of the island described in a grid.
"""

def island_perimeter(grid):
    """
    Calculates the perimeter of the island in a grid.
    
    Args:
        grid (list of list of int): The grid describing the map.
            0 reps water and 1 reps land.
    
    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
