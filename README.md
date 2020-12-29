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

- Codeforces

1) https://codeforces.com/contest/1459/problem/A [EASY]

I participated in Codeforces Round #691 [Div-2] and solved this easy problem which basically amounted to calculating the number of digits for player A and player B and checking whichever is greater leading to printing the appropriate string "RED", "BLUE" or "EQUAL" (this will be the case when both numbers will have equal probability of winning the game).

- Project Euler

1) https://projecteuler.net/problem=1 [EASY]

This problem is very easy, one just needs to implement what has been asked for i.e. just run a loop and test for numbers that are either divisible by 3 or by 5 and add them to the running sum. Once all the numbers upto and including 999 have been encountered print the sum.

P.S. : Please also read the associated PDF provided by the website in order to find more solutions that don't really require any implementation.

2) https://projecteuler.net/problem=2 [EASY]

Another very easy problem just requiring some implementation to find fibonacci numbers and testing which one's are even and adding them to the running sum.

P.S. : Please also read the associated PDF provided by the website in order to find more solutions that provide novel approaches of speeding up the solutions.

3) https://projecteuler.net/problem=3 [EASY]

This problem although easy does require some thought when it comes to implementation. The trick here is to start testing the divisibility of the numbers from 2 and then if we found a divisor we exhaust that divisor by dividing the number with it until it cannot be divided further and that is when we move on to the next number.

P.S. : Please also read the associated PDF provided by the website in order to find more solutions that provide novel approaches of speeding up the solutions.

4) https://projecteuler.net/problem=6 [EASY]

This problem is fairly easy implementation problem wherein all we need to do is to sum the natural numbers from 1..100 and square it up. This can either be done through implementation or using the arithmetic progression formula (n(n+1)/2)^2 and using the formula for evaluating the sum of squares n(n+1)(2n+1)/6.

5) https://projecteuler.net/problem=5 [EASY]

This problem doesn't require programming at all as one could just obtain the answer to the question by multiplying the highest powers of primes from 1..20 but we can also code up a solution using infinite loops by testing the divisibility of numbers from 1...20 for any i in the range of ints.

December 20, 2020

- Codeforces

1) https://codeforces.com/problemset/problem/723/A [EASY]

Fairly easy implementation problem. As all the friends live in a straight line we just need to sort the distance and make sure they meet in the middle i.e. the middle friend's house. Either we can use sorting or we can make use of the property that max(xi's) - min(xi's) is ideally the formula that we will be using to evaluate the distance. The proof is if we sort the 3 distances the distance travelled to meet in the middle = x2-x1 + x3-x2 which cancels out x2 hence resulting in x3-x1.

December 23, 2020

- Project Euler

1) https://projecteuler.net/problem=25 [EASY]

This problem is fairly easy to implement if we use a specialized programming language like Python or Java's BigInteger. The problem requires one to think about how basic big integer addition works if coding a solution in C++. There is also an another way of calculating the first 1000 digit fibonacci number using a fomula that was pointed out in the forums namely "Binet's" formula (please refer : https://projecteuler.net/thread=25 for more details on how that formula can be used). Also Binet's formula for reference : http://www.maths.surrey.ac.uk/hosted-sites/R.Knott/Fibonacci/fibFormula.html

2) https://projecteuler.net/problem=16 [EASY]

 This problem again is fairly easy if you use a programming language that provides you with libraries to work on big integers. Coding up a solution in C++ requires you to think a little bit about how multiplication actually works and how you can use data structures provided in the language to make the big integer multiplication work for you. We again use the additive carry over process as used when multiplying by hand when solving this problem.

 December 24, 2020

- Project Euler

1) https://projecteuler.net/problem=17 [EASY]

This problem is mostly an implementation problem that requires some prior knowledge of how to perform file input/output in C++. The logic used to compute this is simple. First create a text file storing space separate (key, value) pairs of the form (number (space) english_representation). Read this file as an input into a global STL map such that we can re-use the string representations for numbers we still want to convert to their english representations. Conversion of numbers to their english equivalents mostly depends on if the number is two/three digit number. If it's two digit we just compute num/10 and multiply that with 10 to get the first part of the english string and the remaining part i.e. num%10 we can obtain the english representation similarly by just checking in the global map. Once we have the complete representation we just add this repesentation to the global map such that it can be re-used when computing english statements for three digit numbers. We also code up a utility method to count the number of spaces in a string as that will help us maintain the count in a consistent state. Some useful reference to read while solving this problem are as follows -:

1.1) https://www.cplusplus.com/doc/tutorial/files/

1.2) https://stackoverflow.com/questions/3910326/c-read-file-line-by-line-then-split-each-line-using-the-delimiter

1.3) https://stackoverflow.com/questions/7868936/read-file-line-by-line-using-ifstream-in-c

