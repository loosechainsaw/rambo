#ifndef RAMBO_TYPELIST_ALGORITHM_TESTS_CPP
#define RAMBO_TYPELIST_ALGORITHM_TESTS_CPP

#include <catch2/catch.hpp>
#include <rambo/typelist/algorithm.hpp>
#include <type_traits>
#include <tuple>

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

    SECTION("push front")
    {

        using source = std::tuple<int, double, float>;
        using expected = std::tuple<long , int, double, float>;
        using result = rambo::push_front<long , source>::type;

        STATIC_REQUIRE(std::is_same<expected, result>::value);
    }

    SECTION("pop front")
    {

        using source = std::tuple<int, double, float>;
        using expected = std::tuple<double, float>;
        using result = rambo::pop_front<source>::type;

        STATIC_REQUIRE(std::is_same<expected, result>::value);
    }

    SECTION("push back")
    {

        using source = std::tuple<int, double, float>;
        using expected = std::tuple<int, double, float, long>;
        using result = rambo::push_back<long , source>::type;

        STATIC_REQUIRE(std::is_same<expected, result>::value);
    }

    SECTION("pop back")
    {

        using source = std::tuple<int, double, float>;
        using expected = std::tuple<int, double>;
        using result = rambo::pop_back<source>::type;

        STATIC_REQUIRE(std::is_same<expected, result>::value);
    }

    SECTION("index of")
    {

        using source = std::tuple<int, double, float>;

        static constexpr bool r1 = rambo::index_of<int , source>::value;
        STATIC_REQUIRE(r1 == 0);

        static constexpr bool r2 = rambo::index_of<double , source>::value;
        STATIC_REQUIRE(r2 == 1);

        static constexpr bool r3 = rambo::index_of<float , source>::value;
        //STATIC_REQUIRE(r3 == 2);
    }
}

#endif
