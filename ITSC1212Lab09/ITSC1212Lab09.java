package itsc1212lab09;

/**
 * Flower Box here.
 */
public class ITSC1212Lab09 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {

        String symbol_a = "%%%%";
        String symbol_b = "####";

        for (int row = 0; row < 4; row++) {
            for (int col = 0; col < 4; col++) {

                // If statments
                if (row % 2 != 0) {
                    if (col % 2 == 0) {
                        System.out.print(symbol_b);
//                        System.out.print(" ");
                    } else {
                        System.out.print(symbol_a);
                    // Row will print symbol b when it is divisible by 2 and if not will print symbol a    

                    }
                } else {
                    if (col % 2 != 0) {
                        System.out.print(symbol_b);
//                        System.out.print(" ");
                    } else {
                        System.out.print(symbol_a);
//                        System.out.print(" ");
                    }
                }

                System.out.print(" ");


            }
            System.out.println();
        }

    }

}
