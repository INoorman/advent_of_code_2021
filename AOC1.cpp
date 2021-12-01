#include <iostream>
#include <string>
#include <fstream>

int main() {

    std::ifstream in;
    in.open("input.txt");

    int v[1999];
    int slide[1998];
    int element;

    if (in.is_open()) {
        int i = 0;
        while (in >> element) {
            v[i++] = element;
        }
    }
    in.close();

    for(int i = 0; i < 1998; i++){
        slide[i] = v[i] + v[i+1] + v[i+2];
    }
    int count = 0;
    for(int i = 0; i < 1997; i++){
        if(slide[i] < slide[i+1]){
            count++;
        }
    }
    std::cout << count << std::endl;
}



