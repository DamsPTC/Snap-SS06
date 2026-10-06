/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 003b061c; end: 003b064f;  */

void FUN_003b061c(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *param_1 = 7;
  return;
}



/* Entry: 003b0650; end: 003b06e7;  */

ulong FUN_003b0650(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_2 == 4) {
    _memcmp(param_1,"gzip");
    if ((int)param_1 == 0) {
      uVar1 = 0x100000000;
      uVar2 = 2;
      goto LAB_003b06d0;
    }
  }
  else if (param_2 == 7) {
    _memcmp(param_1,"deflate");
    if ((int)param_1 == 0) {
      uVar1 = 0x100000000;
      uVar2 = 1;
      goto LAB_003b06d0;
    }
  }
  else if ((param_2 == 8) && (*param_1 == 0x797469746e656469)) {
    uVar2 = 0;
    uVar1 = 0x100000000;
    goto LAB_003b06d0;
  }
  uVar1 = 0;
  uVar2 = 0;
LAB_003b06d0:
  return uVar2 | uVar1;
}



/* Entry: 003b06e8; end: 003b0883;  */

ulong FUN_003b06e8(long param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  uint *****pppppuVar4;
  long lVar5;
  uint uStack_5c;
  ulong uStack_58;
  uint ****appppuStack_50 [2];
  uint auStack_40 [2];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  iVar2 = (int)param_2;
  if (3 < iVar2) {
    func_0x00773a0c(param_2);
    goto LAB_003b0858;
  }
  if (iVar2 == 0) {
LAB_003b0790:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
      return param_2;
    }
    ___stack_chk_fail();
  }
  else {
    if (iVar2 < 1) {
      func_0x00773a3c();
      goto LAB_003b0858;
    }
    lVar5 = 0;
    uStack_58 = 0;
    auStack_40[0] = 2;
    auStack_40[1] = 1;
    do {
      uStack_5c = *(uint *)((long)auStack_40 + lVar5);
      if ((*(byte *)(param_1 + ((ulong)(long)(int)uStack_5c >> 3)) >> (ulong)(uStack_5c & 7) & 1) !=
          0) {
        FUN_003b0bc8(&uStack_58,&uStack_5c);
      }
      lVar5 = lVar5 + 4;
    } while (lVar5 != 8);
    if (uStack_58 < 2) {
      param_2 = 0;
      uVar3 = uStack_58;
joined_r0x003b0784:
      if (uVar3 != 0) {
        __ZdlPv(appppuStack_50[0]);
      }
      goto LAB_003b0790;
    }
    if (iVar2 == 1) {
      pppppuVar4 = appppuStack_50;
      if ((uStack_58 & 1) != 0) {
        pppppuVar4 = (uint *****)appppuStack_50[0];
      }
LAB_003b0830:
      uVar3 = uStack_58 & 1;
      param_2 = (ulong)*(uint *)pppppuVar4;
      goto joined_r0x003b0784;
    }
    if (iVar2 == 2) {
      pppppuVar4 = appppuStack_50;
      if ((uStack_58 & 1) != 0) {
        pppppuVar4 = (uint *****)appppuStack_50[0];
      }
      pppppuVar4 = (uint *****)((long)pppppuVar4 + (uStack_58 & 0xfffffffffffffffc));
      goto LAB_003b0830;
    }
    if (iVar2 == 3) {
      pppppuVar4 = appppuStack_50;
      if ((uStack_58 & 1) != 0) {
        pppppuVar4 = (uint *****)appppuStack_50[0];
      }
      pppppuVar4 = (uint *****)((long)pppppuVar4 + ((uStack_58 >> 1) - 1) * 4);
      goto LAB_003b0830;
    }
  }
  _abort();
LAB_003b0858:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3b085c);
  (*pcVar1)();
}



/* Entry: 003b0884; end: 003b0893;  */

uint FUN_003b0884(uint param_1)

{
  return param_1 & 7;
}



/* Entry: 003b0894; end: 003b08cb;  */

uint FUN_003b0894(long param_1)

{
  if (param_1 != 0) {
    func_0x003a2d4c(param_1,"grpc.compression_enabled_algorithms_bitset",7,7);
    return (uint)param_1 & 6 | 1;
  }
  return 7;
}



/* Entry: 003b08cc; end: 003b0983;  */

void FUN_003b08cc(undefined1 *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  
  *param_1 = 0;
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    do {
      uVar1 = *param_2;
      if (uVar1 < 3) {
        param_1[uVar1 >> 3] = param_1[uVar1 >> 3] | (byte)(1 << (ulong)(uVar1 & 0x1f));
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -4;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 003b0984; end: 003b0bc7;  */

ulong FUN_003b0984(long param_1,long param_2)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  char *pcVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  long lStack_78;
  int iStack_70;
  byte *pbStack_68;
  ulong uStack_60;
  long *plStack_58;
  undefined1 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0x2c;
  lStack_78 = 0;
  iStack_70 = 0;
  pbStack_68 = (byte *)0x0;
  uStack_60 = 0;
  plStack_58 = &lStack_48;
  uStack_50 = 0x2c;
  lStack_48 = param_1;
  lStack_40 = param_2;
  if (param_1 == 0) {
    bVar2 = false;
    iStack_70 = 2;
    lStack_78 = param_2;
  }
  else {
    FUN_00667b38(&lStack_78);
    bVar2 = iStack_70 != 2;
  }
  lVar13 = lStack_40;
  if ((bVar2) || (uVar12 = 1, lStack_78 != lStack_40)) {
    uVar12 = 1;
    do {
      pbVar7 = pbStack_68;
      if (uStack_60 != 0) {
        pbVar4 = pbStack_68;
        uVar11 = uStack_60;
        do {
          pbVar7 = pbVar4;
          if (((byte)(&UNK_00811470)[*pbVar4] >> 3 & 1) == 0) break;
          pbVar4 = pbVar4 + 1;
          uVar11 = uVar11 - 1;
          pbVar7 = pbStack_68 + uStack_60;
        } while (uVar11 != 0);
      }
      uVar11 = (long)pbVar7 - (long)pbStack_68;
      if (uStack_60 < uVar11) {
        pcVar5 = "string_view::substr";
        FUN_0033b2a4();
        if ((long *)pcVar5 == (long *)0x0) {
          uVar11 = 0;
          uVar12 = 0;
          uVar10 = 0;
          uVar3 = 0;
          goto LAB_003b0b78;
        }
        lVar13 = *(long *)pcVar5;
        if (lVar13 == 0) goto LAB_003b0b4c;
        puVar14 = (ulong *)(*(long *)((long)pcVar5 + 8) + 0x10);
        goto LAB_003b0b20;
      }
      pbVar4 = pbStack_68 + uVar11;
      pbVar9 = pbStack_68 + (uStack_60 - (long)pbVar7);
      pbVar7 = pbStack_68 + uStack_60 + 1;
      do {
        pbVar8 = pbVar4;
        if (pbVar9 == (byte *)0x0) break;
        pbVar1 = pbVar7 + -2;
        pbVar8 = pbVar7 + -1;
        pbVar9 = pbVar9 + -1;
        pbVar7 = pbVar8;
      } while (((byte)(&UNK_00811470)[*pbVar1] >> 3 & 1) != 0);
      uVar6 = uStack_60 - uVar11;
      if ((ulong)((long)pbVar8 - (long)pbVar4) <= uStack_60 - uVar11) {
        uVar6 = (long)pbVar8 - (long)pbVar4;
      }
      FUN_003b0650(pbVar4,uVar6);
      uVar10 = 1 << (ulong)((uint)pbVar4 & 0x1f);
      if (2 < (uint)pbVar4 || ((ulong)pbVar4 & 0xff00000000) == 0) {
        uVar10 = 0;
      }
      uVar12 = (ulong)((uint)uVar12 | uVar10);
      FUN_00667b38(&lStack_78);
    } while ((iStack_70 != 2) || (lStack_78 != lVar13));
  }
  return uVar12;
LAB_003b0b20:
  do {
    uVar12 = puVar14[-1];
    _strcmp(uVar12,"grpc.default_compression_algorithm");
    if ((int)uVar12 == 0) {
      if ((uint)puVar14[-2] == 0) {
        uVar6 = *puVar14;
        uVar12 = uVar6;
        _strlen(uVar6);
        FUN_003b0650(uVar6,uVar12);
        uVar10 = (uint)uVar6 & 0xffffff00;
        uVar12 = uVar6 & 0xffffff0000000000;
        uVar11 = uVar6 & 0xff00000000;
        goto LAB_003b0b5c;
      }
      if ((uint)puVar14[-2] == 1) {
        uVar12 = 0;
        uVar6 = (ulong)(uint)*puVar14;
        uVar10 = (uint)*puVar14 & 0xffffff00;
        uVar11 = 0x100000000;
        goto LAB_003b0b5c;
      }
    }
    puVar14 = puVar14 + 4;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
LAB_003b0b4c:
  uVar11 = 0;
  uVar12 = 0;
  uVar6 = 0;
  uVar10 = 0;
LAB_003b0b5c:
  uVar3 = (uint)uVar6;
LAB_003b0b78:
  return uVar12 | uVar11 | (ulong)(uVar10 | uVar3 & 0xff);
}



/* Entry: 003b0bc8; end: 003b0c0b;  */

undefined4 * FUN_003b0bc8(ulong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 **ppuVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined4 *puStack_50;
  ulong uStack_48;
  
  puVar3 = param_1 + 1;
  uVar5 = *param_1;
  if ((uVar5 & 1) == 0) {
    uVar7 = 4;
  }
  else {
    puVar3 = (ulong *)param_1[1];
    uVar7 = param_1[2];
  }
  if (uVar5 >> 1 == uVar7) {
    ppuVar2 = &puStack_50;
    puVar3 = param_1 + 1;
    uVar5 = *param_1;
    if ((uVar5 & 1) == 0) {
      uVar7 = 8;
    }
    else {
      puVar3 = (ulong *)param_1[1];
      uVar7 = param_1[2] << 1;
    }
    puStack_50 = (undefined4 *)0x0;
    uStack_48 = 0;
    FUN_003b0ce0();
    uVar4 = uVar5 >> 1;
    puVar1 = (undefined4 *)((long)ppuVar2 + uVar4 * 4);
    puStack_50 = (undefined4 *)ppuVar2;
    uStack_48 = uVar7;
    *puVar1 = *param_2;
    puVar6 = (undefined4 *)ppuVar2;
    if (1 < uVar5) {
      do {
        *puVar6 = (int)*puVar3;
        uVar4 = uVar4 - 1;
        puVar6 = puVar6 + 1;
        puVar3 = (ulong *)((long)puVar3 + 4);
      } while (uVar4 != 0);
    }
    uVar5 = *param_1;
    if ((uVar5 & 1) != 0) {
      __ZdlPv(param_1[1]);
      uVar5 = *param_1;
      ppuVar2 = (undefined4 **)puStack_50;
      uVar7 = uStack_48;
    }
    param_1[1] = (ulong)ppuVar2;
    param_1[2] = uVar7;
    *param_1 = (uVar5 | 1) + 2;
    return puVar1;
  }
  puVar1 = (undefined4 *)((long)puVar3 + (uVar5 >> 1) * 4);
  *puVar1 = *param_2;
  *param_1 = uVar5 + 2;
  return puVar1;
}



/* Entry: 003b0c0c; end: 003b0cdf;  */

undefined4 * FUN_003b0c0c(ulong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined4 *puStack_50;
  ulong uStack_48;
  
  ppuVar2 = &puStack_50;
  puVar6 = param_1 + 1;
  uVar7 = *param_1;
  if ((uVar7 & 1) == 0) {
    uVar3 = 8;
  }
  else {
    puVar6 = (ulong *)param_1[1];
    uVar3 = param_1[2] << 1;
  }
  puStack_50 = (undefined4 *)0x0;
  uStack_48 = 0;
  FUN_003b0ce0();
  uVar4 = uVar7 >> 1;
  puVar1 = (undefined4 *)((long)ppuVar2 + uVar4 * 4);
  puStack_50 = (undefined4 *)ppuVar2;
  uStack_48 = uVar3;
  *puVar1 = *param_2;
  puVar5 = (undefined4 *)ppuVar2;
  if (1 < uVar7) {
    do {
      *puVar5 = (int)*puVar6;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
      puVar6 = (ulong *)((long)puVar6 + 4);
    } while (uVar4 != 0);
  }
  uVar7 = *param_1;
  if ((uVar7 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar7 = *param_1;
    ppuVar2 = (undefined4 **)puStack_50;
    uVar3 = uStack_48;
  }
  param_1[1] = (ulong)ppuVar2;
  param_1[2] = uVar3;
  *param_1 = (uVar7 | 1) + 2;
  return puVar1;
}



/* Entry: 003b0ce0; end: 003b0d13;  */

undefined1  [16] FUN_003b0ce0(ulong param_1,byte *param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if ((ulong)param_2 >> 0x3e == 0) {
    lVar3 = (long)param_2 << 2;
    __Znwm(lVar3);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar3;
    return auVar11;
  }
  FUN_00349558();
  uVar5 = 0;
  uRam0000000000b5e870 = 0;
  uRam0000000000b5e858 = 0;
  uRam0000000000b5e850 = 0;
  uRam0000000000b5e868 = 0;
  uRam0000000000b5e86e = 0;
  uRam0000000000b5e860 = 0;
  uRam0000000000b5e838 = 0;
  uRam0000000000b5e830 = 0;
  uRam0000000000b5e848 = 0;
  uRam0000000000b5e840 = 0;
  uRam0000000000b5e808 = 0;
  uRam0000000000b5e800 = 0;
  uRam0000000000b5e818 = 0;
  uRam0000000000b5e810 = 0;
  uRam0000000000b5e7e8 = 0;
  uRam0000000000b5e7e0 = 0;
  uRam0000000000b5e7f8 = 0;
  uRam0000000000b5e7f0 = 0;
  uRam0000000000b5e7c8 = 0;
  uRam0000000000b5e7c0 = 0;
  uRam0000000000b5e7d8 = 0;
  uRam0000000000b5e7d0 = 0;
  uRam0000000000b5e828 = 0;
  uRam0000000000b5e820 = 0;
  uRam0000000000b5e7a8 = 0;
  uRam0000000000b5e7a0 = 0;
  uRam0000000000b5e7b8 = 0;
  uRam0000000000b5e7b0 = 0;
  puVar7 = (undefined1 *)0xb5e820;
  do {
    uVar6 = 0;
    puVar10 = puVar7;
    do {
      if ((uVar5 & (uint)(1 << (ulong)((uint)uVar6 & 0x1f))) != 0) {
        puVar9 = puVar7;
        if (puVar7 != puVar10) {
          if ((puVar10 == (undefined1 *)0xb5e876) ||
             (*puVar10 = 0x2c, puVar10 == (undefined1 *)0xb5e875)) goto LAB_003b0e2c;
          puVar10[1] = 0x20;
          puVar9 = puVar10 + 2;
        }
        puVar10 = puVar9;
        if ((uint)uVar6 < 3) {
          pbVar8 = *(byte **)((long)&PTR_s_identity_009dfb50 +
                             (-(uVar6 >> 0x1f & 1) & 0xfffffff800000000 | (uVar6 & 0xffffffff) << 3)
                             );
        }
        else {
          pbVar8 = (byte *)0x0;
        }
        param_1 = (ulong)*pbVar8;
        if (*pbVar8 != 0) {
          param_3 = 0xb5e876 - (long)puVar10;
          pbVar8 = pbVar8 + 1;
          puVar9 = puVar10;
          do {
            param_2 = pbVar8;
            if (param_3 == 0) goto LAB_003b0e2c;
            puVar10 = puVar9 + 1;
            *puVar9 = (char)param_1;
            param_2 = pbVar8 + 1;
            bVar1 = *pbVar8;
            param_1 = (ulong)bVar1;
            param_3 = param_3 + -1;
            pbVar8 = param_2;
            puVar9 = puVar10;
          } while (bVar1 != 0);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != 3);
    *(undefined1 **)(uVar5 * 0x10 + 0xb5e7a0) = puVar7;
    *(long *)(uVar5 * 0x10 + 0xb5e7a8) = (long)puVar10 - (long)puVar7;
    uVar5 = uVar5 + 1;
    puVar7 = puVar10;
  } while (uVar5 != 8);
  if (puVar10 == (undefined1 *)0xb5e876) {
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = param_1;
    return auVar12;
  }
LAB_003b0e2c:
  iVar2 = (int)param_1;
  _abort();
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      uVar4 = 0;
    }
    else {
      if (iVar2 != 2) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/compression/message_compress.cc"
                     ,0xa7,2,"invalid compression algorithm %d");
        goto LAB_003b0ea0;
      }
      uVar4 = 1;
    }
    pbVar8 = param_2;
    lVar3 = param_3;
    FUN_003b110c(param_2,param_3,uVar4);
    if ((int)pbVar8 != 0) {
      uVar4 = 1;
      param_3 = lVar3;
      goto LAB_003b0eb0;
    }
  }
LAB_003b0ea0:
  FUN_003b0ec0(param_2,param_3);
  uVar4 = 0;
LAB_003b0eb0:
  auVar13._8_8_ = param_3;
  auVar13._0_8_ = uVar4;
  return auVar13;
}



/* Entry: 003b0d14; end: 003b0e2f;  */

ulong FUN_003b0d14(ulong param_1,byte *param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  
  uVar4 = 0;
  uRam0000000000b5e870 = 0;
  uRam0000000000b5e858 = 0;
  uRam0000000000b5e850 = 0;
  uRam0000000000b5e868 = 0;
  uRam0000000000b5e86e = 0;
  uRam0000000000b5e860 = 0;
  uRam0000000000b5e838 = 0;
  uRam0000000000b5e830 = 0;
  uRam0000000000b5e848 = 0;
  uRam0000000000b5e840 = 0;
  uRam0000000000b5e808 = 0;
  uRam0000000000b5e800 = 0;
  uRam0000000000b5e818 = 0;
  uRam0000000000b5e810 = 0;
  uRam0000000000b5e7e8 = 0;
  uRam0000000000b5e7e0 = 0;
  uRam0000000000b5e7f8 = 0;
  uRam0000000000b5e7f0 = 0;
  uRam0000000000b5e7c8 = 0;
  uRam0000000000b5e7c0 = 0;
  uRam0000000000b5e7d8 = 0;
  uRam0000000000b5e7d0 = 0;
  uRam0000000000b5e828 = 0;
  uRam0000000000b5e820 = 0;
  uRam0000000000b5e7a8 = 0;
  uRam0000000000b5e7a0 = 0;
  uRam0000000000b5e7b8 = 0;
  uRam0000000000b5e7b0 = 0;
  puVar6 = (undefined1 *)0xb5e820;
  do {
    uVar5 = 0;
    puVar9 = puVar6;
    do {
      if ((uVar4 & (uint)(1 << (ulong)((uint)uVar5 & 0x1f))) != 0) {
        puVar8 = puVar6;
        if (puVar6 != puVar9) {
          if ((puVar9 == (undefined1 *)0xb5e876) ||
             (*puVar9 = 0x2c, puVar9 == (undefined1 *)0xb5e875)) goto LAB_003b0e2c;
          puVar9[1] = 0x20;
          puVar8 = puVar9 + 2;
        }
        puVar9 = puVar8;
        if ((uint)uVar5 < 3) {
          pbVar7 = *(byte **)((long)&PTR_s_identity_009dfb50 +
                             (-(uVar5 >> 0x1f & 1) & 0xfffffff800000000 | (uVar5 & 0xffffffff) << 3)
                             );
        }
        else {
          pbVar7 = (byte *)0x0;
        }
        param_1 = (ulong)*pbVar7;
        if (*pbVar7 != 0) {
          param_3 = 0xb5e876 - (long)puVar9;
          pbVar7 = pbVar7 + 1;
          puVar8 = puVar9;
          do {
            param_2 = pbVar7;
            if (param_3 == 0) goto LAB_003b0e2c;
            puVar9 = puVar8 + 1;
            *puVar8 = (char)param_1;
            param_2 = pbVar7 + 1;
            bVar1 = *pbVar7;
            param_1 = (ulong)bVar1;
            param_3 = param_3 + -1;
            pbVar7 = param_2;
            puVar8 = puVar9;
          } while (bVar1 != 0);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != 3);
    *(undefined1 **)(uVar4 * 0x10 + 0xb5e7a0) = puVar6;
    *(long *)(uVar4 * 0x10 + 0xb5e7a8) = (long)puVar9 - (long)puVar6;
    uVar4 = uVar4 + 1;
    puVar6 = puVar9;
  } while (uVar4 != 8);
  if (puVar9 == (undefined1 *)0xb5e876) {
    return param_1;
  }
LAB_003b0e2c:
  iVar2 = (int)param_1;
  _abort();
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      uVar3 = 0;
    }
    else {
      if (iVar2 != 2) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/compression/message_compress.cc"
                     ,0xa7,2,"invalid compression algorithm %d");
        goto LAB_003b0ea0;
      }
      uVar3 = 1;
    }
    pbVar7 = param_2;
    FUN_003b110c(param_2,param_3,uVar3);
    if ((int)pbVar7 != 0) {
      return 1;
    }
  }
LAB_003b0ea0:
  FUN_003b0ec0(param_2,param_3);
  return 0;
}



