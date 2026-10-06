/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104627de4; end: 104627e0b; -[_TtC14HeliosControls12HeliosButton layoutSubviews] */

void FUN_104627de4(undefined8 param_1)

{
  _objc_retain();
  FUN_104627d18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104627e0c; end: 104627f87;  */

void FUN_104627e0c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  uint uVar8;
  
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_traitCollectionDidChange__11267bf88,param_1);
  iVar1 = 2;
  lVar6 = 0x11;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar1 == 0) {
    lVar2 = unaff_x20;
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfd64c0();
    _objc_release(lVar2);
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = unaff_x20;
    func_0x00010c1069c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x20);
    if (param_1 == 0) {
      _objc_release(lVar2);
    }
    else {
      func_0x00010c1069c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      lVar5 = param_1;
      lVar7 = lVar6;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      if ((lVar4 == lVar5) && (lVar6 == lVar7)) {
        _swift_bridgeObjectRelease(lVar6);
        _swift_bridgeObjectRelease(lVar7);
        uVar8 = 0;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (lVar4,lVar6,lVar5,lVar7,0);
        _swift_bridgeObjectRelease(lVar6);
        _swift_bridgeObjectRelease(lVar7);
        uVar8 = (uint)lVar4 ^ 1;
      }
      _objc_release(lVar2);
      _objc_release(param_1);
      if ((((uint)lVar3 | uVar8) & 1) == 0) {
        return;
      }
    }
    FUN_104626190();
  }
  return;
}



/* Entry: 104627f88; end: 104627fdb; -[_TtC14HeliosControls12HeliosButton traitCollectionDidChange:] */

void FUN_104627f88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104627e0c(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104627fdc; end: 104628017; -[_TtC14HeliosControls12HeliosButton isEnabled] */

void FUN_104627fdc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_isEnabled_1125fa010);
  return;
}



/* Entry: 104628018; end: 10462804b;  */

void FUN_104628018(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_isEnabled_1125fa010);
  return;
}



/* Entry: 10462804c; end: 1046280b3; -[_TtC14HeliosControls12HeliosButton setEnabled:] */

void FUN_10462804c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  _swift_getObjectType();
  puVar1 = PTR_s_setEnabled__112642f38;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  FUN_104626190();
  _objc_release(param_1);
  return;
}



/* Entry: 1046280b4; end: 1046280ef; -[_TtC14HeliosControls12HeliosButton semanticContentAttribute] */

void FUN_1046280b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_semanticContentAttribute_112634690);
  return;
}



/* Entry: 1046280f0; end: 104628157; -[_TtC14HeliosControls12HeliosButton setSemanticContentAttribute:] */

void FUN_1046280f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  _swift_getObjectType();
  puVar1 = PTR_s_setSemanticContentAttribute__11265c9a8;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  FUN_104626190();
  _objc_release(param_1);
  return;
}



/* Entry: 104628158; end: 104628217; -[_TtC14HeliosControls12HeliosButton accessibilityLabel] */

