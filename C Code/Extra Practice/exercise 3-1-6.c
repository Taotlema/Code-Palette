/*
Exercise 3-1-6: While Loops
Ayemhenre Isikhuemhen
September 10, 2024
*/

main() {
  //fields
  int sum = 0;
  int input = 0;

  // The While Loop in Question
  while (input != -1) {
      printf("Current Sum: %d\n", sum);
      printf("Please enter the next number: ");
      scanf("%d", &input);

      // Sum Collector
      if (input != -1) {
          sum += input;
      }
  }

  printf("Done!\n");
}
