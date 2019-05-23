#ifndef RAMBO_SKIP_HPP
#define RAMBO_SKIP_HPP

#include <rambo/traits.hpp>

namespace rambo {

    namespace detail {

        template<auto N, typename... Ts, size_t... Is>
        constexpr auto skip(std::tuple<Ts...> const& tuple, std::index_sequence<Is...> ) {
            return std::make_tuple(std::get<Is + N>(tuple)...);
        }

        template<auto N, typename... Ts, size_t... Is>
        constexpr auto skip(std::tuple<Ts...>&& tuple, std::index_sequence<Is...> ) {
            return std::make_tuple(std::move(std::get<Is + N>(tuple))...);
        }
    }

    template<auto N, typename T>
    constexpr auto skip(T&& tuple) {
        return detail::skip<N>(std::forward<T>(tuple),
                               std::make_index_sequence<std::tuple_size<std::decay_t<T>>::value - N >{});
    }

}

#endif
