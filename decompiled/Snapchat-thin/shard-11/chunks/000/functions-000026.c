/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108067c2c; end: 108067c4f; -[SCPreviewLocationInfoSpeed copyWithZone:] */

undefined8 FUN_108067c2c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108067c50; end: 108067cb7; -[SCPreviewLocationInfoSpeed encodeWithCoder:] */

void FUN_108067c50(long param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92ee0((float)dVar1,param_3,param_2,&PTR____CFConstantStringClassReference_110ed2ab8)
  ;
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x10),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110ed2ad8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108067cb8; end: 108067d4b; -[SCPreviewLocationInfoSpeed hash] */

ulong * FUN_108067cb8(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar3 = &uStack_28;
  func_0x000100505190(puVar3,2);
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
          dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
          if (dVar7 <= 2.2250738585072014e-308) {
            dVar7 = 2.2250738585072014e-308;
          }
          puVar6 = (ulong *)(ulong)(ABS((double)puVar3[2] - (double)param_3[2]) < dVar7);
          goto LAB_108067e10;
        }
      }
      puVar6 = (ulong *)0x0;
    }
  }
LAB_108067e10:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108067d4c; end: 108067e2b; -[SCPreviewLocationInfoSpeed isEqual:] */

bool FUN_108067d4c(ulong param_1,undefined8 param_2,ulong param_3)

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
          dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16;
          if (dVar4 <= 2.2250738585072014e-308) {
            dVar4 = 2.2250738585072014e-308;
          }
          bVar1 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar4;
          goto LAB_108067e10;
        }
      }
      bVar1 = false;
    }
  }
LAB_108067e10:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108067e2c; end: 108067e33; -[SCPreviewLocationInfoSpeed mph] */

undefined8 FUN_108067e2c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108067e34; end: 108067e3b; -[SCPreviewLocationInfoSpeed kph] */

undefined8 FUN_108067e34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108067e3c; end: 108067eb3; -[SCPreviewLocationInfoAltitude initWithCoder:] */

undefined1 * FUN_108067e3c(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1126fc3c8;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf66e40(param_4);
    *(double *)((long)puVar1 + 8) = (double)param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108067eb4; end: 108067efb; -[SCPreviewLocationInfoAltitude initWithMeters:] */

void FUN_108067eb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc3c8;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
  }
  return;
}



/* Entry: 108067efc; end: 108067f1f; -[SCPreviewLocationInfoAltitude copyWithZone:] */

undefined8 FUN_108067efc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108067f20; end: 108067f3b; -[SCPreviewLocationInfoAltitude encodeWithCoder:] */

void FUN_108067f20(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf92ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((float)*(double *)(param_1 + 8),param_3,PTR_s_encodeFloat_forKey__1125c2560,
             &PTR____CFConstantStringClassReference_110ed2af8);
  return;
}



/* Entry: 108067f3c; end: 108067f63; -[SCPreviewLocationInfoAltitude hash] */

ulong FUN_108067f3c(long param_1)

{
  ulong uVar1;
  
  uVar1 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar1 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uVar1 = (uVar1 ^ uVar1 >> 0xb) * 0x41;
  return uVar1 ^ uVar1 >> 0x16;
}



/* Entry: 108067f64; end: 10806800f; -[SCPreviewLocationInfoAltitude isEqual:] */

bool FUN_108067f64(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if ((uVar2 & 1) == 0) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 108068010; end: 108068017; -[SCPreviewLocationInfoAltitude meters] */

undefined8 FUN_108068010(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108068018; end: 10806805f; +[SCPreviewLocationInfoUpdate didUpdateAltitude] */

void FUN_108068018(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c4118;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108068060; end: 1080680ab; +[SCPreviewLocationInfoUpdate didUpdateSpeed] */

void FUN_108068060(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c4118;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1080680ac; end: 1080680cf; -[SCPreviewLocationInfoUpdate copyWithZone:] */

undefined8 FUN_1080680ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1080680d0; end: 1080680d7; -[SCPreviewLocationInfoUpdate hash] */

undefined8 FUN_1080680d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1080680d8; end: 10806811b; -[SCPreviewLocationInfoUpdate internalInit] */

void FUN_1080680d8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fc3d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10806811c; end: 1080681a3; -[SCPreviewLocationInfoUpdate isEqual:] */

bool FUN_10806811c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1080681a4; end: 10806821b; -[SCPreviewLocationInfoUpdate matchDidUpdateAltitude:didUpdateSpeed:] */

void FUN_1080681a4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    lVar1 = param_4;
    if (param_4 == 0) goto LAB_1080681ec;
  }
  else {
    lVar1 = param_3;
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_1080681ec;
  }
  (**(code **)(lVar1 + 0x10))();
LAB_1080681ec:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10806821c; end: 1080682d7; +[SCSnapDocAudioUtil hasSoundWithEditor:] */

undefined8 FUN_10806821c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010bfdc720(param_1);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1080682d8; end: 108068533;  */

byte FUN_1080682d8(float param_1,long param_2,ulong param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  float fVar10;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf10200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c296d80();
  fVar10 = param_1;
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf0b760();
  if ((int)uVar4 == 5) {
    uVar4 = param_3;
    func_0x00010c0c3fe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c27dd80();
    bVar1 = (int)uVar5 == 1;
    _objc_release(uVar4);
  }
  else {
    bVar1 = false;
  }
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c0c3fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf0b760();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c08c3a0();
  if ((int)uVar3 == 4) {
    uVar3 = param_3;
    func_0x00010bf5cc00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf96ee0();
    bVar2 = (int)uVar7 == 7;
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  else {
    bVar2 = false;
  }
  uVar3 = param_3;
  func_0x00010c0c3fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf0b760();
  _objc_release(uVar3);
  lVar8 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) & 1 | bVar2;
  if (bVar2 != false) {
    uVar3 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bfd4540();
    if ((uVar6 & 1) == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar6 = param_3;
      func_0x00010c118b40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf10200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar3);
      if (fVar10 == 0.0) {
        bVar9 = 0;
        goto LAB_10806850c;
      }
    }
  }
  bVar9 = param_1 != 0.0 | bVar1 | (int)uVar4 == 2 | bVar2 | (int)uVar5 == 0xe;
LAB_10806850c:
  _objc_release(param_3);
  return bVar9;
}



/* Entry: 108068534; end: 10806874f; +[SCSnapDocAudioUtil hasSoundWithEditor:forLayersWhere:] */

ulong FUN_108068534(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  double dVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  uVar3 = param_3;
  func_0x00010c0ff5a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  _objc_retain(puVar4);
  puVar6 = puVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar6 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar4);
      }
      puVar7 = PTR_PTR_1126bcd68;
      func_0x00010bdd13e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 != (undefined *)0x0) {
        puVar8 = puVar7;
        func_0x00010c12f940(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010bf101a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a0dc0();
        dVar1 = (double)CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,CONCAT13(
                                                  uVar15,CONCAT12(uVar14,CONCAT11(uVar13,uVar12)))))
                                                ));
        _objc_release(puVar9);
        _objc_release(puVar8);
        if (dVar1 == 0.0) {
          func_0x00010befa120(puVar5);
        }
      }
      _objc_release(puVar7);
      puVar11 = puVar11 + 1;
    } while (puVar6 != puVar11);
    puVar6 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  func_0x00010c0ce860(puVar4);
  puVar6 = puVar4;
  func_0x00010bf529e0(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return (ulong)(puVar6 != (undefined *)0x0);
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c16bc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return param_3;
}



/* Entry: 108068750; end: 10806875b; +[SCSnapDocAudioUtil setVideoAudioEnabled:editor:] */

void FUN_108068750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16bc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setAudioEnabled_editor_forLayers_112638930,param_3,param_4,
             &PTR___NSConcreteGlobalBlock_110a19700);
  return;
}



/* Entry: 10806875c; end: 1080687eb;  */

bool FUN_10806875c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0b760();
  if ((int)uVar3 == 5) {
    uVar3 = param_2;
    func_0x00010c0c3fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c27dd80();
    bVar1 = (int)uVar4 == 1;
    _objc_release(uVar3);
  }
  else {
    bVar1 = false;
  }
  _objc_release(uVar2);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 1080687ec; end: 108068baf; +[SCSnapDocAudioUtil setAudioEnabled:editor:forLayersWhere:] */

