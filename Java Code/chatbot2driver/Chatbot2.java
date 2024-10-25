package chatbot2driver;

public class Chatbot2 {

    /**
     * A default constructor
     */
    public Chatbot2(){
    }

    /**
     * Get a default greeting
     */
    public String getGreeting() {
        return "Hello, let's talk.";
    }

    /**
     * Gives a response to a user statement
     */
    public String getResponse(String statement) {
        //Part D
        String response = "no";
        if (statement.indexOf("no") >= 0) {
            response = "Why so negative?";
        } 
        if (statement.indexOf("mother") >= 0) {
            response = "Tell me more about your mother.";
        }

        //Part A
        if (statement.indexOf("near") >=0 
                && statement.indexOf("Starbucks") >=0){
            response = "The nearest Starbucks is in the Student Union 0.5 miles away.";
        }

        //Part B
        if (statement.indexOf("dog") >=0
                || (statement.indexOf("cat")) >=0 ){
            response = "Tell me more about your pets.";
        }

        //Part C
        if (!(statement.indexOf("car") >=0) 
                && statement.indexOf("park") >=0){
            response = "I bet the trees are lovely this time of year"; 
        } 
        else if (statement.indexOf("park") >=0){
            response = "Parking on campus is atrocious and expensive";
        }
        if (!(statement.indexOf("music") >=0) 
                && statement.indexOf("rock") >=0){
            response = "I had a rock collection too!"; 
        } 
        else if (statement.indexOf("rock") >=0){
            response = "What your favourite band?";
        }

        // Bonus 
        if (statement.indexOf("love") >= 0 
                && statement.indexOf("mom")>= 0
                && statement.indexOf("cook") >=0 ){
         response = "I'll bet it's delicious.";   
        }
        if (response.length() == 0) {
            response = getRandomResponse();
        } 
        return response;
    } 

    /**
     * Pick a generic response to use if nothing else fits.
     */
    private String getRandomResponse() {
        final int NUMBER_OF_RESPONSES = 4;
        double r = Math.random();
        int whichResponse = (int) (r * NUMBER_OF_RESPONSES);
        String response = "";

        if (whichResponse == 0) {
            response = "Interesting, tell me more.";
        }  
        if (whichResponse == 1) {
            response = "Hmmm.";
        } 
        if (whichResponse == 2) {
            response = "Do you really think so?";
        } 
        if (whichResponse == 3) {
            response = "You don't say.";
        }

        return response;
    }
}
