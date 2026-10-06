/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 000e9864; end: 000e99af;  */

undefined1  [16] FUN_000e9864(void)

{
  return ZEXT816(0x9ac790);
}



/* Entry: 000e99b0; end: 000e9bab;  */

void FUN_000e99b0(long param_1,undefined8 param_2)

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
  FUN_00138a3c();
  if ((*(char **)(param_1 + 0x28) == *(char **)(param_1 + 0x30)) ||
     (**(char **)(param_1 + 0x28) != '[')) {
    uVar1 = *(ulong *)(unaff_x20 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *(long *)(unaff_x20 + 0x10);
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      FUN_000c6ae4(0);
      _swift_allocObject();
      FUN_000c2fc4(lVar4,uVar3);
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
      FUN_000c6ae4(0);
      _swift_allocObject();
      FUN_000c2fc4(lVar4,uVar3);
      *(long *)(unaff_x20 + 0x10) = lVar4;
    }
    uStack_88 = 0xc000000000000000;
    uStack_90 = 0;
    uStack_68 = 0;
    _swift_beginAccess(lVar4 + 0x20,auStack_a8,0x21,0);
    FUN_000c70d0(&uStack_90,lVar4 + 0x20);
    _swift_endAccess(auStack_a8);
    uVar1 = *(ulong *)(unaff_x20 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      FUN_000c6ae4(0);
      _swift_allocObject();
      FUN_000c2fc4(uVar3,uVar2);
      *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
    }
    FUN_000ea1ac();
  }
  else {
    FUN_00139a60();
    if (unaff_x21 == 0) {
      uVar1 = *(ulong *)(unaff_x20 + 0x10);
      _swift_isUniquelyReferenced_nonNull_native();
      uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
      if ((uVar1 & 1) == 0) {
        uVar2 = 0;
        FUN_000c6ae4(0);
        _swift_allocObject();
        FUN_000c2fc4(uVar3,uVar2);
        *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
      }
      FUN_000c3b7c(lVar4,param_2,param_1);
      _swift_bridgeObjectRelease(param_2);
    }
  }
  return;
}



/* Entry: 000e9bac; end: 000e9d7f;  */

void FUN_000e9bac(long param_1,ulong param_2,undefined8 param_3,undefined1 *param_4)

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
    FUN_0001393c(param_1,uVar2);
    (**(code **)(lVar3 + 0x20))(uVar2,lVar3);
    if ((uVar2 & 1) == 0) {
      _swift_bridgeObjectRelease();
      FUN_000c6f14();
      _swift_allocError(&UNK_009ab310,param_4,0,0);
      *param_4 = 1;
      _swift_willThrow();
      FUN_00011670(param_1);
      return;
    }
  }
  if (lRam0000000000aed8b0 != -1) {
    _swift_once(0xaed8b0,FUN_000c2f84);
  }
  uVar2 = uRam0000000000b64ad0;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_0001393c(param_1,uVar5);
  _swift_retain(uVar2);
  FUN_000eb5a4(lVar3,param_3,param_4,uVar5,uVar1);
  _swift_bridgeObjectRelease(param_4);
  uVar4 = uVar2;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    FUN_000c6ae4(0);
    _swift_allocObject();
    FUN_000c2fc4(uVar2,uVar5);
  }
  _swift_beginAccess(uVar2 + 0x10,auStack_68,1,0);
  uVar5 = *(undefined8 *)(uVar2 + 0x18);
  *(long *)(uVar2 + 0x10) = lVar3;
  *(undefined8 *)(uVar2 + 0x18) = param_3;
  _swift_bridgeObjectRelease(uVar5);
  FUN_000ea51c(param_1,auStack_98);
  uStack_70 = 1;
  _swift_beginAccess(uVar2 + 0x20,auStack_b0,0x21,0);
  FUN_000c70d0(auStack_98,uVar2 + 0x20);
  _swift_endAccess(auStack_b0);
  FUN_00011670(param_1);
  return;
}



/* Entry: 000e9d80; end: 000e9e17;  */

void FUN_000e9d80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  undefined1 auStack_58 [40];
  
  func_0x000c6fb4(param_3,auStack_58);
  FUN_000ea560(param_1,param_2,100,0,auStack_58);
  if (unaff_x21 == 0) {
    FUN_000ea918(param_3);
  }
  else {
    FUN_000ea918(param_3);
  }
  return;
}



/* Entry: 000e9e18; end: 000e9e43;  */

undefined8 FUN_000e9e18(undefined8 param_1)

{
  undefined8 extraout_x8;
  long unaff_x21;
  
  FUN_000ea560();
  if (unaff_x21 != 0) {
    param_1 = extraout_x8;
  }
  return param_1;
}



/* Entry: 000e9e44; end: 000ea06b;  */

void FUN_000e9e44(byte *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

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
    FUN_000c735c();
    uStack_b8 = 0;
    lVar9 = 0;
    func_0x000dfc88();
    _swift_allocObject();
    uVar10 = 0x80;
    _swift_slowAlloc(0x80,0xffffffffffffffff);
    *(undefined8 *)(lVar9 + 0x10) = uVar10;
    *(undefined8 *)(lVar9 + 0x18) = 0x80;
    pbVar1 = param_1 + (param_2 - (long)param_1);
    pbStack_e8 = param_1;
    pbStack_e0 = pbVar1;
    lStack_d8 = lVar9;
    func_0x000c6fb4(param_5,auStack_110);
    bStack_c8 = (byte)param_4 & 1;
    bStack_c7 = (byte)((ulong)param_4 >> 8) & 1;
    lStack_c0 = param_3 + -1;
    lStack_d0 = param_3;
    if (SBORROW8(param_3,1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0xea050);
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
          if (pbVar12 == pbVar1) goto LAB_000e9f60;
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
LAB_000e9f60:
    if (lRam0000000000af0638 != -1) {
      _swift_once(0xaf0638,FUN_00140a40);
    }
    uVar6 = uRam0000000000b64b18;
    uVar5 = uRam0000000000b64b10;
    uVar4 = uRam0000000000b64b08;
    uVar3 = uRam0000000000b64b00;
    uVar10 = uRam0000000000b64af8;
    uStack_a8 = uRam0000000000b64af0;
    uStack_a0 = uRam0000000000b64af8;
    uStack_98 = uRam0000000000b64b00;
    uStack_90 = uRam0000000000b64b08;
    uStack_88 = uRam0000000000b64b10;
    uStack_80 = uRam0000000000b64b18;
    puStack_78 = &UNK_009af680;
    uStack_b0 = 0x100;
    pbStack_70 = pbVar8;
    _swift_retain();
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    FUN_000e99b0();
    if ((unaff_x21 == 0) && (pbStack_e8 != pbStack_e0)) {
      FUN_000c723c();
      _swift_allocError(&UNK_009aeed8,puVar11,0,0);
      *puVar11 = 2;
      _swift_willThrow();
    }
    func_0x000c72ec(auStack_110);
  }
  return;
}



/* Entry: 000ea06c; end: 000ea097;  */

uint FUN_000ea06c(undefined8 param_1)

{
  undefined8 in_x4;
  undefined8 in_x5;
  
  func_0x000c30ac(param_1,in_x4,in_x5);
  return (uint)param_1 & 1;
}



/* Entry: 000ea098; end: 000ea113;  */

void FUN_000ea098(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 000ea114; end: 000ea137;  */

void FUN_000ea114(uint param_1)

{
  FUN_000c497c(param_1 & 0x1010101);
  return;
}



/* Entry: 000ea138; end: 000ea1ab;  */

void FUN_000ea138(undefined8 param_1)

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
    FUN_000c6ae4(0);
    _swift_allocObject();
    FUN_000c2fc4(uVar3,uVar2);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  }
  FUN_000c5530(param_1);
  return;
}



/* Entry: 000ea1ac; end: 000ea513;  */

void FUN_000ea1ac(long param_1,long param_2)

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
  
LAB_000ea1e0:
  lVar13 = *(long *)(param_2 + 0x58);
  do {
    if (((0 < lVar13) && (pcVar1 = *(char **)(param_2 + 0x28), pcVar1 != *(char **)(param_2 + 0x30))
        ) && ((*pcVar1 == ';' || (*pcVar1 == ',')))) {
      *(char **)(param_2 + 0x28) = pcVar1 + 1;
      FUN_00138a3c();
    }
    uStack_88 = *(undefined8 *)(param_2 + 0x70);
    uStack_90 = *(undefined8 *)(param_2 + 0x68);
    uStack_78 = *(undefined8 *)(param_2 + 0x80);
    uStack_80 = *(undefined8 *)(param_2 + 0x78);
    uStack_68 = *(undefined8 *)(param_2 + 0x90);
    uStack_70 = *(undefined8 *)(param_2 + 0x88);
    uVar12 = *(undefined8 *)(param_2 + 0x98);
    puVar5 = &uStack_90;
    FUN_00135ce4(puVar5,uVar12,*(undefined8 *)(param_2 + 0xa0),*(undefined2 *)(param_2 + 0x60));
    if (unaff_x21 != 0) {
      return;
    }
    if (((uint)uVar12 & 0xff) == 1) {
      return;
    }
    if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xea514);
      (*pcVar4)();
    }
    *(long *)(param_2 + 0x58) = lVar13 + 1;
    if (puVar5 == (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
      puVar6 = (undefined1 *)(param_1 + 0x10);
      ppuVar8 = &puStack_c0;
      _swift_beginAccess(puVar6,ppuVar8,0x21,0);
      FUN_00138a3c();
      pcVar1 = *(char **)(param_2 + 0x28);
      if ((pcVar1 == *(char **)(param_2 + 0x30)) || (*pcVar1 != ':')) {
        FUN_000c723c();
        _swift_allocError(&UNK_009aeed8,puVar6,0,0);
        *puVar6 = 0;
        _swift_willThrow();
        _swift_endAccess(&puStack_c0);
        return;
      }
      *(char **)(param_2 + 0x28) = pcVar1 + 1;
      FUN_00138a3c();
      FUN_00136880();
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      *(undefined1 **)(param_1 + 0x10) = puVar6;
      *(undefined8 ***)(param_1 + 0x18) = ppuVar8;
      _swift_endAccess(&puStack_c0);
      _swift_bridgeObjectRelease(uVar12);
      goto LAB_000ea1e0;
    }
    lVar13 = lVar13 + 1;
  } while (puVar5 != (undefined8 *)((long)&MACH_HEADER.magic + 2));
  FUN_000c2a40();
  pbVar11 = *(byte **)(param_2 + 0x28);
  pbVar2 = *(byte **)(param_2 + 0x30);
  do {
    if ((pbVar11 == pbVar2) || (bVar3 = *pbVar11, 0x23 < bVar3)) goto LAB_000ea308;
    if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar3 != 0x23) {
LAB_000ea308:
        if ((pbVar11 == pbVar2) || (*pbVar11 != 0x3a)) {
          puVar7 = puVar5;
          FUN_000c723c();
          _swift_allocError(&UNK_009aeed8,puVar7,0,0);
          *(undefined1 *)puVar7 = 0;
          _swift_willThrow();
          uStack_98 = 0;
          puStack_c0 = puVar5;
          uStack_b8 = uVar12;
          _swift_beginAccess(param_1 + 0x20,auStack_d8,0x21,0);
          FUN_000c70d0(&puStack_c0,param_1 + 0x20);
          _swift_endAccess(auStack_d8);
          return;
        }
        do {
          pbVar11 = pbVar11 + 1;
LAB_000ea320:
          *(byte **)(param_2 + 0x28) = pbVar11;
          if ((pbVar11 == pbVar2) || (bVar3 = *pbVar11, 0x23 < bVar3)) {
LAB_000ea3f8:
            puVar7 = puVar5;
            uVar9 = uVar12;
            FUN_00136a64();
            FUN_00023358(puVar5,uVar12);
            uStack_98 = 0;
            puStack_c0 = puVar7;
            uStack_b8 = uVar9;
            _swift_beginAccess(param_1 + 0x20,auStack_d8,0x21,0);
            FUN_000c70d0(&puStack_c0,param_1 + 0x20);
            _swift_endAccess(auStack_d8);
            goto LAB_000ea1e0;
          }
        } while ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) != 0);
        if ((ulong)bVar3 != 0x23) goto LAB_000ea3f8;
        *(byte **)(param_2 + 0x28) = pbVar11 + 1;
        pbVar10 = pbVar11 + 1;
        while (pbVar11 = pbVar2, pbVar10 != pbVar2) {
          pbVar11 = pbVar10 + 1;
          bVar3 = *pbVar10;
          if ((bVar3 == 10) || (pbVar10 = pbVar11, bVar3 == 0xd)) break;
        }
        goto LAB_000ea320;
      }
      *(byte **)(param_2 + 0x28) = pbVar11 + 1;
      pbVar10 = pbVar11 + 1;
      do {
        if (pbVar10 == pbVar2) {
          *(byte **)(param_2 + 0x28) = pbVar2;
          pbVar11 = pbVar2;
          goto LAB_000ea308;
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



/* Entry: 000ea514; end: 000ea51b;  */

void FUN_000ea514(undefined8 param_1)

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



/* Entry: 000ea51c; end: 000ea55f;  */

long FUN_000ea51c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 000ea560; end: 000ea917;  */

undefined8
FUN_000ea560(ulong param_1,undefined1 *param_2,undefined8 param_3,uint param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 *puVar11;
  uint uVar12;
  long extraout_x8;
  long unaff_x21;
  long lVar13;
  long alStack_c0 [4];
  undefined1 auStack_a0 [4];
  uint uStack_9c;
  undefined8 uStack_98;
  undefined1 auStack_90 [14];
  undefined2 uStack_82;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar5 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar13 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar13 + 0x40));
  lVar9 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_a0 + lVar9;
  uStack_78 = 0xc000000000000000;
  uStack_80 = 0;
  if (lRam0000000000aed8b0 != -1) {
    _swift_once(0xaed8b0,FUN_000c2f84);
  }
  uStack_70 = uRam0000000000b64ad0;
  uVar10 = param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar10 = (ulong)param_2 >> 0x38 & 0xf;
  }
  if (uVar10 == 0) {
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
    uVar6 = uRam0000000000b64ad0;
    uStack_9c = param_4;
    uStack_98 = param_3;
    _swift_retain();
    __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar11);
    FUN_00033a8c();
    uVar10 = 0;
    puVar7 = puVar11;
    __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
              (puVar11,0,PTR___sSSN_0099b040,uVar6);
    (**(code **)(lVar13 + 8))(puVar11,lVar5);
    _swift_bridgeObjectRelease();
    if (uVar10 >> 0x3c < 0xf) {
      uVar2 = (uint)(uVar10 >> 0x20);
      uVar12 = uVar2 >> 0x1e;
      if (uVar2 >> 0x1e < 2) {
        if (uVar12 == 0) {
          auStack_90[0] = SUB81(puVar7,0);
          auStack_90[1] = (undefined1)((ulong)puVar7 >> 8);
          auStack_90[2] = (undefined1)((ulong)puVar7 >> 0x10);
          auStack_90[3] = (undefined1)((ulong)puVar7 >> 0x18);
          auStack_90[4] = (undefined1)((ulong)puVar7 >> 0x20);
          auStack_90[5] = (undefined1)((ulong)puVar7 >> 0x28);
          auStack_90[6] = (undefined1)((ulong)puVar7 >> 0x30);
          auStack_90[7] = (undefined1)((ulong)puVar7 >> 0x38);
          auStack_90[8] = (undefined1)uVar10;
          auStack_90[9] = (undefined1)(uVar10 >> 8);
          auStack_90[10] = (undefined1)(uVar10 >> 0x10);
          auStack_90[0xb] = (undefined1)(uVar10 >> 0x18);
          auStack_90[0xc] = (undefined1)(uVar10 >> 0x20);
          auStack_90[0xd] = (undefined1)(uVar10 >> 0x28);
          puVar11 = auStack_90 + (uVar10 >> 0x30 & 0xff);
          param_2 = auStack_90;
        }
        else {
          lVar5 = (long)(int)puVar7;
          puVar1 = (undefined1 *)(((long)puVar7 >> 0x20) - lVar5);
          if ((long)puVar7 >> 0x20 < lVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0xea908);
            (*pcVar4)();
          }
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          if (param_2 == (undefined1 *)0x0) {
            __s10Foundation13__DataStorageC7_lengthSivg();
            param_2 = (undefined1 *)0x0;
          }
          else {
            puVar11 = param_2;
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar5,(long)puVar11)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0xea914);
              (*pcVar4)();
            }
            param_2 = param_2 + (lVar5 - (long)puVar11);
            __s10Foundation13__DataStorageC7_lengthSivg();
            if (param_2 != (undefined1 *)0x0) {
              if ((long)puVar1 <= (long)puVar11) {
                puVar11 = puVar1;
              }
              puVar11 = puVar11 + (long)param_2;
              goto LAB_000ea828;
            }
          }
          puVar11 = (undefined1 *)0x0;
        }
      }
      else if (uVar12 == 2) {
        lVar5 = *(long *)(puVar7 + 0x10);
        lVar13 = *(long *)(puVar7 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        puVar11 = param_2;
        if (param_2 != (undefined1 *)0x0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar5,(long)puVar11)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0xea910);
            (*pcVar4)();
          }
          param_2 = param_2 + (lVar5 - (long)puVar11);
        }
        puVar1 = (undefined1 *)(lVar13 - lVar5);
        if (SBORROW8(lVar13,lVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0xea90c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (param_2 == (undefined1 *)0x0) {
          puVar11 = (undefined1 *)0x0;
        }
        else {
          if ((long)puVar1 <= (long)puVar11) {
            puVar11 = puVar1;
          }
          puVar11 = puVar11 + (long)param_2;
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
        puVar11 = auStack_90;
      }
LAB_000ea828:
      FUN_000e9e44(param_2,puVar11,uStack_98,uStack_9c & 0x101,param_5,&uStack_80);
      FUN_00023344(puVar7,uVar10);
      if (unaff_x21 != 0) {
        FUN_000ea918(param_5);
        uVar6 = uStack_70;
        FUN_00023358(uStack_80,uStack_78);
        uVar8 = uVar6;
        _swift_release(uVar6);
        goto LAB_000ea8a4;
      }
    }
  }
  uVar8 = uStack_70;
  uVar3 = uStack_78;
  uVar6 = uStack_80;
  func_0x00023304(uStack_80,uStack_78);
  _swift_retain(uVar8);
  FUN_000ea918(param_5);
  FUN_00023358(uVar6,uVar3);
  _swift_release(uVar8);
