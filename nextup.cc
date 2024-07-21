#include <iostream>
#include <list>
#include <string>

static std::list<std::string> todoList;
static std::string nextup();
static void create(std::string task);

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
    std::string command(argv[1]);
    std::string task;
    
    if (argc == 3) task = argv[2];
    else task = "";
          
    if (command == "create")
    {
      create(task);
    }
    else
    {
      std::cerr << "Unrecognized command.\n";
    }
  }
  
}

static std::string nextup()
{
  std::string ret;
  
  if (!todoList.empty())
  {
    ret = todoList.front();
  }
  else
  {
    ret = "You currently have no tasks. Use \"./nextup create <task>\" to create a new task.\n\nFor more commands type, \"./nextup help\"\n";
  }

  return ret;
}

static void create(std::string task)
{
  if (task != "")
  {  
    todoList.push_back(task);
    std::cout<< "\"" << task << "\"" << " added to your list.\n";
  }
  else
  {
    std::cerr << "Please try again and enter the title of a new task.\n";
  }
  // create logic to see if the task already exists. 
}