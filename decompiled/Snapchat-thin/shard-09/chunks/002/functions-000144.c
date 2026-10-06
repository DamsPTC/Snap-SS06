/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ab677c; end: 106ab67bf;  */

void FUN_106ab677c(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf84ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ab67c0; end: 106ab67cf;  */

void FUN_106ab67c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 106ab67d0; end: 106ab67d7; -[SCShakeDrawOnAttachmentViewController saveButtonPressed] */

void FUN_106ab67d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissViewController__1125bec58,1);
  return;
}



/* Entry: 106ab67d8; end: 106ab69eb; -[SCShakeDrawOnAttachmentViewController deleteButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab67d8(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_70;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000106ac1214();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_70;
  _objc_copyWeak(auStack_78,puVar8);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000106ac10dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x000106ac11fc();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar2;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_78);
  puVar1 = auStack_70;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  func_0x00010bf84b00(puVar8);
  lVar7 = *(long *)(puVar1 + 0x20) + (long)_DAT_1127574cc;
  _objc_loadWeakRetained(lVar7);
  func_0x00010bf89a40();
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc20();
  _objc_release(puVar2);
  puVar1 = puVar1 + 0x28;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ab69ec; end: 106ab6a97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab69ec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_1127574cc;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf89a40();
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc20();
  _objc_release(puVar2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ab6a98; end: 106ab6aa7;  */

void FUN_106ab6a98(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 106ab6aa8; end: 106ab6aaf; -[SCShakeDrawOnAttachmentViewController cancelButtonPressed] */

void FUN_106ab6aa8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissViewController__1125bec58,0);
  return;
}



/* Entry: 106ab6ab0; end: 106ab6b0f; -[SCShakeDrawOnAttachmentViewController drawingButtonFrame] */

double FUN_106ab6ab0(double param_1,undefined8 param_2)

{
  func_0x00010bfe5d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(param_2);
  return param_1 + -60.0;
}



/* Entry: 106ab6b10; end: 106ab6b7f; -[SCShakeDrawOnAttachmentViewController colorPickerFrame] */

double FUN_106ab6b10(double param_1,undefined8 param_2)

{
  func_0x00010bfe5d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(param_2);
  return param_1 + -60.0 + 19.0;
}



/* Entry: 106ab6b80; end: 106ab6c4f; -[SCShakeDrawOnAttachmentViewController layoutGrowingButton:withButtonFrame:] */

void FUN_106ab6b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_7);
  uVar1 = param_1;
  _CGRectGetMidX(param_1,param_2,param_3,param_4);
  uVar2 = param_1;
  _CGRectGetMidY(param_1,param_2,param_3,param_4);
  func_0x00010c17a6a0(uVar1,uVar2,param_7);
  uVar1 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  func_0x00010c1739e0(0,0,uVar1,param_1,param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 106ab6c50; end: 106ab6d97; -[SCShakeDrawOnAttachmentViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab6c50(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  double dVar3;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f4a18;
  lStack_60 = param_4;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewDidLayoutSubviews_112684cc8);
  lVar1 = param_4;
  func_0x00010c2be8a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2be8c0(param_4);
  func_0x00010c08cd40(param_4);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c27af40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27af60(param_4);
  func_0x00010c08cd40(param_4);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bf37ca0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf37cc0(param_4);
  func_0x00010c08cd40(param_4);
  _objc_release(lVar1);
  lVar2 = (long)_DAT_1127574bc;
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar2));
  lVar1 = param_4;
  dVar3 = param_1;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c148fc0();
  _objc_release(lVar1);
  func_0x00010c19f0e0(param_1,param_2,param_3,dVar3 + 65.0,*(undefined8 *)(param_4 + lVar2));
  return;
}



/* Entry: 106ab6d98; end: 106ab718f; -[SCShakeDrawOnAttachmentViewController setupGradients] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106ab6d98(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1198;
  _objc_alloc();
  lVar2 = param_2;
  func_0x00010bfe5d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  func_0x00010c013de0(0,0,param_1,0x4050400000000000);
  lVar9 = (long)_DAT_1127574bc;
  uVar7 = *(undefined8 *)(param_2 + lVar9);
  *(undefined **)(param_2 + lVar9) = puVar1;
  _objc_release(uVar7);
  _objc_release(lVar2);
  func_0x00010c21e900(*(undefined8 *)(param_2 + lVar9),param_3,0);
  func_0x00010c16d4a0(*(undefined8 *)(param_2 + lVar9),param_3,0x22);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  dVar10 = 0.0;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_88 = puVar3;
  func_0x00010bf41680(0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_88,2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + lVar9);
  func_0x00010bfcd9c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  lVar2 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + lVar9);
  lVar9 = param_2;
  func_0x00010bfe5d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fe0(lVar2,param_3,uVar7,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126b1198;
  _objc_alloc();
  lVar2 = param_2;
  func_0x00010bfe5d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  dVar11 = dVar10 + -111.0;
  lVar9 = param_2;
  func_0x00010bfe5d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  func_0x00010c013de0(0,dVar11,dVar10,0x405bc00000000000);
  lVar8 = (long)_DAT_1127574c0;
  uVar7 = *(undefined8 *)(param_2 + lVar8);
  *(undefined **)(param_2 + lVar8) = puVar1;
  _objc_release(uVar7);
  _objc_release(lVar9);
  _objc_release(lVar2);
  func_0x00010c21e900(*(undefined8 *)(param_2 + lVar8),param_3,0);
  func_0x00010c16d4a0(*(undefined8 *)(param_2 + lVar8),param_3,10);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_a0 = puVar3;
  func_0x00010bf41680(0,0x3fc999999999999a);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_98 = puVar3;
  func_0x00010bf41680(0,0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_a0,3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + lVar8);
  func_0x00010bfcd9c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  uVar7 = *(undefined8 *)(param_2 + lVar8);
  func_0x00010bfcd9c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bff00();
  _objc_release(uVar7);
  lVar2 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + lVar8);
  func_0x00010bfe5d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fe0(lVar2,param_3,uVar7,param_2);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return lVar2;
  }
  ___stack_chk_fail();
  return *(long *)(lVar2 + _DAT_1127574d0);
}



/* Entry: 106ab7190; end: 106ab719f; -[SCShakeDrawOnAttachmentViewController attachmentIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ab7190(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127574d0);
}



/* Entry: 106ab71a0; end: 106ab71af; -[SCShakeDrawOnAttachmentViewController setAttachmentIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab71a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127574d0) = param_3;
  return;
}



/* Entry: 106ab71b0; end: 106ab71bf; -[SCShakeDrawOnAttachmentViewController xButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ab71b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127574d4);
}



/* Entry: 106ab71c0; end: 106ab71ff; -[SCShakeDrawOnAttachmentViewController setXButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab71c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127574d4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ab7200; end: 106ab720f; -[SCShakeDrawOnAttachmentViewController iconsContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ab7200(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127574b8);
}



/* Entry: 106ab7210; end: 106ab724f; -[SCShakeDrawOnAttachmentViewController setIconsContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab7210(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127574b8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ab7250; end: 106ab725f; -[SCShakeDrawOnAttachmentViewController drawingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ab7250(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127574b4);
}



/* Entry: 106ab7260; end: 106ab729f; -[SCShakeDrawOnAttachmentViewController setDrawingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab7260(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127574b4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ab72a0; end: 106ab72af; -[SCShakeDrawOnAttachmentViewController trashButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ab72a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127574c4);
}



/* Entry: 106ab72b0; end: 106ab72ef; -[SCShakeDrawOnAttachmentViewController setTrashButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab72b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127574c4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ab72f0; end: 106ab72ff; -[SCShakeDrawOnAttachmentViewController topGradient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ab72f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127574bc);
}



/* Entry: 106ab7300; end: 106ab733f; -[SCShakeDrawOnAttachmentViewController setTopGradient:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab7300(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127574bc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ab7340; end: 106ab734f; -[SCShakeDrawOnAttachmentViewController bottomGradient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ab7340(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127574c0);
}



/* Entry: 106ab7350; end: 106ab738f; -[SCShakeDrawOnAttachmentViewController setBottomGradient:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab7350(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127574c0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ab7390; end: 106ab739f; -[SCShakeDrawOnAttachmentViewController checkButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ab7390(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127574c8);
}



/* Entry: 106ab73a0; end: 106ab73df; -[SCShakeDrawOnAttachmentViewController setCheckButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab73a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127574c8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ab73e0; end: 106ab749b; -[SCShakeDrawOnAttachmentViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab73e0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127574c8,0);
  _objc_storeStrong(param_1 + _DAT_1127574c0,0);
  _objc_storeStrong(param_1 + _DAT_1127574bc,0);
  _objc_storeStrong(param_1 + _DAT_1127574c4,0);
  _objc_storeStrong(param_1 + _DAT_1127574b8,0);
  _objc_storeStrong(param_1 + _DAT_1127574d4,0);
  _objc_storeStrong(param_1 + _DAT_1127574b4,0);
  _objc_storeStrong(param_1 + _DAT_1127574b0,0);
  _objc_storeStrong(param_1 + _DAT_1127574ac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127574cc);
  return;
}



/* Entry: 106ab749c; end: 106ab7573; -[SCShakeDrawingView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106ab749c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f4a20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1c9b40(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf19920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_1127574d8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1bdd00(0x4000000000000000,*(undefined8 *)((long)puVar1 + lVar4));
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127574dc) = 0;
    func_0x00010c1d4c20(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106ab7574; end: 106ab75d7; -[SCShakeDrawingView drawRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab7574(long param_1)

{
  undefined *puVar1;
  
  func_0x00010bf89920(*(undefined8 *)(param_1 + _DAT_1127574e0));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c1248c0(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8c0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c25dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127574d8),PTR_s_stroke_112675110);
  return;
}



/* Entry: 106ab75d8; end: 106ab7637; -[SCShakeDrawingView touchesBegan:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab75d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  *(undefined4 *)(param_3 + _DAT_1127574e4) = 0;
  func_0x00010bf04a20(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = (long)_DAT_1127574e8;
  func_0x00010c09ef00();
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106ab7638; end: 106ab771f; -[SCShakeDrawingView touchesMoved:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab7638(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 extraout_d1;
  undefined1 auVar5 [16];
  
  func_0x00010bf04a20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00();
  lVar3 = (long)_DAT_1127574e4;
  uVar1 = *(int *)(param_2 + lVar3) + 1;
  *(uint *)(param_2 + lVar3) = uVar1;
  puVar2 = (undefined8 *)(param_2 + _DAT_1127574e8);
  puVar2[(ulong)uVar1 * 2] = param_1;
  (puVar2 + (ulong)uVar1 * 2)[1] = extraout_d1;
  if (uVar1 == 4) {
    auVar5 = NEON_fmov(0x3fe0000000000000,8);
    puVar2[7] = ((double)puVar2[5] + (double)puVar2[9]) * auVar5._8_8_;
    puVar2[6] = ((double)puVar2[4] + (double)puVar2[8]) * auVar5._0_8_;
    lVar4 = (long)_DAT_1127574d8;
    func_0x00010c0d18c0(*puVar2,puVar2[1],*(undefined8 *)(param_2 + lVar4));
    func_0x00010bef7ba0(puVar2[6],puVar2[7],puVar2[2],puVar2[3],puVar2[4],puVar2[5],
                        *(undefined8 *)(param_2 + lVar4));
    func_0x00010c1cbd40(param_2);
    puVar2[1] = puVar2[7];
    *puVar2 = puVar2[6];
    puVar2[3] = puVar2[9];
    puVar2[2] = puVar2[8];
    *(undefined4 *)(param_2 + lVar3) = 1;
    if ((*(byte *)(param_2 + _DAT_1127574dc) & 1) == 0) {
      *(undefined1 *)(param_2 + _DAT_1127574dc) = 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106ab7720; end: 106ab7763; -[SCShakeDrawingView touchesEnded:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab7720(long param_1)

{
  func_0x00010be064e0();
  func_0x00010c1cbd40(param_1);
  func_0x00010c12b000(*(undefined8 *)(param_1 + _DAT_1127574d8));
  *(undefined4 *)(param_1 + _DAT_1127574e4) = 0;
  return;
}



/* Entry: 106ab7764; end: 106ab7767; -[SCShakeDrawingView touchesCancelled:withEvent:] */

