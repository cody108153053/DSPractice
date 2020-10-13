#include <iostream>

using namespace std;

struct Role {
    char* name; // �m�W 
    int level;  // ���� 
    int hp; // hit points ��q 
    int ap; // attack power �����O 
    int dp;// defence power ���m�O 
    int sp;//spirit power �믫��q 
};

void dump_role(Role& role) {
    cout << "�m�W" << role.name << endl;
    cout << "����" << role.level << endl;
    cout << "��q" << role.hp << endl;
    cout << "�����O" << role.ap << endl;
    cout << "���m�O " << role.dp << endl;
    cout << "�믫��q" << role.sp << endl;
}

void test_role() {
    char name[] = "�T�A�ǥ��t";

    struct Role role;

    role.name = name;
    role.level = 1;
    role.hp = 10;
    role.ap = 1;
    role.dp = 1;
    role.sp = 1;

    dump_role(role);
}

int main(int argc, char* argv[]) {
    test_role();
}
