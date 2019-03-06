// Copyright 2016 Eotvos Lorand University, Budapest, Hungary
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
#ifndef DPDK_REG_H
#define DPDK_REG_H

//=============================================================================
// Registers
typedef struct reg_int8_s { // stateful_memory@82
    volatile int8_t value; // stateful_memory@83
} reg_int8_t; // stateful_memory@84
typedef struct reg_int16_s { // stateful_memory@82
    volatile int16_t value; // stateful_memory@83
} reg_int16_t; // stateful_memory@84
typedef struct reg_int32_s { // stateful_memory@82
    volatile int32_t value; // stateful_memory@83
} reg_int32_t; // stateful_memory@84
typedef struct reg_int64_s { // stateful_memory@82
    volatile int64_t value; // stateful_memory@83
} reg_int64_t; // stateful_memory@84
typedef struct reg_uint8_s { // stateful_memory@82
    volatile uint8_t value; // stateful_memory@83
} reg_uint8_t; // stateful_memory@84
typedef struct reg_uint16_s { // stateful_memory@82
    volatile uint16_t value; // stateful_memory@83
} reg_uint16_t; // stateful_memory@84
typedef struct reg_uint32_s { // stateful_memory@82
    volatile uint32_t value; // stateful_memory@83
} reg_uint32_t; // stateful_memory@84
typedef struct reg_uint64_s { // stateful_memory@82
    volatile uint64_t value; // stateful_memory@83
} reg_uint64_t; // stateful_memory@84

void extern_register_write_int8_t(reg_int8_t* reg, uint32_t idx, int8_t value); // stateful_memory@89
void extern_register_read_int8_t(reg_int8_t* reg, int8_t* value, uint32_t idx); // stateful_memory@90
void init_register_int8_t(reg_int8_t* reg, uint32_t size); // stateful_memory@91
void extern_register_write_int16_t(reg_int16_t* reg, uint32_t idx, int16_t value); // stateful_memory@89
void extern_register_read_int16_t(reg_int16_t* reg, int16_t* value, uint32_t idx); // stateful_memory@90
void init_register_int16_t(reg_int16_t* reg, uint32_t size); // stateful_memory@91
void extern_register_write_int32_t(reg_int32_t* reg, uint32_t idx, int32_t value); // stateful_memory@89
void extern_register_read_int32_t(reg_int32_t* reg, int32_t* value, uint32_t idx); // stateful_memory@90
void init_register_int32_t(reg_int32_t* reg, uint32_t size); // stateful_memory@91
void extern_register_write_int64_t(reg_int64_t* reg, uint32_t idx, int64_t value); // stateful_memory@89
void extern_register_read_int64_t(reg_int64_t* reg, int64_t* value, uint32_t idx); // stateful_memory@90
void init_register_int64_t(reg_int64_t* reg, uint32_t size); // stateful_memory@91
void extern_register_write_uint8_t(reg_uint8_t* reg, uint32_t idx, uint8_t value); // stateful_memory@89
void extern_register_read_uint8_t(reg_uint8_t* reg, uint8_t* value, uint32_t idx); // stateful_memory@90
void init_register_uint8_t(reg_uint8_t* reg, uint32_t size); // stateful_memory@91
void extern_register_write_uint16_t(reg_uint16_t* reg, uint32_t idx, uint16_t value); // stateful_memory@89
void extern_register_read_uint16_t(reg_uint16_t* reg, uint16_t* value, uint32_t idx); // stateful_memory@90
void init_register_uint16_t(reg_uint16_t* reg, uint32_t size); // stateful_memory@91
void extern_register_write_uint32_t(reg_uint32_t* reg, uint32_t idx, uint32_t value); // stateful_memory@89
void extern_register_read_uint32_t(reg_uint32_t* reg, uint32_t* value, uint32_t idx); // stateful_memory@90
void init_register_uint32_t(reg_uint32_t* reg, uint32_t size); // stateful_memory@91
void extern_register_write_uint64_t(reg_uint64_t* reg, uint32_t idx, uint64_t value); // stateful_memory@89
void extern_register_read_uint64_t(reg_uint64_t* reg, uint64_t* value, uint32_t idx); // stateful_memory@90
void init_register_uint64_t(reg_uint64_t* reg, uint32_t size); // stateful_memory@91

#define register_read_PARAM1(par) &par
#define register_read_PARAM2(par) par
#define register_write_PARAM1(par) par
#define register_write_PARAM2(par) par



typedef rte_spinlock_t lock_t;

#define LOCK(lock) rte_spinlock_lock(lock);

#define UNLOCK(lock) rte_spinlock_unlock(lock);


#endif // DPDK_REG_H
