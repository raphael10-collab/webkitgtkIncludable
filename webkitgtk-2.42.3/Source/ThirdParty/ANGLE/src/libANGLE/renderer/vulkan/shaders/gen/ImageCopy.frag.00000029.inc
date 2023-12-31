// GENERATED FILE - DO NOT EDIT.
// Generated by gen_vk_internal_shaders.py.
//
// Copyright 2018 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// shaders/gen/ImageCopy.frag.00000029.inc:
//   Pre-generated shader for the ANGLE Vulkan back-end.

#pragma once
constexpr uint8_t kImageCopy_frag_00000029[] = {
    0x1f,0x8b,0x08,0x00,0x00,0x00,0x00,0x00,0x02,0xff,0x85,0x96,0xd9,0x4f,0x5d,0x55,
    0x14,0xc6,0xcf,0x9d,0x29,0xc8,0x50,0xa0,0x45,0x1a,0xa9,0x76,0x20,0xd1,0x50,0xe1,
    0x1a,0xb1,0x22,0xd8,0x26,0x58,0xb1,0x5a,0xd1,0x16,0x3a,0xa8,0xf0,0xe0,0x50,0x22,
    0xad,0x42,0x55,0xd0,0xd8,0xc6,0xc4,0x18,0xa9,0x85,0x17,0x5b,0x15,0x62,0x48,0x35,
    0x0a,0x89,0xc2,0x43,0x0b,0xa9,0x0f,0x26,0x3e,0x19,0x63,0xb4,0x04,0x5b,0x87,0x7f,
    0xc6,0x38,0x24,0x26,0xee,0xb5,0xef,0x6f,0x35,0x5f,0x6e,0x34,0x25,0xd9,0x39,0x67,
    0x7f,0x6b,0xfa,0xbe,0xb5,0xd7,0xd9,0xdc,0x4c,0x7a,0x47,0x21,0x49,0x52,0x49,0x65,
    0x52,0x91,0xfc,0x96,0x94,0xfe,0x36,0x26,0xe9,0x80,0x24,0x49,0x55,0x92,0x8f,0xcf,
    0xfd,0xfd,0x87,0xfb,0xdb,0x27,0x5f,0x1f,0x69,0xef,0xbc,0xaf,0x68,0xf6,0x9a,0x24,
    0x13,0xfd,0xcc,0x56,0x9b,0x14,0x92,0x6c,0x78,0xda,0x1a,0x7f,0xfe,0xe4,0x29,0xc3,
    0xab,0xc3,0xfa,0x2a,0xac,0xba,0xe0,0x67,0x78,0xc1,0x72,0x84,0xb7,0xea,0x98,0xd3,
    0x62,0x92,0xe4,0xd1,0x24,0x97,0x34,0x50,0x6f,0x07,0x4f,0xc7,0x52,0x60,0x15,0x82,
    0xa5,0xc1,0xea,0x04,0xcb,0x80,0x35,0x0a,0x96,0x05,0xbb,0x55,0xb0,0x1c,0xd8,0x6d,
    0x82,0xe5,0xc1,0xee,0x10,0xac,0x00,0xb6,0x53,0xb0,0x0a,0xb0,0x3b,0x05,0xdb,0x00,
    0xb6,0x4b,0xb0,0x4a,0xb0,0xa2,0x60,0x55,0x60,0x9d,0x82,0xdd,0x02,0xd6,0x25,0x58,
    0x35,0xd8,0x83,0xb1,0x4f,0x99,0x1b,0x7a,0xad,0x67,0xfb,0xc2,0x73,0x3b,0xfd,0xf1,
    0xfd,0x36,0xd9,0x5b,0x9f,0xb7,0xb2,0x6f,0x08,0x51,0xe9,0x68,0xcf,0xc4,0xde,0xd8,
    0xfb,0xa6,0xe0,0x93,0x47,0xa7,0xf5,0xb5,0x29,0xec,0x0b,0xe8,0x37,0xfb,0xe6,0xe0,
    0x59,0x89,0xdd,0x6c,0x55,0x68,0xc9,0x46,0x2c,0x1b,0xf9,0xa6,0xd0,0xd2,0xc3,0xbe,
    0x5a,0x72,0xd5,0xe0,0xef,0xb5,0xea,0xc9,0x95,0x44,0x5e,0x75,0x37,0xfa,0xea,0x35,
    0x6d,0xd5,0xdf,0x64,0xb9,0x8f,0xd5,0x6f,0xa4,0xdf,0x0d,0xd4,0x6f,0x8c,0x75,0x4a,
    0x58,0x1b,0xda,0x36,0xc3,0xc7,0xfc,0x9b,0xb0,0x15,0xc4,0xde,0x22,0x7a,0xb6,0x62,
    0xaf,0x8f,0x73,0x93,0x8e,0xbd,0x6c,0x83,0xb7,0xf7,0xd9,0xe3,0xda,0x98,0x1d,0xb7,
    0xdf,0x43,0x1d,0xb7,0xef,0xa6,0x17,0xd6,0x87,0xbd,0xe4,0xb4,0x3a,0xcd,0xa1,0x42,
    0x2f,0xfb,0x14,0x39,0xcb,0x9f,0xc6,0xe5,0x21,0xde,0x7b,0xd1,0x66,0xfb,0x7d,0x65,
    0x1c,0xfa,0xca,0xf6,0x07,0x98,0x7b,0x8b,0x7f,0x1c,0x2d,0x79,0x38,0x3c,0xc9,0x7b,
    0x46,0xfc,0x07,0x39,0x1b,0xdf,0x1f,0x13,0xff,0xe7,0xe0,0xa8,0xfe,0x27,0xca,0x7a,
    0x37,0xc5,0x37,0xe0,0xfb,0x0b,0x65,0xbd,0xbf,0xc8,0x4c,0x1b,0x9f,0x2b,0xe4,0xda,
    0x8b,0x9e,0x2b,0xdc,0x03,0x99,0xd8,0xab,0x5c,0xe4,0x91,0x45,0x8f,0x61,0x7f,0x06,
    0xc4,0xfa,0xbb,0x87,0xb9,0xab,0xa5,0x9f,0x07,0x03,0x83,0x1a,0xbe,0xf5,0x5a,0x96,
    0xf7,0xee,0x14,0xf3,0xbb,0x11,0x7b,0x6f,0xc8,0xd0,0xc4,0xf7,0xbe,0x89,0x59,0xd8,
    0x83,0x4f,0x33,0xf8,0xbb,0xc1,0xc7,0xf6,0x5b,0x88,0x6b,0x26,0xce,0x66,0xe1,0x76,
    0xe2,0x5a,0x88,0xf3,0xf9,0x35,0xfc,0x52,0xf0,0xd9,0x26,0xf7,0x84,0xcd,0xc7,0x1f,
    0x81,0x79,0x2b,0x7c,0xfe,0x0e,0xfe,0x7e,0x5f,0xb4,0xa2,0xc7,0xde,0x07,0x42,0x5c,
    0x9e,0x3b,0x63,0x0b,0xbe,0x6f,0xd3,0xaf,0xbb,0xc0,0x07,0xc3,0xce,0x38,0x7d,0x0d,
    0xe6,0x7e,0x7f,0x85,0x1c,0x9e,0xcb,0x9e,0xbf,0x07,0x2f,0xf3,0xfb,0x11,0x9f,0x1c,
    0x31,0x3b,0x45,0xc3,0x2e,0x34,0xb4,0x89,0x86,0xbb,0xc1,0x5d,0x43,0x3b,0x98,0x6b,
    0x28,0x8a,0x06,0xb3,0x75,0x70,0x77,0x59,0xdd,0x0e,0xd1,0x70,0x2f,0xb5,0x53,0xa2,
    0xa1,0x13,0xdc,0x35,0x7c,0x03,0xe6,0x7e,0xa6,0xc1,0x73,0x15,0x45,0xc3,0x55,0x7c,
    0x5a,0x89,0xe9,0x10,0x0d,0xf7,0xa3,0x61,0xb7,0x68,0xe8,0x02,0x77,0x0d,0x0f,0x80,
    0xb9,0x86,0x1e,0xd1,0x60,0xb6,0xee,0x38,0x77,0xa5,0xba,0xdd,0xcc,0x51,0x21,0xe6,
    0x2b,0xd5,0xbe,0x2a,0xdf,0x9f,0x71,0x74,0xdf,0x1e,0xe1,0xb8,0x86,0x5f,0x91,0xb8,
    0x6e,0xf8,0xd8,0x37,0xfa,0x30,0xdf,0xa7,0xcf,0xdc,0x23,0x70,0xee,0x93,0x99,0xdb,
    0x0f,0xfe,0x0e,0x33,0xf7,0x18,0xd8,0x1a,0x71,0xf6,0xcd,0xf6,0x13,0x77,0x80,0x38,
    0xeb,0xe9,0x13,0xe0,0xde,0xf7,0x83,0xc4,0x26,0x82,0x1d,0x02,0x4b,0xc5,0xf7,0x7c,
    0xfc,0xde,0x07,0xf0,0x3d,0x44,0x0e,0xaf,0x71,0x98,0x1a,0x83,0x52,0xe3,0x08,0xf8,
    0xb3,0x81,0x99,0x7d,0xa3,0x47,0xd1,0x34,0xc0,0x1d,0x71,0x44,0xce,0xe3,0x29,0xe2,
    0x8f,0xc9,0x79,0x3c,0x0d,0xee,0xe7,0xf1,0x0c,0x98,0x9f,0xc7,0xb0,0x9c,0x87,0xd9,
    0x86,0xc2,0x1a,0xa5,0xc7,0x43,0xe8,0xa8,0x8f,0xf5,0x4b,0xb5,0x33,0x91,0x7b,0x45,
    0xbc,0x87,0x5e,0x00,0x3b,0x2a,0xdf,0x7a,0x1a,0x9d,0x66,0x3f,0x4e,0x9c,0xaf,0xb3,
    0x21,0x97,0xe1,0x23,0xc4,0x1e,0x8f,0xb9,0x36,0x44,0x5d,0x2f,0x92,0x67,0x84,0xfb,
    0x26,0x27,0xf7,0xa2,0x9d,0xfb,0x30,0x9c,0x46,0x45,0xef,0x49,0xf4,0x9e,0x10,0xbd,
    0x2f,0x81,0xbb,0xde,0x97,0xc1,0x5c,0xef,0xb8,0xe8,0x35,0xdb,0x98,0xfd,0x06,0x22,
    0xf7,0x98,0xe8,0x7d,0x45,0xf4,0x5e,0x26,0xd7,0xab,0xe0,0xdb,0xe1,0xe4,0x71,0xe3,
    0xcc,0xa2,0xf9,0xbc,0x46,0xcd,0x51,0xfc,0xc7,0xa8,0x3b,0x29,0x75,0xcd,0x67,0x22,
    0xac,0x49,0xe2,0x27,0xa4,0xee,0x1b,0xff,0xd1,0xe7,0x37,0x6f,0xd2,0xe7,0xd3,0xc4,
    0xf9,0x3a,0x47,0x9f,0xcf,0x10,0x7b,0x5a,0xfa,0xfc,0x16,0x79,0xce,0xfc,0x4f,0x9f,
    0x9d,0xd3,0x24,0x9a,0x2c,0xe6,0x27,0x62,0xc6,0x89,0x9f,0x28,0x3b,0x93,0x61,0xf1,
    0x5d,0xe7,0x2c,0x87,0x88,0x9b,0x94,0xf3,0x3a,0xcb,0x79,0x4d,0xc9,0x79,0xbd,0x07,
    0xee,0xe7,0x75,0x0e,0xcc,0xcf,0x6b,0x46,0xfa,0x66,0xb6,0xe9,0xb0,0xce,0x53,0x77,
    0x5a,0x74,0xbd,0x4f,0xed,0x75,0x74,0x15,0xe8,0x91,0xeb,0x9a,0x21,0xe6,0xbc,0xf0,
    0xf9,0x00,0x3e,0x17,0x84,0xcf,0x87,0xe0,0xce,0xe7,0x23,0x30,0xe7,0x33,0x27,0x7c,
    0xcc,0x36,0x1b,0xd6,0x3c,0xb9,0x67,0xe5,0x1c,0x3f,0x86,0x4b,0x86,0x3b,0xd7,0x38,
    0x7e,0x2b,0xb8,0xdf,0x67,0x73,0xc4,0xce,0xcb,0x3d,0xf0,0x09,0xbc,0x2e,0xca,0x3d,
    0xf0,0x29,0xf8,0x1a,0xf7,0xca,0x67,0x60,0x83,0xc2,0xf5,0x73,0xf0,0x3e,0xb8,0x2e,
    0x0a,0x57,0xb3,0x2d,0x84,0xb5,0x48,0xbd,0x05,0xe1,0xf5,0x1d,0xfa,0xd6,0xe5,0x7f,
    0x81,0xfb,0x2d,0xca,0xd9,0x5e,0xc3,0x67,0x9e,0x98,0x05,0xe1,0xf3,0x05,0x7c,0x5a,
    0x84,0xcf,0x97,0xe0,0xce,0x67,0x59,0xf8,0x98,0x6d,0x29,0xac,0x65,0xea,0x2c,0x09,
    0x9f,0xef,0xe1,0x73,0x8d,0x33,0x34,0x3e,0xee,0xb7,0x2c,0x7c,0xae,0xe3,0xb3,0x48,
    0xcc,0x92,0xf0,0xb9,0x04,0x9f,0x29,0xe1,0x73,0x19,0xdc,0xf9,0xac,0x0a,0x1f,0xb3,
    0xad,0x84,0xb5,0x4a,0x9d,0x15,0xe1,0xf3,0x03,0xbf,0x23,0xaf,0xcb,0x3c,0xb9,0xdf,
    0xaa,0xf0,0xf9,0x15,0x9f,0x65,0x62,0x56,0xca,0xce,0x78,0x4e,0x7c,0x7f,0x61,0x1e,
    0x66,0x89,0x5b,0x2d,0x9b,0xd3,0x19,0xf1,0xfd,0x99,0xf9,0x9e,0x26,0x6e,0x2e,0xfe,
    0x5e,0xcb,0xc4,0xdf,0x69,0x66,0xfb,0x27,0x9c,0x5a,0x57,0x58,0xff,0x02,0x19,0x82,
    0xa5,0x3d,0x18,0x0e,0x00,0x00
};

// Generated from:
//
// #version 450 core
//
// #extension GL_EXT_samplerless_texture_functions : require
//
// layout(set = 0, binding = 0)uniform utexture2DArray src;
// layout(location = 0)out uvec4 dst;
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
//            uvec4 dstValue = uvec4(srcValue);
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
