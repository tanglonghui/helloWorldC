#include <iostream>
using namespace std;

struct info
{
    /* data */
    int age;
    string name;
} ;

info *p;

int main() {
    system("chcp 65001");
    info student,stu2;
    student.age =1;
    student.name ="a生sdjafljasdfjaosjdfoiasjfiojsaoifjaoifj你说的死哦额封号IE是佛爱色合法啊啥都会佛艾萨收到货佛i啊上代发啊啥都会佛爱啥啥大佛爱莎大佛艾萨死哦黄大发3阿德石佛寺啊好的发哦is好打发ishdfoiaaiohsadsadasddfsasdfasdffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffdadfsdfsdfsdfsfsdf";
    stu2.age =1;
    stu2.name ="0";

    std::cout << student.name << std::endl;
    std::cout << &student << std::endl;
    std::cout << sizeof(student) << std::endl;
     std::cout << sizeof(student.name) << std::endl;
    std::cout << "1-------" << std::endl;
    std::cout << stu2.name << std::endl;
    std::cout << &stu2 << std::endl;
    std::cout << sizeof(stu2) << std::endl;

    info c;
    p=&c;
    p->age =1;
    p->name = "aishdfoiaaiohsadsadasddfsdadfsdfsdfsdfsfsdf";
    std::cout << "2-------" << std::endl;
    std::cout << p->age << std::endl;
    std::cout << p->name << std::endl;
    std::cout << &stu2 << std::endl;
    std::cout << sizeof(p) << std::endl;
    std::cout << "3-------" << std::endl;

    return 0;
}