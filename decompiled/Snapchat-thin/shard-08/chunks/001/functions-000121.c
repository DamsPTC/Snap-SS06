/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e09c94; end: 105e09d33;  */

void FUN_105e09c94(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  lVar1 = *(long *)(param_1 + 0x20) + 0xd0;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20) + 0xd0;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf23f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 105e09d34; end: 105e09d43;  */

void FUN_105e09d34(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105e09d44; end: 105e09f57; -[SCSendToRouterImpl showOurStoryFirstTimePostWithOnAccept:presentingViewController:] */

void FUN_105e09d44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aed70;
  _objc_retain(param_4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  uVar7 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  func_0x000108f580b4();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar5 = puVar4;
  func_0x000108f58054();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c10eda0(param_4);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(ppuVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000105e09f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
  return;
}



/* Entry: 105e09f58; end: 105e09f8b;  */

void FUN_105e09f58(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x000105e09f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105e09f8c; end: 105e09f9b;  */

void FUN_105e09f8c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105e09f9c; end: 105e0a1e7; -[SCSendToRouterImpl showOurStoryAttributionIntroForDisplayName:onAccept:presentingViewController:] */

void FUN_105e09f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_5);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000108f58024();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  func_0x000108f5803c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aed70;
  ppuVar3 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar5 = PTR_PTR_1126aed70;
  ppuVar3 = &PTR____CFConstantStringClassReference_110daf8b8;
  uVar8 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar6 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar6);
  _objc_release(puVar7);
  func_0x00010c10eda0(param_5);
  _objc_release(param_5);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000105e0a218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + 0x20) + 0x10))();
  return;
}



/* Entry: 105e0a1e8; end: 105e0a21b;  */

void FUN_105e0a1e8(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x000105e0a218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105e0a21c; end: 105e0a22b;  */

void FUN_105e0a21c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105e0a22c; end: 105e0a62f; -[SCSendToRouterImpl showSpotlightFirstTimePostV2WithOnAccept:presentingViewController:] */

void FUN_105e0a22c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  uVar4 = *(ulong *)(param_1 + 0x90);
  func_0x000108faa9c8();
  if ((uVar4 & 1) == 0) {
    func_0x000108f58534();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108f5854c();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar6 = puVar5;
  func_0x000108f5851c();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x000108f58564();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x000108f5857c();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x000108f58594();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2b838;
  func_0x000108e044b0(&PTR____CFConstantStringClassReference_110e2b838,
                      &PTR____CFConstantStringClassReference_110e2b858,0,1);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefea0();
  _objc_release(puVar12);
  _objc_release(ppuVar1);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar16 = *(undefined8 *)(param_1 + 0x78);
  puVar6 = puVar5;
  func_0x000108065d38(puVar5,uVar16,param_1,0x12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bddc0(puVar5);
  _objc_release(puVar6);
  func_0x00010c211b40(puVar5);
  _objc_retain(param_4);
  uVar13 = *(ulong *)(param_1 + 0x90);
  func_0x000108f4823c();
  lVar18 = param_4;
  if ((uVar13 & 1) == 0) {
    lVar14 = param_4;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    while (lVar14 != 0) {
      lVar15 = lVar18;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar18);
      lVar14 = lVar15;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar18 = lVar15;
    }
  }
  func_0x00010c10eda0(lVar18);
  _objc_release(lVar18);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar16);
                    /* WARNING: Could not recover jumptable at 0x000105e0a660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
  return;
}



/* Entry: 105e0a630; end: 105e0a663;  */

void FUN_105e0a630(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x000105e0a660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105e0a664; end: 105e0a673;  */

void FUN_105e0a664(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105e0a674; end: 105e0abab; -[SCSendToRouterImpl showSpotlightTermsUpdatedDialogWithOnAccept:presentingViewController:] */

void FUN_105e0a674(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = auStack_e0;
  _objc_initWeak(puVar2,param_1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000108f585ac();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_e8,auStack_e0);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar5 = PTR_PTR_1126aed70;
  ppuVar4 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  puVar6 = PTR_PTR_1126aed70;
  ppuVar4 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x90);
  func_0x000108f493ac();
  puVar10 = PTR_PTR_1126aed78;
  if (iVar1 == 0) {
    _objc_alloc(PTR_PTR_1126aed78);
    puVar11 = puVar10;
    func_0x000108f5833c();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x000108f585c4();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_d0 = puVar3;
    puStack_c8 = puVar5;
    puStack_c0 = puVar6;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x000108f585dc();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_d8 = puVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefea0(puVar10);
  }
  else {
    _objc_alloc(PTR_PTR_1126aed78);
    puVar11 = puVar10;
    func_0x000108f5833c();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x000108f585f4();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar3;
    puStack_90 = puVar5;
    puStack_88 = puVar6;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x000108f5860c();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    puStack_b8 = puVar14;
    func_0x000108f58624();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar15;
    puStack_b0 = puVar15;
    func_0x000108f5863c();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    puStack_a8 = puVar7;
    func_0x000108f58654();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar8;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefea0(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  uVar18 = *(undefined8 *)(param_1 + 0x78);
  puVar11 = puVar10;
  func_0x000108065d38(puVar10,uVar18,param_1,0x12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bddc0(puVar10);
  _objc_release(puVar11);
  func_0x00010c211b40(puVar10);
  _objc_retain(param_4);
  uVar16 = *(ulong *)(param_1 + 0x90);
  func_0x000108f4823c();
  lVar19 = param_4;
  if ((uVar16 & 1) == 0) {
    while( true ) {
      lVar17 = lVar19;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar17 == 0) break;
      lVar17 = lVar19;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar19);
      lVar19 = lVar17;
    }
  }
  func_0x00010c10eda0(lVar19);
  _objc_release(lVar19);
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_e0);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_e0);
    __Unwind_Resume(param_3);
    _objc_retain(uVar18);
    param_3 = param_3 + 0x20;
    _objc_loadWeakRetained(param_3);
    func_0x00010be7ef60();
    _objc_release(uVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 105e0abac; end: 105e0ac27;  */

void FUN_105e0abac(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7ef60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e0ac28; end: 105e0ac37;  */

void FUN_105e0ac28(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105e0ac38; end: 105e0acb3; -[SCSendToRouterImpl _presentTermsDialogFromSender:] */

void FUN_105e0ac38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_3);
  func_0x00010bdc3460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108065c5c();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e0acb4; end: 105e0aeff; -[SCSendToRouterImpl showSpotlightAttributionIntroForDisplayName:onAccept:presentingViewController:] */

void FUN_105e0acb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_5);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000108f58684();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  func_0x000108f5869c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aed70;
  ppuVar3 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar5 = PTR_PTR_1126aed70;
  ppuVar3 = &PTR____CFConstantStringClassReference_110daf8b8;
  uVar8 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar6 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar6);
  _objc_release(puVar7);
  func_0x00010c10eda0(param_5);
  _objc_release(param_5);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000105e0af30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + 0x20) + 0x10))();
  return;
}



/* Entry: 105e0af00; end: 105e0af33;  */