LAB_000ea8a4:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_68) {
    ___stack_chk_fail();
    *(undefined8 *)((long)alStack_c0 + lVar9) = uVar6;
    *(long *)((long)alStack_c0 + lVar9 + 8) = unaff_x21;
    *(undefined1 **)((long)alStack_c0 + lVar9 + 0x10) = &stack0xfffffffffffffff0;
    *(code **)((long)alStack_c0 + lVar9 + 0x18) = FUN_000ea918;
    lVar9 = 0xaed1d8;
    func_0x000115a8(0xaed1d8,&UNK_007d78b0);
    (**(code **)(*(long *)(lVar9 + -8) + 8))(uVar8,lVar9);
    return uVar8;
  }
  return uVar6;
}



/* Entry: 000ea918; end: 000ea95f;  */

undefined8 FUN_000ea918(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0xaed1d8;
  func_0x000115a8(0xaed1d8,&UNK_007d78b0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 000ea960; end: 000ea9a3;  */

undefined1  [16] FUN_000ea960(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  FUN_000ea9a4();
  uVar1 = param_2;
  func_0x000eb700();
  _swift_bridgeObjectRelease(param_2);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 000ea9a4; end: 000eaaf3;  */

undefined1  [16] FUN_000ea9a4(ulong param_1,ulong param_2)

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
        if (uVar9 < uVar8 >> 0xe || uVar9 - (uVar8 >> 0xe) == 0) goto LAB_000eaa7c;
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
LAB_000eaa7c:
  if (uVar9 < uVar4 >> 0xe) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xeaaf4);
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



/* Entry: 000eaaf4; end: 000eac37;  */

void FUN_000eaaf4(void)

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
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar6 + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = lVar5 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_00088dc4(0);
  __sSo17OS_dispatch_queueC8DispatchE10AttributesV10concurrentAEvgZ(lVar2);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar5);
  (**(code **)(lVar6 + 0x68))
            (puVar4,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_0099bd48
             ,lVar1);
  uVar3 = 0xd00000000000001f;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd00000000000001f,0x80000000008b8cd0,lVar5,lVar2,puVar4,0);
  uRam0000000000aeea28 = uVar3;
  return;
}



/* Entry: 000eac38; end: 000eacaf;  */

undefined1  [16] FUN_000eac38(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar3 = (uint)(param_1 >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar3 = 1;
    }
    uVar2 = 7;
    if (uVar3 == 0) {
      uVar2 = 0xb;
    }
    uVar2 = uVar2 | uVar1 << 0x10;
    __sSS5index6beforeSS5IndexVAD_tF(uVar2,param_1,param_2);
    __sSSySJSS5IndexVcig();
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = uVar2;
    return auVar4;
  }
  return ZEXT816(0);
}



/* Entry: 000eacb0; end: 000eae4f;  */

uint FUN_000eacb0(ulong param_1,ulong param_2)

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
    goto LAB_000eadac;
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
    FUN_0002269c(uVar6,param_1,param_2);
    if (uVar6 < 0x4000) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xeade8);
      (*pcVar3)();
    }
    if ((param_2 >> 0x3c & 1) != 0) goto LAB_000eae24;
LAB_000ead28:
    uVar6 = (uVar6 & 0xffffffffffff0000) - 0xfffc;
  }
  else {
    if ((param_2 >> 0x3c & 1) == 0) goto LAB_000ead28;
LAB_000eae24:
    if (uVar1 < uVar6 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xeae50);
      (*pcVar3)();
    }
    __sSS8UTF8ViewV13_foreignIndex6beforeSS0D0VAF_tF(uVar6,param_1,param_2);
  }
  if ((uVar6 & 0xc) == 4L << uVar4) {
    FUN_0002269c(uVar6,param_1,param_2);
  }
  uVar7 = uVar6 >> 0x10;
  if (uVar1 <= uVar7) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xeae0c);
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
LAB_000eadac:
  return uVar4 & 0xff | iVar5 << 8;
}



/* Entry: 000eae50; end: 000eae87;  */

void FUN_000eae50(void)

{
  long *unaff_x20;
  
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 000eae88; end: 000eb267;  */

void FUN_000eae88(undefined8 param_1)

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
  auStack_270[1] = 0x80000000008b8cf0;
  FUN_000c735c();
  apuStack_260[0] = &UNK_009af680;
  apuStack_260[2] = (undefined *)0xd000000000000019;
  apuStack_260[3] = (undefined *)0x80000000008b8d10;
  apuStack_260[1] = (undefined *)param_1;
  FUN_000eb920();
  apuStack_260[4] = &UNK_009b5598;
  apuStack_260[6] = (undefined *)0xd00000000000001a;
  apuStack_260[7] = (undefined *)0x80000000008b8d30;
  apuStack_260[5] = (undefined *)param_1;
  func_0x000eb960();
  apuStack_260[8] = &UNK_009b5698;
  apuStack_260[10] = (undefined *)0xd00000000000001b;
  apuStack_260[0xb] = (undefined *)0x80000000008b8d50;
  apuStack_260[9] = (undefined *)param_1;
  func_0x000eb9a0();
  apuStack_260[0xc] = &UNK_009b5298;
  apuStack_260[0xe] = (undefined *)0xd000000000000018;
  apuStack_260[0xf] = (undefined *)0x80000000008b8d70;
  apuStack_260[0xd] = (undefined *)param_1;
  func_0x000eb9e0();
  apuStack_260[0x10] = &UNK_009b3780;
  apuStack_260[0x12] = (undefined *)0xd000000000000015;
  apuStack_260[0x13] = (undefined *)0x80000000008b8d90;
  apuStack_260[0x11] = (undefined *)param_1;
  func_0x000eba20();
  apuStack_260[0x14] = &UNK_009b3908;
  apuStack_260[0x16] = (undefined *)0xd000000000000019;
  apuStack_260[0x17] = (undefined *)0x80000000008b8db0;
  apuStack_260[0x15] = (undefined *)param_1;
  func_0x000eba60();
  apuStack_260[0x18] = &UNK_009b3a88;
  apuStack_260[0x1a] = (undefined *)0xd00000000000001a;
  apuStack_260[0x1b] = (undefined *)0x80000000008b8dd0;
  apuStack_260[0x19] = (undefined *)param_1;
  func_0x000ebaa0();
  apuStack_260[0x1c] = &UNK_009b5318;
  apuStack_260[0x1e] = (undefined *)0xd00000000000001a;
  apuStack_260[0x1f] = (undefined *)0x80000000008b8df0;
  apuStack_260[0x1d] = (undefined *)param_1;
  func_0x000ebae0();
  apuStack_260[0x20] = &UNK_009b5498;
  apuStack_260[0x22] = (undefined *)0xd00000000000001a;
  apuStack_260[0x23] = (undefined *)0x80000000008b8e10;
  apuStack_260[0x21] = (undefined *)param_1;
  func_0x000ebb20();
  apuStack_260[0x24] = &UNK_009b5398;
  apuStack_260[0x26] = (undefined *)0xd000000000000019;
  apuStack_260[0x27] = (undefined *)0x80000000008b8e30;
  apuStack_260[0x25] = (undefined *)param_1;
  func_0x000ebb60();
  apuStack_260[0x28] = &UNK_009b4128;
  apuStack_260[0x2a] = (undefined *)0xd00000000000001b;
  apuStack_260[0x2b] = (undefined *)0x80000000008b8e50;
  apuStack_260[0x29] = (undefined *)param_1;
  func_0x000ebba0();
  apuStack_260[0x2c] = &UNK_009b5618;
  apuStack_260[0x2e] = (undefined *)0xd000000000000016;
  apuStack_260[0x2f] = (undefined *)0x80000000008b8e70;
  apuStack_260[0x2d] = (undefined *)param_1;
  func_0x000ebbe0();
  apuStack_260[0x30] = &UNK_009b3f98;
  apuStack_260[0x32] = (undefined *)0xd000000000000019;
  apuStack_260[0x33] = (undefined *)0x80000000008b8e90;
  apuStack_260[0x31] = (undefined *)param_1;
  func_0x000ebc20();
  apuStack_260[0x34] = &UNK_009b42f0;
  apuStack_260[0x36] = (undefined *)0xd00000000000001b;
  apuStack_260[0x37] = (undefined *)0x80000000008b8eb0;
  apuStack_260[0x35] = (undefined *)param_1;
  func_0x000ebc60();
  apuStack_260[0x38] = &UNK_009b5518;
  apuStack_260[0x3a] = (undefined *)0xd00000000000001b;
  apuStack_260[0x3b] = (undefined *)0x80000000008b8ed0;
  apuStack_260[0x39] = (undefined *)param_1;
  func_0x000ebca0();
  apuStack_260[0x3c] = &UNK_009b5418;
  apuStack_260[0x3e] = (undefined *)0xd000000000000015;
  apuStack_260[0x3f] = (undefined *)0x80000000008b8ef0;
  apuStack_260[0x3d] = (undefined *)param_1;
  func_0x000ebce0();
  apuStack_260[0x40] = &UNK_009b4018;
  apuStack_260[0x41] = (undefined *)param_1;
  func_0x000115a8(0xaeeb40,&UNK_007d9068);
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
    FUN_000202c0();
    if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0xeb264);
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
      uVar10 = 0xaeeb48;
      func_0x000115a8(0xaeeb48,&UNK_007d9070);
      _swift_arrayDestroy(auStack_270,0x11,uVar10);
      lVar9 = 0xaeeb50;
      func_0x000115a8(0xaeeb50,&UNK_007d9078);
      _swift_allocObject();
      *(long *)(lVar9 + 0x10) = lVar6;
      lRam0000000000aeeab8 = lVar9;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0xeb268);
  (*pcVar5)();
}



/* Entry: 000eb268; end: 000eb387;  */

undefined1 FUN_000eb268(undefined8 param_1,long param_2)

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
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar5 + 0x40));
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
  if (lRam0000000000aeea20 != -1) {
    _swift_once(0xaeea20,FUN_000eaaf4);
  }
  __s8Dispatch0A13WorkItemFlagsV7barrierACvgZ(puVar4);
  puStack_88 = auStack_80;
  pcStack_90 = FUN_000eb868;
  __sSo17OS_dispatch_queueC8DispatchE4sync5flags7executexAC0D13WorkItemFlagsV_xyKXEtKlF
            (puVar4,FUN_000eb878,auStack_a0,PTR___sytN_0099b8e0 + 8);
  _swift_bridgeObjectRelease(lVar3);
  (**(code **)(lVar5 + 8))(puVar4,lVar1);
  return uStack_41;
}



/* Entry: 000eb388; end: 000eb4d3;  */

void FUN_000eb388(long param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  if (lRam0000000000aeeab0 != -1) {
    _swift_once(0xaeeab0,FUN_000eae88);
  }
  lVar7 = lRam0000000000aeeab8;
  _swift_beginAccess(lRam0000000000aeeab8 + 0x10,auStack_68,0x20,0);
  lVar6 = *(long *)(lVar7 + 0x10);
  if (*(long *)(lVar6 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar6);
    lVar2 = param_1;
    uVar4 = param_2;
    FUN_000202c0();
    if ((uVar4 & 1) != 0) {
      lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + lVar2 * 0x10);
      _swift_endAccess(auStack_68);
      _swift_bridgeObjectRelease(lVar6);
      bVar1 = lVar7 == param_4;
      goto LAB_000eb49c;
    }
    _swift_bridgeObjectRelease(lVar6);
  }
  _swift_endAccess(auStack_68);
  _swift_beginAccess(lVar7 + 0x10,auStack_68,0x21,0);
  uVar3 = *(undefined8 *)(lVar7 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native(uVar3);
  uVar5 = *(undefined8 *)(lVar7 + 0x10);
  *(undefined8 *)(lVar7 + 0x10) = 0x8000000000000000;
  FUN_000f3718(param_4,param_5,param_1,param_2,uVar3);
  *(undefined8 *)(lVar7 + 0x10) = uVar5;
  _swift_endAccess(auStack_68);
  bVar1 = true;
LAB_000eb49c:
  *(bool *)param_3 = bVar1;
  return;
}



/* Entry: 000eb4d4; end: 000eb4d7;  */

