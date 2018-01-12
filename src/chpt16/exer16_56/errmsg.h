#ifndef CPPP5_CHPT16_ERRMSG_
#define CPPP5_CHPT16_ERRMSG_

#include "exer16_48/debug_rep.h"
#include "exer16_53/print.h"
#include <iostream>

template <typename... Args>
std::ostream& errMsg(std::ostream& os, const Args&... rest)
{
    return print(os, debug_rep(rest)...);
}

#endif // CPPP5_CHPT16_ERRMSG_