void FUN_104628158(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar4 = &uStack_40;
  uVar1 = param_1;
  _swift_getObjectType();
  puVar3 = PTR_s_accessibilityLabel_112598d68;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  _objc_retain(param_1);
  _objc_msgSendSuper2();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined8 *)0x0) {
    FUN_1046282b8();
    _objc_release(param_1);
    if (puVar3 == (undefined *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_1046281f8;
    }
  }
  else {
    puVar2 = (undefined1 *)puVar4;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(param_1);
    _objc_release(puVar4);
    puVar4 = (undefined8 *)puVar2;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar4,puVar3);
  _swift_bridgeObjectRelease(puVar3);
LAB_1046281f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104628218; end: 1046282b7; -[_TtC14HeliosControls12HeliosButton setAccessibilityLabel:] */

void FUN_104628218(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    _objc_retain(param_1);
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
    _objc_retain(param_1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
  uStack_40 = param_1;
  uStack_38 = uVar1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setAccessibilityLabel__112635e28,param_3);
  _objc_release(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 1046282b8; end: 1046283b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1046282b8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long unaff_x20;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined8 auStack_110 [7];
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  puVar6 = auStack_110;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308a910);
  _swift_beginAccess(puVar1,auStack_d8,0,0);
  puVar2 = (undefined8 *)puVar1[2];
  bVar3 = *(byte *)(puVar1 + 6);
  if (bVar3 < 2) {
    puVar5 = (undefined8 *)puVar1[3];
    puVar4 = puVar2;
    if (bVar3 != 0) {
      puVar5 = (undefined8 *)puVar1[5];
      puVar4 = (undefined8 *)puVar1[4];
    }
  }
  else {
    puVar7 = (undefined8 *)puVar1[1];
    if ((bVar3 == 2) ||
       (puVar5 = (undefined8 *)puVar1[4], puVar4 = (undefined8 *)puVar1[3], bVar3 != 3)) {
      _swift_bridgeObjectRetain(puVar2);
      puVar5 = puVar2;
      goto LAB_104628394;
    }
  }
  puVar7 = puVar4;
  _swift_bridgeObjectRetain();
  if (puVar5 == (undefined8 *)0x0) {
    uStack_b8 = puVar1[1];
    uStack_c0 = *puVar1;
    uStack_a8 = puVar1[3];
    uStack_b0 = puVar1[2];
    uStack_98 = puVar1[5];
    uStack_a0 = puVar1[4];
    uStack_90 = *(undefined1 *)(puVar1 + 6);
    puVar7 = &uStack_80;
    uStack_80 = uStack_c0;
    uStack_78 = uStack_b8;
    uStack_70 = uStack_b0;
    uStack_68 = uStack_a8;
    uStack_60 = uStack_a0;
    uStack_58 = uStack_98;
    uStack_50 = uStack_90;
    FUN_104408f24(puVar7,auStack_110);
    FUN_104625cec();
    FUN_10462a7ec(&uStack_c0);
    puVar5 = puVar6;
  }
LAB_104628394:
  auVar8._8_8_ = puVar5;
  auVar8._0_8_ = puVar7;
  return auVar8;
}



/* Entry: 1046283b4; end: 1046283f7; -[_TtC14HeliosControls12HeliosButton intrinsicContentSize] */

undefined1  [16] FUN_1046283b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  _objc_retain();
  FUN_1046283f8();
  _objc_release(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1046283f8; end: 1046286af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1046283f8(undefined8 param_1,double param_2)

{
  double *pdVar1;
  byte bVar2;
  ulong uVar3;
  double dVar4;
  undefined1 *puVar5;
  ulong uVar6;
  double *pdVar7;
  long unaff_x20;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_1b8 [56];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  undefined1 uStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 uStack_d0;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  undefined1 uStack_90;
  
  lVar8 = _DAT_11308a918;
  uVar3 = unaff_x20 + _DAT_11308a918;
  _swift_beginAccess(uVar3,auStack_168,0,0);
  uVar6 = (ulong)*(byte *)(unaff_x20 + lVar8);
  dVar14 = *(double *)(&UNK_10dd21cd0 + uVar6 * 8);
  dVar16 = *(double *)(&UNK_10dd21cf0 + uVar6 * 8);
  dVar17 = *(double *)(&UNK_10dd21d10 + uVar6 * 8);
  dVar9 = *(double *)(&UNK_10dd21d30 + uVar6 * 8);
  dVar15 = *(double *)(&UNK_10dd21d50 + uVar6 * 8);
  uStack_108 = (undefined1)(0x90a0808 >> (ulong)((*(byte *)(unaff_x20 + lVar8) & 3) << 3));
  dStack_150 = dVar14;
  dStack_148 = dVar16;
  dStack_140 = dVar15;
  dStack_138 = dVar17;
  dStack_130 = dVar15;
  dStack_128 = dVar17;
  dStack_120 = dVar9;
  dStack_118 = dVar9;
  dStack_110 = dVar15;
  FUN_1046286b0();
  FUN_104628828(&dStack_150);
  pdVar1 = (double *)(unaff_x20 + _DAT_11308a910);
  dVar12 = dVar9;
  dVar13 = param_2;
  _swift_beginAccess(pdVar1,auStack_180,0,0);
  if (*(byte *)(pdVar1 + 6) < 3) {
    lVar8 = 0;
    dVar13 = 0.0;
    dVar12 = 0.0;
  }
  else {
    pdVar7 = pdVar1;
    if (*(byte *)(pdVar1 + 6) == 3) {
      pdVar7 = pdVar1 + 2;
    }
    dVar4 = *pdVar7;
    _objc_retain(dVar4);
    FUN_10462ae34();
    _objc_release(dVar4);
    dVar12 = dVar12 + 0.0;
    if (dVar13 < 0.0) {
      dVar13 = 0.0;
    }
    lVar8 = 1;
  }
  bVar2 = *(byte *)(pdVar1 + 6);
  dVar4 = dVar13;
  if ((bVar2 < 3 && bVar2 != 0) && ((bVar2 != 1 || (*(char *)(pdVar1 + 3) != '\x01')))) {
    lVar8 = lVar8 + 1;
    dVar12 = dVar9 + dVar12;
    dVar4 = param_2;
    if (param_2 < dVar13) {
      dVar4 = dVar13;
    }
  }
  dStack_f8 = pdVar1[1];
  dVar10 = *pdVar1;
  dStack_e8 = pdVar1[3];
  dVar11 = pdVar1[2];
  dStack_d8 = pdVar1[5];
  dStack_e0 = pdVar1[4];
  uStack_d0 = *(undefined1 *)(pdVar1 + 6);
  puVar5 = auStack_1b8;
  dStack_100 = dVar10;
  dStack_f0 = dVar11;
  dStack_c0 = dVar10;
  dStack_b8 = dStack_f8;
  dStack_b0 = dVar11;
  dStack_a8 = dStack_e8;
  dStack_a0 = dStack_e0;
  dStack_98 = dStack_d8;
  uStack_90 = uStack_d0;
  FUN_104408f24(&dStack_c0);
  FUN_104625cec();
  uVar6 = 0;
  FUN_10462a7ec();
  dVar13 = dVar4;
  if (puVar5 != (undefined1 *)0x0) {
    _swift_bridgeObjectRelease(puVar5);
    uVar6 = 0;
    FUN_104628968();
    lVar8 = lVar8 + 1;
    dVar12 = dVar12 + dVar10;
    dVar13 = dVar11;
    if (dVar11 < dVar4) {
      dVar13 = dVar4;
    }
  }
  if (*(char *)(pdVar1 + 6) == '\x01') {
    if (param_2 < dVar13) {
      param_2 = dVar13;
    }
    if (*(char *)(pdVar1 + 3) == '\x01') {
      lVar8 = lVar8 + 1;
      dVar12 = dVar9 + dVar12;
      dVar13 = param_2;
    }
  }
  dVar9 = dVar15;
  if ((uVar3 & 1) == 0) {
    dVar9 = dVar17;
  }
  dVar16 = dVar12 + dVar16 * (double)(lVar8 - 1U);
  if (lVar8 == 0 || lVar8 - 1U == 0) {
    dVar16 = dVar12;
  }
  dVar9 = dVar9 + dVar9 + dVar16;
  if (dVar9 < dVar14) {
    dVar9 = dVar14;
  }
  dVar15 = dVar15 + dVar15 + dVar13;
  if (dVar15 < dVar14) {
    dVar15 = dVar14;
  }
  FUN_1046286b0();
  dVar12 = dVar15;
  if (dVar15 < dVar9) {
    dVar12 = dVar9;
  }
  dVar13 = dVar12;
  if ((uVar6 & 1) == 0) {
    dVar12 = dVar15;
    dVar13 = dVar9;
  }
  auVar18._0_8_ = (long)dVar13;
  auVar18._8_8_ = (long)dVar12;
  return auVar18;
}



/* Entry: 1046286b0; end: 104628827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1046286b0(void)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  byte bStack_50;
  
  lVar1 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  uVar5 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11308a910);
  _swift_beginAccess(puVar2,auStack_98,0,0);
  bStack_50 = *(byte *)(puVar2 + 6);
  puVar8 = (undefined8 *)puVar2[1];
  uVar7 = *puVar2;
  uStack_68 = puVar2[3];
  uStack_70 = puVar2[2];
  uStack_58 = puVar2[5];
  uStack_60 = puVar2[4];
  uStack_80 = uVar7;
  puStack_78 = puVar8;
  if ((bStack_50 < 2) || ((bStack_50 != 2 && (bStack_50 == 3)))) {
    FUN_10462bac0(&uStack_80,&uStack_d0);
    puVar2 = puVar8;
    _swift_bridgeObjectRetain(puVar8);
    uStack_d0 = uVar7;
    puStack_c8 = puVar8;
    __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(uVar5);
    func_0x000100e8b654();
    uVar3 = uVar5;
    puVar4 = PTR___sSSN_11034da80;
    __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
              (uVar5,PTR___sSSN_11034da80,puVar2);
    (**(code **)(lVar6 + 8))(uVar5,lVar1);
    _swift_bridgeObjectRelease(puVar4);
    uVar5 = uVar3 & 0xffffffffffff;
    if (((ulong)puVar4 & 0x2000000000000000) != 0) {
      uVar5 = (ulong)puVar4 >> 0x38 & 0xf;
    }
    if (uVar5 != 0) {
      FUN_10462a7ec(&uStack_80);
      _swift_bridgeObjectRelease(puVar8);
      return false;
    }
    _swift_bridgeObjectRelease(puVar8);
  }
  else {
    puVar8 = &uStack_80;
    FUN_10462bac0(puVar8,&uStack_d0);
  }
  FUN_104625dfc();
  FUN_10462a7ec(&uStack_80);
  return puVar8 == (undefined8 *)0x1;
}



/* Entry: 104628828; end: 104628967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104628828(double param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long unaff_x20;
  ulong uVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [56];
  undefined1 auStack_88 [32];
  double dStack_68;
  
  lVar1 = unaff_x20 + _DAT_11308a910;
  _swift_beginAccess(lVar1,auStack_d8,0,0);
  if ((1 << (ulong)(*(byte *)(lVar1 + 0x30) & 0x1f) & 0xbU) == 0) {
    dVar7 = *(double *)(param_2 + 0x38);
    dVar6 = *(double *)(param_2 + 0x30);
  }
  else {
    uVar5 = (ulong)*(byte *)(param_2 + 0x48);
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    FUN_1046200c8(auStack_c0,uVar5);
    puVar2 = PTR__OBJC_CLASS___UIFontMetrics_1126d9278;
    _objc_allocWithZone(PTR__OBJC_CLASS___UIFontMetrics_1126d9278);
    func_0x00010bfeeae0();
    uVar3 = uVar5;
    FUN_104620428(uVar5);
    puVar4 = puVar2;
    func_0x00010c14e5e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar3);
    FUN_1046207c0(auStack_c0);
    _objc_release(unaff_x20);
    func_0x00010c102de0(puVar4);
    FUN_1046200c8(auStack_88,uVar5);
    _objc_release(puVar4);
    FUN_1046207c0(auStack_88);
    dVar6 = *(double *)(param_2 + 0x30) * (param_1 / dStack_68);
    dVar7 = *(double *)(param_2 + 0x38) * (param_1 / dStack_68);
  }
  auVar8._8_8_ = dVar7;
  auVar8._0_8_ = dVar6;
  return auVar8;
}



/* Entry: 104628968; end: 104628d57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_104628968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined1 uVar7;
  char cVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  long lStack_130;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  double dStack_b8;
  
  lVar9 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar16 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar17 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308a910);
  _swift_beginAccess(puVar1,auStack_f8,0,0);
  uVar12 = *puVar1;
  uVar3 = puVar1[1];
  uVar14 = puVar1[2];
  uVar4 = puVar1[3];
  uVar13 = puVar1[4];
  uVar5 = puVar1[5];
  bVar6 = *(byte *)(puVar1 + 6);
  if (bVar6 < 3) {
    if (1 < bVar6) {
      FUN_104408e48(uVar12,uVar3,uVar14,uVar4,uVar13,uVar5,2);
      uVar15 = 2;
      goto LAB_104628d1c;
    }
LAB_104628a64:
    lStack_130 = param_5;
    FUN_104408e48(uVar12,uVar3,uVar14,uVar4,uVar13,uVar5,bVar6);
    uVar15 = uVar3;
    _swift_bridgeObjectRetain(uVar3);
    uStack_e0 = uVar12;
    uStack_d8 = uVar3;
    __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(puVar17);
    func_0x000100e8b654();
    puVar10 = puVar17;
    puVar11 = PTR___sSSN_11034da80;
    __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
              (puVar17,PTR___sSSN_11034da80,uVar15);
    uStack_138 = uVar12;
    func_0x00010462a824(uVar12,uVar3,uVar14,uVar4,uVar13,uVar5,bVar6);
    (**(code **)(lVar16 + 8))(puVar17,lVar9);
    _swift_bridgeObjectRelease(puVar11);
    lVar9 = _DAT_11308a938;
    uVar2 = (ulong)puVar10 & 0xffffffffffff;
    if (((ulong)puVar11 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar11 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      _swift_beginAccess(unaff_x20 + _DAT_11308a938,auStack_110,0,0);
      lVar16 = lStack_130;
      cVar8 = *(char *)(unaff_x20 + lVar9);
      uVar7 = *(undefined1 *)(lStack_130 + 0x48);
      func_0x00010c279540(unaff_x20);
      _objc_retainAutoreleasedReturnValue();
      FUN_1046200c8(&uStack_e0,uVar7);
      puVar11 = PTR__OBJC_CLASS___UIFontMetrics_1126d9278;
      _objc_allocWithZone(PTR__OBJC_CLASS___UIFontMetrics_1126d9278);
      func_0x00010bfeeae0();
      dVar18 = dStack_b8;
      func_0x00010c14e780();
      _objc_release(puVar11);
      FUN_1046207c0(&uStack_e0);
      _objc_release(unaff_x20);
      dVar19 = 2.0;
      if (cVar8 == '\0') {
        dVar19 = 1.0;
      }
      dVar19 = dVar19 * dVar18;
      uVar12 = uStack_138;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_138,uVar3);
      _swift_bridgeObjectRelease(uVar3);
      FUN_1046293b8(lVar16);
      uVar13 = 0;
      func_0x000100eca28c(0);
      uVar14 = uVar13;
      func_0x000100ecbdec();
      lVar9 = lVar16;
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                (lVar16,uVar13,PTR___sypN_11034f1a8 + 8,uVar14);
      _swift_bridgeObjectRelease(lVar16);
      dVar20 = 1.79769313486232e+308;
      dVar22 = dVar19;
      func_0x00010bf20ba0(0x7fefffffffffffff,dVar19,uVar12);
      _objc_release(uVar12);
      _objc_release(lVar9);
      dVar21 = dVar20;
      _CGRectGetWidth(dVar20,dVar22,param_3,param_4);
      lVar9 = (long)dVar21;
      _CGRectGetHeight(dVar20,dVar22,param_3,param_4);
      if (dVar18 < (double)(long)dVar20) {
        dVar18 = (double)(long)dVar20;
      }
      if (dVar18 <= dVar19) {
        dVar19 = dVar18;
      }
      goto LAB_104628d28;
    }
    _swift_bridgeObjectRelease(uVar3);
  }
  else {
    if (bVar6 == 3) goto LAB_104628a64;
    FUN_104408e48(uVar12,uVar3,uVar14,uVar4,uVar13,uVar5,4);
    uVar15 = 4;
LAB_104628d1c:
    func_0x00010462a824(uVar12,uVar3,uVar14,uVar4,uVar13,uVar5,uVar15);
  }
  lVar9 = 0;
  dVar19 = 0.0;
LAB_104628d28:
  auVar23._8_8_ = dVar19;
  auVar23._0_8_ = lVar9;
  return auVar23;
}



/* Entry: 104628d58; end: 104628e57;  */

void FUN_104628d58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  ulong unaff_x20;
  
  _swift_getObjectType();
  puVar1 = &stack0xffffffffffffff90;
  _objc_msgSendSuper2(puVar1,PTR_s_isEnabled_1125fa010);
  if (((int)puVar1 == 0) || (func_0x00010c074c20(), (unaff_x20 & 1) != 0)) {
    _objc_msgSendSuper2(param_1,param_2,&stack0xffffffffffffff80,
                        PTR_s_pointInside_withEvent__11261e4e8,param_3);
  }
  else {
    func_0x00010bf20c00();
    _CGRectGetWidth();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    func_0x00010bf20c00();
    _CGRectInset();
    _CGRectContainsPoint();
  }
  return;
}



/* Entry: 104628e58; end: 104628ecf; -[_TtC14HeliosControls12HeliosButton pointInside:withEvent:] */

uint FUN_104628e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  FUN_104628d58(param_1,param_2,param_5);
  _objc_release(uVar1);
  _objc_release(param_3);
  return (uint)param_5 & 1;
}



/* Entry: 104628ed0; end: 104628fb3;  */

void FUN_104628ed0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_opt_self(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  lVar2 = param_1;
  _swift_dynamicCastObjCClass(param_1,puVar1);
  if (lVar2 != 0) {
    lVar3 = param_1;
    _objc_retain(param_1);
    lVar4 = lVar2;
    func_0x00010c0df540();
    if ((lVar4 == 1) && (lVar4 = lVar2, func_0x00010c0df4e0(), lVar4 == 1)) {
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      if (lVar2 == 0) {
        return;
      }
      _objc_release(lVar2);
      if (lVar2 != unaff_x20) {
        return;
      }
    }
    else {
      _objc_release(lVar3);
    }
  }
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_gestureRecognizerShouldBegin__1125ce098,param_1
                     );
  return;
}



/* Entry: 104628fb4; end: 10462900f; -[_TtC14HeliosControls12HeliosButton gestureRecognizerShouldBegin:] */