void FUN_106ab7764(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c277590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_touchesEnded_withEvent__11267b788);
  return;
}



/* Entry: 106ab7768; end: 106ab7777; -[SCShakeDrawingView drawScreenshotImageInCurrentContextWithRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab7768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127574e0),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 106ab7778; end: 106ab7787; -[SCShakeDrawingView hasDrawing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106ab7778(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127574dc);
}



/* Entry: 106ab7788; end: 106ab782f; -[SCShakeDrawingView _drawBitmap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab7788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010bf20c00();
  _UIGraphicsBeginImageContextWithOptions(param_3,param_4,0,0);
  lVar4 = (long)_DAT_1127574e0;
  func_0x00010bf897c0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),
                      *(undefined8 *)(param_5 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c1248c0(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8c0();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_5 + _DAT_1127574d8);
  func_0x00010c25dba0();
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_5 + lVar4);
  *(undefined8 *)(param_5 + lVar4) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__UIGraphicsEndImageContext_110345c68)();
  return;
}



/* Entry: 106ab7830; end: 106ab786f; -[SCShakeDrawingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ab7830(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127574e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127574d8,0);
  return;
}



/* Entry: 106ab7870; end: 106ab78f7; +[SCShakePromptCoordinator sharedCoordinator] */

void FUN_106ab7870(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106ab78f8;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c49a0 != -1) {
    func_0x00010002a2fc(0x1136c49a0,&puStack_48);
  }
  uVar1 = uRam00000001136c4998;
  _objc_retain(uRam00000001136c4998);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ab78f8; end: 106ab7923;  */

void FUN_106ab78f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_class();
  _objc_alloc_init();
  uVar1 = uRam00000001136c4998;
  uRam00000001136c4998 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ab7924; end: 106ab793f; +[SCShakePromptCoordinator announcerIdentifier] */

void FUN_106ab7924(void)

