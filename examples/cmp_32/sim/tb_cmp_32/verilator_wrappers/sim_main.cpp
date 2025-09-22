#include "Vcmp_32.h"
#include "verilated.h"
#include <iostream>


int main(int argc, char** argv) {
    // Create a simulation context
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);

    // Instantiate DUT inside this context
    Vcmp_32* top = new Vcmp_32{contextp};

    if (argc < 3) {
        std::cerr << "Usage: " << argv[0] << " <A> <B>\n";
        delete top;
        delete contextp;
        return 1;
    }

    // Parse inputs (decimal or hex)
    uint32_t A = std::strtol(argv[1], nullptr, 0);
    uint32_t B = std::strtol(argv[2], nullptr, 0);

    // Drive DUT
    top->A = A;
    top->B = B;
    top->eval();

    // Print results
    std::cout << "A = " << A << ", B = " << B << "\n";
    std::cout << "GT = " << (top->GT ? 1 : 0) << "\n";
    std::cout << "LT = " << (top->LT ? 1 : 0) << "\n";
    std::cout << "EQ = " << (top->EQ ? 1 : 0) << "\n";

    delete top;
    delete contextp;
    return 0;
}
