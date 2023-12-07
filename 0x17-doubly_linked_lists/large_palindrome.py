#!/usr/bin/python3

def _palindrome(n):
    return str(n) == str(n)[::-1]

def large_palindrome_prod():
    max_palindrome = 0

    for i in range(100, 1000):
        for j in range(100, 1000):
            product = i * j
            if _palindrome(product) and product > max_palindrome:
                max_palindrome = product

    return max_palindrome

result = large_palindrome_prod()

with open("102-result", "w") as file:
    file.write(str(result))