/* Entry: 003b0e30; end: 003b0ebf;  */

undefined8 FUN_003b0e30(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    if (param_1 == 1) {
      uVar2 = 0;
    }
    else {
      if (param_1 != 2) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/compression/message_compress.cc"
                     ,0xa7,2,"invalid compression algorithm %d");
        goto LAB_003b0ea0;
      }
      uVar2 = 1;
    }
    uVar1 = param_2;
    FUN_003b110c(param_2,param_3,uVar2);
    if ((int)uVar1 != 0) {
      return 1;
    }
  }
LAB_003b0ea0:
  FUN_003b0ec0(param_2,param_3);
  return 0;
}



/* Entry: 003b0ec0; end: 003b0f6f;  */

undefined1 * FUN_003b0ec0(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined1 *puStack_130;
  long lStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar14 = param_1;
  puVar8 = (undefined8 *)param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar15 = 0;
    do {
      puVar8 = (undefined8 *)(*(long *)(param_1 + 8) + uVar15 * 0x20);
      plVar13 = (long *)*puVar8;
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar2) {
            *plVar13 = *plVar13 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_58 = puVar8[1];
      uStack_60 = *puVar8;
      uStack_48 = puVar8[3];
      uStack_50 = puVar8[2];
      puVar14 = param_2;
      puVar8 = &uStack_60;
      FUN_003ecb34();
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(ulong *)(param_1 + 0x10));
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return puVar14;
  }
  ___stack_chk_fail();
  iVar4 = (int)puVar14;
  puStack_70 = &stack0xfffffffffffffff0;
  if (iVar4 == 2) {
    bVar2 = true;
  }
  else {
    if (iVar4 != 1) {
      pcStack_68 = FUN_003b0f70;
      if (iVar4 != 0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/compression/message_compress.cc"
                     ,0xc0,2,"invalid compression algorithm %d");
      }
      else {
        FUN_003b0ec0(puVar8,param_3);
      }
      return (undefined1 *)(ulong)(iVar4 == 0);
    }
    bVar2 = false;
  }
  puVar5 = &uStack_110;
  puVar6 = &uStack_110;
  pcStack_68 = FUN_003b0f70;
  uVar15 = *(ulong *)(param_3 + 0x10);
  uVar17 = *(undefined8 *)(param_3 + 0x20);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uVar12 = 0xf;
  if (bVar2) {
    uVar12 = 0x1f;
  }
  uVar9 = (ulong)uVar12;
  pcStack_d0 = FUN_003b1244;
  uStack_c8 = 0x3b124c;
  _inflateInit2_();
  if ((int)puVar5 == 0) {
    FUN_003b1254(&uStack_110,puVar8,param_3,PTR__inflate_0099a910);
    if ((int)puVar6 == 0) {
      uVar9 = uVar15;
      if (uVar15 < *(ulong *)(param_3 + 0x10)) {
        do {
          plVar13 = *(long **)(*(long *)(param_3 + 8) + uVar9 * 0x20);
          if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
            do {
              lVar11 = *plVar13;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar2) {
                *plVar13 = lVar11 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar11 + -1 == 0) {
              (*(code *)plVar13[1])();
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(ulong *)(param_3 + 0x10));
      }
      *(ulong *)(param_3 + 0x10) = uVar15;
      *(undefined8 *)(param_3 + 0x20) = uVar17;
    }
    _inflateEnd(&uStack_110);
    return (undefined1 *)puVar6;
  }
  func_0x00773a74();
  iVar4 = (int)&uStack_1b0;
  iVar3 = (int)&uStack_1b0;
  pcStack_118 = FUN_003b110c;
  uVar16 = *(ulong *)(uVar9 + 0x10);
  uVar18 = *(undefined8 *)(uVar9 + 0x20);
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  pcStack_170 = FUN_003b1244;
  uStack_168 = 0x3b124c;
  iVar7 = -1;
  iVar10 = 8;
  uStack_140 = uVar17;
  uStack_138 = uVar15;
  puStack_130 = (undefined1 *)puVar8;
  lStack_128 = param_3;
  ppuStack_120 = &puStack_70;
  _deflateInit2_();
  if (iVar4 == 0) {
    FUN_003b1254(&uStack_1b0,puVar5,uVar9,PTR__deflate_0099a8f8);
    if ((iVar3 == 0) || (*(ulong *)((long)puVar5 + 0x20) <= *(ulong *)(uVar9 + 0x20))) {
      uVar15 = uVar16;
      if (uVar16 < *(ulong *)(uVar9 + 0x10)) {
        do {
          plVar13 = *(long **)(*(long *)(uVar9 + 8) + uVar15 * 0x20);
          if ((long *)((long)&MACH_HEADER.magic + 1) < plVar13) {
            do {
              lVar11 = *plVar13;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar2) {
                *plVar13 = lVar11 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar11 + -1 == 0) {
              (*(code *)plVar13[1])();
            }
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(ulong *)(uVar9 + 0x10));
      }
      puVar14 = (undefined1 *)0x0;
      *(ulong *)(uVar9 + 0x10) = uVar16;
      *(undefined8 *)(uVar9 + 0x20) = uVar18;
    }
    else {
      puVar14 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    }
    _deflateEnd(&uStack_1b0);
    return puVar14;
  }
  func_0x00773aa8();
  puVar14 = (undefined1 *)(ulong)(uint)(iVar10 * iVar7);
  if ((puVar14 != (undefined1 *)0x0) && (_malloc(), puVar14 == (undefined1 *)0x0)) {
    _abort();
    if ((puVar14 != (undefined1 *)0x0) && (_calloc(), puVar14 == (undefined1 *)0x0)) {
      _abort();
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_0099a260)();
      return puVar14;
    }
    return puVar14;
  }
  return puVar14;
}



/* Entry: 003b0f70; end: 003b0ff3;  */

