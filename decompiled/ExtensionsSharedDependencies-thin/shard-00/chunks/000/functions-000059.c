/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00135778; end: 001357a3;  */

uint FUN_00135778(uint param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x28))();
  return param_1 & 1;
}



/* Entry: 001357a4; end: 0013580f;  */

void FUN_001357a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  if (param_1 != 0) {
    _swift_retain();
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRetain(param_5);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(param_6);
    return;
  }
  return;
}



/* Entry: 00135810; end: 0013583f;  */

uint FUN_00135810(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x10))
            (param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Entry: 00135840; end: 00135877;  */

void FUN_00135840(void)

{
  FUN_0013441c();
  return;
}



/* Entry: 00135878; end: 001358e7;  */

void FUN_00135878(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_0012d920(param_2,param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 001358e8; end: 00135927;  */

void FUN_001358e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af0520 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___sSiSzsMc_0099b2d8;
  _swift_getWitnessTable(PTR___sSiSzsMc_0099b2d8,PTR___sSiN_0099b2c0);
  puRam0000000000af0520 = puVar1;
  return;
}



/* Entry: 00135928; end: 001359df;  */

long FUN_00135928(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 001359e0; end: 001359f7;  */

undefined8 * FUN_001359e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 001359f8; end: 00135a3f;  */

undefined8 FUN_001359f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x000115a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 00135a40; end: 00135a43;  */

uint FUN_00135a40(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x10))
            (param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Entry: 00135a44; end: 00135bd3;  */

void FUN_00135a44(void)

{
  func_0x001349c4();
  return;
}



/* Entry: 00135bd4; end: 00135ce3;  */

void FUN_00135bd4(undefined1 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  code *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 uVar8;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x50) + -1;
  if (SBORROW8(*(long *)(unaff_x20 + 0x50),1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x135ce4);
    (*pcVar5)();
  }
  *(long *)(unaff_x20 + 0x50) = lVar4;
  if (lVar4 < 0) {
    uVar8 = 0xb;
    goto LAB_00135c9c;
  }
  pbVar7 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if (pbVar7 != pbVar1) {
    pbVar6 = pbVar7 + 1;
    bVar2 = *pbVar7;
    *(byte **)(unaff_x20 + 0x28) = pbVar6;
    do {
      if ((pbVar6 == pbVar1) || (bVar3 = *pbVar6, 0x23 < bVar3)) goto LAB_00135c78;
      if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar3 != 0x23) goto LAB_00135c78;
        pbVar7 = pbVar6 + 1;
        do {
          pbVar6 = pbVar1;
          if (pbVar7 == pbVar1) break;
          pbVar6 = pbVar7 + 1;
          bVar3 = *pbVar7;
          pbVar7 = pbVar6;
        } while (bVar3 != 10 && bVar3 != 0xd);
      }
      else {
        pbVar6 = pbVar6 + 1;
      }
      *(byte **)(unaff_x20 + 0x28) = pbVar6;
    } while( true );
  }
  goto LAB_00135c98;
LAB_00135c78:
  if (bVar2 == 0x3c) {
    return;
  }
  if (bVar2 == 0x7b) {
    return;
  }
LAB_00135c98:
  uVar8 = 0;
LAB_00135c9c:
  FUN_000c723c();
  _swift_allocError(&UNK_009aeed8,param_1,0,0);
  *param_1 = uVar8;
  _swift_willThrow();
  return;
}



/* Entry: 00135ce4; end: 001363c7;  */

undefined1  [16] FUN_00135ce4(byte *param_1,byte *param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int *piVar8;
  byte bVar9;
  long unaff_x20;
  long lVar10;
  long unaff_x21;
  byte *pbVar11;
  byte *pbVar12;
  byte *unaff_x28;
  undefined1 auVar13 [16];
  byte abStack_88 [24];
  long lStack_70;
  long lStack_68;
  
  uVar2 = param_4 >> 8 & 0xff;
  pbVar11 = *(byte **)(unaff_x20 + 0x30);
  pbVar4 = param_1;
  pbVar5 = param_2;
  pbVar12 = *(byte **)(unaff_x20 + 0x28);
LAB_00135d38:
  if ((pbVar12 != pbVar11) && (bVar1 = *pbVar12, bVar1 < 0x24)) {
    if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar1 != 0x23) goto LAB_00135d90;
      pbVar6 = pbVar12 + 1;
      do {
        if (pbVar6 == pbVar11) {
          *(byte **)(unaff_x20 + 0x28) = pbVar11;
          pbVar12 = pbVar11;
          goto LAB_00135d38;
        }
        pbVar12 = pbVar6 + 1;
        bVar1 = *pbVar6;
      } while ((bVar1 != 10) && (pbVar6 = pbVar12, bVar1 != 0xd));
    }
    else {
      pbVar12 = pbVar12 + 1;
    }
    *(byte **)(unaff_x20 + 0x28) = pbVar12;
    goto LAB_00135d38;
  }
LAB_00135d90:
  if (pbVar12 == pbVar11) {
    if (uVar2 != 1) {
LAB_0013631c:
      bVar9 = 0;
      goto LAB_00136320;
    }
LAB_00136310:
    unaff_x28 = (byte *)0x0;
    pbVar12 = (byte *)((long)&MACH_HEADER.magic + 1);
LAB_0013634c:
    auVar13._8_8_ = pbVar12;
    auVar13._0_8_ = unaff_x28;
    return auVar13;
  }
  bVar1 = *pbVar12;
  pbVar6 = pbVar12;
  if ((byte)((bVar1 & 0xdf) + 0xbf) < 0x1a) {
    do {
      bVar1 = *pbVar6;
      if ((0x19 < (bVar1 & 0xffffffdf) - 0x41) &&
         (unaff_x28 = pbVar6, bVar1 != 0x5f && 9 < bVar1 - 0x30)) break;
      pbVar6 = pbVar6 + 1;
      *(byte **)(unaff_x20 + 0x28) = pbVar6;
      unaff_x28 = pbVar6;
    } while (pbVar6 != pbVar11);
    do {
      if ((pbVar6 == pbVar11) || (bVar1 = *pbVar6, 0x23 < bVar1)) goto LAB_00135eec;
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar1 != 0x23) goto LAB_00135eec;
        pbVar7 = pbVar6 + 1;
        while (pbVar6 = pbVar11, pbVar7 != pbVar11) {
          pbVar6 = pbVar7 + 1;
          bVar1 = *pbVar7;
          if ((bVar1 == 10) || (pbVar7 = pbVar6, bVar1 == 0xd)) break;
        }
      }
      else {
        pbVar6 = pbVar6 + 1;
      }
      *(byte **)(unaff_x20 + 0x28) = pbVar6;
    } while( true );
  }
  if (bVar1 == 0x5b) {
    FUN_00139a60();
    pbVar12 = param_1;
    if (unaff_x21 == 0) {
      pbVar12 = abStack_88;
      func_0x000c6fb4();
      lVar3 = lStack_68;
      lVar10 = lStack_70;
      if (lStack_70 == 0) {
        _swift_bridgeObjectRelease(pbVar5);
        pbVar4 = abStack_88;
        FUN_000ea918();
        unaff_x28 = (byte *)0x0;
        pbVar5 = pbVar12;
      }
      else {
        FUN_0001393c(abStack_88,lStack_70);
        unaff_x28 = param_2;
        pbVar12 = param_3;
        (**(code **)(lVar3 + 0x10))(param_2,param_3,pbVar4,pbVar5,lVar10,lVar3);
        pbVar6 = pbVar12;
        _swift_bridgeObjectRelease(pbVar5);
        pbVar4 = abStack_88;
        FUN_00011670();
        pbVar5 = pbVar6;
        if (((uint)pbVar12 & 0xff) != 1) goto LAB_0013634c;
      }
      pbVar6 = pbVar4;
      if ((*(byte *)(unaff_x20 + 0x49) & 1) != 0) goto LAB_00136140;
      goto LAB_001362fc;
    }
    goto LAB_0013634c;
  }
  if (8 < (bVar1 - 0x31 & 0xff)) {
    bVar9 = 0;
    if ((uVar2 != 1) && (pbVar4 = (byte *)(ulong)param_4, (uint)bVar1 == (param_4 & 0xff))) {
      FUN_00136e18();
      goto LAB_00136310;
    }
    goto LAB_00136320;
  }
  unaff_x28 = (byte *)((ulong)bVar1 - 0x30);
  pbVar6 = pbVar12 + 1;
  pbVar7 = pbVar11;
  if ((pbVar6 != pbVar11) && (pbVar7 = pbVar6, *pbVar6 - 0x30 < 10)) {
    unaff_x28 = (byte *)((ulong)*pbVar6 + (long)(int)unaff_x28 * 10 + -0x30);
    pbVar6 = pbVar12 + 2;
    pbVar7 = pbVar11;
    if ((pbVar6 != pbVar11) && (pbVar7 = pbVar6, *pbVar6 - 0x30 < 10)) {
      unaff_x28 = (byte *)((ulong)*pbVar6 + (long)(int)unaff_x28 * 10 + -0x30);
      pbVar6 = pbVar12 + 3;
      pbVar7 = pbVar11;
      if ((pbVar6 != pbVar11) && (pbVar7 = pbVar6, *pbVar6 - 0x30 < 10)) {
        unaff_x28 = (byte *)((ulong)*pbVar6 + (long)(int)unaff_x28 * 10 + -0x30);
        pbVar6 = pbVar12 + 4;
        pbVar7 = pbVar11;
        if ((pbVar6 != pbVar11) && (pbVar7 = pbVar6, *pbVar6 - 0x30 < 10)) {
          unaff_x28 = (byte *)((ulong)*pbVar6 + (long)(int)unaff_x28 * 10 + -0x30);
          pbVar6 = pbVar12 + 5;
          pbVar7 = pbVar11;
          if ((pbVar6 != pbVar11) && (pbVar7 = pbVar6, *pbVar6 - 0x30 < 10)) {
            unaff_x28 = (byte *)((ulong)*pbVar6 + (long)unaff_x28 * 10 + -0x30);
            pbVar6 = pbVar12 + 6;
            pbVar7 = pbVar11;
            if ((pbVar6 != pbVar11) && (pbVar7 = pbVar6, *pbVar6 - 0x30 < 10)) {
              unaff_x28 = (byte *)((ulong)*pbVar6 + (long)unaff_x28 * 10 + -0x30);
              pbVar6 = pbVar12 + 7;
              pbVar7 = pbVar11;
              if ((pbVar6 != pbVar11) && (pbVar7 = pbVar6, *pbVar6 - 0x30 < 10)) {
                unaff_x28 = (byte *)((ulong)*pbVar6 + (long)unaff_x28 * 10 + -0x30);
                pbVar6 = pbVar12 + 8;
                pbVar7 = pbVar11;
                if ((pbVar6 != pbVar11) && (pbVar7 = pbVar6, *pbVar6 - 0x30 < 10)) {
                  unaff_x28 = (byte *)((ulong)*pbVar6 + (long)unaff_x28 * 10 + -0x30);
                  pbVar6 = pbVar12 + 9;
                  pbVar7 = pbVar11;
                  if ((pbVar6 != pbVar11) && (pbVar7 = pbVar6, *pbVar6 - 0x30 < 10)) {
                    bVar9 = 0;
                    *(byte **)(unaff_x20 + 0x28) = pbVar12 + 10;
                    goto LAB_00136320;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(byte **)(unaff_x20 + 0x28) = pbVar7;
  FUN_00138a3c();
  if ((*(long *)(*(long *)(param_1 + 8) + 0x10) != 0) &&
     (pbVar4 = unaff_x28, FUN_000e1d94(), ((ulong)pbVar5 & 1) != 0)) {
    pbVar12 = (byte *)0x0;
    goto LAB_0013634c;
  }
  if ((*(byte *)(unaff_x20 + 0x48) & 1) != 0) goto LAB_00136140;
  lVar10 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
  pbVar6 = pbVar4;
  if (lVar10 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0x28) + 0x24);
    while ((int)unaff_x28 < piVar8[-1] || *piVar8 <= (int)unaff_x28) {
      piVar8 = piVar8 + 2;
      lVar10 = lVar10 + -1;
      if (lVar10 == 0) goto LAB_001362fc;
    }
    goto LAB_00136140;
  }
LAB_001362fc:
  bVar9 = 7;
  pbVar4 = pbVar6;
LAB_00136320:
  FUN_000c723c();
  _swift_allocError(&UNK_009aeed8,pbVar4,0,0);
  *pbVar4 = bVar9;
  _swift_willThrow();
  pbVar12 = param_1;
  goto LAB_0013634c;
LAB_00135eec:
  lVar10 = *(long *)(param_1 + 0x10);
  if ((*(long *)(lVar10 + 0x10) != 0) &&
     (pbVar4 = pbVar12, pbVar5 = unaff_x28, FUN_000e1dc4(), ((ulong)pbVar5 & 1) != 0)) {
    unaff_x28 = *(byte **)(*(long *)(lVar10 + 0x38) + (long)pbVar4 * 8);
    pbVar12 = (byte *)0x0;
    goto LAB_0013634c;
  }
  if ((*(byte *)(unaff_x20 + 0x48) & 1) != 0) {
LAB_00136140:
    pbVar12 = *(byte **)(unaff_x20 + 0x28);
    do {
      if ((pbVar12 == pbVar11) || (bVar1 = *pbVar12, 0x23 < bVar1)) goto LAB_0013614c;
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar1 != 0x23) goto LAB_0013614c;
        pbVar6 = pbVar12 + 1;
        do {
          if (pbVar6 == pbVar11) {
            *(byte **)(unaff_x20 + 0x28) = pbVar11;
            pbVar12 = pbVar11;
            goto LAB_0013614c;
          }
          pbVar12 = pbVar6 + 1;
          bVar1 = *pbVar6;
        } while ((bVar1 != 10) && (pbVar6 = pbVar12, bVar1 != 0xd));
      }
      else {
        pbVar12 = pbVar12 + 1;
      }
      *(byte **)(unaff_x20 + 0x28) = pbVar12;
    } while( true );
  }
  pbVar6 = pbVar4;
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x10) != 0) {
    pbVar4 = unaff_x28 + -(long)pbVar12;
    FUN_00122abc();
    pbVar6 = pbVar12;
    if (pbVar4 != (byte *)0x0) {
      pbVar5 = pbVar4;
      FUN_000b5378();
      _swift_bridgeObjectRelease();
      pbVar6 = pbVar4;
      if (((ulong)pbVar12 & 1) != 0) goto LAB_00136140;
    }
  }
  goto LAB_001362fc;
LAB_0013614c:
  if ((pbVar12 != pbVar11) && (*pbVar12 == 0x3a)) {
    do {
      pbVar12 = pbVar12 + 1;
LAB_00136164:
      *(byte **)(unaff_x20 + 0x28) = pbVar12;
      if ((pbVar12 == pbVar11) || (bVar1 = *pbVar12, 0x23 < bVar1)) {
LAB_0013622c:
        if (pbVar12 == pbVar11) goto LAB_0013631c;
        if ((*pbVar12 == 0x3c) || (*pbVar12 == 0x7b)) goto LAB_00136248;
        pbVar4 = (byte *)((long)&MACH_HEADER.magic + 1);
        FUN_00139b6c();
        goto joined_r0x001362f4;
      }
    } while ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar1 != 0x23) goto LAB_0013622c;
    pbVar6 = pbVar12 + 1;
    while (pbVar12 = pbVar11, pbVar6 != pbVar11) {
      pbVar12 = pbVar6 + 1;
      bVar1 = *pbVar6;
      if ((bVar1 == 10) || (pbVar6 = pbVar12, bVar1 == 0xd)) break;
    }
    goto LAB_00136164;
  }
LAB_00136248:
  FUN_00139e50();
joined_r0x001362f4:
  pbVar12 = param_1;
  if (unaff_x21 != 0) goto LAB_0013634c;
  pbVar12 = *(byte **)(unaff_x20 + 0x28);
  pbVar11 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar12 != pbVar11) && ((*pbVar12 == 0x3b || (*pbVar12 == 0x2c)))) {
    do {
      pbVar12 = pbVar12 + 1;
LAB_00136280:
      *(byte **)(unaff_x20 + 0x28) = pbVar12;
      if ((pbVar12 == pbVar11) || (bVar1 = *pbVar12, 0x23 < bVar1)) goto LAB_00135d38;
    } while ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar1 != 0x23) goto LAB_00135d38;
    pbVar6 = pbVar12 + 1;
    while (pbVar12 = pbVar11, pbVar6 != pbVar11) {
      pbVar12 = pbVar6 + 1;
      bVar1 = *pbVar6;
      if ((bVar1 == 10) || (pbVar6 = pbVar12, bVar1 == 0xd)) break;
    }
    goto LAB_00136280;
  }
  goto LAB_00135d38;
}



/* Entry: 001363c8; end: 00136483;  */

void FUN_001363c8(undefined1 *param_1)

{
  byte *pbVar1;
  bool bVar2;
  byte *pbVar3;
  long unaff_x20;
  long unaff_x21;
  
  pbVar1 = *(byte **)(unaff_x20 + 0x28);
  if (pbVar1 != *(byte **)(unaff_x20 + 0x30)) {
    pbVar3 = pbVar1 + 1;
    if (*pbVar1 == 0x2d) {
      *(byte **)(unaff_x20 + 0x28) = pbVar3;
      if ((pbVar3 != *(byte **)(unaff_x20 + 0x30)) && (0xfffffff5 < *pbVar3 - 0x3a)) {
        FUN_00136484();
        if (unaff_x21 != 0) {
          return;
        }
        if (-1 < (long)param_1) {
          return;
        }
        bVar2 = param_1 == (undefined1 *)0x8000000000000000;
        param_1 = (undefined1 *)0x8000000000000000;
        if (bVar2) {
          return;
        }
      }
    }
    else {
      FUN_00136484();
      if (unaff_x21 != 0) {
        return;
      }
      if (-1 < (long)param_1) {
        return;
      }
    }
  }
  FUN_000c723c();
  _swift_allocError(&UNK_009aeed8,param_1,0,0);
  *param_1 = 1;
  _swift_willThrow();
  return;
}



/* Entry: 00136484; end: 0013662b;  */

ulong FUN_00136484(undefined1 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  ulong unaff_x22;
  
  pbVar5 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if (pbVar5 == pbVar1) {
LAB_001365dc:
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,param_1,0,0);
    *param_1 = 1;
    _swift_willThrow();
  }
  else {
    pbVar4 = pbVar5 + 1;
    bVar2 = *pbVar5;
    *(byte **)(unaff_x20 + 0x28) = pbVar4;
    uVar6 = bVar2 - 0x30;
    if (uVar6 == 0) {
      if (pbVar4 == pbVar1) {
        return 0;
      }
      if (*pbVar4 == 0x78) {
        pbVar5 = pbVar5 + 2;
        *(byte **)(unaff_x20 + 0x28) = pbVar5;
        if (pbVar5 == pbVar1) {
          unaff_x22 = 0;
        }
        else {
          unaff_x22 = 0;
          do {
            bVar2 = *pbVar5;
            uVar6 = bVar2 - 0x30;
            if (9 < uVar6) {
              uVar6 = (uint)bVar2;
              if (bVar2 - 0x61 < 6) {
                uVar6 = uVar6 - 0x57;
              }
              else {
                if (5 < uVar6 - 0x41) break;
                uVar6 = uVar6 - 0x37;
              }
            }
            if (unaff_x22 >> 0x3c != 0) goto LAB_001365dc;
            pbVar5 = pbVar5 + 1;
            *(byte **)(unaff_x20 + 0x28) = pbVar5;
            unaff_x22 = unaff_x22 * 0x10 + (ulong)(byte)uVar6;
          } while (pbVar5 != pbVar1);
        }
      }
      else {
        unaff_x22 = 0;
        do {
          pbVar5 = pbVar4 + 1;
          bVar2 = *pbVar4;
          if ((byte)(bVar2 - 0x38) < 0xf8) break;
          if (unaff_x22 >> 0x3d != 0) goto LAB_001365dc;
          *(byte **)(unaff_x20 + 0x28) = pbVar5;
          unaff_x22 = (ulong)(byte)(bVar2 - 0x30) | unaff_x22 << 3;
          pbVar4 = pbVar5;
        } while (pbVar5 != pbVar1);
      }
    }
    else {
      if (8 < bVar2 - 0x31) goto LAB_001365dc;
      unaff_x22 = (ulong)uVar6 & 0xff;
      while (pbVar4 != pbVar1) {
        if ((byte)(*pbVar4 - 0x3a) < 0xf6) break;
        if (0x1999999999999999 < unaff_x22) goto LAB_001365dc;
        uVar7 = (ulong)(byte)(*pbVar4 - 0x30);
        uVar8 = unaff_x22 * 10;
        if (CARRY8(uVar7,uVar8)) goto LAB_001365dc;
        *(byte **)(unaff_x20 + 0x28) = pbVar4 + 1;
        unaff_x22 = uVar8 + uVar7;
        pbVar4 = pbVar4 + 1;
        if (CARRY8(uVar8,uVar7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x136598);
          (*pcVar3)();
        }
      }
    }
    FUN_00138a3c();
  }
  return unaff_x22;
}



