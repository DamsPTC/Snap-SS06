/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100be846c; end: 100be871b;  */

void FUN_100be846c(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  if ((*(byte *)(unaff_x20 + 0x28) & 1) == 0) {
    uStack_68 = param_1;
    func_0x000107c61434();
    FUN_100be871c();
    if (param_1 >> 0x3e == 0) {
      uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
      puVar4 = PTR___ss11AnyHashableVN_11034e448;
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar9 = param_1 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_1) {
        uVar9 = param_1;
      }
      func_0x000107c60480();
      puVar4 = PTR___ss11AnyHashableVN_11034e448;
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___ss11AnyHashableVN_11034e448 = puVar4;
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
    if (uVar9 != 0) {
      uVar11 = 0;
      do {
        uVar10 = 0x112df9008;
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100be8624);
            (*pcVar1)();
          }
          uVar2 = *(ulong *)(param_1 + uVar11 * 8 + 0x20);
          func_0x000107c615f0();
        }
        else {
          uVar2 = uVar11;
          func_0x000103dbfdc8(uVar11,param_1);
        }
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100be8620);
          (*pcVar1)();
        }
        uVar12 = uVar11 + 1;
        uStack_90 = uVar2;
        func_0x0001000285a8(0x112df9008,&UNK_10dc93ca0);
        puVar3 = &uStack_c0;
        func_0x000107c6147c(puVar3,&uStack_90,uVar10,puVar4,6);
        if (((ulong)puVar3 & 1) == 0) {
          uStack_a0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          lStack_a8 = 0;
          uStack_b0 = 0;
LAB_100be84fc:
          func_0x000100a119cc(&uStack_c0);
        }
        else {
          if (lStack_a8 == 0) goto LAB_100be84fc;
          uStack_88 = uStack_b8;
          uStack_90 = uStack_c0;
          lStack_78 = lStack_a8;
          uStack_80 = uStack_b0;
          uStack_70 = uStack_a0;
          puVar4 = puVar6;
          func_0x000107c61558();
          puVar5 = puVar6;
          if (((ulong)puVar4 & 1) == 0) {
            puVar5 = (undefined *)0x0;
            FUN_100beb08c(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
          }
          uVar2 = *(ulong *)(puVar5 + 0x10);
          puVar6 = puVar5;
          if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
            puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
            FUN_100beb08c(puVar6,uVar2 + 1,1,puVar5);
          }
          *(ulong *)(puVar6 + 0x10) = uVar2 + 1;
          *(undefined8 *)(puVar6 + uVar2 * 0x28 + 0x40) = uStack_70;
          *(undefined8 *)(puVar6 + uVar2 * 0x28 + 0x28) = uStack_88;
          *(ulong *)(puVar6 + uVar2 * 0x28 + 0x20) = uStack_90;
          *(long *)(puVar6 + uVar2 * 0x28 + 0x38) = lStack_78;
          *(undefined8 *)(puVar6 + uVar2 * 0x28 + 0x30) = uStack_80;
          puVar4 = PTR___ss11AnyHashableVN_11034e448;
        }
        uVar11 = uVar11 + 1;
      } while (uVar12 != uVar9);
    }
    func_0x000107c6142c(param_1);
    FUN_100bf13dc(puVar6);
    func_0x000107c6142c(puVar6);
    uVar9 = uStack_68;
    uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
    *(ulong *)(unaff_x20 + 0x30) = uStack_68;
    func_0x000107c61434(uStack_68);
    func_0x000107c6142c(uVar10);
    lVar7 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c3ffac();
    func_0x000107c61180();
    lVar8 = lVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar8 == 0) {
      func_0x000107c6142c(uVar9);
    }
    else {
      uVar11 = uVar9;
      func_0x000107c5fe08(uVar9,PTR___ss11AnyHashableVN_11034e448,
                          PTR___ss11AnyHashableVSHsWP_11034e450);
      func_0x000107c4fc30(lVar8);
      func_0x000107c6142c(uVar9);
      func_0x000107c615e8(lVar8);
      func_0x000107c61170(uVar11);
    }
  }
  return;
}