undefined1 * FUN_003b0f70(int param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iVar4;
  
  if (param_1 == 2) {
    bVar2 = true;
  }
  else {
    if (param_1 != 1) {
      if (param_1 != 0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/compression/message_compress.cc"
                     ,0xc0,2,"invalid compression algorithm %d");
      }
      else {
        FUN_003b0ec0(param_2,param_3);
      }
      return (undefined1 *)(ulong)(param_1 == 0);
    }
    bVar2 = false;
  }
  puVar5 = &uStack_b0;
  puVar6 = &uStack_b0;
  uVar14 = *(ulong *)(param_3 + 0x10);
  uVar16 = *(undefined8 *)(param_3 + 0x20);
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uVar12 = 0xf;
  if (bVar2) {
    uVar12 = 0x1f;
  }
  uVar9 = (ulong)uVar12;
  pcStack_70 = FUN_003b1244;
  uStack_68 = 0x3b124c;
  _inflateInit2_();
  if ((int)puVar5 == 0) {
    FUN_003b1254(&uStack_b0,param_2,param_3,PTR__inflate_0099a910);
    if ((int)puVar6 == 0) {
      uVar9 = uVar14;
      if (uVar14 < *(ulong *)(param_3 + 0x10)) {
        do {
          plVar7 = *(long **)(*(long *)(param_3 + 8) + uVar9 * 0x20);
          if ((long *)((long)&MACH_HEADER.magic + 1) < plVar7) {
            do {
              lVar11 = *plVar7;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar2) {
                *plVar7 = lVar11 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar11 + -1 == 0) {
              (*(code *)plVar7[1])();
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(ulong *)(param_3 + 0x10));
      }
      *(ulong *)(param_3 + 0x10) = uVar14;
      *(undefined8 *)(param_3 + 0x20) = uVar16;
    }
    _inflateEnd(&uStack_b0);
    return (undefined1 *)puVar6;
  }
  func_0x00773a74();
  iVar3 = (int)&uStack_150;
  iVar4 = (int)&uStack_150;
  pcStack_b8 = FUN_003b110c;
  uVar15 = *(ulong *)(uVar9 + 0x10);
  uVar17 = *(undefined8 *)(uVar9 + 0x20);
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  pcStack_110 = FUN_003b1244;
  uStack_108 = 0x3b124c;
  iVar8 = -1;
  iVar10 = 8;
  uStack_e0 = uVar16;
  uStack_d8 = uVar14;
  uStack_d0 = param_2;
  lStack_c8 = param_3;
  puStack_c0 = &stack0xfffffffffffffff0;
  _deflateInit2_();
  if (iVar3 == 0) {
    FUN_003b1254(&uStack_150,puVar5,uVar9,PTR__deflate_0099a8f8);
    if ((iVar4 == 0) || (*(ulong *)((long)puVar5 + 0x20) <= *(ulong *)(uVar9 + 0x20))) {
      uVar14 = uVar15;
      if (uVar15 < *(ulong *)(uVar9 + 0x10)) {
        do {
          plVar7 = *(long **)(*(long *)(uVar9 + 8) + uVar14 * 0x20);
          if ((long *)((long)&MACH_HEADER.magic + 1) < plVar7) {
            do {
              lVar11 = *plVar7;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar2) {
                *plVar7 = lVar11 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar11 + -1 == 0) {
              (*(code *)plVar7[1])();
            }
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(ulong *)(uVar9 + 0x10));
      }
      puVar13 = (undefined1 *)0x0;
      *(ulong *)(uVar9 + 0x10) = uVar15;
      *(undefined8 *)(uVar9 + 0x20) = uVar17;
    }
    else {
      puVar13 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    }
    _deflateEnd(&uStack_150);
    return puVar13;
  }
  func_0x00773aa8();
  puVar13 = (undefined1 *)(ulong)(uint)(iVar10 * iVar8);
  if ((puVar13 != (undefined1 *)0x0) && (_malloc(), puVar13 == (undefined1 *)0x0)) {
    _abort();
    if ((puVar13 != (undefined1 *)0x0) && (_calloc(), puVar13 == (undefined1 *)0x0)) {
      _abort();
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_0099a260)();
      return puVar13;
    }
    return puVar13;
  }
  return puVar13;
}



/* Entry: 003b0ff4; end: 003b110b;  */

undefined1 * FUN_003b0ff4(undefined8 param_1,long param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iVar4;
  
  puVar5 = &uStack_b0;
  puVar6 = &uStack_b0;
  uVar14 = *(ulong *)(param_2 + 0x10);
  uVar16 = *(undefined8 *)(param_2 + 0x20);
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uVar12 = 0xf;
  if (param_3 != 0) {
    uVar12 = 0x1f;
  }
  uVar9 = (ulong)uVar12;
  pcStack_70 = FUN_003b1244;
  uStack_68 = 0x3b124c;
  _inflateInit2_();
  if ((int)puVar5 == 0) {
    FUN_003b1254(&uStack_b0,param_1,param_2,PTR__inflate_0099a910);
    if ((int)puVar6 == 0) {
      uVar9 = uVar14;
      if (uVar14 < *(ulong *)(param_2 + 0x10)) {
        do {
          plVar7 = *(long **)(*(long *)(param_2 + 8) + uVar9 * 0x20);
          if ((long *)((long)&MACH_HEADER.magic + 1) < plVar7) {
            do {
              lVar11 = *plVar7;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar2) {
                *plVar7 = lVar11 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar11 + -1 == 0) {
              (*(code *)plVar7[1])();
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(ulong *)(param_2 + 0x10));
      }
      *(ulong *)(param_2 + 0x10) = uVar14;
      *(undefined8 *)(param_2 + 0x20) = uVar16;
    }
    _inflateEnd(&uStack_b0);
    return (undefined1 *)puVar6;
  }
  func_0x00773a74();
  iVar3 = (int)&uStack_150;
  iVar4 = (int)&uStack_150;
  pcStack_b8 = FUN_003b110c;
  uVar15 = *(ulong *)(uVar9 + 0x10);
  uVar17 = *(undefined8 *)(uVar9 + 0x20);
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  pcStack_110 = FUN_003b1244;
  uStack_108 = 0x3b124c;
  iVar8 = -1;
  iVar10 = 8;
  uStack_e0 = uVar16;
  uStack_d8 = uVar14;
  uStack_d0 = param_1;
  lStack_c8 = param_2;
  puStack_c0 = &stack0xfffffffffffffff0;
  _deflateInit2_();
  if (iVar3 == 0) {
    FUN_003b1254(&uStack_150,puVar5,uVar9,PTR__deflate_0099a8f8);
    if ((iVar4 == 0) || (*(ulong *)((long)puVar5 + 0x20) <= *(ulong *)(uVar9 + 0x20))) {
      uVar14 = uVar15;
      if (uVar15 < *(ulong *)(uVar9 + 0x10)) {
        do {
          plVar7 = *(long **)(*(long *)(uVar9 + 8) + uVar14 * 0x20);
          if ((long *)((long)&MACH_HEADER.magic + 1) < plVar7) {
            do {
              lVar11 = *plVar7;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar2) {
                *plVar7 = lVar11 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar11 + -1 == 0) {
              (*(code *)plVar7[1])();
            }
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(ulong *)(uVar9 + 0x10));
      }
      puVar13 = (undefined1 *)0x0;
      *(ulong *)(uVar9 + 0x10) = uVar15;
      *(undefined8 *)(uVar9 + 0x20) = uVar17;
    }
    else {
      puVar13 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    }
    _deflateEnd(&uStack_150);
    return puVar13;
  }
  func_0x00773aa8();
  puVar13 = (undefined1 *)(ulong)(uint)(iVar10 * iVar8);
  if ((puVar13 != (undefined1 *)0x0) && (_malloc(), puVar13 == (undefined1 *)0x0)) {
    _abort();
    if ((puVar13 != (undefined1 *)0x0) && (_calloc(), puVar13 == (undefined1 *)0x0)) {
      _abort();
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_0099a260)();
      return puVar13;
    }
    return puVar13;
  }
  return puVar13;
}



/* Entry: 003b110c; end: 003b1243;  */

ulong FUN_003b110c(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  int iVar4;
  
  iVar3 = (int)&uStack_a0;
  iVar4 = (int)&uStack_a0;
  uVar10 = *(ulong *)(param_2 + 0x10);
  uVar11 = *(undefined8 *)(param_2 + 0x20);
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  pcStack_60 = FUN_003b1244;
  uStack_58 = 0x3b124c;
  iVar6 = -1;
  iVar7 = 8;
  _deflateInit2_();
  if (iVar3 == 0) {
    FUN_003b1254(&uStack_a0,param_1,param_2,PTR__deflate_0099a8f8);
    if ((iVar4 == 0) || (*(ulong *)(param_1 + 0x20) <= *(ulong *)(param_2 + 0x20))) {
      uVar9 = uVar10;
      if (uVar10 < *(ulong *)(param_2 + 0x10)) {
        do {
          plVar5 = *(long **)(*(long *)(param_2 + 8) + uVar9 * 0x20);
          if ((long *)((long)&MACH_HEADER.magic + 1) < plVar5) {
            do {
              lVar8 = *plVar5;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar2) {
                *plVar5 = lVar8 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar8 + -1 == 0) {
              (*(code *)plVar5[1])();
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(ulong *)(param_2 + 0x10));
      }
      uVar9 = 0;
      *(ulong *)(param_2 + 0x10) = uVar10;
      *(undefined8 *)(param_2 + 0x20) = uVar11;
    }
    else {
      uVar9 = 1;
    }
    _deflateEnd(&uStack_a0);
    return uVar9;
  }
  func_0x00773aa8();
  uVar10 = (ulong)(uint)(iVar7 * iVar6);
  if ((uVar10 != 0) && (_malloc(), uVar10 == 0)) {
    _abort();
    if ((uVar10 != 0) && (_calloc(), uVar10 == 0)) {
      _abort();
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_0099a260)();
      return uVar10;
    }
    return uVar10;
  }
  return uVar10;
}



/* Entry: 003b1244; end: 003b1253;  */

void FUN_003b1244(undefined8 param_1,int param_2,int param_3)

{
  ulong uVar1;
  
  uVar1 = (ulong)(uint)(param_3 * param_2);
  if ((uVar1 == 0) || (_malloc(), uVar1 != 0)) {
    return;
  }
  _abort();
  if ((uVar1 != 0) && (_calloc(), uVar1 == 0)) {
    _abort();
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)();
    return;
  }
  return;
}



/* Entry: 003b1254; end: 003b14c3;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

qword * FUN_003b1254(qword *param_1,qword *param_2,undefined8 param_3,qword *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  qword *pqVar5;
  undefined8 uVar6;
  qword qVar7;
  undefined8 *puVar8;
  undefined7 *puVar9;
  qword *pqVar10;
  qword *pqVar11;
  qword *pqVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  qword qVar16;
  ulong uVar17;
  uint uVar18;
  char *pcVar19;
  uint uVar20;
  qword *pqVar21;
  qword *unaff_x24;
  ulong uVar22;
  qword *apqStack_2c8 [2];
  char cStack_2b1;
  undefined1 auStack_2b0 [56];
  undefined8 uStack_278;
  undefined7 uStack_270;
  undefined1 uStack_269;
  undefined7 uStack_268;
  undefined1 uStack_261;
  ulong auStack_228 [2];
  undefined7 *puStack_218;
  ulong uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  code *pcStack_1f0;
  qword qStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  qword *pqStack_1c0;
  qword *pqStack_1b8;
  qword *pqStack_1b0;
  qword *pqStack_1a8;
  qword *pqStack_1a0;
  undefined8 uStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  qword **ppqStack_180;
  qword aqStack_178 [8];
  long lStack_138;
  qword *pqStack_130;
  qword *pqStack_128;
  qword *pqStack_120;
  qword *pqStack_118;
  qword *pqStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  qword *apqStack_f0 [2];
  long *plStack_e0;
  ulong uStack_d8;
  qword *pqStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  ulong uStack_b8;
  qword *pqStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  ulong uStack_98;
  qword *pqStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  qword *pqStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  pqVar21 = (qword *)&plStack_80;
  pqVar10 = &section_000003d8.size;
  pqVar12 = param_2;
  pcVar19 = (char *)param_4;
  FUN_003ec0c8(&plStack_80);
  if (plStack_80 == (long *)0x0 || (ulong)auStack_78 >> 0x20 == 0) {
    uVar20 = auStack_78._0_4_;
    if (plStack_80 == (long *)0x0) {
      uVar20 = auStack_78._0_4_ & 0xff;
    }
    uVar14 = (ulong)uVar20;
    *(uint *)(param_1 + 4) = uVar20;
    unaff_x24 = (qword *)(auStack_78 + 1);
    pqVar5 = unaff_x24;
    if (plStack_80 != (long *)0x0) {
      pqVar5 = pqStack_70;
    }
    param_1[3] = (qword)pqVar5;
    qVar16 = param_2[2];
    if (qVar16 == 0) {
LAB_003b13cc:
      if (plStack_80 == (long *)0x0) goto LAB_003b14bc;
      uStack_d8 = (long)auStack_78 - uVar14;
      plStack_e0 = plStack_80;
      uStack_c8 = uStack_68;
      pqStack_d0 = pqStack_70;
      pqVar12 = (qword *)&plStack_e0;
      auStack_78 = (undefined1  [8])uStack_d8;
      FUN_003ecd90(param_3);
      pqVar10 = (qword *)((long)&MACH_HEADER.magic + 1);
    }
    else {
      uVar22 = 0;
      pqVar21 = (qword *)0x0;
      do {
        uVar20 = 4;
        if (uVar22 != qVar16 - 1) {
          uVar20 = (uint)pqVar21;
        }
        pqVar21 = (qword *)(ulong)uVar20;
        qVar16 = param_2[1];
        plVar1 = (long *)(qVar16 + uVar22 * 0x20);
        if (*plVar1 == 0) {
          qVar16 = (long)plVar1 + 9;
          *(uint *)(param_1 + 1) = (uint)(byte)plVar1[1];
        }
        else {
          uVar17 = plVar1[1];
          if (uVar17 >> 0x20 != 0) {
LAB_003b14b4:
            func_0x00773b78();
            goto LAB_003b14b8;
          }
          *(dword *)(param_1 + 1) = (dword)uVar17;
          qVar16 = *(qword *)(qVar16 + uVar22 * 0x20 + 0x10);
        }
        *param_1 = qVar16;
        uVar17 = uVar14;
        do {
          if ((int)uVar17 == 0) {
            uStack_98 = (ulong)auStack_78;
            plStack_a0 = plStack_80;
            uStack_88 = uStack_68;
            pqStack_90 = pqStack_70;
            pqVar12 = (qword *)&plStack_a0;
            FUN_003ecd90(param_3);
            pqVar10 = &section_000003d8.size;
            FUN_003ec0c8(&plStack_c0);
            auStack_78 = (undefined1  [8])uStack_b8;
            plStack_80 = plStack_c0;
            uStack_68 = uStack_a8;
            pqStack_70 = pqStack_b0;
            if ((plStack_c0 != (long *)0x0) && (uStack_b8 >> 0x20 != 0)) {
              func_0x00773b44();
              goto LAB_003b14b4;
            }
            uVar14 = uStack_b8;
            if (plStack_c0 == (long *)0x0) {
              uVar14 = (ulong)((uint)uStack_b8 & 0xff);
            }
            *(dword *)(param_1 + 4) = (dword)uVar14;
            pqVar12 = unaff_x24;
            if (plStack_c0 != (long *)0x0) {
              pqVar12 = pqStack_b0;
            }
            param_1[3] = (qword)pqVar12;
          }
          pqVar10 = param_1;
          pqVar12 = pqVar21;
          (*(code *)param_4)();
          iVar4 = (int)pqVar10;
          if ((iVar4 < 0) && (iVar4 != -5)) {
            pcVar19 = "zlib error (%d)";
            pqVar12 = &segment_command_00000020.vmsize;
            apqStack_f0[0] = pqVar10;
            goto LAB_003b1414;
          }
          uVar17 = 0;
          uVar14 = (ulong)*(uint *)(param_1 + 4);
        } while (*(uint *)(param_1 + 4) == 0);
        if (*(dword *)(param_1 + 1) != 0) {
          pcVar19 = "zlib: not all input consumed";
          pqVar12 = (qword *)((long)&segment_command_00000020.vmsize + 5);
          goto LAB_003b1414;
        }
        uVar22 = uVar22 + 1;
        qVar16 = param_2[2];
      } while (uVar22 < qVar16);
      if (iVar4 == 1) goto LAB_003b13cc;
      pcVar19 = "zlib: Data error";
      pqVar12 = (qword *)((long)&segment_command_00000020.fileoff + 2);
LAB_003b1414:
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/compression/message_compress.cc"
                   ,pqVar12,1);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_80) {
        do {
          lVar15 = *plStack_80;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
          if (bVar3) {
            *plStack_80 = lVar15 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar15 == 1) {
          (*(code *)plStack_80[1])();
        }
      }
      pqVar10 = (qword *)0x0;
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
      return pqVar10;
    }
  }
  else {
LAB_003b14b8:
    func_0x00773adc();
LAB_003b14bc:
    func_0x00773b10();
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_003b14c4;
  lStack_138 = *(long *)PTR____stack_chk_guard_00999f88;
  pqVar5 = (qword *)((long)&MACH_HEADER.magic + 2);
  pqVar11 = pqVar12;
  pqStack_130 = unaff_x24;
  pqStack_128 = pqVar21;
  pqStack_120 = param_1;
  pqStack_118 = param_2;
  pqStack_110 = param_4;
  uStack_108 = param_3;
  puStack_100 = &stack0xfffffffffffffff0;
  FUN_00338e58();
  if ((int)pqVar5 != 0) {
    ppqStack_180 = apqStack_f0;
    pqVar21 = aqStack_178;
    _vsnprintf(pqVar21,0x40,pcVar19,apqStack_f0);
    if ((int)(uint)pqVar21 < 0) {
      pqVar21 = (qword *)0x0;
      pcVar19 = (char *)0x0;
    }
    else {
      unaff_x24 = pqVar21;
      if ((uint)pqVar21 < 0x40) {
        pcVar19 = (char *)0x0;
        pqVar21 = aqStack_178;
      }
      else {
        pcVar19 = (char *)(((ulong)pqVar21 & 0xffffffff) + 1);
        FUN_00338c74();
        ppqStack_180 = apqStack_f0;
        _vsnprintf();
        pqVar21 = (qword *)pcVar19;
      }
    }
    pqVar11 = pqVar12;
    FUN_00338e80(pqVar10,pqVar12,2,pqVar21);
    pqVar5 = (qword *)pcVar19;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_138) {
    return pqVar5;
  }
  ___stack_chk_fail();
  uStack_198 = 2;
  pcStack_188 = FUN_00339178;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar6 = 1;
  pqStack_1c0 = unaff_x24;
  pqStack_1b8 = pqVar21;
  pqStack_1b0 = (qword *)pcVar19;
  pqStack_1a8 = pqVar10;
  pqStack_1a0 = pqVar12;
  ppuStack_190 = &puStack_100;
  FUN_0033a598();
  qVar16 = *pqVar5;
  qVar7 = qVar16;
  uStack_278 = uVar6;
  _strrchr(qVar16,0x2f);
  if (qVar7 != 0) {
    qVar16 = qVar7 + 1;
  }
  puVar8 = &uStack_278;
  _localtime_r(puVar8,auStack_2b0);
  if (puVar8 == (undefined8 *)0x0) {
    uStack_268 = 0x656d69746c6163;
    uStack_261 = 0;
    uStack_270 = 0x6c3a726f727265;
    uStack_269 = 0x6f;
  }
  else {
    puVar9 = &uStack_270;
    _strftime(puVar9,0x40,"%m%d %H:%M:%S",auStack_2b0);
    if (puVar9 == (undefined7 *)0x0) {
      uStack_270 = 0x733a726f727265;
      uStack_269 = 0x74;
      uStack_268 = 0x656d69746672;
    }
  }
  uVar22 = (ulong)*(uint *)((long)pqVar5 + 0xc);
  func_0x00338e1c();
  uVar14 = uVar22;
  _pthread_self();
  auStack_228[1] = 0x560e98;
  puStack_218 = &uStack_270;
  uStack_210 = 0x560e98;
  uStack_208 = (ulong)pqVar11 & 0xffffffff;
  uStack_200 = 0x5606ac;
  pcStack_1f0 = FUN_00560738;
  uStack_1e0 = 0x560e98;
  uStack_1d8 = (ulong)(uint)pqVar5[1];
  uStack_1d0 = 0x5606ac;
  puVar13 = auStack_228;
  auStack_228[0] = uVar22;
  uStack_1f8 = uVar14;
  qStack_1e8 = qVar16;
  FUN_0056189c(apqStack_2c8,"%s%s.%09d %7ld %s:%d]",0x15,puVar13,6);
  uVar20 = *(uint *)((long)pqVar5 + 0xc);
  func_0x00338e6c();
  if (uVar20 == 0) {
    auStack_228[0] = auStack_228[0] & 0xffffffffffffff00;
    uStack_210 = uStack_210 & 0xffffffffffffff00;
LAB_00339300:
    pqVar21 = *(qword **)PTR____stderrp_00999f90;
    pcVar19 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_228);
    if ((char)uStack_210 == '\0') goto LAB_00339300;
    pqVar21 = *(qword **)PTR____stderrp_00999f90;
    pcVar19 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_2b1 < '\0') {
    pqVar21 = apqStack_2c8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1c8) {
    return pqVar21;
  }
  ___stack_chk_fail();
  if (cStack_2b1 < '\0') {
    __ZdlPv(apqStack_2c8[0]);
  }
  __Unwind_Resume();
  uVar20 = (uint)puVar13;
  if ((char *)0x3 < pcVar19) {
    uVar14 = (ulong)pcVar19 >> 2;
    pqVar12 = pqVar21;
    do {
      uVar20 = ((int)*pqVar12 * 0x16a88000 | (uint)((int)*pqVar12 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar13;
      uVar20 = (uVar20 >> 0x13 | uVar20 << 0xd) * 5 + 0xe6546b64;
      puVar13 = (ulong *)(ulong)uVar20;
      uVar14 = uVar14 - 1;
      pqVar12 = (qword *)((long)pqVar12 + 4);
    } while (uVar14 != 0);
    pqVar21 = (qword *)((long)pqVar21 + ((ulong)pcVar19 & 0xfffffffffffffffc));
  }
  uVar18 = 0;
  uVar14 = (ulong)pcVar19 & 3;
  if (uVar14 != 1) {
    if (uVar14 != 2) {
      if (uVar14 != 3) goto LAB_00339464;
      uVar18 = (uint)*(byte *)((long)pqVar21 + 2) << 0x10;
    }
    uVar18 = uVar18 | (uint)*(byte *)((long)pqVar21 + 1) << 8;
  }
  uVar18 = uVar18 ^ (byte)*pqVar21;
  uVar20 = (uVar18 * 0x16a88000 | uVar18 * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar20;
LAB_00339464:
  uVar20 = uVar20 ^ (uint)pcVar19;
  uVar20 = (uVar20 ^ uVar20 >> 0x10) * -0x7a143595;
  uVar20 = (uVar20 ^ uVar20 >> 0xd) * -0x3d4d51cb;
  return (qword *)(ulong)(uVar20 ^ uVar20 >> 0x10);
}



/* Entry: 003b14c4; end: 003b14cb;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003b14c4(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 003b14cc; end: 003b15b7;  */

undefined8 * FUN_003b14cc(undefined8 *param_1)

{
  param_1[0x19] = 0;
  param_1[0x18] = param_1 + 0x19;
  param_1[0x1a] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_003d3fe4(param_1 + 0x1e);
  return param_1;
}



/* Entry: 003b15b8; end: 003b15ff;  */

undefined8 FUN_003b15b8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x120;
  __Znwm(0x120);
  FUN_003b1600();
  return uVar1;
}



/* Entry: 003b1600; end: 003b171b;  */

long FUN_003b1600(long param_1,long param_2)

{
  FUN_003a6038(param_1,param_2);
  FUN_003f5204(param_1 + 0x18,param_2 + 0x18);
  FUN_003fcdd8(param_1 + 0x90,param_2 + 0x90);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = (undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  FUN_003b1e4c((undefined8 *)(param_1 + 0xc0),param_2 + 0xc0);
  FUN_003ead10(param_1 + 0xd8,param_2 + 0xd8);
  FUN_003d407c(param_1 + 0xf0,param_2 + 0xf0);
  return param_1;
}



/* Entry: 003b171c; end: 003b1a33;  */

long **** FUN_003b171c(void)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long ******pppppplVar4;
  long ****pppplVar5;
  code *pcVar6;
  long ******pppppplVar7;
  long ****pppplVar8;
  ulong uVar9;
  long ******pppppplVar10;
  long *****ppppplVar11;
  long lVar12;
  long ******pppppplVar13;
  long *****ppppplStack_180;
  long *****ppppplStack_178;
  long *****ppppplStack_170;
  long ***appplStack_168 [24];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  long ***appplStack_90 [3];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_60;
  char cStack_49;
  long ***ppplStack_48;
  
  FUN_003b14cc(appplStack_168);
  ppppplStack_180 = (long *****)0x0;
  ppppplStack_178 = (long *****)0x0;
  ppppplStack_170 = (long *****)0x0;
  if (ppppplRam0000000000b65d20 != (long *****)0x0) {
    ppppplVar11 = ppppplRam0000000000b65d20;
    do {
      if (ppppplStack_178 < ppppplStack_170) {
        pppppplVar13 = (long ******)(ppppplStack_178 + 1);
        *ppppplStack_178 = (long ****)ppppplVar11;
      }
      else {
        lVar12 = (long)ppppplStack_178 - (long)ppppplStack_180 >> 3;
        uVar1 = lVar12 + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_003b1ea4(&ppppplStack_180);
          goto LAB_003b19f8;
        }
        uVar9 = (long)ppppplStack_170 - (long)ppppplStack_180 >> 2;
        if (uVar9 <= uVar1) {
          uVar9 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)ppppplStack_170 - (long)ppppplStack_180)) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 == 0) {
          pppppplVar7 = (long ******)0x0;
        }
        else {
          pppppplVar7 = &ppppplStack_170;
          FUN_003b1eb8();
        }
        pppppplVar10 = pppppplVar7 + lVar12;
        pppppplVar13 = pppppplVar10 + 1;
        *pppppplVar10 = ppppplVar11;
        pppppplVar4 = (long ******)ppppplStack_178;
        while (ppppplStack_178 != ppppplStack_180) {
          ppppplStack_178 = ppppplStack_178 + -1;
          pppppplVar10 = pppppplVar10 + -1;
          *pppppplVar10 = (long *****)*ppppplStack_178;
          pppppplVar4 = (long ******)ppppplStack_180;
        }
        ppppplStack_170 = (long *****)(pppppplVar7 + uVar9);
        ppppplStack_180 = (long *****)pppppplVar10;
        if (pppppplVar4 != (long ******)0x0) {
          ppppplStack_178 = (long *****)pppppplVar13;
          __ZdlPv(pppppplVar4);
        }
      }
      ppppplVar11 = (long *****)ppppplVar11[4];
      ppppplStack_178 = (long *****)pppppplVar13;
    } while (ppppplVar11 != (long *****)0x0);
  }
  if (ppppplStack_178 != ppppplStack_180) {
    pppppplVar7 = (long ******)ppppplStack_178;
    do {
      pppppplVar7 = pppppplVar7 + -1;
      pppplVar8 = (*pppppplVar7)[3];
      ppplStack_48 = (long ***)appplStack_168;
      if (pppplVar8 == (long ****)0x0) {
        FUN_0033e390();
LAB_003b19f8:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x3b19fc);
        (*pcVar6)();
      }
      (*(code *)(*pppplVar8)[6])(pppplVar8,&ppplStack_48);
    } while (pppppplVar7 != (long ******)ppppplStack_180);
  }
  if (pcRam0000000000b65d28 != (code *)0x0) {
    (*pcRam0000000000b65d28)(appplStack_168);
  }
  pppplVar8 = appplStack_168;
  FUN_003b15b8();
  while (pppplVar5 = pppplRam0000000000b65d18, pppplRam0000000000b65d18 == (long ****)0x0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0xb65d18,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      pppplRam0000000000b65d18 = pppplVar8;
    }
    if (cVar2 == '\0') goto LAB_003b1930;
  }
  ClearExclusiveLocal();
  if (*(char *)((long)pppplVar8 + 0x11f) < '\0') {
    __ZdlPv(pppplVar8[0x21]);
  }
  FUN_003b1df4(pppplVar8 + 0x1e,pppplVar8[0x1f]);
  ppplStack_48 = (long ***)(pppplVar8 + 0x1b);
  FUN_003b1adc(&ppplStack_48);
  FUN_003b1b58(pppplVar8 + 0x18,pppplVar8[0x19]);
  lVar12 = 0xa8;
  do {
    ppplStack_48 = (long ***)((long)pppplVar8 + lVar12);
    FUN_003b1bb0(&ppplStack_48);
    lVar12 = lVar12 + -0x18;
  } while (lVar12 != 0x78);
  do {
    ppplStack_48 = (long ***)((long)pppplVar8 + lVar12);
    func_0x003b1d5c(&ppplStack_48);
    lVar12 = lVar12 + -0x18;
  } while (lVar12 != 0);
  ppplStack_48 = (long ***)pppplVar8;
  func_0x003b1cc4(&ppplStack_48);
  __ZdlPv(pppplVar8);
  pppplVar8 = pppplVar5;
LAB_003b1930:
  if ((long ******)ppppplStack_180 != (long ******)0x0) {
    ppppplStack_178 = ppppplStack_180;
    __ZdlPv();
  }
  if (cStack_49 < '\0') {
    __ZdlPv(uStack_60);
  }
  FUN_003b1df4(auStack_78,uStack_70);
  ppppplStack_180 = (long *****)appplStack_90;
  FUN_003b1adc(&ppppplStack_180);
  FUN_003b1b58(auStack_a8,uStack_a0);
  lVar12 = 0xa8;
  do {
    ppppplStack_180 = (long *****)((long)appplStack_168 + lVar12);
    FUN_003b1bb0(&ppppplStack_180);
    lVar12 = lVar12 + -0x18;
  } while (lVar12 != 0x78);
  lVar12 = 0x78;
  do {
    ppppplStack_180 = (long *****)((long)appplStack_168 + lVar12);
    func_0x003b1c2c(&ppppplStack_180);
    lVar12 = lVar12 + -0x18;
  } while (lVar12 != 0);
  ppppplStack_180 = (long *****)appplStack_168;
  func_0x003b1cc4(&ppppplStack_180);
  return pppplVar8;
}



/* Entry: 003b1a34; end: 003b1adb;  */

long FUN_003b1a34(long param_1)

{
  long lVar1;
  long lStack_28;
  
  if (*(char *)(param_1 + 0x11f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x108));
  }
  FUN_003b1df4(param_1 + 0xf0,*(undefined8 *)(param_1 + 0xf8));
  lStack_28 = param_1 + 0xd8;
  FUN_003b1adc(&lStack_28);
  FUN_003b1b58(param_1 + 0xc0,*(undefined8 *)(param_1 + 200));
  lVar1 = 0xa8;
  do {
    lStack_28 = param_1 + lVar1;
    FUN_003b1bb0(&lStack_28);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0x78);
  do {
    lStack_28 = param_1 + lVar1;
    func_0x003b1c2c(&lStack_28);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  lStack_28 = param_1;
  func_0x003b1cc4(&lStack_28);
  return param_1;
}



/* Entry: 003b1adc; end: 003b1b57;  */

void FUN_003b1adc(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  
  puVar2 = (undefined8 *)*param_1;
  plVar3 = (long *)*puVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)puVar2[1];
    plVar1 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar1 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar4 != plVar3);
      plVar1 = *(long **)*param_1;
    }
    puVar2[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(plVar1);
    return;
  }
  return;
}



/* Entry: 003b1b58; end: 003b1baf;  */

void FUN_003b1b58(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_003b1b58(param_1,*param_2);
    FUN_003b1b58(param_1,param_2[1]);
    plVar1 = (long *)param_2[6];
    param_2[6] = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_2);
    return;
  }
  return;
}



/* Entry: 003b1bb0; end: 003b1df3;  */

void FUN_003b1bb0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  
  puVar2 = (undefined8 *)*param_1;
  plVar3 = (long *)*puVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)puVar2[1];
    plVar1 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar1 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
        }
      } while (plVar4 != plVar3);
      plVar1 = *(long **)*param_1;
    }
    puVar2[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(plVar1);
    return;
  }
  return;
}



/* Entry: 003b1df4; end: 003b1e4b;  */

void FUN_003b1df4(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_003b1df4(param_1,*param_2);
    FUN_003b1df4(param_1,param_2[1]);
    plVar1 = (long *)param_2[6];
    param_2[6] = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_2);
    return;
  }
  return;
}



/* Entry: 003b1e4c; end: 003b1ea3;  */

void FUN_003b1e4c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar3;
  plVar5 = param_1 + 1;
  lVar1 = *plVar5;
  lVar2 = param_1[2];
  plVar4 = param_2 + 1;
  lVar6 = *plVar4;
  param_1[2] = param_2[2];
  *plVar5 = lVar6;
  *plVar4 = lVar1;
  param_2[2] = lVar2;
  if (param_1[2] != 0) {
    param_1 = (undefined8 *)(*plVar5 + 0x10);
  }
  *param_1 = plVar5;
  if (lVar2 != 0) {
    param_2 = (undefined8 *)(param_2[1] + 0x10);
  }
  *param_2 = plVar4;
  return;
}