/* Entry: 0013662c; end: 0013687f;  */

uint FUN_0013662c(undefined1 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  long unaff_x20;
  uint unaff_w23;
  uint uVar8;
  
  pbVar3 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  do {
    if ((pbVar3 == pbVar1) || (bVar2 = *pbVar3, 0x23 < bVar2)) break;
    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar2 != 0x23) break;
      pbVar4 = pbVar3 + 1;
      do {
        pbVar3 = pbVar1;
        if (pbVar4 == pbVar1) break;
        pbVar3 = pbVar4 + 1;
        bVar2 = *pbVar4;
        pbVar4 = pbVar3;
      } while (bVar2 != 10 && bVar2 != 0xd);
    }
    else {
      pbVar3 = pbVar3 + 1;
    }
    *(byte **)(unaff_x20 + 0x28) = pbVar3;
  } while( true );
  if (pbVar3 != pbVar1) {
    pbVar4 = pbVar3 + 1;
    bVar2 = *pbVar3;
    *(byte **)(unaff_x20 + 0x28) = pbVar4;
    if (bVar2 < 0x54) {
      if (bVar2 != 0x30) {
        if (bVar2 != 0x31) {
          if (bVar2 == 0x46) goto LAB_00136768;
          goto LAB_0013683c;
        }
        goto LAB_001367d8;
      }
LAB_001367f0:
      unaff_w23 = 0;
      uVar8 = 0;
    }
    else {
      if (bVar2 != 0x54) {
        if (bVar2 == 0x66) {
LAB_00136768:
          if (pbVar4 != pbVar1) {
            param_1 = (undefined1 *)0xae65a8;
            func_0x000115a8(0xae65a8,&UNK_007cd3b0);
            _swift_initStaticObject();
            pbVar3 = *(byte **)(unaff_x20 + 0x28);
            lVar6 = *(long *)(param_1 + 0x10);
            pbVar4 = pbVar3;
            if (lVar6 != 0) {
              pbVar5 = pbVar3;
              pbVar7 = param_1 + 0x20;
              do {
                if (pbVar5 == *(byte **)(unaff_x20 + 0x30)) {
LAB_001367e8:
                  *(byte **)(unaff_x20 + 0x28) = pbVar3;
                  pbVar4 = pbVar3;
                  break;
                }
                pbVar4 = pbVar5 + 1;
                if (*pbVar5 != *pbVar7) goto LAB_001367e8;
                *(byte **)(unaff_x20 + 0x28) = pbVar4;
                lVar6 = lVar6 + -1;
                pbVar5 = pbVar4;
                pbVar7 = pbVar7 + 1;
              } while (lVar6 != 0);
            }
          }
          goto LAB_001367f0;
        }
        if (bVar2 != 0x74) goto LAB_0013683c;
      }
      if (pbVar4 != pbVar1) {
        param_1 = (undefined1 *)0xae65a8;
        func_0x000115a8(0xae65a8,&UNK_007cd3b0);
        _swift_initStaticObject();
        pbVar3 = *(byte **)(unaff_x20 + 0x28);
        lVar6 = *(long *)(param_1 + 0x10);
        pbVar4 = pbVar3;
        if (lVar6 != 0) {
          pbVar5 = pbVar3;
          pbVar7 = param_1 + 0x20;
          do {
            if (pbVar5 == *(byte **)(unaff_x20 + 0x30)) {
LAB_001367d0:
              *(byte **)(unaff_x20 + 0x28) = pbVar3;
              pbVar4 = pbVar3;
              break;
            }
            pbVar4 = pbVar5 + 1;
            if (*pbVar5 != *pbVar7) goto LAB_001367d0;
            *(byte **)(unaff_x20 + 0x28) = pbVar4;
            lVar6 = lVar6 + -1;
            pbVar5 = pbVar4;
            pbVar7 = pbVar7 + 1;
          } while (lVar6 != 0);
        }
      }
LAB_001367d8:
      unaff_w23 = 1;
      uVar8 = 1;
    }
    if (pbVar4 == pbVar1) goto LAB_00136868;
    bVar2 = *pbVar4;
    if (((bVar2 < 0x3f && (1L << ((ulong)bVar2 & 0x3f) & 0x4800100900002600U) != 0) ||
        (bVar2 == 0x7d)) || (bVar2 == 0x5d)) {
      FUN_00138a3c();
      uVar8 = unaff_w23;
      goto LAB_00136868;
    }
  }
LAB_0013683c:
  FUN_000c723c();
  _swift_allocError(&UNK_009aeed8,param_1,0,0);
  *param_1 = 0;
  _swift_willThrow();
  uVar8 = unaff_w23;
LAB_00136868:
  return uVar8 & 1;
}



/* Entry: 00136880; end: 00136a63;  */

void FUN_00136880(undefined1 *param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  long unaff_x20;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  
  FUN_00138a3c();
  pbVar7 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if (pbVar7 != pbVar1) {
    bVar2 = *pbVar7;
    param_1 = (undefined1 *)(ulong)bVar2;
    if ((bVar2 == 0x22) || (bVar2 == 0x27)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar7 + 1;
      FUN_00139694();
      if (param_2 != 0) {
        pbVar7 = *(byte **)(unaff_x20 + 0x28);
        if (pbVar7 == pbVar1) {
          return;
        }
LAB_001368ec:
        bVar2 = *pbVar7;
        if ((bVar2 != 0x22) && (bVar2 != 0x27)) {
          return;
        }
        bVar10 = false;
        pbVar4 = pbVar7 + 1;
        *(byte **)(unaff_x20 + 0x28) = pbVar4;
        pbVar6 = pbVar4;
        do {
          pbVar5 = pbVar6 + ~(ulong)pbVar7;
          do {
            pbVar8 = pbVar6;
            pbVar9 = pbVar1;
            if (pbVar8 == pbVar1) goto LAB_00136a28;
            bVar3 = *pbVar8;
            if (bVar3 == bVar2) {
              FUN_00122abc();
              *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
              pbVar7 = pbVar4;
              FUN_00138a3c();
              if (pbVar5 == (byte *)0x0) goto LAB_00136a2c;
              pbVar6 = pbVar5;
              if (bVar10) {
                FUN_00137218(pbVar4);
                _swift_bridgeObjectRelease();
                pbVar7 = pbVar5;
                if (pbVar6 == (byte *)0x0) goto LAB_00136a2c;
              }
              __sSS6appendyySSF(pbVar4,pbVar6);
              _swift_bridgeObjectRelease(pbVar6);
              pbVar7 = *(byte **)(unaff_x20 + 0x28);
              if (pbVar7 == pbVar1) {
                return;
              }
              goto LAB_001368ec;
            }
            pbVar9 = pbVar8 + 1;
            if (bVar3 == 10 || bVar3 == 0xd) goto LAB_00136a28;
            pbVar5 = pbVar5 + 1;
            pbVar6 = pbVar9;
          } while (bVar3 != 0x5c);
          pbVar6 = pbVar8 + 2;
          bVar10 = true;
        } while (pbVar9 != pbVar1);
LAB_00136a28:
        *(byte **)(unaff_x20 + 0x28) = pbVar9;
        pbVar7 = pbVar4;
LAB_00136a2c:
        FUN_000c723c();
        _swift_allocError(&UNK_009aeed8,pbVar7,0,0);
        *pbVar7 = 0;
        _swift_willThrow();
        _swift_bridgeObjectRelease(param_2);
        return;
      }
    }
  }
  FUN_000c723c();
  _swift_allocError(&UNK_009aeed8,param_1,0,0);
  *param_1 = 0;
  _swift_willThrow();
  return;
}



/* Entry: 00136a64; end: 00136d1b;  */

/* WARNING: Removing unreachable block (ram,0x00136d04) */

void FUN_00136a64(undefined1 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  byte *pbVar8;
  long unaff_x20;
  char *pcVar9;
  long unaff_x21;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  ulong unaff_x28;
  long lStack_80;
  ulong uStack_78;
  char *pcStack_70;
  char *pcStack_68;
  char cStack_52;
  char cStack_51;
  
  FUN_00138a3c();
  pbVar8 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if (pbVar8 != pbVar1) {
    bVar2 = *pbVar8;
    pcVar10 = (char *)(ulong)bVar2;
    if ((bVar2 == 0x22) || (bVar2 == 0x27)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
      cStack_51 = '\0';
      pcVar4 = &cStack_51;
      FUN_00138b78();
      if (unaff_x21 != 0) {
        return;
      }
      if (cStack_51 == '\x01') {
        FUN_000d4dcc();
        pcStack_70 = pcVar10;
        pcStack_68 = pcVar4;
        FUN_0013a18c(&pcStack_70);
      }
      else {
        pcVar9 = *(char **)(unaff_x20 + 0x28);
        pcVar4 = pcVar9;
        pcVar7 = pcVar10;
        FUN_00135524();
        pcStack_70 = pcVar4;
        pcStack_68 = pcVar7;
        if (SCARRY8((long)pcVar10,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x136d1c);
          (*pcVar3)();
        }
        *(char **)(unaff_x20 + 0x28) = pcVar9 + (long)(pcVar10 + 1);
      }
      FUN_00138a3c();
      pbVar8 = *(byte **)(unaff_x20 + 0x28);
      while( true ) {
        if (pbVar8 == pbVar1) {
          return;
        }
        bVar2 = *pbVar8;
        uVar11 = (ulong)bVar2;
        if ((bVar2 != 0x27) && (bVar2 != 0x22)) break;
        *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
        cStack_52 = '\0';
        FUN_00138b78(uVar11,&cStack_52);
        if (cStack_52 == '\x01') {
          if (uVar11 == 0) {
            lVar5 = 0;
            uStack_78 = 0xc000000000000000;
          }
          else if ((long)uVar11 < 0xf) {
            if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x136d18);
              (*pcVar3)();
            }
            lVar5 = 0;
            uStack_78 = unaff_x28 & 0xf00000000000000 | (uVar11 & 0xff) << 0x30;
            unaff_x28 = uStack_78;
          }
          else {
            __s10Foundation13__DataStorageCMa();
            _swift_allocObject();
            uVar6 = uVar11;
            __s10Foundation13__DataStorageC6lengthACSi_tcfc();
            if (uVar11 < 0x7fffffff) {
              lVar5 = uVar11 << 0x20;
              uStack_78 = uVar6 | 0x4000000000000000;
            }
            else {
              lVar5 = 0;
              __s10Foundation4DataV14RangeReferenceCMa();
              _swift_allocObject();
              *(undefined8 *)(lVar5 + 0x10) = 0;
              *(ulong *)(lVar5 + 0x18) = uVar11;
              uStack_78 = uVar6 | 0x8000000000000000;
            }
          }
          lStack_80 = lVar5;
          FUN_0013a18c(&lStack_80);
          uVar11 = uStack_78;
          lVar5 = lStack_80;
          __s10Foundation4DataV6appendyyACF(lStack_80,uStack_78);
          FUN_00023358(lVar5,uVar11);
        }
        else {
          lVar12 = *(long *)(unaff_x20 + 0x28);
          lVar5 = lVar12;
          uVar6 = uVar11;
          FUN_00135524(lVar12,uVar11);
          __s10Foundation4DataV6appendyyACF();
          FUN_00023358(lVar5,uVar6);
          if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x136d14);
            (*pcVar3)();
          }
          *(ulong *)(unaff_x20 + 0x28) = lVar12 + uVar11 + 1;
        }
        FUN_00138a3c();
        pbVar8 = *(byte **)(unaff_x20 + 0x28);
      }
      return;
    }
  }
  FUN_000c723c();
  _swift_allocError(&UNK_009aeed8,param_1,0,0);
  *param_1 = 0;
  _swift_willThrow();
  return;
}



/* Entry: 00136d1c; end: 00136e17;  */

void FUN_00136d1c(undefined1 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  long unaff_x20;
  
  pbVar4 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  do {
    if ((pbVar4 == pbVar1) || (bVar2 = *pbVar4, 0x23 < bVar2)) goto LAB_00136d9c;
    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar2 != 0x23) {
LAB_00136d9c:
        if (pbVar4 == pbVar1) {
          FUN_000c723c();
          _swift_allocError(&UNK_009aeed8,param_1,0,0);
          *param_1 = 0;
          _swift_willThrow();
        }
        else if ((*pbVar4 & 0xffffffdf) - 0x41 < 0x1a) {
          func_0x00138ab4();
        }
        return;
      }
      pbVar3 = pbVar4 + 1;
      do {
        pbVar4 = pbVar1;
        if (pbVar3 == pbVar1) break;
        pbVar4 = pbVar3 + 1;
        bVar2 = *pbVar3;
        pbVar3 = pbVar4;
      } while (bVar2 != 10 && bVar2 != 0xd);
    }
    else {
      pbVar4 = pbVar4 + 1;
    }
    *(byte **)(unaff_x20 + 0x28) = pbVar4;
  } while( true );
}



/* Entry: 00136e18; end: 00136f33;  */

undefined8 FUN_00136e18(byte param_1)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  code *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  long unaff_x20;
  
  pbVar6 = *(byte **)(unaff_x20 + 0x28);
  pbVar2 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar6 == pbVar2) || (pbVar5 = pbVar6 + 1, *pbVar6 != param_1)) {
    return 0;
  }
  *(byte **)(unaff_x20 + 0x28) = pbVar5;
  do {
    if ((pbVar5 == pbVar2) || (bVar3 = *pbVar5, 0x23 < bVar3)) goto LAB_00136eb8;
    if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar3 != 0x23) {
LAB_00136eb8:
        lVar1 = *(long *)(unaff_x20 + 0x50) + 1;
        if (SCARRY8(*(long *)(unaff_x20 + 0x50),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x136ee8);
          (*pcVar4)();
        }
        *(long *)(unaff_x20 + 0x50) = lVar1;
        if (lVar1 <= *(long *)(unaff_x20 + 0x40)) {
          return 1;
        }
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd00000000000003f,0x80000000008b9020,
                   "SwiftProtobuf/TextFormatScanner.swift",0x25,2,0x119,0);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x136f34);
        (*pcVar4)();
      }
      pbVar6 = pbVar5 + 1;
      do {
        pbVar5 = pbVar2;
        if (pbVar6 == pbVar2) break;
        pbVar5 = pbVar6 + 1;
        bVar3 = *pbVar6;
        pbVar6 = pbVar5;
      } while (bVar3 != 10 && bVar3 != 0xd);
    }
    else {
      pbVar5 = pbVar5 + 1;
    }
    *(byte **)(unaff_x20 + 0x28) = pbVar5;
  } while( true );
}



/* Entry: 00136f34; end: 00137217;  */

void FUN_00136f34(undefined1 *param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  
  pbVar6 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  do {
    if ((pbVar6 == pbVar1) || (bVar2 = *pbVar6, 0x23 < bVar2)) goto LAB_00136fbc;
    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar2 != 0x23) {
LAB_00136fbc:
        if (pbVar6 != pbVar1) {
          bVar2 = *pbVar6;
          if (bVar2 == 0x5b) {
            if (((ulong)param_1 & 1) != 0) {
              FUN_00139a60();
              if (unaff_x21 != 0) {
                return;
              }
              __sSS6appendyySSF();
              _swift_bridgeObjectRelease(param_2);
              __sSS6appendyySSF(0x5d,0xe100000000000000);
              return;
            }
            FUN_000c723c();
            _swift_allocError(&UNK_009aeed8,param_1,0,0);
            *param_1 = 7;
          }
          else {
            if ((bVar2 & 0xffffffdf) - 0x41 < 0x1a) {
              func_0x00138ab4();
              if (param_1 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x137210);
                (*pcVar3)();
              }
              param_2 = param_2 - (long)param_1;
              FUN_00122abc();
              if (param_2 != 0) {
                return;
              }
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x137214);
              (*pcVar3)();
            }
            if (bVar2 - 0x31 < 9) {
              pbVar5 = pbVar6 + 1;
              pbVar4 = pbVar1;
              if (((((((pbVar5 == pbVar1) || (pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6)) ||
                     (pbVar5 = pbVar6 + 2, pbVar4 = pbVar1, pbVar5 == pbVar1)) ||
                    ((pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6 ||
                     (pbVar5 = pbVar6 + 3, pbVar4 = pbVar1, pbVar5 == pbVar1)))) ||
                   ((pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6 ||
                    ((pbVar5 = pbVar6 + 4, pbVar4 = pbVar1, pbVar5 == pbVar1 ||
                     (pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6)))))) ||
                  (pbVar5 = pbVar6 + 5, pbVar4 = pbVar1, pbVar5 == pbVar1)) ||
                 (((((pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6 ||
                     (pbVar5 = pbVar6 + 6, pbVar4 = pbVar1, pbVar5 == pbVar1)) ||
                    (pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6)) ||
                   (((pbVar5 = pbVar6 + 7, pbVar4 = pbVar1, pbVar5 == pbVar1 ||
                     (pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6)) ||
                    ((pbVar5 = pbVar6 + 8, pbVar4 = pbVar1, pbVar5 == pbVar1 ||
                     ((pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6 ||
                      (pbVar5 = pbVar6 + 9, pbVar4 = pbVar1, pbVar5 == pbVar1)))))))) ||
                  (pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6)))) {
                *(byte **)(unaff_x20 + 0x28) = pbVar4;
                lVar7 = (long)pbVar4 - (long)pbVar6;
                func_0x00138a3c();
                FUN_00122abc(pbVar6);
                if (lVar7 != 0) {
                  return;
                }
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x137218);
                (*pcVar3)();
              }
              *(byte **)(unaff_x20 + 0x28) = pbVar6 + 10;
            }
            FUN_000c723c();
            _swift_allocError(&UNK_009aeed8,param_1,0,0);
            *param_1 = 0;
          }
          _swift_willThrow();
        }
        return;
      }
      pbVar5 = pbVar6 + 1;
      do {
        pbVar6 = pbVar1;
        if (pbVar5 == pbVar1) break;
        pbVar6 = pbVar5 + 1;
        bVar2 = *pbVar5;
        pbVar5 = pbVar6;
      } while (bVar2 != 10 && bVar2 != 0xd);
    }
    else {
      pbVar6 = pbVar6 + 1;
    }
    *(byte **)(unaff_x20 + 0x28) = pbVar6;
  } while( true );
}



/* Entry: 00137218; end: 00138367;  */

/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_00137218(undefined8 *******param_1,ulong param_2)

{
  undefined8 *******pppppppuVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  code *pcVar5;
  undefined8 *******pppppppuVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  undefined8 *******pppppppuStack_88;
  ulong uStack_80;
  undefined8 *******pppppppuStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uStack_68 = 0xf;
  uVar2 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  pppppppuStack_78 = param_1;
  uStack_70 = param_2;
  _swift_bridgeObjectRetain(param_2);
  puVar9 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar2 != 0) {
    uVar21 = uVar2 << 2;
    uVar11 = (uint)((ulong)param_1 >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar11 = 1;
    }
    uVar22 = 4L << uVar11;
    uVar14 = param_2 & 0xffffffffffffff;
    pppppppuVar1 = (undefined8 *******)((param_2 & 0xfffffffffffffff) + 0x20);
    uVar7 = 0xf;
    do {
      uVar17 = uVar7 & 0xc;
      uVar13 = uVar7;
      if (uVar17 == uVar22) {
        FUN_0002269c(uVar7,param_1,param_2);
      }
      if (uVar2 <= uVar13 >> 0x10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x138334);
        (*pcVar5)();
      }
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          pppppppuVar6 = pppppppuVar1;
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            pppppppuVar6 = param_1;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
          }
        }
        else {
          pppppppuStack_88 = param_1;
          uStack_80 = uVar14;
          pppppppuVar6 = &pppppppuStack_88;
        }
        uVar11 = (uint)*(byte *)((long)pppppppuVar6 + (uVar13 >> 0x10));
        if (uVar17 == uVar22) goto LAB_0013738c;
LAB_0013733c:
        if ((param_2 >> 0x3c & 1) != 0) goto LAB_0013739c;
LAB_00137340:
        uVar7 = (uVar7 & 0xffffffffffff0000) + 0x10004;
      }
      else {
        __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar13,param_1,param_2);
        uVar11 = (uint)uVar13;
        if (uVar17 != uVar22) goto LAB_0013733c;
LAB_0013738c:
        FUN_0002269c(uVar7,param_1,param_2);
        if ((param_2 >> 0x3c & 1) == 0) goto LAB_00137340;
