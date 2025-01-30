#Write a Python program to store marks scored in subject “Fundamental of Data 
#Structure” by N students in the class. Write functions to compute following:
#a) The average score of class 
#b) Highest score and lowest score of class 
#c) Count of students who were absent for the test
#d) Display mark with highest frequency
Fundamental_of_Data_Structure=[]
n=int(input("enter the no of student"))
for i in range (n):
    marks=int(input("enter the marks of student"))
    marks.append(Fundamental_of_Data_Structure)
#a) The average score of class 
def sum(lst):
    val=0
    for i in lst:
        val += i
        return val
def length(lst):
    count =0 
    for i in lst:
        count += 1
    return count
def avg(lst):
    average = sum(lst)/length(lst)
    return average
 #Highest score and lowest score of class
def high_score(lst):
    current


