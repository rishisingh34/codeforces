def main(): 
    t = int(input()) 
    while t: 
        t -= 1 
        n , x = map(int , input().split()) 
        a = list(map(int , input().split())) 
        cap  = 0 
        for i in range(0, n ) :
            if i == 0 :
                cap = a[i] 
            else : 
                if cap >= a[i] - a[i-1] :
                    continue 
                else :
                    cap = a[i] - a[i-1]
        
        if cap >= (x - a[n-1])*2 : 
            print(cap)
        else :
            print((x - a[n-1])*2)

             

if __name__ == "__main__":  
    main()