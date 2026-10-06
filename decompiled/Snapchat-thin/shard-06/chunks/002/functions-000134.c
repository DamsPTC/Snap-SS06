/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10455ffe4; end: 10456001f;  */

long FUN_10455ffe4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2 || param_1[1] != param_2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 0;
}



/* Entry: 104560020; end: 10456004b;  */

void FUN_104560020(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x170))(param_1,param_3,param_4);
  return;
}



/* Entry: 10456004c; end: 104560077;  */

void FUN_10456004c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x178))(param_1,param_3,param_4);
  return;
}



/* Entry: 104560078; end: 1045600a3;  */

void FUN_104560078(void)

{
  long in_x5;
  
  (**(code **)(in_x5 + 0x78))();
  return;
}



/* Entry: 1045600a4; end: 1045600cf;  */

void FUN_1045600a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  (**(code **)(param_5 + 0x108))(param_1,param_2,param_4,param_5);
  return;
}



/* Entry: 1045600d0; end: 1045600ef;  */

void FUN_1045600d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_104560188(param_3,param_4,param_5);
  return;
}



/* Entry: 1045600f0; end: 1045600ff;  */

void FUN_1045600f0(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  return;
}



/* Entry: 104560100; end: 104560187;  */

void FUN_104560100(void)

{
  FUN_104560020();
  return;
}



/* Entry: 104560188; end: 10456023b;  */

void FUN_104560188(void)

{
  return;
}



/* Entry: 10456023c; end: 10456027b;  */

void FUN_10456023c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113085c08 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s10Foundation4DataVSHAAMc_110350af0;
  _swift_getWitnessTable
            (PTR___s10Foundation4DataVSHAAMc_110350af0,PTR___s10Foundation4DataVN_110350ae0);
  puRam0000000113085c08 = puVar1;
  return;
}



/* Entry: 10456027c; end: 10456029f;  */

void FUN_10456027c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1045602a0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1045602a0; end: 1045602df;  */

void FUN_1045602a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113085c58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dd17ca0;
  _swift_getWitnessTable(&DAT_10dd17ca0,&UNK_110787fb8);
  puRam0000000113085c58 = puVar1;
  return;
}



/* Entry: 1045602e0; end: 10456042b;  */

undefined1  [16] FUN_1045602e0(void)

{
  return ZEXT816(0x110787df8);
}



/* Entry: 10456042c; end: 104560627;  */

void FUN_10456042c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  long unaff_x21;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_68;
  undefined1 auStack_58 [24];
  
  lVar4 = param_1;
  FUN_1045ab5a4();
  if ((*(char **)(param_1 + 0x28) == *(char **)(param_1 + 0x30)) ||
     (**(char **)(param_1 + 0x28) != '[')) {
    uVar1 = *(ulong *)(unaff_x20 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *(long *)(unaff_x20 + 0x10);
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      FUN_1045400a4(0);
      _swift_allocObject();
      FUN_10453c584(lVar4,uVar3);
      *(long *)(unaff_x20 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x10,auStack_58,1,0);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined8 *)(lVar4 + 0x18) = 0xe000000000000000;
    _swift_bridgeObjectRelease(uVar3);
    uVar1 = *(ulong *)(unaff_x20 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *(long *)(unaff_x20 + 0x10);
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      FUN_1045400a4(0);
      _swift_allocObject();
      FUN_10453c584(lVar4,uVar3);
      *(long *)(unaff_x20 + 0x10) = lVar4;
    }
    uStack_88 = 0xc000000000000000;
    uStack_90 = 0;
    uStack_68 = 0;
    _swift_beginAccess(lVar4 + 0x20,auStack_a8,0x21,0);
    FUN_104540644(&uStack_90,lVar4 + 0x20);
    _swift_endAccess(auStack_a8);
    uVar1 = *(ulong *)(unaff_x20 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      FUN_1045400a4(0);
      _swift_allocObject();
      FUN_10453c584(uVar3,uVar2);
      *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
    }
    FUN_104560c28();
  }
  else {
    FUN_1045ac3dc();
    if (unaff_x21 == 0) {
      uVar1 = *(ulong *)(unaff_x20 + 0x10);
      _swift_isUniquelyReferenced_nonNull_native();
      uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
      if ((uVar1 & 1) == 0) {
        uVar2 = 0;
        FUN_1045400a4(0);
        _swift_allocObject();
        FUN_10453c584(uVar3,uVar2);
        *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
      }
      FUN_10453d13c(lVar4,param_2,param_1);
      _swift_bridgeObjectRelease(param_2);
    }
  }
  return;
}



/* Entry: 104560628; end: 1045607fb;  */

void FUN_104560628(long param_1,ulong param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [40];
  undefined1 uStack_70;
  undefined1 auStack_68 [24];
  
  if ((param_2 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + 0x18);
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x0001000a8868(param_1,uVar2);
    (**(code **)(lVar3 + 0x20))(uVar2,lVar3);
    if ((uVar2 & 1) == 0) {
      _swift_bridgeObjectRelease();
      FUN_1045404d4();
      _swift_allocError(&UNK_110786978,param_4,0,0);
      *param_4 = 1;
      _swift_willThrow();
      func_0x0001000834e4(param_1);
      return;
    }
  }
  if (lRam0000000113084b48 != -1) {
    _swift_once(0x113084b48,FUN_10453c544);
  }
  uVar2 = uRam0000000113813dd0;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar5);
  _swift_retain(uVar2);
  FUN_104561f60(lVar3,param_3,param_4,uVar5,uVar1);
  _swift_bridgeObjectRelease(param_4);
  uVar4 = uVar2;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    FUN_1045400a4(0);
    _swift_allocObject();
    FUN_10453c584(uVar2,uVar5);
  }
  _swift_beginAccess(uVar2 + 0x10,auStack_68,1,0);
  uVar5 = *(undefined8 *)(uVar2 + 0x18);
  *(long *)(uVar2 + 0x10) = lVar3;
  *(undefined8 *)(uVar2 + 0x18) = param_3;
  _swift_bridgeObjectRelease(uVar5);
  FUN_104560f98(param_1,auStack_98);
  uStack_70 = 1;
  _swift_beginAccess(uVar2 + 0x20,auStack_b0,0x21,0);
  FUN_104540644(auStack_98,uVar2 + 0x20);
  _swift_endAccess(auStack_b0);
  func_0x0001000834e4(param_1);
  return;
}



/* Entry: 1045607fc; end: 104560893;  */

void FUN_1045607fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  undefined1 auStack_58 [40];
  
  func_0x000104540540(param_3,auStack_58);
  FUN_104560fdc(param_1,param_2,100,0,auStack_58);
  if (unaff_x21 == 0) {
    func_0x000100ee9068(param_3);
  }
  else {
    func_0x000100ee9068(param_3);
  }
  return;
}



/* Entry: 104560894; end: 1045608bf;  */

undefined8 FUN_104560894(undefined8 param_1)

{
  undefined8 extraout_x8;
  long unaff_x21;
  
  FUN_104560fdc();
  if (unaff_x21 != 0) {
    param_1 = extraout_x8;
  }
  return param_1;
}



/* Entry: 1045608c0; end: 104560ae7;  */

void FUN_1045608c0(byte *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  byte *pbVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long unaff_x21;
  byte *pbVar12;
  undefined1 auStack_110 [40];
  byte *pbStack_e8;
  byte *pbStack_e0;
  long lStack_d8;
  long lStack_d0;
  byte bStack_c8;
  byte bStack_c7;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  byte *pbStack_70;
  
  puVar11 = auStack_110;
  if ((param_1 != (byte *)0x0) && (param_2 - (long)param_1 != 0)) {
    pbVar8 = param_1;
    func_0x0001039f7488();
    uStack_b8 = 0;
    lVar9 = 0;
    func_0x000104557570();
    _swift_allocObject();
    uVar10 = 0x80;
    _swift_slowAlloc(0x80,0xffffffffffffffff);
    *(undefined8 *)(lVar9 + 0x10) = uVar10;
    *(undefined8 *)(lVar9 + 0x18) = 0x80;
    pbVar1 = param_1 + (param_2 - (long)param_1);
    pbStack_e8 = param_1;
    pbStack_e0 = pbVar1;
    lStack_d8 = lVar9;
    func_0x000104540540(param_5,auStack_110);
    bStack_c8 = (byte)param_4 & 1;
    bStack_c7 = (byte)((ulong)param_4 >> 8) & 1;
    lStack_c0 = param_3 + -1;
    lStack_d0 = param_3;
    if (SBORROW8(param_3,1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x104560acc);
      (*pcVar7)();
    }
    do {
      bVar2 = *param_1;
      if (0x23 < bVar2) break;
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar2 != 0x23) break;
        pbVar12 = param_1 + 1;
        do {
          pbStack_e8 = pbVar1;
          if (pbVar12 == pbVar1) goto LAB_1045609dc;
          param_1 = pbVar12 + 1;
          bVar2 = *pbVar12;
          pbVar12 = param_1;
        } while (bVar2 != 10 && bVar2 != 0xd);
      }
      else {
        param_1 = param_1 + 1;
      }
      pbStack_e8 = param_1;
    } while (param_1 != pbVar1);
LAB_1045609dc:
    if (lRam0000000113087798 != -1) {
      _swift_once(0x113087798,FUN_1045b2e9c);
    }
    uVar6 = uRam0000000113813e18;
    uVar5 = uRam0000000113813e10;
    uVar4 = uRam0000000113813e08;
    uVar3 = uRam0000000113813e00;
    uVar10 = uRam0000000113813df8;
    uStack_a8 = uRam0000000113813df0;
    uStack_a0 = uRam0000000113813df8;
    uStack_98 = uRam0000000113813e00;
    uStack_90 = uRam0000000113813e08;
    uStack_88 = uRam0000000113813e10;
    uStack_80 = uRam0000000113813e18;
    puStack_78 = &UNK_11078ace8;
    uStack_b0 = 0x100;
    pbStack_70 = pbVar8;
    _swift_retain();
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    FUN_10456042c();
    if ((unaff_x21 == 0) && (pbStack_e8 != pbStack_e0)) {
      FUN_1045407b0();
      _swift_allocError(&UNK_11078a540,puVar11,0,0);
      *puVar11 = 2;
      _swift_willThrow();
    }
    func_0x000104540860(auStack_110);
  }
  return;
}



/* Entry: 104560ae8; end: 104560b13;  */

uint FUN_104560ae8(undefined8 param_1)

{
  undefined8 in_x4;
  undefined8 in_x5;
  
  func_0x00010453c66c(param_1,in_x4,in_x5);
  return (uint)param_1 & 1;
}



/* Entry: 104560b14; end: 104560b8f;  */

void FUN_104560b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_4 + 0x10,auStack_48,0,0);
  uVar2 = *(ulong *)(param_4 + 0x10);
  uVar3 = *(ulong *)(param_4 + 0x18);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    _swift_bridgeObjectRetain(uVar3);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar3);
    _swift_bridgeObjectRelease(uVar3);
  }
  return;
}



/* Entry: 104560b90; end: 104560bb3;  */

void FUN_104560b90(uint param_1)

{
  FUN_10453df3c(param_1 & 0x1010101);
  return;
}



/* Entry: 104560bb4; end: 104560c27;  */

void FUN_104560bb4(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1045400a4(0);
    _swift_allocObject();
    FUN_10453c584(uVar3,uVar2);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  }
  FUN_10453eaf0(param_1);
  return;
}



/* Entry: 104560c28; end: 104560f8f;  */

void FUN_104560c28(long param_1,long param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  long unaff_x21;
  long lVar13;
  undefined1 auStack_d8 [24];
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
LAB_104560c5c:
  lVar13 = *(long *)(param_2 + 0x58);
  do {
    if (((0 < lVar13) && (pcVar1 = *(char **)(param_2 + 0x28), pcVar1 != *(char **)(param_2 + 0x30))
        ) && ((*pcVar1 == ';' || (*pcVar1 == ',')))) {
      *(char **)(param_2 + 0x28) = pcVar1 + 1;
      FUN_1045ab5a4();
    }
    uStack_88 = *(undefined8 *)(param_2 + 0x70);
    uStack_90 = *(undefined8 *)(param_2 + 0x68);
    uStack_78 = *(undefined8 *)(param_2 + 0x80);
    uStack_80 = *(undefined8 *)(param_2 + 0x78);
    uStack_68 = *(undefined8 *)(param_2 + 0x90);
    uStack_70 = *(undefined8 *)(param_2 + 0x88);
    uVar12 = *(undefined8 *)(param_2 + 0x98);
    puVar5 = &uStack_90;
    FUN_1045a89a8(puVar5,uVar12,*(undefined8 *)(param_2 + 0xa0),*(undefined2 *)(param_2 + 0x60));
    if (unaff_x21 != 0) {
      return;
    }
    if (((uint)uVar12 & 0xff) == 1) {
      return;
    }
    if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104560f90);
      (*pcVar4)();
    }
    *(long *)(param_2 + 0x58) = lVar13 + 1;
    if (puVar5 == (undefined8 *)0x1) {
      puVar6 = (undefined1 *)(param_1 + 0x10);
      ppuVar8 = &puStack_c0;
      _swift_beginAccess(puVar6,ppuVar8,0x21,0);
      FUN_1045ab5a4();
      pcVar1 = *(char **)(param_2 + 0x28);
      if ((pcVar1 == *(char **)(param_2 + 0x30)) || (*pcVar1 != ':')) {
        FUN_1045407b0();
        _swift_allocError(&UNK_11078a540,puVar6,0,0);
        *puVar6 = 0;
        _swift_willThrow();
        _swift_endAccess(&puStack_c0);
        return;
      }
      *(char **)(param_2 + 0x28) = pcVar1 + 1;
      FUN_1045ab5a4();
      FUN_1045a9544();
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      *(undefined1 **)(param_1 + 0x10) = puVar6;
      *(undefined8 ***)(param_1 + 0x18) = ppuVar8;
      _swift_endAccess(&puStack_c0);
      _swift_bridgeObjectRelease(uVar12);
      goto LAB_104560c5c;
    }
    lVar13 = lVar13 + 1;
  } while (puVar5 != (undefined8 *)0x2);
  FUN_10453c000();
  pbVar11 = *(byte **)(param_2 + 0x28);
  pbVar2 = *(byte **)(param_2 + 0x30);
  do {
    if ((pbVar11 == pbVar2) || (bVar3 = *pbVar11, 0x23 < bVar3)) goto LAB_104560d84;
    if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar3 != 0x23) {
LAB_104560d84:
        if ((pbVar11 == pbVar2) || (*pbVar11 != 0x3a)) {
          puVar7 = puVar5;
          FUN_1045407b0();
          _swift_allocError(&UNK_11078a540,puVar7,0,0);
          *(undefined1 *)puVar7 = 0;
          _swift_willThrow();
          uStack_98 = 0;
          puStack_c0 = puVar5;
          uStack_b8 = uVar12;
          _swift_beginAccess(param_1 + 0x20,auStack_d8,0x21,0);
          FUN_104540644(&puStack_c0,param_1 + 0x20);
          _swift_endAccess(auStack_d8);
          return;
        }
        do {
          pbVar11 = pbVar11 + 1;
LAB_104560d9c:
          *(byte **)(param_2 + 0x28) = pbVar11;
          if ((pbVar11 == pbVar2) || (bVar3 = *pbVar11, 0x23 < bVar3)) {
LAB_104560e74:
            puVar7 = puVar5;
            uVar9 = uVar12;
            FUN_1045a9728();
            func_0x00010006c090(puVar5,uVar12);
            uStack_98 = 0;
            puStack_c0 = puVar7;
            uStack_b8 = uVar9;
            _swift_beginAccess(param_1 + 0x20,auStack_d8,0x21,0);
            FUN_104540644(&puStack_c0,param_1 + 0x20);
            _swift_endAccess(auStack_d8);
            goto LAB_104560c5c;
          }
        } while ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) != 0);
        if ((ulong)bVar3 != 0x23) goto LAB_104560e74;
        *(byte **)(param_2 + 0x28) = pbVar11 + 1;
        pbVar10 = pbVar11 + 1;
        while (pbVar11 = pbVar2, pbVar10 != pbVar2) {
          pbVar11 = pbVar10 + 1;
          bVar3 = *pbVar10;
          if ((bVar3 == 10) || (pbVar10 = pbVar11, bVar3 == 0xd)) break;
        }
        goto LAB_104560d9c;
      }
      *(byte **)(param_2 + 0x28) = pbVar11 + 1;
      pbVar10 = pbVar11 + 1;
      do {
        if (pbVar10 == pbVar2) {
          *(byte **)(param_2 + 0x28) = pbVar2;
          pbVar11 = pbVar2;
          goto LAB_104560d84;
        }
        pbVar11 = pbVar10 + 1;
        bVar3 = *pbVar10;
        pbVar10 = pbVar11;
      } while (bVar3 != 10 && bVar3 != 0xd);
    }
    else {
      pbVar11 = pbVar11 + 1;
    }
    *(byte **)(param_2 + 0x28) = pbVar11;
  } while( true );
}



/* Entry: 104560f90; end: 104560f97;  */

void FUN_104560f90(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar4 + 0x10,auStack_48,0,0);
  uVar2 = *(ulong *)(lVar4 + 0x10);
  uVar3 = *(ulong *)(lVar4 + 0x18);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    _swift_bridgeObjectRetain(uVar3);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar3);
    _swift_bridgeObjectRelease(uVar3);
  }
  return;
}



/* Entry: 104560f98; end: 104560fdb;  */

