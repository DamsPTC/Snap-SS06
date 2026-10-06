/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091ec8e8; end: 1091ec903; -[SCLensCarouselCellViewModel allowIconLoadingOverlay] */

uint FUN_1091ec8e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c076d40(uVar1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1091ec904; end: 1091ec90b; -[SCLensCarouselCellViewModel isOriginalItem] */

void FUN_1091ec904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06c2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isAnyOriginalLens_1125f8ac8);
  return;
}



/* Entry: 1091ec90c; end: 1091ec913; -[SCLensCarouselCellViewModel isPriorityItem] */

void FUN_1091ec90c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07f210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isSponsored_1125fd690);
  return;
}



/* Entry: 1091ec914; end: 1091ec91b; -[SCLensCarouselCellViewModel shouldForceReload] */

void FUN_1091ec914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c230810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_shouldForceReload_112669c28);
  return;
}



/* Entry: 1091ec91c; end: 1091ec923; -[SCLensCarouselCellViewModel contentUpdateObservable] */

undefined8 FUN_1091ec91c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1091ec924; end: 1091ec98b; -[SCLensCarouselCellViewModel .cxx_destruct] */

void FUN_1091ec924(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091ec98c; end: 1091ecb3b; -[SCLensCarouselCellViewModelFactory initWithLensIconRepository:layoutProvider:lensPerformerProvider:lensStatusCheckBlock:overlayProvider:] */

undefined1 *
FUN_1091ec98c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_112700ea0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(long *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar6);
    lVar3 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0b6bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    if (lVar4 == 0) {
      func_0x000107c30a80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar4);
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(long *)((long)puVar1 + 0x30) = lVar5;
    _objc_retain(lVar5);
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_release(lVar5);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091ecb3c; end: 1091ecbc3; -[SCLensCarouselCellViewModelFactory viewModelWithLens:contentUpdateObservable:] */

void FUN_1091ecb3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c0e0ea0(param_4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126dddf8;
  _objc_alloc(PTR_PTR_1126dddf8);
  func_0x00010c022820();
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091ecbc4; end: 1091ecc23; -[SCLensCarouselCellViewModelFactory .cxx_destruct] */

void FUN_1091ecbc4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091ecc24; end: 1091ecceb; -[SCLensVideoEditingScope initWithConfig:uiContainer:resultHandler:] */

undefined1 *
FUN_1091ecc24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112700ea8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091eccec; end: 1091eccf3; -[SCLensVideoEditingScope config] */

undefined8 FUN_1091eccec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091eccf4; end: 1091ecd0b; -[SCLensVideoEditingScope uiContainer] */

void FUN_1091eccf4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091ecd0c; end: 1091ecd13; -[SCLensVideoEditingScope resultHandler] */

undefined8 FUN_1091ecd0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1091ecd14; end: 1091ecd4b; -[SCLensVideoEditingScope .cxx_destruct] */

void FUN_1091ecd14(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091ecd4c; end: 1091ecdf7; -[SCLensVideoEditingConfig initWithVideoURL:initialProperties:] */

undefined1 *
FUN_1091ecd4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112700eb0;
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



/* Entry: 1091ecdf8; end: 1091ece1b; -[SCLensVideoEditingConfig copyWithZone:] */

undefined8 FUN_1091ecdf8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1091ece1c; end: 1091ece8f; -[SCLensVideoEditingConfig hash] */

undefined8 * FUN_1091ece1c(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_1091ecf10:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1091ecf1c;
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
          goto LAB_1091ecf1c;
        }
        goto LAB_1091ecf10;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1091ecf1c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1091ece90; end: 1091ecf37; -[SCLensVideoEditingConfig isEqual:] */

long FUN_1091ece90(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1091ecf10:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1091ecf1c;
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
          goto LAB_1091ecf1c;
        }
        goto LAB_1091ecf10;
      }
    }
    lVar3 = 0;
  }
LAB_1091ecf1c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1091ecf38; end: 1091ecf3f; -[SCLensVideoEditingConfig videoURL] */

