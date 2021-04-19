#include<stdio.h>
#include<stdlib.h>

typedef struct treeNode 
{
    char key;   //데이터 필드
    struct treeNode* left;  //왼쪽 서브트리 링크 필드
    struct treeNode* right;    //오른쪽 서브트리 링크 필드
}treeNode;

typedef char element; // char을 이진 탐색 트리 element의 자료형으로 정의

treeNode* insertNode(treeNode *p, char x)
{   //포인터 p가 가리키는 노드와 비교하여 노드 x를 삽입하는 연산
    treeNode *newNode;
    if (p == NULL)
    {
    newNode = (treeNode*)malloc(sizeof(treeNode));
            newNode->key = x;
            newNode->left = NULL;
            newNode->right = NULL;
            return newNode;
    }
    else if(x < p-> key) 
    {
        p->left = insertNode(p -> left , x);
    }
    else if(x > p-> key)
    {
         p->right = insertNode(p->right, x);
    }
    else
    { 
        printf("\n 이미 같은 키가 있습니다! \n");
    }
    return p;
}

void deleteNode(treeNode *root, element key)
{   //root 노드부터 탐색하여 key 값과 같은 노드를 찾아 삭제하는 연산
    treeNode *parent, *p, *succ, *succ_parent;
    treeNode *child;

    parent = NULL;
    p = root;
    while ((p != NULL) && (p->key != key))
    {
        parent = p;
        if(key < p-> key) 
        {
            p = p -> left;
        }
        else
        {
            p = p-> right;
        }
    }
    if(p == NULL)
    {
        printf("\n 찾는 키가 이진트리에 없습니다!!");
        return;
    }

    if((p -> left == NULL) && (p->right == NULL))
    {
        if(parent != NULL)
        {
            if(parent -> left == p)
            {
                parent -> left = NULL;
            }
            else
            {
                parent -> right = NULL;
            }
        }
        else 
        {
            root = NULL;
        }
    }
    else if ((p->left == NULL) || (p->right == NULL))
    {
    if(p->left != NULL)
    {
        child = p->left;
    }
    else
    {
         child = p->right;
    }
    if(parent != NULL)
    {
        if(parent -> left == p) parent -> left = child;
        else 
        {
            parent -> right = child;
        }
    }
    else 
    {
        root = child;
    }
}
    else 
    {
        succ_parent = p;
        succ = p -> left;
        while(succ -> right != NULL)
        {
            succ_parent = succ;
            succ = succ -> right;
        }
        if(succ_parent -> left == succ){
             succ_parent -> left = succ -> left;
        }
        else 
        {
            succ_parent -> right = succ-> left;
        }
        p -> key = succ -> key;
        p = succ;
    }
    free (p);
}

treeNode* searchBST(treeNode* root, char x)
{
    treeNode* p;
    p = root;
    while (p != NULL)
    {
        if(x < p-> key) p = p-> left;
        else if(x == p->key) return p;
        else p = p->right;
    }
    printf("\n 찾는 키가 없습니다!");
    return p;
}

void displayInorder(treeNode *root)
{
    if(root)
    {
        displayInorder(root -> left);
        printf("%c_", root -> key);
        displayInorder(root -> right);
    }
}

void checkNode(treeNode *root)
{
    treeNode* p;
    p = root;
    if(root)
    {
        if((p->left != NULL) && (p->right != NULL))
        {
            checkNode(root -> left);
            printf("%c ", root -> key);
            checkNode(root -> right);
        }
    }
}

void terminalNode(treeNode *root)
{
    treeNode* p;
    p = root;
    if(root)
    {
        if((p->left == NULL) && (p->right == NULL))
        {
            terminalNode(root -> right);
            printf("%c ", root -> key);
            terminalNode(root -> left);
        }
        else
        {
            terminalNode(root -> left);
            terminalNode(root -> right);
        }
        
    }
}


void menu()
{
    printf("\n*----------------------------------------------*");
    printf("\n\t1 : 트리 출력 ");
    printf("\n\t2 : 문자 삽입");
    printf("\n\t3 : 문자 삭제");
    printf("\n\t4 : 문자 검색");
    printf("\n\t5 : 자식노드의 개수가 2개인 노드들의 이름 출력");
    printf("\n\t6 : 단말노드들의 이름 출력");
    printf("\n\t7 : 종료");
    printf("\n*----------------------------------------------*");
    printf("\n메뉴 입력 >> ");
}

int main()
{
    treeNode* root = NULL;
    treeNode* foundedNode = NULL;
    char  key, toInt; 
    int choice;
    
    root = insertNode(root, 'G');   //7 1
    insertNode(root,'I');   //9 2
    insertNode(root,'H');   //8 3
    insertNode(root,'D');   //4 4
    insertNode(root,'B');   //2 5
    insertNode(root,'M');   //13 6
    insertNode(root,'N');   //14 7
    insertNode(root,'A');   //1 8
    insertNode(root,'J');   //10 9
    insertNode(root,'E');   //5 10
    insertNode(root,'Q');   //17 11

    while (1)
    {
        menu();
        scanf("%d",&choice);
        switch(choice)
        {
        case 1 : printf("\t[이진트리 출력] ");
                displayInorder(root); printf("\n");
                break;

        case 2 : printf("삽입할 문자를 입력하세요 :");
                key = getchar(); getchar();
                insertNode(root, key);
                break;

        case 3 : printf("삭제할 문자를 입력하세요 :");
                key = getchar(); getchar();
                deleteNode(root, key);
                break;

        case 4 : printf("찾을 문자를 입력하세요 :");
                key = getchar(); getchar();
                foundedNode = searchBST(root, key);
                if (foundedNode != NULL)
                {
                    printf("\n%c를 찾았습니다! \n", foundedNode -> key);
                }
                else
                { 
                    printf("\n 문자를 찾지 못했습니다. \n");
                }
                break;
        //자식 노드의 개수가 2개인 노드들의 이름 출력
        case 5 : printf("\t[자식 노드의 개수가 2개인 노드들의 이름] ");
                checkNode(root); printf("\n");
                break;

        //단말노드들의 이름 출력
        case 6 : printf("\t[단말노드들의 이름 출력] ");
                terminalNode(root); printf("\n");
                break;

        case 7 : return 0;

        default : printf("%d에 해당되는 메뉴가, 없는 메뉴입니다. 메뉴를 다시 선택하세요 \n", choice);
                  break;
        }
    }
    
}
