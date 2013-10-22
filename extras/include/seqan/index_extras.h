// ==========================================================================
//                 SeqAn - The Library for Sequence Analysis
// ==========================================================================
// Copyright (c) 2006-2013, Knut Reinert, FU Berlin
// Copyright (c) 2013 NVIDIA Corporation
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of Knut Reinert or the FU Berlin nor the names of
//       its contributors may be used to endorse or promote products derived
//       from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL KNUT REINERT OR THE FU BERLIN BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
// OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
// DAMAGE.
//
// ==========================================================================
// Author: Jochen Singer <jochen.singer@fu-berlin.de>
// Author: Enrico Siragusa <enrico.siragusa@fu-berlin.de>
// ==========================================================================
// Facade header for module index.
// ==========================================================================

#ifndef EXTRAS_INCLUDE_SEQAN_INDEX_H_
#define EXTRAS_INCLUDE_SEQAN_INDEX_H_

// ===========================================================================
// Prerequisites.
// ===========================================================================

#include <seqan/basic.h>
#include <seqan/file.h>
#include <seqan/index.h>
#include <seqan/parallel.h>
#include <seqan/find_extras.h>

// ===========================================================================
// Prerequisites from extras.
// ===========================================================================

#include <seqan/basic_extras.h>
#include <seqan/sequence_extras.h>
#include <seqan/misc_extras.h>

// ===========================================================================
// Extra VSTree Iterators.
// ===========================================================================

#include <seqan/index/index_sa_stree.h>
#include <seqan/index/index_sa_truncated.h>

#include <seqan/index/index_qgram_stree.h>
#include <seqan/index/index_qgram_bucketrefinement.h>

// ===========================================================================
// Index Views.
// ===========================================================================

#include <seqan/index/index_view.h>

#include <seqan/index/iter_vstree_factory.h>

// ===========================================================================
// Device Indices.
// ===========================================================================

#ifdef PLATFORM_CUDA
#include <seqan/index/index_device.h>
#endif

// ===========================================================================
// Backtracking Finders.
// ===========================================================================

#include <seqan/index/find2_index.h>
#include <seqan/index/find_backtracking_exp.h>
//#include <seqan/index/find_suffixfilter.h>

#include <seqan/index/find_backtracking.h>

// ===========================================================================
// Index Finders.
// ===========================================================================

#include <seqan/index/find2_index.h>
#include <seqan/index/find_index_multiple.h>

#include <seqan/index/find2_functors.h>

#endif  // EXTRAS_INCLUDE_SEQAN_INDEX_H_
