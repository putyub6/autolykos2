#include "autolykos2/work.h"

#include <iostream>
#include <string>

int main(int argc, char** argv) {
    if (argc > 1 && std::string(argv[1]) == "--help") {
        std::cerr << "autolykos2 [rounds]\n";
        return 0;
    }
    std::uint32_t rounds = 16;
    if (argc > 1) {
        rounds = static_cast<std::uint32_t>(std::stoul(argv[1]));
    }
    auto job = autolykos2::make_job(autolykos2::algo());
    auto n = autolykos2::bench(rounds);
    std::cout << "algo=" << autolykos2::algo() << " job=" << job.id << " rounds=" << n << "\n";
    return 0;
}
