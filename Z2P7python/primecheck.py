#divide the test number with 2 to square root of number reeturn false when% ==0
from math import sqrt
def is_prime(n):
    trial_factor=2
    root=sqrt(n)
    while trial_factor<=root:
        if n%trial_factor==0:
            return False
        trial_factor +=1
    return True

print('13 is prime?',is_prime(13))
print('25 is prime?',is_prime(25))