LAB_0013739c:
        if (uVar2 <= uVar7 >> 0x10) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x138338);
          (*pcVar5)();
        }
        __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
      }
      uStack_68 = uVar7;
      if ((uVar11 & 0xff) != 0x5c) {
        puVar15 = puVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar8 = puVar9;
        if (((ulong)puVar15 & 1) == 0) {
          puVar8 = (undefined *)0x0;
          FUN_000540b4(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
        }
        uVar7 = *(ulong *)(puVar8 + 0x10);
        puVar9 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          FUN_000540b4(puVar9,uVar7 + 1,1,puVar8);
        }
        *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
        puVar9[uVar7 + 0x20] = (char)uVar11;
        goto LAB_001372d0;
      }
      if (uVar21 == uVar7 >> 0xe) goto LAB_001382f0;
      uVar17 = uVar7 & 0xc;
      uVar13 = uVar7;
      if (uVar17 == uVar22) {
        FUN_0002269c();
      }
      if (uVar2 <= uVar13 >> 0x10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x13833c);
        (*pcVar5)();
      }
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          pppppppuVar6 = pppppppuVar1;
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            pppppppuVar6 = param_1;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
          }
        }
        else {
          pppppppuStack_88 = param_1;
          uStack_80 = uVar14;
          pppppppuVar6 = &pppppppuStack_88;
        }
        bVar3 = *(byte *)((long)pppppppuVar6 + (uVar13 >> 0x10));
        uVar16 = (uint)bVar3;
        uVar11 = (uint)bVar3;
        if (uVar17 != uVar22) goto LAB_00137460;
LAB_00137488:
        uVar16 = uVar11;
        FUN_0002269c();
        if ((param_2 >> 0x3c & 1) == 0) goto LAB_00137464;
LAB_00137498:
        if (uVar2 <= uVar7 >> 0x10) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x138340);
          (*pcVar5)();
        }
        __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
      }
      else {
        __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar13,param_1,param_2);
        uVar16 = (uint)uVar13;
        uVar11 = uVar16;
        if (uVar17 == uVar22) goto LAB_00137488;
LAB_00137460:
        if ((param_2 >> 0x3c & 1) != 0) goto LAB_00137498;
