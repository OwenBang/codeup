str1 = input()
str2 = ""
for i in str1:
    if i == ',':
        str2 = str2 + ' '
    elif i == ';':
        str2 = str2 + '\n'
    elif i == ' ':
        pass
    else:
        str2 = str2 + i

print(str2)
