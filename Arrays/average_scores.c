#include <stdio.h>
#include <cs50.h>

// Lecture 2 Arrays Week 2 tutorial paused at 1:30:00

const int N = 3; // number of scores;

float average(int array[]);

int main(void)
{
  int scores[N];
  for (int i = 0; i < N; i++)
  {
    scores[i] = get_int("Scores: ");
  }

  printf("Average: %f\n", average(scores));
}

float average(int array[])
{
  int sum = 0;
  for (int i = 0; i < N; i++)
  {
    sum += array[i];
  }

  return sum / (float) N;

}