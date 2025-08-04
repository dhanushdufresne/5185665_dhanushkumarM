import math
import os
import random
import re
import sys


def plusMinus(arr):
    positive = 0
    negative=0
    zero=0
    total =len(arr)
    for num in arr:
        if num>0:
            positive+=1
        elif num<0:
            negative+=1
        else:
            zero+=1
    print(positive/len(arr))
    print(negative/len(arr))
    print(zero/len(arr))

if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)