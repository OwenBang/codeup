n = 1


def test(num):
    global n
    if n == num:
        print(n)
    else:
        print(n)
        n += 1
        test(num)


num = int(input())

test(num)
