/**********************************************************************
 * Copyright (c) 2018 Pieter Wuille, Greg Maxwell, Gleb Naumenko      *
 * Distributed under the MIT software license, see the accompanying   *
 * file LICENSE or http://www.opensource.org/licenses/mit-license.php.*
 **********************************************************************/

/* This file was substantially auto-generated by doc/gen_params.sage. */
#include "../fielddefines.h"

#if defined(ENABLE_FIELD_BYTES_INT_3)

#include "clmul_common_impl.h"

#include "../int_utils.h"
#include "../lintrans.h"
#include "../sketch_impl.h"

#endif

#include "../sketch.h"

namespace {
#ifdef ENABLE_FIELD_INT_17
// 17 bit field
typedef RecLinTrans<uint32_t, 6, 6, 5> StatTable17;
constexpr StatTable17 SQR_TABLE_17({0x1, 0x4, 0x10, 0x40, 0x100, 0x400, 0x1000, 0x4000, 0x10000, 0x12, 0x48, 0x120, 0x480, 0x1200, 0x4800, 0x12000, 0x8012});
constexpr StatTable17 SQR2_TABLE_17({0x1, 0x10, 0x100, 0x1000, 0x10000, 0x48, 0x480, 0x4800, 0x8012, 0x104, 0x1040, 0x10400, 0x4048, 0x492, 0x4920, 0x9212, 0x12104});
constexpr StatTable17 SQR4_TABLE_17({0x1, 0x10000, 0x8012, 0x4048, 0x12104, 0x1480, 0x5840, 0x14d20, 0x19202, 0x8112, 0x44c8, 0x13144, 0x5da0, 0x15850, 0x1cd7a, 0x1d34e, 0x1a484});
constexpr StatTable17 SQR8_TABLE_17({0x1, 0x1a484, 0x1f24a, 0x1d572, 0x1eec4, 0x15448, 0xf9de, 0x9af0, 0x1ab78, 0x6048, 0xdc9a, 0x1eb24, 0x2ef4, 0x7c5e, 0x170b2, 0x16c1a, 0xa660});
constexpr StatTable17 QRT_TABLE_17({0, 0x4c3e, 0x4c3c, 0x1a248, 0x4c38, 0x428, 0x1a240, 0x1b608, 0x4c28, 0x206, 0x408, 0x4000, 0x1a200, 0x18006, 0x1b688, 0x14d2e, 0x4d28});
typedef Field<uint32_t, 17, 9, StatTable17, &SQR_TABLE_17, &SQR2_TABLE_17, &SQR4_TABLE_17, &SQR8_TABLE_17, &QRT_TABLE_17, &QRT_TABLE_17, IdTrans, &ID_TRANS, &ID_TRANS> Field17;
typedef FieldTri<uint32_t, 17, 3, RecLinTrans<uint32_t, 6, 6, 5>, &SQR_TABLE_17, &SQR2_TABLE_17, &SQR4_TABLE_17, &SQR8_TABLE_17, &QRT_TABLE_17, &QRT_TABLE_17, IdTrans, &ID_TRANS, &ID_TRANS> FieldTri17;
#endif

#ifdef ENABLE_FIELD_INT_18
// 18 bit field
typedef RecLinTrans<uint32_t, 6, 6, 6> StatTable18;
constexpr StatTable18 SQR_TABLE_18({0x1, 0x4, 0x10, 0x40, 0x100, 0x400, 0x1000, 0x4000, 0x10000, 0x9, 0x24, 0x90, 0x240, 0x900, 0x2400, 0x9000, 0x24000, 0x10012});
constexpr StatTable18 SQR2_TABLE_18({0x1, 0x10, 0x100, 0x1000, 0x10000, 0x24, 0x240, 0x2400, 0x24000, 0x41, 0x410, 0x4100, 0x1009, 0x10090, 0x924, 0x9240, 0x12412, 0x24104});
constexpr StatTable18 SQR4_TABLE_18({0x1, 0x10000, 0x24000, 0x1009, 0x12412, 0x124, 0x201, 0x10480, 0x24820, 0x241, 0x10410, 0x24924, 0x8, 0x12, 0x20024, 0x8048, 0x12082, 0x920});
constexpr StatTable18 SQR8_TABLE_18({0x1, 0x12082, 0x20904, 0x1000, 0x92, 0x904, 0x240, 0x12012, 0x4104, 0x41, 0x10080, 0x4924, 0x1009, 0x2412, 0x24804, 0x9240, 0x12410, 0x20});
constexpr StatTable18 QRT_TABLE_18({0x9208, 0x422, 0x420, 0x8048, 0x424, 0x68b0, 0x8040, 0x30086, 0x434, 0x1040, 0x6890, 0x30ca2, 0x8000, 0x32896, 0x30006, 0, 0x534, 0x20532});
typedef Field<uint32_t, 18, 9, StatTable18, &SQR_TABLE_18, &SQR2_TABLE_18, &SQR4_TABLE_18, &SQR8_TABLE_18, &QRT_TABLE_18, &QRT_TABLE_18, IdTrans, &ID_TRANS, &ID_TRANS> Field18;
typedef FieldTri<uint32_t, 18, 3, RecLinTrans<uint32_t, 6, 6, 6>, &SQR_TABLE_18, &SQR2_TABLE_18, &SQR4_TABLE_18, &SQR8_TABLE_18, &QRT_TABLE_18, &QRT_TABLE_18, IdTrans, &ID_TRANS, &ID_TRANS> FieldTri18;
#endif

#ifdef ENABLE_FIELD_INT_19
// 19 bit field
typedef RecLinTrans<uint32_t, 5, 5, 5, 4> StatTable19;
constexpr StatTable19 SQR_TABLE_19({0x1, 0x4, 0x10, 0x40, 0x100, 0x400, 0x1000, 0x4000, 0x10000, 0x40000, 0x4e, 0x138, 0x4e0, 0x1380, 0x4e00, 0x13800, 0x4e000, 0x3804e, 0x6011f});
constexpr StatTable19 SQR2_TABLE_19({0x1, 0x10, 0x100, 0x1000, 0x10000, 0x4e, 0x4e0, 0x4e00, 0x4e000, 0x6011f, 0x1054, 0x10540, 0x544e, 0x544e0, 0x44f76, 0x4f658, 0x7649f, 0x6481a, 0x48004});
constexpr StatTable19 SQR4_TABLE_19({0x1, 0x10000, 0x4e000, 0x544e, 0x7649f, 0x15f0, 0x5afa, 0x35b7d, 0x17dca, 0x7390f, 0x151ae, 0x3902b, 0x41e9c, 0x7f117, 0x23ec7, 0x62c2f, 0x5e852, 0x69238, 0x775c});
constexpr StatTable19 SQR8_TABLE_19({0x1, 0x5e852, 0x394a3, 0x29f41, 0x618e5, 0x4210, 0x7add9, 0x31105, 0x5d098, 0x7bb13, 0x44f00, 0x966, 0x11ae6, 0x70901, 0x664bf, 0x67449, 0x3d2bf, 0x4cbf9, 0x54e0c});
constexpr StatTable19 QRT_TABLE_19({0x5d6b0, 0x2f476, 0x2f474, 0x1d6a2, 0x2f470, 0x42a, 0x1d6aa, 0x1060, 0x2f460, 0x19e92, 0x40a, 0x1da98, 0x1d6ea, 0x28c78, 0x10e0, 0xf56a, 0x2f560, 0, 0x19c92});
typedef Field<uint32_t, 19, 39, StatTable19, &SQR_TABLE_19, &SQR2_TABLE_19, &SQR4_TABLE_19, &SQR8_TABLE_19, &QRT_TABLE_19, &QRT_TABLE_19, IdTrans, &ID_TRANS, &ID_TRANS> Field19;
#endif

#ifdef ENABLE_FIELD_INT_20
// 20 bit field
typedef RecLinTrans<uint32_t, 5, 5, 5, 5> StatTable20;
constexpr StatTable20 SQR_TABLE_20({0x1, 0x4, 0x10, 0x40, 0x100, 0x400, 0x1000, 0x4000, 0x10000, 0x40000, 0x9, 0x24, 0x90, 0x240, 0x900, 0x2400, 0x9000, 0x24000, 0x90000, 0x40012});
constexpr StatTable20 SQR2_TABLE_20({0x1, 0x10, 0x100, 0x1000, 0x10000, 0x9, 0x90, 0x900, 0x9000, 0x90000, 0x41, 0x410, 0x4100, 0x41000, 0x10024, 0x249, 0x2490, 0x24900, 0x49012, 0x90104});
constexpr StatTable20 SQR4_TABLE_20({0x1, 0x10000, 0x9000, 0x4100, 0x2490, 0x1001, 0x10900, 0x9410, 0x4349, 0x92594, 0x91, 0x10041, 0x19024, 0x4d112, 0x2599, 0x91091, 0x51941, 0x3dd34, 0x5d34b, 0x9b494});
constexpr StatTable20 SQR8_TABLE_20({0x1, 0x51941, 0x880b5, 0x66d0, 0x46103, 0x19025, 0x45a49, 0x8a4b4, 0x80b45, 0x81f9f, 0xb081, 0x41040, 0xd19f5, 0xc11be, 0x4634b, 0xd8d70, 0x11027, 0xf8651, 0x141fa, 0xdc63});
constexpr StatTable20 QRT_TABLE_20({0xc5dea, 0xc0110, 0xc0112, 0xe11de, 0xc0116, 0x24814, 0xe11d6, 0x20080, 0xc0106, 0xfe872, 0x24834, 0xe4106, 0xe1196, 0x1d9a4, 0x20000, 0x31190, 0xc0006, 0, 0xfea72, 0x7ea74});
typedef Field<uint32_t, 20, 9, StatTable20, &SQR_TABLE_20, &SQR2_TABLE_20, &SQR4_TABLE_20, &SQR8_TABLE_20, &QRT_TABLE_20, &QRT_TABLE_20, IdTrans, &ID_TRANS, &ID_TRANS> Field20;
typedef FieldTri<uint32_t, 20, 3, RecLinTrans<uint32_t, 5, 5, 5, 5>, &SQR_TABLE_20, &SQR2_TABLE_20, &SQR4_TABLE_20, &SQR8_TABLE_20, &QRT_TABLE_20, &QRT_TABLE_20, IdTrans, &ID_TRANS, &ID_TRANS> FieldTri20;
#endif

#ifdef ENABLE_FIELD_INT_21
// 21 bit field
typedef RecLinTrans<uint32_t, 6, 5, 5, 5> StatTable21;
constexpr StatTable21 SQR_TABLE_21({0x1, 0x4, 0x10, 0x40, 0x100, 0x400, 0x1000, 0x4000, 0x10000, 0x40000, 0x100000, 0xa, 0x28, 0xa0, 0x280, 0xa00, 0x2800, 0xa000, 0x28000, 0xa0000, 0x80005});
constexpr StatTable21 SQR2_TABLE_21({0x1, 0x10, 0x100, 0x1000, 0x10000, 0x100000, 0x28, 0x280, 0x2800, 0x28000, 0x80005, 0x44, 0x440, 0x4400, 0x44000, 0x4000a, 0xaa, 0xaa0, 0xaa00, 0xaa000, 0xa0011});
constexpr StatTable21 SQR4_TABLE_21({0x1, 0x10000, 0x2800, 0x440, 0xaa, 0xa0011, 0x101000, 0x28280, 0x4444, 0x40aaa, 0xaa101, 0x128, 0x8002d, 0xc4005, 0x4ea00, 0xba10, 0x101290, 0x1282c4, 0x6c44e, 0xeeeaa, 0xbaaa1});
constexpr StatTable21 SQR8_TABLE_21({0x1, 0x101290, 0xc412d, 0x1ab101, 0x986d1, 0x1c6cc5, 0x3aa8c, 0x14b0fe, 0x1e7301, 0xb491d, 0x10d23e, 0xa4015, 0x4c2fa, 0xce8e5, 0xadfd9, 0xf110, 0x5220c, 0xf225f, 0xb8bdb, 0x159467, 0xc0df9});
constexpr StatTable21 QRT_TABLE_21({0x1bd5fc, 0xbc196, 0xbc194, 0x74b96, 0xbc190, 0x1048, 0x74b9e, 0x672c8, 0xbc180, 0x4080, 0x1068, 0xc8200, 0x74bde, 0x64280, 0x67248, 0xc4280, 0xbc080, 0x80000, 0x4280, 0, 0x1468});
typedef Field<uint32_t, 21, 5, StatTable21, &SQR_TABLE_21, &SQR2_TABLE_21, &SQR4_TABLE_21, &SQR8_TABLE_21, &QRT_TABLE_21, &QRT_TABLE_21, IdTrans, &ID_TRANS, &ID_TRANS> Field21;
typedef FieldTri<uint32_t, 21, 2, RecLinTrans<uint32_t, 6, 5, 5, 5>, &SQR_TABLE_21, &SQR2_TABLE_21, &SQR4_TABLE_21, &SQR8_TABLE_21, &QRT_TABLE_21, &QRT_TABLE_21, IdTrans, &ID_TRANS, &ID_TRANS> FieldTri21;
#endif

#ifdef ENABLE_FIELD_INT_22
// 22 bit field
typedef RecLinTrans<uint32_t, 6, 6, 5, 5> StatTableTRI22;
constexpr StatTableTRI22 SQR_TABLE_TRI22({0x1, 0x4, 0x10, 0x40, 0x100, 0x400, 0x1000, 0x4000, 0x10000, 0x40000, 0x100000, 0x3, 0xc, 0x30, 0xc0, 0x300, 0xc00, 0x3000, 0xc000, 0x30000, 0xc0000, 0x300000});
constexpr StatTableTRI22 SQR2_TABLE_TRI22({0x1, 0x10, 0x100, 0x1000, 0x10000, 0x100000, 0xc, 0xc0, 0xc00, 0xc000, 0xc0000, 0x5, 0x50, 0x500, 0x5000, 0x50000, 0x100003, 0x3c, 0x3c0, 0x3c00, 0x3c000, 0x3c0000});
constexpr StatTableTRI22 SQR4_TABLE_TRI22({0x1, 0x10000, 0xc00, 0x50, 0x100003, 0x3c000, 0x1100, 0xcc, 0xc0005, 0x55000, 0x3fc0, 0x101, 0x1000c, 0xc0c00, 0x5050, 0x1003c3, 0x3c011, 0x111100, 0xcccc, 0xc0555, 0x15503f, 0x3fffc0});
constexpr StatTableTRI22 SQR8_TABLE_TRI22({0x1, 0x3c011, 0x3ec1, 0x101103, 0x14503e, 0x28282, 0xd0009, 0x1d9c, 0xcc598, 0x25c81, 0x47304, 0xc0004, 0x3cc41, 0xcf758, 0x11415f, 0x1d11f7, 0x128280, 0x1b9027, 0x1070ce, 0x10eb5e, 0x5c0ec, 0x2097e0});
constexpr StatTableTRI22 QRT_TABLE_TRI22({0x210d16, 0x104a, 0x1048, 0x4088, 0x104c, 0x200420, 0x4080, 0x492dc, 0x105c, 0x1a67f0, 0x200400, 0x21155c, 0x40c0, 0x20346c, 0x4925c, 0x1af7ac, 0x115c, 0x2274ac, 0x1a65f0, 0x2a65f0, 0x200000, 0});
typedef FieldTri<uint32_t, 22, 1, StatTableTRI22, &SQR_TABLE_TRI22, &SQR2_TABLE_TRI22, &SQR4_TABLE_TRI22, &SQR8_TABLE_TRI22, &QRT_TABLE_TRI22, &QRT_TABLE_TRI22, IdTrans, &ID_TRANS, &ID_TRANS> FieldTri22;
#endif

#ifdef ENABLE_FIELD_INT_23
// 23 bit field
typedef RecLinTrans<uint32_t, 6, 6, 6, 5> StatTable23;
constexpr StatTable23 SQR_TABLE_23({0x1, 0x4, 0x10, 0x40, 0x100, 0x400, 0x1000, 0x4000, 0x10000, 0x40000, 0x100000, 0x400000, 0x42, 0x108, 0x420, 0x1080, 0x4200, 0x10800, 0x42000, 0x108000, 0x420000, 0x80042, 0x200108});
constexpr StatTable23 SQR2_TABLE_23({0x1, 0x10, 0x100, 0x1000, 0x10000, 0x100000, 0x42, 0x420, 0x4200, 0x42000, 0x420000, 0x200108, 0x1004, 0x10040, 0x100400, 0x4042, 0x40420, 0x404200, 0x42108, 0x421080, 0x210908, 0x109004, 0x90002});
constexpr StatTable23 SQR4_TABLE_23({0x1, 0x10000, 0x4200, 0x1004, 0x40420, 0x210908, 0x52, 0x520000, 0x142400, 0x52148, 0x494202, 0x10c204, 0x1104, 0x40462, 0x630908, 0x100452, 0x562108, 0x1d2402, 0x57348, 0x495626, 0x34c72c, 0x21584e, 0x4614b0});
constexpr StatTable23 SQR8_TABLE_23({0x1, 0x562108, 0x662840, 0x5304, 0x6d3842, 0x738f46, 0x50472, 0x6ff79e, 0x7cf204, 0x436274, 0x3e4bde, 0x42a93e, 0x147704, 0x6c3810, 0x28bff4, 0x78815c, 0x7ab4b0, 0x62852a, 0x255b30, 0x5653d0, 0x1afd36, 0x5f118, 0x601dd4});
constexpr StatTable23 QRT_TABLE_23({0, 0x1040, 0x1042, 0x43056, 0x1046, 0x121d76, 0x4305e, 0x40a0, 0x1056, 0x15176, 0x121d56, 0x7ee1f6, 0x4301e, 0x40000, 0x4020, 0x4f0be, 0x1156, 0x7cf0a0, 0x15376, 0x1ee9e8, 0x121956, 0x3ac9f6, 0x7ee9f6});
typedef Field<uint32_t, 23, 33, StatTable23, &SQR_TABLE_23, &SQR2_TABLE_23, &SQR4_TABLE_23, &SQR8_TABLE_23, &QRT_TABLE_23, &QRT_TABLE_23, IdTrans, &ID_TRANS, &ID_TRANS> Field23;
typedef FieldTri<uint32_t, 23, 5, RecLinTrans<uint32_t, 6, 6, 6, 5>, &SQR_TABLE_23, &SQR2_TABLE_23, &SQR4_TABLE_23, &SQR8_TABLE_23, nullptr, &QRT_TABLE_23, IdTrans, &ID_TRANS, &ID_TRANS> FieldTri23;
#endif

#ifdef ENABLE_FIELD_INT_24
// 24 bit field
typedef RecLinTrans<uint32_t, 6, 6, 6, 6> StatTable24;
constexpr StatTable24 SQR_TABLE_24({0x1, 0x4, 0x10, 0x40, 0x100, 0x400, 0x1000, 0x4000, 0x10000, 0x40000, 0x100000, 0x400000, 0x1b, 0x6c, 0x1b0, 0x6c0, 0x1b00, 0x6c00, 0x1b000, 0x6c000, 0x1b0000, 0x6c0000, 0xb0001b, 0xc0005a});
constexpr StatTable24 SQR2_TABLE_24({0x1, 0x10, 0x100, 0x1000, 0x10000, 0x100000, 0x1b, 0x1b0, 0x1b00, 0x1b000, 0x1b0000, 0xb0001b, 0x145, 0x1450, 0x14500, 0x145000, 0x45001b, 0x5001dc, 0x1db7, 0x1db70, 0x1db700, 0xdb701b, 0xb7011f, 0x701105});
constexpr StatTable24 SQR4_TABLE_24({0x1, 0x10000, 0x1b00, 0x145, 0x45001b, 0x1db700, 0x11011, 0x111ab0, 0xb1aa5e, 0x51450e, 0x96db7, 0xb7c60f, 0x1a1a, 0x1a015e, 0x5f5e1b, 0x1ceef2, 0xf30ca2, 0xabbdb4, 0xba1aff, 0xf0bf5e, 0x579fc9, 0xce3da9, 0xa2c07f, 0x71dd40});
constexpr StatTable24 SQR8_TABLE_24({0x1, 0xf30ca2, 0x573345, 0xb0a14e, 0xafd77d, 0x1419b, 0xb616a2, 0xba7db, 0xbe1560, 0xe0d0a3, 0x15bf5, 0x1056dd, 0xa29845, 0xf83d32, 0x13e0e9, 0xe2d8d3, 0xa10841, 0x57ac5a, 0x1c432f, 0x57044e, 0x454fba, 0x2bb37c, 0xf50fa, 0x85d5b9});
constexpr StatTable24 QRT_TABLE_24({0x104e, 0xaf42a8, 0xaf42aa, 0xb78186, 0xaf42ae, 0x4090, 0xb7818e, 0x4a37c, 0xaf42be, 0x3688c0, 0x40b0, 0x80080e, 0xb781ce, 0xaf2232, 0x4a3fc, 0x856a82, 0xaf43be, 0x29c970, 0x368ac0, 0x968ace, 0x44b0, 0x77d570, 0x80000e, 0});
typedef Field<uint32_t, 24, 27, StatTable24, &SQR_TABLE_24, &SQR2_TABLE_24, &SQR4_TABLE_24, &SQR8_TABLE_24, &QRT_TABLE_24, &QRT_TABLE_24, IdTrans, &ID_TRANS, &ID_TRANS> Field24;
#endif
}