{
  _objc_opt_class(PTR_PTR_1126d0180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 106ab7940; end: 106ab7963; +[SCShakePromptCoordinator startupDidComplete] */

void FUN_106ab7940(undefined8 param_1)

{
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  uRam00000001136c4990 = param_1;
  return;
}



/* Entry: 106ab7964; end: 106ab7e6f; -[SCShakePromptCoordinator showShakePromptWithS2RScope:shakeInfoHolder:lazyEventAnnouncer:playerProvider:appTerminator:carrierNetworkInfoProvider:circumstanceEngine:isUserGodMode:cofTweakMenuScopeExposer:attributionServices:networkConnectivityMonitor:plusExternalShakeToReportEnabled:menuOptionsPluginScopeExposer:crashLogger:figmatizer:codematizer:graphene:appInsightsMetadataStorage:internalShakeLogWriter:s2rInfoProviderServices:deckServices:systemValdiRuntimeServices:noDepBlizzardLogger:] */

void FUN_106ab7964(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
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
  _objc_storeWeak(param_1 + 0x70);
  _objc_retain(param_12);
  uVar2 = *(undefined8 *)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x178) = param_12;
  _objc_release(uVar2);
  uVar3 = param_1;
  func_0x00010be3fbc0();
  if ((uVar3 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c2a71e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(param_1 + 0x10,uVar2);
    _objc_release(uVar2);
    _objc_storeWeak(param_1 + 0x78,param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0x170) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(param_1 + 0x80,param_8);
    *(undefined1 *)(param_1 + 0x188) = param_10;
    _objc_storeWeak(param_1 + 0x88,param_9);
    _objc_storeWeak(param_1 + 0x90,param_13);
    _objc_storeWeak(param_1 + 0xb0,param_14);
    _objc_storeWeak(param_1 + 0xb8,param_17);
    *(undefined1 *)(param_1 + 0x189) = param_15;
    uVar3 = param_1;
    func_0x00010becd7c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(param_1 + 8,uVar3);
    _objc_release(uVar3);
    _objc_storeWeak(param_1 + 0xa0,param_19);
    _objc_storeWeak(param_1 + 0xa8,param_20);
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = param_21;
    _objc_release(uVar2);
    _objc_storeWeak(param_1 + 0x98,param_18);
    _objc_retain(param_22);
    uVar2 = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = param_24;
    _objc_release(uVar2);
    _objc_storeWeak(param_1 + 0xe0,param_25);
    uVar2 = param_26;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = uVar2;
    _objc_release(uVar6);
    _objc_storeWeak(param_1 + 0xf0,param_27);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x170);
    func_0x00010c06f880();
    if (iVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x170);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      _objc_opt_class(param_1);
      func_0x00010bf04780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7dbc0(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    puVar4 = PTR_PTR_1126d0160;
    func_0x00010c22b6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfc25e0();
    _objc_release(puVar4);
    if (puVar5 == (undefined *)0x2) {
      func_0x00010be2e740(param_1);
    }
    else if (puVar5 == (undefined *)0x1) {
      func_0x00010be265c0(param_1);
    }
    else if (puVar5 == (undefined *)0x0) {
      uVar2 = param_3;
      func_0x00010c22a440();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010c22a1a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be2aec0(param_1);
      _objc_release(uVar6);
      _objc_release(uVar2);
    }
  }
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
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ab7e70; end: 106ab830b; -[SCShakePromptCoordinator showInAppValdiReportForS2RScope:isUserGodMode:lazyEventAnnouncer:playerProvider:carrierNetworkInfoProvider:circumstanceEngine:attributionServices:networkConnectivityMonitor:crashLogger:graphene:appInsightsMetadataStorage:internalShakeLogWriter:s2rInfoProviderServices:deckServices:systemValdiRuntimeServices:noDepBlizzardLogger:] */

ulong FUN_106ab7e70(ulong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                   undefined8 param_17,undefined8 param_18)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
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
  uVar8 = param_1;
  func_0x00010be3fbc0();
  if ((int)uVar8 == 0) {
    _objc_storeWeak(param_1 + 0x70,param_3);
    *(undefined1 *)(param_1 + 0x188) = param_4;
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0x170) = param_5;
    _objc_release(uVar1);
    _objc_storeWeak(param_1 + 0x80,param_7);
    _objc_storeWeak(param_1 + 0x88,param_8);
    _objc_storeWeak(param_1 + 0x90,param_9);
    _objc_storeWeak(param_1 + 0xb0,param_10);
    _objc_storeWeak(param_1 + 0x98,param_11);
    _objc_retain(param_12);
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = param_12;
    _objc_release(uVar1);
    _objc_retain(param_13);
    uVar1 = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = param_13;
    _objc_release(uVar1);
    _objc_retain(param_14);
    uVar1 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = param_14;
    _objc_release(uVar1);
    _objc_retain(param_15);
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = param_15;
    _objc_release(uVar1);
    _objc_storeWeak(param_1 + 0xe0,param_16);
    uVar1 = param_17;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = uVar1;
    _objc_release(uVar7);
    _objc_storeWeak(param_1 + 0xf0,param_18);
    uVar1 = param_3;
    func_0x00010c27ece0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(param_1 + 0x198,uVar1);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c22a440();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c22a160();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    uVar3 = param_3;
    func_0x00010c22a440(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c22a1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c22a440(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cfd40();
    uVar6 = param_3;
    func_0x00010c22a440(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c075c00();
    func_0x00010be48940(param_1);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(uVar7);
    _objc_release(uVar1);
    if (*(long *)(param_1 + 0xf8) != 0) {
      uVar8 = 1;
      goto LAB_106ab8270;
    }
    _objc_storeWeak(param_1 + 0x198,0);
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0x170) = 0;
    uVar8 = uVar8 & 0xffffffff;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf6b020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22a260();
  }
  _objc_release(uVar1);
LAB_106ab8270:
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
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 106ab830c; end: 106ab84f3; -[SCShakePromptCoordinator _handleInternalShakeWorkFlow:playerProvider:appTerminator:] */

void FUN_106ab830c(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010beb31e0();
  if ((int)lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010be790e0(param_1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010be791a0(param_1);
    lVar3 = lVar2;
    FUN_106abf6c4();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000106abf6d0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126d0260;
    _objc_alloc(PTR_PTR_1126d0260);
    func_0x00010c0620e0();
    if (param_3 == (undefined *)0x0) {
      param_3 = PTR_PTR_1126b69b8;
      _objc_alloc_init(PTR_PTR_1126b69b8);
      lVar6 = param_1;
      func_0x00010be1e800(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1eb420(param_3,param_2,lVar6);
      _objc_release(lVar6);
      lVar6 = param_1;
      func_0x00010bdf97c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1eb440(param_3,param_2,lVar6);
      _objc_release(lVar6);
    }
    if (*(char *)(param_1 + 0x188) == '\x01') {
      func_0x00010be48940(param_1,param_2,puVar5,lVar2,param_3,1,param_4,1,1);
    }
    else {
      func_0x00010be04720(param_1,param_2,puVar5,lVar2,param_3,param_4,param_5);
    }
    _objc_release(puVar5);
    _objc_release(lVar4);
  }
  else {
    lVar1 = param_1 + 0x70;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22a260();
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ab84f4; end: 106ab858b; -[SCShakePromptCoordinator _handleBetaShakeWorkFlow] */

void FUN_106ab84f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bee7100();
  if (((int)lVar1 == 0) || (lVar1 = param_1, func_0x00010beb31e0(), (int)lVar1 != 0)) {
    lVar1 = param_1 + 0x70;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22a260();
    _objc_release(lVar2);
  }
  else {
    lVar2 = param_1;
    func_0x00010beb49e0(param_1);
    lVar1 = param_1;
    func_0x00010be790e0(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010be791a0(param_1);
    func_0x00010be045c0(param_1,param_2,lVar1,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ab858c; end: 106ab8623; -[SCShakePromptCoordinator _handleProdShakeWorkFlow] */

void FUN_106ab858c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bee7100();
  if (((int)lVar1 == 0) || (lVar1 = param_1, func_0x00010beb31e0(), (int)lVar1 != 0)) {
    lVar1 = param_1 + 0x70;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22a260();
    _objc_release(lVar2);
  }
  else {
    lVar2 = param_1;
    func_0x00010beb49e0(param_1);
    lVar1 = param_1;
    func_0x00010be790e0(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010be791a0(param_1);
    func_0x00010be045c0(param_1,param_2,lVar1,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ab8624; end: 106ab86bb; -[SCShakePromptCoordinator _shouldDisabledShakeOnCurrentPage] */

ulong FUN_106ab8624(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  puVar1 = PTR_DAT_1126a5038;
  _objc_retain();
  uVar4 = uVar2;
  func_0x00010010fab4(uVar2,puVar1);
  uVar3 = uVar2;
  if ((int)uVar4 == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar2);
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar3 = uVar2;
    _objc_opt_respondsToSelector(uVar2,PTR_s_shouldDisableShakeToReportOnCurr_112669630);
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar2;
      func_0x00010c22f020(uVar2);
    }
  }
  _objc_release(uVar2);
  return uVar4;
}



/* Entry: 106ab86bc; end: 106ab87a7; -[SCShakePromptCoordinator _prepareShakeStart] */

long FUN_106ab86bc(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000106af98f8();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c5a0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d0148;
  func_0x00010bfc2dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d7ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d0140;
  _objc_opt_class(PTR_PTR_1126d0140);
  puVar3 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar1);
  if (((ulong)puVar3 & 1) != 0) {
    func_0x00010bf31420(puVar2);
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  _objc_release(puVar2);
  return (long)(param_1 * 1000.0);
}



/* Entry: 106ab87a8; end: 106ab87eb; -[SCShakePromptCoordinator _prepareScreenshotObsecured:] */

void FUN_106ab87a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  if ((int)param_3 != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2a6c20();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0e0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIScreen_1126aea10,PTR_s_obscuredScreenshot__112615b20,param_3);
  return;
}



/* Entry: 106ab87ec; end: 106ab8847; -[SCShakePromptCoordinator _userSessionExist] */

bool FUN_106ab87ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0130;
  func_0x00010c22b6e0(PTR_PTR_1126d0130);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  return puVar2 != (undefined *)0x0;
}



/* Entry: 106ab8848; end: 106ab88c3; -[SCShakePromptCoordinator _shouldObsecureScreenshotOnCurrentPage] */

uint FUN_106ab8848(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010010fab4();
  _objc_release(lVar1);
  uVar3 = 0;
  if ((lVar1 != 0) && ((int)lVar2 != 0)) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    _objc_opt_respondsToSelector();
    uVar3 = (uint)lVar1;
    _objc_release(param_1);
  }
  return uVar3 & 1;
}



/* Entry: 106ab88c4; end: 106ab8ae3; -[SCShakePromptCoordinator _displayInternalPromptWithShakeCaptureData:reportCreationTime:configuration:playerProvider:appTerminator:] */

void FUN_106ab88c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  ppuVar1 = param_5;
  func_0x00010c1187e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (ppuVar1 == (undefined **)0x0) {
    puVar2 = PTR_PTR_1126b0380;
    func_0x00010c298c80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110e6af78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    ppuVar3 = param_5;
    func_0x00010c1187e0(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_5;
  func_0x00010c1188a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e6af18;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar4);
  puVar5 = PTR_PTR_1126aed70;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106ab8ae4;
  puStack_90 = &UNK_11095b300;
  uStack_88 = param_1;
  uStack_80 = param_3;
  ppuStack_78 = param_5;
  uStack_70 = param_6;
  uStack_68 = param_4;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010beff4c0(puVar5,param_2,ppuVar1,&puStack_a8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  func_0x00010befa120(puVar2,param_2,puVar5);
  func_0x00010be04c80(param_1,param_2,&PTR____CFConstantStringClassReference_110e6af58,ppuVar3,
                      puVar2);
  _objc_release(puVar5);
  _objc_release(uStack_70);
  _objc_release(ppuStack_78);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(ppuVar3);
  return;
}



/* Entry: 106ab8ae4; end: 106ab8bcb;  */

void FUN_106ab8ae4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be57f80(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  return;
}



/* Entry: 106ab8bcc; end: 106ab8c03;  */

void FUN_106ab8bcc(long param_1,undefined8 param_2)

{
  func_0x00010be48940(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30),1,
                      *(undefined8 *)(param_1 + 0x38),1,0);
  return;
}



/* Entry: 106ab8c04; end: 106ab9133; -[SCShakePromptCoordinator _displayExternalPromptWithScreenshot:reportCreationTime:] */

void FUN_106ab8c04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uStack_180;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar9 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94800();
  _objc_release(lVar9);
  _objc_release(lVar1);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + 0x50) = param_4;
  lVar1 = param_1;
  func_0x00010be23b80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar9 = 0;
    uStack_180 = (undefined *)0x0;
  }
  else {
    lVar9 = lVar1;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    uStack_180 = (undefined *)0x0;
    if (lVar9 != 0) {
      uStack_180 = PTR_PTR_1126d0288;
      _objc_alloc();
      func_0x00010c040d40();
      if (uStack_180 != (undefined *)0x0) {
        func_0x00010c18b5e0();
        uVar2 = *(undefined8 *)(param_1 + 0x40);
        *(undefined **)(param_1 + 0x40) = uStack_180;
        _objc_retain(uStack_180);
        _objc_release(uVar2);
        puVar3 = PTR_PTR_1126b0a08;
        _objc_alloc();
        func_0x00010c055600();
        func_0x00010c201b60();
        func_0x00010c219d60(puVar3);
        func_0x00010c167420(puVar3);
        func_0x00010c16d3e0(puVar3);
        func_0x00010c219e20(puVar3);
        func_0x00010c1842e0(0x4034000000000000,puVar3);
        _objc_retain(puVar3);
        uVar2 = *(undefined8 *)(param_1 + 0x30);
        *(undefined **)(param_1 + 0x30) = puVar3;
        _objc_release(uVar2);
        puVar5 = PTR__OBJC_CLASS___UIViewController_1126af898;
        _objc_alloc_init();
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c29bf00(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440();
        _objc_release(puVar6);
        _objc_release(puVar4);
        func_0x00010c1c8b80(puVar5);
        _objc_storeWeak(param_1 + 0x38,puVar5);
        func_0x00010be7f9a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar5);
        _objc_retain(puVar3);
        func_0x00010c10eda0(param_1);
        _objc_release(param_1);
        _objc_release(puVar5);
        _objc_release(puVar3);
        _objc_release(puVar5);
        goto LAB_106ab90e8;
      }
    }
  }
  func_0x000106aad96c();
  if ((int)uStack_180 == 0) {
    uStack_180 = (undefined *)0x0;
  }
  else {
    func_0x000106ac10f4();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aed70;
  puVar4 = puVar3;
  func_0x000106ac1094();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar6 = puVar3;
  func_0x00010befa120(puVar3);
  puVar4 = PTR_PTR_1126aed70;
  func_0x000106ac10ac();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010befa120(puVar3);
  puVar7 = PTR_PTR_1126d0160;
  func_0x00010c22b6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfc25e0();
  _objc_release(puVar7);
  puVar6 = PTR_PTR_1126aed70;
  if (puVar8 == (undefined *)0x2) {
    func_0x000106ac10c4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff4c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    func_0x00010befa120(puVar3);
    _objc_release(puVar6);
    puVar7 = puVar6;
  }
  puVar6 = PTR_PTR_1126aed70;
  func_0x000106ac10dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar3;
  func_0x00010befa120(puVar3);
  func_0x000106ac107c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be04c80(param_1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(param_3);
LAB_106ab90e8:
  _objc_release(puVar3);
  _objc_release(uStack_180);
  _objc_release(lVar9);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106ab9134; end: 106ab9197;  */

void FUN_106ab9134(long param_1)

{
  undefined *puVar1;
  double in_d3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c10c5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (280.0 / in_d3,*(undefined8 *)(param_1 + 0x20),
             PTR_s_presentIn_withPullBar_withDefaul_112620b90,*(undefined8 *)(param_1 + 0x28),1,8);
  return;
}



/* Entry: 106ab9198; end: 106ab924f;  */

void FUN_106ab9198(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be57f80(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf84b00(param_2);
  _objc_release(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 106ab9250; end: 106ab9263;  */

void FUN_106ab9250(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be47590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__launchBetaReportViewWithScreens_11256f700,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),1);
  return;
}



/* Entry: 106ab9264; end: 106ab931b;  */

void FUN_106ab9264(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be57f80(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf84b00(param_2);
  _objc_release(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 106ab931c; end: 106ab932f;  */

void FUN_106ab931c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be47590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__launchBetaReportViewWithScreens_11256f700,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),2);
  return;
}



/* Entry: 106ab9330; end: 106ab93bb;  */

void FUN_106ab9330(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106ab93bc;
  puStack_30 = &UNK_110842e18;
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf84b00(param_2,param_2,1,&puStack_48);
  puVar1 = PTR_PTR_1126d0160;
  func_0x00010c22b6e0(PTR_PTR_1126d0160);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe980();
  _objc_release(puVar1);
  return;
}



/* Entry: 106ab93bc; end: 106ab93c3;  */

void FUN_106ab93bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0c1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__exitShakePrompt_112560a18);
  return;
}



/* Entry: 106ab93c4; end: 106ab941f;  */

void FUN_106ab93c4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106ab9420;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf84b00(param_2,param_2,1,&puStack_38);
  return;
}



/* Entry: 106ab9420; end: 106ab9427;  */

void FUN_106ab9420(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0c1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__exitShakePrompt_112560a18);
  return;
}



/* Entry: 106ab9428; end: 106ab953f; -[SCShakePromptCoordinator _displayPrompt:message:actions:] */

void FUN_106ab9428(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94800();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  func_0x00010c052ec0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c18b5e0(puVar3);
  func_0x00010c160fc0(puVar3);
  _objc_storeWeak(param_1 + 0x20,puVar3);
  func_0x00010be7f9a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106ab9540; end: 106ab954f; -[SCShakePromptCoordinator _isDisplayingReportView] */

bool FUN_106ab9540(long param_1)

{
  return *(long *)(param_1 + 0x168) != 0;
}



/* Entry: 106ab9550; end: 106ab960f; -[SCShakePromptCoordinator _isDisplayingReportViewOrPrompt] */

bool FUN_106ab9550(ulong param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    lVar3 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if ((((lVar3 == 0) && (*(long *)(param_1 + 0x30) == 0)) && (*(long *)(param_1 + 0x40) == 0)) &&
       (uVar4 = param_1, func_0x00010be3fba0(), (uVar4 & 1) == 0)) {
      lVar5 = *(long *)(param_1 + 0x180);
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
        lVar6 = param_1 + 0x58;
        _objc_loadWeakRetained(lVar6);
        bVar1 = lVar6 != 0;
        _objc_release();
      }
      else {
        bVar1 = true;
      }
      _objc_release(lVar5);
    }
    else {
      bVar1 = true;
    }
    _objc_release(lVar3);
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 106ab9610; end: 106ab9773; -[SCShakePromptCoordinator _topS2RDelegateViewController] */

void FUN_106ab9610(double param_1,ulong param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  if (10000.0 <= param_1 - dRam00000001136c4990) {
    func_0x00010becd7c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar1 = PTR_s_topViewController_11267ae78;
    uVar5 = param_2;
    while (uVar5 != 0) {
      _objc_retain(uVar5);
      uVar3 = uVar5;
      func_0x00010010fab4(uVar5,PTR_DAT_1126a5038);
      uVar6 = uVar5;
      if ((uVar3 & 1) == 0) {
        uVar3 = uVar5;
        _objc_opt_respondsToSelector(uVar5,puVar1);
        if ((uVar3 & 1) == 0) {
          uVar2 = 0;
        }
        else {
          uVar3 = uVar5;
          func_0x00010c275140();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010010fab4();
          uVar2 = 0;
          if (uVar3 != 0) {
            uVar2 = (uint)uVar4;
          }
          if (uVar2 == 1) {
            _objc_retainAutorelease(uVar3);
            uVar6 = uVar3;
          }
          _objc_release(uVar3);
        }
      }
      else {
        uVar2 = 1;
      }
      _objc_release(uVar5);
      _objc_retain(uVar6);
      _objc_release(uVar5);
      if ((uVar2 & 1) != 0) goto LAB_106ab9750;
      uVar5 = uVar6;
      func_0x00010c10fd00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
    }
    _objc_retain(param_2);
    uVar6 = param_2;
LAB_106ab9750:
    _objc_release(param_2);
  }
  else {
    uVar6 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106ab9774; end: 106ab97e3; -[SCShakePromptCoordinator _topViewController] */

void FUN_106ab9774(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126c14f0;
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c1417c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c275160(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106ab97e4; end: 106ab9807; -[SCShakePromptCoordinator _presentingViewController] */

void FUN_106ab97e4(long param_1)

{
  func_0x00010beafb00();
                    /* WARNING: Could not recover jumptable at 0x00010c1417d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 400),PTR_s_rootViewController_11262e010);
  return;
}



/* Entry: 106ab9808; end: 106ab993f; -[SCShakePromptCoordinator _setupShakeWindowIfNeeded] */

void FUN_106ab9808(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 400) != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010bd863c8();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 400);
  *(long *)(param_1 + 400) = lVar1;
  _objc_release(uVar4);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + 400));
  puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_alloc_init(PTR__OBJC_CLASS___UIViewController_1126af898);
  func_0x00010c1ee700(*(undefined8 *)(param_1 + 400));
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 400);
  func_0x00010c1417c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + 400));
  _objc_release(puVar2);
  func_0x00010c225b00(*(double *)PTR__UIWindowLevelAlert_110345e80 + 1.0,
                      *(undefined8 *)(param_1 + 400));
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 400),PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 106ab9940; end: 106ab998b; -[SCShakePromptCoordinator _tearDownShakeWindow] */

void FUN_106ab9940(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 400) != 0) {
    func_0x00010c1a7f60(*(long *)(param_1 + 400),param_2,1);
    func_0x00010c1ee700(*(undefined8 *)(param_1 + 400),param_2,0);
    uVar1 = *(undefined8 *)(param_1 + 400);
    *(undefined8 *)(param_1 + 400) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106ab998c; end: 106ab9b1f; -[SCShakePromptCoordinator _initialSubTopicIndexForTopics:initialTopicIndex:configuration:] */

void FUN_106ab998c(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 != 0) {
    lVar1 = param_5;
    func_0x00010c132ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (((lVar2 != 0) && (lVar1 = param_4, func_0x00010c067fc0(), -1 < lVar1)) &&
       (uVar3 = param_3, func_0x00010bf529e0(), lVar1 < (long)uVar3)) {
      uVar4 = param_3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
      uVar6 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar7);
      uVar3 = uVar5;
      if ((uVar6 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar5);
      if (uVar3 == 0) {
LAB_106ab9ab0:
        puVar7 = (undefined *)0x0;
      }
      else {
        lVar1 = param_5;
        func_0x00010c132ac0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfecde0();
        _objc_release(lVar1);
        if (uVar5 == 0x7fffffffffffffff) goto LAB_106ab9ab0;
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(uVar3);
      _objc_release(uVar4);
      goto LAB_106ab9abc;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_106ab9abc:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106ab9b20; end: 106aba4a3; -[SCShakePromptCoordinator _launchValdiReportViewWithShakeCaptureData:time:configuration:mode:playerProvider:isInternal:isVIP:] */

void FUN_106ab9b20(undefined **param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7,int param_8,char param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined **ppuStack_2a8;
  undefined *puStack_280;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_3);
  puVar1 = param_1[0x20];
  param_1[0x20] = param_3;
  _objc_release(puVar1);
  _objc_retain(param_5);
  puVar1 = param_1[0x21];
  param_1[0x21] = param_5;
  _objc_release(puVar1);
  param_1[0x22] = param_6;
  _objc_retain(param_7);
  puVar1 = param_1[0x24];
  param_1[0x24] = param_7;
  _objc_release(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d0190;
  if (param_9 != '\0') {
    func_0x00010befa120();
    ppuVar14 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7fc0;
    goto LAB_106ab9f98;
  }
  if (param_8 == 0) {
    ppuVar14 = param_1 + 0x11;
    _objc_loadWeakRetained(ppuVar14);
    func_0x00010bf198c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar14);
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    _objc_retain(puVar1);
    puVar10 = puVar1;
    func_0x00010bf52a60();
    if (puVar10 != (undefined *)0x0) {
      lVar13 = *plStack_230;
      ppuVar14 = (undefined **)0x0;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_230 != lVar13) {
            _objc_enumerationMutation(puVar1);
          }
          ppuVar16 = *(undefined ***)(lStack_238 + (long)puVar12 * 8);
          ppuStack_1c0 = &PTR____CFConstantStringClassReference_110dbf1b8;
          ppuVar4 = ppuVar16;
          func_0x00010c09e3e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar4;
          if (ppuVar4 == (undefined **)0x0) {
            ppuVar14 = ppuVar16;
            func_0x00010bf2f880();
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
            if (ppuVar14 != (undefined **)0x0) {
              ppuVar6 = ppuVar14;
            }
          }
          ppuStack_1b8 = &PTR____CFConstantStringClassReference_110e6aff8;
          ppuStack_1a8 = ppuVar6;
          func_0x00010bf2f880();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_1a0 = &PTR____CFConstantStringClassReference_110daafd8;
          if (ppuVar16 != (undefined **)0x0) {
            ppuStack_1a0 = ppuVar16;
          }
          ppuStack_1b0 = &PTR____CFConstantStringClassReference_110e6aeb8;
          puStack_198 = PTR____NSArray0__struct_11034ab48;
          puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(puVar11);
          _objc_release(ppuVar16);
          if (ppuVar4 == (undefined **)0x0) {
            _objc_release(ppuVar14);
          }
          _objc_release(ppuVar4);
          puVar12 = puVar12 + 1;
        } while (puVar10 != puVar12);
        puVar10 = puVar1;
        func_0x00010bf52a60();
      } while (puVar10 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    _objc_release(puVar1);
    ppuVar14 = (undefined **)0x0;
    goto LAB_106ab9f98;
  }
  puVar1 = PTR_PTR_1126d0290;
  _objc_alloc_init();
  puVar10 = puVar1;
  func_0x00010bf00700();
  _objc_retainAutoreleasedReturnValue();
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  puVar12 = puVar10;
  func_0x00010bf52a60();
  if (puVar12 != (undefined *)0x0) {
    lVar13 = *plStack_1f0;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_1f0 != lVar13) {
          _objc_enumerationMutation(puVar10);
        }
        uVar15 = *(undefined8 *)(lStack_1f8 + (long)puVar11 * 8);
        puVar3 = puVar1;
        func_0x00010c25e740();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR____NSArray0__struct_11034ab48;
        if (puVar3 != (undefined *)0x0) {
          puVar5 = puVar3;
        }
        _objc_retain(puVar5);
        _objc_release(puVar3);
        ppuStack_110 = &PTR____CFConstantStringClassReference_110dbf1b8;
        ppuStack_108 = &PTR____CFConstantStringClassReference_110e6aeb8;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        uStack_100 = uVar15;
        puStack_f8 = puVar5;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        func_0x00010befa120(puVar2);
        _objc_release(puVar3);
        puVar11 = puVar11 + 1;
      } while (puVar12 != puVar11);
      puVar12 = puVar10;
      func_0x00010bf52a60();
    } while (puVar12 != (undefined *)0x0);
  }
  puVar12 = param_5;
  func_0x00010c132aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar12 == (undefined *)0x0) {
LAB_106ab9d94:
    ppuVar14 = (undefined **)0x0;
  }
  else {
    puVar12 = param_5;
    func_0x00010c132aa0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bfecde0();
    _objc_release(puVar12);
    if (puVar11 == (undefined *)0x7fffffffffffffff) goto LAB_106ab9d94;
    ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar10);
  _objc_release(puVar1);
LAB_106ab9f98:
  func_0x00010bddfbc0(param_1);
  puVar1 = param_3;
  func_0x00010c151860();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    puStack_280 = (undefined *)0x0;
    ppuVar4 = param_1;
  }
  else {
    func_0x0001005c6500();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c25ce00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = param_3;
    func_0x00010c151860(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c14e020(puVar5);
    puVar1 = param_1[0x23];
    param_1[0x23] = puVar11;
    _objc_retain(puVar11);
    _objc_release(puVar1);
    puStack_280 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar5);
    _objc_release(puVar12);
    _objc_release(puVar10);
    ppuVar4 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  }
  ppuVar6 = param_1;
  func_0x00010be23b80();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar6 == (undefined **)0x0) {
    ppuStack_2a8 = (undefined **)0x0;
  }
  else {
    ppuStack_2a8 = ppuVar6;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar16 = param_1 + 0x1c;
  _objc_loadWeakRetained();
  _objc_release();
  if (ppuVar16 == (undefined **)0x0) {
    ppuVar16 = (undefined **)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    ppuVar7 = param_1 + 0x1c;
    _objc_loadWeakRetained();
    ppuVar8 = ppuVar7;
    func_0x00010bf66980();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar8;
    func_0x00010bf66920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    puVar1 = param_1[0x1d];
    _objc_retain(puVar1);
  }
  _objc_retain(puVar2);
  puVar10 = param_1[0x25];
  param_1[0x25] = puVar2;
  _objc_release(puVar10);
  ppuVar8 = param_1;
  func_0x00010be3b0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126d0298;
  _objc_alloc();
  puVar12 = param_5;
  func_0x00010c1188a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = param_1 + 0x33;
  _objc_loadWeakRetained();
  func_0x00010c040d20();
  ppuVar9 = param_1 + 0x1f;
  puVar11 = *ppuVar9;
  *ppuVar9 = puVar10;
  _objc_release(puVar11);
  _objc_release(ppuVar7);
  _objc_release(puVar12);
  if (*ppuVar9 == (undefined *)0x0) {
    ppuVar7 = param_1 + 0x33;
    _objc_loadWeakRetained();
    _objc_release();
    if (ppuVar7 == (undefined **)0x0) {
      func_0x00010be0c1e0(param_1);
    }
  }
  else {
    func_0x00010c1fe8a0();
    puVar12 = param_1[0x1f];
    _objc_retain(puVar12);
    puVar10 = param_1[0x2d];
    param_1[0x2d] = puVar12;
    _objc_release(puVar10);
    ppuVar4 = param_1 + 0x33;
    _objc_loadWeakRetained();
    _objc_release();
    if (ppuVar4 == (undefined **)0x0) {
      _objc_initWeak(auStack_248,param_1);
      func_0x00010be7f9a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_268 = 0xc2000000;
      pcStack_260 = FUN_106aba4a4;
      puStack_258 = &UNK_1108434b0;
      ppuVar4 = &puStack_270;
      _objc_copyWeak(auStack_250,auStack_248);
      func_0x00010c10eda0(param_1);
      _objc_destroyWeak(auStack_250);
      _objc_release(param_1);
      _objc_destroyWeak(auStack_248);
    }
    else {
      ppuVar4 = param_1 + 0x33;
      _objc_loadWeakRetained(ppuVar4);
      func_0x00010bf0c980();
      _objc_release(ppuVar4);
      ppuVar4 = param_1 + 0x12;
      _objc_loadWeakRetained();
      ppuVar7 = ppuVar4;
      func_0x00010bf5f860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24fc80();
      _objc_release(ppuVar7);
      _objc_release(ppuVar4);
      func_0x00010be801e0(param_1);
      ppuVar4 = param_1;
    }
  }
  _objc_release(ppuVar8);
  _objc_release(puVar1);
  _objc_release(ppuVar16);
  _objc_release(ppuStack_2a8);
  _objc_release(ppuVar6);
  _objc_release(puStack_280);
  _objc_release(ppuVar14);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar4 + 4);
  _objc_destroyWeak(auStack_248);
  __Unwind_Resume();
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3 + 0x90;
    _objc_loadWeakRetained(puVar1);
    puVar2 = puVar1;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24fc80();
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010be801e0(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106aba4a4; end: 106aba513;  */

void FUN_106aba4a4(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x90;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24fc80();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010be801e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106aba514; end: 106aba5c7; -[SCShakePromptCoordinator _primeCachedPhotoPicker] */

void FUN_106aba514(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___PHPickerConfiguration_1126bd878;
  _objc_alloc_init(PTR__OBJC_CLASS___PHPickerConfiguration_1126bd878);
  func_0x00010c1fb9a0();
  puVar2 = PTR__OBJC_CLASS___PHPickerFilter_1126bd880;
  func_0x00010bfe9960(PTR__OBJC_CLASS___PHPickerFilter_1126bd880);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bd60(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1dfe20(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___PHPickerViewController_1126bd888;
  _objc_alloc();
  func_0x00010c001640();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar2;
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x68),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106aba5c8; end: 106aba5cf; -[SCShakePromptCoordinator _getValdiRuntimeProvider] */

void FUN_106aba5c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xe8),PTR_s_target_112678178);
  return;
}



/* Entry: 106aba5d0; end: 106abae57; -[SCShakePromptCoordinator _pushValdiReportViewWithShakeCaptureData:time:configuration:mode:playerProvider:isInternal:] */

void FUN_106aba5d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,undefined8 param_7,uint param_8)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  long lStack_328;
  long lStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [128];
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  *(long *)(param_1 + 0x100) = param_3;
  _objc_release(uVar2);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  *(long *)(param_1 + 0x108) = param_5;
  _objc_release(uVar2);
  *(long *)(param_1 + 0x110) = param_6;
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = param_7;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126d0190;
  if (param_8 == 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x189);
    ppuVar6 = (undefined **)(param_1 + 0x88);
    _objc_loadWeakRetained(ppuVar6);
    func_0x00010bf198c0(puVar7,param_2,uVar1,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    _objc_retain(puVar7);
    puVar17 = puVar7;
    func_0x00010bf52a60(puVar7,param_2,&uStack_240,auStack_190,0x10);
    puVar5 = PTR____NSArray0__struct_11034ab48;
    puVar4 = puVar7;
    if (puVar17 != (undefined *)0x0) {
      lVar18 = *plStack_230;
      do {
        puVar21 = (undefined *)0x0;
        do {
          if (*plStack_230 != lVar18) {
            _objc_enumerationMutation(puVar7);
          }
          ppuVar20 = *(undefined ***)(lStack_238 + (long)puVar21 * 8);
          ppuStack_1c0 = &PTR____CFConstantStringClassReference_110dbf1b8;
          ppuVar8 = ppuVar20;
          func_0x00010c09e3e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar15 = ppuVar8;
          if (ppuVar8 == (undefined **)0x0) {
            ppuVar6 = ppuVar20;
            func_0x00010bf2f880();
            _objc_retainAutoreleasedReturnValue();
            ppuVar15 = &PTR____CFConstantStringClassReference_110daafd8;
            if (ppuVar6 != (undefined **)0x0) {
              ppuVar15 = ppuVar6;
            }
          }
          ppuStack_1b8 = &PTR____CFConstantStringClassReference_110e6aff8;
          ppuStack_1a8 = ppuVar15;
          func_0x00010bf2f880();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_1a0 = &PTR____CFConstantStringClassReference_110daafd8;
          if (ppuVar20 != (undefined **)0x0) {
            ppuStack_1a0 = ppuVar20;
          }
          ppuStack_1b0 = &PTR____CFConstantStringClassReference_110e6aeb8;
          puStack_198 = puVar5;
          puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_1a8,
                              &ppuStack_1c0,3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3,param_2,puVar9);
          _objc_release(puVar9);
          _objc_release(ppuVar20);
          if (ppuVar8 == (undefined **)0x0) {
            _objc_release(ppuVar6);
          }
          _objc_release(ppuVar8);
          puVar21 = puVar21 + 1;
        } while (puVar17 != puVar21);
        puVar17 = puVar7;
        func_0x00010bf52a60(puVar7,param_2,&uStack_240,auStack_190,0x10);
      } while (puVar17 != (undefined *)0x0);
      goto LAB_106abaa00;
    }
    puStack_258 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126d0290;
    _objc_alloc_init();
    puVar7 = puVar4;
    func_0x00010bf00700();
    _objc_retainAutoreleasedReturnValue();
    lStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    puVar5 = puVar7;
    func_0x00010bf52a60();
    if (puVar5 != (undefined *)0x0) {
      lVar18 = *plStack_1f0;
      do {
        puVar17 = (undefined *)0x0;
        do {
          if (*plStack_1f0 != lVar18) {
            _objc_enumerationMutation(puVar7);
          }
          uVar2 = *(undefined8 *)(lStack_1f8 + (long)puVar17 * 8);
          puVar9 = puVar4;
          func_0x00010c25e740(puVar4,param_2,uVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar21 = PTR____NSArray0__struct_11034ab48;
          if (puVar9 != (undefined *)0x0) {
            puVar21 = puVar9;
          }
          _objc_retain(puVar21);
          _objc_release(puVar9);
          ppuStack_110 = &PTR____CFConstantStringClassReference_110dbf1b8;
          ppuStack_108 = &PTR____CFConstantStringClassReference_110e6aeb8;
          puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          uStack_100 = uVar2;
          puStack_f8 = puVar21;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_100,
                              &ppuStack_110,2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar21);
          func_0x00010befa120(puVar3,param_2,puVar9);
          _objc_release(puVar9);
          puVar17 = puVar17 + 1;
        } while (puVar5 != puVar17);
        puVar5 = puVar7;
        func_0x00010bf52a60(puVar7,param_2,&uStack_200,auStack_f0,0x10);
      } while (puVar5 != (undefined *)0x0);
    }
    lVar18 = param_5;
    func_0x00010c132aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar18 == 0) {
LAB_106abaa00:
      puStack_258 = (undefined *)0x0;
    }
    else {
      lVar18 = param_5;
      func_0x00010c132aa0(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar7;
      func_0x00010bfecde0(puVar7,param_2,lVar18);
      _objc_release(lVar18);
      if (puVar5 == (undefined *)0x7fffffffffffffff) {
        puStack_258 = (undefined *)0x0;
      }
      else {
        puStack_258 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar5);
        _objc_retainAutoreleasedReturnValue();
      }
    }
  }
  _objc_release(puVar7);
  _objc_release(puVar4);
  func_0x00010bddfbc0(param_1);
  lVar18 = param_3;
  func_0x00010c151860();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  _objc_release();
  if (lVar18 == 0) {
    puStack_250 = (undefined *)0x0;
  }
  else {
    func_0x0001005c6500();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar7;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e6b018);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar19;
    func_0x00010c25ce00(lVar19,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    lVar10 = param_3;
    func_0x00010c151860(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    func_0x00010c14e020(lVar11,param_2,lVar18,1);
    uVar2 = *(undefined8 *)(param_1 + 0x118);
    *(long *)(param_1 + 0x118) = lVar18;
    _objc_retain(lVar18);
    _objc_release(uVar2);
    puStack_250 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e6b038);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar18);
    _objc_release(lVar11);
    _objc_release(puVar5);
    _objc_release(lVar19);
  }
  lVar18 = param_1;
  func_0x00010be23b80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar18 == 0) {
    lStack_260 = 0;
  }
  else {
    lStack_260 = lVar18;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar19 = param_1 + 0xe0;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar19 == 0) {
    lVar19 = 0;
    uVar2 = 0;
  }
  else {
    lVar10 = param_1 + 0xe0;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010bf66980();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar11;
    func_0x00010bf66920();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar13);
    _objc_release(lVar11);
    _objc_release(lVar10);
    uVar2 = *(undefined8 *)(param_1 + 0xe8);
    _objc_retain(uVar2);
  }
  _objc_retain(puVar3);
  uVar12 = *(undefined8 *)(param_1 + 0x128);
  *(undefined **)(param_1 + 0x128) = puVar3;
  _objc_release(uVar12);
  lVar10 = param_1;
  func_0x00010be3b0e0(param_1,param_2,puVar3,puStack_258,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126d0298;
  _objc_alloc();
  lVar11 = param_5;
  func_0x00010c1188a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = (ulong)param_8;
  lVar13 = lStack_260;
  func_0x00010c040d20(puVar7,param_2,lStack_260,puVar3,uVar14,param_6 == 1,puStack_258,lVar10,
                      puStack_250,lVar11,0);
  uVar12 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined **)(param_1 + 0xf8) = puVar7;
  _objc_release(uVar12);
  _objc_release(lVar11);
  if (*(long *)(param_1 + 0xf8) == 0) {
    func_0x00010be0c1e0(param_1);
  }
  else {
    func_0x00010c1fe8a0(*(long *)(param_1 + 0xf8),param_2,param_1);
    uVar16 = *(undefined8 *)(param_1 + 0xf8);
    _objc_retain(uVar16);
    uVar12 = *(undefined8 *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x168) = uVar16;
    _objc_release(uVar12);
    lVar11 = param_1 + 0x60;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar11 == 0) {
      lVar11 = param_1 + 8;
      _objc_loadWeakRetained(lVar11);
      uVar14 = 0;
      func_0x00010c10eda0();
    }
    else {
      lVar11 = param_1 + 0x60;
      _objc_loadWeakRetained(lVar11);
      func_0x00010c11c520();
    }
    _objc_release(lVar11);
    param_1 = param_1 + 0x90;
    _objc_loadWeakRetained(param_1);
    lVar11 = param_1;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = 0x12d;
    func_0x00010c24fc80();
    _objc_release(lVar11);
    _objc_release(param_1);
  }
  _objc_release(lVar10);
  _objc_release(uVar2);
  _objc_release(lVar19);
  _objc_release(lStack_260);
  _objc_release(lVar18);
  _objc_release(puStack_250);
  _objc_release(puStack_258);
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar13);
  lVar18 = param_3;
  func_0x00010be7f9a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar18 != 0) {
    lVar19 = lVar18;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar19 == 0) {
      puVar7 = PTR_PTR_1126d0260;
      _objc_alloc();
      lVar10 = param_3;
      func_0x00010beb2c20();
      lVar19 = 0;
      if ((int)lVar10 == 0) {
        lVar19 = lVar13;
      }
      func_0x00010c0620e0(puVar7,param_2,0,0,lVar19);
      puVar3 = (undefined *)(param_3 + 0x70);
      _objc_loadWeakRetained();
      puVar5 = puVar3;
      func_0x00010c22a440();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar5;
      func_0x00010bfa2900();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar3);
      puVar5 = PTR_PTR_1126d0188;
      _objc_alloc();
      puVar3 = PTR_PTR_1126d0190;
      puVar4 = puVar17;
      if (puVar17 == (undefined *)0x0) {
        uVar1 = *(undefined1 *)(param_3 + 0x189);
        lStack_328 = param_3 + 0x88;
        _objc_loadWeakRetained();
        func_0x00010bf198c0(puVar3,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
      }
      puVar3 = PTR_PTR_1126d0198;
      _objc_alloc(PTR_PTR_1126d0198);
      lVar19 = param_3 + 0x88;
      _objc_loadWeakRetained(lVar19);
      lVar10 = param_3 + 0xb0;
      _objc_loadWeakRetained(lVar10);
      puVar21 = PTR_PTR_1126ae720;
      func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11095b330);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffea60(puVar3,param_2,lVar19,lVar10,puVar21,*(undefined8 *)(param_3 + 200));
      func_0x00010bffca80(puVar5,param_2,puVar7,puVar4,uVar14,1,0,puVar3,
                          *(undefined8 *)(param_3 + 0xd0),0);
      _objc_release(puVar3);
      _objc_release(puVar21);
      _objc_release(lVar10);
      _objc_release(lVar19);
      if (puVar17 == (undefined *)0x0) {
        _objc_release(puVar4);
        _objc_release(lStack_328);
      }
      puVar3 = puVar5;
      func_0x00010c1fe8a0(puVar5,param_2,param_3);
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe8e0(puVar5,param_2,puVar3);
      _objc_release(puVar3);
      lVar19 = param_3 + 0x80;
      _objc_loadWeakRetained(lVar19);
      func_0x00010c179e00(puVar5,param_2,lVar19);
      _objc_release(lVar19);
      uVar2 = *(undefined8 *)(param_3 + 0x168);
      *(undefined **)(param_3 + 0x168) = puVar5;
      _objc_retain(puVar5);
      _objc_release(uVar2);
      func_0x00010c10eda0(lVar18,param_2,puVar5,1,0);
      _objc_release(puVar5);
      _objc_release(puVar17);
      _objc_release(puVar7);
      goto LAB_106abb0dc;
    }
  }
  func_0x00010be0c1e0(param_3);
