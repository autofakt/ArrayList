#ifndef Array_List_
#define Array_List_

class ArrayList
{
private:
  int *data;
  int num_items;
  int capacity;

public:
    ArrayList (int cap);
   ~ArrayList ();
  void add (int item);
  void add (int pos, int item);
  bool contains (int item);
  int size ();
  bool isEmpty ();
  int get (int pos);
  int remove (int pos);
  void show ();
};

#endif
