'''
A which takes a sequence as argument and returns a list of 
items without any elements with the same value next 
to each other and preserving the original order of elements.
'''

def unique_in_order(sequence):
    seqList = list(sequence)
    x = 1

    if len(seqList) == 0 or len(seqList) == 1:
        return seqList
    else:
        while x < len(seqList):
            if seqList[x] == seqList[(x-1)]:
                del seqList[x]
            else:
                x += 1
        return seqList
