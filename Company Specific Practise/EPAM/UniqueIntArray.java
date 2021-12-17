import java.util.*;
class UniqueIntArray{


    static void SolveOptimal(ArrayList<Integer> input){
        HashSet<Integer> set = new HashSet<>();

        for(int i =0 ; i<n;i++){
            int val = input.get(i);
            if(!set.contains(val))
            set.add(val);
        }

        Iterator it =  set.iterator();
        for(int i =0;i < set.size(); i++)
            System.out.print(it.next() + " ");
    }
    public static void main(String args[]){
        Scanner in  = new Scanner(System.in);
        ArrayList<Integer> input = new ArrayList<>();
        int n = in.nextInt();
        for(int i =0 ; i<n;i++){
            int val = in.nextInt();
            input.add(val);
        }
        
        in.close();
        
    }
}