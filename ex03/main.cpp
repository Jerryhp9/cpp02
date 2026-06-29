#include "Point.hpp"

struct TestCase {
	Point a;
	Point b;
	Point c;
	Point p;
	bool expected;
	const char *name;
};

static void runTest(const TestCase &test)
{
	bool result = bsp(test.a, test.b, test.c, test.p);

	std::cout << test.name << ": "
	          << (result == test.expected ? "PASS" : "FAIL")
	          << " (expected " << (test.expected ? "true" : "false")
	          << ", got " << (result ? "true" : "false") << ")"
	          << std::endl;
}

int main()
{
	const TestCase tests[] = {
		{Point(2.0f, 4.0f), Point(5.0f, 4.0f), Point(4.0f, -2.0f), Point(3.0f, 2.0f), true,  "inside triangle"},
		{Point(2.0f, 4.0f), Point(5.0f, 4.0f), Point(4.0f, 0.0f), Point(3.0f, 2.0f), false,  "outside triangle"},
		{Point(2.0f, 4.0f), Point(5.0f, 4.0f), Point(4.0f, 0.0f), Point(2.0f, 4.0f), false, "on vertex A"},
		{Point(2.0f, 4.0f), Point(5.0f, 4.0f), Point(4.0f, 0.0f), Point(3.5f, 4.0f), false, "on edge AB"},
		{Point(2.0f, 4.0f), Point(5.0f, 4.0f), Point(4.0f, 0.0f), Point(6.0f, 2.0f), false, "outside triangle"},
		{Point(-2.0f, -1.0f), Point(1.0f, 3.0f), Point(3.0f, -2.0f), Point(0.0f, 0.0f), true, "inside negative coordinates"},
		{Point(-2.0f, -1.0f), Point(1.0f, 3.0f), Point(3.0f, -2.0f), Point(2.5f, 2.5f), false, "outside negative coordinates"}
	};

	for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); ++i)
		runTest(tests[i]);
	return (0);
}
