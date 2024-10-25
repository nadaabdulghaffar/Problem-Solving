def typeDetermine(n , k ,a):
    product = n * k
    
    if product % a == 0:
        result = product // a
        if -2147483648 <= result <= 2147483647:
            print("int")
        else:
            print("long long")
    else:
        print ("double")


n, k, a = map(int, input().split())
typeDetermine(n, k, a)