long FUN_104560f98(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 104560fdc; end: 104561393;  */

undefined8
FUN_104560fdc(ulong param_1,undefined1 *param_2,undefined8 param_3,uint param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  long extraout_x8;
  long unaff_x21;
  long lVar13;
  long alStack_d0 [6];
  undefined1 auStack_a0 [4];
  uint uStack_9c;
  undefined8 uStack_98;
  undefined1 auStack_90 [14];
  undefined2 uStack_82;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar13 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_a0 + lVar2;
  uStack_78 = 0xc000000000000000;
  uStack_80 = 0;
  if (lRam0000000113084b48 != -1) {
    _swift_once(0x113084b48,FUN_10453c544);
  }
  uStack_70 = uRam0000000113813dd0;
  uVar9 = param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar9 = (ulong)param_2 >> 0x38 & 0xf;
  }
  if (uVar9 == 0) {
    _swift_retain();
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    auStack_90[0] = (undefined1)param_1;
    auStack_90[1] = (undefined1)(param_1 >> 8);
    auStack_90[2] = (undefined1)(param_1 >> 0x10);
    auStack_90[3] = (undefined1)(param_1 >> 0x18);
    auStack_90[4] = (undefined1)(param_1 >> 0x20);
    auStack_90[5] = (undefined1)(param_1 >> 0x28);
    auStack_90[6] = (undefined1)(param_1 >> 0x30);
    auStack_90[7] = (undefined1)(param_1 >> 0x38);
    auStack_90[8] = SUB81(param_2,0);
    auStack_90[9] = (undefined1)((ulong)param_2 >> 8);
    auStack_90[10] = (undefined1)((ulong)param_2 >> 0x10);
    auStack_90[0xb] = (undefined1)((ulong)param_2 >> 0x18);
    auStack_90[0xc] = (undefined1)((ulong)param_2 >> 0x20);
    auStack_90[0xd] = (undefined1)((ulong)param_2 >> 0x28);
    uStack_82 = (undefined2)((ulong)param_2 >> 0x30);
    uVar6 = uRam0000000113813dd0;
    uStack_9c = param_4;
    uStack_98 = param_3;
    _swift_retain();
    __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar10);
    func_0x000100e8b654();
    uVar9 = 0;
    puVar7 = puVar10;
    __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
              (puVar10,0,PTR___sSSN_11034da80,uVar6);
    (**(code **)(lVar13 + 8))(puVar10,lVar5);
    _swift_bridgeObjectRelease();
    if (uVar9 >> 0x3c < 0xf) {
      uVar3 = (uint)(uVar9 >> 0x20);
      uVar12 = uVar3 >> 0x1e;
      if (uVar3 >> 0x1e < 2) {
        if (uVar12 == 0) {
          auStack_90[0] = SUB81(puVar7,0);
          auStack_90[1] = (undefined1)((ulong)puVar7 >> 8);
          auStack_90[2] = (undefined1)((ulong)puVar7 >> 0x10);
          auStack_90[3] = (undefined1)((ulong)puVar7 >> 0x18);
          auStack_90[4] = (undefined1)((ulong)puVar7 >> 0x20);
          auStack_90[5] = (undefined1)((ulong)puVar7 >> 0x28);
          auStack_90[6] = (undefined1)((ulong)puVar7 >> 0x30);
          auStack_90[7] = (undefined1)((ulong)puVar7 >> 0x38);
          auStack_90[8] = (undefined1)uVar9;
          auStack_90[9] = (undefined1)(uVar9 >> 8);
          auStack_90[10] = (undefined1)(uVar9 >> 0x10);
          auStack_90[0xb] = (undefined1)(uVar9 >> 0x18);
          auStack_90[0xc] = (undefined1)(uVar9 >> 0x20);
          auStack_90[0xd] = (undefined1)(uVar9 >> 0x28);
          puVar10 = auStack_90 + (uVar9 >> 0x30 & 0xff);
          param_2 = auStack_90;
        }
        else {
          lVar5 = (long)(int)puVar7;
          puVar1 = (undefined1 *)(((long)puVar7 >> 0x20) - lVar5);
          if ((long)puVar7 >> 0x20 < lVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x104561384);
            (*pcVar4)();
          }
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          if (param_2 == (undefined1 *)0x0) {
            __s10Foundation13__DataStorageC7_lengthSivg();
            param_2 = (undefined1 *)0x0;
          }
          else {
            puVar10 = param_2;
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar5,(long)puVar10)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x104561390);
              (*pcVar4)();
            }
            param_2 = param_2 + (lVar5 - (long)puVar10);
            __s10Foundation13__DataStorageC7_lengthSivg();
            if (param_2 != (undefined1 *)0x0) {
              if ((long)puVar1 <= (long)puVar10) {
                puVar10 = puVar1;
              }
              puVar10 = puVar10 + (long)param_2;
              goto LAB_1045612a4;
            }
          }
          puVar10 = (undefined1 *)0x0;
        }
      }
      else if (uVar12 == 2) {
        lVar5 = *(long *)(puVar7 + 0x10);
        lVar13 = *(long *)(puVar7 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        puVar10 = param_2;
        if (param_2 != (undefined1 *)0x0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar5,(long)puVar10)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10456138c);
            (*pcVar4)();
          }
          param_2 = param_2 + (lVar5 - (long)puVar10);
        }
        puVar1 = (undefined1 *)(lVar13 - lVar5);
        if (SBORROW8(lVar13,lVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x104561388);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (param_2 == (undefined1 *)0x0) {
          puVar10 = (undefined1 *)0x0;
        }
        else {
          if ((long)puVar1 <= (long)puVar10) {
            puVar10 = puVar1;
          }
          puVar10 = puVar10 + (long)param_2;
        }
      }
      else {
        auStack_90[8] = 0;
        auStack_90[9] = 0;
        auStack_90[10] = 0;
        auStack_90[0xb] = 0;
        auStack_90[0xc] = 0;
        auStack_90[0xd] = 0;
        auStack_90[0] = 0;
        auStack_90[1] = 0;
        auStack_90[2] = 0;
        auStack_90[3] = 0;
        auStack_90[4] = 0;
        auStack_90[5] = 0;
        auStack_90[6] = 0;
        auStack_90[7] = 0;
        param_2 = auStack_90;
        puVar10 = auStack_90;
      }
LAB_1045612a4:
      FUN_1045608c0(param_2,puVar10,uStack_98,uStack_9c & 0x101,param_5,&uStack_80);
      func_0x0001000b44c0(puVar7,uVar9);
      if (unaff_x21 != 0) {
        func_0x000100ee9068(param_5);
        uVar6 = uStack_70;
        uVar11 = uStack_78;
        func_0x00010006c090(uStack_80,uStack_78);
        uVar8 = uVar6;
        _swift_release(uVar6);
        goto LAB_104561320;
      }
    }
  }
  uVar8 = uStack_70;
  uVar11 = uStack_78;
  uVar6 = uStack_80;
  func_0x00010006c00c(uStack_80,uStack_78);
  _swift_retain(uVar8);
  func_0x000100ee9068(param_5);
  func_0x00010006c090(uVar6,uVar11);
  _swift_release(uVar8);
LAB_104561320:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    *(undefined8 *)((long)alStack_d0 + lVar2) = param_5;
    *(long *)((long)alStack_d0 + lVar2 + 8) = unaff_x21;
    *(undefined8 *)((long)alStack_d0 + lVar2 + 0x10) = uVar6;
    *(long *)((long)alStack_d0 + lVar2 + 0x18) = unaff_x21;
    *(undefined1 **)((long)alStack_d0 + lVar2 + 0x20) = &stack0xfffffffffffffff0;
    *(code **)((long)alStack_d0 + lVar2 + 0x28) = FUN_104561394;
    FUN_1045613d8();
    func_0x0001045620bc();
    _swift_bridgeObjectRelease(uVar11);
    return uVar8;
  }
  return uVar6;
}



/* Entry: 104561394; end: 1045613d7;  */

undefined1  [16] FUN_104561394(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  FUN_1045613d8();
  uVar1 = param_2;
  func_0x0001045620bc();
  _swift_bridgeObjectRelease(param_2);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1045613d8; end: 104561527;  */

undefined1  [16] FUN_1045613d8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  uVar9 = uVar1 * 4;
  if (uVar1 == 0) {
    uVar4 = 0xf;
  }
  else {
    uVar8 = 0xf;
    uVar7 = 0xf;
    do {
      while( true ) {
        uVar3 = uVar8;
        uVar5 = param_1;
        __sSSySJSS5IndexVcig(uVar8,param_1,param_2);
        __sSS5index5afterSS5IndexVAD_tF(uVar8,param_1,param_2);
        uVar4 = uVar8;
        if ((uVar3 != 0x2f) || (uVar5 != 0xe100000000000000)) break;
        _swift_bridgeObjectRelease(0xe100000000000000);
        uVar7 = uVar8;
        if (uVar9 < uVar8 >> 0xe || uVar9 - (uVar8 >> 0xe) == 0) goto LAB_1045614b0;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar3,uVar5,0x2f,0xe100000000000000,0);
      _swift_bridgeObjectRelease(uVar5);
      if ((uVar3 & 1) == 0) {
        uVar4 = uVar7;
      }
      uVar7 = uVar4;
    } while (uVar8 >> 0xe <= uVar9 && uVar9 - (uVar8 >> 0xe) != 0);
  }
LAB_1045614b0:
  if (uVar9 < uVar4 >> 0xe) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104561528);
    (*pcVar2)();
  }
  uVar6 = (uint)(param_1 >> 0x3b) & 1;
  if ((param_2 & 0x1000000000000000) == 0) {
    uVar6 = 1;
  }
  uVar9 = 7;
  if (uVar6 == 0) {
    uVar9 = 0xb;
  }
  uVar9 = uVar9 | uVar1 << 0x10;
  __sSSySsSnySS5IndexVGcig(uVar4,uVar9,param_1,param_2);
  __sSS14_fromSubstringySSSshFZ();
  _swift_bridgeObjectRelease(param_2);
  auVar10._8_8_ = uVar9;
  auVar10._0_8_ = uVar4;
  return auVar10;
}



/* Entry: 104561528; end: 10456166b;  */

void FUN_104561528(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = lVar5 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000295c4(0);
  __sSo17OS_dispatch_queueC8DispatchE10AttributesV10concurrentAEvgZ(lVar2);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar5);
  (**(code **)(lVar6 + 0x68))
            (puVar4,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lVar1);
  uVar3 = 0xd00000000000001f;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd00000000000001f,0x800000010f207f30,lVar5,lVar2,puVar4,0);
  uRam0000000113085c68 = uVar3;
  return;
}



/* Entry: 10456166c; end: 10456180b;  */

uint FUN_10456166c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  uVar4 = (uint)(param_1 >> 0x3b) & 1;
  if ((param_2 & 0x1000000000000000) == 0) {
    uVar4 = 1;
  }
  if (uVar1 == 0) {
    uVar4 = 0;
    iVar5 = 1;
    goto LAB_104561768;
  }
  uVar7 = 7;
  if (uVar4 == 0) {
    uVar7 = 0xb;
  }
  uVar6 = uVar7 | uVar1 << 0x10;
  uVar2 = 8;
  if ((param_2 & 0x1000000000000000) != 0) {
    uVar2 = 4L << ((param_1 & 0x800000000000000) >> 0x3b);
  }
  if ((uVar7 & 0xc) == uVar2) {
    func_0x000100e36e7c(uVar6,param_1,param_2);
    if (uVar6 < 0x4000) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1045617a4);
      (*pcVar3)();
    }
    if ((param_2 >> 0x3c & 1) != 0) goto LAB_1045617e0;
LAB_1045616e4:
    uVar6 = (uVar6 & 0xffffffffffff0000) - 0xfffc;
  }
  else {
    if ((param_2 >> 0x3c & 1) == 0) goto LAB_1045616e4;
LAB_1045617e0:
    if (uVar1 < uVar6 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10456180c);
      (*pcVar3)();
    }
    __sSS8UTF8ViewV13_foreignIndex6beforeSS0D0VAF_tF(uVar6,param_1,param_2);
  }
  if ((uVar6 & 0xc) == 4L << uVar4) {
    func_0x000100e36e7c(uVar6,param_1,param_2);
  }
  uVar7 = uVar6 >> 0x10;
  if (uVar1 <= uVar7) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1045617c8);
    (*pcVar3)();
  }
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if ((param_1 >> 0x3c & 1) == 0) {
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
      }
      else {
        param_1 = (param_2 & 0xfffffffffffffff) + 0x20;
      }
      iVar5 = 0;
      uVar4 = (uint)*(byte *)(param_1 + uVar7);
    }
    else {
      iVar5 = 0;
      uStack_40 = param_1;
      uStack_38 = param_2 & 0xffffffffffffff;
      uVar4 = (uint)*(byte *)((long)&uStack_40 + uVar7);
    }
  }
  else {
    __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar6,param_1,param_2);
    uVar4 = (uint)uVar6;
    iVar5 = 0;
  }
LAB_104561768:
  return uVar4 & 0xff | iVar5 << 8;
}



/* Entry: 10456180c; end: 104561843;  */

void FUN_10456180c(void)

{
  long *unaff_x20;
  
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104561844; end: 104561c23;  */

void FUN_104561844(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong auStack_270 [2];
  undefined *apuStack_260 [66];
  
  auStack_270[0] = 0xd000000000000013;
  auStack_270[1] = 0x800000010f207f50;
  func_0x0001039f7488();
  apuStack_260[0] = &UNK_11078ace8;
  apuStack_260[2] = (undefined *)0xd000000000000019;
  apuStack_260[3] = (undefined *)0x800000010f207f70;
  apuStack_260[1] = (undefined *)param_1;
  func_0x0001015fdfec();
  apuStack_260[4] = &UNK_110790c00;
  apuStack_260[6] = (undefined *)0xd00000000000001a;
  apuStack_260[7] = (undefined *)0x800000010f207f90;
  apuStack_260[5] = (undefined *)param_1;
  FUN_1045622dc();
  apuStack_260[8] = &UNK_110790d00;
  apuStack_260[10] = (undefined *)0xd00000000000001b;
  apuStack_260[0xb] = (undefined *)0x800000010f207fb0;
  apuStack_260[9] = (undefined *)param_1;
  func_0x0001015c5d3c();
  apuStack_260[0xc] = &UNK_110790900;
  apuStack_260[0xe] = (undefined *)0xd000000000000018;
  apuStack_260[0xf] = (undefined *)0x800000010f207fd0;
  apuStack_260[0xd] = (undefined *)param_1;
  func_0x000103a122ec();
  apuStack_260[0x10] = &UNK_11078ede8;
  apuStack_260[0x12] = (undefined *)0xd000000000000015;
  apuStack_260[0x13] = (undefined *)0x800000010f207ff0;
  apuStack_260[0x11] = (undefined *)param_1;
  func_0x00010456231c();
  apuStack_260[0x14] = &UNK_11078ef70;
  apuStack_260[0x16] = (undefined *)0xd000000000000019;
  apuStack_260[0x17] = (undefined *)0x800000010f208010;
  apuStack_260[0x15] = (undefined *)param_1;
  func_0x00010456235c();
  apuStack_260[0x18] = &UNK_11078f0f0;
  apuStack_260[0x1a] = (undefined *)0xd00000000000001a;
  apuStack_260[0x1b] = (undefined *)0x800000010f208030;
  apuStack_260[0x19] = (undefined *)param_1;
  func_0x00010157193c();
  apuStack_260[0x1c] = &UNK_110790980;
  apuStack_260[0x1e] = (undefined *)0xd00000000000001a;
  apuStack_260[0x1f] = (undefined *)0x800000010f208050;
  apuStack_260[0x1d] = (undefined *)param_1;
  func_0x0001015d5420();
  apuStack_260[0x20] = &UNK_110790b00;
  apuStack_260[0x22] = (undefined *)0xd00000000000001a;
  apuStack_260[0x23] = (undefined *)0x800000010f208070;
  apuStack_260[0x21] = (undefined *)param_1;
  func_0x0001015c5cfc();
  apuStack_260[0x24] = &UNK_110790a00;
  apuStack_260[0x26] = (undefined *)0xd000000000000019;
  apuStack_260[0x27] = (undefined *)0x800000010f208090;
  apuStack_260[0x25] = (undefined *)param_1;
  func_0x00010456239c();
  apuStack_260[0x28] = &UNK_11078f790;
  apuStack_260[0x2a] = (undefined *)0xd00000000000001b;
  apuStack_260[0x2b] = (undefined *)0x800000010f2080b0;
  apuStack_260[0x29] = (undefined *)param_1;
  func_0x000101568c04();
  apuStack_260[0x2c] = &UNK_110790c80;
  apuStack_260[0x2e] = (undefined *)0xd000000000000016;
  apuStack_260[0x2f] = (undefined *)0x800000010f2080d0;
  apuStack_260[0x2d] = (undefined *)param_1;
  func_0x0001045623dc();
  apuStack_260[0x30] = &UNK_11078f600;
  apuStack_260[0x32] = (undefined *)0xd000000000000019;
  apuStack_260[0x33] = (undefined *)0x800000010f2080f0;
  apuStack_260[0x31] = (undefined *)param_1;
  func_0x0001015efcec();
  apuStack_260[0x34] = &UNK_11078f958;
  apuStack_260[0x36] = (undefined *)0xd00000000000001b;
  apuStack_260[0x37] = (undefined *)0x800000010f208110;
  apuStack_260[0x35] = (undefined *)param_1;
  func_0x000103524e74();
  apuStack_260[0x38] = &UNK_110790b80;
  apuStack_260[0x3a] = (undefined *)0xd00000000000001b;
  apuStack_260[0x3b] = (undefined *)0x800000010f208130;
  apuStack_260[0x39] = (undefined *)param_1;
  func_0x0001035ecb2c();
  apuStack_260[0x3c] = &UNK_110790a80;
  apuStack_260[0x3e] = (undefined *)0xd000000000000015;
  apuStack_260[0x3f] = (undefined *)0x800000010f208150;
  apuStack_260[0x3d] = (undefined *)param_1;
  func_0x00010456241c();
  apuStack_260[0x40] = &UNK_11078f680;
  apuStack_260[0x41] = (undefined *)param_1;
  func_0x0001000285a8(0x113085d30,&UNK_10dd17e68);
  lVar6 = 0x11;
  __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
  _swift_retain();
  lVar9 = 0;
  while( true ) {
    uVar2 = *(ulong *)((long)auStack_270 + lVar9);
    uVar3 = *(ulong *)((long)auStack_270 + lVar9 + 8);
    uVar11 = *(undefined8 *)((long)apuStack_260 + lVar9 + 8);
    uVar10 = *(undefined8 *)((long)apuStack_260 + lVar9);
    _swift_bridgeObjectRetain(uVar3);
    uVar7 = uVar2;
    uVar8 = uVar3;
    func_0x000100029284();
    if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x104561c20);
      (*pcVar5)();
    }
    uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar6 + 0x40 + uVar8) = *(ulong *)(lVar6 + 0x40 + uVar8) | 1L << (uVar7 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar7 * 0x10);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar4 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar7 * 0x10);
    puVar4[1] = uVar11;
    *puVar4 = uVar10;
    if (SCARRY8(*(long *)(lVar6 + 0x10),1)) break;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar9 = lVar9 + 0x20;
    if (lVar9 == 0x220) {
      _swift_release(lVar6);
      uVar10 = 0x113085d38;
      func_0x0001000285a8(0x113085d38,&UNK_10dd17e70);
      _swift_arrayDestroy(auStack_270,0x11,uVar10);
      lVar9 = 0x113085d40;
      func_0x0001000285a8(0x113085d40,&UNK_10dd17e78);
      _swift_allocObject();
      *(long *)(lVar9 + 0x10) = lVar6;
      lRam0000000113085cf8 = lVar9;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x104561c24);
  (*pcVar5)();
}