void FUN_1080687ec(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [128];
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar10 = param_4;
  func_0x00010c0ff5a0(param_4,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar10;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  puStack_208 = puVar1;
  func_0x00010bf529e0();
  puVar2 = puStack_208;
  if (puVar1 != (undefined *)0x0) {
    uStack_218 = param_1;
    uStack_210 = param_5;
    if (param_3 == 0) {
      func_0x00010be8d0a0(PTR_PTR_1126bcd68,param_2,puStack_208,param_4);
      puVar1 = PTR_PTR_1126bcd70;
      _objc_opt_new(PTR_PTR_1126bcd70);
      puVar9 = puVar1;
      func_0x00010bf101a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2241a0(0);
      _objc_release(puVar9);
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      lStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      plStack_1f0 = (long *)0x0;
      _objc_retain(puVar2);
      func_0x00010bf52a60(puVar2,param_2,&uStack_200,auStack_180,0x10);
      if (puVar2 != (undefined *)0x0) {
        lVar8 = *plStack_1f0;
        do {
          puVar9 = (undefined *)0x0;
          do {
            if (*plStack_1f0 != lVar8) {
              _objc_enumerationMutation(puStack_208);
            }
            uVar10 = *(undefined8 *)(lStack_1f8 + (long)puVar9 * 8);
            puVar3 = PTR_PTR_1126bcd28;
            _objc_opt_new(PTR_PTR_1126bcd28);
            puVar4 = puVar1;
            func_0x00010bf51e00(puVar1);
            func_0x00010c1ea620(puVar3,param_2,puVar4);
            _objc_release(puVar4);
            puVar4 = PTR_PTR_1126bcd38;
            _objc_opt_new(PTR_PTR_1126bcd38);
            func_0x00010c2827c0(uVar10);
            func_0x00010c1dd680(puVar4,param_2,uVar10);
            puVar5 = puVar3;
            func_0x00010c066480(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120();
            _objc_release(puVar5);
            func_0x00010befae60(param_4,param_2,puVar3,2);
            _objc_release(puVar4);
            _objc_release(puVar3);
            puVar9 = puVar9 + 1;
          } while (puVar2 != puVar9);
          puVar2 = puStack_208;
          func_0x00010bf52a60(puStack_208,param_2,&uStack_200,auStack_180,0x10);
        } while (puVar2 != (undefined *)0x0);
      }
      _objc_release(puStack_208);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puStack_208;
      dVar11 = 0.0;
      lStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      plStack_1b0 = (long *)0x0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      _objc_retain(puStack_208);
      func_0x00010bf52a60(puVar2,param_2,&uStack_1c0,auStack_100,0x10);
      if (puVar2 != (undefined *)0x0) {
        lVar8 = *plStack_1b0;
        do {
          puVar9 = (undefined *)0x0;
          do {
            dVar12 = dVar11;
            if (*plStack_1b0 != lVar8) {
              _objc_enumerationMutation(puStack_208);
              dVar12 = dVar11;
            }
            uVar10 = *(undefined8 *)(lStack_1b8 + (long)puVar9 * 8);
            puVar3 = PTR_PTR_1126bcd68;
            func_0x00010bdd13e0(PTR_PTR_1126bcd68,param_2,uVar10,param_4);
            _objc_retainAutoreleasedReturnValue();
            dVar11 = dVar12;
            if (puVar3 != (undefined *)0x0) {
              puVar4 = puVar3;
              func_0x00010c12f940(puVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar4;
              func_0x00010bf101a0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2a0dc0();
              dVar11 = dVar12;
              _objc_release(puVar5);
              _objc_release(puVar4);
              if (dVar12 == 0.0) {
                func_0x00010befa120(puVar1,param_2,uVar10);
              }
            }
            _objc_release(puVar3);
            puVar9 = puVar9 + 1;
          } while (puVar2 != puVar9);
          puVar2 = puStack_208;
          func_0x00010bf52a60(puStack_208,param_2,&uStack_1c0,auStack_100,0x10);
        } while (puVar2 != (undefined *)0x0);
      }
      _objc_release(puStack_208);
      func_0x00010be8d0a0(PTR_PTR_1126bcd68,param_2,puVar1,param_4);
    }
    _objc_release(puVar1);
    param_5 = uStack_210;
    uVar6 = param_4;
    uVar7 = uStack_210;
    func_0x00010bfdc720(uStack_218,param_2,param_4,uStack_210);
  }
  _objc_release(puStack_208);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_108068bb0;
  uStack_240 = param_5;
  uStack_238 = param_4;
  puStack_230 = &stack0xfffffffffffffff0;
  _objc_retain(uVar6);
  puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_260 = 0xc2000000;
  pcStack_258 = FUN_108068c34;
  puStack_250 = &UNK_1108a70d8;
  uStack_248 = uVar6;
  _objc_retain(uVar6);
  func_0x00010c12dfe0(uVar7,param_2,&puStack_268);
  _objc_release(uStack_248);
  _objc_release(uVar6);
  return;
}



/* Entry: 108068bb0; end: 108068c33; +[SCSnapDocAudioUtil _removeRenderEffectsFromPlaybackLayerIds:withEditor:] */

void FUN_108068bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108068c34;
  puStack_30 = &UNK_1108a70d8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c12dfe0(param_4,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 108068c34; end: 108068d1b;  */

bool FUN_108068c34(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  
  _objc_retain(param_2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  iVar7 = (int)*(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010c066480(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ff5c0();
  func_0x00010c0df820(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  if (iVar7 == 0) {
    bVar1 = false;
  }
  else {
    uVar5 = param_2;
    func_0x00010c12f940(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf8cf20();
    bVar1 = (int)uVar6 == 1;
    _objc_release(uVar5);
  }
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 108068d1c; end: 108068e2b; +[SCSnapDocAudioUtil _hasCreativeToolFeature:inTag:] */

undefined1 * FUN_108068d1c(undefined8 param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long unaff_x21;
  long unaff_x22;
  long lVar5;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined1 *puStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010bfa2d60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = auStack_c8;
  lVar5 = param_4;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    unaff_x22 = *plStack_100;
    unaff_x21 = lVar5;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != unaff_x22) {
          _objc_enumerationMutation(param_4);
        }
        iVar1 = (int)*(undefined8 *)(lStack_108 + lVar5 * 8);
        func_0x00010bf5ae20();
        if (iVar1 == param_3) {
          puVar4 = (undefined1 *)0x1;
          goto LAB_108068dec;
        }
        lVar5 = lVar5 + 1;
      } while (unaff_x21 != lVar5);
      puVar2 = auStack_c8;
      unaff_x21 = param_4;
      puVar3 = &uStack_110;
      func_0x00010bf52a60();
    } while (unaff_x21 != 0);
  }
  puVar4 = (undefined1 *)0x0;
LAB_108068dec:
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar4;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_108068e2c;
  lStack_140 = unaff_x22;
  lStack_138 = unaff_x21;
  puStack_130 = puVar4;
  lStack_128 = param_4;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_108068ee0;
  puStack_150 = &UNK_1108a70d8;
  puStack_148 = (undefined1 *)puVar3;
  _objc_retain(puVar3);
  func_0x00010c12fa80(puVar2,param_2,&puStack_168);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puStack_148);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 108068e2c; end: 108068edf; +[SCSnapDocAudioUtil _audioRenderEffectNodeForPlaybackLayerId:editor:] */

void FUN_108068e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108068ee0;
  puStack_40 = &UNK_1108a70d8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c12fa80(param_4,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108068ee0; end: 108068fbf;  */

bool FUN_108068ee0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_2;
  func_0x00010c066480(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ff5c0();
  func_0x00010c0df820();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c071f40();
  if ((int)puVar5 == 0) {
    bVar1 = false;
  }
  else {
    uVar6 = param_2;
    func_0x00010c12f940(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf8cf20();
    bVar1 = (int)uVar7 == 1;
    _objc_release(uVar6);
  }
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 108068fc0; end: 10806911f;  */

void FUN_108068fc0(int param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b3068;
  _objc_opt_new(PTR_PTR_1126b3068);
  puVar2 = PTR_PTR_1126b25e8;
  _objc_opt_new(PTR_PTR_1126b25e8);
  if (param_1 == 0) {
    func_0x00010c1dd220(puVar1,param_2,puVar2);
  }
  else {
    func_0x00010c1ac2a0();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108069120; end: 1080691fb;  */

void FUN_108069120(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bcf30;
  _objc_retain();
  _objc_opt_new(puVar1);
  func_0x00010c26f320(param_2);
  _objc_release(param_2);
  func_0x00010c203d40(puVar1,param_3,(long)(param_1 * 1000.0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1080691fc; end: 10806926b;  */

void FUN_1080691fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_10806926c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10806926c; end: 1080693fb;  */

void FUN_10806926c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c23d0a0(puVar1);
    func_0x00010c14e120(puVar1);
    func_0x00010c23d0a0(puVar1);
    func_0x00010c14e120(puVar1);
    puVar4 = PTR_PTR_1126b25c8;
    _objc_opt_new(PTR_PTR_1126b25c8);
    func_0x00010c16a960();
    func_0x00010c21acc0(puVar4);
    uStack_68 = param_2[1];
    uStack_70 = *param_2;
    uStack_60 = param_2[2];
    _CMTimeGetSeconds(&uStack_70);
    func_0x00010c1c45e0(puVar4);
    puVar2 = puVar4;
    func_0x00010bf7ee20(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2256c0();
    _objc_release(puVar2);
    puVar2 = puVar4;
    func_0x00010bf7ee20(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7d00();
    _objc_release(puVar2);
    uVar3 = param_1;
    FUN_1080693fc();
    if ((int)uVar3 != 0) {
      puVar2 = PTR_PTR_1126d26e0;
      _objc_opt_new(PTR_PTR_1126d26e0);
      func_0x00010c17dd40();
      func_0x00010c1a9f00(puVar4);
      _objc_release(puVar2);
    }
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1080693fc; end: 108069487;  */

undefined4 FUN_1080693fc(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c105b00();
  if (lVar2 < 3) {
    uVar3 = 1;
    uVar4 = 2;
    if (lVar2 != 2) {
      uVar4 = 0;
    }
    bVar1 = lVar2 == 1;
  }
  else {
    if (lVar2 == 3) {
      lVar2 = param_1;
      func_0x00010c06c0c0();
      uVar3 = 5;
      if ((int)lVar2 == 0) {
        uVar3 = 3;
      }
      goto LAB_108069454;
    }
    uVar3 = 4;
    uVar4 = 6;
    if (lVar2 != 8) {
      uVar4 = 0;
    }
    bVar1 = lVar2 == 4;
  }
  if (!bVar1) {
    uVar3 = uVar4;
  }
LAB_108069454:
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 108069488; end: 1080694d7;  */

undefined4 FUN_108069488(long param_1)

{
  undefined4 uVar1;
  
  func_0x00010c299760();
  uVar1 = 2;
  if (param_1 != 2) {
    uVar1 = 0;
  }
  if (param_1 == 1) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1080694d8; end: 1080694df;  */

void FUN_1080694d8(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  double dStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double dStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68,0,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x00010bf8b160(&dStack_70,puVar2);
    puVar3 = puVar2;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar5 != (undefined *)0x0) {
      puVar5 = puVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == (undefined *)0x0) {
        dStack_88 = 0.0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        dStack_a0 = 0.0;
      }
      else {
        func_0x00010c26f620(&dStack_a0,puVar5);
      }
      uStack_68 = uStack_80;
      dStack_70 = dStack_88;
      uStack_60 = uStack_78;
      _objc_release(puVar5);
    }
    uStack_98 = uStack_68;
    dStack_a0 = dStack_70;
    uStack_90 = uStack_60;
    _CMTimeGetSeconds(&dStack_a0);
    puVar5 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c267460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf433c0();
    _objc_release(puVar4);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b25c8;
    _objc_opt_new(PTR_PTR_1126b25c8);
    func_0x00010c16a960();
    func_0x00010c21acc0(puVar5);
    func_0x00010c1c45e0(puVar5);
    func_0x00010c29b200(PTR_PTR_1126b0010);
    puVar4 = puVar5;
    func_0x00010bf7ee20(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2256c0();
    _objc_release(puVar4);
    puVar4 = puVar5;
    func_0x00010bf7ee20(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7d00();
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010c299760();
    iVar6 = 2;
    iVar1 = iVar6;
    if (puVar4 != (undefined *)0x2) {
      iVar1 = 0;
    }
    if (puVar4 == (undefined *)0x1) {
      iVar1 = 1;
    }
    if (iVar1 != 0) {
      puVar4 = PTR_PTR_1126d26f8;
      _objc_opt_new(PTR_PTR_1126d26f8);
      func_0x00010c17dd40();
      func_0x00010c221100(puVar5);
      _objc_release(puVar4);
    }
    puVar4 = puVar2;
    func_0x00010bf0eec0();
    if (puVar4 != (undefined *)0x2) {
      iVar6 = 0;
    }
    if (puVar4 == (undefined *)0x1) {
      iVar6 = 1;
    }
    if (iVar6 != 0) {
      puVar4 = PTR_PTR_1126d2700;
      _objc_opt_new(PTR_PTR_1126d2700);
      func_0x00010c17dd40();
      func_0x00010c16ba00(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1080694e0; end: 10806979f;  */

void FUN_1080694e0(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  double dStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double dStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x00010bf8b160(&dStack_70,puVar2);
    puVar3 = puVar2;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar5 != (undefined *)0x0) {
      puVar5 = puVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == (undefined *)0x0) {
        dStack_88 = 0.0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        dStack_a0 = 0.0;
      }
      else {
        func_0x00010c26f620(&dStack_a0,puVar5);
      }
      uStack_68 = uStack_80;
      dStack_70 = dStack_88;
      uStack_60 = uStack_78;
      _objc_release(puVar5);
    }
    uStack_98 = uStack_68;
    dStack_a0 = dStack_70;
    uStack_90 = uStack_60;
    _CMTimeGetSeconds(&dStack_a0);
    if ((param_2 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
      func_0x00010bf5e640();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010c267460();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf433c0();
      _objc_release(puVar4);
      _objc_release(puVar5);
    }
    puVar5 = PTR_PTR_1126b25c8;
    _objc_opt_new(PTR_PTR_1126b25c8);
    func_0x00010c16a960();
    func_0x00010c21acc0(puVar5);
    func_0x00010c1c45e0(puVar5);
    func_0x00010c29b200(PTR_PTR_1126b0010);
    puVar4 = puVar5;
    func_0x00010bf7ee20(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2256c0();
    _objc_release(puVar4);
    puVar4 = puVar5;
    func_0x00010bf7ee20(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7d00();
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010c299760();
    iVar6 = 2;
    iVar1 = iVar6;
    if (puVar4 != (undefined *)0x2) {
      iVar1 = 0;
    }
    if (puVar4 == (undefined *)0x1) {
      iVar1 = 1;
    }
    if (iVar1 != 0) {
      puVar4 = PTR_PTR_1126d26f8;
      _objc_opt_new(PTR_PTR_1126d26f8);
      func_0x00010c17dd40();
      func_0x00010c221100(puVar5);
      _objc_release(puVar4);
    }
    puVar4 = puVar2;
    func_0x00010bf0eec0();
    if (puVar4 != (undefined *)0x2) {
      iVar6 = 0;
    }
    if (puVar4 == (undefined *)0x1) {
      iVar6 = 1;
    }
    if (iVar6 != 0) {
      puVar4 = PTR_PTR_1126d2700;
      _objc_opt_new(PTR_PTR_1126d2700);
      func_0x00010c17dd40();
      func_0x00010c16ba00(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1080697a0; end: 10806982f;  */

void FUN_1080697a0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR_PTR_1126b2700;
  _objc_alloc(PTR_PTR_1126b2700);
  func_0x00010c055500(0x3fe0000000000000,0x3fe0000000000000,param_1,0);
  puVar2 = PTR_PTR_1126bb2a8;
  _objc_alloc(PTR_PTR_1126bb2a8);
  _CMTimeMake(auStack_48,0,1000);
  func_0x00010c052280(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108069830; end: 10806983b; -[SCFeatureSettingsService isHasSeenMemoryLinkPrivacyAlertAvailable] */

void FUN_108069830(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e61398);
  return;
}



/* Entry: 10806983c; end: 108069847; -[SCFeatureSettingsService hasSeenMemoryLinkPrivacyAlertServerParam] */

undefined ** FUN_10806983c(void)

{
  return &PTR____CFConstantStringClassReference_110e61398;
}



/* Entry: 108069848; end: 108069857; -[SCFeatureSettingsService setHasSeenMemoryLinkPrivacyAlert:] */

void FUN_108069848(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e61398,param_3);
  return;
}



/* Entry: 108069858; end: 10806985f; -[SCFeatureSettingsService SHARING_HAS_SEEN_MEDIA_LINK_PRIVACY_ALERT_client_value:] */

undefined * FUN_108069858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108069860; end: 108069867; -[SCFeatureSettingsService SHARING_HAS_SEEN_MEDIA_LINK_PRIVACY_ALERT_server_value:] */

void FUN_108069860(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108069868; end: 108069877; -[SCFeatureSettingsService hasSeenMemoryLinkPrivacyAlert] */

void FUN_108069868(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e61398,0);
  return;
}



/* Entry: 108069878; end: 108069c73; -[SCPreviewSendMediaHandler initWithConfiguration:infoStickerFeature:sendingFeature:commonLoggingParamsBuilder:previewLoggingServices:snapCrop:captionFeature:logging:stickerContainer:webAttachment:filterMetadataProvider:venueFilterController:userTagging:creativeToolsABProvider:uploadMediaQualityController:delegate:checkInOptionFetcher:snapCaptureLocation:placeTagsTracker:] */

undefined8 *
FUN_108069878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126fc3d8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    func_0x00010c07e8c0(puVar1[1]);
    _objc_storeWeak(puVar1 + 5,param_4);
    _objc_storeWeak(puVar1 + 6,param_5);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[9];
    puVar1[9] = param_8;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 10,param_9);
    _objc_storeWeak(puVar1 + 0xb,param_10);
    _objc_storeWeak(puVar1 + 0xc,param_11);
    _objc_storeWeak(puVar1 + 0xd,param_12);
    _objc_storeWeak(puVar1 + 0xe,param_13);
    _objc_storeWeak(puVar1 + 0xf,param_14);
    _objc_retain(param_16);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_16;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x11,param_17);
    _objc_storeWeak(puVar1 + 3,param_18);
    _objc_storeWeak(puVar1 + 0x10,param_15);
    _objc_storeWeak(puVar1 + 0x13,param_21);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_11);
    _objc_retain(param_14);
    _objc_retain(param_19);
    _objc_retain(param_20);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_20);
    _objc_release(param_19);
    _objc_release(param_14);
    _objc_release(param_11);
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108069c74; end: 108069ca7;  */

void FUN_108069c74(void)

{
  _objc_alloc(PTR_PTR_1126d90a0);
  func_0x00010c04c7c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108069ca8; end: 108069d1b; -[SCPreviewSendMediaHandler sharedChatMediasToUpload] */

void FUN_108069ca8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_20 = *(long *)(param_1 + 0x10);
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_20,1);
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    func_0x00010c15e020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf98360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108069d1c; end: 108069d5f; -[SCPreviewSendMediaHandler ephemeralMediaList] */

void FUN_108069d1c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15e020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf98360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108069d60; end: 108069e53; -[SCPreviewSendMediaHandler processSendingMedia:selectedItemsFromSendTo:audioEnabled:hasAnimatedOrExternalAudioContent:isInfiniteDuration:] */

void FUN_108069d60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c064a40();
  _objc_release(lVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c233020();
  if (iVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x000108423b0c(uVar3);
    func_0x00010c2a9ee0(*(undefined8 *)(param_1 + 0x38),param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c131e40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c070d40();
    func_0x00010c109360(param_1,param_2,param_3,param_4,uVar3,uVar5);
    _objc_release(uVar4);
  }
  else {
    func_0x00010c1090c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108069e54; end: 10806af0b; -[SCPreviewSendMediaHandler finalizeSendingMedia:businessIds:recipientUserIds:groups:quickPostOurStorySelected:circumstanceEngine:isCrossPosting:isEligibleForCrossPostingSpotlightToStories:massSnapRecipientIds:crossPostToStoryInfo:] */

void FUN_108069e54(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5,undefined *param_6,uint param_7,undefined *param_8,
                  undefined4 param_9,undefined4 param_10,long param_11,long param_12)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  uint uVar16;
  undefined *puVar17;
  undefined *puStack_158;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar2 = param_1 + 0x18;
  _objc_loadWeakRetained(puVar2);
  func_0x00010c15e100();
  _objc_release(puVar2);
  puVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(puVar2);
  func_0x00010c15e100();
  _objc_release(puVar2);
  puVar2 = param_6;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_5;
  FUN_10846bbd0(param_5,puVar2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_11;
  func_0x00010bf529e0();
  puVar5 = puVar13;
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126c4288;
    func_0x00010b68eef4();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      puVar4[0x11] = 1;
      _objc_retain(puVar4);
    }
    _objc_release(puVar4);
    puVar5 = puVar4;
    func_0x00010b68f1bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(puVar4);
  }
  puStack_138 = (undefined *)(ulong)(byte)param_9;
  puVar13 = param_3;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar13;
  func_0x00010c0ee300();
  _objc_retainAutoreleasedReturnValue();
  puStack_158 = puVar4;
  func_0x00010bf4b900();
  puStack_158 = (undefined *)((ulong)puStack_158 & 0xffffffff);
  _objc_release(puVar4);
  _objc_release(puVar13);
  puVar13 = param_1;
  func_0x00010c081760();
  if ((int)puVar13 == 0) {
    puVar15 = (undefined *)(ulong)param_9._1_1_;
    uVar16 = (uint)param_9._1_1_;
    uVar1 = (uint)*(undefined8 *)(param_1 + 8);
    func_0x000108423b0c();
    puStack_140 = (undefined *)(ulong)uVar1;
    puStack_148 = param_6;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_5;
    FUN_10846bbd0(param_5,puStack_148,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae780;
    _objc_alloc_init(PTR_PTR_1126ae780);
    func_0x00010c242400(*(undefined8 *)(param_1 + 8));
    FUN_1085915d4();
    func_0x00010c2056c0(puVar4);
    lVar3 = param_11;
    func_0x00010bf529e0();
    puVar6 = puVar13;
    if (lVar3 != 0) {
      puVar12 = PTR_PTR_1126c4288;
      func_0x00010b68eef4();
      _objc_retainAutoreleasedReturnValue();
      if (puVar12 != (undefined *)0x0) {
        puVar12[0x11] = 1;
        _objc_retain(puVar12);
      }
      _objc_release(puVar12);
      puVar6 = puVar12;
      func_0x00010b68f1bc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      _objc_release(puVar12);
    }
    puVar13 = param_8;
    if (param_9._1_1_ == 0) goto LAB_10806a1d8;
    puVar12 = PTR_PTR_1126c4288;
    func_0x00010b68ef14(PTR_PTR_1126c4288,puVar6);
    _objc_retainAutoreleasedReturnValue();
    if (puVar12 == (undefined *)0x0) goto LAB_10806aefc;
    puVar12[0x18] = 1;
    _objc_retain(puVar12);
    _objc_release(puVar12);
    puVar12[0x12] = 1;
    _objc_retain(puVar12);
    puVar9 = puVar6;
    uVar16 = (uint)param_9._1_1_;
    goto LAB_10806a1a8;
  }
  puVar13 = param_1 + 0x30;
  _objc_loadWeakRetained(puVar13);
  func_0x00010c1093a0();
  _objc_release(puVar13);
  puVar15 = param_1 + 0x18;
  _objc_loadWeakRetained(puVar15);
  puVar6 = param_1;
  func_0x00010be17c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar6;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c109ac0(puVar15);
LAB_10806a544:
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar15);
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c105440(param_3);
  func_0x00010c2bcf60(uVar14);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c105460(param_3);
  func_0x00010c2bd0a0(uVar14);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bd140(*(undefined8 *)(param_1 + 0x38));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar13 = param_1 + 0x98;
  _objc_loadWeakRetained();
  puVar4 = puVar13;
  func_0x00010c2683a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar13);
  if (puVar4 != (undefined *)0x0) {
    puVar13 = param_1 + 0x98;
    _objc_loadWeakRetained(puVar13);
    puVar4 = puVar13;
    func_0x00010c2683a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c0fd0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar13);
    puVar13 = param_1;
    func_0x00010c15e020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2208c0();
    _objc_release(puVar13);
    _objc_release(puVar6);
  }
  puVar13 = param_1;
  func_0x00010be17c60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar13;
  func_0x00010c297e20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c08fa60();
  _objc_release(puVar4);
  _objc_release(puVar13);
  if (puVar6 != (undefined *)0x0) {
    func_0x00010be546a0(param_1);
  }
  puVar13 = param_6;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  if (((ulong)puStack_138 & 1) == 0) {
    func_0x00010bf529e0(param_5);
    FUN_108605534(param_6);
    func_0x00010c2b68e0(uVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x38);
    puVar4 = puVar13;
    func_0x00010bf446e0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b4060(uVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    uVar14 = *(undefined8 *)(param_1 + 0x38);
    puVar4 = param_5;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) {
      func_0x00010bf529e0(param_6);
    }
    func_0x00010c2b9300(uVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x38);
    FUN_10846b590(param_3);
    func_0x00010c2b92a0(uVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010846b638(param_3);
    func_0x00010c2bd080(uVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x38);
    FUN_10846b6bc(param_3);
    func_0x00010c2bd040(uVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010beffdc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedb060(param_1);
    _objc_release(puVar4);
  }
  else {
    FUN_10846b590(param_3);
    func_0x00010c2b92a0(uVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar7 = *(long *)(param_1 + 8);
  func_0x00010bf680c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c11b1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar7);
  if (lVar3 != 0) {
    puVar4 = param_1;
    func_0x00010c15e020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf680c0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar8;
    func_0x00010c11b1e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5b60(puVar4);
    _objc_release(uVar14);
    _objc_release(uVar8);
    _objc_release(puVar4);
  }
  puVar4 = param_1 + 0x80;
  _objc_loadWeakRetained();
  _objc_release();
  puVar6 = PTR_PTR_1126c4538;
  if (puVar4 != (undefined *)0x0) {
    puVar4 = param_1 + 0x60;
    _objc_loadWeakRetained(puVar4);
    puVar15 = puVar4;
    func_0x00010c255460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c293d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(puVar4);
    puVar4 = param_1 + 0x80;
    _objc_loadWeakRetained();
    puVar15 = param_1 + 0x50;
    _objc_loadWeakRetained(puVar15);
    puVar12 = puVar15;
    func_0x00010bfbb3e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010c293d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar15);
    _objc_release(puVar4);
    puStack_138 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar4 = puVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puStack_140 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar4 = puVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar15 = puVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    puVar15 = param_3;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = puVar15;
    func_0x00010c24b0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    if ((int)puStack_158 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar12 = puStack_148;
      func_0x00010bf529e0();
      puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      if (puVar12 == (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
      }
      else {
        func_0x00010bf529e0(puStack_138);
        func_0x00010bf529e0(puStack_148);
        func_0x00010bf0a0e0(puVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puStack_138;
        func_0x00010bf529e0();
        if (puVar12 != (undefined *)0x0) {
          puVar12 = (undefined *)0x0;
          do {
            puVar17 = PTR_PTR_1126d2a60;
            _objc_opt_new(PTR_PTR_1126d2a60);
            func_0x00010befa120(puVar15);
            _objc_release(puVar17);
            puVar12 = puVar12 + 1;
            puVar17 = puStack_138;
            func_0x00010bf529e0();
          } while (puVar12 < puVar17);
        }
        _objc_retain(puStack_148);
        puVar12 = puStack_148;
        func_0x00010bf52a60();
        lVar3 = lRam0000000000000000;
        while (puVar12 != (undefined *)0x0) {
          puVar17 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar3) {
              _objc_enumerationMutation(puStack_148);
            }
            uVar8 = *(undefined8 *)((long)puVar17 * 8);
            uVar14 = uVar8;
            func_0x00010c2923e0(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puStack_138);
            _objc_release(uVar14);
            uVar14 = uVar8;
            func_0x00010c294420(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puStack_140);
            _objc_release(uVar14);
            func_0x00010befa120(puVar4);
            puVar10 = PTR_PTR_1126d2a60;
            _objc_opt_new(PTR_PTR_1126d2a60);
            uVar14 = uVar8;
            func_0x00010c11f2a0(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c24d960();
            func_0x00010c209380(puVar10);
            _objc_release(uVar14);
            func_0x00010c11f2a0(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf94880();
            func_0x00010c195f00(puVar10);
            _objc_release(uVar8);
            func_0x00010befa120(puVar15);
            _objc_release(puVar10);
            puVar17 = puVar17 + 1;
          } while (puVar12 != puVar17);
          puVar12 = puStack_148;
          func_0x00010bf52a60();
        }
        _objc_release(puStack_148);
        puStack_158 = param_3;
      }
    }
    puVar12 = param_1;
    func_0x00010c15e020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c6a40();
    _objc_release(puVar12);
    _objc_release(puStack_148);
    _objc_release(puVar15);
    _objc_release(puVar4);
    _objc_release(puStack_140);
    _objc_release(puStack_138);
    _objc_release(puVar9);
    _objc_release(puVar6);
  }
  puVar6 = param_1;
  func_0x00010c15e020(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1 + 0x28;
  _objc_loadWeakRetained(puVar4);
  puVar12 = puVar4;
  func_0x00010c275ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = param_3;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar15;
  func_0x00010c2759e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217920(puVar6);
  _objc_release(puVar9);
  _objc_release(puVar15);
  _objc_release(puVar12);
  _objc_release(puVar4);
  _objc_release(puVar6);
  puVar4 = param_3;
  func_0x00010c105440();
  if (((param_7 & 1) != 0) || ((int)puVar4 != 0)) {
    puVar4 = param_1;
    func_0x00010c15e020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar8;
    func_0x00010c11fc80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e75c0(puVar4);
    _objc_release(uVar14);
    _objc_release(uVar8);
    _objc_release(puVar4);
  }
  puVar4 = param_1;
  func_0x00010c15e020(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = param_3;
  func_0x00010c22dd20();
  func_0x00010c08e2c0(*(undefined8 *)(param_1 + 0x90));
  func_0x00010c21e320(puVar4);
  _objc_release(puVar4);
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c22dd20(param_3);
  func_0x00010c2b6ba0(uVar14);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = param_5;
  puVar4 = param_6;
LAB_10806aefc:
  _objc_release();
  puVar9 = puVar6;
  uVar16 = (uint)puVar15;
LAB_10806a1a8:
  _objc_release(puVar12);
  puVar6 = puVar12;
  func_0x00010b68f1bc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar12);
LAB_10806a1d8:
  if ((uint)puStack_140 == 0) {
    uVar16 = 0;
LAB_10806a238:
    puVar13 = (undefined *)0x0;
  }
  else {
    func_0x00010bf529e0(param_4);
    puVar15 = param_1;
    func_0x00010beb5680();
    uVar16 = uVar16 | (uint)puVar15;
    if (puVar6 == (undefined *)0x0) goto LAB_10806a238;
    if (puVar6[9] == '\x01') {
      func_0x000108f49514();
    }
    else {
      puVar13 = (undefined *)0x0;
    }
  }
  puVar12 = param_1;
  func_0x00010c0d7420();
  func_0x00010c1cbea0(param_1);
  puVar15 = puStack_148;
  if ((((param_12 == 0) && ((uVar16 & 1) == 0)) && (((ulong)puVar13 & 1) == 0)) &&
     (((ulong)puVar12 & 1) == 0)) goto code_r0x00010806a274;
  goto LAB_10806a2fc;
code_r0x00010806a274:
  puVar13 = param_1 + 0x88;
  _objc_loadWeakRetained();
  puVar12 = puVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_1;
  func_0x00010be17c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar9;
  func_0x00010c29a0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29b640();
  puVar10 = puVar12;
  func_0x00010bf914a0();
  _objc_release(puVar17);
  _objc_release(puVar9);
  _objc_release(puVar12);
  _objc_release(puVar13);
  if ((int)puVar10 != 0) {
LAB_10806a2fc:
    if (((ulong)puStack_138 & 1) == 0) {
      puVar13 = param_1;
      func_0x00010c15e020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2f2e0();
      _objc_release(puVar13);
    }
    puVar13 = param_1 + 0x30;
    _objc_loadWeakRetained(puVar13);
    func_0x00010bf3c0a0();
    _objc_release(puVar13);
    puVar13 = param_1 + 0x30;
    _objc_loadWeakRetained(puVar13);
    func_0x00010c064a40();
    _objc_release(puVar13);
    if (param_12 != 0) {
      puVar13 = param_1;
      func_0x00010be17c60(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c186320();
      _objc_release(puVar13);
    }
    puVar13 = param_1 + 0x30;
    _objc_loadWeakRetained(puVar13);
    func_0x00010c1093a0();
    _objc_release(puVar13);
    puVar13 = PTR_PTR_1126c4288;
    func_0x00010b68eef4();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_3;
    func_0x00010c105440();
    if ((int)puVar12 != 0) {
      if (puVar13 != (undefined *)0x0) {
        puVar13[0x16] = 1;
        _objc_retain(puVar13);
      }
      _objc_release(puVar13);
    }
    if ((int)puStack_158 != 0) {
      if (puVar13 != (undefined *)0x0) {
        puVar13[0x12] = 1;
        _objc_retain(puVar13);
      }
      _objc_release(puVar13);
    }
    puVar12 = param_3;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar12;
    func_0x00010c0ee300();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar9;
    func_0x00010bf4b900();
    _objc_release(puVar9);
    _objc_release(puVar12);
    if ((int)puVar17 != 0) {
      if (puVar13 != (undefined *)0x0) {
        puVar13[0x13] = 1;
        _objc_retain(puVar13);
      }
      _objc_release(puVar13);
    }
    puVar12 = param_1;
    func_0x00010c15e020(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar13;
    func_0x00010b68f1bc(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219700(puVar12);
    _objc_release(puVar9);
    _objc_release(puVar12);
    if (((uVar16 | (uint)puStack_140 ^ 0xffffffff) & 1) == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar9 = param_1;
      func_0x00010be17c60(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar9;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
    }
    puVar9 = param_1 + 0x18;
    _objc_loadWeakRetained(puVar9);
    func_0x00010c109ac0();
    _objc_release(puVar9);
    _objc_release(puVar12);
    _objc_release(puVar13);
  }
  goto LAB_10806a544;
}



/* Entry: 10806af0c; end: 10806af23;  */

void FUN_10806af0c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfceb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_groupId_1125d1470);
  return;
}



/* Entry: 10806af24; end: 10806b043; -[SCPreviewSendMediaHandler _updateLoggingParamsForMobStories:] */

void FUN_10806af24(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar4 = auStack_d8;
  uVar5 = 0x10;
  uVar7 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,puVar4,0x10);
  if (uVar7 == 0) {
    iVar3 = 0;
  }
  else {
    lVar6 = 0;
    lVar8 = *plStack_110;
    do {
      uVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar1 = *(ulong *)(lStack_118 + uVar9 * 8);
        func_0x00010c075620();
        lVar6 = lVar6 + (uVar1 & 0xffffffff);
        iVar3 = (int)lVar6;
        uVar9 = uVar9 + 1;
      } while (uVar7 != uVar9);
      puVar4 = auStack_d8;
      uVar5 = 0x10;
      uVar7 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,puVar4,0x10);
    } while (uVar7 != 0);
  }
  func_0x00010c2ad820(*(undefined8 *)(param_1 + 0x38));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(puVar4);
    func_0x00010be1be20(param_3,param_2,uVar5,param_6,param_7);
    if (iVar3 == 0) {
      lVar6 = param_3 + 0x30;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c1093a0();
      _objc_release(lVar6);
      lVar6 = param_3 + 0x18;
      _objc_loadWeakRetained(lVar6);
      uVar7 = param_3;
      func_0x00010be17c60(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_3 + 0x10);
      puVar2 = puVar4;
      FUN_10806bce8(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c109ae0(lVar6,param_2,uVar9,uVar5,puVar2,param_6);
      _objc_release(puVar2);
      _objc_release(uVar9);
      _objc_release(uVar7);
      _objc_release(lVar6);
      uVar7 = param_3 + 0x30;
      _objc_loadWeakRetained(uVar7);
      func_0x00010c103c60();
    }
    else {
      uVar7 = param_3;
      func_0x00010c15e020();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c078120();
      _objc_release(uVar7);
      if ((uVar9 & 1) == 0) {
        uVar9 = param_3;
        func_0x00010be17c60(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar9;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
      }
      else {
        uVar7 = 0;
      }
      uVar9 = param_3;
      func_0x00010c081760();
      if ((int)uVar9 == 0) {
        lVar6 = param_3 + 0x30;
        _objc_loadWeakRetained(lVar6);
        func_0x00010c1093a0();
        _objc_release(lVar6);
        lVar6 = param_3 + 0x18;
        _objc_loadWeakRetained(lVar6);
        uVar5 = *(undefined8 *)(param_3 + 0x10);
        puVar2 = puVar4;
        FUN_10806bce8(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c109ae0(lVar6,param_2,uVar7,uVar5,puVar2,param_6);
        _objc_release(puVar2);
        _objc_release(lVar6);
        lVar6 = param_3 + 0x30;
        _objc_loadWeakRetained(lVar6);
        func_0x00010c103c60();
      }
      else {
        lVar6 = param_3 + 0x18;
        _objc_loadWeakRetained(lVar6);
        func_0x00010c256e40();
        _objc_release(lVar6);
        lVar6 = param_3 + 0x18;
        _objc_loadWeakRetained(lVar6);
        func_0x00010c256100();
      }
      _objc_release(lVar6);
    }
    _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 10806b044; end: 10806b27b; -[SCPreviewSendMediaHandler prepareChatMedia:selectedItemsFromSendTo:audioEnabled:hasAnimatedOrExternalAudioContent:isInfiniteDuration:] */

void FUN_10806b044(ulong param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  func_0x00010be1be20(param_1,param_2,param_5,param_6,param_7);
  if (param_3 == 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1093a0();
    _objc_release(lVar1);
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    uVar4 = param_1;
    func_0x00010be17c60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = param_4;
    FUN_10806bce8(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c109ae0(lVar1,param_2,uVar2,uVar5,uVar3,param_6);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(lVar1);
    uVar4 = param_1 + 0x30;
    _objc_loadWeakRetained(uVar4);
    func_0x00010c103c60();
  }
  else {
    uVar4 = param_1;
    func_0x00010c15e020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c078120();
    _objc_release(uVar4);
    if ((uVar2 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010be17c60(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
    else {
      uVar4 = 0;
    }
    uVar2 = param_1;
    func_0x00010c081760();
    if ((int)uVar2 == 0) {
      lVar1 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c1093a0();
      _objc_release(lVar1);
      lVar1 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar1);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar3 = param_4;
      FUN_10806bce8(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c109ae0(lVar1,param_2,uVar4,uVar5,uVar3,param_6);
      _objc_release(uVar3);
      _objc_release(lVar1);
      lVar1 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c103c60();
    }
    else {
      lVar1 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c256e40();
      _objc_release(lVar1);
      lVar1 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c256100();
    }
    _objc_release(lVar1);
  }
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10806b27c; end: 10806b4e3; -[SCPreviewSendMediaHandler prepareEphemeralMedia:selectedItemsFromSendTo:isMultiMedia:isDoubleTap:] */

void FUN_10806b27c(long param_1,undefined8 param_2,ulong param_3,long param_4,ulong param_5,
                  int param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x25;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c254980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182d40();
  _objc_release(uVar1);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c1093a0();
  _objc_release(lVar2);
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar2);
  if ((param_5 & 1) == 0) {
    unaff_x25 = param_1;
    func_0x00010be17c60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = unaff_x25;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar7 = 0;
  }
  lVar3 = param_4;
  FUN_10806bce8(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c109ac0(lVar2);
  _objc_release(lVar3);
  if ((param_5 & 1) == 0) {
    _objc_release(lVar7);
    _objc_release(unaff_x25);
  }
  _objc_release(lVar2);
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c256e40();
  _objc_release(lVar2);
  puVar4 = *(undefined **)(param_1 + 8);
  func_0x00010c243400();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfbb020(uVar1);
  func_0x000108edf718(puVar4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  if (param_6 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  puVar4 = puVar5;
  if ((param_3 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  func_0x00010c15e020();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb3e0(param_1);
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  param_4 = param_4 + 0x30;
  _objc_loadWeakRetained();
  lVar6 = param_4;
  func_0x00010bf98360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar7 = lVar6;
  func_0x00010010fab4(lVar6,PTR_DAT_1126a5ac8);
  lVar2 = lVar6;
  if ((int)lVar7 == 0) {
    lVar2 = 0;
  }
  _objc_retain(lVar2);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10806b4e4; end: 10806b54b; -[SCPreviewSendMediaHandler sendingEphemeralMediaList] */

void FUN_10806b4e4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010bf98360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar3 = lVar2;
  func_0x00010010fab4(lVar2,PTR_DAT_1126a5ac8);
  lVar1 = lVar2;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10806b54c; end: 10806b5f7; -[SCPreviewSendMediaHandler isTranscodingMemoryIntensive] */

bool FUN_10806b54c(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07f160();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    bVar1 = false;
  }
  else {
    param_1 = param_1 + 0x70;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf08000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(param_1);
    lVar4 = lVar5;
    func_0x00010bf529e0(lVar5);
    bVar1 = lVar4 != 0;
    _objc_release(lVar5);
  }
  return bVar1;
}



/* Entry: 10806b5f8; end: 10806b87f; -[SCPreviewSendMediaHandler _generateSharedMessageMediaToUpload:hasAnimatedOrExternalAudioContent:isInfiniteDuration:] */

void FUN_10806b5f8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c075080();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (((param_4 & 1) == 0) && (iVar1 != 0)) {
    if (lVar2 == 0) {
      puVar4 = PTR_PTR_1126cfd18;
      _objc_alloc();
      puVar5 = puVar4;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01ad60(puVar4,param_2,puVar5);
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar4;
      _objc_release(uVar9);
      _objc_release(puVar5);
      func_0x00010c1c4920(*(undefined8 *)(param_1 + 0x10),param_2,param_5);
    }
    else {
      puVar4 = PTR_PTR_1126d2a10;
      _objc_alloc();
      puVar5 = puVar4;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c2440e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar3;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar9;
      func_0x00010b5fa088();
      func_0x00010b5f9ff0();
      func_0x00010c01adc0(puVar4,param_2,puVar5,uVar8);
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar4;
      _objc_release(uVar8);
      _objc_release(uVar9);
      _objc_release(uVar3);
      _objc_release(puVar5);
      func_0x00010bde5ac0(param_1,param_2,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else {
    if (lVar2 == 0) {
      puVar4 = PTR_PTR_1126d2a00;
      _objc_alloc();
      puVar5 = puVar4;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01ad60(puVar4,param_2,puVar5);
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar4;
      _objc_release(uVar9);
      _objc_release(puVar5);
      func_0x00010c1c4920(*(undefined8 *)(param_1 + 0x10),param_2,param_5);
    }
    else {
      puVar4 = PTR_PTR_1126d2a08;
      _objc_alloc();
      puVar5 = puVar4;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c2440e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar3;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar9;
      func_0x00010b5fa088();
      func_0x00010b5f9ff0();
      func_0x00010c01adc0(puVar4,param_2,puVar5,uVar8);
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar4;
      _objc_release(uVar8);
      _objc_release(uVar9);
      _objc_release(uVar3);
      _objc_release(puVar5);
      func_0x00010bde5ac0(param_1,param_2,*(undefined8 *)(param_1 + 0x10));
    }
    func_0x00010c1a6de0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  }
  lVar2 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar2);
  lVar6 = lVar2;
  func_0x00010bf0d6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf51e00();
  func_0x00010c2039e0(*(undefined8 *)(param_1 + 0x10),param_2,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10806b880; end: 10806b90b; -[SCPreviewSendMediaHandler _firstEphemeralMedia] */

void FUN_10806b880(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c15e020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf98360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010010fab4();
  uVar1 = uVar3;
  if ((int)uVar4 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10806b90c; end: 10806ba1b; -[SCPreviewSendMediaHandler _configureSpectaclesMedia:] */

void FUN_10806b90c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf5e580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf5e580();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfe6060();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010c072080(uVar4,param_2,uVar6);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      func_0x00010c1ee860(param_3,param_2,(uint)uVar7 ^ 1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10806ba1c; end: 10806bb3f; -[SCPreviewSendMediaHandler _logGrapheneVenueIdAttributionWithStoriesPostingConfig:circumstanceEngine:] */

void FUN_10806ba1c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c15a3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x70;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf07e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (lVar2 == 0) {
    if (lVar4 == 0) {
      lVar1 = param_1 + 0x28;
      _objc_loadWeakRetained();
      lVar3 = lVar1;
      func_0x00010c298020();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (lVar3 == 0) {
        param_1 = param_1 + 0x98;
        _objc_loadWeakRetained();
        lVar1 = param_1;
        func_0x00010c2683a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(param_1);
        if (lVar1 == 0) goto LAB_10806bb20;
        uVar5 = 4;
      }
      else {
        uVar5 = 2;
      }
    }
    else {
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 0;
  }
  func_0x00010c0a7aa0(PTR_PTR_1126d88d8,param_2,uVar5);
LAB_10806bb20:
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10806bb40; end: 10806bc0b; -[SCPreviewSendMediaHandler _shouldRetranscodeForMultisnapAnnihilation:storiesPostingConfig:businessStoryCount:circumstanceEngine:] */

undefined8
FUN_10806bb40(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if ((((param_3 == 0) || (*(char *)(param_3 + 10) != '\x01')) ||
      ((*(byte *)(param_3 + 0xb) & 1) != 0)) ||
     (((*(byte *)(param_3 + 0xe) & 1) != 0 || (*(char *)(param_3 + 0xf) == '\x01')))) {
    uVar1 = param_4;
    func_0x00010846b900(param_4,param_5);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_6;
      func_0x00010bf1f440(param_6);
    }
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10806bc0c; end: 10806bc13; -[SCPreviewSendMediaHandler needsRetranscodeForMusicChange] */

undefined1 FUN_10806bc0c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa0);
}



/* Entry: 10806bc14; end: 10806bc1b; -[SCPreviewSendMediaHandler setNeedsRetranscodeForMusicChange:] */

void FUN_10806bc14(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa0) = param_3;
  return;
}



/* Entry: 10806bc1c; end: 10806bce7; -[SCPreviewSendMediaHandler .cxx_destruct] */

void FUN_10806bc1c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x98);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10806bce8; end: 10806c2bb;  */

undefined1 * FUN_10806bce8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  undefined **unaff_x23;
  undefined **unaff_x24;
  long lVar14;
  long lStack_240;
  undefined *puStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  byte bStack_1f0;
  byte bStack_1ef;
  undefined4 uStack_1ee;
  undefined1 uStack_1ea;
  ulong uStack_1e8;
  uint uStack_1dc;
  ulong uStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  ulong uStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  undefined **ppuStack_190;
  ulong uStack_188;
  undefined **ppuStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined4 uStack_144;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puStack_138 = puVar13;
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    uStack_198 = 0;
    uStack_178 = 0;
    puVar13 = (undefined *)0x0;
    uStack_168 = 0;
    uStack_144 = 0;
  }
  else {
    uStack_198 = 0;
    uStack_178 = 0;
    puVar13 = (undefined *)0x0;
    uStack_168 = 0;
    uStack_144 = 0;
    lVar14 = *plStack_120;
    unaff_x24 = &PTR____CFConstantStringClassReference_110f52c78;
    unaff_x23 = &PTR____CFConstantStringClassReference_110f52c98;
    ppuStack_158 = &PTR____CFConstantStringClassReference_110f52cf8;
    ppuStack_150 = &PTR____CFConstantStringClassReference_110f52d18;
    ppuStack_160 = &PTR____CFConstantStringClassReference_110f52d38;
    ppuStack_170 = &PTR____CFConstantStringClassReference_110f52d58;
    ppuStack_190 = &PTR____CFConstantStringClassReference_110f52ed8;
    ppuStack_180 = &PTR____CFConstantStringClassReference_110f52d78;
    ppuStack_1a8 = &PTR____CFConstantStringClassReference_110f52db8;
    ppuStack_1a0 = &PTR____CFConstantStringClassReference_110f52d98;
    ppuStack_1c0 = &PTR____CFConstantStringClassReference_110f52dd8;
    ppuStack_1b8 = &PTR____CFConstantStringClassReference_110f52f38;
    ppuStack_1c8 = &PTR____CFConstantStringClassReference_110f52df8;
    ppuStack_140 = &PTR____CFConstantStringClassReference_110f52cd8;
    ppuStack_1d0 = &PTR____CFConstantStringClassReference_110f52cb8;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(param_1);
        }
        uVar3 = *(ulong *)(lStack_128 + lVar12 * 8);
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar3;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        uVar3 = uVar9;
        func_0x00010c15ab60();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        uVar3 = uVar9;
        if ((int)uVar10 == 0) {
          uVar10 = uVar9;
          func_0x00010c15ab60();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar10;
          func_0x00010c0720c0();
          _objc_release(uVar10);
          if ((int)uVar11 != 0) {
            if (puVar13 == (undefined *)0x0) {
              puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x00010bf09f00();
              _objc_retainAutoreleasedReturnValue();
            }
            func_0x00010c122b80();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar3;
            func_0x00010c08fa60();
            puVar1 = puVar13;
            goto joined_r0x00010806bed0;
          }
          func_0x00010c15ab60();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar3;
          func_0x00010c0720c0();
          _objc_release(uVar3);
          if ((uVar10 & 1) == 0) {
            uVar3 = uVar9;
            func_0x00010c15ab60();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar3;
            func_0x00010c0720c0();
            _objc_release(uVar3);
            if ((uVar10 & 1) != 0) goto LAB_10806bf70;
            uVar3 = uVar9;
            func_0x00010c15ab60();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar3;
            func_0x00010c0720c0();
            _objc_release(uVar3);
            if ((uVar10 & 1) != 0) goto LAB_10806bf70;
            uVar3 = uVar9;
            func_0x00010c15ab60();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar3;
            func_0x00010c0720c0();
            _objc_release(uVar3);
            if ((uVar10 & 1) == 0) {
              uVar3 = uVar9;
              func_0x00010c15ab60();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar3;
              func_0x00010c0720c0();
              _objc_release(uVar3);
              if ((uVar10 & 1) == 0) {
                uVar3 = uVar9;
                func_0x00010c15ab60();
                _objc_retainAutoreleasedReturnValue();
                uVar10 = uVar3;
                func_0x00010c0720c0();
                if ((int)uVar10 == 0) {
                  uVar10 = uVar9;
                  func_0x00010c15ab60();
                  _objc_retainAutoreleasedReturnValue();
                  uStack_188 = uVar10;
                  func_0x00010c0720c0();
                  if ((int)uVar10 != 0) {
LAB_10806c0c8:
                    _objc_release(uStack_188);
                    goto LAB_10806c0d0;
                  }
                  uVar10 = uVar9;
                  func_0x00010c15ab60();
                  _objc_retainAutoreleasedReturnValue();
                  uVar11 = uVar10;
                  func_0x00010c0720c0();
                  if ((int)uVar11 != 0) {
LAB_10806c0c4:
                    _objc_release(uVar10);
                    goto LAB_10806c0c8;
                  }
                  uVar11 = uVar9;
                  uStack_1b0 = uVar10;
                  func_0x00010c15ab60();
                  _objc_retainAutoreleasedReturnValue();
                  uVar10 = uVar11;
                  func_0x00010c0720c0();
                  if ((uVar10 & 1) != 0) {
LAB_10806c0b8:
                    _objc_release(uVar11);
                    uVar10 = uStack_1b0;
                    goto LAB_10806c0c4;
                  }
                  uVar10 = uVar9;
                  func_0x00010c15ab60();
                  _objc_retainAutoreleasedReturnValue();
                  uStack_1d8 = uVar10;
                  func_0x00010c0720c0();
                  if ((uVar10 & 1) != 0) {
                    _objc_release(uStack_1d8);
                    goto LAB_10806c0b8;
                  }
                  uVar10 = uVar9;
                  func_0x00010c15ab60();
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = uVar10;
                  uStack_1e8 = uVar11;
                  func_0x00010c0720c0();
                  uStack_1dc = (uint)uVar4;
                  _objc_release(uVar10);
                  _objc_release(uStack_1d8);
                  _objc_release(uStack_1e8);
                  _objc_release(uStack_1b0);
                  _objc_release(uStack_188);
                  _objc_release(uVar3);
                  if ((uStack_1dc & 1) == 0) {
                    uVar3 = uVar9;
                    func_0x00010c15ab60();
                    _objc_retainAutoreleasedReturnValue();
                    uVar10 = uVar3;
                    func_0x00010c0720c0();
                    _objc_release(uVar3);
                    if ((uVar10 & 1) == 0) {
                      uVar3 = uVar9;
                      func_0x00010c15ab60();
                      _objc_retainAutoreleasedReturnValue();
                      uVar10 = uVar3;
                      func_0x00010c0720c0();
                      _objc_release(uVar3);
                      uStack_198 = CONCAT44((uint)uVar10 | uStack_198._4_4_,(uint)uStack_198);
                    }
                    else {
                      uStack_198 = CONCAT44(uStack_198._4_4_,1);
                    }
                    goto LAB_10806bf78;
                  }
                }
                else {
LAB_10806c0d0:
                  _objc_release(uVar3);
                }
                uStack_178 = CONCAT44(uStack_178._4_4_,1);
              }
              else {
                uStack_178 = CONCAT44(1,(undefined4)uStack_178);
                uStack_168 = CONCAT44(1,(uint)uStack_168);
              }
            }
            else {
              uStack_168 = 0x100000001;
            }
          }
          else {
LAB_10806bf70:
            uStack_144 = 1;
          }
        }
        else {
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar3;
          func_0x00010c08fa60();
          puVar1 = puStack_138;
joined_r0x00010806bed0:
          if (uVar10 != 0) {
            func_0x00010befa120(puVar1);
          }
          _objc_release(uVar3);
        }
LAB_10806bf78:
        _objc_release(uVar9);
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  puVar5 = PTR_PTR_1126c4910;
  _objc_alloc();
  puVar1 = puStack_138;
  puVar6 = puStack_138;
  func_0x00010bf529e0(puStack_138);
  uVar3 = (ulong)(puVar6 != (undefined *)0x0);
  uStack_1ea = 0;
  uStack_1ee = 0;
  bStack_1ef = (byte)uStack_178 & 1;
  bStack_1f0 = (byte)uStack_144 & 1;
  uVar9 = (ulong)(uStack_198._4_4_ & 1);
  uVar10 = (ulong)((uint)uStack_198 & 1);
  uVar11 = (ulong)(uStack_168._4_4_ & 1);
  func_0x00010b68e9f8(puVar5,puVar13,uVar3,uVar9,uVar10,uVar11,uStack_178._4_4_ & 1,
                      (uint)uStack_168 & 1);
  _objc_release(puVar13);
  _objc_release(puVar1);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  plVar7 = &lStack_240;
  puStack_210 = puVar1;
  pcStack_1f8 = FUN_10806c2bc;
  ppuStack_230 = unaff_x24;
  ppuStack_228 = unaff_x23;
  puStack_220 = puVar5;
  puStack_218 = puVar13;
  lStack_208 = param_1;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_retain(uVar3);
  _objc_retain(uVar9);
  _objc_retain(uVar10);
  _objc_retain(uVar11);
  puStack_238 = PTR_PTR_1126fc3e0;
  lStack_240 = lVar2;
  _objc_msgSendSuper2(&lStack_240,PTR_s_init_1125d9248);
  if (plVar7 != (long *)0x0) {
    _objc_storeWeak((undefined1 *)((long)plVar7 + 8),uVar3);
    _objc_storeWeak((undefined1 *)((long)plVar7 + 0x10),uVar9);
    _objc_retain(uVar10);
    uVar8 = *(undefined8 *)((long)plVar7 + 0x18);
    *(ulong *)((long)plVar7 + 0x18) = uVar10;
    _objc_release(uVar8);
    _objc_retain(uVar11);
    uVar8 = *(undefined8 *)((long)plVar7 + 0x20);
    *(ulong *)((long)plVar7 + 0x20) = uVar11;
    _objc_release(uVar8);
  }
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar3);
  return (undefined1 *)plVar7;
}



/* Entry: 10806c2bc; end: 10806c3a7; -[SCPreviewStoriesPostCheckIn initWithStickerContainer:venueFilterController:checkInOptionFetcher:snapCaptureLocation:] */

undefined1 *
FUN_10806c2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fc3e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10806c3a8; end: 10806c6bb; -[SCPreviewStoriesPostCheckIn rankingSignalBase64String] */

void FUN_10806c3a8(long param_1,undefined *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c255320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_retain(lVar2);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar7 = 0;
  if (lVar3 != 0) {
    do {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        uVar4 = *(ulong *)(lVar13 * 8);
        func_0x00010bf4dce0();
        _objc_retainAutoreleasedReturnValue();
        param_2 = PTR_PTR_1126bb2f0;
        _objc_opt_class(PTR_PTR_1126bb2f0);
        uVar5 = uVar4;
        _objc_opt_isKindOfClass(uVar4,param_2);
        uVar7 = uVar4;
        if ((uVar5 & 1) == 0) {
          uVar7 = 0;
        }
        _objc_retain(uVar7);
        _objc_release(uVar4);
        if (uVar7 != 0) {
          uVar5 = uVar4;
          func_0x00010c297b40();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010bf51e00();
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          goto LAB_10806c514;
        }
        lVar13 = lVar13 + 1;
      } while (lVar3 != lVar13);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    uVar7 = 0;
  }
LAB_10806c514:
  _objc_release(lVar2);
  uVar5 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar4 = uVar5;
  func_0x00010c15a3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar7;
  if (uVar4 != 0) {
    uVar5 = uVar4;
    func_0x00010bf51e00();
    _objc_release(uVar7);
  }
  uVar7 = uVar5;
  func_0x00010c08fa60();
  if (uVar7 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126befb0;
    func_0x00010c08f400();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 0;
    _dispatch_semaphore_create();
    _objc_retain(uVar5);
    _objc_retain(uVar9);
    _objc_retain(puVar8);
    func_0x00010be0fd00(param_1);
    param_2 = (undefined *)0x0;
    _dispatch_time(0,500000000);
    _dispatch_semaphore_wait(uVar9,param_2);
    puVar10 = puVar8;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar5);
    _objc_release(puVar8);
    _objc_release(uVar9);
    _objc_release(puVar8);
  }
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    puVar12 = param_2;
    func_0x00010c0d3c80(param_2);
    func_0x00010c16d7a0(*(undefined8 *)(uVar5 + 0x20));
    _objc_release(puVar12);
    func_0x00010be38c80(*(undefined8 *)(uVar5 + 0x28));
    _objc_release(param_2);
    func_0x00010c17c4a0(*(undefined8 *)(uVar5 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(uVar5 + 0x38));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10806c6bc; end: 10806c733;  */

void FUN_10806c6bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0d3c80(param_2);
  func_0x00010c16d7a0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar1);
  func_0x00010be38c80(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_2);
  func_0x00010c17c4a0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 10806c734; end: 10806c81b; -[SCPreviewStoriesPostCheckIn _fetchAvailableOptionsWithCompletion:] */

void FUN_10806c734(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10806c81c;
    puStack_40 = &UNK_110a19860;
    _objc_retain(param_3);
    ppuVar1 = &puStack_58;
    lStack_38 = param_3;
    _objc_retainBlock(ppuVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0x11;
    func_0x0001000819a8(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa59c0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(ppuVar1);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10806c81c; end: 10806c85f;  */

void FUN_10806c81c(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110a197d0);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10806c860; end: 10806c983;  */

void FUN_10806c860(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10806c984;
  uStack_40 = 0x10806c994;
  uStack_38 = 0;
  uVar1 = param_2;
  func_0x00010c27dda0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010c0c1400(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10806c984; end: 10806c99b;  */

void FUN_10806c984(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10806c99c; end: 10806ca1b;  */

void FUN_10806c99c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d90a8;
  _objc_alloc_init();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5e20(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1d5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),
             PTR_s_setOptionType__1126531d8,1);
  return;
}



/* Entry: 10806ca1c; end: 10806ca23;  */

void FUN_10806ca1c(void)

{
  return;
}



/* Entry: 10806ca24; end: 10806cae7; -[SCPreviewStoriesPostCheckIn _indexOfOptionId:options:] */

ulong FUN_10806ca24(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar4 = param_4;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    uVar4 = 0;
    do {
      uVar1 = param_4;
      func_0x00010c0dfd40(param_4,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0ec440();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) goto LAB_10806cac0;
      uVar4 = uVar4 + 1;
      uVar1 = param_4;
      func_0x00010bf529e0();
    } while (uVar4 < uVar1);
  }
  uVar4 = 0xffffffffffffffff;
LAB_10806cac0:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10806cae8; end: 10806cb27; -[SCPreviewStoriesPostCheckIn .cxx_destruct] */

void FUN_10806cae8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10806cb28; end: 10806cb9b; -[SCPreviewFeatureWebAttachmentServices initWithWebAttachment:] */

undefined1 * FUN_10806cb28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc3e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10806cb9c; end: 10806cba3; -[SCPreviewFeatureWebAttachmentServices webAttachment] */

undefined8 FUN_10806cb9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10806cba4; end: 10806cbaf; -[SCPreviewFeatureWebAttachmentServices .cxx_destruct] */

void FUN_10806cba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10806cbb0; end: 10806d027; +[SCDiscoverAPI fetchCatalogForEditionId:videoId:videoCatalogEndpoint:networkConnectivityAnnouncer:successBlock:failureBlock:] */

void FUN_10806cbb0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_6);
  func_0x00010c27d7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc4580();
  _objc_release(param_6);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  _objc_release();
  if ((param_4 != 0) || (param_3 != 0)) {
    puVar1 = puVar2;
    func_0x00010c1d0640();
  }
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126d42d0);
  puVar3 = puVar1;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = puVar3;
  func_0x00010bfc1d60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c135d00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bfda7c0();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)uVar6 == 0) {
    puVar1 = puVar2;
    func_0x00010bf51e00(puVar2);
    puVar10 = PTR_PTR_1126bbf20;
    func_0x00010bdc1920(PTR_PTR_1126bbf20);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR___dispatch_main_q_11034be20;
    func_0x00010c25f1c0(puVar5);
  }
  else {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar10 = PTR_PTR_1126b4960;
    puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010bf51e00(puVar2);
    puVar9 = PTR_PTR_1126bbf20;
    func_0x00010bdc1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf58740(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_retain(param_7);
    _objc_retain(param_8);
    puVar7 = PTR___dispatch_main_q_11034be20;
    func_0x00010c25f660(puVar5);
    _objc_release(puVar7);
    _objc_release(param_8);
    puVar7 = param_7;
  }
  _objc_release(puVar7);
  _objc_release(puVar10);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c293750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userSession_1126827f8);
  return;
}



/* Entry: 10806d028; end: 10806d067;  */

void FUN_10806d028(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c293750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userSession_1126827f8);
  return;
}



/* Entry: 10806d068; end: 10806d08f; +[SCDiscoverAPI tweakEndpoint:] */

void FUN_10806d068(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10806d090; end: 10806d2ab; -[SCDiscoverMediaBlob initWithPublisherName:publisherDisplayName:publisherUniqueName:publisherId:businessProfileId:filledIconURL:editionId:dSnapId:adSnapId:viewport:] */

undefined1 *
FUN_10806d090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_88 = PTR_PTR_1126fc3f0;
  uStack_90 = param_5;
  _objc_msgSendSuper2(&uStack_90,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xb8);
    *(undefined8 *)((long)puVar1 + 0xb8) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_15;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0xe8) = param_1;
    *(undefined8 *)((long)puVar1 + 0xf0) = param_2;
    *(undefined8 *)((long)puVar1 + 0xf8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x100) = param_4;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xc0);
    *(undefined **)((long)puVar1 + 0xc0) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10806d2ac; end: 10806db3f; -[SCDiscoverMediaBlob dataToUpload] */

void FUN_10806d2ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110dad058;
  func_0x00010c27dd80();
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110db9458;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110ed2c78;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110ed2cd8;
  puStack_d0 = puVar1;
  func_0x00010c099800(param_3);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110dbf278;
  puStack_c0 = puVar2;
  func_0x00010c29f4e0(param_3);
  _CGRectGetMinX();
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110dbf2b8;
  puStack_b8 = puVar3;
  func_0x00010c29f4e0(param_3);
  _CGRectGetMinY();
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110db1238;
  puStack_b0 = puVar4;
  func_0x00010c29f4e0(param_3);
  _CGRectGetWidth();
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110db1258;
  puStack_a8 = puVar5;
  func_0x00010c29f4e0(param_3);
  _CGRectGetHeight();
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf508;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110dd8fd8;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110ed2cf8;
  puStack_a0 = puVar6;
  func_0x00010c29b1e0(param_3);
  func_0x00010c0df720(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110ed2d18;
  puStack_90 = puVar7;
  func_0x00010c29b1e0(param_3);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110e2a618;
  puStack_88 = puVar8;
  func_0x00010bf2fba0(param_3);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110e29718;
  puStack_80 = puVar9;
  func_0x00010bf89ea0(param_3);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar10;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c0d3c80();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar14 = param_3;
  func_0x00010c11b3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar14 != 0) {
    lVar14 = param_3;
    func_0x00010c11b3a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar12);
    _objc_release(lVar14);
  }
  lVar14 = param_3;
  func_0x00010c11b0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar14 != 0) {
    lVar14 = param_3;
    func_0x00010c11b0a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar12);
    _objc_release(lVar14);
  }
  lVar14 = param_3;
  func_0x00010bf8c980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar14 != 0) {
    lVar14 = param_3;
    func_0x00010bf8c980(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar12);
    _objc_release(lVar14);
  }
  lVar14 = param_3;
  func_0x00010bf631c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar14 != 0) {
    lVar14 = param_3;
    func_0x00010bf631c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar12);
    _objc_release(lVar14);
  }
  lVar14 = param_3;
  func_0x00010c11b6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar14 != 0) {
    lVar14 = param_3;
    func_0x00010c11b6e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar12);
    _objc_release(lVar14);
  }
  lVar14 = param_3;
  func_0x00010bef5380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar14 != 0) {
    lVar14 = param_3;
    func_0x00010bef5380(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar12);
    _objc_release(lVar14);
  }
  lVar14 = param_3;
  func_0x00010bfadfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar14 != 0) {
    lVar14 = param_3;
    func_0x00010bfadfa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar12);
    _objc_release(lVar14);
  }
  lVar14 = param_3;
  func_0x00010bfae8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar14 != 0) {
    lVar14 = param_3;
    func_0x00010bfae8c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar12);
    _objc_release(lVar14);
  }
  lVar14 = param_3;
  func_0x00010c0ef700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar14 != 0) {
    func_0x00010c1d0640(puVar12);
  }
  lVar14 = param_3;
  func_0x00010c26da00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar14 != 0) {
    func_0x00010c1d0640(puVar12);
  }
  lVar14 = param_3;
  func_0x00010c12a580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar14 != 0) {
    lVar14 = param_3;
    func_0x00010c12a580(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar12);
    _objc_release(lVar14);
  }
  lVar14 = param_3;
  func_0x00010befd340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar14 != 0) {
    lVar14 = param_3;
    func_0x00010befd340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar12);
    _objc_release(lVar14);
  }
  lVar14 = param_3;
  func_0x00010c11b1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar14 != 0) {
    lVar14 = param_3;
    func_0x00010c11b1e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar12);
    _objc_release(lVar14);
  }
  lVar14 = param_3;
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar14 != 0) {
    lVar14 = param_3;
    func_0x00010bf25140(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar12);
    _objc_release(lVar14);
  }
  lVar14 = param_3;
  func_0x00010bfad760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar14 != 0) {
    lVar14 = param_3;
    func_0x00010bfad760(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar12);
    _objc_release(lVar14);
  }
  lVar14 = param_3;
  func_0x00010bf1ad20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar14 != 0) {
    lVar14 = param_3;
    func_0x00010bf1ad20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar12);
    _objc_release(lVar14);
  }
  puStack_158 = &uStack_160;
  uStack_160 = 0;
  uStack_150 = 0x3032000000;
  pcStack_148 = FUN_10806db40;
  uStack_140 = 0x10806db50;
  uStack_138 = 0;
  uVar13 = 0;
  _dispatch_semaphore_create();
  _objc_retain();
  func_0x00010bf09580(param_3);
  _dispatch_semaphore_wait(uVar13,0xffffffffffffffff);
  uVar15 = puStack_158[5];
  _objc_retain(uVar15);
  _objc_release(uVar13);
  _objc_release(uVar13);
  __Block_object_dispose(&uStack_160,8);
  _objc_release(uStack_138);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar15);
    return;
  }
  ___stack_chk_fail();
  lVar14 = 8;
  __Block_object_dispose(&uStack_160);
  __Unwind_Resume();
  *(undefined8 *)(puVar12 + 0x28) = *(undefined8 *)(lVar14 + 0x28);
  *(undefined8 *)(lVar14 + 0x28) = 0;
  return;
}



/* Entry: 10806db40; end: 10806db57;  */

void FUN_10806db40(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10806db58; end: 10806dbb3;  */

void FUN_10806db58(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10806dbb4; end: 10806dcd7; -[SCDiscoverMediaBlob archiveBlobWithMetadata:completion:] */

void FUN_10806dbb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  lStack_48 = 0;
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_48;
  _objc_retain(lStack_48);
  if (lVar1 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  uVar3 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10806dcd8;
  puStack_68 = &UNK_11084a9e8;
  puStack_60 = puVar2;
  uStack_58 = param_1;
  lStack_50 = param_4;
  _objc_retain(param_4);
  _objc_retain(puVar2);
  func_0x00010007380c(uVar3,&puStack_80);
  _objc_release(uVar3);
  _objc_release(lStack_50);
  _objc_release(puStack_60);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 10806dcd8; end: 10806e147;  */

void FUN_10806dcd8(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  puVar2 = PTR_PTR_1126b9fa8;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ed2d58;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ed2d58);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar10);
  func_0x00010bf09600();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b9fa8;
  puVar3 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110ed2d78;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ed2d78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf09600();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0d3c80();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_release(lVar11);
  lVar8 = *(long *)(param_1 + 0x28);
  func_0x00010c0ef700();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar8;
  _objc_release();
  puVar2 = PTR_PTR_1126b9fa8;
  if (lVar8 != 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110ed2d98;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ed2d98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09600(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar7);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
    _objc_release(lVar11);
  }
  lVar8 = *(long *)(param_1 + 0x28);
  func_0x00010c26da00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar8;
  _objc_release();
  puVar2 = PTR_PTR_1126b9fa8;
  if (lVar8 != 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110ed2db8;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ed2db8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09600(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar7);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
    _objc_release(lVar11);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf63640(PTR__OBJC_CLASS___NSMutableData_1126b4958);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b9fb0;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008480();
  _objc_retain(0);
  _objc_release(puVar3);
  puVar3 = puVar5;
  func_0x00010c2858e0();
  lVar11 = 0;
  _objc_retain(0);
  _objc_release(0);
  lVar8 = *(long *)(param_1 + 0x30);
  if ((int)puVar3 == 0) {
    (**(code **)(lVar8 + 0x10))(lVar8,0);
  }
  else {
    puVar3 = puVar2;
    func_0x00010bf51e00(puVar2);
    (**(code **)(lVar8 + 0x10))(lVar8,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar7);
  _objc_release(uVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  uVar10 = *(undefined8 *)(lVar11 + 0x20);
  _objc_retain(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
  return;
}



/* Entry: 10806e148; end: 10806e16f;  */

void FUN_10806e148(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10806e170; end: 10806e187;  */

void FUN_10806e170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c4830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_mediaData_11260ec20);
  return;
}



/* Entry: 10806e188; end: 10806e25b; -[SCDiscoverMediaBlob unarchiveBlobFromData:completion:] */

void FUN_10806e188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10806e25c;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_3;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10806e25c; end: 10806e797;  */

void FUN_10806e25c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined1 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b9fb0;
  _objc_alloc();
  lStack_198 = 0;
  func_0x00010c008480();
  lVar8 = lStack_198;
  _objc_retain(lStack_198);
  if (puVar1 == (undefined *)0x0) {
    puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b8 = 0xc2000000;
    pcStack_1b0 = FUN_10806e798;
    puStack_1a8 = &UNK_110849530;
    puVar9 = *(undefined **)(param_1 + 0x30);
    _objc_retain(puVar9);
    puStack_1a0 = puVar9;
    func_0x000100162d98("APPSTORE",&puStack_1c0);
    puVar9 = puStack_1a0;
  }
  else {
    puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf96fc0();
    _objc_retainAutoreleasedReturnValue();
    lStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    _objc_retain();
    puVar3 = puVar2;
    func_0x00010bf52a60();
    if (puVar3 == (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = (undefined *)0x0;
      lVar16 = *plStack_1f0;
      do {
        puVar15 = (undefined *)0x0;
        do {
          if (*plStack_1f0 != lVar16) {
            _objc_enumerationMutation(puVar2);
          }
          lVar11 = *(long *)(lStack_1f8 + (long)puVar15 * 8);
          lVar13 = lVar11;
          func_0x00010bfacec0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar13;
          func_0x00010bfda7c0();
          _objc_release(lVar13);
          if ((int)lVar4 == 0) {
            uStack_228 = 0;
            uStack_230 = 0;
            uStack_218 = 0;
            uStack_220 = 0;
            uStack_248 = 0;
            uStack_250 = 0;
            uStack_238 = 0;
            plStack_240 = (long *)0x0;
            ppuStack_190 = &PTR____CFConstantStringClassReference_110db9458;
            ppuStack_188 = &PTR____CFConstantStringClassReference_110de71b8;
            ppuStack_180 = &PTR____CFConstantStringClassReference_110dea8b8;
            puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010bf52a60();
            if (puVar6 != (undefined *)0x0) {
              lVar13 = *plStack_240;
              do {
                puVar14 = (undefined *)0x0;
                do {
                  if (*plStack_240 != lVar13) {
                    _objc_enumerationMutation(puVar5);
                  }
                  lVar4 = lVar11;
                  func_0x00010bfacec0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar7 = lVar4;
                  func_0x00010bfda7c0();
                  _objc_release(lVar4);
                  if ((int)lVar7 != 0) {
                    uStack_258 = 0;
                    lVar4 = lVar11;
                    func_0x00010c0d8860();
                    uVar10 = uStack_258;
                    _objc_retain(uStack_258);
                    if (lVar4 != 0) {
                      func_0x00010c1d0640(puVar9);
                    }
                    _objc_release(lVar4);
                    _objc_release(uVar10);
                  }
                  puVar14 = puVar14 + 1;
                } while (puVar6 != puVar14);
                puVar6 = puVar5;
                func_0x00010bf52a60();
              } while (puVar6 != (undefined *)0x0);
            }
          }
          else {
            puStack_208 = (undefined *)0x0;
            func_0x00010c0d8860();
            puVar5 = puStack_208;
            _objc_retain(puStack_208);
            if (lVar11 != 0) {
              func_0x00010c1d0640(puVar9);
              uStack_210 = 0;
              puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
              func_0x00010bdc1900();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uStack_210;
              _objc_retain(uStack_210);
              _objc_release(puVar12);
              _objc_release(uVar10);
              puVar12 = puVar6;
            }
            _objc_release(lVar11);
          }
          _objc_release(puVar5);
          puVar5 = puVar9;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar5 != (undefined *)0x0) {
            puVar6 = puVar9;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar6 == (undefined *)0x0) {
              _objc_release(puVar5);
            }
            else {
              puVar14 = puVar9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(puVar6);
              _objc_release(puVar5);
              if ((puVar14 != (undefined *)0x0) && (puVar12 != (undefined *)0x0))
              goto LAB_10806e67c;
            }
          }
          puVar15 = puVar15 + 1;
        } while (puVar15 != puVar3);
        puVar3 = puVar2;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined *)0x0);
    }
LAB_10806e67c:
    _objc_release(puVar2);
    puVar3 = puVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_290 = 0xc2000000;
    uStack_288 = 0x10806e7b0;
    puStack_280 = &UNK_110864938;
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar10);
    puStack_278 = puVar9;
    puStack_270 = puVar12;
    uStack_268 = uVar10;
    uStack_260 = puVar3 != (undefined *)0x0 && puVar12 != (undefined *)0x0;
    _objc_retain(puVar12);
    _objc_retain(puVar9);
    func_0x000100162d98("APPSTORE",&puStack_298);
    _objc_release(puStack_270);
    _objc_release(puStack_278);
    _objc_release(uStack_268);
    _objc_release(puVar2);
    _objc_release(puVar12);
  }
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010806e7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar8 + 0x20) + 0x10))(*(long *)(lVar8 + 0x20),0,0,0);
  return;
}



/* Entry: 10806e798; end: 10806e7c7;  */

void FUN_10806e798(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010806e7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,0);
  return;
}



/* Entry: 10806e7c8; end: 10806ed9b; -[SCDiscoverMediaBlob updateWithDataDict:metadataDict:] */

void FUN_10806e7c8(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x00010c21acc0(param_2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5b80(param_2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5b00(param_2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5c80(param_2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193c40(param_2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1892e0(param_2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164840(param_2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4e80(param_2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0c5d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4460(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7780(param_2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0efc60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7500(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2142e0(param_2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c26e180(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c213f60(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1bdea0(param_2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  func_0x00010c178460(param_2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  func_0x00010c191960(param_2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c1c0(param_2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c760(param_2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea340(param_2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165a80(param_2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5b60(param_2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1745a0(param_2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bce0(param_2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar3 = (double)param_1;
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar4 = (double)param_1;
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar5 = (double)param_1;
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010bfb2c80(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c2232b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar3,dVar4,dVar5,(double)param_1,param_2,PTR_s_setViewport__1126666d0);
  return;
}



/* Entry: 10806ed9c; end: 10806eda3; -[SCDiscoverMediaBlob mediaData] */

undefined8 FUN_10806ed9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10806eda4; end: 10806edab; -[SCDiscoverMediaBlob setMediaData:] */

void FUN_10806eda4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10806edac; end: 10806edb3; -[SCDiscoverMediaBlob overlayData] */

undefined8 FUN_10806edac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10806edb4; end: 10806edbb; -[SCDiscoverMediaBlob setOverlayData:] */

void FUN_10806edb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}


