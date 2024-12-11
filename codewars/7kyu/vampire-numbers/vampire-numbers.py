# Code and solution by Reydeuss @ Github
# Original Problem Title: Vampire Numbers (7 kyu)
# Original Problem Link: https://www.codewars.com/kata/54d418bd099d650fa000032d

from collections import Counter

def vampire_test(x, y):
    return (Counter(str(x)) + Counter(str(y))) == Counter(str(x * y))

# Sample case
# assert vampire_test(6, 21) == True
# assert vampire_test(10, 11) == False
