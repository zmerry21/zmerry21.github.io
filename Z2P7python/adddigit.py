'''
print('Hello',end='\n')
print('Hi')
1="[0001]"
11="[0011]"
123="[0123]"
'''
num=int(input('Enter a number range froom 0 to 9999:'))
if num<0:
    num=0
if num>9999:
        num=9999

print(end="[")
digit=num/1000   #thousand digit or 0
num%=1000        #remainder for unit digit
print(digit,end="")

digit=num/100    #hundred digit for 0
num%=100          #remainder for unit digit
print(digit,end="")
  
digit=num/10  #ten digit for 0
num%=10       #remainder for unit digit
print(digit,end="")
print(num,end="]\n")
      