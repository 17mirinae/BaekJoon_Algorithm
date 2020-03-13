import sys

arr, number = map(int, input().split())
arrList = list(map(int, input().split()))

for i in range(arr):
      if arrList[i] < number:
            print(arrList[i], end = " ")
