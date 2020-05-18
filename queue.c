#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
char menu(void);
struct node *head=0;
void main()
{
    printf("a.Add items.\n");
    printf("b.Delete items.\n");
    printf("c.Show the number of items.\n");
    printf("d.Show min and max items.\n");
    printf("e.Find an item.\n");
    printf("f.Print all items.\n");
    printf("g.Exit.\n\n");
    while(1)
    {
        switch(menu())
        {
           case 'a':
                add(value());
                break;
            case 'b':
                del();
                break;
            case 'c':
                item();
                break;
            case 'd':
                maxmin();
                break;
            case 'e':
                find(value());
                break;
            case 'f':
                show();
                break;
            case 'g':
                exit(0);
                break;
            default:
                printf("choose your choice correctly.\n");
                break;
        }
    }
}
char menu()
{
    char c;
    printf("Choice a-g:");
    scanf(" %c",&c);
    printf("\n\n");
    return(c);
}
int value()
{
    int n;
    printf("Enter your data:");
    scanf("%d",&n);
    return(n);
}
struct node *p;
void add(int x)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=0;
    if(head==0)
    {
        head=temp;
    }else
    {
     p->next=temp;
    }
    p=temp;
}
void del(int x)
{
    if(head==0)
    {
        printf("Empty.\n");
    }else
    {
        struct node *t=head;
        head=head->next;
        free(t);
    }
}
void show()
{
    if(head==0)
    {
        printf("Empty.\n");
    }else
    {
        struct node *s=head;
        while(s!=0)
        {
            printf("%d ",s->data);
            s=s->next;
        }
    }
}
void maxmin()
{
    if(head==0)
    {
        printf("Empty.\n");
    }else
    {
        int max,min;
        max=head->data;
        min=head->data;
        struct node *m=head;
        while(m!=0)
        {
            if(m->data>max)
            {
                max=m->data;
            }
            if(m->data<min)
            {
                min=m->data;
            }
            m=m->next;
        }
        printf("Max=%d and min = %d\n",max,min);
    }
}
void find(int x)
{
    struct node *f=head;
    while(f!=0)
    {
        if(f->data==x)
        {
            printf("Exists.\n");
            break;
        }
        f=f->next;
    }
    if(f==0)
    {
        printf("Not found.\n");
    }
}
void item()
{
    struct node *i=head;
    int j=1;
    while(i->next!=0)
    {
        i=i->next;
        j++;
    }
    printf("Total item is %d.\n",j);
}