void FUN_105e0af00(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x000105e0af30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105e0af34; end: 105e0af43;  */

void FUN_105e0af34(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105e0af44; end: 105e0b123; -[SCSendToRouterImpl showPublicProfileAttributionNuxIfNeeded:source:onComplete:onDisplayFallback:] */

void FUN_105e0af44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar5 = *(long *)(param_1 + 0x68);
  _objc_retain(lVar5);
  puVar2 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  func_0x00010c038f40();
  _objc_release(param_3);
  param_1 = param_1 + 0xc0;
  _objc_loadWeakRetained();
  if ((param_1 == 0) || (lVar5 == 0)) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6);
    }
  }
  else {
    puVar3 = PTR_PTR_1126c4f30;
    _objc_alloc();
    func_0x00010c044f20();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105e0b124;
    puStack_78 = &UNK_110858070;
    _objc_retain();
    puStack_70 = puVar3;
    _objc_retain(param_5);
    puStack_c0 = puVar1;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x105e0b168;
    puStack_a8 = &UNK_11084aaa8;
    puStack_a0 = puVar3;
    uStack_68 = param_5;
    _objc_retain(param_6);
    lStack_98 = param_6;
    _objc_retain(puVar3);
    lVar4 = param_1;
    func_0x00010bf22580(param_1,param_2,puVar2,param_4,&puStack_90,&puStack_c0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24fbe0(puVar3,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lStack_98);
    _objc_release(puStack_a0);
    _objc_release(uStack_68);
    _objc_release(puStack_70);
    _objc_release(puVar3);
  }
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(lVar5);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105e0b124; end: 105e0b1a3;  */

void FUN_105e0b124(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bfafa00(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105e0b158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 105e0b1a4; end: 105e0b3b7; -[SCSendToRouterImpl showSpotlightNuxIfNeeded:isFriendsOnlyProfile:onComplete:onDisplayFallback:] */

void FUN_105e0b1a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar5 = *(long *)(param_1 + 0x68);
  _objc_retain(lVar5);
  puVar2 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  func_0x00010c038f40();
  _objc_release(param_3);
  param_1 = param_1 + 0xc0;
  _objc_loadWeakRetained();
  if ((param_1 == 0) || (lVar5 == 0)) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6);
    }
  }
  else {
    puVar3 = PTR_PTR_1126c4f30;
    _objc_alloc();
    func_0x00010c044f20();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105e0b3b8;
    puStack_78 = &UNK_110858070;
    _objc_retain();
    puStack_70 = puVar3;
    _objc_retain(param_5);
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105e0b3fc;
    puStack_a0 = &UNK_110842e18;
    uStack_68 = param_5;
    _objc_retain(puVar3);
    puStack_e8 = puVar1;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_105e0b404;
    puStack_d0 = &UNK_11084aaa8;
    puStack_c8 = puVar3;
    puStack_98 = puVar3;
    _objc_retain(param_6);
    lStack_c0 = param_6;
    _objc_retain(puVar3);
    lVar4 = param_1;
    func_0x00010bf227a0(param_1,param_2,puVar2,param_4,&puStack_90,&puStack_b8,&puStack_e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24fbe0(puVar3,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lStack_c0);
    _objc_release(puStack_c8);
    _objc_release(puStack_98);
    _objc_release(uStack_68);
    _objc_release(puStack_70);
    _objc_release(puVar3);
  }
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(lVar5);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105e0b3b8; end: 105e0b3fb;  */

void FUN_105e0b3b8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bfafa00(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105e0b3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 105e0b3fc; end: 105e0b403;  */

void FUN_105e0b3fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfafa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_finishOnboarding_1125c9828);
  return;
}



/* Entry: 105e0b404; end: 105e0b43f;  */

void FUN_105e0b404(long param_1)

