import sys

times = int(input())

for line in range(times):
    a, b = map(int, sys.stdin.readline().split())
    print(a + b)
