Shared Libraries
================

## elsperoconsensus

The purpose of this library is to make the verification functionality that is critical to Elspero's consensus available to other applications, e.g. to language bindings.

### API

The interface is defined in the C header `elsperoconsensus.h` located in  `src/script/elsperoconsensus.h`.

#### Version

`elsperoconsensus_version` returns an `unsigned int` with the API version *(currently at an experimental `0`)*.

#### Script Validation

`elsperoconsensus_verify_script` returns an `int` with the status of the verification. It will be `1` if the input script correctly spends the previous output `scriptPubKey`.

##### Parameters
- `const unsigned char *scriptPubKey` - The previous output script that encumbers spending.
- `unsigned int scriptPubKeyLen` - The number of bytes for the `scriptPubKey`.
- `const unsigned char *txTo` - The transaction with the input that is spending the previous output.
- `unsigned int txToLen` - The number of bytes for the `txTo`.
- `unsigned int nIn` - The index of the input in `txTo` that spends the `scriptPubKey`.
- `unsigned int flags` - The script validation flags *(see below)*.
- `elsperoconsensus_error* err` - Will have the error/success code for the operation *(see below)*.

##### Script Flags
- `elsperoconsensus_SCRIPT_FLAGS_VERIFY_NONE`
- `elsperoconsensus_SCRIPT_FLAGS_VERIFY_P2SH` - Evaluate P2SH ([BIP16](https://github.com/elspero/bips/blob/master/bip-0016.mediawiki)) subscripts
- `elsperoconsensus_SCRIPT_FLAGS_VERIFY_DERSIG` - Enforce strict DER ([BIP66](https://github.com/elspero/bips/blob/master/bip-0066.mediawiki)) compliance

##### Errors
- `elsperoconsensus_ERR_OK` - No errors with input parameters *(see the return value of `elsperoconsensus_verify_script` for the verification status)*
- `elsperoconsensus_ERR_TX_INDEX` - An invalid index for `txTo`
- `elsperoconsensus_ERR_TX_SIZE_MISMATCH` - `txToLen` did not match with the size of `txTo`
- `elsperoconsensus_ERR_DESERIALIZE` - An error deserializing `txTo`

### Example Implementations
- [NElspero](https://github.com/NicolasDorier/NElspero/blob/master/NElspero/Script.cs#L814) (.NET Bindings)
- [node-libelsperoconsensus](https://github.com/bitpay/node-libelsperoconsensus) (Node.js Bindings)
- [java-libelsperoconsensus](https://github.com/dexX7/java-libelsperoconsensus) (Java Bindings)
- [elsperoconsensus-php](https://github.com/Bit-Wasp/elsperoconsensus-php) (PHP Bindings)
