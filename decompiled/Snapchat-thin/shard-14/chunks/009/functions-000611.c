/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b722544; end: 10b72289b;  */

/* WARNING: Removing unreachable block (ram,0x00010b72285c) */

undefined8 *
FUN_10b722544(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,long param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *unaff_x25;
  undefined8 *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  long *plStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [2];
  char cStack_129;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 auStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar6 = param_3;
  puVar10 = param_4;
  puVar11 = (undefined *)param_5;
  lVar12 = param_6;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = (undefined8 *)&UNK_110d5a418;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x000107c278b8(auStack_b8,puVar2);
      _objc_retain(param_3);
      if (param_3 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(param_3);
        puVar2 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_a0,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_88,puVar2);
      _objc_retain(param_5);
      if (param_5 == (undefined8 *)0x0) {
        puVar3 = &UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar3 = (undefined *)param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x000107c278b8(auStack_70,puVar3);
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      func_0x000107c27984(&uStack_d8,auStack_b8,&lStack_58,4);
      puVar10 = (undefined8 *)(param_6 * 10);
      puVar2 = (undefined8 *)&UNK_110d5a418;
      unaff_x25 = &uStack_d8;
      puVar6 = &uStack_d8;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_c0 = unaff_x25;
      func_0x000107c278ac(&puStack_c0);
      lVar14 = 0;
      do {
        if ((&cStack_59)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x60);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_b8);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    puVar5 = puVar4;
    __Unwind_Resume();
    puVar9 = &uStack_160;
    pcStack_e8 = FUN_10b72289c;
    lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar6;
    puStack_120 = auStack_b8;
    puStack_118 = puVar4;
    puStack_110 = (undefined *)param_5;
    puStack_108 = param_4;
    puStack_100 = param_3;
    puStack_f8 = param_2;
    puStack_f0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar2);
    plVar1 = (long *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      plVar1 = (long *)puVar5[1];
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        puVar10 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      puVar4 = auStack_140;
      func_0x000107c278b8(auStack_140,puVar10);
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      func_0x000107c27984(&uStack_160,auStack_140,&lStack_128,1);
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d5a468);
      puStack_148 = (undefined1 *)&uStack_160;
      func_0x000107c278ac(&puStack_148);
      puVar8 = puVar9;
      puVar10 = puVar6;
      param_5 = &uStack_160;
      if (cStack_129 < '\0') {
        __ZdlPv(auStack_140[0]);
        puVar8 = puVar9;
        puVar10 = puVar6;
        param_5 = &uStack_160;
      }
    }
    puVar6 = puVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
      ___stack_chk_fail();
      _objc_release(puVar2);
      _objc_release(puVar2);
      puVar5 = puVar6;
      __Unwind_Resume();
      ppuVar7 = &puStack_1b0;
      pcStack_168 = FUN_10b722a10;
      puStack_1a0 = auStack_b8;
      puStack_198 = puVar4;
      puStack_190 = (undefined *)param_5;
      plStack_188 = plVar1;
      puStack_180 = puVar6;
      puStack_178 = puVar2;
      ppuStack_170 = &puStack_f0;
      _objc_retain(puVar8);
      _objc_retain(puVar10);
      _objc_retain(puVar11);
      _objc_retain(lVar12);
      puStack_1a8 = PTR_PTR_11270a268;
      puStack_1b0 = puVar5;
      _objc_msgSendSuper2(&puStack_1b0,PTR_s_init_1125d9248);
      if (ppuVar7 != (undefined8 **)0x0) {
        puVar2 = puVar8;
        func_0x00010bf51e00();
        uVar13 = ppuVar7[1];
        ppuVar7[1] = puVar2;
        _objc_release(uVar13);
        puVar2 = puVar10;
        func_0x00010bf51e00();
        uVar13 = ppuVar7[2];
        ppuVar7[2] = puVar2;
        _objc_release(uVar13);
        puVar3 = puVar11;
        func_0x00010bf51e00();
        uVar13 = ppuVar7[3];
        ppuVar7[3] = (undefined8 *)puVar3;
        _objc_release(uVar13);
        lVar14 = lVar12;
        func_0x00010bf51e00();
        uVar13 = ppuVar7[4];
        ppuVar7[4] = (undefined8 *)lVar14;
        _objc_release(uVar13);
      }
      _objc_release(lVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar8);
      return ppuVar7;
    }
    return puVar6;
  }
  return puVar4;
}



