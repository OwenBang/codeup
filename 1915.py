def test(num):
    if num == 0:
        return 0
    elif num == 1:
        return 1
    else:
        return test(num - 1) + test(num - 2)


num = int(input())

print(test(num))