LAB_00137464:
        uVar7 = (uVar7 & 0xffffffffffff0000) + 0x10004;
      }
      uStack_68 = uVar7;
      if ((uVar16 & 0xf8) == 0x30) {
        cVar4 = (char)uVar16 + -0x30;
        if (uVar21 != uVar7 >> 0xe) {
          uVar13 = uVar7;
          if ((uVar7 & 0xc) == uVar22) {
            FUN_0002269c(uVar7,param_1,param_2);
          }
          uVar17 = uVar13 >> 0x10;
          if (uVar2 <= uVar17) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x138344);
            (*pcVar5)();
          }
          if ((param_2 >> 0x3c & 1) == 0) {
            if ((param_2 >> 0x3d & 1) == 0) {
              pppppppuVar6 = pppppppuVar1;
              if (((ulong)param_1 >> 0x3c & 1) == 0) {
                pppppppuVar6 = param_1;
                __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
              }
              uVar11 = (uint)*(byte *)((long)pppppppuVar6 + uVar17);
            }
            else {
              pppppppuStack_88 = param_1;
              uStack_80 = uVar14;
              uVar11 = (uint)*(byte *)((long)&pppppppuStack_88 + uVar17);
            }
          }
          else {
            __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
            uVar11 = (uint)uVar13;
          }
          uVar13 = uVar7;
          if ((uVar7 & 0xc) == uVar22) {
            FUN_0002269c(uVar7,param_1,param_2);
            if ((param_2 >> 0x3c & 1) == 0) goto LAB_00137604;
LAB_00137afc:
            if (uVar2 <= uVar13 >> 0x10) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x138348);
              (*pcVar5)();
            }
            __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
          }
          else {
            if ((param_2 >> 0x3c & 1) != 0) goto LAB_00137afc;
LAB_00137604:
            uVar13 = (uVar13 & 0xffffffffffff0000) + 0x10004;
          }
          if ((uVar11 & 0xf8) == 0x30) {
            bVar3 = (char)uVar11 - 0x30;
            if (uVar21 != uVar13 >> 0xe) {
              uVar7 = uVar13;
              if ((uVar13 & 0xc) == uVar22) {
                FUN_0002269c(uVar13,param_1,param_2);
              }
              uVar17 = uVar7 >> 0x10;
              if (uVar2 <= uVar17) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x13834c);
                (*pcVar5)();
              }
              if ((param_2 >> 0x3c & 1) == 0) {
                if ((param_2 >> 0x3d & 1) == 0) {
                  pppppppuVar6 = pppppppuVar1;
                  if (((ulong)param_1 >> 0x3c & 1) == 0) {
                    pppppppuVar6 = param_1;
                    __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
                  }
                  uVar11 = (uint)*(byte *)((long)pppppppuVar6 + uVar17);
                }
                else {
                  pppppppuStack_88 = param_1;
                  uStack_80 = uVar14;
                  uVar11 = (uint)*(byte *)((long)&pppppppuStack_88 + uVar17);
                }
              }
              else {
                __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
                uVar11 = (uint)uVar7;
              }
              uVar7 = uVar13;
              if ((uVar13 & 0xc) == uVar22) {
                FUN_0002269c(uVar13,param_1,param_2);
                if ((param_2 >> 0x3c & 1) == 0) goto LAB_00137be8;
LAB_00137c98:
                if (uVar2 <= uVar7 >> 0x10) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x138358);
                  (*pcVar5)();
                }
                __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
              }
              else {
                if ((param_2 >> 0x3c & 1) != 0) goto LAB_00137c98;
LAB_00137be8:
                uVar7 = (uVar7 & 0xffffffffffff0000) + 0x10004;
              }
              uStack_68 = uVar7;
              if ((uVar11 & 0xf8) == 0x30) {
                _swift_bridgeObjectRetain(param_2);
                puVar15 = puVar9;
                _swift_isUniquelyReferenced_nonNull_native();
                puVar8 = puVar9;
                if (((ulong)puVar15 & 1) == 0) {
                  puVar8 = (undefined *)0x0;
                  FUN_000540b4(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
                }
                uVar7 = *(ulong *)(puVar8 + 0x10);
                puVar9 = puVar8;
                if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
                  puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
                  FUN_000540b4(puVar9,uVar7 + 1,1,puVar8);
                }
                *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
                puVar9[uVar7 + 0x20] = (char)uVar11 + (bVar3 * '\b' | (byte)(uVar16 << 6)) + -0x30;
                _swift_bridgeObjectRelease(param_2);
                goto LAB_001372d0;
              }
            }
            _swift_bridgeObjectRetain(param_2);
            puVar15 = puVar9;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar8 = puVar9;
            if (((ulong)puVar15 & 1) == 0) {
              puVar8 = (undefined *)0x0;
              FUN_000540b4(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
            }
            uVar7 = *(ulong *)(puVar8 + 0x10);
            puVar9 = puVar8;
            if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
              FUN_000540b4(puVar9,uVar7 + 1,1,puVar8);
            }
            *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
            puVar9[uVar7 + 0x20] = bVar3 | cVar4 * '\b';
            _swift_bridgeObjectRelease(param_2);
            pppppppuStack_78 = param_1;
            uStack_70 = param_2;
            uStack_68 = uVar13;
            goto LAB_001372d0;
          }
        }
        _swift_bridgeObjectRetain(param_2);
        puVar15 = puVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar8 = puVar9;
        if (((ulong)puVar15 & 1) == 0) {
          puVar8 = (undefined *)0x0;
          FUN_000540b4(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
        }
        uVar13 = *(ulong *)(puVar8 + 0x10);
        puVar9 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar13) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          FUN_000540b4(puVar9,uVar13 + 1,1,puVar8);
        }
        *(ulong *)(puVar9 + 0x10) = uVar13 + 1;
        puVar9[uVar13 + 0x20] = cVar4;
        _swift_bridgeObjectRelease(param_2);
        pppppppuStack_78 = param_1;
        uStack_70 = param_2;
        uStack_68 = uVar7;
      }
      else {
        switch(uVar16 & 0xff) {
        case 0x22:
        case 0x27:
        case 0x3f:
        case 0x5c:
          puVar15 = puVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar8 = puVar9;
          if (((ulong)puVar15 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            FUN_000540b4(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar7 = *(ulong *)(puVar8 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            FUN_000540b4(puVar9,uVar7 + 1,1,puVar8);
          }
          *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
          puVar9[uVar7 + 0x20] = (char)uVar16;
          break;
        default:
LAB_001382f0:
          _swift_bridgeObjectRelease(puVar9);
          _swift_bridgeObjectRelease(param_2);
          puVar15 = (undefined *)0x0;
          uVar10 = 0;
          goto LAB_00138308;
        case 0x55:
        case 0x75:
          pppppppuVar6 = &pppppppuStack_78;
          FUN_001384c4();
          if (((ulong)pppppppuVar6 & 0xff00000000) == 0x100000000) goto LAB_001382f0;
          uVar11 = (uint)pppppppuVar6;
          if ((uVar16 & 0xff) == 0x55) {
            pppppppuVar6 = &pppppppuStack_78;
            FUN_001384c4();
            if (((ulong)pppppppuVar6 & 0xff00000000) == 0x100000000) goto LAB_001382f0;
            uVar16 = uVar11 * 0x10000;
            uVar11 = (uint)pppppppuVar6 + uVar16;
            if (CARRY4((uint)pppppppuVar6,uVar16)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x138354);
              (*pcVar5)();
            }
          }
          if (uVar11 < 0x80) {
            puVar15 = puVar9;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar8 = puVar9;
            if (((ulong)puVar15 & 1) == 0) {
              puVar8 = (undefined *)0x0;
              FUN_000540b4(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
            }
            uVar7 = *(ulong *)(puVar8 + 0x10);
            puVar9 = puVar8;
            if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
              FUN_000540b4(puVar9,uVar7 + 1,1,puVar8);
            }
            *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
            puVar9[uVar7 + 0x20] = (byte)uVar11;
            break;
          }
          if (uVar11 < 0x800) {
            puVar15 = puVar9;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar8 = puVar9;
            if (((ulong)puVar15 & 1) == 0) {
              puVar8 = (undefined *)0x0;
              FUN_000540b4(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
            }
            uVar7 = *(ulong *)(puVar8 + 0x10);
            uVar13 = *(ulong *)(puVar8 + 0x18);
            uVar17 = uVar13 >> 1;
            lVar19 = uVar7 + 1;
            puVar9 = puVar8;
            if (uVar17 <= uVar7) {
              puVar9 = (undefined *)(ulong)(1 < uVar13);
              FUN_000540b4(puVar9,lVar19,1,puVar8);
              uVar13 = *(ulong *)(puVar9 + 0x18);
              uVar17 = uVar13 >> 1;
            }
            *(long *)(puVar9 + 0x10) = lVar19;
            puVar9[uVar7 + 0x20] = (byte)(uVar11 >> 6) | 0xc0;
            lVar20 = uVar7 + 2;
            if ((long)uVar17 < lVar20) {
              puVar15 = (undefined *)(ulong)(1 < uVar13);
              FUN_000540b4(puVar15,lVar20,1,puVar9);
              puVar9 = puVar15;
            }
code_r0x00137a30:
            *(long *)(puVar9 + 0x10) = lVar20;
            puVar15 = puVar9 + lVar19;
          }
          else {
            if (uVar11 >> 0x10 != 0) {
              if (0x10ffff < uVar11) goto LAB_001382f0;
              puVar15 = puVar9;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar8 = puVar9;
              if (((ulong)puVar15 & 1) == 0) {
                puVar8 = (undefined *)0x0;
                FUN_000540b4(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
              }
              uVar7 = *(ulong *)(puVar8 + 0x10);
              uVar13 = *(ulong *)(puVar8 + 0x18);
              uVar17 = uVar13 >> 1;
              puVar9 = puVar8;
              if (uVar17 <= uVar7) {
                puVar9 = (undefined *)(ulong)(1 < uVar13);
                FUN_000540b4(puVar9,uVar7 + 1,1,puVar8);
                uVar13 = *(ulong *)(puVar9 + 0x18);
                uVar17 = uVar13 >> 1;
              }
              *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
              puVar9[uVar7 + 0x20] = (byte)(uVar11 >> 0x12) | 0xf0;
              lVar19 = uVar7 + 2;
              puVar15 = puVar9;
              if ((long)uVar17 < lVar19) {
                puVar15 = (undefined *)(ulong)(1 < uVar13);
                FUN_000540b4(puVar15,lVar19,1,puVar9);
                uVar13 = *(ulong *)(puVar15 + 0x18);
                uVar17 = uVar13 >> 1;
              }
              *(long *)(puVar15 + 0x10) = lVar19;
              puVar15[uVar7 + 0x21] = (byte)(uVar11 >> 0xc) & 0x3f | 0x80;
              lVar19 = uVar7 + 3;
              puVar8 = puVar15;
              if ((long)uVar17 < lVar19) {
                puVar8 = (undefined *)(ulong)(1 < uVar13);
                FUN_000540b4(puVar8,lVar19,1,puVar15);
                uVar13 = *(ulong *)(puVar8 + 0x18);
                uVar17 = uVar13 >> 1;
              }
              *(long *)(puVar8 + 0x10) = lVar19;
              puVar8[uVar7 + 0x22] = (byte)(uVar11 >> 6) & 0x3f | 0x80;
              lVar20 = uVar7 + 4;
              puVar9 = puVar8;
              if ((long)uVar17 < lVar20) {
                puVar9 = (undefined *)(ulong)(1 < uVar13);
                FUN_000540b4(puVar9,lVar20,1,puVar8);
              }
              goto code_r0x00137a30;
            }
            puVar15 = puVar9;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar8 = puVar9;
            if (((ulong)puVar15 & 1) == 0) {
              puVar8 = (undefined *)0x0;
              FUN_000540b4(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
            }
            uVar7 = *(ulong *)(puVar8 + 0x10);
            uVar13 = *(ulong *)(puVar8 + 0x18);
            uVar17 = uVar13 >> 1;
            puVar9 = puVar8;
            if (uVar17 <= uVar7) {
              puVar9 = (undefined *)(ulong)(1 < uVar13);
              FUN_000540b4(puVar9,uVar7 + 1,1,puVar8);
              uVar13 = *(ulong *)(puVar9 + 0x18);
              uVar17 = uVar13 >> 1;
            }
            *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
            puVar9[uVar7 + 0x20] = (byte)(uVar11 >> 0xc) | 0xe0;
            lVar19 = uVar7 + 2;
            puVar15 = puVar9;
            if ((long)uVar17 < lVar19) {
              puVar15 = (undefined *)(ulong)(1 < uVar13);
              FUN_000540b4(puVar15,lVar19,1,puVar9);
              uVar13 = *(ulong *)(puVar15 + 0x18);
              uVar17 = uVar13 >> 1;
            }
            *(long *)(puVar15 + 0x10) = lVar19;
            puVar15[uVar7 + 0x21] = (byte)(uVar11 >> 6) & 0x3f | 0x80;
            lVar20 = uVar7 + 3;
            puVar9 = puVar15;
            if ((long)uVar17 < lVar20) {
              puVar9 = (undefined *)(ulong)(1 < uVar13);
              FUN_000540b4(puVar9,lVar20,1,puVar15);
            }
            *(long *)(puVar9 + 0x10) = lVar20;
            puVar15 = puVar9 + lVar19;
          }
          puVar15[0x20] = (byte)uVar11 & 0x3f | 0x80;
          break;
        case 0x61:
          puVar15 = puVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar8 = puVar9;
          if (((ulong)puVar15 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            FUN_000540b4(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar7 = *(ulong *)(puVar8 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            FUN_000540b4(puVar9,uVar7 + 1,1,puVar8);
          }
          *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
          puVar9[uVar7 + 0x20] = 7;
          break;
        case 0x62:
          puVar15 = puVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar8 = puVar9;
          if (((ulong)puVar15 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            FUN_000540b4(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar7 = *(ulong *)(puVar8 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            FUN_000540b4(puVar9,uVar7 + 1,1,puVar8);
          }
          *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
          puVar9[uVar7 + 0x20] = 8;
          break;
        case 0x66:
          puVar15 = puVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar8 = puVar9;
          if (((ulong)puVar15 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            FUN_000540b4(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar7 = *(ulong *)(puVar8 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            FUN_000540b4(puVar9,uVar7 + 1,1,puVar8);
          }
          *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
          puVar9[uVar7 + 0x20] = 0xc;
          break;
        case 0x6e:
          puVar15 = puVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar8 = puVar9;
          if (((ulong)puVar15 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            FUN_000540b4(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar7 = *(ulong *)(puVar8 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            FUN_000540b4(puVar9,uVar7 + 1,1,puVar8);
          }
          *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
          puVar9[uVar7 + 0x20] = 10;
          break;
        case 0x72:
          puVar15 = puVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar8 = puVar9;
          if (((ulong)puVar15 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            FUN_000540b4(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar7 = *(ulong *)(puVar8 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            FUN_000540b4(puVar9,uVar7 + 1,1,puVar8);
          }
          *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
          puVar9[uVar7 + 0x20] = 0xd;
          break;
        case 0x74:
          puVar15 = puVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar8 = puVar9;
          if (((ulong)puVar15 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            FUN_000540b4(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar7 = *(ulong *)(puVar8 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            FUN_000540b4(puVar9,uVar7 + 1,1,puVar8);
          }
          *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
          puVar9[uVar7 + 0x20] = 9;
          break;
        case 0x76:
          puVar15 = puVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar8 = puVar9;
          if (((ulong)puVar15 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            FUN_000540b4(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar7 = *(ulong *)(puVar8 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            FUN_000540b4(puVar9,uVar7 + 1,1,puVar8);
          }
          *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
          puVar9[uVar7 + 0x20] = 0xb;
          break;
        case 0x78:
          if (uVar21 == uVar7 >> 0xe) goto LAB_001382f0;
          uVar17 = uVar7 & 0xc;
          uVar13 = uVar7;
          if (uVar17 == uVar22) {
            FUN_0002269c(uVar7,param_1,param_2);
          }
          uVar18 = uVar13 >> 0x10;
          if (uVar2 <= uVar18) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x138350);
            (*pcVar5)();
          }
          if ((param_2 >> 0x3c & 1) == 0) {
            if ((param_2 >> 0x3d & 1) != 0) {
              pppppppuStack_88 = param_1;
              uStack_80 = uVar14;
              uVar11 = (uint)*(byte *)((long)&pppppppuStack_88 + uVar18);
              goto joined_r0x00137828;
            }
            pppppppuVar6 = pppppppuVar1;
            if (((ulong)param_1 >> 0x3c & 1) == 0) {
              pppppppuVar6 = param_1;
              __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
            }
            uVar11 = (uint)*(byte *)((long)pppppppuVar6 + uVar18);
            if (uVar17 == uVar22) goto code_r0x001378d4;
code_r0x0013782c:
            if ((param_2 >> 0x3c & 1) != 0) goto code_r0x001378ec;
code_r0x00137830:
            uVar7 = (uVar7 & 0xffffffffffff0000) + 0x10004;
          }
          else {
            __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
            uVar11 = (uint)uVar13;
joined_r0x00137828:
            if (uVar17 != uVar22) goto code_r0x0013782c;
code_r0x001378d4:
            FUN_0002269c(uVar7,param_1,param_2);
            if ((param_2 >> 0x3c & 1) == 0) goto code_r0x00137830;
code_r0x001378ec:
            if (uVar2 <= uVar7 >> 0x10) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x13835c);
              (*pcVar5)();
            }
            __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF(uVar7,param_1,param_2);
          }
          uVar16 = uVar11 - 0x30;
          if (9 < (uVar16 & 0xff)) {
            if ((uVar11 - 0x41 & 0xff) < 6) {
              uVar16 = uVar11 - 0x37;
            }
            else {
              if ((uVar11 - 0x67 & 0xff) < 0xfa) goto LAB_001382f0;
              uVar16 = uVar11 - 0x57;
            }
          }
          pppppppuVar6 = param_1;
          uVar13 = param_2;
          if (uVar21 != uVar7 >> 0xe) {
            uVar13 = uVar7;
            if ((uVar7 & 0xc) == uVar22) {
              FUN_0002269c(uVar7,param_1,param_2);
            }
            uVar17 = uVar13 >> 0x10;
            if (uVar2 <= uVar17) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x138360);
              (*pcVar5)();
            }
            if ((param_2 >> 0x3c & 1) == 0) {
              if ((param_2 >> 0x3d & 1) == 0) {
                pppppppuVar6 = pppppppuVar1;
                if (((ulong)param_1 >> 0x3c & 1) == 0) {
                  pppppppuVar6 = param_1;
                  __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
                }
                uVar11 = (uint)*(byte *)((long)pppppppuVar6 + uVar17);
              }
              else {
                pppppppuStack_88 = param_1;
                uStack_80 = uVar14;
                uVar11 = (uint)*(byte *)((long)&pppppppuStack_88 + uVar17);
              }
            }
            else {
              __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
              uVar11 = (uint)uVar13;
            }
            uVar17 = uVar7;
            if ((uVar7 & 0xc) == uVar22) {
              FUN_0002269c(uVar7,param_1,param_2);
              if ((param_2 >> 0x3c & 1) == 0) goto code_r0x00137a6c;
code_r0x00138024:
              if (uVar2 <= uVar17 >> 0x10) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x138368);
                (*pcVar5)();
              }
              __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
            }
            else {
              if ((param_2 >> 0x3c & 1) != 0) goto code_r0x00138024;
code_r0x00137a6c:
              uVar17 = (uVar17 & 0xffffffffffff0000) + 0x10004;
            }
            uVar12 = uVar11 - 0x30;
            if (9 < (uVar12 & 0xff)) {
              if ((uVar11 - 0x41 & 0xff) < 6) {
                uVar12 = uVar11 - 0x37;
              }
              else {
                pppppppuVar6 = param_1;
                uVar13 = param_2;
                if ((uVar11 - 0x67 & 0xff) < 0xfa) goto code_r0x00138084;
                uVar12 = uVar11 - 0x57;
              }
            }
            uVar16 = (uVar16 & 0xf) * 0x10 + (uVar12 & 0xff);
            pppppppuVar6 = pppppppuStack_78;
            uVar13 = uStack_70;
            uVar7 = uVar17;
            if (uVar16 >> 8 != 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x138364);
              uStack_68 = uVar17;
              (*pcVar5)();
            }
          }
code_r0x00138084:
          uStack_68 = uVar7;
          uStack_70 = uVar13;
          pppppppuStack_78 = pppppppuVar6;
          _swift_bridgeObjectRetain(param_2);
          puVar15 = puVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar8 = puVar9;
          if (((ulong)puVar15 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            FUN_000540b4(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar7 = *(ulong *)(puVar8 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            FUN_000540b4(puVar9,uVar7 + 1,1,puVar8);
          }
          *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
          puVar9[uVar7 + 0x20] = (char)uVar16;
          _swift_bridgeObjectRelease(param_2);
        }
      }
LAB_001372d0:
      uVar7 = uStack_68;
    } while (uVar21 != uStack_68 >> 0xe);
  }
  uVar10 = *(undefined8 *)(puVar9 + 0x10);
  puVar15 = puVar9 + 0x20;
  FUN_00122abc(puVar15,uVar10);
  _swift_bridgeObjectRelease(puVar9);
  _swift_bridgeObjectRelease(param_2);
LAB_00138308:
  auVar23._8_8_ = uVar10;
  auVar23._0_8_ = puVar15;
  return auVar23;
}



/* Entry: 00138368; end: 001384c3;  */

void FUN_00138368(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x138368);
  (*pcVar1)();
}



/* Entry: 001384c4; end: 00138a3b;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_001384c4(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  byte bVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *******pppppppuStack_70;
  ulong uStack_68;
  
  pppppppuVar10 = (undefined8 *******)*param_1;
  uVar2 = param_1[1];
  uVar1 = (ulong)pppppppuVar10 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  lVar14 = uVar1 * 4;
  uVar7 = param_1[2];
  if (lVar14 - (uVar7 >> 0xe) == 0) {
    return 0x100000000;
  }
  uVar12 = (uint)((ulong)pppppppuVar10 >> 0x3b) & 1;
  if ((uVar2 & 0x1000000000000000) == 0) {
    uVar12 = 1;
  }
  uVar13 = 4L << uVar12;
  uVar8 = uVar7;
  if ((uVar7 & 0xc) == uVar13) {
    FUN_0002269c(uVar7,pppppppuVar10,uVar2);
  }
  if (uVar1 <= uVar8 >> 0x10) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1385a0);
    (*pcVar6)();
  }
  if ((uVar2 >> 0x3c & 1) == 0) {
    if ((uVar2 >> 0x3d & 1) == 0) {
      if (((ulong)pppppppuVar10 >> 0x3c & 1) == 0) {
        pppppppuVar9 = pppppppuVar10;
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pppppppuVar10,uVar2);
      }
      else {
        pppppppuVar9 = (undefined8 *******)((uVar2 & 0xfffffffffffffff) + 0x20);
      }
    }
    else {
      pppppppuStack_70 = pppppppuVar10;
      uStack_68 = uVar2 & 0xffffffffffffff;
      pppppppuVar9 = &pppppppuStack_70;
    }
    uVar12 = (uint)*(byte *)((long)pppppppuVar9 + (uVar8 >> 0x10));
  }
  else {
    __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar8,pppppppuVar10,uVar2);
    uVar12 = (uint)uVar8;
  }
  if ((uVar7 & 0xc) == uVar13) {
    FUN_0002269c(uVar7,pppppppuVar10,uVar2);
  }
  if ((uVar2 >> 0x3c & 1) == 0) {
    uVar7 = (uVar7 & 0xffffffffffff0000) + 0x10004;
  }
  else {
    if (uVar1 <= uVar7 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x138960);
      (*pcVar6)();
    }
    __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
  }
  param_1[2] = uVar7;
  uVar3 = uVar12 - 0x30;
  if (9 < (uVar3 & 0xff)) {
    if ((uVar12 - 0x41 & 0xff) < 6) {
      uVar3 = uVar12 - 0x37;
    }
    else {
      if (5 < (uVar12 - 0x61 & 0xff)) {
        return 0x100000000;
      }
      uVar3 = uVar12 - 0x57;
    }
  }
  if (lVar14 - (uVar7 >> 0xe) == 0) {
    return 0x100000000;
  }
  uVar8 = uVar7;
  if ((uVar7 & 0xc) == uVar13) {
    FUN_0002269c();
  }
  if (uVar1 <= uVar8 >> 0x10) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x13899c);
    (*pcVar6)();
  }
  if ((uVar2 >> 0x3c & 1) == 0) {
    if ((uVar2 >> 0x3d & 1) == 0) {
      if (((ulong)pppppppuVar10 >> 0x3c & 1) == 0) {
        pppppppuVar9 = pppppppuVar10;
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pppppppuVar10,uVar2);
      }
      else {
        pppppppuVar9 = (undefined8 *******)((uVar2 & 0xfffffffffffffff) + 0x20);
      }
    }
    else {
      pppppppuStack_70 = pppppppuVar10;
      uStack_68 = uVar2 & 0xffffffffffffff;
      pppppppuVar9 = &pppppppuStack_70;
    }
    uVar12 = (uint)*(byte *)((long)pppppppuVar9 + (uVar8 >> 0x10));
  }
  else {
    __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar8,pppppppuVar10,uVar2);
    uVar12 = (uint)uVar8;
  }
  if ((uVar7 & 0xc) == uVar13) {
    FUN_0002269c();
  }
  if ((uVar2 >> 0x3c & 1) == 0) {
    uVar7 = (uVar7 & 0xffffffffffff0000) + 0x10004;
  }
  else {
    if (uVar1 <= uVar7 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1389a0);
      (*pcVar6)();
    }
    __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
  }
  param_1[2] = uVar7;
  uVar4 = uVar12 - 0x30;
  if (9 < (uVar4 & 0xff)) {
    if ((uVar12 - 0x41 & 0xff) < 6) {
      uVar4 = uVar12 - 0x37;
    }
    else {
      if (5 < (uVar12 - 0x61 & 0xff)) {
        return 0x100000000;
      }
      uVar4 = uVar12 - 0x57;
    }
  }
  if (lVar14 - (uVar7 >> 0xe) == 0) {
    return 0x100000000;
  }
  uVar8 = uVar7;
  if ((uVar7 & 0xc) == uVar13) {
    FUN_0002269c();
  }
  if (uVar1 <= uVar8 >> 0x10) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1389c0);
    (*pcVar6)();
  }
  if ((uVar2 >> 0x3c & 1) == 0) {
    if ((uVar2 >> 0x3d & 1) == 0) {
      if (((ulong)pppppppuVar10 >> 0x3c & 1) == 0) {
        pppppppuVar9 = pppppppuVar10;
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pppppppuVar10,uVar2);
      }
      else {
        pppppppuVar9 = (undefined8 *******)((uVar2 & 0xfffffffffffffff) + 0x20);
      }
    }
    else {
      pppppppuStack_70 = pppppppuVar10;
      uStack_68 = uVar2 & 0xffffffffffffff;
      pppppppuVar9 = &pppppppuStack_70;
    }
    uVar12 = (uint)*(byte *)((long)pppppppuVar9 + (uVar8 >> 0x10));
  }
  else {
    __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar8,pppppppuVar10,uVar2);
    uVar12 = (uint)uVar8;
  }
  if ((uVar7 & 0xc) == uVar13) {
    FUN_0002269c();
  }
  if ((uVar2 >> 0x3c & 1) == 0) {
    uVar7 = (uVar7 & 0xffffffffffff0000) + 0x10004;
  }
  else {
    if (uVar1 <= uVar7 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1389e0);
      (*pcVar6)();
    }
    __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
  }
  param_1[2] = uVar7;
  uVar5 = uVar12 - 0x30;
  if (9 < (uVar5 & 0xff)) {
    if ((uVar12 - 0x41 & 0xff) < 6) {
      uVar5 = uVar12 - 0x37;
    }
    else {
      if (5 < (uVar12 - 0x61 & 0xff)) {
        return 0x100000000;
      }
      uVar5 = uVar12 - 0x57;
    }
  }
  if (lVar14 - (uVar7 >> 0xe) == 0) {
    return 0x100000000;
  }
  uVar8 = uVar7;
  if ((uVar7 & 0xc) == uVar13) {
    FUN_0002269c();
  }
  if (uVar1 <= uVar8 >> 0x10) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x138a00);
    (*pcVar6)();
  }
  if ((uVar2 >> 0x3c & 1) == 0) {
    if ((uVar2 >> 0x3d & 1) == 0) {
      if (((ulong)pppppppuVar10 >> 0x3c & 1) == 0) {
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pppppppuVar10,uVar2);
      }
      else {
        pppppppuVar10 = (undefined8 *******)((uVar2 & 0xfffffffffffffff) + 0x20);
      }
    }
    else {
      pppppppuStack_70 = pppppppuVar10;
      uStack_68 = uVar2 & 0xffffffffffffff;
      pppppppuVar10 = &pppppppuStack_70;
    }
    uVar12 = (uint)*(byte *)((long)pppppppuVar10 + (uVar8 >> 0x10));
  }
  else {
    __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar8,pppppppuVar10,uVar2);
    uVar12 = (uint)uVar8;
  }
  if ((uVar7 & 0xc) == uVar13) {
    FUN_0002269c();
  }
  if ((uVar2 >> 0x3c & 1) == 0) {
    uVar7 = (uVar7 & 0xffffffffffff0000) + 0x10004;
  }
  else {
    if (uVar1 <= uVar7 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x138a20);
      (*pcVar6)();
    }
    __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
  }
  param_1[2] = uVar7;
  bVar11 = (byte)(uVar12 - 0x30);
  if (9 < (uVar12 - 0x30 & 0xff)) {
    if ((uVar12 - 0x41 & 0xff) < 6) {
      bVar11 = (char)uVar12 - 0x37;
    }
    else {
      if (5 < (uVar12 - 0x61 & 0xff)) {
        return 0x100000000;
      }
      bVar11 = (char)uVar12 + 0xa9;
    }
  }
  return ((ulong)uVar4 & 0xff) * 0x100 + ((ulong)uVar3 & 0xff) * 0x1000 +
         ((ulong)uVar5 & 0xff) * 0x10 + (ulong)bVar11;
}



/* Entry: 00138a3c; end: 00138b77;  */

void FUN_00138a3c(void)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  long unaff_x20;
  
  pbVar4 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  do {
    if (pbVar4 == pbVar1) {
      return;
    }
    bVar2 = *pbVar4;
    if (0x23 < bVar2) {
      return;
    }
    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar2 != 0x23) {
        return;
      }
      pbVar3 = pbVar4 + 1;
      do {
        pbVar4 = pbVar1;
        if (pbVar3 == pbVar1) break;
        pbVar4 = pbVar3 + 1;
        bVar2 = *pbVar3;
        pbVar3 = pbVar4;
      } while (bVar2 != 10 && bVar2 != 0xd);
    }
    else {
      pbVar4 = pbVar4 + 1;
    }
    *(byte **)(unaff_x20 + 0x28) = pbVar4;
  } while( true );
}



/* Entry: 00138b78; end: 00139003;  */

void FUN_00138b78(undefined1 *param_1,undefined1 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar12;
  long lVar13;
  uint uVar14;
  long unaff_x20;
  uint uVar15;
  byte *pbVar11;
  
  pbVar1 = *(byte **)(unaff_x20 + 0x28);
  pbVar2 = *(byte **)(unaff_x20 + 0x30);
  if (pbVar1 == pbVar2) {
    bVar5 = false;
LAB_00138f8c:
    *param_2 = bVar5;
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,param_1,0,0);
    *param_1 = 0;
    _swift_willThrow();
    return;
  }
  bVar5 = false;
  uVar9 = (uint)param_1;
  param_1 = (undefined1 *)0x0;
  pbVar11 = pbVar1;
LAB_00138bd4:
  pbVar10 = pbVar11 + 1;
  bVar3 = *pbVar11;
  *(byte **)(unaff_x20 + 0x28) = pbVar10;
  if ((uint)bVar3 == (uVar9 & 0xff)) {
    *param_2 = bVar5;
    *(byte **)(unaff_x20 + 0x28) = pbVar1;
    return;
  }
  if (bVar3 != 0x5c) {
    if (bVar3 == 10 || bVar3 == 0xd) goto LAB_00138f8c;
    bVar6 = SCARRY8((long)param_1,1);
    param_1 = param_1 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x138fec);
      (*pcVar4)();
    }
    goto LAB_00138bc8;
  }
  if (pbVar10 != pbVar2) {
    bVar3 = pbVar11[1];
    pbVar10 = pbVar11 + 2;
    *(byte **)(unaff_x20 + 0x28) = pbVar10;
    if ((bVar3 & 0xf8) != 0x30) {
      bVar5 = true;
      lVar13 = 4;
      switch(bVar3) {
      case 0x22:
      case 0x27:
      case 0x3f:
      case 0x5c:
      case 0x61:
      case 0x62:
      case 0x66:
      case 0x6e:
      case 0x72:
      case 0x74:
      case 0x76:
        bVar6 = SCARRY8((long)param_1,1);
        param_1 = param_1 + 1;
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x138ff4);
          (*pcVar4)();
        }
        goto LAB_00138bc8;
      default:
        goto LAB_00138f8c;
      case 0x55:
        goto code_r0x00138d30;
      case 0x75:
        goto code_r0x00138d38;
      case 0x78:
        if (pbVar10 != pbVar2) {
          if (9 < (*pbVar10 - 0x30 & 0xff)) {
            bVar5 = true;
            uVar14 = *pbVar10 - 0x41;
            if ((0x25 < uVar14) || ((1L << ((ulong)uVar14 & 0x3f) & 0x3f0000003fU) == 0))
            goto LAB_00138f8c;
          }
          pbVar10 = pbVar11 + 3;
          *(byte **)(unaff_x20 + 0x28) = pbVar10;
          if ((pbVar10 != pbVar2) &&
             (((*pbVar10 - 0x30 & 0xff) < 10 ||
              ((uVar14 = *pbVar10 - 0x41, uVar14 < 0x26 &&
               ((1L << ((ulong)uVar14 & 0x3f) & 0x3f0000003fU) != 0)))))) {
            pbVar10 = pbVar11 + 4;
            *(byte **)(unaff_x20 + 0x28) = pbVar10;
          }
          bVar5 = SCARRY8((long)param_1,1);
          param_1 = param_1 + 1;
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x138ff8);
            (*pcVar4)();
          }
          goto LAB_00138bc4;
        }
        goto LAB_00138f8c;
      }
    }
    if ((pbVar10 != pbVar2) && ((*pbVar10 & 0xf8) == 0x30)) {
      pbVar10 = pbVar11 + 3;
      *(byte **)(unaff_x20 + 0x28) = pbVar10;
      if ((pbVar10 != pbVar2) && ((*pbVar10 & 0xf8) == 0x30)) {
        if (0x33 < bVar3) goto LAB_00138fe0;
        pbVar10 = pbVar11 + 4;
        *(byte **)(unaff_x20 + 0x28) = pbVar10;
      }
    }
    bVar5 = SCARRY8((long)param_1,1);
    param_1 = param_1 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x138ff0);
      (*pcVar4)();
    }
  }
LAB_00138bc4:
  bVar5 = true;
LAB_00138bc8:
  pbVar11 = pbVar10;
  if (pbVar10 == pbVar2) goto LAB_00138f8c;
  goto LAB_00138bd4;
code_r0x00138d30:
  bVar5 = false;
  lVar13 = 8;
code_r0x00138d38:
  if ((long)pbVar2 - (long)pbVar10 < lVar13) goto LAB_00138fe0;
  bVar3 = *pbVar10;
  uVar14 = bVar3 - 0x30;
  if (9 < uVar14) {
    uVar14 = (uint)bVar3;
    if (bVar3 - 0x41 < 6) {
      uVar14 = uVar14 - 0x37;
    }
    else {
      if (5 < uVar14 - 0x61) goto LAB_00138fe0;
      uVar14 = uVar14 - 0x57;
    }
  }
  bVar3 = pbVar11[3];
  uVar15 = bVar3 - 0x30;
  if (9 < uVar15) {
    uVar15 = (uint)bVar3;
    if (bVar3 - 0x41 < 6) {
      uVar15 = uVar15 - 0x37;
    }
    else {
      if (5 < uVar15 - 0x61) goto LAB_00138fe0;
      uVar15 = uVar15 - 0x57;
    }
  }
  bVar3 = pbVar11[4];
  uVar7 = bVar3 - 0x30;
  if (9 < uVar7) {
    uVar7 = (uint)bVar3;
    if (bVar3 - 0x41 < 6) {
      uVar7 = uVar7 - 0x37;
    }
    else {
      if (5 < uVar7 - 0x61) goto LAB_00138fe0;
      uVar7 = uVar7 - 0x57;
    }
  }
  bVar3 = pbVar11[5];
  uVar8 = bVar3 - 0x30;
  if (9 < uVar8) {
    uVar8 = (uint)bVar3;
    if (bVar3 - 0x41 < 6) {
      uVar8 = uVar8 - 0x37;
    }
    else {
      if (5 < uVar8 - 0x61) goto LAB_00138fe0;
      uVar8 = uVar8 - 0x57;
    }
  }
  uVar14 = ((uVar14 & 0xff) * 0x100 + (uVar15 & 0xff) * 0x10 + (uVar7 & 0xff)) * 0x10 +
           (uVar8 & 0xff);
  if (!bVar5) {
    bVar3 = pbVar11[6];
    uVar15 = bVar3 - 0x30;
    if (9 < uVar15) {
      uVar15 = (uint)bVar3;
      if (bVar3 - 0x41 < 6) {
        uVar15 = uVar15 - 0x37;
      }
      else {
        if (5 < uVar15 - 0x61) goto LAB_00138fe0;
        uVar15 = uVar15 - 0x57;
      }
    }
    bVar3 = pbVar11[7];
    uVar7 = bVar3 - 0x30;
    if (9 < uVar7) {
      uVar7 = (uint)bVar3;
      if (bVar3 - 0x41 < 6) {
        uVar7 = uVar7 - 0x37;
      }
      else {
        if (5 < uVar7 - 0x61) goto LAB_00138fe0;
        uVar7 = uVar7 - 0x57;
      }
    }
    bVar3 = pbVar11[8];
    uVar8 = bVar3 - 0x30;
    if (9 < uVar8) {
      uVar8 = (uint)bVar3;
      if (bVar3 - 0x41 < 6) {
        uVar8 = uVar8 - 0x37;
      }
      else {
        if (5 < uVar8 - 0x61) goto LAB_00138fe0;
        uVar8 = uVar8 - 0x57;
      }
    }
    bVar3 = pbVar11[9];
    uVar12 = bVar3 - 0x30;
    if (9 < uVar12) {
      uVar12 = (uint)bVar3;
      if (bVar3 - 0x41 < 6) {
        uVar12 = uVar12 - 0x37;
      }
      else {
        if (5 < uVar12 - 0x61) goto LAB_00138fe0;
        uVar12 = uVar12 - 0x57;
      }
    }
    uVar14 = (uVar14 * 0x100 + (uVar15 & 0xff) * 0x10 + (uVar7 & 0xff)) * 0x100 +
             (uVar8 & 0xff) * 0x10 + (uVar12 & 0xff);
  }
  pbVar10 = pbVar10 + lVar13;
  *(byte **)(unaff_x20 + 0x28) = pbVar10;
  if (uVar14 < 0x80) {
    bVar5 = SCARRY8((long)param_1,1);
    param_1 = param_1 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x138ffc);
      (*pcVar4)();
    }
  }
  else if (uVar14 < 0x800) {
    bVar5 = SCARRY8((long)param_1,2);
    param_1 = param_1 + 2;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x139000);
      (*pcVar4)();
    }
  }
  else {
    if (uVar14 >> 0xb == 0x1b) {
LAB_00138fe0:
      bVar5 = true;
      goto LAB_00138f8c;
    }
    if (uVar14 >> 0x10 == 0) {
      bVar5 = SCARRY8((long)param_1,3);
      param_1 = param_1 + 3;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x139004);
        (*pcVar4)();
      }
    }
    else {
      if (0x10 < uVar14 >> 0x10) goto LAB_00138fe0;
      bVar5 = SCARRY8((long)param_1,4);
      param_1 = param_1 + 4;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x138f88);
        (*pcVar4)();
      }
    }
  }
  goto LAB_00138bc4;
}



