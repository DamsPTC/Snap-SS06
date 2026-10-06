/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ec747c; end: 103ec754f;  */

undefined1  [16] FUN_103ec747c(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  lVar3 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar3);
  func_0x000100029284();
  _swift_bridgeObjectRelease(lVar3);
  if ((param_2 & 1) == 0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    iVar2 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar3 = *unaff_x20;
    if (iVar2 == 0) {
      func_0x000103ec7c2c();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10 + 8));
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 0x10);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    func_0x000103ec8740(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 103ec7550; end: 103ec7dab;  */

void FUN_103ec7550(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103ec7628);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_103ec7dac(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ec75f0);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000103ec794c();
    lVar6 = *unaff_x20;
    goto joined_r0x000103ec763c;
  }
  lVar6 = *unaff_x20;
joined_r0x000103ec763c:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103ec76a0);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 103ec7dac; end: 103ec88ef;  */

void FUN_103ec7dac(long param_1,ulong param_2)

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
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x11302b5a0;
  func_0x0001000285a8(0x11302b5a0,&UNK_10dca6620);
  lVar7 = lVar17;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_103ec8014:
    _swift_release(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103ec8044);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              _bzero(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_103ec8014;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar3);
      _objc_retain(uVar18);
    }
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103ec8048);
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
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 103ec88f0; end: 103ec892f;  */

void FUN_103ec88f0(void)

{
  _objc_opt_self(&PTR_PTR_11302b800);
  return;
}



/* Entry: 103ec8930; end: 103ec896f;  */

void FUN_103ec8930(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_103ec6838(*(undefined8 *)(unaff_x20 + 0x10));
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 103ec8970; end: 103ec8977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec8970(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_78 [24];
  
  lVar4 = _DAT_11302b548;
  lVar8 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)(lVar8 + _DAT_11306fd38);
  _swift_beginAccess(param_1 + _DAT_11302b548,auStack_78,0x20,0);
  lVar9 = *(long *)(param_1 + lVar4);
  lVar2 = *plVar1;
  uVar3 = plVar1[1];
  if (*(long *)(lVar9 + 0x10) == 0) {
    _swift_endAccess(auStack_78);
  }
  else {
    _swift_bridgeObjectRetain(lVar9);
    lVar5 = lVar2;
    uVar7 = uVar3;
    func_0x000100029284();
    if ((uVar7 & 1) != 0) {
      lVar5 = *(long *)(*(long *)(lVar9 + 0x38) + lVar5 * 8);
      _objc_retain();
      _swift_endAccess(auStack_78);
      _swift_bridgeObjectRelease(lVar9);
      uVar11 = *(undefined8 *)(lVar8 + _DAT_11306fd40);
      uVar12 = *(undefined8 *)(lVar5 + _DAT_11306fd48);
      uVar10 = *(undefined8 *)(lVar5 + _DAT_11306fd50);
      _objc_retain(uVar10);
      _objc_retain(uVar11);
      uVar6 = uVar12;
      goto LAB_103ec66e4;
    }
    _swift_endAccess(auStack_78);
    _swift_bridgeObjectRelease(lVar9);
  }
  uVar10 = 0;
  uVar6 = 0;
  lVar5 = 0;
  uVar12 = *(undefined8 *)(lVar8 + _DAT_11306fd40);
  uVar11 = uVar12;
LAB_103ec66e4:
  _objc_retain(uVar12);
  uVar12 = *(undefined8 *)(lVar8 + _DAT_11306fd58);
  func_0x0001043406e8(0);
  _objc_allocWithZone();
  _objc_retain(uVar12);
  _swift_bridgeObjectRetain_n(uVar3,2);
  lVar8 = lVar2;
  func_0x000104340678(lVar2,uVar3,uVar11,uVar6,uVar10,uVar12);
  _swift_beginAccess(param_1 + lVar4,auStack_78,0x21,0);
  uVar6 = *(undefined8 *)(param_1 + lVar4);
  _swift_isUniquelyReferenced_nonNull_native(uVar6);
  uVar11 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0x8000000000000000;
  FUN_103ec7550(lVar8,lVar2,uVar3,uVar6);
  _swift_bridgeObjectRelease(uVar3);
  *(undefined8 *)(param_1 + lVar4) = uVar11;
  _swift_endAccess(auStack_78);
  _objc_release(lVar5);
  return;
}



