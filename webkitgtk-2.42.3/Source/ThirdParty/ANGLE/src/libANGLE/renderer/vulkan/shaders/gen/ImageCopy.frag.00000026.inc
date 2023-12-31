// GENERATED FILE - DO NOT EDIT.
// Generated by gen_vk_internal_shaders.py.
//
// Copyright 2018 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// shaders/gen/ImageCopy.frag.00000026.inc:
//   Pre-generated shader for the ANGLE Vulkan back-end.

#pragma once
constexpr uint8_t kImageCopy_frag_00000026[] = {
    0x1f,0x8b,0x08,0x00,0x00,0x00,0x00,0x00,0x02,0xff,0x85,0x96,0xd9,0x4f,0x5d,0x55,
    0x14,0xc6,0xcf,0x9d,0x29,0xc8,0x50,0xa0,0x45,0x1a,0xa9,0x76,0x20,0xd1,0x50,0xe1,
    0x26,0x62,0x45,0xb0,0x4d,0xb0,0x62,0xb5,0xa2,0x2d,0x74,0x50,0xe1,0xc1,0xa1,0x44,
    0x5a,0x85,0xaa,0xa0,0xb1,0x8d,0x8d,0x81,0x5a,0x78,0xb0,0x55,0x21,0x86,0x54,0xa3,
    0x90,0x28,0x3c,0x28,0xd8,0x3e,0x98,0xf8,0x64,0x8c,0xd1,0x36,0xb6,0x75,0xf8,0x73,
    0x8c,0x43,0x62,0xe2,0x5e,0xfb,0xfe,0x56,0xf3,0x79,0xa3,0x29,0xc9,0xce,0x39,0xfb,
    0x5b,0xd3,0xf7,0xad,0xbd,0xce,0xbe,0x64,0xd2,0xdb,0x0a,0x49,0x92,0x4a,0x2a,0x93,
    0x8a,0xe4,0xd7,0xa4,0xf4,0xb7,0x3e,0x49,0x07,0x24,0x49,0xaa,0x92,0x7c,0x7c,0xee,
    0xed,0x3f,0xd8,0xdf,0x3e,0xf9,0xda,0x48,0x7b,0xe7,0xbd,0x45,0xb3,0xd7,0x24,0x99,
    0xe8,0x67,0xb6,0xda,0xa4,0x90,0x64,0xc3,0xd3,0xd6,0xf8,0x73,0xc7,0x4f,0x18,0x5e,
    0x1d,0xd6,0xa5,0xb0,0xea,0x82,0x9f,0xe1,0x05,0xcb,0x11,0xde,0xaa,0x63,0x4e,0x8b,
    0x49,0x92,0x47,0x92,0x5c,0xd2,0x40,0xbd,0x6d,0x3c,0x1d,0x4b,0x81,0x55,0x08,0x96,
    0x06,0xab,0x13,0x2c,0x03,0xd6,0x28,0x58,0x16,0xec,0x56,0xc1,0x72,0x60,0xb7,0x09,
    0x96,0x07,0xbb,0x43,0xb0,0x02,0xd8,0x76,0xc1,0x2a,0xc0,0xee,0x14,0x6c,0x1d,0xd8,
    0x0e,0xc1,0x2a,0xc1,0x8a,0x82,0x55,0x81,0x75,0x0a,0x76,0x0b,0x58,0x97,0x60,0xd5,
    0x60,0x0f,0xc4,0x3e,0x65,0x6e,0xe8,0xb5,0x9e,0xed,0x09,0xcf,0xad,0xf4,0xc7,0xf7,
    0x5b,0x64,0x6f,0x7d,0xde,0xcc,0xbe,0x21,0x44,0xa5,0xa3,0x3d,0x13,0x7b,0x63,0xef,
    0x1b,0x82,0x4f,0x1e,0x9d,0xd6,0xd7,0xa6,0xb0,0x2f,0xa0,0xdf,0xec,0x1b,0x83,0x67,
    0x25,0x76,0xb3,0x55,0xa1,0x25,0x1b,0xb1,0x6c,0xe4,0x9b,0x42,0x4b,0x0f,0xfb,0x6a,
    0xc9,0x55,0x83,0xbf,0xd7,0xaa,0x27,0x57,0x12,0x79,0xd5,0xdd,0xe8,0xab,0xd7,0xb4,
    0x55,0x7f,0x93,0xe5,0x3e,0x56,0xbf,0x91,0x7e,0x37,0x50,0xbf,0x31,0xd6,0x29,0x61,
    0x6d,0x68,0xdb,0x08,0x1f,0xf3,0x6f,0xc2,0x56,0x10,0x7b,0x8b,0xe8,0xd9,0x8c,0xbd,
    0x3e,0xce,0x4d,0x3a,0xf6,0xb2,0x0d,0xde,0xde,0x67,0x8f,0x6b,0x63,0x76,0x7c,0xbf,
    0x13,0xed,0xa6,0x7b,0x37,0x39,0x2c,0x6f,0x73,0xc8,0xd8,0xcb,0x3e,0x9d,0xfc,0xfb,
    0x2f,0xc5,0xd3,0x6a,0x3f,0xc8,0x7b,0x2f,0x5a,0x6c,0xbf,0xa7,0xac,0x66,0x5f,0xd9,
    0x7e,0x1f,0x73,0x6e,0xf1,0x8f,0xc1,0x3d,0x0f,0x87,0x27,0x78,0xcf,0x88,0xff,0x20,
    0x1c,0x7c,0x7f,0x44,0xfc,0x9f,0x85,0xa3,0xfa,0x1f,0xa3,0x57,0x66,0x3f,0x8d,0x6f,
    0x56,0xec,0xd3,0x7c,0x03,0xbe,0x3f,0x5f,0xd6,0xfb,0x0b,0xcc,0xb4,0xf1,0xbb,0x48,
    0xee,0xd3,0xe8,0xbb,0xc8,0x3d,0x90,0x89,0xbd,0xcb,0x45,0x5e,0x59,0xf4,0x19,0xf6,
    0x47,0x40,0xac,0xbf,0xbb,0x98,0xbb,0x5a,0xfa,0xbb,0x3f,0x30,0xaa,0xe1,0x5b,0xaf,
    0x65,0x79,0x2f,0x4f,0x30,0xbf,0xeb,0xb1,0xf7,0x86,0x0c,0x4d,0x7c,0xef,0x1b,0x98,
    0x85,0x5d,0xf8,0x34,0x83,0x9f,0x09,0x3e,0xb6,0xdf,0x44,0x5c,0x33,0x71,0x36,0x0b,
    0xb7,0x13,0xd7,0x42,0x9c,0xcf,0xaf,0xe1,0x6b,0xc1,0x67,0x8b,0xdc,0x13,0x36,0x1f,
    0xbf,0x07,0xe6,0xad,0xf0,0xf9,0x2b,0xf8,0xfb,0x7d,0xd1,0x8a,0x1e,0x7b,0x1f,0x08,
    0x71,0x79,0xee,0x8c,0x4d,0xf8,0xbe,0x45,0xbf,0xee,0x02,0x1f,0x0c,0x3b,0xe3,0xf4,
    0x15,0x98,0xfb,0xfd,0x19,0x72,0x78,0x2e,0x7b,0xfe,0x16,0xbc,0xcc,0xef,0x07,0x7c,
    0x72,0xc4,0x6c,0x17,0x0d,0x3b,0xd0,0xd0,0x26,0x1a,0xee,0x06,0x77,0x0d,0xed,0x60,
    0xae,0xa1,0x28,0x1a,0xcc,0xd6,0xc1,0xdd,0x65,0x75,0x3b,0x44,0xc3,0x3d,0xd4,0x4e,
    0x89,0x86,0x4e,0x70,0xd7,0xf0,0x35,0x98,0xfb,0x99,0x06,0xcf,0x55,0x14,0x0d,0x97,
    0xf1,0x69,0x25,0xa6,0x43,0x34,0xdc,0x87,0x86,0x9d,0xa2,0xa1,0x0b,0xdc,0x35,0xdc,
    0x0f,0xe6,0x1a,0x7a,0x44,0x83,0xd9,0xba,0xe3,0xdc,0x95,0xea,0x76,0x33,0x47,0x85,
    0x98,0xaf,0x54,0xfb,0xb2,0x7c,0x8f,0xc6,0xd1,0x7d,0x7b,0x84,0xe3,0x15,0xfc,0x8a,
    0xc4,0x75,0xc3,0xc7,0xbe,0xd9,0x87,0xf8,0x5e,0x7d,0xe6,0x1e,0x86,0x73,0x9f,0xcc,
    0xdc,0x5e,0xf0,0x29,0x66,0xee,0x51,0xb0,0x2b,0xc4,0xd9,0x37,0xdc,0x4f,0xdc,0x3e,
    0xe2,0xac,0xa7,0x8f,0x83,0x7b,0xdf,0xf7,0x13,0x9b,0x08,0x76,0x00,0x2c,0x15,0xdf,
    0xf3,0xf1,0xfb,0x1f,0xc0,0xf7,0x00,0x39,0xbc,0xc6,0x41,0x6a,0x0c,0x4a,0x8d,0x43,
    0xe0,0xcf,0x04,0x66,0x76,0x7f,0x1d,0x46,0xd3,0x00,0x77,0xc6,0x21,0x39,0x8f,0x27,
    0x89,0x3f,0x22,0xe7,0xf1,0x14,0xb8,0x9f,0xc7,0xd3,0x60,0x7e,0x1e,0xc3,0x72,0x1e,
    0x66,0x1b,0x0a,0x6b,0x94,0x1e,0x0f,0xa1,0xa3,0x3e,0xd6,0x2f,0xd5,0xce,0x44,0xee,
    0x15,0xf1,0x5e,0x7a,0x1e,0xec,0xb0,0x7c,0xeb,0x69,0x74,0x9a,0xfd,0x28,0x71,0xbe,
    0xce,0x86,0x5c,0x86,0x8f,0x10,0x7b,0x34,0xe6,0x5a,0x17,0x75,0xbd,0x40,0x9e,0x11,
    0xee,0x9b,0x9c,0xdc,0x93,0x76,0xee,0xc3,0x70,0x1a,0x15,0xbd,0xc7,0xd1,0x7b,0x4c,
    0xf4,0xbe,0x08,0xee,0x7a,0x5f,0x02,0x73,0xbd,0xe3,0xa2,0xd7,0x6c,0x63,0xf6,0x3f,
    0x10,0xb9,0xc7,0x44,0xef,0xcb,0xa2,0xf7,0x4b,0x72,0xbd,0x02,0xbe,0x15,0x4e,0x1e,
    0x37,0xce,0x2c,0x9a,0xcf,0xab,0xd4,0x1c,0xc5,0x7f,0x8c,0xba,0x93,0x52,0xd7,0x7c,
    0x26,0xc2,0x9a,0x24,0x7e,0x42,0xea,0xbe,0xfe,0x1f,0x7d,0x7e,0xe3,0x26,0x7d,0x3e,
    0x49,0x9c,0xaf,0x59,0xfa,0x7c,0x8a,0xd8,0x93,0xd2,0xe7,0x37,0xc9,0x73,0xea,0x7f,
    0xfa,0xec,0x9c,0x26,0xd1,0x64,0x31,0x57,0x89,0x19,0x27,0x7e,0xa2,0xec,0x4c,0x86,
    0xc5,0xf7,0x47,0xce,0x72,0x88,0xb8,0xc9,0xf8,0xdb,0x52,0xfa,0x9d,0x9a,0xc2,0xee,
    0xe7,0x77,0x86,0xf3,0x9b,0x96,0xf3,0x7b,0x1b,0xdc,0xcf,0xef,0x2c,0x98,0x9f,0xdf,
    0xac,0xf4,0xd1,0x6c,0x33,0x61,0x9d,0x83,0xc7,0x0c,0x3a,0xad,0xd6,0x3b,0xd4,0x9b,
    0x42,0x67,0x81,0x9e,0xb9,0xce,0x59,0x62,0xce,0x09,0x9f,0x77,0xe1,0x73,0x5e,0xf8,
    0xbc,0x07,0xee,0x7c,0xde,0x07,0x73,0x3e,0xf3,0xc2,0xc7,0x6c,0x73,0x61,0x2d,0x90,
    0x7b,0x4e,0xee,0x81,0x0f,0xe0,0x92,0xe1,0x0e,0x36,0x8e,0xdf,0x08,0xee,0xf7,0xdb,
    0x3c,0xb1,0x0b,0x72,0x2f,0x7c,0x08,0xaf,0x0b,0x72,0x2f,0x7c,0x04,0x7e,0x95,0xfc,
    0x1f,0x83,0x0d,0x0a,0xd7,0x4f,0xc0,0xfb,0xe0,0xba,0x24,0x5c,0xcd,0xb6,0x18,0xd6,
    0x12,0xf5,0x16,0x85,0xd7,0xb7,0xc4,0x4c,0xc9,0x6f,0x83,0xfb,0x2d,0x71,0xd6,0xe6,
    0x77,0x0d,0x9f,0x05,0x62,0x16,0x85,0xcf,0xa7,0xf0,0x69,0x11,0x3e,0x9f,0x81,0x3b,
    0x9f,0x15,0xe1,0x63,0xb6,0xe5,0xb0,0x56,0xa8,0xb3,0x2c,0x7c,0xbe,0x23,0xe6,0x1a,
    0x67,0x68,0x7c,0xdc,0x6f,0x45,0xf8,0x5c,0xc7,0x67,0x89,0x98,0x65,0xe1,0xf3,0x39,
    0x7c,0xa6,0x85,0xcf,0x17,0xe0,0xce,0x67,0x4d,0xf8,0x98,0x6d,0x35,0xfa,0x96,0xea,
    0xac,0x0a,0x9f,0xef,0xf9,0x9f,0xe5,0xba,0xcc,0x93,0xfb,0xad,0x09,0x9f,0x5f,0xf0,
    0x59,0x21,0x66,0xb5,0xec,0x8c,0xe7,0xc5,0xf7,0x67,0xe6,0x61,0x8e,0xb8,0xb5,0xb2,
    0x39,0x9d,0x15,0xdf,0x9f,0x98,0xef,0x19,0xe2,0x2c,0xcf,0xee,0xc0,0xe4,0x12,0xb6,
    0xbf,0xc3,0xa9,0x75,0x85,0xf5,0x0f,0xfd,0x78,0xb3,0x42,0x28,0x0e,0x00,0x00
};

