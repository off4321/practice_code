# include<iostream>
/*
// 1.1
void show_value(float f){
    std::cout << f << std::endl;
}

int main(){

    float i = 42.195f;
    // 42.195を出力させる
    show_value(i);
}
*/

/*
//1.2
int main(){

    int f = 100.001f;
    f -= 100;
    std::cout << f << std::endl;
    // 出力は0
}
*/

/*
//1.3
int main(){
    int i = 0;
    // 出力が42になるようにポインタを使って＜始め＞
    int* i_point = &i;
    *i_point = 42;
    //＜終わり＞
    std::cout << i << std::endl;
}
*/