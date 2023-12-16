x, y = map(int, input("Input \n").split())

print("\nOutput")
if x < y:
    for i in range(x, y + 1, +1): # tidak pakai +1 (increment) juga tidak apa
        j = y - (i - x)
        print(i, j, end=" - " if i != y else "")
else:
    for i in range(x, y - 1, -1):
        j = y + (x - i)
        print(i, j, end=" - " if i !=y else "")