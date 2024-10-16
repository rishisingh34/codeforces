def main() :
    t = int(input())
    while t : 
        t -= 1 
        n = int(input())
        s = list(map(int , input().split()))
        if s[0] == 1 : 
            print("YES") 
        else : 
            print("NO")


if __name__ == "__main__" : 
    main()