/* Entry: 00139004; end: 0013915f;  */

void FUN_00139004(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x14,0x139004);
  (*pcVar1)();
}



/* Entry: 00139160; end: 00139603;  */

void FUN_00139160(byte *param_1,byte *param_2,long param_3,byte param_4)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  
  if ((param_1 != (byte *)0x0) && (param_2 != param_1)) {
    pbVar11 = *(byte **)(param_3 + 0x28);
    bVar4 = *pbVar11;
    while (bVar4 != param_4) {
      *(byte **)(param_3 + 0x28) = pbVar11 + 1;
      if (bVar4 != 0x5c) {
LAB_00139448:
        *param_1 = bVar4;
        goto LAB_0013944c;
      }
      bVar4 = pbVar11[1];
      uVar5 = (uint)bVar4;
      pbVar1 = pbVar11 + 2;
      *(byte **)(param_3 + 0x28) = pbVar1;
      if ((bVar4 & 0xf8) == 0x30) {
        bVar9 = *pbVar1;
        if ((bVar9 & 0xf8) == 0x30) {
          *(byte **)(param_3 + 0x28) = pbVar11 + 3;
          bVar9 = bVar9 - 0x30;
          bVar2 = pbVar11[3];
          if ((bVar2 & 0xf8) == 0x30) {
            *(byte **)(param_3 + 0x28) = pbVar11 + 4;
            bVar9 = (bVar2 + (bVar9 * '\b' | bVar4 << 6)) - 0x30;
          }
          else {
            bVar9 = bVar9 | (bVar4 - 0x30) * '\b';
          }
          *param_1 = bVar9;
        }
        else {
          *param_1 = bVar4 - 0x30;
        }
        goto LAB_0013944c;
      }
      bVar6 = true;
      lVar12 = 4;
      switch(bVar4) {
      case 0x55:
        bVar6 = false;
        lVar12 = 8;
      case 0x75:
        bVar4 = *pbVar1;
        uVar5 = bVar4 - 0x30;
        if (9 < uVar5) {
          uVar5 = (uint)bVar4;
          if (bVar4 - 0x41 < 6) {
            uVar5 = uVar5 - 0x37;
          }
          else {
            if ((uVar5 - 0x67 & 0xff) < 0xfa) goto code_r0x001395f8;
            uVar5 = uVar5 - 0x57;
          }
        }
        bVar4 = pbVar11[3];
        uVar7 = bVar4 - 0x30;
        if (9 < uVar7) {
          uVar7 = (uint)bVar4;
          if (bVar4 - 0x41 < 6) {
            uVar7 = uVar7 - 0x37;
          }
          else {
            if ((uVar7 - 0x67 & 0xff) < 0xfa) goto code_r0x001395f8;
            uVar7 = uVar7 - 0x57;
          }
        }
        bVar4 = pbVar11[4];
        uVar8 = bVar4 - 0x30;
        if (9 < uVar8) {
          uVar8 = (uint)bVar4;
          if (bVar4 - 0x41 < 6) {
            uVar8 = uVar8 - 0x37;
          }
          else {
            if ((uVar8 - 0x67 & 0xff) < 0xfa) goto code_r0x001395f8;
            uVar8 = uVar8 - 0x57;
          }
        }
        bVar4 = pbVar11[5];
        uVar13 = bVar4 - 0x30;
        if (9 < uVar13) {
          uVar13 = (uint)bVar4;
          if (bVar4 - 0x41 < 6) {
            uVar13 = uVar13 - 0x37;
          }
          else {
            if ((uVar13 - 0x67 & 0xff) < 0xfa) goto code_r0x001395f8;
            uVar13 = uVar13 - 0x57;
          }
        }
        uVar5 = ((uVar5 & 0xff) * 0x100 + (uVar7 & 0xff) * 0x10 + (uVar8 & 0xff)) * 0x10 +
                (uVar13 & 0xff);
        if (!bVar6) {
          bVar4 = pbVar11[6];
          uVar7 = bVar4 - 0x30;
          if (9 < uVar7) {
            uVar7 = (uint)bVar4;
            if (bVar4 - 0x41 < 6) {
              uVar7 = uVar7 - 0x37;
            }
            else {
              if ((uVar7 - 0x67 & 0xff) < 0xfa) goto code_r0x001395f8;
              uVar7 = uVar7 - 0x57;
            }
          }
          bVar4 = pbVar11[7];
          uVar8 = bVar4 - 0x30;
          if (9 < uVar8) {
            uVar8 = (uint)bVar4;
            if (bVar4 - 0x41 < 6) {
              uVar8 = uVar8 - 0x37;
            }
            else {
              if ((uVar8 - 0x67 & 0xff) < 0xfa) goto code_r0x001395f8;
              uVar8 = uVar8 - 0x57;
            }
          }
          bVar4 = pbVar11[8];
          uVar13 = bVar4 - 0x30;
          if (9 < uVar13) {
            uVar13 = (uint)bVar4;
            if (bVar4 - 0x41 < 6) {
              uVar13 = uVar13 - 0x37;
            }
            else {
              if ((uVar13 - 0x67 & 0xff) < 0xfa) goto code_r0x001395f8;
              uVar13 = uVar13 - 0x57;
            }
          }
          bVar4 = pbVar11[9];
          uVar10 = bVar4 - 0x30;
          if (9 < uVar10) {
            uVar10 = (uint)bVar4;
            if (bVar4 - 0x41 < 6) {
              uVar10 = uVar10 - 0x37;
            }
            else {
              if ((uVar10 - 0x67 & 0xff) < 0xfa) {
code_r0x001395f8:
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1395fc);
                (*pcVar3)();
              }
              uVar10 = uVar10 - 0x57;
            }
          }
          uVar5 = (uVar5 * 0x100 + (uVar7 & 0xff) * 0x10 + (uVar8 & 0xff)) * 0x100 +
                  (uVar13 & 0xff) * 0x10 + (uVar10 & 0xff);
        }
        *(byte **)(param_3 + 0x28) = pbVar1 + lVar12;
        if (uVar5 < 0x80) {
LAB_00139554:
          *param_1 = (byte)uVar5;
          break;
        }
        bVar4 = (byte)uVar5;
        if (uVar5 < 0x800) {
          *param_1 = (byte)(uVar5 >> 6) | 0xc0;
          param_1[1] = bVar4 & 0x3f | 0x80;
          lVar12 = 2;
        }
        else if (uVar5 >> 0x10 == 0) {
          *param_1 = (byte)(uVar5 >> 0xc) | 0xe0;
          param_1[1] = (byte)(uVar5 >> 6) & 0x3f | 0x80;
          param_1[2] = bVar4 & 0x3f | 0x80;
          lVar12 = 3;
        }
        else {
          if (0x10 < uVar5 >> 0x10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x139604);
            (*pcVar3)();
          }
          *param_1 = (byte)(uVar5 >> 0x12) | 0xf0;
          param_1[1] = (byte)(uVar5 >> 0xc) & 0x3f | 0x80;
          param_1[2] = (byte)(uVar5 >> 6) & 0x3f | 0x80;
          param_1[3] = bVar4 & 0x3f | 0x80;
          lVar12 = 4;
        }
        goto code_r0x00139450;
      default:
        goto LAB_00139554;
      case 0x61:
        *param_1 = 7;
        break;
      case 0x62:
        *param_1 = 8;
        break;
      case 0x66:
        *param_1 = 0xc;
        break;
      case 0x6e:
        *param_1 = 10;
        break;
      case 0x72:
        *param_1 = 0xd;
        break;
      case 0x74:
        *param_1 = 9;
        break;
      case 0x76:
        *param_1 = 0xb;
        break;
      case 0x78:
        bVar4 = *pbVar1;
        uVar5 = bVar4 - 0x30;
        if (9 < uVar5) {
          uVar5 = (uint)bVar4;
          if (bVar4 - 0x41 < 6) {
            uVar5 = uVar5 - 0x37;
          }
          else {
            if ((uVar5 - 0x67 & 0xff) < 0xfa) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x139600);
              (*pcVar3)();
            }
            uVar5 = uVar5 - 0x57;
          }
        }
        bVar4 = (byte)uVar5;
        *(byte **)(param_3 + 0x28) = pbVar11 + 3;
        bVar9 = pbVar11[3];
        uVar5 = bVar9 - 0x30;
        if (9 < uVar5) {
          uVar5 = (uint)bVar9;
          if (bVar9 - 0x41 < 6) {
            uVar5 = uVar5 - 0x37;
          }
          else {
            if (5 < uVar5 - 0x61) goto LAB_00139448;
            uVar5 = uVar5 - 0x57;
          }
        }
        bVar4 = (char)uVar5 + bVar4 * '\x10';
        *(byte **)(param_3 + 0x28) = pbVar11 + 4;
        goto LAB_00139448;
      }
LAB_0013944c:
      lVar12 = 1;
code_r0x00139450:
      param_1 = param_1 + lVar12;
      pbVar11 = *(byte **)(param_3 + 0x28);
      bVar4 = *pbVar11;
    }
    *(byte **)(param_3 + 0x28) = pbVar11 + 1;
  }
  return;
}



/* Entry: 00139604; end: 00139693;  */

void FUN_00139604(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x14,0x139604);
  (*pcVar1)();
}



/* Entry: 00139694; end: 00139917;  */

undefined1  [16] FUN_00139694(char param_1)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  byte bVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auVar8 [16];
  
  bVar5 = 0;
  pcVar2 = *(char **)(unaff_x20 + 0x28);
  pcVar6 = pcVar2;
  while( true ) {
    lVar3 = (long)pcVar6 - (long)pcVar2;
    do {
      pcVar7 = pcVar6;
      if (pcVar7 == *(char **)(unaff_x20 + 0x30)) goto LAB_0013970c;
      cVar1 = *pcVar7;
      if (cVar1 == param_1) {
        FUN_00122abc();
        *(char **)(unaff_x20 + 0x28) = pcVar7 + 1;
        FUN_00138a3c();
        lVar4 = lVar3;
        if (lVar3 != 0 && !(bool)(bVar5 ^ 1)) {
          FUN_00137218(pcVar2);
          _swift_bridgeObjectRelease(lVar3);
        }
        goto LAB_00139714;
      }
      pcVar6 = pcVar7 + 1;
      *(char **)(unaff_x20 + 0x28) = pcVar6;
      if (cVar1 == '\n' || cVar1 == '\r') goto LAB_0013970c;
      lVar3 = lVar3 + 1;
    } while (cVar1 != '\\');
    if (pcVar6 == *(char **)(unaff_x20 + 0x30)) break;
    pcVar6 = pcVar7 + 2;
    *(char **)(unaff_x20 + 0x28) = pcVar6;
    bVar5 = 1;
  }
LAB_0013970c:
  pcVar2 = (char *)0x0;
  lVar4 = 0;
LAB_00139714:
  auVar8._8_8_ = lVar4;
  auVar8._0_8_ = pcVar2;
  return auVar8;
}



/* Entry: 00139918; end: 001399a7;  */

undefined8 FUN_00139918(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  long unaff_x20;
  
  lVar3 = *(long *)(param_1 + 0x10);
  pbVar1 = *(byte **)(unaff_x20 + 0x28);
  pbVar5 = pbVar1;
  if (lVar3 != 0) {
    pbVar4 = pbVar1;
    pbVar6 = (byte *)(param_1 + 0x20);
    do {
      if (pbVar4 == *(byte **)(unaff_x20 + 0x30)) goto LAB_00139988;
      pbVar5 = pbVar4 + 1;
      bVar2 = *pbVar4;
      uVar7 = bVar2 | 0x20;
      if (0x19 < bVar2 - 0x41) {
        uVar7 = (uint)bVar2;
      }
      if (uVar7 != *pbVar6) goto LAB_00139988;
      *(byte **)(unaff_x20 + 0x28) = pbVar5;
      lVar3 = lVar3 + -1;
      pbVar4 = pbVar5;
      pbVar6 = pbVar6 + 1;
    } while (lVar3 != 0);
  }
  if (pbVar5 != *(byte **)(unaff_x20 + 0x30)) {
    if ((*pbVar5 & 0xffffffdf) - 0x41 < 0x1a) {
LAB_00139988:
      *(byte **)(unaff_x20 + 0x28) = pbVar1;
      return 0;
    }
    FUN_00138a3c();
  }
  return 1;
}



/* Entry: 001399a8; end: 00139a5f;  */

undefined8 FUN_001399a8(void)

{
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if (pcVar1 != *(char **)(unaff_x20 + 0x30)) {
    cVar2 = *pcVar1;
    if (cVar2 == '-') {
      *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    }
    uVar3 = 0xae65a8;
    func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    uVar4 = uVar3;
    _swift_initStaticObject();
    _swift_initStaticObject(uVar3,0xaf05a0);
    FUN_00139918();
    if (((uVar4 & 1) != 0) || (FUN_00139918(), (uVar3 & 1) != 0)) {
      if (cVar2 == '-') {
        return 0xff800000;
      }
      return 0x7f800000;
    }
    *(char **)(unaff_x20 + 0x28) = pcVar1;
  }
  return 0x100000000;
}



/* Entry: 00139a60; end: 00139b6b;  */

undefined1  [16] FUN_00139a60(void)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  long unaff_x20;
  byte *unaff_x22;
  long unaff_x23;
  byte *pbVar6;
  undefined1 auVar7 [16];
  
  lVar4 = *(long *)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  pbVar3 = (byte *)(lVar4 + 1);
  *(byte **)(unaff_x20 + 0x28) = pbVar3;
  if ((pbVar3 != pbVar1) && ((*pbVar3 & 0xffffffdf) - 0x41 < 0x1a)) {
    for (pbVar6 = (byte *)(lVar4 + 2); *(byte **)(unaff_x20 + 0x28) = pbVar6, pbVar6 != pbVar1;
        pbVar6 = pbVar6 + 1) {
      bVar2 = *pbVar6;
      if (((9 < bVar2 - 0x30 && 0x19 < (bVar2 & 0xffffffdf) - 0x41) &&
          (uVar5 = (uint)bVar2, 1 < uVar5 - 0x2e)) && (uVar5 != 0x5f)) {
        if (uVar5 != 0x5d) goto LAB_00139b24;
        break;
      }
    }
    if ((pbVar6 != pbVar1) && (*pbVar6 == 0x5d)) {
      lVar4 = (long)pbVar6 - (long)pbVar3;
      FUN_00122abc();
      if (lVar4 != 0) {
        *(byte **)(unaff_x20 + 0x28) = pbVar6 + 1;
        FUN_00138a3c();
        unaff_x22 = pbVar3;
        unaff_x23 = lVar4;
        goto LAB_00139b50;
      }
    }
  }
LAB_00139b24:
  FUN_000c723c();
  _swift_allocError(&UNK_009aeed8,pbVar3,0,0);
  *pbVar3 = 0;
  _swift_willThrow();
LAB_00139b50:
  auVar7._8_8_ = unaff_x23;
  auVar7._0_8_ = unaff_x22;
  return auVar7;
}



/* Entry: 00139b6c; end: 00139e4f;  */

void FUN_00139b6c(undefined1 *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined1 uVar5;
  long unaff_x20;
  long unaff_x21;
  byte *pbVar6;
  
  pbVar3 = *(byte **)(unaff_x20 + 0x28);
  bVar1 = *pbVar3;
  if ((bVar1 == 0x27) || (bVar1 == 0x22)) {
    FUN_00136a64();
    if (unaff_x21 != 0) {
      return;
    }
    FUN_00023358();
    return;
  }
  pbVar6 = *(byte **)(unaff_x20 + 0x30);
  if (bVar1 == 0x5b && pbVar3 != pbVar6) {
    *(byte **)(unaff_x20 + 0x28) = pbVar3 + 1;
    puVar2 = param_1;
    FUN_00138a3c();
    if ((((ulong)param_1 & 1) != 0) && (pbVar3 = *(byte **)(unaff_x20 + 0x28), pbVar3 != pbVar6)) {
      bVar1 = *pbVar3;
      if (bVar1 == 0x5d) {
        *(byte **)(unaff_x20 + 0x28) = pbVar3 + 1;
        goto LAB_00139c24;
      }
joined_r0x00139c40:
      if ((bVar1 == 0x3c) || (bVar1 == 0x7b)) {
        FUN_00139e50();
      }
      else {
        puVar2 = (undefined1 *)0x0;
        FUN_00139b6c();
      }
      if (unaff_x21 != 0) {
        return;
      }
      pbVar3 = *(byte **)(unaff_x20 + 0x28);
      pbVar6 = *(byte **)(unaff_x20 + 0x30);
      if (pbVar3 != pbVar6) {
        bVar1 = *pbVar3;
        if (bVar1 == 0x5d) {
          *(byte **)(unaff_x20 + 0x28) = pbVar3 + 1;
          goto LAB_00139c24;
        }
        if (bVar1 < 0x24) {
          do {
            if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
              if ((ulong)bVar1 != 0x23) break;
              pbVar4 = pbVar3 + 1;
              while (pbVar3 = pbVar6, pbVar4 != pbVar6) {
                pbVar3 = pbVar4 + 1;
                bVar1 = *pbVar4;
                if ((bVar1 == 10) || (pbVar4 = pbVar3, bVar1 == 0xd)) break;
              }
            }
            else {
              pbVar3 = pbVar3 + 1;
            }
            *(byte **)(unaff_x20 + 0x28) = pbVar3;
            if ((pbVar3 == pbVar6) || (bVar1 = *pbVar3, 0x23 < bVar1)) break;
          } while( true );
        }
      }
      if ((pbVar3 != pbVar6) && (*pbVar3 == 0x2c)) {
        do {
          pbVar3 = pbVar3 + 1;
LAB_00139d00:
          *(byte **)(unaff_x20 + 0x28) = pbVar3;
          if ((pbVar3 == pbVar6) || (bVar1 = *pbVar3, 0x23 < bVar1)) {
LAB_00139d60:
            if (pbVar3 == pbVar6) goto LAB_00139d78;
            bVar1 = *pbVar3;
            goto joined_r0x00139c40;
          }
        } while ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0);
        if ((ulong)bVar1 != 0x23) goto LAB_00139d60;
        pbVar4 = pbVar3 + 1;
        while (pbVar3 = pbVar6, pbVar4 != pbVar6) {
          pbVar3 = pbVar4 + 1;
          bVar1 = *pbVar4;
          if ((bVar1 == 10) || (pbVar4 = pbVar3, bVar1 == 0xd)) break;
        }
        goto LAB_00139d00;
      }
    }
LAB_00139d78:
    uVar5 = 0;
  }
  else {
    FUN_00136d1c();
    if (unaff_x21 != 0) {
      return;
    }
    if ((param_3 & 0xff) != 1) {
LAB_00139c24:
      FUN_00138a3c();
      return;
    }
    FUN_0013a124();
    if (((ulong)param_1 & 1) != 0) {
      if (bVar1 == 0x2d) {
        FUN_001363c8();
        return;
      }
      FUN_00136484();
      return;
    }
    func_0x0013977c();
    if ((param_2 & 0xff) != 1) {
      return;
    }
    pbVar3 = *(byte **)(unaff_x20 + 0x28);
    if ((pbVar3 != pbVar6) && (*pbVar3 == 0x2d)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar3 + 1;
    }
    puVar2 = (undefined1 *)0xae65a8;
    func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    _swift_initStaticObject();
    FUN_00139918();
    if (((ulong)puVar2 & 1) != 0) {
      return;
    }
    *(byte **)(unaff_x20 + 0x28) = pbVar3;
    FUN_001399a8();
    if (((ulong)puVar2 & 0xff00000000) != 0x100000000) {
      return;
    }
    uVar5 = 1;
  }
  FUN_000c723c();
  _swift_allocError(&UNK_009aeed8,puVar2,0,0);
  *puVar2 = uVar5;
  _swift_willThrow();
  return;
}



/* Entry: 00139e50; end: 0013a123;  */

/* WARNING: Removing unreachable block (ram,0x0013a05c) */

