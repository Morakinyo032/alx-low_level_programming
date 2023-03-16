#!/usr/bin/python3
def ispalindrome(number=0):
    num_string = str(number)
    length = len(num_string)
    for i in range(int(length / 2)):
        if num_string[i] != num_string[length - i - 1]:
            return (False)
    return (True)
l = list(x * y for x in range(100, 999) for y in range(100, 999))
new = [x for x in l if ispalindrome(x) is True]
print(len(new))
print(max(new))