LAB_106abb0dc:
  _objc_release(lVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar13);
  return;
}



/* Entry: 106abae58; end: 106abb107; -[SCShakePromptCoordinator _launchBetaReportViewWithScreenshot:time:mode:] */

void FUN_106abae58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lStack_78;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be7f9a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      puVar4 = PTR_PTR_1126d0260;
      _objc_alloc();
      lVar3 = param_1;
      func_0x00010beb2c20();
      uVar10 = 0;
      if ((int)lVar3 == 0) {
        uVar10 = param_3;
      }
      func_0x00010c0620e0(puVar4,param_2,0,0,uVar10);
      puVar5 = (undefined *)(param_1 + 0x70);
      _objc_loadWeakRetained();
      puVar6 = puVar5;
      func_0x00010c22a440();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bfa2900();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      puVar6 = PTR_PTR_1126d0188;
      _objc_alloc();
      puVar5 = PTR_PTR_1126d0190;
      puVar11 = puVar7;
      if (puVar7 == (undefined *)0x0) {
        uVar1 = *(undefined1 *)(param_1 + 0x189);
        lStack_78 = param_1 + 0x88;
        _objc_loadWeakRetained();
        func_0x00010bf198c0(puVar5,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar5;
      }
      puVar5 = PTR_PTR_1126d0198;
      _objc_alloc(PTR_PTR_1126d0198);
      lVar3 = param_1 + 0x88;
      _objc_loadWeakRetained(lVar3);
      lVar8 = param_1 + 0xb0;
      _objc_loadWeakRetained(lVar8);
      puVar9 = PTR_PTR_1126ae720;
      func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11095b330);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffea60(puVar5,param_2,lVar3,lVar8,puVar9,*(undefined8 *)(param_1 + 200));
      func_0x00010bffca80(puVar6,param_2,puVar4,puVar11,param_5,1,0,puVar5,
                          *(undefined8 *)(param_1 + 0xd0),0);
      _objc_release(puVar5);
      _objc_release(puVar9);
      _objc_release(lVar8);
      _objc_release(lVar3);
      if (puVar7 == (undefined *)0x0) {
        _objc_release(puVar11);
        _objc_release(lStack_78);
      }
      puVar5 = puVar6;
      func_0x00010c1fe8a0(puVar6,param_2,param_1);
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe8e0(puVar6,param_2,puVar5);
      _objc_release(puVar5);
      lVar3 = param_1 + 0x80;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c179e00(puVar6,param_2,lVar3);
      _objc_release(lVar3);
      uVar10 = *(undefined8 *)(param_1 + 0x168);
      *(undefined **)(param_1 + 0x168) = puVar6;
      _objc_retain(puVar6);
      _objc_release(uVar10);
      func_0x00010c10eda0(lVar2,param_2,puVar6,1,0);
      _objc_release(puVar6);
      _objc_release(puVar7);
      _objc_release(puVar4);
      goto LAB_106abb0dc;
    }
  }
  func_0x00010be0c1e0(param_1);