/* Entry: 100be871c; end: 100be885b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100be871c(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uStack_61;
  long lStack_60;
  long lStack_58;
  
  lVar7 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uStack_61 = *(undefined1 *)(lVar7 + 0x11300b668);
    func_0x00010008a7c8(&lStack_60,&uStack_61);
    lVar2 = lStack_60;
    if (lStack_60 != 0) {
      func_0x000100083b20(&lStack_58);
      func_0x000107c61574(lVar2);
      lVar2 = lStack_58;
      if (lStack_58 != 0) {
        puVar4 = puVar5;
        func_0x000107c61550();
        if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
           (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar5 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar5) {
              puVar3 = puVar5;
            }
            func_0x000107c60480(puVar3);
          }
          puVar4 = (undefined *)0x0;
          FUN_100be8df8(0,puVar3 + 1,1,puVar5);
        }
        uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar6 + 0x10);
        puVar5 = puVar4;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
          FUN_100be8df8(puVar5,uVar1 + 1,1,puVar4);
          uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
        *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar2;
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 10);
  return puVar5;
}



/* Entry: 100be885c; end: 100be89cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_100be885c(undefined **param_1,undefined1 *param_2,undefined **param_3,undefined **param_4,
             undefined *param_5,undefined **param_6,undefined *param_7,undefined **param_8,
             undefined **param_9,undefined8 param_10,undefined **param_11,undefined **param_12,
             undefined **param_13,undefined **param_14)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  char *pcVar10;
  undefined **unaff_x20;
  long lVar11;
  undefined **unaff_x21;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined8 unaff_x30;
  undefined1 auStack_80 [16];
  
  puVar4 = &stack0xffffffffffffffe0;
  puVar5 = &stack0xffffffffffffffe0;
  puVar6 = &stack0xffffffffffffffe0;
  puVar7 = &stack0xffffffffffffffe0;
  ppuVar8 = (undefined **)&stack0xffffffffffffffe0;
  ppuVar9 = (undefined **)&stack0xffffffffffffffe0;
  pcVar10 = (char *)param_13;
  ppuVar3 = unaff_x21;
  switch(*param_2) {
  default:
    param_13 = param_3;
    param_3 = param_4;
  case 0x4b:
  case 0x53:
  case 0x5b:
  case 99:
  case 0x6b:
  case 0x7b:
    FUN_100be8a0c(param_13,param_3,param_5);
    unaff_x20 = param_13;
  case 0x73:
  case 0x83:
    pcVar10 = "SCComposerEncryptedImageDownloaderPluginProvider";
    param_3 = (undefined **)0x30;
    break;
  case 1:
    FUN_100be9110();
    param_13 = param_4;
  case 0x3c:
    unaff_x20 = param_13;
  case 0x14:
  case 0x1c:
    pcVar10 = "SCComposerEncryptedThumbnailDownloaderPluginProvider";
  case 0x58:
  case 0x68:
    param_3 = (undefined **)0x34;
    break;
  case 2:
    FUN_100be9288(param_6,param_7);
    pcVar10 = "SCComposerLensIconDownloaderPluginProvider";
    param_13 = param_6;
    goto code_r0x000100be8904;
  case 3:
    param_13 = param_8;
  case 0x30:
    FUN_100be9500();
    pcVar10 = "SCComposerLensImageDownloaderPluginProvider";
    param_3 = (undefined **)0x2b;
    unaff_x20 = param_13;
    break;
  case 4:
    func_0x000100be9604();
    pcVar10 = "SCComposerMediaCameraRollDownloaderPluginProvider";
    param_3 = (undefined **)0x31;
    unaff_x20 = param_13;
    break;
  case 5:
    FUN_100be9724();
    pcVar10 = "SCComposerRemoteImageDownloaderPluginProvider";
    param_3 = (undefined **)0x2d;
    unaff_x20 = param_4;
  case 0x24:
  case 0x34:
    break;
  case 6:
    FUN_100be9750();
  case 0x2c:
    pcVar10 = "SCPlusAppIconImageLoaderPluginProvider";
    param_3 = (undefined **)0x26;
    unaff_x20 = param_13;
    break;
  case 7:
    FUN_100be986c(param_9,param_10);
    param_13 = (undefined **)0x10eff5000;
    unaff_x20 = param_9;
  case 0x78:
    pcVar10 = (char *)(param_13 + 0x1a6);
    param_3 = (undefined **)0x26;
    break;
  case 8:
    param_13 = param_11;
    param_3 = param_12;
  case 0x72:
  case 0x82:
    FUN_100be9ad0(param_13,param_3);
    pcVar10 = "SnapEditorMusicDataLoaderPluginProvider";
    param_3 = (undefined **)0x27;
    unaff_x20 = param_13;
    break;
  case 9:
    FUN_100be9f0c(param_13,param_14);
    pcVar10 = "SnapEditorStickerImageLoaderPluginProvider";
code_r0x000100be8904:
    param_3 = (undefined **)0x2a;
    unaff_x20 = param_13;
    break;
  case 0x11:
  case 0x19:
  case 0x21:
  case 0x29:
    return param_13;
  case 0x12:
  case 0x1a:
  case 0x22:
  case 0x2a:
  case 0x32:
  case 0x3a:
    param_1 = (undefined **)0x1137f9fd8;
    if (lRam00000001137f9fd8 != 0) goto code_r0x000100be8cb0;
    param_4 = &PTR____CFConstantStringClassReference_110f84718;
    param_5 = &UNK_10e5dc83c;
    param_6 = (undefined **)&UNK_10e5dc854;
    param_13 = (undefined **)PTR_PTR_1126ae980;
  case 0x71:
  case 0x81:
    func_0x000107c3dbd4(param_13,param_3,param_4,param_5,param_6,3,&UNK_10b7db268,0);
    do {
      if (*param_1 != (undefined *)0x0) {
        ClearExclusiveLocal();
        func_0x000107c61170();
        break;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = (undefined *)param_13;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
code_r0x000100be8cb0:
    return (undefined **)*param_1;
  case 0x28:
    return param_13;
  case 0x31:
  case 0x39:
    return param_13;
  case 0x38:
  case 0x9e:
  case 0xbe:
  case 0xde:
  case 0xfe:
    param_3 = (undefined **)unaff_x20[2];
    param_4 = (undefined **)unaff_x20[3];
    param_5 = unaff_x20[4];
    param_6 = (undefined **)unaff_x20[5];
  case 0xa4:
  case 0xe4:
    param_7 = unaff_x20[6];
    param_8 = (undefined **)unaff_x20[7];
  case 0x88:
  case 0x91:
  case 0xab:
  case 200:
  case 0xd1:
  case 0xeb:
    param_9 = (undefined **)unaff_x20[8];
  case 0x95:
  case 0xd5:
    FUN_100be885c(param_13,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    return param_13;
  case 0x48:
  case 0x49:
  case 0x59:
  case 0x69:
  case 0x79:
  case 0xb0:
  case 0xf0:
code_r0x000100be89bc:
    *param_1 = (undefined *)unaff_x20;
    return param_13;
  case 0x4e:
  case 0x5e:
  case 0x6e:
  case 0x7e:
    return param_13;
  case 0x51:
  case 0x61:
    goto code_r0x000100be89b8;
  case 0x5c:
    return param_13;
  case 0x6c:
    param_4 = (undefined **)unaff_x20[4];
    puVar4 = auStack_80;
  case 0x50:
  case 0x60:
    *(undefined ***)(puVar4 + 0x20) = unaff_x24;
    *(undefined ***)(puVar4 + 0x28) = unaff_x23;
    *(undefined ***)(puVar4 + 0x30) = unaff_x22;
    *(undefined ***)(puVar4 + 0x38) = unaff_x21;
    *(undefined ***)(puVar4 + 0x40) = unaff_x20;
    *(undefined ***)(puVar4 + 0x48) = param_1;
    *(undefined1 **)(puVar4 + 0x50) = &stack0xfffffffffffffff0;
    *(undefined8 *)(puVar4 + 0x58) = unaff_x30;
    puVar5 = puVar4;
    param_1 = param_14;
  case 0x18:
    func_0x000100083b20(puVar5 + 8,param_13,param_3,param_4);
    unaff_x21 = *(undefined ***)(puVar5 + 8);
    unaff_x22 = unaff_x21;
    func_0x000107c40430(unaff_x21);
    func_0x000107c61180();
    unaff_x23 = unaff_x21;
    func_0x000107c5b034(unaff_x21);
    func_0x000107c61180();
    param_14 = (undefined **)(puVar5 + 8);
    puVar6 = puVar5;
  case 0x70:
    func_0x000100083b20(param_14);
    unaff_x20 = *(undefined ***)(puVar6 + 8);
    param_14 = (undefined **)&DAT_11307d3e0;
    puVar7 = puVar6;
  case 0x4c:
    param_13 = *(undefined ***)((long)unaff_x20 + (long)*param_14);
    ppuVar8 = (undefined **)puVar7;
    unaff_x25 = param_13;
  case 0x4a:
  case 0x52:
  case 0x5a:
  case 0x62:
  case 0x6a:
  case 0x7a:
    func_0x000107c615f0(param_13);
    func_0x000107c61170(unaff_x20);
    ppuVar9 = ppuVar8;
    param_14 = ppuVar8;
  case 0x7c:
    func_0x000100083b20(param_14);
    lVar11 = (long)*ppuVar9;
    unaff_x24 = *(undefined ***)(lVar11 + _DAT_113092298);
    func_0x000107c615f0(unaff_x24);
    func_0x000107c61170(lVar11);
    param_13 = (undefined **)PTR_PTR_1126a88d0;
  case 0x20:
  case 0x80:
    func_0x000107c610f8();
    func_0x000107c460bc();
    func_0x000107c61170(unaff_x21);
    func_0x000107c61170(unaff_x22);
    func_0x000107c61170(unaff_x23);
    func_0x000107c615e8(unaff_x25);
    func_0x000107c615e8(unaff_x24);
    *param_1 = (undefined *)param_13;
    return unaff_x24;
  case 0x93:
  case 0x9b:
  case 0xa0:
  case 0xa8:
  case 0xb5:
  case 0xb9:
  case 0xd3:
  case 0xdb:
  case 0xe0:
  case 0xe8:
  case 0xf5:
  case 0xf9:
  case 0x99:
  case 0xd9:
    param_1 = param_4;
  case 0xac:
  case 0xec:
    unaff_x20 = param_3;
  case 0x90:
  case 0xd0:
    unaff_x21 = param_13;
  case 0x8f:
  case 0xa2:
  case 0xa5:
  case 0xa7:
  case 0xaa:
  case 0xaf:
  case 0xcf:
  case 0xe2:
  case 0xe5:
  case 0xe7:
  case 0xea:
  case 0xef:
    param_13 = (undefined **)0x112df8ec0;
  case 0xc1:
    param_3 = (undefined **)&UNK_10d9c9000;
  case 0x10:
  case 0x96:
  case 0xd6:
    param_3 = param_3 + 0xae;
  case 0x9c:
  case 0xb2:
  case 0xb4:
  case 0xb7:
  case 0xbb:
  case 0xc2:
  case 0xdc:
  case 0xf2:
  case 0xf4:
  case 0xf7:
  case 0xfb:
    func_0x0001000285a8(param_13,param_3);
    param_13 = (undefined **)&UNK_11043d000;
  case 0x4d:
  case 0x5d:
  case 0x6d:
  case 0x7d:
  case 0x9d:
  case 0x9f:
  case 0xa6:
  case 0xb6:
  case 0xbf:
  case 0xdd:
  case 0xdf:
  case 0xe6:
  case 0xf6:
  case 0xff:
    param_13 = param_13 + 0x1c2;
  case 0x98:
  case 0xd8:
    param_3 = (undefined **)0x28;
  case 0x8b:
  case 0x92:
  case 0x9a:
  case 0xb1:
  case 0xbd:
  case 0xc3:
  case 0xcb:
  case 0xd2:
  case 0xda:
  case 0xf1:
  case 0xfd:
    param_4 = (undefined **)0x7;
  case 0x8a:
  case 0x8d:
  case 0xad:
  case 0xbc:
  case 0xca:
  case 0xcd:
  case 0xed:
  case 0xfc:
    func_0x000107c613fc(param_13,param_3,param_4);
  case 0x89:
  case 0x94:
  case 0xae:
  case 0xc9:
  case 0xd4:
  case 0xee:
    param_13[2] = (undefined *)unaff_x21;
    param_13[3] = (undefined *)unaff_x20;
    unaff_x23 = param_13;
  case 0x8e:
  case 0xa3:
  case 0xce:
  case 0xe3:
    param_13[4] = (undefined *)param_1;
    ppuVar3 = unaff_x21;
  case 0x8c:
  case 0xa9:
  case 0xcc:
  case 0xe9:
    param_13 = ppuVar3;
  case 0xb3:
  case 0xba:
  case 0xf3:
  case 0xfa:
    func_0x000107c6157c(param_13);
  case 0x97:
  case 0xc0:
  case 0xd7:
    func_0x000107c6157c(unaff_x20);
    func_0x000107c6157c(param_1);
  case 0xa1:
  case 0xe1:
    param_13 = (undefined **)&UNK_100be8000;
  case 0xb8:
  case 0xf8:
    param_13 = (undefined **)((long)param_13 + 0xaa4);
    func_0x0001000823a8(param_13,unaff_x23);
    return param_13;
  }
  param_4 = (undefined **)0x2;
  param_13 = (undefined **)pcVar10;
code_r0x000100be89b8:
  func_0x000100082720(param_13,param_3,param_4);
  goto code_r0x000100be89bc;
}



/* Entry: 100be89cc; end: 100be8a0b;  */

