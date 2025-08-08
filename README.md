<h1 align="center">
	UniRPC
</h1>

<p align="center">
	Random and RPC calls at any time
</p>

## Why UniRPC
We borrowed [Cap'n Proto](https://github.com/capnproto/capnproto),  [gRPC](https://github.com/grpc/grpc) and [QUIC](https://github.com/google/quiche) to implement this set of RPC.

+ **Connectionless.** UniRPC can be applied in any way.
+ **Cross-Runtime.** UniRPC can be used in so much programming languages.
+ **High-Performance.** The simplest binary structure with the smallest network footprint.
+ **Rich-Functionality.** Almost anything can be achieved.

## Features
+ Protocol agnostic design capable of handling any network.
+ Automatic state perception, monitoring, and internal tuning.
+ Compact binary format for transmission.
+ Great flow and message model.
+ A certain degree of encryption protection.
+ Try to allow cross version flexibility as much as possible.
+ Active call, passive call, stream call.

## Note
~~In fact, as one of the original functions of SkiProc design, it became a useless case after being castrated.~~

In the development of many projects, there are always many headache inducing problems:
+ What? The front-end and back-end languages are not unified, and there is still a need to design API content?
+ How to design API content? JSON is too bulky, and designing binary serialization on your own is too troublesome!
+ Never mind, let's use RPC! Strange! Why is this RPC internally bound to Sock! I have no way to use my own network stack!

It's very headache inducing.

Indeed, there are many excellent RPC libraries available now, but they are all too tied to a single language, or they use internal network libraries that are completely incompatible with project design.

So, back and forth, we reactivated this obsolete case.

We also discovered a tricky operation, which is that this library is very suitable for lazy operations bound to FFI. *You can take a look at the [MuxFFI](https://github.com/blankfunc/muxffi) library.*