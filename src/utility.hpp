//
// Created by protobit on 22/08/2020.
//

#ifndef NESEMU_UTILITY_HPP
#define NESEMU_UTILITY_HPP

namespace utils {
    template <typename result, typename origin = result>
    result getBits(origin from, int k, int p) {
        return (result)(((1 << k) - 1) & (from >> (p - 1)));
    }
}

#endif //NESEMU_UTILITY_HPP
