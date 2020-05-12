/*

solution take TC : O(n2) SC: O(n)

On an infinite plane, a robot initially stands at (0, 0) and faces north. The robot can receive one of three instructions:

"G": go straight 1 unit; "L": turn 90 degrees to the left; "R": turn 90 degress to the right. The robot performs the instructions given in order, and repeats them forever.

Return true if and only if there exists a circle in the plane such that the robot never leaves the circle.

Example 1:

Input: "GGLLGG" Output: true Explanation: The robot moves from (0,0) to (0,2), turns 180 degrees, and then returns to (0,0). When repeating these instructions, the robot remains in the circle of radius 2 centered at the origin. Example 2:

Input: "GG" Output: false Explanation: The robot moves north indefinitely. Example 3:

Input: "GL" Output: true Explanation: The robot moves from (0, 0) -> (0, 1) -> (-1, 1) -> (-1, 0) -> (0, 0) -> ...

Note:

1 <= instructions.length <= 100 instructions[i] is in {'G', 'L', 'R'}
*/


class Solution {

//GGLLGG
    long long int x=0;
    long long int y =0;
    long long int dir =0;
    long long int dirArr[4][4]={{0,1},{1,0},{0,-1},{-1,0}};
public:
    bool isRobotBounded(string instructions) {
         int l= instructions.length();
        if(instructions.empty()||l==0)
           return true;
        for(int i=0;i<4;i++){git 
            //for 4 direction 


            for(int j=0;j<l;j++){

           char c = instructions.at(j);
           if(c=='G')
            go(c);
           else
            turn(c);

            }
        }
         return (x==0 && y==0);

         }

     public:void go(char c){
         x+=dirArr[dir][0];
         y+=dirArr[dir][1];
         
        }    
    
     public:void turn (char c){
         long long int dirval ;
          (c=='L')?dirval=-1:dirval=1;
         dir= ((dirval+4+dir)%4);  // for taking array value
        }    
    
};
