#include "CppUnitTest.h"

#include "../app/app.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace vsite::oop::v2;

namespace Microsoft::VisualStudio::CppUnitTestFramework {
template<> static std::wstring ToString(const color& c) {
	std::wostringstream ss;
	ss << c.get_red() << L',' << c.get_green() << L',' << c.get_blue();
	return ss.str();
}
}

namespace all_tests
{
	TEST_CLASS(test_v02)
	{
	public:

		TEST_METHOD(test_default_value)
		{
			color c;
			Assert::AreEqual(0., c.get_red());
			Assert::AreEqual(0., c.get_green());
			Assert::AreEqual(0., c.get_blue());
		}

		TEST_METHOD(test_valid_values)
		{
			color c;
			c.set_red(0.1);
			c.set_green(0.2);
			c.set_blue(0.3);
			Assert::AreEqual(0.1, c.get_red());
			Assert::AreEqual(0.2, c.get_green());
			Assert::AreEqual(0.3, c.get_blue());
		}

		TEST_METHOD(test_invalid_red_values)
		{
			color c;
			c.set_red(-0.1);
			Assert::AreEqual(0., c.get_red());
			c.set_red(128);
			Assert::AreEqual(1., c.get_red());
		}

		TEST_METHOD(test_invalid_green_values)
		{
			color c;
			c.set_green(-100);
			Assert::AreEqual(0., c.get_green());
			c.set_green(1.01);
			Assert::AreEqual(1., c.get_green());
		}

		TEST_METHOD(test_invalid_blue_values)
		{
			color c;
			c.set_blue(-1);
			Assert::AreEqual(0., c.get_blue());
			c.set_blue(1000);
			Assert::AreEqual(1., c.get_blue());
		}

		TEST_METHOD(test_color_copy)
		{
			color a;
			a.set_red(0.1);
			a.set_green(0.2);
			a.set_blue(0.3);
			color b = a;
			Assert::AreEqual(0.1, b.get_red());
			Assert::AreEqual(0.2, b.get_green());
			Assert::AreEqual(0.3, b.get_blue());
		}

		TEST_METHOD(test_color_assign)
		{
			color a;
			a.set_red(0.5);
			a.set_green(0.6);
			a.set_blue(0.7);
			color b, c;
			c = b = a;
			Assert::AreEqual(0.5, b.get_red());
			Assert::AreEqual(0.6, b.get_green());
			Assert::AreEqual(0.7, b.get_blue());
			Assert::AreEqual(0.5, c.get_red());
			Assert::AreEqual(0.6, c.get_green());
			Assert::AreEqual(0.7, c.get_blue());
		}

		TEST_METHOD(test_conversion_colorref)
		{
			color a;
			a.set_red(1);
			a.set_green(0);
			a.set_blue(0);
			Assert::AreEqual(RGB(255, 0, 0), a.get_color_ref());
			color b;
			b.set_red(0);
			b.set_green(1);
			b.set_blue(0);
			Assert::AreEqual(RGB(0, 255, 0), b.get_color_ref());
			color c;
			c.set_red(0);
			c.set_green(0);
			c.set_blue(1);
			Assert::AreEqual(RGB(0, 0, 255), c.get_color_ref());
			color d;
			d.set_red(1);
			d.set_green(1);
			d.set_blue(1);
			Assert::AreEqual(RGB(255, 255, 255), d.get_color_ref());
			color e;
			e.set_red(0.5);
			e.set_green(0.5);
			e.set_blue(0.5);
			Assert::AreEqual(RGB(127, 127, 127), e.get_color_ref());
		}
		
		TEST_METHOD(test_conversion_luminance)
		{
			color a;
			Assert::AreEqual(0., a.get_luminance());
			color b;
			b.set_red(1);
			b.set_green(0);
			b.set_blue(0);
			Assert::AreEqual(0.2126, b.get_luminance());
			color c;
			c.set_red(0);
			c.set_green(1);
			c.set_blue(0);
			Assert::AreEqual(0.7152, c.get_luminance());
			color d;
			d.set_red(0);
			d.set_green(0);
			d.set_blue(1);
			Assert::AreEqual(0.0722, d.get_luminance());
			color e;
			e.set_red(1);
			e.set_green(1);
			e.set_blue(1);
			Assert::AreEqual(1., e.get_luminance());
		}
	};
}
