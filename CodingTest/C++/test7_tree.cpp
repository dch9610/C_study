// 헤더파일 포함
#include <iostream>
#include <queue>
#include <string>

using namespace std;

// 트리를 위한 기본구조 작성
struct node{
    string position;
    node* first;
    node* second;
};

// 각각의 노드는 다른 두개의 노드에 대한 링크를 가짐
// org_tree 구조를 새로 정의
struct org_tree{
    node* root;

    // 루트 노드를 생성하는 함수 생성
    static org_tree create_org_structure(const string& pos){
        org_tree tree;
        tree.root = new node {pos,NULL,NULL}; // 제일 상단 노드 first, second는 NULL
        return tree;
    }

    // 트리에 값을 추가하는 함수
    // 상사의 직책 이름과 부하 직원의 직책 이름을 인자로 받으며,
    // 상사의 직책은 tree에 존재
    static node* find(node* root, const string& value){

        // 가장 먼저 루트 노드 검사
        if(root == NULL){
            return NULL;
        }


        if(root->position == value){
            return root;
        }

        // 첫번째 서브트리 노드 검사
        auto firstFound = org_tree::find(root->first, value);

        if(firstFound != NULL){
            return firstFound;
        }

        // 다 없다면 마지막 서브트리도 검사
        return org_tree::find(root->second, value);
    }

    // 새로운 원소를 추가하는 삽입 함수 생성
    // find() 함수 활용
    bool addSubordinate(const string& manager, const string& suboardinate){
        auto managerNode = org_tree::find(root, manager);

        // managerNode가 아닌 경우
        if(!managerNode){
            cout << manager << "을(를) 찾을 수 없습니다.: " << endl;
            return false;
        }

        // 서브트리에 값이 둘다 있는 경우
        if(managerNode->first && managerNode-> second){
            cout << manager << " 아래에" << suboardinate <<"을 추가할 수 없습니다. " << endl;
            return false;
        }

        // 위의 조건이 일치하지 않고 managerNode가 첫번째 서브트리 노드를 가리키고 있지 않은 경우
        if(!managerNode->first){
            managerNode->first = new node{suboardinate, NULL, NULL};
        } else{
            managerNode->second = new node{suboardinate, NULL, NULL};
        }
        cout << manager << " 아래에" << suboardinate << "을 추가했습니다." << endl;
        return true;
    }

};

// 트리를 구성하는 코드 작성
int main(){
    auto tree = org_tree::create_org_structure("CEO");

    tree.addSubordinate("CEO", "부사장");
    tree.addSubordinate("부사장", "IT부장");
    tree.addSubordinate("부사장", "마케팅부장");
    tree.addSubordinate("IT부장", "보안팀팀장");
    tree.addSubordinate("IT부장", "앱개발팀장");
    tree.addSubordinate("마케팅부장", "물류팀장");
    tree.addSubordinate("마케팅부장", "홍보팀장");
    tree.addSubordinate("부사장", "재무부장"); // 부사장은 이미 2개의 서브트리노드를 추가했기 때문에
}