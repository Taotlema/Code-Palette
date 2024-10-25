package candleshop;

/**
 * @author ayemi ITSC1212-101, Long
 * @version 1
 * @since 12/27/2022
 */
import java.util.Scanner;

public class CandleShop {

    public static void main(String[] args) {

        // Scanner
        Scanner scnr = new Scanner(System.in);

        //Candle Objects
        Candle itemA = new Candle("Birthday Candles", 1, 5.00, 3);
        Candle itemB = new Candle("TeaLight", 2, 5.00, 4);
        Candle itemC = new Candle("Pillar", 3, 5.00, 5);

        //Store Owner Instructions
        System.out.println("****************************************");
        System.out.println("******      Rein's Candle Wares   ******");
        System.out.println("****************************************");
        System.out.println();
        System.out.println("Welcome to the store!");
        System.out.println("You can purcahse following candles of your liking below");
        System.out.println("****************************************");
        System.out.println(itemA.getName() + " " + itemA.getCost());
        System.out.println(itemB.getName() + " " + itemB.getCost());
        System.out.println(itemC.getName() + " " + itemC.getCost());

        //Primitive Vairables for calculating
        int totalItemA = 0;
        int totalItemB = 0;
        int totalItemC = 0;

        //int amountToBuy = scnr.nextInt();
        //Customer interaction Loop
        //Bonus: Customer interaction Input
        while (totalItemA == 0 || totalItemB == 0 || totalItemC == 0) {
            //User input for how many candles they want
            if (totalItemA == 0 || totalItemA < 0) {
                System.out.println("How many " + itemA.getName() + "'s"
                        + " would you like to purcahse?");
                totalItemA = scnr.nextInt();
                // Bonus conditions (cannot have values equal to or less than 0
                if (totalItemA < 0) {
                    System.out.println("Error: Negative number are not accepted.");
                    totalItemA = 0;
                } else if (totalItemA == 0) {
                    System.out.println("Please buy at lest one candle.");
                }
            } else if (totalItemB < 0 || totalItemB == 0) {
                System.out.println("How many " + itemB.getName() + "'s"
                        + " would you like to purcahse?");
                totalItemB = scnr.nextInt();
                if (totalItemB < 0) {
                    System.out.println("Error: Negative number are not accepted.");
                    totalItemA = 0;
                } else if (totalItemB == 0) {
                    System.out.println("Please buy at lest one candle.");
                }
            } else if (totalItemC < 0 || totalItemC == 0) {
                System.out.println("How many " + itemC.getName() + "'s"
                        + " would you like to purcahse?");
                totalItemC = scnr.nextInt();
                if (totalItemC < 0) {
                    System.out.println("Error: Negative number are not accepted.");
                    totalItemA = 0;
                } else if (totalItemC == 0) {
                    System.out.println("Please buy at lest one candle.");
                }
            }
        }
        // Primitive Variables for prce and discount calculation
        double itemATotalCost = totalItemA * itemA.getCost();
        double itemBTotalCost = totalItemB * itemB.getCost();
        double itemCTotalCost = totalItemC * itemC.getCost();
        int discountNumberItemA = 0;
        int discountNumberItemB = 0;
        int discountNumberItemC = 0;
        double totalDiscountedAmountA;
        double totalDiscountedAmountB;
        double totalDiscountedAmountC;

        // Discount calculation   
        if (itemATotalCost > 20 && itemATotalCost <= 35) {
            discountNumberItemA = 5;
        } else if (itemATotalCost > 35 && itemATotalCost <= 55) {
            discountNumberItemA = 7;
        } else if (itemATotalCost > 55 && itemATotalCost <= 100) {
            discountNumberItemA = 10;
        } else if (itemATotalCost > 100) {
            discountNumberItemA = 20;
        }
        if (itemBTotalCost > 20 && itemBTotalCost <= 35) {
            discountNumberItemB = 5;
        } else if (itemBTotalCost > 35 && itemBTotalCost <= 55) {
            discountNumberItemB = 7;
        } else if (itemBTotalCost > 55 && itemBTotalCost <= 100) {
            discountNumberItemB = 10;
        } else if (itemBTotalCost > 100) {
            discountNumberItemB = 20;
        }
        if (itemCTotalCost > 20 && itemCTotalCost <= 35) {
            discountNumberItemC = 5;
        } else if (itemCTotalCost > 35 && itemCTotalCost <= 55) {
            discountNumberItemC = 7;
        } else if (itemCTotalCost > 55 && itemCTotalCost <= 100) {
            discountNumberItemC = 10;
        } else if (itemCTotalCost > 100) {
            discountNumberItemC = 20;
        }
        totalDiscountedAmountA = (itemATotalCost * discountNumberItemA) / 100;
        double newItemACost = itemATotalCost - totalDiscountedAmountA;

        totalDiscountedAmountB = (itemBTotalCost * discountNumberItemB) / 100;
        double newItemBCost = itemBTotalCost - totalDiscountedAmountB;

        totalDiscountedAmountC = (itemCTotalCost * discountNumberItemC) / 100;
        double newItemCCost = itemCTotalCost - totalDiscountedAmountC;

        double totalCostABC = newItemACost + newItemBCost + newItemCCost;

        // Bonus: Loyalty Points 
        int totalCandlePurchased = totalItemA + totalItemB + totalItemC;
        int loyaltyPoints = 0;

        for (int repeat = 0; totalCandlePurchased < 0; repeat++) {
            totalCandlePurchased = totalCandlePurchased - 10;
            repeat = loyaltyPoints;
        }

        //Aggergate Burntime
        int totalBurntime = (totalItemA * itemA.getTime())
                + (totalItemB * itemB.getTime() + (totalItemC * itemC.getTime()));

        //Cost per Minute Burntime
        double costPerMinute = (totalCostABC / (totalBurntime * 60));

        // Output of price  discount, loyalty points, and burntimes
        System.out.print("Okay! Here is your reciept");
        System.out.println();
        System.out.println("****************************************");
        System.out.println("******       RCW : RECEIPT        ******");
        System.out.println("****************************************");
        System.out.println(itemA.getName() + "......." + newItemACost
                + " " + "- " + discountNumberItemA + "%");
        System.out.println(itemB.getName() + "......." + newItemBCost
                + " " + "- " + discountNumberItemB + "%");
        System.out.println(itemC.getName() + "......." + newItemCCost
                + " " + "- " + discountNumberItemC + "%");
        System.out.println();
        System.out.println("TOTAL: " + totalCostABC);
        System.out.println();
        System.out.println("Rewards: " + loyaltyPoints);
        System.out.println("****    ****    ****    ****    ****    ");
        System.out.println();
        System.out.println("All of the purchased candles should burn atleast: " + totalBurntime + "hours");
        System.out.println("This in terms of Cost Per Minute is " + costPerMinute);

        // Histogram of purchases + Bonus: different symbols per item
        //Histogram symbols
        char symbolA = '#';
        char symbolB = '$';
        char symbolC = '@';
        //Histogram Process
        System.out.println("****    ****    ****    ****    ****    ");
        System.out.println();

        if (itemA.getType() == 1) {
            System.out.print(totalItemA + " " + itemA.getName() + " :");
            for (int addSymbol = 0; addSymbol < totalItemA; addSymbol++) {
                System.out.print(symbolA);
            }
            System.out.println();
        }
        if (itemB.getType() == 2) {
            System.out.print(totalItemB + " " + itemB.getName() + " :");
            for (int addSymbol = 0; addSymbol < totalItemB; addSymbol++) {
                System.out.print(symbolB);
            }
            System.out.println();
        }
        if (itemC.getType() == 3) {
            System.out.print(totalItemC + " " + itemC.getName() + " :");
            for (int addSymbol = 0; addSymbol < totalItemC; addSymbol++) {
                System.out.print(symbolC);
            }
            System.out.println();
        }

    }
}
