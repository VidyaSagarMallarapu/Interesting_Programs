
#python 2.7 only 
string =raw_input()
unique = []
co=[]
for char in string[::]:
  
    if char not in unique:
        unique.append(char)
        co.append(string.count(char));
con=0
for i in co:
    if(i%2!=0):
        con+=1;
    if(con==2):break;

if(con!=2):
    print("YES");
else :print("NO")
        


"""
question 

Sherlock considers a string to be valid if all characters of the string appear the same number of times. It is also valid if he can remove just character at index in the string, and the remaining characters will occur the same number of times. Given a string

, determine if it is valid. If so, return YES, otherwise return NO.

For example, if
, it is a valid string because frequencies are . So is because we can remove one and have of each character in the remaining string. If however, the string is not valid as we can only remove occurrence of . That would leave character frequencies of

.

Function Description

Complete the isValid function in the editor below. It should return either the string YES or the string NO.

isValid has the following parameter(s):

    

""
