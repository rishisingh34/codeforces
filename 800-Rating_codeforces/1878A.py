def main():
    t = int(input())
    while t:
        t -= 1
        n, k = map(int, input().split()) 
        a = list(map(int, input().split()))
        if k in a : 
            print("YES") 
            continue 
        print("NO")
main()