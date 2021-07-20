import sys
sys.setrecursionlimit(100000)

n = 1
total = 0


def test(num):
    global n
    global total
    total += n
    n += 1
    if n <= num:
        test(num)

    return total


num = int(input())

print(test(num))
