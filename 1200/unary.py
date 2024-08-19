z = input()
conv = ""
for i in z:
    if(i == '>'):
        conv += "1000"
    elif(i == '<'):
        conv += "1001"
    elif(i == '+'):
        conv += "1010"
    elif(i == '-'):
        conv += "1011"
    elif(i == '.'):
        conv += "1100"
    elif(i == ','):
        conv += "1101"
    elif(i == '['):
        conv += "1110"
    else:
        conv += "1111"
n = 0
for i in range(len(conv)):
    if(conv[i] == '1'):
        n += pow(2,len(conv)-i-1)
print(n%1000003)