// Copyright (c) 2009-2017 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_CHECKPOINTS_H
#define BITCOIN_CHECKPOINTS_H

#include <uint256.h>

#include <map>

class CBlockIndex;
struct CCheckpointData;

/**
 * Block-chain checkpoints are compiled-in sanity checks.
 * They are updated every release or three.
 */
namespace Checkpoints
{

//! Returns last CBlockIndex* that is a checkpoint
CBlockIndex* GetLastCheckpoint(const CCheckpointData& data);

//! Return conservative estimate of total number of blocks, 0 if unknown
int GetTotalBlocksEstimate(const CCheckpointData& data);

//! Returns the last available checkpoint in the main chain
uint256 GetLastAvailableCheckpoint(const CCheckpointData& data);

//! Returns the block hash of latest hardened checkpoint, if empty genesis block returned
uint256 GetLatestHardenedCheckpoint(const CCheckpointData& data);

} //namespace Checkpoints

#endif // BITCOIN_CHECKPOINTS_H