undefined1  [16] FUN_000eb4d4(undefined8 param_1,undefined8 param_2)

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
  undefined8 uStack_a0;
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
  if (lRam0000000000aeea20 != -1) {
    _swift_once(0xaeea20,FUN_000eaaf4);
  }
  uVar2 = uRam0000000000aeea28;
  puVar4 = &UNK_009aca68;
  _swift_allocObject(&UNK_009aca68,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_000ebd20;
  *(undefined1 **)(puVar4 + 0x18) = auStack_80;
  puVar5 = &UNK_009aca90;
  _swift_allocObject(&UNK_009aca90,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_000ebd3c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  uStack_90 = 0xebd5c;
  puStack_b0 = PTR___NSConcreteStackBlock_00999f30;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0xae078;
  puStack_98 = &UNK_009acaa8;
  puStack_88 = puVar5;
  __Block_copy(&puStack_b0);
  puVar7 = puStack_88;
  _swift_retain(puVar5);
  _swift_release(puVar7);
  _dispatch_sync(uVar2,ppuVar6);
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
  pcVar3 = (code *)SoftwareBreakpoint(1,0xeb868);
  (*pcVar3)();
}



/* Entry: 000eb4d8; end: 000eb5a3;  */

void FUN_000eb4d8(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  if (lRam0000000000aeeab0 != -1) {
    _swift_once(0xaeeab0,FUN_000eae88);
  }
  lVar2 = lRam0000000000aeeab8;
  _swift_beginAccess(lRam0000000000aeeab8 + 0x10,auStack_48,0x20,0);
  lVar2 = *(long *)(lVar2 + 0x10);
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(long *)(lVar2 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar2);
    FUN_000202c0();
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



/* Entry: 000eb5a4; end: 000eb867;  */

undefined1  [16]
FUN_000eb5a4(undefined8 param_1,ulong param_2,ulong param_3,long param_4,long param_5)

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
  func_0x00016cc8(auStack_68);
  (**(code **)(*(long *)(param_4 + -8) + 0x10))();
  uVar2 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar2 = param_3 >> 0x38 & 0xf;
  }
  _swift_bridgeObjectRetain(param_3);
  if ((uVar2 != 0) && (uVar2 = param_2, uVar4 = param_3, FUN_000eac38(), uVar4 != 0)) {
    if ((uVar2 == 0x2f) && (uVar4 == 0xe100000000000000)) {
      _swift_bridgeObjectRelease(0xe100000000000000);
      goto LAB_000eb674;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(uVar4);
    if ((uVar2 & 1) != 0) goto LAB_000eb674;
  }
  __sSS6appendyySSF(0x2f,0xe100000000000000);
LAB_000eb674:
  puVar3 = auStack_68;
  FUN_0001393c(puVar3,lStack_50);
  _swift_getDynamicType();
  lVar5 = lStack_48;
  (**(code **)(lStack_48 + 0x18))();
  _swift_bridgeObjectRetain(param_3);
  __sSS6appendyySSF(puVar3,lVar5);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(lVar5);
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  FUN_00011670(auStack_68);
  return auVar1;
}



/* Entry: 000eb868; end: 000eb877;  */

void FUN_000eb868(void)

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
  if (lRam0000000000aeeab0 != -1) {
    _swift_once(0xaeeab0,FUN_000eae88);
  }
  lVar4 = lRam0000000000aeeab8;
  _swift_beginAccess(lRam0000000000aeeab8 + 0x10,auStack_68,0x20,0);
  lVar11 = *(long *)(lVar4 + 0x10);
  if (*(long *)(lVar11 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar11);
    lVar6 = lVar12;
    uVar8 = uVar2;
    FUN_000202c0();
    if ((uVar8 & 1) != 0) {
      lVar12 = *(long *)(*(long *)(lVar11 + 0x38) + lVar6 * 0x10);
      _swift_endAccess(auStack_68);
      _swift_bridgeObjectRelease(lVar11);
      bVar5 = lVar12 == lVar3;
      goto LAB_000eb49c;
    }
    _swift_bridgeObjectRelease(lVar11);
  }
  _swift_endAccess(auStack_68);
  _swift_beginAccess(lVar4 + 0x10,auStack_68,0x21,0);
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native(uVar7);
  uVar10 = *(undefined8 *)(lVar4 + 0x10);
  *(undefined8 *)(lVar4 + 0x10) = 0x8000000000000000;
  FUN_000f3718(lVar3,uVar9,lVar12,uVar2,uVar7);
  *(undefined8 *)(lVar4 + 0x10) = uVar10;
  _swift_endAccess(auStack_68);
  bVar5 = true;
LAB_000eb49c:
  *(bool *)uVar1 = bVar5;
  return;
}



/* Entry: 000eb878; end: 000eb89f;  */

void FUN_000eb878(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 000eb8a0; end: 000eb8a3;  */

void FUN_000eb8a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 000eb8a4; end: 000eb913;  */

void FUN_000eb8a4(long param_1)

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



/* Entry: 000eb914; end: 000eb91f;  */

void FUN_000eb914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00844450);
  return;
}



/* Entry: 000eb920; end: 000ebd1f;  */

void FUN_000eb920(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aeeac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_007e1b10;
  _swift_getWitnessTable(&DAT_007e1b10,&UNK_009b5598);
  puRam0000000000aeeac0 = puVar1;
  return;
}



/* Entry: 000ebd20; end: 000ebd3b;  */

void FUN_000ebd20(void)

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
  if (lRam0000000000aeeab0 != -1) {
    _swift_once(0xaeeab0,FUN_000eae88);
  }
  lVar5 = lRam0000000000aeeab8;
  _swift_beginAccess(lRam0000000000aeeab8 + 0x10,auStack_48,0x20,0);
  lVar5 = *(long *)(lVar5 + 0x10);
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(long *)(lVar5 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar5);
    FUN_000202c0();
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



/* Entry: 000ebd3c; end: 000ebd7b;  */

void FUN_000ebd3c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 000ebd7c; end: 000ebd9b;  */

void FUN_000ebd7c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_0099bb30)(uVar1);
  return;
}



