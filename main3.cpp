/*
Problem
Problem Statement
The task is very simple: given two integers A and B, write a program to add these two numbers and output it.

Input Format
The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains two Integers A and B.

Output Format
For each test case, add A and B and display the sum in a new line.
  Everything your program prints is considered “output”, 
  so if you output some debugging statements like “Please enter T”, 
  this will be considered as part of your answer, 
  and because it does not satisfy the output format, 
  it will be marked wrong, even if your answer is otherwise correct!
  
  Input:
  3
  1 2
  100 200
  10 40
  
  Output:
  3
  300
  50

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int t;
   cin>>t;
   int a,b;
   while(t--){
    int sum=0;
    cin>>a>>b;
    sum=a+b;
    cout<<sum<<"\n";
   }
   return 0;
}
