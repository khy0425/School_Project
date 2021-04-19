#include<stdio.h>
#include<stdlib.h>

typedef struct treeNode 
{
    char key;   //������ �ʵ�
    struct treeNode* left;  //���� ����Ʈ�� ��ũ �ʵ�
    struct treeNode* right;    //������ ����Ʈ�� ��ũ �ʵ�
}treeNode;

typedef char element; // char�� ���� Ž�� Ʈ�� element�� �ڷ������� ����

treeNode* insertNode(treeNode *p, char x)
{   //������ p�� ����Ű�� ���� ���Ͽ� ��� x�� �����ϴ� ����
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
        printf("\n �̹� ���� Ű�� �ֽ��ϴ�! \n");
    }
    return p;
}

void deleteNode(treeNode *root, element key)
{   //root ������ Ž���Ͽ� key ���� ���� ��带 ã�� �����ϴ� ����
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
        printf("\n ã�� Ű�� ����Ʈ���� �����ϴ�!!");
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
    printf("\n ã�� Ű�� �����ϴ�!");
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
    printf("\n\t1 : Ʈ�� ��� ");
    printf("\n\t2 : ���� ����");
    printf("\n\t3 : ���� ����");
    printf("\n\t4 : ���� �˻�");
    printf("\n\t5 : �ڽĳ���� ������ 2���� ������ �̸� ���");
    printf("\n\t6 : �ܸ������� �̸� ���");
    printf("\n\t7 : ����");
    printf("\n*----------------------------------------------*");
    printf("\n�޴� �Է� >> ");
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
        case 1 : printf("\t[����Ʈ�� ���] ");
                displayInorder(root); printf("\n");
                break;

        case 2 : printf("������ ���ڸ� �Է��ϼ��� :");
                key = getchar(); getchar();
                insertNode(root, key);
                break;

        case 3 : printf("������ ���ڸ� �Է��ϼ��� :");
                key = getchar(); getchar();
                deleteNode(root, key);
                break;

        case 4 : printf("ã�� ���ڸ� �Է��ϼ��� :");
                key = getchar(); getchar();
                foundedNode = searchBST(root, key);
                if (foundedNode != NULL)
                {
                    printf("\n%c�� ã�ҽ��ϴ�! \n", foundedNode -> key);
                }
                else
                { 
                    printf("\n ���ڸ� ã�� ���߽��ϴ�. \n");
                }
                break;
        //�ڽ� ����� ������ 2���� ������ �̸� ���
        case 5 : printf("\t[�ڽ� ����� ������ 2���� ������ �̸�] ");
                checkNode(root); printf("\n");
                break;

        //�ܸ������� �̸� ���
        case 6 : printf("\t[�ܸ������� �̸� ���] ");
                terminalNode(root); printf("\n");
                break;

        case 7 : return 0;

        default : printf("%d�� �ش�Ǵ� �޴���, ���� �޴��Դϴ�. �޴��� �ٽ� �����ϼ��� \n", choice);
                  break;
        }
    }
    
}