{
  func_0x00010bfafa00(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105e0b430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105e0b440; end: 105e0b663; -[SCSendToRouterImpl showBestOfSpectaclesIntroWithOnAccept:presentingViewController:] */

void FUN_105e0b440(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aed70;
  _objc_retain(param_4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2b918;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2b918,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110e2b938;
  uVar7 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2b938,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
  func_0x00010c10eda0(param_4);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000105e0b694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
  return;
}



/* Entry: 105e0b664; end: 105e0b697;  */

void FUN_105e0b664(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x000105e0b694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105e0b698; end: 105e0b6a7;  */

void FUN_105e0b698(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105e0b6a8; end: 105e0b873; -[SCSendToRouterImpl SCShowBusinessStoryIfAbleForBusinessId:presentingViewController:completion:] */

void FUN_105e0b6a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  _objc_release(param_4);
  lVar4 = *(long *)(param_1 + 0x68);
  _objc_retain(lVar4);
  param_1 = param_1 + 0xc0;
  _objc_loadWeakRetained();
  if ((param_1 == 0) || (lVar4 == 0)) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,0);
    }
  }
  else {
    puVar2 = PTR_PTR_1126c4f30;
    _objc_alloc();
    func_0x00010c044f20();
    _objc_retain();
    _objc_retain(param_5);
    _objc_retain(puVar2);
    lVar3 = param_1;
    func_0x00010bf225a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24fbe0(puVar2);
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(param_5);
    _objc_release(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105e0b874; end: 105e0b8b7;  */

void FUN_105e0b874(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bfafa00(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105e0b8a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 105e0b8b8; end: 105e0b8bf;  */

void FUN_105e0b8b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfafa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_finishOnboarding_1125c9828);
  return;
}



/* Entry: 105e0b8c0; end: 105e0b977; -[SCSendToRouterImpl showSharedStoryWithBlockedSnapchattersInGroup:publicationId:onAccept:presentingViewController:] */

void FUN_105e0b8c0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c239ec0(PTR_PTR_1126c24a8,param_2,param_3,param_4,param_5,0,param_6,0,
                        *(undefined8 *)(param_1 + 0x80));
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e0b978; end: 105e0b9b3; -[SCSendToRouterImpl showSharedStoryTrustAndSafetyPromptWithonAccept:presentingViewController:] */

void FUN_105e0b978(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c2393a0(PTR_PTR_1126c24a8,param_2,param_3,0,param_4,*(undefined8 *)(param_1 + 0x78),
                      param_1,0,*(undefined8 *)(param_1 + 0x80));
  return;
}



/* Entry: 105e0b9b4; end: 105e0ba07; -[SCSendToRouterImpl showMusicBlockedBrandAccountModalWithPresentingViewController:] */

void FUN_105e0b9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000107e328d0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0(param_3,param_2,uVar1,1,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e0ba08; end: 105e0bc33; -[SCSendToRouterImpl showExternalLinkSendingTrustAndSafetyPromptWithOnAccept:presentingViewController:isSnapAnyone:] */

void FUN_105e0ba08(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5
                  )

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aed70;
  _objc_retain(param_4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  uVar8 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar5 = puVar4;
  FUN_105e576e8();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  if (param_5 == 0) {
    func_0x000105e57700();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000105e57718();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c10eda0(param_4);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000105e0bc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
  return;
}



/* Entry: 105e0bc34; end: 105e0bc67;  */

void FUN_105e0bc34(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x000105e0bc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105e0bc68; end: 105e0bc77;  */

void FUN_105e0bc68(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105e0bc78; end: 105e0bec7; -[SCSendToRouterImpl showAutosaveToMemoriesPromptWithOnAccept:onCancel:presentingViewController:] */

void FUN_105e0bc78(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126aed70;
  uVar8 = param_5;
  _objc_retain(param_5);
  func_0x000108dfdaac();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar2 = &PTR____CFConstantStringClassReference_110daf8b8;
  uVar8 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar5 = puVar4;
  func_0x000108dfda7c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000108dfda94();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c10eda0(param_5);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000105e0bef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
  return;
}



/* Entry: 105e0bec8; end: 105e0bf2f;  */

void FUN_105e0bec8(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x000105e0bef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105e0bf30; end: 105e0c183; -[SCSendToRouterImpl showScheduleEligibilityPromptWithOnAccept:onCancel:presentingViewController:] */

void FUN_105e0bf30(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126aed70;
  _objc_retain(param_5);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc2298;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc2298,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  uVar8 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar5 = puVar4;
  func_0x000105e342a4();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000105e342bc();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c10eda0(param_5);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000105e0c1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
  return;
}



/* Entry: 105e0c184; end: 105e0c1eb;  */

void FUN_105e0c184(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x000105e0c1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105e0c1ec; end: 105e0c343; -[SCSendToRouterImpl showBusinessAccountSelectorWithPresentingViewController:delegate:] */

void FUN_105e0c1ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x50,param_4);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c0311a0(puVar1);
  lVar2 = param_1 + 0xb8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1 + 0xb8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf240a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x38));
    _objc_release(lVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 105e0c344; end: 105e0c38f;  */

void FUN_105e0c344(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c189400(param_2);
  func_0x00010c10eda0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e0c390; end: 105e0c39f;  */

void FUN_105e0c390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_dismissViewControllerAnimated_co_1125bec68,0,0);
  return;
}



/* Entry: 105e0c3a0; end: 105e0c54b; -[SCSendToRouterImpl showSendToEducationInSpotlightWithPresentingViewController:educationType:onComplete:] */

void FUN_105e0c3a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x70);
  func_0x00010c071800();
  if (iVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x70);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      lVar3 = param_1 + 200;
      _objc_loadWeakRetained();
      _objc_release();
      puVar4 = PTR_PTR_1126aead8;
      if (lVar3 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x70);
        _objc_retain(uVar5);
        _objc_alloc(puVar4);
        func_0x00010c038f40();
        param_1 = param_1 + 200;
        _objc_loadWeakRetained(param_1);
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0xc2000000;
        pcStack_88 = FUN_105e0c54c;
        puStack_80 = &UNK_110866910;
        uStack_78 = uVar5;
        _objc_retain(param_3);
        uStack_70 = param_3;
        _objc_retain(param_5);
        puStack_c0 = puVar1;
        uStack_b8 = 0xc2000000;
        pcStack_b0 = FUN_105e0c5d0;
        puStack_a8 = &UNK_110842e18;
        lVar3 = param_1;
        uStack_a0 = uVar5;
        uStack_68 = param_5;
        func_0x00010bf230e0(param_1,param_2,param_4,puVar4,&puStack_98,&puStack_c0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_1);
        func_0x00010bf9d620(uVar5,param_2,lVar3);
        _objc_release(lVar3);
        _objc_release(uStack_68);
        _objc_release(uStack_70);
        _objc_release(uVar5);
        _objc_release(puVar4);
      }
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105e0c54c; end: 105e0c5cf;  */

void FUN_105e0c54c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
    if ((int)param_2 != 0) {
      func_0x00010bf84b00(*(undefined8 *)(param_1 + 0x28));
    }
                    /* WARNING: Could not recover jumptable at 0x000105e0c5bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2);
    return;
  }
  return;
}



/* Entry: 105e0c5d0; end: 105e0c617;  */

void FUN_105e0c5d0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105e0c618; end: 105e0c65f; -[SCSendToRouterImpl didDismissCustomStoryMembers] */

void FUN_105e0c618(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105e0c660; end: 105e0c72b; -[SCSendToRouterImpl didCompleteCustomStoryMenuScope] */

void FUN_105e0c660(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c150520(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c11ac00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a03c0();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 105e0c72c; end: 105e0c8e3; -[SCSendToRouterImpl didRemoveCustomStoryWithPublicationId:] */

void FUN_105e0c72c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c0ecca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(lVar1);
    lVar2 = lVar1;
    func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
    if (lVar2 != 0) {
      lVar9 = *plStack_120;
      do {
        lVar7 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(lVar1);
          }
          uVar8 = *(undefined8 *)(lStack_128 + lVar7 * 8);
          uVar3 = uVar8;
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c0720c0();
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar3);
          if ((int)uVar6 != 0) {
            func_0x00010c1fb940(*(undefined8 *)(param_1 + 0x48),param_2,uVar8,0,
                                &PTR____CFConstantStringClassReference_110f12a18);
            goto LAB_105e0c890;
          }
          lVar7 = lVar7 + 1;
        } while (lVar2 != lVar7);
        lVar2 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar2 != 0);
    }
LAB_105e0c890:
    _objc_release(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 105e0c8e4; end: 105e0c8e7; -[SCSendToRouterImpl friendActionSheetOpenProfile:] */

void FUN_105e0c8e4(void)

{
  return;
}



/* Entry: 105e0c8e8; end: 105e0c8eb; -[SCSendToRouterImpl friendActionSheetShowCameraForSnap:] */

void FUN_105e0c8e8(void)

{
  return;
}



/* Entry: 105e0c8ec; end: 105e0c99b; -[SCSendToRouterImpl friendActionSheetDidDismiss:] */

void FUN_105e0c8ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a03c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e0c99c; end: 105e0c99f; -[SCSendToRouterImpl groupActionSheetOpenProfileForGroupId:] */

void FUN_105e0c99c(void)

{
  return;
}



/* Entry: 105e0c9a0; end: 105e0c9a3; -[SCSendToRouterImpl groupActionSheetChatWithGroupId:deepLinkURL:] */

void FUN_105e0c9a0(void)

{
  return;
}



/* Entry: 105e0c9a4; end: 105e0c9a7; -[SCSendToRouterImpl groupActionSheetShowCameraForGroupId:] */

void FUN_105e0c9a4(void)

{
  return;
}



/* Entry: 105e0c9a8; end: 105e0ca6b; -[SCSendToRouterImpl groupActionSheetDidDismiss] */

void FUN_105e0c9a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c150520(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a03c0();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 105e0ca6c; end: 105e0cab3; -[SCSendToRouterImpl webBrowserDidDismiss:] */

void FUN_105e0ca6c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x78));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105e0cab4; end: 105e0cae7; -[SCSendToRouterImpl didFetchMemberRolesForSpotlightPosting:] */

void FUN_105e0cab4(long param_1)

{
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf765c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e0cae8; end: 105e0cba3; -[SCSendToRouterImpl didDismissAccountSelectorWithViewModel:] */

void FUN_105e0cae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c12e1c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105e0cba4;
  puStack_48 = &UNK_110841f80;
  lStack_40 = lVar1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c2a4ae0(uVar2,param_2,&puStack_60);
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(lVar1);
  return;
}



/* Entry: 105e0cba4; end: 105e0cbaf;  */

void FUN_105e0cba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf74af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didDismissAccountSelectorWithVie_1125bac60,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105e0cbb0; end: 105e0cce3; -[SCSendToRouterImpl .cxx_destruct] */

void FUN_105e0cbb0(long param_1)

{
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_destroyWeak(param_1 + 200);
  _objc_destroyWeak(param_1 + 0xc0);
  _objc_destroyWeak(param_1 + 0xb8);
  _objc_destroyWeak(param_1 + 0xb0);
  _objc_destroyWeak(param_1 + 0xa8);
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
  _objc_destroyWeak(param_1 + 0x50);
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



/* Entry: 105e0cce4; end: 105e0e0a3; -[SCSendToWorkflow initWithRouter:messagingExperimentService:circumstanceEngine:userInfoProvider:snapchatterObservableRepository:searchServiceClientFactory:searchClient:sortableSnapchatterObservableRepository:replyRecipientObservableRepository:lastSnapDataCoordinator:selectionGroupObservableRepository:selectionRecipientObservableRepository:selectionStoryObservableRepository:snapchattersDataFetcher:snapchattersDataSearcher:snapchattersDataMutator:snapchattersDisplayMetadataFetcher:customStoriesOnboardingManager:customStoriesDataFetcher:customStoriesDataMutator:blockedSnapchatterFetcher:ourStoriesOnboardingManager:ourStoriesAttributionManager:featureSettingsService:memoriesAutosaveMigrator:snapProUserProfileIdProvider:snapProProfilesProvider:lastInteractionDataService:storiesDataCoordinator:mapPersonLocationsProvider:friendmojiPresenter:imageDownloader:uiContainer:preSelectedItems:previewConfiguration:contentConfiguration:recipientConfiguration:storyConfiguration:shareSheetConfiguration:selectionTracker:contactTracker:currentUserId:logger:delegate:firstSnapSectionProvider:sendToSnapchatterObservableRepository:sectionExtensionsProviderFuture:headerExtensionFuture:groupsDataCreator:userInitiatedPerformer:utilityPerformer:isQualifiedForContactSyncCTA:resourceDownloader:userBlizzardServices:placeTaggingServices:contactPermissionInfoProvider:isLaunchedFromLegacySendTo:sendToTooltipsService:webBrowsingScopeExposer:sendToAttribution:offPlatformShareOnMainCameraPreviewService:enableSelectableContacts:shouldShowEducationPopup:snapSendEvents:valdiRuntimeProvider:cofStore:spotlightRepliesFeatureSettingsManager:spotlightShareUIProvider:userBirthdayProvider:sendToActionSheetScopeExposer:selectionSpotlightStoryObservableRepository:newGroupDelegate:storyPrivacySettingManager:contextExperimentService:sendToExperimentConfiguration:sendToUIConfiguration:sendToMentionsConfiguration:remixConfiguration:recentlyActiveService:offPlatformShareServices:sendToSuggestionsDataService:composerPeopleBridgeFriendServices:composerPeopleBridgeGroupServices:composerNetworkingBridgeServices:composerCoreUIServices:spotlightNavigationService:sendToRankingConfiguration:recentsDebugScopeExposer:storiesBlizzardLogger:contextualSignalsObservable:sendToFeedLogger:createPostScopeExposer:renderingTracker:subscriptionInfoProvider:streakProvider:showSendToTray:sendToSpotlightEligibilityService:sendToSharingConfigurationService:customAppThemeProvider:avatarFactory:fanPassCreatorInfoProvider:spotlightAutoShareService:] */

undefined8 *
FUN_105e0cce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined1 param_54,undefined4 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined1 param_60,
             undefined4 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
             undefined8 param_65,undefined4 param_66,undefined4 param_67,undefined8 param_68,
             undefined8 param_69,undefined8 param_70,undefined8 param_71,undefined8 param_72,
             undefined8 param_73)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined1 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
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
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_62);
  _objc_retain(param_63);
  _objc_retain(param_64);
  _objc_retain(param_65);
  _objc_retain(param_68);
  _objc_retain(param_69);
  _objc_retain(param_70);
  _objc_retain(param_71);
  _objc_retain(param_72);
  _objc_retain(param_73);
  _objc_retain(in_stack_000001f0);
  _objc_retain(in_stack_000001f8);
  _objc_retain(in_stack_00000200);
  _objc_retain(in_stack_00000208);
  _objc_retain(in_stack_00000210);
  _objc_retain(in_stack_00000218);
  _objc_retain(in_stack_00000220);
  _objc_retain(in_stack_00000228);
  _objc_retain(in_stack_00000230);
  _objc_retain(in_stack_00000238);
  _objc_retain(in_stack_00000240);
  _objc_retain(in_stack_00000248);
  _objc_retain(in_stack_00000250);
  _objc_retain(in_stack_00000258);
  _objc_retain(in_stack_00000260);
  _objc_retain(in_stack_00000268);
  _objc_retain(in_stack_00000270);
  _objc_retain(in_stack_00000278);
  _objc_retain(in_stack_00000280);
  _objc_retain(in_stack_00000288);
  _objc_retain(in_stack_00000290);
  _objc_retain(in_stack_00000298);
  _objc_retain(in_stack_000002a0);
  _objc_retain(in_stack_000002a8);
  _objc_retain(in_stack_000002b0);
  _objc_retain(in_stack_000002b8);
  _objc_retain(in_stack_000002c8);
  _objc_retain(in_stack_000002d0);
  _objc_retain(in_stack_000002d8);
  _objc_retain(in_stack_000002e0);
  _objc_retain(in_stack_000002e8);
  _objc_retain(in_stack_000002f0);
  puStack_70 = PTR_PTR_1126ed340;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0x55];
    puVar1[0x55] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[4];
    puVar1[4] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[5];
    puVar1[5] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[6];
    puVar1[6] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[7];
    puVar1[7] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[8];
    puVar1[8] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[9];
    puVar1[9] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[10];
    puVar1[10] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_34;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002e0);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = in_stack_000002e0;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_38;
    _objc_release(uVar2);
    uVar2 = param_38;
    func_0x00010c0d3a40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x71];
    puVar1[0x71] = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_39);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_39;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc();
    func_0x00010c060400();
    uVar2 = puVar1[0x25];
    puVar1[0x25] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_45;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x2c,param_46);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x30];
    puVar1[0x30] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_47;
    _objc_release(uVar2);
    _objc_retain(param_48);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_48;
    _objc_release(uVar2);
    _objc_retain(param_49);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_49;
    _objc_release(uVar2);
    _objc_retain(param_50);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_50;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_5);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x38];
    puVar1[0x38] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = puVar1[0x86];
    puVar1[0x86] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_51);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_51;
    _objc_release(uVar2);
    _objc_retain(param_52);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_52;
    _objc_release(uVar2);
    _objc_retain(param_53);
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = param_53;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x3d) = param_54;
    _objc_retain(param_56);
    uVar2 = puVar1[0x3e];
    puVar1[0x3e] = param_56;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x3f];
    puVar1[0x3f] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x40];
    puVar1[0x40] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_57);
    uVar2 = puVar1[0x41];
    puVar1[0x41] = param_57;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x85) = 0;
    _objc_retain(param_58);
    uVar2 = puVar1[0x42];
    puVar1[0x42] = param_58;
    _objc_release(uVar2);
    _objc_retain(param_59);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_59;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x43) = param_60;
    _objc_retain(param_62);
    uVar2 = puVar1[0x44];
    puVar1[0x44] = param_62;
    _objc_release(uVar2);
    _objc_retain(param_63);
    uVar2 = puVar1[0x45];
    puVar1[0x45] = param_63;
    _objc_release(uVar2);
    _objc_retain(param_64);
    uVar2 = puVar1[0x46];
    puVar1[0x46] = param_64;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x47) = (undefined1)param_66;
    lVar4 = puVar1[0x46];
    func_0x00010c243400();
    *(bool *)((long)puVar1 + 0x239) = lVar4 == 4;
    _objc_retain(param_65);
    uVar2 = puVar1[0x4b];
    puVar1[0x4b] = param_65;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x23a) = param_66._1_1_;
    _objc_retain(param_68);
    uVar2 = puVar1[0x48];
    puVar1[0x48] = param_68;
    _objc_release(uVar2);
    _objc_retain(param_69);
    uVar2 = puVar1[0x49];
    puVar1[0x49] = param_69;
    _objc_release(uVar2);
    _objc_retain(param_70);
    uVar2 = puVar1[0x4a];
    puVar1[0x4a] = param_70;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x4c];
    puVar1[0x4c] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x4d];
    puVar1[0x4d] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_71);
    uVar2 = puVar1[0x4e];
    puVar1[0x4e] = param_71;
    _objc_release(uVar2);
    _objc_retain(param_72);
    uVar2 = puVar1[0x56];
    puVar1[0x56] = param_72;
    _objc_release(uVar2);
    _objc_retain(param_73);
    uVar2 = puVar1[0x4f];
    puVar1[0x4f] = param_73;
    _objc_release(uVar2);
    _objc_retain(in_stack_000001f0);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = in_stack_000001f0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000001f8);
    uVar2 = puVar1[0x51];
    puVar1[0x51] = in_stack_000001f8;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000200);
    uVar2 = puVar1[0x52];
    puVar1[0x52] = in_stack_00000200;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000208);
    uVar2 = puVar1[0x53];
    puVar1[0x53] = in_stack_00000208;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000210);
    uVar2 = puVar1[0x54];
    puVar1[0x54] = in_stack_00000210;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000218);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = in_stack_00000218;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000220);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = in_stack_00000220;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000228);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = in_stack_00000228;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000230);
    uVar2 = puVar1[0x57];
    puVar1[0x57] = in_stack_00000230;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000238);
    uVar2 = puVar1[0x58];
    puVar1[0x58] = in_stack_00000238;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000240);
    uVar2 = puVar1[0x59];
    puVar1[0x59] = in_stack_00000240;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000248);
    uVar2 = puVar1[0x5f];
    puVar1[0x5f] = in_stack_00000248;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000250);
    uVar2 = puVar1[0x60];
    puVar1[0x60] = in_stack_00000250;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000258);
    uVar2 = puVar1[0x61];
    puVar1[0x61] = in_stack_00000258;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000260);
    uVar2 = puVar1[0x62];
    puVar1[0x62] = in_stack_00000260;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000268);
    uVar2 = puVar1[99];
    puVar1[99] = in_stack_00000268;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 100,in_stack_00000270);
    _objc_retain(in_stack_00000278);
    uVar2 = puVar1[0x65];
    puVar1[0x65] = in_stack_00000278;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000280);
    uVar2 = puVar1[0x66];
    puVar1[0x66] = in_stack_00000280;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000288);
    uVar2 = puVar1[0x67];
    puVar1[0x67] = in_stack_00000288;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000290);
    uVar2 = puVar1[0x69];
    puVar1[0x69] = in_stack_00000290;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000298);
    uVar2 = puVar1[0x6b];
    puVar1[0x6b] = in_stack_00000298;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002a0);
    uVar2 = puVar1[0x6c];
    puVar1[0x6c] = in_stack_000002a0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002a8);
    uVar2 = puVar1[0x72];
    puVar1[0x72] = in_stack_000002a8;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002b0);
    uVar2 = puVar1[0x75];
    puVar1[0x75] = in_stack_000002b0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002b8);
    uVar2 = puVar1[0x78];
    puVar1[0x78] = in_stack_000002b8;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x79) = in_stack_000002c0;
    _objc_retain(in_stack_000002c8);
    uVar2 = puVar1[0x7b];
    puVar1[0x7b] = in_stack_000002c8;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002d0);
    uVar2 = puVar1[0x7c];
    puVar1[0x7c] = in_stack_000002d0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002d8);
    uVar2 = puVar1[0x7e];
    puVar1[0x7e] = in_stack_000002d8;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002e8);
    uVar2 = puVar1[0x80];
    puVar1[0x80] = in_stack_000002e8;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x81) = 0;
    puVar3 = PTR_PTR_1126c4f38;
    _objc_opt_new();
    uVar2 = puVar1[0x82];
    puVar1[0x82] = puVar3;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002f0);
    uVar2 = puVar1[0x83];
    puVar1[0x83] = in_stack_000002f0;
    _objc_release(uVar2);
    _objc_release(param_5);
  }
  _objc_release(in_stack_000002f0);
  _objc_release(in_stack_000002e8);
  _objc_release(in_stack_000002e0);
  _objc_release(in_stack_000002d8);
  _objc_release(in_stack_000002d0);
  _objc_release(in_stack_000002c8);
  _objc_release(in_stack_000002b8);
  _objc_release(in_stack_000002b0);
  _objc_release(in_stack_000002a8);
  _objc_release(in_stack_000002a0);
  _objc_release(in_stack_00000298);
  _objc_release(in_stack_00000290);
  _objc_release(in_stack_00000288);
  _objc_release(in_stack_00000280);
  _objc_release(in_stack_00000278);
  _objc_release(in_stack_00000270);
  _objc_release(in_stack_00000268);
  _objc_release(in_stack_00000260);
  _objc_release(in_stack_00000258);
  _objc_release(in_stack_00000250);
  _objc_release(in_stack_00000248);
  _objc_release(in_stack_00000240);
  _objc_release(in_stack_00000238);
  _objc_release(in_stack_00000230);
  _objc_release(in_stack_00000228);
  _objc_release(in_stack_00000220);
  _objc_release(in_stack_00000218);
  _objc_release(in_stack_00000210);
  _objc_release(in_stack_00000208);
  _objc_release(in_stack_00000200);
  _objc_release(in_stack_000001f8);
  _objc_release(in_stack_000001f0);
  _objc_release(param_73);
  _objc_release(param_72);
  _objc_release(param_71);
  _objc_release(param_70);
  _objc_release(param_69);
  _objc_release(param_68);
  _objc_release(param_65);
  _objc_release(param_64);
  _objc_release(param_63);
  _objc_release(param_62);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
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



