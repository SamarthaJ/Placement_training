
def square(n):
    for i in range(n):
        for j in range(n):
            print("*", end="")
        print("\n")

def inversePeramid(n):
    for i in range(n,0,-1):
        print(" "*(n-i),i,end='')
        for j in range(i-1,0,-1):
            print("",j,end='')
        print()

def cross(n):
    for i in range(n):
        for j in range(n):
            # we are checking if i and j have same vaules 
            # or if i added with j gives same value as n-1
            if i == j or i + j == n - 1:
                print('*', end='')
            else:
                print(' ', end='')
        print()

square(5)
print()
inversePeramid(5)
print()
cross(3)
print()