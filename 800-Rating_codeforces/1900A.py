def main():
    t = int(input())
    while t : 
        t -=1 
        n = int(input())
        s = list(input())
        empty = 0 
        action = 0 
        if '.' not in s :
            print(0)
            continue 
        for i in range(0, n):
            if s[i] == '.' : 
                empty += 1 
            elif s[i] == '#' : 
                if empty >=3 : 
                    action = 2 
                    break 
                else : 
                    action += empty 
                    empty = 0 
        if empty > 0 and empty < 3   : 
            print(action + empty )
        elif empty >= 3: 
            print(2)
        else : 
            print(action)
        



if __name__ == "__main__":
    main()