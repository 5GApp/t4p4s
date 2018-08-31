// Copyright 2018 Eotvos Lorand University, Budapest, Hungary
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "dpdk_lib.h"
#include "dpdk_nicoff.h"

fake_cmd_t fake_commands[][RTE_MAX_LCORE] = {
    {
        FSLEEP(200),
        {FAKE_PKT,  ETH(ETH1A, ETH01), 200, 18, ETH(ETH01, ETH1A)},
        {FAKE_PKT,  ETH(ETH1A, ETH02), 200, 18, ETH(ETH01, ETH1A)},
        {FAKE_PKT,  ETH(ETH01, ETH1A),   0, 18, ETH(ETH01, ETH1A)},
        {FAKE_PKT,  ETH(ETH02, ETH1A),   0, 18, ETH(ETH01, ETH1A)},

        FEND,
    },

    {
        {FAKE_PKT,  ETH(ETH1A, ETH03), 200, 18, ETH(ETH01, ETH1A)},
        {FAKE_PKT,  ETH(ETH1A, ETH04), 200, 18, ETH(ETH01, ETH1A)},
        {FAKE_PKT,  ETH(ETH03, ETH1A),   0, 18, ETH(ETH01, ETH1A)},
        {FAKE_PKT,  ETH(ETH04, ETH1A),   0, 18, ETH(ETH01, ETH1A)},

        FEND,
    },
};
