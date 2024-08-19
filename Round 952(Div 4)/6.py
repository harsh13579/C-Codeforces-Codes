def main():
    t = int(input())
    while t > 0:
        t -= 1
        h, n = map(int, input().split())
        a = list(map(int, input().split()))
        c = list(map(int, input().split()))

        high = int(1e12)
        low = 0

        while low < high:
            mid = low + (high - low) // 2
            damage = 0
            for i in range(n):
                damage += ((mid // c[i]) + 1) * a[i]
            if damage >= h:
                high = mid
            else:
                low = mid + 1

        print(low + 1)

if __name__ == "__main__":
    main()
