"""
Solving https://open.kattis.com/problems/knotknowledge

Kaiya Magnuson, 7/23/2024

Strategy: Use set difference

"""

num_knots = input()
a = input().split(" ")
all_knots = set(a)
b = input().split(" ")
known_knots = set(b)

print((all_knots - known_knots).pop())