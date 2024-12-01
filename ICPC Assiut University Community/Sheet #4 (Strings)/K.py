def weridAddition(string1, string2):
    newString = ""
    minLength = min(len(string1), len(string2))  


    for i in range(minLength):
        newString += string1[i]
        newString += string2[i]
    
    if len(string1) > minLength:
        newString += string1[minLength:]
    else:
        newString += string2[minLength:]
    
    return newString

testCases = int(input())

while(testCases):
    str1, str2 =  input().split()
    print(weridAddition(str1, str2))
    testCases -= 1

