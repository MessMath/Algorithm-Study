import math

N = list(input())
numList = [0] * 10
for i in range(len(N)):
    if N[i] == '6' or N[i] == '9':
        numList[6] += 1
    else: numList[int(N[i])] += 1
numList[6] = math.ceil(numList[6] / 2)
print(max(numList))