/* Entry: 104561c24; end: 104561d43;  */

undefined1 FUN_104561c24(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  code *pcStack_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_41;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar2 = param_1;
  lVar3 = param_2;
  (**(code **)(param_2 + 0x18))();
  uStack_41 = 0;
  puStack_60 = &uStack_41;
  uStack_70 = uVar2;
  lStack_68 = lVar3;
  uStack_58 = param_1;
  lStack_50 = param_2;
  if (lRam0000000113085c60 != -1) {
    _swift_once(0x113085c60,FUN_104561528);
  }
  __s8Dispatch0A13WorkItemFlagsV7barrierACvgZ(puVar4);
  puStack_88 = auStack_80;
  pcStack_90 = FUN_104562224;
  __sSo17OS_dispatch_queueC8DispatchE4sync5flags7executexAC0D13WorkItemFlagsV_xyKXEtKlF
            (puVar4,FUN_104562234,auStack_a0,PTR___sytN_11034f1b0 + 8);
  _swift_bridgeObjectRelease(lVar3);
  (**(code **)(lVar5 + 8))(puVar4,lVar1);
  return uStack_41;
}



/* Entry: 104561d44; end: 104561e8f;  */

void FUN_104561d44(long param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  if (lRam0000000113085cf0 != -1) {
    _swift_once(0x113085cf0,FUN_104561844);
  }
  lVar7 = lRam0000000113085cf8;
  _swift_beginAccess(lRam0000000113085cf8 + 0x10,auStack_68,0x20,0);
  lVar6 = *(long *)(lVar7 + 0x10);
  if (*(long *)(lVar6 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar6);
    lVar2 = param_1;
    uVar4 = param_2;
    func_0x000100029284();
    if ((uVar4 & 1) != 0) {
      lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + lVar2 * 0x10);
      _swift_endAccess(auStack_68);
      _swift_bridgeObjectRelease(lVar6);
      bVar1 = lVar7 == param_4;
      goto LAB_104561e58;
    }
    _swift_bridgeObjectRelease(lVar6);
  }
  _swift_endAccess(auStack_68);
  _swift_beginAccess(lVar7 + 0x10,auStack_68,0x21,0);
  uVar3 = *(undefined8 *)(lVar7 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native(uVar3);
  uVar5 = *(undefined8 *)(lVar7 + 0x10);
  *(undefined8 *)(lVar7 + 0x10) = 0x8000000000000000;
  FUN_104568334(param_4,param_5,param_1,param_2,uVar3);
  *(undefined8 *)(lVar7 + 0x10) = uVar5;
  _swift_endAccess(auStack_68);
  bVar1 = true;
LAB_104561e58:
  *(bool *)param_3 = bVar1;
  return;
}



/* Entry: 104561e90; end: 104561e93;  */

undefined1  [16] FUN_104561e90(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [16];
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar6 = &puStack_b0;
  uStack_50 = 0;
  uStack_48 = 0;
  puStack_70 = &uStack_50;
  uStack_68 = param_1;
  uStack_60 = param_2;
  if (lRam0000000113085c60 != -1) {
    _swift_once(0x113085c60,FUN_104561528);
  }
  uVar2 = uRam0000000113085c68;
  puVar4 = &UNK_1107880d0;
  _swift_allocObject(&UNK_1107880d0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10456245c;
  *(undefined1 **)(puVar4 + 0x18) = auStack_80;
  puVar5 = &UNK_1107880f8;
  _swift_allocObject(&UNK_1107880f8,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_104562468;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  uStack_90 = 0x104562488;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_10006eb60;
  puStack_98 = &UNK_110788110;
  puStack_88 = puVar5;
  __Block_copy(&puStack_b0);
  puVar7 = puStack_88;
  _swift_retain(puVar5);
  _swift_release(puVar7);
  func_0x00010006eaa4(uVar2,ppuVar6);
  __Block_release(ppuVar6);
  puVar7 = puVar5;
  _swift_isEscapingClosureAtFileLocation(puVar5,"",0x69,0xab,0x1e,1);
  _swift_release(puVar5);
  _swift_release(puVar4);
  if (((ulong)puVar7 & 1) == 0) {
    auVar1._8_8_ = uStack_48;
    auVar1._0_8_ = uStack_50;
    return auVar1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104562224);
  (*pcVar3)();
}



/* Entry: 104561e94; end: 104561f5f;  */

void FUN_104561e94(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  if (lRam0000000113085cf0 != -1) {
    _swift_once(0x113085cf0,FUN_104561844);
  }
  lVar2 = lRam0000000113085cf8;
  _swift_beginAccess(lRam0000000113085cf8 + 0x10,auStack_48,0x20,0);
  lVar2 = *(long *)(lVar2 + 0x10);
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(long *)(lVar2 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar2);
    func_0x000100029284();
    if ((param_3 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x38) + param_2 * 0x10);
      uStack_58 = puVar1[1];
      uStack_60 = *puVar1;
    }
    _swift_bridgeObjectRelease(lVar2);
  }
  _swift_endAccess(auStack_48);
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  return;
}



/* Entry: 104561f60; end: 104562223;  */

undefined1  [16]
FUN_104561f60(undefined8 param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_68 [24];
  long lStack_50;
  long lStack_48;
  
  lStack_50 = param_4;
  lStack_48 = param_5;
  func_0x0001000c5db4(auStack_68);
  (**(code **)(*(long *)(param_4 + -8) + 0x10))();
  uVar2 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar2 = param_3 >> 0x38 & 0xf;
  }
  _swift_bridgeObjectRetain(param_3);
  if ((uVar2 != 0) && (uVar2 = param_2, uVar4 = param_3, func_0x000101e25f60(), uVar4 != 0)) {
    if ((uVar2 == 0x2f) && (uVar4 == 0xe100000000000000)) {
      _swift_bridgeObjectRelease(0xe100000000000000);
      goto LAB_104562030;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(uVar4);
    if ((uVar2 & 1) != 0) goto LAB_104562030;
  }
  __sSS6appendyySSF(0x2f,0xe100000000000000);
LAB_104562030:
  puVar3 = auStack_68;
  func_0x0001000a8868(puVar3,lStack_50);
  _swift_getDynamicType();
  lVar5 = lStack_48;
  (**(code **)(lStack_48 + 0x18))();
  _swift_bridgeObjectRetain(param_3);
  __sSS6appendyySSF(puVar3,lVar5);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(lVar5);
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  func_0x0001000834e4(auStack_68);
  return auVar1;
}



/* Entry: 104562224; end: 104562233;  */

void FUN_104562224(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  undefined1 auStack_68 [24];
  
  lVar12 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(ulong *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  if (lRam0000000113085cf0 != -1) {
    _swift_once(0x113085cf0,FUN_104561844);
  }
  lVar4 = lRam0000000113085cf8;
  _swift_beginAccess(lRam0000000113085cf8 + 0x10,auStack_68,0x20,0);
  lVar11 = *(long *)(lVar4 + 0x10);
  if (*(long *)(lVar11 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar11);
    lVar6 = lVar12;
    uVar8 = uVar2;
    func_0x000100029284();
    if ((uVar8 & 1) != 0) {
      lVar12 = *(long *)(*(long *)(lVar11 + 0x38) + lVar6 * 0x10);
      _swift_endAccess(auStack_68);
      _swift_bridgeObjectRelease(lVar11);
      bVar5 = lVar12 == lVar3;
      goto LAB_104561e58;
    }
    _swift_bridgeObjectRelease(lVar11);
  }
  _swift_endAccess(auStack_68);
  _swift_beginAccess(lVar4 + 0x10,auStack_68,0x21,0);
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native(uVar7);
  uVar10 = *(undefined8 *)(lVar4 + 0x10);
  *(undefined8 *)(lVar4 + 0x10) = 0x8000000000000000;
  FUN_104568334(lVar3,uVar9,lVar12,uVar2,uVar7);
  *(undefined8 *)(lVar4 + 0x10) = uVar10;
  _swift_endAccess(auStack_68);
  bVar5 = true;
LAB_104561e58:
  *(bool *)uVar1 = bVar5;
  return;
}



/* Entry: 104562234; end: 10456225b;  */

void FUN_104562234(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10456225c; end: 10456225f;  */

void FUN_10456225c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 104562260; end: 1045622cf;  */

void FUN_104562260(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initClassMetadata2(param_1,0,1,&lStack_28,param_1 + 0x58);
  }
  return;
}



/* Entry: 1045622d0; end: 1045622db;  */

void FUN_1045622d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e8142d8);
  return;
}



/* Entry: 1045622dc; end: 10456245b;  */

void FUN_1045622dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113085d00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dd20930;
  _swift_getWitnessTable(&DAT_10dd20930,&UNK_110790d00);
  puRam0000000113085d00 = puVar1;
  return;
}



/* Entry: 10456245c; end: 104562467;  */

void FUN_10456245c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(ulong *)(unaff_x20 + 0x20);
  if (lRam0000000113085cf0 != -1) {
    _swift_once(0x113085cf0,FUN_104561844);
  }
  lVar5 = lRam0000000113085cf8;
  _swift_beginAccess(lRam0000000113085cf8 + 0x10,auStack_48,0x20,0);
  lVar5 = *(long *)(lVar5 + 0x10);
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(long *)(lVar5 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar5);
    func_0x000100029284();
    if ((uVar4 & 1) != 0) {
      puVar2 = (undefined8 *)(*(long *)(lVar5 + 0x38) + lVar3 * 0x10);
      uStack_58 = puVar2[1];
      uStack_60 = *puVar2;
    }
    _swift_bridgeObjectRelease(lVar5);
  }
  _swift_endAccess(auStack_48);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  return;
}



/* Entry: 104562468; end: 1045624a7;  */

