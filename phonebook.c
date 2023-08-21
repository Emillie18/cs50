#include <cs50.h>
#include <stdio.h>
#include <string.h>

// creating a data type called person.
typedef struct
{
    // including things we need in the type
    string name;
    string number;
}
person; // name of the type

int main (void)
  {
    //Creating an array with the type we just made
      person people[2];

      people[0].name = "David";
      people[0].number = "0774858895";

      people[1].name ="Emillie";
      people[1].number = "0787922744";

     string name = get_string("Name: ");
using a for loop for linear search in our data
     for (int i = 0; i < 2; i++)
     {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("found %s\n",people[i].number );
            return 0;
        }

     }
     printf("notfound\n");
     return 1;
}