undefined8 FUN_1091ecf38(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091ecf40; end: 1091ecf47; -[SCLensVideoEditingConfig initialProperties] */

undefined8 FUN_1091ecf40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091ecf48; end: 1091ecf77; -[SCLensVideoEditingConfig .cxx_destruct] */

void FUN_1091ecf48(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091ecf78; end: 1091ecfeb; -[SCLensVideoEditingProperties initWithRelativeStartTime:relativeEndTime:transform:isMuted:] */

void FUN_1091ecf78(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112700eb8;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0xc) = param_1;
    *(undefined4 *)((long)puVar1 + 0x10) = param_2;
    uVar3 = param_5[1];
    uVar2 = *param_5;
    uVar5 = param_5[3];
    uVar4 = param_5[2];
    uVar6 = param_5[4];
    *(undefined8 *)((long)puVar1 + 0x40) = param_5[5];
    *(undefined8 *)((long)puVar1 + 0x38) = uVar6;
    *(undefined8 *)((long)puVar1 + 0x30) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x28) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    *(undefined1 *)((long)puVar1 + 8) = param_6;
  }
  return;
}



/* Entry: 1091ecfec; end: 1091ed00f; -[SCLensVideoEditingProperties copyWithZone:] */

undefined8 FUN_1091ecfec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1091ed010; end: 1091ed177; -[SCLensVideoEditingProperties hash] */

long * FUN_1091ed010(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_60;
  long lStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  plVar3 = &lStack_60;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar5 = (uVar5 ^ uVar5 >> 0x18) * 0x109;
  uVar5 = (uVar5 ^ uVar5 >> 0xe) * 0x15;
  lStack_60 = (uVar5 ^ uVar5 >> 0x1c) * 0x80000001;
  uVar5 = (ulong)*(uint *)(param_1 + 0x10) * 0x200000 - 1;
  uVar5 = (uVar5 ^ uVar5 >> 0x18) * 0x109;
  uVar5 = (uVar5 ^ uVar5 >> 0xe) * 0x15;
  lStack_58 = (uVar5 ^ uVar5 >> 0x1c) * 0x80000001;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_50 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_48 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_40 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uStack_20 = (ulong)*(byte *)(param_1 + 8);
  func_0x000107c3191c(&lStack_60,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((plVar3 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
      puVar6 = plVar3;
      _objc_opt_class(plVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if ((((ulong)puVar4 & 1) != 0) && (*(char *)(plVar3 + 1) == *(char *)(param_3 + 1))) {
        fVar8 = ABS(*(float *)((long)plVar3 + 0xc) - *(float *)((long)param_3 + 0xc));
        fVar7 = ABS(*(float *)((long)plVar3 + 0xc) + *(float *)((long)param_3 + 0xc)) *
                1.1920929e-07;
        bVar2 = true;
        if ((1.1754944e-38 <= fVar8) && (bVar2 = false, !NAN(fVar8) && !NAN(fVar7))) {
          bVar2 = fVar8 < fVar7;
        }
        if (bVar2) {
          fVar8 = ABS(*(float *)(plVar3 + 2) - *(float *)(param_3 + 2));
          fVar7 = ABS(*(float *)(plVar3 + 2) + *(float *)(param_3 + 2)) * 1.1920929e-07;
          bVar2 = true;
          if ((1.1754944e-38 <= fVar8) && (bVar2 = false, !NAN(fVar8) && !NAN(fVar7))) {
            bVar2 = fVar8 < fVar7;
          }
          if (bVar2) {
            uStack_b8 = plVar3[4];
            uStack_c0 = plVar3[3];
            uStack_a8 = plVar3[6];
            uStack_b0 = plVar3[5];
            uStack_98 = plVar3[8];
            uStack_a0 = plVar3[7];
            uStack_e8 = param_3[4];
            uStack_f0 = param_3[3];
            uStack_d8 = param_3[6];
            uStack_e0 = param_3[5];
            uStack_c8 = param_3[8];
            uStack_d0 = param_3[7];
            puVar6 = &uStack_c0;
            _CGAffineTransformEqualToTransform(puVar6,&uStack_f0);
            goto LAB_1091ed27c;
          }
        }
      }
      puVar6 = (undefined8 *)0x0;
    }
  }
LAB_1091ed27c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1091ed178; end: 1091ed29b; -[SCLensVideoEditingProperties isEqual:] */

undefined8 * FUN_1091ed178(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    puVar4 = (undefined8 *)0x1;
  }
  else {
    puVar4 = (undefined8 *)0x0;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
        fVar6 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc));
        fVar5 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
          bVar1 = fVar6 < fVar5;
        }
        if (bVar1) {
          fVar6 = ABS(*(float *)(param_1 + 0x10) - *(float *)(param_3 + 0x10));
          fVar5 = ABS(*(float *)(param_1 + 0x10) + *(float *)(param_3 + 0x10)) * 1.1920929e-07;
          bVar1 = true;
          if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
            bVar1 = fVar6 < fVar5;
          }
          if (bVar1) {
            uStack_58 = *(undefined8 *)(param_1 + 0x20);
            uStack_60 = *(undefined8 *)(param_1 + 0x18);
            uStack_48 = *(undefined8 *)(param_1 + 0x30);
            uStack_50 = *(undefined8 *)(param_1 + 0x28);
            uStack_38 = *(undefined8 *)(param_1 + 0x40);
            uStack_40 = *(undefined8 *)(param_1 + 0x38);
            uStack_88 = *(undefined8 *)(param_3 + 0x20);
            uStack_90 = *(undefined8 *)(param_3 + 0x18);
            uStack_78 = *(undefined8 *)(param_3 + 0x30);
            uStack_80 = *(undefined8 *)(param_3 + 0x28);
            uStack_68 = *(undefined8 *)(param_3 + 0x40);
            uStack_70 = *(undefined8 *)(param_3 + 0x38);
            puVar4 = &uStack_60;
            _CGAffineTransformEqualToTransform(puVar4,&uStack_90);
            goto LAB_1091ed27c;
          }
        }
      }
      puVar4 = (undefined8 *)0x0;
    }
  }
