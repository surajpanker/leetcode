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