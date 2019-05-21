#ifndef RAMBO_TRANSFORM_HPP
#define RAMBO_TRANSFORM_HPP

#include <rambo/traits.hpp>
#include <type_traits>

namespace rambo {

    namespace detail {

        template<typename... Ts, size_t... Is, typename F>
        constexpr auto transform(std::tuple<Ts...> const& tuple, std::index_sequence<Is...> , F&& f) {
            return std::make_tuple(f(std::get<Is>(tuple))...);
        }

    }

    template<typename T, typename F, typename = std::enable_if_t<is_tuple<std::decay_t<T>>::value>>
    constexpr auto transform(T const& tuple, F&& f) {
        return detail::transform(tuple,
                                 std::make_index_sequence<std::tuple_size<std::decay_t<T>>::value>{},
                                 std::forward<F>(f));
    }
}

#endif
