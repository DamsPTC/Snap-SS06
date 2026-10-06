/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106324eb8; end: 106324fcb; -[SCOperaViewController didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106324eb8(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_40;
  undefined *puStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745b64);
  _objc_retain(param_3);
  func_0x00010bf77ea0(uVar2);
  puStack_38 = PTR_PTR_1126f0ed0;
  puStack_40 = param_1;
  _objc_msgSendSuper2(&puStack_40,PTR_s_didMoveToParentViewController__1125bb948,param_3);
  _objc_release(param_3);
  lVar3 = *(long *)(param_1 + _DAT_112745c00);
  puVar1 = PTR_PTR_1126c9cb0;
  if (param_3 == 0) {
    if (lVar3 == 0) {
      puVar1 = param_1;
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f6200(param_1);
    }
    else {
      func_0x00010c12f3c0(PTR_PTR_1126c9cb0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f6220(lVar3);
    }
  }
  else {
    func_0x00010c12f3c0(PTR_PTR_1126c9cb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13dba0(lVar3);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 106324fcc; end: 1063250f7; -[SCOperaViewController didBecomeActivePostponed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106324fcc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = param_1;
  func_0x00010bdf6e60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f3c0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar5 & 1) == 0) {
    func_0x00010c0f02c0(*(undefined8 *)(param_1 + (long)_DAT_112745bcc),param_2,param_1);
  }
  uVar9 = *(undefined8 *)(param_1 + (long)_DAT_112745b5c);
  puVar6 = PTR_PTR_1126b2330;
  func_0x00010bf17980(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + (long)_DAT_112745b8c);
  func_0x00010bf60c20(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar9,param_2,puVar6,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1063250f8; end: 1063251af; -[SCOperaViewController didBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063250f8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112745c00;
  lVar2 = *(long *)(param_1 + lVar4);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126c9cb0;
    func_0x00010c13a120(PTR_PTR_1126c9cb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13dba0(lVar2);
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    puVar1 = PTR_PTR_1126c9cb0;
    func_0x00010bf04de0(PTR_PTR_1126c9cb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13dba0(uVar3);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c125c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112745c40),PTR_s_registerAppDidBecomeActive_112627138)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c13d1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resume_11262ce90);
  return;
}



/* Entry: 1063251b0; end: 10632545f; -[SCOperaViewController viewWillResignActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1063251b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_112745b5c;
  uVar14 = *(undefined8 *)(param_1 + lVar10);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c2a6a00(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_112745b8c;
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf60c20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9a20;
  func_0x00010c09d1c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = *(undefined8 *)(param_1 + _DAT_112745b90);
  puStack_78 = puVar4;
  func_0x00010c09d0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010c076be0();
  func_0x00010c0df6e0(puVar6,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&puStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar14,param_2,puVar1,uVar3,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  lVar8 = param_1;
  func_0x00010beb4b60(param_1);
  lVar13 = *(long *)(param_1 + _DAT_112745c00);
  if (lVar13 == 0) {
    lVar13 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6200(param_1,param_2,lVar8,lVar13);
    _objc_release(lVar13);
  }
  else {
    puVar6 = PTR_PTR_1126c9cb0;
    func_0x00010c13a120(PTR_PTR_1126c9cb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6220(lVar13,param_2,lVar8,puVar6);
    _objc_release(puVar6);
    func_0x00010c125d00(*(undefined8 *)(param_1 + _DAT_112745c40));
  }
  uVar12 = *(undefined8 *)(param_1 + lVar10);
  puVar6 = PTR_PTR_1126b2330;
  func_0x00010c13a0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar12,param_2,puVar6,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar6;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(puVar6 + _DAT_112745b8c);
  func_0x00010bf60c20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x00010bf1f3c0();
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar5);
  return (undefined *)(ulong)((uint)uVar2 ^ 1);
}



/* Entry: 106325460; end: 10632550b; -[SCOperaViewController _shouldPauseCurrentPageWithOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106325460(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745b8c);
  func_0x00010bf60c20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f3c0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (uint)uVar5 ^ 1;
}



/* Entry: 10632550c; end: 1063255a3; -[SCOperaViewController didTakeScreenshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632550c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112745b5c);
  puVar1 = PTR_PTR_1126b2ea8;
  func_0x00010c268600(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745b8c);
  func_0x00010bf60c20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar4,param_2,puVar1,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063255a4; end: 10632563b; -[SCOperaViewController didTakeScreenRecord] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063255a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112745b5c);
  puVar1 = PTR_PTR_1126b2ea8;
  func_0x00010c2685e0(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745b8c);
  func_0x00010bf60c20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar4,param_2,puVar1,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10632563c; end: 106325777; -[SCOperaViewController _isPresentingSilentlyPresentedViewControllerIncludingPause:] */

undefined * FUN_10632563c(undefined *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010be7f8e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    param_1 = (undefined *)0x0;
  }
  else {
    _objc_opt_class(puVar2);
    puVar3 = puVar1;
    func_0x00010bf4b900();
    if ((((ulong)puVar3 & 1) == 0) &&
       ((param_3 == 0 || (puVar3 = param_1, func_0x00010be42e00(), ((ulong)puVar3 & 1) == 0)))) {
      func_0x00010be42dc0();
    }
    else {
      param_1 = (undefined *)0x1;
    }
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010be7f8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010010fab4();
  puVar2 = puVar1;
  if ((int)puVar3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c22e2e0(puVar2);
  _objc_release(puVar2);
  return puVar1;
}



/* Entry: 106325778; end: 1063257db; -[SCOperaViewController _isPresentingSilentlyPresentedAndPauseOperaViewController] */

undefined8 FUN_106325778(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be7f8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010010fab4();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010c22e2e0(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1063257dc; end: 10632585b; -[SCOperaViewController _isPresentedViewControllerAlwaysSilentlyPresented] */

ulong FUN_1063257dc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010be7f8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010010fab4();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar2 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_shouldAlwaysBeSilentlyPresented_112669198);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c22ddc0(uVar1);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10632585c; end: 1063258db; -[SCOperaViewController _isPresentingSilentlyPresentedResumable] */

ulong FUN_10632585c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010be7f8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010010fab4();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar2 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_shouldBeResumable_1126692d0);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c22e2a0(uVar1);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1063258dc; end: 106325ad3; -[SCOperaViewController _presentedViewControllerOrTopVCForSilentlyPresentedProtocol] */

void FUN_1063258dc(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    uVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c29c580();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf529e0();
    if (uVar3 < 2) {
      _objc_release(uVar5);
      uVar5 = 0;
    }
    else {
      uVar3 = param_1;
      func_0x00010c0d66a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c275140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar4;
      func_0x00010010fab4(uVar4,PTR_DAT_1126a5310);
      _objc_release(uVar4);
      _objc_release(uVar5);
      _objc_release(uVar1);
      uVar5 = 0;
      if (((int)uVar3 == 0) || (uVar4 == 0)) goto LAB_106325abc;
      func_0x00010c0d66a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010c275140();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
    }
  }
  else {
    uVar3 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    if (uVar1 != 0) {
      uVar5 = uVar3;
      func_0x00010c29c580();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar5 = uVar4;
      func_0x00010010fab4(uVar4,PTR_DAT_1126a5310);
      _objc_release(uVar4);
      if (((int)uVar5 != 0) && (uVar4 != 0)) {
        uVar1 = uVar3;
        func_0x00010c29c580(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        uVar1 = uVar3;
        goto LAB_106325ab4;
      }
    }
    func_0x00010c10f940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
  }
LAB_106325ab4:
  _objc_release(uVar1);
LAB_106325abc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106325ad4; end: 106325b1f; -[SCOperaViewController pageViewName] */

/* WARNING: Possible PIC construction at 0x000106325af0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106325af4) */
/* WARNING: Removing unreachable block (ram,0x000106325b08) */
/* WARNING: Removing unreachable block (ram,0x00010c0f2240) */
/* WARNING: Removing unreachable block (ram,0x000106325af8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106325ad4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f2230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112745b60),PTR_s_pageViewName_11261a2a0);
  return;
}



/* Entry: 106325b20; end: 106325bff; -[SCOperaViewController pauseWithOverlay:caller:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106325b20(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar4 = (long)_DAT_112745c00;
  if (*(long *)(param_1 + lVar4) == 0) {
    func_0x00010be70ca0(param_1,param_2,param_3);
  }
  else {
    puVar1 = param_1;
    func_0x00010bdf6e60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0f03a0();
    _objc_release(puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      param_1 = PTR_PTR_1126c9cb0;
      func_0x00010bf9de40(PTR_PTR_1126c9cb0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f6240(uVar3,param_2,param_3,param_1,param_4);
    }
    else {
      func_0x00010bdf6e60(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f5b20();
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106325c00; end: 106325c7f; -[SCOperaViewController resume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106325c00(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112745c00);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126c9cb0;
    func_0x00010bf9de40(PTR_PTR_1126c9cb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13dba0(lVar2);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf382b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112745c18),PTR_s_checkNow_1125aba50);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be95c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resumeExternallyLegacy_1125830b8);
  return;
}



/* Entry: 106325c80; end: 106325caf; -[SCOperaViewController restartTimer] */

void FUN_106325c80(undefined8 param_1)

{
  func_0x00010bdf6e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13c000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106325cb0; end: 106325ce7; -[SCOperaViewController setLooping:] */

void FUN_106325cb0(undefined8 param_1)

{
  func_0x00010bdf6e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106325ce8; end: 106325cf7; -[SCOperaViewController setVolume:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106325ce8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2241b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112745b78),PTR_s_setVolume__112666a90);
  return;
}



/* Entry: 106325cf8; end: 106325d07; -[SCOperaViewController setMuted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106325cf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ca6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112745b78),PTR_s_setMuted__1126503d0);
  return;
}



/* Entry: 106325d08; end: 106325d5f; -[SCOperaViewController setCurrentViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106325d08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112745b8c;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010c188040(uVar1,param_2,param_3);
  func_0x00010bf77760(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106325d60; end: 106325d73; -[SCOperaViewController operaPageSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_106325d60(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112745c04);
}



/* Entry: 106325d74; end: 106325d87; -[SCOperaViewController operaScrollViewContentOffsetForCurrentViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_106325d74(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112745c08);
}



/* Entry: 106325d88; end: 106325d8b; -[SCOperaViewController shouldLayoutPageViewController:atOffset:] */

void FUN_106325d88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc7bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addPageViewController_atOffset__11254f898);
  return;
}



/* Entry: 106325d8c; end: 10632622f; -[SCOperaViewController _addPageViewController:atOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106325d8c(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  dVar11 = param_1;
  dVar13 = param_2;
  _objc_retain(param_7);
  if (param_7 != 0) {
    func_0x00010bf08b80(*(undefined8 *)(param_5 + _DAT_112745b78),param_6,param_7);
    lVar8 = param_7;
    func_0x00010c0f3ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar8 == param_5) {
      lVar8 = param_5;
      func_0x00010c0eb6a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar8;
      func_0x00010c151f00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_7;
      func_0x00010c29bf00(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21300(lVar5,param_6,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar5);
      _objc_release(lVar8);
      dVar12 = dVar13;
    }
    else {
      func_0x00010c2a6740(param_7,param_6,0);
      lVar8 = param_7;
      func_0x00010c29d0c0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960();
      _objc_release(lVar8);
      func_0x00010c12c8e0(param_7);
      func_0x00010bef7700(param_5,param_6,param_7);
      lVar8 = param_5;
      func_0x00010c0eb6a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar8;
      func_0x00010c151f00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_7;
      func_0x00010c29bf00(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(lVar5,param_6,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar5);
      _objc_release(lVar8);
      func_0x00010bf77e80(param_7,param_6,param_5);
      lVar8 = (long)_DAT_112745c34;
      dVar12 = dVar13;
      if (param_7 != *(long *)(param_5 + lVar8)) {
        lVar5 = param_5;
        func_0x00010c0eb6a0(param_5);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar5;
        func_0x00010c152980();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4cdc0();
        dVar14 = dVar11;
        dVar12 = dVar13;
        _objc_release(lVar3);
        _objc_release(lVar5);
        bVar1 = dVar11 == param_1;
        dVar11 = dVar14;
        if ((bVar1) && (dVar13 == param_2)) {
          func_0x00010c2a6740(*(undefined8 *)(param_5 + lVar8),param_6,0);
          uVar2 = *(undefined8 *)(param_5 + lVar8);
          func_0x00010c29d0c0(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12c960();
          _objc_release(uVar2);
          func_0x00010c12c8e0(*(undefined8 *)(param_5 + lVar8));
          dVar11 = dVar14;
        }
      }
    }
    lVar8 = (long)_DAT_112745b68;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar8));
    func_0x00010bc852e4();
    dVar13 = dVar11;
    dVar14 = dVar12;
    dVar10 = param_3;
    dVar9 = param_4;
    if (*(char *)(param_5 + _DAT_112745bc0) == '\x01') {
      lVar5 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      func_0x00010bc852e4();
      dVar13 = dVar11;
      dVar14 = dVar12;
      dVar10 = param_3;
      dVar9 = param_4;
      _objc_release(lVar5);
    }
    lVar5 = param_7;
    func_0x00010c0f0be0(param_7);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_5;
    func_0x00010c0f13a0(param_5,param_6,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar5);
    lVar5 = param_5;
    func_0x00010be0d640();
    if (((int)lVar5 != 0) && ((int)lVar4 != 0)) {
      lVar5 = *(long *)(param_5 + lVar8);
      func_0x00010bf9daa0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
        dVar13 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
        dVar14 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
        dVar9 = dVar14 + *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
        dVar10 = dVar13 + *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
      }
      else {
        uVar2 = *(undefined8 *)(param_5 + lVar8);
        func_0x00010bf9daa0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc2aa0();
        dVar9 = dVar14 + dVar9;
        dVar10 = dVar13 + dVar10;
        _objc_release(uVar2);
      }
      dVar11 = dVar11 + dVar14;
      dVar12 = dVar12 + dVar13;
      param_3 = param_3 - dVar9;
      param_4 = param_4 - dVar10;
      _objc_release(lVar5);
    }
    lVar5 = param_7;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar11,dVar12,param_3,param_4);
    _objc_release(lVar5);
    func_0x00010c1d56c0(param_1,param_2,param_7);
    uVar6 = *(undefined8 *)(param_5 + _DAT_112745b58);
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010bf1f440();
    _objc_release(uVar2);
    _objc_release(uVar6);
    if ((int)uVar7 != 0) {
      lVar8 = *(long *)(param_5 + lVar8);
      func_0x00010c0d6c60();
      if (lVar8 == 1) {
        lVar8 = param_7;
        func_0x00010c29d560(param_7);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar8;
        func_0x00010c0f0be0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c06b7e0();
        lVar3 = param_7;
        func_0x00010c29bf00(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c17d4c0();
        _objc_release(lVar3);
        _objc_release(lVar5);
        _objc_release(lVar8);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 106326230; end: 106326233; -[SCOperaViewController pageProviding] */

void FUN_106326230(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_selfOrWeakProxyToSelf_112634560);
  return;
}



/* Entry: 106326234; end: 106326283; -[SCOperaViewController currentPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106326234(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745b8c);
  func_0x00010bf60c20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106326284; end: 1063262f3; -[SCOperaViewController currentPageAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106326284(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745b8c);
  func_0x00010bf60c20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0cb60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1063262f4; end: 10632635b; -[SCOperaViewController isCurrentPageLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1063262f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745b90);
  func_0x00010c09d0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c076be0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10632635c; end: 1063263c3; -[SCOperaViewController hasCurrentPageStartedPlayback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10632635c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745b90);
  func_0x00010c09d0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfda5a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1063263c4; end: 106326413; -[SCOperaViewController durationForDismissal] */

double FUN_1063263c4(long param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  func_0x00010bf5f820();
  lVar1 = 0x60;
  if (iVar2 == 0) {
    lVar1 = 0x5c;
  }
  return (double)*(long *)(param_1 + *(int *)(&DAT_112745b58 + lVar1)) / 1000.0;
}



/* Entry: 106326414; end: 1063264bb; -[SCOperaViewController shouldDismissOnlyOperaOwnedPresentedViewControllerOnDismiss] */

long FUN_106326414(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c118b40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1f3c0();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return lVar4;
}



/* Entry: 1063264bc; end: 1063264ff; -[SCOperaViewController pageableViewControllerVolumeHelperDidChangeVolume:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063264bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745b78);
  func_0x00010bdf6e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf08b80(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106326500; end: 10632650f; -[SCOperaViewController currentViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106326500(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf60c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112745b8c),PTR_s_currentViewModel_1125b5cb0);
  return;
}



/* Entry: 106326510; end: 106326573; -[SCOperaViewController currentPageIsAd] */

long FUN_106326510(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c06b7e0(lVar1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 106326574; end: 106326587; -[SCOperaViewController pageIsAd:] */

long FUN_106326574(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c06b7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_isAd_1125f8808);
    return param_3;
  }
  return 0;
}



/* Entry: 106326588; end: 10632658b; -[SCOperaViewController currentPageViewController] */

void FUN_106326588(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf6e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__currentPageVC_11255b538);
  return;
}



/* Entry: 10632658c; end: 1063265bb; -[SCOperaViewController currentFullyAppearedPageViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632658c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745c34);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1063265bc; end: 1063265bf; -[SCOperaViewController pageViewControllerForOperaViewModel:] */

void FUN_1063265bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6f9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pageViewControllerForViewModel__112579808);
  return;
}



