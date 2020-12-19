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

6) https://codeforces.com/problemset/problem/281/A [EASY]

This problem tests out how well do you know your ASCII notations and their respective integer values as they are represented in the computers. The difference between a lowecase and uppercase character in ASCII system is 32 hence when we check the first character of the string and if we find it to be lowercase we can easily subtract 32 from it to convert it into uppercase.

7) https://codeforces.com/problemset/problem/1325/B [EASY]

The problem can be reduced to a problem of finding distinct elements in the input array given because the we need to copy the sequence input in the array "n" times i.e. the number of elements in the input array, the longest increasing subsequence can be formed by picking the elements in the concatenated arrays starting from the smallest to the largest i.e. sorted subsequence.

December 7, 2020

- Codeforces

1) https://codeforces.com/problemset/problem/1389/A [EASY]

Problem Editorial on Codeforces : https://codeforces.com/blog/entry/80809

This problem requires one to think mathematically in a way that if a solution existed i.e. a pair (x,y) such that x doesn't divide y completely then this would mean that (x,y) exists such that l <= LCM(x,y) <= r well in such a case as we need to find just one pair we could have easily chosen the pair (x, LCM(x,y)) as we are sure that the solution falls within the specified constraints. This observation provides us an important insight into the problem that we could just select a pair like (l, 2xl) if it falls within the specified constraints i.e. selecting a pair where x divided y completely. Hence the solution just boils down to checking if (2xl) falls within the range or not if yes then (l,2l) is the answer and if not then there isn't any pair that falls within the range.

- Code Chef

1) https://www.codechef.com/DEC20B/problems/VACCINE1 [EASY]

This problem was an easy one that required us to just implement what's been stated in the problem. If both the companies produced the vaccines on the same day then the total number of days required to meet the requirements is just (D1/D2 - 1) + ceil(P/vaccinesProducedInOneDay) we need to add (D1-1) because it has been stated in the problem statement that we are currently at day 1. In the other case when both companies start producing vaccines on different days we need to do conditional testing based on which company started producing the vaccine first and decrease the value of P till both companies start producing together and increment the counter for the number of days accordingly.

2) https://www.codechef.com/DEC20B/problems/EVENPSUM [EASY]

In order to find the number of pairs that sum to an even number we need to be mindful of two properties of numbers i.e.

EVEN + EVEN = EVEN
ODD + ODD = EVEN

Once we know above the problem just reduces down to finding the number of even and odd integers in the specified ranges [1,A] and [1,B] and then evaluating the product sum : (oddA x oddB) + (evenA x evenB) which gives the final answer.

3) https://www.codechef.com/DEC20B/problems/VACCINE2 [EASY]

This is a fairly easy implementation problem that essentially asks you to implement a solution in which we just need to evaluate the number of people who are at risk and who are not at risk and then just maintain a counter to count the number of days that we require to vaccinate them decrementing the count by the number of people we can vaccinate until both are 0.

December 8, 2020

1) https://www.codechef.com/DEC20B/problems/POSPREFS [MEDIUM]

This problem is a medium level problem and does require some thinking to do. An ideal way to think about this problem is to draw a tree considering every number in the array has two possibilities i.e. it can be positive or negative hence we can ideally have 2^n arrays in total out of which some satisfy the constraint that is given in the problem and some don't. After working with a few cases i.e. different values of N N=8, N=7 and N=9 and drawing the arrays that satisfy the constraints I was able to spot a pattern that will always result in an array that satisfies the constraints. The pattern is namely to figure out first how many negations are required to make the resultant array compliant with the constraints and from the drawings it will be evident that we will always need (N-K) negations in the array to make it compliant. The next step is to choose which elements to negate in the array to make it compliant. The approach that is evident from the pattern is to first negate the elements alternatively i.e. negating i,i+2, i+4 etc... and decrement the number of negations required simultaneously. If at the end of this process we are still left with some negations the strategy we use is to negate any positive elements we find starting from the rear end of the array by which we ensure that we always are satisfying the constraints listed in the problem. Once we have reached 0 negations we can abort the process and print the resulting array.

December 9, 2020

- Codeforces

1) https://codeforces.com/problemset/problem/155/A [EASY]

Just implement what has been asked in the problem i.e. scan the input string, store the numbers i.e. individual tokens of the string into the array. Maintain a min and max variable initialized to the starting element of the array and then iterate through the array updating the number of amazing contests and min and max values.

December 19, 2020

1) https://codeforces.com/contest/1459/problem/A [EASY]

I participated in Codeforces Round #691 [Div-2] and solved this easy problem which basically amounted to calculating the number of digits for player A and player B and checking whichever is greater leading to printing the appropriate string "RED", "BLUE" or "EQUAL" (this will be the case when both numbers will have equal probability of winning the game).