/* Entry: 003b1ea4; end: 003b1eb7;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

undefined1  [16] FUN_003b1ea4(undefined8 param_1,ulong param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined7 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  char *pcVar11;
  code *pcVar12;
  uint uVar13;
  ulong *puVar14;
  uint uVar15;
  ulong uVar16;
  byte *pbVar17;
  long *unaff_x23;
  long *unaff_x24;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  byte *apbStack_218 [2];
  char cStack_201;
  undefined1 auStack_200 [56];
  undefined8 uStack_1c8;
  undefined7 uStack_1c0;
  undefined1 uStack_1b9;
  undefined7 uStack_1b8;
  undefined1 uStack_1b1;
  ulong auStack_178 [2];
  undefined7 *puStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  code *pcStack_140;
  long lStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined1 ***pppuStack_d0;
  long alStack_c8 [8];
  long lStack_88;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  FUN_0033b32c("vector");
  pcStack_18 = FUN_003b1eb8;
  if (param_2 >> 0x3d == 0) {
    lVar9 = param_2 << 3;
    puStack_20 = &stack0xfffffffffffffff0;
    __Znwm(lVar9);
    auVar22._8_8_ = param_2;
    auVar22._0_8_ = lVar9;
    return auVar22;
  }
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_00349558();
  uVar8 = 0xafac98;
  pcVar12 = FUN_003b1f00;
  pcStack_38 = FUN_003b1eec;
  ppuStack_40 = &puStack_20;
  _pthread_once();
  if ((int)uVar8 == 0) {
    auVar21._8_8_ = pcVar12;
    auVar21._0_8_ = uVar8;
    return auVar21;
  }
  func_0x00770f54();
  pcStack_48 = FUN_00339fbc;
  lStack_88 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar1 = (long *)((long)&MACH_HEADER.magic + 2);
  pcVar10 = pcVar12;
  puStack_50 = (undefined1 *)&ppuStack_40;
  FUN_00338e58();
  if ((int)plVar1 != 0) {
    pppuStack_d0 = &ppuStack_40;
    plVar1 = alStack_c8;
    _vsnprintf(plVar1,0x40,param_4,&ppuStack_40);
    if ((int)(uint)plVar1 < 0) {
      unaff_x23 = (long *)0x0;
      param_4 = (long *)0x0;
    }
    else {
      unaff_x24 = plVar1;
      if ((uint)plVar1 < 0x40) {
        param_4 = (long *)0x0;
        unaff_x23 = alStack_c8;
      }
      else {
        param_4 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
        FUN_00338c74();
        pppuStack_d0 = &ppuStack_40;
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    pcVar10 = pcVar12;
    FUN_00338e80(uVar8,pcVar12,2,unaff_x23);
    plVar1 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_88) {
    auVar18._8_8_ = pcVar10;
    auVar18._0_8_ = plVar1;
    return auVar18;
  }
  ___stack_chk_fail();
  uStack_e8 = 2;
  pcStack_d8 = FUN_00339178;
  lStack_118 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = 1;
  plStack_110 = unaff_x24;
  plStack_108 = unaff_x23;
  plStack_100 = param_4;
  uStack_f8 = uVar8;
  pcStack_f0 = pcVar12;
  ppuStack_e0 = &puStack_50;
  FUN_0033a598();
  lVar9 = *plVar1;
  lVar3 = lVar9;
  uStack_1c8 = uVar2;
  _strrchr(lVar9,0x2f);
  if (lVar3 != 0) {
    lVar9 = lVar3 + 1;
  }
  puVar4 = &uStack_1c8;
  _localtime_r(puVar4,auStack_200);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_1b8 = 0x656d69746c6163;
    uStack_1b1 = 0;
    uStack_1c0 = 0x6c3a726f727265;
    uStack_1b9 = 0x6f;
  }
  else {
    puVar5 = &uStack_1c0;
    _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_200);
    if (puVar5 == (undefined7 *)0x0) {
      uStack_1c0 = 0x733a726f727265;
      uStack_1b9 = 0x74;
      uStack_1b8 = 0x656d69746672;
    }
  }
  uVar6 = (ulong)*(uint *)((long)plVar1 + 0xc);
  func_0x00338e1c();
  uVar16 = uVar6;
  _pthread_self();
  auStack_178[1] = 0x560e98;
  puStack_168 = &uStack_1c0;
  uStack_160 = 0x560e98;
  uStack_158 = (ulong)pcVar10 & 0xffffffff;
  uStack_150 = 0x5606ac;
  pcStack_140 = FUN_00560738;
  uStack_130 = 0x560e98;
  uStack_128 = (ulong)*(uint *)(plVar1 + 1);
  uStack_120 = 0x5606ac;
  puVar14 = auStack_178;
  auStack_178[0] = uVar6;
  uStack_148 = uVar16;
  lStack_138 = lVar9;
  FUN_0056189c(apbStack_218,"%s%s.%09d %7ld %s:%d]",0x15,puVar14,6);
  uVar13 = *(uint *)((long)plVar1 + 0xc);
  func_0x00338e6c();
  if (uVar13 == 0) {
    auStack_178[0] = auStack_178[0] & 0xffffffffffffff00;
    uStack_160 = uStack_160 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar11 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_178);
    if ((char)uStack_160 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar11 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_201 < '\0') {
    pbVar7 = apbStack_218[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
    auVar19._8_8_ = pcVar11;
    auVar19._0_8_ = pbVar7;
    return auVar19;
  }
  ___stack_chk_fail();
  if (cStack_201 < '\0') {
    __ZdlPv(apbStack_218[0]);
  }
  __Unwind_Resume();
  uVar13 = (uint)puVar14;
  if ((char *)0x3 < pcVar11) {
    uVar16 = (ulong)pcVar11 >> 2;
    pbVar17 = pbVar7;
    do {
      uVar13 = (*(int *)pbVar17 * 0x16a88000 | (uint)(*(int *)pbVar17 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar14;
      uVar13 = (uVar13 >> 0x13 | uVar13 << 0xd) * 5 + 0xe6546b64;
      puVar14 = (ulong *)(ulong)uVar13;
      uVar16 = uVar16 - 1;
      pbVar17 = pbVar17 + 4;
    } while (uVar16 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar11 & 0xfffffffffffffffc);
  }
  uVar15 = 0;
  uVar16 = (ulong)pcVar11 & 3;
  if (uVar16 != 1) {
    if (uVar16 != 2) {
      if (uVar16 != 3) goto LAB_00339464;
      uVar15 = (uint)pbVar7[2] << 0x10;
    }
    uVar15 = uVar15 | (uint)pbVar7[1] << 8;
  }
  uVar13 = ((uVar15 ^ *pbVar7) * 0x16a88000 | (uVar15 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
           ^ uVar13;
LAB_00339464:
  uVar13 = uVar13 ^ (uint)pcVar11;
  uVar13 = (uVar13 ^ uVar13 >> 0x10) * -0x7a143595;
  uVar13 = (uVar13 ^ uVar13 >> 0xd) * -0x3d4d51cb;
  auVar20._4_4_ = 0;
  auVar20._0_4_ = uVar13 ^ uVar13 >> 0x10;
  auVar20._8_8_ = pcVar11;
  return auVar20;
}



/* Entry: 003b1eb8; end: 003b1eeb;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

undefined1  [16] FUN_003b1eb8(undefined8 param_1,ulong param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined7 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  char *pcVar11;
  code *pcVar12;
  uint uVar13;
  ulong *puVar14;
  uint uVar15;
  ulong uVar16;
  byte *pbVar17;
  long *unaff_x23;
  long *unaff_x24;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  byte *apbStack_208 [2];
  char cStack_1f1;
  undefined1 auStack_1f0 [56];
  undefined8 uStack_1b8;
  undefined7 uStack_1b0;
  undefined1 uStack_1a9;
  undefined7 uStack_1a8;
  undefined1 uStack_1a1;
  ulong auStack_168 [2];
  undefined7 *puStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  code *pcStack_130;
  long lStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined1 **ppuStack_c0;
  long alStack_b8 [8];
  long lStack_78;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (param_2 >> 0x3d == 0) {
    lVar9 = param_2 << 3;
    __Znwm(lVar9);
    auVar22._8_8_ = param_2;
    auVar22._0_8_ = lVar9;
    return auVar22;
  }
  FUN_00349558();
  uVar8 = 0xafac98;
  pcVar12 = FUN_003b1f00;
  pcStack_28 = FUN_003b1eec;
  puStack_30 = &stack0xfffffffffffffff0;
  _pthread_once();
  if ((int)uVar8 == 0) {
    auVar21._8_8_ = pcVar12;
    auVar21._0_8_ = uVar8;
    return auVar21;
  }
  func_0x00770f54();
  pcStack_38 = FUN_00339fbc;
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar1 = (long *)((long)&MACH_HEADER.magic + 2);
  pcVar10 = pcVar12;
  puStack_40 = (undefined1 *)&puStack_30;
  FUN_00338e58();
  if ((int)plVar1 != 0) {
    ppuStack_c0 = &puStack_30;
    plVar1 = alStack_b8;
    _vsnprintf(plVar1,0x40,param_4,&puStack_30);
    if ((int)(uint)plVar1 < 0) {
      unaff_x23 = (long *)0x0;
      param_4 = (long *)0x0;
    }
    else {
      unaff_x24 = plVar1;
      if ((uint)plVar1 < 0x40) {
        param_4 = (long *)0x0;
        unaff_x23 = alStack_b8;
      }
      else {
        param_4 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
        FUN_00338c74();
        ppuStack_c0 = &puStack_30;
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    pcVar10 = pcVar12;
    FUN_00338e80(uVar8,pcVar12,2,unaff_x23);
    plVar1 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    auVar18._8_8_ = pcVar10;
    auVar18._0_8_ = plVar1;
    return auVar18;
  }
  ___stack_chk_fail();
  uStack_d8 = 2;
  pcStack_c8 = FUN_00339178;
  lStack_108 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = 1;
  plStack_100 = unaff_x24;
  plStack_f8 = unaff_x23;
  plStack_f0 = param_4;
  uStack_e8 = uVar8;
  pcStack_e0 = pcVar12;
  ppuStack_d0 = &puStack_40;
  FUN_0033a598();
  lVar9 = *plVar1;
  lVar3 = lVar9;
  uStack_1b8 = uVar2;
  _strrchr(lVar9,0x2f);
  if (lVar3 != 0) {
    lVar9 = lVar3 + 1;
  }
  puVar4 = &uStack_1b8;
  _localtime_r(puVar4,auStack_1f0);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_1a8 = 0x656d69746c6163;
    uStack_1a1 = 0;
    uStack_1b0 = 0x6c3a726f727265;
    uStack_1a9 = 0x6f;
  }
  else {
    puVar5 = &uStack_1b0;
    _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_1f0);
    if (puVar5 == (undefined7 *)0x0) {
      uStack_1b0 = 0x733a726f727265;
      uStack_1a9 = 0x74;
      uStack_1a8 = 0x656d69746672;
    }
  }
  uVar6 = (ulong)*(uint *)((long)plVar1 + 0xc);
  func_0x00338e1c();
  uVar16 = uVar6;
  _pthread_self();
  auStack_168[1] = 0x560e98;
  puStack_158 = &uStack_1b0;
  uStack_150 = 0x560e98;
  uStack_148 = (ulong)pcVar10 & 0xffffffff;
  uStack_140 = 0x5606ac;
  pcStack_130 = FUN_00560738;
  uStack_120 = 0x560e98;
  uStack_118 = (ulong)*(uint *)(plVar1 + 1);
  uStack_110 = 0x5606ac;
  puVar14 = auStack_168;
  auStack_168[0] = uVar6;
  uStack_138 = uVar16;
  lStack_128 = lVar9;
  FUN_0056189c(apbStack_208,"%s%s.%09d %7ld %s:%d]",0x15,puVar14,6);
  uVar13 = *(uint *)((long)plVar1 + 0xc);
  func_0x00338e6c();
  if (uVar13 == 0) {
    auStack_168[0] = auStack_168[0] & 0xffffffffffffff00;
    uStack_150 = uStack_150 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar11 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_168);
    if ((char)uStack_150 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar11 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1f1 < '\0') {
    pbVar7 = apbStack_208[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_108) {
    auVar19._8_8_ = pcVar11;
    auVar19._0_8_ = pbVar7;
    return auVar19;
  }
  ___stack_chk_fail();
  if (cStack_1f1 < '\0') {
    __ZdlPv(apbStack_208[0]);
  }
  __Unwind_Resume();
  uVar13 = (uint)puVar14;
  if ((char *)0x3 < pcVar11) {
    uVar16 = (ulong)pcVar11 >> 2;
    pbVar17 = pbVar7;
    do {
      uVar13 = (*(int *)pbVar17 * 0x16a88000 | (uint)(*(int *)pbVar17 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar14;
      uVar13 = (uVar13 >> 0x13 | uVar13 << 0xd) * 5 + 0xe6546b64;
      puVar14 = (ulong *)(ulong)uVar13;
      uVar16 = uVar16 - 1;
      pbVar17 = pbVar17 + 4;
    } while (uVar16 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar11 & 0xfffffffffffffffc);
  }
  uVar15 = 0;
  uVar16 = (ulong)pcVar11 & 3;
  if (uVar16 != 1) {
    if (uVar16 != 2) {
      if (uVar16 != 3) goto LAB_00339464;
      uVar15 = (uint)pbVar7[2] << 0x10;
    }
    uVar15 = uVar15 | (uint)pbVar7[1] << 8;
  }
  uVar13 = ((uVar15 ^ *pbVar7) * 0x16a88000 | (uVar15 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
           ^ uVar13;
LAB_00339464:
  uVar13 = uVar13 ^ (uint)pcVar11;
  uVar13 = (uVar13 ^ uVar13 >> 0x10) * -0x7a143595;
  uVar13 = (uVar13 ^ uVar13 >> 0xd) * -0x3d4d51cb;
  auVar20._4_4_ = 0;
  auVar20._0_4_ = uVar13 ^ uVar13 >> 0x10;
  auVar20._8_8_ = pcVar11;
  return auVar20;
}



/* Entry: 003b1eec; end: 003b1eff;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003b1eec(void)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined7 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  code *pcVar8;
  char *pcVar9;
  code *pcVar10;
  uint uVar11;
  ulong *puVar12;
  byte *in_x3;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1e8 [2];
  char cStack_1d1;
  undefined1 auStack_1d0 [56];
  undefined8 uStack_198;
  undefined7 uStack_190;
  undefined1 uStack_189;
  undefined7 uStack_188;
  undefined1 uStack_181;
  ulong auStack_148 [2];
  undefined7 *puStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  code *pcStack_110;
  long lStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined1 *puStack_a0;
  byte abStack_98 [64];
  long lStack_58;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  pbVar7 = (byte *)0xafac98;
  pcVar10 = FUN_003b1f00;
  _pthread_once();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770f54();
  pcStack_18 = FUN_00339fbc;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar1 = (byte *)((long)&MACH_HEADER.magic + 2);
  pcVar8 = pcVar10;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_00338e58();
  if ((int)pbVar1 != 0) {
    puStack_a0 = &stack0xfffffffffffffff0;
    pbVar1 = abStack_98;
    _vsnprintf(pbVar1,0x40,in_x3,&stack0xfffffffffffffff0);
    if ((int)(uint)pbVar1 < 0) {
      unaff_x23 = (byte *)0x0;
      in_x3 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar1;
      if ((uint)pbVar1 < 0x40) {
        in_x3 = (byte *)0x0;
        unaff_x23 = abStack_98;
      }
      else {
        in_x3 = (byte *)(((ulong)pbVar1 & 0xffffffff) + 1);
        FUN_00338c74();
        puStack_a0 = &stack0xfffffffffffffff0;
        _vsnprintf();
        unaff_x23 = in_x3;
      }
    }
    pcVar8 = pcVar10;
    FUN_00338e80(pbVar7,pcVar10,2,unaff_x23);
    pbVar1 = in_x3;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return pbVar1;
  }
  ___stack_chk_fail();
  uStack_b8 = 2;
  pcStack_a8 = FUN_00339178;
  lStack_e8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = 1;
  pbStack_e0 = unaff_x24;
  pbStack_d8 = unaff_x23;
  pbStack_d0 = in_x3;
  pbStack_c8 = pbVar7;
  pcStack_c0 = pcVar10;
  ppuStack_b0 = &puStack_20;
  FUN_0033a598();
  lVar15 = *(long *)pbVar1;
  lVar3 = lVar15;
  uStack_198 = uVar2;
  _strrchr(lVar15,0x2f);
  if (lVar3 != 0) {
    lVar15 = lVar3 + 1;
  }
  puVar4 = &uStack_198;
  _localtime_r(puVar4,auStack_1d0);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_188 = 0x656d69746c6163;
    uStack_181 = 0;
    uStack_190 = 0x6c3a726f727265;
    uStack_189 = 0x6f;
  }
  else {
    puVar5 = &uStack_190;
    _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_1d0);
    if (puVar5 == (undefined7 *)0x0) {
      uStack_190 = 0x733a726f727265;
      uStack_189 = 0x74;
      uStack_188 = 0x656d69746672;
    }
  }
  uVar6 = (ulong)*(uint *)(pbVar1 + 0xc);
  func_0x00338e1c();
  uVar14 = uVar6;
  _pthread_self();
  auStack_148[1] = 0x560e98;
  puStack_138 = &uStack_190;
  uStack_130 = 0x560e98;
  uStack_128 = (ulong)pcVar8 & 0xffffffff;
  uStack_120 = 0x5606ac;
  pcStack_110 = FUN_00560738;
  uStack_100 = 0x560e98;
  uStack_f8 = (ulong)*(uint *)(pbVar1 + 8);
  uStack_f0 = 0x5606ac;
  puVar12 = auStack_148;
  auStack_148[0] = uVar6;
  uStack_118 = uVar14;
  lStack_108 = lVar15;
  FUN_0056189c(apbStack_1e8,"%s%s.%09d %7ld %s:%d]",0x15,puVar12,6);
  uVar11 = *(uint *)(pbVar1 + 0xc);
  func_0x00338e6c();
  if (uVar11 == 0) {
    auStack_148[0] = auStack_148[0] & 0xffffffffffffff00;
    uStack_130 = uStack_130 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_148);
    if ((char)uStack_130 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1d1 < '\0') {
    pbVar7 = apbStack_1e8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_e8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1d1 < '\0') {
    __ZdlPv(apbStack_1e8[0]);
  }
  __Unwind_Resume();
  uVar11 = (uint)puVar12;
  if ((char *)0x3 < pcVar9) {
    uVar14 = (ulong)pcVar9 >> 2;
    pbVar1 = pbVar7;
    do {
      uVar11 = (*(int *)pbVar1 * 0x16a88000 | (uint)(*(int *)pbVar1 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar12;
      uVar11 = (uVar11 >> 0x13 | uVar11 << 0xd) * 5 + 0xe6546b64;
      puVar12 = (ulong *)(ulong)uVar11;
      uVar14 = uVar14 - 1;
      pbVar1 = pbVar1 + 4;
    } while (uVar14 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar9 & 0xfffffffffffffffc);
  }
  uVar13 = 0;
  uVar14 = (ulong)pcVar9 & 3;
  if (uVar14 != 1) {
    if (uVar14 != 2) {
      if (uVar14 != 3) goto LAB_00339464;
      uVar13 = (uint)pbVar7[2] << 0x10;
    }
    uVar13 = uVar13 | (uint)pbVar7[1] << 8;
  }
  uVar11 = ((uVar13 ^ *pbVar7) * 0x16a88000 | (uVar13 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
           ^ uVar11;
LAB_00339464:
  uVar11 = uVar11 ^ (uint)pcVar9;
  uVar11 = (uVar11 ^ uVar11 >> 0x10) * -0x7a143595;
  uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar11 ^ uVar11 >> 0x10);
}



/* Entry: 003b1f00; end: 003b1f33;  */

