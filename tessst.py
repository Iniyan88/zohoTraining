import math

# Function to check if a number is a perfect square
def is_perfect_square(n):
    return n == math.isqrt(n) ** 2

# Function to calculate the weight of a number
def calculate_weight(n):
    weight = 0
    if is_perfect_square(n):
        weight += 5
    if n % 4 == 0 and n % 6 == 0:
        weight += 4
    if n % 2 == 0:
        weight += 3
    return weight

# List of numbers
numbers = [10, 36, 54, 89, 12]

# Create a list of tuples (number, weight)
weighted_numbers = [(n, calculate_weight(n)) for n in numbers]
print(weighted_numbers)

# Sort the list based on weight
sorted_weighted_numbers = sorted(weighted_numbers, key=lambda x: x[1])
print(sorted_weighted_numbers);

# Print the sorted list in the required format
for num, weight in sorted_weighted_numbers:
    print(f"<{num},{weight}>")
