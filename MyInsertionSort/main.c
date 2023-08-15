#include <stdio.h>
#include <stdlib.h>
typedef unsigned int uint32;
typedef signed int sint32;

uint32 Data[10] = {11, 2, 3, 55, 22, 2, 7, 77, 8, 9};

void InsertionSortAlgorithm(uint32 ArrData[], uint32 ArrLen);
void PrintItems(uint32 ArrData[], uint32 ArrLen);

int main()
{
    PrintItems(Data, 10);
    InsertionSortAlgorithm(Data, 10);
    PrintItems(Data, 10);
    return 0;
}
void InsertionSortAlgorithm(uint32 ArrData[], uint32 ArrLen)
{
    uint32 InsertItem = 0;
    sint32 ComparedItem = 0;
    for (uint32 Iteration = 1; Iteration < ArrLen; Iteration++)
    {
        InsertItem = ArrData[Iteration];
        ComparedItem = Iteration - 1;
        while ((ArrData[ComparedItem ] > InsertItem) && ComparedItem >= 0)
        {
            ArrData[ComparedItem + 1] = ArrData[ComparedItem];
            ComparedItem--;
        }
        ArrData[ComparedItem + 1] = InsertItem;
    }
    
}
void PrintItems(uint32 ArrData[], uint32 ArrLen)
{
    uint32 Counter = 0;
    for ( Counter = 0; Counter < ArrLen; Counter++)
    {
        printf("%i\t", ArrData[Counter]);
    }
    printf("\n");
    
}