LAB_106abb0dc:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106abb108; end: 106abb113;  */

void FUN_106abb108(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bb598,PTR_s_sharedInstance_1126688c8);
  return;
}



/* Entry: 106abb114; end: 106abb1b3; -[SCShakePromptCoordinator _launchTweaks] */

void FUN_106abb114(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0bf0;
  func_0x00010c22ba80(PTR_PTR_1126b0bf0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d02a0;
  _objc_alloc(PTR_PTR_1126d02a0);
  func_0x00010c04cb80();
  func_0x00010c21ab20();
  func_0x00010c1c8b80(puVar2,param_2,0);
  func_0x00010be7f9a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106abb1b4; end: 106abb28b; -[SCShakePromptCoordinator _launchCofTweakMenu] */

void FUN_106abb1b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1;
  func_0x00010be7f9a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      puVar4 = PTR_PTR_1126d02a8;
      _objc_alloc(PTR_PTR_1126d02a8);
      func_0x00010c0567c0();
      uVar6 = *(undefined8 *)(param_1 + 0x178);
      _objc_retain(uVar6);
      uVar5 = *(undefined8 *)(param_1 + 0x180);
      *(undefined8 *)(param_1 + 0x180) = uVar6;
      _objc_release(uVar5);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x180),param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      goto LAB_106abb274;
    }
  }
  func_0x00010be0c1e0(param_1);