uint FUN_104628fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104628ed0(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 104629010; end: 10462909b; -[_TtC14HeliosControls12HeliosButton beginTrackingWithTouch:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104629010(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar1 = _DAT_11308a930;
  _swift_beginAccess(param_1 + _DAT_11308a930,auStack_58,0,0);
  if ((*(byte *)(param_1 + lVar1) & 1) == 0) {
    lStack_68 = param_1;
    lStack_60 = lVar2;
    _objc_msgSendSuper2(&lStack_68,PTR_s_beginTrackingWithTouch_withEvent_1125250b8,param_3,param_4)
    ;
  }
  return;
}



/* Entry: 10462909c; end: 10462910f; -[_TtC14HeliosControls12HeliosButton accessibilityActivate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10462909c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar1 = _DAT_11308a930;
  _swift_beginAccess(param_1 + _DAT_11308a930,auStack_48,0,0);
  if ((*(byte *)(param_1 + lVar1) & 1) == 0) {
    lStack_58 = param_1;
    lStack_50 = lVar2;
    _objc_msgSendSuper2(&lStack_58,PTR_s_accessibilityActivate_1125250c0);
  }
  return;
}



/* Entry: 104629110; end: 104629283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104629110(ulong param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long unaff_x20;
  long lVar7;
  undefined4 uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = _DAT_11308aa10;
  ppuVar6 = &puStack_80;
  lVar3 = *(long *)(unaff_x20 + _DAT_11308aa10);
  if (lVar3 != 0) {
    func_0x00010c2559c0(lVar3,param_2,1);
  }
  _UIAccessibilityIsReduceMotionEnabled();
  lVar7 = lVar3;
  FUN_10462b66c();
  puVar4 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  _objc_allocWithZone();
  func_0x00010c00eb20(0x3fbeb851eb851eb8);
  _swift_unknownObjectRelease(lVar7);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  _objc_release(uVar5);
  lVar7 = *(long *)(unaff_x20 + lVar1);
  if (lVar7 != 0) {
    uVar5 = 0x3ff0000000000000;
    if ((int)lVar3 == 0) {
      uVar5 = 0x3feeb851eb851eb8;
    }
    bVar2 = (param_1 & 1) == 0;
    if (bVar2) {
      uVar5 = 0x3ff0000000000000;
    }
    uVar8 = 0x3f800000;
    if (bVar2) {
      uVar8 = 0;
    }
    puVar4 = &UNK_110791f48;
    _swift_allocObject(&UNK_110791f48,0x24,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar4 + 0x18) = uVar5;
    *(undefined4 *)(puVar4 + 0x20) = uVar8;
    pcStack_60 = FUN_10462b9c8;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_110791f60;
    puStack_58 = puVar4;
    __Block_copy(&puStack_80);
    puVar4 = puStack_58;
    _objc_retain(lVar7);
    _objc_retain();
    _swift_release(puVar4);
    func_0x00010bef6cc0(lVar7);
    __Block_release(ppuVar6);
    _objc_release(lVar7);
    if (*(long *)(unaff_x20 + lVar1) != 0) {
      func_0x00010c24dc40();
    }
  }
  return;
}



/* Entry: 104629284; end: 10462930f; -[_TtC14HeliosControls12HeliosButton touchDown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104629284(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  puVar1 = PTR_s_isEnabled_1125fa010;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain();
  plVar3 = &lStack_40;
  _objc_msgSendSuper2(plVar3,puVar1);
  lVar2 = _DAT_11308a930;
  if ((int)plVar3 != 0) {
    _swift_beginAccess(param_1 + _DAT_11308a930,auStack_58,0,0);
    if ((*(byte *)(param_1 + lVar2) & 1) == 0) {
      FUN_104629110(1);
    }
  }
  _objc_release(param_1);
  return;
}



/* Entry: 104629310; end: 1046293b7; -[_TtC14HeliosControls12HeliosButton touchUp] */

void FUN_104629310(undefined8 param_1)

{
  _objc_retain();
  FUN_104629110(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1046293b8; end: 104629797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1046293b8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  long lStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b0;
  undefined1 auStack_1a8 [184];
  undefined1 auStack_f0 [56];
  undefined1 auStack_b8 [40];
  double dStack_90;
  
  uVar7 = (ulong)*(byte *)(param_1 + 0x48);
  lVar6 = unaff_x20;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  FUN_1046200c8(auStack_f0,uVar7);
  puVar1 = PTR__OBJC_CLASS___UIFontMetrics_1126d9278;
  _objc_allocWithZone();
  func_0x00010bfeeae0();
  uVar2 = uVar7;
  FUN_104620428(uVar7);
  puVar3 = puVar1;
  func_0x00010c14e5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
  FUN_1046207c0(auStack_f0);
  _objc_release(lVar6);
  lVar6 = unaff_x20;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  FUN_1046200c8(auStack_b8,uVar7);
  puVar1 = PTR__OBJC_CLASS___UIFontMetrics_1126d9278;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIFontMetrics_1126d9278);
  func_0x00010bfeeae0();
  dVar11 = dStack_90;
  func_0x00010c14e780();
  _objc_release(puVar1);
  FUN_1046207c0(auStack_b8);
  _objc_release(lVar6);
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  _objc_allocWithZone();
  func_0x00010bfee200();
  func_0x00010c1c82e0(dVar11);
  func_0x00010c1c3ba0(dVar11,puVar1);
  func_0x00010bf8d060();
  func_0x00010c166c00(puVar1);
  func_0x00010c1bdb00(puVar1);
  lVar6 = 0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  _swift_initStackObject();
  dVar12 = 1.48219693752374e-323;
  *(undefined8 *)(lVar6 + 0x18) = 6;
  *(undefined8 *)(lVar6 + 0x10) = 3;
  uVar9 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  *(undefined8 *)(lVar6 + 0x20) = uVar9;
  uVar4 = 0;
  func_0x00010462baf4(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
  *(undefined **)(lVar6 + 0x28) = puVar3;
  uVar10 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  *(undefined8 *)(lVar6 + 0x40) = uVar4;
  *(undefined8 *)(lVar6 + 0x48) = uVar10;
  uVar4 = 0;
  func_0x00010462baf4(0,0x112ec7bd8,&PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00);
  *(undefined **)(lVar6 + 0x50) = puVar1;
  uVar8 = *(undefined8 *)PTR__NSBaselineOffsetAttributeName_1103457c0;
  *(undefined8 *)(lVar6 + 0x68) = uVar4;
  *(undefined8 *)(lVar6 + 0x70) = uVar8;
  _objc_retain(uVar9);
  _objc_retain(puVar3);
  _objc_retain(uVar10);
  _objc_retain(puVar1);
  _objc_retain(uVar8);
  func_0x00010c099280(puVar3);
  dVar11 = dVar11 - dVar12;
  dVar13 = dVar11 * 0.5;
  func_0x00010bf0ab40(puVar3);
  dVar12 = dVar11;
  func_0x00010bf6e320(puVar3);
  dVar11 = dVar11 + dVar12;
  func_0x00010bf2f960(puVar3);
  dVar12 = (dVar11 - dVar12) * 0.5;
  dVar13 = dVar13 + dVar12;
  lVar5 = unaff_x20;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86320();
  _objc_release(lVar5);
  dVar11 = 1.0;
  if (1.0 < dVar12) {
    dVar11 = dVar12;
  }
  *(undefined **)(lVar6 + 0x90) = PTR___s12CoreGraphics7CGFloatVN_1103513a8;
  *(double *)(lVar6 + 0x78) = -(double)(long)-(dVar13 * dVar11) / dVar11;
  uVar4 = 0x112d48398;
  lVar5 = lVar6;
  FUN_10462a580(lVar6,0x112d48640,&UNK_10d910200,0x112d48398,&UNK_10d90f130);
  _swift_setDeallocating(lVar6);
  func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
  _swift_arrayDestroy((undefined8 *)(lVar6 + 0x20),3,uVar4);
  lVar6 = ((long *)(unaff_x20 + _DAT_11308a990))[1];
  if (lVar6 == 0) {
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  else {
    lStack_1c8 = *(long *)(unaff_x20 + _DAT_11308a990);
    uVar4 = *(undefined8 *)PTR__NSLanguageIdentifierAttributeName_110345520;
    puStack_1b0 = PTR___sSSN_11034da80;
    lStack_1c0 = lVar6;
    func_0x000100102924(&lStack_1c8,auStack_1a8);
    _swift_bridgeObjectRetain(lVar6);
    _objc_retain(uVar4);
    lVar6 = lVar5;
    _swift_isUniquelyReferenced_nonNull_native(lVar5);
    lStack_1c8 = lVar5;
    func_0x000101aa2624(auStack_1a8,uVar4,lVar6);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(uVar4);
    lVar5 = lStack_1c8;
  }
  return lVar5;
}



/* Entry: 104629798; end: 104629e63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104629798(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long unaff_x20;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined1 auStack_78 [24];
  
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11308a910);
  _swift_beginAccess(puVar2,auStack_78,0,0);
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (2 < *(byte *)(puVar2 + 6)) {
    puVar3 = puVar2 + 2;
    if (*(byte *)(puVar2 + 6) != 3) {
      puVar3 = puVar2;
    }
    uVar5 = *puVar3;
    _objc_retain();
    _objc_retain();
    if ((ulong)puVar14 >> 0x3e == 0) {
      puVar6 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar6 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar14) {
        puVar6 = puVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg(puVar6);
    }
    puVar7 = (undefined *)0x0;
    func_0x0001023b5804(0,puVar6 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar12 = (ulong)puVar7 & 0xffffffffffffff8;
    uVar13 = *(ulong *)(uVar12 + 0x10);
    puVar14 = puVar7;
    if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar13) {
      puVar14 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
      func_0x0001023b5804(puVar14,uVar13 + 1,1,puVar7);
      uVar12 = (ulong)puVar14 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar12 + 0x10) = uVar13 + 1;
    *(undefined8 *)(uVar12 + uVar13 * 8 + 0x20) = uVar5;
    _objc_release(uVar5);
  }
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308a9a0);
  _objc_retain();
  puVar6 = puVar14;
  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
  if ((((int)puVar6 == 0) || ((long)puVar14 < 0)) ||
     (puVar6 = puVar14, ((ulong)puVar14 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar14 >> 0x3e == 0) {
      puVar7 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar7 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar14) {
        puVar7 = puVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg(puVar7);
    }
    puVar6 = (undefined *)0x0;
    func_0x0001023b5804(0,puVar7 + 1,1,puVar14);
  }
  puVar14 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
  uVar13 = *(ulong *)(puVar14 + 0x10);
  puVar7 = puVar6;
  if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar13) {
    puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
    func_0x0001023b5804(puVar7,uVar13 + 1,1,puVar6);
    puVar14 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
  }
  *(ulong *)(puVar14 + 0x10) = uVar13 + 1;
  *(undefined8 *)(puVar14 + uVar13 * 8 + 0x20) = uVar5;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308a9a8);
  _objc_retain();
  puVar6 = puVar7;
  if ((ulong)puVar7 >> 0x3e != 0) {
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      puVar14 = puVar7;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(puVar14);
    puVar6 = (undefined *)0x0;
    func_0x0001023b5804(0,puVar14 + 1,1,puVar7);
    puVar14 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
  }
  uVar13 = *(ulong *)(puVar14 + 0x10);
  puVar7 = puVar6;
  if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar13) {
    puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
    func_0x0001023b5804(puVar7,uVar13 + 1,1,puVar6);
    puVar14 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
  }
  *(ulong *)(puVar14 + 0x10) = uVar13 + 1;
  *(undefined8 *)(puVar14 + uVar13 * 8 + 0x20) = uVar5;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308a9b0);
  _objc_retain();
  puVar6 = puVar7;
  if ((ulong)puVar7 >> 0x3e != 0) {
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      puVar14 = puVar7;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(puVar14);
    puVar6 = (undefined *)0x0;
    func_0x0001023b5804(0,puVar14 + 1,1,puVar7);
    puVar14 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
  }
  uVar13 = *(ulong *)(puVar14 + 0x10);
  puVar7 = puVar6;
  if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar13) {
    puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
    func_0x0001023b5804(puVar7,uVar13 + 1,1,puVar6);
    puVar14 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
  }
  *(ulong *)(puVar14 + 0x10) = uVar13 + 1;
  *(undefined8 *)(puVar14 + uVar13 * 8 + 0x20) = uVar5;
  lVar17 = unaff_x20;
  func_0x00010bf8d060();
  puVar14 = puVar7;
  if (lVar17 == 1) {
    FUN_10462a278();
  }
  else {
    _swift_bridgeObjectRetain(puVar7);
  }
  puVar16 = *(undefined **)(unaff_x20 + _DAT_11308a998);
  puVar6 = puVar16;
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0;
  func_0x00010462baf4(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  puVar8 = puVar6;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(puVar6,uVar5);
  _objc_release(puVar6);
  if ((ulong)puVar8 >> 0x3e == 0) {
    puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar8) {
      puVar6 = puVar8;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  _swift_bridgeObjectRelease(puVar8);
  uVar13 = (ulong)puVar14 >> 0x3e;
  if (uVar13 == 0) {
    puVar8 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar8 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
    if (((ulong)puVar14 & 0x8000000000000000) != 0) {
      puVar8 = puVar14;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (puVar6 == puVar8) {
    puVar6 = puVar16;
    func_0x00010bf09ee0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(puVar6);
    if ((ulong)puVar8 >> 0x3e == 0) {
      puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar8) {
        puVar6 = puVar8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    _swift_bridgeObjectRetain(puVar14);
    puVar18 = puVar14;
    if (puVar6 != (undefined *)0x0) {
      puVar15 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
      puVar11 = puVar15;
      if (((ulong)puVar14 & 0x8000000000000000) != 0) {
        puVar11 = puVar14;
      }
      lVar17 = 4;
      do {
        puVar19 = (undefined *)(lVar17 + -4);
        if (((ulong)puVar8 & 0xc000000000000001) == 0) {
          if (*(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) <= puVar19) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x104629bf4);
            (*pcVar4)();
          }
          puVar9 = *(undefined **)(puVar8 + lVar17 * 8);
          _objc_retain();
        }
        else {
          puVar9 = puVar19;
          func_0x000100f040d0(puVar19,puVar8);
        }
        puVar1 = (undefined *)(lVar17 + -3);
        if (SCARRY8((long)puVar19,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x104629bf0);
          (*pcVar4)();
        }
        if (uVar13 == 0) {
          puVar10 = *(undefined **)(puVar15 + 0x10);
        }
        else {
          puVar10 = puVar11;
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        if (puVar19 == puVar10) {
          _swift_bridgeObjectRelease(puVar14);
          _swift_bridgeObjectRelease(puVar8);
          _objc_release(puVar9);
          puVar14 = puVar7;
          goto LAB_104629dcc;
        }
        if (((ulong)puVar14 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar15 + 0x10) <= puVar19) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x104629bf8);
            (*pcVar4)();
          }
          puVar19 = *(undefined **)(puVar14 + lVar17 * 8);
        }
        else {
          func_0x000100f040d0(puVar19,puVar14);
          _swift_unknownObjectRelease();
        }
        _objc_release(puVar9);
        if (puVar9 != puVar19) {
          _swift_bridgeObjectRelease(puVar14);
          _swift_bridgeObjectRelease(puVar8);
          goto LAB_104629b58;
        }
        lVar17 = lVar17 + 1;
      } while (puVar1 != puVar6);
    }
    _swift_bridgeObjectRelease(puVar14);
    _swift_bridgeObjectRelease(puVar8);
    puVar14 = puVar7;
  }
  else {
LAB_104629b58:
    puVar6 = puVar16;
    func_0x00010bf09ee0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(puVar6);
    if ((ulong)puVar8 >> 0x3e == 0) {
      puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar8) {
        puVar6 = puVar8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (puVar6 != (undefined *)0x0) {
      if ((long)puVar6 < 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104629e60);
        (*pcVar4)();
      }
      puVar18 = (undefined *)0x0;
      do {
        if (((ulong)puVar8 & 0xc000000000000001) == 0) {
          puVar11 = *(undefined **)(puVar8 + (long)puVar18 * 8 + 0x20);
          _objc_retain(puVar11);
        }
        else {
          puVar11 = puVar18;
          func_0x000100f040d0(puVar18,puVar8);
        }
        puVar18 = puVar18 + 1;
        func_0x00010c12b280(puVar16);
        _objc_release(puVar11);
      } while (puVar6 != puVar18);
    }
    _swift_bridgeObjectRelease(puVar8);
    if (uVar13 == 0) {
      puVar6 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar6 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
      if (((ulong)puVar14 & 0x8000000000000000) != 0) {
        puVar6 = puVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    puVar18 = puVar7;
    if (puVar6 != (undefined *)0x0) {
      if ((long)puVar6 < 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104629e64);
        (*pcVar4)();
      }
      puVar7 = (undefined *)0x0;
      do {
        if (((ulong)puVar14 & 0xc000000000000001) == 0) {
          puVar8 = *(undefined **)(puVar14 + (long)puVar7 * 8 + 0x20);
          _objc_retain(puVar8);
        }
        else {
          puVar8 = puVar7;
          func_0x000100f040d0(puVar7,puVar14);
        }
        puVar7 = puVar7 + 1;
        func_0x00010bef6d60(puVar16);
        _objc_release(puVar8);
      } while (puVar6 != puVar7);
    }
  }
LAB_104629dcc:
  _swift_bridgeObjectRelease(puVar18);
  _swift_bridgeObjectRelease(puVar14);
  return;
}



/* Entry: 104629e64; end: 104629edb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104629e64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_60 [48];
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_11308a948);
  _CGAffineTransformMakeScale(auStack_60,param_1,param_1);
  func_0x00010c219960(uVar1,param_4,auStack_60);
  func_0x00010c1d4bc0(param_2,*(undefined8 *)(param_3 + _DAT_11308a950));
  return;
}



/* Entry: 104629edc; end: 104629f0f;  */

void FUN_104629edc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104629f10; end: 10462a07b; -[_TtC14HeliosControls12HeliosButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104629f10(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11308a910);
  func_0x00010462a824(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],
                      *(undefined1 *)(puVar1 + 6));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308a990 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308a948));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308a998));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308a9a0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308a9a8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308a9b0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308a9b8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308a940));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308a950));
  func_0x00010006e7f4(param_1 + _DAT_11308a9c0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308a9c8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308a9d0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308a9d8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308a9e0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308a9e8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308a9f0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308a9f8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308aa00));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308aa10));
  return;
}



