
public class DateSubstring { 
    public String[] dateDirectory(String [] inStrArr) { 
    String[] outStrArr= new String [inStrArr. length]; 

    // Implement your logic here 

    for(int i =0;i<inStrArr.length;i++){

    String  str1 = inStrArr[i].substring(0,2);
    str1+= inStrArr[i].substring(3, 5);

    String yy = inStrArr[i].substring(6,10);
    str1+=str1;
    if(str1.contains(yy))
    {
        outStrArr[i]=yy;
    }
    else{
        outStrArr[i]= "X";
    }

    }

    return outStrArr; 
    }

}