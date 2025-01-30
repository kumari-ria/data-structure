#In second year computer engineering class, group A student’s play cricket, group B 
#students play badminton and group C students play football. 
#Write a Python program using functions to compute following: -
#a) List of students who play both cricket and badminton 
#b) List of students who play either cricket or badminton but not both 
#c) Number of students who play neither cricket nor badminton
#d) Number of students who play cricket and football but not badminton.
#(Note- While realizing the group, duplicate entries should be avoided, Do not use SET 
#built-in functions) 

list_cricket=[]
list_badminton=[]
list_football=[]

#FOR PRINTING THE STUDENTS OF CRICKET
n=int(input("enter the no of student who play cricket"))
for i in range (n):
    a=int(input("enter the student rool no who play cricket:"))
    list_cricket.append(a)

#FOR PRINTING THE STUDENTS OF BADMINTON
n=int(input("enter the no of student who play badminton"))
for i in range (n):
    a=int(input("enter the student rool no who play badminton:"))
    list_badminton.append(a)

#FOR PRINTING THE STUDENTS OF FOOTBALL
n=int(input("enter the no of student who play football"))
for i in range (n):
    a=int(input("enter the student rool no who play football:"))
    list_football.append(a)

print(list_cricket)
print(list_badminton)
print(list_football)

def remove_duplicate(list1,list2,list3):
    dup=[]
    for ele in list1,list2,list3:
        if ele is not dup:
            dup.append(ele)
    return dup
print(remove_duplicate(list_cricket,list_badminton,list_football))

#a) List of students who play both cricket and badminton 
list_cricket_and_badminton=[]
for i in list_cricket:
    if i in list_badminton:
        list_cricket_and_badminton.append(i)

#b) List of students who play either cricket or badminton but not both 
list_either_cricket_or_badminton=[]
for i in list_cricket:
    if i not in list_badminton:
        list_either_cricket_or_badminton.append(i)
for i in list_badminton:
    if i not in list_badminton:
        list_either_cricket_or_badminton.append(i)
#c) Number of students who play neither cricket nor badminton
list_neither_cricket_nor_badminton=[]
for i in list_football:
    if i not in list_cricket not in list_badminton:
        list_neither_cricket_nor_badminton.append(i)

#d) Number of students who  play cricket and football but not badminton.
list_play_cricket_and_football_but_not_badminton=[]
x=list_cricket+list_football
list_play_cricket_and_football_but_not_badminton.append(x)

print("List of students who play both cricket and badminton :",list_cricket_and_badminton)
print("List of students who play either cricket or badminton but not both ",list_either_cricket_or_badminton)
print("Number of students who play neither cricket nor badminton",list_neither_cricket_nor_badminton)
print("Number of students who  play cricket and football but not badminton.",list_play_cricket_and_football_but_not_badminton)