/* Entry: 10462a07c; end: 10462a0f3;  */

void FUN_10462a07c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x00010462baf4(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10462a0f4; end: 10462a17f;  */

void FUN_10462a0f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_88 [72];
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = param_1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  __ss6HasherV5_seedABSi_tcfC(auStack_88,uVar3);
  puVar2 = auStack_88;
  __sSS4hash4intoys6HasherVz_tF(puVar2,uVar1,param_2);
  __ss6HasherV9_finalizeSiyF();
  _swift_bridgeObjectRelease(param_2);
  FUN_10462a180(param_1,puVar2);
  return;
}



/* Entry: 10462a180; end: 10462a277;  */

undefined1  [16] FUN_10462a180(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  uint uVar7;
  undefined1 auVar8 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar6 = param_2 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0) {
    uVar7 = 0;
  }
  else {
    while( true ) {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar6 * 8);
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      uVar2 = param_1;
      uVar3 = param_2;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      if (uVar1 == uVar2 && param_2 == uVar3) break;
      uVar4 = param_2;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar1,param_2,uVar2,uVar3,0);
      uVar7 = (uint)uVar1;
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease(uVar3);
      if (((uVar1 & 1) != 0) ||
         (uVar6 = uVar6 + 1 & ~uVar5, param_2 = uVar4,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0))
      goto LAB_10462a258;
    }
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(uVar3);
    uVar7 = 1;
  }
LAB_10462a258:
  auVar8._8_4_ = uVar7 & 1;
  auVar8._0_8_ = uVar6;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* Entry: 10462a278; end: 10462a31f;  */

undefined * FUN_10462a278(undefined *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 auStack_40 [2];
  
  puVar3 = auStack_40;
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar4 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar4 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar4 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar2;
  if (puVar4 != (undefined *)0x0) {
    puVar2 = puVar4;
    func_0x0001023b56fc(puVar4,0);
    _swift_bridgeObjectRetain(param_1);
    FUN_10462a320(auStack_40,puVar2 + 0x20,puVar4,param_1);
    _swift_bridgeObjectRelease(auStack_40[0]);
    if (puVar3 != (undefined8 *)puVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10462a2e8);
      (*pcVar1)();
    }
  }
  return puVar2;
}



/* Entry: 10462a320; end: 10462a473;  */

ulong FUN_10462a320(ulong *param_1,long param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_4) {
      uVar3 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar5 = uVar3;
  if (param_2 == 0) {
    param_3 = 0;
  }
  else if (param_3 != 0) {
    if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10462a474);
      (*pcVar1)();
    }
    if (uVar3 == 0) {
      param_3 = uVar3;
      uVar5 = 0;
    }
    else {
      uVar6 = 0;
      lVar4 = uVar3 + 3;
      do {
        if ((uVar3 ^ uVar6) == 0x8000000000000000) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10462a400);
          (*pcVar1)();
        }
        uVar5 = lVar4 - 4;
        if ((param_4 & 0xc000000000000001) == 0) {
          if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10462a404);
            (*pcVar1)();
          }
          if (*(ulong *)((param_4 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10462a408);
            (*pcVar1)();
          }
          uVar2 = *(ulong *)(param_4 + lVar4 * 8);
          _objc_retain();
        }
        else {
          uVar2 = uVar5;
          func_0x000100f040d0(uVar5,param_4);
        }
        *(ulong *)(param_2 + uVar6 * 8) = uVar2;
        if (param_3 - 1 == uVar6) goto LAB_10462a448;
        uVar6 = uVar6 + 1;
        lVar4 = lVar4 + -1;
      } while (uVar6 != uVar3);
      uVar5 = 0;
      param_3 = uVar3;
    }
  }
LAB_10462a448:
  *param_1 = param_4;
  param_1[1] = uVar5;
  return param_3;
}



/* Entry: 10462a474; end: 10462a55b;  */

undefined * FUN_10462a474(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar7 != (undefined *)0x0) {
    uVar5 = 0;
    func_0x0001000285a8(0x11308aa78);
    puVar2 = puVar7;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar8 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar3 = puVar8[-1];
      uVar9 = *puVar8;
      _objc_retain();
      uVar4 = uVar3;
      FUN_10462a0f4();
      if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10462a558);
        (*pcVar1)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar6 + 0x40) = *(ulong *)(puVar2 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar4 * 8) = uVar3;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar4 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10462a55c);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar7 = puVar7 + -1;
      puVar8 = puVar8 + 2;
    } while (puVar7 != (undefined *)0x0);
    _swift_release(puVar2);
  }
  return puVar2;
}