void FUN_00139e50(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  long unaff_x20;
  long unaff_x21;
  byte *pbVar8;
  
  FUN_00135bd4();
  if (unaff_x21 == 0) {
    pbVar6 = *(byte **)(unaff_x20 + 0x28);
    pbVar8 = *(byte **)(unaff_x20 + 0x30);
    puVar4 = param_1;
    if (pbVar6 != pbVar8) {
LAB_00139e98:
      if ((uint)*pbVar6 == ((uint)param_1 & 0xff)) {
        *(byte **)(unaff_x20 + 0x28) = pbVar6 + 1;
        FUN_00138a3c();
        lVar1 = *(long *)(unaff_x20 + 0x50) + 1;
        if (SCARRY8(*(long *)(unaff_x20 + 0x50),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x13a124);
          (*pcVar3)();
        }
        *(long *)(unaff_x20 + 0x50) = lVar1;
        if (lVar1 <= *(long *)(unaff_x20 + 0x40)) {
          return;
        }
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd00000000000003f,0x80000000008b9020,
                   "SwiftProtobuf/TextFormatScanner.swift",0x25,2,0x119,0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x13a120);
        (*pcVar3)();
      }
      puVar4 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      FUN_00136f34();
      if (param_2 != (undefined1 *)0x0) {
        puVar5 = param_2;
        _swift_bridgeObjectRelease();
        pbVar6 = *(byte **)(unaff_x20 + 0x28);
        do {
          if ((pbVar6 == pbVar8) || (bVar2 = *pbVar6, 0x23 < bVar2)) goto LAB_00139f34;
          if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
            if ((ulong)bVar2 != 0x23) goto LAB_00139f34;
            pbVar7 = pbVar6 + 1;
            do {
              if (pbVar7 == pbVar8) {
                *(byte **)(unaff_x20 + 0x28) = pbVar8;
                pbVar6 = pbVar8;
                goto LAB_00139f34;
              }
              pbVar6 = pbVar7 + 1;
              bVar2 = *pbVar7;
              pbVar7 = pbVar6;
            } while (bVar2 != 10 && bVar2 != 0xd);
          }
          else {
            pbVar6 = pbVar6 + 1;
          }
          *(byte **)(unaff_x20 + 0x28) = pbVar6;
        } while( true );
      }
    }
LAB_0013a060:
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,puVar4,0,0);
    *puVar4 = 0;
    _swift_willThrow();
  }
  return;
LAB_00139f34:
  if ((pbVar6 != pbVar8) && (*pbVar6 == 0x3a)) {
    do {
      pbVar6 = pbVar6 + 1;
LAB_00139f4c:
      *(byte **)(unaff_x20 + 0x28) = pbVar6;
      if ((pbVar6 == pbVar8) || (bVar2 = *pbVar6, 0x23 < bVar2)) {
LAB_00139fa8:
        puVar4 = param_2;
        if (pbVar6 == pbVar8) goto LAB_0013a060;
        if ((*pbVar6 == 0x3c) || (*pbVar6 == 0x7b)) goto LAB_00139fc4;
        param_2 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
        FUN_00139b6c();
        goto LAB_00139fcc;
      }
    } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar2 != 0x23) goto LAB_00139fa8;
    pbVar7 = pbVar6 + 1;
    do {
      pbVar6 = pbVar8;
      if (pbVar7 == pbVar8) break;
      pbVar6 = pbVar7 + 1;
      bVar2 = *pbVar7;
      pbVar7 = pbVar6;
    } while (bVar2 != 10 && bVar2 != 0xd);
    goto LAB_00139f4c;
  }
LAB_00139fc4:
  FUN_00139e50();
LAB_00139fcc:
  pbVar6 = *(byte **)(unaff_x20 + 0x28);
  pbVar8 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar6 != pbVar8) && ((*pbVar6 == 0x3b || (*pbVar6 == 0x2c)))) {
    do {
      pbVar6 = pbVar6 + 1;
LAB_00139ff0:
      *(byte **)(unaff_x20 + 0x28) = pbVar6;
      if ((pbVar6 == pbVar8) || (bVar2 = *pbVar6, 0x23 < bVar2)) goto LAB_00139e90;
    } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar2 != 0x23) goto LAB_00139e90;
    pbVar7 = pbVar6 + 1;
    while (pbVar6 = pbVar8, pbVar7 != pbVar8) {
      pbVar6 = pbVar7 + 1;
      bVar2 = *pbVar7;
      if ((bVar2 == 10) || (pbVar7 = pbVar6, bVar2 == 0xd)) break;
    }
    goto LAB_00139ff0;
  }
LAB_00139e90:
  puVar4 = param_2;
  param_2 = puVar5;
  if (pbVar6 == pbVar8) goto LAB_0013a060;
  goto LAB_00139e98;
}



/* Entry: 0013a124; end: 0013a18b;  */

bool FUN_0013a124(void)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  long unaff_x20;
  
  pcVar3 = *(char **)(unaff_x20 + 0x28);
  cVar1 = *pcVar3;
  if (cVar1 == '-') {
    pcVar3 = pcVar3 + 1;
    if (pcVar3 == *(char **)(unaff_x20 + 0x30)) {
      return false;
    }
    cVar1 = *pcVar3;
  }
  if (cVar1 != '0') {
    return false;
  }
  if (((byte *)(pcVar3 + 1) != *(byte **)(unaff_x20 + 0x30)) && (bVar2 = pcVar3[1], bVar2 != 0x78))
  {
    return (bVar2 & 0xf8) == 0x30;
  }
  return true;
}



/* Entry: 0013a18c; end: 0013a423;  */

void FUN_0013a18c(undefined8 param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  byte abStack_78 [15];
  undefined1 uStack_69;
  long lStack_68;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar15 = *param_2;
  uVar18 = param_2[1];
  uVar12 = (uint)(uVar18 >> 0x20);
  uVar17 = uVar12 >> 0x1e;
  abStack_78[0] = (byte)lVar15;
  uVar3 = (undefined1)((ulong)lVar15 >> 8);
  uVar4 = (undefined1)((ulong)lVar15 >> 0x10);
  uVar5 = (undefined1)((ulong)lVar15 >> 0x18);
  uVar6 = (undefined1)((ulong)lVar15 >> 0x20);
  uVar7 = (undefined1)((ulong)lVar15 >> 0x28);
  uVar8 = (undefined1)((ulong)lVar15 >> 0x30);
  uVar9 = (undefined1)((ulong)lVar15 >> 0x38);
  abStack_78[1] = uVar3;
  abStack_78[2] = uVar4;
  abStack_78[3] = uVar5;
  abStack_78[4] = uVar6;
  abStack_78[5] = uVar7;
  abStack_78[6] = uVar8;
  abStack_78[7] = uVar9;
  if (uVar12 >> 0x1e < 2) {
    if (uVar17 == 0) {
      FUN_00023358(lVar15,uVar18);
      abStack_78[8] = (byte)uVar18;
      abStack_78[9] = (byte)(uVar18 >> 8);
      abStack_78[10] = (byte)(uVar18 >> 0x10);
      abStack_78[0xb] = (byte)(uVar18 >> 0x18);
      abStack_78[0xc] = (byte)(uVar18 >> 0x20);
      abStack_78[0xd] = (byte)(uVar18 >> 0x28);
      abStack_78[0xe] = (byte)(uVar18 >> 0x30);
      FUN_00139160(param_1,abStack_78,abStack_78 + abStack_78[0xe],param_3,param_4 & 0xffffffff);
      lVar15 = CONCAT17(abStack_78[7],
                        CONCAT16(abStack_78[6],
                                 CONCAT15(abStack_78[5],
                                          CONCAT14(abStack_78[4],
                                                   CONCAT13(abStack_78[3],
                                                            CONCAT12(abStack_78[2],
                                                                     CONCAT11(abStack_78[1],
                                                                              abStack_78[0])))))));
      uVar18 = (ulong)CONCAT16(abStack_78[0xe],
                               CONCAT15(abStack_78[0xd],
                                        CONCAT14(abStack_78[0xc],
                                                 CONCAT13(abStack_78[0xb],
                                                          CONCAT12(abStack_78[10],
                                                                   CONCAT11(abStack_78[9],
                                                                            abStack_78[8]))))));
    }
    else {
      uVar19 = uVar18 & 0x3fffffffffffffff;
      _swift_retain(uVar19);
      FUN_00023358(lVar15,uVar18);
      abStack_78[8] = (byte)uVar19;
      abStack_78[9] = (byte)(uVar19 >> 8);
      abStack_78[10] = (byte)(uVar19 >> 0x10);
      abStack_78[0xb] = (byte)(uVar19 >> 0x18);
      abStack_78[0xc] = (byte)(uVar19 >> 0x20);
      abStack_78[0xd] = (byte)(uVar19 >> 0x28);
      abStack_78[0xe] = (byte)(uVar19 >> 0x30);
      uStack_69 = (undefined1)(uVar19 >> 0x38);
      param_2[1] = -0x4000000000000000;
      *param_2 = 0;
      FUN_00023358(0,0xc000000000000000);
      FUN_0013a424(param_1,abStack_78,param_3,param_4);
      lVar15 = CONCAT17(abStack_78[7],
                        CONCAT16(abStack_78[6],
                                 CONCAT15(abStack_78[5],
                                          CONCAT14(abStack_78[4],
                                                   CONCAT13(abStack_78[3],
                                                            CONCAT12(abStack_78[2],
                                                                     CONCAT11(abStack_78[1],
                                                                              abStack_78[0])))))));
      uVar18 = CONCAT17(uStack_69,
                        CONCAT16(abStack_78[0xe],
                                 CONCAT15(abStack_78[0xd],
                                          CONCAT14(abStack_78[0xc],
                                                   CONCAT13(abStack_78[0xb],
                                                            CONCAT12(abStack_78[10],
                                                                     CONCAT11(abStack_78[9],
                                                                              abStack_78[8]))))))) |
               0x4000000000000000;
    }
    *param_2 = lVar15;
    param_2[1] = uVar18;
  }
  else if (uVar17 == 2) {
    uVar19 = uVar18 & 0x3fffffffffffffff;
    _swift_retain(lVar15);
    _swift_retain(uVar19);
    FUN_00023358(lVar15,uVar18);
    abStack_78[8] = (byte)uVar19;
    abStack_78[9] = (byte)(uVar19 >> 8);
    abStack_78[10] = (byte)(uVar19 >> 0x10);
    abStack_78[0xb] = (byte)(uVar19 >> 0x18);
    abStack_78[0xc] = (byte)(uVar19 >> 0x20);
    abStack_78[0xd] = (byte)(uVar19 >> 0x28);
    abStack_78[0xe] = (byte)(uVar19 >> 0x30);
    uStack_69 = (undefined1)(uVar19 >> 0x38);
    param_2[1] = -0x4000000000000000;
    *param_2 = 0;
    lVar15 = 0;
    FUN_00023358(0,0xc000000000000000);
    __s10Foundation4DataV10LargeSliceV21ensureUniqueReferenceyyF();
    lVar13 = CONCAT17(abStack_78[7],
                      CONCAT16(abStack_78[6],
                               CONCAT15(abStack_78[5],
                                        CONCAT14(abStack_78[4],
                                                 CONCAT13(abStack_78[3],
                                                          CONCAT12(abStack_78[2],
                                                                   CONCAT11(abStack_78[1],
                                                                            abStack_78[0])))))));
    uVar18 = CONCAT17(uStack_69,
                      CONCAT16(abStack_78[0xe],
                               CONCAT15(abStack_78[0xd],
                                        CONCAT14(abStack_78[0xc],
                                                 CONCAT13(abStack_78[0xb],
                                                          CONCAT12(abStack_78[10],
                                                                   CONCAT11(abStack_78[9],
                                                                            abStack_78[8])))))));
    lVar1 = *(long *)(lVar13 + 0x10);
    lVar2 = *(long *)(lVar13 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    if (lVar15 == 0) goto LAB_0013a420;
    lVar16 = lVar15;
    __s10Foundation13__DataStorageC7_offsetSivg();
    lVar10 = lVar1 - lVar16;
    if (SBORROW8(lVar1,lVar16)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x13a418);
      (*pcVar14)();
    }
    lVar11 = lVar2 - lVar1;
    if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x13a41c);
      (*pcVar14)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (lVar11 <= lVar16) {
      lVar16 = lVar11;
    }
    lVar15 = lVar15 + lVar10;
    FUN_00139160(param_1,lVar15,lVar15 + lVar16,param_3,param_4);
    *param_2 = lVar13;
    param_2[1] = uVar18 | 0x8000000000000000;
  }
  else {
    abStack_78[8] = 0;
    abStack_78[9] = 0;
    abStack_78[10] = 0;
    abStack_78[0xb] = 0;
    abStack_78[0xc] = 0;
    abStack_78[0xd] = 0;
    abStack_78[0] = 0;
    abStack_78[1] = 0;
    abStack_78[2] = 0;
    abStack_78[3] = 0;
    abStack_78[4] = 0;
    abStack_78[5] = 0;
    abStack_78[6] = 0;
    abStack_78[7] = 0;
    FUN_00139160(abStack_78,abStack_78,param_3,param_4);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_0013a420:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x13a424);
  (*pcVar14)();
}



/* Entry: 0013a424; end: 0013a4eb;  */

void FUN_0013a424(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  __s10Foundation4DataV11InlineSliceV21ensureUniqueReferenceyyF();
  lVar7 = (long)*param_2;
  iVar1 = param_2[1];
  if (iVar1 < *param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x13a4e4);
    (*pcVar3)();
  }
  lVar6 = *(long *)(param_2 + 2);
  lVar4 = lVar6;
  _swift_retain();
  __s10Foundation13__DataStorageC6_bytesSvSgvg();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    __s10Foundation13__DataStorageC7_offsetSivg();
    lVar2 = lVar7 - lVar5;
    if (!SBORROW8(lVar7,lVar5)) {
      lVar7 = iVar1 - lVar7;
      __s10Foundation13__DataStorageC7_lengthSivg();
      if (lVar7 <= lVar5) {
        lVar5 = lVar7;
      }
      lVar4 = lVar4 + lVar2;
      FUN_00139160(param_1,lVar4,lVar4 + lVar5,param_3,param_4);
      _swift_release(lVar6);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x13a4e8);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x13a4ec);
  (*pcVar3)();
}



/* Entry: 0013a4ec; end: 0013a5c7;  */

long FUN_0013a4ec(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 0013a5c8; end: 0013a697;  */

undefined8 * FUN_0013a5c8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_2[3];
  if (param_1[3] == 0) {
    if (lVar1 != 0) {
      param_1[3] = lVar1;
      param_1[4] = param_2[4];
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
      goto LAB_0013a63c;
    }
  }
  else {
    if (lVar1 != 0) {
      FUN_0004037c(param_1,param_2);
      goto LAB_0013a63c;
    }
    FUN_00011670(param_1);
  }
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
LAB_0013a63c:
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  uVar2 = param_1[7];
  param_1[7] = param_2[7];
  _swift_retain();
  _swift_release(uVar2);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  param_1[10] = param_2[10];
  return param_1;
}



/* Entry: 0013a698; end: 0013a713;  */

undefined8 * FUN_0013a698(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1[3] != 0) {
    FUN_00011670(param_1);
  }
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_release(uVar1);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  param_1[10] = param_2[10];
  return param_1;
}



/* Entry: 0013a714; end: 0013a7bf;  */

int FUN_0013a714(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0xe);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 0013a7c0; end: 0013aa1f;  */

undefined1  [16] FUN_0013a7c0(int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined1 auVar10 [16];
  
  if (param_1 == 0) {
    uVar2 = 0;
    uVar5 = 0xe000000000000000;
    goto LAB_0013a9f0;
  }
  pcVar3 = PTR___ss5Int32VN_0099b730;
  puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_0099b740;
  if ((param_1 * 0x68c26139 + 0x218c0U >> 6 | param_1 * -0x1c000000) < 0x10c7) {
    if (param_1 < 0) {
      if (SBORROW4(0,param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x13aa18);
        (*pcVar1)();
      }
      if (-param_1 < -999999) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x13aa0c);
        (*pcVar1)();
      }
    }
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_0099b730,PTR___ss5Int32Vs23CustomStringConvertiblesWP_0099b740);
    pcVar4 = pcVar3;
    __sSS5countSivg();
    if ((long)pcVar4 < 3) {
      pcVar4 = pcVar3;
      __sSS5countSivg(pcVar3,puVar6);
      lVar7 = 3 - (long)pcVar4;
      puVar8 = puVar6;
      pcVar9 = pcVar3;
      if (SBORROW8(3,(long)pcVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x13a91c);
        (*pcVar1)();
      }
      goto LAB_0013a994;
    }
  }
  else if ((param_1 * 0x26e978d5 + 0x10624d8U >> 3 | param_1 * -0x60000000) < 0x418937) {
    if (param_1 < 0) {
      if (SBORROW4(0,param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x13aa20);
        (*pcVar1)();
      }
      if (-param_1 < -999) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x13aa10);
        (*pcVar1)();
      }
    }
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_0099b730,PTR___ss5Int32Vs23CustomStringConvertiblesWP_0099b740);
    pcVar4 = pcVar3;
    __sSS5countSivg();
    if ((long)pcVar4 < 6) {
      pcVar4 = pcVar3;
      __sSS5countSivg(pcVar3,puVar6);
      lVar7 = 6 - (long)pcVar4;
      puVar8 = puVar6;
      pcVar9 = pcVar3;
      if (SBORROW8(6,(long)pcVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x13aa1c);
        (*pcVar1)();
      }
      goto LAB_0013a994;
    }
  }
  else {
    if (param_1 < 0) {
      if (SBORROW4(0,param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x13aa14);
        (*pcVar1)();
      }
      if (-param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x13aa08);
        (*pcVar1)();
      }
    }
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_0099b730,PTR___ss5Int32Vs23CustomStringConvertiblesWP_0099b740);
    pcVar4 = pcVar3;
    __sSS5countSivg();
    if ((long)pcVar4 < 9) {
      pcVar4 = pcVar3;
      __sSS5countSivg(pcVar3,puVar6);
      lVar7 = 9 - (long)pcVar4;
      puVar8 = puVar6;
      pcVar9 = pcVar3;
      if (SBORROW8(9,(long)pcVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x13a88c);
        (*pcVar1)();
      }
LAB_0013a994:
      pcVar3 = segment_command_00000020.segname + 8;
      puVar6 = (undefined *)0xe100000000000000;
      __sSS9repeating5countS2S_SitcfC(0x30,0xe100000000000000,lVar7);
      _swift_bridgeObjectRetain(puVar6);
      __sSS6appendyySSF(pcVar9,puVar8);
      _swift_bridgeObjectRelease(puVar8);
      _swift_bridgeObjectRelease(puVar6);
    }
  }
  __sSS6appendyySSF(pcVar3,puVar6);
  _swift_bridgeObjectRelease(puVar6);
  uVar2 = 0x2e;
  uVar5 = 0xe100000000000000;
LAB_0013a9f0:
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = uVar2;
  return auVar10;
}



/* Entry: 0013aa20; end: 0013ad2b;  */

undefined1  [16] FUN_0013aa20(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  
  uVar6 = param_1 % 0x15180;
  uVar3 = uVar6 + 0x15180;
  if (-1 < (long)uVar6) {
    uVar3 = uVar6;
  }
  iVar7 = (int)((uVar3 & 0xffffffff) / 0x3c);
  uVar4 = ~(uint)uVar3;
  uVar8 = uVar4 / 0x3c + 1;
  uVar8 = uVar8 + ((uVar8 & 0xffff) / 0x3c) * -0x3c;
  iVar1 = 0;
  if ((uVar8 & 0xffff) != 0) {
    iVar1 = 0x3c - uVar8;
  }
  bVar5 = (uVar3 & 0x8000000000000000) != 0;
  iVar2 = iVar7 + (((uint)((uVar3 & 0xffffffff) / 0x3c) & 0xffff) / 0x3c) * -0x3c;
  if (bVar5) {
    iVar2 = iVar1;
  }
  uVar8 = (uint)((uVar3 & 0xffffffff) / 0xe10);
  if (bVar5) {
    uVar8 = ~(uVar4 / 0xe10);
  }
  auVar9._0_8_ = CONCAT44(iVar2,uVar8) & 0xffffffffffff;
  auVar9._8_4_ = (uint)uVar3 + iVar7 * -0x3c;
  auVar9._12_4_ = 0;
  return auVar9;
}



/* Entry: 0013ad2c; end: 0013ada3;  */

void FUN_0013ad2c(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((param_3 & 0xff000000000000) == 0) {
        return;
      }
    }
    else if ((long)(int)param_2 == param_2 >> 0x20) {
      return;
    }
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    if (*(long *)(param_2 + 0x10) == *(long *)(param_2 + 0x18)) {
      return;
    }
  }
  (**(code **)(param_5 + 0x1c0))(param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 0013ada4; end: 0013adcf;  */

undefined1  [16] FUN_0013ada4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x00023304();
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 0013add0; end: 0013adf3;  */

undefined1  [16] FUN_0013add0(void)

{
  return ZEXT816(0xc000000000000000) << 0x40;
}



/* Entry: 0013adf4; end: 0013ae2f;  */

undefined8 * FUN_0013adf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00023304(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* Entry: 0013ae30; end: 0013ae3b;  */

void FUN_0013ae30(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    _swift_release(*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 0013ae3c; end: 0013ae7f;  */

undefined8 * FUN_0013ae3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  func_0x00023304(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  FUN_00023358(uVar2,uVar4);
  return param_1;
}



/* Entry: 0013ae80; end: 0013aeb7;  */

undefined8 * FUN_0013ae80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_00023358(uVar1,uVar2);
  return param_1;
}



/* Entry: 0013aeb8; end: 0013b13b;  */

int FUN_0013aeb8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 0013b13c; end: 0013b217;  */

void FUN_0013b13c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_0099b2e8;
  puVar1 = PTR___sSiN_0099b2c0;
  puVar2 = PTR___sSiN_0099b2c0;
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_0099b2e8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj();
  __sSS6appendyySSF(0x2e,0xe100000000000000);
  puVar4 = puVar5;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar5);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x2e,0xe100000000000000);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar5);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  puRam0000000000b64ad8 = puVar2;
  puRam0000000000b64ae0 = puVar3;
  return;
}



