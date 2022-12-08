/*
                @program 15
    Write a c progriming to implementation of binary Search tree using array.
*/

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *insert(struct Node *root, int data)
{
    if (root == NULL)
    {
        root = (struct Node *)malloc(sizeof(struct Node));
        root->data = data;
        root->left = root->right = NULL;
        return root;
    }
    if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    else
    {
        root->left = insert(root->left, data);
    }
    return root;
}

void inOrder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
    return;
}

int main()
{
    int arr[] = {6, 8, 4, 2, 6, 9, 8, 4, 3, 1, 12, 76, 34, 13};
    struct Node *root = NULL;
    int i, size;
    size = sizeof(arr) / sizeof(int);

    for (i = 0; i < size; i++)
    {
        root = insert(root, arr[i]);
    }
    inOrder(root);

    return 0;
}

/*
    Output:
    1 2 3 4 4 6 6 8 8 9 12 13 34 76
*/