/* Entry: 10462a55c; end: 10462a57f;  */

undefined * FUN_10462a55c(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar7 != (undefined *)0x0) {
    func_0x0001000285a8(0x11308aa70,&UNK_10dd21cb0);
    puVar3 = puVar7;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      puVar5 = &uStack_88;
      func_0x00010462bb34(param_1,puVar5,0x11308a568,&UNK_10dd21178);
      uVar1 = uStack_88;
      uVar4 = uStack_88;
      FUN_10462a0f4();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10462a690);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar1;
      func_0x000100102924(auStack_80,*(long *)(puVar3 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10462a694);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      puVar7 = puVar7 + -1;
    } while (puVar7 != (undefined *)0x0);
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Entry: 10462a580; end: 10462a693;  */

undefined *
FUN_10462a580(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar7 != (undefined *)0x0) {
    func_0x0001000285a8(param_2,param_3);
    puVar3 = puVar7;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      puVar5 = &uStack_88;
      func_0x00010462bb34(param_1,puVar5,param_4,param_5);
      uVar1 = uStack_88;
      uVar4 = uStack_88;
      FUN_10462a0f4();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10462a690);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar1;
      func_0x000100102924(auStack_80,*(long *)(puVar3 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10462a694);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      puVar7 = puVar7 + -1;
    } while (puVar7 != (undefined *)0x0);
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Entry: 10462a694; end: 10462a7eb;  */

undefined1  [16]
FUN_10462a694(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long extraout_x8;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar6 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  uVar5 = (long)&uStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_60 = param_3;
  lStack_58 = param_4;
  __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(uVar5);
  func_0x000100e8b654();
  uVar3 = uVar5;
  puVar4 = PTR___sSSN_11034da80;
  __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF(uVar5,PTR___sSSN_11034da80,lVar2);
  pcVar7 = *(code **)(lVar6 + 8);
  (*pcVar7)(uVar5,lVar1);
  _swift_bridgeObjectRelease(puVar4);
  uVar3 = uVar3 & 0xffffffffffff;
  if (((ulong)puVar4 & 0x2000000000000000) != 0) {
    uVar3 = (ulong)puVar4 >> 0x38 & 0xf;
  }
  if (uVar3 == 0) {
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10462a7ec);
      (*pcVar7)();
    }
    uStack_60 = param_1;
    lStack_58 = param_2;
    _swift_bridgeObjectRetain(param_2);
    __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(uVar5);
    uVar3 = uVar5;
    puVar4 = PTR___sSSN_11034da80;
    __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
              (uVar5,PTR___sSSN_11034da80,lVar2);
    (*pcVar7)(uVar5,lVar1);
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(puVar4);
    uVar3 = uVar3 & 0xffffffffffff;
    if (((ulong)puVar4 & 0x2000000000000000) != 0) {
      uVar3 = (ulong)puVar4 >> 0x38 & 0xf;
    }
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10462a7e8);
      (*pcVar7)();
    }
  }
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 10462a7ec; end: 10462a8bb;  */

undefined8 * FUN_10462a7ec(undefined8 *param_1)

{
  func_0x00010462a824(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],
                      *(undefined1 *)(param_1 + 6));
  return param_1;
}



/* Entry: 10462a8bc; end: 10462a99b;  */

undefined1  [16] FUN_10462a8bc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long extraout_x8;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar7 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  uVar6 = (long)&uStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_60 = param_1;
  uStack_58 = param_2;
  __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(uVar6);
  func_0x000100e8b654();
  uVar4 = uVar6;
  puVar5 = PTR___sSSN_11034da80;
  __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF(uVar6,PTR___sSSN_11034da80,lVar3);
  (**(code **)(lVar7 + 8))(uVar6,lVar2);
  _swift_bridgeObjectRelease(puVar5);
  uVar4 = uVar4 & 0xffffffffffff;
  if (((ulong)puVar5 & 0x2000000000000000) != 0) {
    uVar4 = (ulong)puVar5 >> 0x38 & 0xf;
  }
  if (uVar4 != 0) {
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = param_1;
    return auVar8;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10462a99c);
  (*pcVar1)();
}



/* Entry: 10462a99c; end: 10462ae33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10462a99c(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_11308a918) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_11308a920) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_11308a928) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11308a930) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11308a938) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308a990);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar3 = _DAT_11308a948;
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar3) = puVar5;
  lVar3 = _DAT_11308a998;
  puVar5 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar3) = puVar5;
  lVar3 = _DAT_11308a9a0;
  puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar3) = puVar5;
  lVar3 = _DAT_11308a9a8;
  puVar5 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar3) = puVar5;
  lVar3 = _DAT_11308a9b0;
  puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar3) = puVar5;
  lVar3 = _DAT_11308a9b8;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self();
  func_0x00010c098f40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0;
  FUN_10462f6bc(0);
  _objc_allocWithZone();
  FUN_10462e6a4(puVar5,uVar6);
  *(undefined **)(unaff_x20 + lVar3) = puVar5;
  lVar3 = _DAT_11308a940;
  puVar5 = PTR__OBJC_CLASS___CALayer_1126b1750;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar3) = puVar5;
  lVar3 = _DAT_11308a950;
  puVar5 = PTR__OBJC_CLASS___CALayer_1126b1750;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar3) = puVar5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308a9c0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11308a9c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11308a9d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11308a9d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11308a9e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11308a9e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11308a9f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11308a9f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11308aa00) = 0;
  puVar2 = (undefined4 *)(unaff_x20 + _DAT_11308aa08);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_11308aa10) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd00000000000001b,0x800000010f208990,
             "HeliosControls/HeliosButton.swift",0x21,2,0xdf,0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10462abe8);
  (*pcVar4)();
}



/* Entry: 10462ae34; end: 10462aea7;  */

void FUN_10462ae34(undefined8 param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)PTR__UILayoutFittingCompressedSize_110345d28;
  dVar2 = *(double *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8);
  func_0x00010c267040();
  if ((dVar1 <= 0.0) && (dVar2 <= 0.0)) {
    func_0x00010c0699c0(param_1);
  }
  return;
}



/* Entry: 10462aea8; end: 10462aeab;  */

void FUN_10462aea8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308a958 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd21aa0;
  _swift_getWitnessTable(&UNK_10dd21aa0,&UNK_110791d78);
  puRam000000011308a958 = puVar1;
  return;
}



/* Entry: 10462aeac; end: 10462af17;  */

void FUN_10462aeac(void)

{
  undefined *puVar1;
  
  if (puRam000000011308a958 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd21aa0;
  _swift_getWitnessTable(&UNK_10dd21aa0,&UNK_110791d78);
  puRam000000011308a958 = puVar1;
  return;
}



/* Entry: 10462af18; end: 10462af1b;  */

void FUN_10462af18(void)

{
  undefined *puVar1;
  
  if (puRam000000011308a970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd21b48;
  _swift_getWitnessTable(&UNK_10dd21b48,&UNK_110791e08);
  puRam000000011308a970 = puVar1;
  return;
}



/* Entry: 10462af1c; end: 10462af87;  */

void FUN_10462af1c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308a970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd21b48;
  _swift_getWitnessTable(&UNK_10dd21b48,&UNK_110791e08);
  puRam000000011308a970 = puVar1;
  return;
}



/* Entry: 10462af88; end: 10462afcb;  */

void FUN_10462af88(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 10462afcc; end: 10462afcf;  */

void FUN_10462afcc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308a988 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd21bf0;
  _swift_getWitnessTable(&UNK_10dd21bf0,&UNK_110791e98);
  puRam000000011308a988 = puVar1;
  return;
}



/* Entry: 10462afd0; end: 10462b02f;  */

void FUN_10462afd0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308a988 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd21bf0;
  _swift_getWitnessTable(&UNK_10dd21bf0,&UNK_110791e98);
  puRam000000011308a988 = puVar1;
  return;
}



/* Entry: 10462b030; end: 10462b453;  */

undefined1  [16] FUN_10462b030(void)

{
  return ZEXT816(0x110791ce0);
}



/* Entry: 10462b454; end: 10462b557;  */

undefined8 * FUN_10462b454(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = *(undefined1 *)(param_2 + 6);
  FUN_104408e48(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  *(undefined1 *)(param_1 + 6) = uVar7;
  return param_1;
}



/* Entry: 10462b558; end: 10462b5ab;  */

undefined8 * FUN_10462b558(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *(undefined1 *)(param_2 + 6);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar8 = param_1[5];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  uVar6 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar5;
  func_0x00010462a824(uVar7,uVar1,uVar3,uVar2,uVar4,uVar8,uVar6);
  return param_1;
}



/* Entry: 10462b5ac; end: 10462b66b;  */

int FUN_10462b5ac(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfb < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 0xfc;
  }
  uVar1 = *(byte *)(param_1 + 0xc) ^ 0xff;
  if (*(byte *)(param_1 + 0xc) < 5) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10462b66c; end: 10462b9c7;  */

void FUN_10462b66c(void)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  byte bStack_c9;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong *puStack_b0;
  undefined8 uStack_a8;
  ulong uStack_90;
  ulong uStack_88;
  
  lVar4 = 0;
  __s10Foundation12CharacterSetVMa();
  lStack_d8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d8 + 0x40));
  uVar11 = (long)&uStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_90 = 0x2c;
  uStack_88 = 0xe100000000000000;
  puStack_b0 = &uStack_90;
  lVar5 = 0x7fffffffffffffff;
  func_0x0001014784b8(0x7fffffffffffffff,1,FUN_10462b9f4,&uStack_c0,0x2e30202c30202c30,
                      0xec00000031202c32);
  uVar12 = *(ulong *)(lVar5 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar12 == 0) {
LAB_10462b938:
    _swift_bridgeObjectRelease(lVar5);
    if (*(long *)(puVar9 + 0x10) == 4) {
      uVar15 = *(undefined8 *)(puVar9 + 0x20);
      uVar16 = *(undefined8 *)(puVar9 + 0x28);
      uVar17 = *(undefined8 *)(puVar9 + 0x30);
      uVar18 = *(undefined8 *)(puVar9 + 0x38);
      _swift_bridgeObjectRelease(puVar9);
      _objc_allocWithZone(PTR__OBJC_CLASS___UICubicTimingParameters_1126c8ab8);
      func_0x00010c0048a0(uVar15,uVar16,uVar17,uVar18);
    }
    else {
      _swift_bridgeObjectRelease(puVar9);
      _objc_allocWithZone(PTR__OBJC_CLASS___UICubicTimingParameters_1126c8ab8);
      func_0x00010bff2f00();
    }
    return;
  }
  uVar10 = 0;
  lStack_e8 = lVar5 + 0x38;
  uStack_f0 = uVar12 - 1;