/* Entry: 10b72289c; end: 10b722a0f;  */

undefined *
FUN_10b72289c(long param_1,undefined *param_2,undefined1 *param_3,undefined1 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f7a3498;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110d5a468);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
      param_4 = param_3;
    }
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  ppuVar2 = &puStack_d0;
  _objc_retain(puVar4);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_c8 = PTR_PTR_11270a268;
  puStack_d0 = puVar1;
  _objc_msgSendSuper2(&puStack_d0,PTR_s_init_1125d9248);
  if (ppuVar2 != (undefined **)0x0) {
    puVar3 = puVar4;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)ppuVar2 + 8);
    *(undefined1 **)((long)ppuVar2 + 8) = puVar3;
    _objc_release(uVar6);
    puVar3 = param_4;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)ppuVar2 + 0x10);
    *(undefined1 **)((long)ppuVar2 + 0x10) = puVar3;
    _objc_release(uVar6);
    uVar6 = param_5;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)ppuVar2 + 0x18);
    *(undefined8 *)((long)ppuVar2 + 0x18) = uVar6;
    _objc_release(uVar7);
    uVar6 = param_6;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)ppuVar2 + 0x20);
    *(undefined8 *)((long)ppuVar2 + 0x20) = uVar6;
    _objc_release(uVar7);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar4);
  return (undefined *)ppuVar2;
}



/* Entry: 10b722a10; end: 10b722b1b; -[SCLensThumbnailLoggerCarouselSnapshot initWithLensSessionId:allLenses:allLensCollectionIds:onScreenLenses:] */

undefined1 *
FUN_10b722a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_11270a268;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b722b1c; end: 10b722b3f; -[SCLensThumbnailLoggerCarouselSnapshot copyWithZone:] */

undefined8 FUN_10b722b1c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b722b40; end: 10b722bcb; -[SCLensThumbnailLoggerCarouselSnapshot hash] */

undefined8 * FUN_10b722b40(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b722c7c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b722c88;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_10b722c88;
            }
            goto LAB_10b722c7c;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b722c88:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b722bcc; end: 10b722ca3; -[SCLensThumbnailLoggerCarouselSnapshot isEqual:] */

long FUN_10b722bcc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b722c7c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b722c88;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10b722c88;
            }
            goto LAB_10b722c7c;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b722c88:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b722ca4; end: 10b722cab; -[SCLensThumbnailLoggerCarouselSnapshot lensSessionId] */

undefined8 FUN_10b722ca4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b722cac; end: 10b722cb3; -[SCLensThumbnailLoggerCarouselSnapshot allLenses] */

undefined8 FUN_10b722cac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b722cb4; end: 10b722cbb; -[SCLensThumbnailLoggerCarouselSnapshot allLensCollectionIds] */

undefined8 FUN_10b722cb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b722cbc; end: 10b722cc3; -[SCLensThumbnailLoggerCarouselSnapshot onScreenLenses] */

undefined8 FUN_10b722cbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b722cc4; end: 10b722d0b; -[SCLensThumbnailLoggerCarouselSnapshot .cxx_destruct] */

void FUN_10b722cc4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b722d0c; end: 10b722df7; -[SCLensScheduleResponseLogData initWithNamespace:isFirstPage:activeCount:precachedCount:mergedActiveCount:mergedPrecachedCount:newLensesCount:cachedLensesCount:rankedLensesCount:redundantLensesCount:missedLensesCount:updatedLensesCount:] */

undefined8 *
FUN_10b722d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  puStack_68 = PTR_PTR_11270a270;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_4;
    puVar1[3] = param_5;
    puVar1[4] = param_6;
    puVar1[5] = param_7;
    puVar1[6] = param_8;
    puVar1[7] = param_9;
    puVar1[8] = param_10;
    puVar1[9] = param_11;
    puVar1[10] = param_12;
    puVar1[0xb] = param_13;
    puVar1[0xc] = param_14;
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b722df8; end: 10b722e1b; -[SCLensScheduleResponseLogData copyWithZone:] */

undefined8 FUN_10b722df8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b722e1c; end: 10b722eaf; -[SCLensScheduleResponseLogData hash] */