/* Entry: 0013b218; end: 0013b257;  */

undefined8 FUN_0013b218(void)

{
  if (lRam0000000000af0628 != -1) {
    _swift_once(0xaf0628,FUN_0013b13c);
  }
  return 0xb64ad8;
}



/* Entry: 0013b258; end: 0013b2b3;  */

undefined1  [16] FUN_0013b258(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000000af0628 != -1) {
    _swift_once(0xaf0628,FUN_0013b13c);
  }
  auVar1._8_8_ = uRam0000000000b64ae0;
  auVar1._0_8_ = uRam0000000000b64ad8;
  _swift_bridgeObjectRetain(uRam0000000000b64ae0);
  return auVar1;
}



/* Entry: 0013b2b4; end: 0013b2c3;  */

undefined1  [16] FUN_0013b2b4(void)

{
  return ZEXT816(0x9af480);
}



/* Entry: 0013b2c4; end: 0013b557;  */

/* WARNING: Removing unreachable block (ram,0x0013b508) */

void FUN_0013b2c4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined *apuStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar11 = (ulong *)(param_4 + 0x40);
  uVar12 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if (-uVar12 < 0x40) {
    uVar10 = ~(-1L << (-uVar12 & 0x3f));
  }
  uVar10 = uVar10 & *puVar11;
  _swift_bridgeObjectRetain(param_4);
  lVar6 = 0;
  puVar8 = PTR___swiftEmptyArrayStorage_0099b8f0;
  lVar7 = lVar6;
  while( true ) {
    while (uVar10 != 0) {
      uVar1 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      lVar9 = *(long *)(*(long *)(param_4 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                       lVar6 * 0x200);
      lVar7 = lVar6;
      if ((param_2 <= lVar9) && (lVar9 < param_3)) {
        puVar5 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        apuStack_88[0] = puVar8;
        if (((ulong)puVar5 & 1) == 0) {
          FUN_000e287c(0,*(long *)(puVar8 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(apuStack_88[0] + 0x10);
        if (*(ulong *)(apuStack_88[0] + 0x18) >> 1 <= uVar1) {
          FUN_000e287c(1 < *(ulong *)(apuStack_88[0] + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_88[0] + 0x10) = uVar1 + 1;
        *(long *)(apuStack_88[0] + uVar1 * 8 + 0x20) = lVar9;
        puVar8 = apuStack_88[0];
      }
    }
    bVar4 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x13b540);
      (*pcVar3)();
    }
    if ((long)(0x3f - uVar12 >> 6) <= lVar6) break;
    uVar10 = puVar11[lVar6];
  }
  FUN_000e1714(param_4,puVar11,~uVar12,lVar7,0);
  apuStack_88[0] = puVar8;
  _swift_retain(puVar8);
  FUN_000e1f68(apuStack_88);
  if (unaff_x21 != 0) {
    _swift_release(apuStack_88[0]);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x13b558);
    (*pcVar3)();
  }
  _swift_release(puVar8);
  puVar8 = apuStack_88[0];
  uVar10 = *(ulong *)(apuStack_88[0] + 0x10);
  if (uVar10 != 0) {
    uVar12 = 0;
    do {
      if (*(ulong *)(puVar8 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x13b544);
        (*pcVar3)();
      }
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x13b548);
        (*pcVar3)();
      }
      lVar6 = *(long *)(puVar8 + uVar12 * 8 + 0x20);
      FUN_000e1d94(lVar6);
      if (((ulong)puVar11 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x13b54c);
        (*pcVar3)();
      }
      FUN_000e1304(*(long *)(param_4 + 0x38) + lVar6 * 0x28,apuStack_88);
      lVar6 = lStack_68;
      uVar2 = uStack_70;
      FUN_0001393c(apuStack_88,uStack_70);
      puVar11 = (ulong *)0x0;
      (**(code **)(lVar6 + 0x30))(param_1,&UNK_009af138,&PTR_DAT_009af160,uVar2,lVar6);
      uVar12 = uVar12 + 1;
      FUN_00011670(apuStack_88);
    } while (uVar10 != uVar12);
  }
  _swift_release(puVar8);
  return;
}



/* Entry: 0013b558; end: 0013b7eb;  */

/* WARNING: Removing unreachable block (ram,0x0013b79c) */

void FUN_0013b558(undefined8 param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined *apuStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar11 = (ulong *)(param_4 + 0x40);
  uVar12 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if (-uVar12 < 0x40) {
    uVar10 = ~(-1L << (-uVar12 & 0x3f));
  }
  uVar10 = uVar10 & *puVar11;
  _swift_bridgeObjectRetain(param_4);
  lVar6 = 0;
  puVar8 = PTR___swiftEmptyArrayStorage_0099b8f0;
  lVar7 = lVar6;
  while( true ) {
    while (uVar10 != 0) {
      uVar1 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      lVar9 = *(long *)(*(long *)(param_4 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                       lVar6 * 0x200);
      lVar7 = lVar6;
      if ((param_2 <= lVar9) && (lVar9 < param_3)) {
        puVar5 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        apuStack_88[0] = puVar8;
        if (((ulong)puVar5 & 1) == 0) {
          FUN_000e287c(0,*(long *)(puVar8 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(apuStack_88[0] + 0x10);
        if (*(ulong *)(apuStack_88[0] + 0x18) >> 1 <= uVar1) {
          FUN_000e287c(1 < *(ulong *)(apuStack_88[0] + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_88[0] + 0x10) = uVar1 + 1;
        *(long *)(apuStack_88[0] + uVar1 * 8 + 0x20) = lVar9;
        puVar8 = apuStack_88[0];
      }
    }
    bVar4 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x13b7d4);
      (*pcVar3)();
    }
    if ((long)(0x3f - uVar12 >> 6) <= lVar6) break;
    uVar10 = puVar11[lVar6];
  }
  FUN_000e1714(param_4,puVar11,~uVar12,lVar7,0);
  apuStack_88[0] = puVar8;
  _swift_retain(puVar8);
  FUN_000e1f68(apuStack_88);
  if (unaff_x21 != 0) {
    _swift_release(apuStack_88[0]);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x13b7ec);
    (*pcVar3)();
  }
  _swift_release(puVar8);
  puVar8 = apuStack_88[0];
  uVar10 = *(ulong *)(apuStack_88[0] + 0x10);
  if (uVar10 != 0) {
    uVar12 = 0;
    do {
      if (*(ulong *)(puVar8 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x13b7d8);
        (*pcVar3)();
      }
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x13b7dc);
        (*pcVar3)();
      }
      lVar6 = *(long *)(puVar8 + uVar12 * 8 + 0x20);
      FUN_000e1d94(lVar6);
      if (((ulong)puVar11 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x13b7e0);
        (*pcVar3)();
      }
      FUN_000e1304(*(long *)(param_4 + 0x38) + lVar6 * 0x28,apuStack_88);
      lVar6 = lStack_68;
      uVar2 = uStack_70;
      FUN_0001393c(apuStack_88,uStack_70);
      puVar11 = (ulong *)0x0;
      (**(code **)(lVar6 + 0x30))(param_1,&UNK_009ab410,&PTR_DAT_009ab428,uVar2,lVar6);
      uVar12 = uVar12 + 1;
      FUN_00011670(apuStack_88);
    } while (uVar10 != uVar12);
  }
  _swift_release(puVar8);
  return;
}



/* Entry: 0013b7ec; end: 0013ba7f;  */

/* WARNING: Removing unreachable block (ram,0x0013ba30) */

void FUN_0013b7ec(undefined8 param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined *apuStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar11 = (ulong *)(param_4 + 0x40);
  uVar12 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if (-uVar12 < 0x40) {
    uVar10 = ~(-1L << (-uVar12 & 0x3f));
  }
  uVar10 = uVar10 & *puVar11;
  _swift_bridgeObjectRetain(param_4);
  lVar6 = 0;
  puVar8 = PTR___swiftEmptyArrayStorage_0099b8f0;
  lVar7 = lVar6;
  while( true ) {
    while (uVar10 != 0) {
      uVar1 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      lVar9 = *(long *)(*(long *)(param_4 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                       lVar6 * 0x200);
      lVar7 = lVar6;
      if ((param_2 <= lVar9) && (lVar9 < param_3)) {
        puVar5 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        apuStack_88[0] = puVar8;
        if (((ulong)puVar5 & 1) == 0) {
          FUN_000e287c(0,*(long *)(puVar8 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(apuStack_88[0] + 0x10);
        if (*(ulong *)(apuStack_88[0] + 0x18) >> 1 <= uVar1) {
          FUN_000e287c(1 < *(ulong *)(apuStack_88[0] + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_88[0] + 0x10) = uVar1 + 1;
        *(long *)(apuStack_88[0] + uVar1 * 8 + 0x20) = lVar9;
        puVar8 = apuStack_88[0];
      }
    }
    bVar4 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x13ba68);
      (*pcVar3)();
    }
    if ((long)(0x3f - uVar12 >> 6) <= lVar6) break;
    uVar10 = puVar11[lVar6];
  }
  FUN_000e1714(param_4,puVar11,~uVar12,lVar7,0);
  apuStack_88[0] = puVar8;
  _swift_retain(puVar8);
  FUN_000e1f68(apuStack_88);
  if (unaff_x21 != 0) {
    _swift_release(apuStack_88[0]);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x13ba80);
    (*pcVar3)();
  }
  _swift_release(puVar8);
  puVar8 = apuStack_88[0];
  uVar10 = *(ulong *)(apuStack_88[0] + 0x10);
  if (uVar10 != 0) {
    uVar12 = 0;
    do {
      if (*(ulong *)(puVar8 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x13ba6c);
        (*pcVar3)();
      }
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x13ba70);
        (*pcVar3)();
      }
      lVar6 = *(long *)(puVar8 + uVar12 * 8 + 0x20);
      FUN_000e1d94(lVar6);
      if (((ulong)puVar11 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x13ba74);
        (*pcVar3)();
      }
      FUN_000e1304(*(long *)(param_4 + 0x38) + lVar6 * 0x28,apuStack_88);
      lVar6 = lStack_68;
      uVar2 = uStack_70;
      FUN_0001393c(apuStack_88,uStack_70);
      puVar11 = (ulong *)0x0;
      (**(code **)(lVar6 + 0x30))(param_1,&UNK_009ab868,&PTR_DAT_009ab880,uVar2,lVar6);
      uVar12 = uVar12 + 1;
      FUN_00011670(apuStack_88);
    } while (uVar10 != uVar12);
  }
  _swift_release(puVar8);
  return;
}



/* Entry: 0013ba80; end: 0013bd13;  */

/* WARNING: Removing unreachable block (ram,0x0013bcc4) */

void FUN_0013ba80(undefined8 param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined *apuStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar11 = (ulong *)(param_4 + 0x40);
  uVar12 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if (-uVar12 < 0x40) {
    uVar10 = ~(-1L << (-uVar12 & 0x3f));
  }
  uVar10 = uVar10 & *puVar11;
  _swift_bridgeObjectRetain(param_4);
  lVar6 = 0;
  puVar8 = PTR___swiftEmptyArrayStorage_0099b8f0;
  lVar7 = lVar6;
  while( true ) {
    while (uVar10 != 0) {
      uVar1 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      lVar9 = *(long *)(*(long *)(param_4 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                       lVar6 * 0x200);
      lVar7 = lVar6;
      if ((param_2 <= lVar9) && (lVar9 < param_3)) {
        puVar5 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        apuStack_88[0] = puVar8;
        if (((ulong)puVar5 & 1) == 0) {
          FUN_000e287c(0,*(long *)(puVar8 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(apuStack_88[0] + 0x10);
        if (*(ulong *)(apuStack_88[0] + 0x18) >> 1 <= uVar1) {
          FUN_000e287c(1 < *(ulong *)(apuStack_88[0] + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_88[0] + 0x10) = uVar1 + 1;
        *(long *)(apuStack_88[0] + uVar1 * 8 + 0x20) = lVar9;
        puVar8 = apuStack_88[0];
      }
    }
    bVar4 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x13bcfc);
      (*pcVar3)();
    }
    if ((long)(0x3f - uVar12 >> 6) <= lVar6) break;
    uVar10 = puVar11[lVar6];
  }
  FUN_000e1714(param_4,puVar11,~uVar12,lVar7,0);
  apuStack_88[0] = puVar8;
  _swift_retain(puVar8);
  FUN_000e1f68(apuStack_88);
  if (unaff_x21 != 0) {
    _swift_release(apuStack_88[0]);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x13bd14);
    (*pcVar3)();
  }
  _swift_release(puVar8);
  puVar8 = apuStack_88[0];
  uVar10 = *(ulong *)(apuStack_88[0] + 0x10);
  if (uVar10 != 0) {
    uVar12 = 0;
    do {
      if (*(ulong *)(puVar8 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x13bd00);
        (*pcVar3)();
      }
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x13bd04);
        (*pcVar3)();
      }
      lVar6 = *(long *)(puVar8 + uVar12 * 8 + 0x20);
      FUN_000e1d94(lVar6);
      if (((ulong)puVar11 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x13bd08);
        (*pcVar3)();
      }
      FUN_000e1304(*(long *)(param_4 + 0x38) + lVar6 * 0x28,apuStack_88);
      lVar6 = lStack_68;
      uVar2 = uStack_70;
      FUN_0001393c(apuStack_88,uStack_70);
      puVar11 = (ulong *)0x0;
      (**(code **)(lVar6 + 0x30))(param_1,&UNK_009ad8b8,&PTR_DAT_009ad8d8,uVar2,lVar6);
      uVar12 = uVar12 + 1;
      FUN_00011670(apuStack_88);
    } while (uVar10 != uVar12);
  }
  _swift_release(puVar8);
  return;
}



/* Entry: 0013bd14; end: 0013bfa7;  */

/* WARNING: Removing unreachable block (ram,0x0013bf58) */

void FUN_0013bd14(undefined8 param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined *apuStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar11 = (ulong *)(param_4 + 0x40);
  uVar12 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if (-uVar12 < 0x40) {
    uVar10 = ~(-1L << (-uVar12 & 0x3f));
  }
  uVar10 = uVar10 & *puVar11;
  _swift_bridgeObjectRetain(param_4);
  lVar6 = 0;
  puVar8 = PTR___swiftEmptyArrayStorage_0099b8f0;
  lVar7 = lVar6;
  while( true ) {
    while (uVar10 != 0) {
      uVar1 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      lVar9 = *(long *)(*(long *)(param_4 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                       lVar6 * 0x200);
      lVar7 = lVar6;
      if ((param_2 <= lVar9) && (lVar9 < param_3)) {
        puVar5 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        apuStack_88[0] = puVar8;
        if (((ulong)puVar5 & 1) == 0) {
          FUN_000e287c(0,*(long *)(puVar8 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(apuStack_88[0] + 0x10);
        if (*(ulong *)(apuStack_88[0] + 0x18) >> 1 <= uVar1) {
          FUN_000e287c(1 < *(ulong *)(apuStack_88[0] + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_88[0] + 0x10) = uVar1 + 1;
        *(long *)(apuStack_88[0] + uVar1 * 8 + 0x20) = lVar9;
        puVar8 = apuStack_88[0];
      }
    }
    bVar4 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x13bf90);
      (*pcVar3)();
    }
    if ((long)(0x3f - uVar12 >> 6) <= lVar6) break;
    uVar10 = puVar11[lVar6];
  }
  FUN_000e1714(param_4,puVar11,~uVar12,lVar7,0);
  apuStack_88[0] = puVar8;
  _swift_retain(puVar8);
  FUN_000e1f68(apuStack_88);
  if (unaff_x21 != 0) {
    _swift_release(apuStack_88[0]);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x13bfa8);
    (*pcVar3)();
  }
  _swift_release(puVar8);
  puVar8 = apuStack_88[0];
  uVar10 = *(ulong *)(apuStack_88[0] + 0x10);
  if (uVar10 != 0) {
    uVar12 = 0;
    do {
      if (*(ulong *)(puVar8 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x13bf94);
        (*pcVar3)();
      }
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x13bf98);
        (*pcVar3)();
      }
      lVar6 = *(long *)(puVar8 + uVar12 * 8 + 0x20);
      FUN_000e1d94(lVar6);
      if (((ulong)puVar11 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x13bf9c);
        (*pcVar3)();
      }
      FUN_000e1304(*(long *)(param_4 + 0x38) + lVar6 * 0x28,apuStack_88);
      lVar6 = lStack_68;
      uVar2 = uStack_70;
      FUN_0001393c(apuStack_88,uStack_70);
      puVar11 = (ulong *)0x0;
      (**(code **)(lVar6 + 0x30))(param_1,&UNK_009ad0a0,&PTR_DAT_009ad0b8,uVar2,lVar6);
      uVar12 = uVar12 + 1;
      FUN_00011670(apuStack_88);
    } while (uVar10 != uVar12);
  }
  _swift_release(puVar8);
  return;
}



/* Entry: 0013bfa8; end: 0013c23b;  */

/* WARNING: Removing unreachable block (ram,0x0013c1ec) */

void FUN_0013bfa8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined *apuStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar11 = (ulong *)(param_4 + 0x40);
  uVar12 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if (-uVar12 < 0x40) {
    uVar10 = ~(-1L << (-uVar12 & 0x3f));
  }
  uVar10 = uVar10 & *puVar11;
  _swift_bridgeObjectRetain(param_4);
  lVar6 = 0;
  puVar8 = PTR___swiftEmptyArrayStorage_0099b8f0;
  lVar7 = lVar6;
  while( true ) {
    while (uVar10 != 0) {
      uVar1 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      lVar9 = *(long *)(*(long *)(param_4 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                       lVar6 * 0x200);
      lVar7 = lVar6;
      if ((param_2 <= lVar9) && (lVar9 < param_3)) {
        puVar5 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        apuStack_88[0] = puVar8;
        if (((ulong)puVar5 & 1) == 0) {
          FUN_000e287c(0,*(long *)(puVar8 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(apuStack_88[0] + 0x10);
        if (*(ulong *)(apuStack_88[0] + 0x18) >> 1 <= uVar1) {
          FUN_000e287c(1 < *(ulong *)(apuStack_88[0] + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_88[0] + 0x10) = uVar1 + 1;
        *(long *)(apuStack_88[0] + uVar1 * 8 + 0x20) = lVar9;
        puVar8 = apuStack_88[0];
      }
    }
    bVar4 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x13c224);
      (*pcVar3)();
    }
    if ((long)(0x3f - uVar12 >> 6) <= lVar6) break;
    uVar10 = puVar11[lVar6];
  }
  FUN_000e1714(param_4,puVar11,~uVar12,lVar7,0);
  apuStack_88[0] = puVar8;
  _swift_retain(puVar8);
  FUN_000e1f68(apuStack_88);
  if (unaff_x21 != 0) {
    _swift_release(apuStack_88[0]);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x13c23c);
    (*pcVar3)();
  }
  _swift_release(puVar8);
  puVar8 = apuStack_88[0];
  uVar10 = *(ulong *)(apuStack_88[0] + 0x10);
  if (uVar10 != 0) {
    uVar12 = 0;
    do {
      if (*(ulong *)(puVar8 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x13c228);
        (*pcVar3)();
      }
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x13c22c);
        (*pcVar3)();
      }
      lVar6 = *(long *)(puVar8 + uVar12 * 8 + 0x20);
      FUN_000e1d94(lVar6);
      if (((ulong)puVar11 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x13c230);
        (*pcVar3)();
      }
      FUN_000e1304(*(long *)(param_4 + 0x38) + lVar6 * 0x28,apuStack_88);
      lVar6 = lStack_68;
      uVar2 = uStack_70;
      FUN_0001393c(apuStack_88,uStack_70);
      puVar11 = (ulong *)0x0;
      (**(code **)(lVar6 + 0x30))(param_1,&UNK_009ab600,&PTR_DAT_009ab628,uVar2,lVar6);
      uVar12 = uVar12 + 1;
      FUN_00011670(apuStack_88);
    } while (uVar10 != uVar12);
  }
  _swift_release(puVar8);
  return;
}



/* Entry: 0013c23c; end: 0013c4cf;  */

/* WARNING: Removing unreachable block (ram,0x0013c480) */

void FUN_0013c23c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined *apuStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar11 = (ulong *)(param_4 + 0x40);
  uVar12 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if (-uVar12 < 0x40) {
    uVar10 = ~(-1L << (-uVar12 & 0x3f));
  }
  uVar10 = uVar10 & *puVar11;
  _swift_bridgeObjectRetain(param_4);
  lVar6 = 0;
  puVar8 = PTR___swiftEmptyArrayStorage_0099b8f0;
  lVar7 = lVar6;
  while( true ) {
    while (uVar10 != 0) {
      uVar1 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      lVar9 = *(long *)(*(long *)(param_4 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                       lVar6 * 0x200);
      lVar7 = lVar6;
      if ((param_2 <= lVar9) && (lVar9 < param_3)) {
        puVar5 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        apuStack_88[0] = puVar8;
        if (((ulong)puVar5 & 1) == 0) {
          FUN_000e287c(0,*(long *)(puVar8 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(apuStack_88[0] + 0x10);
        if (*(ulong *)(apuStack_88[0] + 0x18) >> 1 <= uVar1) {
          FUN_000e287c(1 < *(ulong *)(apuStack_88[0] + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_88[0] + 0x10) = uVar1 + 1;
        *(long *)(apuStack_88[0] + uVar1 * 8 + 0x20) = lVar9;
        puVar8 = apuStack_88[0];
      }
    }
    bVar4 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x13c4b8);
      (*pcVar3)();
    }
    if ((long)(0x3f - uVar12 >> 6) <= lVar6) break;
    uVar10 = puVar11[lVar6];
  }
  FUN_000e1714(param_4,puVar11,~uVar12,lVar7,0);
  apuStack_88[0] = puVar8;
  _swift_retain(puVar8);
  FUN_000e1f68(apuStack_88);
  if (unaff_x21 != 0) {
    _swift_release(apuStack_88[0]);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x13c4d0);
    (*pcVar3)();
  }
  _swift_release(puVar8);
  puVar8 = apuStack_88[0];
  uVar10 = *(ulong *)(apuStack_88[0] + 0x10);
  if (uVar10 != 0) {
    uVar12 = 0;
    do {
      if (*(ulong *)(puVar8 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x13c4bc);
        (*pcVar3)();
      }
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x13c4c0);
        (*pcVar3)();
      }
      lVar6 = *(long *)(puVar8 + uVar12 * 8 + 0x20);
      FUN_000e1d94(lVar6);
      if (((ulong)puVar11 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x13c4c4);
        (*pcVar3)();
      }
      FUN_000e1304(*(long *)(param_4 + 0x38) + lVar6 * 0x28,apuStack_88);
      lVar6 = lStack_68;
      uVar2 = uStack_70;
      FUN_0001393c(apuStack_88,uStack_70);
      puVar11 = (ulong *)0x0;
      (**(code **)(lVar6 + 0x30))(param_1,&UNK_009abab0,&PTR_DAT_009abad8,uVar2,lVar6);
      uVar12 = uVar12 + 1;
      FUN_00011670(apuStack_88);
    } while (uVar10 != uVar12);
  }
  _swift_release(puVar8);
  return;
}



/* Entry: 0013c4d0; end: 0013c50f;  */

void FUN_0013c4d0(void)

{
  FUN_0013b558();
  return;
}



/* Entry: 0013c510; end: 0013c55b;  */

void FUN_0013c510(int param_1,undefined8 param_2)

{
  func_0x000d6c50(param_2,0);
  func_0x000d6f74((long)param_1);
  return;
}



/* Entry: 0013c55c; end: 0013c6a3;  */

void FUN_0013c55c(int param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar3 = (long)param_1;
  FUN_0012f564(param_2);
  FUN_000c7840(": ",2);
  if (param_1 < 0) {
    uVar4 = *unaff_x20;
    uVar1 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar2 = uVar4;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar4 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      FUN_000540b4(uVar4,uVar1 + 1,1,uVar2);
    }
    *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar4 + uVar1 + 0x20) = 0x2d;
    *unaff_x20 = uVar4;
    lVar3 = -lVar3;
  }
  func_0x0012d6f0(lVar3);
  uVar4 = *unaff_x20;
  uVar1 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar4;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_000540b4(uVar4,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar4 + uVar1 + 0x20) = 10;
  *unaff_x20 = uVar4;
  return;
}



/* Entry: 0013c6a4; end: 0013c6bf;  */

void FUN_0013c6a4(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x20))((long)param_1);
  return;
}