void FUN_003b1f00(ulong param_1)

{
  long lVar1;
  
  FUN_00338d88();
  uRam0000000000b5e878 = param_1 & 0xffffffff;
  lVar1 = (param_1 & 0xffffffff) * 0x1d48;
  func_0x00338c94();
  lRam0000000000b65d30 = lVar1;
  return;
}



/* Entry: 003b1f34; end: 003b202b;  */

void FUN_003b1f34(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lStack_48;
  long lStack_40;
  undefined8 *puStack_38;
  
  FUN_0033adac(&lStack_48,&PTR_DAT_00afacb8);
  lVar1 = lStack_48;
  lStack_40 = 0;
  puStack_38 = (undefined8 *)0x0;
  lVar4 = lStack_48;
  _strchr(lStack_48,0x2c);
  while (lVar4 != 0) {
    FUN_003b2030(lVar1,lVar4,&puStack_38,&lStack_40);
    lVar1 = lVar4 + 1;
    lVar4 = lVar1;
    _strchr(lVar1,0x2c);
  }
  lVar4 = lVar1;
  _strlen(lVar1);
  FUN_003b2030(lVar1,lVar1 + lVar4,&puStack_38,&lStack_40);
  puVar3 = puStack_38;
  puVar2 = puStack_38;
  for (lVar1 = lStack_40; lVar1 != 0; lVar1 = lVar1 + -1) {
    FUN_00338cb8(*puVar2);
    puVar2 = puVar2 + 1;
  }
  FUN_00338cb8(puVar3);
  lVar1 = lStack_48;
  lStack_48 = 0;
  if (lVar1 != 0) {
    FUN_00338cb8();
  }
  return;
}



/* Entry: 003b202c; end: 003b202f;  */

void FUN_003b202c(void)

{
  return;
}



/* Entry: 003b2030; end: 003b20b3;  */

void FUN_003b2030(ulong param_1,ulong param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *extraout_x8;
  long lVar5;
  
  if (param_1 <= param_2) {
    lVar5 = *param_4;
    lVar1 = lVar5 + 1;
    lVar2 = (param_2 - param_1) + 1;
    FUN_00338c74();
    _memcpy();
    *(undefined1 *)(lVar2 + (param_2 - param_1)) = 0;
    lVar3 = *param_3;
    FUN_00338cbc(lVar3,lVar1 * 8);
    *param_3 = lVar3;
    *(long *)(lVar3 + lVar5 * 8) = lVar2;
    *param_4 = lVar1;
    return;
  }
  func_0x00773bac();
  uVar4 = 0x240;
  __Znwm();
  FUN_003b22e0();
  *extraout_x8 = uVar4;
  return;
}



/* Entry: 003b20b4; end: 003b20f7;  */

void FUN_003b20b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x240;
  __Znwm();
  FUN_003b22e0();
  *param_1 = uVar1;
  return;
}



/* Entry: 003b20f8; end: 003b2133;  */

dword * FUN_003b20f8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  dword *pdVar3;
  dword *pdVar4;
  dword *pdStack_38;
  
  if (lRam0000000000b5e880 == 0) {
    pdVar3 = &section_000001f8.reserved2;
    __Znwm();
    pdVar4 = pdVar3;
    FUN_003b22e0();
    *param_1 = pdVar3;
    return pdVar4;
  }
  pdVar4 = *(dword **)(lRam0000000000b5e880 + 0x18);
  if (pdVar4 == (dword *)0x0) {
    FUN_0033e390();
    pdVar4 = pdRam0000000000b5e888;
    if (pdRam0000000000b5e888 == (dword *)0x0) {
      FUN_003b20f8(&pdStack_38);
      do {
        pdVar4 = pdRam0000000000b5e888;
        if (pdRam0000000000b5e888 != (dword *)0x0) {
          ClearExclusiveLocal();
          if (pdStack_38 == (dword *)0x0) {
            return pdRam0000000000b5e888;
          }
          (**(code **)(*(long *)pdStack_38 + 0x20))();
          return pdVar4;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0xb5e888,0x10);
        if (bVar2) {
          pdRam0000000000b5e888 = pdStack_38;
          cVar1 = ExclusiveMonitorsStatus();
        }
        pdVar4 = pdStack_38;
      } while (cVar1 != '\0');
    }
    return pdVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x003b2124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)pdVar4 + 0x30))();
  return pdVar4;
}



/* Entry: 003b2134; end: 003b224b;  */

long * FUN_003b2134(void)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plStack_28;
  
  plVar3 = plRam0000000000b5e888;
  if (plRam0000000000b5e888 == (long *)0x0) {
    FUN_003b20f8(&plStack_28);
    do {
      plVar3 = plRam0000000000b5e888;
      if (plRam0000000000b5e888 != (long *)0x0) {
        ClearExclusiveLocal();
        if (plStack_28 == (long *)0x0) {
          return plRam0000000000b5e888;
        }
        (**(code **)(*plStack_28 + 0x20))();
        return plVar3;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5e888,0x10);
      if (bVar2) {
        plRam0000000000b5e888 = plStack_28;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar3 = plStack_28;
    } while (cVar1 != '\0');
  }
  return plVar3;
}



/* Entry: 003b224c; end: 003b22df;  */

undefined8 * FUN_003b224c(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_009dfb78;
  FUN_003b5e7c(param_1 + 1);
  FUN_003b38a0(param_1 + 0x1b,2);
  FUN_00339d50(param_1 + 0x3b);
  param_1[0x43] = &UNK_00811030;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  return param_1;
}



/* Entry: 003b22e0; end: 003b22e3;  */

undefined8 * FUN_003b22e0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_009dfb78;
  FUN_003b5e7c(param_1 + 1);
  FUN_003b38a0(param_1 + 0x1b,2);
  FUN_00339d50(param_1 + 0x3b);
  param_1[0x43] = &UNK_00811030;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  return param_1;
}



/* Entry: 003b22e4; end: 003b238f;  */

long FUN_003b22e4(long param_1)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_1 + 0x1d8;
  func_0x00339d8c(lVar1);
  if (*(long *)(param_1 + 0x230) == 0) {
    func_0x00339da8(lVar1);
    if (*(long *)(param_1 + 0x228) != 0) {
      __ZdlPv(*(long *)(param_1 + 0x218) + -8);
    }
    func_0x00339d70(lVar1);
    FUN_003b39c4(param_1 + 0xd8);
    FUN_003b5fb4(param_1 + 8);
    return param_1;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
               ,0x51,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x3b2384);
  (*pcVar2)();
}



/* Entry: 003b2390; end: 003b2393;  */

long FUN_003b2390(long param_1)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_1 + 0x1d8;
  func_0x00339d8c(lVar1);
  if (*(long *)(param_1 + 0x230) == 0) {
    func_0x00339da8(lVar1);
    if (*(long *)(param_1 + 0x228) != 0) {
      __ZdlPv(*(long *)(param_1 + 0x218) + -8);
    }
    func_0x00339d70(lVar1);
    FUN_003b39c4(param_1 + 0xd8);
    FUN_003b5fb4(param_1 + 8);
    return param_1;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
               ,0x51,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x3b2384);
  (*pcVar2)();
}



/* Entry: 003b2394; end: 003b23a7;  */

void FUN_003b2394(void)

{
  FUN_003b22e4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003b23a8; end: 003b2497;  */

long FUN_003b23a8(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_40 = param_2;
  uStack_38 = param_3;
  func_0x00339d8c(param_1 + 0x1d8);
  lVar5 = param_1 + 0x218;
  lVar6 = lVar5;
  func_0x003b2bb8(lVar5,&lStack_40);
  lVar2 = lStack_40;
  if (lVar6 == 0) {
    lVar6 = 0;
    goto LAB_003b2458;
  }
  lVar6 = param_1 + 8;
  func_0x003b5e88(lVar6,lStack_40 + 0x28);
  FUN_003b2498(lVar5,&lStack_40);
  uVar1 = (uint)lVar6 ^ 1;
  if (lVar2 == 0) {
    uVar1 = 1;
  }
  if ((uVar1 & 1) != 0) goto LAB_003b2458;
  plVar4 = (long *)(lVar2 + 8);
  plVar3 = *(long **)(lVar2 + 0x20);
  if (plVar3 == plVar4) {
    lVar5 = 4;
LAB_003b2440:
    (**(code **)(*plVar4 + lVar5 * 8))();
  }
  else if (plVar3 != (long *)0x0) {
    lVar5 = 5;
    plVar4 = plVar3;
    goto LAB_003b2440;
  }
  __ZdlPv(lVar2);
  lVar6 = 1;
LAB_003b2458:
  func_0x00339da8(param_1 + 0x1d8);
  return lVar6;
}



/* Entry: 003b2498; end: 003b251f;  */

void FUN_003b2498(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_003b2ad8();
  if (lVar1 != 0) {
    FUN_00554064(param_1,lVar1,0x10);
  }
  return;
}



/* Entry: 003b2520; end: 003b260f;  */

undefined1  [16] FUN_003b2520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  long *plVar8;
  char **ppcVar9;
  long lVar10;
  undefined1 auVar11 [16];
  char *pcStack_a0;
  long lStack_98;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003b2c04(alStack_58,param_3);
  plVar8 = alStack_58;
  FUN_003b2610(param_1,param_2,plVar8);
  if (plStack_40 == alStack_58) {
    lVar10 = 4;
    plVar5 = alStack_58;
LAB_003b2594:
    (**(code **)(*plVar5 + lVar10 * 8))();
  }
  else {
    plVar5 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      lVar10 = 5;
      goto LAB_003b2594;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = param_1;
    return auVar11;
  }
  ___stack_chk_fail();
  if (plStack_40 == alStack_58) {
    lVar10 = 4;
    plStack_40 = alStack_58;
  }
  else {
    if (plStack_40 == (long *)0x0) goto LAB_003b2608;
    lVar10 = 5;
  }
  (**(code **)(*plStack_40 + lVar10 * 8))();
LAB_003b2608:
  __Unwind_Resume();
  ppcVar9 = &pcStack_a0;
  plVar6 = plVar5;
  func_0x003b21ac();
  pcVar7 = section_00000068.segname + 8;
  __Znwm();
  *(undefined ***)pcVar7 = &PTR_DAT_009dfc10;
  *(undefined8 *)(pcVar7 + 0x20) = 0;
  FUN_003b2dc8(pcVar7 + 8,plVar8);
  *(long **)(pcVar7 + 0x68) = plVar5;
  plVar8 = plVar5 + 0x47;
  do {
    lStack_98 = *plVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lStack_98 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  pcStack_a0 = pcVar7;
  func_0x00339d8c(plVar5 + 0x3b);
  plVar8 = plVar5 + 0x43;
  FUN_003b2e58();
  if (((ulong)ppcVar9 & 0xff) != 0) {
    puVar3 = (undefined8 *)(plVar5[0x44] + (long)plVar8 * 0x10);
    puVar3[1] = lStack_98;
    *puVar3 = pcStack_a0;
  }
  *(long *)(pcVar7 + 0x78) = lStack_98;
  *(char **)(pcVar7 + 0x70) = pcStack_a0;
  FUN_003b5e7c(plVar5 + 1,pcVar7 + 0x28,plVar6,pcVar7);
  func_0x00339da8(plVar5 + 0x3b);
  auVar4._8_8_ = lStack_98;
  auVar4._0_8_ = pcStack_a0;
  return auVar4;
}



/* Entry: 003b2610; end: 003b2703;  */

undefined1  [16] FUN_003b2610(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 *puVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  
  puVar6 = (undefined1 *)0xffffffffffffffc0;
  lVar7 = param_1;
  func_0x003b21ac();
  pcVar8 = section_00000068.segname + 8;
  __Znwm();
  *(undefined ***)pcVar8 = &PTR_DAT_009dfc10;
  *(undefined8 *)(pcVar8 + 0x20) = 0;
  FUN_003b2dc8(pcVar8 + 8,param_3);
  *(long *)(pcVar8 + 0x68) = param_1;
  plVar1 = (long *)(param_1 + 0x238);
  do {
    lVar10 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar10 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x00339d8c(param_1 + 0x1d8);
  lVar9 = param_1 + 0x218;
  FUN_003b2e58();
  if (((ulong)puVar6 & 0xff) != 0) {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x220) + lVar9 * 0x10);
    puVar4[1] = lVar10;
    *puVar4 = pcVar8;
  }
  *(long *)(pcVar8 + 0x78) = lVar10;
  *(char **)(pcVar8 + 0x70) = pcVar8;
  FUN_003b5e7c(param_1 + 8,pcVar8 + 0x28,lVar7,pcVar8);
  func_0x00339da8(param_1 + 0x1d8);
  auVar5._8_8_ = lVar10;
  auVar5._0_8_ = pcVar8;
  return auVar5;
}



/* Entry: 003b2704; end: 003b27e7;  */

undefined1  [16] FUN_003b2704(undefined8 param_1,undefined ***param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuStack_58 = &PTR_FUN_009dfc60;
  uStack_50 = param_3;
  pppuStack_40 = &ppuStack_58;
  FUN_003b2610(param_1,param_2,&ppuStack_58);
  pppuVar3 = param_2;
  if (pppuStack_40 == &ppuStack_58) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_58;
LAB_003b276c:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else {
    pppuVar1 = pppuStack_40;
    if (pppuStack_40 != (undefined ***)0x0) {
      lVar4 = 5;
      goto LAB_003b276c;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
  ___stack_chk_fail();
  if (pppuStack_40 == &ppuStack_58) {
    lVar4 = 4;
    pppuVar2 = &ppuStack_58;
  }
  else {
    if (pppuStack_40 == (undefined ***)0x0) goto LAB_003b27e0;
    lVar4 = 5;
    pppuVar2 = pppuStack_40;
  }
  (*(code *)(*pppuVar2)[lVar4])();
LAB_003b27e0:
  __Unwind_Resume();
  pppuVar2 = pppuVar1 + 0x1b;
  func_0x00339d8c();
  func_0x003b3e2c(pppuVar1 + 0x30,pppuVar3);
  if (*(int *)(pppuVar1 + 0x37) == 0) {
    *(int *)((long)pppuVar1 + 0x1b4) = *(int *)((long)pppuVar1 + 0x1b4) + 1;
    __Znwm(0x28);
    pppuVar3 = pppuVar2;
    FUN_003b32cc();
  }
  else {
    FUN_00339f68(pppuVar1 + 0x23);
  }
  if (pppuVar1[0x38] != pppuVar1[0x39]) {
    FUN_003b38a4();
  }
  func_0x00339da8(pppuVar2);
  auVar6._8_8_ = pppuVar3;
  auVar6._0_8_ = pppuVar2;
  return auVar6;
}



/* Entry: 003b27e8; end: 003b27ef;  */

void FUN_003b27e8(long param_1,undefined8 param_2)

{
  func_0x00339d8c();
  func_0x003b3e2c(param_1 + 0x180,param_2);
  if (*(int *)(param_1 + 0x1b8) == 0) {
    *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + 1;
    __Znwm(0x28);
    FUN_003b32cc();
  }
  else {
    FUN_00339f68(param_1 + 0x118);
  }
  if (*(long *)(param_1 + 0x1c0) != *(long *)(param_1 + 0x1c8)) {
    FUN_003b38a4();
  }
  func_0x00339da8(param_1 + 0xd8);
  return;
}



/* Entry: 003b27f0; end: 003b28c3;  */

void FUN_003b27f0(long param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  char *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuStack_48 = &PTR_DAT_009dfce0;
  uStack_40 = param_2;
  pppuStack_30 = &ppuStack_48;
  FUN_003b39c8(param_1 + 0xd8,&ppuStack_48);
  if (pppuStack_30 == &ppuStack_48) {
    lVar6 = 4;
    pppuVar1 = &ppuStack_48;
LAB_003b2850:
    (*(code *)(*pppuVar1)[lVar6])();
  }
  else {
    pppuVar1 = pppuStack_30;
    if (pppuStack_30 != (undefined ***)0x0) {
      lVar6 = 5;
      goto LAB_003b2850;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (pppuStack_30 == &ppuStack_48) {
    lVar6 = 4;
    pppuVar2 = &ppuStack_48;
LAB_003b28b0:
    (*(code *)(*pppuVar2)[lVar6])();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar2 = pppuStack_30;
    goto LAB_003b28b0;
  }
  __Unwind_Resume(pppuVar1);
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
               ,0x83,2,"assertion failed: %s");
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
               ,0x87,2,"assertion failed: %s");
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
               ,0x8b,2,"assertion failed: %s");
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
               ,0x92,2,"assertion failed: %s");
  _abort();
  pcVar3 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
  ;
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
               ,0x9b,2,"assertion failed: %s");
  _abort();
  plVar5 = (long *)(pcVar3 + 8);
  plVar4 = *(long **)(pcVar3 + 0x20);
  if (plVar4 == plVar5) {
    lVar6 = 4;
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_003b2a1c;
    lVar6 = 5;
    plVar5 = plVar4;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_003b2a1c:
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(pcVar3);
  return;
}



/* Entry: 003b28c4; end: 003b29db;  */

void FUN_003b28c4(void)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
               ,0x83,2,"assertion failed: %s");
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
               ,0x87,2,"assertion failed: %s");
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
               ,0x8b,2,"assertion failed: %s");
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
               ,0x92,2,"assertion failed: %s");
  _abort();
  pcVar1 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
  ;
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/iomgr_engine.cc"
               ,0x9b,2,"assertion failed: %s");
  _abort();
  plVar3 = (long *)(pcVar1 + 8);
  plVar2 = *(long **)(pcVar1 + 0x20);
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_003b2a1c;
    lVar4 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_003b2a1c:
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(pcVar1);
  return;
}



/* Entry: 003b29dc; end: 003b2a2b;  */

