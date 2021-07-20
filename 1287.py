num = int(input())

for i in range(1, 10):
    for j in range(0, i):
        for k in range(0, num):
            print("*", end='')
    print()
