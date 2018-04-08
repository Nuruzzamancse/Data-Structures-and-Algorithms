#include<bits/stdc++.h>

using namespace std;

int binarySearch(int L[],int x, int first, int last)
{


    if(last >= first){
        int middle = (first + last ) / 2;

        if(x == L[middle])
            return middle;
        else if(x<L[middle])
            return binarySearch(L, x, first, middle - 1);
        else
            return binarySearch(L, x, middle + 1, last);

    }
    else
        return -1;
}


int main()
{


  int myList[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

  int myfirst = 0;
  int mylast = sizeof(myList);
  int findthis = 5;


  int resultPosition = binarySearch(myList, findthis, myfirst, mylast);

  if ( resultPosition == -1 )
    {
      cout << "False: Number not found" <<endl;
    }
  else
    {
      cout <<"True: number is found in position " << resultPosition + 1 << endl;//binarySearch(myList, findthis, myfirst, mylast) <<endl;
    }


  return 0;
}