/* Entry: 000ebd9c; end: 000ecc6b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_000ebd9c(ulong param_1,byte *******param_2)

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
  pppppppbVar5 = (byte *******)PTR___swiftEmptyArrayStorage_0099b8f0;
  while (__sSS8IteratorV4nextSJSgyF(), pppppppbVar16 != (byte *******)0x0) {
    pppppppbVar6 = pppppppbVar5;
    if ((param_2 != (byte *******)(segment_command_00000020.segname + 5)) ||
       (pppppppbVar8 = pppppppbVar16, pppppppbVar16 != (byte *******)0xe100000000000000)) {
      uVar4 = 0x2d;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x2d,0xe100000000000000,param_2,pppppppbVar16,0);
      if ((uVar4 & 1) != 0) goto LAB_000ebe68;
      if ((param_2 == (byte *******)(segment_command_00000020.segname + 8)) &&
         (pppppppbVar16 == (byte *******)0xe100000000000000)) {
LAB_000ebeb8:
        pppppppbVar14 = pppppppbVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)pppppppbVar14 & 1) == 0) {
          pppppppbVar8 = (byte *******)((long)pppppppbVar5[2] + 1);
          pppppppbVar6 = (byte *******)0x0;
          func_0x000d5ff0(0,pppppppbVar8,1,pppppppbVar5);
          pppppppbVar14 = pppppppbVar6;
        }
        pppppppbVar5 = pppppppbVar14;
        ppppppbVar11 = pppppppbVar6[2];
        pppppppbVar14 = (byte *******)((long)ppppppbVar11 + 1);
        if ((byte ******)((ulong)pppppppbVar6[3] >> 1) <= ppppppbVar11) {
          pppppppbVar5 = (byte *******)(ulong)((byte ******)0x1 < pppppppbVar6[3]);
          pppppppbVar8 = pppppppbVar14;
          func_0x000d5ff0(pppppppbVar5,pppppppbVar14,1,pppppppbVar6);
          pppppppbVar6 = pppppppbVar5;
        }
        pppppppbVar6[2] = (byte ******)pppppppbVar14;
        pppppppbVar6[(long)ppppppbVar11 * 2 + 4] = (byte ******)param_2;
        pppppppbVar6[(long)ppppppbVar11 * 2 + 5] = (byte ******)pppppppbVar16;
        bVar3 = SCARRY8(lVar18,1);
        lVar18 = lVar18 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xec450);
          (*pcVar2)();
        }
        goto LAB_000ebe20;
      }
      uVar4 = 0;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x30,0xe100000000000000,param_2,pppppppbVar16,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)(segment_command_00000020.segname + 9) &&
          pppppppbVar16 == (byte *******)0xe100000000000000)) goto LAB_000ebeb8;
      uVar4 = 0x31;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x31,0xe100000000000000,param_2,pppppppbVar16,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)(segment_command_00000020.segname + 10) &&
          pppppppbVar16 == (byte *******)0xe100000000000000)) goto LAB_000ebeb8;
      uVar4 = 0;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x32,0xe100000000000000,param_2,pppppppbVar16,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)(segment_command_00000020.segname + 0xb) &&
          pppppppbVar16 == (byte *******)0xe100000000000000)) goto LAB_000ebeb8;
      uVar4 = 0x33;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x33,0xe100000000000000,param_2,pppppppbVar16,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)(segment_command_00000020.segname + 0xc) &&
          pppppppbVar16 == (byte *******)0xe100000000000000)) goto LAB_000ebeb8;
      uVar4 = 0;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x34,0xe100000000000000,param_2,pppppppbVar16,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)(segment_command_00000020.segname + 0xd) &&
          pppppppbVar16 == (byte *******)0xe100000000000000)) goto LAB_000ebeb8;
      uVar4 = 0x35;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x35,0xe100000000000000,param_2,pppppppbVar16,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)(segment_command_00000020.segname + 0xe) &&
          pppppppbVar16 == (byte *******)0xe100000000000000)) goto LAB_000ebeb8;
      uVar4 = 0;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x36,0xe100000000000000,param_2,pppppppbVar16,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)(segment_command_00000020.segname + 0xf) &&
          pppppppbVar16 == (byte *******)0xe100000000000000)) goto LAB_000ebeb8;
      uVar4 = 0x37;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x37,0xe100000000000000,param_2,pppppppbVar16,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)&segment_command_00000020.vmaddr &&
          pppppppbVar16 == (byte *******)0xe100000000000000)) goto LAB_000ebeb8;
      uVar4 = 0;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x38,0xe100000000000000,param_2,pppppppbVar16,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)((long)&segment_command_00000020.vmaddr + 1) &&
          pppppppbVar16 == (byte *******)0xe100000000000000)) goto LAB_000ebeb8;
      uVar4 = 0x39;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x39,0xe100000000000000,param_2,pppppppbVar16,0);
      if ((uVar4 & 1) != 0) goto LAB_000ebeb8;
      if ((param_2 == (byte *******)(segment_command_00000020.segname + 6)) &&
         (pppppppbVar16 == (byte *******)0xe100000000000000)) {
LAB_000ec0c0:
        _swift_bridgeObjectRelease();
        param_2 = pppppppbVar16;
        if ((uStack_54 & 0xff) == 1) {
          pppppppbStack_90 = pppppppbVar5;
          _swift_bridgeObjectRetain(pppppppbVar5);
          pppppppbVar16 = (byte *******)0xaeeb58;
          func_0x000115a8(0xaeeb58,&UNK_007d90e0);
          pppppppbVar8 = pppppppbVar16;
          FUN_000edb24();
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
                    pcVar2 = (code *)SoftwareBreakpoint(1,0xecbec);
                    (*pcVar2)();
                  }
                  pbVar10 = (byte *)((long)pppppppbVar8 + -1);
                  if (pbVar10 == (byte *)0x0) goto LAB_000ec3bc;
                  pppppppbVar14 = (byte *******)0x0;
                  do {
                    pppppppbVar6 = (byte *******)((long)pppppppbVar6 + 1);
                    if (((9 < *(byte *)pppppppbVar6 - 0x30) ||
                        (lVar18 = (long)pppppppbVar14 * 10,
                        SUB168(SEXT816((long)pppppppbVar14) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
                       (uVar4 = (ulong)(byte)(*(byte *)pppppppbVar6 - 0x30),
                       pppppppbVar14 = (byte *******)(lVar18 + uVar4), SCARRY8(lVar18,uVar4)))
                    goto LAB_000ec3bc;
                    pppppppbVar19 = (byte *******)0x0;
                    pbVar10 = pbVar10 + -1;
                  } while (pbVar10 != (byte *)0x0);
                }
                else if (*(byte *)pppppppbVar6 == 0x2d) {
                  if ((long)pppppppbVar8 < 1) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0xecbe8);
                    (*pcVar2)();
                  }
                  pbVar10 = (byte *)((long)pppppppbVar8 + -1);
                  if (pbVar10 == (byte *)0x0) {
LAB_000ec3bc:
                    pppppppbVar14 = (byte *******)0x0;
                    pppppppbVar19 = (byte *******)((long)&MACH_HEADER.magic + 1);
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
                      goto LAB_000ec3bc;
                      pppppppbVar19 = (byte *******)0x0;
                      pbVar10 = pbVar10 + -1;
                    } while (pbVar10 != (byte *)0x0);
                  }
                }
                else {
                  if (pppppppbVar8 == (byte *******)0x0) goto LAB_000ec3bc;
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
                      goto LAB_000ec3bc;
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
                    pcVar2 = (code *)SoftwareBreakpoint(1,0xecbe4);
                    (*pcVar2)();
                  }
                  pbVar10 = (byte *)((long)pppppppbVar9 + -1);
                  if (pbVar10 == (byte *)0x0) goto LAB_000ec3bc;
                  pppppppbVar14 = (byte *******)0x0;
                  pbVar12 = (byte *)((ulong)&pppppppbStack_90 | 1);
                  do {
                    if (((9 < *pbVar12 - 0x30) ||
                        (lVar18 = (long)pppppppbVar14 * 10,
                        SUB168(SEXT816((long)pppppppbVar14) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
                       (uVar4 = (ulong)(byte)(*pbVar12 - 0x30),
                       pppppppbVar14 = (byte *******)(lVar18 + uVar4), SCARRY8(lVar18,uVar4)))
                    goto LAB_000ec3bc;
                    pppppppbVar19 = (byte *******)0x0;
                    pbVar10 = pbVar10 + -1;
                    pbVar12 = pbVar12 + 1;
                  } while (pbVar10 != (byte *)0x0);
                }
                else if (uVar1 == 0x2d) {
                  if (pppppppbVar9 == (byte *******)0x0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0xecbe0);
                    (*pcVar2)();
                  }
                  pbVar10 = (byte *)((long)pppppppbVar9 + -1);
                  if (pbVar10 == (byte *)0x0) goto LAB_000ec3bc;
                  pppppppbVar14 = (byte *******)0x0;
                  pbVar12 = (byte *)((ulong)&pppppppbStack_90 | 1);
                  do {
                    if (((9 < *pbVar12 - 0x30) ||
                        (lVar18 = (long)pppppppbVar14 * 10,
                        SUB168(SEXT816((long)pppppppbVar14) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
                       (uVar4 = (ulong)(byte)(*pbVar12 - 0x30),
                       pppppppbVar14 = (byte *******)(lVar18 - uVar4), SBORROW8(lVar18,uVar4)))
                    goto LAB_000ec3bc;
                    pppppppbVar19 = (byte *******)0x0;
                    pbVar10 = pbVar10 + -1;
                    pbVar12 = pbVar12 + 1;
                  } while (pbVar10 != (byte *)0x0);
                }
                else {
                  if (pppppppbVar9 == (byte *******)0x0) goto LAB_000ec3bc;
                  pppppppbVar14 = (byte *******)0x0;
                  pppppppbVar6 = (byte *******)&pppppppbStack_90;
                  do {
                    if (((9 < *(byte *)pppppppbVar6 - 0x30) ||
                        (lVar18 = (long)pppppppbVar14 * 10,
                        SUB168(SEXT816((long)pppppppbVar14) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
                       (uVar4 = (ulong)(byte)(*(byte *)pppppppbVar6 - 0x30),
                       pppppppbVar14 = (byte *******)(lVar18 + uVar4), SCARRY8(lVar18,uVar4)))
                    goto LAB_000ec3bc;
                    pppppppbVar19 = (byte *******)0x0;
                    pppppppbVar9 = (byte *******)((long)pppppppbVar9 + -1);
                    pppppppbVar6 = (byte *******)((long)pppppppbVar6 + 1);
                  } while (pppppppbVar9 != (byte *******)0x0);
                }
              }
            }
            else {
              pppppppbVar8 = pppppppbVar16;
              FUN_00021ed8();
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
              pppppppbVar6 = (byte *******)PTR___swiftEmptyArrayStorage_0099b8f0;
              goto LAB_000ebe20;
            }
            break;
          }
          goto LAB_000ecb2c;
        }
        break;
      }
      uVar4 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x2e,0xe100000000000000,param_2,pppppppbVar16,0);
      if ((uVar4 & 1) != 0) goto LAB_000ec0c0;
      if ((param_2 == (byte *******)(section_00000068.sectname + 0xb)) &&
         (pppppppbVar16 == (byte *******)0xe100000000000000)) {
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
              func_0x000d5ff0(0,(long)pppppppbVar5[2] + 1,1,pppppppbVar5);
            }
            ppppppbVar11 = pppppppbVar6[2];
            pppppppbVar5 = pppppppbVar6;
            if ((byte ******)((ulong)pppppppbVar6[3] >> 1) <= ppppppbVar11) {
              pppppppbVar5 = (byte *******)(ulong)((byte ******)0x1 < pppppppbVar6[3]);
              func_0x000d5ff0(pppppppbVar5,(byte ******)((long)ppppppbVar11 + 1U),1,pppppppbVar6);
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
              pcVar2 = (code *)SoftwareBreakpoint(1,0xecbf0);
              (*pcVar2)();
            }
            pppppppbVar16 = pppppppbVar5;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((ulong)pppppppbVar16 & 1) == 0) {
              func_0x000c96d0();
              ppppppbVar11 = pppppppbVar5[2];
            }
            else {
              ppppppbVar11 = pppppppbVar5[2];
            }
            if (ppppppbVar11 == (byte ******)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0xec81c);
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
        param_2 = (byte *******)0xaeeb58;
        func_0x000115a8(0xaeeb58,&UNK_007d90e0);
        pppppppbVar16 = param_2;
        FUN_000edb24();
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
                  pcVar2 = (code *)SoftwareBreakpoint(1,0xecc68);
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
                    if (pbVar10 == (byte *)0x0) goto LAB_000ecb00;
                  }
                }
                goto LAB_000ecaf8;
              }
              if (*(byte *)pppppppbVar6 == 0x2d) {
                if ((long)pppppppbVar14 < 1) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0xecc60);
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
                    if (pbVar10 == (byte *)0x0) goto LAB_000ecb00;
                  }
                }
                goto LAB_000ecaf8;
              }
              if (pppppppbVar14 == (byte *******)0x0) goto LAB_000ecaf8;
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
                  goto LAB_000ecaf8;
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
                  pcVar2 = (code *)SoftwareBreakpoint(1,0xecc6c);
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
                    if (pbVar10 == (byte *)0x0) goto LAB_000ecb00;
                  }
                }
              }
              else if (uVar1 == 0x2d) {
                if (pppppppbVar9 == (byte *******)0x0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0xecc64);
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
                    if (pbVar10 == (byte *)0x0) goto LAB_000ecb00;
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
                  if (pppppppbVar9 == (byte *******)0x0) goto LAB_000ecb00;
                }
              }
LAB_000ecaf8:
              pppppppbVar16 = (byte *******)0x0;
              bVar3 = true;
            }
LAB_000ecb00:
            _swift_bridgeObjectRelease();
            pppppppbVar6 = pppppppbVar16;
            if (bVar3) break;
          }
          else {
            pppppppbVar14 = param_2;
            FUN_000ed55c();
            _swift_bridgeObjectRelease();
            if (((uint)((ulong)pppppppbVar6 >> 0x20) & 0xff) == 1) break;
          }
          if ((bVar17) && (SBORROW4(0,(int)pppppppbVar6))) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0xecc4c);
            (*pcVar2)();
          }
          goto LAB_000ecb1c;
        }
        goto LAB_000ecb2c;
      }
      pppppppbStack_90 = pppppppbVar5;
      _swift_bridgeObjectRetain(pppppppbVar5);
      pppppppbVar16 = (byte *******)0xaeeb58;
      func_0x000115a8(0xaeeb58,&UNK_007d90e0);
      pppppppbVar8 = pppppppbVar16;
      FUN_000edb24();
      pppppppbVar6 = (byte *******)&pppppppbStack_90;
      __sSSySSxcSTRzSJ7ElementRtzlufC(pppppppbVar6,pppppppbVar16,pppppppbVar8);
      pppppppbVar14 = (byte *******)((ulong)pppppppbVar6 & 0xffffffffffff);
      pppppppbVar9 = (byte *******)((ulong)pppppppbVar16 >> 0x38 & 0xf);
      pppppppbVar8 = pppppppbVar14;
      if (((ulong)pppppppbVar16 & 0x2000000000000000) != 0) {
        pppppppbVar8 = pppppppbVar9;
      }
      if (pppppppbVar8 == (byte *******)0x0) goto LAB_000ecb2c;
      if (((ulong)pppppppbVar16 >> 0x3c & 1) != 0) {
        pppppppbVar14 = pppppppbVar16;
        FUN_00021ed8();
        pppppppbVar8 = pppppppbVar14;
        pppppppbStack_98 = pppppppbVar6;
        goto LAB_000ec98c;
      }
      if (((ulong)pppppppbVar16 >> 0x3d & 1) != 0) {
        pppppppbStack_90 = pppppppbVar6;
        uStack_88 = (ulong)pppppppbVar16 & 0xffffffffffffff;
        uVar1 = (uint)pppppppbVar6 & 0xff;
        if (uVar1 == 0x2b) {
          if (pppppppbVar9 == (byte *******)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0xecc5c);
            (*pcVar2)();
          }
          pbVar10 = (byte *)((long)pppppppbVar9 + -1);
          if (pbVar10 == (byte *)0x0) goto LAB_000ec984;
          pppppppbStack_98 = (byte *******)0x0;
          pbVar12 = (byte *)((ulong)&pppppppbStack_90 | 1);
          goto LAB_000ec898;
        }
        if (uVar1 != 0x2d) {
          if (pppppppbVar9 == (byte *******)0x0) goto LAB_000ec984;
          pppppppbStack_98 = (byte *******)0x0;
          pppppppbVar6 = (byte *******)&pppppppbStack_90;
          goto LAB_000ec940;
        }
        if (pppppppbVar9 == (byte *******)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xecc54);
          (*pcVar2)();
        }
        pbVar10 = (byte *)((long)pppppppbVar9 + -1);
        if (pbVar10 == (byte *)0x0) goto LAB_000ec984;
        pppppppbStack_98 = (byte *******)0x0;
        pbVar12 = (byte *)((ulong)&pppppppbStack_90 | 1);
        goto LAB_000ec710;
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0xecc58);
          (*pcVar2)();
        }
        pbVar10 = (byte *)((long)pppppppbVar14 + -1);
        if (pbVar10 == (byte *)0x0) goto LAB_000ec984;
        pppppppbStack_98 = (byte *******)0x0;
        goto LAB_000ec838;
      }
      if (*(byte *)pppppppbVar6 == 0x2d) {
        if ((long)pppppppbVar14 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xecc50);
          (*pcVar2)();
        }
        pbVar10 = (byte *)((long)pppppppbVar14 + -1);
        if (pbVar10 == (byte *)0x0) goto LAB_000ec984;
        pppppppbStack_98 = (byte *******)0x0;
        goto LAB_000ec53c;
      }
      if (pppppppbVar14 == (byte *******)0x0) goto LAB_000ec984;
      if (pppppppbVar6 != (byte *******)0x0) {
        pppppppbStack_98 = (byte *******)0x0;
        goto LAB_000ec8ec;
      }
      pppppppbStack_98 = (byte *******)0x0;
      pppppppbVar8 = (byte *******)0x0;
      goto LAB_000ec98c;
    }
LAB_000ebe68:
    if (lVar15 != 0) goto LAB_000ecb2c;
    pppppppbVar14 = pppppppbVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)pppppppbVar14 & 1) == 0) {
      pppppppbVar8 = (byte *******)((long)pppppppbVar5[2] + 1);
      pppppppbVar6 = (byte *******)0x0;
      func_0x000d5ff0(0,pppppppbVar8,1,pppppppbVar5);
      pppppppbVar14 = pppppppbVar6;
    }
    pppppppbVar5 = pppppppbVar14;
    ppppppbVar11 = pppppppbVar6[2];
    pppppppbVar14 = (byte *******)((long)ppppppbVar11 + 1);
    if ((byte ******)((ulong)pppppppbVar6[3] >> 1) <= ppppppbVar11) {
      pppppppbVar5 = (byte *******)(ulong)((byte ******)0x1 < pppppppbVar6[3]);
      pppppppbVar8 = pppppppbVar14;
      func_0x000d5ff0(pppppppbVar5,pppppppbVar14,1,pppppppbVar6);
      pppppppbVar6 = pppppppbVar5;
    }
    pppppppbVar6[2] = (byte ******)pppppppbVar14;
    pppppppbVar6[(long)ppppppbVar11 * 2 + 4] = (byte ******)param_2;
    pppppppbVar6[(long)ppppppbVar11 * 2 + 5] = (byte ******)pppppppbVar16;
    bVar17 = true;
LAB_000ebe20:
    bVar3 = SCARRY8(lVar15,1);
    lVar15 = lVar15 + 1;
    param_2 = pppppppbVar5;
    pppppppbVar16 = pppppppbVar8;
    pppppppbVar5 = pppppppbVar6;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xec44c);
      (*pcVar2)();
    }
  }
  goto LAB_000ecb34;
  while( true ) {
    pppppppbVar8 = (byte *******)0x0;
    pbVar10 = pbVar10 + -1;
    pbVar12 = pbVar12 + 1;
    if (pbVar10 == (byte *)0x0) break;
LAB_000ec898:
    if (((9 < *pbVar12 - 0x30) ||
        (lVar15 = (long)pppppppbStack_98 * 10,
        SUB168(SEXT816((long)pppppppbStack_98) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
       (uVar4 = (ulong)(byte)(*pbVar12 - 0x30), pppppppbStack_98 = (byte *******)(lVar15 + uVar4),
       SCARRY8(lVar15,uVar4))) goto LAB_000ec984;
  }
  goto LAB_000ec98c;
  while( true ) {
    pppppppbVar8 = (byte *******)0x0;
    pppppppbVar9 = (byte *******)((long)pppppppbVar9 + -1);
    pppppppbVar6 = (byte *******)((long)pppppppbVar6 + 1);
    if (pppppppbVar9 == (byte *******)0x0) break;
LAB_000ec940:
    if (((9 < *(byte *)pppppppbVar6 - 0x30) ||
        (lVar15 = (long)pppppppbStack_98 * 10,
        SUB168(SEXT816((long)pppppppbStack_98) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
       (uVar4 = (ulong)(byte)(*(byte *)pppppppbVar6 - 0x30),
       pppppppbStack_98 = (byte *******)(lVar15 + uVar4), SCARRY8(lVar15,uVar4))) goto LAB_000ec984;
  }
  goto LAB_000ec98c;
  while( true ) {
    pppppppbVar8 = (byte *******)0x0;
    pbVar10 = pbVar10 + -1;
    pbVar12 = pbVar12 + 1;
    if (pbVar10 == (byte *)0x0) break;
LAB_000ec710:
    if (((9 < *pbVar12 - 0x30) ||
        (lVar15 = (long)pppppppbStack_98 * 10,
        SUB168(SEXT816((long)pppppppbStack_98) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
       (uVar4 = (ulong)(byte)(*pbVar12 - 0x30), pppppppbStack_98 = (byte *******)(lVar15 - uVar4),
       SBORROW8(lVar15,uVar4))) goto LAB_000ec984;
  }
  goto LAB_000ec98c;
  while( true ) {
    pppppppbVar8 = (byte *******)0x0;
    pbVar10 = pbVar10 + -1;
    if (pbVar10 == (byte *)0x0) break;
LAB_000ec838:
    pppppppbVar6 = (byte *******)((long)pppppppbVar6 + 1);
    if (((9 < *(byte *)pppppppbVar6 - 0x30) ||
        (lVar15 = (long)pppppppbStack_98 * 10,
        SUB168(SEXT816((long)pppppppbStack_98) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
       (uVar4 = (ulong)(byte)(*(byte *)pppppppbVar6 - 0x30),
       pppppppbStack_98 = (byte *******)(lVar15 + uVar4), SCARRY8(lVar15,uVar4))) goto LAB_000ec984;
  }
  goto LAB_000ec98c;
  while( true ) {
    pppppppbVar8 = (byte *******)0x0;
    pppppppbVar14 = (byte *******)((long)pppppppbVar14 + -1);
    pppppppbVar6 = (byte *******)((long)pppppppbVar6 + 1);
    if (pppppppbVar14 == (byte *******)0x0) break;
LAB_000ec8ec:
    if (((9 < *(byte *)pppppppbVar6 - 0x30) ||
        (lVar15 = (long)pppppppbStack_98 * 10,
        SUB168(SEXT816((long)pppppppbStack_98) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
       (uVar4 = (ulong)(byte)(*(byte *)pppppppbVar6 - 0x30),
       pppppppbStack_98 = (byte *******)(lVar15 + uVar4), SCARRY8(lVar15,uVar4))) goto LAB_000ec984;
  }
  goto LAB_000ec98c;
LAB_000ec984:
  pppppppbStack_98 = (byte *******)0x0;
  pppppppbVar8 = (byte *******)((long)&MACH_HEADER.magic + 1);
  goto LAB_000ec98c;
  while( true ) {
    pppppppbVar8 = (byte *******)0x0;
    pbVar10 = pbVar10 + -1;
    if (pbVar10 == (byte *)0x0) break;
LAB_000ec53c:
    pppppppbVar6 = (byte *******)((long)pppppppbVar6 + 1);
    if (((9 < *(byte *)pppppppbVar6 - 0x30) ||
        (lVar15 = (long)pppppppbStack_98 * 10,
        SUB168(SEXT816((long)pppppppbStack_98) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
       (uVar4 = (ulong)(byte)(*(byte *)pppppppbVar6 - 0x30),
       pppppppbStack_98 = (byte *******)(lVar15 - uVar4), SBORROW8(lVar15,uVar4)))
    goto LAB_000ec984;
  }
LAB_000ec98c:
  _swift_bridgeObjectRelease();
  param_2 = pppppppbVar16;
  if ((((uint)pppppppbVar8 & 0xff) != 1) &&
     (pppppppbStack_98 + 0x92f3973c0 < (byte *******)0x92f3973c01)) {
LAB_000ecb1c:
    __sSS8IteratorV4nextSJSgyF();
    pppppppbVar6 = pppppppbStack_78;
    pppppppbVar16 = pppppppbVar14;
    if (pppppppbVar14 == (byte *******)0x0) {
      _swift_bridgeObjectRelease(pppppppbVar5);
      _swift_bridgeObjectRelease(pppppppbVar6);
      return;
    }
LAB_000ecb2c:
    _swift_bridgeObjectRelease();
    param_2 = pppppppbVar16;
  }
LAB_000ecb34:
  FUN_000c7004();
  _swift_allocError(&UNK_009ad5a0,param_2,0,0);
  param_2[1] = (byte ******)0xe;
  *param_2 = (byte ******)0x0;
  _swift_willThrow();
  pppppppbVar16 = pppppppbStack_78;
  _swift_bridgeObjectRelease(pppppppbVar5);
  _swift_bridgeObjectRelease(pppppppbVar16);
  return;
}



/* Entry: 000ecc6c; end: 000ecd8b;  */

undefined1  [16] FUN_000ecc6c(long param_1,undefined8 param_2)

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
    FUN_0013a7c0(param_2);
    if ((param_1 == 0) && ((int)uVar1 < 0)) {
      puStack_40 = &UNK_0000302d;
      puStack_38 = (undefined *)0xe200000000000000;
    }
    else {
      puStack_40 = PTR___ss5Int64VN_0099b758;
      puStack_38 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_0099b770;
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



/* Entry: 000ecd8c; end: 000ecd97;  */

void FUN_000ecd8c(void)

{
  return;
}



/* Entry: 000ecd98; end: 000ece3f;  */

void FUN_000ecd98(void)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 *unaff_x20;
  
  puVar1 = (undefined1 *)*unaff_x20;
  uVar2 = (ulong)*(uint *)(unaff_x20 + 1);
  FUN_000ecc6c();
  if (uVar2 == 0) {
    func_0x000c7144();
    _swift_allocError(&UNK_009ad758,puVar1,0,0);
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



/* Entry: 000ece40; end: 000ecea3;  */

void FUN_000ece40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_00106a08();
  if (unaff_x21 == 0) {
    uVar1 = param_2;
    FUN_000ebd9c();
    _swift_bridgeObjectRelease(param_2);
    *unaff_x20 = param_1;
    *(int *)(unaff_x20 + 1) = (int)uVar1;
  }
  return;
}



/* Entry: 000ecea4; end: 000eceab;  */

void FUN_000ecea4(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x68))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)
              PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_0099b678);
  FUN_000ed8bc(param_1,&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 000eceac; end: 000ecf4b;  */

void FUN_000eceac(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
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
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = *param_2;
  uVar3 = *(undefined4 *)
           PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_0099b678;
  (**(code **)(extraout_x12 + 0x68))(puVar2);
  FUN_000ed8bc(uVar4);
  *param_1 = puVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  param_1[2] = lVar1;
  param_1[3] = param_5;
  return;
}



/* Entry: 000ecf4c; end: 000ecfcf;  */

void FUN_000ecf4c(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x68))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)
              PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_0099b678);
  FUN_000ed8bc(param_1,&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 000ecfd0; end: 000ed077;  */

undefined1  [16] FUN_000ecfd0(ulong param_1,int param_2)

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
      pcVar3 = (code *)SoftwareBreakpoint(1,0xed058);
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



/* Entry: 000ed078; end: 000ed317;  */

void FUN_000ed078(undefined8 param_1,long param_2,undefined8 param_3)

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
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar7 + 0x40));
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
                   PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_0099b678)
       || (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO15toNearestOrEvenyA2BmFWC_0099b670))
      || (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO2upyA2BmFWC_0099b680)) ||
     ((iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO4downyA2BmFWC_0099b688 ||
      (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO10towardZeroyA2BmFWC_0099b660)))) {
    (**(code **)(lVar7 + 8))(param_3,lVar3);
    dVar8 = (double)(long)dVar8;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO12awayFromZeroyA2BmFWC_0099b668) {
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
    pcVar1 = (code *)SoftwareBreakpoint(1,0xed304);
    (*pcVar1)();
  }
  if (0x1dcd64ffffffffff < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xed308);
    (*pcVar1)();
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xed30c);
    (*pcVar1)();
  }
  if (dVar8 <= -2147483649.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xed310);
    (*pcVar1)();
  }
  if (dVar8 < 2147483648.0) {
    iVar2 = (int)(param_2 / 1000000000);
    if (!SCARRY4(iVar2,(int)dVar8)) {
      FUN_000ecfd0(uVar4,iVar2 + (int)dVar8);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xed318);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xed314);
  (*pcVar1)();
}



