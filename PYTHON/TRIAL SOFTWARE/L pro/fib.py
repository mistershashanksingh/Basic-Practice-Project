def fib(n):
    a = 0
    b = 1
    if n == 1:
        return a
    else:
        for i in range(0, n):
            print(a)
            n = a + b
            a = b
            b = n


def main():
    print("Enter the number for knowing fibonacci ")
    n = int(input())
    result = fib(n)
    print(result)


if __name__ == '__main__':
    main()
