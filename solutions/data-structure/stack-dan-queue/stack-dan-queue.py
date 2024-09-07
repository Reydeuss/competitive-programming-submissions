# Submission & solution by Reydeus
# Title: Stack dan Queue
# Original Problem: https://tlx.toki.id/problems/osn-2009/2E
# Submission: https://tlx.toki.id/problems/osn-2009/2E/submissions/2405349

n = int(input())

nums = []

for i in range(n):
  s = input().split()
  match s[0]:
    case "push_back":
      nums.append(s[1])
    case "push_front":
      nums.insert(0, s[1])
    case "pop_back":
      nums.pop()
    case "pop_front":
      nums.pop(0)

for num in nums:
  print(num)