LAB_1091ed27c:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 1091ed29c; end: 1091ed2a3; -[SCLensVideoEditingProperties relativeStartTime] */

undefined4 FUN_1091ed29c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 1091ed2a4; end: 1091ed2ab; -[SCLensVideoEditingProperties relativeEndTime] */

undefined4 FUN_1091ed2a4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 1091ed2ac; end: 1091ed2c3; -[SCLensVideoEditingProperties transform] */

void FUN_1091ed2ac(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  param_1[1] = *(undefined8 *)(param_2 + 0x20);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  param_1[5] = *(undefined8 *)(param_2 + 0x40);
  param_1[4] = uVar1;
  return;
}



/* Entry: 1091ed2c4; end: 1091ed2cb; -[SCLensVideoEditingProperties isMuted] */

undefined1 FUN_1091ed2c4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1091ed2cc; end: 1091ed30f; -[SCImmediateUserFeatureLaunchServices buildSendToScopeWithUIContainer:recipientConfiguration:attribution:delegate:] */

void FUN_1091ed2cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010bf23ee0(*(undefined8 *)(param_1 + 8),param_2,param_3,PTR____NSArray0__struct_11034ab48
                      ,0,0,param_4,0,0,param_5,0);
  return;
}



/* Entry: 1091ed310; end: 1091ed433; -[SCImmediateUserFeatureLaunchServices initWithLegacySendToScopeLauncher:friendProfileScopeLauncher:storyMemberActionSheetLauncher:allContactsLauncher:mapScopeMultiLauncher:] */

undefined1 *
FUN_1091ed310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112700ec0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091ed434; end: 1091ed43b; -[SCImmediateUserFeatureLaunchServices snapcodeScopeLauncher] */