/* Entry: 1063265c0; end: 1063265c3; -[SCOperaViewController pageViewControllerForPageID:] */

void FUN_1063265c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6f990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pageViewControllerForPageID__112579800);
  return;
}



/* Entry: 1063265c4; end: 10632667b; -[SCOperaViewController pageabilityForRelativePosition:swipeDirection:gestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1063265c4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 in_x4;
  
  _objc_retain(in_x4);
  uVar1 = param_1;
  func_0x00010bdf6e60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  uVar3 = uVar1;
  if ((uVar2 & 1) == 0) {
    func_0x00010c0f2480(uVar1);
  }
  else {
    func_0x00010c0d6c60(*(undefined8 *)(param_1 + (long)_DAT_112745b68));
    func_0x00010c0f24a0(uVar1);
  }
  _objc_release(uVar1);
  _objc_release(in_x4);
  return uVar3;
}



/* Entry: 10632667c; end: 10632668b; -[SCOperaViewController floatingLayerViewControllers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632667c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf00d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112745bdc),PTR_s_allValues_11259dcf0);
  return;
}



/* Entry: 10632668c; end: 10632668f; -[SCOperaViewController pageViewControllerForViewModel:] */

void FUN_10632668c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6f9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pageViewControllerForViewModel__112579808);
  return;
}