void FUN_100be89cc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100be885c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 100be8a0c; end: 100be8aa3;  */

void FUN_100be8a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112df8ec0,&UNK_10d9c9570);
  puVar1 = &UNK_11043de10;
  func_0x000107c613fc(&UNK_11043de10,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_100be8aa4,puVar1);
  return;
}



/* Entry: 100be8aa4; end: 100be8aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100be8aa4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_60;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = lStack_58;
  lVar2 = lStack_58;
  func_0x000107c40430(lStack_58);
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c5b034(lVar1);
  func_0x000107c61180();
  func_0x000100083b20(&lStack_58);
  uVar6 = *(undefined8 *)(lStack_58 + _DAT_11307d3e0);
  func_0x000107c615f0(uVar6);
  func_0x000107c61170(lStack_58);
  func_0x000100083b20(&lStack_60);
  uVar5 = *(undefined8 *)(lStack_60 + _DAT_113092298);
  func_0x000107c615f0(uVar5);
  func_0x000107c61170(lStack_60);
  puVar4 = PTR_PTR_1126a88d0;
  func_0x000107c610f8();
  func_0x000107c460bc();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c615e8(uVar6);
  func_0x000107c615e8(uVar5);
  *param_1 = puVar4;
  return;
}



/* Entry: 100be8ab0; end: 100be8bdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100be8ab0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_60;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  lVar2 = lStack_58;
  func_0x000107c40430(lStack_58);
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c5b034(lVar1);
  func_0x000107c61180();
  func_0x000100083b20(&lStack_58);
  uVar6 = *(undefined8 *)(lStack_58 + _DAT_11307d3e0);
  func_0x000107c615f0(uVar6);
  func_0x000107c61170(lStack_58);
  func_0x000100083b20(&lStack_60);
  uVar5 = *(undefined8 *)(lStack_60 + _DAT_113092298);
  func_0x000107c615f0(uVar5);
  func_0x000107c61170(lStack_60);
  puVar4 = PTR_PTR_1126a88d0;
  func_0x000107c610f8();
  func_0x000107c460bc();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c615e8(uVar6);
  func_0x000107c615e8(uVar5);
  *param_1 = puVar4;
  return;
}



/* Entry: 100be8bdc; end: 100be8cbf; +[SCULUnlockablesSnapInfo descriptor] */

