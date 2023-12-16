x, y = input("Input \n").split()

print('\nOutput')
for i in range(1, 51):
        if i % int(x) == 0:
            print(y, end=" ")
        else:
            print(i, end=" ")