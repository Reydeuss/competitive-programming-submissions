# Code & Solution by: Reydeuss @ Github
# Original Problem Title: Who likes it?
# Original problem link: https://www.codewars.com/kata/5266876b8f4bf2da9b000362/

def likes(names):
    length = len(names)
    if length == 0:
        return "no one likes this"
    
    if length == 1:
        return f"{names[0]} likes this"
    
    if length == 2:
        return f"{names[0]} and {names[1]} like this"
    
    if length == 3:
        return f"{names[0]}, {names[1]} and {names[2]} like this"

    return f"{names[0]}, {names[1]} and {length - 2} others like this"
