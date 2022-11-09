# cook your dish here
for t in range(int(input())):
    length=int(input())
    string=input()
    #print("String = ",string)
    str1=[string[i] for i in range(0,length//2) ]
    str2=[string[i] for i in range(length//2  ,length )]
    #print("str1 = ",str1)
    #print("str2 = ",str2 )
    if(str1 == str2):
        print("YES")
    else:
        print("NO")