undefined8 FUN_1091ed434(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091ed43c; end: 1091ed443; -[SCImmediateUserFeatureLaunchServices legacySendToScopeLauncher] */

undefined8 FUN_1091ed43c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1091ed444; end: 1091ed44b; -[SCImmediateUserFeatureLaunchServices sendToScopeLauncher] */

undefined8 FUN_1091ed444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1091ed44c; end: 1091ed453; -[SCImmediateUserFeatureLaunchServices myProfileScopeLauncher] */

undefined8 FUN_1091ed44c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1091ed454; end: 1091ed45b; -[SCImmediateUserFeatureLaunchServices storyMemberActionSheetLauncher] */

undefined8 FUN_1091ed454(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1091ed45c; end: 1091ed463; -[SCImmediateUserFeatureLaunchServices allContactsLauncher] */

undefined8 FUN_1091ed45c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1091ed464; end: 1091ed46b; -[SCImmediateUserFeatureLaunchServices auraMyProfileScopeLauncher] */

undefined8 FUN_1091ed464(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1091ed46c; end: 1091ed473; -[SCImmediateUserFeatureLaunchServices chatScopeLauncher] */

undefined8 FUN_1091ed46c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1091ed474; end: 1091ed47b; -[SCImmediateUserFeatureLaunchServices mapScopeMultiLauncher] */

undefined8 FUN_1091ed474(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1091ed47c; end: 1091ed483; -[SCImmediateUserFeatureLaunchServices adReportScopeLauncher] */

undefined8 FUN_1091ed47c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1091ed484; end: 1091ed48b; -[SCImmediateUserFeatureLaunchServices lensVideoEditingLauncher] */

undefined8 FUN_1091ed484(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1091ed48c; end: 1091ed493; -[SCImmediateUserFeatureLaunchServices businessProfilesScopeLauncher] */

undefined8 FUN_1091ed48c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1091ed494; end: 1091ed49b; -[SCImmediateUserFeatureLaunchServices settingsScopeLauncher] */

undefined8 FUN_1091ed494(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1091ed49c; end: 1091ed4a3; -[SCImmediateUserFeatureLaunchServices mapSearchScopeLauncher] */

undefined8 FUN_1091ed49c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 1091ed4a4; end: 1091ed4ab; -[SCImmediateUserFeatureLaunchServices previewScopeLauncher] */

undefined8 FUN_1091ed4a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 1091ed4ac; end: 1091ed4b3; -[SCImmediateUserFeatureLaunchServices customStoryMemberActionSheetScopeServices] */

undefined8 FUN_1091ed4ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 1091ed4b4; end: 1091ed4bb; -[SCImmediateUserFeatureLaunchServices lensVideoEditingScopeServices] */

undefined8 FUN_1091ed4b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1091ed4bc; end: 1091ed4c3; -[SCImmediateUserFeatureLaunchServices customStoryMembersScopeServices] */

undefined8 FUN_1091ed4bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 1091ed4c4; end: 1091ed5ef; -[SCImmediateUserFeatureLaunchServices .cxx_destruct] */

void FUN_1091ed4c4(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091ed5f0; end: 1091ed683; -[SCUserFeatureDeallocationMonitor startMonitoringDeallocationOfObject:associatedWithScope:delegate:] */

void FUN_1091ed5f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 8,param_3);
  _objc_setAssociatedObject(param_3,param_1,param_1,1);
  _objc_release(param_3);
  _objc_storeWeak(param_1 + 0x10,param_4);
  _objc_release(param_4);
  _objc_storeWeak(param_1 + 0x18,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1091ed684; end: 1091ed6cb; -[SCUserFeatureDeallocationMonitor stopMonitoringDeallocation] */

void FUN_1091ed684(long param_1)

{
  _objc_storeWeak(param_1 + 0x18,0);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  _objc_setAssociatedObject();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091ed6cc; end: 1091ed747; -[SCUserFeatureDeallocationMonitor dealloc] */

void FUN_1091ed6cc(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf6fa80(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_112700ec8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1091ed748; end: 1091ed777; -[SCUserFeatureDeallocationMonitor .cxx_destruct] */

void FUN_1091ed748(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1091ed778; end: 1091ed77f; -[SCUserFeatureLaunchServices settingsLauncher] */

undefined8 FUN_1091ed778(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091ed780; end: 1091ed787; -[SCUserFeatureLaunchServices recipientPickerScopeLauncher] */

undefined8 FUN_1091ed780(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091ed788; end: 1091ed78f; -[SCUserFeatureLaunchServices addFriendsScopeLauncher] */

undefined8 FUN_1091ed788(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1091ed790; end: 1091ed797; -[SCUserFeatureLaunchServices allContactsScopeLauncher] */

undefined8 FUN_1091ed790(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1091ed798; end: 1091ed79f; -[SCUserFeatureLaunchServices myFriendsScopeLauncher] */

undefined8 FUN_1091ed798(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1091ed7a0; end: 1091ed7a7; -[SCUserFeatureLaunchServices findFriendsScopeLauncher] */

undefined8 FUN_1091ed7a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1091ed7a8; end: 1091ed7af; -[SCUserFeatureLaunchServices customStoryCreationScopeLauncher] */

undefined8 FUN_1091ed7a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1091ed7b0; end: 1091ed7b7; -[SCUserFeatureLaunchServices customStoryMembersScopeLauncher] */

undefined8 FUN_1091ed7b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1091ed7b8; end: 1091ed7bf; -[SCUserFeatureLaunchServices customStoryMenuScopeLauncher] */

undefined8 FUN_1091ed7b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1091ed7c0; end: 1091ed7c7; -[SCUserFeatureLaunchServices leaveCustomStoryScopeLauncher] */

undefined8 FUN_1091ed7c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1091ed7c8; end: 1091ed7cf; -[SCUserFeatureLaunchServices deleteStorySnapScopeLauncher] */

undefined8 FUN_1091ed7c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1091ed7d0; end: 1091ed7d7; -[SCUserFeatureLaunchServices mapScopeMultiLauncher] */

undefined8 FUN_1091ed7d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1091ed7d8; end: 1091ed7df; -[SCUserFeatureLaunchServices commerceBrowserScopeLauncher] */

undefined8 FUN_1091ed7d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1091ed7e0; end: 1091ed7e7; -[SCUserFeatureLaunchServices commerceReviewOrderHalfScopeLauncher] */

undefined8 FUN_1091ed7e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1091ed7e8; end: 1091ed7ef; -[SCUserFeatureLaunchServices commerceCheckoutScopeLauncher] */

undefined8 FUN_1091ed7e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1091ed7f0; end: 1091ed7f7; -[SCUserFeatureLaunchServices commerceShoppingScopeLauncher] */

undefined8 FUN_1091ed7f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1091ed7f8; end: 1091ed7ff; -[SCUserFeatureLaunchServices mapPlaceSharingScopeLauncher] */

undefined8 FUN_1091ed7f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1091ed800; end: 1091ed807; -[SCUserFeatureLaunchServices standardExternalContentShareScopeLauncher] */

undefined8 FUN_1091ed800(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1091ed808; end: 1091ed80f; -[SCUserFeatureLaunchServices auraMyProfileScopeLauncher] */

undefined8 FUN_1091ed808(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 1091ed810; end: 1091ed817; -[SCUserFeatureLaunchServices auraFriendProfileScopeLauncher] */

undefined8 FUN_1091ed810(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 1091ed818; end: 1091ed81f; -[SCUserFeatureLaunchServices previewScopeLauncher] */

undefined8 FUN_1091ed818(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 1091ed820; end: 1091ed827; -[SCUserFeatureLaunchServices publicGroupsChatScopeLauncher] */

undefined8 FUN_1091ed820(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1091ed828; end: 1091ed82f; -[SCUserFeatureLaunchServices mapFriendPickerScopeLauncher] */

undefined8 FUN_1091ed828(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 1091ed830; end: 1091ed837; -[SCUserFeatureLaunchServices venueEditorScopeLauncher] */

undefined8 FUN_1091ed830(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 1091ed838; end: 1091ed83f; -[SCUserFeatureLaunchServices topicScopeMultiLauncher] */

undefined8 FUN_1091ed838(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 1091ed840; end: 1091ed847; -[SCUserFeatureLaunchServices topicMusicScopeMultiLauncher] */

undefined8 FUN_1091ed840(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 1091ed848; end: 1091ed84f; -[SCUserFeatureLaunchServices topicLensScopeMultiLauncher] */

undefined8 FUN_1091ed848(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 1091ed850; end: 1091ed857; -[SCUserFeatureLaunchServices chatScopeLauncher] */

undefined8 FUN_1091ed850(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 1091ed858; end: 1091ed85f; -[SCUserFeatureLaunchServices addToGroupScopeLauncher] */

undefined8 FUN_1091ed858(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 1091ed860; end: 1091ed867; -[SCUserFeatureLaunchServices remixScopeLauncher] */

undefined8 FUN_1091ed860(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 1091ed868; end: 1091ed86f; -[SCUserFeatureLaunchServices bitmojiFriendmojiHintScopeLauncher] */

undefined8 FUN_1091ed868(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 1091ed870; end: 1091ed877; -[SCUserFeatureLaunchServices bitmojiFriendmojiPickerScopeLauncher] */

undefined8 FUN_1091ed870(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 1091ed878; end: 1091ed87f; -[SCUserFeatureLaunchServices bitmojiSelfiePickerScopeLauncher] */

undefined8 FUN_1091ed878(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 1091ed880; end: 1091ed887; -[SCUserFeatureLaunchServices bitmojiSettingsScopeLauncher] */

undefined8 FUN_1091ed880(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 1091ed888; end: 1091ed88f; -[SCUserFeatureLaunchServices bitmojiAvatarBuilderScopeLauncher] */

undefined8 FUN_1091ed888(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 1091ed890; end: 1091ed897; -[SCUserFeatureLaunchServices adApplePromptScopeLauncher] */

undefined8 FUN_1091ed890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 1091ed898; end: 1091ed89f; -[SCUserFeatureLaunchServices userPhoneVerificationScopeLauncher] */

undefined8 FUN_1091ed898(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 1091ed8a0; end: 1091ed8a7; -[SCUserFeatureLaunchServices mentionBarScopeLauncher] */

undefined8 FUN_1091ed8a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 1091ed8a8; end: 1091ed8af; -[SCUserFeatureLaunchServices adReportScopeLauncher] */

undefined8 FUN_1091ed8a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 1091ed8b0; end: 1091ed8b7; -[SCUserFeatureLaunchServices memoriesSnapshotSnapPickerScopeLauncher] */

undefined8 FUN_1091ed8b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 1091ed8b8; end: 1091ed8bf; -[SCUserFeatureLaunchServices memoriesPickerScopeLauncher] */

undefined8 FUN_1091ed8b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 1091ed8c0; end: 1091ed8c7; -[SCUserFeatureLaunchServices shakeToReportLauncher] */

undefined8 FUN_1091ed8c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 1091ed8c8; end: 1091ed8cf; -[SCUserFeatureLaunchServices oauth2PermissionPresenterScopeLauncher] */

undefined8 FUN_1091ed8c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}



/* Entry: 1091ed8d0; end: 1091ed8d7; -[SCUserFeatureLaunchServices modularCameraPresenter] */

undefined8 FUN_1091ed8d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



/* Entry: 1091ed8d8; end: 1091ed8df; -[SCUserFeatureLaunchServices bitmojiAvatarScopeLauncher] */

undefined8 FUN_1091ed8d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}



/* Entry: 1091ed8e0; end: 1091ed8e7; -[SCUserFeatureLaunchServices groupAvatarScopeLauncher] */

undefined8 FUN_1091ed8e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x170);
}


