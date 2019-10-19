
a=[]
left=['{','(','[']
right=['}',')',']']
def find(l):
  for i in l:
    if i in left:
      a.append(i)
    else :
      print a
      ind=right.index(i)
      if len(a)>0 and a[len(a)-1]==left[ind]:
        a.pop()
      else :
        return False;
  
  return True;
l=list(raw_input())
print l
print(find(l))



"""
Given an expression string, write a python program to find whether a given string has balanced parentheses or not.
Examples:
Input : {[]{()}}
Output : Balanced
Input : [{}{}(]
Output : Unbalanced
Approach #1 : Using stack
One approach to check balanced parentheses is to use stack. Each time, when an open parentheses is encountered push it in the stack, and when closed parenthesis is encountered, match it with the top of stack and pop it. If stack is empty at the end, return Balanced otherwise, Unbalanced.
"""