/* Entry: 106326690; end: 1063266bf; -[SCOperaViewController dummyPageViewControllers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106326690(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745bd8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1063266c0; end: 10632672b; -[SCOperaViewController pageabilityForRelativePosition:gestureRecognizer:] */

undefined8
FUN_1063266c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010bdf6e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f2480();
  _objc_release(param_4);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10632672c; end: 10632675b; -[SCOperaViewController lastViewInteraction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632672c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745c44);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10632675c; end: 1063267c3; -[SCOperaViewController setLastViewInteraction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632675c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745c44);
  *(undefined8 *)(param_1 + _DAT_112745c44) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112745bf8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063267c4; end: 10632684f; -[SCOperaViewController _isUserNavigationInteraction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1063267c4(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112745b68);
  func_0x00010c0d6c60(lVar1);
  if (param_3 < 10) {
    if ((1L << (param_3 & 0x3f) & 0x30U) != 0) {
      return true;
    }
    if ((1L << (param_3 & 0x3f) & 0x180U) != 0) {
      return lVar1 != 1;
    }
    if ((1L << (param_3 & 0x3f) & 0x240U) != 0) {
      return lVar1 == 1;
    }
  }
  return false;
}



/* Entry: 106326850; end: 106326953; -[SCOperaViewController _autoResumeIfPausedForUserNavigationInteraction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106326850(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112745c00;
  lVar1 = *(long *)(param_1 + lVar5);
  if ((lVar1 != 0) && (func_0x00010c079ba0(), (int)lVar1 != 0)) {
    func_0x00010c27dd80(param_3);
    lVar1 = param_1;
    func_0x00010be450c0();
    if ((int)lVar1 != 0) {
      iVar3 = (int)*(undefined8 *)(param_1 + lVar5);
      puVar2 = PTR_PTR_1126c9cb0;
      func_0x00010bf9de40(PTR_PTR_1126c9cb0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c079be0();
      _objc_release(puVar2);
      if (iVar3 != 0) {
        uVar4 = *(undefined8 *)(param_1 + lVar5);
        puVar2 = PTR_PTR_1126c9cb0;
        func_0x00010bf9de40(PTR_PTR_1126c9cb0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf28740(uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        FUN_10636f068(*(undefined8 *)(param_1 + _DAT_112745b98),uVar4,1);
        _objc_release(uVar4);
      }
      func_0x00010c137fe0(*(undefined8 *)(param_1 + lVar5));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106326954; end: 106326983; -[SCOperaViewController interactionObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106326954(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745bf8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106326984; end: 106326987; -[SCOperaViewController shouldNotPassCurrentPageWithScrollRelativePosition:] */

void FUN_106326984(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb48b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__shouldNotPassCurrentPageWithScr_11258abd0);
  return;
}



/* Entry: 106326988; end: 106326997; -[SCOperaViewController shouldDeferUpdatingPageViewControllers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106326988(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112745c4c);
}



/* Entry: 106326998; end: 1063269a7; -[SCOperaViewController isDismissing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106326998(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112745c48);
}



/* Entry: 1063269a8; end: 1063269ab; -[SCOperaViewController operaViewControllerView] */

void FUN_1063269a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_view_1126849e8);
  return;
}



/* Entry: 1063269ac; end: 1063269af; -[SCOperaViewController operaPresentedViewController] */

void FUN_1063269ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10f950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentedViewController_112621870);
  return;
}



/* Entry: 1063269b0; end: 1063269bf; -[SCOperaViewController isFullyVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1063269b0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112745c2c);
}



/* Entry: 1063269c0; end: 1063269c3; -[SCOperaViewController isSwipeDownToDismissDisabled] */

void FUN_1063269c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf80990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_disableSwipeDownToDismiss_1125bdc08);
  return;
}



/* Entry: 1063269c4; end: 106326adb; -[SCOperaViewController viewModelsManagerDidUpdateViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063269c4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010be78c00();
  lVar4 = (long)_DAT_112745c4c;
  uVar1 = param_1;
  func_0x00010c0eb6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c151f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200fc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((*(byte *)(param_1 + lVar4) & 1) == 0) {
    func_0x00010be391e0(param_1);
    func_0x00010bea5ce0(param_1);
  }
  uVar3 = *(undefined8 *)(param_1 + (long)_DAT_112745b8c);
  func_0x00010bf60c20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010be6f9a0(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if ((uVar1 == *(ulong *)(param_1 + (long)_DAT_112745c34)) &&
     (uVar2 = uVar1, func_0x00010c079c00(), (int)uVar2 != 0)) {
    func_0x00010c1d99a0(uVar1,param_2,0);
  }
  uVar2 = uVar1;
  func_0x00010c0c53e0();
  if (((uVar2 & 1) == 0) && ((*(byte *)(param_1 + lVar4) & 1) == 0)) {
    func_0x00010bdf6e80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106326adc; end: 106326df3; -[SCOperaViewController _prepareNewCurrentPageViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106326adc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745b8c);
  func_0x00010bf60c20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be6f9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar13 = (long)_DAT_112745c34;
  if (*(long *)(param_1 + lVar13) == lVar2) goto LAB_106326db0;
  func_0x00010c0f5b20();
  lVar3 = *(long *)(param_1 + lVar13);
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
LAB_106326d1c:
    _objc_release(lVar3);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010c0f0be0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c128180();
    if (lVar6 == 2) {
      _objc_release(uVar1);
      _objc_release(uVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
LAB_106326c54:
      lVar3 = *(long *)(param_1 + _DAT_112745bd4);
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar4 != 0) {
        lVar12 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar3);
          }
          lVar11 = *(long *)(lVar12 * 8);
          if (((lVar2 != lVar11) && (*(long *)(param_1 + lVar13) != lVar11)) &&
             (lVar9 = lVar11, func_0x00010c079c00(), (int)lVar9 != 0)) {
            func_0x00010c1d99a0(lVar11);
            func_0x00010c29ca00(lVar11);
          }
          lVar12 = lVar12 + 1;
        } while (lVar4 != lVar12);
        lVar4 = lVar3;
        func_0x00010bf52a60();
      }
      goto LAB_106326d1c;
    }
    uVar7 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010c0f0be0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c128180();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar1);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar6 == 1) goto LAB_106326c54;
  }
  lVar13 = param_1;
  func_0x00010c0eb6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar13;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  func_0x00010bdc7be0(param_1);
  _objc_release(lVar4);
  _objc_release(lVar13);
  func_0x00010bee0a40(param_1);
  if (0.0 < *(double *)(param_1 + _DAT_112745c50)) {
    func_0x00010c13a280(*(double *)(param_1 + _DAT_112745c50),0,lVar2);
  }
  func_0x00010be428c0();
  if ((int)param_1 != 0) {
    func_0x00010c0f5b20(lVar2);
  }
  func_0x00010c29e900(lVar2);
LAB_106326db0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  if ((*(byte *)(lVar2 + _DAT_112745c30) & 1) == 0) {
    func_0x00010bde1200(lVar2);
    func_0x00010be4e320(lVar2);
    func_0x00010be77a40(lVar2);
    func_0x00010be39260(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be3dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s__invokeCallbacksImmediately_11256d088);
  return;
}



/* Entry: 106326df4; end: 106326e43; -[SCOperaViewController _currentPageVCDidStartDisplaying] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106326df4(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_112745c30) & 1) == 0) {
    func_0x00010bde1200(param_1);
    func_0x00010be4e320(param_1);
    func_0x00010be77a40(param_1);
    func_0x00010be39260(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be3dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__invokeCallbacksImmediately_11256d088);
  return;
}



/* Entry: 106326e44; end: 106326e47; -[SCOperaViewController viewModelsManagerDidHitDismissViewModel] */

