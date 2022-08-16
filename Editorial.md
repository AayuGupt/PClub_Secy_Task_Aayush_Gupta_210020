## Logic
We use BFS approach in solving this problem. We start with the initial position of knight ( $i.e.$ location of prince).
Then we start BFS approach by considering all the cases which the knight can take. 
Also check on each move whether knight lies in the grid ( $n$ X $m$ ) or not and if the cell is blocked or not.
Use the concept of queue to store these values.
Then get the least distance path to princess. If there exist no path then return -1.


## Complete Explanation
First of all get the location of princess and prince. Store these values in format of pair<int int>.
  Make a vector of n vectors each of length m $i.e.$ a 2-d vector. Let's call it 'visited'. Initialize all its elements with -1.
  Make all the blocked positions or tree locations as 1 in this visited 2-d vector.
  We will be using 'visited' to check whether that cell is empty or not for knight to travel.

  Then we define two vectors dx and dy. Each $dx$ [ $i$ ] and $dy$ [ $i$ ] pair represent the change in $x$ and $y$ cordinate respectively in one move of knight.
  In total there are 8 possibilities.
  
  
 ### Crux of the problem. 
  The problem involves the implementation of BFS(Breadth First Search) using Queues. 
  
  We initialize the Queue as a type <pair<int,pair<int,int>>> to store 3 variables { $x$, { $i$ , $j$ } }. $x$ denotes the number of moves the prince/knight had made to reach { $i$ , $j$ } from their initial position.  
  As we start with initial location of Knight for applying BFS. Put initial value in the Queue as $x = 0$ and { $i$ , $j$ } as intial location of prince.
  
  We take the first element of the queue. We store it in 'it' variable and remove it from the queue. Let the location is { $i$ , $j$ } as per this 'it' variable.
  Then we apply BFS approach on this point. We make sure that the knight doesn't get out of the grid using $validate$ function created along with $solve$ function.
  There is one more condition to check whether the cell is empty to make the new move. We edit the $visited$ vector by setting the new { $i$ , $j$ } set as $1$ so that no position is crossed more than once.
  
  Important: By taking the front element of queue its easy to say that it has the least value of $x$ or the number of moves to reach a point { $i$ , $j$ }.
  In the while loop we have a condition to check whether our goal is achieved to reach Princess. If, then we return the value $x$.
  
  Otherwise, If there are no possible ways to reach princess then the entire queue will become empty and while loop will end.
  And then it will return -1.

  Time Complexity of Algorithm is O( $n * m$ ). As in while loop each element is pushed only once. So in worst condition the time complexity would become O( $n * m$ ).
  
  ## Some Special Test Cases
 CASE 1: <br>
    ![alt text](https://github.com/AayuGupt/PClub_Secy_Task_Aayush_Gupta_210020/blob/main/Screenshot%202022-08-16%20160004.png)<br>


  
  Answer is 4. As P can't reach in 2 moves due to the blockage in grid. 

  CASE 2: <br>
  ![alt text](https://github.com/AayuGupt/PClub_Secy_Task_Aayush_Gupta_210020/blob/main/Screenshot%202022-08-16%20160137.png)<br>
  

  
  Answer is -1 . As P can't reach Q due to the blockages in grid. 

