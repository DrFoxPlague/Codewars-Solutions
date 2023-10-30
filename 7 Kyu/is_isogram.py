'''
A function that determines whether a string that contains only letters is an isogram.

Assumes empty strings are isograms.

Ignores letter case
'''

def is_isogram(string):
    strInput = string.lower()
    letterTrack = set()
    
    for x in strInput:
        if not x.isalpha():
            continue
        
        if x in letterTrack:
            return False
        
        letterTrack.add(x)
        
    return True