LAB_106abb274:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106abb28c; end: 106abb357; -[SCShakePromptCoordinator _runFigmatizerForConfiguration:] */

void FUN_106abb28c(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar2 = param_1 + 0xa0;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    func_0x00010becae60(param_1);
  }
  else {
    ppuVar3 = param_3;
    func_0x00010c132aa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110db54d8;
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar1 = ppuVar3;
    }
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106abb358;
    puStack_40 = &UNK_11084f200;
    lStack_38 = param_1;
    func_0x00010c142c80(lVar2,param_2,ppuVar1,&puStack_58);
    _objc_release(ppuVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106abb358; end: 106abb627;  */

void FUN_106abb358(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad300();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126aeb08;
    _objc_alloc(PTR_PTR_1126aeb08);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff0f80(puVar1);
    _objc_release(puVar6);
    _objc_retain(puVar5);
    func_0x00010c17fc60(puVar1);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be7f9a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10eda0();
    _objc_release(uVar7);
    _objc_release(puVar5);
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x20);
    func_0x00010be7f9a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126aed70;
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar2 = param_3;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar3);
    _objc_release(puVar4);
    func_0x00010c10eda0(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(param_2);
  return;
}



/* Entry: 106abb628; end: 106abb683;  */

void FUN_106abb628(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106abb684;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf84b00(param_2,param_2,1,&puStack_38);
  return;
}