void FUN_104562468(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1045624a8; end: 1045624c3;  */

void FUN_1045624a8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1045624c4; end: 104563393;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1045624c4(ulong param_1,byte *******param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  byte *******pppppppbVar5;
  byte *******pppppppbVar6;
  byte ******ppppppbVar7;
  byte *******pppppppbVar8;
  byte *******pppppppbVar9;
  byte *pbVar10;
  byte ******ppppppbVar11;
  byte *pbVar12;
  int iVar13;
  byte *******pppppppbVar14;
  long lVar15;
  byte *******pppppppbVar16;
  bool bVar17;
  long lVar18;
  byte *******pppppppbVar19;
  byte *******pppppppbStack_98;
  byte *******pppppppbStack_90;
  ulong uStack_88;
  ulong uStack_80;
  byte *******pppppppbStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  uint uStack_54;
  
  uStack_68 = param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uStack_68 = (ulong)param_2 >> 0x38 & 0xf;
  }
  uStack_70 = 0;
  pppppppbVar16 = param_2;
  uStack_80 = param_1;
  pppppppbStack_78 = param_2;
  _swift_bridgeObjectRetain();
  lVar15 = 0;
  bVar17 = false;
  lVar18 = 0;
  uStack_54 = 1;
  pppppppbVar5 = (byte *******)PTR___swiftEmptyArrayStorage_11034f1c8;
  while (__sSS8IteratorV4nextSJSgyF(), pppppppbVar16 != (byte *******)0x0) {
    pppppppbVar6 = pppppppbVar5;
    if ((param_2 != (byte *******)0x2d) ||
       (pppppppbVar8 = pppppppbVar16, pppppppbVar16 != (byte *******)0xe100000000000000)) {
      uVar4 = 0x2d;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x2d,0xe100000000000000,param_2,pppppppbVar16,0);
      if ((uVar4 & 1) != 0) goto LAB_104562590;
      if ((param_2 == (byte *******)0x30) && (pppppppbVar16 == (byte *******)0xe100000000000000)) {
LAB_1045625e0:
        pppppppbVar14 = pppppppbVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)pppppppbVar14 & 1) == 0) {
          pppppppbVar8 = (byte *******)((long)pppppppbVar5[2] + 1);
          pppppppbVar6 = (byte *******)0x0;
          func_0x000101692914(0,pppppppbVar8,1,pppppppbVar5);
          pppppppbVar14 = pppppppbVar6;
        }
        pppppppbVar5 = pppppppbVar14;
        ppppppbVar11 = pppppppbVar6[2];
        pppppppbVar14 = (byte *******)((long)ppppppbVar11 + 1);
        if ((byte ******)((ulong)pppppppbVar6[3] >> 1) <= ppppppbVar11) {
          pppppppbVar5 = (byte *******)(ulong)((byte ******)0x1 < pppppppbVar6[3]);
          pppppppbVar8 = pppppppbVar14;
          func_0x000101692914(pppppppbVar5,pppppppbVar14,1,pppppppbVar6);
          pppppppbVar6 = pppppppbVar5;
        }
        pppppppbVar6[2] = (byte ******)pppppppbVar14;
        pppppppbVar6[(long)ppppppbVar11 * 2 + 4] = (byte ******)param_2;
        pppppppbVar6[(long)ppppppbVar11 * 2 + 5] = (byte ******)pppppppbVar16;
        bVar3 = SCARRY8(lVar18,1);
        lVar18 = lVar18 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104562b78);
          (*pcVar2)();
        }
        goto LAB_104562548;
      }
      uVar4 = 0;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x30,0xe100000000000000,param_2,pppppppbVar16,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)0x31 && pppppppbVar16 == (byte *******)0xe100000000000000))
      goto LAB_1045625e0;
      uVar4 = 0x31;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x31,0xe100000000000000,param_2,pppppppbVar16,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)0x32 && pppppppbVar16 == (byte *******)0xe100000000000000))
      goto LAB_1045625e0;
      uVar4 = 0;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x32,0xe100000000000000,param_2,pppppppbVar16,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)0x33 && pppppppbVar16 == (byte *******)0xe100000000000000))
      goto LAB_1045625e0;
      uVar4 = 0x33;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x33,0xe100000000000000,param_2,pppppppbVar16,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)0x34 && pppppppbVar16 == (byte *******)0xe100000000000000))
      goto LAB_1045625e0;
      uVar4 = 0;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x34,0xe100000000000000,param_2,pppppppbVar16,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)0x35 && pppppppbVar16 == (byte *******)0xe100000000000000))
      goto LAB_1045625e0;
      uVar4 = 0x35;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x35,0xe100000000000000,param_2,pppppppbVar16,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)0x36 && pppppppbVar16 == (byte *******)0xe100000000000000))
      goto LAB_1045625e0;
      uVar4 = 0;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x36,0xe100000000000000,param_2,pppppppbVar16,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)0x37 && pppppppbVar16 == (byte *******)0xe100000000000000))
      goto LAB_1045625e0;
      uVar4 = 0x37;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x37,0xe100000000000000,param_2,pppppppbVar16,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)0x38 && pppppppbVar16 == (byte *******)0xe100000000000000))
      goto LAB_1045625e0;
      uVar4 = 0;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x38,0xe100000000000000,param_2,pppppppbVar16,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)0x39 && pppppppbVar16 == (byte *******)0xe100000000000000))
      goto LAB_1045625e0;
      uVar4 = 0x39;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x39,0xe100000000000000,param_2,pppppppbVar16,0);
      if ((uVar4 & 1) != 0) goto LAB_1045625e0;
      if ((param_2 == (byte *******)0x2e) && (pppppppbVar16 == (byte *******)0xe100000000000000)) {
LAB_1045627e8:
        _swift_bridgeObjectRelease();
        param_2 = pppppppbVar16;
        if ((uStack_54 & 0xff) == 1) {
          pppppppbStack_90 = pppppppbVar5;
          _swift_bridgeObjectRetain(pppppppbVar5);
          pppppppbVar16 = (byte *******)0x112da2fe0;
          func_0x0001000285a8(0x112da2fe0,&UNK_10d947420);
          pppppppbVar8 = pppppppbVar16;
          func_0x00010380f204();
          pppppppbVar6 = (byte *******)&pppppppbStack_90;
          __sSSySSxcSTRzSJ7ElementRtzlufC(pppppppbVar6,pppppppbVar16,pppppppbVar8);
          pppppppbVar8 = (byte *******)((ulong)pppppppbVar6 & 0xffffffffffff);
          pppppppbVar9 = (byte *******)((ulong)pppppppbVar16 >> 0x38 & 0xf);
          pppppppbVar14 = pppppppbVar8;
          if (((ulong)pppppppbVar16 & 0x2000000000000000) != 0) {
            pppppppbVar14 = pppppppbVar9;
          }
          if (pppppppbVar14 != (byte *******)0x0) {
            if (((ulong)pppppppbVar16 >> 0x3c & 1) == 0) {
              if (((ulong)pppppppbVar16 >> 0x3d & 1) == 0) {
                if (((ulong)pppppppbVar6 >> 0x3c & 1) == 0) {
                  pppppppbVar8 = pppppppbVar16;
                  __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
                }
                else {
                  pppppppbVar6 = (byte *******)(((ulong)pppppppbVar16 & 0xfffffffffffffff) + 0x20);
                }
                if (*(byte *)pppppppbVar6 == 0x2b) {
                  if ((long)pppppppbVar8 < 1) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x104563314);
                    (*pcVar2)();
                  }
                  pbVar10 = (byte *)((long)pppppppbVar8 + -1);
                  if (pbVar10 == (byte *)0x0) goto LAB_104562ae4;
                  pppppppbVar14 = (byte *******)0x0;
                  do {
                    pppppppbVar6 = (byte *******)((long)pppppppbVar6 + 1);
                    if (((9 < *(byte *)pppppppbVar6 - 0x30) ||
                        (lVar18 = (long)pppppppbVar14 * 10,
                        SUB168(SEXT816((long)pppppppbVar14) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
                       (uVar4 = (ulong)(byte)(*(byte *)pppppppbVar6 - 0x30),
                       pppppppbVar14 = (byte *******)(lVar18 + uVar4), SCARRY8(lVar18,uVar4)))
                    goto LAB_104562ae4;
                    pppppppbVar19 = (byte *******)0x0;
                    pbVar10 = pbVar10 + -1;
                  } while (pbVar10 != (byte *)0x0);
                }
                else if (*(byte *)pppppppbVar6 == 0x2d) {
                  if ((long)pppppppbVar8 < 1) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x104563310);
                    (*pcVar2)();
                  }
                  pbVar10 = (byte *)((long)pppppppbVar8 + -1);
                  if (pbVar10 == (byte *)0x0) {
LAB_104562ae4:
                    pppppppbVar14 = (byte *******)0x0;
                    pppppppbVar19 = (byte *******)0x1;
                  }
                  else {
                    pppppppbVar14 = (byte *******)0x0;
                    do {
                      pppppppbVar6 = (byte *******)((long)pppppppbVar6 + 1);
                      if (((9 < *(byte *)pppppppbVar6 - 0x30) ||
                          (lVar18 = (long)pppppppbVar14 * 10,
                          SUB168(SEXT816((long)pppppppbVar14) * SEXT816(10),8) != lVar18 >> 0x3f))
                         || (uVar4 = (ulong)(byte)(*(byte *)pppppppbVar6 - 0x30),
                            pppppppbVar14 = (byte *******)(lVar18 - uVar4), SBORROW8(lVar18,uVar4)))
                      goto LAB_104562ae4;
                      pppppppbVar19 = (byte *******)0x0;
                      pbVar10 = pbVar10 + -1;
                    } while (pbVar10 != (byte *)0x0);
                  }
                }
                else {
                  if (pppppppbVar8 == (byte *******)0x0) goto LAB_104562ae4;
                  pppppppbVar14 = (byte *******)0x0;
                  if (pppppppbVar6 == (byte *******)0x0) {
                    pppppppbVar19 = (byte *******)0x0;
                  }
                  else {
                    do {
                      if (((9 < *(byte *)pppppppbVar6 - 0x30) ||
                          (lVar18 = (long)pppppppbVar14 * 10,
                          SUB168(SEXT816((long)pppppppbVar14) * SEXT816(10),8) != lVar18 >> 0x3f))
                         || (uVar4 = (ulong)(byte)(*(byte *)pppppppbVar6 - 0x30),
                            pppppppbVar14 = (byte *******)(lVar18 + uVar4), SCARRY8(lVar18,uVar4)))
                      goto LAB_104562ae4;
                      pppppppbVar19 = (byte *******)0x0;
                      pppppppbVar8 = (byte *******)((long)pppppppbVar8 + -1);
                      pppppppbVar6 = (byte *******)((long)pppppppbVar6 + 1);
                    } while (pppppppbVar8 != (byte *******)0x0);
                  }
                }
              }
              else {
                pppppppbStack_90 = pppppppbVar6;
                uStack_88 = (ulong)pppppppbVar16 & 0xffffffffffffff;
                uVar1 = (uint)pppppppbVar6 & 0xff;
                if (uVar1 == 0x2b) {
                  if (pppppppbVar9 == (byte *******)0x0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x10456330c);
                    (*pcVar2)();
                  }
                  pbVar10 = (byte *)((long)pppppppbVar9 + -1);
                  if (pbVar10 == (byte *)0x0) goto LAB_104562ae4;
                  pppppppbVar14 = (byte *******)0x0;
                  pbVar12 = (byte *)((ulong)&pppppppbStack_90 | 1);
                  do {
                    if (((9 < *pbVar12 - 0x30) ||
                        (lVar18 = (long)pppppppbVar14 * 10,
                        SUB168(SEXT816((long)pppppppbVar14) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
                       (uVar4 = (ulong)(byte)(*pbVar12 - 0x30),
                       pppppppbVar14 = (byte *******)(lVar18 + uVar4), SCARRY8(lVar18,uVar4)))
                    goto LAB_104562ae4;
                    pppppppbVar19 = (byte *******)0x0;
                    pbVar10 = pbVar10 + -1;
                    pbVar12 = pbVar12 + 1;
                  } while (pbVar10 != (byte *)0x0);
                }
                else if (uVar1 == 0x2d) {
                  if (pppppppbVar9 == (byte *******)0x0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x104563308);
                    (*pcVar2)();
                  }
                  pbVar10 = (byte *)((long)pppppppbVar9 + -1);
                  if (pbVar10 == (byte *)0x0) goto LAB_104562ae4;
                  pppppppbVar14 = (byte *******)0x0;
                  pbVar12 = (byte *)((ulong)&pppppppbStack_90 | 1);
                  do {
                    if (((9 < *pbVar12 - 0x30) ||
                        (lVar18 = (long)pppppppbVar14 * 10,
                        SUB168(SEXT816((long)pppppppbVar14) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
                       (uVar4 = (ulong)(byte)(*pbVar12 - 0x30),
                       pppppppbVar14 = (byte *******)(lVar18 - uVar4), SBORROW8(lVar18,uVar4)))
                    goto LAB_104562ae4;
                    pppppppbVar19 = (byte *******)0x0;
                    pbVar10 = pbVar10 + -1;
                    pbVar12 = pbVar12 + 1;
                  } while (pbVar10 != (byte *)0x0);
                }
                else {
                  if (pppppppbVar9 == (byte *******)0x0) goto LAB_104562ae4;
                  pppppppbVar14 = (byte *******)0x0;
                  pppppppbVar6 = (byte *******)&pppppppbStack_90;
                  do {
                    if (((9 < *(byte *)pppppppbVar6 - 0x30) ||
                        (lVar18 = (long)pppppppbVar14 * 10,
                        SUB168(SEXT816((long)pppppppbVar14) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
                       (uVar4 = (ulong)(byte)(*(byte *)pppppppbVar6 - 0x30),
                       pppppppbVar14 = (byte *******)(lVar18 + uVar4), SCARRY8(lVar18,uVar4)))
                    goto LAB_104562ae4;
                    pppppppbVar19 = (byte *******)0x0;
                    pppppppbVar9 = (byte *******)((long)pppppppbVar9 + -1);
                    pppppppbVar6 = (byte *******)((long)pppppppbVar6 + 1);
                  } while (pppppppbVar9 != (byte *******)0x0);
                }
              }
            }
            else {
              pppppppbVar8 = pppppppbVar16;
              func_0x000100fb6b80();
              pppppppbVar14 = pppppppbVar6;
              pppppppbVar19 = pppppppbVar8;
            }
            _swift_bridgeObjectRelease();
            uStack_54 = (uint)pppppppbVar19;
            param_2 = pppppppbVar16;
            if (((uStack_54 & 0xff) != 1) &&
               (pppppppbVar14 + 0x92f3973c0 < (byte *******)0x92f3973c01)) {
              _swift_bridgeObjectRelease();
              lVar18 = 0;
              pppppppbVar6 = (byte *******)PTR___swiftEmptyArrayStorage_11034f1c8;
              goto LAB_104562548;
            }
            break;
          }
          goto LAB_104563254;
        }
        break;
      }
      uVar4 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x2e,0xe100000000000000,param_2,pppppppbVar16,0);
      if ((uVar4 & 1) != 0) goto LAB_1045627e8;
      if ((param_2 == (byte *******)0x73) && (pppppppbVar16 == (byte *******)0xe100000000000000)) {
        _swift_bridgeObjectRelease(0xe100000000000000);
      }
      else {
        uVar4 = 0x73;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x73,0xe100000000000000,param_2,pppppppbVar16,0);
        _swift_bridgeObjectRelease();
        param_2 = pppppppbVar16;
        if ((uVar4 & 1) == 0) break;
      }
      if ((uStack_54 & 0xff) != 1) {
        if (lVar18 < 9) {
          lVar18 = lVar18 + -9;
          do {
            pppppppbVar16 = pppppppbVar5;
            _swift_isUniquelyReferenced_nonNull_native();
            pppppppbVar6 = pppppppbVar5;
            if (((ulong)pppppppbVar16 & 1) == 0) {
              pppppppbVar6 = (byte *******)0x0;
              func_0x000101692914(0,(long)pppppppbVar5[2] + 1,1,pppppppbVar5);
            }
            ppppppbVar11 = pppppppbVar6[2];
            pppppppbVar5 = pppppppbVar6;
            if ((byte ******)((ulong)pppppppbVar6[3] >> 1) <= ppppppbVar11) {
              pppppppbVar5 = (byte *******)(ulong)((byte ******)0x1 < pppppppbVar6[3]);
              func_0x000101692914(pppppppbVar5,(byte ******)((long)ppppppbVar11 + 1U),1,pppppppbVar6
                                 );
            }
            pppppppbVar5[2] = (byte ******)((long)ppppppbVar11 + 1U);
            pppppppbVar5[(long)ppppppbVar11 * 2 + 4] = (byte ******)0x30;
            pppppppbVar5[(long)ppppppbVar11 * 2 + 5] = (byte ******)0xe100000000000000;
            bVar3 = lVar18 != -1;
            lVar18 = lVar18 + 1;
          } while (bVar3);
        }
        else if (lVar18 != 9) {
          lVar18 = lVar18 + 1;
          do {
            if (pppppppbVar5[2] == (byte ******)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x104563318);
              (*pcVar2)();
            }
            pppppppbVar16 = pppppppbVar5;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((ulong)pppppppbVar16 & 1) == 0) {
              func_0x000104542b0c();
              ppppppbVar11 = pppppppbVar5[2];
            }
            else {
              ppppppbVar11 = pppppppbVar5[2];
            }
            if (ppppppbVar11 == (byte ******)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x104562f44);
              (*pcVar2)();
            }
            ppppppbVar7 = pppppppbVar5[((long)ppppppbVar11 + -1) * 2 + 5];
            pppppppbVar5[2] = (byte ******)((long)ppppppbVar11 + -1);
            _swift_bridgeObjectRelease(ppppppbVar7);
            lVar18 = lVar18 + -1;
          } while (10 < lVar18);
        }
        pppppppbStack_90 = pppppppbVar5;
        _swift_bridgeObjectRetain(pppppppbVar5);
        param_2 = (byte *******)0x112da2fe0;
        func_0x0001000285a8(0x112da2fe0,&UNK_10d947420);
        pppppppbVar16 = param_2;
        func_0x00010380f204();
        pppppppbVar6 = (byte *******)&pppppppbStack_90;
        __sSSySSxcSTRzSJ7ElementRtzlufC(pppppppbVar6,param_2,pppppppbVar16);
        pppppppbVar14 = (byte *******)((ulong)pppppppbVar6 & 0xffffffffffff);
        pppppppbVar9 = (byte *******)((ulong)param_2 >> 0x38 & 0xf);
        pppppppbVar8 = pppppppbVar14;
        if (((ulong)param_2 & 0x2000000000000000) != 0) {
          pppppppbVar8 = pppppppbVar9;
        }
        pppppppbVar16 = param_2;
        if (pppppppbVar8 != (byte *******)0x0) {
          if (((ulong)param_2 >> 0x3c & 1) == 0) {
            if (((ulong)param_2 >> 0x3d & 1) == 0) {
              if (((ulong)pppppppbVar6 >> 0x3c & 1) == 0) {
                pppppppbVar14 = param_2;
                __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
              }
              else {
                pppppppbVar6 = (byte *******)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
              }
              if (*(byte *)pppppppbVar6 == 0x2b) {
                if ((long)pppppppbVar14 < 1) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x104563390);
                  (*pcVar2)();
                }
                pbVar10 = (byte *)((long)pppppppbVar14 + -1);
                if (pbVar10 != (byte *)0x0) {
                  pppppppbVar16 = (byte *******)0x0;
                  while( true ) {
                    pppppppbVar6 = (byte *******)((long)pppppppbVar6 + 1);
                    if (((9 < *(byte *)pppppppbVar6 - 0x30) ||
                        (lVar15 = (long)(int)pppppppbVar16 * 10, iVar13 = (int)lVar15,
                        lVar15 - iVar13 != 0)) ||
                       (uVar1 = *(byte *)pppppppbVar6 - 0x30 & 0xff,
                       pppppppbVar16 = (byte *******)(ulong)(iVar13 + uVar1), SCARRY4(iVar13,uVar1))
                       ) break;
                    bVar3 = false;
                    pbVar10 = pbVar10 + -1;
                    if (pbVar10 == (byte *)0x0) goto LAB_104563228;
                  }
                }
                goto LAB_104563220;
              }
              if (*(byte *)pppppppbVar6 == 0x2d) {
                if ((long)pppppppbVar14 < 1) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x104563388);
                  (*pcVar2)();
                }
                pbVar10 = (byte *)((long)pppppppbVar14 + -1);
                if (pbVar10 != (byte *)0x0) {
                  pppppppbVar16 = (byte *******)0x0;
                  while( true ) {
                    pppppppbVar6 = (byte *******)((long)pppppppbVar6 + 1);
                    if (((9 < *(byte *)pppppppbVar6 - 0x30) ||
                        (lVar15 = (long)(int)pppppppbVar16 * 10, iVar13 = (int)lVar15,
                        lVar15 - iVar13 != 0)) ||
                       (uVar1 = *(byte *)pppppppbVar6 - 0x30 & 0xff,
                       pppppppbVar16 = (byte *******)(ulong)(iVar13 - uVar1), SBORROW4(iVar13,uVar1)
                       )) break;
                    bVar3 = false;
                    pbVar10 = pbVar10 + -1;
                    if (pbVar10 == (byte *)0x0) goto LAB_104563228;
                  }
                }
                goto LAB_104563220;
              }
              if (pppppppbVar14 == (byte *******)0x0) goto LAB_104563220;
              if (pppppppbVar6 == (byte *******)0x0) {
                bVar3 = false;
                pppppppbVar16 = (byte *******)0x0;
              }
              else {
                pppppppbVar16 = (byte *******)0x0;
                do {
                  if (((9 < *(byte *)pppppppbVar6 - 0x30) ||
                      (lVar15 = (long)(int)pppppppbVar16 * 10, iVar13 = (int)lVar15,
                      lVar15 - iVar13 != 0)) ||
                     (uVar1 = *(byte *)pppppppbVar6 - 0x30 & 0xff,
                     pppppppbVar16 = (byte *******)(ulong)(iVar13 + uVar1), SCARRY4(iVar13,uVar1)))
                  goto LAB_104563220;
                  bVar3 = false;
                  pppppppbVar14 = (byte *******)((long)pppppppbVar14 + -1);
                  pppppppbVar6 = (byte *******)((long)pppppppbVar6 + 1);
                } while (pppppppbVar14 != (byte *******)0x0);
              }
            }
            else {
              pppppppbStack_90 = pppppppbVar6;
              uStack_88 = (ulong)param_2 & 0xffffffffffffff;
              uVar1 = (uint)pppppppbVar6 & 0xff;
              if (uVar1 == 0x2b) {
                if (pppppppbVar9 == (byte *******)0x0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x104563394);
                  (*pcVar2)();
                }
                pbVar10 = (byte *)((long)pppppppbVar9 + -1);
                if (pbVar10 != (byte *)0x0) {
                  pppppppbVar16 = (byte *******)0x0;
                  pbVar12 = (byte *)((ulong)&pppppppbStack_90 | 1);
                  while( true ) {
                    if (((9 < *pbVar12 - 0x30) ||
                        (lVar15 = (long)(int)pppppppbVar16 * 10, iVar13 = (int)lVar15,
                        lVar15 - iVar13 != 0)) ||
                       (uVar1 = *pbVar12 - 0x30 & 0xff,
                       pppppppbVar16 = (byte *******)(ulong)(iVar13 + uVar1), SCARRY4(iVar13,uVar1))
                       ) break;
                    bVar3 = false;
                    pbVar10 = pbVar10 + -1;
                    pbVar12 = pbVar12 + 1;
                    if (pbVar10 == (byte *)0x0) goto LAB_104563228;
                  }
                }
              }
              else if (uVar1 == 0x2d) {
                if (pppppppbVar9 == (byte *******)0x0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10456338c);
                  (*pcVar2)();
                }
                pbVar10 = (byte *)((long)pppppppbVar9 + -1);
                if (pbVar10 != (byte *)0x0) {
                  pppppppbVar16 = (byte *******)0x0;
                  pbVar12 = (byte *)((ulong)&pppppppbStack_90 | 1);
                  while( true ) {
                    if (((9 < *pbVar12 - 0x30) ||
                        (lVar15 = (long)(int)pppppppbVar16 * 10, iVar13 = (int)lVar15,
                        lVar15 - iVar13 != 0)) ||
                       (uVar1 = *pbVar12 - 0x30 & 0xff,
                       pppppppbVar16 = (byte *******)(ulong)(iVar13 - uVar1), SBORROW4(iVar13,uVar1)
                       )) break;
                    bVar3 = false;
                    pbVar10 = pbVar10 + -1;
                    pbVar12 = pbVar12 + 1;
                    if (pbVar10 == (byte *)0x0) goto LAB_104563228;
                  }
                }
              }
              else if (pppppppbVar9 != (byte *******)0x0) {
                pppppppbVar16 = (byte *******)0x0;
                pppppppbVar6 = (byte *******)&pppppppbStack_90;
                while( true ) {
                  if (((9 < *(byte *)pppppppbVar6 - 0x30) ||
                      (lVar15 = (long)(int)pppppppbVar16 * 10, iVar13 = (int)lVar15,
                      lVar15 - iVar13 != 0)) ||
                     (uVar1 = *(byte *)pppppppbVar6 - 0x30 & 0xff,
                     pppppppbVar16 = (byte *******)(ulong)(iVar13 + uVar1), SCARRY4(iVar13,uVar1)))
                  break;
                  bVar3 = false;
                  pppppppbVar9 = (byte *******)((long)pppppppbVar9 + -1);
                  pppppppbVar6 = (byte *******)((long)pppppppbVar6 + 1);
                  if (pppppppbVar9 == (byte *******)0x0) goto LAB_104563228;
                }
              }
