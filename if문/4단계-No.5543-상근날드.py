high = int(input())
middle = int(input())
low = int(input())
coke = int(input())
soda = int(input())

if high <= middle:
    burger = high
else:
    burger = middle

if burger > low:
    burger = low

if coke < soda:
    drink = coke
else:
    drink = soda

print(burger + drink - 50)