/* Entry: 106abb684; end: 106abb68b;  */

void FUN_106abb684(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becae70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__tearDownShakeWindow_112590540);
  return;
}



/* Entry: 106abb68c; end: 106abb703;  */

void FUN_106abb68c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc60();
  _objc_retain(0);
  _objc_release(puVar1);
  func_0x00010becae60(*(undefined8 *)(param_1 + 0x28));
  _objc_release(0);
  return;
}



/* Entry: 106abb704; end: 106abb75b; -[SCShakePromptCoordinator cofTweakMenuDidComplete] */

void FUN_106abb704(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106abb75c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_38);
  return;
}



/* Entry: 106abb75c; end: 106abb7f7;  */

void FUN_106abb75c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x180);
  func_0x00010c150520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c12e1c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x180));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be0c1e0(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x180);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x180) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x178);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x178) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106abb7f8; end: 106abb82f; -[SCShakePromptCoordinator _shouldCensorScreenshot] */

long FUN_106abb7f8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c22e840();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 106abb830; end: 106abb903; -[SCShakePromptCoordinator _getDefaultProjectName] */

void FUN_106abb830(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010becd6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010010fab4();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar2 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_defaultProjectNameV3_1125b81a0);
  uVar3 = uVar1;
  if ((uVar2 & 1) != 0) {
    uVar2 = uVar1;
    func_0x00010bf69fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 != 0) {
      func_0x00010bf69fe0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106abb8e0;
    }
  }
  uVar2 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_defaultProjectNameV2_1125b8198);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010bf69fc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_106abb8e0:
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106abb904; end: 106abb997; -[SCShakePromptCoordinator _defaultSubProjectName] */

