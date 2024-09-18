"""
Solving https://www.metacareers.com/profile/coding_puzzles

Kaiya Magnuson, 7/27/2024

Includes multiple puzzles

"""
# Puzzle 1

def getWrongAnswers(N: int, C: str) -> str:
  # Write your code here
  wrong_ans = ''
  for i in range(0, len(C)):
    if (C[i] == 'A'):
      wrong_ans = wrong_ans + 'B'
    else:
      wrong_ans = wrong_ans + 'A'

  print(wrong_ans)
    
  return wrong_ans

# --- CLI Testing ---
# N = input()
# C = input()
# getWrongAnswers(N, C)

# ------------------------------------------------------------------------------
# Puzzle 2

from typing import List
# Write any import statements here

def getHitProbability(R: int, C: int, G: List[List[int]]) -> float:
  # Write your code here
  hit_count = 0

  for row in G:
    for cell in row:
      if (cell == 1):
        hit_count = hit_count + 1
        
  return (R * C) / hit_count

# --- Testing ---
# R = 2
# C = 3
# G = [[0, 1, 1], [0, 0, 1]]
# print(getHitProbability(R, C, G))

# ------------------------------------------------------------------------------
# Puzzle 3

from typing import List
# Write any import statements here

def getMaxAdditionalDinersCount(N: int, K: int, M: int, S: List[int]) -> int:
  # Between any two diners:
    # num additions = (round down) (distance - K) / (K + 1)
    # X - - - - X 4 - 1/ 1 + 1 = 1
  # Between diner and the end:
    # num additions = (round down) distance / (K + 1)
    # - - - - X  4 / 2 + 1 = 1
    
  S.sort()
  l_dist = S[0]
  print("l_dist", l_dist)
  num_additions = int((l_dist) / (K + 1))

  print("l num:", num_additions)
  for i in range(0, len(S) - 1):
    dist = S[i + 1] - S[i] -1
    print("S[i]", S[i], "S[i+1]", S[i+1], "dist:", dist)
    num_additions = num_additions + int((dist - K) / (K + 1))
    print(num_additions)
  
  r_dist =  N - S[-1]
  print("r_dist", r_dist)
  num_additions = num_additions + int((r_dist) / (K + 1))
  print(num_additions)
  return num_additions

# --- Testing ---
N = 10  # number of seats
K = 1   # minimum chairs between diners
M = 2   # number of current diners
S = [2, 6]  # positions of current diners
print(getMaxAdditionalDinersCount(N, K, M, S))
# - - X - - - X - - -

print("------------")
N = 15
K = 2
M = 3
S = [11, 6, 14]
print(getMaxAdditionalDinersCount(N, K, M, S))

# - - - - - - X - - - - X - - X -

print("------------")
N = 14
K = 1
M = 3
S = [5, 8, 12]
print(getMaxAdditionalDinersCount(N, K, M, S))
# ~ - - ~ - 5 - - 8 - ~ - - 12 - ~