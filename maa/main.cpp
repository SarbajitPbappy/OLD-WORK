#include <cmath>
#include <iostream>
#include <vector>

static constexpr std::double_t PI     = std::acos(-1.0);
static constexpr std::size_t   SIZE_X = 100;
static constexpr std::size_t   SIZE_Y = 50;
static constexpr std::double_t STEP   = 0.01;
static constexpr std::double_t MAX    = PI*2.0;

int main()
{
	std::cout << "Happy Mother's Day!\n";

	bool grid[SIZE_X][SIZE_Y] {};

	std::double_t xmin {}, xmax {}, ymin {}, ymax {};

	using point_t = std::pair<std::double_t, std::double_t>;
	std::vector<point_t> points;
	points.reserve(static_cast<std::size_t>(MAX/STEP));

	for(std::double_t t {}; t < MAX; t += STEP)
	{
		http://mathworld.wolfram.com/HeartCurve.html
		std::double_t x
			= 16.0 * std::pow(std::sin(t), 3);
		std::double_t y
			= 13.0 * std::cos(t)
			- 5.0  * std::cos(t * 2.0)
			- 2.0  * std::cos(t * 3.0)
			-        std::cos(t * 4.0);

		xmin = std::fmin(xmin, x);
		xmax = std::fmax(xmax, x);
		ymin = std::fmin(ymin, y);
		ymax = std::fmax(ymax, y);

		points.emplace_back(x, y);
	}

	std::double_t const xscale = +(xmax - xmin);
	std::double_t const yscale = -(ymax - ymin);

	for(auto const &p : points)
	{
		std::double_t x = ((p.first  - xmin) / xscale) * SIZE_X + 0.5;
		std::double_t y = ((p.second - ymax) / yscale) * SIZE_Y + 0.5;

		if(x < 0.0)     x = 0.0;
		if(x >= SIZE_X) x = SIZE_X - 1;
		if(y < 0.0)     y = 0.0;
		if(y >= SIZE_Y) y = SIZE_Y - 1;

		grid[static_cast<std::size_t>(x)][static_cast<std::size_t>(y)] = true;
	}

	for(std::size_t y = 0; y < SIZE_Y; ++y)
	{
		for(std::size_t x = 0; x < SIZE_X; ++x)
		{
			std::cout << (grid[x][y]? '#' : '`');
		}
		std::cout << '\n';
	}
}