void FUN_106abb904(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010becd6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010010fab4();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if ((uVar1 == 0) ||
     (uVar2 = param_1, _objc_opt_respondsToSelector(param_1,PTR_s_defaultSubProjectName_1125b8320),
     (uVar2 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010bf6a5e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106abb998; end: 106abbabb; -[SCShakePromptCoordinator _showNotYetImplementedAlert] */

void FUN_106abb998(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aed70;
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar3);
    _objc_release(puVar4);
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained(param_1);
    func_0x00010c10eda0();
    _objc_release(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 106abbabc; end: 106abbacb;  */

void FUN_106abbabc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 106abbacc; end: 106abbd37; -[SCShakePromptCoordinator _exitShakePrompt] */

void FUN_106abbacc(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  uVar1 = *(undefined8 *)(param_1 + 0x170);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar3 = param_1;
  func_0x00010becd7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126afdd8;
  uVar4 = uVar3;
  func_0x00010010fab4();
  uVar2 = uVar3;
  if ((int)uVar4 == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  func_0x00010c0f2220(uVar2);
  _objc_release(uVar2);
  func_0x00010bfc8740();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c08fa60();
  if (puVar6 != (undefined *)0x0) {
    lVar7 = param_1 + 0x90;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_DAT_1126a4e58;
    _objc_retain(uVar3);
    uVar4 = uVar3;
    func_0x00010010fab4(uVar3,puVar6);
    uVar2 = uVar3;
    if ((int)uVar4 == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    func_0x00010c0f2220(uVar2);
    _objc_release(uVar2);
    func_0x00010c24fc40(lVar8);
    _objc_release(lVar8);
    _objc_release(lVar7);
  }
  uVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  if (uVar2 != 0) {
    uVar4 = uVar2;
  }
  _objc_retain(uVar4);
  _objc_release(uVar2);
  puVar6 = PTR_DAT_1126a5038;
  _objc_retain(uVar4);
  uVar9 = uVar4;
  func_0x00010010fab4(uVar4,puVar6);
  uVar2 = uVar4;
  if ((int)uVar9 == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  if (uVar2 != 0) {
    uVar2 = uVar4;
    _objc_opt_respondsToSelector(uVar4,PTR_s_willEndCensoringScreenshot_1126872e8);
    _objc_release(uVar4);
    if ((uVar2 & 1) != 0) {
      func_0x00010c2a6300(uVar4);
    }
  }
  _objc_release(uVar4);
  _objc_storeWeak(param_1 + 8,0);
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x168) = 0;
  _objc_release(uVar1);
  _objc_storeWeak(param_1 + 0x60,0);
  func_0x00010becae60(param_1);
  lVar7 = param_1 + 0x70;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22a260();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106abbd38; end: 106abbdc7; -[SCShakePromptCoordinator _getJiraMetaInfoFromTopViewController:] */

void FUN_106abbd38(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5038);
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar1 = param_3;
    _objc_opt_respondsToSelector(param_3,PTR_s_jiraMetaInfo_1125fef30);
    _objc_release(param_3);
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = param_3;
      func_0x00010c085480(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106abbdc8; end: 106abbdcb; -[SCShakePromptCoordinator shakeReportDidComplete] */

void FUN_106abbdc8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0c1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exitShakePrompt_112560a18);
  return;
}



/* Entry: 106abbdcc; end: 106abbe3f; -[SCShakePromptCoordinator resumeShakeReportWithController:completion:] */

void FUN_106abbdcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be7f9a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