/* Entry: 103ec8978; end: 103ec89cf;  */

void FUN_103ec8978(undefined1 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = 0;
  return;
}



/* Entry: 103ec89d0; end: 103ec89e7;  */

void FUN_103ec89d0(void)

{
  long unaff_x20;
  
  FUN_103ec64b8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103ec89e8; end: 103ec89f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec89e8(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_78 [24];
  
  lVar4 = _DAT_11302b548;
  lVar8 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)(lVar8 + _DAT_11306fd38);
  _swift_beginAccess(param_1 + _DAT_11302b548,auStack_78,0x20,0);
  lVar9 = *(long *)(param_1 + lVar4);
  lVar2 = *plVar1;
  uVar3 = plVar1[1];
  if (*(long *)(lVar9 + 0x10) == 0) {
    _swift_endAccess(auStack_78);
  }
  else {
    _swift_bridgeObjectRetain(lVar9);
    lVar5 = lVar2;
    uVar7 = uVar3;
    func_0x000100029284();
    if ((uVar7 & 1) != 0) {
      lVar5 = *(long *)(*(long *)(lVar9 + 0x38) + lVar5 * 8);
      _objc_retain();
      _swift_endAccess(auStack_78);
      _swift_bridgeObjectRelease(lVar9);
      uVar12 = *(undefined8 *)(lVar8 + _DAT_11306fd40);
      uVar13 = *(undefined8 *)(lVar5 + _DAT_11306fd48);
      uVar11 = *(undefined8 *)(lVar8 + _DAT_11306fd50);
      uVar10 = *(undefined8 *)(lVar5 + _DAT_11306fd58);
      _objc_retain(uVar10);
      _objc_retain(uVar12);
      uVar6 = uVar13;
      uVar14 = uVar11;
      goto LAB_103ec627c;
    }
    _swift_endAccess(auStack_78);
    _swift_bridgeObjectRelease(lVar9);
  }
  uVar10 = 0;
  uVar6 = 0;
  lVar5 = 0;
  uVar13 = *(undefined8 *)(lVar8 + _DAT_11306fd50);
  uVar11 = *(undefined8 *)(lVar8 + _DAT_11306fd40);
  uVar12 = uVar11;
  uVar14 = uVar13;
LAB_103ec627c:
  _objc_retain(uVar13);
  _objc_retain(uVar11);
  func_0x0001043406e8(0);
  _objc_allocWithZone();
  _swift_bridgeObjectRetain_n(uVar3,2);
  lVar8 = lVar2;
  func_0x000104340678(lVar2,uVar3,uVar12,uVar6,uVar14,uVar10);
  _swift_beginAccess(param_1 + lVar4,auStack_78,0x21,0);
  uVar6 = *(undefined8 *)(param_1 + lVar4);
  _swift_isUniquelyReferenced_nonNull_native(uVar6);
  uVar12 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0x8000000000000000;
  FUN_103ec7550(lVar8,lVar2,uVar3,uVar6);
  _swift_bridgeObjectRelease(uVar3);
  *(undefined8 *)(param_1 + lVar4) = uVar12;
  _swift_endAccess(auStack_78);
  _objc_release(lVar5);
  return;
}



/* Entry: 103ec89f8; end: 103ec8a9f;  */

void FUN_103ec89f8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 103ec8aa0; end: 103ec8ab7;  */

void FUN_103ec8aa0(void)