void FUN_100be8bdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9ff8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd4b90,
                        &PTR____CFConstantStringClassReference_110f84738,&PTR_DAT_1133e28c0,
                        &PTR_DAT_1133e29d8,6,0x30,0x1c);
    puRam00000001137f9ff8 = puVar1;
  }
  return;
}



/* Entry: 100be8cc0; end: 100be8dc3; -[SCComposerEncryptedImageDownloader initWithContentDelivery:simpleContentFetcher:imageFetchingService:appStartExperimentReader:] */

undefined1 *
FUN_100be8cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126e9c20;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    uVar2 = param_6;
    func_0x000107c3ebd4();
    *(char *)((long)puVar1 + 0x20) = (char)uVar2;
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100be8dc4; end: 100be8df7;  */

void FUN_100be8dc4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100be8df8; end: 100be8f1f;  */

ulong FUN_100be8df8(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100be8f20);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_100be8f34(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100be8f1c);
      (*pcVar1)();
    }
    FUN_100be8fec(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 100be8f20; end: 100be8f33;  */

void FUN_100be8f20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df9010 == (undefined *)0x0 || ((ulong)puRam0000000112df9010 & 1) != 0) {
    puVar1 = &UNK_10e897a32;
    func_0x000107c61518(&UNK_10e897a32,0x1f,0,0);
    puRam0000000112df9010 = puVar1;
  }
  return;
}



/* Entry: 100be8f34; end: 100be8fb3;  */

undefined * FUN_100be8f34(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_100be8f20();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 100be8fb4; end: 100be8feb; -[SCConversationSnapMetadataBuilder withAppliedLensIds:] */

long FUN_100be8fb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100be8fec; end: 100be910f;  */

long FUN_100be8fec(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100be910c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100be9110);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112df9008;
        func_0x0001000285a8(0x112df9008,&UNK_10dc93ca0);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112df9008;
      func_0x0001000285a8(0x112df9008,&UNK_10dc93ca0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100be9108);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 100be9110; end: 100be911b;  */

void FUN_100be9110(undefined8 param_1)

{
  func_0x0001000285a8(0x112df8ec0,&UNK_10d9c9570);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_100be91f4,param_1);
  return;
}



/* Entry: 100be911c; end: 100be91f3;  */

void FUN_100be911c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112df8ec0,&UNK_10d9c9570);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 100be91f4; end: 100be9213;  */

void FUN_100be91f4(void)

{
  func_0x000100be9174();
  return;
}



/* Entry: 100be9214; end: 100be9287; -[SCComposerSnapImageDownloader initWithImageFetchingService:] */

undefined1 * FUN_100be9214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e9c58;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100be9288; end: 100be9307;  */

void FUN_100be9288(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112df8ec0,&UNK_10d9c9570);
  puVar1 = &UNK_11043de38;
  func_0x000107c613fc(&UNK_11043de38,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_100be9308,puVar1);
  return;
}



/* Entry: 100be9308; end: 100be930f;  */

