package roadtoegbelie;

/**
 * @author The Road To Egbelie
 * @author Ayemhenre Isikhuemhen Version 1 Created: (4/10/2023) - (5/2/2023)
 */
import java.util.*;
import java.util.concurrent.*;
import java.io.IOException;

public class RoadToEgbelie {

    public static void main(String[] args) {
        //Scanner Object
        Scanner scnr = new Scanner(System.in);

        //loop control
        boolean replay = true;

        //objects
        Player p1 = new Player("Omoanghe", 0, 0);
        Enemy e1 = new Enemy("Spirit of Child", 0, "Spirit");

        while (replay == true) {
            //Introduction text
            slowPrint("Wake up! " + p1.getName() + "!");
            System.out.println();
            slowPrint("For you must deliever the Yam of Fortune to Egbelie.");
            System.out.println();
            slowPrint("Go now....");

            //Choice 1***
            // Text Output
            System.out.println();
            slowPrint("Some time has passed and the paths diverge.");
            System.out.println("");
            slowPrint("The path cast in shadow");
            System.out.println("");
            slowPrint("The path baked in light");
            System.out.println("");

            // Loop control
            int inputC1 = 0;

            while ((inputC1 != 1) && (inputC1 != 2)) {
                try {
                    System.out.println("--------------------");
                    System.out.println("What is your choice?");
                    System.out.println("");
                    slowPrint("1. The path with light");
                    System.out.println("");
                    slowPrint("2. The path under shadow");
                    System.out.println("");

                    inputC1 = scnr.nextInt();
                } catch (InputMismatchException e) {
                    System.out.println("Invalid input. Please enter a number.");
                    scnr.next(); // clear the input buffer
                }
            }// End loop

            //Update Player Roads
            p1.addRoad();

        //Encounter 1***
        //update Enemy
        e1.setPower(1);

        //Text Output
        System.out.print("");
        slowPrint("You notice an bright clearing, but you are sensing an ominous clearing.");
        System.out.println();
        slowPrint("Then there is a path around fill with thristles.");

        // Loop control
        int inputE1 = 0;

        while ((inputE1 != 1) && (inputE1 != 2)) {
            try {
                System.out.println("--------------------");
                System.out.println("How will you proceed?");
                System.out.println("");
                slowPrint("1.Enter the clearing");
                System.out.println("");
                slowPrint("2.Force your way through the thorns");
                System.out.println("");

                inputE1 = scnr.nextInt();
            } catch (InputMismatchException e) {
                System.out.println("Invalid input. Please enter a number.");
                scnr.next(); // clear the input buffer
            }
        }// End loop

        //Conditionals
        if (inputE1 == 1) {
            //If the player is Stronger
            if (p1.getPower() > e1.getPower()) {
                System.out.println("");
                slowPrint("As you enter the clearing you notice a malicious entitiy.");
                System.out.println();
                slowPrint("It spoke: Woe unto you for I am " + e1.getName());
                System.out.println("");
                slowPrint("You clash with " + e1.getTitle());
                System.out.println("");
                slowPrint("You smithed the foe... and carried on.");

                //If the player is weaker
            } else if (p1.getPower() < e1.getPower()) {
                System.out.println("");
                slowPrint("As you enter the clearing you notice a malicious entitiy.");
                System.out.println();
                slowPrint("It spoke: Woe unto you for I am " + e1.getName());
                System.out.println("");
                slowPrint("You clashed with " + e1.getTitle());
                System.out.println();
                slowPrint("However, you falter and are defeated...");
                System.out.println("");
                slowPrint(e1.getName() + ": Go and travel elsewhere");
                System.out.println("");
                p1.setPower(3);

                //Other senarios
            } else {
                System.out.println("");
                slowPrint("You bypass the adversary and escape, thus carrying on.");
                System.out.println("");
            }
        }//End If input = 1
        if (inputE1 == 2) {
            System.out.println("");
            slowPrint("You made your way through the thorns, it hardens you.");
            System.out.println("");
            slowPrint("You feel more powerful.");
            System.out.println("");
            p1.setPower(3);
        }//End If input = 2

        //Update player roads
        p1.addRoad();

        //Choice A***
        // Text Output
        System.out.println();
        slowPrint("There is a turtle sunbathing and it sings");
        System.out.println("");
        slowPrint("Oideo~ Oideo, bring me Oideo~");
        System.out.println("");
        slowPrint("Should you stop and listen or carry on?");
        System.out.println("");

        // Loop control
        int inputCA = 0;

        while ((inputCA != 1) && (inputCA != 2)) {
            try {
                System.out.println("--------------------");
                System.out.println("What is your choice?");
                System.out.println("");
                slowPrint("1.Stop and listen");
                System.out.println("");
                slowPrint("2.Carry on");
                System.out.println("");

                inputCA = scnr.nextInt();
            } catch (InputMismatchException e) {
                System.out.println("Invalid input. Please enter a number.");
                scnr.next();
                // clear the input buffer
            }
        }// End loop

        //Update Player Roads
        p1.addRoad();

        //Encounter A***
        //update Enemy
        e1.setPower(1);

        //Text Output
        System.out.print("");
        slowPrint("You notice an pillar of salt that brigdes you to a sort cut hovever, there is an air of malice from the pillar.");
        System.out.println();
        slowPrint("Maybe, you should take the long way, it might be safer.");

        // Loop control
        int inputEA = 0;

        while ((inputEA != 1) && (inputEA != 2)) {
            try {
                System.out.println("--------------------");
                System.out.println("How will you proceed?");
                System.out.println("");
                slowPrint("1.Scal the pillar");
                System.out.println("");
                slowPrint("2.Take the long way.");
                System.out.println("");

                inputEA = scnr.nextInt();
            } catch (InputMismatchException e) {
                System.out.println("Invalid input. Please enter a number.");
                scnr.next(); // clear the input buffer
            }
        }// End loop

        //Conditionals
        if (inputEA == 1) {
            //If the player is Stronger
            if (p1.getPower() > e1.getPower()) {
                System.out.println("");
                slowPrint("You scale the pillar, and reach it's Zenith. You then encontered the spirit");
                System.out.println();
                slowPrint(e1.getName() + ": Woe unto you for I will smith you");
                System.out.println("");
                slowPrint("You clash with " + e1.getTitle());
                System.out.println("");
                slowPrint("You smithed the foe... and carried on.");

                //If the player is weaker
            } else if (p1.getPower() < e1.getPower()) {
                System.out.println("");
                slowPrint("You scale the pillar, and reach it's Zenith. You then encontered the spirit");
                System.out.println();
                slowPrint(e1.getName() + ": Woe unto you for I will smith you");
                System.out.println("");
                slowPrint("You clashed with " + e1.getTitle());
                System.out.println();
                slowPrint("However, you falter and are defeated...");
                System.out.println("");
                slowPrint(e1.getName() + ": Go and travel elsewhere");
                System.out.println("");
                p1.setPower(3);

                //Other senarios
            } else {
                System.out.println("");
                slowPrint("You bypass the adversary and escape, thus carrying on.");
                System.out.println("");
            }
        }//End If input = 1
        if (inputEA == 2) {
            System.out.println("");
            slowPrint("You took the long way in which you stumbled on stones.");
            System.out.println("");
            slowPrint("You feel more powerful.");
            System.out.println("");
            p1.setPower(3);
        }//End If input = 2

        //Update player roads
        p1.addRoad();

        //Conclusion
        //Text output
        System.out.println("");
        slowPrint("You made it through odd obstacles, through thorns and thirsles, and the variety.");
        System.out.println("");
        slowPrint("You drag your feet as you look out to the horizon, the city itself...");
        System.out.println("Welcome to Egbelie");

        //End game option
        System.out.println("---------------------");
        System.out.println("Would you like to replay the game?");
        System.out.println("Enter true or false");
        replay = scnr.nextBoolean();

        if(replay == true){
            replay = true;
        }
        if(replay == false){
            System.out.println("Thank you for playing");
            System.out.println("Here is the amount of roads taken : " + p1.getRoads());
            System.exit(0);
        }

        }//End While Loop
    }//End Main Method

    //SlowPrint Method
    public static void slowPrint(String output) {
        for (int i = 0; i < output.length(); i++) {
            char c = output.charAt(i);
            System.out.print(c);
            try {
                TimeUnit.MILLISECONDS.sleep(250);
            } catch (Exception e) {

            }//End Exception
        }//End For Loop
    }//End SlowPrint Method

    //Generate Random number
    public static int genRM3(int a) {
        a = (int) (Math.random() * 3) + 1;
        return a;
    }
}//End Main Class