LAB_10462b744:
  puVar14 = (undefined8 *)(lStack_e8 + uVar10 * 0x20);
  uVar13 = uVar10;
  puStack_e0 = puVar9;
  do {
    if (*(ulong *)(lVar5 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10462b9c8);
      (*pcVar3)();
    }
    puStack_b0 = (ulong *)puVar14[-1];
    uVar15 = *puVar14;
    uStack_b8 = puVar14[-2];
    uStack_c0 = puVar14[-3];
    uVar16 = uVar15;
    uStack_a8 = uVar15;
    _swift_bridgeObjectRetain(uVar15);
    __s10Foundation12CharacterSetV11whitespacesACvgZ(uVar11);
    func_0x000101478db0();
    uVar10 = uVar11;
    puVar9 = PTR___sSsN_11034e1d8;
    __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
              (uVar11,PTR___sSsN_11034e1d8,uVar16);
    (**(code **)(lStack_d8 + 8))(uVar11,lVar4);
    uStack_c8 = 0;
    puStack_b0 = &uStack_c8;
    if (((ulong)puVar9 >> 0x3c & 1) == 0) {
      if (((ulong)puVar9 >> 0x3d & 1) == 0) {
        if ((uVar10 >> 0x3c & 1) == 0) goto LAB_10462b87c;
        puVar6 = (ulong *)(puVar9 + 0x20);
        if (0x20 < (byte)*puVar6 || (1L << ((ulong)(byte)*puVar6 & 0x3f) & 0x100003e01U) == 0)
        goto LAB_10462b860;
      }
      else {
        uStack_88 = (ulong)puVar9 & 0xffffffffffffff;
        uStack_90 = uVar10;
        if (0x20 < ((uint)uVar10 & 0xff) || (1L << (uVar10 & 0x3f) & 0x100003e01U) == 0) {
          puVar6 = &uStack_90;
LAB_10462b860:
          __swift_stdlib_strtod_clocale(puVar6,&uStack_c8);
          if (puVar6 != (ulong *)0x0) {
            bStack_c9 = (byte)*puVar6 == 0;
            goto LAB_10462b830;
          }
        }
      }
      bStack_c9 = 0;
    }
    else {
LAB_10462b87c:
      __ss11_StringGutsV16_slowWithCStringyxxSPys4Int8VGKXEKlF
                (&bStack_c9,FUN_10462ba48,&uStack_c0,uVar10,puVar9,PTR___sSbN_11034dd40);
    }
LAB_10462b830:
    _swift_bridgeObjectRelease(puVar9);
    _swift_bridgeObjectRelease(uVar15);
    uVar2 = uStack_c8;
    puVar9 = puStack_e0;
    if ((bStack_c9 & 1) != 0) break;
    uVar13 = uVar13 + 1;
    puVar14 = puVar14 + 4;
    if (uVar12 == uVar13) goto LAB_10462b938;
  } while( true );
  puVar7 = puStack_e0;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar8 = puVar9;
  if (((ulong)puVar7 & 1) == 0) {
    puVar8 = (undefined *)0x0;
    func_0x0001014dd0d8(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
  }
  uVar1 = *(ulong *)(puVar8 + 0x10);
  puVar9 = puVar8;
  if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
    func_0x0001014dd0d8(puVar9,uVar1 + 1,1,puVar8);
  }
  uVar10 = uVar13 + 1;
  *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
  *(ulong *)(puVar9 + uVar1 * 8 + 0x20) = uVar2;
  if (uStack_f0 == uVar13) goto LAB_10462b938;
  goto LAB_10462b744;
}



/* Entry: 10462b9c8; end: 10462b9f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10462b9c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined4 uVar3;
  undefined1 auStack_60 [48];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined4 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(lVar1 + _DAT_11308a948);
  _CGAffineTransformMakeScale
            (auStack_60,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x00010c219960(uVar2,param_2,auStack_60);
  func_0x00010c1d4bc0(uVar3,*(undefined8 *)(lVar1 + _DAT_11308a950));
  return;
}



/* Entry: 10462b9f4; end: 10462ba47;  */

