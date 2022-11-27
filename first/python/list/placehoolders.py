#learning placeholders or lists
sen="hello %s hi"             #inputing one string
print(sen%("ayush"))
sen="hello %s %s hi"            #inputing two string
print(sen%("ayush","sahu"))
sen="i am %s and my age is %d"   #inputting one string one integer
a=sen%("ayush",19)
print(a)
print(sen%("ayush",19))
sen="hello %s"
arr=["ayush","sahu"]
for i in arr:
    print(sen%(i))
    