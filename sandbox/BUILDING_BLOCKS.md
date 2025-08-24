# Builder Guide

This document outlines core building blocks for the flash loan multidex scaffold:

- **App**: C# entry point orchestrating routing, TensorFlow stubs, and price queries.
- **Contracts**: Solidity flash loan and swap primitives.
- **Infra**: C++ components for on-chain data routing and gasless exchange support (router and gasless exchange stubs).
- **UsersStudio**: C relayer base integrating with 0x-project forwarder.
- **Utils**: Shared tuple parsers and data transformers.
- **Scripts**: Helper scripts for setup and maintenance.
- **Misc**: Token base and supporting resources.
- **TODOs**: Tracking pending work.
- **Storage**: C++ scaffold for recording transactions.

Each module communicates via simple data structures to enable expansion.

## Improvements

The following implementation steps outline the path to a fully featured flash loan multidex system:

- Integrate flash swap logic alongside existing flash loan primitive.
- Wire TensorFlow-based routing in the C# app for optimal path finding.
- Connect to CoinGecko's free API for real-time token pricing.
- Wire persistent storage layer for tracking historical transactions and profitability.
- Complete on-chain data router in C++ with gasless exchange support on Ethereum (GaslessExchange stub added).
- Expand tuple array parser to translate structures into transaction bytes.
- Extend Solidity contracts to interact with a vetted set of profitable tokens.
- Finish relayer and forwarder modules based on 0x-project tooling.
- Enrich utilities for data transformation and cross-module messaging.
- Populate token base with 5000 vetted entries.
- Provide end-to-end tests exercising swaps, loans, and routing.
