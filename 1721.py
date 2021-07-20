import math

x1, y1 = input().split()
x2, y2 = input().split()
x1 = eval(x1)
y1 = eval(y1)
x2 = eval(x2)
y2 = eval(y2)
#x1 = float(input())
#y1 = float(input())
#x2 = float(input())
#y2 = float(input())

result = format(math.sqrt(math.pow(x1 - x2, 2) + math.pow(y1 - y2, 2)), ".2f")

print(result)