void FUN_100be9308(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar1 = uStack_38;
  func_0x000107c3f770(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000100083b20(&uStack_40);
  uVar2 = uStack_40;
  func_0x000107c4b1cc(uStack_40);
  func_0x000107c61180();
  func_0x000107c61170(uStack_40);
  puVar3 = PTR_PTR_1126a88c0;
  func_0x000107c610f8();
  func_0x000107c45440();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 100be9310; end: 100be93c7;  */

void FUN_100be9310(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c3f770(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000100083b20(&uStack_40);
  uVar2 = uStack_40;
  func_0x000107c4b1cc(uStack_40);
  func_0x000107c61180();
  func_0x000107c61170(uStack_40);
  puVar3 = PTR_PTR_1126a88c0;
  func_0x000107c610f8();
  func_0x000107c45440();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 100be93c8; end: 100be942f; +[SDMAttachments descriptor] */

void FUN_100be93c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8198 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca9ee0,
                        &PTR____CFConstantStringClassReference_110f738b8,&PTR_DAT_1133bfd70,
                        &PTR_DAT_1133bfd88,3,0x20,0x1c);
    puRam00000001137f8198 = puVar1;
  }
  return;
}



/* Entry: 100be9430; end: 100be94d3; -[SCComposerLensIconDownloader initLensMetadataProvider:lensIconRepository:] */

undefined1 *
FUN_100be9430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e9c38;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100be94d4; end: 100be94ff;  */

void FUN_100be94d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100be9500; end: 100be9513;  */

void FUN_100be9500(undefined8 param_1)

{
  func_0x0001000285a8(0x112df8ec0,&UNK_10d9c9570);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x100be950c,param_1);
  return;
}



/* Entry: 100be9514; end: 100be958f;  */

void FUN_100be9514(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4b028(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  puVar2 = PTR_PTR_1126a88c8;
  func_0x000107c610f8();
  func_0x000107c47220();
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 100be9590; end: 100be9673; -[SCComposerLensImageDownloader initWithLensContentFetcher:] */

undefined1 * FUN_100be9590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e9c48;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100be9674; end: 100be9723; -[SCComposerMediaCameraRollDownloader init] */

undefined1 * FUN_100be9674(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6ee8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = 0;
    func_0x000107c60f4c(0,0x19,0);
    func_0x000107c61180();
    puVar3 = &UNK_10f3d83eb;
    func_0x000107c60f50(&UNK_10f3d83eb,uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100be9724; end: 100be972f;  */

void FUN_100be9724(undefined8 param_1)

{
  func_0x0001000285a8(0x112df8ec0,&UNK_10d9c9570);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_100be9730,param_1);
  return;
}



/* Entry: 100be9730; end: 100be974f;  */

void FUN_100be9730(void)

{
  func_0x000100be9174();
  return;
}



/* Entry: 100be9750; end: 100be97d7;  */

void FUN_100be9750(void)

{
  func_0x0001000285a8(0x112df8ec0,&UNK_10d9c9570);
  func_0x0001000823a8(FUN_100be97f8,0);
  return;
}



/* Entry: 100be97d8; end: 100be97f7;  */

void FUN_100be97d8(void)

{
  func_0x000107c61168(&PTR_PTR_1127f4400);
  return;
}



/* Entry: 100be97f8; end: 100be9827;  */

void FUN_100be97f8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100be97d8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 100be9828; end: 100be982f; -[_TtC24SCPlusAppIconImageLoader24SCPlusAppIconImageLoader init] */

void FUN_100be9828(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100be9830; end: 100be986b;  */

void FUN_100be9830(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100be986c; end: 100be98eb;  */

void FUN_100be986c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112df8ec0,&UNK_10d9c9570);
  puVar1 = &UNK_11045d1a8;
  func_0x000107c613fc(&UNK_11045d1a8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_100be98ec,puVar1);
  return;
}



/* Entry: 100be98ec; end: 100be98f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100be98ec(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  lVar3 = lStack_48;
  uVar2 = 0x112e0bda8;
  func_0x0001000285a8(0x112e0bda8,&UNK_10d9e5488);
  func_0x000107c610f8();
  func_0x0001003b3b80(lVar3);
  puVar4 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar3);
  func_0x000100083b20(&lStack_48);
  uVar5 = *(undefined8 *)(lStack_48 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  uVar6 = uVar5;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  uVar5 = uVar6;
  func_0x000107c5faec();
  func_0x000107c61170(uVar6);
  lVar7 = 0;
  FUN_100be9a34();
  lVar3 = lVar7;
  func_0x000107c610f8();
  *(undefined **)(lVar3 + _DAT_112e0bcf0) = puVar4;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112e0bcf8);
  *puVar1 = uVar5;
  puVar1[1] = uVar2;
  plVar8 = &lStack_58;
  lStack_58 = lVar3;
  lStack_50 = lVar7;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 100be98f4; end: 100be9a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100be98f4(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar3 = lStack_48;
  uVar2 = 0x112e0bda8;
  func_0x0001000285a8(0x112e0bda8,&UNK_10d9e5488);
  func_0x000107c610f8();
  func_0x0001003b3b80(lVar3);
  puVar4 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar3);
  func_0x000100083b20(&lStack_48);
  uVar5 = *(undefined8 *)(lStack_48 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  uVar6 = uVar5;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  uVar5 = uVar6;
  func_0x000107c5faec();
  func_0x000107c61170(uVar6);
  lVar7 = 0;
  FUN_100be9a34();
  lVar3 = lVar7;
  func_0x000107c610f8();
  *(undefined **)(lVar3 + _DAT_112e0bcf0) = puVar4;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112e0bcf8);
  *puVar1 = uVar5;
  puVar1[1] = uVar2;
  plVar8 = &lStack_58;
  lStack_58 = lVar3;
  lStack_50 = lVar7;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 100be9a30; end: 100be9a33;  */

void FUN_100be9a30(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100be9a34; end: 100be9a53;  */

void FUN_100be9a34(void)

{
  func_0x000107c61168(&PTR_PTR_1127fccc0);
  return;
}



/* Entry: 100be9a54; end: 100be9aa3; -[SCConversationSnapMetadataBuilder build] */

void FUN_100be9a54(void)

{
  func_0x000107c610f4(PTR_PTR_1126e0418);
  func_0x000107c47870();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100be9aa4; end: 100be9acf;  */

void FUN_100be9aa4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100be9ad0; end: 100be9bc3;  */

void FUN_100be9ad0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112df8ec0,&UNK_10d9c9570);
  puVar1 = &UNK_11043e278;
  func_0x000107c613fc(&UNK_11043e278,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x100be9b50,puVar1);
  return;
}



/* Entry: 100be9bc4; end: 100be9be3;  */

void FUN_100be9bc4(void)

{
  func_0x000107c61168(&PTR_PTR_1127f3638);
  return;
}



/* Entry: 100be9be4; end: 100be9db3; -[SCConversationSnapMetadata initWithMultiSnapMetadata:contextHint:lensId:appliedLensIds:lensMetadata:filterId:encGeoData:unlockablesSnapInfo:sendSource:] */

undefined1 *
FUN_100be9be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  puStack_68 = PTR_PTR_112706d08;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_9;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_10;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
  }
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100be9db4; end: 100be9e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100be9db4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11303ff58);
  *(undefined8 *)(unaff_x20 + _DAT_112df9018) = uVar3;
  uVar4 = *(undefined8 *)(param_1 + _DAT_11303ff40);
  *(undefined8 *)(unaff_x20 + _DAT_112df9020) = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112df9028) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c61154(&stack0xffffffffffffffc0,puVar1);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 100be9e68; end: 100be9e93;  */

