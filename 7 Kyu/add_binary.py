'''
a function that adds two numbers together and returns their sum in binary
'''

def add_binary(a,b):
    ans = a + b
    return bin(ans)[2:]