1.4) https://stackoverflow.com/questions/14030162/make-pair-of-stdmap-how-to-make-a-pair-only-if-the-key-is-not-listed-and-up

1.5) https://stackoverflow.com/questions/26281979/c-loop-through-map

1.6) https://www.javatpoint.com/cpp-int-to-string

1.7) https://stackoverflow.com/questions/1939953/how-to-find-if-a-given-key-exists-in-a-c-stdmap

1.8) https://www.geeksforgeeks.org/stdstringappend-in-c/

2) https://projecteuler.net/problem=22 [EASY]

This again is a very trivial implementatio problem that requires some knowledge of string parsin and file I/O in C++. Once you have stored the strings into a vector we can just use the standard std :: sort to sort the vector of strings and then maintain a dictionary of the english alphabet to evaluate the arithmetic value of the string according to the conditions laid out in the problem. Some references that might be useful for this problem are as follows -:

2.1) https://stackoverflow.com/questions/1894886/parsing-a-comma-delimited-stdstring

2.2) https://www.codespeedy.com/remove-double-quotes-from-string-in-cpp/

2.3) https://stackoverflow.com/questions/688039/how-can-i-build-a-stdvectorstdstring-and-then-sort-them

- CSES Problem Set

1) https://cses.fi/problemset/task/1068 [EASY]

I am just starting out with the book and the problems on this website. A simple problem that asks you to just implement with what's being said in the problem statement. Only takeaway from this problem is to be careful of the data type you choose for evaluating the sequence. I chose unsigned long long just to avoid any range concerns.

2) https://cses.fi/problemset/task/1083/ [EASY]

This again is a very easy implementation problem. The trick is it requires you to know the formula for sum of first n natural numbers i.e. an arithmetic progression n x (n+1)/2 and then to find the missing number subtract the sum of the input n-1 numbers from it.

- Kattis

1) https://open.kattis.com/contests/mcpc19open/problems/basketballoneonone [EASY]

Just implement what's asked in the problem. The problem can be solved naturally by evaluating the scores and then printing the character which has a greater score as done in my solution.

December 25, 2020

- Project Euler

1) https://projecteuler.net/problem=29 [EASY]

This problem builds on a previous problem of computing power of 2. The idea is to perform iterative multiplication but taking special care of the "carry" as in this case carry can be a multidigit number. One also needs to use "set" C++ data structure in order to check if we have already computed an integer combination or not.

December 26, 2020

- Project Euler

1) https://projecteuler.net/problem=20 [EASY]

This problem again builds on the same logic of using iterative digit multiplication with carry-over addition. Only control required is over the data structure i.e. vector manipulation. The code can then be used to evaluate any factorial for any "n".

December 28, 2020

- Project Euler

1) https://projecteuler.net/problem=42 [EASY]

This problem is another implementation problem. The way to solve this problem was to figure out the maximum length word in the sequence of input words. Once that is figured out one needs to evaluate a set of triangular numbers till the upper bound = 26 * (length of the word). Iterate over the sequence of words provided in the file, maintain a running count variable and update the count of triangular words once we find that ASCII evaluation of the word is indeed a triangular number found in the triangular number set. 

December 29, 2020

- Algorithm Implementations

1) Implemented Sieve of Eratosthenes algorithm for finding/listing all prime numbers in the range [1.....N].

- Project Euler

1) https://projecteuler.net/problem=7 [EASY]

Mostly just used the algorithm implementation for Sieve of Eratosthenes to find prime numbers in the range [1...N]. Used the algorithm first to find out the number of primes till 1e+6 and as the number was > 10,000 just printed the 10,001st index in the vector returned by the sieve method. Please refer the associated pdf and algorithm implementation for more details.

2) https://projecteuler.net/problem=10 [EASY]

This problem again follows from the algorithm implementation for Sieve of Eratosthenes to find prime numbers in the range [1...N]. Used the algorithm first to find out the number of primes till 2e+6 + 1 and sum all them up by maintain a running sum. Please refer the associated pdf and algorithm implementation for more details.

- CSES Problem Set

1) https://cses.fi/problemset/task/1618 [EASY]

This problem is an introductory problem of the CSES problem set and relies on the knowledge of evaluating the number of trailing zeros in n!. Careful observation and reading of the problem statement leads to an insight that the number of trailing zeros is mostly governed by the powers of 5 present in the numbers that form n!. For instance if n = 20, then

n! = 20.19.18.17.16.15.14.13.12.11.10.9.8.7.6.5.4.3.2.1

Please refer https://www.purplemath.com/modules/factzero.htm or https://www.youtube.com/watch?v=wkvVdggCSeo&ab_channel=ScalerAcademy to understand why its calculated the way it is. The algorithmic time complexity of this algorithm is O(log(n)) with logarithm to the base 5.