/* Entry: 000ed318; end: 000ed36b;  */

undefined1  [16] FUN_000ed318(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = (long)param_2 * 1000000000;
  __ss8DurationV16secondsComponent011attosecondsC0ABs5Int64V_AFtcfC(param_1,lVar1);
  FUN_00023358(param_3,param_4);
  auVar2._8_8_ = lVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 000ed36c; end: 000ed55b;  */

ulong FUN_000ed36c(long param_1,int param_2)

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
    pcVar3 = (code *)SoftwareBreakpoint(1,0xed408);
    (*pcVar3)();
  }
  iVar2 = -param_2;
  if (!SBORROW4(0,param_2)) {
    if (iVar2 + 0xc4653600U < 0x88ca6c01) {
      bVar4 = SCARRY8(uVar6,(long)(iVar2 / 1000000000));
      uVar6 = uVar6 + (long)(iVar2 / 1000000000);
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xed410);
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
  pcVar3 = (code *)SoftwareBreakpoint(1,0xed40c);
  (*pcVar3)();
}



/* Entry: 000ed55c; end: 000ed653;  */

/* WARNING: Removing unreachable block (ram,0x000ed648) */

ulong FUN_000ed55c(undefined8 ***param_1,ulong param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 **ppuStack_40;
  ulong uStack_38;
  
  ppuStack_40 = param_1;
  uStack_38 = param_2;
  _swift_bridgeObjectRetain(param_2);
  pppuVar1 = &ppuStack_40;
  puVar3 = PTR___sSSN_0099b040;
  __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
            (pppuVar1,PTR___sSSN_0099b040,PTR___sSSs25LosslessStringConvertiblesWP_0099b068,
             PTR___sSSSTsWP_0099b058);
  if (((ulong)puVar3 >> 0x3c & 1) != 0) {
    puVar4 = puVar3;
    FUN_00022254();
    _swift_bridgeObjectRelease(puVar3);
    puVar3 = puVar4;
  }
  if (((ulong)puVar3 >> 0x3d & 1) == 0) {
    if (((ulong)pppuVar1 >> 0x3c & 1) == 0) {
      __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      pppuVar2 = pppuVar1;
    }
    else {
      pppuVar2 = (undefined8 ***)(((ulong)puVar3 & 0xfffffffffffffff) + 0x20);
    }
    FUN_000ed654(pppuVar2);
  }
  else {
    uStack_38 = (ulong)puVar3 & 0xffffffffffffff;
    pppuVar2 = &ppuStack_40;
    ppuStack_40 = pppuVar1;
    FUN_000ed654(pppuVar2,(ulong)puVar3 >> 0x38 & 0xf,param_3);
  }
  _swift_bridgeObjectRelease(puVar3);
  return (ulong)pppuVar2 & 0xffffffffff;
}



/* Entry: 000ed654; end: 000ed8bb;  */

ulong FUN_000ed654(byte *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar5 = (int)param_3;
  if (*param_1 == 0x2b) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xed8bc);
      (*pcVar4)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar10 = 0;
      uVar1 = iVar5 + 0x30;
      uVar2 = 0x61;
      if (10 < param_3) {
        uVar2 = iVar5 + 0x57;
      }
      uVar11 = 0x41;
      if (10 < param_3) {
        uVar1 = 0x3a;
        uVar11 = iVar5 + 0x37;
      }
      do {
        param_1 = param_1 + 1;
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
          uVar12 = (uint)bVar3;
          if ((uVar12 < 0x41) || ((uVar11 & 0xff) <= uVar12)) {
            uVar7 = 0;
            uVar9 = 0x100000000;
            if ((uVar12 < 0x61) || ((uVar2 & 0xff) <= uVar12)) goto LAB_000ed8a8;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        iVar8 = (int)((long)(int)uVar10 * (long)iVar5);
        if (((long)(int)uVar10 * (long)iVar5 - (long)iVar8 != 0) ||
           (uVar12 = (uint)bVar3 + iVar6 & 0xff, uVar10 = iVar8 + uVar12, SCARRY4(iVar8,uVar12)))
        goto LAB_000ed894;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
LAB_000ed7d4:
      uVar9 = 0;
      uVar7 = uVar10;
      goto LAB_000ed8a8;
    }
  }
  else if (*param_1 == 0x2d) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xed8b8);
      (*pcVar4)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar10 = 0;
      uVar1 = iVar5 + 0x30;
      uVar2 = 0x61;
      if (10 < param_3) {
        uVar2 = iVar5 + 0x57;
      }
      uVar11 = 0x41;
      if (10 < param_3) {
        uVar1 = 0x3a;
        uVar11 = iVar5 + 0x37;
      }
      do {
        param_1 = param_1 + 1;
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
          uVar12 = (uint)bVar3;
          if ((uVar12 < 0x41) || ((uVar11 & 0xff) <= uVar12)) {
            uVar7 = 0;
            uVar9 = 0x100000000;
            if ((uVar12 < 0x61) || ((uVar2 & 0xff) <= uVar12)) goto LAB_000ed8a8;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        iVar8 = (int)((long)(int)uVar10 * (long)iVar5);
        if (((long)(int)uVar10 * (long)iVar5 - (long)iVar8 != 0) ||
           (uVar12 = (uint)bVar3 + iVar6 & 0xff, uVar10 = iVar8 - uVar12, SBORROW4(iVar8,uVar12)))
        goto LAB_000ed894;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      goto LAB_000ed7d4;
    }
  }
  else if (param_2 != 0) {
    uVar10 = iVar5 + 0x30;
    uVar1 = 0x61;
    if (10 < param_3) {
      uVar1 = iVar5 + 0x57;
    }
    uVar2 = 0x41;
    if (10 < param_3) {
      uVar10 = 0x3a;
      uVar2 = iVar5 + 0x37;
    }
    if (param_1 == (byte *)0x0) {
      uVar7 = 0;
      uVar9 = 0;
    }
    else {
      uVar11 = 0;
      do {
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar10 & 0xff) <= (uint)bVar3)) {
          uVar12 = (uint)bVar3;
          if ((uVar12 < 0x41) || ((uVar2 & 0xff) <= uVar12)) {
            uVar7 = 0;
            uVar9 = 0x100000000;
            if ((uVar12 < 0x61) || ((uVar1 & 0xff) <= uVar12)) goto LAB_000ed8a8;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        iVar8 = (int)((long)(int)uVar11 * (long)iVar5);
        if (((long)(int)uVar11 * (long)iVar5 - (long)iVar8 != 0) ||
           (uVar11 = (uint)bVar3 + iVar6 & 0xff, uVar7 = iVar8 + uVar11, SCARRY4(iVar8,uVar11)))
        goto LAB_000ed894;
        param_1 = param_1 + 1;
        param_2 = param_2 + -1;
        uVar11 = uVar7;
      } while (param_2 != 0);
      uVar9 = 0;
    }
    goto LAB_000ed8a8;
  }
LAB_000ed894:
  uVar7 = 0;
  uVar9 = 0x100000000;
LAB_000ed8a8:
  return uVar9 | uVar7;
}



/* Entry: 000ed8bc; end: 000edb17;  */

void FUN_000ed8bc(double param_1,undefined8 param_2)

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
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xedb04);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xedb08);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xedb0c);
    (*pcVar1)();
  }
  dVar7 = (param_1 - (double)(long)param_1) * 1000000000.0;
  dStack_58 = dVar7;
  (**(code **)(lVar6 + 0x10))(puVar5,param_2,lVar3);
  puVar4 = puVar5;
  (**(code **)(lVar6 + 0x58))(puVar5,lVar3);
  iVar2 = (int)puVar4;
  if ((((iVar2 == *(int *)
                   PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_0099b678)
       || (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO15toNearestOrEvenyA2BmFWC_0099b670))
      || (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO2upyA2BmFWC_0099b680)) ||
     ((iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO4downyA2BmFWC_0099b688 ||
      (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO10towardZeroyA2BmFWC_0099b660)))) {
    (**(code **)(lVar6 + 8))(param_2,lVar3);
    dVar7 = (double)(long)dVar7;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO12awayFromZeroyA2BmFWC_0099b668) {
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
    pcVar1 = (code *)SoftwareBreakpoint(1,0xedb10);
    (*pcVar1)();
  }
  if (dVar7 <= -2147483649.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xedb14);
    (*pcVar1)();
  }
  if (dVar7 < 2147483648.0) {
    FUN_000ecfd0((long)param_1,(int)dVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xedb18);
  (*pcVar1)();
}



/* Entry: 000edb18; end: 000edb23;  */

undefined * FUN_000edb18(void)

{
  return PTR___sSds33_ExpressibleByBuiltinFloatLiteralsWP_0099b268;
}



/* Entry: 000edb24; end: 000edb73;  */

void FUN_000edb24(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000aeeb60 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xaeeb58;
  FUN_00016c74(0xaeeb58,&UNK_007d90e0);
  puVar2 = PTR___sSayxGSTsMc_0099b1f0;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_0099b1f0,uVar1);
  puRam0000000000aeeb60 = puVar2;
  return;
}



/* Entry: 000edb74; end: 000edb7b;  */

ulong FUN_000edb74(long param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  int param_6)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  
  uVar5 = param_1 - param_5;
  if (SBORROW8(param_1,param_5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xed554);
    (*pcVar2)();
  }
  iVar6 = param_2 - param_6;
  if (!SBORROW4(param_2,param_6)) {
    if (iVar6 + 0xc4653600U < 0x88ca6c01) {
      bVar3 = SCARRY8(uVar5,(long)(iVar6 / 1000000000));
      uVar5 = uVar5 + (long)(iVar6 / 1000000000);
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xed55c);
        (*pcVar2)();
      }
      iVar6 = iVar6 % 1000000000;
    }
    uVar4 = uVar5 - 1;
    if (((long)uVar5 < 1) || (-1 < iVar6)) {
      uVar1 = uVar5;
      if (0 < iVar6) {
        uVar1 = uVar5 + 1;
      }
      uVar4 = uVar5;
      if ((uVar5 & 0x8000000000000000) != 0) {
        uVar4 = uVar1;
      }
    }
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0xed558);
  (*pcVar2)();
}



/* Entry: 000edb7c; end: 000edd07;  */

bool FUN_000edb7c(undefined8 ****param_1,ulong param_2)

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
      FUN_0002269c();
    }
    if (uVar1 <= uVar5 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xedd04);
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
      if (uVar9 == uVar7) goto LAB_000edcc4;
LAB_000edc68:
      if ((param_2 >> 0x3c & 1) == 0) goto LAB_000edbe0;
LAB_000edc6c:
      if (uVar1 <= uVar3 >> 0x10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xedd08);
        (*pcVar2)();
      }
      __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
    }
    else {
      __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar5,param_1,param_2);
      uVar6 = (uint)uVar5;
      if (uVar9 != uVar7) goto LAB_000edc68;
LAB_000edcc4:
      FUN_0002269c();
      if ((param_2 >> 0x3c & 1) != 0) goto LAB_000edc6c;
LAB_000edbe0:
      uVar3 = (uVar3 & 0xffffffffffff0000) + 0x10004;
    }
  } while (0xa1 < (uVar6 - 0x7f & 0xff));
  return uVar8 == uVar1 * 4;
}



/* Entry: 000edd08; end: 000ee477;  */

undefined1  [16] FUN_000edd08(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_2;
  FUN_000edb7c();
  if ((param_1 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    uVar3 = param_2;
    _swift_bridgeObjectRetain();
    __sSS8IteratorV4nextSJSgyF();
    while (uVar6 != 0) {
      if ((uVar3 == 0x5f) && (uVar5 = uVar6, uVar6 == 0xe100000000000000)) {
LAB_000eddd0:
        _swift_bridgeObjectRelease();
        __sSS8IteratorV4nextSJSgyF();
        if (uVar5 == 0) {
LAB_000ee0c0:
          _swift_bridgeObjectRelease(param_2);
          uVar6 = 0;
          param_2 = 0xe000000000000000;
          goto LAB_000ee0d4;
        }
        uVar3 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x7a,0xe100000000000000,0x61,0xe100000000000000,1);
        if ((uVar3 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xee0fc);
          (*pcVar2)();
        }
        if ((uVar6 == 0x61) && (uVar5 == 0xe100000000000000)) {
LAB_000ede18:
          uVar3 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x7a,0xe100000000000000,uVar6,uVar5,1);
          if ((uVar3 & 1) != 0) goto LAB_000ee0bc;
        }
        else {
          uVar3 = uVar6;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar6,uVar5,0x61,0xe100000000000000,1);
          if ((uVar3 & 1) != 0) goto LAB_000ee0bc;
          if ((uVar6 != 0x7a) || (uVar5 != 0xe100000000000000)) goto LAB_000ede18;
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
        if ((uVar4 & 1) != 0) goto LAB_000eddd0;
        uVar5 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x5a,0xe100000000000000,0x41,0xe100000000000000,1);
        if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xee100);
          (*pcVar2)();
        }
        if ((uVar3 != 0x41) || (uVar6 != 0xe100000000000000)) {
          uVar5 = uVar3;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar3,uVar6,0x41,0xe100000000000000,1);
          if ((uVar5 & 1) != 0) goto LAB_000edefc;
          if ((uVar3 != 0x5a) || (uVar5 = uVar6, uVar6 != 0xe100000000000000)) goto LAB_000edec0;
LAB_000ee0bc:
          _swift_bridgeObjectRelease(uVar5);
          goto LAB_000ee0c0;
        }
LAB_000edec0:
        uVar4 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x5a,0xe100000000000000,uVar3,uVar6,1);
        uVar5 = uVar6;
        if ((uVar4 & 1) == 0) goto LAB_000ee0bc;
LAB_000edefc:
        uVar5 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x7a,0xe100000000000000,0x61,0xe100000000000000,1);
        if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xee104);
          (*pcVar2)();
        }
        if ((uVar3 == 0x61) && (uVar6 == 0xe100000000000000)) {
LAB_000edf28:
          uVar5 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x7a,0xe100000000000000,uVar3,uVar6,1);
          if ((uVar5 & 1) != 0) {
LAB_000edf64:
            uVar5 = 0x39;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x39,0xe100000000000000,0x30,0xe100000000000000,1);
            if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0xee108);
              (*pcVar2)();
            }
            if ((uVar3 == 0x30) && (uVar6 == 0xe100000000000000)) {
LAB_000edf90:
              uVar5 = 0x39;
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x39,0xe100000000000000,uVar3,uVar6,1);
              if ((uVar6 != 0xe100000000000000 || uVar3 != 0x2e) && ((uVar5 & 1) != 0)) {
LAB_000edfb8:
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
                if ((uVar3 != 0x39) || (uVar6 != 0xe100000000000000)) goto LAB_000edf90;
              }
              else if ((uVar3 != 0x2e) || (uVar6 != 0xe100000000000000)) goto LAB_000edfb8;
            }
          }
        }
        else {
          uVar5 = uVar3;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar3,uVar6,0x61,0xe100000000000000,1);
          if ((uVar5 & 1) != 0) goto LAB_000edf64;
          if ((uVar3 != 0x7a) || (uVar6 != 0xe100000000000000)) goto LAB_000edf28;
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
LAB_000ee0d4:
    _swift_bridgeObjectRelease(param_2);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar6;
  return auVar1 << 0x40;
}



/* Entry: 000ee478; end: 000ee6ef;  */

