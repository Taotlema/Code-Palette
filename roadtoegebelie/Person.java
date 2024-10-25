package roadtoegbelie;

/**
 * @author Ayemhenre Isikhuemhen
 * Abstract class for game
 */
import java.util.*;
public abstract class Person implements PersonInterface, Comparable<Person> {
    //Fields
    private String name;
    private int power;

    //Class Constructor
    public Person(String name, int power){
        this.name = name;
        this.power = power;
    }

    //Accessor Methods
    public String getName(){
        return name;
    }

    public void setName(String name){
        this.name = name;
    }

    public int getPower(){
        return power;
    }

    public void setPower(int power){
        this.power = power;
    }

    //addPower
    public void addPower(){
        power++;
    }

    //CompareTo Method: Compares object values to each other
    @Override
    public int compareTo(Person s) {
        return 0;
    }
}//End Class