{
  long unaff_x20;
  
  FUN_103ec5880(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103ec8ab8; end: 103ec8af3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec8ab8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c5ca64(*(undefined8 *)(unaff_x20 + 0x10));
  puVar1 = (undefined8 *)(param_2 + _DAT_11302b520);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  return;
}



/* Entry: 103ec8af4; end: 103ec8b0b;  */

void FUN_103ec8af4(void)

{
  long unaff_x20;
  
  FUN_103ec6dfc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103ec8b0c; end: 103ec8b47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec8b0c(undefined1 *param_1,long param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11302b538);
  if (*(char *)(puVar1 + 1) == '\x01') {
    *puVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 103ec8b48; end: 103ec8b77;  */

void FUN_103ec8b48(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 103ec8b78; end: 103ec8ba7;  */

void FUN_103ec8b78(void)

{
  long unaff_x20;
  
  FUN_103ec6ef0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103ec8ba8; end: 103ec8bb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec8ba8(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  puVar1 = (undefined8 *)(param_1 + _DAT_11302b518);
  if (*(char *)(puVar1 + 1) == '\x01') {
    *puVar1 = uVar6;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)(param_1 + _DAT_11302b510);
    *puVar1 = uVar6;
    *(undefined1 *)(puVar1 + 1) = 0;
    lVar5 = lVar3;
    func_0x000107c4d420();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar4 = 0;
      lVar5 = 0;
    }
    else {
      lVar4 = lVar3;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(lVar3);
    }
    plVar2 = (long *)(param_1 + _DAT_11302b558);
    lVar3 = plVar2[1];
    *plVar2 = lVar4;
    plVar2[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar3);
    return;
  }
  return;
}



/* Entry: 103ec8bb4; end: 103ec8bcf;  */

void FUN_103ec8bb4(void)

{
  long unaff_x20;
  
  FUN_103ec6ca4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 103ec8bd0; end: 103ec8c0f;  */

void FUN_103ec8bd0(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 103ec8c10; end: 103ec8c13;  */

void FUN_103ec8c10(undefined1 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = 0;
  return;
}



/* Entry: 103ec8c14; end: 103ec8cc7;  */

void FUN_103ec8c14(void)

{
  func_0x000103ec89a0();
  return;
}



/* Entry: 103ec8cc8; end: 103ec8d9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103ec8cc8(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  _objc_allocWithZone();
  puVar1 = &UNK_11071d168;
  _swift_allocObject(&UNK_11071d168,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x0001000285a8(0x112dd0250,&UNK_10dca67b0);
  _swift_allocObject();
  _objc_retain(param_1);
  pcVar2 = FUN_103ec8d9c;
  func_0x0001000bdd8c(FUN_103ec8d9c,puVar1);
  *(code **)(unaff_x20 + _DAT_11302b8a8) = pcVar2;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  _objc_release(param_1);
  return puVar3;
}



/* Entry: 103ec8d9c; end: 103ec8dcb;  */

void FUN_103ec8d9c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  *param_1 = uVar1;
  return;
}



/* Entry: 103ec8dcc; end: 103ec8f83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec8dcc(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    puVar2 = PTR_PTR_1126adaa8;
    _objc_allocWithZone(PTR_PTR_1126adaa8);
    func_0x000107c453e4();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11306fc60);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
              (uVar3,((undefined8 *)(param_1 + _DAT_11306fc60))[1]);
    func_0x000107c539cc(puVar2);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11306fc68);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
              (uVar3,((undefined8 *)(param_1 + _DAT_11306fc68))[1]);
    func_0x000107c539c4(puVar2);
    _objc_release(uVar3);
    dVar4 = *(double *)(param_1 + _DAT_11306fc70) * 1000000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ec8f70);
      (*pcVar1)();
    }
    if (dVar4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ec8f74);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ec8f78);
      (*pcVar1)();
    }
    func_0x000107c53ac0(puVar2);
    dVar4 = *(double *)(param_1 + _DAT_11306fc78) * 1000000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ec8f7c);
      (*pcVar1)();
    }
    if (dVar4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ec8f80);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ec8f84);
      (*pcVar1)();
    }
    func_0x000107c53abc(puVar2);
    func_0x000107c4bfb0(lStack_38);
    _swift_unknownObjectRelease(lStack_38);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 103ec8f84; end: 103ec918b; -[SCLensCorePerformanceLogger logLensCoreCreatedWithEvent:] */

void FUN_103ec8f84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103ec8dcc(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ec918c; end: 103ec91db; -[SCLensCorePerformanceLogger logLensCoreDestroyedWithEvent:] */

void FUN_103ec918c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x000103ec8fd4(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ec91dc; end: 103ec98b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec91dc(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined *puStack_68;
  
  func_0x0001000d224c(&puStack_68);
  puVar2 = puStack_68;
  if (puStack_68 != (undefined *)0x0) {
    puVar4 = PTR_PTR_1126adab8;
    _objc_allocWithZone();
    func_0x000107c453e4();
    uVar11 = *(undefined8 *)(param_2 + _DAT_11306fc80);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
              (uVar11,((undefined8 *)(param_2 + _DAT_11306fc80))[1]);
    func_0x000107c539cc(puVar4);
    _objc_release(uVar11);
    uVar11 = *(undefined8 *)(param_2 + _DAT_11306fc88);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
              (uVar11,((undefined8 *)(param_2 + _DAT_11306fc88))[1]);
    func_0x000107c539c4(puVar4);
    _objc_release(uVar11);
    lVar12 = *(long *)(param_2 + _DAT_11306fc90);
    uVar11 = *(undefined8 *)(lVar12 + _DAT_11306fd90);
    uVar1 = ((undefined8 *)(lVar12 + _DAT_11306fd90))[1];
    _swift_bridgeObjectRetain(uVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar11,uVar1);
    _swift_bridgeObjectRelease(uVar1);
    func_0x000107c55d70(puVar4);
    _objc_release(uVar11);
    lVar9 = ((undefined8 *)(lVar12 + _DAT_11306fd98))[1];
    if (lVar9 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(lVar12 + _DAT_11306fd98);
      _swift_bridgeObjectRetain(lVar9);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar11,lVar9);
      _swift_bridgeObjectRelease(lVar9);
    }
    func_0x000107c55cc8(puVar4);
    _objc_release(uVar11);
    uVar11 = *(undefined8 *)(lVar12 + _DAT_11306fd88);
    uVar1 = ((undefined8 *)(lVar12 + _DAT_11306fd88))[1];
    _swift_bridgeObjectRetain(uVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar11,uVar1);
    _swift_bridgeObjectRelease(uVar1);
    func_0x000107c55be4(puVar4);
    _objc_release(uVar11);
    if (*(long *)(lVar12 + _DAT_11306fdb8) != 0) {
      func_0x000107c4223c();
      param_1 = param_1 * 1000000.0;
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec9864);
        (*pcVar3)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec9868);
        (*pcVar3)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec9870);
        (*pcVar3)();
      }
      func_0x000107c52868(puVar4);
    }
    if (*(long *)(lVar12 + _DAT_11306fdc8) != 0) {
      func_0x000107c4223c();
      param_1 = param_1 * 1000000.0;
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec986c);
        (*pcVar3)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec9874);
        (*pcVar3)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec987c);
        (*pcVar3)();
      }
      func_0x000107c54a3c(puVar4);
    }
    if (*(long *)(lVar12 + _DAT_11306fdd0) != 0) {
      func_0x000107c4223c();
      param_1 = param_1 * 1000000.0;
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec9878);
        (*pcVar3)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec9880);
        (*pcVar3)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec9888);
        (*pcVar3)();
      }
      func_0x000107c55dac(puVar4);
    }
    if (*(long *)(lVar12 + _DAT_11306fdd8) != 0) {
      func_0x000107c4223c();
      param_1 = param_1 * 1000000.0;
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec9884);
        (*pcVar3)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec988c);
        (*pcVar3)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec9894);
        (*pcVar3)();
      }
      func_0x000107c57cdc(puVar4);
    }
    if (*(long *)(lVar12 + _DAT_11306fde0) != 0) {
      func_0x000107c4223c();
      param_1 = param_1 * 1000000.0;
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec9890);
        (*pcVar3)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec9898);
        (*pcVar3)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec98b4);
        (*pcVar3)();
      }
      func_0x000107c5a0dc(puVar4);
    }
    lVar9 = _DAT_11306fdb0;
    uVar8 = *(ulong *)(lVar12 + _DAT_11306fdb0);
    if (uVar8 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar8 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar8) {
        uVar5 = uVar8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (0 < (long)uVar5) {
      uVar8 = *(ulong *)(lVar12 + lVar9);
      if (uVar8 >> 0x3e == 0) {
        uVar5 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar5 = uVar8 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar8) {
          uVar5 = uVar8;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar5 != 0) {
        puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
        _swift_bridgeObjectRetain(uVar8);
        FUN_103ec9974(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec98b8);
          (*pcVar3)();
        }
        uVar13 = 0;
        do {
          puVar10 = puStack_68;
          if ((uVar8 & 0xc000000000000001) == 0) {
            uVar6 = *(ulong *)(uVar8 + uVar13 * 8 + 0x20);
            _objc_retain();
          }
          else {
            uVar6 = uVar13;
            FUN_103ec9b10(uVar13,uVar8);
          }
          puVar7 = PTR_PTR_1126adac0;
          _objc_allocWithZone();
          func_0x000107c453e4();
          uVar11 = *(undefined8 *)(uVar6 + _DAT_11306fd38);
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (uVar11,((undefined8 *)(uVar6 + _DAT_11306fd38))[1]);
          func_0x000107c56954(puVar7);
          _objc_release(uVar11);
          if (*(long *)(uVar6 + _DAT_11306fd48) != 0) {
            func_0x000107c4223c();
            param_1 = param_1 * 1000000.0;
            if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec9830);
              (*pcVar3)();
            }
            if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec9834);
              (*pcVar3)();
            }
            if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec983c);
              (*pcVar3)();
            }
            func_0x000107c597ec(puVar7);
          }
          if (*(long *)(uVar6 + _DAT_11306fd50) != 0) {
            func_0x000107c4223c();
            param_1 = param_1 * 1000000.0;
            if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec9838);
              (*pcVar3)();
            }
            if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec9840);
              (*pcVar3)();
            }
            if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec9844);
              (*pcVar3)();
            }
            func_0x000107c545b0(puVar7);
          }
          _objc_release(uVar6);
          uVar6 = *(ulong *)(puVar10 + 0x10);
          puStack_68 = puVar10;
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar6) {
            FUN_103ec9974(1 < *(ulong *)(puVar10 + 0x18),uVar6 + 1,1);
          }
          puVar10 = puStack_68;
          uVar13 = uVar13 + 1;
          *(ulong *)(puStack_68 + 0x10) = uVar6 + 1;
          *(undefined **)(puStack_68 + uVar6 * 8 + 0x20) = puVar7;
        } while (uVar5 != uVar13);
        _swift_bridgeObjectRelease(uVar8);
      }
      uVar11 = 0;
      FUN_103ec9cac(0);
      puVar7 = puVar10;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar10,uVar11);
      _swift_bridgeObjectRelease(puVar10);
      func_0x000107c56730(puVar4);
      _objc_release(puVar7);
    }
    func_0x000107c4bfb0(puVar2);
    _swift_unknownObjectRelease(puVar2);
    _objc_release(puVar4);
  }
  return;
}



