/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108fe2030; end: 108fe218f; -[SCCollectionViewCarouselSectionConfiguration isEqual:] */

long FUN_108fe2030(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108fe2168:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108fe2174;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
        dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if ((((bVar1) &&
             ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x38);
          if (lVar4 != *(long *)(param_3 + 0x38)) {
            func_0x00010c071ae0();
            goto LAB_108fe2174;
          }
          goto LAB_108fe2168;
        }
      }
    }
    lVar4 = 0;
  }
LAB_108fe2174:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108fe2190; end: 108fe2197; -[SCCollectionViewCarouselSectionConfiguration sectionReuseIdentifier] */

undefined8 FUN_108fe2190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108fe2198; end: 108fe219f; -[SCCollectionViewCarouselSectionConfiguration sectionHeaderModel] */

undefined8 FUN_108fe2198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108fe21a0; end: 108fe21a7; -[SCCollectionViewCarouselSectionConfiguration minimumIntersectionSpacing] */

undefined8 FUN_108fe21a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108fe21a8; end: 108fe21af; -[SCCollectionViewCarouselSectionConfiguration minimumInteritemSpacing] */

undefined8 FUN_108fe21a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108fe21b0; end: 108fe21b7; -[SCCollectionViewCarouselSectionConfiguration sectionInsets] */

undefined8 FUN_108fe21b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108fe21b8; end: 108fe21bf; -[SCCollectionViewCarouselSectionConfiguration automaticallyManageRoundedCorners] */

undefined1 FUN_108fe21b8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108fe21c0; end: 108fe21c7; -[SCCollectionViewCarouselSectionConfiguration contentDataModel] */

undefined8 FUN_108fe21c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108fe21c8; end: 108fe21cf; -[SCCollectionViewCarouselSectionConfiguration manageContentOffsetManually] */

undefined1 FUN_108fe21c8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108fe21d0; end: 108fe2217; -[SCCollectionViewCarouselSectionConfiguration .cxx_destruct] */

void FUN_108fe21d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108fe2218; end: 108fe2277; -[SCCollectionViewSectionKitCornerRadii initWithTopLeftRadius:topRightRadius:bottomLeftRadius:bottomRightRadius:] */

void FUN_108fe2218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ffbe8;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
  }
  return;
}



/* Entry: 108fe2278; end: 108fe229b; -[SCCollectionViewSectionKitCornerRadii copyWithZone:] */

undefined8 FUN_108fe2278(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108fe229c; end: 108fe236f; -[SCCollectionViewSectionKitCornerRadii hash] */

ulong * FUN_108fe229c(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar3 = &uStack_38;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar6 = puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if (((ulong)puVar4 & 1) != 0) {
        dVar8 = ABS((double)puVar3[1] - (double)param_3[1]);
        dVar7 = ABS((double)puVar3[1] + (double)param_3[1]) * 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar2 = dVar8 < dVar7;
        }
        if (bVar2) {
          dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
          dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
            bVar2 = dVar8 < dVar7;
          }
          if (bVar2) {
            dVar8 = ABS((double)puVar3[3] - (double)param_3[3]);
            dVar7 = ABS((double)puVar3[3] + (double)param_3[3]) * 2.220446049250313e-16;
            bVar2 = true;
            if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
              bVar2 = dVar8 < dVar7;
            }
            if (bVar2) {
              dVar7 = ABS((double)puVar3[4] + (double)param_3[4]) * 2.220446049250313e-16;
              if (dVar7 <= 2.2250738585072014e-308) {
                dVar7 = 2.2250738585072014e-308;
              }
              puVar6 = (ulong *)(ulong)(ABS((double)puVar3[4] - (double)param_3[4]) < dVar7);
              goto LAB_108fe249c;
            }
          }
        }
      }
      puVar6 = (ulong *)0x0;
    }
  }
LAB_108fe249c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108fe2370; end: 108fe24b7; -[SCCollectionViewSectionKitCornerRadii isEqual:] */

bool FUN_108fe2370(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) != 0) {
        dVar5 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
        dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
          bVar1 = dVar5 < dVar4;
        }
        if (bVar1) {
          dVar5 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
          dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
            bVar1 = dVar5 < dVar4;
          }
          if (bVar1) {
            dVar5 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
            dVar4 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                    2.220446049250313e-16;
            bVar1 = true;
            if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
              bVar1 = dVar5 < dVar4;
            }
            if (bVar1) {
              dVar4 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                      2.220446049250313e-16;
              if (dVar4 <= 2.2250738585072014e-308) {
                dVar4 = 2.2250738585072014e-308;
              }
              bVar1 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20)) < dVar4;
              goto LAB_108fe249c;
            }
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_108fe249c:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108fe24b8; end: 108fe24bf; -[SCCollectionViewSectionKitCornerRadii topLeftRadius] */

undefined8 FUN_108fe24b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108fe24c0; end: 108fe24c7; -[SCCollectionViewSectionKitCornerRadii topRightRadius] */

undefined8 FUN_108fe24c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108fe24c8; end: 108fe24cf; -[SCCollectionViewSectionKitCornerRadii bottomLeftRadius] */

undefined8 FUN_108fe24c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108fe24d0; end: 108fe24d7; -[SCCollectionViewSectionKitCornerRadii bottomRightRadius] */

undefined8 FUN_108fe24d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108fe24d8; end: 108fe254b; -[SCGrapheneSigSectionBasedCollectiobViewUpdaterMetric2 init] */

undefined1 * FUN_108fe24d8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ffbf0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fe254c; end: 108fe277b;  */

