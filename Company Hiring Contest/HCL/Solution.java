
interface Animal {
    public void eat();
    public void makeSound();
}

interface Bird{
    int legs = 2;
    public void fly();
}

class Parrot implements Animal, Bird{
    public void eat(){
        System.out.println("Parrots can eat upto 100gms in a day");
    }
    public void makeSound(){
        System.out.println("Parrots make sound of screech");
    }
    public void fly(){
        System.out.println("Parrots can fly upto 50 miles in a day");
    }
}

class Solution{
    public static void main(String[] args){
        Parrot p = new Parrot();
        p.eat();
        p.makeSound();
        p.fly();
    }
}