void FUN_106326e44(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfe610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didHitDismissViewModel_11255d320);
  return;
}



/* Entry: 106326e48; end: 106326eaf; -[SCOperaViewController viewModelsManagerDidPageToNilViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106326e48(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112745b68);
  func_0x00010c0da020();
  if (lVar1 - 1U < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d60b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112745ba0),PTR_s_navigateToParentAnimated__112613240,1
              );
    return;
  }
  if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdfe610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didHitDismissViewModel_11255d320);
    return;
  }
  return;
}



/* Entry: 106326eb0; end: 106326eb3; -[SCOperaViewController viewModelsManagerWillForcePagingFromViewModel:toViewModel:] */

void FUN_106326eb0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9f9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendPageDirectionEventWithPrevi_112585820);
  return;
}



/* Entry: 106326eb4; end: 106326f23; -[SCOperaViewController viewModelsManagerDidUpdateLoadedPageIDs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106326eb4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112745bc8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745b8c);
  func_0x00010c09c9e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287520(uVar3,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106326f24; end: 106326f6b; -[SCOperaViewController viewModelsManagerDidChangeCurrentViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106326f24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745ba0);
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e980(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106326f6c; end: 106327027; -[SCOperaViewController _informCurrentPageVCVisibilityIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106326f6c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_112745c34;
  lVar4 = *(long *)(param_1 + lVar3);
  lVar1 = param_1;
  func_0x00010bdf6e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != lVar1) {
    func_0x00010be391c0(param_1);
    if (*(char *)(param_1 + _DAT_112745c2c) == '\x01') {
      lVar1 = param_1;
      func_0x00010bdf6e60();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(long *)(param_1 + lVar3) = lVar1;
      _objc_release(uVar2);
      lVar1 = param_1;
      func_0x00010be428c0();
      if ((int)lVar1 != 0) {
        func_0x00010c0f5b20(*(undefined8 *)(param_1 + lVar3));
      }
      func_0x00010c29c980(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c1d99b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + lVar3),PTR_s_setPausedForAttachment__112654090,0);
      return;
    }
  }
  return;
}



/* Entry: 106327028; end: 10632717f; -[SCOperaViewController _informNeighborPageVCsVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106327028(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_106327180;
  puStack_d8 = &UNK_110842e18;
  uStack_d0 = param_1;
  if (lRam00000001136c3820 != -1) {
    func_0x00010002a2fc(0x1136c3820,&puStack_f0);
  }
  lVar3 = (long)puRam00000001136c3818;
  _objc_retain(puRam00000001136c3818);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      func_0x00010c067fc0(*(undefined8 *)(lVar7 * 8));
      func_0x00010be39240(param_1);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(lVar3 + 0x20) + (long)_DAT_112745b68);
  func_0x00010c0d7660(uVar5);
  func_0x0001063135c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c246c00(puVar4);
  puVar6 = puVar4;
  func_0x00010bf51e00();
  lVar2 = (long)puRam00000001136c3818;
  puRam00000001136c3818 = puVar6;
  _objc_release(lVar2);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106327180; end: 106327217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106327180(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_111180950);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112745b68);
  func_0x00010c0d7660(uVar3);
  func_0x0001063135c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c246c00(puVar2,param_2,0x10,uVar3);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  uVar1 = puRam00000001136c3818;
  puRam00000001136c3818 = puVar4;
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106327218; end: 1063272bf; -[SCOperaViewController _informNeighborPageVCVisibilityForRelativePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106327218(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bee9960();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + _DAT_112745b8c);
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != lVar2) {
    lVar2 = param_1;
    func_0x00010be6f9a0(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != *(long *)(param_1 + _DAT_112745c34)) {
      func_0x00010be64e60(param_1,param_2,lVar2,param_3);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063272c0; end: 1063272d3; -[SCOperaViewController _notifyPageableViewController:neighborViewDidFullyAppearWithCurrentViewRelativePosition:] */

void FUN_1063272c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d7650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_neighborViewDidFullyAppearWithCu_1126137a8,param_4,param_1);
  return;
}



/* Entry: 1063272d4; end: 10632752f; -[SCOperaViewController _preloadOrReleaseNeighbourVideoPlayers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063272d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = (long)_DAT_112745c54;
  if (*(long *)(param_1 + lVar12) != 0) {
    lVar13 = (long)_DAT_112745b8c;
    lVar1 = *(long *)(param_1 + lVar13);
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        lVar3 = *(long *)(param_1 + lVar12);
        func_0x00010c108ae0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126b2340;
        lVar2 = lVar1;
        func_0x00010c0f0be0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c083240(puVar5,param_2,lVar4);
        if ((int)puVar5 == 0) {
          lVar11 = 0;
        }
        else {
          lVar6 = lVar1;
          func_0x00010c0f0be0(lVar1);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c0c4220();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar7;
          func_0x00010bf8d480();
          _objc_release(lVar7);
          _objc_release(lVar6);
        }
        _objc_release(lVar4);
        _objc_release(lVar2);
        lVar2 = lVar3;
        func_0x00010c0de1e0();
        lVar4 = lVar3;
        func_0x00010c0de1c0();
        if (lVar2 <= lVar4) {
          lVar2 = lVar4;
        }
        uVar8 = *(undefined8 *)(param_1 + lVar13);
        func_0x00010c108cc0(uVar8,param_2,lVar1,lVar2 + 1);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_1 + lVar12);
        func_0x00010c11f540(uVar9,param_2,uVar8,lVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c29dd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf97e80();
        _objc_release(uVar10);
        uVar10 = uVar9;
        func_0x00010c29dd60(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf97e80();
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(lVar3);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106327530; end: 1063275e7;  */

