#include <stdio.h>
#define MAXLINE 1000 // maximum length of input line

// function declarations
int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main() 
{
    int len; // current line length
    int max; // maximum length seen so far
    char line[MAXLINE]; // current input line
    char longest[MAXLINE]; // longest line saved here

    max = 0; // initialize max to 0
    while ((len = getline(line, MAXLINE)) > 0) // getline returns the length of the line
    {
        if (len > max) { // if the current line is longer than the maximum length seen so far
            max = len; // update the maximum length
            copy(longest, line); // copy the current line to the longest line
        }
    }
    if (max > 0)
    {
        printf("%s", longest); // print the longest line
    }
    return 0;
}

int getline(char s[], int lim) // function to read a line into s, return length
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) // read characters until EOF or newline
    {
        s[i] = c; // store the character in the array
    }
    if (c == '\n') // if the last character is a newline
    {
        s[i] = c; // store the newline in the array
        ++i; // increment the index
    }
    s[i] = '\0'; // add the null character to the end of the array
    return i; // return the length of the line
}

void copy(char to[], char from[]) // function to copy 'from' into 'to'; assume to is big enough
{
    int i = 0;
    while ((to[i] = from[i]) != '\0') // copy characters until the null character is reached
    {
        ++i;
    }
}