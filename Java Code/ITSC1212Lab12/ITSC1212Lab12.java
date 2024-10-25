/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package itsc1212lab12;

import java.util.Scanner;

/**
 *
 * @author ayemi
 */
public class ITSC1212Lab12 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws InterruptedException {

        //Arrays.Fields.Objects.Scanners.Variables
        String bussinessName = "Rein's Food Bungalow";
        String ownerName = "Ayemhenre";
        String[] menuItems = {"Coffee", "Green Tea", "Black Tea", "Orange Juice", "Water",
            "Fish Sandwhich", "Chickhen salad", "Spinach Soup", "Bagel Sandwhich", "Plain Salad"};
        // field for the amount of items in the menuItems array
        int menuItemAmount = 10;
        int[] order = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        String customerName = null;
        Scanner scnr = new Scanner(System.in);

        //Part A: User Introduction
        System.out.println("#########################################");
        System.out.println();
        System.out.println("Welcome to " + bussinessName + "!");
        System.out.println("I am " + ownerName + " What's your name?");
        customerName = scnr.nextLine();
        Thread.sleep(400);
        System.out.println("Hey, there " + customerName + "!");

        //Part B: Menu Display
        System.out.println("By the way " + customerName
                + ". Have you looked at our menu?");
        System.out.println("         +++++ +++++ +++++ ++++          ");

        for (int i = 1; i < menuItemAmount; i++) {
            System.out.println(menuItems[i - 1] + " Item Number : " + i);
        }
        System.out.println("         +++++ +++++ +++++ ++++          ");

        //Part C: Populate Order Array, recording the order of Customer

        System.out.println();
        System.out.println("So, " + customerName
                + " Lets purchase the items you want.");
        for (int i = 1; i < menuItemAmount; i++){
        System.out.println("How much " + menuItems[i - 1] 
                + " would you like to buy?");
            int desiredItem = scnr.nextInt();
                    //Part D: While Loop
            if (desiredItem > 10 || desiredItem < 1){
                System.out.println("Please enter a valid item number between 1 - 10"); 
                i --;
            }else{
            desiredItem = order[i - 1];
            }
        }
        System.out.println("Okay, below is a comfirmation of your order.");

        int end = 1;
        int i = 1;
        for (String amount : menuItems){
            if (order[i - 1] > 0){
                System.out.print(menuItems[i - 1]);
                if (end != order[i]){
            System.out.print(", ");
                }
                else if(0 == order[i - 1]){
            System.out.println(". ");
            }

        }
        }
                System.out.println("         +++++ +++++ +++++ ++++          ");
        System.out.println("Thank you," + customerName 
           +" for supporting local bussiness"  
                + ", your order is coming right up!");
        System.out.println();
        System.out.println("#########################################");
    }
}