undefined * FUN_000ee478(ulong param_1,undefined1 *param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  
  uVar3 = param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar3 = (ulong)param_2 >> 0x38 & 0xf;
  }
  if (uVar3 == 0) {
    return PTR___swiftEmptyArrayStorage_0099b8f0;
  }
  puVar7 = param_2;
  puVar8 = param_2;
  _swift_bridgeObjectRetain();
  puVar6 = PTR___swiftEmptyArrayStorage_0099b8f0;
  do {
    puStack_58 = (undefined1 *)0xe000000000000000;
    uStack_60 = 0;
    lVar9 = 0;
    while( true ) {
      __sSS8IteratorV4nextSJSgyF();
      if (puVar8 == (undefined1 *)0x0) {
        _swift_bridgeObjectRelease(param_2);
        if (lVar9 == 0) goto LAB_000ee63c;
        func_0x000ee108();
        if (puStack_58 != (undefined1 *)0x0) {
          puVar8 = puVar6;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar7 = puVar6;
          if (((ulong)puVar8 & 1) == 0) {
            puVar7 = (undefined1 *)0x0;
            FUN_0002a0e4(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
          }
          uVar3 = *(ulong *)(puVar7 + 0x10);
          puVar8 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
            puVar8 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
            FUN_0002a0e4(puVar8,uVar3 + 1,1,puVar7);
          }
          *(ulong *)(puVar8 + 0x10) = uVar3 + 1;
          *(undefined8 *)(puVar8 + uVar3 * 0x10 + 0x20) = uStack_60;
          *(undefined1 **)(puVar8 + uVar3 * 0x10 + 0x28) = puStack_58;
          _swift_bridgeObjectRelease(0xe000000000000000);
          return puVar8;
        }
        _swift_bridgeObjectRelease(0xe000000000000000);
        goto LAB_000ee654;
      }
      if ((puVar7 == segment_command_00000020.segname + 4) &&
         (puVar8 == (undefined1 *)0xe100000000000000)) break;
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
        pcVar1 = (code *)SoftwareBreakpoint(1,0xee6b0);
        (*pcVar1)();
      }
    }
    _swift_bridgeObjectRelease(puVar8);
    if (lVar9 == 0) {
      _swift_bridgeObjectRelease(puVar6);
      puVar6 = param_2;
LAB_000ee63c:
      _swift_bridgeObjectRelease(puVar6);
      puVar6 = (undefined1 *)0xe000000000000000;
      goto LAB_000ee654;
    }
    puVar7 = puStack_58;
    func_0x000ee108();
    if (puVar7 == (undefined1 *)0x0) {
      _swift_bridgeObjectRelease(0xe000000000000000);
      _swift_bridgeObjectRelease(puVar6);
      puVar6 = param_2;
LAB_000ee654:
      _swift_bridgeObjectRelease(puVar6);
      return (undefined *)0x0;
    }
    puVar4 = puVar6;
    puVar8 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar5 = puVar6;
    if (((ulong)puVar4 & 1) == 0) {
      puVar8 = (undefined1 *)(*(long *)(puVar6 + 0x10) + 1);
      puVar5 = (undefined1 *)0x0;
      FUN_0002a0e4(0,puVar8,1,puVar6);
    }
    uVar3 = *(ulong *)(puVar5 + 0x10);
    puVar4 = (undefined1 *)(uVar3 + 1);
    puVar6 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar3) {
      puVar6 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      puVar8 = puVar4;
      FUN_0002a0e4(puVar6,puVar4,1,puVar5);
    }
    *(undefined1 **)(puVar6 + 0x10) = puVar4;
    *(undefined8 *)(puVar6 + uVar3 * 0x10 + 0x20) = uStack_60;
    *(undefined1 **)(puVar6 + uVar3 * 0x10 + 0x28) = puVar7;
    _swift_bridgeObjectRelease();
    puVar7 = puStack_58;
  } while( true );
}



/* Entry: 000ee6f0; end: 000ee6f3;  */

undefined8 FUN_000ee6f0(undefined8 param_1)

{
  _swift_bridgeObjectRetain();
  func_0x00023304(0,0xc000000000000000);
  _swift_bridgeObjectRelease(param_1);
  FUN_00023358(0,0xc000000000000000);
  return param_1;
}



/* Entry: 000ee6f4; end: 000ee73f;  */

undefined8 FUN_000ee6f4(undefined8 param_1)

{
  _swift_bridgeObjectRetain();
  func_0x00023304(0,0xc000000000000000);
  _swift_bridgeObjectRelease(param_1);
  FUN_00023358(0,0xc000000000000000);
  return param_1;
}



/* Entry: 000ee740; end: 000ee88b;  */

undefined * FUN_000ee740(long param_1)

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
  puVar7 = PTR___swiftEmptyArrayStorage_0099b8f0;
  do {
    plVar9 = (long *)(param_1 + 0x28 + uVar10 * 0x10);
    do {
      if (uVar11 == uVar10) {
        _swift_bridgeObjectRelease(param_1);
        _swift_bridgeObjectRetain(puVar7);
        func_0x00023304(0,0xc000000000000000);
        _swift_bridgeObjectRelease(puVar7);
        FUN_00023358(0,0xc000000000000000);
        return puVar7;
      }
      if (*(ulong *)(param_1 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xee88c);
        (*pcVar3)();
      }
      uVar10 = uVar10 + 1;
      lVar4 = plVar9[-1];
      lVar2 = *plVar9;
      _swift_bridgeObjectRetain(lVar2);
      lVar8 = lVar2;
      func_0x000ee108();
      _swift_bridgeObjectRelease(lVar2);
      plVar9 = plVar9 + 2;
    } while (lVar8 == 0);
    puVar5 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar6 = puVar7;
    if (((ulong)puVar5 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      FUN_0002a0e4(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
    }
    uVar1 = *(ulong *)(puVar6 + 0x10);
    puVar7 = puVar6;
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
      FUN_0002a0e4(puVar7,uVar1 + 1,1,puVar6);
    }
    *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
    *(long *)(puVar7 + uVar1 * 0x10 + 0x20) = lVar4;
    *(long *)(puVar7 + uVar1 * 0x10 + 0x28) = lVar8;
  } while( true );
}



/* Entry: 000ee88c; end: 000ee8a7;  */

void FUN_000ee88c(void)

{
  undefined8 *unaff_x20;
  
  FUN_000f1494(*unaff_x20,unaff_x20[1],unaff_x20[2]);
  return;
}



/* Entry: 000ee8a8; end: 000ee93f;  */

void FUN_000ee8a8(long param_1,undefined8 *param_2)

{
  long *unaff_x20;
  long unaff_x21;
  
  FUN_00106a08();
  if (unaff_x21 == 0) {
    FUN_000ee478();
    _swift_bridgeObjectRelease();
    if (param_1 == 0) {
      FUN_000c7004();
      _swift_allocError(&UNK_009ad5a0,param_2,0,0);
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



/* Entry: 000ee940; end: 000ee997;  */

undefined8 FUN_000ee940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_000ee998(param_2,param_3,param_4);
  _swift_bridgeObjectRelease_n(PTR___swiftEmptyArrayStorage_0099b8f0,2);
  FUN_00023358(0,0xc000000000000000);
  return param_2;
}



/* Entry: 000ee998; end: 000eebbb;  */

undefined * FUN_000ee998(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_000efd60();
  _swift_bridgeObjectRelease(lStack_a8);
  _swift_release(uStack_b0);
  uStack_68 = uStack_a0;
  FUN_000f1894(&uStack_68,0xaeddc8,&UNK_007da040);
  uStack_70 = uStack_98;
  FUN_000f1894(&uStack_70,0xaeddc8,&UNK_007da040);
  uStack_78 = uStack_90;
  FUN_000f1894(&uStack_78,0xae6938,&UNK_007cdb30);
  uStack_80 = uStack_88;
  FUN_000f1894(&uStack_80,0xaeddd0,&UNK_007da050);
  lVar11 = *(long *)(lVar6 + 0x10);
  if (lVar11 == 0) {
    _swift_bridgeObjectRelease(lVar6);
    puVar10 = PTR___swiftEmptyArrayStorage_0099b8f0;
  }
  else {
    puStack_c0 = PTR___swiftEmptyArrayStorage_0099b8f0;
    FUN_0003bcc8(0,lVar11,0);
    puVar5 = PTR___sSWs19_HasContiguousBytessWP_0099b110;
    puVar4 = PTR___sSWN_0099b108;
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
        FUN_0001393c(plVar7,puVar4);
        lVar8 = *plVar7;
        if (lVar8 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = plVar7[1] - lVar8;
        }
        __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
        FUN_00011670(&lStack_e8);
      }
      uVar2 = *(ulong *)(puVar10 + 0x10);
      puStack_c0 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar2) {
        FUN_0003bcc8(1 < *(ulong *)(puVar10 + 0x18),uVar2 + 1,1);
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



/* Entry: 000eebbc; end: 000eed63;  */

undefined *
FUN_000eebbc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

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
  puVar6 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      if (*(ulong *)(param_1 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xeed64);
        (*pcVar2)();
      }
      puVar3 = *(undefined1 **)(param_1 + uVar9 * 8 + 0x20);
      lVar7 = param_3;
      FUN_000eed64(puVar3,param_3,param_4,param_5);
      if (lVar7 == 0) {
        FUN_000eff80();
        _swift_allocError(&UNK_009acbb8,puVar3,0,0);
        *puVar3 = 1;
        _swift_willThrow();
        _swift_bridgeObjectRelease(PTR___swiftEmptyArrayStorage_0099b8f0);
        _swift_bridgeObjectRelease(param_1);
        FUN_00023358(0,0xc000000000000000);
        _swift_bridgeObjectRelease(puVar6);
        return puVar6;
      }
      puVar4 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_0002a0e4(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar1 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_0002a0e4(puVar6,uVar1 + 1,1,puVar5);
      }
      uVar9 = uVar9 + 1;
      *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
      *(undefined1 **)(puVar6 + uVar1 * 0x10 + 0x20) = puVar3;
      *(long *)(puVar6 + uVar1 * 0x10 + 0x28) = lVar7;
    } while (uVar8 != uVar9);
  }
  _swift_bridgeObjectRelease(PTR___swiftEmptyArrayStorage_0099b8f0);
  _swift_bridgeObjectRelease(param_1);
  FUN_00023358(0,0xc000000000000000);
  return puVar6;
}



/* Entry: 000eed64; end: 000eef9f;  */

void FUN_000eed64(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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
  if ((*(long *)(lStack_80 + 0x10) == 0) || (FUN_000e1d94(), (param_4 & 1) == 0)) {
    _swift_release(uStack_88);
    FUN_000f1894(&lStack_38,0xaeddc0,&UNK_007d9aa0);
    lStack_b0 = lStack_78;
    FUN_000f1894(&lStack_b0,0xaeddc8,&UNK_007da040);
    lStack_40 = lStack_70;
    FUN_000f1894(&lStack_40,0xaeddc8,&UNK_007da040);
    lStack_48 = lStack_68;
    FUN_000f1894(&lStack_48,0xae6938,&UNK_007cdb30);
    lStack_50 = lStack_60;
    FUN_000f1894(&lStack_50,0xaeddd0,&UNK_007da050);
  }
  else {
    lVar4 = *(long *)(lStack_80 + 0x38) + param_1 * 0x28;
    lVar2 = *(long *)(lVar4 + 0x18);
    lVar4 = *(long *)(lVar4 + 0x20);
    _swift_release(uStack_88);
    FUN_000f1894(&lStack_38,0xaeddc0,&UNK_007d9aa0);
    lStack_40 = lStack_78;
    FUN_000f1894(&lStack_40,0xaeddc8,&UNK_007da040);
    lStack_48 = lStack_70;
    FUN_000f1894(&lStack_48,0xaeddc8,&UNK_007da040);
    lStack_50 = lStack_68;
    FUN_000f1894(&lStack_50,0xae6938,&UNK_007cdb30);
    lStack_58 = lStack_60;
    FUN_000f1894(&lStack_58,0xaeddd0,&UNK_007da050);
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
      puStack_98 = PTR___sSWN_0099b108;
      puStack_90 = PTR___sSWs19_HasContiguousBytessWP_0099b110;
      FUN_0001393c();
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = plVar1[1] - lVar2;
      }
      __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(lVar2,lVar4);
      FUN_00011670(&lStack_b0);
    }
  }
  return;
}



/* Entry: 000eefa0; end: 000ef09f;  */

void FUN_000eefa0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  
  puVar2 = param_1;
  FUN_0010c1c0(param_1,param_2,param_4,param_5);
  if (((ulong)puVar2 & 1) == 0) {
    FUN_000eff80();
    _swift_allocError(&UNK_009acbb8,puVar2,0,0);
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
      FUN_0002a0e4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar3 = *(ulong *)(uVar4 + 0x10);
    uVar5 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_0002a0e4(uVar5,uVar3 + 1,1,uVar4);
    }
    *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
    lVar1 = uVar5 + uVar3 * 0x10;
    *(undefined1 **)(lVar1 + 0x20) = param_1;
    *(undefined8 *)(lVar1 + 0x28) = param_2;
    *unaff_x20 = uVar5;
  }
  return;
}



/* Entry: 000ef0a0; end: 000ef283;  */

/* WARNING: Removing unreachable block (ram,0x000ef278) */

undefined * FUN_000ef0a0(ulong param_1)

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
  FUN_000effc0(&uStack_68);
  uVar4 = uStack_68;
  lVar12 = *(long *)(uStack_68 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_0099b8f0;
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
LAB_000ef204:
          puVar9 = (undefined *)0x0;
          FUN_0002a0e4(0,lVar10,1,puVar8);
        }
LAB_000ef1bc:
        uVar2 = *(ulong *)(puVar9 + 0x10);
        puVar8 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          FUN_0002a0e4(puVar8,uVar2 + 1,1,puVar9);
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
              goto LAB_000ef204;
            }
            goto LAB_000ef1bc;
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
  func_0x00023304(0,0xc000000000000000);
  _swift_bridgeObjectRelease(puVar8);
  FUN_00023358(0,0xc000000000000000);
  return puVar8;
}



/* Entry: 000ef284; end: 000efb43;  */

undefined * FUN_000ef284(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  
  puStack_68 = PTR___swiftEmptySetSingleton_0099b900;
  lStack_b0 = param_4;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_1);
  FUN_000c7e08();
  lVar6 = lStack_b0;
  uVar14 = *(ulong *)(lStack_b0 + 0x10);
  if (uVar14 == 0) {
    _swift_bridgeObjectRelease(lStack_b0);
    puVar10 = PTR___swiftEmptySetSingleton_0099b900;
    puVar12 = PTR___swiftEmptyArrayStorage_0099b8f0;
  }
  else {
    uVar15 = 0;
    lVar1 = lStack_b0 + 0x20;
    puVar12 = PTR___swiftEmptyArrayStorage_0099b8f0;
    do {
      puVar10 = puStack_68;
      if (*(ulong *)(lVar6 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0xef4bc);
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
              goto LAB_000ef2fc;
            }
            uVar16 = uVar16 + 1 & ~uVar13;
          } while ((*(ulong *)(puVar10 + (uVar16 >> 6) * 8 + 0x38) >> (uVar16 & 0x3f) & 1) != 0);
        }
      }
      _swift_bridgeObjectRetain(uVar4);
      FUN_000f0bdc(&lStack_b0,uVar3,uVar4);
      _swift_bridgeObjectRelease(uStack_a8);
      puVar10 = puVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar11 = puVar12;
      if (((ulong)puVar10 & 1) == 0) {
        puVar11 = (undefined *)0x0;
        FUN_0002a0e4(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
      }
      uVar13 = *(ulong *)(puVar11 + 0x10);
      puVar12 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar13) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
        FUN_0002a0e4(puVar12,uVar13 + 1,1,puVar11);
      }
      *(ulong *)(puVar12 + 0x10) = uVar13 + 1;
      *(ulong *)(puVar12 + uVar13 * 0x10 + 0x20) = uVar3;
      *(ulong *)(puVar12 + uVar13 * 0x10 + 0x28) = uVar4;
LAB_000ef2fc:
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar14);
    _swift_bridgeObjectRelease(lVar6);
    puVar10 = puStack_68;
  }
  _swift_bridgeObjectRelease(puVar10);
  return puVar12;
}



/* Entry: 000efb44; end: 000efc17;  */

bool FUN_000efb44(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5
                 ,long param_6)

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
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar5 + 0x40));
  (**(code **)(lVar3 + 0x10))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2,lVar3);
  lVar2 = *(long *)(param_2 + 0x10) + 1;
  puVar4 = (undefined8 *)(param_2 + 0x28);
  do {
    lVar2 = lVar2 + -1;
    if (lVar2 == 0) break;
    uVar1 = puVar4[-1];
    FUN_0010c278(uVar1,*puVar4,param_5,param_6);
    puVar4 = puVar4 + 2;
  } while ((uVar1 & 1) != 0);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_5);
  return lVar2 == 0;
}