/* Entry: 105e0e0a4; end: 105e0e0d3;  */

void FUN_105e0e0a4(double param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000108f4a2bc(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,(long)param_1);
  return;
}



/* Entry: 105e0e0d4; end: 105e0f743; -[SCSendToWorkflow beginWorkflow] */

void FUN_105e0e0d4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined8 uVar46;
  long lVar47;
  long lVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined *puVar51;
  undefined *puVar52;
  undefined *puVar53;
  undefined8 uVar54;
  undefined *puVar55;
  undefined *puVar56;
  undefined *puVar57;
  undefined *puVar58;
  undefined *puVar59;
  undefined *puVar60;
  undefined *puVar61;
  undefined *puVar62;
  undefined *puVar63;
  ulong uVar64;
  undefined *puVar65;
  undefined *puVar66;
  undefined *puVar67;
  undefined *puVar68;
  undefined *puVar69;
  undefined *puVar70;
  undefined *puVar71;
  undefined *puVar72;
  undefined *puVar73;
  long lVar74;
  undefined *puVar75;
  undefined *puVar76;
  undefined *puVar77;
  undefined *puVar78;
  undefined *puVar79;
  undefined *puVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  long lVar86;
  undefined *puStack_5a8;
  undefined1 auStack_458 [8];
  undefined *puStack_450;
  undefined8 uStack_448;
  code *pcStack_440;
  undefined *puStack_438;
  undefined1 auStack_430 [8];
  undefined1 auStack_428 [8];
  undefined *puStack_420;
  undefined8 uStack_418;
  code *pcStack_410;
  undefined *puStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 uStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  code *pcStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 uStack_368;
  undefined *puStack_360;
  undefined8 uStack_358;
  code *pcStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  code *pcStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain();
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain();
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain();
  uVar82 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar82);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain();
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain();
  uVar10 = *(undefined8 *)(param_1 + 400);
  _objc_retain();
  uVar11 = *(undefined8 *)(param_1 + 0xc0);
  _objc_retain();
  uVar12 = *(undefined8 *)(param_1 + 200);
  _objc_retain();
  uVar13 = *(undefined8 *)(param_1 + 0xd0);
  _objc_retain();
  uVar14 = *(undefined8 *)(param_1 + 0x100);
  _objc_retain();
  uVar15 = *(undefined8 *)(param_1 + 0x108);
  _objc_retain();
  uVar85 = *(undefined8 *)(param_1 + 0x110);
  _objc_retain(uVar85);
  uVar16 = *(undefined8 *)(param_1 + 0x120);
  _objc_retain();
  uVar17 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain();
  uVar18 = *(undefined8 *)(param_1 + 0xe0);
  _objc_retain();
  uVar19 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain();
  lVar86 = *(long *)(param_1 + 0x130);
  _objc_retain(lVar86);
  uVar20 = *(undefined8 *)(param_1 + 0x138);
  _objc_retain();
  uVar22 = uVar82;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar22;
  func_0x00010bf01c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar22);
  uVar22 = *(undefined8 *)(param_1 + 0x158);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + 0x140);
  _objc_retain();
  uVar24 = *(undefined8 *)(param_1 + 0x1b8);
  _objc_retain();
  uVar25 = *(undefined8 *)(param_1 + 0x198);
  _objc_retain();
  uVar26 = *(undefined8 *)(param_1 + 0x1a0);
  _objc_retain();
  uVar27 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retain();
  uVar28 = *(undefined8 *)(param_1 + 0xb8);
  _objc_retain();
  uVar29 = *(undefined8 *)(param_1 + 0x1d8);
  _objc_retain();
  uVar30 = *(undefined8 *)(param_1 + 0x220);
  _objc_retain();
  lVar31 = *(long *)(param_1 + 0x230);
  _objc_retain();
  uVar32 = *(undefined8 *)(param_1 + 0x260);
  _objc_retain();
  uVar33 = *(undefined8 *)(param_1 + 0x268);
  _objc_retain();
  uVar34 = *(undefined8 *)(param_1 + 0x2c0);
  _objc_retain();
  uVar35 = *(undefined8 *)(param_1 + 0x2a8);
  _objc_retain();
  uVar36 = *(undefined8 *)(param_1 + 0xe8);
  _objc_retain();
  uVar37 = *(undefined8 *)(param_1 + 0xf0);
  _objc_retain();
  uVar38 = *(undefined8 *)(param_1 + 0x348);
  _objc_retain();
  uVar39 = *(undefined8 *)(param_1 + 0x3a8);
  _objc_retain();
  uVar40 = *(undefined8 *)(param_1 + 0x3c0);
  _objc_retain();
  uVar41 = *(undefined8 *)(param_1 + 0x400);
  _objc_retain();
  uVar42 = *(undefined8 *)(param_1 + 0x418);
  _objc_retain();
  func_0x00010bdf3120(param_1);
  if (*(char *)(param_1 + 0x1e8) == '\x01') {
    uVar43 = *(undefined8 *)(param_1 + 0xd8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcdbe0();
    _objc_release(uVar43);
  }
  uVar43 = *(undefined8 *)(param_1 + 0x220);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22fa60();
  _objc_release(uVar43);
  puVar44 = PTR_PTR_1126c4f40;
  _objc_alloc();
  puVar45 = PTR_PTR_1126c4f48;
  _objc_alloc();
  func_0x00010bffe1e0();
  uVar43 = *(undefined8 *)(param_1 + 600);
  func_0x00010c252560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee2e0();
  _objc_release(uVar43);
  _objc_release(puVar45);
  uVar46 = *(undefined8 *)(param_1 + 0x210);
  func_0x00010c08d800();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = *(long *)(param_1 + 0x210);
  func_0x00010c08d820();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = lVar86;
  func_0x00010c0ee460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar48 == 0) {
    lVar48 = lVar86;
    func_0x00010c0ee480(lVar86);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d6cc0(uVar43);
  }
  else {
    lVar48 = lVar86;
    func_0x00010c0ee460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d6ca0(uVar43);
    _objc_release(lVar48);
    lVar48 = lVar47;
    func_0x00010c269d40(lVar47);
    _objc_retainAutoreleasedReturnValue();
    lVar74 = lVar86;
    func_0x00010c23f6e0(lVar86);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaaa60(lVar48);
    _objc_release(lVar74);
    _objc_release(lVar48);
    lVar48 = lVar47;
    func_0x00010c269d40(lVar47);
    _objc_retainAutoreleasedReturnValue();
    lVar74 = lVar86;
    func_0x00010c275800(lVar86);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0(lVar48);
    _objc_release(lVar74);
  }
  _objc_release(lVar48);
  if (*(long *)(param_1 + 0x2b8) != 0) {
    func_0x00010c1298a0();
  }
  func_0x00010c07a240(*(undefined8 *)(param_1 + 0x130));
  func_0x00010c249860(lVar86);
  func_0x00010c2017e0(uVar43);
  func_0x00010bf013a0(lVar86);
  func_0x00010c1671c0(uVar43);
  func_0x00010c07b5a0(*(undefined8 *)(param_1 + 0x130));
  func_0x00010c1671e0(uVar43);
  puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_105e0f744;
  puStack_180 = &UNK_1108ead50;
  puVar49 = PTR_PTR_1126ae720;
  puStack_178 = puVar44;
  uStack_170 = uVar28;
  uStack_168 = uVar11;
  uStack_160 = uVar24;
  uStack_158 = uVar36;
  uStack_150 = uVar37;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d8 = 0xc2000000;
  uStack_1d0 = 0x105e0f77c;
  puStack_1c8 = &UNK_1108ead80;
  puVar50 = PTR_PTR_1126ae720;
  puStack_1c0 = puVar44;
  uStack_1b8 = uVar11;
  uStack_1b0 = uVar24;
  uStack_1a8 = uVar36;
  uStack_1a0 = uVar37;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_208 = 0xc2000000;
  uStack_200 = 0x105e0f7b4;
  puStack_1f8 = &UNK_1108eadb0;
  puVar51 = PTR_PTR_1126ae720;
  uStack_1f0 = uVar5;
  uStack_1e8 = uVar36;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar83 = *(undefined8 *)(param_1 + 0x150);
  _objc_retain(uVar83);
  uVar84 = *(undefined8 *)(param_1 + 0x128);
  _objc_retain(uVar84);
  puStack_250 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_248 = 0xc2000000;
  pcStack_240 = FUN_105e0f7e4;
  puStack_238 = &UNK_1108eade0;
  puVar52 = PTR_PTR_1126ae720;
  puStack_230 = puVar44;
  uStack_228 = uVar84;
  uStack_220 = uVar2;
  uStack_218 = uVar83;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puStack_330 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_328 = 0xc2000000;
  pcStack_320 = FUN_105e0f850;
  puStack_318 = &UNK_1108eae10;
  puVar53 = PTR_PTR_1126ae720;
  puStack_310 = puVar44;
  uStack_308 = uVar2;
  uStack_300 = uVar32;
  uStack_2f8 = uVar33;
  uStack_2f0 = uVar3;
  uStack_2e8 = uVar5;
  uStack_2e0 = uVar6;
  uStack_2d8 = uVar7;
  uStack_2d0 = uVar8;
  uStack_2c8 = uVar9;
  uStack_2c0 = uVar18;
  uStack_2b8 = uVar19;
  uStack_2b0 = uVar23;
  uStack_2a8 = uVar10;
  uStack_2a0 = uVar29;
  uStack_298 = uVar24;
  uStack_290 = uVar36;
  uStack_288 = uVar34;
  uStack_280 = uVar17;
  puStack_278 = puVar51;
  puStack_270 = puVar52;
  uStack_268 = uVar22;
  lStack_260 = lVar31;
  uStack_258 = uVar38;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puStack_360 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_358 = 0xc2000000;
  pcStack_350 = FUN_105e0fa68;
  puStack_348 = &UNK_110841f80;
  uStack_340 = uVar36;
  puStack_338 = puVar53;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x1d8));
  uVar54 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar54;
  func_0x00010bfdac40();
  _objc_release(uVar54);
  puStack_3d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3d0 = 0xc2000000;
  pcStack_3c8 = FUN_105e0fae0;
  puStack_3c0 = &UNK_1108eae40;
  uStack_368 = (undefined1)uVar2;
  puVar55 = PTR_PTR_1126ae720;
  puStack_3b8 = puVar44;
  uStack_3b0 = uVar4;
  uStack_3a8 = uVar11;
  puStack_3a0 = puVar49;
  puStack_398 = puVar50;
  uStack_390 = uVar28;
  uStack_388 = uVar24;
  uStack_380 = uVar36;
  uStack_378 = uVar37;
  uStack_370 = uVar39;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar56 = PTR_PTR_1126c4f80;
  _objc_alloc();
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110f4ca98;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110f4ca78;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110f4cab8;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f4cad8;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e2c9b8;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e2c9d8;
  puVar45 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044060();
  _objc_release(puVar45);
  _objc_retain(puVar56);
  uVar2 = *(undefined8 *)(param_1 + 0x3a0);
  *(undefined **)(param_1 + 0x3a0) = puVar56;
  _objc_release(uVar2);
  puVar57 = PTR_PTR_1126ae568;
  _objc_opt_new();
  puVar58 = PTR_PTR_1126c4f88;
  _objc_alloc();
  func_0x00010c00adc0();
  puVar59 = PTR_PTR_1126c2500;
  _objc_alloc();
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110f4ca58;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110f4ca98;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110f4cab8;
  puVar45 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044000();
  _objc_release(puVar45);
  puVar60 = PTR_PTR_1126c4f90;
  _objc_alloc();
  ppuStack_108 = &PTR____CFConstantStringClassReference_110f4ca98;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110f4ca78;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110f4cab8;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110e2c9b8;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110e2c9d8;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110e2ca18;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110e2c9f8;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110e2ca38;
  puVar45 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108faa660();
  func_0x000108faa6c4(*(undefined8 *)(param_1 + 0x1b8));
  uVar2 = *(undefined8 *)(param_1 + 0x1b8);
  func_0x000108faa758(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf40();
  _objc_release(uVar2);
  _objc_release(puVar45);
  puVar61 = PTR_PTR_1126c4f98;
  _objc_alloc();
  func_0x00010c044020();
  puVar62 = PTR_PTR_1126c4fa0;
  _objc_alloc();
  func_0x00010c0445c0();
  puVar45 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar63 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_138 = puVar60;
  puStack_130 = puVar56;
  puStack_128 = puVar58;
  puStack_120 = puVar61;
  puStack_118 = puVar59;
  puStack_110 = puVar62;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar63);
  uVar64 = *(ulong *)(param_1 + 0x1b8);
  func_0x000108faa744();
  if ((uVar64 & 1) == 0) {
    puVar63 = PTR_PTR_1126c4fa8;
    _objc_alloc(PTR_PTR_1126c4fa8);
    func_0x00010c00a2c0();
    func_0x00010befa120(puVar45);
    _objc_release(puVar63);
  }
  puVar65 = PTR_PTR_1126c2518;
  _objc_alloc();
  func_0x00010bff0760();
  lVar48 = param_1;
  func_0x00010bdf4000();
  _objc_retainAutoreleasedReturnValue();
  puVar66 = PTR_PTR_1126c4fb0;
  _objc_alloc();
  func_0x00010c043f80();
  puVar67 = PTR_PTR_1126c4fb8;
  _objc_alloc();
  func_0x00010c001840();
  uVar54 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar54;
  func_0x00010c082880();
  _objc_release(uVar54);
  puVar63 = PTR_PTR_1126ae720;
  puStack_420 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_418 = 0xc2000000;
  pcStack_410 = FUN_105e0fb3c;
  puStack_408 = &UNK_1108eae70;
  uStack_400 = uVar23;
  uStack_3f8 = uVar42;
  uStack_3f0 = uVar29;
  _objc_retain(uVar43);
  uStack_3e0 = (undefined1)uVar2;
  uStack_3e8 = uVar43;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar63);
  uVar2 = *(undefined8 *)(param_1 + 0x420);
  *(undefined **)(param_1 + 0x420) = puVar63;
  _objc_release(uVar2);
  puVar68 = PTR_PTR_1126c4fc8;
  _objc_alloc();
  func_0x00010c001dc0();
  puVar69 = PTR_PTR_1126c4fd0;
  _objc_alloc();
  func_0x00010c054180();
  puVar70 = PTR_PTR_1126c4fd8;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x400);
  func_0x00010c2608e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar54 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c0d3720(uVar54);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04f060();
  _objc_release(uVar54);
  _objc_release(uVar2);
  puVar71 = PTR_PTR_1126c4fe0;
  _objc_alloc_init();
  puVar72 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_148 = puVar70;
  puStack_140 = puVar71;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar73 = puVar72;
  func_0x00010c0d3c80();
  _objc_release(puVar72);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x130);
  func_0x00010c07a240();
  if (iVar1 == 0) {
    puStack_5a8 = (undefined *)0x0;
  }
  else {
    puStack_5a8 = PTR_PTR_1126c4fe8;
    _objc_alloc_init();
    func_0x00010befa120(puVar73);
  }
  func_0x00010c127020(*(undefined8 *)(param_1 + 0x140));
  puVar72 = PTR_PTR_1126c4ff0;
  _objc_alloc();
  func_0x00010c001c40();
  lVar74 = lVar31;
  func_0x00010c243400();
  if (lVar74 == 4) {
    lVar74 = *(long *)(param_1 + 0x138);
    func_0x00010c0c45a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar74 != 0) {
      func_0x00010bf182a0();
    }
    _objc_release(lVar74);
  }
  puVar75 = PTR_PTR_1126c4ff8;
  _objc_alloc();
  func_0x000108faa674(*(undefined8 *)(param_1 + 0x1b8));
  func_0x000108faa688(*(undefined8 *)(param_1 + 0x1b8));
  func_0x000108faa6b0(*(undefined8 *)(param_1 + 0x1b8));
  uVar2 = *(undefined8 *)(param_1 + 0x1b8);
  func_0x000108faa758(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00ad60();
  _objc_release(uVar2);
  puVar76 = PTR_PTR_1126c5000;
  _objc_alloc();
  puVar77 = PTR_PTR_1126afdd8;
  func_0x00010c247a40(*(undefined8 *)(param_1 + 0x230));
  func_0x00010bfc8740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c243400();
  func_0x00010c001820();
  _objc_release(puVar77);
  _objc_initWeak(auStack_428,puVar76);
  puVar77 = PTR_PTR_1126aeaf8;
  _objc_alloc();
  puStack_450 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_448 = 0xc2000000;
  pcStack_440 = FUN_105e0fbbc;
  puStack_438 = &UNK_110849680;
  _objc_copyWeak(auStack_430,auStack_428);
  _objc_copyWeak(auStack_458,auStack_428);
  func_0x00010c0311a0();
  func_0x00010c21b220(puVar68);
  func_0x00010c21b220(puVar72);
  func_0x00010c21b220(puVar62);
  func_0x00010c21b220(puVar70);
  func_0x00010c21b220(puVar71);
  func_0x00010c21b220(puStack_5a8);
  puVar78 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  uVar2 = *(undefined8 *)(param_1 + 0x178);
  _objc_retain(uVar2);
  puVar79 = PTR_PTR_1126c5008;
  _objc_alloc(PTR_PTR_1126c5008);
  func_0x00010c057320();
  func_0x00010bf9d620(uVar2);
  func_0x00010c09c7a0(puVar76);
  if (*(char *)(param_1 + 0x3c8) == '\x01') {
    puVar80 = PTR_PTR_1126c5010;
    _objc_alloc();
    uVar54 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c269d40(uVar54);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15d720();
    func_0x00010c00afa0();
    uVar81 = *(undefined8 *)(param_1 + 0x3d0);
    *(undefined **)(param_1 + 0x3d0) = puVar80;
    _objc_release(uVar81);
    _objc_release(uVar54);
  }
  func_0x00010bf0c980(uVar14);
  _objc_retain(puVar76);
  uVar54 = *(undefined8 *)(param_1 + 0x168);
  *(undefined **)(param_1 + 0x168) = puVar76;
  _objc_release(uVar54);
  _objc_storeWeak(param_1 + 0x170,puVar76);
  _objc_retain(puVar77);
  uVar54 = *(undefined8 *)(param_1 + 0x1b0);
  *(undefined **)(param_1 + 0x1b0) = puVar77;
  _objc_release(uVar54);
  func_0x00010bea4e80(param_1);
  func_0x00010be379a0(param_1);
  _objc_release(puVar79);
  _objc_release(uVar2);
  _objc_release(puVar78);
  _objc_release(puVar77);
  _objc_destroyWeak(auStack_458);
  _objc_destroyWeak(auStack_430);
  _objc_destroyWeak(auStack_428);
  _objc_release(puVar76);
  _objc_release(puVar75);
  _objc_release(puVar72);
  _objc_release(puStack_5a8);
  _objc_release(puVar73);
  _objc_release(puVar71);
  _objc_release(puVar70);
  _objc_release(puVar69);
  _objc_release(puVar68);
  _objc_release(puVar63);
  _objc_release(uStack_3e8);
  _objc_release(puVar67);
  _objc_release(puVar66);
  _objc_release(lVar48);
  _objc_release(puVar65);
  _objc_release(puVar45);
  _objc_release(puVar62);
  _objc_release(puVar61);
  _objc_release(puVar60);
  _objc_release(puVar59);
  _objc_release(puVar58);
  _objc_release(puVar57);
  _objc_release(puVar56);
  _objc_release(puVar55);
  _objc_release(puVar53);
  _objc_release(puVar52);
  _objc_release(uVar84);
  _objc_release(uVar83);
  _objc_release(puVar51);
  _objc_release(puVar50);
  _objc_release(puVar49);
  _objc_release(uVar43);
  _objc_release(lVar47);
  _objc_release(uVar46);
  _objc_release(puVar44);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(lVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(lVar86);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar85);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar82);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_458);
    _objc_destroyWeak(auStack_430);
    _objc_destroyWeak(auStack_428);
    __Unwind_Resume();
    _objc_alloc(PTR_PTR_1126c4f50);
    func_0x00010c001940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 105e0f744; end: 105e0f7e3;  */