void FUN_100be9e68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100be9e94; end: 100be9f0b; -[SCConversationSnapMetadataBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100be9eac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100be9ec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100be9edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100be9ef4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100be9ee0) */
/* WARNING: Removing unreachable block (ram,0x000100be9ec8) */
/* WARNING: Removing unreachable block (ram,0x000100be9eb0) */
/* WARNING: Removing unreachable block (ram,0x000100be9ef8) */

void FUN_100be9e94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,0);
  return;
}



/* Entry: 100be9f0c; end: 100be9f8b;  */

void FUN_100be9f0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112df8ec0,&UNK_10d9c9570);
  puVar1 = &UNK_11043e510;
  func_0x000107c613fc(&UNK_11043e510,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_100be9f8c,puVar1);
  return;
}



/* Entry: 100be9f8c; end: 100bea0a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100be9f8c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_48;
  
  func_0x0001000285a8(0x112df90c8,&UNK_10d9c9ad0);
  func_0x000100083b20(&lStack_48);
  lVar2 = lStack_48;
  lVar1 = lStack_48;
  func_0x000107c5dbbc();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x0001000bda74();
  func_0x000107c61170(lVar1);
  func_0x0001000285a8(0x112d63fb0,&UNK_10d929768);
  func_0x000100083b20(&lStack_48);
  uVar3 = *(undefined8 *)(lStack_48 + _DAT_11301af98);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lStack_48);
  uVar4 = uVar3;
  func_0x0001000bda74(uVar3);
  func_0x000107c61170(uVar3);
  uVar3 = 0;
  func_0x000100bea780(0);
  func_0x000107c610f8();
  FUN_100bea7a0(lVar2,uVar4,uVar3);
  *param_1 = lVar2;
  return;
}



/* Entry: 100bea0a4; end: 100bea0db; -[SCChatMediaContentBuilder withSnapMetadata:] */

long FUN_100bea0a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100bea0dc; end: 100bea0ff; -[SCConversationSnapMetadata copyWithZone:] */

