# Imports
import sys
import time

# slow_print function: Allows program to imitate human typing
def slow_print(str):
    for i in str:
        sys.stdout.write(i)
        sys.stdout.flush()
        time.sleep(.11)

# Define Grid Structure Function: Allows the user to provide parameters that determine the size of the grid.
def grid_param():
    slow_print("Please provide parameters for the grid")
    print()
    try:
        rows = int(input("Enter the number of rows: "))
        columns = int(input("Enter the number of columns: "))
        return rows, columns
    except ValueError:
        slow_print("Please enter valid numbers.")

# Display Grid Function: Displays Grid
def grid_display(grid):
    for row in grid:
        print(" ".join(row))

# Start and End Function: Allows the user to set the location of the start and end of the grid
def collect_SG(rows, columns):
    try:
        start_row = int(input(f"Enter the starting row (0 to {rows - 1}): "))
        start_col = int(input(f"Enter the starting column (0 to {columns - 1}): "))
        goal_row = int(input(f"Enter the goal row (0 to {rows - 1}): "))
        goal_col = int(input(f"Enter the goal column (0 to {columns - 1}): "))

        if (
                0 <= start_row < rows and
                0 <= start_col < columns and
                0 <= goal_row < rows and
                0 <= goal_col < columns
        ):
            return start_row, start_col, goal_row, goal_col
        else:
            slow_print("Invalid positions. Make sure they are within grid boundaries.")
            return collect_SG(rows, columns)
    except ValueError:
        slow_print("Please enter valid numbers.")
        return collect_SG(rows, columns)

# Display Start and End in the Grid
def display_SG(grid, start_point, goal_point):
    grid[start_point[0]][start_point[1]] = 'S'
    grid[goal_point[0]][goal_point[1]] = 'G'
    for row in grid:
        print(" ".join(row))

# Obstacle Function (Bonus): Allows the user to input obstacles within the grid
def grid_obstacle(grid):
    try:
        num_obstacles = int(input("Enter the number of obstacles: "))
        for _ in range(num_obstacles):
            obstacle_row = int(input("Enter the row for obstacle: "))
            obstacle_col = int(input("Enter the column for obstacle: "))
            if grid[obstacle_row][obstacle_col] != 'S' and grid[obstacle_row][obstacle_col] != 'G':
                grid[obstacle_row][obstacle_col] = '#'
            else:
                slow_print("Obstacle cannot be placed on start or goal positions.")
    except ValueError:
        slow_print("Please enter valid numbers for obstacles.")

def get_neighbors(current_node, grid=None):
    row, col = current_node
    movements = [(1, 0), (-1, 0), (0, 1), (0, -1)]
    neighbors = []

    for dr, dc in movements:
        new_row, new_col = row + dr, col + dc
        # Check if the new position is within the grid boundaries
        if 0 <= new_row < len(grid) and 0 <= new_col < len(grid[0]):
            # Check if the new position is not an obstacle
            if grid[new_row][new_col] != 'X':
                neighbors.append((new_row, new_col))

    return neighbors

# DFS Algorithm Structure
def dfs(grid, start, goal):
    stack = [start]  # Stack for DFS
    visited = set()  # To keep track of visited nodes
    path = {start: None}  # To keep track of the path from start to each node, with None indicating the start node

    while stack:
        current_node = stack.pop()  # Pop the last node
        if current_node == goal:
            break  # Goal reached

        if current_node not in visited:
            visited.add(current_node)
            neighbors = get_neighbors(current_node, grid)  # Pass grid to get_neighbors function
            for neighbor in neighbors:
                if neighbor not in visited:
                    stack.append(neighbor)
                    path[neighbor] = current_node  # Update path with the parent node

    return path  # Return the path from start to goal

# Main function to run the program
def main():
    # Introduction Sequence
    print()
    print("*-*---*-*---*-*-*---*-*---*-*-*---*-*---*-")
    print("grid based search algorithm - Interface")
    print("Author: Ayemhenre Isikhuemhen, 02/16/2024")
    print("*-*---*-*---*-*-*---*-*---*-*-*---*-*---*-")
    print()
    slow_print("Welcome, this program demonstrates grid based algorithms")
    print()
    slow_print("You can specify a grid structure for the algorithm to traverse through")
    print()
    slow_print("Lets begin...")
    print()

   # grid_based_search program
    # Display Grid
    rows, columns = grid_param()
    grid = [['.'] * columns for _ in range(rows)]
    # Collect and Display Start and Goal
    start_row, start_col, goal_row, goal_col = collect_SG(rows, columns)
    # Display Obstacles
    grid_obstacle(grid)
    display_SG(grid, (start_row, start_col), (goal_row, goal_col))
    # DFS Program
    dfs_path = dfs(grid, (start_row, start_col), (goal_row, goal_col))
    print("DFS Path:", dfs_path)


# Run the program
if __name__ == "__main__":
    main()