void FUN_105e0f744(void)

{
  _objc_alloc(PTR_PTR_1126c4f50);
  func_0x00010c001940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e0f7e4; end: 105e0f84f;  */

void FUN_105e0f7e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c4f68;
  _objc_alloc(PTR_PTR_1126c4f68);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfba4a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016600(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e0f850; end: 105e0fa67;  */

void FUN_105e0f850(void)

{
  _objc_alloc(PTR_PTR_1126c4f70);
  func_0x00010c001e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e0fa68; end: 105e0fadf;  */

void FUN_105e0fa68(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8bf20();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c112a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105e0fae0; end: 105e0fb3b;  */

void FUN_105e0fae0(void)

{
  _objc_alloc(PTR_PTR_1126c4f78);
  func_0x00010c001f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e0fb3c; end: 105e0fbbb;  */

void FUN_105e0fb3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR_PTR_1126c4fc0;
  _objc_alloc(PTR_PTR_1126c4fc0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c15aa80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0440a0(puVar4,param_2,uVar1,uVar3,uVar2,uVar5,*(undefined1 *)(param_1 + 0x40));
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e0fbbc; end: 105e0fc57;  */

void FUN_105e0fbbc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e0fc58; end: 105e0fc7f; -[SCSendToWorkflow _viewController_INTERNAL_ONLY] */

void FUN_105e0fc58(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e0fc80; end: 105e0fdbf; -[SCSendToWorkflow didSendWithSelectedItems:additionalText:] */

void FUN_105e0fc80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined1 *)(param_1 + 0x408) = 1;
  lVar1 = param_1;
  func_0x00010beb5180();
  if ((int)lVar1 == 0) {
    func_0x00010bdd0d40(param_1);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c239b60(uVar2);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e0fdc0; end: 105e0fdf3;  */

void FUN_105e0fdc0(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd0d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e0fdf4; end: 105e0fdf7;  */

void FUN_105e0fdf4(void)

{
  return;
}



/* Entry: 105e0fdf8; end: 105e0fe83; -[SCSendToWorkflow didDismissWithSelectedItems:sendToDismissSource:] */

void FUN_105e0fdf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010be028c0(param_1);
  if ((*(byte *)(param_1 + 0x408) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x1b8);
    func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e2b978,1,0);
    if ((int)uVar1 != 0) {
      func_0x00010be93c60(param_1);
    }
    param_1 = param_1 + 0x160;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf75420();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e0fe84; end: 105e0ff0b; -[SCSendToWorkflow didStartEditNewGroupWithSelectedItems:source:] */

void FUN_105e0fe84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  func_0x00010c238a80(*(undefined8 *)(param_1 + 8),param_2,param_3,puVar1,param_1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e0ff0c; end: 105e100a3; -[SCSendToWorkflow didStartCreateNewGroupWithSelectedItems:source:] */

void FUN_105e0ff0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x158);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x290);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  func_0x00010bf566a0(uVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e100a4; end: 105e1013f;  */

void FUN_105e100a4(long param_1,uint param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (((param_2 & 1) == 0) && (param_3 == 0)) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf74360();
  _objc_release(uVar1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9da60();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e10140; end: 105e1016b; -[SCSendToWorkflow didTapFloatingShareButton] */

void FUN_105e10140(long param_1)

{
  param_1 = param_1 + 0x170;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfe1f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e1016c; end: 105e1018b; -[SCSendToWorkflow expandSendToTrayIfPossible] */

void FUN_105e1016c(long param_1)

{
  if ((*(char *)(param_1 + 0x3c8) == '\x01') && (*(long *)(param_1 + 0x3d0) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c219ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x3d0),PTR_s_setTrayPosition__1126641e0,0x10);
    return;
  }
  return;
}



/* Entry: 105e1018c; end: 105e1019b; -[SCSendToWorkflow didSelectCustomStoryCreation] */

void FUN_105e1018c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_showCustomStoryCreationWithPrese_11266b5c0,
             *(undefined8 *)(param_1 + 0x168));
  return;
}



/* Entry: 105e1019c; end: 105e101d7; -[SCSendToWorkflow didSelectComeBackLaterToSpotlightStory] */

void FUN_105e1019c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000108f58774();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23a240(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e101d8; end: 105e101e7; -[SCSendToWorkflow didSelectPrivateStoryFirstTimePostForPublicationId:onAccept:] */

void FUN_105e101d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c239450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_showPrivateStoryFirstTimePostFor_11266bf38,param_3,
             param_4,*(undefined8 *)(param_1 + 0x168));
  return;
}



/* Entry: 105e101e8; end: 105e101f7; -[SCSendToWorkflow didSelectCustomStoryFirstTimePostForCustomStory:onAccept:hasBlockedUsers:] */

void FUN_105e101e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_showCustomStoryFirstTimePostForC_11266b5c8);
  return;
}



/* Entry: 105e101f8; end: 105e10207; -[SCSendToWorkflow didSelectCommunityStoryFirstTimePostForCustomStory:onAccept:] */

void FUN_105e101f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_showCommunityStoryFirstTimePostF_11266b4c8,param_3,
             param_4,*(undefined8 *)(param_1 + 0x168));
  return;
}



/* Entry: 105e10208; end: 105e10217; -[SCSendToWorkflow didSelectOurStoryFirstTimePostWithOnAccept:] */

void FUN_105e10208(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c238e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_showOurStoryFirstTimePostWithOnA_11266bdb0,param_3,
             *(undefined8 *)(param_1 + 0x168));
  return;
}



/* Entry: 105e10218; end: 105e10227; -[SCSendToWorkflow didSelectOurStoryAttributionIntroForDisplayName:onAccept:] */

void FUN_105e10218(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c238e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_showOurStoryAttributionIntroForD_11266bda8,param_3,
             param_4,*(undefined8 *)(param_1 + 0x168));
  return;
}



/* Entry: 105e10228; end: 105e10237; -[SCSendToWorkflow didSelectSpotlightFirstTimePostV2WithOnAccept:] */

void FUN_105e10228(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23a1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_showSpotlightFirstTimePostV2With_11266c298,param_3,
             *(undefined8 *)(param_1 + 0x168));
  return;
}



