# Original Problem Title: Fast Arithmetics (TROC 38)
# Original Problem Link: https://tlx.toki.id/problems/troc-38/A/
# Code & Solution by: reydeuss@github

nums = list(map(int, input().split()))
result = sum(abs(num) for num in nums[1:]) + nums[0]
print(result)