void FUN_108fe254c(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  char *pcStack_2b8;
  undefined8 *puStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  char acStack_278 [24];
  char *pcStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  char *pcStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar7 = param_3;
  uVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar14 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x000107c27984(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar7 = acStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110ad1fe8,pcVar7,param_4);
    pcStack_80 = unaff_x23;
    func_0x000107c278ac(&pcStack_80);
    lVar12 = 0;
    puVar14 = auStack_78;
    uVar10 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_108fe277c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar8 = pcVar7;
  uVar11 = uVar10;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar14;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  puVar14 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = auStack_118;
    func_0x000107c278b8(auStack_118,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(auStack_100,pcVar2);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x000107c27984(acStack_138,auStack_118,&lStack_e8,2);
    pcVar5 = "";
    unaff_x23 = acStack_138;
    pcVar8 = acStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110ad2038,pcVar8,uVar10);
    pcStack_120 = unaff_x23;
    func_0x000107c278ac(&pcStack_120);
    lVar12 = 0;
    puVar14 = auStack_118;
    uVar11 = uVar10;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar1);
  pcVar4 = pcVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_108fe29ac;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar5;
  pcVar9 = pcVar8;
  uVar10 = uVar11;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar14;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar7;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar5);
  _objc_retain(pcVar8);
  puVar14 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar13 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    unaff_x24 = auStack_1b8;
    func_0x000107c278b8(auStack_1b8,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(auStack_1a0,pcVar1);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x000107c27984(acStack_1d8,auStack_1b8,&lStack_188,2);
    pcVar3 = "";
    unaff_x23 = acStack_1d8;
    pcVar9 = acStack_1d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110ad2088,pcVar9,uVar11);
    pcStack_1c0 = unaff_x23;
    func_0x000107c278ac(&pcStack_1c0);
    lVar12 = 0;
    puVar14 = auStack_1b8;
    uVar10 = uVar11;
    do {
      if ((&cStack_189)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar5);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_108fe2bdc;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar3;
  pcVar2 = pcVar9;
  uVar11 = uVar10;
  puStack_220 = unaff_x24;
  pcStack_218 = unaff_x23;
  puStack_210 = puVar14;
  pcStack_208 = pcVar1;
  pcStack_200 = pcVar8;
  pcStack_1f8 = pcVar5;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pcVar3);
  _objc_retain(pcVar9);
  puVar14 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar13 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    unaff_x24 = auStack_258;
    func_0x000107c278b8(auStack_258,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x000107c278b8(auStack_240,pcVar1);
    acStack_278[0] = '\0';
    acStack_278[1] = '\0';
    acStack_278[2] = '\0';
    acStack_278[3] = '\0';
    acStack_278[4] = '\0';
    acStack_278[5] = '\0';
    acStack_278[6] = '\0';
    acStack_278[7] = '\0';
    acStack_278[8] = '\0';
    acStack_278[9] = '\0';
    acStack_278[10] = '\0';
    acStack_278[0xb] = '\0';
    acStack_278[0xc] = '\0';
    acStack_278[0xd] = '\0';
    acStack_278[0xe] = '\0';
    acStack_278[0xf] = '\0';
    acStack_278[0x10] = '\0';
    acStack_278[0x11] = '\0';
    acStack_278[0x12] = '\0';
    acStack_278[0x13] = '\0';
    acStack_278[0x14] = '\0';
    acStack_278[0x15] = '\0';
    acStack_278[0x16] = '\0';
    acStack_278[0x17] = '\0';
    func_0x000107c27984(acStack_278,auStack_258,&lStack_228,2);
    pcVar7 = "";
    unaff_x23 = acStack_278;
    pcVar2 = acStack_278;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110ad20d8,pcVar2,uVar10);
    pcStack_260 = unaff_x23;
    func_0x000107c278ac(&pcStack_260);
    lVar12 = 0;
    puVar14 = auStack_258;
    uVar11 = uVar10;
    do {
      if ((&cStack_229)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar3);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  pcStack_288 = FUN_108fe2e0c;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2c0 = unaff_x24;
  pcStack_2b8 = unaff_x23;
  puStack_2b0 = puVar14;
  pcStack_2a8 = pcVar1;
  pcStack_2a0 = pcVar9;
  pcStack_298 = pcVar3;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(pcVar7);
  _objc_retain(pcVar2);
  if (pcVar5 != (char *)0x0) {
    plVar13 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(auStack_2f8,pcVar1);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar1 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x000107c278b8(auStack_2e0,pcVar1);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    func_0x000107c27984(&uStack_318,auStack_2f8,&lStack_2c8,2);
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110ad2128,&uStack_318,uVar11);
    puStack_300 = &uStack_318;
    func_0x000107c278ac(&puStack_300);
    lVar12 = 0;
    do {
      if ((&cStack_2c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar2);
  pcVar1 = pcVar7;
  _objc_release(pcVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(pcVar2);
  _objc_release(pcVar7);
  __Unwind_Resume(pcVar1);
  if (puRam00000001137305a0 == (undefined *)0x0) {
    puVar6 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0();
    puRam00000001137305a0 = puVar6;
  }
  return;
}



/* Entry: 108fe277c; end: 108fe29ab;  */

void FUN_108fe277c(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  char *pcStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  uVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar14 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x000107c27984(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110ad2038,pcVar5,param_4);
    pcStack_80 = unaff_x23;
    func_0x000107c278ac(&pcStack_80);
    lVar12 = 0;
    puVar14 = auStack_78;
    uVar10 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_108fe29ac;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar8 = pcVar5;
  uVar11 = uVar10;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar14;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  puVar14 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = auStack_118;
    func_0x000107c278b8(auStack_118,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(auStack_100,pcVar2);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x000107c27984(acStack_138,auStack_118,&lStack_e8,2);
    pcVar7 = "";
    unaff_x23 = acStack_138;
    pcVar8 = acStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110ad2088,pcVar8,uVar10);
    pcStack_120 = unaff_x23;
    func_0x000107c278ac(&pcStack_120);
    lVar12 = 0;
    puVar14 = auStack_118;
    uVar11 = uVar10;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  pcVar4 = pcVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_108fe2bdc;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar7;
  pcVar9 = pcVar8;
  uVar10 = uVar11;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar14;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar5;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar7);
  _objc_retain(pcVar8);
  puVar14 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar13 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    unaff_x24 = auStack_1b8;
    func_0x000107c278b8(auStack_1b8,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(auStack_1a0,pcVar1);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x000107c27984(acStack_1d8,auStack_1b8,&lStack_188,2);
    pcVar3 = "";
    unaff_x23 = acStack_1d8;
    pcVar9 = acStack_1d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110ad20d8,pcVar9,uVar11);
    pcStack_1c0 = unaff_x23;
    func_0x000107c278ac(&pcStack_1c0);
    lVar12 = 0;
    puVar14 = auStack_1b8;
    uVar10 = uVar11;
    do {
      if ((&cStack_189)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar7);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_108fe2e0c;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_220 = unaff_x24;
  pcStack_218 = unaff_x23;
  puStack_210 = puVar14;
  pcStack_208 = pcVar1;
  pcStack_200 = pcVar8;
  pcStack_1f8 = pcVar7;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pcVar3);
  _objc_retain(pcVar9);
  if (pcVar5 != (char *)0x0) {
    plVar13 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x000107c278b8(auStack_258,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x000107c278b8(auStack_240,pcVar1);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x000107c27984(&uStack_278,auStack_258,&lStack_228,2);
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110ad2128,&uStack_278,uVar10);
    puStack_260 = &uStack_278;
    func_0x000107c278ac(&puStack_260);
    lVar12 = 0;
    do {
      if ((&cStack_229)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar1 = pcVar3;
  _objc_release(pcVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar3);
  __Unwind_Resume(pcVar1);
  if (puRam00000001137305a0 == (undefined *)0x0) {
    puVar6 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0();
    puRam00000001137305a0 = puVar6;
  }
  return;
}



/* Entry: 108fe29ac; end: 108fe2bdb;  */

void FUN_108fe29ac(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar6 = param_3;
  uVar8 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar12 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x000107c27984(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar6 = acStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110ad2088,pcVar6,param_4);
    pcStack_80 = unaff_x23;
    func_0x000107c278ac(&pcStack_80);
    lVar10 = 0;
    puVar12 = auStack_78;
    uVar8 = param_4;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_108fe2bdc;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar7 = pcVar6;
  uVar9 = uVar8;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar12;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  puVar12 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = auStack_118;
    func_0x000107c278b8(auStack_118,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x000107c278b8(auStack_100,pcVar2);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x000107c27984(acStack_138,auStack_118,&lStack_e8,2);
    pcVar5 = "";
    unaff_x23 = acStack_138;
    pcVar7 = acStack_138;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110ad20d8,pcVar7,uVar8);
    pcStack_120 = unaff_x23;
    func_0x000107c278ac(&pcStack_120);
    lVar10 = 0;
    puVar12 = auStack_118;
    uVar9 = uVar8;
    do {
      if ((&cStack_e9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_108fe2e0c;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar12;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar6;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar5);
  _objc_retain(pcVar7);
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(auStack_1b8,pcVar1);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar1 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(auStack_1a0,pcVar1);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x000107c27984(&uStack_1d8,auStack_1b8,&lStack_188,2);
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110ad2128,&uStack_1d8,uVar9);
    puStack_1c0 = &uStack_1d8;
    func_0x000107c278ac(&puStack_1c0);
    lVar10 = 0;
    do {
      if ((&cStack_189)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar1 = pcVar5;
  _objc_release(pcVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar5);
  __Unwind_Resume(pcVar1);
  if (puRam00000001137305a0 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0();
    puRam00000001137305a0 = puVar4;
  }
  return;
}



/* Entry: 108fe2bdc; end: 108fe2e0b;  */

void FUN_108fe2bdc(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  uVar6 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar9 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x000107c27984(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110ad20d8,pcVar5,param_4);
    pcStack_80 = unaff_x23;
    func_0x000107c278ac(&pcStack_80);
    lVar7 = 0;
    puVar9 = auStack_78;
    uVar6 = param_4;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_108fe2e0c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar9;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  if (pcVar3 != (char *)0x0) {
    plVar8 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(auStack_118,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(auStack_100,pcVar2);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x000107c27984(&uStack_138,auStack_118,&lStack_e8,2);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110ad2128,&uStack_138,uVar6);
    puStack_120 = &uStack_138;
    func_0x000107c278ac(&puStack_120);
    lVar7 = 0;
    do {
      if ((&cStack_e9)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  _objc_release(pcVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  __Unwind_Resume(pcVar2);
  if (puRam00000001137305a0 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0();
    puRam00000001137305a0 = puVar4;
  }
  return;
}



/* Entry: 108fe2e0c; end: 108fe303b;  */

void FUN_108fe2e0c(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110ad2128,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x000107c278ac(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume(pcVar1);
  if (puRam00000001137305a0 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0();
    puRam00000001137305a0 = puVar2;
  }
  return;
}



/* Entry: 108fe303c; end: 108fe30a3; +[DiscoverClientForYouMetadataCachingTTLConfig descriptor] */

void FUN_108fe303c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137305a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bdf0a0,
                        &PTR____CFConstantStringClassReference_110f16718,&PTR_DAT_1132be1d8,
                        &PTR_DAT_1132be1f0,8,0x24,0x1c);
    puRam00000001137305a0 = puVar1;
  }
  return;
}



/* Entry: 108fe30a4; end: 108fe310b; +[DiscoverClientMetadataCachingTTLConfig descriptor] */

void FUN_108fe30a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137305a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bdf140,
                        &PTR____CFConstantStringClassReference_110f16738,&PTR_DAT_1132be2f0,
                        &PTR_DAT_1132be308,0xc,0x28,0x1c);
    puRam00000001137305a8 = puVar1;
  }
  return;
}



/* Entry: 108fe310c; end: 108fe3173; +[DiscoverClientSubMetadataCachingTTLConfig descriptor] */

void FUN_108fe310c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137305b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bdf1e0,
                        &PTR____CFConstantStringClassReference_110f16758,&PTR_DAT_1132be488,
                        &PTR_DAT_1132be4a0,8,0x24,0x1c);
    puRam00000001137305b0 = puVar1;
  }
  return;
}



/* Entry: 108fe3174; end: 108fe31db; +[DiscoverClientThumbnailPrefetchingConfig descriptor] */

void FUN_108fe3174(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137305b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bdf280,
                        &PTR____CFConstantStringClassReference_110f16778,&PTR_DAT_1132be5a0,
                        &PTR_DAT_1132be5b8,4,0x14,0x1c);
    puRam00000001137305b8 = puVar1;
  }
  return;
}



/* Entry: 108fe31dc; end: 108fe3243; +[DiscoverFeedSectionMetadataCacheTTLConfig descriptor] */

void FUN_108fe31dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137305c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bdf320,
                        &PTR____CFConstantStringClassReference_110f16798,&PTR_DAT_1132be638,
                        &PTR_DAT_1132be650,4,0x14,0x1c);
    puRam00000001137305c0 = puVar1;
  }
  return;
}