/* Entry: 105e10238; end: 105e10247; -[SCSendToWorkflow didSelectSpotlightTermsUpdatedWithOnAccept:] */

void FUN_105e10238(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23a2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_showSpotlightTermsUpdatedDialogW_11266c2e0,param_3,
             *(undefined8 *)(param_1 + 0x168));
  return;
}



/* Entry: 105e10248; end: 105e10257; -[SCSendToWorkflow didSelectSpotlightAttributionIntroForDisplayName:onAccept:] */

void FUN_105e10248(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23a1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_showSpotlightAttributionIntroFor_11266c290,param_3,
             param_4,*(undefined8 *)(param_1 + 0x168));
  return;
}



/* Entry: 105e10258; end: 105e1032b; -[SCSendToWorkflow didSelectPublicAttributionNuxOnComplete:onDisplayFallback:shownForSpotlight:] */

void FUN_105e10258(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x158);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105e1032c;
  puStack_70 = &UNK_11086d2d8;
  uStack_58 = (undefined1)param_5;
  uStack_68 = uVar2;
  uStack_60 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar2);
  func_0x00010c239700(uVar3,param_2,uVar1,param_5 ^ 1,&puStack_88,param_4);
  _objc_release(uStack_60);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105e1032c; end: 105e10387;  */

