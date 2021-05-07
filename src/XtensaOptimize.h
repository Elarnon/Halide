#ifndef HALIDE_XTENSA_OPTIMIZE_H
#define HALIDE_XTENSA_OPTIMIZE_H

#include "Expr.h"

namespace Halide {
namespace Internal {

template<typename T>
bool is_native_xtensa_vector(const Type &t) {
    return false;
}

template<>
bool is_native_xtensa_vector<int8_t>(const Type &t);

template<>
bool is_native_xtensa_vector<uint8_t>(const Type &t);

template<>
bool is_native_xtensa_vector<int16_t>(const Type &t);

template<>
bool is_native_xtensa_vector<uint16_t>(const Type &t);

template<>
bool is_native_xtensa_vector<int32_t>(const Type &t);

template<>
bool is_native_xtensa_vector<uint32_t>(const Type &t);

template<>
bool is_native_xtensa_vector<float>(const Type &t);

bool is_double_native_vector_type(const Type &t);

Type get_native_xtensa_vector(const Type &t);

Stmt match_xtensa_patterns(Stmt);

}  // namespace Internal
}  // namespace Halide

#endif