/* Entry: 108fe3244; end: 108fe32ab; +[DiscoverRequestDebouncerConfig descriptor] */

void FUN_108fe3244(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137305c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bdf3c0,
                        &PTR____CFConstantStringClassReference_110f167b8,&PTR_DAT_1132be6d0,
                        &PTR_DAT_1132be6e8,0xc,0x30,0x1c);
    puRam00000001137305c8 = puVar1;
  }
  return;
}



/* Entry: 108fe32ac; end: 108fe3313; +[FriendStoryCarouselPrefetchConfig descriptor] */

void FUN_108fe32ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137305d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bdf460,
                        &PTR____CFConstantStringClassReference_110f167d8,&PTR_DAT_1132be868,
                        &PTR_DAT_1132be880,6,0x1c,0x1c);
    puRam00000001137305d0 = puVar1;
  }
  return;
}



/* Entry: 108fe3314; end: 108fe338f; +[SCMixedCarouselRequestDebouncerConfig descriptor] */

undefined * FUN_108fe3314(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137305d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bdf500,
                        &PTR____CFConstantStringClassReference_110f167f8,&PTR_DAT_1132be940,
                        &PTR_DAT_1132be958,6,0x1c,0x1c);
    func_0x00010c2289e0();
    puRam00000001137305d8 = puVar1;
  }
  return puRam00000001137305d8;
}



