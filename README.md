Competitive Programming Tracker

December 6, 2020

- Codeforces

1) https://codeforces.com/problemset/problem/4/A [EASY]

The problem is an implementation problem that involves checking if an integer that is input from standard input is an even integer or not. Only even numbers with the exception of "2" can be split into two parts x and y that are even themselves. In case of the number 2 the only possible split is "1+1" which are both odd.

2) https://codeforces.com/problemset/problem/71/A [EASY]

The problem is an implementation problem that involves the following components -:

a) Reading the standard input for the number of strings.

b) Reading the "n" input strings using "getline".

c) Calculating the length of the input strings and checking the condition if the length of any of those strings is greater than 10 strictly.

d) Output the first character, the number "length - 2" and the last character if the word is a way too long word to the standard output.

3) https://codeforces.com/problemset/problem/1/A [EASY]

The problem was an easy mathematical problem essentially asking the question "how many squares are required to cover a rectangle completely wherein squares cannot be broken up". The solution essentially required us to know how many squares would be required to cover the length of the rectangle which can be determined by the number n/a and how many squares are required to cover the breadth of the rectangle which is determined by m/a. If the above two numbers are not whole numbers we round them up to the smallest whole number that is greater than the value. The end result is just a multiplication of two quantities. It is recommended that we study about how to perform the rounding procedure or one can also use the "ceil" function in <cmath>.

4) https://codeforces.com/problemset/problem/231/A [EASY]

The problem is an easy one where we just need to implement what has been asked in the problem statement. As is evident the string input to us is a string of 1's and 0's hence we just need to comput the sum of the numbers in the string and check if that number is greater than 1 and if it is then we need to increment the number of problems that can be solved by 1. In conclusion just output the number of solved problems.

5) https://codeforces.com/problemset/problem/50/A [EASY]

This problem is an easy one too where we need to figure out the number of dominos required to cover the entire M x N board. As we have M x N cells to cover the board and we have unlimited number of 2 x 1 dominos we only need to determine the number i.e. (M x N)/2 to find out the number of dominos required to cover the board without violating the rules. The ways to cover are as follows -:

a) If both M and N are even then the board can be covered entirely with the dominos.

b) If both M and N are odd then we could cover the entire board with the tiles with the exception of leaving one cell empty in the board.

c) If we have a mix of odd and even in M & N then again the entire board could be covered with the tiles.