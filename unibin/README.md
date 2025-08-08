<p align="center">
	<strong>UniBin</strong> is a binary serialization/deserialization service specifically designed for UniRPC.
</p>

> For most of the UniBin design, we referred to the QUIC standard.

## Handshark

## State Awareness

## Strategy
For the perceived state and the content of the sent packet, we have the following processing strategies:

+ *none*: Do not process, send directly.
+ *batch*: Glue multiple packages to achieve the goal of utilizing window size.
+ *slice*: Attempt to cut packets and send them in segments (different from stream sending).
+ *split*: Split a packet/stream into multiple sending streams and send them separately (different from slice).
+ *compress*: Attempt to compress certain segments.

The decision-making process is quite complex, sometimes involving the use of multiple strategies.

## Compression
To ensure lightweight, we use [QuickLZ](https://github.com/RT-Thread-packages/quicklz), [FastLZ](https://github.com/ariya/FastLZ), and [Snappy](https://github.com/google/snappy) for compression.

## Security
In terms of security, we have chosen [8-bit ECDH](https://github.com/kmackay/micro-ecc) + [Simon/128](https://github.com/hyperchemical/Simon-Block-Cipher), because secure transmission of content is not the responsibility of RPC. We only provide the simplest encryption.