void FUN_003b29dc(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(param_1 + 8);
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_003b2a1c;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_003b2a1c:
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 003b2a2c; end: 003b2ad7;  */

long FUN_003b2a2c(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined8 uVar12;
  byte bVar19;
  
  lVar7 = *(long *)(param_1 + 0x68) + 0x1d8;
  func_0x00339d8c(lVar7);
  plVar5 = (long *)(param_1 + 0x70);
  FUN_003b2498(*(long *)(param_1 + 0x68) + 0x218);
  func_0x00339da8(lVar7);
  puVar3 = *(ulong **)(param_1 + 0x20);
  if (puVar3 == (ulong *)0x0) {
    FUN_0033e390();
    func_0x0040cf10();
    func_0x00339da8(lVar7);
    __Unwind_Resume();
    func_0x0040cf10();
    Hint_Prefetch(*puVar3,0,2,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (long)&PTR_LOOP_00a01490 + *plVar5;
    uVar10 = plVar5[1] +
             (SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
             ((long)&PTR_LOOP_00a01490 + *plVar5) * -0x622015f714c7d297);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar10;
    uVar6 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar10 * -0x622015f714c7d297;
    lVar7 = 0;
    uVar8 = *puVar3;
    uVar10 = uVar8 >> 0xc ^ uVar6 >> 7;
    bVar9 = (byte)uVar6 & 0x7f;
    while( true ) {
      uVar10 = uVar10 & puVar3[2];
      uVar12 = *(undefined8 *)(uVar8 + uVar10);
      bVar13 = (byte)((ulong)uVar12 >> 8);
      bVar14 = (byte)((ulong)uVar12 >> 0x10);
      bVar15 = (byte)((ulong)uVar12 >> 0x18);
      bVar16 = (byte)((ulong)uVar12 >> 0x20);
      bVar17 = (byte)((ulong)uVar12 >> 0x28);
      bVar18 = (byte)((ulong)uVar12 >> 0x30);
      bVar19 = (byte)((ulong)uVar12 >> 0x38);
      for (uVar6 = CONCAT17(-(bVar19 == bVar9),
                            CONCAT16(-(bVar18 == bVar9),
                                     CONCAT15(-(bVar17 == bVar9),
                                              CONCAT14(-(bVar16 == bVar9),
                                                       CONCAT13(-(bVar15 == bVar9),
                                                                CONCAT12(-(bVar14 == bVar9),
                                                                         CONCAT11(-(bVar13 == bVar9)
                                                                                  ,-((byte)uVar12 ==
                                                                                    bVar9)))))))) &
                   0x8080808080808080; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
        uVar11 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar10 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & puVar3[2];
        plVar4 = (long *)(puVar3[1] + uVar11 * 0x10);
        if (*plVar4 == *plVar5 && plVar4[1] == plVar5[1]) {
          return uVar8 + uVar11;
        }
      }
      if (CONCAT17(-(bVar19 == 0x80),
                   CONCAT16(-(bVar18 == 0x80),
                            CONCAT15(-(bVar17 == 0x80),
                                     CONCAT14(-(bVar16 == 0x80),
                                              CONCAT13(-(bVar15 == 0x80),
                                                       CONCAT12(-(bVar14 == 0x80),
                                                                CONCAT11(-(bVar13 == 0x80),
                                                                         -((byte)uVar12 == 0x80)))))
                                    ))) != 0) break;
      lVar7 = lVar7 + 8;
      uVar10 = lVar7 + uVar10;
    }
    return 0;
  }
  plVar5 = (long *)(param_1 + 8);
  (**(code **)(*puVar3 + 0x30))();
  plVar4 = *(long **)(param_1 + 0x20);
  if (plVar4 == plVar5) {
    lVar7 = 4;
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_003b2aa8;
    lVar7 = 5;
    plVar5 = plVar4;
  }
  (**(code **)(*plVar5 + lVar7 * 8))();
LAB_003b2aa8:
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return param_1;
}



/* Entry: 003b2ad8; end: 003b2c03;  */

long FUN_003b2ad8(ulong *param_1,long *param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined8 uVar10;
  byte bVar17;
  
  Hint_Prefetch(*param_1,0,2,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)&PTR_LOOP_00a01490 + *param_2;
  uVar8 = param_2[1] +
          (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_00a01490 + *param_2) * -0x622015f714c7d297);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar8;
  uVar4 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar8 * -0x622015f714c7d297;
  lVar5 = 0;
  uVar6 = *param_1;
  uVar8 = uVar6 >> 0xc ^ uVar4 >> 7;
  bVar7 = (byte)uVar4 & 0x7f;
  while( true ) {
    uVar8 = uVar8 & param_1[2];
    uVar10 = *(undefined8 *)(uVar6 + uVar8);
    bVar11 = (byte)((ulong)uVar10 >> 8);
    bVar12 = (byte)((ulong)uVar10 >> 0x10);
    bVar13 = (byte)((ulong)uVar10 >> 0x18);
    bVar14 = (byte)((ulong)uVar10 >> 0x20);
    bVar15 = (byte)((ulong)uVar10 >> 0x28);
    bVar16 = (byte)((ulong)uVar10 >> 0x30);
    bVar17 = (byte)((ulong)uVar10 >> 0x38);
    for (uVar4 = CONCAT17(-(bVar17 == bVar7),
                          CONCAT16(-(bVar16 == bVar7),
                                   CONCAT15(-(bVar15 == bVar7),
                                            CONCAT14(-(bVar14 == bVar7),
                                                     CONCAT13(-(bVar13 == bVar7),
                                                              CONCAT12(-(bVar12 == bVar7),
                                                                       CONCAT11(-(bVar11 == bVar7),
                                                                                -((byte)uVar10 ==
                                                                                 bVar7)))))))) &
                 0x8080808080808080; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar9 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar8 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & param_1[2];
      plVar1 = (long *)(param_1[1] + uVar9 * 0x10);
      if (*plVar1 == *param_2 && plVar1[1] == param_2[1]) {
        return uVar6 + uVar9;
      }
    }
    if (CONCAT17(-(bVar17 == 0x80),
                 CONCAT16(-(bVar16 == 0x80),
                          CONCAT15(-(bVar15 == 0x80),
                                   CONCAT14(-(bVar14 == 0x80),
                                            CONCAT13(-(bVar13 == 0x80),
                                                     CONCAT12(-(bVar12 == 0x80),
                                                              CONCAT11(-(bVar11 == 0x80),
                                                                       -((byte)uVar10 == 0x80)))))))
                ) != 0) break;
    lVar5 = lVar5 + 8;
    uVar8 = lVar5 + uVar8;
  }
  return 0;
}



/* Entry: 003b2c04; end: 003b2c67;  */

long FUN_003b2c04(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 003b2c68; end: 003b2c6f;  */

void FUN_003b2c68(void)

{
  return;
}



/* Entry: 003b2c70; end: 003b2ca3;  */

void FUN_003b2c70(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_FUN_009dfc60;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 003b2ca4; end: 003b2ccf;  */

void FUN_003b2ca4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_009dfc60;
  param_2[1] = uVar1;
  return;
}



/* Entry: 003b2cd0; end: 003b2d0b;  */

long FUN_003b2cd0(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009dfcc0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 003b2d0c; end: 003b2d1f;  */

undefined ** FUN_003b2d0c(void)

{
  return &PTR_DAT_009dfcc0;
}



/* Entry: 003b2d20; end: 003b2d53;  */

void FUN_003b2d20(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_DAT_009dfce0;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 003b2d54; end: 003b2d7f;  */

void FUN_003b2d54(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_009dfce0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 003b2d80; end: 003b2dbb;  */

long FUN_003b2d80(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009dfd40);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 003b2dbc; end: 003b2dc7;  */

undefined ** FUN_003b2dbc(void)

{
  return &PTR_DAT_009dfd40;
}



/* Entry: 003b2dc8; end: 003b2e57;  */

long * FUN_003b2dc8(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar1 == param_1) {
    lVar2 = 4;
    plVar1 = param_1;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_003b2e0c;
    lVar2 = 5;
  }
  (**(code **)(*plVar1 + lVar2 * 8))();
LAB_003b2e0c:
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == 0) {
    param_1[3] = 0;
  }
  else if (lVar2 == param_2) {
    param_1[3] = (long)param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    param_1[3] = lVar2;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 003b2e58; end: 003b2f47;  */

undefined1  [16] FUN_003b2e58(ulong *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  byte bVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  undefined8 uVar11;
  byte bVar18;
  undefined1 auVar19 [16];
  
  lVar8 = 0;
  uVar9 = *param_1;
  Hint_Prefetch(uVar9,0,2,0);
  uVar5 = (long)&PTR_LOOP_00a01490 + *param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar5;
  uVar5 = param_2[1] +
          (SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar5 * -0x622015f714c7d297);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar5;
  uVar5 = SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar5 * -0x622015f714c7d297;
  bVar6 = (byte)uVar5 & 0x7f;
  uVar5 = uVar5 >> 7 ^ uVar9 >> 0xc;
  while( true ) {
    uVar5 = uVar5 & param_1[2];
    uVar11 = *(undefined8 *)(uVar9 + uVar5);
    bVar12 = (byte)((ulong)uVar11 >> 8);
    bVar13 = (byte)((ulong)uVar11 >> 0x10);
    bVar14 = (byte)((ulong)uVar11 >> 0x18);
    bVar15 = (byte)((ulong)uVar11 >> 0x20);
    bVar16 = (byte)((ulong)uVar11 >> 0x28);
    bVar17 = (byte)((ulong)uVar11 >> 0x30);
    bVar18 = (byte)((ulong)uVar11 >> 0x38);
    uVar10 = CONCAT17(-(bVar18 == bVar6),
                      CONCAT16(-(bVar17 == bVar6),
                               CONCAT15(-(bVar16 == bVar6),
                                        CONCAT14(-(bVar15 == bVar6),
                                                 CONCAT13(-(bVar14 == bVar6),
                                                          CONCAT12(-(bVar13 == bVar6),
                                                                   CONCAT11(-(bVar12 == bVar6),
                                                                            -((byte)uVar11 == bVar6)
                                                                           ))))))) &
             0x8080808080808080;
    if (uVar10 != 0) {
      do {
        uVar2 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        puVar7 = (ulong *)(uVar5 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & param_1[2]
                          );
        plVar1 = (long *)(param_1[1] + (long)puVar7 * 0x10);
        if (*plVar1 == *param_2 && plVar1[1] == param_2[1]) {
          uVar11 = 0;
          goto LAB_003b2f3c;
        }
        uVar10 = uVar10 - 1 & uVar10;
      } while (uVar10 != 0);
    }
    if (CONCAT17(-(bVar18 == 0x80),
                 CONCAT16(-(bVar17 == 0x80),
                          CONCAT15(-(bVar16 == 0x80),
                                   CONCAT14(-(bVar15 == 0x80),
                                            CONCAT13(-(bVar14 == 0x80),
                                                     CONCAT12(-(bVar13 == 0x80),
                                                              CONCAT11(-(bVar12 == 0x80),
                                                                       -((byte)uVar11 == 0x80)))))))
                ) != 0) break;
    lVar8 = lVar8 + 8;
    uVar5 = lVar8 + uVar5;
  }
  FUN_003b2f48();
  uVar11 = 1;
  puVar7 = param_1;
LAB_003b2f3c:
  auVar19._8_8_ = uVar11;
  auVar19._0_8_ = puVar7;
  return auVar19;
}



/* Entry: 003b2f48; end: 003b3037;  */

void FUN_003b2f48(ulong *param_1,ulong param_2)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar3 = *param_1;
  uVar4 = param_1[2];
  uVar5 = (uVar3 >> 0xc ^ param_2 >> 7) & uVar4;
  uVar8 = *(undefined8 *)(uVar3 + uVar5);
  uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                   CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                            CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                     CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                              CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                       CONCAT12(-((char)((ulong)uVar8 >> 0x10) < -1)
                                                                ,CONCAT11(-((char)((ulong)uVar8 >> 8
                                                                                  ) < -1),
                                                                          -((char)uVar8 < -1))))))))
  ;
  if (uVar7 == 0) {
    lVar6 = 8;
    do {
      uVar5 = uVar5 + lVar6 & uVar4;
      uVar8 = *(undefined8 *)(uVar3 + uVar5);
      uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                       CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                                CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                         CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                                  CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                           CONCAT12(-((char)((ulong)uVar8 >> 0x10) <
                                                                     -1),CONCAT11(-((char)((ulong)
                                                  uVar8 >> 8) < -1),-((char)uVar8 < -1))))))));
      lVar6 = lVar6 + 8;
    } while (uVar7 == 0);
  }
  uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  puVar2 = (ulong *)(uVar5 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4);
  if ((*(long *)(uVar3 - 8) == 0) && (*(char *)(uVar3 + (long)puVar2) != -2)) {
    FUN_003b3160(param_1);
    puVar2 = param_1;
    func_0x00553d3c(param_1,param_2);
    uVar3 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  *(ulong *)(uVar3 - 8) = *(long *)(uVar3 - 8) - (ulong)(*(char *)(uVar3 + (long)puVar2) == -0x80);
  bVar1 = (byte)param_2 & 0x7f;
  uVar4 = param_1[2];
  *(byte *)(uVar3 + (long)puVar2) = bVar1;
  *(byte *)(uVar3 + (uVar4 & (long)puVar2 - 7U) + (uVar4 & 7)) = bVar1;
  return;
}



/* Entry: 003b3038; end: 003b315f;  */

void FUN_003b3038(ulong *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar16 = param_1[2];
  param_1[2] = param_2;
  FUN_003b3200();
  if (uVar16 != 0) {
    uVar8 = 0;
    uVar9 = param_1[1];
    do {
      if (-1 < *(char *)(uVar2 + uVar8)) {
        plVar1 = (long *)(uVar3 + uVar8 * 0x10);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (long)&PTR_LOOP_00a01490 + *plVar1;
        uVar14 = plVar1[1] +
                 (SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^
                 ((long)&PTR_LOOP_00a01490 + *plVar1) * -0x622015f714c7d297);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar14;
        uVar12 = SUB168(auVar6 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar14 * -0x622015f714c7d297;
        uVar10 = *param_1;
        uVar11 = param_1[2];
        uVar13 = (uVar12 >> 7 ^ uVar10 >> 0xc) & uVar11;
        uVar17 = *(undefined8 *)(uVar10 + uVar13);
        uVar14 = CONCAT17(-((char)((ulong)uVar17 >> 0x38) < -1),
                          CONCAT16(-((char)((ulong)uVar17 >> 0x30) < -1),
                                   CONCAT15(-((char)((ulong)uVar17 >> 0x28) < -1),
                                            CONCAT14(-((char)((ulong)uVar17 >> 0x20) < -1),
                                                     CONCAT13(-((char)((ulong)uVar17 >> 0x18) < -1),
                                                              CONCAT12(-((char)((ulong)uVar17 >>
                                                                               0x10) < -1),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar17 >> 8) < -1),-((char)uVar17 < -1))))))));
        if (uVar14 == 0) {
          lVar15 = 8;
          do {
            uVar13 = uVar13 + lVar15 & uVar11;
            uVar17 = *(undefined8 *)(uVar10 + uVar13);
            uVar14 = CONCAT17(-((char)((ulong)uVar17 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar17 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar17 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar17 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar17 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar17 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar17 >> 8) < -1),
                                                           -((char)uVar17 < -1))))))));
            lVar15 = lVar15 + 8;
          } while (uVar14 == 0);
        }
        uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar14 = uVar13 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar11;
        bVar4 = (byte)uVar12 & 0x7f;
        *(byte *)(uVar10 + uVar14) = bVar4;
        *(byte *)(uVar10 + (uVar14 - 7 & uVar11) + (uVar11 & 7)) = bVar4;
        lVar15 = *plVar1;
        plVar7 = (long *)(uVar9 + uVar14 * 0x10);
        plVar7[1] = plVar1[1];
        *plVar7 = lVar15;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar16);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(uVar2 - 8);
    return;
  }
  return;
}



/* Entry: 003b3160; end: 003b31ff;  */

void FUN_003b3160(ulong *param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  lVar8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar9 = param_1[2];
  if ((uVar9 < 9) || (uVar9 * 0x19 < param_1[3] << 5)) {
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar8) {
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar16 = param_1[2];
      param_1[2] = uVar9 << 1 | 1;
      FUN_003b3200();
      if (uVar16 != 0) {
        uVar9 = 0;
        uVar10 = param_1[1];
        do {
          if (-1 < *(char *)(uVar2 + uVar9)) {
            plVar1 = (long *)(uVar3 + uVar9 * 0x10);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (long)&PTR_LOOP_00a01490 + *plVar1;
            uVar15 = plVar1[1] +
                     (SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^
                     ((long)&PTR_LOOP_00a01490 + *plVar1) * -0x622015f714c7d297);
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar15;
            uVar13 = SUB168(auVar6 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar15 * -0x622015f714c7d297;
            uVar11 = *param_1;
            uVar12 = param_1[2];
            uVar14 = (uVar13 >> 7 ^ uVar11 >> 0xc) & uVar12;
            uVar17 = *(undefined8 *)(uVar11 + uVar14);
            uVar15 = CONCAT17(-((char)((ulong)uVar17 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar17 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar17 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar17 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar17 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar17 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar17 >> 8) < -1),
                                                           -((char)uVar17 < -1))))))));
            if (uVar15 == 0) {
              lVar8 = 8;
              do {
                uVar14 = uVar14 + lVar8 & uVar12;
                uVar17 = *(undefined8 *)(uVar11 + uVar14);
                uVar15 = CONCAT17(-((char)((ulong)uVar17 >> 0x38) < -1),
                                  CONCAT16(-((char)((ulong)uVar17 >> 0x30) < -1),
                                           CONCAT15(-((char)((ulong)uVar17 >> 0x28) < -1),
                                                    CONCAT14(-((char)((ulong)uVar17 >> 0x20) < -1),
                                                             CONCAT13(-((char)((ulong)uVar17 >> 0x18
                                                                              ) < -1),
                                                                      CONCAT12(-((char)((ulong)
                                                  uVar17 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar17 >> 8) < -1),
                                                           -((char)uVar17 < -1))))))));
                lVar8 = lVar8 + 8;
              } while (uVar15 == 0);
            }
            uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
            uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
            uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
            uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
            uVar15 = uVar14 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) & uVar12;
            bVar4 = (byte)uVar13 & 0x7f;
            *(byte *)(uVar11 + uVar15) = bVar4;
            *(byte *)(uVar11 + (uVar15 - 7 & uVar12) + (uVar12 & 7)) = bVar4;
            lVar8 = *plVar1;
            plVar7 = (long *)(uVar10 + uVar15 * 0x10);
            plVar7[1] = plVar1[1];
            *plVar7 = lVar8;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar16);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_0099c620)(uVar2 - 8);
        return;
      }
      return;
    }
  }
  else {
    FUN_00553d9c(param_1,&UNK_009dfd50,&stack0xffffffffffffffd8);
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar8) {
      return;
    }
  }
  ___stack_chk_fail();
  uVar9 = param_1[2];
  plVar7 = (long *)(uVar9 + 0x17 + uVar9 * 0x10 & 0xfffffffffffffff8);
  __Znwm();
  plVar1 = plVar7 + 1;
  *param_1 = (ulong)plVar1;
  param_1[1] = (long)plVar7 + (uVar9 + 0x17 & 0xfffffffffffffff8);
  _memset(plVar1,0x80,uVar9 + 8);
  *(undefined1 *)((long)plVar1 + uVar9) = 0xff;
  lVar8 = 6;
  if (uVar9 != 7) {
    lVar8 = uVar9 - (uVar9 >> 3);
  }
  *plVar7 = lVar8 - param_1[3];
  return;
}



/* Entry: 003b3200; end: 003b3287;  */

void FUN_003b3200(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  uVar4 = param_1[2];
  plVar3 = (long *)(uVar4 + 0x17 + uVar4 * 0x10 & 0xfffffffffffffff8);
  __Znwm();
  plVar1 = plVar3 + 1;
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar3 + (uVar4 + 0x17 & 0xfffffffffffffff8);
  _memset(plVar1,0x80,uVar4 + 8);
  *(undefined1 *)((long)plVar1 + uVar4) = 0xff;
  lVar2 = 6;
  if (uVar4 != 7) {
    lVar2 = uVar4 - (uVar4 >> 3);
  }
  *plVar3 = lVar2 - param_1[3];
  return;
}



/* Entry: 003b3288; end: 003b32cb;  */

ulong FUN_003b3288(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)&PTR_LOOP_00a01490 + *param_2;
  uVar1 = param_2[1] +
          (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_00a01490 + *param_2) * -0x622015f714c7d297);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  return SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297;
}



/* Entry: 003b32cc; end: 003b3343;  */

undefined8 * FUN_003b32cc(undefined8 *param_1,undefined8 param_2)

{
  undefined2 auStack_30 [4];
  undefined8 uStack_28;
  
  *param_1 = param_2;
  auStack_30[0] = 0x101;
  uStack_28 = 0;
  FUN_0033b6e0(param_1 + 1,"iomgr_eventengine_pool",FUN_003b3a78,param_1,0,auStack_30);
  FUN_003b3344();
  return param_1;
}



/* Entry: 003b3344; end: 003b3393;  */