void FUN_105e1032c(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fa360();
    _objc_release(uVar1);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105e10378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105e10388; end: 105e1044b; -[SCSendToWorkflow didSelectSpotlightNuxOnComplete:isFriendsOnlyProfile:onDisplayFallback:] */

void FUN_105e10388(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x158);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105e1044c;
  puStack_58 = &UNK_110858070;
  uStack_50 = uVar2;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar2);
  func_0x00010c23a200(uVar3,param_2,uVar1,param_4,&puStack_70,param_5);
  _objc_release(uStack_48);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105e1044c; end: 105e104a3;  */

void FUN_105e1044c(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fa720();
    _objc_release(uVar1);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105e10494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105e104a4; end: 105e105a3; -[SCSendToWorkflow didSelectSpotlightToOpenCreatePost:fromEditButton:fromNoAudio:] */

void FUN_105e104a4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x3f8) & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x378);
    func_0x00010c159e60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar4 = param_1;
      func_0x00010bebc180();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 1000);
      *(long *)(param_1 + 1000) = lVar4;
    }
    else {
      _objc_retain(lVar2);
      uVar3 = *(undefined8 *)(param_1 + 1000);
      *(long *)(param_1 + 1000) = lVar2;
    }
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  uVar3 = param_3;
  func_0x00010c15a7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x368);
  *(undefined8 *)(param_1 + 0x368) = uVar3;
  _objc_release(uVar5);
  if ((((param_5 & 1) != 0) || ((param_4 & 1) != 0)) || ((*(byte *)(param_1 + 0x3f8) & 1) == 0)) {
    uVar1 = 0;
    if (*(char *)(param_1 + 0x3b9) == '\0' && *(char *)(param_1 + 0x3b8) == '\0') {
      uVar1 = param_5;
    }
    if (((param_4 & 1) != 0) || ((uVar1 & 1) != 0)) {
      func_0x00010be1c2a0(param_1);
      goto LAB_105e1058c;
    }
  }
  func_0x00010bea3160(param_1);
