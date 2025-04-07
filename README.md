This is a reproducer for a link issue with the libusb Bazel module
at https://github.com/bazelbuild/bazel-central-registry/tree/main/modules/libusb

Run 
```
bazel clean
bazel run //:test
```
with and without `libudev-dev` installed


