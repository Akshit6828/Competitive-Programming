import java.util.*;
// Standing at Nth Position in queue, you can do 2 operations:
// Operation 1: N = i*j, so can turn N = Max(i,j);
// N-- (Decrement N by 1)
// Problem: Find min moves required for each counter where myNumber is your current position.


class MinMovesforQueue{
    public static void main(String args[]) {
        Scanner s  = new Scanner(System.in);
        int counters;
        counters = s.nextInt();
        for(int i =0;i<counters;i++){
            int myNumber = s.nextInt();
            System.out.println(moves(myNumber));
        }
        s.close();
    }

    public static int bestMove(int n){
        int bestJump = n;
        for(int i =2;i*i<=n;i++){
            if(n%i==0)
            bestJump = n/i;
        }
        return bestJump;
    }
    public static int moves(int n){
        if(n == 0)
        return 0;
        if(n == 1)
        return 1;
        int moves =0;
        while(n>0){
            moves++;
            if(n == 1)
            break;
            int res = bestMove(n);
            if(res == n) // Operation 2
            n--;
            else // Operation 1
            n = res;
        }
        return moves;
    }
}