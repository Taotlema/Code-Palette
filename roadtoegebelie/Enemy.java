package roadtoegbelie;

public class Enemy extends Person {
    //Fields
    private String name;
    private int power;
    private String title;

    //Class Constructor
    public Enemy(String name, int power, String title){
        super(name, power);
        this.title = title;
    }

    //Class Specific accessors
    public String getTitle(){
        return title;
    }

    public void setTitle(String title){
        this.title = title;
    }

    }//End Class
