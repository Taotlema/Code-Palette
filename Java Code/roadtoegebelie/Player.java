package roadtoegbelie;

public class Player extends Person {
    //Fields
    private String name;
    private int power;
    private int roads;

    //Class Constructor
    public Player(String name, int power, int roads){
        super(name, power);
        this.roads = roads;
    }

    //Class Specific accessors
    public int getRoads(){
        return roads;
    }

    public void setRoads(int roads){
        this.roads = roads;
    }

    public void addRoad(){
        roads++;
    }

    }//End Class

