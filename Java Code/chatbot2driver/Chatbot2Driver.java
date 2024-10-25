package chatbot2driver;

import java.util.Scanner;

public class Chatbot2Driver {
    /**
     * Create a chatbot, give it user input, and print its replies.
     */
    public static void main(String[] args) {
        // for formatting output
        String startMessage = "****************************  START  *******************************\n";
        String endMessage = "\n****************************   END   *******************************\n";
        System.out.println(startMessage);

        // create an instance of the Chatbot
        Chatbot2 chatbot = new Chatbot2();
        // print the Chatbot's welcome message
        System.out.println(chatbot.getGreeting());
        // create a Scanner instance for user input
        Scanner in = new Scanner(System.in);
        // read the user input
        String userInput = in.nextLine();

        // set the chatbot to respond to user input
        // as long as the user does not input the word bye
        while (!userInput.equalsIgnoreCase("Bye")) {
            System.out.println(chatbot.getResponse(userInput));
            userInput = in.nextLine();
        }
        // print closing messages
        System.out.println("Goodbye!");
        System.out.println(endMessage);
        in.close(); // Close the Scanner resource
    }
}
