def test(a, b):
    if (a % 2 == 1):
        if(a <= b):
            print(a, end=" ")
            a += 2
            test(a, b)
    else:
        a += 1
        if(a <= b):
            print(a, end=" ")
            a += 2
            test(a, b)


a, b = input().split()
a = eval(a)
b = eval(b)

test(a, b)
