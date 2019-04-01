int b, c;

/* 
    f.b, c, d
 */
void f(void)
{
    int b, d;
}

/* 
    a, b, c, g.c
 */
void g(int a)
{
    int c;
    {
        /* 
            a, inner.a, b, c, g.c, d
         */
        int a, d;
    }
}

/* 
    b, c, main.c, d
 */
int main(void)
{
    int c, d;
}