#include <stdio.h>

static int taskCount = 0; 

int main(int argc, char* agrgv[])
{
  printf("\033[0;31m"); 
  printf("~~~ NextUp Task Manager V0.0.1 ~~~\n\n");
  printf("\033[0m");

  // List current task
  if (taskCount != 0)
  {
    // Print the next up task
    printf("Next up: <task>");
  }
  else
  {
    printf("You currently have no tasks. Use \"create\" to create a new task.\n");
    printf("\nType \"help\" at anytime.\n");
  }
  
  return 1;
  
}