/* Entry: 108fe3390; end: 108fe34df;  */

void FUN_108fe3390(undefined *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dStack_38;
  
  puVar4 = param_1;
  _objc_retain();
  if (param_1 == (undefined *)0x0) {
    FUN_108fe34e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lRam00000001137305e8 != -1) {
      func_0x000107c27d9c(0x1137305e8,&PTR___NSConcreteGlobalBlock_110ad2220);
    }
    puVar4 = puRam00000001137305e0;
    _objc_retain(puRam00000001137305e0);
    puVar2 = param_1;
    func_0x00010bf6e340(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x0) {
      puVar4 = param_1;
      func_0x00010bfcc380();
      if ((int)puVar4 == 0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        lVar1 = 8;
        if (dStack_38 <= 0.5) {
          lVar1 = 0;
        }
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf41680(dStack_38 * *(double *)(&UNK_10dfb1950 + lVar1),
                            PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      _objc_retain(puVar3);
      puVar4 = puVar3;
    }
    _objc_release(puVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108fe34e0; end: 108fe353b;  */

void FUN_108fe34e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x4c4d53);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3feae147ae147ae1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108fe353c; end: 108fe3567;  */

void FUN_108fe353c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14c3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fb999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70,
             PTR_s_sc_BackgroundGrayWithAlpha__112630b08);
  return;
}



/* Entry: 108fe3568; end: 108fe364f;  */

void FUN_108fe3568(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c3a0(0x3fb999999999999a);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_108fe34e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137305e0;
  puRam00000001137305e0 = puVar5;
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  if (lRam00000001137305f8 != -1) {
    func_0x000107c27d9c(0x1137305f8,&PTR___NSConcreteGlobalBlock_110ad2240);
  }
  uVar1 = uRam00000001137305f0;
  _objc_retain(uRam00000001137305f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108fe3650; end: 108fe36a3; +[SCSearchColorThemeProvider shared] */

void FUN_108fe3650(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137305f8 != -1) {
    func_0x000107c27d9c(0x1137305f8,&PTR___NSConcreteGlobalBlock_110ad2240);
  }
  uVar1 = uRam00000001137305f0;
  _objc_retain(uRam00000001137305f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108fe36a4; end: 108fe36cf;  */

void FUN_108fe36a4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dcdd0;
  _objc_opt_new();
  uVar1 = puRam00000001137305f0;
  puRam00000001137305f0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fe36d0; end: 108fe36d3; -[SCSearchColorThemeProvider collectionViewCellBackgroundColor] */

void FUN_108fe36d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14c3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fb999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70,
             PTR_s_sc_BackgroundGrayWithAlpha__112630b08);
  return;
}



/* Entry: 108fe36d4; end: 108fe36d7; -[SCSearchColorThemeProvider collectionViewCellSeparatorColor] */

void FUN_108fe36d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf415b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70,
             PTR_s_colorWithHexCode_alpha__1125adf10,0x464749);
  return;
}



