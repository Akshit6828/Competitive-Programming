import java.util.*;
public class Main {
    public static void main(String args[]) {
     Scanner s = new Scanner(System.in);
     String st = new String("24/02/1991");
     String  str1 = st.substring(0,2);
    str1+= st.substring(3, 5);

    String yy = st.substring(6,10);
    str1+=str1;
    if(str1.contains(yy))
    {
        System.out.println(yy);
    }
    else{
         System.out.println("X");
    }

    s.close();
    }

/*    public Boolean validateCustomer(){

        boolean ans =false;

        for (String s : privilegedIdArr) {
            if (s == privilegedId) {
                String name = this.getCustName();
                    if(name.length()>=3)
                    ans = true;
            }
        }
        return ans;
    }

    public void generateServiceId(){
        HardwareShop.counter+=1;
        serviceId="S";
        serviceId+=Integer.toString(HardwareShop.counter); 
    }

    public Integer identifyDiscountPercentage(){

        int discountPercentage =0;
        if(creditPoints>0){
        if(creditPoints>=1&&creditPoints<50) 
        discountPercentage = 5;
        else if(creditPoints>=50&&creditPoints<100)
        discountPercentage = 10;
        else if(creditPoints>=100)
        discountPercentage = 15;
        }
        return discountPercentage;

    }

    public calculateTotalCost(){
        
        if(customer.validateCustomer()){
            if(quantity>=1&&reqCustomizationArr.length>=1){
                if(Arrays.equals(reqCustomizationArr, customizedItemArr) == true)
                int cost  = this.c
            }
        }
        else{

        }
    }

*/
    
}


