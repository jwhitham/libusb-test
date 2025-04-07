#include "libusb.h"

int main(int argc, char **argv) {
#if HAS_LIBUSB
    libusb_context *ctx = nullptr;

    if (libusb_init(&ctx)) {
        return 1;
    }
    return 0;
#else
    return 1;
#endif
}