LAB_104563220:
              pppppppbVar16 = (byte *******)0x0;
              bVar3 = true;
            }
LAB_104563228:
            _swift_bridgeObjectRelease();
            pppppppbVar6 = pppppppbVar16;
            if (bVar3) break;
          }
          else {
            pppppppbVar14 = param_2;
            func_0x000100f136fc();
            _swift_bridgeObjectRelease();
            if (((uint)((ulong)pppppppbVar6 >> 0x20) & 0xff) == 1) break;
          }
          if ((bVar17) && (SBORROW4(0,(int)pppppppbVar6))) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x104563374);
            (*pcVar2)();
          }
          goto LAB_104563244;
        }
        goto LAB_104563254;
      }
      pppppppbStack_90 = pppppppbVar5;
      _swift_bridgeObjectRetain(pppppppbVar5);
      pppppppbVar16 = (byte *******)0x112da2fe0;
      func_0x0001000285a8(0x112da2fe0,&UNK_10d947420);
      pppppppbVar8 = pppppppbVar16;
      func_0x00010380f204();
      pppppppbVar6 = (byte *******)&pppppppbStack_90;
      __sSSySSxcSTRzSJ7ElementRtzlufC(pppppppbVar6,pppppppbVar16,pppppppbVar8);
      pppppppbVar14 = (byte *******)((ulong)pppppppbVar6 & 0xffffffffffff);
      pppppppbVar9 = (byte *******)((ulong)pppppppbVar16 >> 0x38 & 0xf);
      pppppppbVar8 = pppppppbVar14;
      if (((ulong)pppppppbVar16 & 0x2000000000000000) != 0) {
        pppppppbVar8 = pppppppbVar9;
      }
      if (pppppppbVar8 == (byte *******)0x0) goto LAB_104563254;
      if (((ulong)pppppppbVar16 >> 0x3c & 1) != 0) {
        pppppppbVar14 = pppppppbVar16;
        func_0x000100fb6b80();
        pppppppbVar8 = pppppppbVar14;
        pppppppbStack_98 = pppppppbVar6;
        goto LAB_1045630b4;
      }
      if (((ulong)pppppppbVar16 >> 0x3d & 1) != 0) {
        pppppppbStack_90 = pppppppbVar6;
        uStack_88 = (ulong)pppppppbVar16 & 0xffffffffffffff;
        uVar1 = (uint)pppppppbVar6 & 0xff;
        if (uVar1 == 0x2b) {
          if (pppppppbVar9 == (byte *******)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x104563384);
            (*pcVar2)();
          }
          pbVar10 = (byte *)((long)pppppppbVar9 + -1);
          if (pbVar10 == (byte *)0x0) goto LAB_1045630ac;
          pppppppbStack_98 = (byte *******)0x0;
          pbVar12 = (byte *)((ulong)&pppppppbStack_90 | 1);
          goto LAB_104562fc0;
        }
        if (uVar1 != 0x2d) {
          if (pppppppbVar9 == (byte *******)0x0) goto LAB_1045630ac;
          pppppppbStack_98 = (byte *******)0x0;
          pppppppbVar6 = (byte *******)&pppppppbStack_90;
          goto LAB_104563068;
        }
        if (pppppppbVar9 == (byte *******)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10456337c);
          (*pcVar2)();
        }
        pbVar10 = (byte *)((long)pppppppbVar9 + -1);
        if (pbVar10 == (byte *)0x0) goto LAB_1045630ac;
        pppppppbStack_98 = (byte *******)0x0;
        pbVar12 = (byte *)((ulong)&pppppppbStack_90 | 1);
        goto LAB_104562e38;
      }
      if (((ulong)pppppppbVar6 >> 0x3c & 1) == 0) {
        pppppppbVar14 = pppppppbVar16;
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      }
      else {
        pppppppbVar6 = (byte *******)(((ulong)pppppppbVar16 & 0xfffffffffffffff) + 0x20);
      }
      if (*(byte *)pppppppbVar6 == 0x2b) {
        if ((long)pppppppbVar14 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104563380);
          (*pcVar2)();
        }
        pbVar10 = (byte *)((long)pppppppbVar14 + -1);
        if (pbVar10 == (byte *)0x0) goto LAB_1045630ac;
        pppppppbStack_98 = (byte *******)0x0;
        goto LAB_104562f60;
      }
      if (*(byte *)pppppppbVar6 == 0x2d) {
        if ((long)pppppppbVar14 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104563378);
          (*pcVar2)();
        }
        pbVar10 = (byte *)((long)pppppppbVar14 + -1);
        if (pbVar10 == (byte *)0x0) goto LAB_1045630ac;
        pppppppbStack_98 = (byte *******)0x0;
        goto LAB_104562c64;
      }
      if (pppppppbVar14 == (byte *******)0x0) goto LAB_1045630ac;
      if (pppppppbVar6 != (byte *******)0x0) {
        pppppppbStack_98 = (byte *******)0x0;
        goto LAB_104563014;
      }
      pppppppbStack_98 = (byte *******)0x0;
      pppppppbVar8 = (byte *******)0x0;
      goto LAB_1045630b4;
    }
LAB_104562590:
    if (lVar15 != 0) goto LAB_104563254;
    pppppppbVar14 = pppppppbVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)pppppppbVar14 & 1) == 0) {
      pppppppbVar8 = (byte *******)((long)pppppppbVar5[2] + 1);
      pppppppbVar6 = (byte *******)0x0;
      func_0x000101692914(0,pppppppbVar8,1,pppppppbVar5);
      pppppppbVar14 = pppppppbVar6;
    }
    pppppppbVar5 = pppppppbVar14;
    ppppppbVar11 = pppppppbVar6[2];
    pppppppbVar14 = (byte *******)((long)ppppppbVar11 + 1);
    if ((byte ******)((ulong)pppppppbVar6[3] >> 1) <= ppppppbVar11) {
      pppppppbVar5 = (byte *******)(ulong)((byte ******)0x1 < pppppppbVar6[3]);
      pppppppbVar8 = pppppppbVar14;
      func_0x000101692914(pppppppbVar5,pppppppbVar14,1,pppppppbVar6);
      pppppppbVar6 = pppppppbVar5;
    }
    pppppppbVar6[2] = (byte ******)pppppppbVar14;
    pppppppbVar6[(long)ppppppbVar11 * 2 + 4] = (byte ******)param_2;
    pppppppbVar6[(long)ppppppbVar11 * 2 + 5] = (byte ******)pppppppbVar16;
    bVar17 = true;
LAB_104562548:
    bVar3 = SCARRY8(lVar15,1);
    lVar15 = lVar15 + 1;
    param_2 = pppppppbVar5;
    pppppppbVar16 = pppppppbVar8;
    pppppppbVar5 = pppppppbVar6;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104562b74);
      (*pcVar2)();
    }
  }
  goto LAB_10456325c;
  while( true ) {
    pppppppbVar8 = (byte *******)0x0;
    pbVar10 = pbVar10 + -1;
    pbVar12 = pbVar12 + 1;
    if (pbVar10 == (byte *)0x0) break;
LAB_104562fc0:
    if (((9 < *pbVar12 - 0x30) ||
        (lVar15 = (long)pppppppbStack_98 * 10,
        SUB168(SEXT816((long)pppppppbStack_98) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
       (uVar4 = (ulong)(byte)(*pbVar12 - 0x30), pppppppbStack_98 = (byte *******)(lVar15 + uVar4),
       SCARRY8(lVar15,uVar4))) goto LAB_1045630ac;
  }
  goto LAB_1045630b4;
  while( true ) {
    pppppppbVar8 = (byte *******)0x0;
    pppppppbVar9 = (byte *******)((long)pppppppbVar9 + -1);
    pppppppbVar6 = (byte *******)((long)pppppppbVar6 + 1);
    if (pppppppbVar9 == (byte *******)0x0) break;
LAB_104563068:
    if (((9 < *(byte *)pppppppbVar6 - 0x30) ||
        (lVar15 = (long)pppppppbStack_98 * 10,
        SUB168(SEXT816((long)pppppppbStack_98) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
       (uVar4 = (ulong)(byte)(*(byte *)pppppppbVar6 - 0x30),
       pppppppbStack_98 = (byte *******)(lVar15 + uVar4), SCARRY8(lVar15,uVar4)))
    goto LAB_1045630ac;
  }
  goto LAB_1045630b4;
  while( true ) {
    pppppppbVar8 = (byte *******)0x0;
    pbVar10 = pbVar10 + -1;
    pbVar12 = pbVar12 + 1;
    if (pbVar10 == (byte *)0x0) break;
LAB_104562e38:
    if (((9 < *pbVar12 - 0x30) ||
        (lVar15 = (long)pppppppbStack_98 * 10,
        SUB168(SEXT816((long)pppppppbStack_98) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
       (uVar4 = (ulong)(byte)(*pbVar12 - 0x30), pppppppbStack_98 = (byte *******)(lVar15 - uVar4),
       SBORROW8(lVar15,uVar4))) goto LAB_1045630ac;
  }
  goto LAB_1045630b4;
  while( true ) {
    pppppppbVar8 = (byte *******)0x0;
    pbVar10 = pbVar10 + -1;
    if (pbVar10 == (byte *)0x0) break;
LAB_104562f60:
    pppppppbVar6 = (byte *******)((long)pppppppbVar6 + 1);
    if (((9 < *(byte *)pppppppbVar6 - 0x30) ||
        (lVar15 = (long)pppppppbStack_98 * 10,
        SUB168(SEXT816((long)pppppppbStack_98) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
       (uVar4 = (ulong)(byte)(*(byte *)pppppppbVar6 - 0x30),
       pppppppbStack_98 = (byte *******)(lVar15 + uVar4), SCARRY8(lVar15,uVar4)))
    goto LAB_1045630ac;
  }
  goto LAB_1045630b4;
  while( true ) {
    pppppppbVar8 = (byte *******)0x0;
    pppppppbVar14 = (byte *******)((long)pppppppbVar14 + -1);
    pppppppbVar6 = (byte *******)((long)pppppppbVar6 + 1);
    if (pppppppbVar14 == (byte *******)0x0) break;
LAB_104563014:
    if (((9 < *(byte *)pppppppbVar6 - 0x30) ||
        (lVar15 = (long)pppppppbStack_98 * 10,
        SUB168(SEXT816((long)pppppppbStack_98) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
       (uVar4 = (ulong)(byte)(*(byte *)pppppppbVar6 - 0x30),
       pppppppbStack_98 = (byte *******)(lVar15 + uVar4), SCARRY8(lVar15,uVar4)))
    goto LAB_1045630ac;
  }
  goto LAB_1045630b4;
LAB_1045630ac:
  pppppppbStack_98 = (byte *******)0x0;
  pppppppbVar8 = (byte *******)0x1;
  goto LAB_1045630b4;
  while( true ) {
    pppppppbVar8 = (byte *******)0x0;
    pbVar10 = pbVar10 + -1;
    if (pbVar10 == (byte *)0x0) break;
LAB_104562c64:
    pppppppbVar6 = (byte *******)((long)pppppppbVar6 + 1);
    if (((9 < *(byte *)pppppppbVar6 - 0x30) ||
        (lVar15 = (long)pppppppbStack_98 * 10,
        SUB168(SEXT816((long)pppppppbStack_98) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
       (uVar4 = (ulong)(byte)(*(byte *)pppppppbVar6 - 0x30),
       pppppppbStack_98 = (byte *******)(lVar15 - uVar4), SBORROW8(lVar15,uVar4)))
    goto LAB_1045630ac;
  }
LAB_1045630b4:
  _swift_bridgeObjectRelease();
  param_2 = pppppppbVar16;
  if ((((uint)pppppppbVar8 & 0xff) != 1) &&
     (pppppppbStack_98 + 0x92f3973c0 < (byte *******)0x92f3973c01)) {
LAB_104563244:
    __sSS8IteratorV4nextSJSgyF();
    pppppppbVar6 = pppppppbStack_78;
    pppppppbVar16 = pppppppbVar14;
    if (pppppppbVar14 == (byte *******)0x0) {
      _swift_bridgeObjectRelease(pppppppbVar5);
      _swift_bridgeObjectRelease(pppppppbVar6);
      return;
    }
LAB_104563254:
    _swift_bridgeObjectRelease();
    param_2 = pppppppbVar16;
  }
LAB_10456325c:
  FUN_104540590();
  _swift_allocError(&UNK_110788c08,param_2,0,0);
  param_2[1] = (byte ******)0xe;
  *param_2 = (byte ******)0x0;
  _swift_willThrow();
  pppppppbVar16 = pppppppbStack_78;
  _swift_bridgeObjectRelease(pppppppbVar5);
  _swift_bridgeObjectRelease(pppppppbVar16);
  return;
}



/* Entry: 104563394; end: 1045634b3;  */

undefined1  [16] FUN_104563394(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined *puStack_40;
  undefined *puStack_38;
  
  uVar1 = (uint)param_2;
  if (0x92f3973c00 < param_1 + 0x4979cb9e00U || 0x773593fe < uVar1 + 999999999) {
    return ZEXT816(0);
  }
  if (((param_1 == 0) || (uVar1 == 0)) || (param_1 < 0 != uVar1 < 0x80000000)) {
    FUN_1045ad13c(param_2);
    if ((param_1 == 0) && ((int)uVar1 < 0)) {
      puStack_40 = (undefined *)0x302d;
      puStack_38 = (undefined *)0xe200000000000000;
    }
    else {
      puStack_40 = PTR___ss5Int64VN_11034ee50;
      puStack_38 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
      __ss23CustomStringConvertibleP11descriptionSSvgTj();
    }
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(param_2);
    __sSS6appendyySSF(0x73,0xe100000000000000);
  }
  else {
    puStack_40 = (undefined *)0x0;
    puStack_38 = (undefined *)0x0;
  }
  auVar2._8_8_ = puStack_38;
  auVar2._0_8_ = puStack_40;
  return auVar2;
}



/* Entry: 1045634b4; end: 1045634bf;  */

void FUN_1045634b4(void)

{
  return;
}



/* Entry: 1045634c0; end: 104563567;  */

void FUN_1045634c0(void)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 *unaff_x20;
  
  puVar1 = (undefined1 *)*unaff_x20;
  uVar2 = (ulong)*(uint *)(unaff_x20 + 1);
  FUN_104563394();
  if (uVar2 == 0) {
    func_0x0001045406b8();
    _swift_allocError(&UNK_110788dc0,puVar1,0,0);
    *puVar1 = 2;
    _swift_willThrow();
  }
  else {
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar2);
    __sSS6appendyySSF(0x22,0xe100000000000000);
  }
  return;
}



/* Entry: 104563568; end: 1045635cb;  */

void FUN_104563568(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10457b090();
  if (unaff_x21 == 0) {
    uVar1 = param_2;
    FUN_1045624c4();
    _swift_bridgeObjectRelease(param_2);
    *unaff_x20 = param_1;
    *(int *)(unaff_x20 + 1) = (int)uVar1;
  }
  return;
}



/* Entry: 1045635cc; end: 1045635d3;  */

void FUN_1045635cc(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x68))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)
              PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_11034ebd0);
  FUN_104563c84(param_1,&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 1045635d4; end: 104563673;  */

void FUN_1045635d4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar4;
  
  lVar1 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = *param_2;
  uVar3 = *(undefined4 *)
           PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_11034ebd0;
  (**(code **)(extraout_x12 + 0x68))(puVar2);
  FUN_104563c84(uVar4);
  *param_1 = puVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  param_1[2] = lVar1;
  param_1[3] = param_5;
  return;
}



/* Entry: 104563674; end: 1045636f7;  */

void FUN_104563674(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x68))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)
              PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_11034ebd0);
  FUN_104563c84(param_1,&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 1045636f8; end: 10456379f;  */

undefined1  [16] FUN_1045636f8(ulong param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 + 0xc4653600U < 0x88ca6c01) {
    bVar4 = SCARRY8(param_1,(long)(param_2 / 1000000000));
    param_1 = param_1 + (long)(param_2 / 1000000000);
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104563780);
      (*pcVar3)();
    }
    param_2 = param_2 % 1000000000;
  }
  if ((param_2 < 0) && (0 < (long)param_1)) {
    auVar5._8_4_ = param_2 + 1000000000;
    auVar5._0_8_ = param_1 - 1;
    auVar5._12_4_ = 0;
    return auVar5;
  }
  uVar1 = param_1;
  iVar2 = param_2;
  if ((param_1 & 0x8000000000000000) != 0) {
    uVar1 = param_1 + 1;
    iVar2 = param_2 + -1000000000;
  }
  if (0 < param_2) {
    param_1 = uVar1;
    param_2 = iVar2;
  }
  auVar6._8_4_ = param_2;
  auVar6._0_8_ = param_1;
  auVar6._12_4_ = 0;
  return auVar6;
}



/* Entry: 1045637a0; end: 104563a3f;  */

void FUN_1045637a0(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  double dVar8;
  undefined1 auStack_70 [8];
  double dStack_68;
  
  lVar3 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = param_1;
  __ss8DurationV10componentss5Int64V7seconds_AE11attosecondstvg(param_1,param_2);
  __ss8DurationV10componentss5Int64V7seconds_AE11attosecondstvg(param_1);
  dVar8 = (double)(param_2 % 1000000000) / 1000000000.0;
  dStack_68 = dVar8;
  (**(code **)(lVar7 + 0x10))(puVar6,param_3,lVar3);
  puVar5 = puVar6;
  (**(code **)(lVar7 + 0x58))(puVar6,lVar3);
  iVar2 = (int)puVar5;
  if ((((iVar2 == *(int *)
                   PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_11034ebd0)
       || (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO15toNearestOrEvenyA2BmFWC_11034ebc8)
       ) || (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO2upyA2BmFWC_11034ebd8)) ||
     ((iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO4downyA2BmFWC_11034ebe0 ||
      (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO10towardZeroyA2BmFWC_11034ebb8)))) {
    (**(code **)(lVar7 + 8))(param_3,lVar3);
    dVar8 = (double)(long)dVar8;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO12awayFromZeroyA2BmFWC_11034ebc0) {
    (**(code **)(lVar7 + 8))(param_3,lVar3);
    dVar8 = (double)(long)dVar8;
  }
  else {
    __sSd14_roundSlowPathyys25FloatingPointRoundingRuleOF(param_3);
    pcVar1 = *(code **)(lVar7 + 8);
    (*pcVar1)(param_3,lVar3);
    (*pcVar1)(puVar6,lVar3);
    dVar8 = dStack_68;
  }
  if (param_2 < -0x1dcd65003b9ac9ff) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104563a2c);
    (*pcVar1)();
  }
  if (0x1dcd64ffffffffff < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104563a30);
    (*pcVar1)();
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104563a34);
    (*pcVar1)();
  }
  if (dVar8 <= -2147483649.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104563a38);
    (*pcVar1)();
  }
  if (dVar8 < 2147483648.0) {
    iVar2 = (int)(param_2 / 1000000000);
    if (!SCARRY4(iVar2,(int)dVar8)) {
      FUN_1045636f8(uVar4,iVar2 + (int)dVar8);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104563a40);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104563a3c);
  (*pcVar1)();
}



/* Entry: 104563a40; end: 104563a93;  */

undefined1  [16] FUN_104563a40(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = (long)param_2 * 1000000000;
  __ss8DurationV16secondsComponent011attosecondsC0ABs5Int64V_AFtcfC(param_1,lVar1);
  func_0x00010006c090(param_3,param_4);
  auVar2._8_8_ = lVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 104563a94; end: 104563c83;  */

ulong FUN_104563a94(long param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = -param_1;
  if (SBORROW8(0,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104563b30);
    (*pcVar3)();
  }
  iVar2 = -param_2;
  if (!SBORROW4(0,param_2)) {
    if (iVar2 + 0xc4653600U < 0x88ca6c01) {
      bVar4 = SCARRY8(uVar6,(long)(iVar2 / 1000000000));
      uVar6 = uVar6 + (long)(iVar2 / 1000000000);
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104563b38);
        (*pcVar3)();
      }
      iVar2 = iVar2 % 1000000000;
    }
    uVar5 = uVar6 - 1;
    if (((long)uVar6 < 1) || (-1 < iVar2)) {
      uVar1 = uVar6;
      if (0 < iVar2) {
        uVar1 = uVar6 + 1;
      }
      uVar5 = uVar6;
      if ((uVar6 & 0x8000000000000000) != 0) {
        uVar5 = uVar1;
      }
    }
    return uVar5;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104563b34);
  (*pcVar3)();
}



/* Entry: 104563c84; end: 104563edf;  */

void FUN_104563c84(double param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  double dVar7;
  undefined1 auStack_60 [8];
  double dStack_58;
  
  lVar3 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104563ecc);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104563ed0);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104563ed4);
    (*pcVar1)();
  }
  dVar7 = (param_1 - (double)(long)param_1) * 1000000000.0;
  dStack_58 = dVar7;
  (**(code **)(lVar6 + 0x10))(puVar5,param_2,lVar3);
  puVar4 = puVar5;
  (**(code **)(lVar6 + 0x58))(puVar5,lVar3);
  iVar2 = (int)puVar4;
  if ((((iVar2 == *(int *)
                   PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_11034ebd0)
       || (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO15toNearestOrEvenyA2BmFWC_11034ebc8)
       ) || (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO2upyA2BmFWC_11034ebd8)) ||
     ((iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO4downyA2BmFWC_11034ebe0 ||
      (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO10towardZeroyA2BmFWC_11034ebb8)))) {
    (**(code **)(lVar6 + 8))(param_2,lVar3);
    dVar7 = (double)(long)dVar7;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO12awayFromZeroyA2BmFWC_11034ebc0) {
    (**(code **)(lVar6 + 8))(param_2,lVar3);
    dVar7 = (double)(long)dVar7;
  }
  else {
    __sSd14_roundSlowPathyys25FloatingPointRoundingRuleOF(param_2);
    pcVar1 = *(code **)(lVar6 + 8);
    (*pcVar1)(param_2,lVar3);
    (*pcVar1)(puVar5,lVar3);
    dVar7 = dStack_58;
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104563ed8);
    (*pcVar1)();
  }
  if (dVar7 <= -2147483649.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104563edc);
    (*pcVar1)();
  }
  if (dVar7 < 2147483648.0) {
    FUN_1045636f8((long)param_1,(int)dVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104563ee0);
  (*pcVar1)();
}



