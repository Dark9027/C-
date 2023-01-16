#include <iostream>
using namespace std;
struct node
{
    int expo;
    float coeffi;
    struct node *next;
};
struct node *insert(struct node *&head, int ex = 0, float co = 0)
{
    struct node *temp = new struct node;
    struct node *p1 = head;
    temp->expo = ex;
    temp->coeffi = co;
    temp->next = NULL;
    if (head == NULL || ex > head->expo)
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        while (p1->next != NULL && ex <= (p1->next)->expo)
        {
            p1 = p1->next;
        }
        temp->next = p1->next;
        p1->next = temp;
    }
    return head;
}

struct node *create(struct node *&head)
{
    int i;
    int n;
    float coeffi;
    int expo;
    cout << "ENTER THE NUMBER OF TERMS" << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "ENTER THE VALUE OF COEEFICIENT for term :" << i + 1 << endl;
        cin >> coeffi;
        cout << "enter the value of EXPONENT :" << i + 1 << endl;
        cin >> expo;
        head = insert(head, expo, coeffi);
    }
    return head;
}
void display(struct node *&head)
{
    struct node *p1 = head;
    while (p1 != NULL)
    {
        cout << "|" << p1->coeffi << "|";
        cout << p1->expo << "|"
             << " |->";
        p1 = p1->next;
    }
    cout << endl;
}
struct node poly_ADD(struct node *&head1, struct node *&head2)
{
    struct node *ptr1 = head1;
    struct node *ptr2 = head2;
    struct node *head3 = NULL;
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->expo == ptr2->expo)
        {
            head3 = insert(head3, ptr1->expo, ptr1->coeffi + ptr2->coeffi);
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        else if (ptr1->expo > ptr2->expo)
        {
            head3 = insert(head3, ptr1->expo, ptr1->coeffi);
            ptr1 = ptr1->next;
        }
        else
        {
            head3 = insert(head3, ptr2->expo, ptr2->coeffi);
            ptr2 = ptr2->next;
        }
    }
    while (ptr1 != NULL)
    {
        head3 = insert(head3, ptr1->expo, ptr1->coeffi);
        ptr1 = ptr1->next;
    }

    while (ptr2 != NULL)
    {
        head3 = insert(head3, ptr2->expo, ptr2->coeffi);
        ptr2 = ptr2->next;
    }
    cout << "ADDED POLYNOMIAL IS" << endl;
    display(head3);
}

int main()
{

    struct node *head1 = NULL;
    struct node *head2 = NULL;
    cout << "enter the value of first polynomial" << endl;
    head1 = create(head1);
    display(head1);
    cout << "enter the value of second polynomial" << endl;
    head2 = create(head2);
    display(head2);
    poly_ADD(head1, head2);

    return 0;
}