undefined8 * FUN_10b722e1c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_80 = (ulong)*(byte *)(param_1 + 8);
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  uStack_78 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = *(undefined8 *)(param_1 + 0x50);
  uStack_48 = *(undefined8 *)(param_1 + 0x48);
  uStack_30 = *(undefined8 *)(param_1 + 0x60);
  uStack_38 = *(undefined8 *)(param_1 + 0x58);
  puVar2 = &uStack_88;
  uStack_88 = uVar1;
  func_0x000107c3191c(puVar2,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b722fd4;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if (((((ulong)puVar3 & 1) == 0) ||
        ((((*(char *)(puVar2 + 1) != *(char *)(param_3 + 1) || (puVar2[3] != param_3[3])) ||
          (puVar2[4] != param_3[4])) || ((puVar2[5] != param_3[5] || (puVar2[6] != param_3[6]))))))
       || ((puVar2[7] != param_3[7] ||
           (((puVar2[8] != param_3[8] || (puVar2[9] != param_3[9])) ||
            ((puVar2[10] != param_3[10] ||
             ((puVar2[0xb] != param_3[0xb] || (puVar2[0xc] != param_3[0xc])))))))))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10b722fd4;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b722fd4;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10b722fd4:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b722eb0; end: 10b722fef; -[SCLensScheduleResponseLogData isEqual:] */

long FUN_10b722eb0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b722fd4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) == 0) ||
        ((((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
           (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
          (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))) ||
         ((*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28) ||
          (*(long *)(param_1 + 0x30) != *(long *)(param_3 + 0x30))))))) ||
       ((*(long *)(param_1 + 0x38) != *(long *)(param_3 + 0x38) ||
        (((*(long *)(param_1 + 0x40) != *(long *)(param_3 + 0x40) ||
          (*(long *)(param_1 + 0x48) != *(long *)(param_3 + 0x48))) ||
         ((*(long *)(param_1 + 0x50) != *(long *)(param_3 + 0x50) ||
          ((*(long *)(param_1 + 0x58) != *(long *)(param_3 + 0x58) ||
           (*(long *)(param_1 + 0x60) != *(long *)(param_3 + 0x60))))))))))) {
      lVar3 = 0;
      goto LAB_10b722fd4;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b722fd4;
    }
  }
  lVar3 = 1;
LAB_10b722fd4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b722ff0; end: 10b722ff7; -[SCLensScheduleResponseLogData namespace] */

undefined8 FUN_10b722ff0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b722ff8; end: 10b722fff; -[SCLensScheduleResponseLogData isFirstPage] */

undefined1 FUN_10b722ff8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b723000; end: 10b723007; -[SCLensScheduleResponseLogData activeCount] */

