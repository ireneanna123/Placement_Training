'''Write a program to find the factorial of a number using recursion.

Input Format

Read a number n from the console

Constraints

NA

Output Format

Print the factorial of the number n

Sample Input 0

6
Sample Output 0

720
Sample Input 1

9
Sample Output 1

362880'''

import sys
stack=[]
register=[]

def PUSH(x):
    stack.insert(0,x)
def STORE():
    register.append(stack.pop(0))
def LOAD():
    stack.insert(0,register[-1])
def PLUS():
    a=stack.pop(0)
    b=stack.pop(0)
    c=a+b
    stack.insert(0,c)
def TIMES():
    a=stack.pop(0)
    b=stack.pop(0)
    c=a*b
    stack.insert(0,c)
def IFZERO(x):
    a=stack.pop(0)
    if a==0:
        return x
    else:
        return 0
def DONE():
    a=stack.pop(0)
    return a

n=int(input())
arr=[]
for i in range(n):
    a=list(input().split())
    arr.append(a)
i=0
while i < n:
    if arr[i][0]=='PUSH':
        PUSH(int(arr[i][1]))
        i+=1
    elif arr[i][0]=='STORE':
        STORE()
        i+=1
    elif arr[i][0]=='LOAD':
        LOAD()
        i+=1
    elif arr[i][0]=='PLUS':
        PLUS()
        i+=1
    elif arr[i][0]=='TIMES':
        TIMES()
        i+=1
    elif arr[i][0]=='IFZERO':
        c=IFZERO(int(arr[i][1]))
        if c==0:
            i+=1
        else:
            i=c
    elif arr[i][0]=='DONE':
        n=DONE()
        print(n)
        sys.exit()

