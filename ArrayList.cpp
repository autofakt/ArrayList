#include "ArrayList.h"
#include <iostream>
using namespace std;

ArrayList::ArrayList (int cap):
capacity (cap),
num_items (0)
{
  data = new (nothrow) int[capacity];
  if (!data)
    {
      cout << "dynamic allocation error" << endl;
    }
}

ArrayList::~ArrayList ()
{
  delete data;
}

void
ArrayList::add (int item)
{
  data[num_items++] = item;
}

void
ArrayList::add (int pos, int item)
{
  if (pos > num_items || pos < 0)
    throw "invalid position in add()";
  int temp;
  for (int i = 0; i <= (num_items - pos); i++)
    {
      int temp = data[num_items - i];
      data[(num_items - i) + 1] = temp;
    }
  data[pos] = item;
  num_items++;

}

bool ArrayList::contains (int item)
{
  for (int i = 0; i < num_items; i++)
    {
      if (data[i] == item)
	return true;
    }
  return false;

}

int
ArrayList::size ()
{
  return num_items;
}

bool ArrayList::isEmpty ()
{
  if (num_items == 0)
    {
      return true;
    }
  else
    return false;
}

int
ArrayList::get (int pos)
{
  if (pos > num_items || pos < 0)
    throw "invalid position in get()";
  return data[pos];
}

int
ArrayList::remove (int pos)
{
  if (pos > num_items || pos < 0)
    throw "invalid position in remove()";
  for (int i = 0; i < (num_items - pos); i++)
    {
      data[pos + i] = data[(pos + 1) + i];
      data[(pos + 1) + i] = 0;
    }
  num_items--;
}

void
ArrayList::show ()
{
  cout << "[ ";
  if (isEmpty () == true)
    cout << "EMPTY ";
  for (int i = 0; i < num_items; i++)
    {
      cout << data[i] << " ";
    }
  cout << "]";
}
