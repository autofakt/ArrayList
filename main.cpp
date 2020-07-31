#include "ArrayList.h"
#include <iostream>

using namespace std;

int
main ()
{
  try
  {
    cout << "1. Contructed an empty list with capacity set to 100:" << endl;
    ArrayList mylist (100);
    cout << "2. Call to isEmpty(): " << mylist.isEmpty () << endl;

    cout << "3. Call to size() gives us a value of: " << mylist.size () << endl;
    cout << "4. Adding 23, 42, 14, & 33 to the list using add(int item): " << endl;
    mylist.add (23);
    mylist.add (42);
    mylist.add (14);
    mylist.add (33);
    mylist.show ();
    cout << endl;
    
    cout << "5. Adding 99 to the position 1 using add(int pos, int item): " << endl;
    mylist.add (1, 99);
    mylist.show ();
    cout << endl;
    
    cout << "6. Adding 100 to the position 5 using add(int pos, int item): " << endl;
    mylist.add (5, 100);
    mylist.show ();
    cout << endl;
    
    cout << "7. Removing element at position 2 using remove(int pos): " << endl;
    mylist.remove (2);
    mylist.show ();
    cout << endl;
    
    cout << "8. Removing element at position 0 using remove(int pos): " << endl;
    mylist.remove (0);
    mylist.show ();
    cout << endl;
    
    cout << "9. Removing element at position 3 using remove(int pos): " << endl;
    mylist.remove (3);
    mylist.show ();
    cout << endl;
    
  
    cout << "10. Checking if list contains item 33 using contains(): " <<
      mylist.contains (33) << endl;
      
    cout << "11. Checking if list contains item 111 using contains(): " <<
      mylist.contains (111) << endl;
      
    cout << "12. Call to size() gives us a value of: " << mylist.size () <<
      endl;
    cout << "13. Call to isEmpty(): " << mylist.isEmpty () << endl;
    cout << "14. Calling get(2) to get value at index 2: " << mylist.get (2) <<
      endl;
    cout << "15. Calling get(99) to get exception error: " << mylist.get (99) <<
      " ";
      
  }
  catch (const char *msg)
  {
    cout << msg << endl;
  }

  return 0;
}