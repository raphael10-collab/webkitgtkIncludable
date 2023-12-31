#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
//
// Buffer Definitions: 
//
// cbuffer ColorAndDepthDataUint
// {
//
//   uint4 color_Uint;                  // Offset:    0 Size:    16
//   float zValueF_Uint;                // Offset:   16 Size:     4
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim      HLSL Bind  Count
// ------------------------------ ---------- ------- ----------- -------------- ------
// ColorAndDepthDataUint             cbuffer      NA          NA            cb0      1 
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_POSITION              0   xyzw        0      POS   float       
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_TARGET                0   xyzw        0   TARGET    uint   xyzw
// SV_TARGET                1   xyzw        1   TARGET    uint   xyzw
// SV_TARGET                2   xyzw        2   TARGET    uint   xyzw
// SV_TARGET                3   xyzw        3   TARGET    uint   xyzw
// SV_DEPTH                 0    N/A   oDepth    DEPTH   float    YES
//
ps_4_0
dcl_constantbuffer CB0[2], immediateIndexed
dcl_output o0.xyzw
dcl_output o1.xyzw
dcl_output o2.xyzw
dcl_output o3.xyzw
dcl_output oDepth
mov o0.xyzw, cb0[0].xyzw
mov o1.xyzw, cb0[0].xyzw
mov o2.xyzw, cb0[0].xyzw
mov o3.xyzw, cb0[0].xyzw
mov oDepth, cb0[1].x
ret 
// Approximately 6 instruction slots used
#endif

const BYTE g_PS_ClearUint4[] = {
    68,  88,  66,  67,  255, 94,  158, 125, 94,  174, 68,  246, 120, 231, 8,   70,  114, 202, 111,
    31,  1,   0,   0,   0,   88,  3,   0,   0,   5,   0,   0,   0,   52,  0,   0,   0,   60,  1,
    0,   0,   112, 1,   0,   0,   12,  2,   0,   0,   220, 2,   0,   0,   82,  68,  69,  70,  0,
    1,   0,   0,   1,   0,   0,   0,   84,  0,   0,   0,   1,   0,   0,   0,   28,  0,   0,   0,
    0,   4,   255, 255, 0,   1,   0,   0,   216, 0,   0,   0,   60,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,
    0,   0,   1,   0,   0,   0,   67,  111, 108, 111, 114, 65,  110, 100, 68,  101, 112, 116, 104,
    68,  97,  116, 97,  85,  105, 110, 116, 0,   171, 171, 60,  0,   0,   0,   2,   0,   0,   0,
    108, 0,   0,   0,   32,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   156, 0,   0,
    0,   0,   0,   0,   0,   16,  0,   0,   0,   2,   0,   0,   0,   168, 0,   0,   0,   0,   0,
    0,   0,   184, 0,   0,   0,   16,  0,   0,   0,   4,   0,   0,   0,   2,   0,   0,   0,   200,
    0,   0,   0,   0,   0,   0,   0,   99,  111, 108, 111, 114, 95,  85,  105, 110, 116, 0,   171,
    1,   0,   19,  0,   1,   0,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   122, 86,  97,
    108, 117, 101, 70,  95,  85,  105, 110, 116, 0,   171, 171, 171, 0,   0,   3,   0,   1,   0,
    1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   77,  105, 99,  114, 111, 115, 111, 102, 116,
    32,  40,  82,  41,  32,  72,  76,  83,  76,  32,  83,  104, 97,  100, 101, 114, 32,  67,  111,
    109, 112, 105, 108, 101, 114, 32,  49,  48,  46,  49,  0,   73,  83,  71,  78,  44,  0,   0,
    0,   1,   0,   0,   0,   8,   0,   0,   0,   32,  0,   0,   0,   0,   0,   0,   0,   1,   0,
    0,   0,   3,   0,   0,   0,   0,   0,   0,   0,   15,  0,   0,   0,   83,  86,  95,  80,  79,
    83,  73,  84,  73,  79,  78,  0,   79,  83,  71,  78,  148, 0,   0,   0,   5,   0,   0,   0,
    8,   0,   0,   0,   128, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,
    0,   0,   0,   0,   0,   15,  0,   0,   0,   128, 0,   0,   0,   1,   0,   0,   0,   0,   0,
    0,   0,   1,   0,   0,   0,   1,   0,   0,   0,   15,  0,   0,   0,   128, 0,   0,   0,   2,
    0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   2,   0,   0,   0,   15,  0,   0,   0,
    128, 0,   0,   0,   3,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   3,   0,   0,
    0,   15,  0,   0,   0,   138, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,   0,
    0,   0,   255, 255, 255, 255, 1,   14,  0,   0,   83,  86,  95,  84,  65,  82,  71,  69,  84,
    0,   83,  86,  95,  68,  69,  80,  84,  72,  0,   171, 83,  72,  68,  82,  200, 0,   0,   0,
    64,  0,   0,   0,   50,  0,   0,   0,   89,  0,   0,   4,   70,  142, 32,  0,   0,   0,   0,
    0,   2,   0,   0,   0,   101, 0,   0,   3,   242, 32,  16,  0,   0,   0,   0,   0,   101, 0,
    0,   3,   242, 32,  16,  0,   1,   0,   0,   0,   101, 0,   0,   3,   242, 32,  16,  0,   2,
    0,   0,   0,   101, 0,   0,   3,   242, 32,  16,  0,   3,   0,   0,   0,   101, 0,   0,   2,
    1,   192, 0,   0,   54,  0,   0,   6,   242, 32,  16,  0,   0,   0,   0,   0,   70,  142, 32,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   54,  0,   0,   6,   242, 32,  16,  0,   1,   0,
    0,   0,   70,  142, 32,  0,   0,   0,   0,   0,   0,   0,   0,   0,   54,  0,   0,   6,   242,
    32,  16,  0,   2,   0,   0,   0,   70,  142, 32,  0,   0,   0,   0,   0,   0,   0,   0,   0,
    54,  0,   0,   6,   242, 32,  16,  0,   3,   0,   0,   0,   70,  142, 32,  0,   0,   0,   0,
    0,   0,   0,   0,   0,   54,  0,   0,   5,   1,   192, 0,   0,   10,  128, 32,  0,   0,   0,
    0,   0,   1,   0,   0,   0,   62,  0,   0,   1,   83,  84,  65,  84,  116, 0,   0,   0,   6,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0};
