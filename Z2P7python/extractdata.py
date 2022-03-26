def extractdata(filename):
    infile=open(filename,'r')
    infile.readline()
    infile.readline()
    months=[]
    rainfall=[]
    for line in infile:
        #print(line)
        word=line.split()
        months.append(word[0])
        rainfall.append(float(word[1]))
    months=months[:-1]
    annual=rainfall[-1]
    rainfall=rainfall[:-1]
    return months,rainfall,annual

months,rainfall,annual= extractData('rainfall.dat')
sum=0
for month,value in zip(months,rainfall):
    sum +=value
    print(month,value)
average=sum/len(rainfall)
print('Average:',average)
print('Annual:',annual)
    
extractData('rainfall.dat')