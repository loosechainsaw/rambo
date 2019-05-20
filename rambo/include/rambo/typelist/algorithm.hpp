#ifndef RAMBO_ALGORITHM_HPP
#define RAMBO_ALGORITHM_HPP

#include <tuple>

namespace rambo {

    template<typename... >
    struct transform;

    template<typename... Ts, typename F>
    struct transform<std::tuple<Ts...>, F> {
        typedef typename std::tuple<typename F::template apply<Ts>::type...> type;
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
        typedef typename back<Ts...>::type type;
    };

    template<auto N, typename... Ts>
    struct skip;

    template<typename... Ts>
    struct skip<0, std::tuple<Ts...>> {
        typedef std::tuple<Ts...> type;
    };

    template<auto N, typename T, typename... Ts>
    struct skip<N, std::tuple<T, Ts...>> {
        typedef typename skip<N - 1, std::tuple<Ts...>>::type type;
    };

}

#endif