/* Entry: 103ec98b8; end: 103ec9907; -[SCLensCorePerformanceLogger logLensUsageEndedWithEvent:] */

void FUN_103ec98b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103ec91dc(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ec9908; end: 103ec9963; -[SCLensCorePerformanceLogger init] */

void FUN_103ec9908(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensPerformanceLoggingImpl.LensCorePerformanceLogger",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ec9934);
  (*pcVar1)();
}



/* Entry: 103ec9964; end: 103ec9973; -[SCLensCorePerformanceLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec9964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302b8a8));
  return;
}



/* Entry: 103ec9974; end: 103ec998f;  */

void FUN_103ec9974(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103ec9990();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103ec9990; end: 103ec9ab3;  */

undefined * FUN_103ec9990(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ec9ab4);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_103ec9ab4();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_103ec9cac(0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 103ec9ab4; end: 103ec9b0f;  */

void FUN_103ec9ab4(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_103ec9cac();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x11302b8e0;
  plVar5 = (long *)&UNK_10dca6800;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 103ec9b10; end: 103ec9cab;  */

ulong FUN_103ec9b10(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ec9be0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ec9be4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001043406e8(0);
    uVar3 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar3);
    uVar4 = 0;
    func_0x0001043406e8(0);
    uVar3 = param_1;
    _swift_dynamicCastClass(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0xd000000000000014,0x800000010f1cbf60);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar4 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103ec9cac);
  (*pcVar2)();
}



/* Entry: 103ec9cac; end: 103ec9cef;  */

void FUN_103ec9cac(void)

{
  undefined *puVar1;
  
  if (puRam000000011302b8b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126adac0;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam000000011302b8b0 = puVar1;
  return;
}



/* Entry: 103ec9cf0; end: 103ec9cf3;  */

void FUN_103ec9cf0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  *param_1 = uVar1;
  return;
}



/* Entry: 103ec9cf4; end: 103ec9d3b;  */

void FUN_103ec9cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_allocWithZone();
  func_0x00010047192c(param_1,param_2,param_3);
  return;
}



/* Entry: 103ec9d3c; end: 103ec9e4f;  */

void FUN_103ec9d3c(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    func_0x000107c4bc64();
    _swift_unknownObjectRelease(param_2);
  }
  return;
}



