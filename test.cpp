#include <iostream>
#include "libusb.h"

int main(int argc, char **argv) {
    libusb_context *ctx = nullptr;

    int err = libusb_init(&ctx);
    if (err != 0) {
        std::cerr << "libusb_init returned " << err << "\n";
        return 1;
    }
    std::cerr << "libusb_init returned zero\n";
    return 0;
}
