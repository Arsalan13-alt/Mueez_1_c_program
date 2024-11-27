# Creating a 2D array
seating_arrangement = [
    ["Alice", "Bob", "Carol"],  # Row 0
    ["Dave", "Eve", "Frank"],   # Row 1
    ["Grace", "Helen", "Isaac"] # Row 2
]

# Accessing an element
print(seating_arrangement[0][1])  # Output: Bob (Row 0, Seat 1)

# Modifying an element
seating_arrangement[1][2] = "Francis"  # Changing "Frank" to "Francis"

# Iterating through the 2D array
for row in seating_arrangement:
    for seat in row:
        print(seat, end=" ")
    print()  # New line after each row