/* Entry: 104563ee0; end: 104563ef3;  */

undefined * FUN_104563ee0(void)

{
  return PTR___sSds33_ExpressibleByBuiltinFloatLiteralsWP_11034ddb8;
}



/* Entry: 104563ef4; end: 10456407f;  */

bool FUN_104563ef4(undefined8 ****param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 ****ppppuVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 ***pppuStack_70;
  ulong uStack_68;
  
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  uVar6 = (uint)((ulong)param_1 >> 0x3b) & 1;
  if ((param_2 & 0x1000000000000000) == 0) {
    uVar6 = 1;
  }
  uVar7 = 4L << uVar6;
  uVar3 = 0xf;
  do {
    uVar8 = uVar3 >> 0xe;
    if (uVar8 == uVar1 * 4) break;
    uVar9 = uVar3 & 0xc;
    uVar5 = uVar3;
    if (uVar9 == uVar7) {
      func_0x000100e36e7c();
    }
    if (uVar1 <= uVar5 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10456407c);
      (*pcVar2)();
    }
    if ((param_2 >> 0x3c & 1) == 0) {
      if ((param_2 >> 0x3d & 1) == 0) {
        ppppuVar4 = (undefined8 ****)((param_2 & 0xfffffffffffffff) + 0x20);
        if (((ulong)param_1 >> 0x3c & 1) == 0) {
          ppppuVar4 = param_1;
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
        }
      }
      else {
        pppuStack_70 = param_1;
        uStack_68 = param_2 & 0xffffffffffffff;
        ppppuVar4 = &pppuStack_70;
      }
      uVar6 = (uint)*(byte *)((long)ppppuVar4 + (uVar5 >> 0x10));
      if (uVar9 == uVar7) goto LAB_10456403c;
LAB_104563fe0:
      if ((param_2 >> 0x3c & 1) == 0) goto LAB_104563f58;
LAB_104563fe4:
      if (uVar1 <= uVar3 >> 0x10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104564080);
        (*pcVar2)();
      }
      __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
    }
    else {
      __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar5,param_1,param_2);
      uVar6 = (uint)uVar5;
      if (uVar9 != uVar7) goto LAB_104563fe0;
LAB_10456403c:
      func_0x000100e36e7c();
      if ((param_2 >> 0x3c & 1) != 0) goto LAB_104563fe4;
LAB_104563f58:
      uVar3 = (uVar3 & 0xffffffffffff0000) + 0x10004;
    }
  } while (0xa1 < (uVar6 - 0x7f & 0xff));
  return uVar8 == uVar1 * 4;
}



/* Entry: 104564080; end: 1045647ef;  */

undefined1  [16] FUN_104564080(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_2;
  FUN_104563ef4();
  if ((param_1 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    uVar3 = param_2;
    _swift_bridgeObjectRetain();
    __sSS8IteratorV4nextSJSgyF();
    while (uVar6 != 0) {
      if ((uVar3 == 0x5f) && (uVar5 = uVar6, uVar6 == 0xe100000000000000)) {
LAB_104564148:
        _swift_bridgeObjectRelease();
        __sSS8IteratorV4nextSJSgyF();
        if (uVar5 == 0) {
LAB_104564438:
          _swift_bridgeObjectRelease(param_2);
          uVar6 = 0;
          param_2 = 0xe000000000000000;
          goto LAB_10456444c;
        }
        uVar3 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x7a,0xe100000000000000,0x61,0xe100000000000000,1);
        if ((uVar3 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104564474);
          (*pcVar2)();
        }
        if ((uVar6 == 0x61) && (uVar5 == 0xe100000000000000)) {
LAB_104564190:
          uVar3 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x7a,0xe100000000000000,uVar6,uVar5,1);
          if ((uVar3 & 1) != 0) goto LAB_104564434;
        }
        else {
          uVar3 = uVar6;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar6,uVar5,0x61,0xe100000000000000,1);
          if ((uVar3 & 1) != 0) goto LAB_104564434;
          if ((uVar6 != 0x7a) || (uVar5 != 0xe100000000000000)) goto LAB_104564190;
        }
        uVar3 = uVar5;
        __sSS10uppercasedSSyF(uVar6);
        _swift_bridgeObjectRelease(uVar5);
        uVar5 = uVar3;
        __sSS6appendyySSF(uVar6);
        uVar6 = uVar3;
      }
      else {
        uVar4 = 0x5f;
        uVar5 = 0xe100000000000000;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x5f,0xe100000000000000,uVar3,uVar6,0);
        if ((uVar4 & 1) != 0) goto LAB_104564148;
        uVar5 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x5a,0xe100000000000000,0x41,0xe100000000000000,1);
        if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104564478);
          (*pcVar2)();
        }
        if ((uVar3 != 0x41) || (uVar6 != 0xe100000000000000)) {
          uVar5 = uVar3;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar3,uVar6,0x41,0xe100000000000000,1);
          if ((uVar5 & 1) != 0) goto LAB_104564274;
          if ((uVar3 != 0x5a) || (uVar5 = uVar6, uVar6 != 0xe100000000000000)) goto LAB_104564238;
LAB_104564434:
          _swift_bridgeObjectRelease(uVar5);
          goto LAB_104564438;
        }
LAB_104564238:
        uVar4 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x5a,0xe100000000000000,uVar3,uVar6,1);
        uVar5 = uVar6;
        if ((uVar4 & 1) == 0) goto LAB_104564434;
LAB_104564274:
        uVar5 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x7a,0xe100000000000000,0x61,0xe100000000000000,1);
        if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10456447c);
          (*pcVar2)();
        }
        if ((uVar3 == 0x61) && (uVar6 == 0xe100000000000000)) {
LAB_1045642a0:
          uVar5 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x7a,0xe100000000000000,uVar3,uVar6,1);
          if ((uVar5 & 1) != 0) {
LAB_1045642dc:
            uVar5 = 0x39;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x39,0xe100000000000000,0x30,0xe100000000000000,1);
            if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x104564480);
              (*pcVar2)();
            }
            if ((uVar3 == 0x30) && (uVar6 == 0xe100000000000000)) {
LAB_104564308:
              uVar5 = 0x39;
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x39,0xe100000000000000,uVar3,uVar6,1);
              if ((uVar6 != 0xe100000000000000 || uVar3 != 0x2e) && ((uVar5 & 1) != 0)) {
LAB_104564330:
                uVar5 = 0;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x2e,0xe100000000000000,uVar3,uVar6,0);
                if (((uVar5 & 1) == 0) && (uVar3 != 0x28 || uVar6 != 0xe100000000000000)) {
                  uVar5 = 0;
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0x28,0xe100000000000000,uVar3,uVar6,0);
                  if (((uVar5 & 1) == 0) && (uVar3 != 0x29 || uVar6 != 0xe100000000000000)) {
                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (0x29,0xe100000000000000,uVar3,uVar6,0);
                  }
                }
              }
            }
            else {
              uVar5 = uVar3;
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar3,uVar6,0x30,0xe100000000000000,1);
              if ((uVar5 & 1) == 0) {
                if ((uVar3 != 0x39) || (uVar6 != 0xe100000000000000)) goto LAB_104564308;
              }
              else if ((uVar3 != 0x2e) || (uVar6 != 0xe100000000000000)) goto LAB_104564330;
            }
          }
        }
        else {
          uVar5 = uVar3;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar3,uVar6,0x61,0xe100000000000000,1);
          if ((uVar5 & 1) != 0) goto LAB_1045642dc;
          if ((uVar3 != 0x7a) || (uVar6 != 0xe100000000000000)) goto LAB_1045642a0;
        }
        uVar5 = uVar6;
        __sSS6appendyySJF(uVar3);
      }
      _swift_bridgeObjectRelease();
      __sSS8IteratorV4nextSJSgyF();
      uVar3 = uVar6;
      uVar6 = uVar5;
    }
    uVar6 = 0xe000000000000000;
LAB_10456444c:
    _swift_bridgeObjectRelease(param_2);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar6;
  return auVar1 << 0x40;
}



/* Entry: 1045647f0; end: 104564a67;  */

undefined * FUN_1045647f0(ulong param_1,undefined *param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uVar3 = param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar3 = (ulong)param_2 >> 0x38 & 0xf;
  }
  if (uVar3 == 0) {
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  puVar7 = param_2;
  puVar8 = param_2;
  _swift_bridgeObjectRetain();
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    puStack_58 = (undefined *)0xe000000000000000;
    uStack_60 = 0;
    lVar9 = 0;
    while( true ) {
      __sSS8IteratorV4nextSJSgyF();
      if (puVar8 == (undefined *)0x0) {
        _swift_bridgeObjectRelease(param_2);
        if (lVar9 == 0) goto LAB_1045649b4;
        func_0x000104564480();
        if (puStack_58 != (undefined *)0x0) {
          puVar8 = puVar6;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar7 = puVar6;
          if (((ulong)puVar8 & 1) == 0) {
            puVar7 = (undefined *)0x0;
            func_0x0001000d182c(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
          }
          uVar3 = *(ulong *)(puVar7 + 0x10);
          puVar8 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
            func_0x0001000d182c(puVar8,uVar3 + 1,1,puVar7);
          }
          *(ulong *)(puVar8 + 0x10) = uVar3 + 1;
          *(undefined8 *)(puVar8 + uVar3 * 0x10 + 0x20) = uStack_60;
          *(undefined **)(puVar8 + uVar3 * 0x10 + 0x28) = puStack_58;
          _swift_bridgeObjectRelease(0xe000000000000000);
          return puVar8;
        }
        _swift_bridgeObjectRelease(0xe000000000000000);
        goto LAB_1045649cc;
      }
      if ((puVar7 == (undefined *)0x2c) && (puVar8 == (undefined *)0xe100000000000000)) break;
      uVar3 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x2c,0xe100000000000000,puVar7,puVar8,0);
      if ((uVar3 & 1) != 0) break;
      puVar4 = puVar8;
      __sSS6appendyySJF(puVar7);
      _swift_bridgeObjectRelease();
      bVar2 = SCARRY8(lVar9,1);
      lVar9 = lVar9 + 1;
      puVar7 = puVar8;
      puVar8 = puVar4;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104564a28);
        (*pcVar1)();
      }
    }
    _swift_bridgeObjectRelease(puVar8);
    if (lVar9 == 0) {
      _swift_bridgeObjectRelease(puVar6);
      puVar6 = param_2;
LAB_1045649b4:
      _swift_bridgeObjectRelease(puVar6);
      puVar6 = (undefined *)0xe000000000000000;
      goto LAB_1045649cc;
    }
    puVar7 = puStack_58;
    func_0x000104564480();
    if (puVar7 == (undefined *)0x0) {
      _swift_bridgeObjectRelease(0xe000000000000000);
      _swift_bridgeObjectRelease(puVar6);
      puVar6 = param_2;
LAB_1045649cc:
      _swift_bridgeObjectRelease(puVar6);
      return (undefined *)0x0;
    }
    puVar4 = puVar6;
    puVar8 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar5 = puVar6;
    if (((ulong)puVar4 & 1) == 0) {
      puVar8 = (undefined *)(*(long *)(puVar6 + 0x10) + 1);
      puVar5 = (undefined *)0x0;
      func_0x0001000d182c(0,puVar8,1,puVar6);
    }
    uVar3 = *(ulong *)(puVar5 + 0x10);
    puVar4 = (undefined *)(uVar3 + 1);
    puVar6 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar3) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      puVar8 = puVar4;
      func_0x0001000d182c(puVar6,puVar4,1,puVar5);
    }
    *(undefined **)(puVar6 + 0x10) = puVar4;
    *(undefined8 *)(puVar6 + uVar3 * 0x10 + 0x20) = uStack_60;
    *(undefined **)(puVar6 + uVar3 * 0x10 + 0x28) = puVar7;
    _swift_bridgeObjectRelease();
    puVar7 = puStack_58;
  } while( true );
}



/* Entry: 104564a68; end: 104564a6b;  */

undefined8 FUN_104564a68(undefined8 param_1)

{
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(0,0xc000000000000000);
  _swift_bridgeObjectRelease(param_1);
  func_0x00010006c090(0,0xc000000000000000);
  return param_1;
}



/* Entry: 104564a6c; end: 104564ab7;  */

undefined8 FUN_104564a6c(undefined8 param_1)