undefined8 FUN_100bea0dc(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100bea100; end: 100bea107; -[SCNMessagingThumbnailIndexList indices] */

undefined8 FUN_100bea100(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bea108; end: 100bea10f; -[CTPItemViewServices valdiCompatibleItemViewService] */

undefined8 FUN_100bea108(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bea110; end: 100bea1db; -[SCChatMediaContentBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100bea128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bea140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bea158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bea170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bea188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bea1a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bea1b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bea1a4) */
/* WARNING: Removing unreachable block (ram,0x000100bea18c) */
/* WARNING: Removing unreachable block (ram,0x000100bea174) */
/* WARNING: Removing unreachable block (ram,0x000100bea15c) */
/* WARNING: Removing unreachable block (ram,0x000100bea144) */
/* WARNING: Removing unreachable block (ram,0x000100bea12c) */
/* WARNING: Removing unreachable block (ram,0x000100bea1bc) */

void FUN_100bea110(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0xb0,0);
  return;
}



/* Entry: 100bea1dc; end: 100bea763; +[SCChatMediaContentBuilder chatMediaContentFromExistingChatMediaContent:] */

void FUN_100bea1dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined *puVar30;
  undefined8 uVar31;
  undefined *puVar32;
  undefined8 uVar33;
  undefined *puVar34;
  undefined8 uVar35;
  undefined *puVar36;
  undefined8 uVar37;
  undefined *puVar38;
  undefined8 uVar39;
  undefined *puVar40;
  
  puVar1 = PTR_PTR_1126d7a78;
  func_0x000107c61174(param_3);
  func_0x000107c3f8a4();
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x000107c4c99c();
  func_0x000107c61180();
  puVar3 = puVar1;
  func_0x000107c5e698(puVar1,param_2,uVar2);
  func_0x000107c61180();
  uVar4 = param_3;
  func_0x000107c4a8c4();
  func_0x000107c61180();
  puVar5 = puVar3;
  func_0x000107c5e61c(puVar3,param_2,uVar4);
  func_0x000107c61180();
  uVar6 = param_3;
  func_0x000107c4a804();
  func_0x000107c61180();
  puVar7 = puVar5;
  func_0x000107c5e618(puVar5,param_2,uVar6);
  func_0x000107c61180();
  uVar8 = param_3;
  func_0x000107c50900(param_3);
  puVar9 = puVar7;
  func_0x000107c5e76c(puVar7,param_2,uVar8);
  func_0x000107c61180();
  uVar8 = param_3;
  func_0x000107c4ca5c(param_3);
  puVar10 = puVar9;
  func_0x000107c5e6ac(puVar9,param_2,uVar8);
  func_0x000107c61180();
  uVar8 = param_3;
  func_0x000107c4c9b8(param_3);
  puVar11 = puVar10;
  func_0x000107c5e69c(puVar10,param_2,uVar8);
  func_0x000107c61180();
  uVar8 = param_3;
  func_0x000107c4cda0(param_3);
  puVar12 = puVar11;
  func_0x000107c5e6c8(puVar11,param_2,uVar8);
  func_0x000107c61180();
  uVar8 = param_3;
  func_0x000107c5ab50(param_3);
  puVar13 = puVar12;
  func_0x000107c5e79c(puVar12,param_2,uVar8);
  func_0x000107c61180();
  uVar8 = param_3;
  func_0x000107c4cde8();
  func_0x000107c61180();
  puVar14 = puVar13;
  func_0x000107c5e6d0(puVar13,param_2,uVar8);
  func_0x000107c61180();
  uVar15 = param_3;
  func_0x000107c4cde0();
  func_0x000107c61180();
  puVar16 = puVar14;
  func_0x000107c5e6cc(puVar14,param_2,uVar15);
  func_0x000107c61180();
  uVar17 = param_3;
  func_0x000107c5e304();
  func_0x000107c61180();
  puVar18 = puVar16;
  func_0x000107c5e898(puVar16,param_2,uVar17);
  func_0x000107c61180();
  uVar19 = param_3;
  func_0x000107c44d98();
  func_0x000107c61180();
  puVar20 = puVar18;
  func_0x000107c5e598(puVar18,param_2,uVar19);
  func_0x000107c61180();
  uVar21 = param_3;
  func_0x000107c4a754(param_3);
  puVar22 = puVar20;
  func_0x000107c5e60c(puVar20,param_2,uVar21);
  func_0x000107c61180();
  uVar21 = param_3;
  func_0x000107c42378();
  func_0x000107c61180();
  puVar23 = puVar22;
  func_0x000107c5e520(puVar22,param_2,uVar21);
  func_0x000107c61180();
  uVar24 = param_3;
  func_0x000107c49f14(param_3);
  puVar25 = puVar23;
  func_0x000107c5e5d8(puVar23,param_2,uVar24);
  func_0x000107c61180();
  uVar24 = param_3;
  func_0x000107c5b14c();
  func_0x000107c61180();
  puVar26 = puVar25;
  func_0x000107c5e7c0(puVar25,param_2,uVar24);
  func_0x000107c61180();
  uVar27 = param_3;
  func_0x000107c5dcc0();
  func_0x000107c61180();
  puVar28 = puVar26;
  func_0x000107c5e878(puVar26,param_2,uVar27);
  func_0x000107c61180();
  uVar29 = param_3;
  func_0x000107c5b34c();
  func_0x000107c61180();
  puVar30 = puVar28;
  func_0x000107c5e7d4(puVar28,param_2,uVar29);
  func_0x000107c61180();
  uVar31 = param_3;
  func_0x000107c40488(param_3);
  func_0x000107c61180();
  puVar32 = puVar30;
  func_0x000107c5e4d8(puVar30,param_2,uVar31);
  func_0x000107c61180();
  uVar33 = param_3;
  func_0x000107c5c920(param_3);
  func_0x000107c61180();
  puVar34 = puVar32;
  func_0x000107c5e828(puVar32,param_2,uVar33);
  func_0x000107c61180();
  uVar35 = param_3;
  func_0x000107c4dfc8(param_3);
  func_0x000107c61180();
  puVar36 = puVar34;
  func_0x000107c5e704(puVar34,param_2,uVar35);
  func_0x000107c61180();
  uVar37 = param_3;
  func_0x000107c4e160(param_3);
  func_0x000107c61180();
  puVar38 = puVar36;
  func_0x000107c5e70c(puVar36,param_2,uVar37);
  func_0x000107c61180();
  uVar39 = param_3;
  func_0x000107c49cc8(param_3);
  func_0x000107c61170(param_3);
  puVar40 = puVar38;
  func_0x000107c5e5bc(puVar38,param_2,uVar39);
  func_0x000107c61180();
  func_0x000107c61170(puVar38);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(puVar36);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(puVar34);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(puVar32);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(puVar30);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(puVar28);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(puVar26);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar23);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(puVar22);
  func_0x000107c61170(puVar20);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar40);
  return;
}



/* Entry: 100bea764; end: 100bea79f; +[SCChatMediaContentBuilder chatMediaContent] */

void FUN_100bea764(void)

{
  func_0x000107c610fc(PTR_PTR_1126d7a78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bea7a0; end: 100bea83b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bea7a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112df90d0;
  uVar2 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112df90d8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112df90e0) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bea83c; end: 100bea867;  */

void FUN_100bea83c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bea868; end: 100bea97b; -[SCMixerRequestMetadataDataModel initWithMixerRequestId:clientRequestId:contextualInfo:paginationToken:nextPageTriggerDistance:] */

undefined1 *
FUN_100bea868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_112701990;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bea97c; end: 100beac37; -[SCLensScheduleNamespaceDataModel initWithNamespaceId:activeLenses:preCachedLenses:ttl:lastUpdateTimestamp:version:noFillLensMetadata:mixerRequestId:clientRequestId:fetchLocationMetadata:activeItems:preCachedItems:mixerRequestMetadata:originalNamespaceId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100bea97c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  puStack_78 = PTR_PTR_112701848;
  puVar1 = &uStack_80;
  uStack_80 = param_3;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127852c8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127852c8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127852cc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127852cc) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127852d0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127852d0) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127852d4) = param_8;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127852d8) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127852dc) = param_2;
    uVar2 = param_9;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127852e0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127852e0) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_10;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127852e4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127852e4) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_11;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127852e8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127852e8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_12;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127852ec);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127852ec) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_13;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127852f0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127852f0) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_14;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127852f4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127852f4) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_15;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127852f8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127852f8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_16;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127852fc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127852fc) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  return puVar1;
}



