result = 1


def test(num):
    global result
    result = result * num
    num -= 1
    if num > 0:
        test(num)
    return result


num = int(input())

print(test(num))
