#!/usr/bin/python3
"""
Defines an island_perimeter function
"""

def island_perimeter(grid):
	"""Returns the perimeter of the island described in grid.
	The grid represents water by 0 and land by 1.
	
	Args:
		grid (list): A list of list of integers representing an island.
	"""
	height = len(grid)
	width = len(grid[0])
	perimeter = 0
	for n in range(height):
		for m in range(width):
			if grid[n][m] == 1:
				perimeter += 4
				if (m > 0 and grid[n][m - 1] == 1):
					perimeter -= 2
				if (n > 0 and grid[n - 1][m] == 1):
					perimeter -= 2
	return perimeter
