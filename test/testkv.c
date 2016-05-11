#include <ctest.h>
#include <testkv.h>

CTEST(solution_of_quadratic_equations, two_root)
{
	const int a = 2;
	const int b = -7;
	const int c = 3;
   
    float k1, k2;
	const int result = testkv(a, b, c, k1, k2);
	
	const float expected_k1 = 3.0, expected_k2 = 0.5;
	
	ASSERT_DBL_NEAR(expected_k1, k1);
    ASSERT_DBL_NEAR(expected_k2, k2);
    ASSERT_EQUAL(FOUND_2_ROOT, result);
}

CTEST(solution_of_quadratic_equations, one_root)
{
    const int a = 4;
    const int b = -12;
    const int c = 9;

    float k1, k2;
    const int result = testkv(a, b, c, k1, k2);

    const float expected_k1 = 1.5;

    ASSERT_DBL_NEAR(expected_k1, k1);
    ASSERT_EQUAL(FOUND_1_ROOT, result);
}

CTEST(solution_of_quadratic_equations, no_root)
{
    const int a = 15;
    const int b = 1;
    const int c = 9;

    float k1, k2;
    const int result = testkv(a, b, c, k1, k2);

    ASSERT_EQUAL(ROOT_NOT_FOUND, result);
}

CTEST(solution_of_quadratic_equations, the_coefficients_are_not_correct)
{
   
    const int a = 0;
    const int b = 1;
    const int c = 9;
    
    double k1, k2;
    const int result = testkv(a, b, c, k1, k2);
   
    ASSERT_EQUAL(INVALUD_ARGUMENTS, result);
}
