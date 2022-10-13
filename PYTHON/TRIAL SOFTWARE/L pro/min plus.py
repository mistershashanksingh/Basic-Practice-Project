import sys

sys.setrecursionlimit(10000)

memo_dict = dict()
sum_dict = dict()


def min_plus(a):
    def __add(__str):
        __sum = sum_dict.get(__str)
        if __sum is None:
            __new_str = list(map(int, __str.split("+")))
            __sum = sum(__new_str)
            sum_dict[__str] = __sum
        return __sum

    def get_val(__str):
        res_ = __str.split("=")
        return res_[0], int(res_[1])

    def use_rec(__str, idx, val):
        if __add(__str) == val:
            return 0
        if val >= 5000:  # This line defines the value of not exceeds zero
            return -1  # That's y it return zero
        if idx >= len(__str) - 1:
            return 999999

        res_ = memo_dict.get(__str)
        if res_ is None:
            left = 1 + use_rec(__str[:idx + 1] + "+" + __str[idx + 1:], idx + 2, val)
            right = use_rec(__str, idx + 1, val)
            res_ = min(left, right)
            memo_dict[__str] = res_
        return res_

    tup = get_val(a)
    res = use_rec(tup[0], 0, tup[1])
    return -1 if res >= 999999 else res


def main():
    a = (input())
    result = min_plus(a)
    print(result)


if __name__ == '__main__':
    main()
