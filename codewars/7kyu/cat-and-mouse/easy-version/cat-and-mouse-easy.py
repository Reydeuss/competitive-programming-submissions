# Code & Solution by Reydeuss @ Github
# Original Problem Title: Cat and Mouse - Easy Version
# Original Problem Link: https://www.codewars.com/kata/57ee24e17b45eff6d6000164/

def cat_mouse(x):
    return "Caught!" if len(x) <= 5 else "Escaped!"

# Sample cases
assert cat_mouse("C....m") == "Escaped!"
assert cat_mouse("C..m") == "Caught!"
assert cat_mouse("Cm") == "Caught!"