/* Entry: 000efc18; end: 000efc27;  */

bool FUN_000efc18(char param_1,char param_2)

{
  return param_1 == param_2;
}



/* Entry: 000efc28; end: 000efc8f;  */

void FUN_000efc28(undefined8 param_1,undefined1 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 000efc90; end: 000efca3;  */

bool FUN_000efc90(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 000efca4; end: 000efd4f;  */

void FUN_000efca4(void)

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



/* Entry: 000efd50; end: 000efd5f;  */

void FUN_000efd50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_0099b708)();
  return;
}



/* Entry: 000efd60; end: 000eff7f;  */

undefined * FUN_000efd60(long param_1)

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
  
  puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    func_0x000e291c(0,lVar5,0);
    uVar1 = param_1 + 0x40;
    uVar9 = uVar1;
    __ss10_HashTableV11startBucketAB0D0Vvg
              (uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar12 = 0;
    do {
      if (uVar9 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0xeff70);
        (*pcVar4)();
      }
      uVar11 = uVar9 >> 6;
      uVar13 = 1L << (uVar9 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar11 * 8) & uVar13) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0xeff74);
        (*pcVar4)();
      }
      iVar2 = *(int *)(param_1 + 0x24);
      lVar6 = *(long *)(param_1 + 0x38) + uVar9 * 0x28;
      uVar15 = *(undefined8 *)(lVar6 + 0x20);
      uVar14 = *(undefined8 *)(lVar6 + 0x18);
      uVar10 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar10) {
        func_0x000e291c(1 < *(ulong *)(puVar3 + 0x18),uVar10 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar10 + 1;
      *(undefined8 *)(puVar3 + uVar10 * 0x10 + 0x28) = uVar15;
      *(undefined8 *)(puVar3 + uVar10 * 0x10 + 0x20) = uVar14;
      uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar10 <= uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0xeff78);
        (*pcVar4)();
      }
      uVar7 = *(ulong *)(uVar1 + uVar11 * 8);
      if ((uVar7 & uVar13) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0xeff7c);
        (*pcVar4)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0xeff80);
        (*pcVar4)();
      }
      uVar7 = uVar7 & -2L << (uVar9 & 0x3f);
      if (uVar7 == 0) {
        lVar6 = uVar11 << 6;
        puVar8 = (ulong *)(param_1 + 0x48 + uVar11 * 8);
        do {
          uVar11 = uVar11 + 1;
          if (uVar10 + 0x3f >> 6 <= uVar11) {
            FUN_000f18d4();
            uVar9 = uVar10;
            goto LAB_000efe00;
          }
          uVar9 = *puVar8;
          lVar6 = lVar6 + 0x40;
          puVar8 = puVar8 + 1;
        } while (uVar9 == 0);
        FUN_000f18d4();
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
LAB_000efe00:
      lVar12 = lVar12 + 1;
    } while (lVar12 != lVar5);
  }
  return puVar3;
}



/* Entry: 000eff80; end: 000effbf;  */

void FUN_000eff80(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aeeb68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d9178;
  _swift_getWitnessTable(&UNK_007d9178,&UNK_009acbb8);
  puRam0000000000aeeb68 = puVar1;
  return;
}



/* Entry: 000effc0; end: 000f00bb;  */

void FUN_000effc0(ulong *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar3 = *param_1;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar1 & 1) == 0) {
    func_0x000f1480();
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lStack_50 = uVar3 + 0x20;
  uVar1 = uVar4;
  uStack_48 = uVar4;
  __ss22_minimumMergeRunLengthyS2iF();
  if ((long)uVar1 < (long)uVar4) {
    puVar5 = (undefined *)(uVar4 >> 1);
    puVar2 = PTR___swiftEmptyArrayStorage_0099b8f0;
    if (1 < uVar4) {
      puVar2 = puVar5;
      __ss15ContiguousArrayV28_allocateBufferUninitialized15minimumCapacitys01_abD0VyxGSi_tFZ
                (puVar5,PTR___sSSN_0099b040);
      *(undefined **)(puVar2 + 0x10) = puVar5;
    }
    puStack_68 = puVar2 + 0x20;
    puStack_60 = puVar5;
    FUN_000f00bc(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    _swift_release(puVar2);
  }
  else if (uVar4 != 0) {
    FUN_000f04d0(0,uVar4,1,&lStack_50);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 000f00bc; end: 000f04cf;  */

void FUN_000f00bc(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong *puVar16;
  long unaff_x21;
  long lVar17;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_0099b8f0;
  lVar21 = param_3[1];
  if (0 < lVar21) {
    lVar12 = 0;
    do {
      lVar20 = lVar12 + 1;
      if (lVar20 < lVar21) {
        lVar17 = *param_3;
        puVar18 = (ulong *)(lVar17 + lVar20 * 0x10);
        uVar19 = *puVar18;
        puVar16 = (ulong *)(lVar17 + lVar12 * 0x10);
        if (uVar19 == *puVar16 && puVar18[1] == puVar16[1]) {
          uVar19 = 0;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
        }
        lVar15 = lVar12 + 2;
        lVar20 = lVar15;
        if (lVar15 < lVar21) {
          puVar18 = puVar16 + 3;
          do {
            uVar14 = puVar18[1];
            if (uVar14 == puVar18[-1] && puVar18[2] == *puVar18) {
              if ((uVar19 & 1) != 0) goto LAB_000f01b4;
            }
            else {
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        ();
              lVar20 = lVar15;
              if ((((uint)uVar19 ^ (uint)uVar14) & 1) != 0) break;
            }
            lVar15 = lVar15 + 1;
            puVar18 = puVar18 + 2;
            lVar20 = lVar21;
          } while (lVar21 != lVar15);
        }
        lVar15 = lVar20;
        if ((uVar19 & 1) != 0) {
LAB_000f01b4:
          if (lVar15 < lVar12) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0xf04a4);
            (*pcVar6)();
          }
          lVar20 = lVar15;
          if (lVar12 < lVar15) {
            lVar11 = lVar15 << 4;
            lVar13 = lVar12 << 4;
            lVar21 = lVar12;
            do {
              lVar15 = lVar15 + -1;
              if (lVar21 != lVar15) {
                if (lVar17 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0xf04c4);
                  (*pcVar6)();
                }
                puVar1 = (undefined8 *)(lVar17 + lVar13);
                lVar2 = lVar17 + lVar11;
                uVar4 = *puVar1;
                uVar5 = puVar1[1];
                uVar22 = *(undefined8 *)(lVar2 + -0x10);
                puVar1[1] = *(undefined8 *)(lVar2 + -8);
                *puVar1 = uVar22;
                *(undefined8 *)(lVar2 + -0x10) = uVar4;
                *(undefined8 *)(lVar2 + -8) = uVar5;
              }
              lVar21 = lVar21 + 1;
              lVar11 = lVar11 + -0x10;
              lVar13 = lVar13 + 0x10;
            } while (lVar21 < lVar15);
          }
        }
      }
      lVar21 = param_3[1];
      lVar17 = lVar20;
      if (lVar20 < lVar21) {
        if (SBORROW8(lVar20,lVar12)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0xf04a0);
          (*pcVar6)();
        }
        if (lVar20 - lVar12 < param_4) {
          if (SCARRY8(lVar12,param_4)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0xf04a8);
            (*pcVar6)();
          }
          lVar15 = lVar12 + param_4;
          if (lVar21 <= lVar12 + param_4) {
            lVar15 = lVar21;
          }
          if (lVar15 < lVar12) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0xf04ac);
            (*pcVar6)();
          }
          if (lVar20 != lVar15) {
            lVar13 = *param_3;
            puVar18 = (ulong *)(lVar13 + lVar20 * 0x10);
            lVar21 = lVar12 - lVar20;
            do {
              puVar16 = (ulong *)(lVar13 + lVar20 * 0x10);
              uVar19 = *puVar16;
              uVar14 = puVar16[1];
              puVar16 = puVar18;
              lVar17 = lVar21;
              do {
                if ((uVar19 == puVar16[-2] && uVar14 == puVar16[-1]) ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar19 & 1) == 0)) break;
                if (lVar13 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0xf04b0);
                  (*pcVar6)();
                }
                uVar19 = *puVar16;
                uVar14 = puVar16[1];
                puVar16[1] = puVar16[-1];
                *puVar16 = puVar16[-2];
                puVar16[-1] = uVar14;
                puVar16 = puVar16 + -2;
                *puVar16 = uVar19;
                bVar7 = lVar17 != -1;
                lVar17 = lVar17 + 1;
              } while (bVar7);
              lVar20 = lVar20 + 1;
              puVar18 = puVar18 + 2;
              lVar21 = lVar21 + -1;
              lVar17 = lVar15;
            } while (lVar20 != lVar15);
          }
        }
      }
      puVar10 = puStack_58;
      if (lVar17 < lVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0xf0490);
        (*pcVar6)();
      }
      puVar8 = puStack_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar9 = puVar10;
      if (((ulong)puVar8 & 1) == 0) {
        puVar9 = (undefined *)0x0;
        FUN_000f0804(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
      }
      uVar19 = *(ulong *)(puVar9 + 0x10);
      puVar10 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar19) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        FUN_000f0804(puVar10,uVar19 + 1,1,puVar9);
      }
      *(ulong *)(puVar10 + 0x10) = uVar19 + 1;
      *(long *)(puVar10 + uVar19 * 0x10 + 0x20) = lVar12;
      *(long *)(puVar10 + uVar19 * 0x10 + 0x28) = lVar17;
      puStack_58 = puVar10;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0xf04c8);
        (*pcVar6)();
      }
      FUN_000f059c(&puStack_58,*param_1,param_3);
      puVar10 = puStack_58;
      if (unaff_x21 != 0) goto LAB_000f0460;
      lVar21 = param_3[1];
      lVar12 = lVar17;
    } while (lVar17 < lVar21);
  }
  puVar10 = puStack_58;
  lVar21 = *param_1;
  if (lVar21 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0xf04d0);
    (*pcVar6)();
  }
  puVar8 = puStack_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar8 & 1) == 0) {
    FUN_000f0bc8();
  }
  puVar18 = (ulong *)(puVar10 + 0x10);
  uVar19 = *puVar18;
  while( true ) {
    if (uVar19 < 2) {
      _swift_bridgeObjectRelease(puVar10);
      return;
    }
    lVar12 = *param_3;
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0xf04cc);
      (*pcVar6)();
    }
    plVar3 = (long *)(puVar10 + uVar19 * 0x10);
    lVar20 = *plVar3;
    puVar16 = puVar18 + uVar19 * 2;
    uVar14 = puVar16[1];
    FUN_000f0904(lVar12 + lVar20 * 0x10,lVar12 + *puVar16 * 0x10,lVar12 + uVar14 * 0x10,lVar21);
    if (unaff_x21 != 0) break;
    if ((long)uVar14 < lVar20) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0xf0494);
      (*pcVar6)();
    }
    if (*puVar18 <= uVar19 - 2) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0xf0498);
      (*pcVar6)();
    }
    *plVar3 = lVar20;
    plVar3[1] = uVar14;
    uVar14 = *puVar18;
    lVar12 = uVar14 - uVar19;
    if (uVar14 < uVar19) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0xf049c);
      (*pcVar6)();
    }
    uVar19 = uVar14 - 1;
    _memmove(puVar16,puVar16 + 2,lVar12 * 0x10);
    *puVar18 = uVar19;
  }
LAB_000f0460:
  _swift_bridgeObjectRelease(puVar10);
  return;
}



/* Entry: 000f04d0; end: 000f059b;  */

void FUN_000f04d0(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  
  if (param_3 != param_2) {
    lVar5 = *param_4;
    puVar6 = (ulong *)(lVar5 + param_3 * 0x10);
    param_1 = param_1 - param_3;
    do {
      puVar8 = (ulong *)(lVar5 + param_3 * 0x10);
      uVar3 = *puVar8;
      uVar4 = puVar8[1];
      lVar7 = param_1;
      puVar8 = puVar6;
      do {
        if ((uVar3 == puVar8[-2] && uVar4 == puVar8[-1]) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar3 & 1) == 0)) break;
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0xf059c);
          (*pcVar1)();
        }
        uVar3 = *puVar8;
        uVar4 = puVar8[1];
        puVar8[1] = puVar8[-1];
        *puVar8 = puVar8[-2];
        puVar8[-1] = uVar4;
        puVar8 = puVar8 + -2;
        *puVar8 = uVar3;
        bVar2 = lVar7 != -1;
        lVar7 = lVar7 + 1;
      } while (bVar2);
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 2;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 000f059c; end: 000f0803;  */

undefined8 FUN_000f059c(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      FUN_000f0bc8();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_000f0670;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0xf07ec);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_000f06d4:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0xf07dc);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0xf07e4);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0xf07c4);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0xf07c8);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0xf07d0);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0xf07d8);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_000f0670:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0xf07cc);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0xf07d4);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0xf07e0);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0xf07e8);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_000f06d4;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0xf07f0);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0xf07b8);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0xf0804);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_000f0904(lVar9 + lVar12 * 0x10,lVar9 + *plVar1 * 0x10,lVar9 + lVar7 * 0x10,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0xf07bc);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        FUN_000f0bc8();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0xf07c0);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      FUN_000f0b40(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 000f0804; end: 000f0903;  */

undefined * FUN_000f0804(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xf0904);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0xaeeb80;
    func_0x000115a8(0xaeeb80,&UNK_007d91e0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 000f0904; end: 000f0b3f;  */

undefined8 FUN_000f0904(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  
  lVar8 = (long)param_2 - (long)param_1;
  lVar1 = lVar8 + 0xf;
  if (-1 < lVar8) {
    lVar1 = lVar8;
  }
  lVar1 = lVar1 >> 4;
  lVar10 = (long)param_3 - (long)param_2;
  lVar3 = lVar10 + 0xf;
  if (-1 < lVar10) {
    lVar3 = lVar10;
  }
  lVar3 = lVar3 >> 4;
  if (lVar1 < lVar3) {
    if (((param_4 < param_1) || (param_1 + lVar1 * 2 <= param_4)) || (param_4 != param_1)) {
      _memmove(param_4,param_1,lVar1 << 4);
    }
    puVar7 = param_4 + lVar1 * 2;
    puVar4 = param_1;
    if (0xf < lVar8) {
      do {
        if (param_3 <= param_2) break;
        uVar11 = *param_2;
        if ((uVar11 == *param_4 && param_2[1] == param_4[1]) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar11 & 1) == 0)) {
          puVar5 = param_4 + 2;
          puVar6 = param_4;
        }
        else {
          puVar5 = param_4;
          puVar6 = param_2;
          param_2 = param_2 + 2;
        }
        param_4 = puVar5;
        if (puVar4 != puVar6) {
          uVar11 = *puVar6;
          puVar4[1] = puVar6[1];
          *puVar4 = uVar11;
        }
        puVar4 = puVar4 + 2;
      } while (param_4 < puVar7);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar3 * 2 <= param_4)) || (param_4 != param_2)) {
      _memmove(param_4,param_2,lVar3 << 4);
    }
    puVar6 = param_4 + lVar3 * 2;
    puVar4 = param_2;
    puVar7 = puVar6;
    if ((param_1 < param_2) && (0xf < lVar10)) {
      do {
        puVar9 = param_2 + -2;
        puVar5 = param_3;
        while( true ) {
          param_3 = puVar5 + -2;
          puVar7 = puVar6 + -2;
          uVar11 = *puVar7;
          if ((uVar11 != param_2[-2] || puVar6[-1] != param_2[-1]) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar11 & 1) != 0)) break;
          if (puVar5 != puVar6) {
            uVar11 = *puVar7;
            puVar5[-1] = puVar6[-1];
            *param_3 = uVar11;
          }
          puVar4 = param_2;
          puVar6 = puVar7;
          puVar5 = param_3;
          if (puVar7 <= param_4) goto LAB_000f0ae4;
        }
        if (puVar5 != param_2) {
          uVar11 = *puVar9;
          puVar5[-1] = param_2[-1];
          *param_3 = uVar11;
        }
        puVar4 = puVar9;
        puVar7 = puVar6;
      } while ((param_1 < puVar9) && (param_2 = puVar9, param_4 < puVar6));
    }
  }