LAB_105e1058c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e105a4; end: 105e1071f; -[SCSendToWorkflow _setIsSpotlightPreSelected] */

void FUN_105e105a4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined **unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  long lVar8;
  long lVar9;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  ulong uStack_170;
  ulong uStack_168;
  long lStack_160;
  undefined **ppuStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar7 = *(long *)(param_1 + 0x108);
  _objc_retain(lVar7);
  lVar9 = lVar7;
  func_0x00010bf52a60();
  lVar3 = lVar7;
  if (lVar9 != 0) {
    lVar8 = *plStack_120;
    unaff_x21 = &PTR____CFConstantStringClassReference_110f52df8;
    unaff_x22 = lVar9;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar7);
        }
        unaff_x23 = *(ulong *)(lStack_128 + lVar9 * 8);
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x23;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = unaff_x24;
        func_0x00010c15ab60();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0720c0();
        _objc_release(uVar1);
        _objc_release(unaff_x24);
        _objc_release(unaff_x23);
        if ((uVar2 & 1) != 0) {
          *(undefined1 *)(param_1 + 0x3b9) = 1;
          _objc_release();
          goto LAB_105e106e4;
        }
        lVar9 = lVar9 + 1;
      } while (unaff_x22 != lVar9);
      unaff_x22 = lVar7;
      func_0x00010bf52a60();
    } while (unaff_x22 != 0);
  }
  _objc_release();
  *(undefined1 *)(param_1 + 0x3b9) = 0;
LAB_105e106e4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105e10720;
  lVar9 = *(long *)(lVar3 + 0x360);
  uStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  lStack_160 = unaff_x22;
  ppuStack_158 = unaff_x21;
  lStack_150 = lVar7;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar9 == 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x118);
    func_0x00010bf4c1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar5;
    func_0x000100504554(uVar5,&PTR___NSConcreteGlobalBlock_1108eaf10);
    _objc_initWeak(auStack_178,lVar3);
    puVar6 = PTR_PTR_1126ae558;
    func_0x00010beffb40(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_180,auStack_178);
    func_0x00010c297260(puVar6);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_180);
    _objc_destroyWeak(auStack_178);
    _objc_release(uVar4);
    _objc_release(uVar5);
  }
  return;
}



/* Entry: 105e10720; end: 105e10873; -[SCSendToWorkflow _generateThumbnailsAndBeginCreatePostFlow] */

void FUN_105e10720(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 0x360);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x118);
    func_0x00010bf4c1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x000100504554(uVar3,&PTR___NSConcreteGlobalBlock_1108eaf10);
    _objc_initWeak(auStack_48,param_1);
    puVar4 = PTR_PTR_1126ae558;
    func_0x00010beffb40(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c297260(puVar4);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 105e10874; end: 105e1087b;  */

void FUN_105e10874(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26d770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_thumbnail_112679000);
  return;
}



/* Entry: 105e1087c; end: 105e109eb;  */

void FUN_105e1087c(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = param_2;
  func_0x00010bf529e0();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if ((param_3 == 0) && (puVar2 != (undefined *)0x0)) {
    lVar3 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar3 == 0) goto LAB_105e109a4;
    puVar4 = param_2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar3 + 0x3b0);
    *(undefined **)(lVar3 + 0x3b0) = puVar4;
    _objc_release(uVar5);
    puStack_78 = puVar1;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105e109ec;
    puStack_60 = &UNK_1108eaf30;
    uStack_58 = *(undefined8 *)(param_1 + 0x20);
    puVar4 = param_2;
    func_0x00010bd86420(param_2,&puStack_78);
    _objc_release(lVar3);
  }
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105e10b48;
  puStack_90 = &UNK_110841fb0;
  _objc_copyWeak(auStack_80,param_1 + 0x28);
  _objc_retain(puVar4);
  puStack_88 = puVar4;
  func_0x0001000d76cc("APPSTORE",&puStack_a8);
  _objc_release(puStack_88);
  _objc_destroyWeak(auStack_80);
LAB_105e109a4:
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}


