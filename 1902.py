def test(num):
    if num == 1:
        print(num)
    else:
        print(num)
        num -= 1
        test(num)


num = int(input())

test(num)
