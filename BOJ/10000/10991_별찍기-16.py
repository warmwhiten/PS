N = int(input())

for i in range(0, N):
    print(" " * (N - 1 - i) + "*", end="")
    for j in range(0, i):
        print(" *", end = "")
    print("")
