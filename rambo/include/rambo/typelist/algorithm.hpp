#ifndef RAMBO_ALGORITHM_HPP
#define RAMBO_ALGORITHM_HPP

#include <tuple>

namespace rambo {

    namespace detail {

        template<auto I, auto N, typename T, typename... Ts>
        struct index_of;

        template<auto I, auto N, typename T, typename... Ts>
        struct index_of<I, N, T, std::tuple<T, Ts...>> {
            static constexpr int value = I;
        };

        template<auto I, typename T, typename... Ts>
        struct index_of<I, 0, T, std::tuple<Ts...>> {
            static constexpr int value = -1;
        };

        template<auto I, auto N, typename T, typename H, typename... Ts>
        struct index_of<I, N, T, std::tuple<H, Ts...>> {
            static constexpr int value = index_of<I + 1, N - 1, T, std::tuple<Ts...>>::value;
        };
    }

    template<typename T, template<typename > typename F >
    struct transform;

    template<typename... Ts, template<typename > typename F>
    struct transform<std::tuple<Ts...>, F> {
        typedef std::tuple<typename F<Ts>::type...> type;
    };

    template<typename... Ts>
    struct front;

    template<typename T, typename... Ts>
    struct front<std::tuple<T, Ts...>> {
        typedef T type;
    };

    template<typename... Ts>
    struct back;

    template<typename T>
    struct back<std::tuple<T>> {
        typedef T type;
    };

    template<typename T, typename... Ts>
    struct back<std::tuple<T, Ts...>> {
        typedef typename back<std::tuple<Ts...>>::type type;
    };

    template<auto N, typename... T>
    struct skip;

    template<>
    struct skip<0, std::tuple<>> {
        typedef std::tuple<> type;
    };

    template<typename T, typename... Ts>
    struct skip<0, std::tuple<T, Ts...>> {
        typedef std::tuple<T, Ts...> type;
    };

    template<auto N, typename T, typename... Ts>
    struct skip<N, std::tuple<T, Ts...>> {
        typedef typename skip<N - 1, std::tuple<Ts...>>::type type;
    };

    template<typename T, template<typename> class P>
    struct any;

    template<template<typename> class P>
    struct any<std::tuple<>, P> {
        static constexpr bool value = false;
    };

    template<typename T, typename... Ts, template<typename> class P>
    struct any<std::tuple<T, Ts...>, P> {
        static constexpr bool value = P<T>::value || any<std::tuple<Ts...>,P>::value;
    };

    template<typename T, template<typename> class P>
    struct all;

    template<template<typename> class P>
    struct all<std::tuple<>, P> {
        static constexpr bool value = false;
    };

    template<typename T, typename... Ts, template<typename> class P>
    struct all<std::tuple<T, Ts...>, P> {
        static constexpr bool value = P<T>::value && any<std::tuple<Ts...>,P>::value;
    };

    template<typename T, typename... Ts>
    struct push_front;

    template<typename T, typename... Ts>
    struct push_front<T, std::tuple<Ts...>> {
        typedef std::tuple<T, Ts...> type;
    };

    template<typename... Ts>
    struct pop_front;

    template<typename T, typename... Ts>
    struct pop_front<std::tuple<T, Ts...>> {
        typedef std::tuple<Ts...> type;
    };

    template<typename T, typename... Ts>
    struct push_back;

    template<typename T, typename... Ts>
    struct push_back<T, std::tuple<Ts...>> {
        typedef std::tuple<Ts..., T> type;
    };

    template<typename... Ts>
    struct pop_back;

    template<typename T>
    struct pop_back<std::tuple<T>> {
        typedef std::tuple<> type;
    };

    template<typename T, typename... Ts>
    struct pop_back<std::tuple<T, Ts...>> {
        typedef typename push_front<T, typename pop_back<std::tuple<Ts...>>::type>::type type;
    };

    template<typename T, typename... Ts>
    struct index_of;

    template<typename T, typename... Ts>
    struct index_of<T, std::tuple<Ts...>>{
        static constexpr int value = detail::index_of<0,std::tuple_size_v<std::tuple<Ts...>>, T, std::tuple<Ts...>>::value;
    };


}

#endif
