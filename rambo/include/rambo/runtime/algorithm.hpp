#ifndef RAMBO_ALGORITHM_HPP
#define RAMBO_ALGORITHM_HPP

#include <rambo/traits.hpp>
#include <type_traits>

namespace rambo {


    namespace detail {
        template<typename... Ts, size_t... Is, typename F>
        constexpr auto transform(std::tuple<Ts...> const& tuple, std::index_sequence<Is...> , F&& f) {
            return std::make_tuple(f(std::get<Is>(tuple))...);
        }

        template<typename H, typename... Ts, size_t... Is>
        constexpr auto push_front(H&& h, std::tuple<Ts...> const& tuple, std::index_sequence<Is...> ) {
            return std::make_tuple(std::forward<H>(h), std::get<Is>(tuple)...);
        }
    }

    template<typename T, typename F, typename = std::enable_if_t<is_tuple<std::decay_t<T>>::value>>
    constexpr auto transform(T const& tuple, F&& f) {
        return detail::transform(tuple,
                                 std::make_index_sequence<std::tuple_size<std::decay_t<T>>::value>{},
                                 std::forward<F>(f));
    }

    template<typename T, typename U, typename = std::enable_if_t<is_tuple<U>::value>>
    constexpr auto push_front(T&& h, U const& tuple) {
        return detail::push_front(std::forward<T>(h),
                                 tuple,
                                 std::make_index_sequence<std::tuple_size<U>::value>{});

    }
}

#endif