LAB_000f0ae4:
  uVar2 = (long)puVar7 - (long)param_4;
  uVar11 = uVar2 + 0xf;
  if (-1 < (long)uVar2) {
    uVar11 = uVar2;
  }
  if ((puVar4 != param_4) || ((ulong *)((long)param_4 + (uVar11 & 0xfffffffffffffff0)) <= puVar4)) {
    _memmove(puVar4,param_4,((long)uVar11 >> 4) << 4);
  }
  return 1;
}



/* Entry: 000f0b40; end: 000f0bc7;  */

undefined1  [16] FUN_000f0b40(ulong param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    FUN_000f0bc8();
  }
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 0x10;
    pauVar5 = (undefined1 (*) [16])(lVar1 + 0x20);
    auVar2 = *pauVar5;
    _memmove(pauVar5,lVar1 + 0x30,(lVar7 - param_1) * 0x10);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar6;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0xf0bc8);
  (*pcVar3)();
}



/* Entry: 000f0bc8; end: 000f0bdb;  */

/* WARNING: Removing unreachable block (ram,0x000f0820) */
/* WARNING: Removing unreachable block (ram,0x000f0830) */
/* WARNING: Removing unreachable block (ram,0x000f0900) */
/* WARNING: Removing unreachable block (ram,0x000f083c) */
/* WARNING: Removing unreachable block (ram,0x000f0844) */
/* WARNING: Removing unreachable block (ram,0x000f08bc) */
/* WARNING: Removing unreachable block (ram,0x000f08c4) */
/* WARNING: Removing unreachable block (ram,0x000f08c8) */
/* WARNING: Removing unreachable block (ram,0x000f08cc) */
/* WARNING: Removing unreachable block (ram,0x000f08d4) */

undefined * FUN_000f0bc8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0xaeeb80;
    func_0x000115a8(0xaeeb80,&UNK_007d91e0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar2 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar5;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 4) << 1;
  }
  _memcpy(puVar3 + 0x20,param_1 + 0x20,lVar5 << 4);
  _swift_bridgeObjectRelease(param_1);
  return puVar3;
}



/* Entry: 000f0bdc; end: 000f0e83;  */

undefined8 FUN_000f0bdc(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  long alStack_98 [9];
  
  lVar7 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(alStack_98,*(undefined8 *)(lVar7 + 0x28));
  plVar3 = alStack_98;
  __sSS4hash4intoys6HasherVz_tF(plVar3,param_2,param_3);
  __ss6HasherV9_finalizeSiyF();
  uVar5 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
  uVar6 = (ulong)plVar3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar7 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar6 * 0x10);
      uVar4 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar4 == param_2 && uVar2 == param_3) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar4,uVar2,param_2,param_3,0), (uVar4 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_3);
        puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar6 * 0x10);
        uVar5 = puVar1[1];
        *param_1 = *puVar1;
        param_1[1] = uVar5;
        _swift_bridgeObjectRetain();
        return 0;
      }
      uVar6 = uVar6 + 1 & ~uVar5;
    } while ((*(ulong *)(lVar7 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
  }
  lVar7 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar7);
  alStack_98[0] = *unaff_x20;
  _swift_bridgeObjectRetain(param_3);
  func_0x000f0d20(param_2,param_3,uVar6,lVar7);
  *unaff_x20 = alStack_98[0];
  *param_1 = param_2;
  param_1[1] = param_3;
  return 1;
}



/* Entry: 000f0e84; end: 000f10ab;  */

void FUN_000f0e84(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_a8 [72];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0xaeeb78;
  func_0x000115a8(0xaeeb78,&UNK_007d91d8);
  lVar7 = lVar15;
  __ss11_SetStorageC6resize8original8capacity4moveAByxGs05__RawaB0C_SiSbtFZ(lVar15,lVar1,0,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_000f1074:
    _swift_release(lVar15);
    *unaff_x20 = lVar7;
    return;
  }
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(lVar15 + 0x38);
  lVar1 = lVar7 + 0x38;
  lVar10 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar16 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0xf10a8);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar16) goto LAB_000f1074;
        uVar17 = ((ulong *)(lVar15 + 0x38))[lVar16];
        lVar10 = lVar10 + 1;
      } while (uVar17 == 0);
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar16 = lVar10;
    }
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + (LZCOUNT(uVar9) | lVar16 << 6) * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    _swift_bridgeObjectRetain(uVar3);
    puVar8 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar8,uVar6,uVar3);
    __ss6HasherV9_finalizeSiyF();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0xf10ac);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar16;
  } while( true );
}



/* Entry: 000f10ac; end: 000f1207;  */

void FUN_000f10ac(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  
  func_0x000115a8(0xaeeb78,&UNK_007d91d8);
  lVar11 = *unaff_x20;
  lVar6 = lVar11;
  __ss11_SetStorageC4copy8originalAByxGs05__RawaB0C_tFZ();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x38;
    uVar7 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar6 != lVar11 || lVar1 + uVar7 * 8 <= lVar6 + 0x38U) {
      _memmove(lVar6 + 0x38U,lVar1,uVar7 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(lVar11 + 0x38);
    if (uVar7 == 0) goto LAB_000f1188;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        lVar10 = (LZCOUNT(uVar9) | lVar12 << 6) * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + lVar10);
        uVar4 = puVar2[1];
        puVar3 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        _swift_bridgeObjectRetain();
        if (uVar7 != 0) break;
LAB_000f1188:
        do {
          lVar10 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0xf1208);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_000f11e0;
          uVar7 = *(ulong *)(lVar1 + lVar10 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar12 = lVar10;
      }
    } while( true );
  }
LAB_000f11e0:
  _swift_release(lVar11);
  *unaff_x20 = lVar6;
  return;
}



/* Entry: 000f1208; end: 000f146b;  */

void FUN_000f1208(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  undefined1 auStack_a8 [72];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0xaeeb78;
  func_0x000115a8(0xaeeb78,&UNK_007d91d8);
  lVar7 = lVar15;
  __ss11_SetStorageC6resize8original8capacity4moveAByxGs05__RawaB0C_SiSbtFZ(lVar15,lVar1,1,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_000f1438:
    _swift_release(lVar15);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar15 + 0x38);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar18 = uVar18 & *puVar16;
  lVar1 = lVar7 + 0x38;
  lVar10 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar17 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0xf1468);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar17) {
          uVar18 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
          if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
            *puVar16 = -1L << (uVar18 & 0x3f);
          }
          else {
            _bzero(puVar16,uVar18 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar15 + 0x10) = 0;
          goto LAB_000f1438;
        }
        uVar18 = puVar16[lVar17];
        lVar10 = lVar10 + 1;
      } while (uVar18 == 0);
      uVar9 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar9 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar17 = lVar10;
    }
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + (LZCOUNT(uVar9) | lVar17 << 6) * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar8,uVar6,uVar3);
    __ss6HasherV9_finalizeSiyF();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0xf146c);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar17;
  } while( true );
}



/* Entry: 000f146c; end: 000f1493;  */

/* WARNING: Removing unreachable block (ram,0x000e29ac) */
/* WARNING: Removing unreachable block (ram,0x000e29bc) */
/* WARNING: Removing unreachable block (ram,0x000e2a8c) */
/* WARNING: Removing unreachable block (ram,0x000e29c8) */
/* WARNING: Removing unreachable block (ram,0x000e29d0) */
/* WARNING: Removing unreachable block (ram,0x000e2a48) */
/* WARNING: Removing unreachable block (ram,0x000e2a50) */
/* WARNING: Removing unreachable block (ram,0x000e2a54) */
/* WARNING: Removing unreachable block (ram,0x000e2a58) */
/* WARNING: Removing unreachable block (ram,0x000e2a60) */

undefined * FUN_000f146c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0xaedb88;
    func_0x000115a8(0xaedb88,&UNK_007d7d00);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar2 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar5;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 3) << 1;
  }
  _memcpy(puVar3 + 0x20,param_1 + 0x20,lVar5 << 3);
  _swift_release(param_1);
  return puVar3;
}



/* Entry: 000f1494; end: 000f1657;  */

void FUN_000f1494(long param_1)

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
  puVar6 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (lVar10 != 0) {
    puVar11 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar2 = puVar11[-1];
      puVar3 = (undefined1 *)*puVar11;
      _swift_bridgeObjectRetain(puVar3);
      puVar8 = puVar3;
      FUN_000edd08();
      _swift_bridgeObjectRelease();
      if (puVar8 == (undefined1 *)0x0) {
        func_0x000c7144();
        _swift_allocError(&UNK_009ad758,puVar3,0,0);
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
        FUN_0002a0e4(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar1 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_0002a0e4(puVar6,uVar1 + 1,1,puVar5);
      }
      puVar11 = puVar11 + 2;
      *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x20) = uVar2;
      *(undefined1 **)(puVar6 + uVar1 * 0x10 + 0x28) = puVar8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  uVar2 = 0xae6938;
  func_0x000115a8(0xae6938,&UNK_007cdb30);
  uVar7 = uVar2;
  func_0x0002f390();
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



/* Entry: 000f1658; end: 000f16eb;  */

void FUN_000f1658(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar3 = lVar4;
  __sSh15minimumCapacityShyxGSi_tcfC(lVar4,PTR___sSSN_0099b040,PTR___sSSSHsWP_0099b050);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x28);
    lStack_48 = lVar3;
    do {
      uVar1 = puVar5[-1];
      uVar2 = *puVar5;
      _swift_bridgeObjectRetain(uVar2);
      FUN_000f0bdc(auStack_58,uVar1,uVar2);
      _swift_bridgeObjectRelease(uStack_50);
      puVar5 = puVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 000f16ec; end: 000f16ef;  */

void FUN_000f16ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aeeb70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d9110;
  _swift_getWitnessTable(&UNK_007d9110,&UNK_009acbb8);
  puRam0000000000aeeb70 = puVar1;
  return;
}



/* Entry: 000f16f0; end: 000f172f;  */

void FUN_000f16f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aeeb70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d9110;
  _swift_getWitnessTable(&UNK_007d9110,&UNK_009acbb8);
  puRam0000000000aeeb70 = puVar1;
  return;
}



/* Entry: 000f1730; end: 000f1893;  */

int FUN_000f1730(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_000f17ac;
        goto LAB_000f1790;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_000f1790:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_000f17ac:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 000f1894; end: 000f18d3;  */

undefined8 FUN_000f1894(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x000115a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 000f18d4; end: 000f18ef;  */

void FUN_000f18d4(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)();
    return;
  }
  return;
}



/* Entry: 000f18f0; end: 000f198f;  */

undefined8 FUN_000f18f0(undefined8 param_1)

{
  _swift_bridgeObjectRetain();
  func_0x00023304(0,0xc000000000000000);
  _swift_bridgeObjectRelease(param_1);
  FUN_00023358(0,0xc000000000000000);
  return param_1;
}



/* Entry: 000f1990; end: 000f1b1b;  */

undefined1  [16] FUN_000f1990(undefined8 param_1,long param_2)

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
  
  puStack_80 = PTR___swiftEmptyArrayStorage_0099b8f0;
  uStack_78 = 0x100;
  func_0x000c79f0(0x5b,0xe100000000000000);
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 != 0) {
    uStack_68 = *(undefined8 *)(param_2 + 0x28);
    uStack_70 = *(undefined8 *)(param_2 + 0x20);
    uStack_58 = *(undefined8 *)(param_2 + 0x38);
    uStack_60 = *(undefined8 *)(param_2 + 0x30);
    uStack_48 = *(undefined8 *)(param_2 + 0x48);
    uStack_50 = *(undefined8 *)(param_2 + 0x40);
    FUN_000f2218(&uStack_70,auStack_b0);
    func_0x000c7840("",0);
    FUN_000f5af0(&puStack_80,(uint)param_1 & 0x1010101);
    if (unaff_x21 != 0) {
      puVar2 = &uStack_70;
      func_0x000f23d0(&uStack_70);
      _swift_bridgeObjectRelease(puStack_80);
      goto LAB_000f1af8;
    }
    func_0x000f23d0(&uStack_70);
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
        FUN_000f2218(&uStack_70,auStack_b0);
        func_0x000c7840(",",1);
        FUN_000f5af0(&puStack_80,(uint)param_1 & 0x1010101);
        func_0x000f23d0(&uStack_70);
        puVar2 = puVar2 + 6;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  func_0x000c79f0(0x5d,0xe100000000000000);
  puVar1 = puStack_80;
  param_1 = *(undefined8 *)(puStack_80 + 0x10);
  _swift_bridgeObjectRetain(puStack_80);
  puVar2 = (undefined8 *)(puVar1 + 0x20);
  __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(puVar2,param_1);
  _swift_bridgeObjectRelease_n(puVar1,2);
LAB_000f1af8:
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = puVar2;
  return auVar4;
}



/* Entry: 000f1b1c; end: 000f1eef;  */

/* WARNING: Removing unreachable block (ram,0x000f1df4) */
/* WARNING: Removing unreachable block (ram,0x000f1ca0) */

void FUN_000f1b1c(long *param_1)

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
  
  FUN_00109a58();
  lVar5 = param_1[2];
  lVar6 = *param_1;
  if (lVar6 == 0) {
    if (lVar5 != 0) goto LAB_000f1b74;
  }
  else if (lVar5 != param_1[1] - lVar6) {
LAB_000f1b74:
    if (*(char *)(lVar6 + lVar5) == 'n') {
      uVar2 = 0;
      func_0x000115a8(0xae65a8,&UNK_007cd3b0);
      _swift_initStaticObject();
      FUN_0010a49c();
      if ((uVar2 & 1) != 0) {
        return;
      }
    }
  }
  puVar3 = (undefined8 *)((long)&segment_command_00000020.maxprot + 3);
  FUN_0010a6f0();
  if (unaff_x21 == 0) {
    lVar6 = param_1[0xb];
    lVar5 = lVar6 + -1;
    if (SBORROW8(lVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xf1e98);
      (*pcVar1)();
    }
    param_1[0xb] = lVar5;
    if (lVar5 < 0) {
      FUN_000c7004();
      _swift_allocError(&UNK_009ad5a0,puVar3,0,0);
      puVar3[1] = 0x13;
      *puVar3 = 0;
      _swift_willThrow();
    }
    else {
      func_0x00106cf8();
      if (((ulong)puVar3 & 1) == 0) {
        FUN_000f5dcc(param_1);
        do {
          uVar7 = *unaff_x20;
          FUN_000f2290(0,0,0x3000000000000000,0xff);
          func_0x00023304(0,0xc000000000000000);
          uVar2 = uVar7;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar4 = uVar7;
          if ((uVar2 & 1) == 0) {
            uVar4 = 0;
            FUN_000d5ed4(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
          }
          uVar2 = *(ulong *)(uVar4 + 0x10);
          uVar7 = uVar4;
          if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar2) {
            uVar7 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
            FUN_000d5ed4(uVar7,uVar2 + 1,1,uVar4);
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
          FUN_00109a58();
          uVar2 = param_1[2];
          lVar5 = *param_1;
          if (lVar5 == 0) {
            if (uVar2 != 0) goto LAB_000f1d84;
          }
          else if (uVar2 != param_1[1] - lVar5) {
LAB_000f1d84:
            if (*(char *)(lVar5 + uVar2) == ']') goto LAB_000f1e38;
          }
          FUN_0010a6f0(0x2c);
          FUN_000f2330(0,0,0x3000000000000000,0xff);
          FUN_00023358(0,0xc000000000000000);
          FUN_000f5dcc(param_1);
        } while( true );
      }
      if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0xf1e9c);
        (*pcVar1)();
      }
      param_1[0xb] = lVar6;
      if (param_1[4] < lVar6) {
LAB_000f1ea4:
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000039,0x80000000008b8850,
                   "SwiftProtobuf/JSONScanner.swift",0x1f,2,0x1ab,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0xf1ef0);
        (*pcVar1)();
      }
    }
  }
  return;
LAB_000f1e38:
  if ((lVar5 == 0) || ((ulong)(param_1[1] - lVar5) <= uVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf1ea0);
    (*pcVar1)();
  }
  param_1[2] = uVar2 + 1;
  lVar5 = param_1[0xb] + 1;
  if (SCARRY8(param_1[0xb],1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf1ea4);
    (*pcVar1)();
  }
  param_1[0xb] = lVar5;
  if (lVar5 <= param_1[4]) {
    FUN_000f2330(0,0,0x3000000000000000,0xff);
    FUN_00023358(0,0xc000000000000000);
    return;
  }
  goto LAB_000f1ea4;
}


