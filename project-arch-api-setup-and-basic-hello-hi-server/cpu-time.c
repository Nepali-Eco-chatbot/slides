#include <stdio.h>
#include <time.h>

void heavyTask() {
  long long counter;
  for (long i = 0; i < 500000; i++) {
    counter += 1;
  }
}

int main() {
  clock_t startTime = clock();
  heavyTask();
  clock_t endTime = clock();

  printf("The task took %f\n", ((double)(endTime - startTime)) / CLOCKS_PER_SEC);

  return 0;
}