/* Entry: 103ec9e50; end: 103ec9eab; -[SCLensPerformanceLoggingWorkflow init] */

void FUN_103ec9e50(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensPerformanceLoggingImpl.LensPerformanceLoggingWorkflow",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ec9e7c);
  (*pcVar1)();
}



/* Entry: 103ec9eac; end: 103ec9f03; -[SCLensPerformanceLoggingWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec9eac(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302b8f0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302b8f8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302b900));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302b8e8));
  return;
}



/* Entry: 103ec9f04; end: 103ec9f37;  */

void FUN_103ec9f04(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x000107c4bc64();
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 103ec9f38; end: 103ec9f9b;  */

void FUN_103ec9f38(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103eca388();
  lVar1 = param_2;
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_11071d278;
  *param_1 = lVar1;
  return;
}



/* Entry: 103ec9f9c; end: 103ec9fa3;  */

void FUN_103ec9f9c(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103eca388();
  lVar1 = unaff_x20;
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = unaff_x20;
  param_1[4] = (long)&PTR_DAT_11071d278;
  *param_1 = lVar1;
  return;
}



/* Entry: 103ec9fa4; end: 103ec9fd3;  */

void FUN_103ec9fa4(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 103ec9fd4; end: 103eca10b;  */

undefined * FUN_103ec9fd4(void)

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
    uStack_61 = *(undefined1 *)(lVar7 + 0x11302b970);
    func_0x00010008a7c8(&lStack_60,&uStack_61);
    lVar2 = lStack_60;
    if (lStack_60 != 0) {
      func_0x000100083b20(&lStack_58);
      _swift_release(lVar2);
      lVar2 = lStack_58;
      if (lStack_58 != 0) {
        puVar4 = puVar5;
        _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
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
            __ss18_CocoaArrayWrapperV8endIndexSivg(puVar3);
          }
          puVar4 = (undefined *)0x0;
          func_0x000101341f8c(0,puVar3 + 1,1,puVar5);
        }
        uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar6 + 0x10);
        puVar5 = puVar4;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
          func_0x000101341f8c(puVar5,uVar1 + 1,1,puVar4);
          uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
        *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar2;
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x14);
  return puVar5;
}



