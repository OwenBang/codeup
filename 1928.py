def test(num):
    print(num)
    if num == 1:
        print(end='')
    elif (num % 2) == 1:
        test(3 * num + 1)
    else:
        test(int(num / 2))


num = int(input())

test(num)
