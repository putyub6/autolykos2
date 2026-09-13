#include "autolykos2/work.h"

#include <cstdlib>
#include <iostream>

#define CHECK(cond)                                                          \
    do {                                                                     \
        if (!(cond)) {                                                       \
            std::cerr << "fail: " #cond " (" << __FILE__ << ":" << __LINE__  \
                      << ")\n";                                              \
            return 1;                                                        \
        }                                                                    \
    } while (0)

int main() {
    auto a = autolykos2::make_job("pool");
    auto b = autolykos2::make_job("pool");
    CHECK(a.id == b.id);
    CHECK(autolykos2::hash_nonce(a, 1) != autolykos2::hash_nonce(a, 2));
    CHECK(autolykos2::bench(8) == 8);
    CHECK(autolykos2::algo() != nullptr);
    std::cout << "ok\n";
    return 0;
}
