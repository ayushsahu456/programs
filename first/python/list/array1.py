#declaration of array
shopping=['apple','carrot','eggs','milk']
print(shopping)
print(shopping[2])

#update the list
shopping[2]="choclate"
print(shopping)

#library function
#deleting elements (del)
del shopping[3]
print(shopping)

#finding lenght (len())
a=len(shopping)
print(a)

#find max and min (max(),min())
numarr=[1,1004,2,-7,1,765]
a=max(numarr)
print(a)
b=min(numarr)
print(b)

#add an object (.append())
shopping.append("ice cream")
print(shopping)
 
#count the repeating items(.count())
c=shopping.count("choclate")
d=numarr.count(1)
print(c)
print(d)