/* Entry: 103eca10c; end: 103eca12f;  */

void FUN_103eca10c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103eca130; end: 103eca14f;  */

void FUN_103eca130(void)

{
  FUN_103ec9fd4();
  return;
}



/* Entry: 103eca150; end: 103eca16b;  */

void FUN_103eca150(undefined8 param_1)

{
  func_0x0001000285a8(0x11302b988,&UNK_10dca6848);
  _swift_retain(param_1);
  func_0x0001000823a8(0x103eca370,param_1);
  return;
}



/* Entry: 103eca16c; end: 103eca227;  */

void FUN_103eca16c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  _swift_retain(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 103eca228; end: 103eca273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca228(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302b990) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103eca274; end: 103eca2ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103eca274(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 auStack_60 [3];
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  auStack_60[0] = param_1;
  func_0x00010008a7c8(&uStack_38,auStack_60);
  func_0x000100083b20(auStack_60);
  _swift_release(uStack_38);
  func_0x0001000a8868(auStack_60,uStack_48);
  uVar1 = uStack_48;
  (**(code **)(lStack_40 + 8))(uStack_48,lStack_40);
  func_0x0001000834e4(auStack_60);
  return uVar1;
}



/* Entry: 103eca300; end: 103eca35f; -[_TtC17SCSnapEditorScope30SCSnapEditorPluginSaberService init] */

void FUN_103eca300(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSnapEditorScope.SCSnapEditorPluginSaberService",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103eca32c);
  (*pcVar1)();
}



/* Entry: 103eca360; end: 103eca387; -[_TtC17SCSnapEditorScope30SCSnapEditorPluginSaberService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302b990));
  return;
}



/* Entry: 103eca388; end: 103eca3a7;  */

void FUN_103eca388(void)

{
  _objc_opt_self(&PTR_PTR_11302b9d8);
  return;
}



/* Entry: 103eca3a8; end: 103eca3b7;  */

undefined1  [16] FUN_103eca3a8(void)

{
  return ZEXT816(0x11071d2b8);
}



/* Entry: 103eca3b8; end: 103eca3d7;  */

void FUN_103eca3b8(void)

{
  _objc_opt_self(&PTR_PTR_112960068);
  return;
}



/* Entry: 103eca3d8; end: 103eca563;  */

int FUN_103eca3d8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xec < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x13) {
      iVar2 = 4;
    }
    if (param_2 + 0x13 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103eca454;
        goto LAB_103eca438;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103eca438:
      return ((uint)*param_1 | uVar1 << 8) - 0x13;
    }
  }