{
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(0,0xc000000000000000);
  _swift_bridgeObjectRelease(param_1);
  func_0x00010006c090(0,0xc000000000000000);
  return param_1;
}



/* Entry: 104564ab8; end: 104564c03;  */

undefined * FUN_104564ab8(long param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar10 = 0;
  uVar11 = *(ulong *)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    plVar9 = (long *)(param_1 + 0x28 + uVar10 * 0x10);
    do {
      if (uVar11 == uVar10) {
        _swift_bridgeObjectRelease(param_1);
        _swift_bridgeObjectRetain(puVar7);
        func_0x00010006c00c(0,0xc000000000000000);
        _swift_bridgeObjectRelease(puVar7);
        func_0x00010006c090(0,0xc000000000000000);
        return puVar7;
      }
      if (*(ulong *)(param_1 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104564c04);
        (*pcVar3)();
      }
      uVar10 = uVar10 + 1;
      lVar4 = plVar9[-1];
      lVar2 = *plVar9;
      _swift_bridgeObjectRetain(lVar2);
      lVar8 = lVar2;
      func_0x000104564480();
      _swift_bridgeObjectRelease(lVar2);
      plVar9 = plVar9 + 2;
    } while (lVar8 == 0);
    puVar5 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar6 = puVar7;
    if (((ulong)puVar5 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
    }
    uVar1 = *(ulong *)(puVar6 + 0x10);
    puVar7 = puVar6;
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
      func_0x0001000d182c(puVar7,uVar1 + 1,1,puVar6);
    }
    *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
    *(long *)(puVar7 + uVar1 * 0x10 + 0x20) = lVar4;
    *(long *)(puVar7 + uVar1 * 0x10 + 0x28) = lVar8;
  } while( true );
}



/* Entry: 104564c04; end: 104564c1f;  */

void FUN_104564c04(void)

{
  undefined8 *unaff_x20;
  
  FUN_104566338(*unaff_x20,unaff_x20[1],unaff_x20[2]);
  return;
}



/* Entry: 104564c20; end: 104564cb7;  */

void FUN_104564c20(long param_1,undefined8 *param_2)

{
  long *unaff_x20;
  long unaff_x21;
  
  FUN_10457b090();
  if (unaff_x21 == 0) {
    FUN_1045647f0();
    _swift_bridgeObjectRelease();
    if (param_1 == 0) {
      FUN_104540590();
      _swift_allocError(&UNK_110788c08,param_2,0,0);
      param_2[1] = 0x10;
      *param_2 = 0;
      _swift_willThrow();
    }
    else {
      _swift_bridgeObjectRelease(*unaff_x20);
      *unaff_x20 = param_1;
    }
  }
  return;
}



/* Entry: 104564cb8; end: 104564d0f;  */

undefined8
FUN_104564cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_104564d10(param_2,param_3,param_4);
  _swift_bridgeObjectRelease_n(PTR___swiftEmptyArrayStorage_11034f1c8,2);
  func_0x00010006c090(0,0xc000000000000000);
  return param_2;
}



/* Entry: 104564d10; end: 104564f33;  */

undefined * FUN_104564d10(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  long lStack_e8;
  long lStack_e0;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  (**(code **)(param_3 + 8))(&uStack_b0,param_1,param_3);
  lVar6 = lStack_a8;
  FUN_1045660d8();
  _swift_bridgeObjectRelease(lStack_a8);
  _swift_release(uStack_b0);
  uStack_68 = uStack_a0;
  FUN_1045666a4(&uStack_68,0x113085008,&UNK_10dd18d40);
  uStack_70 = uStack_98;
  FUN_1045666a4(&uStack_70,0x113085008,&UNK_10dd18d40);
  uStack_78 = uStack_90;
  FUN_1045666a4(&uStack_78,0x112d38270,&UNK_10d905a20);
  uStack_80 = uStack_88;
  FUN_1045666a4(&uStack_80,0x113085010,&UNK_10dd18d50);
  lVar11 = *(long *)(lVar6 + 0x10);
  if (lVar11 == 0) {
    _swift_bridgeObjectRelease(lVar6);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,lVar11,0);
    puVar5 = PTR___sSWs19_HasContiguousBytessWP_11034dbc8;
    puVar4 = PTR___sSWN_11034dbc0;
    plVar12 = (long *)(lVar6 + 0x28);
    do {
      puVar10 = puStack_c0;
      lVar1 = plVar12[-1];
      lVar3 = *plVar12;
      if (lVar1 == 0) {
        lVar8 = 0;
        lVar9 = 0;
      }
      else {
        lVar9 = lVar3 - lVar1;
        lVar8 = lVar1;
      }
      __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
      if (lVar9 == 0) {
        puStack_d0 = puVar4;
        puStack_c8 = puVar5;
        plVar7 = &lStack_e8;
        lStack_e8 = lVar1;
        lStack_e0 = lVar3;
        func_0x0001000a8868(plVar7,puVar4);
        lVar8 = *plVar7;
        if (lVar8 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = plVar7[1] - lVar8;
        }
        __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
        func_0x0001000834e4(&lStack_e8);
      }
      uVar2 = *(ulong *)(puVar10 + 0x10);
      puStack_c0 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar2) {
        func_0x000100403514(1 < *(ulong *)(puVar10 + 0x18),uVar2 + 1,1);
      }
      puVar10 = puStack_c0;
      plVar12 = plVar12 + 2;
      *(ulong *)(puStack_c0 + 0x10) = uVar2 + 1;
      *(long *)(puStack_c0 + uVar2 * 0x10 + 0x20) = lVar8;
      *(long *)(puStack_c0 + uVar2 * 0x10 + 0x28) = lVar9;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    _swift_bridgeObjectRelease(lVar6);
  }
  return puVar10;
}



/* Entry: 104564f34; end: 1045650db;  */

undefined *
FUN_104564f34(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar8 = *(ulong *)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      if (*(ulong *)(param_1 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1045650dc);
        (*pcVar2)();
      }
      puVar3 = *(undefined1 **)(param_1 + uVar9 * 8 + 0x20);
      lVar7 = param_3;
      FUN_1045650dc(puVar3,param_3,param_4,param_5);
      if (lVar7 == 0) {
        FUN_1045662f8();
        _swift_allocError(&UNK_110788220,puVar3,0,0);
        *puVar3 = 1;
        _swift_willThrow();
        _swift_bridgeObjectRelease(PTR___swiftEmptyArrayStorage_11034f1c8);
        _swift_bridgeObjectRelease(param_1);
        func_0x00010006c090(0,0xc000000000000000);
        _swift_bridgeObjectRelease(puVar6);
        return puVar6;
      }
      puVar4 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar1 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x0001000d182c(puVar6,uVar1 + 1,1,puVar5);
      }
      uVar9 = uVar9 + 1;
      *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
      *(undefined1 **)(puVar6 + uVar1 * 0x10 + 0x20) = puVar3;
      *(long *)(puVar6 + uVar1 * 0x10 + 0x28) = lVar7;
    } while (uVar8 != uVar9);
  }
  _swift_bridgeObjectRelease(PTR___swiftEmptyArrayStorage_11034f1c8);
  _swift_bridgeObjectRelease(param_1);
  func_0x00010006c090(0,0xc000000000000000);
  return puVar6;
}



/* Entry: 1045650dc; end: 104565317;  */

void FUN_1045650dc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  plVar1 = &lStack_b0;
  (**(code **)(param_4 + 8))(&uStack_88,param_2);
  lStack_38 = lStack_80;
  if ((*(long *)(lStack_80 + 0x10) == 0) || (func_0x00010035a314(), (param_4 & 1) == 0)) {
    _swift_release(uStack_88);
    FUN_1045666a4(&lStack_38,0x113085000,&UNK_10dd187f0);
    lStack_b0 = lStack_78;
    FUN_1045666a4(&lStack_b0,0x113085008,&UNK_10dd18d40);
    lStack_40 = lStack_70;
    FUN_1045666a4(&lStack_40,0x113085008,&UNK_10dd18d40);
    lStack_48 = lStack_68;
    FUN_1045666a4(&lStack_48,0x112d38270,&UNK_10d905a20);
    lStack_50 = lStack_60;
    FUN_1045666a4(&lStack_50,0x113085010,&UNK_10dd18d50);
  }
  else {
    lVar4 = *(long *)(lStack_80 + 0x38) + param_1 * 0x28;
    lVar2 = *(long *)(lVar4 + 0x18);
    lVar4 = *(long *)(lVar4 + 0x20);
    _swift_release(uStack_88);
    FUN_1045666a4(&lStack_38,0x113085000,&UNK_10dd187f0);
    lStack_40 = lStack_78;
    FUN_1045666a4(&lStack_40,0x113085008,&UNK_10dd18d40);
    lStack_48 = lStack_70;
    FUN_1045666a4(&lStack_48,0x113085008,&UNK_10dd18d40);
    lStack_50 = lStack_68;
    FUN_1045666a4(&lStack_50,0x112d38270,&UNK_10d905a20);
    lStack_58 = lStack_60;
    FUN_1045666a4(&lStack_58,0x113085010,&UNK_10dd18d50);
    if (lVar2 == 0) {
      lVar3 = 0;
      __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(0);
    }
    else {
      lVar3 = lVar4 - lVar2;
      __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(lVar2);
    }
    if (lVar3 == 0) {
      lStack_b0 = lVar2;
      lStack_a8 = lVar4;
      puStack_98 = PTR___sSWN_11034dbc0;
      puStack_90 = PTR___sSWs19_HasContiguousBytessWP_11034dbc8;
      func_0x0001000a8868();
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = plVar1[1] - lVar2;
      }
      __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(lVar2,lVar4);
      func_0x0001000834e4(&lStack_b0);
    }
  }
  return;
}



/* Entry: 104565318; end: 104565417;  */

void FUN_104565318(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  
  puVar2 = param_1;
  FUN_1045804c0(param_1,param_2,param_4,param_5);
  if (((ulong)puVar2 & 1) == 0) {
    FUN_1045662f8();
    _swift_allocError(&UNK_110788220,puVar2,0,0);
    *puVar2 = 0;
    _swift_willThrow();
  }
  else {
    uVar5 = *unaff_x20;
    _swift_bridgeObjectRetain(param_2);
    uVar3 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      func_0x0001000d182c(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar3 = *(ulong *)(uVar4 + 0x10);
    uVar5 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      func_0x0001000d182c(uVar5,uVar3 + 1,1,uVar4);
    }
    *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
    lVar1 = uVar5 + uVar3 * 0x10;
    *(undefined1 **)(lVar1 + 0x20) = param_1;
    *(undefined8 *)(lVar1 + 0x28) = param_2;
    *unaff_x20 = uVar5;
  }
  return;
}



/* Entry: 104565418; end: 1045655fb;  */

/* WARNING: Removing unreachable block (ram,0x0001045655f0) */

undefined * FUN_104565418(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong *puVar13;
  ulong uStack_68;
  ulong uStack_60;
  
  uStack_68 = param_1;
  _swift_bridgeObjectRetain();
  func_0x0001016f8a58(&uStack_68);
  uVar4 = uStack_68;
  lVar12 = *(long *)(uStack_68 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar12 != 0) {
    puVar13 = (ulong *)(uStack_68 + 0x28);
    do {
      uVar1 = puVar13[-1];
      uVar3 = *puVar13;
      plVar11 = (long *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*plVar11 == 0) {
        _swift_bridgeObjectRetain(uVar3);
        puVar7 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar7 & 1) == 0) {
          lVar10 = 1;
LAB_10456557c:
          puVar9 = (undefined *)0x0;
          func_0x0001000d182c(0,lVar10,1,puVar8);
        }
LAB_104565534:
        uVar2 = *(ulong *)(puVar9 + 0x10);
        puVar8 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          func_0x0001000d182c(puVar8,uVar2 + 1,1,puVar9);
        }
        *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
        *(ulong *)(puVar8 + uVar2 * 0x10 + 0x20) = uVar1;
        *(ulong *)(puVar8 + uVar2 * 0x10 + 0x28) = uVar3;
      }
      else {
        uVar2 = plVar11[*plVar11 * 2];
        uVar6 = (plVar11 + *plVar11 * 2)[1];
        if ((uVar1 != uVar2 || uVar3 != uVar6) &&
           (uVar5 = uVar1,
           __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (uVar1,uVar3,uVar2,uVar6,0), (uVar5 & 1) == 0)) {
          uStack_68 = uVar2;
          uStack_60 = uVar6;
          _swift_bridgeObjectRetain(uVar3);
          _swift_bridgeObjectRetain(uVar6);
          __sSS6appendyySSF(0x2e,0xe100000000000000);
          uVar2 = uStack_60;
          uVar6 = uStack_68;
          __sSS9hasPrefixySbSSF(uStack_68,uStack_60,uVar1,uVar3);
          _swift_bridgeObjectRelease(uVar2);
          if ((uVar6 & 1) == 0) {
            puVar7 = puVar8;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((ulong)puVar7 & 1) == 0) {
              lVar10 = *(long *)(puVar8 + 0x10) + 1;
              goto LAB_10456557c;
            }
            goto LAB_104565534;
          }
          _swift_bridgeObjectRelease(uVar3);
        }
      }
      puVar13 = puVar13 + 2;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  _swift_release(uVar4);
  _swift_bridgeObjectRetain(puVar8);
  func_0x00010006c00c(0,0xc000000000000000);
  _swift_bridgeObjectRelease(puVar8);
  func_0x00010006c090(0,0xc000000000000000);
  return puVar8;
}



/* Entry: 1045655fc; end: 104565ebb;  */

undefined * FUN_1045655fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  long *plVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_68;
  
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  lStack_b0 = param_4;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_1);
  func_0x00010109a32c();
  lVar6 = lStack_b0;
  uVar14 = *(ulong *)(lStack_b0 + 0x10);
  if (uVar14 == 0) {
    _swift_bridgeObjectRelease(lStack_b0);
    puVar10 = PTR___swiftEmptySetSingleton_11034f1d8;
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar15 = 0;
    lVar1 = lStack_b0 + 0x20;
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      puVar10 = puStack_68;
      if (*(ulong *)(lVar6 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x104565834);
        (*pcVar7)();
      }
      puVar2 = (ulong *)(lVar1 + uVar15 * 0x10);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      if (*(long *)(puStack_68 + 0x10) == 0) {
        _swift_bridgeObjectRetain(uVar4);
      }
      else {
        __ss6HasherV5_seedABSi_tcfC(&lStack_b0,*(undefined8 *)(puStack_68 + 0x28));
        _swift_bridgeObjectRetain(uVar4);
        plVar8 = &lStack_b0;
        __sSS4hash4intoys6HasherVz_tF(plVar8,uVar3,uVar4);
        __ss6HasherV9_finalizeSiyF();
        uVar13 = -1L << ((ulong)(byte)puVar10[0x20] & 0x3f);
        uVar16 = (ulong)plVar8 & (uVar13 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar10 + (uVar16 >> 6) * 8 + 0x38) >> (uVar16 & 0x3f) & 1) != 0) {
          do {
            puVar2 = (ulong *)(*(long *)(puVar10 + 0x30) + uVar16 * 0x10);
            uVar9 = *puVar2;
            uVar5 = puVar2[1];
            if ((uVar9 == uVar3 && uVar5 == uVar4) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar9,uVar5,uVar3,uVar4,0), (uVar9 & 1) != 0)) {
              _swift_bridgeObjectRelease(uVar4);
              goto LAB_104565674;
            }
            uVar16 = uVar16 + 1 & ~uVar13;
          } while ((*(ulong *)(puVar10 + (uVar16 >> 6) * 8 + 0x38) >> (uVar16 & 0x3f) & 1) != 0);
        }
      }
      _swift_bridgeObjectRetain(uVar4);
      func_0x000100403b00(&lStack_b0,uVar3,uVar4);
      _swift_bridgeObjectRelease(uStack_a8);
      puVar10 = puVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar11 = puVar12;
      if (((ulong)puVar10 & 1) == 0) {
        puVar11 = (undefined *)0x0;
        func_0x0001000d182c(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
      }
      uVar13 = *(ulong *)(puVar11 + 0x10);
      puVar12 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar13) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
        func_0x0001000d182c(puVar12,uVar13 + 1,1,puVar11);
      }
      *(ulong *)(puVar12 + 0x10) = uVar13 + 1;
      *(ulong *)(puVar12 + uVar13 * 0x10 + 0x20) = uVar3;
      *(ulong *)(puVar12 + uVar13 * 0x10 + 0x28) = uVar4;
LAB_104565674:
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar14);
    _swift_bridgeObjectRelease(lVar6);
    puVar10 = puStack_68;
  }
  _swift_bridgeObjectRelease(puVar10);
  return puVar12;
}



/* Entry: 104565ebc; end: 104565f8f;  */

bool FUN_104565ebc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_5 + -8);
  lVar2 = param_5;
  lVar3 = param_6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  (**(code **)(lVar3 + 0x10))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2,lVar3);
  lVar2 = *(long *)(param_2 + 0x10) + 1;
  puVar4 = (undefined8 *)(param_2 + 0x28);
  do {
    lVar2 = lVar2 + -1;
    if (lVar2 == 0) break;
    uVar1 = puVar4[-1];
    FUN_104580578(uVar1,*puVar4,param_5,param_6);
    puVar4 = puVar4 + 2;
  } while ((uVar1 & 1) != 0);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_5);
  return lVar2 == 0;
}



/* Entry: 104565f90; end: 104565f9f;  */

bool FUN_104565f90(char param_1,char param_2)

{
  return param_1 == param_2;
}



/* Entry: 104565fa0; end: 104566007;  */

