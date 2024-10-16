def main():
    t = int(input())
    while t > 0:
        t -= 1
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        is_sorted = True

        for i in range(1, n):
            if a[i] < a[i - 1]:
                is_sorted = False
                break

        if is_sorted:
            print("YES")
        else:
            if 1 < k <= n:
                print("YES")
            else:
                print("NO")

if __name__ == "__main__":
    main()