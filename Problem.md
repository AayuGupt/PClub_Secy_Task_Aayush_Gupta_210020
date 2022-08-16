
<div align="center">
  <b>SAVE THE PRINCESS</b> <br><br>
 time limit per test : $2$ seconds<br>
memory limit per test: $256$ megabytes<br>
input: standard input<br>
output: standard output<br><br><br>
  </div>

A Princess is lost in a forest. She is calling for help. There is a prince who is riding on a horse and by listening to princess’ voice he gets to know her location. He had to reach to princess in minimum time.

You are given an $n$ X $m$ grid representing the forest. Where $X$ represents a tree. In other words, you cannot move on that point. $Q$ represents the princess and $P$ represents the prince location. And ‘.’ Represent an empty space in forest on which the prince can move.

The horse on which Prince is riding will be moving according to standard chess rule of the movement of a knight. 

Your task is to answer the minimum moves required by the prince to reach the Princess to rescue her. 

Remember – Knight moves as per standard chess rules. Knight can only be placed on a free space ‘.’ in that $n$ X $m$ grid forest and not on space named ‘X’.

If the prince can’t reach Princess following the above rule, then print $-1$.

### Input
Each test contains multiple test cases. The first line contains the number of test cases $t$ $(1≤t≤10^4)$. The description of the test cases follows.
The first line of the test case consists of two integers $n,m$ $(1≤n,m≤100)$ .
Then the next $n$ lines consist of a string of length $m$ . It represents an $n$ X $m$ grid forest.
‘.’ represents that that block/cell is empty. $Q$ represents the princess; $P$ represents the prince and $X$ represents the tree or the cell is blocked.

### Output
For each test case output a single value representing the minimum moves required by Prince to reach Princess. If he can’t reach in any number of moves, then print $-1$.
<br><br>

### Example
Input:<br>
![alt text](https://github.com/AayuGupt/PClub_Secy_Task_Aayush_Gupta_210020/blob/main/Screenshot%202022-08-16%20155734.png)


Output: 2

### Note:
In this test case we can see that in 2 moves the prince can reach the princess As follows.<br>
![alt text](https://github.com/AayuGupt/PClub_Secy_Task_Aayush_Gupta_210020/blob/main/Screenshot%202022-08-16%20155600.png)<br>
On next move we can see that Prince Can Reach to Rescue Princess.
 
