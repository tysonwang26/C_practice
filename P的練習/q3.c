/*給予一個 structure 
struct ListStruct{
    unsigned int DataH;
    unsigned int DataL;
    unsigned int NextPtr;
};
struct ListStruct ListArray[1000];
#define NULL 0xFFFF
unsigned int ListHead = 0;
其中有兩個條件
條件一  ListArray[Entry1].NextPtr = ListArray[Entry2] 
條件二  (ListArray[Entry2].DataH << 16 + ListArray[Entry2].DataL) > (ListArray[Entry1].DataH << 16 + ListArray[Entry1].DataL)
==> 第一個 index 中的 NextPtr 會指到另一個 index 中的起始位址 
    另一個 index 中的起始位址的資料內容大小一定大於原起始資料的大小
請寫一個function(unsigned int DATA_A, unsigned int DATA_B)，
能在ListArray中找到符合ListArray[Entry].DataH == Data_A 且 ListArray[Entry].DataL == Data_B
並印出其結果。如果沒有找到的話，印出”no found"  */


#include <stdio.h>
#define NULL_P 0xFFFF

struct ListStruct{
    unsigned int DataH;
    unsigned int DataL;
    unsigned int NextPtr;
};

struct ListStruct ListArray[1000];
unsigned int ListHead = 0;

void function(unsigned int DATA_A, unsigned int DATA_B){
    int pointer = ListHead;


    while(ListArray[pointer].NextPtr != NULL_P){
        if(ListArray[pointer].DataH == DATA_A && ListArray[pointer].DataL == DATA_B){
            printf("find");
            break;
        }else{
            pointer = ListArray[pointer].NextPtr;
        }
    }
}

int main(){

    return 0;
}