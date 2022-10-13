import sys

sys.setrecursionlimit(10000)
mem_dict = dict()


def min_with(atm, x):
    if x == 0:
        return x
    if len(atm) == 0:
        return -1
    if sum(atm) < x:
        return -1

    def use_recursion(arr, start, end, y):
        if y == 0:
            return 0
        if y < 0 or start > end:
            return len(arr) + 1
        res = mem_dict.get((start, end, y))
        if res is None:
            left, right = use_recursion(arr, start + 1, end, y - arr[start]), use_recursion(arr, start, end - 1,
                                                                                            y - arr[end])
            res = 1 + min(left, right)
            mem_dict[(start, end, y)] = res
        return res

    reus = use_recursion(atm, 0, len(atm) - 1, x)
    return -1 if reus > len(atm) else reus


def main():
    n = int(input())
    atm = []
    for j in range(n):
        amt = int(input())
        atm.append(amt)

    x = int(input())
    result = min_with(atm, x)
    print(result)


if __name__ == '__main__':
    main()
