// Add Two Numbers
// Your task is very simple: given two integers 
// �
// A and 
// �
// B, write a program to add these two numbers and output the sum.

// Input Format
// The first line contains an integer 
// �
// T, the total number of test cases.
// Then follow 
// �
// T lines, each line contains two integers, 
// �
// A and 
// �
// B.
// Output Format
// For each test case, add 
// �
// A and 
// �
// B and display the sum in a new line.




#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    // Loop for each test case
    while (t--) {
        int a, b , s;

        scanf("%d %d", &a, &b);
        s = a + b ;
        printf("%d\n",s);
        // Your code for each test case goes here 
    }
}