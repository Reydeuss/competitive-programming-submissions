# Code & Solution by: Reydeuss @ Github
# Problem Title: Faktorial
# Problem Description: Count the trailing zeros of the result of N!, where 1 <= N <= 10,000.
# Problem Link: https://tlx.toki.id/problems/osn-2006/A

n = int(input())
count = 0

while n >= 5:
    n /= 5
    count += int(n)

print(count)
