def main(): 
    t = int(input())
    while t : 
        t -= 1 
        n = int(input())
        a = list(map(int , input().split())) 
        
        hash = {}  
        for i in range(n) : 
            if a[i] in hash : 
                hash[a[i]] += 1 
            else : 
                hash[a[i]] = 1
        if len(hash) ==  1 : 
            print("Yes") 
        elif len(hash) == 2 :
            lst = list(hash.keys())
            if ( abs( hash[lst[0]] - hash[lst[1]] ) <=1  ): 
                print("Yes") 
            else : 
                print("No")

        
        else : 
            print("No")
            continue
        



main()