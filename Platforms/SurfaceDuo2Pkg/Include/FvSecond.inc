    INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
    INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
    INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
    INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf

    FILE DRIVER = cccb0c28-4b24-11d5-9a5a-0090273fc14d {
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-cccb0c28-4b24-11d5-9a5a-0090273fc14d/section0.pe
            SECTION UI = "GraphicsConsoleDxe"
    }

    # FILE DRIVER = 1b52138d-3fa3-4e50-b958-20887353f809 {
    #         SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-1b52138d-3fa3-4e50-b958-20887353f809/section0.dxe.depex
    #         SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-1b52138d-3fa3-4e50-b958-20887353f809/section1.pe
    #         SECTION UI = "CPRDxe"
    # }

    FILE DRIVER = 569ea0de-b557-4043-84cf-01103fe516e5 {
            SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-569ea0de-b557-4043-84cf-01103fe516e5/section0.dxe.depex
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-569ea0de-b557-4043-84cf-01103fe516e5/section1.pe
            SECTION UI = "GpiDxe"
    }

    FILE DRIVER = 04de8591-d2b3-4077-bbbe-b12070094eb6 {
            SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-04de8591-d2b3-4077-bbbe-b12070094eb6/section0.dxe.depex
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-04de8591-d2b3-4077-bbbe-b12070094eb6/section1.pe
            SECTION UI = "I2C"
    }

    FILE DRIVER = 7a32bd23-f735-4f57-aa1a-447d2fe3be0d {
            SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-7a32bd23-f735-4f57-aa1a-447d2fe3be0d/section0.dxe.depex
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-7a32bd23-f735-4f57-aa1a-447d2fe3be0d/section1.pe
            SECTION UI = "SPI"
    }




    # FILE DRIVER = 7a26d1bd-0557-4b78-8ca1-1e40c7ad9f4d {
    #         SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-7a26d1bd-0557-4b78-8ca1-1e40c7ad9f4d/section0.dxe.depex
    #         SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-7a26d1bd-0557-4b78-8ca1-1e40c7ad9f4d/section1.pe
    #         SECTION UI = "ColorbarsDxe"
    # }

    INF SurfaceDuoFamilyPkg/Driver/ColorbarsDxe/ColorbarsDxe.inf



    INF MdeModulePkg/Universal/TimestampDxe/TimestampDxe.inf

    # INF HidPkg/HidMouseAbsolutePointerDxe/HidMouseAbsolutePointerDxe.inf



    FILE DRIVER = 8681cc5a-0df6-441e-b4b8-e915c538f067 {
            SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-8681cc5a-0df6-441e-b4b8-e915c538f067/section0.dxe.depex
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-8681cc5a-0df6-441e-b4b8-e915c538f067/section1.pe
            SECTION UI = "DALTLMM"
    }

    FILE DRIVER = 1c04f529-0612-4319-9315-b2e75c16810a {
            SECTION PE32 = SurfaceDuo2Pkg/PatchedBinaries/FeatureEnablerDxe.efi
            SECTION UI = "FeatureEnablerDxe"
    }

    FILE DRIVER = 2a0ecdce-01ae-446e-9ffd-c4217de0340f {
            SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-2a0ecdce-01ae-446e-9ffd-c4217de0340f/section0.dxe.depex
            SECTION PE32 = SurfaceDuo2Pkg/PatchedBinaries/MinidumpTADxe.efi
            SECTION UI = "MinidumpTADxe"
    }

    # FILE DRIVER = 4138022f-06c7-4f79-9c94-7e33b511a4e7 {
    #         SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-4138022f-06c7-4f79-9c94-7e33b511a4e7/section0.dxe.depex
    #         SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-4138022f-06c7-4f79-9c94-7e33b511a4e7/section1.pe
    #         SECTION UI = "DisplayDxe"
    # }

    INF SurfaceDuoFamilyPkg/Driver/SimpleFbDxe/SimpleFbDxe.inf
    INF MdeModulePkg/Bus/Pci/PciBusDxe/PciBusDxe.inf

    FILE DRIVER = 5bd181db-0487-4f1a-ae73-820e165611b3 {
            SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-5bd181db-0487-4f1a-ae73-820e165611b3/section0.dxe.depex
            SECTION PE32 = SurfaceDuo2Pkg/PatchedBinaries/ButtonsDxe.efi
            SECTION UI = "ButtonsDxe"
    }

    FILE DRIVER = 2e3042f3-2bb9-463f-8866-56d75b7c4ab0 {
            SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-2e3042f3-2bb9-463f-8866-56d75b7c4ab0/section0.dxe.depex
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-2e3042f3-2bb9-463f-8866-56d75b7c4ab0/section1.pe
            SECTION UI = "ChargerExDxe"
    }

    FILE DRIVER = 42031f68-1f0b-429b-93f1-0eb0cf89ddbf {
            SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-42031f68-1f0b-429b-93f1-0eb0cf89ddbf/section0.dxe.depex
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-42031f68-1f0b-429b-93f1-0eb0cf89ddbf/section1.pe
            SECTION UI = "IPCCDxe"
    }

    FILE DRIVER = 7942a7eb-b7d5-4e2e-b908-831e4de55b58 {
            SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-7942a7eb-b7d5-4e2e-b908-831e4de55b58/section0.dxe.depex
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-7942a7eb-b7d5-4e2e-b908-831e4de55b58/section1.pe
            SECTION UI = "GlinkDxe"
    }

    FILE DRIVER = 6d4a9cf7-cc0c-42b0-aa89-f6a6a8d99273 {
            SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-6d4a9cf7-cc0c-42b0-aa89-f6a6a8d99273/section0.dxe.depex
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-6d4a9cf7-cc0c-42b0-aa89-f6a6a8d99273/section1.pe
            SECTION UI = "PmicGlinkDxe"
    }

    FILE DRIVER = 4bce7f36-428e-4393-99e3-7e0844404dba {
            SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-4bce7f36-428e-4393-99e3-7e0844404dba/section0.dxe.depex
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-4bce7f36-428e-4393-99e3-7e0844404dba/section1.pe
            SECTION UI = "QcomChargerDxeLA"
    }

    FILE DRIVER = 11faed4c-b21f-4d88-8e48-c4c28a1e50df {
            SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-11faed4c-b21f-4d88-8e48-c4c28a1e50df/section0.dxe.depex
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-11faed4c-b21f-4d88-8e48-c4c28a1e50df/section1.pe
            SECTION UI = "UsbPwrCtrlDxe"
    }

    FILE DRIVER = f09ad92e-485c-9cdb-3e05-3385c38f94cc {
            SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-f09ad92e-485c-9cdb-3e05-3385c38f94cc/section0.dxe.depex
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-f09ad92e-485c-9cdb-3e05-3385c38f94cc/section1.pe
            SECTION UI = "TsensDxe"
    }

    FILE DRIVER = 7db0793a-4402-4be1-906e-d0fabad2707e {
            SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-7db0793a-4402-4be1-906e-d0fabad2707e/section0.dxe.depex
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-7db0793a-4402-4be1-906e-d0fabad2707e/section1.pe
            SECTION UI = "DDRInfoDxe"
    }

    FILE DRIVER = 94f8a6a7-dc34-4101-88c1-99179cceae83 {
            SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-94f8a6a7-dc34-4101-88c1-99179cceae83/section0.dxe.depex
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-94f8a6a7-dc34-4101-88c1-99179cceae83/section1.pe
            SECTION UI = "UsbfnDwc3Dxe"
    }

    FILE DRIVER = beb12bee-f6e1-11e1-9fb8-6c626de4aeb1 {
            SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-beb12bee-f6e1-11e1-9fb8-6c626de4aeb1/section0.dxe.depex
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-beb12bee-f6e1-11e1-9fb8-6c626de4aeb1/section1.pe
            SECTION UI = "XhciPciEmulation"
    }

    FILE DRIVER = b7f50e91-a759-412c-ade4-dcd03e7f7c28 {
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-b7f50e91-a759-412c-ade4-dcd03e7f7c28/section0.pe
            SECTION UI = "XhciDxe"
    }

    FILE DRIVER = 240612b7-a063-11d4-9a3a-0090273fc14d {
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-240612b7-a063-11d4-9a3a-0090273fc14d/section0.pe
            SECTION UI = "UsbBusDxe"
    }

    FILE DRIVER = 2d2e62cf-9ecf-43b7-8219-94e7fc713dfe {
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-2d2e62cf-9ecf-43b7-8219-94e7fc713dfe/section0.pe
            SECTION UI = "UsbKbDxe"
    }

    INF MdeModulePkg/Bus/Usb/UsbMouseAbsolutePointerDxe/UsbMouseAbsolutePointerDxe.inf

    FILE DRIVER = 9fb4b4a7-42c0-4bcd-8540-9bcc6711f83e {
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-9fb4b4a7-42c0-4bcd-8540-9bcc6711f83e/section0.pe
            SECTION UI = "UsbMassStorageDxe"
    }

    FILE DRIVER = 5af77f10-90df-4e7e-8325-a17ec09d5443 {
            SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-5af77f10-90df-4e7e-8325-a17ec09d5443/section0.dxe.depex
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-5af77f10-90df-4e7e-8325-a17ec09d5443/section1.pe
            SECTION UI = "UsbMsdDxe"
    }

    FILE DRIVER = 3299a266-15f0-4346-8318-716336736d3e {
            SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-3299a266-15f0-4346-8318-716336736d3e/section0.dxe.depex
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-3299a266-15f0-4346-8318-716336736d3e/section1.pe
            SECTION UI = "UsbDeviceDxe"
    }



    FILE DRIVER = 0a134f0e-075e-40b3-9c63-3b3906804663 {
            SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-0a134f0e-075e-40b3-9c63-3b3906804663/section0.dxe.depex
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-0a134f0e-075e-40b3-9c63-3b3906804663/section1.pe
            SECTION UI = "UsbInitDxe"
    }

    FILE DRIVER = 5f0937cd-73f9-445e-b320-bb6fd5d3cbde {
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-5f0937cd-73f9-445e-b320-bb6fd5d3cbde/section0.pe
            SECTION UI = "UCDxe"
    }

    FILE DRIVER = b0d3689e-11f8-43c6-8ece-023a29cec35b {
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-b0d3689e-11f8-43c6-8ece-023a29cec35b/section0.pe
            SECTION UI = "RngDxe"
    }

    FILE DRIVER = 1d317734-4083-47c6-83ea-e3a42f2a6bff {
            SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-1d317734-4083-47c6-83ea-e3a42f2a6bff/section0.dxe.depex
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-1d317734-4083-47c6-83ea-e3a42f2a6bff/section1.pe
            SECTION UI = "PILDxe"
    }

    FILE DRIVER = 8cf9c920-d5e6-4dac-bef9-6e6a4eec7add {
            SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-8cf9c920-d5e6-4dac-bef9-6e6a4eec7add/section0.dxe.depex
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-8cf9c920-d5e6-4dac-bef9-6e6a4eec7add/section1.pe
            SECTION UI = "PILProxyDxe"
    }

    FILE DRIVER = 5d787b6c-6254-43f5-a7a8-cb25329cf97e {
            SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-5d787b6c-6254-43f5-a7a8-cb25329cf97e/section0.dxe.depex
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-5d787b6c-6254-43f5-a7a8-cb25329cf97e/section1.pe
            SECTION UI = "SPSSDxe"
    }

    FILE DRIVER = e2534a24-1d9a-4a54-aaec-be8836d0f45d {
            SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-e2534a24-1d9a-4a54-aaec-be8836d0f45d/section0.dxe.depex
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-e2534a24-1d9a-4a54-aaec-be8836d0f45d/section1.pe
            SECTION UI = "FvDxe"
    }

    FILE DRIVER = 4a568b8a-4d9d-4984-9c75-cee33698e451 {
            SECTION DXE_DEPEX = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-4a568b8a-4d9d-4984-9c75-cee33698e451/section0.dxe.depex
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-4a568b8a-4d9d-4984-9c75-cee33698e451/section1.pe
            SECTION UI = "ParserDxe"
    }

    FILE APPLICATION = eee9c2b1-16ca-4f34-87ea-2e6d1e160cc4 {
            SECTION UI = "QcomChargerApp"
            SECTION PE32 = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-eee9c2b1-16ca-4f34-87ea-2e6d1e160cc4/section1.pe
    }




    FILE FREEFORM = a91d838e-a5fa-4138-825d-455e23030794 {
            SECTION UI = "logo1.bmp"
            SECTION RAW = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-a91d838e-a5fa-4138-825d-455e23030794/section1.raw
    }

    FILE FREEFORM = 5d3485f0-3c38-4b8b-b1ef-d5d7057708d2 {
            SECTION UI = "uilogo.bmp"
            SECTION RAW = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-5d3485f0-3c38-4b8b-b1ef-d5d7057708d2/section1.raw
    }

    FILE FREEFORM = 21e9bdd9-6c3f-4f10-84a5-bbec322741f1 {
            SECTION UI = "uefipil.cfg"
            SECTION RAW = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-21e9bdd9-6c3f-4f10-84a5-bbec322741f1/section1.raw
    }

    FILE FREEFORM = 45fe4b7c-150c-45da-a021-4beb2048ec6f {
            SECTION UI = "QcomChargerCfg.cfg"
            SECTION RAW = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-45fe4b7c-150c-45da-a021-4beb2048ec6f/section1.raw
    }

    FILE FREEFORM = f780c779-dd7c-47cd-bd1a-5eb414c51704 {
            SECTION UI = "BATTERY.PROVISION"
            SECTION RAW = SurfaceDuoBinaries/BOOT.MXF.1.0-00872-LAHAINA-2/volume-0/file-2/section0/section1/volume-0/file-f780c779-dd7c-47cd-bd1a-5eb414c51704/section1.raw
    }
