rows=3
for i in range(0,rows):
    for j in range(0,i+1):
       print("*",end=' ')
    print("\r")
for i in range(rows,0,-1):
    for j in range(0,i-1):
       print("*",end=' ')
    print("\r")

rows=3
i=1
while i<=rows:
    j=i
    while j<rows:
        print(' ',end=' ')
        j+=1
    k=1
    while k<=i:
        print('*',end=' ')
        k+=1
    print()
    i+=1

i=rows
while i>=1:
    j=i
    while j<=rows:
        print(' ',end=' ')
        j+=1
    k=1
    while k<i:
            print('*',end=' ')
            k+=1
    print(' ')
    i-=1