// Generated from:
//
// #version 450 core
//
// #extension GL_EXT_samplerless_texture_functions : require
//
// layout(set = 0, binding = 0)uniform utexture3D src;
// layout(location = 0)out ivec4 dst;
//
// layout(push_constant)uniform PushConstants {
//
//     ivec2 srcOffset;
//     ivec2 dstOffset;
//     int srcMip;
//     int srcLayer;
//
//     bool flipX;
//     bool flipY;
//
//     bool premultiplyAlpha;
//     bool unmultiplyAlpha;
//
//     bool dstHasLuminance;
//     bool dstIsAlpha;
//
//     bool srcIsSRGB;
//     bool dstIsSRGB;
//
//     int dstDefaultChannelsMask;
//     bool rotateXY;
// } params;
//
// void main()
// {
//     ivec2 dstSubImageCoords = ivec2(gl_FragCoord . xy)- params . dstOffset;
//
//     ivec2 srcSubImageCoords = dstSubImageCoords;
//
//     if(params . flipX)
//     {
//         srcSubImageCoords . x = - srcSubImageCoords . x;
//     }
//     if(params . flipY)
//     {
//         srcSubImageCoords . y = - srcSubImageCoords . y;
//     }
//     if(params . rotateXY)
//     {
//         srcSubImageCoords . xy = srcSubImageCoords . yx;
//     }
//
//           uvec4 srcValue = texelFetch(src, ivec3(params . srcOffset + srcSubImageCoords, params . srcLayer), params . srcMip);
//
//     if(params . premultiplyAlpha)
//     {
//         srcValue . rgb *= srcValue . a;
//     }
//     else if(params . unmultiplyAlpha && srcValue . a > 0)
//     {
//         srcValue . rgb /= srcValue . a;
//     }
//
//            ivec4 dstValue = ivec4(srcValue);
//
//     if(params . dstHasLuminance)
//     {
//         dstValue . rg = dstValue . ra;
//     }
//     else if(params . dstIsAlpha)
//     {
//         dstValue . r = dstValue . a;
//     }
//     else
//     {
//         int defaultChannelsMask = params . dstDefaultChannelsMask;
//         if((defaultChannelsMask & 2)!= 0)
//         {
//             dstValue . g = 0;
//         }
//         if((defaultChannelsMask & 4)!= 0)
//         {
//             dstValue . b = 0;
//         }
//         if((defaultChannelsMask & 8)!= 0)
//         {
//             dstValue . a = 1;
//         }
//     }
//
//     dst = dstValue;
// }