long * FUN_003b3344(int *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 2);
  if (plVar1 == (long *)0x0) {
    if (*param_1 == 4) {
      return (long *)0x0;
    }
  }
  else {
    if (*param_1 == 1) {
      *param_1 = 2;
                    /* WARNING: Could not recover jumptable at 0x003b3378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return plVar1;
    }
    func_0x00773c18();
  }
  func_0x00773be4();
  FUN_003b33cc(plVar1 + 1);
  FUN_003b3a7c(plVar1 + 1);
  return plVar1;
}



/* Entry: 003b3394; end: 003b33cb;  */

long FUN_003b3394(long param_1)

{
  FUN_003b33cc(param_1 + 8);
  FUN_003b3a7c(param_1 + 8);
  return param_1;
}



/* Entry: 003b33cc; end: 003b342f;  */

void FUN_003b33cc(int *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  
  plVar5 = *(long **)(param_1 + 2);
  if (plVar5 == (long *)0x0) {
    if (*param_1 != 4) {
      func_0x00773c4c();
      FUN_003b357c(*plVar5);
      lVar10 = *plVar5;
      func_0x00339d8c(lVar10);
      lVar11 = *plVar5;
      *(int *)(lVar11 + 0xdc) = *(int *)(lVar11 + 0xdc) + -1;
      plVar12 = *(long **)(lVar11 + 0xf0);
      puVar6 = (undefined8 *)(lVar11 + 0xf8);
      if (plVar12 < (long *)*puVar6) {
        plVar14 = plVar12 + 1;
        *plVar12 = (long)plVar5;
      }
      else {
        plVar1 = (long *)(lVar11 + 0xe8);
        lVar13 = (long)plVar12 - *plVar1 >> 3;
        uVar2 = lVar13 + 1;
        if (uVar2 >> 0x3d != 0) {
          FUN_003b3ca4(plVar1);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x3b355c);
          (*pcVar4)();
        }
        uVar8 = (long)*puVar6 - *plVar1;
        uVar9 = (long)uVar8 >> 2;
        if (uVar9 <= uVar2) {
          uVar9 = uVar2;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 == 0) {
          puVar6 = (undefined8 *)0x0;
        }
        else {
          FUN_003b3cb8();
        }
        plVar12 = puVar6 + lVar13;
        plVar14 = plVar12 + 1;
        *plVar12 = (long)plVar5;
        plVar3 = *(long **)(lVar11 + 0xe8);
        plVar7 = *(long **)(lVar11 + 0xf0);
        if (plVar7 != plVar3) {
          do {
            plVar7 = plVar7 + -1;
            plVar12 = plVar12 + -1;
            *plVar12 = *plVar7;
          } while (plVar7 != plVar3);
          plVar7 = (long *)*plVar1;
        }
        *(long **)(lVar11 + 0xe8) = plVar12;
        *(long **)(lVar11 + 0xf0) = plVar14;
        *(undefined8 **)(lVar11 + 0xf8) = puVar6 + uVar9;
        if (plVar7 != (long *)0x0) {
          __ZdlPv();
        }
      }
      *(long **)(lVar11 + 0xf0) = plVar14;
      lVar11 = *plVar5;
      if ((*(char *)(lVar11 + 0xa0) != '\0') && (*(int *)(lVar11 + 0xdc) == 0)) {
        FUN_00339f68(lVar11 + 0x70);
      }
      func_0x00339da8(lVar10);
      return;
    }
  }
  else {
    (**(code **)(*plVar5 + 0x18))();
    if (*(long **)(param_1 + 2) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 2) + 8))();
    }
    *param_1 = 3;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 003b3430; end: 003b357b;  */

void FUN_003b3430(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  
  FUN_003b357c(*param_1);
  lVar9 = *param_1;
  func_0x00339d8c(lVar9);
  lVar10 = *param_1;
  *(int *)(lVar10 + 0xdc) = *(int *)(lVar10 + 0xdc) + -1;
  puVar11 = *(undefined8 **)(lVar10 + 0xf0);
  puVar5 = (undefined8 *)(lVar10 + 0xf8);
  if (puVar11 < (undefined8 *)*puVar5) {
    puVar13 = puVar11 + 1;
    *puVar11 = param_1;
  }
  else {
    plVar1 = (long *)(lVar10 + 0xe8);
    lVar12 = (long)puVar11 - *plVar1 >> 3;
    uVar2 = lVar12 + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_003b3ca4(plVar1);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x3b355c);
      (*pcVar4)();
    }
    uVar7 = (long)*puVar5 - *plVar1;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar2) {
      uVar8 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      FUN_003b3cb8();
    }
    puVar11 = puVar5 + lVar12;
    puVar13 = puVar11 + 1;
    *puVar11 = param_1;
    puVar3 = *(undefined8 **)(lVar10 + 0xe8);
    puVar6 = *(undefined8 **)(lVar10 + 0xf0);
    if (puVar6 != puVar3) {
      do {
        puVar6 = puVar6 + -1;
        puVar11 = puVar11 + -1;
        *puVar11 = *puVar6;
      } while (puVar6 != puVar3);
      puVar6 = (undefined8 *)*plVar1;
    }
    *(undefined8 **)(lVar10 + 0xe8) = puVar11;
    *(undefined8 **)(lVar10 + 0xf0) = puVar13;
    *(undefined8 **)(lVar10 + 0xf8) = puVar5 + uVar8;
    if (puVar6 != (undefined8 *)0x0) {
      __ZdlPv();
    }
  }
  *(undefined8 **)(lVar10 + 0xf0) = puVar13;
  lVar10 = *param_1;
  if ((*(char *)(lVar10 + 0xa0) != '\0') && (*(int *)(lVar10 + 0xdc) == 0)) {
    FUN_00339f68(lVar10 + 0x70);
  }
  func_0x00339da8(lVar9);
  return;
}



/* Entry: 003b357c; end: 003b374f;  */

long * FUN_003b357c(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lStack_68;
  undefined1 uStack_60;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  do {
    uStack_60 = 0;
    lStack_68 = param_1;
    func_0x00339d8c(param_1);
    iVar6 = (int)param_2;
    if (*(char *)(param_1 + 0xa0) == '\0') {
      if (*(long *)(param_1 + 0xd0) == 0) {
        if (*(int *)(param_1 + 0xd8) <= *(int *)(param_1 + 0xe0)) {
LAB_003b36b4:
          plVar3 = &lStack_68;
          FUN_003b3ad8();
          if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
            ___stack_chk_fail();
            FUN_003b3ad8(&lStack_68);
            __Unwind_Resume();
            func_0x00339d50();
            FUN_00339df0(plVar3 + 8);
            FUN_00339df0(plVar3 + 0xe);
            plVar3[0x16] = 0;
            plVar3[0x15] = 0;
            *(undefined1 *)(plVar3 + 0x14) = 0;
            plVar3[0x18] = 0;
            plVar3[0x17] = 0;
            plVar3[0x1a] = 0;
            plVar3[0x19] = 0;
            *(undefined4 *)((long)plVar3 + 0xdc) = 0;
            *(undefined4 *)(plVar3 + 0x1c) = 0;
            *(int *)(plVar3 + 0x1b) = iVar6;
            plVar3[0x1d] = 0;
            plVar3[0x1e] = 0;
            plVar3[0x1f] = 0;
            if (0 < iVar6) {
              iVar6 = 0;
              do {
                func_0x00339d8c(plVar3);
                *(int *)((long)plVar3 + 0xdc) = *(int *)((long)plVar3 + 0xdc) + 1;
                __Znwm(0x28);
                FUN_003b32cc();
                func_0x00339da8(plVar3);
                iVar6 = iVar6 + 1;
              } while (iVar6 < (int)plVar3[0x1b]);
            }
            return plVar3;
          }
          return plVar3;
        }
        *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
        uVar2 = 0x7fffffffffffffff;
        uVar4 = 0xffffffff;
        FUN_0033b990(0x7fffffffffffffff,0xffffffff);
        param_2 = param_1;
        FUN_00339e80(param_1 + 0x40,param_1,uVar2,uVar4);
        *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + -1;
        if (*(long *)(param_1 + 0xd0) == 0) goto LAB_003b35d0;
      }
LAB_003b362c:
      param_2 = *(long *)(*(long *)(param_1 + 0xb0) +
                         (*(ulong *)(param_1 + 200) >> 4 & 0xffffffffffffff8)) +
                (*(ulong *)(param_1 + 200) & 0x7f) * 0x20;
      func_0x003b3cec(alStack_58);
      func_0x003b3d50(param_1 + 0xa8);
      uStack_60 = 1;
      func_0x00339da8(lStack_68);
      if (plStack_40 == (long *)0x0) {
        FUN_0033e390();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x3b36f0);
        (*pcVar1)();
      }
      (**(code **)(*plStack_40 + 0x30))();
      if (plStack_40 == alStack_58) {
        plVar3 = alStack_58;
        lVar5 = 4;
      }
      else {
        if (plStack_40 == (long *)0x0) goto LAB_003b36a8;
        lVar5 = 5;
        plVar3 = plStack_40;
      }
      (**(code **)(*plVar3 + lVar5 * 8))();
    }
    else {
      if (*(long *)(param_1 + 0xd0) != 0) goto LAB_003b362c;
LAB_003b35d0:
      iVar6 = (int)param_2;
      if (*(char *)(param_1 + 0xa0) != '\0') goto LAB_003b36b4;
    }
LAB_003b36a8:
    FUN_003b3ad8(&lStack_68);
  } while( true );
}



/* Entry: 003b3750; end: 003b389f;  */

long FUN_003b3750(long param_1,int param_2)

{
  int iVar1;
  
  FUN_00339d50();
  FUN_00339df0(param_1 + 0x40);
  FUN_00339df0(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(int *)(param_1 + 0xd8) = param_2;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (0 < param_2) {
    iVar1 = 0;
    do {
      func_0x00339d8c(param_1);
      *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
      __Znwm(0x28);
      FUN_003b32cc();
      func_0x00339da8(param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xd8));
  }
  return param_1;
}



/* Entry: 003b38a0; end: 003b38a3;  */

long FUN_003b38a0(long param_1,int param_2)

{
  int iVar1;
  
  FUN_00339d50();
  FUN_00339df0(param_1 + 0x40);
  FUN_00339df0(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(int *)(param_1 + 0xd8) = param_2;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (0 < param_2) {
    iVar1 = 0;
    do {
      func_0x00339d8c(param_1);
      *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
      __Znwm(0x28);
      FUN_003b32cc();
      func_0x00339da8(param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xd8));
  }
  return param_1;
}



/* Entry: 003b38a4; end: 003b38f7;  */

void FUN_003b38a4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  if (plVar2 != plVar1) {
    do {
      if (*plVar2 != 0) {
        FUN_003b3394();
        __ZdlPv();
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = (long *)*param_1;
  }
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 003b38f8; end: 003b39c3;  */

long FUN_003b38f8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00339d8c();
  *(undefined1 *)(param_1 + 0xa0) = 1;
  func_0x00339f84(param_1 + 0x40);
  while (*(int *)(param_1 + 0xdc) != 0) {
    uVar1 = 0x7fffffffffffffff;
    uVar3 = 0xffffffff;
    FUN_0033b990(0x7fffffffffffffff,0xffffffff);
    FUN_00339e80(param_1 + 0x70,param_1,uVar1,uVar3);
  }
  FUN_003b38a4((long *)(param_1 + 0xe8));
  func_0x00339da8(param_1);
  lVar2 = *(long *)(param_1 + 0xe8);
  if (lVar2 != 0) {
    *(long *)(param_1 + 0xf0) = lVar2;
    __ZdlPv();
  }
  FUN_003b3b0c(param_1 + 0xa8);
  FUN_00339e64(param_1 + 0x70);
  FUN_00339e64(param_1 + 0x40);
  func_0x00339d70(param_1);
  return param_1;
}



/* Entry: 003b39c4; end: 003b39c7;  */

long FUN_003b39c4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00339d8c();
  *(undefined1 *)(param_1 + 0xa0) = 1;
  func_0x00339f84(param_1 + 0x40);
  while (*(int *)(param_1 + 0xdc) != 0) {
    uVar1 = 0x7fffffffffffffff;
    uVar3 = 0xffffffff;
    FUN_0033b990(0x7fffffffffffffff,0xffffffff);
    FUN_00339e80(param_1 + 0x70,param_1,uVar1,uVar3);
  }
  FUN_003b38a4((long *)(param_1 + 0xe8));
  func_0x00339da8(param_1);
  lVar2 = *(long *)(param_1 + 0xe8);
  if (lVar2 != 0) {
    *(long *)(param_1 + 0xf0) = lVar2;
    __ZdlPv();
  }
  FUN_003b3b0c(param_1 + 0xa8);
  FUN_00339e64(param_1 + 0x70);
  FUN_00339e64(param_1 + 0x40);
  func_0x00339d70(param_1);
  return param_1;
}



/* Entry: 003b39c8; end: 003b3a77;  */

void FUN_003b39c8(long param_1,undefined8 param_2)

{
  func_0x00339d8c();
  func_0x003b3e2c(param_1 + 0xa8,param_2);
  if (*(int *)(param_1 + 0xe0) == 0) {
    *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
    __Znwm(0x28);
    FUN_003b32cc();
  }
  else {
    FUN_00339f68(param_1 + 0x40);
  }
  if (*(long *)(param_1 + 0xe8) != *(long *)(param_1 + 0xf0)) {
    FUN_003b38a4();
  }
  func_0x00339da8(param_1);
  return;
}



/* Entry: 003b3a78; end: 003b3a7b;  */

void FUN_003b3a78(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  
  FUN_003b357c(*param_1);
  lVar9 = *param_1;
  func_0x00339d8c(lVar9);
  lVar10 = *param_1;
  *(int *)(lVar10 + 0xdc) = *(int *)(lVar10 + 0xdc) + -1;
  puVar11 = *(undefined8 **)(lVar10 + 0xf0);
  puVar5 = (undefined8 *)(lVar10 + 0xf8);
  if (puVar11 < (undefined8 *)*puVar5) {
    puVar13 = puVar11 + 1;
    *puVar11 = param_1;
  }
  else {
    plVar1 = (long *)(lVar10 + 0xe8);
    lVar12 = (long)puVar11 - *plVar1 >> 3;
    uVar2 = lVar12 + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_003b3ca4(plVar1);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x3b355c);
      (*pcVar4)();
    }
    uVar7 = (long)*puVar5 - *plVar1;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar2) {
      uVar8 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      FUN_003b3cb8();
    }
    puVar11 = puVar5 + lVar12;
    puVar13 = puVar11 + 1;
    *puVar11 = param_1;
    puVar3 = *(undefined8 **)(lVar10 + 0xe8);
    puVar6 = *(undefined8 **)(lVar10 + 0xf0);
    if (puVar6 != puVar3) {
      do {
        puVar6 = puVar6 + -1;
        puVar11 = puVar11 + -1;
        *puVar11 = *puVar6;
      } while (puVar6 != puVar3);
      puVar6 = (undefined8 *)*plVar1;
    }
    *(undefined8 **)(lVar10 + 0xe8) = puVar11;
    *(undefined8 **)(lVar10 + 0xf0) = puVar13;
    *(undefined8 **)(lVar10 + 0xf8) = puVar5 + uVar8;
    if (puVar6 != (undefined8 *)0x0) {
      __ZdlPv();
    }
  }
  *(undefined8 **)(lVar10 + 0xf0) = puVar13;
  lVar10 = *param_1;
  if ((*(char *)(lVar10 + 0xa0) != '\0') && (*(int *)(lVar10 + 0xdc) == 0)) {
    FUN_00339f68(lVar10 + 0x70);
  }
  func_0x00339da8(lVar9);
  return;
}



/* Entry: 003b3a7c; end: 003b3ad7;  */

void FUN_003b3a7c(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + 0x10) != '\0') && (*(long *)(param_1 + 8) != 0)) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/thd.h"
                 ,0x7b,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x3b3ad4);
    (*pcVar1)();
  }
  return;
}



/* Entry: 003b3ad8; end: 003b3b0b;  */

undefined8 * FUN_003b3ad8(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\0') {
    func_0x00339da8(*param_1);
  }
  return param_1;
}



/* Entry: 003b3b0c; end: 003b3c57;  */

long * FUN_003b3b0c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  
  puVar6 = (undefined8 *)param_1[1];
  puVar7 = puVar6;
  if ((undefined8 *)param_1[2] != puVar6) {
    uVar5 = param_1[4];
    plVar8 = puVar6 + (uVar5 >> 7);
    plVar3 = (long *)*plVar8;
    plVar9 = plVar3 + (uVar5 & 0x7f) * 4;
    plVar1 = (long *)(*(long *)((long)puVar6 + (param_1[5] + uVar5 >> 4 & 0xffffffffffffff8)) +
                     (param_1[5] + uVar5 & 0x7f) * 0x20);
    puVar7 = (undefined8 *)param_1[2];
    if (plVar9 != plVar1) {
      do {
        plVar2 = (long *)plVar9[3];
        if (plVar2 == plVar9) {
          lVar4 = 4;
          plVar2 = plVar9;
LAB_003b3b94:
          (**(code **)(*plVar2 + lVar4 * 8))();
          plVar3 = (long *)*plVar8;
        }
        else if (plVar2 != (long *)0x0) {
          lVar4 = 5;
          goto LAB_003b3b94;
        }
        plVar9 = plVar9 + 4;
        if ((long)plVar9 - (long)plVar3 == 0x1000) {
          plVar8 = plVar8 + 1;
          plVar3 = (long *)*plVar8;
          plVar9 = plVar3;
        }
      } while (plVar9 != plVar1);
      puVar6 = (undefined8 *)param_1[1];
      puVar7 = (undefined8 *)param_1[2];
    }
  }
  param_1[5] = 0;
  uVar5 = (long)puVar7 - (long)puVar6;
  while (0x10 < uVar5) {
    __ZdlPv(*puVar6);
    puVar7 = (undefined8 *)param_1[2];
    puVar6 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar6;
    uVar5 = (long)puVar7 - (long)puVar6;
  }
  if (uVar5 >> 3 == 1) {
    lVar4 = 0x40;
  }
  else {
    if (uVar5 >> 3 != 2) goto LAB_003b3c34;
    lVar4 = 0x80;
  }
  param_1[4] = lVar4;
