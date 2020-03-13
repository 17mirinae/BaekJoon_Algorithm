number = 0
final = num = int(input())

while True:    
    temp = num // 10 + num % 10
    rst = (num % 10) * 10 + temp % 10
    number = number + 1
    num = rst

    if rst == final:
        break

print(number)