void FUN_104565fa0(undefined8 param_1,undefined1 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 104566008; end: 10456601b;  */

bool FUN_104566008(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10456601c; end: 1045660c7;  */

void FUN_10456601c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045660c8; end: 1045660d7;  */

void FUN_1045660c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1045660d8; end: 1045662f7;  */

undefined * FUN_1045660d8(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    func_0x00010455974c(0,lVar5,0);
    uVar1 = param_1 + 0x40;
    uVar9 = uVar1;
    __ss10_HashTableV11startBucketAB0D0Vvg
              (uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar12 = 0;
    do {
      if (uVar9 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1045662e8);
        (*pcVar4)();
      }
      uVar11 = uVar9 >> 6;
      uVar13 = 1L << (uVar9 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar11 * 8) & uVar13) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1045662ec);
        (*pcVar4)();
      }
      iVar2 = *(int *)(param_1 + 0x24);
      lVar6 = *(long *)(param_1 + 0x38) + uVar9 * 0x28;
      uVar15 = *(undefined8 *)(lVar6 + 0x20);
      uVar14 = *(undefined8 *)(lVar6 + 0x18);
      uVar10 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar10) {
        func_0x00010455974c(1 < *(ulong *)(puVar3 + 0x18),uVar10 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar10 + 1;
      *(undefined8 *)(puVar3 + uVar10 * 0x10 + 0x28) = uVar15;
      *(undefined8 *)(puVar3 + uVar10 * 0x10 + 0x20) = uVar14;
      uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar10 <= uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1045662f0);
        (*pcVar4)();
      }
      uVar7 = *(ulong *)(uVar1 + uVar11 * 8);
      if ((uVar7 & uVar13) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1045662f4);
        (*pcVar4)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1045662f8);
        (*pcVar4)();
      }
      uVar7 = uVar7 & -2L << (uVar9 & 0x3f);
      if (uVar7 == 0) {
        lVar6 = uVar11 << 6;
        puVar8 = (ulong *)(param_1 + 0x48 + uVar11 * 8);
        do {
          uVar11 = uVar11 + 1;
          if (uVar10 + 0x3f >> 6 <= uVar11) {
            FUN_1045666e4();
            uVar9 = uVar10;
            goto LAB_104566178;
          }
          uVar9 = *puVar8;
          lVar6 = lVar6 + 0x40;
          puVar8 = puVar8 + 1;
        } while (uVar9 == 0);
        FUN_1045666e4();
        uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + lVar6;
      }
      else {
        uVar11 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar9 & 0x7fffffffffffffc0;
      }
LAB_104566178:
      lVar12 = lVar12 + 1;
    } while (lVar12 != lVar5);
  }
  return puVar3;
}



/* Entry: 1045662f8; end: 104566337;  */

void FUN_1045662f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113085d48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd17f48;
  _swift_getWitnessTable(&UNK_10dd17f48,&UNK_110788220);
  puRam0000000113085d48 = puVar1;
  return;
}



/* Entry: 104566338; end: 1045664fb;  */

void FUN_104566338(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  
  lVar10 = *(long *)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar10 != 0) {
    puVar11 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar2 = puVar11[-1];
      puVar3 = (undefined1 *)*puVar11;
      _swift_bridgeObjectRetain(puVar3);
      puVar8 = puVar3;
      FUN_104564080();
      _swift_bridgeObjectRelease();
      if (puVar8 == (undefined1 *)0x0) {
        func_0x0001045406b8();
        _swift_allocError(&UNK_110788dc0,puVar3,0,0);
        *puVar3 = 3;
        _swift_willThrow();
        _swift_bridgeObjectRelease(puVar6);
        return;
      }
      puVar4 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x0001000d182c(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar1 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x0001000d182c(puVar6,uVar1 + 1,1,puVar5);
      }
      puVar11 = puVar11 + 2;
      *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x20) = uVar2;
      *(undefined1 **)(puVar6 + uVar1 * 0x10 + 0x28) = puVar8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  uVar2 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar7 = uVar2;
  func_0x00010011d734();
  uVar9 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x2c,0xe100000000000000,uVar2,uVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRetain(0xe100000000000000);
  __sSS6appendyySSF(0x22,0xe100000000000000);
  _swift_bridgeObjectRelease(puVar6);
  _swift_bridgeObjectRelease(0xe100000000000000);
  return;
}



/* Entry: 1045664fc; end: 1045664ff;  */

void FUN_1045664fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113085d50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd17ee0;
  _swift_getWitnessTable(&UNK_10dd17ee0,&UNK_110788220);
  puRam0000000113085d50 = puVar1;
  return;
}



/* Entry: 104566500; end: 10456653f;  */

void FUN_104566500(void)

{
  undefined *puVar1;
  
  if (puRam0000000113085d50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd17ee0;
  _swift_getWitnessTable(&UNK_10dd17ee0,&UNK_110788220);
  puRam0000000113085d50 = puVar1;
  return;
}



/* Entry: 104566540; end: 1045666a3;  */

int FUN_104566540(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1045665bc;
        goto LAB_1045665a0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1045665a0:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1045665bc:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1045666a4; end: 1045666e3;  */

undefined8 FUN_1045666a4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1045666e4; end: 1045666ff;  */

void FUN_1045666e4(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 104566700; end: 10456679f;  */

undefined8 FUN_104566700(undefined8 param_1)

{
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(0,0xc000000000000000);
  _swift_bridgeObjectRelease(param_1);
  func_0x00010006c090(0,0xc000000000000000);
  return param_1;
}



/* Entry: 1045667a0; end: 10456692b;  */

undefined1  [16] FUN_1045667a0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long unaff_x21;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_b0 [48];
  undefined *puStack_80;
  undefined2 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uStack_78 = 0x100;
  func_0x000104540f24(0x5b,0xe100000000000000);
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 != 0) {
    uStack_68 = *(undefined8 *)(param_2 + 0x28);
    uStack_70 = *(undefined8 *)(param_2 + 0x20);
    uStack_58 = *(undefined8 *)(param_2 + 0x38);
    uStack_60 = *(undefined8 *)(param_2 + 0x30);
    uStack_48 = *(undefined8 *)(param_2 + 0x48);
    uStack_50 = *(undefined8 *)(param_2 + 0x40);
    FUN_104567028(&uStack_70,auStack_b0);
    func_0x000104540d74("",0);
    FUN_10456a514(&puStack_80,(uint)param_1 & 0x1010101);
    if (unaff_x21 != 0) {
      puVar2 = &uStack_70;
      func_0x0001045671e0(&uStack_70);
      _swift_bridgeObjectRelease(puStack_80);
      goto LAB_104566908;
    }
    func_0x0001045671e0(&uStack_70);
    lVar3 = lVar3 + -1;
    if (lVar3 != 0) {
      puVar2 = (undefined8 *)(param_2 + 0x50);
      do {
        uStack_68 = puVar2[1];
        uStack_70 = *puVar2;
        uStack_58 = puVar2[3];
        uStack_60 = puVar2[2];
        uStack_48 = puVar2[5];
        uStack_50 = puVar2[4];
        FUN_104567028(&uStack_70,auStack_b0);
        func_0x000104540d74(&DAT_10f68e8ee,1);
        FUN_10456a514(&puStack_80,(uint)param_1 & 0x1010101);
        func_0x0001045671e0(&uStack_70);
        puVar2 = puVar2 + 6;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  func_0x000104540f24(0x5d,0xe100000000000000);
  puVar1 = puStack_80;
  param_1 = *(undefined8 *)(puStack_80 + 0x10);
  _swift_bridgeObjectRetain(puStack_80);
  puVar2 = (undefined8 *)(puVar1 + 0x20);
  __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(puVar2,param_1);
  _swift_bridgeObjectRelease_n(puVar1,2);
LAB_104566908:
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = puVar2;
  return auVar4;
}



/* Entry: 10456692c; end: 104566cff;  */

/* WARNING: Removing unreachable block (ram,0x000104566c04) */
/* WARNING: Removing unreachable block (ram,0x000104566ab0) */

void FUN_10456692c(long *param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar7;
  
  FUN_10457e0a0();
  lVar5 = param_1[2];
  lVar6 = *param_1;
  if (lVar6 == 0) {
    if (lVar5 != 0) goto LAB_104566984;
  }
  else if (lVar5 != param_1[1] - lVar6) {
LAB_104566984:
    if (*(char *)(lVar6 + lVar5) == 'n') {
      uVar2 = 0;
      func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
      _swift_initStaticObject();
      FUN_10457eae4();
      if ((uVar2 & 1) != 0) {
        return;
      }
    }
  }
  puVar3 = (undefined8 *)0x5b;
  FUN_10457ed38();
  if (unaff_x21 == 0) {
    lVar6 = param_1[0xb];
    lVar5 = lVar6 + -1;
    if (SBORROW8(lVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104566ca8);
      (*pcVar1)();
    }
    param_1[0xb] = lVar5;
    if (lVar5 < 0) {
      FUN_104540590();
      _swift_allocError(&UNK_110788c08,puVar3,0,0);
      puVar3[1] = 0x13;
      *puVar3 = 0;
      _swift_willThrow();
    }
    else {
      func_0x00010457b340();
      if (((ulong)puVar3 & 1) == 0) {
        FUN_10456a7f0(param_1);
        do {
          uVar7 = *unaff_x20;
          FUN_1045670a0(0,0,0x3000000000000000,0xff);
          func_0x00010006c00c(0,0xc000000000000000);
          uVar2 = uVar7;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar4 = uVar7;
          if ((uVar2 & 1) == 0) {
            uVar4 = 0;
            FUN_10454e59c(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
          }
          uVar2 = *(ulong *)(uVar4 + 0x10);
          uVar7 = uVar4;
          if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar2) {
            uVar7 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
            FUN_10454e59c(uVar7,uVar2 + 1,1,uVar4);
          }
          *(ulong *)(uVar7 + 0x10) = uVar2 + 1;
          lVar5 = uVar7 + uVar2 * 0x30;
          *(undefined8 *)(lVar5 + 0x20) = 0;
          *(undefined8 *)(lVar5 + 0x28) = 0;
          *(undefined8 *)(lVar5 + 0x30) = 0x3000000000000000;
          *(undefined1 *)(lVar5 + 0x38) = 0xff;
          *(undefined8 *)(lVar5 + 0x40) = 0;
          *(undefined8 *)(lVar5 + 0x48) = 0xc000000000000000;
          *unaff_x20 = uVar7;
          FUN_10457e0a0();
          uVar2 = param_1[2];
          lVar5 = *param_1;
          if (lVar5 == 0) {
            if (uVar2 != 0) goto LAB_104566b94;
          }
          else if (uVar2 != param_1[1] - lVar5) {
LAB_104566b94:
            if (*(char *)(lVar5 + uVar2) == ']') goto LAB_104566c48;
          }
          FUN_10457ed38(0x2c);
          FUN_104567140(0,0,0x3000000000000000,0xff);
          func_0x00010006c090(0,0xc000000000000000);
          FUN_10456a7f0(param_1);
        } while( true );
      }
      if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104566cac);
        (*pcVar1)();
      }
      param_1[0xb] = lVar6;
      if (param_1[4] < lVar6) {
LAB_104566cb4:
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000039,0x800000010f207ab0,
                   "SwiftProtobuf/JSONScanner.swift",0x1f,2,0x1ab,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104566d00);
        (*pcVar1)();
      }
    }
  }
  return;
LAB_104566c48:
  if ((lVar5 == 0) || ((ulong)(param_1[1] - lVar5) <= uVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104566cb0);
    (*pcVar1)();
  }
  param_1[2] = uVar2 + 1;
  lVar5 = param_1[0xb] + 1;
  if (SCARRY8(param_1[0xb],1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104566cb4);
    (*pcVar1)();
  }
  param_1[0xb] = lVar5;
  if (lVar5 <= param_1[4]) {
    FUN_104567140(0,0,0x3000000000000000,0xff);
    func_0x00010006c090(0,0xc000000000000000);
    return;
  }
  goto LAB_104566cb4;
}



/* Entry: 104566d00; end: 104566d2f;  */

void FUN_104566d00(uint param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1045667a0(param_1 & 0x1010101,*unaff_x20);
  return;
}



/* Entry: 104566d30; end: 104566d5b;  */

undefined8 FUN_104566d30(undefined8 param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104566d58);
    (*pcVar1)();
  }
  if (param_2 < *(ulong *)(param_3 + 0x10)) {
    FUN_10460cda8(param_1,param_3 + param_2 * 0x30 + 0x20);
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104566d5c);
  (*pcVar1)();
}



/* Entry: 104566d5c; end: 104566e8b;  */

void FUN_104566d5c(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  uVar3 = *unaff_x20;
  uVar2 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar2 & 1) == 0) {
    func_0x000104543f44();
  }
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104566dd0);
    (*pcVar1)();
  }
  if (param_2 < *(ulong *)(uVar3 + 0x10)) {
    func_0x000104567064(param_1,uVar3 + param_2 * 0x30 + 0x20);
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104566dd4);
  (*pcVar1)();
}



/* Entry: 104566e8c; end: 104567027;  */

void FUN_104566e8c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = *param_1;
  uVar5 = param_1[1];
  uVar15 = param_1[2];
  uVar9 = *(undefined1 *)(param_1 + 3);
  uVar2 = param_1[4];
  uVar6 = param_1[5];
  uVar16 = param_1[8];
  if ((param_2 & 1) == 0) {
    _swift_isUniquelyReferenced_nonNull_native();
    lVar17 = param_1[8];
    if ((uVar16 & 1) == 0) {
      func_0x000104543f44();
    }
    if (*(ulong *)(lVar17 + 0x10) <= (ulong)param_1[6]) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x104567028);
      (*pcVar11)();
    }
    plVar14 = (long *)param_1[7];
    lVar13 = lVar17 + param_1[6] * 0x30;
    uVar3 = *(undefined8 *)(lVar13 + 0x20);
    uVar7 = *(undefined8 *)(lVar13 + 0x28);
    uVar12 = *(undefined8 *)(lVar13 + 0x30);
    uVar4 = *(undefined8 *)(lVar13 + 0x40);
    uVar8 = *(undefined8 *)(lVar13 + 0x48);
    *(undefined8 *)(lVar13 + 0x20) = uVar1;
    *(undefined8 *)(lVar13 + 0x28) = uVar5;
    *(undefined8 *)(lVar13 + 0x30) = uVar15;
    uVar10 = *(undefined1 *)(lVar13 + 0x38);
    *(undefined1 *)(lVar13 + 0x38) = uVar9;
    *(undefined8 *)(lVar13 + 0x40) = uVar2;
    *(undefined8 *)(lVar13 + 0x48) = uVar6;
    FUN_104567140(uVar3,uVar7,uVar12,uVar10);
    func_0x00010006c090(uVar4,uVar8);
    *plVar14 = lVar17;
  }
  else {
    FUN_1045670a0(uVar1,uVar5,uVar15,uVar9);
    func_0x00010006c00c(uVar2,uVar6);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar17 = param_1[8];
    if ((uVar16 & 1) == 0) {
      func_0x000104543f44();
    }
    if (*(ulong *)(lVar17 + 0x10) <= (ulong)param_1[6]) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x104567014);
      (*pcVar11)();
    }
    plVar14 = (long *)param_1[7];
    lVar13 = lVar17 + param_1[6] * 0x30;
    uVar3 = *(undefined8 *)(lVar13 + 0x20);
    uVar7 = *(undefined8 *)(lVar13 + 0x28);
    uVar12 = *(undefined8 *)(lVar13 + 0x30);
    uVar4 = *(undefined8 *)(lVar13 + 0x40);
    uVar8 = *(undefined8 *)(lVar13 + 0x48);
    *(undefined8 *)(lVar13 + 0x20) = uVar1;
    *(undefined8 *)(lVar13 + 0x28) = uVar5;
    *(undefined8 *)(lVar13 + 0x30) = uVar15;
    uVar10 = *(undefined1 *)(lVar13 + 0x38);
    *(undefined1 *)(lVar13 + 0x38) = uVar9;
    *(undefined8 *)(lVar13 + 0x40) = uVar2;
    *(undefined8 *)(lVar13 + 0x48) = uVar6;
    FUN_104567140(uVar3,uVar7,uVar12,uVar10);
    func_0x00010006c090(uVar4,uVar8);
    *plVar14 = lVar17;
    uVar1 = param_1[4];
    uVar2 = param_1[5];
    FUN_104567140(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3));
    func_0x00010006c090(uVar1,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 104567028; end: 10456709f;  */

undefined8 FUN_104567028(undefined8 param_1,undefined8 param_2)

{
  FUN_10460cda8(param_2,param_1);
  return param_2;
}



/* Entry: 1045670a0; end: 1045670c3;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_1045670a0(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  
  if (((param_3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0 &&
      ((param_4 ^ 0xffffffff) & 0xff) == 0) {
    return;
  }
  uVar1 = (uint)(param_3 >> 0x3c) & 3 | (param_4 & 0x3f) << 2;
  if (uVar1 == 5) {
    _swift_bridgeObjectRetain();
    param_3 = param_3 & 0xcfffffffffffffff;
  }
  else {
    if (uVar1 != 4) {
      if (uVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
        return;
      }
      return;
    }
    _swift_bridgeObjectRetain();
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1045670c4; end: 10456713f;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_1045670c4(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = (uint)(param_3 >> 0x3c) & 3 | (param_4 & 0x3f) << 2;
  if (uVar1 == 5) {
    _swift_bridgeObjectRetain();
    param_3 = param_3 & 0xcfffffffffffffff;
  }
  else {
    if (uVar1 != 4) {
      if (uVar1 != 2) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
      return;
    }
    _swift_bridgeObjectRetain();
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 104567140; end: 104567163;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_104567140(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  
  if (((param_3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0 &&
      ((param_4 ^ 0xffffffff) & 0xff) == 0) {
    return;
  }
  uVar1 = (uint)(param_3 >> 0x3c) & 3 | (param_4 & 0x3f) << 2;
  if (uVar1 == 5) {
    _swift_bridgeObjectRelease();
    param_3 = param_3 & 0xcfffffffffffffff;
  }
  else {
    if (uVar1 != 4) {
      if (uVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
        return;
      }
      return;
    }
    _swift_bridgeObjectRelease();
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}


