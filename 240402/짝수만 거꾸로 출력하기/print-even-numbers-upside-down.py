n = int(input())
num = list(map(int, input().split()))
stack = []

for i in range(len(num)):
    if num[i] % 2 == 0:
        stack.append(num[i])
    else:
        continue

print(*stack[::-1])