#include <catch2/catch.hpp>
#include <rambo/algorithm.hpp>
#include <vector>
#include <iterator>

TEST_CASE("additional algorithm tests") {

    SECTION("zip")
    {
        std::vector<int> v1{1, 3, 5};
        std::vector<int> v2{2, 4, 6};
        std::vector<std::pair<int, int>> results;
        results.reserve(3);

        rambo::zip(v1.begin(), v1.end(), v2.begin(), v2.end(), std::back_inserter(results));

        decltype(results) expected{std::make_pair(1, 2), std::make_pair(3, 4), std::make_pair(5, 6)};

        REQUIRE(results == expected);
    }

    SECTION("accumulate if")
    {
        std::vector<int> v1{1, 3, 5};

        auto accum = rambo::accumulate_if(v1.begin(), v1.end(), 0,
                [](auto a) {
                    return a > 1;
                },
                [](auto a, auto b)
                {
                    return a + b;
                });

        REQUIRE(accum == 8);
    }

    SECTION("zip if")
    {
        std::vector<int> v1{1, 3, 5};
        std::vector<int> v2{2, 4, 6};
        std::vector<std::pair<int, int>> results;
        results.reserve(3);

        rambo::zip_if(v1.begin(), v1.end(), v2.begin(), v2.end(), std::back_inserter(results),
                [](auto a, auto b){ return a > 1;});

        decltype(results) expected{ std::make_pair(3, 4), std::make_pair(5, 6)};

        REQUIRE(results == expected);
    }

    SECTION("transform if")
    {
        std::vector<int> v1{1, 3, 5};
        std::vector<int> results;
        results.reserve(3);

        std::vector<int> expected{4, 6};
        rambo::transform_if(v1.begin(), v1.end(), std::back_inserter(results),
                      [](auto a){ return a > 1;},
                      [](auto b){ return b + 1;});

        REQUIRE(results == expected);
    }
}