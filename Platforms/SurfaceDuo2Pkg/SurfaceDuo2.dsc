## @file
#
#  Copyright (c) 2011-2015, ARM Limited. All rights reserved.
#  Copyright (c) 2014, Linaro Limited. All rights reserved.
#  Copyright (c) 2015 - 2016, Intel Corporation. All rights reserved.
#  Copyright (c) 2018, Bingxing Wang. All rights reserved.
#
#  SPDX-License-Identifier: BSD-2-Clause-Patent
#
##

################################################################################
#
# Defines Section - statements that will be processed to create a Makefile.
#
################################################################################
[Defines]
  PLATFORM_NAME                  = SurfaceDuo2
  PLATFORM_GUID                  = b6325ac2-9f3f-4b1d-b129-ac7b35ddde60
  PLATFORM_VERSION               = 0.1
  DSC_SPECIFICATION              = 0x00010005
  OUTPUT_DIRECTORY               = Build/SurfaceDuo2-$(ARCH)
  SUPPORTED_ARCHITECTURES        = AARCH64
  BUILD_TARGETS                  = DEBUG|RELEASE
  SKUID_IDENTIFIER               = DEFAULT
  FLASH_DEFINITION               = SurfaceDuo2Pkg/SurfaceDuo2.fdf

  DEFINE SECURE_BOOT_ENABLE           = TRUE
  DEFINE USE_SCREEN_FOR_SERIAL_OUTPUT = 0
  DEFINE USE_MEMORY_FOR_SERIAL_OUTPUT = 0
  DEFINE SEND_HEARTBEAT_TO_SERIAL     = 0

[PcdsFixedAtBuild.common]
  # Platform-specific
  gArmTokenSpaceGuid.PcdSystemMemoryBase|0x80000000         # 2GB Base
  gArmTokenSpaceGuid.PcdSystemMemorySize|0x200000000        # 8GB Size
  gArmPlatformTokenSpaceGuid.PcdCoreCount|8
  gArmPlatformTokenSpaceGuid.PcdClusterCount|3

  # SMBIOS
  gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdSmbiosSystemModel|"HUAWEI LAHAINA"
  gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdSmbiosSystemRetailModel|"1995"
  gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdSmbiosSystemRetailSku|"H
  gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdSmbiosBoardModel|"HUAWEI LAHAINA"

  # Simple FrameBuffer
  gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdMipiFrameBufferAddress|0xe2200000
  gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdMipiFrameBufferWidth|1224
  gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdMipiFrameBufferHeight|2700
  gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdMipiFrameBufferPixelBpp|32

  # PStore
  gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdPStoreBufferAddress|0x1BFE00000
  gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdPStoreBufferSize|0x00200000

[PcdsDynamicDefault.common]
  gEfiMdeModulePkgTokenSpaceGuid.PcdVideoHorizontalResolution|1224
  gEfiMdeModulePkgTokenSpaceGuid.PcdVideoVerticalResolution|2700
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoHorizontalResolution|1224
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoVerticalResolution|2700
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutRow|158
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutColumn|150

!include SurfaceDuo2Pkg/Sm8350Family.dsc.inc
!include SurfaceDuoFamilyPkg/SurfaceDuoFamily.dsc.inc
!include SurfaceDuoFamilyPkg/Frontpage.dsc.inc
