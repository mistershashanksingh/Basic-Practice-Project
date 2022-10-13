def but_func(n):
    __sum = 0
    while n > 9:
        last_digit = n % 10
        __sum += 10 - last_digit
        n //= 10
        n += 1
        while n % 10 == 0:
            n //= 10
    return __sum + 9


def main():
    n = int(input())
    result = but_func(n)
    print(result)


if __name__ == '__main__':
    main()