LAB_103eca454:
  iVar2 = *param_1 - 0x14;
  if (*param_1 < 0x14) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103eca564; end: 103eca5a7;  */

void FUN_103eca564(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 103eca5a8; end: 103eca5b7; -[_TtC17SCSnapEditorScope21SnapEditorPluginScope registry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca5a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302ba70));
  return;
}



/* Entry: 103eca5b8; end: 103eca5c7; -[_TtC17SCSnapEditorScope21SnapEditorPluginScope snapEditorPluginServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca5b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302ba78));
  return;
}



/* Entry: 103eca5c8; end: 103eca68f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca5c8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302ba70) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302ba78) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103eca690; end: 103eca707; -[_TtC17SCSnapEditorScope21SnapEditorPluginScope initWithRegistry:snapEditorPluginServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca690(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11302ba70) = param_3;
  *(undefined8 *)(param_1 + _DAT_11302ba78) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 103eca708; end: 103eca767; -[_TtC17SCSnapEditorScope21SnapEditorPluginScope init] */

void FUN_103eca708(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSnapEditorScope.SnapEditorPluginScope",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103eca734);
  (*pcVar1)();
}



/* Entry: 103eca768; end: 103eca79f; -[_TtC17SCSnapEditorScope21SnapEditorPluginScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca768(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302ba70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302ba78));
  return;
}



/* Entry: 103eca7a0; end: 103eca7bf;  */

void FUN_103eca7a0(void)

{
  _objc_opt_self(&PTR_PTR_112960128);
  return;
}



