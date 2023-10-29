#include <iostream>

/* 参考コード
int main(){
    int array[] = {4,2,1,9,5};

    int i = 0;
    while(i<5){
        std::cout << array[i] << std::endl;
        i += 1;
    }
}
*/
/* 最後から順に
int main(){
    int array[] = {4,2,1,9,5};

    int i = 4;
    while(i>-1){
        std::cout << array[i] << std::endl;
        i -= 1;
    }
}
*/
/* forを使って
int main(){
    int array[] = {4,2,1,9,5};

    for(int i = 4;i>-1;i--){
        std::cout<< array[i] <<std::endl;
    }
}
*/

int main(){
    int array[] = {4,2,1,9,5};

    int i = sizeof(array)/sizeof(int);
    do{
        std::cout<< array[--i] <<std::endl;
    }
    while(i);
}