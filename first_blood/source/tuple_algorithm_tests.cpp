#include <catch2/catch.hpp>
#include <rambo/runtime/algorithm.hpp>
#include <type_traits>
#include <tuple>

TEST_CASE("tuple algorithms")
{
    SECTION("transform")
    {
        constexpr auto source = std::make_tuple(1,2,3);
        constexpr auto expected = std::make_tuple(2,3,4);
        constexpr auto result = rambo::transform(source,
                                       [](auto v)
                                       {
                                           return v + 1;
                                       });
        STATIC_REQUIRE(expected == result);
    }

    SECTION("push front")
    {
        constexpr auto source = std::make_tuple(1,2,3);
        constexpr auto expected = std::make_tuple(0,1,2,3);
        constexpr auto result = rambo::push_front(0, source);
        STATIC_REQUIRE(expected == result);
    }

    SECTION("skip")
    {
        constexpr auto source = std::make_tuple(1,2,3,4,5);
        constexpr auto expected = std::make_tuple(4,5);
        constexpr auto result = rambo::skip<3>(source);
        STATIC_REQUIRE(expected == result);
    }
}