/* Entry: 103eca7c0; end: 103eca7cf; -[_TtC17SCSnapEditorScope17SCSnapEditorScope source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103eca7c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302baa8);
}



/* Entry: 103eca7d0; end: 103eca827; -[_TtC17SCSnapEditorScope17SCSnapEditorScope isGallerySource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103eca7d0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11302baa8);
  if (((0x39 < lVar1 - 0xcU || (1L << (lVar1 - 0xcU & 0x3f) & 0x22000400800001bU) == 0) &&
      (lVar1 != 0x51)) && (lVar1 != 0x5a)) {
    return 0;
  }
  return 1;
}



/* Entry: 103eca828; end: 103eca837; -[_TtC17SCSnapEditorScope17SCSnapEditorScope config] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302bab0));
  return;
}



/* Entry: 103eca838; end: 103eca843; -[_TtC17SCSnapEditorScope17SCSnapEditorScope pluginConfigs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca838(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11302bab8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000100f99ab0(0);
    func_0x0001038e13ac();
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103eca844; end: 103eca863; -[_TtC17SCSnapEditorScope17SCSnapEditorScope deckHierarchy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca844(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11302bac0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eca864; end: 103eca883; -[_TtC17SCSnapEditorScope17SCSnapEditorScope deckContainerFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca864(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11302bac8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eca884; end: 103eca88f; -[_TtC17SCSnapEditorScope17SCSnapEditorScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca884(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302bad0;
  _swift_beginAccess(param_1 + _DAT_11302bad0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eca890; end: 103eca89b; -[_TtC17SCSnapEditorScope17SCSnapEditorScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca890(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302bad0;
  _swift_beginAccess(param_1 + _DAT_11302bad0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103eca89c; end: 103eca8bb; -[_TtC17SCSnapEditorScope17SCSnapEditorScope snapDocEditor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca89c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11302bad8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eca8bc; end: 103eca8c7; -[_TtC17SCSnapEditorScope17SCSnapEditorScope snapSessionID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca8bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302bae0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11302bae0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103eca8c8; end: 103eca8d3; -[_TtC17SCSnapEditorScope17SCSnapEditorScope lensSessionID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca8c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302bae8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302bae8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103eca8d4; end: 103eca8e3; -[_TtC17SCSnapEditorScope17SCSnapEditorScope commonLoggingParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca8d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302baf0));
  return;
}



/* Entry: 103eca8e4; end: 103eca8f3; -[_TtC17SCSnapEditorScope17SCSnapEditorScope playbackFirstFrameImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca8e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302baf8));
  return;
}



/* Entry: 103eca8f4; end: 103eca903; -[_TtC17SCSnapEditorScope17SCSnapEditorScope orientPlaybackRenderSizeToSnapGrid] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103eca8f4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302bb00);
}



/* Entry: 103eca904; end: 103eca913; -[_TtC17SCSnapEditorScope17SCSnapEditorScope lensSendStepConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302bb08));
  return;
}



/* Entry: 103eca914; end: 103eca91f; -[_TtC17SCSnapEditorScope17SCSnapEditorScope cameraCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca914(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302bb10;
  _swift_beginAccess(param_1 + _DAT_11302bb10,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eca920; end: 103eca92b; -[_TtC17SCSnapEditorScope17SCSnapEditorScope setCameraCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca920(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302bb10;
  _swift_beginAccess(param_1 + _DAT_11302bb10,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103eca92c; end: 103eca93b; -[_TtC17SCSnapEditorScope17SCSnapEditorScope launchMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103eca92c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302bb18);
}



/* Entry: 103eca93c; end: 103eca94b; -[_TtC17SCSnapEditorScope17SCSnapEditorScope editMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca93c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302bb20));
  return;
}



/* Entry: 103eca94c; end: 103eca95b; -[_TtC17SCSnapEditorScope17SCSnapEditorScope timestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca94c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302bb28));
  return;
}



/* Entry: 103eca95c; end: 103eca96b; -[_TtC17SCSnapEditorScope17SCSnapEditorScope initialPlayControl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca95c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302bb30));
  return;
}



/* Entry: 103eca96c; end: 103eca97b; -[_TtC17SCSnapEditorScope17SCSnapEditorScope isLegacyAdvancedEdit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103eca96c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302bb38);
}



/* Entry: 103eca97c; end: 103eca98b; -[_TtC17SCSnapEditorScope17SCSnapEditorScope blockQuickCaptureCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103eca97c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302bb40);
}



/* Entry: 103eca98c; end: 103eca99b; -[_TtC17SCSnapEditorScope17SCSnapEditorScope actionBarMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103eca98c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302bb48);
}



/* Entry: 103eca99c; end: 103eca9bb; -[_TtC17SCSnapEditorScope17SCSnapEditorScope aiLensDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca99c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11302bb50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eca9bc; end: 103ecaa83; -[_TtC17SCSnapEditorScope17SCSnapEditorScope captureDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eca9bc(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x0001009f0578(param_1 + _DAT_113812260,puVar4);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103ecaa84; end: 103ecaa93; -[_TtC17SCSnapEditorScope17SCSnapEditorScope captureLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecaa84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113812268));
  return;
}



/* Entry: 103ecaa94; end: 103ecaab3; -[_TtC17SCSnapEditorScope17SCSnapEditorScope preloadUIContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecaa94(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113812270));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ecaab4; end: 103ecaabf; -[_TtC17SCSnapEditorScope17SCSnapEditorScope placeholderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecaab4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113812278;
  _swift_beginAccess(param_1 + _DAT_113812278,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ecaac0; end: 103ecaacb; -[_TtC17SCSnapEditorScope17SCSnapEditorScope setPlaceholderView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecaac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113812278;
  _swift_beginAccess(param_1 + _DAT_113812278,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ecaacc; end: 103ecaad7; -[_TtC17SCSnapEditorScope17SCSnapEditorScope cameraViewfinder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecaacc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113812280;
  _swift_beginAccess(param_1 + _DAT_113812280,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ecaad8; end: 103ecaae3; -[_TtC17SCSnapEditorScope17SCSnapEditorScope setCameraViewfinder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecaad8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113812280;
  _swift_beginAccess(param_1 + _DAT_113812280,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ecaae4; end: 103ecaaef; -[_TtC17SCSnapEditorScope17SCSnapEditorScope placeholderImageFuture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecaae4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113812288;
  _swift_beginAccess(param_1 + _DAT_113812288,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ecaaf0; end: 103ecaafb; -[_TtC17SCSnapEditorScope17SCSnapEditorScope setPlaceholderImageFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecaaf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113812288;
  _swift_beginAccess(param_1 + _DAT_113812288,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ecaafc; end: 103ecab37; -[_TtC17SCSnapEditorScope17SCSnapEditorScope initWithBuilder:] */

undefined8 FUN_103ecaafc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_103ecc4fc();
  _objc_release(param_3);
  return uVar1;
}


