#!/usr/bin/python3
'''Python module containing island_perimeter function'''


def island_perimeter(grid):
    '''Function to find the perimeter of an 'island' in a list of lists'''
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 0:
                continue
            else:
                if i == len(grid) - 1 or grid[i+1][j] == 0:
                    perimeter += 1
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                if j == len(grid[i]) - 1 or grid[i][j+1] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
    return(perimeter)