void FUN_106327530(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6f980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c108b80(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063275e8; end: 10632763f; -[SCOperaViewController _informCurrentPageVCDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063275e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112745c34;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(uVar2);
  func_0x00010c29e920(uVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  func_0x00010c29ca00(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106327640; end: 1063278f7; -[SCOperaViewController _loadPageViewsBasedOnViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106327640(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  long unaff_x24;
  undefined *unaff_x25;
  long unaff_x26;
  undefined *unaff_x27;
  long lVar19;
  undefined *unaff_x28;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_380;
  undefined *puStack_370;
  undefined *puStack_368;
  long lStack_360;
  undefined *puStack_358;
  long lStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  long lStack_330;
  undefined *puStack_328;
  undefined1 **ppuStack_320;
  code *pcStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined auStack_288 [128];
  undefined1 auStack_208 [128];
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
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
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_138 = puVar2;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar2 = puVar16;
  FUN_106314348();
  _objc_retainAutoreleasedReturnValue();
  puStack_140 = puVar2;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar17 = *plStack_120;
    do {
      puVar15 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar17) {
          _objc_enumerationMutation(puStack_140);
        }
        unaff_x24 = *(long *)(lStack_128 + (long)puVar15 * 8);
        unaff_x26 = unaff_x24;
        func_0x00010c067fc0();
        unaff_x25 = *(undefined **)(param_1 + _DAT_112745b8c);
        func_0x00010c09caa0(unaff_x25,param_2,unaff_x26);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = unaff_x25;
        func_0x00010bf529e0();
        if (puVar18 == (undefined *)0x1) {
          unaff_x27 = unaff_x25;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = unaff_x27;
          func_0x00010c0f0be0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(unaff_x27);
          if (unaff_x28 != (undefined *)0x0) goto LAB_10632776c;
        }
        else {
LAB_10632776c:
          bVar1 = unaff_x26 == 1;
          unaff_x27 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          func_0x00010bf71e20();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = param_1;
          func_0x00010bdd6720(param_1,param_2,unaff_x25,unaff_x27,bVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar16,param_2,unaff_x26,unaff_x24);
          func_0x00010c1d0640(puStack_138,param_2,unaff_x27,unaff_x24);
          _objc_release(unaff_x26);
          _objc_release(unaff_x27);
        }
        _objc_release(unaff_x25);
        puVar15 = puVar15 + 1;
      } while (puVar2 != puVar15);
      puVar2 = puStack_140;
      func_0x00010bf52a60(puStack_140,param_2,&uStack_130,auStack_f0,0x10);
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puStack_140);
  puVar18 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112745b8c);
  func_0x00010c108d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  iVar14 = 0;
  func_0x00010bdd6720(param_1,param_2,uVar3,puVar18);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar15 = puStack_138;
  puVar2 = puVar18;
  func_0x00010bedca40(param_1,param_2,puStack_138);
  puVar6 = puVar16;
  func_0x00010bedc760(param_1);
  *(undefined1 *)(param_1 + _DAT_112745c30) = 1;
  func_0x00010be527e0(param_1);
  _objc_release(puVar18);
  _objc_release(puVar16);
  puVar5 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar13 = &uStack_310;
  puStack_158 = &DAT_112745b8c;
  pcStack_148 = FUN_1063278f8;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = (long)_DAT_112745bd8;
  lVar4 = *(long *)(puVar5 + lVar17);
  puStack_180 = unaff_x28;
  puStack_178 = unaff_x27;
  puStack_170 = puVar18;
  puStack_168 = puVar16;
  lStack_160 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010bf529e0();
  puVar7 = (undefined *)0x0;
  if (lVar4 != 0) {
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    puStack_2c0 = (undefined8 *)0x0;
    lVar17 = *(long *)(puVar5 + lVar17);
    _objc_retain(lVar17);
    lVar4 = lVar17;
    func_0x00010bf52a60(lVar17,param_2,&uStack_2d0,auStack_208,0x10);
    if (lVar4 != 0) {
      puVar18 = (undefined *)*puStack_2c0;
      do {
        do {
          if ((undefined *)*puStack_2c0 != puVar18) {
            _objc_enumerationMutation(lVar17);
          }
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        lVar4 = lVar17;
        func_0x00010bf52a60(lVar17,param_2,&uStack_2d0,auStack_208,0x10);
        puVar16 = (undefined *)0x0;
      } while (lVar4 != 0);
    }
    _objc_release(lVar17);
    puVar5 = *(undefined **)(puVar5 + _DAT_112745b8c);
    func_0x00010c09caa0(puVar5,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    puStack_300 = (undefined8 *)0x0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    puVar2 = auStack_288;
    iVar14 = 0x10;
    puVar6 = puVar5;
    func_0x00010bf52a60();
    if (puVar6 != (undefined *)0x0) {
      puVar16 = (undefined *)*puStack_300;
      do {
        do {
          if ((undefined *)*puStack_300 != puVar16) {
            _objc_enumerationMutation(puVar5);
          }
          puVar6 = puVar6 + -1;
        } while (puVar6 != (undefined *)0x0);
        puVar2 = auStack_288;
        iVar14 = 0x10;
        puVar6 = puVar5;
        puVar13 = &uStack_310;
        func_0x00010bf52a60();
        lVar17 = 0;
      } while (puVar6 != (undefined *)0x0);
    }
    puVar7 = puVar5;
    _objc_release();
    puVar6 = (undefined *)puVar13;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  puStack_348 = puVar15;
  pcStack_318 = FUN_106327a7c;
  lStack_380 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_370 = unaff_x28;
  puStack_368 = unaff_x27;
  lStack_360 = unaff_x26;
  puStack_358 = unaff_x25;
  lStack_350 = unaff_x24;
  puStack_340 = puVar18;
  puStack_338 = puVar16;
  lStack_330 = lVar17;
  puStack_328 = puVar5;
  ppuStack_320 = &puStack_150;
  _objc_retain(puVar6);
  _objc_retain(puVar2);
  puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  plStack_430 = (long *)0x0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  _objc_retain(puVar6);
  puVar13 = &uStack_440;
  puVar18 = puVar6;
  func_0x00010bf52a60();
  if (puVar18 != (undefined *)0x0) {
    lVar17 = *plStack_430;
    do {
      puVar5 = (undefined *)0x0;
      do {
        if (*plStack_430 != lVar17) {
          _objc_enumerationMutation(puVar6);
        }
        lVar19 = *(long *)(lStack_438 + (long)puVar5 * 8);
        lVar4 = lVar19;
        func_0x00010c0f0be0(lVar19);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar4;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar15;
        func_0x00010bf4b900(puVar15,param_2,lVar8);
        _objc_release(lVar8);
        _objc_release(lVar4);
        puVar10 = puVar7;
        if ((iVar14 == 0) || ((int)puVar9 == 0)) {
          func_0x00010be6f9a0(puVar7,param_2,lVar19);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar10;
          func_0x00010bf2cc00();
          lVar4 = lVar19;
          func_0x00010c0f3aa0(lVar19);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          func_0x00010c1a6940(puVar10,param_2,(uint)(lVar4 != 0) & (uint)puVar9);
          lVar4 = lVar19;
          func_0x00010c0f0be0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar4;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar4);
          if (lVar8 != 0) {
            lVar4 = lVar19;
            func_0x00010c0f0be0(lVar19);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar4;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar2,param_2,puVar10,lVar8);
            _objc_release(lVar8);
            _objc_release(lVar4);
            func_0x00010c0f0be0(lVar19);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar19;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar15,param_2,lVar4);
            _objc_release(lVar4);
            _objc_release(lVar19);
          }
        }
        else {
          func_0x00010be06a80(puVar7,param_2,lVar19);
          _objc_retainAutoreleasedReturnValue();
        }
        if (puVar10 != (undefined *)0x0) {
          func_0x00010befa120(puVar16,param_2,puVar10);
        }
        _objc_release(puVar10);
        puVar5 = puVar5 + 1;
      } while (puVar18 != puVar5);
      puVar13 = &uStack_440;
      puVar18 = puVar6;
      func_0x00010bf52a60();
    } while (puVar18 != (undefined *)0x0);
  }
  _objc_release(puVar6);
  puVar18 = puVar16;
  func_0x00010bf51e00();
  _objc_release(puVar15);
  _objc_release(puVar16);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_380) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar13);
  if (puVar13 == (undefined8 *)0x0) {
LAB_106327ec0:
    puVar18 = (undefined *)0x0;
  }
  else {
    puVar11 = (undefined8 *)PTR_PTR_1126c9ba0;
    func_0x00010bf84be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar13 == puVar11) goto LAB_106327ec0;
    puVar11 = puVar13;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar11);
    if (puVar12 == (undefined8 *)0x0) goto LAB_106327ec0;
    lVar4 = (long)_DAT_112745bd4;
    lVar17 = *(long *)(puVar6 + lVar4);
    puVar11 = puVar13;
    func_0x00010c0f0be0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar17,param_2,puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar12);
    _objc_release(puVar11);
    if (lVar17 == 0) {
      puVar18 = PTR_PTR_1126c9cd0;
      func_0x00010c0f20c0(PTR_PTR_1126c9cd0,param_2,*(undefined8 *)(puVar6 + _DAT_112745b68),
                          *(undefined8 *)(puVar6 + _DAT_112745b94),
                          *(undefined8 *)(puVar6 + _DAT_112745b58),
                          *(undefined8 *)(puVar6 + _DAT_112745b7c),
                          *(undefined8 *)(puVar6 + _DAT_112745b5c),
                          *(undefined8 *)(puVar6 + _DAT_112745b88),
                          *(undefined8 *)(puVar6 + _DAT_112745b84),puVar13,puVar6,
                          *(undefined8 *)(puVar6 + _DAT_112745b90),
                          *(undefined8 *)(puVar6 + _DAT_112745b80));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d8aa0();
      uVar3 = *(undefined8 *)(puVar6 + lVar4);
      puVar11 = puVar13;
      func_0x00010c0f0be0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3,param_2,puVar18,puVar12);
      _objc_release(puVar12);
      _objc_release(puVar11);
      func_0x00010c1b99e0(puVar18,param_2,*(undefined8 *)(puVar6 + _DAT_112745bdc));
    }
    else {
      puVar18 = *(undefined **)(puVar6 + lVar4);
      puVar11 = puVar13;
      func_0x00010c0f0be0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(puVar18,param_2,puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_release(puVar11);
    }
  }
  _objc_release(puVar13);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 1063278f8; end: 106327a7b; -[SCOperaViewController _logDummyPagesInfoIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063278f8(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  int param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_240;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_148 [128];
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar10 = &uStack_1d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_112745bd8;
  lVar1 = *(long *)(param_1 + lVar11);
  func_0x00010bf529e0();
  lVar2 = 0;
  if (lVar1 != 0) {
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    plStack_180 = (long *)0x0;
    lVar1 = *(long *)(param_1 + lVar11);
    _objc_retain(lVar1);
    lVar2 = lVar1;
    func_0x00010bf52a60(lVar1,param_2,&uStack_190,auStack_c8,0x10);
    if (lVar2 != 0) {
      lVar11 = *plStack_180;
      do {
        if (*plStack_180 != lVar11) {
          _objc_enumerationMutation(lVar1);
        }
        lVar2 = lVar2 + -1;
      } while ((lVar2 != 0) ||
              (lVar2 = lVar1, func_0x00010bf52a60(lVar1,param_2,&uStack_190,auStack_c8,0x10),
              lVar2 != 0));
    }
    _objc_release(lVar1);
    lVar2 = *(long *)(param_1 + _DAT_112745b8c);
    func_0x00010c09caa0(lVar2,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    param_4 = auStack_148;
    param_5 = 0x10;
    lVar1 = lVar2;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar11 = *plStack_1c0;
      do {
        do {
          if (*plStack_1c0 != lVar11) {
            _objc_enumerationMutation(lVar2);
          }
          lVar1 = lVar1 + -1;
        } while (lVar1 != 0);
        param_4 = auStack_148;
        param_5 = 0x10;
        lVar1 = lVar2;
        puVar10 = &uStack_1d0;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release();
    param_3 = (undefined1 *)puVar10;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lStack_240 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  plStack_2f0 = (long *)0x0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  _objc_retain(param_3);
  puVar10 = &uStack_300;
  puVar5 = param_3;
  func_0x00010bf52a60();
  if (puVar5 != (undefined1 *)0x0) {
    lVar1 = *plStack_2f0;
    do {
      puVar14 = (undefined1 *)0x0;
      do {
        if (*plStack_2f0 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar15 = *(long *)(lStack_2f8 + (long)puVar14 * 8);
        lVar11 = lVar15;
        func_0x00010c0f0be0(lVar15);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar11;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar4;
        func_0x00010bf4b900(puVar4,param_2,lVar6);
        _objc_release(lVar6);
        _objc_release(lVar11);
        lVar11 = lVar2;
        if ((param_5 == 0) || ((int)puVar12 == 0)) {
          func_0x00010be6f9a0(lVar2,param_2,lVar15);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar11;
          func_0x00010bf2cc00();
          lVar7 = lVar15;
          func_0x00010c0f3aa0(lVar15);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          func_0x00010c1a6940(lVar11,param_2,(uint)(lVar7 != 0) & (uint)lVar6);
          lVar6 = lVar15;
          func_0x00010c0f0be0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar6);
          if (lVar7 != 0) {
            lVar6 = lVar15;
            func_0x00010c0f0be0(lVar15);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(param_4,param_2,lVar11,lVar7);
            _objc_release(lVar7);
            _objc_release(lVar6);
            func_0x00010c0f0be0(lVar15);
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar15;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar4,param_2,lVar6);
            _objc_release(lVar6);
            _objc_release(lVar15);
          }
        }
        else {
          func_0x00010be06a80(lVar2,param_2,lVar15);
          _objc_retainAutoreleasedReturnValue();
        }
        if (lVar11 != 0) {
          func_0x00010befa120(puVar3,param_2,lVar11);
        }
        _objc_release(lVar11);
        puVar14 = puVar14 + 1;
      } while (puVar5 != puVar14);
      puVar10 = &uStack_300;
      puVar5 = param_3;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined1 *)0x0);
  }
  _objc_release(param_3);
  puVar12 = puVar3;
  func_0x00010bf51e00();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_240) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar10);
  if (puVar10 == (undefined8 *)0x0) {
LAB_106327ec0:
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar8 = (undefined8 *)PTR_PTR_1126c9ba0;
    func_0x00010bf84be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar10 == puVar8) goto LAB_106327ec0;
    puVar8 = puVar10;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar8);
    if (puVar9 == (undefined8 *)0x0) goto LAB_106327ec0;
    lVar1 = (long)_DAT_112745bd4;
    lVar2 = *(long *)(param_3 + lVar1);
    puVar8 = puVar10;
    func_0x00010c0f0be0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar2,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar9);
    _objc_release(puVar8);
    if (lVar2 == 0) {
      puVar12 = PTR_PTR_1126c9cd0;
      func_0x00010c0f20c0(PTR_PTR_1126c9cd0,param_2,*(undefined8 *)(param_3 + _DAT_112745b68),
                          *(undefined8 *)(param_3 + _DAT_112745b94),
                          *(undefined8 *)(param_3 + _DAT_112745b58),
                          *(undefined8 *)(param_3 + _DAT_112745b7c),
                          *(undefined8 *)(param_3 + _DAT_112745b5c),
                          *(undefined8 *)(param_3 + _DAT_112745b88),
                          *(undefined8 *)(param_3 + _DAT_112745b84),puVar10,param_3,
                          *(undefined8 *)(param_3 + _DAT_112745b90),
                          *(undefined8 *)(param_3 + _DAT_112745b80));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d8aa0();
      uVar13 = *(undefined8 *)(param_3 + lVar1);
      puVar8 = puVar10;
      func_0x00010c0f0be0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar13,param_2,puVar12,puVar9);
      _objc_release(puVar9);
      _objc_release(puVar8);
      func_0x00010c1b99e0(puVar12,param_2,*(undefined8 *)(param_3 + _DAT_112745bdc));
    }
    else {
      puVar12 = *(undefined **)(param_3 + lVar1);
      puVar8 = puVar10;
      func_0x00010c0f0be0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(puVar12,param_2,puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar8);
    }
  }
  _objc_release(puVar10);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 106327a7c; end: 106327d83; -[SCOperaViewController _buildPageVCsForViewModels:modelIDToPageVCMap:needToCreateDummyPageVCIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106327a7c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar8 = &uStack_130;
  lVar11 = param_3;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        lVar14 = *(long *)(lStack_128 + lVar13 * 8);
        lVar3 = lVar14;
        func_0x00010c0f0be0(lVar14);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar2;
        func_0x00010bf4b900(puVar2,param_2,lVar4);
        _objc_release(lVar4);
        _objc_release(lVar3);
        lVar3 = param_1;
        if ((param_5 == 0) || ((int)puVar10 == 0)) {
          func_0x00010be6f9a0(param_1,param_2,lVar14);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bf2cc00();
          lVar5 = lVar14;
          func_0x00010c0f3aa0(lVar14);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          func_0x00010c1a6940(lVar3,param_2,(uint)(lVar5 != 0) & (uint)lVar4);
          lVar4 = lVar14;
          func_0x00010c0f0be0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar4);
          if (lVar5 != 0) {
            lVar4 = lVar14;
            func_0x00010c0f0be0(lVar14);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(param_4,param_2,lVar3,lVar5);
            _objc_release(lVar5);
            _objc_release(lVar4);
            func_0x00010c0f0be0(lVar14);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar14;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2,param_2,lVar4);
            _objc_release(lVar4);
            _objc_release(lVar14);
          }
        }
        else {
          func_0x00010be06a80(param_1,param_2,lVar14);
          _objc_retainAutoreleasedReturnValue();
        }
        if (lVar3 != 0) {
          func_0x00010befa120(puVar1,param_2,lVar3);
        }
        _objc_release(lVar3);
        lVar13 = lVar13 + 1;
      } while (lVar11 != lVar13);
      puVar8 = &uStack_130;
      lVar11 = param_3;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
  }
  _objc_release(param_3);
  puVar10 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar8);
  if (puVar8 == (undefined8 *)0x0) {
LAB_106327ec0:
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar6 = (undefined8 *)PTR_PTR_1126c9ba0;
    func_0x00010bf84be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar8 == puVar6) goto LAB_106327ec0;
    puVar6 = puVar8;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar6);
    if (puVar7 == (undefined8 *)0x0) goto LAB_106327ec0;
    lVar9 = (long)_DAT_112745bd4;
    lVar11 = *(long *)(param_3 + lVar9);
    puVar6 = puVar8;
    func_0x00010c0f0be0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar11,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar7);
    _objc_release(puVar6);
    if (lVar11 == 0) {
      puVar10 = PTR_PTR_1126c9cd0;
      func_0x00010c0f20c0(PTR_PTR_1126c9cd0,param_2,*(undefined8 *)(param_3 + _DAT_112745b68),
                          *(undefined8 *)(param_3 + _DAT_112745b94),
                          *(undefined8 *)(param_3 + _DAT_112745b58),
                          *(undefined8 *)(param_3 + _DAT_112745b7c),
                          *(undefined8 *)(param_3 + _DAT_112745b5c),
                          *(undefined8 *)(param_3 + _DAT_112745b88),
                          *(undefined8 *)(param_3 + _DAT_112745b84),puVar8,param_3,
                          *(undefined8 *)(param_3 + _DAT_112745b90),
                          *(undefined8 *)(param_3 + _DAT_112745b80));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d8aa0();
      uVar12 = *(undefined8 *)(param_3 + lVar9);
      puVar6 = puVar8;
      func_0x00010c0f0be0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar12,param_2,puVar10,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar6);
      func_0x00010c1b99e0(puVar10,param_2,*(undefined8 *)(param_3 + _DAT_112745bdc));
    }
    else {
      puVar10 = *(undefined **)(param_3 + lVar9);
      puVar6 = puVar8;
      func_0x00010c0f0be0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(puVar10,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
  }
  _objc_release(puVar8);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106327d84; end: 106327fb3; -[SCOperaViewController _pageViewControllerForViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106327d84(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if (param_3 != (undefined *)0x0) {
    puVar3 = PTR_PTR_1126c9ba0;
    func_0x00010bf84be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_3 != puVar3) {
      puVar3 = param_3;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar3);
      if (puVar1 != (undefined *)0x0) {
        lVar6 = (long)_DAT_112745bd4;
        lVar4 = *(long *)(param_1 + lVar6);
        puVar3 = param_3;
        func_0x00010c0f0be0(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar3;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(lVar4,param_2,puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar1);
        _objc_release(puVar3);
        if (lVar4 == 0) {
          puVar3 = PTR_PTR_1126c9cd0;
          func_0x00010c0f20c0(PTR_PTR_1126c9cd0,param_2,*(undefined8 *)(param_1 + _DAT_112745b68),
                              *(undefined8 *)(param_1 + _DAT_112745b94),
                              *(undefined8 *)(param_1 + _DAT_112745b58),
                              *(undefined8 *)(param_1 + _DAT_112745b7c),
                              *(undefined8 *)(param_1 + _DAT_112745b5c),
                              *(undefined8 *)(param_1 + _DAT_112745b88),
                              *(undefined8 *)(param_1 + _DAT_112745b84),param_3,param_1,
                              *(undefined8 *)(param_1 + _DAT_112745b90),
                              *(undefined8 *)(param_1 + _DAT_112745b80));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d8aa0();
          uVar5 = *(undefined8 *)(param_1 + lVar6);
          puVar1 = param_3;
          func_0x00010c0f0be0(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar5,param_2,puVar3,puVar2);
          _objc_release(puVar2);
          _objc_release(puVar1);
          func_0x00010c1b99e0(puVar3,param_2,*(undefined8 *)(param_1 + _DAT_112745bdc));
        }
        else {
          puVar3 = *(undefined **)(param_1 + lVar6);
          puVar1 = param_3;
          func_0x00010c0f0be0(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0(puVar3,param_2,puVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          _objc_release(puVar1);
        }
        goto LAB_106327ec4;
      }
    }
  }
  puVar3 = (undefined *)0x0;
LAB_106327ec4:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106327fb4; end: 10632803b; -[SCOperaViewController _pageViewControllerForPageID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106327fb4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar3 = (long)_DAT_112745bd4;
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c0e00e0(uVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106328020;
    }
  }
  uVar2 = 0;
LAB_106328020:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10632803c; end: 106328113; -[SCOperaViewController _updateOperaScrollViewAndAddPageVCs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632803c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0eb6a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07d460();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0eb6a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182360(*(undefined8 *)(param_1 + (long)_DAT_112745c08),
                        ((undefined8 *)(param_1 + (long)_DAT_112745c08))[1]);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  func_0x00010bdc7a40(param_1,param_2,param_3);
  func_0x00010bed3480(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106328114; end: 1063282bb; -[SCOperaViewController _updateAttachmentInteraction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106328114(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112745b8c;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f3aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010be6f960(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea2ec0(*(undefined8 *)(param_1 + _DAT_112745c04),
                        ((undefined8 *)(param_1 + _DAT_112745c04))[1],param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112745be0);
    func_0x00010bdf6e60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf0cba0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c251440(uVar3);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0cb60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bdf6e60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea2ec0(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),param_1);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c256cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112745be0),PTR_s_stopTracking_112673560);
    return;
  }
  return;
}



/* Entry: 1063282bc; end: 106328327; -[SCOperaViewController _setContainerViewOffsetForPageVC:baseOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063282bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_3 + _DAT_112745b68);
  _objc_retain(param_5);
  func_0x00010bf4e680();
  if (iVar1 == 0) {
    func_0x00010c181ac0(param_2,param_5);
  }
  else {
    func_0x00010c181aa0(param_1,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106328328; end: 106328533; -[SCOperaViewController _addOperaPageViewControllers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106328328(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_106314348();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar2);
      }
      uVar8 = *(undefined8 *)(param_1 + _DAT_112745b8c);
      func_0x00010c067fc0(*(undefined8 *)((long)puVar9 * 8));
      func_0x00010c09caa0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(uVar8);
      puVar9 = puVar9 + 1;
    } while (puVar3 != puVar9);
    puVar3 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  lVar6 = (long)_DAT_112745b68;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c0d6c60(uVar4);
  uVar8 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf4e680(uVar8);
  FUN_10631f894(uVar4,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112745bc4);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112745b8c);
  func_0x00010bf60c20(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cf60(uVar7);
  _objc_release(uVar8);
  func_0x00010bf76980(*(undefined8 *)(param_1 + _DAT_112745b9c));
  func_0x00010bed2680(param_1);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)(param_3 + _DAT_112745b68);
  func_0x00010c0da1c0();
  if (lVar6 != 0) {
    uVar8 = *(undefined8 *)(param_3 + _DAT_112745c5c);
    _objc_retain(uVar8);
    func_0x00010c12af60(uVar8);
    func_0x00010be0ac80(param_3);
    func_0x00010bedc540(param_3);
    _objc_release(uVar8);
  }
  return;
}



/* Entry: 106328534; end: 1063285d7; -[SCOperaViewController _updateActionBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106328534(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + _DAT_112745b68);
  func_0x00010c0da1c0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112745c5c);
    _objc_retain(uVar2);
    func_0x00010c12af60(uVar2);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1063285d8;
    puStack_38 = &UNK_11091c948;
    lStack_30 = param_1;
    uStack_28 = uVar2;
    func_0x00010be0ac80(param_1,param_2,&puStack_50);
    func_0x00010bedc540(param_1,param_2,0xffffffffffffffff);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 1063285d8; end: 10632868f;  */

void FUN_1063285d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c9cd8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010bdc41e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bff6540(puVar1);
  uVar2 = param_2;
  func_0x00010beeddc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c230b40(param_2);
  _objc_release(param_2);
  func_0x00010bef69a0(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106328690; end: 10632875f; -[SCOperaViewController _addActionBarViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106328690(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112745b68;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c0da1c0();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + lVar4);
    func_0x00010c0da1c0();
    if (lVar1 != 3) {
      puVar2 = PTR_PTR_1126c9ce0;
      _objc_alloc();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c0da1c0(uVar3);
      func_0x00010beede60(*(undefined8 *)(param_1 + lVar4));
      func_0x00010c0018e0(puVar2,param_2,uVar3);
      uVar3 = *(undefined8 *)(param_1 + _DAT_112745c5c);
      *(undefined **)(param_1 + _DAT_112745c5c) = puVar2;
      _objc_retain();
      _objc_release(uVar3);
      func_0x00010c0eb6a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161780();
      _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 106328760; end: 106328913; -[SCOperaViewController _enumeratePageViewControllers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106328760(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar3 = param_1;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar8 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar3);
      }
      puVar4 = PTR_PTR_1126c9cd0;
      uVar11 = *(ulong *)(lVar10 * 8);
      _objc_retain(uVar11);
      _objc_opt_class(puVar4);
      uVar5 = uVar11;
      _objc_opt_isKindOfClass(uVar11,puVar4);
      uVar1 = uVar11;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar11);
      if (uVar1 != 0) {
        uVar5 = uVar11;
        func_0x00010c0f0be0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_1;
        func_0x00010c128180(param_1);
        (**(code **)(param_3 + 0x10))(param_3,uVar11,lVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
      }
      _objc_release(uVar1);
      lVar10 = lVar10 + 1;
    } while (lVar8 != lVar10);
    lVar8 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)(param_3 + (long)_DAT_112745b68);
  func_0x00010c0da1c0(lVar8);
  return (ulong)(lVar8 - 5U < 0xfffffffffffffffd);
}



/* Entry: 106328914; end: 10632893f; -[SCOperaViewController _actionBarBackgroundStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106328914(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112745b68);
  func_0x00010c0da1c0(lVar1);
  return lVar1 - 5U < 0xfffffffffffffffd;
}



/* Entry: 106328940; end: 106328abb; -[SCOperaViewController _updateOffsetInActionBarWithDirection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106328940(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar5 = (long)_DAT_112745b68;
  lVar3 = *(long *)(param_1 + lVar5);
  func_0x00010c0da1c0();
  if (lVar3 == 0) {
    return;
  }
  iVar2 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010bf4e680();
  if (iVar2 == 0) {
LAB_106328994:
    bVar1 = false;
  }
  else {
    if (param_3 == 1) {
      uVar4 = 4;
    }
    else {
      if (param_3 != 3) goto LAB_106328994;
      uVar4 = 3;
    }
    lVar3 = param_1;
    func_0x00010be6f960(param_1,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
  }
  uVar4 = *(undefined8 *)(param_1 + _DAT_112745c5c);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106328a2c;
  puStack_50 = &UNK_11091c978;
  uStack_48 = uVar4;
  lStack_40 = param_1;
  uStack_38 = bVar1;
  _objc_retain(uVar4);
  func_0x00010be0ac80(param_1,param_2,&puStack_68);
  _objc_release(uVar4);
  return;
}



/* Entry: 106328abc; end: 106328f8f; -[SCOperaViewController _updatePageIDToPageVCMapWithDimensionToPageIdToPageVCMap:preloadedPageVCMap:] */

/* WARNING: Possible PIC construction at 0x000106328ee0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106328ee4) */
/* WARNING: Removing unreachable block (ram,0x000106328f8c) */
/* WARNING: Removing unreachable block (ram,0x000106328f6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106328abc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_112745bd4;
  lVar11 = *(long *)(param_1 + lVar12);
  _objc_retain(lVar11);
  lVar3 = lVar11;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar11);
      }
      uVar4 = *(undefined8 *)(param_1 + lVar12);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar4;
      func_0x00010c079c00();
      if ((int)uVar9 != 0) {
        func_0x00010c1d0640(puVar2);
      }
      _objc_release(uVar4);
      lVar14 = lVar14 + 1;
    } while (lVar3 != lVar14);
    lVar3 = lVar11;
    func_0x00010bf52a60();
  }
  _objc_release(lVar11);
  lVar11 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_112745c58;
  *(undefined1 *)(param_1 + lVar10) = 1;
  lVar5 = *(long *)(param_1 + lVar12);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      _objc_release(lVar5);
      *(undefined1 *)(param_1 + lVar10) = 0;
      func_0x00010c0d3c80();
      uVar9 = *(undefined8 *)(param_1 + lVar12);
      *(long *)(param_1 + lVar12) = param_4;
      _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bef7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + lVar12),PTR_s_addEntriesFromDictionary__11259b980,puVar2)
      ;
      return;
    }
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      lVar6 = lVar11;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) {
        lVar6 = lVar14;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 != 0) goto LAB_106328d28;
        lVar6 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 != 0) goto LAB_106328d28;
        lVar6 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 != 0) goto LAB_106328d28;
        puVar7 = puVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar7 != (undefined *)0x0) goto LAB_106328d2c;
        lVar6 = *(long *)(param_1 + lVar12);
        func_0x00010c0e00e0(lVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a6740();
        lVar8 = lVar6;
        if (*(char *)(param_1 + _DAT_112745bbc) == '\x01') {
          func_0x00010c29d0c0();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c29bf00(lVar6);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c12c960();
        _objc_release(lVar8);
        func_0x00010c12c8e0(lVar6);
        func_0x00010c26ac40(lVar6);
LAB_106328d48:
        _objc_release(lVar6);
      }
      else {
LAB_106328d28:
        _objc_release();
LAB_106328d2c:
        lVar6 = lVar11;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 != 0) goto LAB_106328d48;
        lVar6 = lVar14;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar6 == 0) {
          lVar6 = *(long *)(param_1 + lVar12);
          func_0x00010c0e00e0(lVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2a6740();
          lVar8 = lVar6;
          if (*(char *)(param_1 + _DAT_112745bbc) == '\x01') {
            func_0x00010c29d0c0();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x00010c29bf00(lVar6);
            _objc_retainAutoreleasedReturnValue();
          }
          func_0x00010c12c960();
          _objc_release(lVar8);
          func_0x00010c12c8e0(lVar6);
          goto LAB_106328d48;
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar3 != lVar13);
    lVar3 = lVar5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106328f90; end: 106328fa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106328f90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112745bd4),
             PTR_s_addEntriesFromDictionary__11259b980);
  return;
}



/* Entry: 106328fa4; end: 106328fe7; -[SCOperaViewController shareableMedias] */

void FUN_106328fa4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdf6e60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c22b620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106328fe8; end: 106329053; -[SCOperaViewController shareableMediaSnapshotsWithPerformer:] */

void FUN_106328fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bdf6e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c22b600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106329054; end: 1063290a3; -[SCOperaViewController _pageVCForRelativePosition:] */

void FUN_106329054(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bee9960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6f9a0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1063290a4; end: 10632920b; -[SCOperaViewController _viewModelForRelativePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063290a4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_3 < 4) {
    if (param_3 == 1) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_112745b8c);
      func_0x00010bf60c20(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c1126e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == 2) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_112745b8c);
      func_0x00010bf60c20(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0d9ae0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_3 != 3) goto LAB_1063291fc;
      uVar1 = *(undefined8 *)(param_1 + _DAT_112745b8c);
      func_0x00010bf60c20(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0f3aa0();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_3 == 4) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112745b8c);
    func_0x00010bf60c20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 5) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112745b8c);
    func_0x00010bf60c20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0d9820();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != 6) goto LAB_1063291fc;
    uVar1 = *(undefined8 *)(param_1 + _DAT_112745b8c);
    func_0x00010bf60c20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1125e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
