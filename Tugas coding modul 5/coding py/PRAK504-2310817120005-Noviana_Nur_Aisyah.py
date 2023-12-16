def reverse(x):
    rev = 0

    while x != 0:
        rev = rev * 10 + x % 10
        x //= 10 

    return rev

def main():
    A, B = map(int, input().split())
    A = reverse(A)
    B = reverse(B)
    C = A + B
    print(reverse(C))

main()