x, y = map(int, input("Input \n").split())
sum = 0
sum2 = 0

print("\nOutput")
for i in range(1, x + 1):
    kali = i * y
    sum += kali
    if i == 1:
        print(f"({i} * {y}) = {kali}")
    else:
        for j in range(i, 0, -1):
            print(f"({j} * {y})", end="")
            if j > 1:
                print(" + ", end="")
        print(f" = {sum}")
    sum2 += sum

print(sum2)