uint FUN_10462b9f4(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 10462ba48; end: 10462babf;  */

void FUN_10462ba48(undefined1 *param_1,byte *param_2)

{
  bool bVar1;
  long unaff_x20;
  
  if (*param_2 < 0x21 && (1L << ((ulong)*param_2 & 0x3f) & 0x100003e01U) != 0) {
    *param_1 = 0;
    return;
  }
  __swift_stdlib_strtod_clocale(param_2,*(undefined8 *)(unaff_x20 + 0x10));
  if (param_2 == (byte *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_2 == 0;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 10462bac0; end: 10462bb7b;  */

undefined8 FUN_10462bac0(undefined8 param_1,undefined8 param_2)

{
  func_0x000100dbc960(param_2,param_1,&UNK_110791ce0);
  return param_2;
}



/* Entry: 10462bb7c; end: 10462bc0b;  */

undefined1 FUN_10462bb7c(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 10462bc0c; end: 10462bc2b;  */

void FUN_10462bc0c(void)

{
  _objc_opt_self(&PTR_PTR_11308aac0);
  return;
}



/* Entry: 10462bc2c; end: 10462bd4b;  */

undefined1  [16] FUN_10462bc2c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  FUN_10462bc0c(0);
  _swift_getObjCClassFromMetadata();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  _objc_opt_self(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x00010bf249e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f2089e0);
  uVar3 = 0x2e676e6964616f4c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x2e676e6964616f4c,0xea00000000002e2e);
  uVar4 = 0x6f43736f696c6548;
  uVar6 = 0xee00736c6f72746e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6f43736f696c6548,0xee00736c6f72746e);
  puVar5 = puVar1;
  func_0x00010c09e800(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  puVar1 = puVar5;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(puVar5);
  _objc_release(puVar5);
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = puVar1;
  return auVar7;
}



/* Entry: 10462bd4c; end: 10462be27;  */

void FUN_10462bd4c(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10462d664();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 10462be28; end: 10462be43;  */

void FUN_10462be28(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 10462be44; end: 10462c023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_10462be44(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong *puVar4;
  undefined *puVar5;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  ulong *apuStack_e0 [2];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _swift_getObjectType();
  if (param_3 < 4) {
    if (param_4 < 6) {
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_58 = 0;
      uStack_88 = param_1;
      uStack_80 = param_2;
      _objc_allocWithZone();
      _swift_bridgeObjectRetain(param_2);
      puVar4 = &uStack_88;
      FUN_104626f4c();
      lVar1 = _DAT_11308a918;
      _swift_beginAccess((long)puVar4 + _DAT_11308a918,auStack_a0,1,0);
      lVar2 = _DAT_11308a920;
      *(char *)((long)puVar4 + lVar1) = (char)param_3;
      _swift_beginAccess((long)puVar4 + _DAT_11308a920,auStack_b8,1,0);
      lVar1 = _DAT_11308a930;
      *(char *)((long)puVar4 + lVar2) = (char)param_4;
      _swift_beginAccess((long)puVar4 + _DAT_11308a930,auStack_d0,1,0);
      puVar5 = PTR_s_setEnabled__112642f38;
      *(undefined1 *)((long)puVar4 + lVar1) = 0;
      apuStack_e0[0] = puVar4;
      _objc_retain();
      _objc_msgSendSuper2(apuStack_e0,puVar5,1);
      FUN_104626190();
      lVar1 = _DAT_11308a928;
      _swift_beginAccess((long)puVar4 + _DAT_11308a928,auStack_f8,1,0);
      lVar2 = _DAT_11308a938;
      *(undefined1 *)((long)puVar4 + lVar1) = 0;
      _swift_beginAccess((long)puVar4 + _DAT_11308a938,auStack_110,1,0);
      *(undefined1 *)((long)puVar4 + lVar2) = 0;
      FUN_104626190();
      _objc_release(puVar4);
      _swift_bridgeObjectRelease(param_2);
      _swift_getObjectType();
      _swift_deallocPartialClassInstance();
      return puVar4;
    }
    puVar5 = &UNK_110792010;
    uStack_88 = param_4;
  }
  else {
    puVar5 = &UNK_110791ff0;
    uStack_88 = param_3;
  }
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (puVar5,&uStack_88,puVar5,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10462c024);
  (*pcVar3)();
}



/* Entry: 10462c024; end: 10462c067; -[_TtC14HeliosControls12HeliosButton initWithText:size:emphasis:] */

void FUN_10462c024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  FUN_10462be44();
  return;
}



/* Entry: 10462c068; end: 10462c263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_10462c068(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     ulong param_5,ulong param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong *puVar4;
  undefined *puVar5;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  ulong *apuStack_f0 [2];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _swift_getObjectType();
  if (param_5 < 4) {
    if (param_6 < 6) {
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_98 = param_1;
      uStack_90 = param_2;
      uStack_88 = param_3;
      uStack_80 = param_4;
      _objc_allocWithZone();
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRetain(param_2);
      puVar4 = &uStack_98;
      FUN_104626f4c();
      lVar1 = _DAT_11308a918;
      _swift_beginAccess((long)puVar4 + _DAT_11308a918,auStack_b0,1,0);
      lVar2 = _DAT_11308a920;
      *(char *)((long)puVar4 + lVar1) = (char)param_5;
      _swift_beginAccess((long)puVar4 + _DAT_11308a920,auStack_c8,1,0);
      lVar1 = _DAT_11308a930;
      *(char *)((long)puVar4 + lVar2) = (char)param_6;
      _swift_beginAccess((long)puVar4 + _DAT_11308a930,auStack_e0,1,0);
      puVar5 = PTR_s_setEnabled__112642f38;
      *(undefined1 *)((long)puVar4 + lVar1) = 0;
      apuStack_f0[0] = puVar4;
      _objc_retain();
      _objc_msgSendSuper2(apuStack_f0,puVar5,1);
      FUN_104626190();
      lVar1 = _DAT_11308a928;
      _swift_beginAccess((long)puVar4 + _DAT_11308a928,auStack_108,1,0);
      lVar2 = _DAT_11308a938;
      *(undefined1 *)((long)puVar4 + lVar1) = 0;
      _swift_beginAccess((long)puVar4 + _DAT_11308a938,auStack_120,1,0);
      *(undefined1 *)((long)puVar4 + lVar2) = 0;
      FUN_104626190();
      _objc_release(puVar4);
      _swift_bridgeObjectRelease(param_4);
      _swift_bridgeObjectRelease(param_2);
      _swift_getObjectType();
      _swift_deallocPartialClassInstance();
      return puVar4;
    }
    puVar5 = &UNK_110792010;
    uStack_98 = param_6;
  }
  else {
    puVar5 = &UNK_110791ff0;
    uStack_98 = param_5;
  }
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (puVar5,&uStack_98,puVar5,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10462c264);
  (*pcVar3)();
}



/* Entry: 10462c264; end: 10462c2e3; -[_TtC14HeliosControls12HeliosButton initWithText:accessibilityLabel:size:emphasis:] */

void FUN_10462c264(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  if (param_4 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  FUN_10462c068();
  return;
}



/* Entry: 10462c2e4; end: 10462c563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_10462c2e4(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                     undefined8 param_5,undefined8 param_6,ulong param_7,ulong param_8)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  ulong *apuStack_f8 [2];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  uVar4 = unaff_x20;
  _swift_getObjectType();
  if (param_4 < 2) {
    _objc_retain();
    uVar7 = param_6;
    FUN_10462a694(param_5,param_6,param_1,param_2);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRelease(param_6);
    if (param_7 < 4) {
      if (param_8 < 6) {
        uStack_70 = 1;
        uStack_a0 = param_1;
        uStack_98 = param_2;
        uStack_90 = param_3;
        uStack_88 = param_4;
        uStack_80 = param_5;
        uStack_78 = uVar7;
        _objc_allocWithZone(uVar4);
        _objc_retain(param_3);
        _swift_bridgeObjectRetain(uVar7);
        _swift_bridgeObjectRetain(param_2);
        puVar5 = &uStack_a0;
        FUN_104626f4c();
        lVar1 = _DAT_11308a918;
        _swift_beginAccess((long)puVar5 + _DAT_11308a918,auStack_b8,1,0);
        lVar2 = _DAT_11308a920;
        *(char *)((long)puVar5 + lVar1) = (char)param_7;
        _swift_beginAccess((long)puVar5 + _DAT_11308a920,auStack_d0,1,0);
        lVar1 = _DAT_11308a930;
        *(char *)((long)puVar5 + lVar2) = (char)param_8;
        _swift_beginAccess((long)puVar5 + _DAT_11308a930,auStack_e8,1,0);
        puVar6 = PTR_s_setEnabled__112642f38;
        *(undefined1 *)((long)puVar5 + lVar1) = 0;
        apuStack_f8[0] = puVar5;
        _objc_retain();
        _objc_msgSendSuper2(apuStack_f8,puVar6,1);
        FUN_104626190();
        lVar1 = _DAT_11308a928;
        _swift_beginAccess((long)puVar5 + _DAT_11308a928,auStack_110,1,0);
        lVar2 = _DAT_11308a938;
        *(undefined1 *)((long)puVar5 + lVar1) = 0;
        _swift_beginAccess((long)puVar5 + _DAT_11308a938,auStack_128,1,0);
        *(undefined1 *)((long)puVar5 + lVar2) = 0;
        FUN_104626190();
        _objc_release(puVar5);
        _swift_bridgeObjectRelease(uVar7);
        _objc_release(param_3);
        _objc_release(param_3);
        _swift_bridgeObjectRelease(param_2);
        uVar4 = unaff_x20;
        _swift_getObjectType(unaff_x20);
        _swift_deallocPartialClassInstance(unaff_x20,uVar4,0x100,7);
        return puVar5;
      }
      puVar6 = &UNK_110792010;
      uStack_a0 = param_8;
    }
    else {
      puVar6 = &UNK_110791ff0;
      uStack_a0 = param_7;
    }
  }
  else {
    puVar6 = &UNK_110792030;
    uStack_a0 = param_4;
  }
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (puVar6,&uStack_a0,puVar6,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10462c564);
  (*pcVar3)();
}



/* Entry: 10462c564; end: 10462c60f; -[_TtC14HeliosControls12HeliosButton initWithText:image:position:accessibilityLabel:size:emphasis:] */

void FUN_10462c564(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  if (param_6 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  }
  _objc_retain(param_4);
  FUN_10462c2e4(param_3,param_2,param_4,param_5,param_6,uVar1,param_7,param_8);
  return;
}



/* Entry: 10462c610; end: 10462c617; -[_TtC14HeliosControls12HeliosButton initWithImage:accessibilityLabel:size:emphasis:] */

void FUN_10462c610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_retain(param_3);
  FUN_10462c914();
  return;
}



/* Entry: 10462c618; end: 10462c877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_10462c618(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,ulong param_6,ulong param_7)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  ulong *apuStack_f8 [2];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _swift_getObjectType();
  _objc_retain();
  uVar6 = param_5;
  FUN_10462a694(param_4,param_5,param_1,param_2);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRelease(param_5);
  if (param_6 < 4) {
    if (param_7 < 6) {
      uStack_78 = 0;
      uStack_70 = 3;
      uStack_a0 = param_1;
      uStack_98 = param_2;
      uStack_90 = param_3;
      uStack_88 = param_4;
      uStack_80 = uVar6;
      _objc_allocWithZone(unaff_x20);
      _objc_retain(param_3);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(param_2);
      puVar4 = &uStack_a0;
      FUN_104626f4c();
      lVar1 = _DAT_11308a918;
      _swift_beginAccess((long)puVar4 + _DAT_11308a918,auStack_b8,1,0);
      lVar2 = _DAT_11308a920;
      *(char *)((long)puVar4 + lVar1) = (char)param_6;
      _swift_beginAccess((long)puVar4 + _DAT_11308a920,auStack_d0,1,0);
      lVar1 = _DAT_11308a930;
      *(char *)((long)puVar4 + lVar2) = (char)param_7;
      _swift_beginAccess((long)puVar4 + _DAT_11308a930,auStack_e8,1,0);
      puVar5 = PTR_s_setEnabled__112642f38;
      *(undefined1 *)((long)puVar4 + lVar1) = 0;
      apuStack_f8[0] = puVar4;
      _objc_retain();
      _objc_msgSendSuper2(apuStack_f8,puVar5,1);
      FUN_104626190();
      lVar1 = _DAT_11308a928;
      _swift_beginAccess((long)puVar4 + _DAT_11308a928,auStack_110,1,0);
      lVar2 = _DAT_11308a938;
      *(undefined1 *)((long)puVar4 + lVar1) = 0;
      _swift_beginAccess((long)puVar4 + _DAT_11308a938,auStack_128,1,0);
      *(undefined1 *)((long)puVar4 + lVar2) = 0;
      FUN_104626190();
      _objc_release(puVar4);
      _swift_bridgeObjectRelease(uVar6);
      _objc_release(param_3);
      _objc_release(param_3);
      _swift_bridgeObjectRelease(param_2);
      _swift_getObjectType();
      _swift_deallocPartialClassInstance();
      return puVar4;
    }
    puVar5 = &UNK_110792010;
    uStack_a0 = param_7;
  }
  else {
    puVar5 = &UNK_110791ff0;
    uStack_a0 = param_6;
  }
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (puVar5,&uStack_a0,puVar5,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10462c878);
  (*pcVar3)();
}



/* Entry: 10462c878; end: 10462c913; -[_TtC14HeliosControls12HeliosButton initWithText:leadingAsset:accessibilityLabel:size:emphasis:] */

void FUN_10462c878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  if (param_5 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  _objc_retain(param_4);
  FUN_10462c618(param_3,param_2,param_4,param_5,uVar1,param_6,param_7);
  return;
}



/* Entry: 10462c914; end: 10462cbef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_10462c914(ulong param_1,ulong param_2,undefined8 param_3,ulong param_4,ulong param_5,
                     undefined4 param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong *puVar6;
  undefined *puVar7;
  long extraout_x8;
  undefined1 *puVar8;
  undefined8 unaff_x20;
  long lVar9;
  undefined1 auStack_140 [4];
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  uVar2 = unaff_x20;
  uStack_13c = param_6;
  _swift_getObjectType();
  lVar3 = 0;
  uStack_138 = uVar2;
  __s10Foundation12CharacterSetVMa();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_a0 = param_2;
  uStack_98 = param_3;
  _objc_retain();
  uVar4 = param_1;
  __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(puVar8);
  func_0x000100e8b654();
  puVar5 = puVar8;
  puVar7 = PTR___sSSN_11034da80;
  __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF(puVar8,PTR___sSSN_11034da80,uVar4)
  ;
  (**(code **)(lVar9 + 8))(puVar8,lVar3);
  _swift_bridgeObjectRelease(puVar7);
  uVar4 = (ulong)puVar5 & 0xffffffffffff;
  if (((ulong)puVar7 & 0x2000000000000000) != 0) {
    uVar4 = (ulong)puVar7 >> 0x38 & 0xf;
  }
  if (uVar4 != 0) {
    if (param_4 < 4) {
      if (param_5 < 6) {
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_70 = (undefined1)uStack_13c;
        uStack_a0 = param_1;
        uStack_98 = param_2;
        uStack_90 = param_3;
        _objc_allocWithZone(uStack_138);
        _objc_retain(param_1);
        _swift_bridgeObjectRetain(param_3);
        puVar6 = &uStack_a0;
        FUN_104626f4c();
        lVar3 = _DAT_11308a918;
        _swift_beginAccess((long)puVar6 + _DAT_11308a918,auStack_b8,1,0);
        lVar9 = _DAT_11308a920;
        *(char *)((long)puVar6 + lVar3) = (char)param_4;
        _swift_beginAccess((long)puVar6 + _DAT_11308a920,auStack_d0,1,0);
        lVar3 = _DAT_11308a930;
        *(char *)((long)puVar6 + lVar9) = (char)param_5;
        _swift_beginAccess((long)puVar6 + _DAT_11308a930,auStack_e8,1,0);
        puVar7 = PTR_s_setEnabled__112642f38;
        *(undefined1 *)((long)puVar6 + lVar3) = 0;
        uStack_f0 = uStack_138;
        puStack_f8 = puVar6;
        _objc_retain();
        _objc_msgSendSuper2(&puStack_f8,puVar7,1);
        FUN_104626190();
        lVar3 = _DAT_11308a928;
        _swift_beginAccess((long)puVar6 + _DAT_11308a928,auStack_110,1,0);
        lVar9 = _DAT_11308a938;
        *(undefined1 *)((long)puVar6 + lVar3) = 0;
        _swift_beginAccess((long)puVar6 + _DAT_11308a938,auStack_128,1,0);
        *(undefined1 *)((long)puVar6 + lVar9) = 0;
        FUN_104626190();
        _objc_release(puVar6);
        _swift_bridgeObjectRelease(param_3);
        _objc_release(param_1);
        _objc_release(param_1);
        uVar2 = unaff_x20;
        _swift_getObjectType(unaff_x20);
        _swift_deallocPartialClassInstance(unaff_x20,uVar2,0x100,7);
        return puVar6;
      }
      puVar7 = &UNK_110792010;
      uStack_a0 = param_5;
    }
    else {
      puVar7 = &UNK_110791ff0;
      uStack_a0 = param_4;
    }
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (puVar7,&uStack_a0,puVar7,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10462cbf0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10462cbbc);
  (*pcVar1)();
}



/* Entry: 10462cbf0; end: 10462cbf7; -[_TtC14HeliosControls12HeliosButton initWithLeadingAsset:accessibilityLabel:size:emphasis:] */

void FUN_10462cbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_retain(param_3);
  FUN_10462c914();
  return;
}



/* Entry: 10462cbf8; end: 10462cc6f;  */

void FUN_10462cbf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_retain(param_3);
  FUN_10462c914();
  return;
}



/* Entry: 10462cc70; end: 10462ccb7; -[_TtC14HeliosControls12HeliosButton buttonSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10462cc70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11308a918;
  _swift_beginAccess(param_1 + _DAT_11308a918,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 10462ccb8; end: 10462cd53; -[_TtC14HeliosControls12HeliosButton setButtonSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10462ccb8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  code *pcVar2;
  ulong auStack_48 [3];
  
  lVar1 = _DAT_11308a918;
  if (param_3 < 4) {
    _swift_beginAccess(param_1 + _DAT_11308a918,auStack_48,1,0);
    *(char *)(param_1 + lVar1) = (char)param_3;
    _objc_retain(param_1);
    FUN_104626190();
    _objc_release(param_1);
    return;
  }
  auStack_48[0] = param_3;
  _objc_retain();
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110791ff0,auStack_48,&UNK_110791ff0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10462cd54);
  (*pcVar2)();
}



/* Entry: 10462cd54; end: 10462cd9b; -[_TtC14HeliosControls12HeliosButton buttonEmphasis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10462cd54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11308a920;
  _swift_beginAccess(param_1 + _DAT_11308a920,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 10462cd9c; end: 10462cdcb; -[_TtC14HeliosControls12HeliosButton setButtonEmphasis:] */

void FUN_10462cd9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_10462cdcc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10462cdcc; end: 10462ce4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10462cdcc(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  ulong auStack_48 [3];
  
  lVar1 = _DAT_11308a920;
  if (param_1 < 6) {
    _swift_beginAccess(unaff_x20 + _DAT_11308a920,auStack_48,1,0);
    *(char *)(unaff_x20 + lVar1) = (char)param_1;
    FUN_104626190();
    return;
  }
  auStack_48[0] = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110792010,auStack_48,&UNK_110792010,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10462ce4c);
  (*pcVar2)();
}



/* Entry: 10462ce4c; end: 10462ce93; -[_TtC14HeliosControls12HeliosButton fillsAvailableWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10462ce4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11308a928;
  _swift_beginAccess(param_1 + _DAT_11308a928,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 10462ce94; end: 10462cf0b; -[_TtC14HeliosControls12HeliosButton setFillsAvailableWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10462ce94(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11308a928;
  _swift_beginAccess(param_1 + _DAT_11308a928,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_1);
  FUN_104626b40();
  func_0x00010c069fa0(param_1);
  FUN_104626190();
  _objc_release(param_1);
  return;
}



/* Entry: 10462cf0c; end: 10462cf53; -[_TtC14HeliosControls12HeliosButton isLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10462cf0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11308a930;
  _swift_beginAccess(param_1 + _DAT_11308a930,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 10462cf54; end: 10462cf5f; -[_TtC14HeliosControls12HeliosButton setIsLoading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10462cf54(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11308a930;
  _swift_beginAccess(param_1 + _DAT_11308a930,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_1);
  FUN_104626190();
  _objc_release(param_1);
  return;
}



/* Entry: 10462cf60; end: 10462cfa7; -[_TtC14HeliosControls12HeliosButton allowTwoLineButtonText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10462cf60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11308a938;
  _swift_beginAccess(param_1 + _DAT_11308a938,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 10462cfa8; end: 10462cfb3; -[_TtC14HeliosControls12HeliosButton setAllowTwoLineButtonText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10462cfa8(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11308a938;
  _swift_beginAccess(param_1 + _DAT_11308a938,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_1);
  FUN_104626190();
  _objc_release(param_1);
  return;
}



/* Entry: 10462cfb4; end: 10462d017;  */

void FUN_10462cfb4(long param_1,undefined8 param_2,undefined1 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_1);
  FUN_104626190();
  _objc_release(param_1);
  return;
}



