#ifndef RAMBO_PUSH_FRONT_HPP
#define RAMBO_PUSH_FRONT_HPP

#include <rambo/traits.hpp>
#include <type_traits>

namespace rambo {

    namespace detail {

        template<typename H, typename... Ts, size_t... Is>
        constexpr auto push_front(H&& h, std::tuple<Ts...> const& tuple, std::index_sequence<Is...> ) {
            return std::make_tuple(std::forward<H>(h), std::get<Is>(tuple)...);
        }

        template<typename H, typename... Ts, size_t... Is>
        constexpr auto push_front(H&& h, std::tuple<Ts...>&& tuple, std::index_sequence<Is...> ) {
            return std::make_tuple(std::forward<H>(h), std::move(std::get<Is>(tuple))...);
        }
    }

    template<typename T, typename U, typename = std::enable_if_t<is_tuple<std::decay_t<U>>::value>>
    constexpr auto push_front(T&& h, U&& tuple) {
        return detail::push_front(std::forward<T>(h),
                                  std::forward<U>(tuple),
                                  std::make_index_sequence<std::tuple_size<std::decay_t<U>>::value>{});

    }
}

#endif
