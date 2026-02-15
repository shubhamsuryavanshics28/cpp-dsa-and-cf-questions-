word = "AhI123#@"
flag = False
result = ''.join([char for char in word if (char.isalnum()or char.isdigit())])
print(result)
for i in word:
    if('0'<=i<='9'):
        print(i)

            
                