/* Entry: 100beac38; end: 100beac5b; -[SCLensFetchLocationMetadataDataModel copyWithZone:] */

undefined8 FUN_100beac38(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100beac5c; end: 100beac7f; -[SCMixerRequestMetadataDataModel copyWithZone:] */

undefined8 FUN_100beac5c(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100beac80; end: 100beac87; -[SCChatMediaContent key] */

undefined8 FUN_100beac80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100beac88; end: 100beac8f; -[SCChatMediaContent iv] */

undefined8 FUN_100beac88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100beac90; end: 100beac97; -[SCChatMediaContent rotationLocked] */

undefined1 FUN_100beac90(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100beac98; end: 100beac9f; -[SCChatMediaContentBuilder withRotationLocked:] */

void FUN_100beac98(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 100beaca0; end: 100beaca7; -[SCChatMediaContent mediaType] */

undefined8 FUN_100beaca0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100beaca8; end: 100beacaf; -[SCChatMediaContent mediaLoadState] */

undefined8 FUN_100beaca8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100beacb0; end: 100beacb7; -[SCChatMediaContentBuilder withMediaLoadState:] */

void FUN_100beacb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 100beacb8; end: 100beacbf; -[SCChatMediaContent messageBodyType] */

undefined8 FUN_100beacb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100beacc0; end: 100beacc7; -[SCChatMediaContent shouldBlockDownload] */

undefined1 FUN_100beacc0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 100beacc8; end: 100beaccf; -[SCChatMediaContent messageTimestamp] */

undefined8 FUN_100beacc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 100beacd0; end: 100beacd7; -[SCChatMediaContent messageSender] */

undefined8 FUN_100beacd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 100beacd8; end: 100beacdf; -[SCChatMediaContent width] */

undefined8 FUN_100beacd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 100beace0; end: 100beace7; -[SCChatMediaContent height] */

undefined8 FUN_100beace0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 100beace8; end: 100beacef; -[SCChatMediaContent isZipped] */

undefined1 FUN_100beace8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 100beacf0; end: 100beacf7; -[SCChatMediaContentBuilder withIsZipped:] */

void FUN_100beacf0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 100beacf8; end: 100beacff; -[SCChatMediaContent duration] */

undefined8 FUN_100beacf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 100bead00; end: 100bead07; -[SCChatMediaContent isInfiniteDuration] */

undefined1 FUN_100bead00(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 100bead08; end: 100bead0f; -[SCChatMediaContentBuilder withIsInfiniteDuration:] */

void FUN_100bead08(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 100bead10; end: 100bead17; -[SCChatMediaContent snapAttachments] */

undefined8 FUN_100bead10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 100bead18; end: 100bead4f; -[SCChatMediaContentBuilder withSnapAttachments:] */

long FUN_100bead18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100bead50; end: 100bead57; -[SCChatMediaContent venueId] */

undefined8 FUN_100bead50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 100bead58; end: 100bead8f; -[SCChatMediaContentBuilder withVenueId:] */

long FUN_100bead58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100bead90; end: 100bead97; -[SCChatMediaContent snapMetadata] */

undefined8 FUN_100bead90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 100bead98; end: 100bead9f; -[SCChatMediaContent contentObject] */

undefined8 FUN_100bead98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 100beada0; end: 100beada7; -[SCChatMediaContent thumbnailContentObject] */

undefined8 FUN_100beada0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 100beada8; end: 100beaddf; -[SCChatMediaContentBuilder withThumbnailContentObject:] */

long FUN_100beada8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100beade0; end: 100beade7; -[SCChatMediaContent optimizedContentObject] */

undefined8 FUN_100beade0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 100beade8; end: 100beae1f; -[SCChatMediaContentBuilder withOptimizedContentObject:] */

long FUN_100beade8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100beae20; end: 100beae27; -[SCChatMediaContent overlayContentObject] */

undefined8 FUN_100beae20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 100beae28; end: 100beae5f; -[SCChatMediaContentBuilder withOverlayContentObject:] */

long FUN_100beae28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100beae60; end: 100beae67; -[SCChatMediaContent isEligibleForStreaming] */

undefined1 FUN_100beae60(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 100beae68; end: 100beae6f; -[SCChatMediaContentBuilder withIsEligibleForStreaming:] */

void FUN_100beae68(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb8) = param_3;
  return;
}



/* Entry: 100beae70; end: 100beaf93; -[SCFriendsFeedSnapMessage initWithComboSnapItemInfo:snapMediaTypeInfo:unopenedSnapMessageId:actionPerformer:isInfiniteSnap:unreadSnapCount:] */

undefined1 *
FUN_100beae70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_58 = PTR_PTR_1127039e0;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100beaf94; end: 100beafb7; -[SCFriendsFeedComboSnapItemInfo copyWithZone:] */

undefined8 FUN_100beaf94(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100beafb8; end: 100beafdb; -[SCFriendsFeedSnapMediaTypeInfo copyWithZone:] */

undefined8 FUN_100beafb8(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100beafdc; end: 100beb03f; +[SCFriendsFeedMessageContent snapWithSnap:] */

void FUN_100beafdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126d7828;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


