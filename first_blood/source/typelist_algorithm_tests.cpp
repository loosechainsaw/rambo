#ifndef RAMBO_TYPELIST_ALGORITHM_TESTS_CPP
#define RAMBO_TYPELIST_ALGORITHM_TESTS_CPP

#include <catch2/catch.hpp>
#include <rambo/typelist/algorithm.hpp>
#include <type_traits>

TEST_CASE("type list algorithms") {

    SECTION("transform")
    {
        using source = std::tuple<int, double, float>;
        using expected = std::tuple<int const, double const, float const>;
        using result = typename rambo::transform<source, std::add_const>::type;

        STATIC_REQUIRE(std::is_same<expected, result>::value);

    }

    SECTION("front")
    {
        using source = std::tuple<int, double, float>;
        using expected = int;
        using result = typename rambo::front<source>::type;

        STATIC_REQUIRE(std::is_same<expected, result>::value);

    }

    SECTION("back")
    {
        using source = std::tuple<int, double, float>;
        using expected = float;
        using result = typename rambo::back<source>::type;

        STATIC_REQUIRE(std::is_same<expected, result>::value);

    }

    SECTION("skip")
    {
        using source = std::tuple<int, double, float>;
        using expected = std::tuple<double, float>;
        using result = typename rambo::skip<1, source>::type;

        STATIC_REQUIRE(std::is_same<expected, result>::value);

    }

    SECTION("any")
    {
        using source = std::tuple<int, double, float>;
        static constexpr bool result = rambo::any<source, std::is_integral>::value;

        STATIC_REQUIRE(result);

    }
}

#endif