/* Entry: 108fe36d8; end: 108fe36e3; -[SCSearchColorThemeProvider friendsSectionUnselectedActionButtonColor] */

void FUN_108fe36d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a4b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_whiteColor_112686cf0);
  return;
}



/* Entry: 108fe36e4; end: 108fe36ef; -[SCSearchColorThemeProvider personCollectionViewCellNameColor] */

void FUN_108fe36e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a4b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_whiteColor_112686cf0);
  return;
}



/* Entry: 108fe36f0; end: 108fe36fb; -[SCSearchColorThemeProvider findFriendCollectionViewCellLabelColor] */

void FUN_108fe36f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a4b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_whiteColor_112686cf0);
  return;
}



/* Entry: 108fe36fc; end: 108fe3707; -[SCSearchColorThemeProvider contactSyncCollectionViewCellBackgroundColor] */

void FUN_108fe36fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3ae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_clearColor_1125ac538);
  return;
}



/* Entry: 108fe3708; end: 108fe3713; -[SCSearchColorThemeProvider noResultCollectionViewCellTextColor] */

void FUN_108fe3708(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a4b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_whiteColor_112686cf0);
  return;
}



/* Entry: 108fe3714; end: 108fe3717; -[SCSearchColorThemeProvider suggestCollectionViewCellBackgroundColor] */

void FUN_108fe3714(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14c3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fb999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70,
             PTR_s_sc_BackgroundGrayWithAlpha__112630b08);
  return;
}



/* Entry: 108fe3718; end: 108fe3723; -[SCSearchColorThemeProvider discoverStoryViewCellTitleColor] */

void FUN_108fe3718(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a4b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_whiteColor_112686cf0);
  return;
}



/* Entry: 108fe3724; end: 108fe373b; -[SCSearchColorThemeProvider discoverStoryViewCellSubtitleColor] */

void FUN_108fe3724(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,0x3fd999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70,
             PTR_s_colorWithWhite_alpha__1125adf48);
  return;
}



/* Entry: 108fe373c; end: 108fe3747; +[SCSearchCollectionViewCell announcerIdentifier] */

undefined ** FUN_108fe373c(void)

{
  return &PTR____CFConstantStringClassReference_110f16838;
}