LAB_003b3c34:
  for (; puVar6 != puVar7; puVar6 = puVar6 + 1) {
    __ZdlPv(*puVar6);
  }
  lVar4 = param_1[2];
  if (lVar4 != param_1[1]) {
    param_1[2] = lVar4 + ((param_1[1] - lVar4) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 003b3c58; end: 003b3ca3;  */

long * FUN_003b3c58(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 003b3ca4; end: 003b3cb7;  */

undefined1  [16] FUN_003b3ca4(undefined8 param_1,long *param_2)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  FUN_00349558();
  plVar3 = (long *)param_2[3];
  if (plVar3 == (long *)0x0) {
    *(long *)((long)pcVar1 + 0x18) = 0;
  }
  else if (plVar3 == param_2) {
    *(char **)((long)pcVar1 + 0x18) = pcVar1;
    plVar3 = param_2 + 3;
    param_2 = (long *)pcVar1;
    (**(code **)(*(long *)*plVar3 + 0x18))((long *)*plVar3,pcVar1);
  }
  else {
    (**(code **)(*plVar3 + 0x10))();
    *(long **)((long)pcVar1 + 0x18) = plVar3;
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = pcVar1;
  return auVar5;
}



/* Entry: 003b3cb8; end: 003b3ebf;  */

undefined1  [16] FUN_003b3cb8(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar1 = (long)param_2 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  FUN_00349558();
  plVar2 = (long *)param_2[3];
  if (plVar2 == (long *)0x0) {
    param_1[3] = 0;
  }
  else if (plVar2 == param_2) {
    param_1[3] = (long)param_1;
    plVar2 = param_2 + 3;
    param_2 = param_1;
    (**(code **)(*(long *)*plVar2 + 0x18))((long *)*plVar2,param_1);
  }
  else {
    (**(code **)(*plVar2 + 0x10))();
    param_1[3] = (long)plVar2;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 003b3ec0; end: 003b41d3;  */

void FUN_003b3ec0(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  
  if ((ulong)param_1[4] < 0x80) {
    uVar8 = param_1[2] - param_1[1] >> 3;
    plVar1 = param_1 + 3;
    lVar7 = *plVar1;
    lVar12 = lVar7 - *param_1;
    if ((ulong)(lVar12 >> 3) <= uVar8) {
      lVar12 = lVar12 >> 2;
      if (lVar7 == *param_1) {
        lVar12 = 1;
      }
      plStack_50 = plVar1;
      FUN_003b4630();
      plStack_68 = plVar1 + uVar8;
      plStack_58 = plVar1 + lVar12;
      uVar2 = 0x1000;
      lStack_70 = (long)plVar1;
      plStack_60 = plStack_68;
      __Znwm();
      uStack_78 = uVar2;
      FUN_003b4404(&lStack_70,&uStack_78);
      lVar7 = param_1[2];
      lVar12 = -7 - lVar7;
      while (lVar7 != param_1[1]) {
        lVar7 = lVar7 + -8;
        lVar12 = lVar12 + 8;
        FUN_003b4518(&lStack_70,lVar7);
      }
      lVar3 = *param_1;
      lVar14 = param_1[3];
      lVar13 = param_1[2];
      param_1[1] = (long)plStack_68;
      *param_1 = lStack_70;
      param_1[3] = (long)plStack_58;
      param_1[2] = (long)plStack_60;
      plStack_60 = (long *)lVar13;
      if (lVar7 != lVar13) {
        plStack_60 = (long *)(lVar13 + (-(lVar13 + lVar12) & 0xfffffffffffffff8U));
      }
      if (lVar3 == 0) {
        return;
      }
      lStack_70 = lVar3;
      plStack_68 = (long *)lVar7;
      plStack_58 = (long *)lVar14;
      __ZdlPv();
      return;
    }
    lVar12 = 0x1000;
    if (lVar7 != param_1[2]) {
      __Znwm();
      lStack_70 = lVar12;
      FUN_003b41d4(param_1,&lStack_70);
      return;
    }
    __Znwm();
    lStack_70 = lVar12;
    FUN_003b42e8(param_1,&lStack_70);
    plVar10 = (long *)param_1[2];
    plVar4 = (long *)param_1[1] + 1;
    lVar12 = *(long *)param_1[1];
    param_1[1] = (long)plVar4;
    if (plVar10 != (long *)param_1[3]) goto LAB_003b40f8;
    plVar6 = (long *)*param_1;
    lVar7 = (long)plVar4 - (long)plVar6;
    if (plVar4 < plVar6 || lVar7 == 0) {
      uVar8 = (long)plVar10 - (long)plVar6 >> 2;
      if ((long)plVar10 - (long)plVar6 == 0) {
        uVar8 = 1;
      }
      uVar5 = uVar8;
      FUN_003b4630();
      plVar4 = plVar1 + (uVar8 >> 2);
      plVar6 = plVar1 + uVar5;
      uVar8 = param_1[2] - param_1[1];
      plVar10 = plVar4;
      if (uVar8 != 0) {
        plVar10 = (long *)((long)plVar4 + (uVar8 & 0xfffffffffffffff8));
        lVar7 = ((long)uVar8 >> 3) << 3;
        plVar9 = (long *)param_1[1];
        plVar11 = plVar4;
        do {
          *plVar11 = *plVar9;
          lVar7 = lVar7 + -8;
          plVar9 = plVar9 + 1;
          plVar11 = plVar11 + 1;
        } while (lVar7 != 0);
      }
      goto LAB_003b40ac;
    }
  }
  else {
    plVar1 = param_1 + 3;
    param_1[4] = param_1[4] - 0x80;
    plVar10 = (long *)param_1[2];
    plVar4 = (long *)param_1[1] + 1;
    lVar12 = *(long *)param_1[1];
    param_1[1] = (long)plVar4;
    if (plVar10 != (long *)*plVar1) goto LAB_003b40f8;
    plVar6 = (long *)*param_1;
    lVar7 = (long)plVar4 - (long)plVar6;
    if (plVar4 < plVar6 || lVar7 == 0) {
      uVar8 = (long)plVar10 - (long)plVar6 >> 2;
      if ((long)plVar10 - (long)plVar6 == 0) {
        uVar8 = 1;
      }
      uVar5 = uVar8;
      FUN_003b4630();
      plVar4 = plVar1 + (uVar8 >> 2);
      plVar6 = plVar1 + uVar5;
      uVar8 = param_1[2] - param_1[1];
      plVar10 = plVar4;
      if (uVar8 != 0) {
        lVar7 = ((long)uVar8 >> 3) << 3;
        plVar9 = (long *)param_1[1];
        plVar11 = plVar4;
        do {
          *plVar11 = *plVar9;
          lVar7 = lVar7 + -8;
          plVar9 = plVar9 + 1;
          plVar10 = (long *)((long)plVar4 + (uVar8 & 0xfffffffffffffff8));
          plVar11 = plVar11 + 1;
        } while (lVar7 != 0);
      }
LAB_003b40ac:
      lVar7 = *param_1;
      *param_1 = (long)plVar1;
      param_1[1] = (long)plVar4;
      param_1[2] = (long)plVar10;
      param_1[3] = (long)plVar6;
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        plVar10 = (long *)param_1[2];
      }
      goto LAB_003b40f8;
    }
  }
  lVar7 = lVar7 >> 3;
  lVar3 = lVar7 + 2;
  if (-2 < lVar7) {
    lVar3 = lVar7 + 1;
  }
  plVar1 = plVar4 + -(lVar3 >> 1);
  lVar7 = (long)plVar10 - (long)plVar4;
  if (lVar7 != 0) {
    _memmove(plVar1,plVar4,lVar7);
    plVar4 = (long *)param_1[1];
  }
  plVar10 = (long *)((long)plVar1 + lVar7);
  param_1[1] = (long)(plVar4 + -(lVar3 >> 1));
  param_1[2] = (long)plVar10;
LAB_003b40f8:
  *plVar10 = lVar12;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 003b41d4; end: 003b42e7;  */

void FUN_003b41d4(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  
  puVar2 = param_1 + 3;
  puVar8 = (ulong *)param_1[2];
  if (puVar8 == (ulong *)*puVar2) {
    uVar7 = *param_1;
    uVar5 = param_1[1];
    if (uVar5 < uVar7 || uVar5 - uVar7 == 0) {
      uVar5 = (long)((long)puVar8 - uVar7) >> 2;
      if ((long)puVar8 - uVar7 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_003b4630();
      puVar1 = puVar2 + (uVar5 >> 2);
      uVar7 = param_1[2] - (long)param_1[1];
      puVar8 = puVar1;
      if (uVar7 != 0) {
        puVar8 = (ulong *)((long)puVar1 + (uVar7 & 0xfffffffffffffff8));
        lVar9 = ((long)uVar7 >> 3) << 3;
        puVar6 = (ulong *)param_1[1];
        puVar10 = puVar1;
        do {
          *puVar10 = *puVar6;
          lVar9 = lVar9 + -8;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar9 != 0);
      }
      uVar7 = *param_1;
      *param_1 = (ulong)puVar2;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar8;
      param_1[3] = (ulong)(puVar2 + uVar3);
      if (uVar7 != 0) {
        __ZdlPv(uVar7);
        puVar8 = (ulong *)param_1[2];
      }
    }
    else {
      lVar4 = (long)(uVar5 - uVar7) >> 3;
      lVar9 = lVar4 + 2;
      if (-2 < lVar4) {
        lVar9 = lVar4 + 1;
      }
      lVar11 = uVar5 + (lVar9 >> 1) * -8;
      lVar4 = (long)puVar8 - uVar5;
      if (lVar4 != 0) {
        _memmove(lVar11,uVar5,lVar4);
        puVar8 = (ulong *)param_1[1];
      }
      puVar2 = puVar8 + -(lVar9 >> 1);
      puVar8 = (ulong *)(lVar11 + lVar4);
      param_1[1] = (ulong)puVar2;
      param_1[2] = (ulong)puVar8;
    }
  }
  *puVar8 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 003b42e8; end: 003b4403;  */

void FUN_003b42e8(long *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 == (undefined8 *)*param_1) {
    puVar1 = (ulong *)(param_1 + 3);
    uVar6 = *puVar1;
    uVar3 = param_1[2];
    if (uVar3 < uVar6) {
      lVar7 = (long)(uVar6 - uVar3) >> 3;
      lVar4 = lVar7 + 2;
      if (-2 < lVar7) {
        lVar4 = lVar7 + 1;
      }
      puVar8 = puVar2 + (lVar4 >> 1);
      if (uVar3 - (long)puVar2 != 0) {
        _memmove(puVar8,puVar2,uVar3 - (long)puVar2);
        puVar2 = (undefined8 *)param_1[2];
      }
      param_1[1] = (long)puVar8;
      param_1[2] = (long)(puVar2 + (lVar4 >> 1));
      puVar2 = puVar8;
    }
    else {
      lVar4 = (long)(uVar6 - (long)puVar2) >> 2;
      if (uVar6 - (long)puVar2 == 0) {
        lVar4 = 1;
      }
      lVar7 = lVar4 * 2;
      FUN_003b4630();
      puVar2 = (undefined8 *)((long)puVar1 + (lVar7 + 6U & 0xfffffffffffffff8));
      uVar3 = param_1[2] - param_1[1];
      puVar8 = puVar2;
      if (uVar3 != 0) {
        puVar8 = (undefined8 *)((long)puVar2 + (uVar3 & 0xfffffffffffffff8));
        lVar7 = ((long)uVar3 >> 3) << 3;
        puVar5 = (undefined8 *)param_1[1];
        puVar9 = puVar2;
        do {
          *puVar9 = *puVar5;
          lVar7 = lVar7 + -8;
          puVar5 = puVar5 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = (long)puVar1;
      param_1[1] = (long)puVar2;
      param_1[2] = (long)puVar8;
      param_1[3] = (long)(puVar1 + lVar4);
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar2 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar2[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 003b4404; end: 003b4517;  */

void FUN_003b4404(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar8 = (undefined8 *)param_1[2];
  if (puVar8 == (undefined8 *)param_1[3]) {
    uVar7 = *param_1;
    uVar5 = param_1[1];
    if (uVar5 < uVar7 || uVar5 - uVar7 == 0) {
      uVar5 = (long)((long)puVar8 - uVar7) >> 2;
      if ((long)puVar8 - uVar7 == 0) {
        uVar5 = 1;
      }
      uVar2 = param_1[4];
      uVar3 = uVar5;
      FUN_003b4630();
      puVar1 = (undefined8 *)(uVar2 + (uVar5 >> 2) * 8);
      uVar7 = param_1[2] - (long)param_1[1];
      puVar8 = puVar1;
      if (uVar7 != 0) {
        puVar8 = (undefined8 *)((long)puVar1 + (uVar7 & 0xfffffffffffffff8));
        lVar9 = ((long)uVar7 >> 3) << 3;
        puVar6 = (undefined8 *)param_1[1];
        puVar10 = puVar1;
        do {
          *puVar10 = *puVar6;
          lVar9 = lVar9 + -8;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar9 != 0);
      }
      uVar7 = *param_1;
      *param_1 = uVar2;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar8;
      param_1[3] = uVar2 + uVar3 * 8;
      if (uVar7 != 0) {
        __ZdlPv(uVar7);
        puVar8 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar4 = (long)(uVar5 - uVar7) >> 3;
      lVar9 = lVar4 + 2;
      if (-2 < lVar4) {
        lVar9 = lVar4 + 1;
      }
      lVar11 = uVar5 + (lVar9 >> 1) * -8;
      lVar4 = (long)puVar8 - uVar5;
      if (lVar4 != 0) {
        _memmove(lVar11,uVar5,lVar4);
        puVar8 = (undefined8 *)param_1[1];
      }
      puVar1 = puVar8 + -(lVar9 >> 1);
      puVar8 = (undefined8 *)(lVar11 + lVar4);
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar8;
    }
  }
  *puVar8 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 003b4518; end: 003b462f;  */

void FUN_003b4518(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 == (undefined8 *)*param_1) {
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    if (uVar1 < uVar2) {
      lVar6 = (long)(uVar2 - uVar1) >> 3;
      lVar4 = lVar6 + 2;
      if (-2 < lVar6) {
        lVar4 = lVar6 + 1;
      }
      puVar7 = puVar3 + (lVar4 >> 1);
      if (uVar1 - (long)puVar3 != 0) {
        _memmove(puVar7,puVar3,uVar1 - (long)puVar3);
        puVar3 = (undefined8 *)param_1[2];
      }
      param_1[1] = (long)puVar7;
      param_1[2] = (long)(puVar3 + (lVar4 >> 1));
      puVar3 = puVar7;
    }
    else {
      lVar4 = (long)(uVar2 - (long)puVar3) >> 2;
      if (uVar2 - (long)puVar3 == 0) {
        lVar4 = 1;
      }
      lVar9 = lVar4 * 2;
      lVar6 = param_1[4];
      FUN_003b4630();
      puVar3 = (undefined8 *)(lVar6 + (lVar9 + 6U & 0xfffffffffffffff8));
      uVar1 = param_1[2] - param_1[1];
      puVar7 = puVar3;
      if (uVar1 != 0) {
        puVar7 = (undefined8 *)((long)puVar3 + (uVar1 & 0xfffffffffffffff8));
        lVar9 = ((long)uVar1 >> 3) << 3;
        puVar5 = (undefined8 *)param_1[1];
        puVar8 = puVar3;
        do {
          *puVar8 = *puVar5;
          lVar9 = lVar9 + -8;
          puVar5 = puVar5 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar9 != 0);
      }
      lVar9 = *param_1;
      *param_1 = lVar6;
      param_1[1] = (long)puVar3;
      param_1[2] = (long)puVar7;
      param_1[3] = lVar6 + lVar4 * 8;
      if (lVar9 != 0) {
        __ZdlPv(lVar9);
        puVar3 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar3[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 003b4630; end: 003b4663;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

undefined1  [16] FUN_003b4630(undefined8 param_1,ulong param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined7 *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  char *pcVar10;
  uint uVar11;
  ulong *puVar12;
  uint uVar13;
  ulong uVar14;
  byte *pbVar15;
  long *unaff_x23;
  long *unaff_x24;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  byte *apbStack_1f8 [2];
  char cStack_1e1;
  undefined1 auStack_1e0 [56];
  undefined8 uStack_1a8;
  undefined7 uStack_1a0;
  undefined1 uStack_199;
  undefined7 uStack_198;
  undefined1 uStack_191;
  ulong auStack_158 [2];
  undefined7 *puStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  code *pcStack_120;
  long lStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined1 *puStack_b0;
  long alStack_a8 [8];
  long lStack_68;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (param_2 >> 0x3d == 0) {
    lVar9 = param_2 << 3;
    __Znwm(lVar9);
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = lVar9;
    return auVar19;
  }
  FUN_00349558();
  pcStack_28 = FUN_003b4664;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar1 = (long *)((long)&MACH_HEADER.magic + 2);
  uVar14 = param_2;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_00338e58();
  if ((int)plVar1 != 0) {
    puStack_b0 = &stack0xffffffffffffffe0;
    plVar1 = alStack_a8;
    _vsnprintf(plVar1,0x40,param_4,&stack0xffffffffffffffe0);
    if ((int)(uint)plVar1 < 0) {
      unaff_x23 = (long *)0x0;
      param_4 = (long *)0x0;
    }
    else {
      unaff_x24 = plVar1;
      if ((uint)plVar1 < 0x40) {
        param_4 = (long *)0x0;
        unaff_x23 = alStack_a8;
      }
      else {
        param_4 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
        FUN_00338c74();
        puStack_b0 = &stack0xffffffffffffffe0;
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar14 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    plVar1 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    auVar16._8_8_ = uVar14;
    auVar16._0_8_ = plVar1;
    return auVar16;
  }
  ___stack_chk_fail();
  uStack_c8 = 2;
  pcStack_b8 = FUN_00339178;
  lStack_f8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = 1;
  plStack_f0 = unaff_x24;
  plStack_e8 = unaff_x23;
  plStack_e0 = param_4;
  uStack_d8 = param_1;
  uStack_d0 = param_2;
  ppuStack_c0 = &puStack_30;
  FUN_0033a598();
  lVar9 = *plVar1;
  lVar3 = lVar9;
  uStack_1a8 = uVar2;
  _strrchr(lVar9,0x2f);
  if (lVar3 != 0) {
    lVar9 = lVar3 + 1;
  }
  puVar4 = &uStack_1a8;
  _localtime_r(puVar4,auStack_1e0);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_198 = 0x656d69746c6163;
    uStack_191 = 0;
    uStack_1a0 = 0x6c3a726f727265;
    uStack_199 = 0x6f;
  }
  else {
    puVar5 = &uStack_1a0;
    _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_1e0);
    if (puVar5 == (undefined7 *)0x0) {
      uStack_1a0 = 0x733a726f727265;
      uStack_199 = 0x74;
      uStack_198 = 0x656d69746672;
    }
  }
  uVar6 = (ulong)*(uint *)((long)plVar1 + 0xc);
  func_0x00338e1c();
  uVar7 = uVar6;
  _pthread_self();
  auStack_158[1] = 0x560e98;
  puStack_148 = &uStack_1a0;
  uStack_140 = 0x560e98;
  uStack_138 = uVar14 & 0xffffffff;
  uStack_130 = 0x5606ac;
  pcStack_120 = FUN_00560738;
  uStack_110 = 0x560e98;
  uStack_108 = (ulong)*(uint *)(plVar1 + 1);
  uStack_100 = 0x5606ac;
  puVar12 = auStack_158;
  auStack_158[0] = uVar6;
  uStack_128 = uVar7;
  lStack_118 = lVar9;
  FUN_0056189c(apbStack_1f8,"%s%s.%09d %7ld %s:%d]",0x15,puVar12,6);
  uVar11 = *(uint *)((long)plVar1 + 0xc);
  func_0x00338e6c();
  if (uVar11 == 0) {
    auStack_158[0] = auStack_158[0] & 0xffffffffffffff00;
    uStack_140 = uStack_140 & 0xffffffffffffff00;
LAB_00339300:
    pbVar8 = *(byte **)PTR____stderrp_00999f90;
    pcVar10 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_158);
    if ((char)uStack_140 == '\0') goto LAB_00339300;
    pbVar8 = *(byte **)PTR____stderrp_00999f90;
    pcVar10 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1e1 < '\0') {
    pbVar8 = apbStack_1f8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_f8) {
    auVar17._8_8_ = pcVar10;
    auVar17._0_8_ = pbVar8;
    return auVar17;
  }
  ___stack_chk_fail();
  if (cStack_1e1 < '\0') {
    __ZdlPv(apbStack_1f8[0]);
  }
  __Unwind_Resume();
  uVar11 = (uint)puVar12;
  if ((char *)0x3 < pcVar10) {
    uVar14 = (ulong)pcVar10 >> 2;
    pbVar15 = pbVar8;
    do {
      uVar11 = (*(int *)pbVar15 * 0x16a88000 | (uint)(*(int *)pbVar15 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar12;
      uVar11 = (uVar11 >> 0x13 | uVar11 << 0xd) * 5 + 0xe6546b64;
      puVar12 = (ulong *)(ulong)uVar11;
      uVar14 = uVar14 - 1;
      pbVar15 = pbVar15 + 4;
    } while (uVar14 != 0);
    pbVar8 = pbVar8 + ((ulong)pcVar10 & 0xfffffffffffffffc);
  }
  uVar13 = 0;
  uVar14 = (ulong)pcVar10 & 3;
  if (uVar14 != 1) {
    if (uVar14 != 2) {
      if (uVar14 != 3) goto LAB_00339464;
      uVar13 = (uint)pbVar8[2] << 0x10;
    }
    uVar13 = uVar13 | (uint)pbVar8[1] << 8;
  }
  uVar11 = ((uVar13 ^ *pbVar8) * 0x16a88000 | (uVar13 ^ *pbVar8) * -0x3361d2af >> 0x11) * 0x1b873593
           ^ uVar11;
LAB_00339464:
  uVar11 = uVar11 ^ (uint)pcVar10;
  uVar11 = (uVar11 ^ uVar11 >> 0x10) * -0x7a143595;
  uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
  auVar18._4_4_ = 0;
  auVar18._0_4_ = uVar11 ^ uVar11 >> 0x10;
  auVar18._8_8_ = pcVar10;
  return auVar18;
}



/* Entry: 003b4664; end: 003b46f7;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003b4664(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 003b46f8; end: 003b4753;  */

long FUN_003b46f8(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = (long *)(param_1 + 0x90);
  plVar2 = plVar3;
  func_0x003b566c();
  if ((int)plVar2 == 0) {
    func_0x003b567c();
    lVar4 = *plVar3;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x78);
    lVar1 = lVar5;
    if (lVar5 != 0x7fffffffffffffff) {
      lVar1 = lVar5 + 1;
    }
    lVar4 = -0x8000000000000000;
    if (lVar5 != -0x8000000000000000) {
      lVar4 = lVar1;
    }
  }
  return lVar4;
}



/* Entry: 003b4754; end: 003b47b7;  */

long FUN_003b4754(long param_1)

{
  FUN_00339d50();
  func_0x003b466c(0x40083e0f83e0f83e,0x3fb999999999999a,0x3fe0000000000000,param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return param_1;
}


