
print('Please enter four integer values:')
num1=int(input('Enter num1:'))
num2=int(input('Enter num2:'))
num3=int(input('Enter num3:'))
num4=int(input('Enter num4:'))
max=num1
if num2>max:
    max=num2
if num3>max:
    max=num3
if num4>max:
    max=num4
print("Maximun number is:",max)
