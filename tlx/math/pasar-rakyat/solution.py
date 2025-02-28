# Original Problem Title: Pasar Rakyat (OSN Informatika 2010 no. 2E)
# Original Problem Link: https://tlx.toki.id/problems/osn-2010/2E/
# Code & Solution by: reydeuss@github

def gcd(a, b):
    while a % b != 0:
        a, b = b, a % b

    return b

def lcm(a, b):
    return a * b // gcd(a, b)

n = int(input())
x = int(input())
y = None
for _ in range(1, n):
    y = int(input())
    x = lcm(x, y)

print(x)
