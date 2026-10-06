/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107102928; end: 107102a4b; -[PreviewViewController _animateFromAspectFillToFit] */

void FUN_107102928(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c14e440(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107102a4c; end: 107102af7;  */

void FUN_107102a4c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0efe60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e460();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107102af8; end: 107102c43; -[PreviewViewController _animateToAspectFillWithCompletion:] */

void FUN_107102af8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c14e440(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107102c44; end: 107102cf3;  */

void FUN_107102c44(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0efe60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e460();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107102cf4; end: 1071030b3; -[PreviewViewController _setViewsAlphaForCropping:animated:] */

void FUN_107102cf4(undefined8 param_1,undefined *param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = param_2;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_2;
  func_0x00010c13b420(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfae5c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_2;
  func_0x00010bfa3600(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c2790a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103b40();
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010c252b00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103b40();
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010c278d20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103b40();
  _objc_release(puVar1);
  if (param_4 == 0) {
    func_0x00010c1677c0(param_1,puVar5);
    func_0x00010bfa3600(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_2;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c2790a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(param_1);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(param_2);
    puVar1 = puVar3;
    func_0x00010c252b00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(param_1);
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010c278d20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(param_1);
  }
  else {
    puVar1 = PTR_PTR_1126c4228;
    func_0x00010bf04100(PTR_PTR_1126c4228,param_3,&PTR____CFConstantStringClassReference_110ee4218);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(puVar1,param_3,puVar2);
    _objc_release(puVar2);
    uVar7 = 0x3fd3333333333333;
    func_0x00010c192d40(0x3fd3333333333333,puVar1);
    func_0x00010bf8b160(puVar1);
    func_0x00010c1677e0(param_1,uVar7,puVar5,param_3,1);
    func_0x00010bfa3600(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c2790a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a40();
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(param_2);
    puVar2 = puVar3;
    func_0x00010c252b00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a40();
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010c278d20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a40();
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1071030b4; end: 10710320b; -[PreviewViewController currentlyDisplayingSegmentCroppingState] */

void FUN_1071030b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf926c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126affe8;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf60f00();
    func_0x00010c09e180(puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x000107ffcb24(uVar4,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(param_1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    param_1 = uVar2;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10710320c; end: 1071033e3; -[PreviewViewController setupInitialCroppingState] */

void FUN_10710320c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_5;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf5e580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 != 0) {
    lVar1 = param_5;
    func_0x00010bf60ee0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c80();
    func_0x000100841590();
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010bfa3600(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2790a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bfa3600(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_5;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c278d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_5);
    return;
  }
  return;
}



/* Entry: 1071033e4; end: 107103b87; -[PreviewViewController openedCustomStickerScribbleView] */

void FUN_1071033e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  undefined *puVar31;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfae5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c277420();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c218d20();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf61d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c151bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf61d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c151bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfe5d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fe0(uVar2,param_2,uVar5,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf61d00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c151bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  uStack_90 = uVar9;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  func_0x00010bf61d00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c151bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar12;
  func_0x00010bf493a0(uVar12,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_1;
  uStack_88 = uVar16;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_1;
  func_0x00010bf61d00();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010c151bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar21;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar19;
  func_0x00010bf493a0(uVar19,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_1;
  uStack_80 = uVar23;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar24;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar25;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_1;
  func_0x00010bf61d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar27;
  func_0x00010c151bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar28;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar26;
  func_0x00010bf493a0(uVar26,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar30;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_90,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar31);
  _objc_release(puVar31);
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
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  uVar3 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x0001070c4868();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0ef7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7580();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar5 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20bd20();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar5);
  uVar2 = uVar4;
  func_0x00010c252b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010c278d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e1a20();
  _objc_release(uVar2);
  func_0x00010c28d160(param_1);
  uVar2 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe0a80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2dc0();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c068880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c292100();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = uVar4;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010c1122a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010c13b420(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfae5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c277420();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c218d20();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010bfa3600(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010c13b540(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c4868();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c0ef7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7580();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010bfa3600(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20bd20();
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar5;
  func_0x00010c252b00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = uVar5;
  func_0x00010c278d20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010bf61d00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c151bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010c1122a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e1a20();
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010c111180(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
  _objc_release(uVar2);
  func_0x00010c13b540(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c068880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c292040();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 107103b88; end: 107103ecf; -[PreviewViewController closedCustomStickerScribbleView] */

void FUN_107103b88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfae5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c277420();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c218d20();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4868();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0ef7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7580();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20bd20();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c252b00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c278d20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf61d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c151bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e1a20();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c111180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
  _objc_release(uVar1);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c068880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c292040();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107103ed0; end: 107103f8f; -[PreviewViewController finishCuttingWithImageData:center:isFromCutout:] */

void FUN_107103ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bfa3600(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf61ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bdf7840(param_3);
  func_0x00010bf76720(param_1,param_2,uVar3,param_4,param_5,param_6,param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107103f90; end: 1071041e7; -[PreviewViewController _customStickerOrigin] */

undefined4 FUN_107103f90(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  
  uVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07e880();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c07e960();
    if ((uVar4 & 1) == 0) {
      uVar4 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c07e920();
      uVar11 = (uint)uVar5;
      _objc_release(uVar4);
    }
    else {
      uVar11 = 1;
    }
    _objc_release(uVar3);
  }
  else {
    uVar11 = 1;
  }
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c129720();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c1297c0();
  if (uVar4 == 5) {
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar4 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c129720();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c1297c0();
    if (uVar6 == 4) {
      bVar1 = true;
    }
    else {
      uVar6 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c129720();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c1297c0();
      if (uVar8 == 9) {
        bVar1 = true;
      }
      else {
        uVar8 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c129720();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c1297c0();
        bVar1 = uVar10 == 7;
        _objc_release(uVar9);
        _objc_release(uVar8);
      }
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar11 & 1) == 0 && !bVar1) {
      uVar2 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c07e840();
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c075060();
      _objc_release(param_1);
      if ((int)uVar2 != 0) {
        return 3;
      }
      return 0;
    }
  }
  return 2;
}



/* Entry: 1071041e8; end: 1071041eb; -[PreviewViewController failedToCutStickerFromImage:withTransform:] */

void FUN_1071041e8(void)

{
  return;
}



/* Entry: 1071041ec; end: 1071043bb; -[PreviewViewController scribbleBegan] */

void FUN_1071041ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_5;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c083340();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c0f6160(param_5);
  }
  uVar1 = param_5;
  func_0x00010bfa3600(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c141a80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010bf606c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x00010bf61d00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c070080();
  func_0x00010c287d60(uVar3,param_6,uVar4,uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c1122a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf61d00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c151bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _UIGraphicsBeginImageContextWithOptions(param_3,param_4,0,0);
  func_0x00010bf20c00(uVar2);
  uVar1 = uVar2;
  func_0x00010bf89ce0(uVar2,param_6,1);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  func_0x00010bf61d00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179440();
  _objc_release(param_5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1071043bc; end: 1071044b3; -[PreviewViewController scribbleEnded] */

void FUN_1071043bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010bf3de40();
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c083340();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c13db00(0,param_1);
  }
  uVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c141a80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf606c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf61d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c070080();
  func_0x00010c287d60(uVar3,param_2,uVar4,uVar5);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071044b4; end: 10710454f; -[PreviewViewController foregroundInstancesFuture] */

void FUN_1071044b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c5dc4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c119b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb5400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107104550; end: 107104557; -[PreviewViewController shouldShowCutButton] */

undefined8 FUN_107104550(void)

{
  return 1;
}



/* Entry: 107104558; end: 1071048e3; -[PreviewViewController enterSnapCutMode] */

void FUN_107104558(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c068880();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bec5700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c293a40(lVar3,param_2,5,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c5530();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c274120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf61d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar5 = PTR_PTR_1126d4c38;
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c54a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf0b640();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf54200();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x0001070c54c4();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c100e20();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x0001070c4670();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c23c760();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x0001070c5188();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01cec0(puVar5,param_2,0x15e,1,lVar6,lVar9,lVar12,lVar15,lVar3);
    func_0x00010c188880(param_1,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf61d00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010bf61d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e90e0();
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c22f580();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf61d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)lVar2 == 0) {
    func_0x00010c238d00();
  }
  else {
    func_0x00010c238d20();
  }
  _objc_release(lVar1);
  func_0x00010c08c840(param_1);
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf88120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1071048e4; end: 107104963; -[PreviewViewController didPlayOnboardingVideo] */

void FUN_1071048e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c5530();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c274120();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c190320();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107104964; end: 10710499f; -[PreviewViewController _stringFromCustomStickerControllerOpenSource] */

undefined ** FUN_107104964(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  func_0x00010bf61d20();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea06d8;
  if (param_1 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ea06b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ea06f8;
  if (param_1 != 2) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 1071049a0; end: 1071049f7; -[PreviewViewController recentCustomStickerImage:] */

void FUN_1071049a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010c122940(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_3 + 0x10))(param_3,param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071049f8; end: 107104a8b; -[PreviewViewController drawingToolBarButtonItemDidStartDrawing:] */

void FUN_1071049f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2c20();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107104a8c; end: 107104aff; -[PreviewViewController drawingToolBarButtonItemDidAlterDrawing:] */

void FUN_107104a8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14a0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bfe2600(param_1);
  func_0x00010c28d160(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c242fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_snapSegmentStateChangedShouldUpd_11266e610,1)
  ;
  return;
}



/* Entry: 107104b00; end: 107104bcb; -[PreviewViewController drawingToolBarButtonItem:didEndDrawingWithStrokeSize:isResized:] */

void FUN_107104b00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161860();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c111180(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
  _objc_release(uVar1);
  func_0x00010c13b540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf89f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5440(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107104bcc; end: 107104c87; -[PreviewViewController drawingToolBarButtonItemDidStartPinchResize:] */

void FUN_107104bcc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2170c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2c20();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107104c88; end: 107104c8b; -[PreviewViewController drawingToolBarButtonItemDidFinishPinchResize:] */

void FUN_107104c88(void)

{
  return;
}



/* Entry: 107104c8c; end: 107104c8f; -[PreviewViewController drawingToolBarButtonItem:didMoveToPoint:] */

void FUN_107104c8c(void)

{
  return;
}



/* Entry: 107104c90; end: 107104d3b; -[PreviewViewController drawingToolBarButtonItemDidPressEmojiBrush:] */

void FUN_107104c90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2acd80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107104d3c; end: 107104eb3; -[PreviewViewController drawingToolBarButtonItemDidPressUndo:] */

void FUN_107104d3c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1;
  func_0x00010c111180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010bf89cc0(lVar6);
  func_0x00010c2aca00(lVar4,param_2,lVar5 + 1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 107104eb4; end: 107104fd7; -[PreviewViewController drawingToolBarButtonItem:didChangeColor:] */

void FUN_107104eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac9c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8a200();
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107104fd8; end: 10710512f; -[PreviewViewController drawingToolBarButtonItem:didChangePaletteType:] */

void FUN_107104fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2acaa0(uVar5,param_2,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf89f00();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107105130; end: 1071054b7; -[PreviewViewController drawingToolBarButtonItem:didPressDrawerEnabled:] */

void FUN_107105130(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010bf8a2c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(param_3);
  lVar5 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c285e20();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c070a20();
  _objc_release(lVar5);
  if ((int)lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf3d8c0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 == 2) {
      lVar5 = param_1;
      func_0x00010c13b420(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar5;
      func_0x00010c29f540();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c1302a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21e900();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(lVar5);
      lVar5 = 2;
    }
  }
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0811c0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf3d8c0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  if (lVar5 != 0) {
    lVar5 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5faa0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2702c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf89fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130de0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24e510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_startClipLevelEditingWithEditTyp_112671368,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfaf730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finishClipLevelEditingWithEditTy_1125c9770,0)
  ;
  return;
}



/* Entry: 1071054b8; end: 107105687; -[PreviewViewController drawingToolBarButtonItemDidDisplayEmojiBrushAnimation:] */

void FUN_1071054b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c22f640();
  if ((int)lVar4 != 0) {
    lVar4 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf8e340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar7 == 0) {
      return;
    }
    lVar1 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf8e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf8e320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf86ac0(lVar4,param_2,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(param_1);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107105688; end: 10710568b; -[PreviewViewController updateCommonLoggingParameters] */

void FUN_107105688(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2876f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateLoggingParams_11267f7e0);
  return;
}



/* Entry: 10710568c; end: 107105823; -[PreviewViewController updateLoggingParamsForMobStories:] */

void FUN_10710568c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [128];
  undefined1 auStack_210 [128];
  long lStack_190;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar10 = *plStack_110;
    do {
      lVar12 = 0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010c075620();
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar11;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad820();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_310;
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_3;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010bfadc40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar10;
  func_0x00010bfc1300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar1);
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  lStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  plStack_2c0 = (long *)0x0;
  lVar1 = lVar12;
  func_0x00010bfc1440();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar13 = *plStack_2c0;
    do {
      lVar14 = 0;
      do {
        if (*plStack_2c0 != lVar13) {
          _objc_enumerationMutation(lVar1);
        }
        uVar11 = *(undefined8 *)(lStack_2c8 + lVar14 * 8);
        lVar5 = param_3;
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x0001070c45bc();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bfc12c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09d160();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28f120(lVar7,param_2,uVar11);
        _objc_release(uVar11);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        lVar14 = lVar14 + 1;
      } while (lVar10 != lVar14);
      lVar10 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_2d0,auStack_210,0x10);
    } while (lVar10 != 0);
  }
  _objc_release(lVar1);
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  lStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  plStack_300 = (long *)0x0;
  lVar1 = lVar12;
  func_0x00010bfc1240();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar13 = *plStack_300;
    do {
      lVar14 = 0;
      do {
        if (*plStack_300 != lVar13) {
          _objc_enumerationMutation(lVar1);
        }
        uVar11 = *(undefined8 *)(lStack_308 + lVar14 * 8);
        lVar5 = param_3;
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x0001070c45bc();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bfc12c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09d160();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28f120(lVar7,param_2,uVar11);
        _objc_release(uVar11);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        lVar14 = lVar14 + 1;
      } while (lVar10 != lVar14);
      lVar10 = lVar1;
      puVar9 = &uStack_310;
      func_0x00010bf52a60(lVar1,param_2,&uStack_310,auStack_290,0x10);
    } while (lVar10 != 0);
  }
  _objc_release(lVar1);
  _objc_release(lVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_190) {
    ___stack_chk_fail();
    _objc_retain(puVar9);
    lVar1 = lVar12;
    func_0x00010c13b540(lVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar10;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar14;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23b560(puVar9);
    func_0x00010c2b8fe0(lVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar10);
    _objc_release(lVar1);
    lVar1 = lVar12;
    func_0x00010c13b540(lVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar10;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar14;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c083ec0(puVar9);
    func_0x00010c2af8c0(lVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar10);
    _objc_release(lVar1);
    lVar1 = lVar12;
    func_0x00010c13b540(lVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar10;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar14;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04ae0(puVar9);
    func_0x00010c2a8460(lVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar10);
    _objc_release(lVar1);
    lVar1 = lVar12;
    func_0x00010c13b540(lVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar10;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar14;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21200(puVar9);
    func_0x00010c2a9920(lVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar10);
    _objc_release(lVar1);
    lVar1 = lVar12;
    func_0x00010c13b540(lVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar10;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar14;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined1 *)puVar9;
    func_0x00010befdac0(puVar9);
    func_0x00010c2bcee0(lVar5,param_2,puVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar10);
    _objc_release(lVar1);
    func_0x00010c13b540(lVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar12;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined1 *)puVar9;
    func_0x00010befdaa0(puVar9);
    _objc_release(puVar9);
    func_0x00010c2bcec0(lVar14,param_2,puVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar10);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar12);
    return;
  }
  return;
}



/* Entry: 107105824; end: 107105aeb; -[PreviewViewController updateGeofilterLoadingStageForLogging] */

void FUN_107105824(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar8 = &uStack_1f0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfadc40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfc1300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  lVar1 = lVar3;
  func_0x00010bfc1440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_1a0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1a0 != lVar10) {
          _objc_enumerationMutation(lVar1);
        }
        uVar9 = *(undefined8 *)(lStack_1a8 + lVar11 * 8);
        lVar4 = param_1;
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x0001070c45bc();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bfc12c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09d160();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28f120(lVar6,param_2,uVar9);
        _objc_release(uVar9);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  lVar1 = lVar3;
  func_0x00010bfc1240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_1e0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1e0 != lVar10) {
          _objc_enumerationMutation(lVar1);
        }
        uVar9 = *(undefined8 *)(lStack_1e8 + lVar11 * 8);
        lVar4 = param_1;
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x0001070c45bc();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bfc12c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09d160();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28f120(lVar6,param_2,uVar9);
        _objc_release(uVar9);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar1;
      puVar8 = &uStack_1f0;
      func_0x00010bf52a60(lVar1,param_2,&uStack_1f0,auStack_170,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  lVar1 = lVar3;
  func_0x00010c13b540(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar11;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23b560(puVar8);
  func_0x00010c2b8fe0(lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c13b540(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar11;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c083ec0(puVar8);
  func_0x00010c2af8c0(lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c13b540(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar11;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04ae0(puVar8);
  func_0x00010c2a8460(lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c13b540(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar11;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21200(puVar8);
  func_0x00010c2a9920(lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c13b540(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar11;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = (undefined1 *)puVar8;
  func_0x00010befdac0(puVar8);
  func_0x00010c2bcee0(lVar4,param_2,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c13b540(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = (undefined1 *)puVar8;
  func_0x00010befdaa0(puVar8);
  _objc_release(puVar8);
  func_0x00010c2bcec0(lVar11,param_2,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107105aec; end: 107105eb3; -[PreviewViewController setCaptureDiscardRelatedData:] */

void FUN_107105aec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23b560(param_3);
  func_0x00010c2b8fe0(uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c083ec0(param_3);
  func_0x00010c2af8c0(uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04ae0(param_3);
  func_0x00010c2a8460(uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21200(param_3);
  func_0x00010c2a9920(uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010befdac0(param_3);
  func_0x00010c2bcee0(uVar5,param_2,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010befdaa0(param_3);
  _objc_release(param_3);
  func_0x00010c2bcec0(uVar4,param_2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107105eb4; end: 107105f2b; -[PreviewViewController logCommerceAttachmentTap] */

void FUN_107105eb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf42540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1d40();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107105f2c; end: 10710626b; -[PreviewViewController logDirectSnapEdit:] */

void FUN_107105f2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
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
  uVar2 = param_3;
  _objc_retain(param_3);
  iVar1 = (int)uVar2;
  uVar2 = param_3;
  func_0x00010c073e40();
  uVar12 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar3;
  func_0x00010c2407e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar11;
  func_0x00010c07bf40();
  _objc_release(uVar11);
  _objc_release(uVar3);
  _objc_release(uVar12);
  if (((uVar2 & 1) == 0) && ((uVar4 & 1) == 0)) {
    uVar2 = param_3;
    func_0x00010c242400();
    uVar12 = param_3;
    func_0x00010c06d080();
    if ((int)uVar12 == 0) {
      uVar12 = param_3;
      func_0x00010c07e620();
      if ((int)uVar12 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = param_3;
        func_0x00010bf311e0();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x0001070c45bc();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar3;
      func_0x00010bf1cf00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c242400(param_3);
      uVar8 = param_3;
      func_0x00010c243320(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_3;
      func_0x00010c070a20(param_3);
      uVar5 = uVar12;
      func_0x00010c0a50e0(uVar11,param_2,uVar12,-(ulong)(uVar2 != 0xc),uVar4,uVar8,uVar9);
      iVar1 = (int)uVar5;
      _objc_release(uVar8);
      _objc_release(uVar11);
      _objc_release(uVar3);
      _objc_release(param_1);
    }
    else {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uVar3 = param_3;
      func_0x00010bf167e0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar3;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      iVar1 = (int)&uStack_130;
      uVar3 = uVar12;
      func_0x00010bf52a60();
      if (uVar3 != 0) {
        lVar10 = *plStack_120;
        do {
          uVar11 = 0;
          do {
            if (*plStack_120 != lVar10) {
              _objc_enumerationMutation(uVar12);
            }
            uVar13 = *(undefined8 *)(lStack_128 + uVar11 * 8);
            uVar4 = param_1;
            func_0x00010c13b540(param_1);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar4;
            func_0x0001070c45bc();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            func_0x00010bf1cf00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf311e0(uVar13);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = param_3;
            func_0x00010c242400(param_3);
            uVar6 = param_3;
            func_0x00010c243320(param_3);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = param_3;
            func_0x00010c070a20(param_3);
            func_0x00010c0a50e0(uVar9,param_2,uVar13,-(ulong)(uVar2 != 0xc),uVar5,uVar6,uVar7);
            _objc_release(uVar6);
            _objc_release(uVar13);
            _objc_release(uVar9);
            _objc_release(uVar8);
            _objc_release(uVar4);
            uVar11 = uVar11 + 1;
          } while (uVar3 != uVar11);
          iVar1 = (int)&uStack_130;
          uVar3 = uVar12;
          func_0x00010bf52a60();
        } while (uVar3 != 0);
      }
    }
    _objc_release(uVar12);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010c07e620();
    if (iVar1 == 0) {
      return;
    }
    func_0x00010c15df80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0afca0();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 10710626c; end: 1071062df; -[PreviewViewController logSnapCreateStepPlaybackFailure:] */

void FUN_10710626c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  func_0x00010c07e620();
  if (param_3 != 0) {
    func_0x00010c15df80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0afca0();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1071062e0; end: 10710641f; -[PreviewViewController logSnapCreateAVPlayerSetupFailure:] */

void FUN_1071062e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_1070c4ee8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c23fba0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf311e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c075080(param_3);
  uVar6 = param_3;
  func_0x00010bf291a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfaf5a0();
  uVar8 = param_3;
  func_0x00010c06d080(param_3);
  uVar9 = param_3;
  func_0x00010c242400(param_3);
  _objc_release(param_3);
  func_0x00010c0a4fa0(uVar3,param_2,uVar4,uVar5,uVar7,uVar8,uVar9,
                      &PTR____CFConstantStringClassReference_110ea0718);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107106420; end: 1071065c3; -[PreviewViewController _updateScreenOverlayDataSizeForMultipleVideos:] */

void FUN_107106420(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c0d2360();
  if (lVar6 < 1) {
    lVar6 = 0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    func_0x00010c15e020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c243b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar3 = lVar2;
    func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    if (lVar3 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(lVar2);
          }
          lVar4 = *(long *)(lStack_128 + lVar8 * 8);
          func_0x00010c0efb00();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c08fa60();
          lVar6 = lVar5 + lVar6;
          _objc_release(lVar4);
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar2);
  }
  func_0x00010c2b7b00(param_3,param_2,lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar1 = param_3;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c083340();
    _objc_release(lVar1);
    if ((int)lVar6 != 0) {
      lVar1 = param_3;
      func_0x00010c13b540(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x0001070c52a8();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar6;
      func_0x00010bf2a2a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_3;
      func_0x00010bfa3600(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c0d2940();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x00010c15a4a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b2b00(lVar3,param_2,lVar4 != 0);
      _objc_release(lVar4);
      _objc_release(lVar5);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar6);
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010c13b540(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x0001070c52a8();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar6;
      func_0x00010bf2a2a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_3;
      func_0x00010bf46560(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c06d080();
      func_0x00010c1af760(lVar3,param_2,lVar8);
      _objc_release(lVar7);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar6);
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010c13b540(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x0001070c52a8();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar6;
      func_0x00010bf2a2a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_3;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c0811c0();
      if ((int)lVar8 == 0) {
        lVar8 = param_3;
        func_0x00010bf46560(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar8;
        func_0x00010c070a20();
        func_0x00010c1b5100(lVar3,param_2,lVar5);
        _objc_release(lVar8);
      }
      else {
        func_0x00010c1b5100(lVar3,param_2,1);
      }
      _objc_release(lVar7);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar6);
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010c2a0940();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf08020();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      _objc_release(lVar6);
      _objc_release(lVar1);
      if (lVar3 != 0) {
        lVar1 = param_3;
        func_0x00010c13b540(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar1;
        func_0x0001070c52a8();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar6;
        func_0x00010bf2a2a0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa3600(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_3;
        func_0x00010c2a0940();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar8;
        func_0x00010bf08020();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar5;
        func_0x00010c0cf1e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a5920(lVar3,param_2,lVar4 != 0);
        _objc_release(lVar4);
        _objc_release(lVar5);
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(param_3);
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar1);
        return;
      }
    }
    return;
  }
  return;
}



/* Entry: 1071065c4; end: 1071069bb; -[PreviewViewController configPreviewPlaybackLogger] */

void FUN_1071065c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c083340();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c52a8();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf2a2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b2b00(lVar4,param_2,lVar8 != 0);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c52a8();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf2a2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c06d080();
    func_0x00010c1af760(lVar4,param_2,lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c52a8();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf2a2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0811c0();
    if ((int)lVar6 == 0) {
      lVar6 = param_1;
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c070a20();
      func_0x00010c1b5100(lVar4,param_2,lVar7);
      _objc_release(lVar6);
    }
    else {
      func_0x00010c1b5100(lVar4,param_2,1);
    }
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2a0940();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf08020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 != 0) {
      lVar1 = param_1;
      func_0x00010c13b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x0001070c52a8();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf2a2a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010c2a0940();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf08020();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c0cf1e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a5920(lVar4,param_2,lVar8 != 0);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(param_1);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1071069bc; end: 107106b23; -[PreviewViewController logLocationAccuracyForPreviewVisibleWithLocation:] */

void FUN_1071069bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126c3cc8;
  func_0x00010c111660(PTR_PTR_1126c3cc8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0001070c5698();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf70a00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c09eaa0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110ea0738,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010b256a70();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c242680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 107106b24; end: 107106c2b; -[PreviewViewController featureMagicToolsUpdateItem:enabled:] */

void FUN_107106b24(ulong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf61d00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0791a0();
  _objc_release(uVar1);
  if (param_4 == 0) {
    if ((int)uVar2 != 0) {
      uVar1 = param_1;
      func_0x00010bf61d00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3d9e0();
      _objc_release(uVar1);
    }
    uVar1 = param_1;
    func_0x00010bf630a0();
    if ((int)uVar1 != 0) {
      uVar1 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0d2940();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c165580();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      func_0x00010c1891e0(param_1,param_2,0);
    }
  }
  else if ((uVar2 & 1) == 0) {
    func_0x00010bf96c60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107106c2c; end: 107106ca7; -[PreviewViewController multiSnapV2ViewController] */

void FUN_107106c2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0d20c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d2600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107106ca8; end: 107106cab; -[PreviewViewController featureMultiSnapContentTargetAspectRatio] */

void FUN_107106ca8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4d830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_contentTargetAspectRatio_1125b0fb0);
  return;
}



/* Entry: 107106cac; end: 107106caf; -[PreviewViewController featureMultiSnapSetAudioToolsStateFromMultiSnapEditingState:] */

void FUN_107106cac(void)

{
  return;
}



/* Entry: 107106cb0; end: 107106d13; -[PreviewViewController featureMultiSnapSelectedGeofilter] */

void FUN_107106cb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1597c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107106d14; end: 107106d17; -[PreviewViewController featureMultiSnapCurrentTouchTarget] */

void FUN_107106d14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf606d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_currentTouchTarget_1125b5b58);
  return;
}



/* Entry: 107106d18; end: 107106d93; -[PreviewViewController featureMultiSnapIdentityCroppingState] */

void FUN_107106d18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe6060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107106d94; end: 107106e0f; -[PreviewViewController featureMultiSnapTrackingObjectContainerView] */

void FUN_107106d94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29a700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c278f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107106e10; end: 107106e67; -[PreviewViewController featureMultiSnapUpdateFilterStackingButtonWithStackedFiltersCount:] */

void FUN_107106e10(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a340();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107106e68; end: 107106e6b; -[PreviewViewController featureMultiSnapUpdateXButtonAndSnapEditingState] */

void FUN_107106e68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28d170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateXButtonState_112680e80);
  return;
}



/* Entry: 107106e6c; end: 107106f27; -[PreviewViewController featureMultiSnapDidDeleteSegment] */

void FUN_107106e6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0811c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2295e0(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2a0940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c2e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107106f28; end: 107106f2b; -[PreviewViewController featureMultiSnapDidTapToolbarItem:] */

void FUN_107106f28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c273890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_toolbarButtonTapped__11267a848);
  return;
}



/* Entry: 107106f2c; end: 107106f2f; -[PreviewViewController featureMultiSnapExitPreviewWithExitType:] */

void FUN_107106f2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2eb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cancelPreviewWithExitType__1125a9480);
  return;
}



/* Entry: 107106f30; end: 1071070df; -[PreviewViewController featureMultiSnapDidChangeEditingIndex:] */

void FUN_107106f30(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined1 auStack_48 [8];
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0811c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c26fea0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c1581e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_initWeak(auStack_48,param_1);
    if ((param_3 == 0x7fffffffffffffff) || (uVar3 < 2)) {
      uVar1 = param_1;
      func_0x00010c1122a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c2737a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c200740();
      _objc_release(uVar2);
      _objc_release(uVar1);
      func_0x00010c283880(param_1);
    }
    else {
      _objc_copyWeak(auStack_58,auStack_48);
      lStack_50 = param_3;
      func_0x00010c1122a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010c2737a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c200740();
      _objc_release(uVar1);
      _objc_release(param_1);
      _objc_destroyWeak(auStack_58);
    }
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 1071070e0; end: 10710714f;  */

uint FUN_1071070e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c084c40(param_2);
  _objc_release(param_2);
  lVar1 = param_1;
  func_0x00010be419a0(param_1);
  _objc_release(param_1);
  return (uint)lVar1 ^ 1;
}



/* Entry: 107107150; end: 1071073f7; -[PreviewViewController featureMultiSnapDidTapAddMore] */

void FUN_107107150(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126ae6c0;
  func_0x00010c294300(PTR_PTR_1126ae6c0,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x00010c03e5a0();
  puVar3 = PTR_PTR_1126b1bb0;
  func_0x00010bf165e0(PTR_PTR_1126b1bb0,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  uVar5 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x0001070c5920();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf235e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203f60(uVar7,param_2,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x0001070c58fc();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf7f580();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c076220();
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  if ((int)uVar9 != 0) {
    uVar5 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x0001070c58fc();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf7f580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x0001070c58fc();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf7f580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1071073f8; end: 1071073fb; -[PreviewViewController featureMultiSnapDidDeleteDraft] */

void FUN_1071073f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9b9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_exitPreviewAndDeleteTimelineDraf_1125c4820);
  return;
}



/* Entry: 1071073fc; end: 1071073ff; -[PreviewViewController dismissCameraScope:] */

void FUN_1071073fc(void)

{
  return;
}



/* Entry: 107107400; end: 107107443; -[PreviewViewController timelineConfiguration] */

void FUN_107107400(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c26fea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107107444; end: 107107757; -[PreviewViewController didUpdateTimelineDraftWithConfiguration:] */

void FUN_107107444(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26fea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c1585e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfdb600(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26fea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d32a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0d32a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (((int)uVar4 == 0) || (uVar3 != uVar5)) {
    if ((uVar4 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c26fea0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c1585e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28ce80(uVar2,param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c26fe40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12eb00();
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    if (uVar3 != uVar5) {
      uVar1 = param_1;
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c26fea0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c0d32a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c9fc0(uVar2,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0d2940();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c0d32a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c289b20(uVar3,param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    uVar1 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf88120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200f60();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107107758; end: 10710775f; -[PreviewViewController didSaveTimelineDraft] */

void FUN_107107758(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14ae10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_saveSnapChangesWithExitPreview__1126305a0,1);
  return;
}



/* Entry: 107107760; end: 107107763; -[PreviewViewController didDeleteTimelineDraft] */

void FUN_107107760(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9b9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_exitPreviewAndDeleteTimelineDraf_1125c4820);
  return;
}



/* Entry: 107107764; end: 1071077a7; -[PreviewViewController draftMediaConfiguration] */

void FUN_107107764(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c26fea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1071077a8; end: 1071077af; -[PreviewViewController isDraftEditing] */

undefined8 FUN_1071077a8(void)

{
  return 1;
}



/* Entry: 1071077b0; end: 1071077b3; -[PreviewViewController featureDirectorMode:didHandleDraft:] */

void FUN_1071077b0(void)

{
  return;
}



/* Entry: 1071077b4; end: 107107d7f; -[PreviewViewController featureDirectorMode:didUpdateDraft:withSelectedSegment:] */

void FUN_1071077b4(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

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
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26fea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c1585e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfdb600(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26fea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d32a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c0d32a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (((int)uVar4 == 0) || (uVar3 != uVar5)) {
    if ((uVar4 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf7f1c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c26e700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf17320();
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c26fea0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_4;
      func_0x00010c1585e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28ce80(uVar2,param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf7f1c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c26e700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf17340();
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    if (uVar3 != uVar5) {
      uVar1 = param_1;
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c26fea0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010c0d32a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c9fc0(uVar2,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0d2940();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_4;
      func_0x00010c0d32a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c289b20(uVar3,param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    uVar1 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf88120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200f60();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  puVar7 = PTR_PTR_1126b00e8;
  uVar1 = param_4;
  func_0x00010c110b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c270220(puVar7,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar8 = puVar7;
  func_0x00010c2525e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar8 != (undefined *)0x0) {
    puVar8 = puVar7;
    func_0x00010c2525e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bfcd140();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf8c8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a3c60();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(puVar9);
    _objc_release(puVar8);
    uVar1 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf8c8a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c09e9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12adc0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf8c8a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c09e9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c2525e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c09df80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(uVar3,param_2,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  if (param_5 != 0) {
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c26e700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dfa80();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  _objc_release(puVar7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107107d80; end: 107107d83; -[PreviewViewController featureDirectorMode:didDeleteDraft:] */

void FUN_107107d80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9b9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_exitPreviewAndDeleteTimelineDraf_1125c4820);
  return;
}



/* Entry: 107107d84; end: 107107d87; -[PreviewViewController saveDraftMediaConfiguration:] */

void FUN_107107d84(void)

{
  return;
}



/* Entry: 107107d88; end: 107107e67; -[PreviewViewController directorModeScopeDidComplete] */

void FUN_107107d88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c58fc();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf7f580();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c076220();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x0001070c58fc();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf7f580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
    _objc_release(uVar2);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107107e68; end: 107107f4f; -[PreviewViewController setupMultisnapView] */

void FUN_107107e68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d20c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0d25e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c228fc0(uVar3,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107107f50; end: 1071080bf; -[PreviewViewController _isLocalEditingAllowedForPreviewToolBarButtonItemType:atIndex:] */

uint FUN_107107f50(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06d080();
  if ((int)uVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar3 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf529e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (uVar6 <= param_4) {
      uVar7 = 0;
      goto LAB_107108070;
    }
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c083320();
    uVar7 = (uint)uVar5 ^ 1;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_1;
  }
  _objc_release(uVar2);
LAB_107108070:
  uVar1 = 1;
  if (param_3 < 0x19) {
    if ((1L << (param_3 & 0x3f) & 0x1f704a1U) == 0) {
      if (param_3 == 6) {
        uVar1 = uVar7;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* Entry: 1071080c0; end: 10710825b; -[PreviewViewController hasMusic] */

ulong FUN_1071080c0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release();
  if (uVar3 == 0) {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    func_0x00010c0d2440();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c09df80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uVar2 = uVar1;
    func_0x00010bf52a60(uVar1,param_2,&uStack_110,auStack_c8,0x10);
    uVar6 = 0;
    if (uVar2 != 0) {
      lVar7 = *plStack_100;
      do {
        uVar6 = 0;
        do {
          if (*plStack_100 != lVar7) {
            _objc_enumerationMutation(uVar1);
          }
          lVar4 = *(long *)(lStack_108 + uVar6 * 8);
          func_0x00010c0d36c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar4 != 0) {
            uVar6 = 1;
            goto LAB_10710821c;
          }
          uVar6 = uVar6 + 1;
        } while (uVar2 != uVar6);
        uVar2 = uVar1;
        func_0x00010bf52a60(uVar1,param_2,&uStack_110,auStack_c8,0x10);
      } while (uVar2 != 0);
      uVar6 = 0;
    }
LAB_10710821c:
    _objc_release();
  }
  else {
    uVar6 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar6;
  }
  ___stack_chk_fail();
  uVar6 = uVar1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar6);
  if (uVar5 == 0) {
    uVar6 = uVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c083340();
    if ((int)uVar2 == 0) goto LAB_107108368;
    uVar2 = uVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06d080();
    _objc_release(uVar2);
    _objc_release(uVar6);
    if ((uVar3 & 1) != 0) {
      return uVar6;
    }
    func_0x00010c13b420(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010bfaeca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9e20();
  }
  else {
    func_0x00010c13b420(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010bfaeca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d220();
  }
  _objc_release(uVar6);
  uVar6 = uVar1;
LAB_107108368:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return uVar6;
}



/* Entry: 10710825c; end: 1071083ab; -[PreviewViewController resumeMusic] */

void FUN_10710825c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar4 == 0) {
    uVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c083340();
    if ((int)uVar2 == 0) goto LAB_107108368;
    uVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06d080();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      return;
    }
    func_0x00010c13b420(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfaeca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9e20();
  }
  else {
    func_0x00010c13b420(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfaeca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d220();
  }
  _objc_release(uVar1);
  uVar1 = param_1;
LAB_107108368:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071083ac; end: 10710875b; -[PreviewViewController musicFeature:didUpdateSelection:shouldUpdateMotionFilters:] */

void FUN_1071083ac(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0d2440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73420();
  _objc_release(param_4);
  _objc_release(uVar1);
  func_0x00010c242fa0(param_1,param_2,0);
  func_0x00010c283880(param_1);
  func_0x00010bef7be0(param_1);
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c24b740();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0d3c80();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar9 = 6;
  func_0x00010baee46c(6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x00010bf4b900(uVar8,param_2,uVar9);
  _objc_release(uVar9);
  if (param_4 == 0) {
    if ((int)uVar1 != 0) {
      uVar9 = 6;
      func_0x00010baee46c(6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(uVar8,param_2,uVar9);
      _objc_release(uVar9);
    }
    if (param_5 == 0) goto LAB_107108684;
    uVar1 = param_1;
    func_0x00010c13b420(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfaeca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9e20();
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar9 = 6;
      func_0x00010baee46c(6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar8,param_2,uVar9);
      _objc_release(uVar9);
    }
    if (param_5 == 0) goto LAB_107108684;
    uVar2 = param_1;
    func_0x00010c13b420();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfadbe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf324a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c1598c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c13b420(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfaeca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d220();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if (uVar2 != 0) {
      uVar3 = uVar2;
      func_0x00010bfadea0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c158b80(uVar1,param_2,uVar3);
      _objc_release(uVar3);
    }
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_107108684:
  uVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b9da0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf461a0(param_1);
  func_0x00010c111180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 10710875c; end: 10710878b; -[PreviewViewController musicFeature:userDidConfirmSelection:] */

void FUN_10710875c(undefined8 param_1)

{
  func_0x00010c111180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10710878c; end: 107108823; -[PreviewViewController musicFeatureWantsToOverrideMuteSwitch:shouldOverride:] */

void FUN_10710878c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c5314();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf62b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010c13c520();
  }
  else {
    func_0x00010c0f0260();
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107108824; end: 1071088d3; -[PreviewViewController musicFeatureWantsToOverrideNativeVolumeForSelection:shouldOverrideMute:] */

void FUN_107108824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c5314();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf62b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f02e0();
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071088d4; end: 10710893f; -[PreviewViewController musicFeatureDidSelectAddSound:] */

void FUN_1071088d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe0a80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2dc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107108940; end: 1071089bb; -[PreviewViewController musicFeaturePickerDidDismiss:] */

void FUN_107108940(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010c2bd480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf74f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1071089bc; end: 107108a37; -[PreviewViewController musicFeaturePickerDidPresent:] */

void FUN_1071089bc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010c2bd480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf78640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107108a38; end: 107108ab3; -[PreviewViewController musicFeatureDidAttachEditor:] */

void FUN_107108a38(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010c2bd480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf725c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107108ab4; end: 107108b2f; -[PreviewViewController musicFeatureDidDettachEditor:] */

void FUN_107108ab4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010c2bd480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf748e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107108b30; end: 107108b6b; -[PreviewViewController shouldBeSilentlyPresentedAndPauseOpera] */

undefined8 FUN_107108b30(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07ea60();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107108b6c; end: 107108bc7; -[PreviewViewController shouldPresentOurStoryDialog] */

uint FUN_107108b6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0ee260();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07e980();
  _objc_release(uVar1);
  _objc_release(param_1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 107108bc8; end: 107108c1f; -[PreviewViewController displayIntroForOurStory] */

void FUN_107108bc8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107108c20;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 107108c20; end: 107108c27;  */

void FUN_107108c20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be04770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__displayIntroSendOnMainThread_11255eb78);
  return;
}



/* Entry: 107108c28; end: 107108d0f; -[PreviewViewController _displayIntroSendOnMainThread] */

void FUN_107108c28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1;
  func_0x000108f580b4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108f58054();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010be04780(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 107108d10; end: 107108d87;  */

void FUN_107108d10(long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126cb718;
  if (param_2 == 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf84280(puVar1);
  }
  else {
    param_1 = *(long *)(param_1 + 0x20);
    func_0x00010c0ee260(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204d20();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107108d88; end: 1071090af; -[PreviewViewController _displayIntroSendWithTitle:message:completion:] */

void FUN_107108d88(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_5;
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126af180;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  func_0x000108edeaf8();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = puVar2;
  func_0x00010c160fc0(puVar2);
  puVar4 = PTR_PTR_1126af180;
  func_0x000108ede780();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126af4d8;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar2;
  puStack_80 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010beff880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126d4c40;
  _objc_alloc(PTR_PTR_1126d4c40);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff29c0(puVar5);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c20();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(param_5);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_b0,8);
  __Unwind_Resume();
  *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x28) + 8) + 0x18) = 1;
  lVar7 = *(long *)(param_3 + 0x20);
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001071090d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar7 + 0x10))(lVar7,1);
    return;
  }
  return;
}



/* Entry: 1071090b0; end: 10710913b;  */

void FUN_1071090b0(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001071090d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 10710913c; end: 107109243; -[PreviewViewController generateBlobForPersistenceWithSaveSessionId:transcodingStart:progress:completion:] */

void FUN_10710913c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107109244;
  puStack_70 = &UNK_11098ee38;
  uStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_6;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010bfbf0c0(param_1,param_2,&puStack_88);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  return;
}



/* Entry: 107109244; end: 10710930b;  */

void FUN_107109244(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010be62820();
  if ((uVar1 & 1) == 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_10710930c;
    puStack_38 = &UNK_11084aaa8;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    uStack_28 = uVar2;
    _objc_retain(param_2);
    uStack_30 = param_2;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_release(uStack_30);
    _objc_release(uStack_28);
  }
  else {
    func_0x00010bece900(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10710930c; end: 10710931f;  */

void FUN_10710930c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010710931c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 107109320; end: 1071094a3; -[PreviewViewController transcodeVideoIfNeededForBlob:completion:] */

void FUN_107109320(ulong param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != (undefined *)0x0) {
    uVar1 = param_1;
    func_0x00010be62820();
    puVar2 = PTR_PTR_1126ae790;
    if ((uVar1 & 1) == 0) {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_1071094a4;
      puStack_58 = &UNK_11084aaa8;
      _objc_retain(param_4);
      puStack_48 = param_4;
      _objc_retain(param_3);
      uStack_50 = param_3;
      func_0x0001000d76cc("APPSTORE",&puStack_70);
      _objc_release(uStack_50);
      puVar2 = puStack_48;
    }
    else {
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcd0e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010c0f7fc0(puVar2);
      _objc_release(param_4);
      _objc_release(param_3);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071094a4; end: 1071094e3;  */

void FUN_1071094a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001071094b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1071094e4; end: 107109c4b; -[PreviewViewController _transcodeVideoForBlob:saveSessionId:transcodingStart:progress:completion:] */

void FUN_1071094e4(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined *puStack_120;
  ulong uStack_118;
  int iStack_110;
  int iStack_10c;
  long lStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_f0 = param_4;
  _objc_retain(param_4);
  uStack_f8 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_6);
  lStack_108 = param_5;
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c2a5040();
  iStack_10c = (int)uVar1;
  uStack_100 = uVar3;
  func_0x00010bfe0640();
  iStack_110 = (int)uVar3;
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07f120();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07f1a0();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c47b4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c243b20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf58fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1e4740(uVar5);
  _objc_release(param_6);
  lVar6 = param_3;
  func_0x00010c29ae80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c221d20(uVar5);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c0d36c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    puVar7 = PTR_PTR_1126c4a68;
    _objc_alloc();
    lVar6 = param_3;
    func_0x00010c0d36c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010bf0ef80();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_3;
    func_0x00010c0d36c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 == 0) {
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x00010bf0ffa0(&uStack_a0,lVar9);
    }
    func_0x00010b056d1c(puVar7,lVar8,&uStack_a0);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar6);
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16bf80(uVar5);
    _objc_release(puVar10);
    _objc_release(puVar7);
  }
  puVar7 = PTR_PTR_1126c3c98;
  lStack_e8 = param_3;
  _objc_alloc();
  uVar1 = param_1;
  puStack_120 = puVar7;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c07f160();
  if ((int)uVar4 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = uVar17;
    func_0x0001070c47d8();
    _objc_retainAutoreleasedReturnValue();
    uStack_130 = uVar17;
    func_0x00010c1307e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = uVar17;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
  }
  uStack_118 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x00010c27e760();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puStack_120;
  func_0x00010c001ea0(puStack_120);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(param_1);
  if ((int)uVar4 != 0) {
    _objc_release(uVar17);
    _objc_release(uStack_138);
    _objc_release(uStack_130);
    _objc_release(uStack_128);
  }
  dVar19 = (double)iStack_110;
  dVar20 = (double)iStack_10c;
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar10 = puVar7;
  func_0x00010c0918c0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bb2c0(uVar5);
  _objc_release(puVar10);
  uVar1 = uStack_118;
  uVar2 = uStack_118;
  func_0x00010c13b420(uStack_118);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfadbe0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf07a40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar17;
  func_0x00010bf07e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb040(uVar5);
  _objc_release(uVar11);
  _objc_release(uVar17);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfadbe0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf07a40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar17;
  func_0x00010bf08000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar17);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar10 = PTR_PTR_1126c4798;
  func_0x00010c0b7b40(PTR_PTR_1126c4798);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21b160(uVar5);
  _objc_release(puVar10);
  func_0x00010c1a8660(uVar5);
  func_0x00010c16bc20(uVar5);
  uVar2 = uVar1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c46b8();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c14a8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uStack_f0;
  func_0x00010c250660();
  _objc_release(uVar17);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar8 = lStack_e8;
  uVar16 = uStack_f8;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_107109c4c;
  puStack_c8 = &UNK_11098eec8;
  lStack_c0 = lStack_e8;
  uStack_b8 = uVar1;
  uStack_b0 = uVar18;
  uStack_a8 = uStack_f8;
  _objc_retain(uStack_f8);
  _objc_retain(uVar18);
  _objc_retain(lVar8);
  ppuVar15 = &puStack_e0;
  func_0x00010bfae7c0(dVar20,dVar19,uVar5);
  lVar6 = lStack_108;
  uVar3 = uVar5;
  (**(code **)(lStack_108 + 0x10))(lStack_108);
  _objc_release(lVar6);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(lStack_c0);
  _objc_release(uVar16);
  _objc_release(uVar18);
  _objc_release(lVar8);
  _objc_release(uVar11);
  _objc_release(puVar7);
  _objc_release(uVar5);
  uVar2 = uStack_100;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uStack_180 = uVar1;
  uStack_178 = uVar18;
  lStack_168 = lVar6;
  uStack_160 = uVar16;
  lStack_158 = lVar8;
  pcStack_148 = FUN_107109c4c;
  uStack_190 = uVar11;
  uStack_188 = uVar5;
  uStack_170 = uVar17;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar15);
  if (uVar3 != 0) {
    uVar1 = uVar3;
    _objc_retain(uVar3);
    func_0x0001080009e8();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c112160();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c29af20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010c221d20(*(undefined8 *)(uVar2 + 0x20));
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  uVar13 = *(undefined8 *)(uVar2 + 0x28);
  func_0x00010c13b540(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar13;
  func_0x0001070c46b8();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar16;
  func_0x00010c14a8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73f00();
  _objc_release(uVar14);
  _objc_release(uVar18);
  _objc_release(uVar16);
  _objc_release(uVar13);
  puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c0 = 0xc2000000;
  pcStack_1b8 = FUN_107109e0c;
  puStack_1b0 = &UNK_11084a9e8;
  uVar18 = *(undefined8 *)(uVar2 + 0x38);
  _objc_retain(uVar18);
  uVar16 = *(undefined8 *)(uVar2 + 0x20);
  uStack_198 = uVar18;
  _objc_retain(uVar16);
  uStack_1a8 = uVar16;
  ppuStack_1a0 = ppuVar15;
  _objc_retain(ppuVar15);
  func_0x000100162d98("APPSTORE",&puStack_1c8);
  _objc_release(ppuStack_1a0);
  _objc_release(uStack_1a8);
  _objc_release(uStack_198);
  _objc_release(ppuVar15);
  return;
}



/* Entry: 107109c4c; end: 107109e0b;  */

void FUN_107109c4c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  if (param_2 != 0) {
    lVar1 = param_2;
    _objc_retain(param_2);
    func_0x0001080009e8();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c112160();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c29af20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c221d20(*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c13b540(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x0001070c46b8();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c14a8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73f00();
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107109e0c;
  puStack_70 = &UNK_11084a9e8;
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar7;
  _objc_retain(uVar6);
  uStack_68 = uVar6;
  uStack_60 = param_4;
  _objc_retain(param_4);
  func_0x000100162d98("APPSTORE",&puStack_88);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_58);
  _objc_release(param_4);
  return;
}