/* Entry: 108fe3748; end: 108fe3757; -[SCSearchCollectionViewCell addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe3748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f4e0),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 108fe3758; end: 108fe3767; -[SCSearchCollectionViewCell removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe3758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f4e0),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 108fe3768; end: 108fe3a07; -[SCSearchCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fe3768(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ffbf8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar7 = (long)_DAT_11277f4e4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar5);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c178280(*(undefined8 *)((long)puVar1 + lVar7));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar7 = (long)_DAT_11277f4e8;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar5);
    func_0x00010c1c8340(0x3fd3333333333333,*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c178280(*(undefined8 *)((long)puVar1 + lVar7));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar7 = (long)_DAT_11277f4ec;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar5);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c233340();
    if ((int)puVar3 != 0) {
      puVar2 = PTR_PTR_1126b52f0;
      _objc_opt_new();
      lVar8 = (long)_DAT_11277f4f0;
      uVar5 = *(undefined8 *)((long)puVar1 + lVar8);
      *(undefined **)((long)puVar1 + lVar8) = puVar2;
      _objc_release(uVar5);
      puVar2 = PTR_PTR_1126dcdd0;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bf406a0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)_DAT_11277f4f4;
      uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
      *(undefined **)((long)puVar1 + lVar6) = puVar4;
      _objc_release(uVar5);
      _objc_release(puVar2);
      func_0x00010bdc0fe0(*(undefined8 *)((long)puVar1 + lVar6));
      uVar5 = *(undefined8 *)((long)puVar1 + lVar8);
      func_0x00010c22a660(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19bc00();
      _objc_release(uVar5);
      func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar7));
    }
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277f4f8) = 0xffffffffffffffff;
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f4e0);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f4e0) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126dcdd0;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf40760();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f4fc);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f4fc) = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fe3a08; end: 108fe3d23; -[SCSearchCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe3a08(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  long lStack_a0;
  undefined *puStack_98;
  
  puStack_98 = PTR_PTR_1126ffbf8;
  lStack_a0 = param_5;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_layoutSubviews_112600e60);
  lVar6 = (long)_DAT_11277f500;
  uVar4 = (uint)*(ulong *)(param_5 + lVar6);
  dVar15 = 0.0;
  if ((*(ulong *)(param_5 + lVar6) & 1) != 0) {
    func_0x00010b816670();
    uVar4 = (uint)*(undefined8 *)(param_5 + lVar6);
    dVar15 = param_1;
  }
  dVar8 = 0.0;
  if ((uVar4 >> 1 & 1) != 0) {
    func_0x00010b816670();
    dVar8 = param_1;
  }
  lVar2 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  pdVar1 = (double *)(param_5 + _DAT_11277f504);
  param_3 = param_3 - (pdVar1[1] + pdVar1[3]);
  dVar13 = param_1 + pdVar1[1] + 0.0;
  dVar14 = dVar15 + param_2 + *pdVar1;
  dVar15 = (param_4 - (*pdVar1 + pdVar1[2])) - (dVar15 + dVar8);
  _objc_release(lVar2);
  lVar7 = (long)_DAT_11277f4ec;
  func_0x00010c19f0e0(dVar13,dVar14,param_3,dVar15,*(undefined8 *)(param_5 + lVar7));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar7));
  lVar5 = (long)_DAT_11277f4f0;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar5));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
  func_0x00010bea6e60(param_5);
  lVar2 = param_5;
  func_0x00010c233340();
  if ((int)lVar2 != 0) {
    lVar3 = *(long *)(param_5 + lVar7);
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_5 + lVar5);
    _objc_release();
    _objc_release(lVar3);
    if (lVar2 != lVar5) {
      func_0x00010c15cda0(*(undefined8 *)(param_5 + lVar7));
    }
  }
  lVar2 = param_5;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_5 + lVar7);
  _objc_release();
  _objc_release(lVar5);
  _objc_release(lVar2);
  if (lVar3 != lVar7) {
    lVar2 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15cda0();
    _objc_release(lVar2);
  }
  uVar4 = (uint)*(ulong *)(param_5 + lVar6);
  if ((*(ulong *)(param_5 + lVar6) & 1) != 0) {
    dVar8 = dVar13;
    _CGRectGetMinX(dVar13,dVar14,param_3,dVar15);
    dVar9 = dVar13;
    _CGRectGetMinY(dVar13,dVar14,param_3,dVar15);
    dVar10 = dVar9;
    func_0x00010b816670();
    dVar11 = dVar13;
    _CGRectGetWidth(dVar13,dVar14,param_3,dVar15);
    dVar12 = dVar11;
    func_0x00010b816670();
    func_0x00010b816528(dVar8,dVar9 - dVar10,dVar11,dVar12);
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11277f508));
    uVar4 = (uint)*(undefined8 *)(param_5 + lVar6);
  }
  if ((uVar4 >> 1 & 1) != 0) {
    dVar8 = dVar13;
    _CGRectGetMinX(dVar13,dVar14,param_3,dVar15);
    dVar9 = dVar13;
    _CGRectGetMaxY(dVar13,dVar14,param_3,dVar15);
    _CGRectGetWidth(dVar13,dVar14,param_3,dVar15);
    dVar15 = dVar13;
    func_0x00010b816670();
    func_0x00010b816528(dVar8,dVar9,dVar13,dVar15);
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11277f50c));
  }
  return;
}



/* Entry: 108fe3d24; end: 108fe3de7; -[SCSearchCollectionViewCell hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe3d24(undefined1 *param_1)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_50;
  puStack_48 = PTR_PTR_1126ffbf8;
  puStack_50 = param_1;
  _objc_msgSendSuper2(&puStack_50,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 == (undefined1 **)puVar3) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11277f4ec);
    func_0x00010bfb68e0();
    _CGRectContainsPoint();
    if (iVar1 == 0) {
      puVar3 = (undefined1 *)0x0;
      goto LAB_108fe3dbc;
    }
  }
  _objc_retain(ppuVar2);
  puVar3 = (undefined1 *)ppuVar2;
LAB_108fe3dbc:
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108fe3de8; end: 108fe3df3; +[SCSearchCollectionViewCell reuseIdentifier] */

undefined ** FUN_108fe3de8(void)

{
  return &PTR____CFConstantStringClassReference_110f16858;
}



/* Entry: 108fe3df4; end: 108fe3e7b; -[SCSearchCollectionViewCell traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe3df4(long param_1)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ffbf8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bdc0fe0(*(undefined8 *)(param_1 + _DAT_11277f4f4));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f4f0);
  func_0x00010c22a660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar1);
  return;
}



/* Entry: 108fe3e7c; end: 108fe3fa3; -[SCSearchCollectionViewCell setBackgroundBorderWidth:borderColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe3e7c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  _objc_retain(param_4);
  lVar4 = param_2;
  func_0x00010bf14480(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010bf19980(puVar2,param_3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc1040();
  lVar4 = (long)_DAT_11277f4f0;
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c22a660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c22a660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd00(param_1);
  _objc_release(uVar3);
  _objc_retainAutorelease(param_4);
  func_0x00010bdc0fe0();
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c22a660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8e0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108fe3fa4; end: 108fe403b; -[SCSearchCollectionViewCell setBackgroundShapeViewShadowColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe3fa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277f510;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010bdc0fe0(*(undefined8 *)(param_1 + lVar3));
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277f4f0);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fe403c; end: 108fe4053; -[SCSearchCollectionViewCell setRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe403c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11277f514);
                    /* WARNING: Could not recover jumptable at 0x00010bea6e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*puVar1,puVar1[1],puVar1[2],puVar1[3],param_1,
             PTR_s__setRoundedCorners_roundedRect__112587540);
  return;
}



/* Entry: 108fe4054; end: 108fe4167; -[SCSearchCollectionViewCell _setRoundedCorners:roundedRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe4054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277f4f8;
  if (*(long *)(param_5 + lVar4) == param_7) {
    puVar1 = (undefined8 *)(param_5 + (long)_DAT_11277f514);
    uVar2 = param_5;
    _CGRectEqualToRect(param_1,param_2,param_3,param_4,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  uVar2 = param_5;
  func_0x00010c233340();
  if ((int)uVar2 == 0) {
    return;
  }
  puVar1 = (undefined8 *)(param_5 + (long)_DAT_11277f514);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  *(long *)(param_5 + lVar4) = param_7;
  uVar2 = param_5;
  func_0x00010bf14480(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar3 = *(undefined8 *)(param_5 + (long)_DAT_11277f4f0);
  func_0x00010c22a660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108fe4168; end: 108fe416b; -[SCSearchCollectionViewCell setShadow:] */