LAB_1063291fc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10632920c; end: 1063292a7; -[SCOperaViewController navigationManagerDidFinishScrollingToTargetPage:didScrollCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632920c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be19e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112745b8c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf60c20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9fa00(param_1,param_2,uVar2,lVar1,param_4);
  _objc_release(param_4);
  _objc_release(uVar2);
  func_0x00010bf77760(*(undefined8 *)(param_1 + lVar3),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063292a8; end: 10632936f; -[SCOperaViewController navigationManagerWillEndDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063292a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010c0eb240(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00();
  _objc_release(uVar3);
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126c98a0;
  lVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0689e0(param_1,param_2,puVar2,param_4,0,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + _DAT_112745c60);
  *(undefined **)(param_3 + _DAT_112745c60) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106329370; end: 1063293c7; -[SCOperaViewController operaViewContentViewDidRefreshDisplay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106329370(long param_1)

{
  ulong uVar1;
  
  func_0x00010bea5ce0();
  *(undefined1 *)(param_1 + _DAT_112745c4c) = 0;
  func_0x00010be391e0(param_1);
  uVar1 = *(ulong *)(param_1 + _DAT_112745c34);
  func_0x00010c0c53e0();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdf6e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__currentPageVCDidStartDisplaying_11255b540);
  return;
}



/* Entry: 1063293c8; end: 1063296b3; -[SCOperaViewController operaViewDidBeginPress:gestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063293c8(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_8);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_8);
  _objc_release(param_8);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf512a0(param_1,param_2);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b2e48;
  func_0x00010c09ef60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297120();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2e48;
  func_0x00010c09f960();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 / param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2e48;
  func_0x00010c09f9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2 / param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar12 = *(undefined8 *)(param_5 + _DAT_112745ba0);
  _NSStringFromSelector(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e980(uVar12);
  _objc_release(param_6);
  uVar11 = *(undefined8 *)(param_5 + _DAT_112745b5c);
  puVar2 = PTR_PTR_1126b2ea8;
  func_0x00010c110000();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_5 + _DAT_112745b8c);
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar11);
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  uVar11 = *(undefined8 *)(puVar8 + _DAT_112745b5c);
  puVar2 = PTR_PTR_1126b2ea8;
  func_0x00010c1100c0(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar8 + _DAT_112745b8c);
  func_0x00010bf60c20(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar11);
  _objc_release(uVar12);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1063296b4; end: 10632974b; -[SCOperaViewController operaViewDidEndPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063296b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112745b5c);
  puVar1 = PTR_PTR_1126b2ea8;
  func_0x00010c1100c0(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745b8c);
  func_0x00010bf60c20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar4,param_2,puVar1,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10632974c; end: 106329753; -[SCOperaViewController _sendPageDirectionEventWithPreviousViewModel:nextViewModel:] */

void FUN_10632974c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendPageDirectionEventWithPrevi_112585828,param_3,param_4,0);
  return;
}



/* Entry: 106329754; end: 1063299bb; -[SCOperaViewController _sendPageDirectionEventWithPreviousViewModel:nextViewModel:callback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106329754(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c0d9ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == param_4) {
    puVar3 = PTR_PTR_1126c9460;
    func_0x00010c0f25e0();
    _objc_retainAutoreleasedReturnValue();
LAB_1063298e0:
    if (puVar3 != (undefined *)0x0) {
      lVar1 = param_1;
      func_0x00010bdeb340(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea4bc0(param_1);
      uVar4 = *(undefined8 *)(param_1 + _DAT_112745b5c);
      lVar2 = param_4;
      func_0x00010c0f0be0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7c0(uVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      goto joined_r0x00010632994c;
    }
  }
  else {
    lVar1 = param_3;
    func_0x00010c1126e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == param_4) {
      puVar3 = PTR_PTR_1126c9460;
      func_0x00010c0f2620();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1063298e0;
    }
    lVar1 = param_3;
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == param_4) {
      puVar3 = PTR_PTR_1126c9460;
      func_0x00010c0f25a0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1063298e0;
    }
    lVar1 = param_3;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == param_4) {
      puVar3 = PTR_PTR_1126c9460;
      func_0x00010c0f2600();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1063298e0;
    }
    lVar1 = param_3;
    func_0x00010c1125e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == param_4) {
      puVar3 = PTR_PTR_1126c9460;
      func_0x00010c0f2580();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1063298e0;
    }
    lVar1 = param_3;
    func_0x00010c0d9820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == param_4) {
      puVar3 = PTR_PTR_1126c9460;
      func_0x00010c0f2560();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1063298e0;
    }
  }
  func_0x00010bdcbc80(param_1);
  puVar3 = (undefined *)0x0;
joined_r0x00010632994c:
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,puVar3);
  }
  uVar4 = *(undefined8 *)(param_1 + _DAT_112745c60);
  *(undefined8 *)(param_1 + _DAT_112745c60) = 0;
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


