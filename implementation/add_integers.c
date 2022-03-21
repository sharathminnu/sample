#include <stdio.h>
#include<unity.h>

int add_integers(int param1,int param2)
{
    int sum =0;
    sum = param1 + param2;
    return sum;
}

void test_add_integers()
{
    if(0 == add_integers(0,0))
      printf("add function works\n");
    else
      printf("add function doesn't work\n");

    if(30 == add_integers(10,20))
      printf("add function works for positive numbers\n");
    else
      printf("add function doesn't work for +ve numbers\n");

    if(-30 == add_integers(-10,-20))
      printf("add function works for negative numbers\n");
    else
      printf("add function doesn't work for -ve numbers");
}

#if 0
TEST_ASSERT_EQUAL(0, add_integers(0,0));
TEST_ASSERT_EQUAL(30, add_integers(10,20));
TEST_ASSERT_EQUAL(-30, add_integers(-10,-20));
#endif

# if 0
int main()
{
    test_add_integers();
    return 0;
}
 
#endif