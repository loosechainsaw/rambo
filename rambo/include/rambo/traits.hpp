#ifndef RAMBO_TRAITS_HPP
#define RAMBO_TRAITS_HPP

#include <tuple>

namespace rambo {

    template<typename T>
    struct is_tuple {
        static constexpr bool value = false;
    };

    template<typename... Ts>
    struct is_tuple<std::tuple<Ts...>> {
        static constexpr bool value = true;
    };

}

#endif
