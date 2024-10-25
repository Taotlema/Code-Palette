package budget;

/**
 * @author Ayemehenre Isikhuemhen
 * ITSC1212-101, Long
 * @version1
 * @since 2022-09-30
 * Project 1
 * This project calculates how much a student needs to cover monthly expense
 with an hourly wage of 10 dollars.
 */
public class Budget {
    /**
     * @param args
     * @return 
     */
  public static void main(String[] args) {
//Below is the code to run the application
//Components of the monthly expenses (Monthly as in every 4 weeks)
    int monthlyRent = 625;
    int monthlyInternetService = 27;
    int monthlyGroceryBill = 250;
    int monthlyFunAllowance = 150;
    double monthlyExpenses = monthlyRent + monthlyInternetService
            + monthlyGroceryBill + monthlyFunAllowance; 
//The following code will be outputed in the console to tell us about the monthly expenses
    System.out.println("Within a four week month, your monthly expenses are composed of the following");
    System.out.println(" - " + "Local Apartment Rent: " + "$" + monthlyRent);
    System.out.println(" - " + "Internet Services: " + "$" + monthlyInternetService);
    System.out.println(" - " + "Grocery Expenses: " + "$" + monthlyGroceryBill);
    System.out.println(" - " + "The Fun Allowance: " + "$" + monthlyFunAllowance);
    System.out.println("Total Monthly Expenses: " + "$" + monthlyExpenses);
//A space between the expense and the calculation out to make it easier for the user to read.
System.out.println( );
//Code will calculate how many hours needed to cover expenses
    int hourlyWage = 10;
    int weeksAMonth = 4;
// 1052 = 10 (hours needed to work)
    double hoursToAffordExpenses = (monthlyExpenses / hourlyWage);
    double weeklyWorkHours = hoursToAffordExpenses / weeksAMonth;

//Code will tell how many hours the student needed to work
    System.out.println("Given you earn 10 dollars an hour, we can calculate how many hours you would need to work to cover your monthly expense");
    System.out.println("To cover expense you need to work for: "
            + hoursToAffordExpenses
    + " Hours Per Month");

    System.out.println("This means you will need to work about "
    + weeklyWorkHours + " hours a week");
//Space to seperate output for caluclating how to even out, and how to make bonus
System.out.println( );
//Code will calculate many hours needed to cover expenses and 100 extra
    double hoursToAffordExpenseBonus = ((monthlyExpenses + 100) / hourlyWage);
    double weeklyWorkBonus = hoursToAffordExpenseBonus / weeksAMonth;
//Code will tell the student how many hours needed to work    
    System.out.println("To cover expenses and have 100 dollars for savings you need to work for: "
            + hoursToAffordExpenseBonus
    + " Hours Per Month");

    System.out.println("This means you will need to work about "
    + weeklyWorkBonus + " hours a week"); 
     }
}