/* Entry: 10462d018; end: 10462d0d3; -[_TtC14HeliosControls12HeliosButton setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10462d018(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11308a910);
  _swift_beginAccess(puVar1,auStack_88,1,0);
  uStack_68 = puVar1[1];
  uStack_70 = *puVar1;
  uStack_58 = puVar1[3];
  uStack_60 = puVar1[2];
  uStack_48 = puVar1[5];
  uStack_50 = puVar1[4];
  uStack_40 = *(undefined1 *)(puVar1 + 6);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  _objc_retain(param_1);
  _swift_bridgeObjectRetain(param_2);
  FUN_10462609c(&uStack_70);
  _objc_release(param_1);
  FUN_10462a7ec(&uStack_70);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 10462d0d4; end: 10462d1c7; -[_TtC14HeliosControls12HeliosButton setText:accessibilityLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10462d0d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_4 == 0) {
    param_4 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11308a910);
  _swift_beginAccess(puVar1,auStack_98,1,0);
  uStack_78 = puVar1[1];
  uStack_80 = *puVar1;
  uStack_68 = puVar1[3];
  uStack_70 = puVar1[2];
  uStack_58 = puVar1[5];
  uStack_60 = puVar1[4];
  uStack_50 = *(undefined1 *)(puVar1 + 6);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1[2] = param_4;
  puVar1[3] = uVar2;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  _swift_bridgeObjectRetain(uVar2);
  _objc_retain(param_1);
  _swift_bridgeObjectRetain(param_2);
  FUN_10462609c(&uStack_80);
  _objc_release(param_1);
  FUN_10462a7ec(&uStack_80);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 10462d1c8; end: 10462d313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10462d1c8(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6)

{
  ulong *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 uStack_70;
  
  if (param_4 < 2) {
    _swift_bridgeObjectRetain(param_2);
    _objc_retain();
    FUN_10462a694(param_5,param_6,param_1,param_2);
    puVar1 = (ulong *)(unaff_x20 + _DAT_11308a910);
    _swift_beginAccess(puVar1,auStack_b8,1,0);
    uStack_98 = puVar1[1];
    uStack_a0 = *puVar1;
    uStack_88 = puVar1[3];
    uStack_90 = puVar1[2];
    uStack_78 = puVar1[5];
    uStack_80 = puVar1[4];
    uStack_70 = (undefined1)puVar1[6];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    puVar1[4] = param_5;
    puVar1[5] = param_6;
    *(undefined1 *)(puVar1 + 6) = 1;
    _swift_bridgeObjectRetain_n(param_6,2);
    _swift_bridgeObjectRetain(param_2);
    _objc_retain(param_3);
    FUN_10462609c(&uStack_a0);
    FUN_10462a7ec(&uStack_a0);
    _swift_bridgeObjectRelease(param_6);
    _objc_release(param_3);
    _swift_bridgeObjectRelease(param_2);
    return;
  }
  uStack_a0 = param_4;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110792030,&uStack_a0,&UNK_110792030,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10462d314);
  (*pcVar2)();
}



/* Entry: 10462d314; end: 10462d3d3; -[_TtC14HeliosControls12HeliosButton setText:image:position:accessibilityLabel:] */

void FUN_10462d314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  if (param_6 == 0) {
    param_6 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  }
  _objc_retain(param_4);
  _objc_retain(param_1);
  FUN_10462d1c8(param_3,param_2,param_4,param_5,param_6,uVar1);
  _objc_release(param_4);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 10462d3d4; end: 10462d3db; -[_TtC14HeliosControls12HeliosButton setImage:accessibilityLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10462d3d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar2 = param_2;
  FUN_10462a8bc();
  puVar1 = (undefined8 *)(param_1 + _DAT_11308a910);
  _swift_beginAccess(puVar1,auStack_a8,1,0);
  uStack_88 = puVar1[1];
  uStack_90 = *puVar1;
  uStack_78 = puVar1[3];
  uStack_80 = puVar1[2];
  uStack_68 = puVar1[5];
  uStack_70 = puVar1[4];
  uStack_60 = *(undefined1 *)(puVar1 + 6);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1[2] = uVar2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 2;
  _swift_bridgeObjectRetain_n(uVar2,2);
  _objc_retain(param_3);
  FUN_10462609c(&uStack_90);
  _objc_release(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  FUN_10462a7ec(&uStack_90);
  _swift_bridgeObjectRelease(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10462d3dc; end: 10462d537; -[_TtC14HeliosControls12HeliosButton setText:leadingAsset:accessibilityLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10462d3dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_5 == 0) {
    param_5 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar3 = uVar2;
  FUN_10462a694(param_5,uVar2,param_3,param_2);
  puVar1 = (undefined8 *)(param_1 + _DAT_11308a910);
  _swift_beginAccess(puVar1,auStack_a8,1,0);
  uStack_88 = puVar1[1];
  uStack_90 = *puVar1;
  uStack_78 = puVar1[3];
  uStack_80 = puVar1[2];
  uStack_68 = puVar1[5];
  uStack_70 = puVar1[4];
  uStack_60 = *(undefined1 *)(puVar1 + 6);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1[2] = param_4;
  puVar1[3] = param_5;
  puVar1[4] = uVar3;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 3;
  _swift_bridgeObjectRetain_n(uVar3,2);
  _objc_retain(param_4);
  _swift_bridgeObjectRetain(param_2);
  FUN_10462609c(&uStack_90);
  _objc_release(param_4);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(uVar2);
  FUN_10462a7ec(&uStack_90);
  _swift_bridgeObjectRelease(uVar3);
  _objc_release(param_4);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 10462d538; end: 10462d53f; -[_TtC14HeliosControls12HeliosButton setLeadingAsset:accessibilityLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10462d538(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar2 = param_2;
  FUN_10462a8bc();
  puVar1 = (undefined8 *)(param_1 + _DAT_11308a910);
  _swift_beginAccess(puVar1,auStack_a8,1,0);
  uStack_88 = puVar1[1];
  uStack_90 = *puVar1;
  uStack_78 = puVar1[3];
  uStack_80 = puVar1[2];
  uStack_68 = puVar1[5];
  uStack_70 = puVar1[4];
  uStack_60 = *(undefined1 *)(puVar1 + 6);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1[2] = uVar2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 4;
  _swift_bridgeObjectRetain_n(uVar2,2);
  _objc_retain(param_3);
  FUN_10462609c(&uStack_90);
  _objc_release(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  FUN_10462a7ec(&uStack_90);
  _swift_bridgeObjectRelease(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10462d540; end: 10462d663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10462d540(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar2 = param_2;
  FUN_10462a8bc();
  puVar1 = (undefined8 *)(param_1 + _DAT_11308a910);
  _swift_beginAccess(puVar1,auStack_a8,1,0);
  uStack_88 = puVar1[1];
  uStack_90 = *puVar1;
  uStack_78 = puVar1[3];
  uStack_80 = puVar1[2];
  uStack_68 = puVar1[5];
  uStack_70 = puVar1[4];
  uStack_60 = *(undefined1 *)(puVar1 + 6);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1[2] = uVar2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = param_5;
  _swift_bridgeObjectRetain_n(uVar2,2);
  _objc_retain(param_3);
  FUN_10462609c(&uStack_90);
  _objc_release(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  FUN_10462a7ec(&uStack_90);
  _swift_bridgeObjectRelease(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10462d664; end: 10462d687;  */

undefined1  [16] FUN_10462d664(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 10462d688; end: 10462d6c7;  */

void FUN_10462d688(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ab18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd21d90;
  _swift_getWitnessTable(&UNK_10dd21d90,&UNK_110791ff0);
  puRam000000011308ab18 = puVar1;
  return;
}



/* Entry: 10462d6c8; end: 10462d6cb;  */

void FUN_10462d6c8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ab20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd21e30;
  _swift_getWitnessTable(&UNK_10dd21e30,&UNK_110792010);
  puRam000000011308ab20 = puVar1;
  return;
}



/* Entry: 10462d6cc; end: 10462d70b;  */

void FUN_10462d6cc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ab20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd21e30;
  _swift_getWitnessTable(&UNK_10dd21e30,&UNK_110792010);
  puRam000000011308ab20 = puVar1;
  return;
}