void FUN_108fe4168(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea7610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setShadow__112587728);
  return;
}



/* Entry: 108fe416c; end: 108fe41bb; -[SCSearchCollectionViewCell _setShadow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe416c(double param_1,long param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_2 + _DAT_11277f4f0);
  if (param_4 == 0) {
    _objc_retain();
    uVar1 = uVar4;
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0xc008000000000000);
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4008000000000000);
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0);
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    _objc_opt_class(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      uVar1 = uVar4;
      func_0x00010c08c0e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe820();
      _objc_release(uVar1);
    }
  }
  else {
    func_0x00010bf144c0();
    _objc_retain();
    uVar1 = uVar4;
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x3ff0000000000000);
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4000000000000000);
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800((float)param_1);
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    _objc_opt_class(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      uVar1 = uVar4;
      func_0x00010c08c0e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f5800();
      uVar3 = uVar4;
      func_0x00010c08c0e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe820();
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 108fe41bc; end: 108fe42bb; -[SCSearchCollectionViewCell setHighlighted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe41bc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ffbf8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setHighlighted__112647c38);
  lVar1 = param_1;
  func_0x00010c074da0();
  lVar2 = param_1;
  func_0x00010c1536c0();
  if ((int)lVar1 == 0) {
    if ((int)lVar2 == 0) {
      return;
    }
    func_0x00010bdc0fe0(*(undefined8 *)(param_1 + _DAT_11277f4f4));
    uVar3 = *(undefined8 *)(param_1 + _DAT_11277f4f0);
    func_0x00010c22a660(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
  }
  else {
    if ((int)lVar2 == 0) {
      return;
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_11277f4f4);
    FUN_108fe3390(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11277f4f0);
    func_0x00010c22a660(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  return;
}



/* Entry: 108fe42bc; end: 108fe4353; -[SCSearchCollectionViewCell setBackgroundShapeViewColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe42bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277f4f4;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010bdc0fe0(*(undefined8 *)(param_1 + lVar3));
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277f4f0);
    func_0x00010c22a660(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fe4354; end: 108fe43fb; -[SCSearchCollectionViewCell setSeparatorMask:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe4354(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277f500;
  if (*(ulong *)(param_1 + lVar1) != param_3) {
    *(ulong *)(param_1 + lVar1) = param_3;
    if ((param_3 & 1) != 0) {
      func_0x00010be3a920(param_1);
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277f508));
    if ((*(byte *)(param_1 + lVar1) >> 1 & 1) != 0) {
      func_0x00010be39620(param_1);
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277f50c));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  return;
}



/* Entry: 108fe43fc; end: 108fe4483; -[SCSearchCollectionViewCell setSeparatorColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe43fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277f4fc;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11277f508),param_2,
                        *(undefined8 *)(param_1 + lVar3));
    func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11277f50c),param_2,
                        *(undefined8 *)(param_1 + lVar3));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fe4484; end: 108fe44bb; -[SCSearchCollectionViewCell backgroundShapePath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe4484(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11277f514);
                    /* WARNING: Could not recover jumptable at 0x00010bf199f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*puVar1,puVar1[1],puVar1[2],puVar1[3],0x4020000000000000,0x4020000000000000,
             PTR__OBJC_CLASS___UIBezierPath_1126aec18,
             PTR_s_bezierPathWithRoundedRect_byRoun_1125a4020,
             *(undefined8 *)(param_1 + _DAT_11277f4f8));
  return;
}



/* Entry: 108fe44bc; end: 108fe44c7; -[SCSearchCollectionViewCell backgroundShapeViewShadowOpacity] */

undefined8 FUN_108fe44bc(void)

{
  return 0x3fc3333333333333;
}



/* Entry: 108fe44c8; end: 108fe44cf; -[SCSearchCollectionViewCell searchCollectionViewCellShouldChangeBackgroundColorOnHighlight] */

undefined8 FUN_108fe44c8(void)

{
  return 1;
}



/* Entry: 108fe44d0; end: 108fe44d7; -[SCSearchCollectionViewCell hasOverridedTapAction] */

undefined8 FUN_108fe44d0(void)

{
  return 0;
}



/* Entry: 108fe44d8; end: 108fe44db; -[SCSearchCollectionViewCell handleTapAction] */

void FUN_108fe44d8(void)

{
  return;
}



/* Entry: 108fe44dc; end: 108fe44e3; -[SCSearchCollectionViewCell hasOverridedLongPressAction] */

undefined8 FUN_108fe44dc(void)

{
  return 0;
}



/* Entry: 108fe44e4; end: 108fe44e7; -[SCSearchCollectionViewCell handleLongPressAction] */

void FUN_108fe44e4(void)

{
  return;
}



/* Entry: 108fe44e8; end: 108fe44ef; -[SCSearchCollectionViewCell hasOverridedDebugAction] */

undefined8 FUN_108fe44e8(void)

{
  return 0;
}



/* Entry: 108fe44f0; end: 108fe44f3; -[SCSearchCollectionViewCell handleDebugAction] */

void FUN_108fe44f0(void)

{
  return;
}