/* Entry: 0013c6c0; end: 0013c70b;  */

void FUN_0013c6c0(undefined4 param_1,undefined8 param_2)

{
  func_0x000d6c50(param_2,0);
  func_0x000d6f74(param_1);
  return;
}



/* Entry: 0013c70c; end: 0013c73b;  */

void FUN_0013c70c(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x30))(param_1);
  return;
}



/* Entry: 0013c73c; end: 0013c7af;  */

void FUN_0013c73c(long param_1,uint param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    lVar6 = 0;
    pbVar4 = *(byte **)(unaff_x20 + 8);
    uVar1 = ((ulong)param_2 & 0x1fffffff) << 3 | 5;
    do {
      uVar2 = *(undefined4 *)(param_1 + 0x20 + lVar6 * 4);
      pbVar5 = pbVar4;
      uVar7 = uVar1;
      uVar8 = uVar1;
      if (0x7f < param_2 << 3) {
        do {
          pbVar5 = pbVar4 + 1;
          *pbVar4 = (byte)uVar7 | 0x80;
          uVar8 = uVar7 >> 7;
          uVar9 = uVar7 >> 0xe;
          pbVar4 = pbVar5;
          uVar7 = uVar8;
        } while (uVar9 != 0);
      }
      lVar6 = lVar6 + 1;
      *pbVar5 = (byte)uVar8;
      *(undefined4 *)(pbVar5 + 1) = uVar2;
      pbVar4 = pbVar5 + 5;
    } while (lVar6 != lVar3);
    *(byte **)(unaff_x20 + 8) = pbVar4;
  }
  return;
}



/* Entry: 0013c7b0; end: 0013c80f;  */

void FUN_0013c7b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined4 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 8))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 0013c810; end: 0013c823;  */

void FUN_0013c810(void)

{
  FUN_0013c824();
  return;
}



/* Entry: 0013c824; end: 0013c897;  */

void FUN_0013c824(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar5 = 0;
    pbVar3 = *(byte **)(unaff_x20 + 8);
    uVar1 = ((ulong)param_2 & 0x1fffffff) << 3 | 1;
    do {
      uVar6 = *(undefined8 *)(param_1 + 0x20 + lVar5 * 8);
      pbVar4 = pbVar3;
      uVar7 = uVar1;
      uVar8 = uVar1;
      if (0x7f < param_2 << 3) {
        do {
          pbVar4 = pbVar3 + 1;
          *pbVar3 = (byte)uVar7 | 0x80;
          uVar8 = uVar7 >> 7;
          uVar9 = uVar7 >> 0xe;
          pbVar3 = pbVar4;
          uVar7 = uVar8;
        } while (uVar9 != 0);
      }
      lVar5 = lVar5 + 1;
      *pbVar4 = (byte)uVar8;
      *(undefined8 *)(pbVar4 + 1) = uVar6;
      pbVar3 = pbVar4 + 9;
    } while (lVar5 != lVar2);
    *(byte **)(unaff_x20 + 8) = pbVar3;
  }
  return;
}



/* Entry: 0013c898; end: 0013c8f7;  */

void FUN_0013c898(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined8 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x10))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 0013c8f8; end: 0013c90b;  */

void FUN_0013c8f8(void)

{
  FUN_0013c90c();
  return;
}



/* Entry: 0013c90c; end: 0013c99b;  */

void FUN_0013c90c(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar6 = 0;
    pbVar3 = *(byte **)(unaff_x20 + 8);
    uVar7 = (ulong)(uint)(param_2 << 3);
    do {
      uVar1 = *(uint *)(param_1 + 0x20 + lVar6 * 4);
      uVar8 = (ulong)(int)uVar1;
      pbVar4 = pbVar3;
      uVar9 = uVar7;
      uVar10 = uVar7;
      if (0x7f < uVar7) {
        do {
          pbVar4 = pbVar3 + 1;
          *pbVar3 = (byte)uVar10 | 0x80;
          uVar9 = uVar10 >> 7;
          uVar11 = uVar10 >> 0xe;
          pbVar3 = pbVar4;
          uVar10 = uVar9;
        } while (uVar11 != 0);
      }
      pbVar5 = pbVar4 + 1;
      *pbVar4 = (byte)uVar9;
      pbVar3 = pbVar5;
      uVar9 = uVar8;
      if (0x7f < uVar1) {
        do {
          pbVar5 = pbVar3 + 1;
          *pbVar3 = (byte)uVar9 | 0x80;
          uVar8 = uVar9 >> 7;
          uVar10 = uVar9 >> 0xe;
          pbVar3 = pbVar5;
          uVar9 = uVar8;
        } while (uVar10 != 0);
      }
      lVar6 = lVar6 + 1;
      pbVar3 = pbVar5 + 1;
      *pbVar5 = (byte)uVar8;
    } while (lVar6 != lVar2);
    *(byte **)(unaff_x20 + 8) = pbVar3;
  }
  return;
}



/* Entry: 0013c99c; end: 0013c9fb;  */

void FUN_0013c99c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined4 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x18))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 0013c9fc; end: 0013ca0f;  */

void FUN_0013c9fc(void)

{
  FUN_0013cb74();
  return;
}



/* Entry: 0013ca10; end: 0013ca6f;  */

void FUN_0013ca10(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined8 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x20))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 0013ca70; end: 0013ca83;  */

void FUN_0013ca70(void)

{
  FUN_0013ca84();
  return;
}



/* Entry: 0013ca84; end: 0013cb13;  */

void FUN_0013ca84(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar6 = 0;
    pbVar3 = *(byte **)(unaff_x20 + 8);
    uVar7 = (ulong)(uint)(param_2 << 3);
    do {
      uVar1 = *(uint *)(param_1 + 0x20 + lVar6 * 4);
      uVar8 = (ulong)uVar1;
      pbVar4 = pbVar3;
      uVar9 = uVar7;
      uVar10 = uVar7;
      if (0x7f < uVar7) {
        do {
          pbVar4 = pbVar3 + 1;
          *pbVar3 = (byte)uVar10 | 0x80;
          uVar9 = uVar10 >> 7;
          uVar11 = uVar10 >> 0xe;
          pbVar3 = pbVar4;
          uVar10 = uVar9;
        } while (uVar11 != 0);
      }
      pbVar5 = pbVar4 + 1;
      *pbVar4 = (byte)uVar9;
      pbVar3 = pbVar5;
      uVar9 = uVar8;
      if (0x7f < uVar1) {
        do {
          pbVar5 = pbVar3 + 1;
          *pbVar3 = (byte)uVar9 | 0x80;
          uVar8 = uVar9 >> 7;
          uVar10 = uVar9 >> 0xe;
          pbVar3 = pbVar5;
          uVar9 = uVar8;
        } while (uVar10 != 0);
      }
      lVar6 = lVar6 + 1;
      pbVar3 = pbVar5 + 1;
      *pbVar5 = (byte)uVar8;
    } while (lVar6 != lVar2);
    *(byte **)(unaff_x20 + 8) = pbVar3;
  }
  return;
}



/* Entry: 0013cb14; end: 0013cb73;  */

void FUN_0013cb14(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined4 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x28))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 0013cb74; end: 0013cc03;  */

void FUN_0013cb74(long param_1,int param_2)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    lVar5 = 0;
    pbVar2 = *(byte **)(unaff_x20 + 8);
    uVar6 = (ulong)(uint)(param_2 << 3);
    do {
      uVar7 = *(ulong *)(param_1 + 0x20 + lVar5 * 8);
      pbVar3 = pbVar2;
      uVar8 = uVar6;
      uVar9 = uVar6;
      if (0x7f < uVar6) {
        do {
          pbVar3 = pbVar2 + 1;
          *pbVar2 = (byte)uVar8 | 0x80;
          uVar9 = uVar8 >> 7;
          uVar10 = uVar8 >> 0xe;
          pbVar2 = pbVar3;
          uVar8 = uVar9;
        } while (uVar10 != 0);
      }
      pbVar4 = pbVar3 + 1;
      *pbVar3 = (byte)uVar9;
      pbVar2 = pbVar4;
      uVar8 = uVar7;
      if (0x7f < uVar7) {
        do {
          pbVar4 = pbVar2 + 1;
          *pbVar2 = (byte)uVar8 | 0x80;
          uVar7 = uVar8 >> 7;
          uVar9 = uVar8 >> 0xe;
          pbVar2 = pbVar4;
          uVar8 = uVar7;
        } while (uVar9 != 0);
      }
      lVar5 = lVar5 + 1;
      pbVar2 = pbVar4 + 1;
      *pbVar4 = (byte)uVar7;
    } while (lVar5 != lVar1);
    *(byte **)(unaff_x20 + 8) = pbVar2;
  }
  return;
}



/* Entry: 0013cc04; end: 0013cc63;  */

void FUN_0013cc04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined8 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x30))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 0013cc64; end: 0013cc77;  */

void FUN_0013cc64(void)

{
  FUN_0013cc78();
  return;
}



/* Entry: 0013cc78; end: 0013cd0f;  */

void FUN_0013cc78(long param_1,int param_2)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    lVar5 = 0;
    pbVar2 = *(byte **)(unaff_x20 + 8);
    uVar6 = (ulong)(uint)(param_2 << 3);
    do {
      lVar7 = (long)*(int *)(param_1 + 0x20 + lVar5 * 4);
      pbVar3 = pbVar2;
      uVar9 = uVar6;
      uVar8 = uVar6;
      if (0x7f < uVar6) {
        do {
          pbVar3 = pbVar2 + 1;
          *pbVar2 = (byte)uVar8 | 0x80;
          uVar9 = uVar8 >> 7;
          uVar10 = uVar8 >> 0xe;
          pbVar2 = pbVar3;
          uVar8 = uVar9;
        } while (uVar10 != 0);
      }
      uVar8 = lVar7 << 1 ^ lVar7 >> 0x3f;
      pbVar4 = pbVar3 + 1;
      *pbVar3 = (byte)uVar9;
      pbVar2 = pbVar4;
      uVar9 = uVar8;
      if (0x7f < uVar8) {
        do {
          pbVar4 = pbVar2 + 1;
          *pbVar2 = (byte)uVar9 | 0x80;
          uVar8 = uVar9 >> 7;
          uVar10 = uVar9 >> 0xe;
          pbVar2 = pbVar4;
          uVar9 = uVar8;
        } while (uVar10 != 0);
      }
      lVar5 = lVar5 + 1;
      pbVar2 = pbVar4 + 1;
      *pbVar4 = (byte)uVar8;
    } while (lVar5 != lVar1);
    *(byte **)(unaff_x20 + 8) = pbVar2;
  }
  return;
}



/* Entry: 0013cd10; end: 0013cd6f;  */

void FUN_0013cd10(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined4 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x38))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 0013cd70; end: 0013cd83;  */

void FUN_0013cd70(void)

{
  FUN_0013cd84();
  return;
}



/* Entry: 0013cd84; end: 0013ce1b;  */

void FUN_0013cd84(long param_1,int param_2)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    lVar5 = 0;
    pbVar2 = *(byte **)(unaff_x20 + 8);
    uVar6 = (ulong)(uint)(param_2 << 3);
    do {
      lVar7 = *(long *)(param_1 + 0x20 + lVar5 * 8);
      pbVar3 = pbVar2;
      uVar9 = uVar6;
      uVar8 = uVar6;
      if (0x7f < uVar6) {
        do {
          pbVar3 = pbVar2 + 1;
          *pbVar2 = (byte)uVar8 | 0x80;
          uVar9 = uVar8 >> 7;
          uVar10 = uVar8 >> 0xe;
          pbVar2 = pbVar3;
          uVar8 = uVar9;
        } while (uVar10 != 0);
      }
      uVar8 = lVar7 << 1 ^ lVar7 >> 0x3f;
      pbVar4 = pbVar3 + 1;
      *pbVar3 = (byte)uVar9;
      pbVar2 = pbVar4;
      uVar9 = uVar8;
      if (0x7f < uVar8) {
        do {
          pbVar4 = pbVar2 + 1;
          *pbVar2 = (byte)uVar9 | 0x80;
          uVar8 = uVar9 >> 7;
          uVar10 = uVar9 >> 0xe;
          pbVar2 = pbVar4;
          uVar9 = uVar8;
        } while (uVar10 != 0);
      }
      lVar5 = lVar5 + 1;
      pbVar2 = pbVar4 + 1;
      *pbVar4 = (byte)uVar8;
    } while (lVar5 != lVar1);
    *(byte **)(unaff_x20 + 8) = pbVar2;
  }
  return;
}



/* Entry: 0013ce1c; end: 0013ce7b;  */

void FUN_0013ce1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined8 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x40))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 0013ce7c; end: 0013ce8f;  */

void FUN_0013ce7c(void)

{
  FUN_0013cf64();
  return;
}



/* Entry: 0013ce90; end: 0013ceef;  */

void FUN_0013ce90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined4 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x48))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 0013cef0; end: 0013cf03;  */

void FUN_0013cef0(void)

{
  FUN_0013d038();
  return;
}



/* Entry: 0013cf04; end: 0013cf63;  */

void FUN_0013cf04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined8 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x50))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 0013cf64; end: 0013cfd7;  */

void FUN_0013cf64(long param_1,uint param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    lVar6 = 0;
    pbVar4 = *(byte **)(unaff_x20 + 8);
    uVar1 = ((ulong)param_2 & 0x1fffffff) << 3 | 5;
    do {
      uVar2 = *(undefined4 *)(param_1 + 0x20 + lVar6 * 4);
      pbVar5 = pbVar4;
      uVar7 = uVar1;
      uVar8 = uVar1;
      if (0x7f < param_2 << 3) {
        do {
          pbVar5 = pbVar4 + 1;
          *pbVar4 = (byte)uVar7 | 0x80;
          uVar8 = uVar7 >> 7;
          uVar9 = uVar7 >> 0xe;
          pbVar4 = pbVar5;
          uVar7 = uVar8;
        } while (uVar9 != 0);
      }
      lVar6 = lVar6 + 1;
      *pbVar5 = (byte)uVar8;
      *(undefined4 *)(pbVar5 + 1) = uVar2;
      pbVar4 = pbVar5 + 5;
    } while (lVar6 != lVar3);
    *(byte **)(unaff_x20 + 8) = pbVar4;
  }
  return;
}



/* Entry: 0013cfd8; end: 0013d037;  */

void FUN_0013cfd8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined4 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x58))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 0013d038; end: 0013d0ab;  */

void FUN_0013d038(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar5 = 0;
    pbVar3 = *(byte **)(unaff_x20 + 8);
    uVar1 = ((ulong)param_2 & 0x1fffffff) << 3 | 1;
    do {
      uVar6 = *(undefined8 *)(param_1 + 0x20 + lVar5 * 8);
      pbVar4 = pbVar3;
      uVar7 = uVar1;
      uVar8 = uVar1;
      if (0x7f < param_2 << 3) {
        do {
          pbVar4 = pbVar3 + 1;
          *pbVar3 = (byte)uVar7 | 0x80;
          uVar8 = uVar7 >> 7;
          uVar9 = uVar7 >> 0xe;
          pbVar3 = pbVar4;
          uVar7 = uVar8;
        } while (uVar9 != 0);
      }
      lVar5 = lVar5 + 1;
      *pbVar4 = (byte)uVar8;
      *(undefined8 *)(pbVar4 + 1) = uVar6;
      pbVar3 = pbVar4 + 9;
    } while (lVar5 != lVar2);
    *(byte **)(unaff_x20 + 8) = pbVar3;
  }
  return;
}



/* Entry: 0013d0ac; end: 0013d10b;  */

void FUN_0013d0ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined8 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x60))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}



/* Entry: 0013d10c; end: 0013d11f;  */

void FUN_0013d10c(void)

{
  FUN_0013d120();
  return;
}



/* Entry: 0013d120; end: 0013d18b;  */

void FUN_0013d120(long param_1,int param_2)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar5 = 0;
    pbVar3 = *(byte **)(unaff_x20 + 8);
    uVar6 = (ulong)(uint)(param_2 << 3);
    do {
      bVar1 = *(byte *)(param_1 + 0x20 + lVar5);
      pbVar4 = pbVar3;
      uVar7 = uVar6;
      uVar8 = uVar6;
      if (0x7f < uVar6) {
        do {
          pbVar4 = pbVar3 + 1;
          *pbVar3 = (byte)uVar7 | 0x80;
          uVar8 = uVar7 >> 7;
          uVar9 = uVar7 >> 0xe;
          pbVar3 = pbVar4;
          uVar7 = uVar8;
        } while (uVar9 != 0);
      }
      lVar5 = lVar5 + 1;
      *pbVar4 = (byte)uVar8;
      pbVar4[1] = bVar1;
      pbVar3 = pbVar4 + 2;
    } while (lVar5 != lVar2);
    *(byte **)(unaff_x20 + 8) = pbVar3;
  }
  return;
}


