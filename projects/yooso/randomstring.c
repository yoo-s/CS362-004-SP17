/* Soo-Min Yoo
CS362 Spring 2017
30 April 2017

Random Testing Quiz

char inputChar():

For this function I used the rand() function to randomly pick an ascii char in the range of 32 to 126 on the ascii table, and return that char.
It took only about a second for the program to reach state 9, since state values are remembered as they advance and the number of chars to choose from is small.


char *inputString():

For this function I started with a char array of size 6, the first five spaces meant for the string 'reset' and the last space being for the newline char.
Since the string 'reset' uses only lowercase letters, I initially used the ascii range containing only the lowercase letters from 'a' through 'z',
iterating through the first five array slots and assigning random chars within that range before filling the last slot with the newline char.
However, the program took an average of 10 minutes to complete, and I wondered how much I could decrease the time even further.
So I changed the ascii range containing the chars 'a' through 'z' to instead the range containing 'e' through 't', since that's all that's really needed for the string 'reset'.
The testing time dramatically decreased to under a minute - out of five test runs, the shortest was 13 seconds and the longest was 44 seconds.

Shortest test run of 13 secs:
Iteration 373160: c = W, s = reset, state = 9