Sketch* ConstructClMul3Bytes(int bits, int implementation) {
    switch (bits) {
#ifdef ENABLE_FIELD_INT_17
    case 17: return new SketchImpl<Field17>(implementation, 17);
#endif
#ifdef ENABLE_FIELD_INT_18
    case 18: return new SketchImpl<Field18>(implementation, 18);
#endif
#ifdef ENABLE_FIELD_INT_19
    case 19: return new SketchImpl<Field19>(implementation, 19);
#endif
#ifdef ENABLE_FIELD_INT_20
    case 20: return new SketchImpl<Field20>(implementation, 20);
#endif
#ifdef ENABLE_FIELD_INT_21
    case 21: return new SketchImpl<Field21>(implementation, 21);
#endif
#ifdef ENABLE_FIELD_INT_23
    case 23: return new SketchImpl<Field23>(implementation, 23);
#endif
#ifdef ENABLE_FIELD_INT_24
    case 24: return new SketchImpl<Field24>(implementation, 24);
#endif
    }
    return nullptr;
}

Sketch* ConstructClMulTri3Bytes(int bits, int implementation) {
    switch (bits) {
#ifdef ENABLE_FIELD_INT_17
    case 17: return new SketchImpl<FieldTri17>(implementation, 17);
#endif
#ifdef ENABLE_FIELD_INT_18
    case 18: return new SketchImpl<FieldTri18>(implementation, 18);
#endif
#ifdef ENABLE_FIELD_INT_20
    case 20: return new SketchImpl<FieldTri20>(implementation, 20);
#endif
#ifdef ENABLE_FIELD_INT_21
    case 21: return new SketchImpl<FieldTri21>(implementation, 21);
#endif
#ifdef ENABLE_FIELD_INT_22
    case 22: return new SketchImpl<FieldTri22>(implementation, 22);
#endif
#ifdef ENABLE_FIELD_INT_23
    case 23: return new SketchImpl<FieldTri23>(implementation, 23);
#endif
    }
    return nullptr;
}