/* Entry: 108fe44f4; end: 108fe44fb; -[SCSearchCollectionViewCell shouldShowBackgroundView] */

undefined8 FUN_108fe44f4(void)

{
  return 1;
}



/* Entry: 108fe44fc; end: 108fe453b; -[SCSearchCollectionViewCell gestureRecognizer:shouldReceiveTouch:] */

uint FUN_108fe44fc(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  
  func_0x00010c29bf00(in_x3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = in_x3;
  func_0x00010c0722e0();
  _objc_release(in_x3);
  return (uint)uVar1 ^ 1;
}



/* Entry: 108fe453c; end: 108fe45cf; -[SCSearchCollectionViewCell _initTopSeparatorIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe453c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277f508;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3),param_2,
                      *(undefined8 *)(param_1 + _DAT_11277f4fc));
  func_0x00010bf31be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fe45d0; end: 108fe4663; -[SCSearchCollectionViewCell _initBottomSeparatorIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe45d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277f50c;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3),param_2,
                      *(undefined8 *)(param_1 + _DAT_11277f4fc));
  func_0x00010bf31be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fe4664; end: 108fe470b; -[SCSearchCollectionViewCell _didSingleTap:] */

void FUN_108fe4664(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010bdcb8c0();
  uVar1 = param_1;
  func_0x00010bfd9ea0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfd2cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_handleTapAction_1125d24d0);
    return;
  }
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1536a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108fe470c; end: 108fe47df; -[SCSearchCollectionViewCell _didLongPress:] */

void FUN_108fe470c(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  func_0x00010bdcb8c0(param_1);
  lVar1 = param_3;
  func_0x00010c252440();
  _objc_release(param_3);
  if (lVar1 == 1) {
    uVar2 = param_1;
    func_0x00010bfd9e80();
    if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfd1790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_handleLongPressAction_1125d1f88);
      return;
    }
    uVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c153680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 108fe47e0; end: 108fe4843; -[SCSearchCollectionViewCell _announceDidBeginInteraction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe47e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f4e0);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f16818,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fe4844; end: 108fe4853; -[SCSearchCollectionViewCell roundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe4844(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f4f8);
}



/* Entry: 108fe4854; end: 108fe4863; -[SCSearchCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe4854(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f518);
}



/* Entry: 108fe4864; end: 108fe48a3; -[SCSearchCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe4864(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f518;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fe48a4; end: 108fe48b3; -[SCSearchCollectionViewCell separatorMask] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe48a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f500);
}



/* Entry: 108fe48b4; end: 108fe48c3; -[SCSearchCollectionViewCell separatorColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe48b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f4fc);
}



/* Entry: 108fe48c4; end: 108fe48e3; -[SCSearchCollectionViewCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe48c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277f51c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fe48e4; end: 108fe48f7; -[SCSearchCollectionViewCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe48e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277f51c,param_3);
  return;
}



/* Entry: 108fe48f8; end: 108fe4907; -[SCSearchCollectionViewCell backgroundShapeViewColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe48f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f4f4);
}



/* Entry: 108fe4908; end: 108fe4917; -[SCSearchCollectionViewCell backgroundShapeViewShadowColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe4908(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f510);
}



/* Entry: 108fe4918; end: 108fe4927; -[SCSearchCollectionViewCell cardContentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe4918(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f4ec);
}



/* Entry: 108fe4928; end: 108fe4937; -[SCSearchCollectionViewCell bottomActionTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe4928(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f520);
}



/* Entry: 108fe4938; end: 108fe4943; -[SCSearchCollectionViewCell setBottomActionTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe4938(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108fe4944; end: 108fe495b; -[SCSearchCollectionViewCell cellEdgeInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe4944(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f504);
}



/* Entry: 108fe495c; end: 108fe4973; -[SCSearchCollectionViewCell setCellEdgeInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe495c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11277f504);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 108fe4974; end: 108fe4983; -[SCSearchCollectionViewCell eventAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe4974(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f4e0);
}



/* Entry: 108fe4984; end: 108fe4a6f; -[SCSearchCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe4984(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277f4e0,0);
  _objc_storeStrong(param_1 + _DAT_11277f520,0);
  _objc_storeStrong(param_1 + _DAT_11277f4ec,0);
  _objc_storeStrong(param_1 + _DAT_11277f510,0);
  _objc_storeStrong(param_1 + _DAT_11277f4f4,0);
  _objc_destroyWeak(param_1 + _DAT_11277f51c);
  _objc_storeStrong(param_1 + _DAT_11277f4fc,0);
  _objc_storeStrong(param_1 + _DAT_11277f518,0);
  _objc_storeStrong(param_1 + _DAT_11277f4e8,0);
  _objc_storeStrong(param_1 + _DAT_11277f4e4,0);
  _objc_storeStrong(param_1 + _DAT_11277f50c,0);
  _objc_storeStrong(param_1 + _DAT_11277f508,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f4f0,0);
  return;
}



/* Entry: 108fe4a70; end: 108fe4adf; -[SCSearchMountableCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe4a70(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ffc00;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11277f524));
  _objc_release(lVar1);
  return;
}



/* Entry: 108fe4ae0; end: 108fe4b8b; -[SCSearchMountableCollectionViewCell setMountableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe4ae0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277f524;
  lVar1 = *(long *)(param_1 + lVar3);
  if (lVar1 == param_3) {
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == param_1) goto LAB_108fe4b78;
    lVar1 = *(long *)(param_1 + lVar3);
  }
  func_0x00010c12c960(lVar1);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = param_3;
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  func_0x00010c1cbe20(param_1);
LAB_108fe4b78:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


