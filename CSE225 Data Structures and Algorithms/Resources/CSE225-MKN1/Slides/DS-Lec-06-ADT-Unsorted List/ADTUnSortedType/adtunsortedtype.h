#ifndef ADTUNSORTEDTYPE_H
#define ADTUNSORTEDTYPE_H

const int MAX =5;

template <class ItemType>
class ADTUnSortedType
{
  public :
  ADTUnSortedType ( ); //  8 public member functions
  ~ADTUnSortedType();

  bool IsFull ( );    //const;
  bool IsEmpty ( )  const;
  int GetLength ( )  const ; // returns length of list
  int SearchItem ( ItemType  item);
  void PutItem ( ItemType  item );
  void DeleteItem ( ItemType  item );
  void ResetList ( );
  ItemType GetNextItem ();

private :
 int length;              //  3 private data members
 ItemType info[MAX];
 int	cp;

};

#endif // ADTUNSORTEDTYPE_H
