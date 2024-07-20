#include <iostream>
#include <map>
#include <string>

static std::map<int,std::string> todoList;
static std::string nextup();


int main(int argc, char* argv[])
{
  // too many args
  if(argc > 3) 
  {
    std::cerr << "Too many arguments!\n";
    return -1;
  }

  // just ./nextup was called
  if (argc == 1)
  {
    std::cout << nextup();
  }
  else
  {
    // handle the commands    
    std::cout << "This is where I should handle commands.\n";
  }
  
}

static std::string nextup()
{
  std::string ret;
  
  if (!todoList.empty())
  {
    ret = todoList[0];
  }
  else
  {
    ret = "You currently have no tasks. Use \"./nextup create <task>\" to create a new task.\n\nFor help type, \"./nextup help\"\n";
  }

  return ret;
}

