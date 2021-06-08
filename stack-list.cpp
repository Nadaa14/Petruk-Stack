/*Tugas Kelompok Stack List
Nama-anggota:
1. Nadaa Azhar				2017051057
2. Erlangga Dwi Jiwantoro	2017051020
3. Fathur Rahman Rais		2057051003

Link Github: https://github.com/Nadaa14/Petruk-Stack.git
*/
#include <bits/stdc++.h>
#define MAX_STACK_SIZE 100

using namespace std;
class Lingkaran{
public:
    double radius;
    Lingkaran *next;

    Lingkaran(){
        this->radius=1;
    }
    Lingkaran(double radius){
        this->radius = radius;
    }
    Lingkaran(Lingkaran &lingkaran) {
        this->radius = lingkaran.radius;
    }
    double getLuas(){
        return M_PI * radius * radius;
    }
    double getKeliling(){
        return 2 * M_PI * radius;
    }
};

class ListStack{
public:
    Lingkaran *top;
    ArrayStack(){
        top=NULL;
    }
    bool isEmpty(){
        //Fathur
    }
    bool isFull(){
        //Fathur
    }
    void push(Lingkaran *item){
        //Nadaa
    }
    void push(double radius){
        //Nadaa
    }
    Lingkaran *pop(){
        //Erlangga
    }
};
int main(){
    
}
