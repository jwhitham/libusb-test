This is a reproducer for a link issue with the libusb Bazel module
at https://github.com/bazelbuild/bazel-central-registry/tree/main/modules/libusb

See https://github.com/bazelbuild/bazel-central-registry/issues/4259

Run 
```
bazel clean
bazel run //:test
```
with and without `libudev-dev` installed