undefined8 FUN_10b723000(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b723008; end: 10b72300f; -[SCLensScheduleResponseLogData precachedCount] */

undefined8 FUN_10b723008(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b723010; end: 10b723017; -[SCLensScheduleResponseLogData mergedActiveCount] */

undefined8 FUN_10b723010(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b723018; end: 10b72301f; -[SCLensScheduleResponseLogData mergedPrecachedCount] */

undefined8 FUN_10b723018(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b723020; end: 10b723027; -[SCLensScheduleResponseLogData newLensesCount] */

undefined8 FUN_10b723020(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b723028; end: 10b72302f; -[SCLensScheduleResponseLogData cachedLensesCount] */

undefined8 FUN_10b723028(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b723030; end: 10b723037; -[SCLensScheduleResponseLogData rankedLensesCount] */

undefined8 FUN_10b723030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b723038; end: 10b72303f; -[SCLensScheduleResponseLogData redundantLensesCount] */

undefined8 FUN_10b723038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b723040; end: 10b723047; -[SCLensScheduleResponseLogData missedLensesCount] */

undefined8 FUN_10b723040(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b723048; end: 10b72304f; -[SCLensScheduleResponseLogData updatedLensesCount] */

undefined8 FUN_10b723048(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b723050; end: 10b72305b; -[SCLensScheduleResponseLogData .cxx_destruct] */

void FUN_10b723050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b72305c; end: 10b723067; -[SCLensFetchTypeProvidingServices .cxx_destruct] */

void FUN_10b72305c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b723068; end: 10b723073; -[SCLensCarouselFunnelServices .cxx_destruct] */

void FUN_10b723068(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b723074; end: 10b72314b; -[SCLensProcessingFPSInfo initWithAppliedEffectIds:isRecording:startupType:fps:frameProcessingTime:standardDeviation:] */

undefined1 *
FUN_10b723074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_11270a288;
  uStack_60 = param_4;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
  }
  _objc_release(param_8);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10b72314c; end: 10b72316f; -[SCLensProcessingFPSInfo copyWithZone:] */

undefined8 FUN_10b72314c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b723170; end: 10b72324b; -[SCLensProcessingFPSInfo hash] */

undefined8 * FUN_10b723170(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar4 = &uStack_58;
  uStack_48 = uVar3;
  func_0x000107c3191c(puVar4,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b723378:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b723384;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (*(char *)(puVar4 + 1) == *(char *)(param_3 + 1))) {
      dVar10 = ABS((double)puVar4[4] - (double)param_3[4]);
      dVar9 = ABS((double)puVar4[4] + (double)param_3[4]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (bVar1) {
        dVar10 = ABS((double)puVar4[5] - (double)param_3[5]);
        dVar9 = ABS((double)puVar4[5] + (double)param_3[5]) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
          bVar1 = dVar10 < dVar9;
        }
        if (bVar1) {
          dVar10 = ABS((double)puVar4[6] - (double)param_3[6]);
          dVar9 = ABS((double)puVar4[6] + (double)param_3[6]) * 2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
            bVar1 = dVar10 < dVar9;
          }
          if ((bVar1) &&
             ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
          {
            puVar8 = (undefined8 *)puVar4[3];
            if (puVar8 != (undefined8 *)param_3[3]) {
              func_0x00010c071ae0();
              goto LAB_10b723384;
            }
            goto LAB_10b723378;
          }
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10b723384:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10b72324c; end: 10b72339f; -[SCLensProcessingFPSInfo isEqual:] */

long FUN_10b72324c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b723378:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b723384;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
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
        if (bVar1) {
          dVar6 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
          dVar5 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
            bVar1 = dVar6 < dVar5;
          }
          if ((bVar1) &&
             ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
            lVar4 = *(long *)(param_1 + 0x18);
            if (lVar4 != *(long *)(param_3 + 0x18)) {
              func_0x00010c071ae0();
              goto LAB_10b723384;
            }
            goto LAB_10b723378;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b723384:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b7233a0; end: 10b7233a7; -[SCLensProcessingFPSInfo appliedEffectIds] */

undefined8 FUN_10b7233a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7233a8; end: 10b7233af; -[SCLensProcessingFPSInfo isRecording] */

undefined1 FUN_10b7233a8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b7233b0; end: 10b7233b7; -[SCLensProcessingFPSInfo startupType] */

undefined8 FUN_10b7233b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7233b8; end: 10b7233bf; -[SCLensProcessingFPSInfo fps] */

undefined8 FUN_10b7233b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7233c0; end: 10b7233c7; -[SCLensProcessingFPSInfo frameProcessingTime] */

undefined8 FUN_10b7233c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b7233c8; end: 10b7233cf; -[SCLensProcessingFPSInfo standardDeviation] */

undefined8 FUN_10b7233c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b7233d0; end: 10b7233ff; -[SCLensProcessingFPSInfo .cxx_destruct] */

void FUN_10b7233d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b723400; end: 10b723487; -[SCLensProcessingFPSEvent initWithAppliedEffectIds:timestamp:] */

undefined1 *
FUN_10b723400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a290;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b723488; end: 10b7234ab; -[SCLensProcessingFPSEvent copyWithZone:] */

undefined8 FUN_10b723488(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7234ac; end: 10b723537; -[SCLensProcessingFPSEvent hash] */

undefined8 * FUN_10b7234ac(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_38;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b7235d4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b7235e0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
      dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = (undefined8 *)puVar3[1];
        if (puVar6 != (undefined8 *)param_3[1]) {
          func_0x00010c071ae0();
          goto LAB_10b7235e0;
        }
        goto LAB_10b7235d4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b7235e0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b723538; end: 10b7235fb; -[SCLensProcessingFPSEvent isEqual:] */

long FUN_10b723538(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b7235d4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7235e0;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_10b7235e0;
        }
        goto LAB_10b7235d4;
      }
    }
    lVar4 = 0;
  }
LAB_10b7235e0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b7235fc; end: 10b723603; -[SCLensProcessingFPSEvent appliedEffectIds] */

undefined8 FUN_10b7235fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b723604; end: 10b72360b; -[SCLensProcessingFPSEvent timestamp] */

undefined8 FUN_10b723604(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b72360c; end: 10b723617; -[SCLensProcessingFPSEvent .cxx_destruct] */

void FUN_10b72360c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b723618; end: 10b723673; -[SCLensProcessingEffectApplyTrackerEntry initWithIsRendered:applicationStartTime:applicationEndTime:] */

void FUN_10b723618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270a298;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
  }
  return;
}



/* Entry: 10b723674; end: 10b723697; -[SCLensProcessingEffectApplyTrackerEntry copyWithZone:] */

undefined8 FUN_10b723674(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b723698; end: 10b723733; -[SCLensProcessingEffectApplyTrackerEntry hash] */

ulong * FUN_10b723698(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  double dVar6;
  double dVar7;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uVar4 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_28 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar4 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_20 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (ulong *)param_3) {
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar5 = (undefined1 *)puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar5);
      if ((((ulong)puVar3 & 1) != 0) && (*(char *)((long)puVar2 + 8) == param_3[8])) {
        dVar7 = ABS(*(double *)((long)puVar2 + 0x10) - *(double *)(param_3 + 0x10));
        dVar6 = ABS(*(double *)((long)puVar2 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar6))) {
          bVar1 = dVar7 < dVar6;
        }
        if (bVar1) {
          dVar6 = ABS(*(double *)((long)puVar2 + 0x18) + *(double *)(param_3 + 0x18)) *
                  2.220446049250313e-16;
          if (dVar6 <= 2.2250738585072014e-308) {
            dVar6 = 2.2250738585072014e-308;
          }
          puVar5 = (undefined1 *)
                   (ulong)(ABS(*(double *)((long)puVar2 + 0x18) - *(double *)(param_3 + 0x18)) <
                          dVar6);
          goto LAB_10b723808;
        }
      }
      puVar5 = (undefined1 *)0x0;
    }
  }
LAB_10b723808:
  _objc_release(param_3);
  return (ulong *)puVar5;
}



/* Entry: 10b723734; end: 10b723823; -[SCLensProcessingEffectApplyTrackerEntry isEqual:] */

bool FUN_10b723734(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
        dVar5 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
        dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
          bVar1 = dVar5 < dVar4;
        }
        if (bVar1) {
          dVar4 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                  2.220446049250313e-16;
          if (dVar4 <= 2.2250738585072014e-308) {
            dVar4 = 2.2250738585072014e-308;
          }
          bVar1 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18)) < dVar4;
          goto LAB_10b723808;
        }
      }
      bVar1 = false;
    }
  }
LAB_10b723808:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b723824; end: 10b72382b; -[SCLensProcessingEffectApplyTrackerEntry isRendered] */

undefined1 FUN_10b723824(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b72382c; end: 10b723833; -[SCLensProcessingEffectApplyTrackerEntry applicationStartTime] */

undefined8 FUN_10b72382c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b723834; end: 10b72383b; -[SCLensProcessingEffectApplyTrackerEntry applicationEndTime] */

undefined8 FUN_10b723834(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b72383c; end: 10b723857; +[SCLensProcessingEffectApplyTrackerEntryBuilder lensProcessingEffectApplyTrackerEntry] */

void FUN_10b72383c(void)

{
  _objc_alloc_init(PTR_PTR_1126db990);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b723858; end: 10b72392b; +[SCLensProcessingEffectApplyTrackerEntryBuilder lensProcessingEffectApplyTrackerEntryFromExistingLensProcessingEffectApplyTrackerEntry:] */

void FUN_10b723858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126db990;
  _objc_retain(param_4);
  func_0x00010c096140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c07c360(param_4);
  puVar3 = puVar1;
  func_0x00010c2b1360(puVar1,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf07b20(param_4);
  puVar4 = puVar3;
  func_0x00010c2a86c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf07860(param_4);
  _objc_release(param_4);
  puVar5 = puVar4;
  func_0x00010c2a8680(param_1,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b72392c; end: 10b72395f; -[SCLensProcessingEffectApplyTrackerEntryBuilder build] */

void FUN_10b72392c(long param_1)

{
  _objc_alloc(PTR_PTR_1126e0690);
  func_0x00010c01f540(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b723960; end: 10b723967; -[SCLensProcessingEffectApplyTrackerEntryBuilder withIsRendered:] */

void FUN_10b723960(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b723968; end: 10b72396f; -[SCLensProcessingEffectApplyTrackerEntryBuilder withApplicationStartTime:] */

void FUN_10b723968(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 10b723970; end: 10b723977; -[SCLensProcessingEffectApplyTrackerEntryBuilder withApplicationEndTime:] */

void FUN_10b723970(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 10b723978; end: 10b723a23; -[SCLensEffectCreatorAnalytics initWithEffectId:interactions:] */

undefined1 *
FUN_10b723978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a2a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b723a24; end: 10b723a47; -[SCLensEffectCreatorAnalytics copyWithZone:] */

undefined8 FUN_10b723a24(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b723a48; end: 10b723abb; -[SCLensEffectCreatorAnalytics hash] */

undefined8 * FUN_10b723a48(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b723b3c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b723b48;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10b723b48;
        }
        goto LAB_10b723b3c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b723b48:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b723abc; end: 10b723b63; -[SCLensEffectCreatorAnalytics isEqual:] */

long FUN_10b723abc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b723b3c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b723b48;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b723b48;
        }
        goto LAB_10b723b3c;
      }
    }
    lVar3 = 0;
  }
LAB_10b723b48:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b723b64; end: 10b723b6b; -[SCLensEffectCreatorAnalytics effectId] */

undefined8 FUN_10b723b64(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b723b6c; end: 10b723b73; -[SCLensEffectCreatorAnalytics interactions] */

undefined8 FUN_10b723b6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b723b74; end: 10b723ba3; -[SCLensEffectCreatorAnalytics .cxx_destruct] */

void FUN_10b723b74(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b723ba4; end: 10b723c2b; -[SCLensEffectCreatorInteraction initWithInteractionName:totalCount:] */

undefined1 *
FUN_10b723ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270a2a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b723c2c; end: 10b723c4f; -[SCLensEffectCreatorInteraction copyWithZone:] */

undefined8 FUN_10b723c2c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b723c50; end: 10b723cbb; -[SCLensEffectCreatorInteraction hash] */

undefined8 * FUN_10b723c50(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b723d40;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10b723d40;
    }
    puVar4 = (undefined8 *)puVar2[1];
    if (puVar4 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_10b723d40;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10b723d40:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b723cbc; end: 10b723d5b; -[SCLensEffectCreatorInteraction isEqual:] */

long FUN_10b723cbc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b723d40;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_10b723d40;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b723d40;
    }
  }
  lVar3 = 1;
LAB_10b723d40:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b723d5c; end: 10b723d63; -[SCLensEffectCreatorInteraction interactionName] */

undefined8 FUN_10b723d5c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b723d64; end: 10b723d6b; -[SCLensEffectCreatorInteraction totalCount] */

undefined8 FUN_10b723d64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b723d6c; end: 10b723d77; -[SCLensEffectCreatorInteraction .cxx_destruct] */

void FUN_10b723d6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b723d78; end: 10b723e23; -[SCLensEffectAnalytics initWithEffect:interactions:] */

undefined1 *
FUN_10b723d78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a2b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b723e24; end: 10b723e47; -[SCLensEffectAnalytics copyWithZone:] */

undefined8 FUN_10b723e24(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b723e48; end: 10b723ebb; -[SCLensEffectAnalytics hash] */

undefined8 * FUN_10b723e48(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b723f3c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b723f48;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10b723f48;
        }
        goto LAB_10b723f3c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b723f48:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b723ebc; end: 10b723f63; -[SCLensEffectAnalytics isEqual:] */

long FUN_10b723ebc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b723f3c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b723f48;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b723f48;
        }
        goto LAB_10b723f3c;
      }
    }
    lVar3 = 0;
  }
LAB_10b723f48:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b723f64; end: 10b723f6b; -[SCLensEffectAnalytics effect] */

undefined8 FUN_10b723f64(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b723f6c; end: 10b723f73; -[SCLensEffectAnalytics interactions] */

undefined8 FUN_10b723f6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b723f74; end: 10b723fa3; -[SCLensEffectAnalytics .cxx_destruct] */

void FUN_10b723f74(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b723fa4; end: 10b72406b; -[SCLensEffectInteraction initWithInteractionName:interactionValue:sessionTotalCount:actionSequenceCount:cameraType:] */

undefined1 *
FUN_10b723fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_11270a2b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b72406c; end: 10b72408f; -[SCLensEffectInteraction copyWithZone:] */

undefined8 FUN_10b72406c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b724090; end: 10b72411f; -[SCLensEffectInteraction hash] */

undefined8 * FUN_10b724090(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  lVar5 = *(long *)(param_1 + 0x28);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_48 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b7241d0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b7241dc;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b7241dc;
        }
        goto LAB_10b7241d0;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b7241dc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b724120; end: 10b7241f7; -[SCLensEffectInteraction isEqual:] */

long FUN_10b724120(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b7241d0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7241dc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b7241dc;
        }
        goto LAB_10b7241d0;
      }
    }
    lVar3 = 0;
  }
LAB_10b7241dc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b7241f8; end: 10b7241ff; -[SCLensEffectInteraction interactionName] */

undefined8 FUN_10b7241f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b724200; end: 10b724207; -[SCLensEffectInteraction interactionValue] */

undefined8 FUN_10b724200(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b724208; end: 10b72420f; -[SCLensEffectInteraction sessionTotalCount] */

undefined8 FUN_10b724208(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b724210; end: 10b724217; -[SCLensEffectInteraction actionSequenceCount] */

undefined8 FUN_10b724210(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b724218; end: 10b72421f; -[SCLensEffectInteraction cameraType] */

undefined8 FUN_10b724218(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b724220; end: 10b72424f; -[SCLensEffectInteraction .cxx_destruct] */

void FUN_10b724220(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b724250; end: 10b7242fb; -[SCLensEffectOption initWithEffectId:contentId:] */

undefined1 *
FUN_10b724250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a2c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7242fc; end: 10b72431f; -[SCLensEffectOption copyWithZone:] */

undefined8 FUN_10b7242fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b724320; end: 10b724393; -[SCLensEffectOption hash] */

undefined8 * FUN_10b724320(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b724414:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b724420;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10b724420;
        }
        goto LAB_10b724414;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b724420:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b724394; end: 10b72443b; -[SCLensEffectOption isEqual:] */

long FUN_10b724394(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b724414:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b724420;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b724420;
        }
        goto LAB_10b724414;
      }
    }
    lVar3 = 0;
  }
LAB_10b724420:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b72443c; end: 10b724443; -[SCLensEffectOption effectId] */

undefined8 FUN_10b72443c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b724444; end: 10b72444b; -[SCLensEffectOption contentId] */

undefined8 FUN_10b724444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b72444c; end: 10b72447b; -[SCLensEffectOption .cxx_destruct] */

void FUN_10b72444c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b72447c; end: 10b7245cb; -[SCLensEffectProfilingAnalytics initWithEffectId:frame:frameWarm:frameStartup:gpuFrame:gpuFrameWarm:trackingTime:engineTime:scriptTime:ratioSlowFrames:loadTime:loadTimeAndFiveFrames:loadTimeAndTwentyFrames:unloadTime:fps:fpsWarm:frameStdDev:frameStdDevWarm:firstFrame:recording:] */

undefined8 *
FUN_10b72447c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_11);
  puStack_78 = PTR_PTR_11270a2c8;
  puVar1 = &uStack_80;
  uStack_80 = param_9;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    puVar1[3] = param_1;
    puVar1[4] = param_2;
    puVar1[5] = param_3;
    puVar1[6] = param_4;
    puVar1[7] = param_5;
    puVar1[8] = param_6;
    puVar1[9] = param_7;
    puVar1[10] = param_8;
    puVar1[0xb] = in_stack_00000000;
    puVar1[0xc] = in_stack_00000008;
    puVar1[0xd] = in_stack_00000010;
    puVar1[0xe] = in_stack_00000018;
    puVar1[0xf] = in_stack_00000020;
    puVar1[0x10] = in_stack_00000028;
    puVar1[0x11] = in_stack_00000030;
    puVar1[0x12] = in_stack_00000038;
    puVar1[0x13] = in_stack_00000040;
    puVar1[0x14] = in_stack_00000048;
    *(undefined1 *)(puVar1 + 1) = param_12;
  }
  _objc_release(param_11);
  return puVar1;
}


