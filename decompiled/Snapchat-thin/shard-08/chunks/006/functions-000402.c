/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1063299bc; end: 106329a7f; -[SCOperaViewController _announceFailedToNavigateEventIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063299bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + _DAT_112745c44) != 0) {
    lVar1 = param_1;
    func_0x00010bdeb340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea4bc0(param_1,param_2,lVar1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112745b5c);
    puVar2 = PTR_PTR_1126c9460;
    func_0x00010bf9fe00(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112745c34);
    func_0x00010c0f0be0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar4,param_2,puVar2,uVar3,lVar1);
    _objc_release(uVar3);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106329a80; end: 106329b0b; -[SCOperaViewController _createBaseEventParamsForCurrentPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106329a80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112745c34;
  lVar2 = *(long *)(param_1 + lVar4);
  func_0x00010bf60c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf60c40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar1,param_2,uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106329b0c; end: 106329f43; -[SCOperaViewController _setInteractionParamsForNavigationEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106329b0c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = (long)_DAT_112745c44;
  lVar1 = *(long *)(param_3 + lVar4);
  if (lVar1 != 0) {
    func_0x00010c27dd80();
    func_0x00010c0df840(puVar2,param_4,lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c9a28;
    func_0x00010c29d280(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_5,param_4,puVar2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0688e0(*(undefined8 *)(param_3 + lVar4));
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c9a28;
    func_0x00010c29d1e0(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_5,param_4,puVar2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c24f200(*(undefined8 *)(param_3 + lVar4));
    uStack_60 = param_1;
    uStack_58 = param_2;
    func_0x00010c297120(puVar2,param_4,&uStack_60,"{CGPoint=dd}");
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c9a28;
    func_0x00010c29d180(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_5,param_4,puVar2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c24f260(*(undefined8 *)(param_3 + lVar4));
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c9a28;
    func_0x00010c29d1a0(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_5,param_4,puVar2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c24f280(*(undefined8 *)(param_3 + lVar4));
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c9a28;
    func_0x00010c29d1c0(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_5,param_4,puVar2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar1 = (long)_DAT_112745c60;
    if (*(long *)(param_3 + lVar1) == 0) {
      puVar2 = PTR_PTR_1126c9a28;
      func_0x00010c29d260(PTR_PTR_1126c9a28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_5,param_4,0,puVar2);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126c9a28;
      func_0x00010c29d200(PTR_PTR_1126c9a28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_5,param_4,0,puVar2);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126c9a28;
      func_0x00010c29d220(PTR_PTR_1126c9a28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_5,param_4,0,puVar2);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126c9a28;
      func_0x00010c29d240(PTR_PTR_1126c9a28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_5,param_4,0,puVar2);
    }
    else {
      func_0x00010c0688e0();
      func_0x00010c0df720(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c9a28;
      func_0x00010c29d260(PTR_PTR_1126c9a28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_5,param_4,puVar2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c24f200(*(undefined8 *)(param_3 + lVar1));
      uStack_70 = param_1;
      uStack_68 = param_2;
      func_0x00010c297120(puVar2,param_4,&uStack_70,"{CGPoint=dd}");
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c9a28;
      func_0x00010c29d200(PTR_PTR_1126c9a28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_5,param_4,puVar2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c24f260(*(undefined8 *)(param_3 + lVar1));
      func_0x00010c0df720(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c9a28;
      func_0x00010c29d220(PTR_PTR_1126c9a28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_5,param_4,puVar2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c24f280(*(undefined8 *)(param_3 + lVar1));
      func_0x00010c0df720(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c9a28;
      func_0x00010c29d240(PTR_PTR_1126c9a28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_5,param_4,puVar2,puVar3);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 106329f44; end: 106329fc7; -[SCOperaViewController navigationManager:didTapToRelativePosition:] */

void FUN_106329f44(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bdf6e60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c077080();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    if (param_4 == 5) {
                    /* WARNING: Could not recover jumptable at 0x00010be6beb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onTapToAdvance_112578948);
      return;
    }
    if (param_4 == 6) {
                    /* WARNING: Could not recover jumptable at 0x00010be6bd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onTapBackward_1125788f8);
      return;
    }
  }
  return;
}



/* Entry: 106329fc8; end: 10632a00b; -[SCOperaViewController navigationManager:handledInteraction:] */

void FUN_106329fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010c1b8f80(param_1,param_2,param_4);
  func_0x00010bdd1840(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10632a00c; end: 10632a013; -[SCOperaViewController navigationManager:wantsToDismissAnimated:] */

void FUN_10632a00c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissWithAnimation__1125becd8,param_4);
  return;
}



/* Entry: 10632a014; end: 10632a017; -[SCOperaViewController navigationManagerShouldDismiss:] */

void FUN_10632a014(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfe610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didHitDismissViewModel_11255d320);
  return;
}



/* Entry: 10632a018; end: 10632a06f; -[SCOperaViewController navigationManagerOperaScrollViewDidScroll:direction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632a018(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x00010bedc540(param_1,param_2,param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745ba0);
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e980(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10632a070; end: 10632a0e3; -[SCOperaViewController _shouldPerformForceUpdateOfPageViewControllers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10632a070(double param_1,long param_2)

{
  bool bVar1;
  
  if ((*(byte *)(param_2 + _DAT_112745c4c) & 1) != 0) {
    return false;
  }
  if ((*(byte *)(param_2 + _DAT_112745c30) & 1) == 0) {
    func_0x00010bf5f3c0(PTR_PTR_1126b3a48);
    bVar1 = 0.25 < param_1 - *(double *)(param_2 + _DAT_112745c64);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10632a0e4; end: 10632a0eb; -[SCOperaViewController _advanceToNextPage:] */

void FUN_10632a0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc9830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__advanceToNextPage_ignoreSetting_11254ffa8,param_3,0);
  return;
}



/* Entry: 10632a0ec; end: 10632a23b; -[SCOperaViewController _sendWillClosePageViewForAnotherPageEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632a0ec(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126c9460;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar7 = 0;
  if (param_3 != 0) {
    uVar9 = *(undefined8 *)(param_1 + _DAT_112745b5c);
    _objc_retain(param_3);
    func_0x00010c2a5c80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112745b8c);
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9a28;
    func_0x00010bf6ed60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_68 = puVar4;
    lStack_60 = param_3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_60,&puStack_68,1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    param_4 = uVar8;
    func_0x00010c0eb7c0(uVar9,param_2,puVar1,uVar8,puVar3);
    iVar7 = (int)puVar5;
    _objc_release(param_3);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(uVar8);
    _objc_release(uVar2);
    _objc_release();
    param_1 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = (long)_DAT_112745c4c;
  if (((param_1[lVar11] & 1) != 0) || ((param_1[_DAT_112745c30] & 1) == 0)) {
    puVar1 = param_1;
    func_0x00010beb4c00();
    if ((int)puVar1 == 0) {
      return;
    }
    func_0x00010bdf6e80(param_1);
  }
  lVar10 = (long)_DAT_112745b8c;
  puVar4 = *(undefined **)(param_1 + lVar10);
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010c0d9820();
  _objc_retainAutoreleasedReturnValue();
  if (iVar7 == 0) {
LAB_10632a340:
    puVar3 = puVar4;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010befe340();
    _objc_release(puVar3);
    if ((int)puVar5 != 0) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_112745ba0);
      uVar8 = *(undefined8 *)(param_1 + _DAT_112745b68);
      func_0x00010bf80100(uVar8);
      func_0x00010c0d6040(uVar2,param_2,(uint)uVar8 ^ 1,param_4);
      goto LAB_10632a5a8;
    }
    puVar3 = puVar4;
    if (puVar1 == (undefined *)0x0) {
      puVar5 = puVar4;
      func_0x00010c0f3aa0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == (undefined *)0x0) {
        func_0x00010c0d9ae0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar5);
        puVar3 = puVar5;
      }
      _objc_release(puVar5);
      lVar10 = (long)_DAT_112745b68;
      lVar11 = *(long *)(param_1 + lVar10);
      func_0x00010c0da020();
      if (lVar11 == 2) {
        if ((puVar3 != (undefined *)0x0) &&
           (puVar5 = param_1, func_0x00010c22f140(param_1,param_2,puVar3), ((ulong)puVar5 & 1) == 0)
           ) {
LAB_10632a520:
          puVar5 = puVar4;
          func_0x00010c0f3aa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          uVar8 = *(undefined8 *)(param_1 + _DAT_112745ba0);
          if (puVar5 == (undefined *)0x0) {
            uVar2 = *(undefined8 *)(param_1 + lVar10);
            func_0x00010bf80100(uVar2);
            func_0x00010c0d6040(uVar8,param_2,(uint)uVar2 ^ 1,param_4);
          }
          else {
            func_0x00010c0d60c0(uVar8,param_2,1,param_4);
          }
        }
      }
      else if (lVar11 == 1) {
        if ((puVar3 != (undefined *)0x0) &&
           (puVar5 = param_1, func_0x00010c22f140(param_1,param_2,puVar3), (int)puVar5 == 0))
        goto LAB_10632a520;
        func_0x00010bdfe600(param_1);
      }
    }
    else {
      puVar5 = param_1;
      func_0x00010c22f140(param_1,param_2,puVar1);
      if ((int)puVar5 != 0) {
        func_0x00010bdfe600(param_1);
        goto LAB_10632a5a8;
      }
      if (puVar1 == puVar4) {
        func_0x00010be9f9e0(param_1,param_2,puVar1,puVar1);
        func_0x00010be391c0(param_1);
        func_0x00010be391e0(param_1);
        func_0x00010be39260(param_1);
        goto LAB_10632a5a8;
      }
      if ((param_1[_DAT_112745bb0] & 1) == 0) {
        param_1[lVar11] = 1;
      }
      puVar5 = puVar4;
      func_0x00010c0d9820(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea11c0(param_1,param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar5);
      puVar5 = puVar4;
      func_0x00010c0d9820(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be9f9e0(param_1,param_2,puVar4,puVar5);
      _objc_release(puVar5);
      uVar8 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010c0d9820(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf77760(uVar8,param_2,puVar3);
    }
  }
  else {
    puVar3 = puVar4;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c0b57c0();
    _objc_release(puVar3);
    if ((int)puVar5 == 0) goto LAB_10632a340;
    uVar8 = *(undefined8 *)(param_1 + _DAT_112745b5c);
    puVar3 = PTR_PTR_1126b2638;
    func_0x00010bfcd400(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0f0be0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7a0(uVar8,param_2,puVar3,puVar5);
    _objc_release(puVar5);
  }
  _objc_release(puVar3);
LAB_10632a5a8:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10632a23c; end: 10632a5cb; -[SCOperaViewController _advanceToNextPage:ignoreSettingLastInteraction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632a23c(ulong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = (long)_DAT_112745c4c;
  if (((*(byte *)(param_1 + lVar10) & 1) != 0) ||
     ((*(byte *)(param_1 + (long)_DAT_112745c30) & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010beb4c00();
    if ((int)uVar1 == 0) {
      return;
    }
    func_0x00010bdf6e80(param_1);
  }
  lVar9 = (long)_DAT_112745b8c;
  puVar2 = *(undefined **)(param_1 + lVar9);
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d9820();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
LAB_10632a340:
    puVar4 = puVar2;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010befe340();
    _objc_release(puVar4);
    if ((int)puVar5 != 0) {
      uVar8 = *(undefined8 *)(param_1 + (long)_DAT_112745ba0);
      uVar7 = *(undefined8 *)(param_1 + (long)_DAT_112745b68);
      func_0x00010bf80100(uVar7);
      func_0x00010c0d6040(uVar8,param_2,(uint)uVar7 ^ 1,param_4);
      goto LAB_10632a5a8;
    }
    puVar4 = puVar2;
    if (puVar3 == (undefined *)0x0) {
      puVar5 = puVar2;
      func_0x00010c0f3aa0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == (undefined *)0x0) {
        func_0x00010c0d9ae0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar5);
        puVar4 = puVar5;
      }
      _objc_release(puVar5);
      lVar9 = (long)_DAT_112745b68;
      lVar10 = *(long *)(param_1 + lVar9);
      func_0x00010c0da020();
      if (lVar10 == 2) {
        if ((puVar4 != (undefined *)0x0) &&
           (uVar1 = param_1, func_0x00010c22f140(param_1,param_2,puVar4), (uVar1 & 1) == 0)) {
LAB_10632a520:
          puVar5 = puVar2;
          func_0x00010c0f3aa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          uVar7 = *(undefined8 *)(param_1 + (long)_DAT_112745ba0);
          if (puVar5 == (undefined *)0x0) {
            uVar8 = *(undefined8 *)(param_1 + lVar9);
            func_0x00010bf80100(uVar8);
            func_0x00010c0d6040(uVar7,param_2,(uint)uVar8 ^ 1,param_4);
          }
          else {
            func_0x00010c0d60c0(uVar7,param_2,1,param_4);
          }
        }
      }
      else if (lVar10 == 1) {
        if ((puVar4 != (undefined *)0x0) &&
           (uVar1 = param_1, func_0x00010c22f140(param_1,param_2,puVar4), (int)uVar1 == 0))
        goto LAB_10632a520;
        func_0x00010bdfe600(param_1);
      }
    }
    else {
      uVar1 = param_1;
      func_0x00010c22f140(param_1,param_2,puVar3);
      if ((int)uVar1 != 0) {
        func_0x00010bdfe600(param_1);
        goto LAB_10632a5a8;
      }
      if (puVar3 == puVar2) {
        func_0x00010be9f9e0(param_1,param_2,puVar3,puVar3);
        func_0x00010be391c0(param_1);
        func_0x00010be391e0(param_1);
        func_0x00010be39260(param_1);
        goto LAB_10632a5a8;
      }
      if ((*(byte *)(param_1 + (long)_DAT_112745bb0) & 1) == 0) {
        *(undefined1 *)(param_1 + lVar10) = 1;
      }
      puVar5 = puVar2;
      func_0x00010c0d9820(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea11c0(param_1,param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar5);
      puVar5 = puVar2;
      func_0x00010c0d9820(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be9f9e0(param_1,param_2,puVar2,puVar5);
      _objc_release(puVar5);
      uVar7 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c0d9820(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf77760(uVar7,param_2,puVar4);
    }
  }
  else {
    puVar4 = puVar2;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0b57c0();
    _objc_release(puVar4);
    if ((int)puVar5 == 0) goto LAB_10632a340;
    uVar7 = *(undefined8 *)(param_1 + (long)_DAT_112745b5c);
    puVar4 = PTR_PTR_1126b2638;
    func_0x00010bfcd400(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c0f0be0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7a0(uVar7,param_2,puVar4,puVar5);
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
LAB_10632a5a8:
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10632a5cc; end: 10632a6a3; -[SCOperaViewController _didHitDismissViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632a5cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112745c14) = 1;
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_112745ba0);
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e980(uVar3);
  _objc_release(param_2);
  lVar2 = (long)_DAT_112745c44;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c27dd80();
  if (lVar1 != 2) {
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x00010c27dd80();
    if (lVar1 != 0xe) {
                    /* WARNING: Could not recover jumptable at 0x00010bf82f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismiss_1125be578);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf84cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissWithAnimation__1125becd8,0);
  return;
}



/* Entry: 10632a6a4; end: 10632a963; -[SCOperaViewController _goBackToPreviousPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632a6a4(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = (long)_DAT_112745c4c;
  if (((*(byte *)(param_1 + lVar7) & 1) != 0) ||
     (*(char *)(param_1 + (long)_DAT_112745c30) != '\x01')) {
    return;
  }
  lVar8 = (long)_DAT_112745b8c;
  lVar1 = *(long *)(param_1 + lVar8);
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1125e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = *(long *)(param_1 + lVar8);
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010c1126e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar8 = (long)_DAT_112745b68;
    lVar1 = *(long *)(param_1 + lVar8);
    func_0x00010c112980();
    if (lVar1 == 2) {
      if ((lVar7 != 0) &&
         (uVar5 = param_1, func_0x00010c22f140(param_1,param_2,lVar7), (uVar5 & 1) == 0)) {
LAB_10632a8f8:
        uVar4 = *(undefined8 *)(param_1 + (long)_DAT_112745ba0);
        uVar6 = *(undefined8 *)(param_1 + lVar8);
        func_0x00010bf80100(uVar6);
        func_0x00010c0d6120(uVar4,param_2,(uint)uVar6 ^ 1);
      }
    }
    else if (lVar1 == 1) {
      if ((lVar7 != 0) &&
         (uVar5 = param_1, func_0x00010c22f140(param_1,param_2,lVar7), (int)uVar5 == 0))
      goto LAB_10632a8f8;
      func_0x00010bdfe600(param_1);
    }
  }
  else {
    uVar5 = param_1;
    func_0x00010c22f140(param_1,param_2,lVar2);
    if ((int)uVar5 != 0) {
      func_0x00010bdfe600(param_1);
      goto LAB_10632a920;
    }
    lVar1 = *(long *)(param_1 + lVar8);
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == lVar1) {
      func_0x00010be9f9e0(param_1,param_2,lVar2,lVar2);
      func_0x00010be391c0(param_1);
      func_0x00010be391e0(param_1);
      func_0x00010be39260(param_1);
      goto LAB_10632a920;
    }
    if ((*(byte *)(param_1 + (long)_DAT_112745bb0) & 1) == 0) {
      *(undefined1 *)(param_1 + lVar7) = 1;
    }
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bf60c20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c1125e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea11c0(param_1,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bf60c20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bf60c20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c1125e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9f9e0(param_1,param_2,uVar4,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar4);
    lVar8 = *(long *)(param_1 + lVar8);
    lVar7 = lVar8;
    func_0x00010bf60c20(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar7;
    func_0x00010c1125e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf77760(lVar8,param_2,lVar1);
    _objc_release(lVar1);
  }
  _objc_release(lVar7);
LAB_10632a920:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10632a964; end: 10632aadb; -[SCOperaViewController _shouldNotPassCurrentPageWithScrollRelativePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10632a964(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_3 < 3) {
    if (param_3 == 1) {
      lVar1 = *(long *)(param_1 + (long)_DAT_112745b8c);
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c1126e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_3 != 2) {
        return 0;
      }
      lVar1 = *(long *)(param_1 + (long)_DAT_112745b8c);
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0d9ae0();
      _objc_retainAutoreleasedReturnValue();
    }
LAB_10632aa98:
    _objc_release(lVar1);
    if (lVar2 != 0) {
      func_0x00010c22f140(param_1,param_2,lVar2);
      uVar3 = param_1;
      goto LAB_10632aac0;
    }
  }
  else {
    if (param_3 == 4) {
      lVar1 = *(long *)(param_1 + (long)_DAT_112745b8c);
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf0cb60();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10632aa98;
    }
    if (param_3 != 3) {
      return 0;
    }
    lVar1 = *(long *)(param_1 + (long)_DAT_112745b8c);
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if ((lVar2 != 0) &&
       (uVar3 = param_1, func_0x00010c22f140(param_1,param_2,lVar2), (uVar3 & 1) == 0)) {
      func_0x00010be6f9a0(param_1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010bf1d940();
      _objc_release(param_1);
      goto LAB_10632aac0;
    }
  }
  uVar3 = 1;
LAB_10632aac0:
  _objc_release(lVar2);
  return uVar3;
}



/* Entry: 10632aadc; end: 10632ab3f; -[SCOperaViewController _currentPageVCOffset] */

undefined1  [16] FUN_10632aadc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  func_0x00010bdf6e60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(uVar1);
  _objc_release(param_3);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10632ab40; end: 10632ab97; -[SCOperaViewController _currentPageVC] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632ab40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745bd4);
  func_0x00010bf5f7e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10632ab98; end: 10632ac07; -[SCOperaViewController currentPageID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632ab98(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745b8c);
  func_0x00010bf60c20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10632ac08; end: 10632acdf; -[SCOperaViewController shouldDismissOnViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10632ac08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0f0be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745b58);
  func_0x00010bf461c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000107dc65c0(uVar1,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112745b68);
  func_0x00010bf01220(uVar4);
  uVar1 = param_3;
  FUN_10631667c(param_3,uVar4,uVar3);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10632ace0; end: 10632ad0f; -[SCOperaViewController overridePauseStateToPause] */

void FUN_10632ace0(undefined8 param_1)

{
  func_0x00010bdf6e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10632ad10; end: 10632ad3f; -[SCOperaViewController overridePauseStateToResume] */

void FUN_10632ad10(undefined8 param_1)

{
  func_0x00010bdf6e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10632ad40; end: 10632ad7f; -[SCOperaViewController seekTo:] */

void FUN_10632ad40(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bdf6e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c157100(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10632ad80; end: 10632adb7; -[SCOperaViewController setPauseCurrentPageViewForAttachment:] */

void FUN_10632ad80(undefined8 param_1)

{
  func_0x00010bdf6e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d99a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10632adb8; end: 10632b3a3; -[SCOperaViewController registeredEventsForOperaSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632adb8(double param_1,double param_2)

{
  int iVar1;
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
  undefined8 *****pppppuVar12;
  ulong uVar13;
  undefined8 *****pppppuVar14;
  undefined8 *****pppppuVar15;
  undefined8 *****pppppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 uVar18;
  undefined **ppuVar19;
  undefined8 *****pppppuVar20;
  undefined8 *****pppppuVar21;
  undefined8 uVar22;
  undefined8 *****in_x4;
  long lVar23;
  undefined8 *****pppppuVar24;
  long lVar25;
  undefined **ppuVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 ****ppppuStack_318;
  undefined *puStack_310;
  long lStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined1 *puStack_2e0;
  code *pcStack_2d8;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 ****ppppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b2638;
  func_0x00010c152660();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2638;
  puStack_1c8 = puVar2;
  puStack_1c0 = puVar2;
  func_0x00010c1526a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2638;
  puStack_1d0 = puVar3;
  puStack_1b8 = puVar3;
  func_0x00010c152620();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2638;
  puStack_1d8 = puVar2;
  puStack_1b0 = puVar2;
  func_0x00010c2614e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2638;
  puStack_1e0 = puVar3;
  puStack_1a8 = puVar3;
  func_0x00010c2614c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2638;
  puStack_1e8 = puVar2;
  puStack_1a0 = puVar2;
  func_0x00010c261540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2638;
  puStack_1f0 = puVar3;
  puStack_198 = puVar3;
  func_0x00010bf0a200();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2638;
  puStack_1f8 = puVar2;
  puStack_190 = puVar2;
  func_0x00010bf112e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2638;
  puStack_200 = puVar3;
  puStack_188 = puVar3;
  func_0x00010c2a6840();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2ea8;
  puStack_208 = puVar2;
  puStack_180 = puVar2;
  func_0x00010c0b4cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2ea8;
  puStack_210 = puVar3;
  puStack_178 = puVar3;
  func_0x00010c235940();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2638;
  puStack_218 = puVar2;
  puStack_170 = puVar2;
  func_0x00010c22b260();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2638;
  puStack_220 = puVar3;
  puStack_168 = puVar3;
  func_0x00010bef85c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9ce8;
  puStack_228 = puVar2;
  puStack_160 = puVar2;
  func_0x00010c250c60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2638;
  puStack_230 = puVar3;
  puStack_158 = puVar3;
  func_0x00010c113c60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2638;
  puStack_238 = puVar2;
  puStack_150 = puVar2;
  func_0x00010c29a1a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2638;
  puStack_240 = puVar3;
  puStack_148 = puVar3;
  func_0x00010c08ea60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2638;
  puStack_248 = puVar2;
  puStack_140 = puVar2;
  func_0x00010c08ea40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2638;
  puStack_250 = puVar3;
  puStack_138 = puVar3;
  func_0x00010c285da0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  puStack_258 = puVar2;
  puStack_130 = puVar2;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9460;
  puStack_260 = puVar3;
  puStack_128 = puVar3;
  func_0x00010c27c060();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9460;
  puStack_268 = puVar2;
  puStack_120 = puVar2;
  func_0x00010c27c080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9460;
  puStack_270 = puVar3;
  puStack_118 = puVar3;
  func_0x00010c2a5c80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c7da8;
  puStack_278 = puVar2;
  puStack_110 = puVar2;
  func_0x00010c257e40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2638;
  puStack_280 = puVar3;
  puStack_108 = puVar3;
  func_0x00010c269be0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2638;
  puStack_288 = puVar2;
  puStack_100 = puVar2;
  func_0x00010c1402c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2638;
  puStack_290 = puVar3;
  puStack_f8 = puVar3;
  func_0x00010c0f0300();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2638;
  puStack_298 = puVar2;
  puStack_f0 = puVar2;
  func_0x00010c13d5c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2638;
  puStack_2a0 = puVar3;
  puStack_e8 = puVar3;
  func_0x00010c0f5e80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2638;
  puStack_2a8 = puVar2;
  puStack_e0 = puVar2;
  func_0x00010bfe1c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2638;
  puStack_2b0 = puVar3;
  puStack_d8 = puVar3;
  func_0x00010c2368e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2638;
  puStack_2b8 = puVar2;
  puStack_d0 = puVar2;
  func_0x00010c2694a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2638;
  puStack_2c0 = puVar3;
  puStack_c8 = puVar3;
  func_0x00010c269640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2638;
  puStack_c0 = puVar2;
  func_0x00010c24eb60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2638;
  puStack_b8 = puVar3;
  func_0x00010bf948a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9cf0;
  puStack_b0 = puVar4;
  func_0x00010c0ff280();
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = (undefined **)PTR_PTR_1126c9cf0;
  puStack_a8 = puVar5;
  func_0x00010c269500();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2638;
  ppppuStack_a0 = (undefined8 ****)ppuVar19;
  func_0x00010c288220();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2330;
  puStack_98 = puVar6;
  func_0x00010c283340();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2338;
  puStack_90 = puVar7;
  func_0x00010c0c4140();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b2330;
  puStack_88 = puVar8;
  func_0x00010bf17f80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b2638;
  puStack_80 = puVar9;
  func_0x00010c13a260();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_2c8 = puVar11;
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(ppuVar19);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puStack_2c0);
  _objc_release(puStack_2b8);
  _objc_release(puStack_2b0);
  _objc_release(puStack_2a8);
  _objc_release(puStack_2a0);
  _objc_release(puStack_298);
  _objc_release(puStack_290);
  _objc_release(puStack_288);
  _objc_release(puStack_280);
  _objc_release(puStack_278);
  _objc_release(puStack_270);
  _objc_release(puStack_268);
  _objc_release(puStack_260);
  _objc_release(puStack_258);
  _objc_release(puStack_250);
  _objc_release(puStack_248);
  _objc_release(puStack_240);
  _objc_release(puStack_238);
  _objc_release(puStack_230);
  _objc_release(puStack_228);
  _objc_release(puStack_220);
  _objc_release(puStack_218);
  _objc_release(puStack_210);
  _objc_release(puStack_208);
  _objc_release(puStack_200);
  _objc_release(puStack_1f8);
  _objc_release(puStack_1f0);
  _objc_release(puStack_1e8);
  _objc_release(puStack_1e0);
  _objc_release(puStack_1d8);
  _objc_release(puStack_1d0);
  _objc_release(puStack_1c8);
  puVar4 = puStack_2c8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  pcStack_2d8 = FUN_10632b3a4;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar12 = (undefined8 *****)PTR_PTR_1126c9460;
  puStack_300 = puVar3;
  puStack_2f8 = puVar2;
  puStack_2f0 = puVar10;
  puStack_2e8 = puVar9;
  puStack_2e0 = &stack0xfffffffffffffff0;
  func_0x00010c2a5c80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  ppppuStack_318 = pppppuVar12;
  func_0x00010bf17f80();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar21 = &ppppuStack_318;
  uVar22 = 2;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_310 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pppppuVar21);
  _objc_retain(uVar22);
  _objc_retain(in_x4);
  ppuVar26 = &PTR_PTR_1126b2000;
  puVar2 = PTR_PTR_1126b2638;
  func_0x00010c152660(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  pppppuVar20 = pppppuVar21;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  pppppuVar24 = in_x4;
  if ((int)pppppuVar20 != 0) {
    pppppuVar24 = pppppuVar12;
    func_0x00010bf5f7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar22;
    func_0x00010be36bc0(uVar22);
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = (undefined **)pppppuVar24;
    func_0x00010c0720c0();
    _objc_release(uVar18);
    _objc_release(pppppuVar24);
    if ((int)ppuVar19 == 0) goto LAB_10632b5d8;
    pppppuVar24 = (undefined8 *****)PTR_PTR_1126c98a0;
    func_0x00010c0689a0(PTR_PTR_1126c98a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d60e0(pppppuVar12);
    goto LAB_10632b5d4;
  }
  puVar2 = PTR_PTR_1126b2638;
  func_0x00010c269be0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  pppppuVar20 = pppppuVar21;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)pppppuVar20 != 0) {
LAB_10632b5b4:
    pppppuVar24 = (undefined8 *****)PTR_PTR_1126c98a0;
    func_0x00010c0689a0(PTR_PTR_1126c98a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8f80(pppppuVar12);
    goto LAB_10632b5d4;
  }
  puVar2 = PTR_PTR_1126b2638;
  func_0x00010c1526a0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  pppppuVar20 = pppppuVar21;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)pppppuVar20 != 0) {
    pppppuVar24 = pppppuVar12;
    func_0x00010bf5f7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar22;
    func_0x00010be36bc0(uVar22);
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = (undefined **)pppppuVar24;
    func_0x00010c0720c0();
    _objc_release(uVar18);
    _objc_release(pppppuVar24);
    if ((int)ppuVar19 == 0) goto LAB_10632b5d8;
    pppppuVar24 = (undefined8 *****)PTR_PTR_1126c98a0;
    func_0x00010c0689a0(PTR_PTR_1126c98a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d6160(pppppuVar12);
    goto LAB_10632b5d4;
  }
  puVar2 = PTR_PTR_1126b2638;
  func_0x00010c152620(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  pppppuVar20 = pppppuVar21;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)pppppuVar20 != 0) {
    pppppuVar24 = (undefined8 *****)PTR_PTR_1126c98a0;
    func_0x00010c0689a0(PTR_PTR_1126c98a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d6060(pppppuVar12);
    goto LAB_10632b5d4;
  }
  puVar2 = PTR_PTR_1126b2638;
  func_0x00010c2614e0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  pppppuVar20 = pppppuVar21;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)pppppuVar20 != 0) {
    func_0x00010c0eb6a0();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar20 = pppppuVar12;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar24 = (undefined8 *****)PTR_PTR_1126b6008;
    func_0x00010c261520(PTR_PTR_1126b6008);
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = (undefined **)in_x4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c261500(pppppuVar20);
    _objc_release(ppuVar19);
LAB_10632b7e0:
    _objc_release(pppppuVar24);
    pppppuVar24 = pppppuVar12;
    goto LAB_10632b844;
  }
  puVar2 = PTR_PTR_1126b2638;
  func_0x00010c2614c0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  pppppuVar20 = pppppuVar21;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)pppppuVar20 != 0) {
    func_0x00010c0eb6a0();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar20 = pppppuVar12;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2614c0();
    pppppuVar24 = pppppuVar12;
    goto LAB_10632b844;
  }
  puVar2 = PTR_PTR_1126b2638;
  func_0x00010c261540(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  pppppuVar20 = pppppuVar21;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)pppppuVar20 != 0) {
    uVar18 = uVar22;
    func_0x00010be36bc0(uVar22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f13c0(pppppuVar12);
    _objc_release(uVar18);
    func_0x00010c0eb6a0();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar20 = pppppuVar12;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar24 = (undefined8 *****)PTR_PTR_1126b6008;
    func_0x00010c261540();
    _objc_retainAutoreleasedReturnValue();
    ppuVar26 = (undefined **)in_x4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c261560(pppppuVar20);
    _objc_release(ppuVar26);
    ppuVar19 = (undefined **)pppppuVar24;
    goto LAB_10632b7e0;
  }
  puVar2 = PTR_PTR_1126b2638;
  func_0x00010bf0a200(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  pppppuVar20 = pppppuVar21;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)pppppuVar20 == 0) {
    puVar2 = PTR_PTR_1126b2638;
    func_0x00010c2a6840(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar20 = pppppuVar21;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)pppppuVar20 == 0) {
      puVar2 = PTR_PTR_1126b2638;
      func_0x00010bf112e0(PTR_PTR_1126b2638);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar20 = pppppuVar21;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)pppppuVar20 != 0) {
        pppppuVar24 = pppppuVar12;
        func_0x00010bf5f7e0();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar22;
        func_0x00010be36bc0(uVar22);
        _objc_retainAutoreleasedReturnValue();
        ppuVar19 = (undefined **)pppppuVar24;
        func_0x00010c0720c0();
        _objc_release(uVar18);
        _objc_release(pppppuVar24);
        if ((int)ppuVar19 == 0) goto LAB_10632b5d8;
        if ((*(byte *)((long)pppppuVar12 + (long)_DAT_112745c48) & 1) != 0) goto LAB_10632b5d8;
        uVar13 = *(ulong *)((long)pppppuVar12 + (long)_DAT_112745b9c);
        func_0x00010c06c1a0();
        if ((uVar13 & 1) != 0) goto LAB_10632b5d8;
        puVar2 = PTR_PTR_1126c98a0;
        func_0x00010c0689a0(PTR_PTR_1126c98a0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b8f80(pppppuVar12);
        _objc_release(puVar2);
        uVar18 = *(undefined8 *)((long)pppppuVar12 + (long)_DAT_112745b5c);
        puVar2 = PTR_PTR_1126c9460;
        func_0x00010bf11320(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        ppuVar19 = *(undefined ***)((long)pppppuVar12 + (long)_DAT_112745b8c);
        func_0x00010bf60c20();
        _objc_retainAutoreleasedReturnValue();
        ppuVar26 = ppuVar19;
        func_0x00010c0f0be0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb7a0(uVar18);
        _objc_release(ppuVar26);
        _objc_release(ppuVar19);
        _objc_release(puVar2);
        goto LAB_10632bcc0;
      }
      puVar2 = PTR_PTR_1126b2ea8;
      func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar20 = pppppuVar21;
      func_0x00010c0720c0();
      if ((int)pppppuVar20 == 0) {
        puVar3 = PTR_PTR_1126b2ea8;
        func_0x00010c235940(PTR_PTR_1126b2ea8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar19 = (undefined **)pppppuVar21;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        _objc_release(puVar2);
        if ((int)ppuVar19 == 0) {
          puVar2 = PTR_PTR_1126b2638;
          func_0x00010c22b260(PTR_PTR_1126b2638);
          _objc_retainAutoreleasedReturnValue();
          pppppuVar20 = pppppuVar21;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          if ((int)pppppuVar20 == 0) {
            puVar2 = PTR_PTR_1126b2638;
            func_0x00010bef85c0(PTR_PTR_1126b2638);
            _objc_retainAutoreleasedReturnValue();
            pppppuVar20 = pppppuVar21;
            func_0x00010c0720c0();
            _objc_release(puVar2);
            if ((int)pppppuVar20 == 0) {
              puVar2 = PTR_PTR_1126b2638;
              func_0x00010c285da0(PTR_PTR_1126b2638);
              _objc_retainAutoreleasedReturnValue();
              pppppuVar20 = pppppuVar21;
              func_0x00010c0720c0();
              _objc_release(puVar2);
              if ((int)pppppuVar20 == 0) {
                puVar2 = PTR_PTR_1126b2638;
                func_0x00010c113c60(PTR_PTR_1126b2638);
                _objc_retainAutoreleasedReturnValue();
                pppppuVar24 = pppppuVar21;
                func_0x00010c0720c0();
                _objc_release(puVar2);
                if ((int)pppppuVar24 != 0) {
                  puVar2 = PTR_PTR_1126b6008;
                  func_0x00010c113c40(PTR_PTR_1126b6008);
                  _objc_retainAutoreleasedReturnValue();
                  pppppuVar20 = in_x4;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar2);
                  param_1 = 0.0;
                  _objc_retain(pppppuVar20);
                  pppppuVar14 = pppppuVar20;
                  func_0x00010bf52a60();
                  lVar25 = lRam0000000000000000;
                  do {
                    pppppuVar24 = pppppuVar20;
                    if (pppppuVar14 == (undefined8 *****)0x0) goto LAB_10632b844;
                    pppppuVar24 = (undefined8 *****)0x0;
                    do {
                      if (lRam0000000000000000 != lVar25) {
                        _objc_enumerationMutation(pppppuVar20);
                      }
                      ppuVar19 = *(undefined ***)((long)pppppuVar24 * 8);
                      ppuVar26 = (undefined **)pppppuVar12;
                      func_0x00010c0eb6a0();
                      _objc_retainAutoreleasedReturnValue();
                      pppppuVar15 = (undefined8 *****)ppuVar26;
                      func_0x00010c152980();
                      _objc_retainAutoreleasedReturnValue();
                      pppppuVar16 = pppppuVar15;
                      func_0x00010c0f36c0();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1374a0();
                      _objc_release(pppppuVar16);
                      _objc_release(pppppuVar15);
                      _objc_release(ppuVar26);
                      pppppuVar24 = (undefined8 *****)((long)pppppuVar24 + 1);
                    } while (pppppuVar14 != pppppuVar24);
                    pppppuVar14 = pppppuVar20;
                    func_0x00010bf52a60();
                  } while( true );
                }
                puVar2 = PTR_PTR_1126b2638;
                func_0x00010c29a1a0(PTR_PTR_1126b2638);
                _objc_retainAutoreleasedReturnValue();
                pppppuVar24 = pppppuVar21;
                func_0x00010c0720c0();
                _objc_release(puVar2);
                if ((int)pppppuVar24 != 0) {
                  if ((*(byte *)((long)pppppuVar12 + (long)_DAT_112745c4c) & 1) != 0)
                  goto LAB_10632b5d8;
                  func_0x00010bdf6e80(pppppuVar12);
                  goto LAB_10632b5d8;
                }
                puVar2 = PTR_PTR_1126b2638;
                func_0x00010c08ea60(PTR_PTR_1126b2638);
                _objc_retainAutoreleasedReturnValue();
                pppppuVar24 = pppppuVar21;
                func_0x00010c0720c0();
                _objc_release(puVar2);
                if ((int)pppppuVar24 != 0) {
                  pppppuVar24 = pppppuVar12;
                  func_0x00010c0eb6a0(pppppuVar12);
                  _objc_retainAutoreleasedReturnValue();
                  pppppuVar20 = pppppuVar24;
                  func_0x00010c152980();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c138c60();
                  _objc_release(pppppuVar20);
                  _objc_release(pppppuVar24);
                  func_0x00010c138c60(*(undefined8 *)((long)pppppuVar12 + (long)_DAT_112745c68));
                  goto LAB_10632b5d8;
                }
                puVar2 = PTR_PTR_1126b2638;
                func_0x00010c08ea40(PTR_PTR_1126b2638);
                _objc_retainAutoreleasedReturnValue();
                pppppuVar24 = pppppuVar21;
                func_0x00010c0720c0();
                _objc_release(puVar2);
                if ((int)pppppuVar24 == 0) {
                  ppuVar19 = &PTR_PTR_1126b2000;
                  puVar2 = PTR_PTR_1126b2330;
                  func_0x00010c0e9c40(PTR_PTR_1126b2330);
                  _objc_retainAutoreleasedReturnValue();
                  pppppuVar24 = pppppuVar21;
                  func_0x00010c0720c0();
                  _objc_release(puVar2);
                  if ((int)pppppuVar24 == 0) goto LAB_10632c2cc;
                  func_0x00010bed3400(pppppuVar12);
                  func_0x00010c1cbec0(pppppuVar12);
                  goto LAB_10632b5d8;
                }
                func_0x00010bdf6e60();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf7e940();
                pppppuVar24 = pppppuVar12;
              }
              else {
                puVar2 = PTR_PTR_1126b6008;
                func_0x00010bfb2d80(PTR_PTR_1126b6008);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e00e0(in_x4);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar2);
                func_0x00010bed8280(pppppuVar12);
              }
            }
            else {
              puVar2 = PTR_PTR_1126b6008;
              func_0x00010bfb2d80(PTR_PTR_1126b6008);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0e00e0(in_x4);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar2);
              func_0x00010bdc6d00(pppppuVar12);
            }
          }
          else {
            puVar2 = PTR_PTR_1126b6008;
            func_0x00010c22c4e0(PTR_PTR_1126b6008);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0(in_x4);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar2);
            func_0x00010beb1fa0(pppppuVar12);
          }
          goto LAB_10632b5d4;
        }
      }
      else {
        _objc_release(puVar2);
      }
      pppppuVar20 = pppppuVar12;
      func_0x00010c0eb6a0(pppppuVar12);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar14 = pppppuVar20;
      func_0x00010c152980();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c256740();
      _objc_release(pppppuVar14);
      _objc_release(pppppuVar20);
      func_0x00010bf2e980(*(undefined8 *)((long)pppppuVar12 + (long)_DAT_112745ba0));
      ppuVar26 = &PTR_PTR_1126b2000;
      puVar2 = PTR_PTR_1126b2e48;
      func_0x00010c09ef60(PTR_PTR_1126b2e48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(in_x4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      func_0x00010bdc1060(pppppuVar24);
      puVar2 = PTR_PTR_1126b2e48;
      dVar28 = param_1;
      func_0x00010c09f960(PTR_PTR_1126b2e48);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar20 = in_x4;
      func_0x00010c0e00e0(in_x4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar29 = dVar28;
      _objc_release(pppppuVar20);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126b2e48;
      func_0x00010c09f9a0(PTR_PTR_1126b2e48);
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = (undefined **)in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(ppuVar19);
      _objc_release(puVar2);
      pppppuVar20 = (undefined8 *****)PTR_PTR_1126c98a0;
      func_0x00010c068a00(param_1,param_2,dVar28,dVar29,PTR_PTR_1126c98a0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b8f80(pppppuVar12);
      goto LAB_10632be8c;
    }
    pppppuVar24 = pppppuVar12;
    func_0x00010bf5f7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar22;
    func_0x00010be36bc0(uVar22);
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = (undefined **)pppppuVar24;
    func_0x00010c0720c0();
    _objc_release(uVar18);
    _objc_release(pppppuVar24);
    if ((int)ppuVar19 == 0) goto LAB_10632b5d8;
    goto LAB_10632b5b4;
  }
  ppuVar19 = &PTR_PTR_1126b6000;
  puVar2 = PTR_PTR_1126b6008;
  func_0x00010c09f100(PTR_PTR_1126b6008);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(in_x4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1060();
  dVar28 = param_1;
  dVar30 = param_2;
  _objc_release(pppppuVar24);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b6008;
  func_0x00010c09f120(PTR_PTR_1126b6008);
  _objc_retainAutoreleasedReturnValue();
  pppppuVar24 = in_x4;
  func_0x00010c0e00e0(in_x4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1060();
  dVar29 = dVar28;
  _objc_release(pppppuVar24);
  _objc_release(puVar2);
  pppppuVar24 = pppppuVar12;
  func_0x00010c29bf00(pppppuVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar32 = 1.0;
  if (dVar29 <= 0.0) {
    dVar31 = 1.0;
LAB_10632bb28:
    _objc_release(pppppuVar24);
  }
  else {
    pppppuVar20 = pppppuVar12;
    func_0x00010c29bf00(pppppuVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    dVar27 = dVar29;
    _objc_release(pppppuVar20);
    _objc_release(pppppuVar24);
    dVar31 = 1.0;
    if (0.0 < dVar29) {
      pppppuVar24 = pppppuVar12;
      func_0x00010c29bf00(pppppuVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      dVar31 = dVar28 / dVar27;
      _objc_release(pppppuVar24);
      pppppuVar24 = pppppuVar12;
      func_0x00010c29bf00(pppppuVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      dVar32 = dVar30 / dVar27;
      goto LAB_10632bb28;
    }
  }
  pppppuVar24 = (undefined8 *****)PTR_PTR_1126c98a0;
  func_0x00010c068a00(param_1,param_2,dVar31,dVar32,PTR_PTR_1126c98a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5f20(pppppuVar12);
LAB_10632b5d4:
  do {
    _objc_release(pppppuVar24);
LAB_10632b5d8:
    while( true ) {
      while( true ) {
        _objc_release(in_x4);
        _objc_release(uVar22);
        _objc_release(pppppuVar21);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
          return;
        }
        ___stack_chk_fail();
LAB_10632c2cc:
        puVar2 = PTR_PTR_1126c9460;
        func_0x00010c27c060(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        pppppuVar24 = pppppuVar21;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if ((int)pppppuVar24 == 0) break;
        puVar2 = PTR_PTR_1126b6008;
        func_0x00010c27c280(PTR_PTR_1126b6008);
        _objc_retainAutoreleasedReturnValue();
        pppppuVar24 = in_x4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar19 = (undefined **)pppppuVar24;
        func_0x00010bf1f3c0();
        _objc_release(pppppuVar24);
        _objc_release(puVar2);
        if ((int)ppuVar19 != 0) {
          pppppuVar24 = pppppuVar12;
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          pppppuVar20 = pppppuVar24;
          func_0x00010c0d6c60();
          if (pppppuVar20 == (undefined8 *****)0x1) {
            func_0x00010bf4e680();
            _objc_release(pppppuVar24);
          }
          else {
            _objc_release(pppppuVar24);
          }
          func_0x00010beda3e0(pppppuVar12);
        }
        func_0x00010c0d5ee0(*(undefined8 *)((long)pppppuVar12 + (long)_DAT_112745ba0));
      }
      puVar2 = PTR_PTR_1126c9460;
      func_0x00010c27c080(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar24 = pppppuVar21;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)pppppuVar24 == 0) break;
      puVar2 = PTR_PTR_1126b6008;
      func_0x00010c27c320(PTR_PTR_1126b6008);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar24 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = (undefined **)pppppuVar24;
      func_0x00010bf1f3c0();
      _objc_release(pppppuVar24);
      _objc_release(puVar2);
      if ((int)ppuVar19 != 0) {
        puVar2 = PTR_PTR_1126c98a0;
        func_0x00010c0689a0(PTR_PTR_1126c98a0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b8f80(pppppuVar12);
        _objc_release(puVar2);
      }
      func_0x00010c0d60a0(*(undefined8 *)((long)pppppuVar12 + (long)_DAT_112745ba0));
    }
    puVar2 = PTR_PTR_1126c9460;
    func_0x00010c2a5c80(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar24 = pppppuVar21;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)pppppuVar24 != 0) {
      puVar2 = PTR_PTR_1126b2e48;
      func_0x00010c2709c0(PTR_PTR_1126b2e48);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar24 = in_x4;
      func_0x00010c0e00e0(in_x4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      *(double *)((long)pppppuVar12 + (long)_DAT_112745c6c) = param_1;
      _objc_release(pppppuVar24);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126c9a28;
      func_0x00010bf6ed60(PTR_PTR_1126c9a28);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar20 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126c9b98;
      _objc_opt_class(PTR_PTR_1126c9b98);
      pppppuVar14 = pppppuVar20;
      _objc_opt_isKindOfClass(pppppuVar20,puVar2);
      pppppuVar24 = pppppuVar20;
      if (((ulong)pppppuVar14 & 1) == 0) {
        pppppuVar24 = (undefined8 *****)0x0;
      }
      _objc_retain(pppppuVar24);
      _objc_release(pppppuVar20);
      func_0x00010bed3420(pppppuVar12);
      goto LAB_10632b5d4;
    }
    puVar2 = PTR_PTR_1126c7da8;
    func_0x00010c257e40(PTR_PTR_1126c7da8);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar24 = pppppuVar21;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)pppppuVar24 != 0) {
      puVar2 = PTR_PTR_1126b6008;
      func_0x00010c27c280(PTR_PTR_1126b6008);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar24 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = (undefined **)pppppuVar24;
      func_0x00010bf1f3c0();
      _objc_release(pppppuVar24);
      _objc_release(puVar2);
      if ((int)ppuVar19 != 0) {
        pppppuVar24 = pppppuVar12;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        pppppuVar20 = pppppuVar24;
        func_0x00010c0d6c60();
        if (pppppuVar20 == (undefined8 *****)0x1) {
          iVar1 = (int)*(undefined8 *)((long)pppppuVar12 + (long)_DAT_112745b68);
          func_0x00010bf4e680();
          _objc_release(pppppuVar24);
          if (iVar1 != 0) {
            puVar2 = PTR_PTR_1126c98a0;
            func_0x00010c0689a0(PTR_PTR_1126c98a0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1b8f80(pppppuVar12);
            _objc_release(puVar2);
            goto LAB_10632c714;
          }
        }
        else {
          _objc_release(pppppuVar24);
        }
        func_0x00010beda3e0(pppppuVar12);
      }
LAB_10632c714:
      uVar18 = *(undefined8 *)((long)pppppuVar12 + (long)_DAT_112745b8c);
      func_0x00010bf60c20(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be6f9a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar18);
      func_0x00010c29ca00(pppppuVar12);
      pppppuVar24 = pppppuVar12;
      goto LAB_10632b5d4;
    }
    ppppuVar17 = (undefined8 ****)ppuVar26[199];
    func_0x00010c1402c0(ppppuVar17);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar24 = pppppuVar21;
    func_0x00010c0720c0();
    _objc_release(ppppuVar17);
    if ((int)pppppuVar24 != 0) {
      func_0x00010be95740(pppppuVar12);
      goto LAB_10632b5d8;
    }
    ppppuVar17 = (undefined8 ****)ppuVar26[199];
    func_0x00010c0f0300(ppppuVar17);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar24 = pppppuVar21;
    func_0x00010c0720c0();
    _objc_release(ppppuVar17);
    if ((int)pppppuVar24 != 0) {
      func_0x00010c0f02c0(*(undefined8 *)((long)pppppuVar12 + (long)_DAT_112745bcc));
      goto LAB_10632b5d8;
    }
    ppppuVar17 = (undefined8 ****)ppuVar26[199];
    func_0x00010c0f5e80(ppppuVar17);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar24 = pppppuVar21;
    func_0x00010c0720c0();
    _objc_release(ppppuVar17);
    if ((int)pppppuVar24 != 0) {
      lVar25 = *(long *)((long)pppppuVar12 + (long)_DAT_112745c00);
      if (lVar25 == 0) {
        pppppuVar24 = pppppuVar12;
        _objc_opt_class();
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f6200(pppppuVar12);
      }
      else {
        pppppuVar24 = (undefined8 *****)PTR_PTR_1126c9cb0;
        func_0x00010c0693c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f6220(lVar25);
        pppppuVar12 = pppppuVar24;
      }
      goto LAB_10632b5d4;
    }
    ppppuVar17 = (undefined8 ****)ppuVar26[199];
    func_0x00010c13d5c0(ppppuVar17);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar24 = pppppuVar21;
    func_0x00010c0720c0();
    _objc_release(ppppuVar17);
    if ((int)pppppuVar24 != 0) {
      lVar25 = *(long *)((long)pppppuVar12 + (long)_DAT_112745c00);
      if (lVar25 != 0) {
        pppppuVar24 = (undefined8 *****)PTR_PTR_1126c9cb0;
        func_0x00010c0693c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c13dba0(lVar25);
        pppppuVar12 = pppppuVar24;
        goto LAB_10632b5d4;
      }
      func_0x00010be95ce0(pppppuVar12);
      goto LAB_10632b5d8;
    }
    ppppuVar17 = (undefined8 ****)ppuVar26[199];
    func_0x00010c2368e0(ppppuVar17);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar24 = pppppuVar21;
    func_0x00010c0720c0();
    _objc_release(ppppuVar17);
    if ((int)pppppuVar24 != 0) {
LAB_10632c8d0:
      func_0x00010bfe1c40(pppppuVar12);
      goto LAB_10632b5d8;
    }
    ppppuVar17 = (undefined8 ****)ppuVar26[199];
    func_0x00010bfe1c20(ppppuVar17);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar24 = pppppuVar21;
    func_0x00010c0720c0();
    _objc_release(ppppuVar17);
    if ((int)pppppuVar24 != 0) goto LAB_10632c8d0;
    ppppuVar17 = (undefined8 ****)ppuVar26[199];
    func_0x00010c2694a0(ppppuVar17);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar24 = pppppuVar21;
    func_0x00010c0720c0();
    _objc_release(ppppuVar17);
    if ((int)pppppuVar24 != 0) {
      puVar2 = PTR_PTR_1126c98a0;
      func_0x00010c0689a0(PTR_PTR_1126c98a0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b8f80(pppppuVar12);
      _objc_release(puVar2);
      uVar18 = *(undefined8 *)((long)pppppuVar12 + (long)_DAT_112745b5c);
      puVar2 = PTR_PTR_1126c9460;
      func_0x00010c269c60(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = *(undefined ***)((long)pppppuVar12 + (long)_DAT_112745b8c);
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar26 = ppuVar19;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7a0(uVar18);
      _objc_release(ppuVar26);
      _objc_release(ppuVar19);
LAB_10632c9b0:
      _objc_release(puVar2);
LAB_10632bcc0:
      func_0x00010bdc9800(pppppuVar12);
      goto LAB_10632b5d8;
    }
    ppppuVar17 = (undefined8 ****)ppuVar26[199];
    func_0x00010c269640(ppppuVar17);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar24 = pppppuVar21;
    func_0x00010c0720c0();
    _objc_release(ppppuVar17);
    if ((int)pppppuVar24 != 0) {
      uVar18 = *(undefined8 *)((long)pppppuVar12 + (long)_DAT_112745b5c);
      puVar2 = PTR_PTR_1126c9460;
      func_0x00010c269c80(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = *(undefined ***)((long)pppppuVar12 + (long)_DAT_112745b8c);
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar26 = ppuVar19;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7a0(uVar18);
      _objc_release(ppuVar26);
      _objc_release(ppuVar19);
LAB_10632cbe4:
      _objc_release(puVar2);
      func_0x00010be24240(pppppuVar12);
      goto LAB_10632b5d8;
    }
    puVar2 = PTR_PTR_1126c9cf0;
    func_0x00010c269500(PTR_PTR_1126c9cf0);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar24 = pppppuVar21;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)pppppuVar24 != 0) {
      puVar2 = PTR_PTR_1126c9cf8;
      func_0x00010c0735c0(PTR_PTR_1126c9cf8);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar24 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar20 = pppppuVar24;
      func_0x00010bf1f3c0();
      _objc_release(pppppuVar24);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126c98a0;
      func_0x00010c0689a0(PTR_PTR_1126c98a0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b8f80(pppppuVar12);
      _objc_release(puVar2);
      ppuVar19 = *(undefined ***)((long)pppppuVar12 + (long)_DAT_112745b5c);
      puVar2 = PTR_PTR_1126c9460;
      if ((int)pppppuVar20 == 0) {
        func_0x00010c269c80(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c269c60();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuVar26 = *(undefined ***)((long)pppppuVar12 + (long)_DAT_112745b8c);
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar24 = (undefined8 *****)ppuVar26;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7c0(ppuVar19);
      _objc_release(pppppuVar24);
      _objc_release(ppuVar26);
      if (((ulong)pppppuVar20 & 1) != 0) goto LAB_10632c9b0;
      goto LAB_10632cbe4;
    }
    puVar2 = PTR_PTR_1126c9cf0;
    func_0x00010c0ff280(PTR_PTR_1126c9cf0);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar24 = pppppuVar21;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)pppppuVar24 != 0) {
      func_0x00010be2e240(pppppuVar12);
      goto LAB_10632b5d8;
    }
    ppppuVar17 = (undefined8 ****)ppuVar26[199];
    func_0x00010c288220(ppppuVar17);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar24 = pppppuVar21;
    func_0x00010c0720c0();
    _objc_release(ppppuVar17);
    pppppuVar20 = in_x4;
    if ((int)pppppuVar24 != 0) {
      ppuVar19 = &PTR_PTR_1126b6000;
      puVar2 = PTR_PTR_1126b6008;
      func_0x00010c0ea660(PTR_PTR_1126b6008);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar24 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar2);
      if (pppppuVar24 != (undefined8 *****)0x0) break;
      goto LAB_10632b5d8;
    }
    ppppuVar17 = (undefined8 ****)ppuVar19[0x66];
    func_0x00010c283340(ppppuVar17);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar24 = pppppuVar21;
    func_0x00010c0720c0();
    _objc_release(ppppuVar17);
    if ((int)pppppuVar24 != 0) {
      lVar25 = *(long *)((long)pppppuVar12 + (long)_DAT_112745b68);
      func_0x00010c0da1c0();
      if (lVar25 == 3) {
        func_0x00010bed2680(pppppuVar12);
      }
      goto LAB_10632b5d8;
    }
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c0c4140(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar24 = pppppuVar21;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)pppppuVar24 != 0) {
      puVar2 = PTR_PTR_1126b2348;
      func_0x00010c2348a0(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar24 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = (undefined **)pppppuVar24;
      func_0x00010bf1f3c0();
      _objc_release(pppppuVar24);
      _objc_release(puVar2);
      if ((int)ppuVar19 != 0) {
        ppuVar19 = (undefined **)(long)_DAT_112745b8c;
        pppppuVar20 = *(undefined8 ******)((long)pppppuVar12 + (long)ppuVar19);
        func_0x00010bf60c20();
        _objc_retainAutoreleasedReturnValue();
        pppppuVar24 = pppppuVar20;
        func_0x00010c0d9820();
        _objc_retainAutoreleasedReturnValue();
        if (pppppuVar24 == (undefined8 *****)0x0) {
          ppuVar19 = *(undefined ***)((long)pppppuVar12 + (long)ppuVar19);
          func_0x00010bf60c20();
          _objc_retainAutoreleasedReturnValue();
          pppppuVar24 = (undefined8 *****)ppuVar19;
          func_0x00010c0d9ae0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar19);
          _objc_release(pppppuVar20);
          if (pppppuVar24 == (undefined8 *****)0x0) {
            func_0x00010bf82f40(pppppuVar12);
            goto LAB_10632b5d8;
          }
        }
        else {
          _objc_release(pppppuVar20);
        }
        func_0x00010c188040(pppppuVar12);
        goto LAB_10632b5d4;
      }
      goto LAB_10632b5d8;
    }
    ppppuVar17 = (undefined8 ****)ppuVar26[199];
    func_0x00010c13a260(ppppuVar17);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar24 = pppppuVar21;
    func_0x00010c0720c0();
    _objc_release(ppppuVar17);
    if ((int)pppppuVar24 != 0) {
      pppppuVar24 = (undefined8 *****)PTR_PTR_1126b6008;
      func_0x00010c13a2c0();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar14 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (pppppuVar14 == (undefined8 *****)0x0) goto LAB_10632b5d4;
      ppuVar19 = (undefined **)PTR_PTR_1126b6008;
      func_0x00010c13a2a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar26 = (undefined **)in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar19);
      _objc_release(pppppuVar14);
      _objc_release(pppppuVar24);
      if ((undefined8 *****)ppuVar26 != (undefined8 *****)0x0) {
        puVar2 = PTR_PTR_1126b6008;
        func_0x00010c13a2c0(PTR_PTR_1126b6008);
        _objc_retainAutoreleasedReturnValue();
        pppppuVar24 = in_x4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        puVar2 = PTR_PTR_1126b6008;
        func_0x00010c13a2a0(PTR_PTR_1126b6008);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        ppuVar19 = (undefined **)PTR_s_doubleValue_1125bfb10;
        pppppuVar14 = pppppuVar24;
        _objc_opt_respondsToSelector(pppppuVar24,PTR_s_doubleValue_1125bfb10);
        if ((((ulong)pppppuVar14 & 1) != 0) &&
           (pppppuVar14 = pppppuVar20, _objc_opt_respondsToSelector(pppppuVar20,ppuVar19),
           ((ulong)pppppuVar14 & 1) != 0)) {
          func_0x00010c13a3a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0(pppppuVar24);
          dVar28 = param_1;
          func_0x00010bf885a0(pppppuVar20);
          func_0x00010c1a7de0(param_1,dVar28,pppppuVar12);
          _objc_release(pppppuVar12);
        }
        goto LAB_10632be8c;
      }
      goto LAB_10632b5d8;
    }
    ppppuVar17 = (undefined8 ****)ppuVar26[199];
    func_0x00010c24eb60(ppppuVar17);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar24 = pppppuVar21;
    func_0x00010c0720c0();
    _objc_release(ppppuVar17);
    if ((int)pppppuVar24 == 0) {
      ppppuVar17 = (undefined8 ****)ppuVar26[199];
      func_0x00010bf948a0(ppppuVar17);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar24 = pppppuVar21;
      func_0x00010c0720c0();
      _objc_release(ppppuVar17);
      if ((int)pppppuVar24 == 0) goto LAB_10632b5d8;
      pppppuVar24 = pppppuVar12;
      func_0x00010bf5f7e0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar22;
      func_0x00010be36bc0(uVar22);
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = (undefined **)pppppuVar24;
      func_0x00010c0720c0();
      _objc_release(uVar18);
      _objc_release(pppppuVar24);
      if ((int)ppuVar19 == 0) goto LAB_10632b5d8;
      func_0x00010bdf6e60();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      pppppuVar24 = pppppuVar12;
      func_0x00010bf5f7e0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar22;
      func_0x00010be36bc0(uVar22);
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = (undefined **)pppppuVar24;
      func_0x00010c0720c0();
      _objc_release(uVar18);
      _objc_release(pppppuVar24);
      if ((int)ppuVar19 == 0) goto LAB_10632b5d8;
      func_0x00010bdf6e60();
      _objc_retainAutoreleasedReturnValue();
    }
    pppppuVar20 = (undefined8 *****)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e940(pppppuVar12);
    pppppuVar24 = pppppuVar12;
LAB_10632b844:
    _objc_release(pppppuVar20);
    pppppuVar12 = pppppuVar24;
  } while( true );
  pppppuVar24 = (undefined8 *****)PTR_PTR_1126b6008;
  func_0x00010c0ea660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(in_x4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2827c0();
  func_0x00010beda3e0(pppppuVar12);
LAB_10632be8c:
  _objc_release(pppppuVar20);
  goto LAB_10632b5d4;
}



/* Entry: 10632b3a4; end: 10632b463; -[SCOperaViewController registeredEventsForOperaSessionUILifecycleTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632b3a4(double param_1,double param_2)

{
  int iVar1;
  undefined8 *****pppppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 uVar10;
  undefined8 *****pppppuVar11;
  undefined8 *****pppppuVar12;
  undefined8 uVar13;
  undefined8 *****in_x4;
  long lVar14;
  undefined8 *****pppppuVar15;
  long lVar16;
  undefined **unaff_x25;
  undefined **ppuVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 ****ppppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar2 = (undefined8 *****)PTR_PTR_1126c9460;
  func_0x00010c2a5c80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  ppppuStack_48 = pppppuVar2;
  func_0x00010bf17f80();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar12 = &ppppuStack_48;
  uVar13 = 2;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pppppuVar12);
  _objc_retain(uVar13);
  _objc_retain(in_x4);
  ppuVar17 = &PTR_PTR_1126b2000;
  puVar3 = PTR_PTR_1126b2638;
  func_0x00010c152660(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  pppppuVar11 = pppppuVar12;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  pppppuVar15 = in_x4;
  if ((int)pppppuVar11 != 0) {
    pppppuVar15 = pppppuVar2;
    func_0x00010bf5f7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar13;
    func_0x00010be36bc0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = (undefined **)pppppuVar15;
    func_0x00010c0720c0();
    _objc_release(uVar10);
    _objc_release(pppppuVar15);
    if ((int)unaff_x25 == 0) goto LAB_10632b5d8;
    pppppuVar15 = (undefined8 *****)PTR_PTR_1126c98a0;
    func_0x00010c0689a0(PTR_PTR_1126c98a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d60e0(pppppuVar2);
    goto LAB_10632b5d4;
  }
  puVar3 = PTR_PTR_1126b2638;
  func_0x00010c269be0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  pppppuVar11 = pppppuVar12;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)pppppuVar11 != 0) {
LAB_10632b5b4:
    pppppuVar15 = (undefined8 *****)PTR_PTR_1126c98a0;
    func_0x00010c0689a0(PTR_PTR_1126c98a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8f80(pppppuVar2);
    goto LAB_10632b5d4;
  }
  puVar3 = PTR_PTR_1126b2638;
  func_0x00010c1526a0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  pppppuVar11 = pppppuVar12;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)pppppuVar11 != 0) {
    pppppuVar15 = pppppuVar2;
    func_0x00010bf5f7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar13;
    func_0x00010be36bc0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = (undefined **)pppppuVar15;
    func_0x00010c0720c0();
    _objc_release(uVar10);
    _objc_release(pppppuVar15);
    if ((int)unaff_x25 == 0) goto LAB_10632b5d8;
    pppppuVar15 = (undefined8 *****)PTR_PTR_1126c98a0;
    func_0x00010c0689a0(PTR_PTR_1126c98a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d6160(pppppuVar2);
    goto LAB_10632b5d4;
  }
  puVar3 = PTR_PTR_1126b2638;
  func_0x00010c152620(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  pppppuVar11 = pppppuVar12;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)pppppuVar11 != 0) {
    pppppuVar15 = (undefined8 *****)PTR_PTR_1126c98a0;
    func_0x00010c0689a0(PTR_PTR_1126c98a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d6060(pppppuVar2);
    goto LAB_10632b5d4;
  }
  puVar3 = PTR_PTR_1126b2638;
  func_0x00010c2614e0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  pppppuVar11 = pppppuVar12;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)pppppuVar11 != 0) {
    func_0x00010c0eb6a0();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar11 = pppppuVar2;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar15 = (undefined8 *****)PTR_PTR_1126b6008;
    func_0x00010c261520(PTR_PTR_1126b6008);
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = (undefined **)in_x4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c261500(pppppuVar11);
    _objc_release(unaff_x25);
LAB_10632b7e0:
    _objc_release(pppppuVar15);
    pppppuVar15 = pppppuVar2;
    goto LAB_10632b844;
  }
  puVar3 = PTR_PTR_1126b2638;
  func_0x00010c2614c0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  pppppuVar11 = pppppuVar12;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)pppppuVar11 != 0) {
    func_0x00010c0eb6a0();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar11 = pppppuVar2;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2614c0();
    pppppuVar15 = pppppuVar2;
    goto LAB_10632b844;
  }
  puVar3 = PTR_PTR_1126b2638;
  func_0x00010c261540(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  pppppuVar11 = pppppuVar12;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)pppppuVar11 != 0) {
    uVar10 = uVar13;
    func_0x00010be36bc0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f13c0(pppppuVar2);
    _objc_release(uVar10);
    func_0x00010c0eb6a0();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar11 = pppppuVar2;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar15 = (undefined8 *****)PTR_PTR_1126b6008;
    func_0x00010c261540();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = (undefined **)in_x4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c261560(pppppuVar11);
    _objc_release(ppuVar17);
    unaff_x25 = (undefined **)pppppuVar15;
    goto LAB_10632b7e0;
  }
  puVar3 = PTR_PTR_1126b2638;
  func_0x00010bf0a200(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  pppppuVar11 = pppppuVar12;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)pppppuVar11 == 0) {
    puVar3 = PTR_PTR_1126b2638;
    func_0x00010c2a6840(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar11 = pppppuVar12;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)pppppuVar11 == 0) {
      puVar3 = PTR_PTR_1126b2638;
      func_0x00010bf112e0(PTR_PTR_1126b2638);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar11 = pppppuVar12;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      if ((int)pppppuVar11 != 0) {
        pppppuVar15 = pppppuVar2;
        func_0x00010bf5f7e0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar13;
        func_0x00010be36bc0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = (undefined **)pppppuVar15;
        func_0x00010c0720c0();
        _objc_release(uVar10);
        _objc_release(pppppuVar15);
        if ((int)unaff_x25 == 0) goto LAB_10632b5d8;
        if ((*(byte *)((long)pppppuVar2 + (long)_DAT_112745c48) & 1) != 0) goto LAB_10632b5d8;
        uVar5 = *(ulong *)((long)pppppuVar2 + (long)_DAT_112745b9c);
        func_0x00010c06c1a0();
        if ((uVar5 & 1) != 0) goto LAB_10632b5d8;
        puVar3 = PTR_PTR_1126c98a0;
        func_0x00010c0689a0(PTR_PTR_1126c98a0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b8f80(pppppuVar2);
        _objc_release(puVar3);
        uVar10 = *(undefined8 *)((long)pppppuVar2 + (long)_DAT_112745b5c);
        puVar3 = PTR_PTR_1126c9460;
        func_0x00010bf11320(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = *(undefined ***)((long)pppppuVar2 + (long)_DAT_112745b8c);
        func_0x00010bf60c20();
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = unaff_x25;
        func_0x00010c0f0be0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb7a0(uVar10);
        _objc_release(ppuVar17);
        _objc_release(unaff_x25);
        _objc_release(puVar3);
        goto LAB_10632bcc0;
      }
      puVar3 = PTR_PTR_1126b2ea8;
      func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar11 = pppppuVar12;
      func_0x00010c0720c0();
      if ((int)pppppuVar11 == 0) {
        puVar4 = PTR_PTR_1126b2ea8;
        func_0x00010c235940(PTR_PTR_1126b2ea8);
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = (undefined **)pppppuVar12;
        func_0x00010c0720c0();
        _objc_release(puVar4);
        _objc_release(puVar3);
        if ((int)unaff_x25 == 0) {
          puVar3 = PTR_PTR_1126b2638;
          func_0x00010c22b260(PTR_PTR_1126b2638);
          _objc_retainAutoreleasedReturnValue();
          pppppuVar11 = pppppuVar12;
          func_0x00010c0720c0();
          _objc_release(puVar3);
          if ((int)pppppuVar11 == 0) {
            puVar3 = PTR_PTR_1126b2638;
            func_0x00010bef85c0(PTR_PTR_1126b2638);
            _objc_retainAutoreleasedReturnValue();
            pppppuVar11 = pppppuVar12;
            func_0x00010c0720c0();
            _objc_release(puVar3);
            if ((int)pppppuVar11 == 0) {
              puVar3 = PTR_PTR_1126b2638;
              func_0x00010c285da0(PTR_PTR_1126b2638);
              _objc_retainAutoreleasedReturnValue();
              pppppuVar11 = pppppuVar12;
              func_0x00010c0720c0();
              _objc_release(puVar3);
              if ((int)pppppuVar11 == 0) {
                puVar3 = PTR_PTR_1126b2638;
                func_0x00010c113c60(PTR_PTR_1126b2638);
                _objc_retainAutoreleasedReturnValue();
                pppppuVar15 = pppppuVar12;
                func_0x00010c0720c0();
                _objc_release(puVar3);
                if ((int)pppppuVar15 != 0) {
                  puVar3 = PTR_PTR_1126b6008;
                  func_0x00010c113c40(PTR_PTR_1126b6008);
                  _objc_retainAutoreleasedReturnValue();
                  pppppuVar11 = in_x4;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar3);
                  param_1 = 0.0;
                  _objc_retain(pppppuVar11);
                  pppppuVar6 = pppppuVar11;
                  func_0x00010bf52a60();
                  lVar16 = lRam0000000000000000;
                  do {
                    pppppuVar15 = pppppuVar11;
                    if (pppppuVar6 == (undefined8 *****)0x0) goto LAB_10632b844;
                    pppppuVar15 = (undefined8 *****)0x0;
                    do {
                      if (lRam0000000000000000 != lVar16) {
                        _objc_enumerationMutation(pppppuVar11);
                      }
                      unaff_x25 = *(undefined ***)((long)pppppuVar15 * 8);
                      ppuVar17 = (undefined **)pppppuVar2;
                      func_0x00010c0eb6a0();
                      _objc_retainAutoreleasedReturnValue();
                      pppppuVar7 = (undefined8 *****)ppuVar17;
                      func_0x00010c152980();
                      _objc_retainAutoreleasedReturnValue();
                      pppppuVar8 = pppppuVar7;
                      func_0x00010c0f36c0();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1374a0();
                      _objc_release(pppppuVar8);
                      _objc_release(pppppuVar7);
                      _objc_release(ppuVar17);
                      pppppuVar15 = (undefined8 *****)((long)pppppuVar15 + 1);
                    } while (pppppuVar6 != pppppuVar15);
                    pppppuVar6 = pppppuVar11;
                    func_0x00010bf52a60();
                  } while( true );
                }
                puVar3 = PTR_PTR_1126b2638;
                func_0x00010c29a1a0(PTR_PTR_1126b2638);
                _objc_retainAutoreleasedReturnValue();
                pppppuVar15 = pppppuVar12;
                func_0x00010c0720c0();
                _objc_release(puVar3);
                if ((int)pppppuVar15 != 0) {
                  if ((*(byte *)((long)pppppuVar2 + (long)_DAT_112745c4c) & 1) != 0)
                  goto LAB_10632b5d8;
                  func_0x00010bdf6e80(pppppuVar2);
                  goto LAB_10632b5d8;
                }
                puVar3 = PTR_PTR_1126b2638;
                func_0x00010c08ea60(PTR_PTR_1126b2638);
                _objc_retainAutoreleasedReturnValue();
                pppppuVar15 = pppppuVar12;
                func_0x00010c0720c0();
                _objc_release(puVar3);
                if ((int)pppppuVar15 != 0) {
                  pppppuVar15 = pppppuVar2;
                  func_0x00010c0eb6a0(pppppuVar2);
                  _objc_retainAutoreleasedReturnValue();
                  pppppuVar11 = pppppuVar15;
                  func_0x00010c152980();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c138c60();
                  _objc_release(pppppuVar11);
                  _objc_release(pppppuVar15);
                  func_0x00010c138c60(*(undefined8 *)((long)pppppuVar2 + (long)_DAT_112745c68));
                  goto LAB_10632b5d8;
                }
                puVar3 = PTR_PTR_1126b2638;
                func_0x00010c08ea40(PTR_PTR_1126b2638);
                _objc_retainAutoreleasedReturnValue();
                pppppuVar15 = pppppuVar12;
                func_0x00010c0720c0();
                _objc_release(puVar3);
                if ((int)pppppuVar15 == 0) {
                  unaff_x25 = &PTR_PTR_1126b2000;
                  puVar3 = PTR_PTR_1126b2330;
                  func_0x00010c0e9c40(PTR_PTR_1126b2330);
                  _objc_retainAutoreleasedReturnValue();
                  pppppuVar15 = pppppuVar12;
                  func_0x00010c0720c0();
                  _objc_release(puVar3);
                  if ((int)pppppuVar15 == 0) goto LAB_10632c2cc;
                  func_0x00010bed3400(pppppuVar2);
                  func_0x00010c1cbec0(pppppuVar2);
                  goto LAB_10632b5d8;
                }
                func_0x00010bdf6e60();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf7e940();
                pppppuVar15 = pppppuVar2;
              }
              else {
                puVar3 = PTR_PTR_1126b6008;
                func_0x00010bfb2d80(PTR_PTR_1126b6008);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e00e0(in_x4);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar3);
                func_0x00010bed8280(pppppuVar2);
              }
            }
            else {
              puVar3 = PTR_PTR_1126b6008;
              func_0x00010bfb2d80(PTR_PTR_1126b6008);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0e00e0(in_x4);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar3);
              func_0x00010bdc6d00(pppppuVar2);
            }
          }
          else {
            puVar3 = PTR_PTR_1126b6008;
            func_0x00010c22c4e0(PTR_PTR_1126b6008);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0(in_x4);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            func_0x00010beb1fa0(pppppuVar2);
          }
          goto LAB_10632b5d4;
        }
      }
      else {
        _objc_release(puVar3);
      }
      pppppuVar11 = pppppuVar2;
      func_0x00010c0eb6a0(pppppuVar2);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar6 = pppppuVar11;
      func_0x00010c152980();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c256740();
      _objc_release(pppppuVar6);
      _objc_release(pppppuVar11);
      func_0x00010bf2e980(*(undefined8 *)((long)pppppuVar2 + (long)_DAT_112745ba0));
      ppuVar17 = &PTR_PTR_1126b2000;
      puVar3 = PTR_PTR_1126b2e48;
      func_0x00010c09ef60(PTR_PTR_1126b2e48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(in_x4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      func_0x00010bdc1060(pppppuVar15);
      puVar3 = PTR_PTR_1126b2e48;
      dVar19 = param_1;
      func_0x00010c09f960(PTR_PTR_1126b2e48);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar11 = in_x4;
      func_0x00010c0e00e0(in_x4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar20 = dVar19;
      _objc_release(pppppuVar11);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126b2e48;
      func_0x00010c09f9a0(PTR_PTR_1126b2e48);
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = (undefined **)in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(unaff_x25);
      _objc_release(puVar3);
      pppppuVar11 = (undefined8 *****)PTR_PTR_1126c98a0;
      func_0x00010c068a00(param_1,param_2,dVar19,dVar20,PTR_PTR_1126c98a0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b8f80(pppppuVar2);
      goto LAB_10632be8c;
    }
    pppppuVar15 = pppppuVar2;
    func_0x00010bf5f7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar13;
    func_0x00010be36bc0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = (undefined **)pppppuVar15;
    func_0x00010c0720c0();
    _objc_release(uVar10);
    _objc_release(pppppuVar15);
    if ((int)unaff_x25 == 0) goto LAB_10632b5d8;
    goto LAB_10632b5b4;
  }
  unaff_x25 = &PTR_PTR_1126b6000;
  puVar3 = PTR_PTR_1126b6008;
  func_0x00010c09f100(PTR_PTR_1126b6008);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(in_x4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1060();
  dVar19 = param_1;
  dVar21 = param_2;
  _objc_release(pppppuVar15);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b6008;
  func_0x00010c09f120(PTR_PTR_1126b6008);
  _objc_retainAutoreleasedReturnValue();
  pppppuVar15 = in_x4;
  func_0x00010c0e00e0(in_x4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1060();
  dVar20 = dVar19;
  _objc_release(pppppuVar15);
  _objc_release(puVar3);
  pppppuVar15 = pppppuVar2;
  func_0x00010c29bf00(pppppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar23 = 1.0;
  if (dVar20 <= 0.0) {
    dVar22 = 1.0;
LAB_10632bb28:
    _objc_release(pppppuVar15);
  }
  else {
    pppppuVar11 = pppppuVar2;
    func_0x00010c29bf00(pppppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    dVar18 = dVar20;
    _objc_release(pppppuVar11);
    _objc_release(pppppuVar15);
    dVar22 = 1.0;
    if (0.0 < dVar20) {
      pppppuVar15 = pppppuVar2;
      func_0x00010c29bf00(pppppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      dVar22 = dVar19 / dVar18;
      _objc_release(pppppuVar15);
      pppppuVar15 = pppppuVar2;
      func_0x00010c29bf00(pppppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      dVar23 = dVar21 / dVar18;
      goto LAB_10632bb28;
    }
  }
  pppppuVar15 = (undefined8 *****)PTR_PTR_1126c98a0;
  func_0x00010c068a00(param_1,param_2,dVar22,dVar23,PTR_PTR_1126c98a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5f20(pppppuVar2);
LAB_10632b5d4:
  do {
    _objc_release(pppppuVar15);
LAB_10632b5d8:
    while( true ) {
      while( true ) {
        _objc_release(in_x4);
        _objc_release(uVar13);
        _objc_release(pppppuVar12);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
          return;
        }
        ___stack_chk_fail();
LAB_10632c2cc:
        puVar3 = PTR_PTR_1126c9460;
        func_0x00010c27c060(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        pppppuVar15 = pppppuVar12;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        if ((int)pppppuVar15 == 0) break;
        puVar3 = PTR_PTR_1126b6008;
        func_0x00010c27c280(PTR_PTR_1126b6008);
        _objc_retainAutoreleasedReturnValue();
        pppppuVar15 = in_x4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = (undefined **)pppppuVar15;
        func_0x00010bf1f3c0();
        _objc_release(pppppuVar15);
        _objc_release(puVar3);
        if ((int)unaff_x25 != 0) {
          pppppuVar15 = pppppuVar2;
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          pppppuVar11 = pppppuVar15;
          func_0x00010c0d6c60();
          if (pppppuVar11 == (undefined8 *****)0x1) {
            func_0x00010bf4e680();
            _objc_release(pppppuVar15);
          }
          else {
            _objc_release(pppppuVar15);
          }
          func_0x00010beda3e0(pppppuVar2);
        }
        func_0x00010c0d5ee0(*(undefined8 *)((long)pppppuVar2 + (long)_DAT_112745ba0));
      }
      puVar3 = PTR_PTR_1126c9460;
      func_0x00010c27c080(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar15 = pppppuVar12;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      if ((int)pppppuVar15 == 0) break;
      puVar3 = PTR_PTR_1126b6008;
      func_0x00010c27c320(PTR_PTR_1126b6008);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar15 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = (undefined **)pppppuVar15;
      func_0x00010bf1f3c0();
      _objc_release(pppppuVar15);
      _objc_release(puVar3);
      if ((int)unaff_x25 != 0) {
        puVar3 = PTR_PTR_1126c98a0;
        func_0x00010c0689a0(PTR_PTR_1126c98a0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b8f80(pppppuVar2);
        _objc_release(puVar3);
      }
      func_0x00010c0d60a0(*(undefined8 *)((long)pppppuVar2 + (long)_DAT_112745ba0));
    }
    puVar3 = PTR_PTR_1126c9460;
    func_0x00010c2a5c80(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar15 = pppppuVar12;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)pppppuVar15 != 0) {
      puVar3 = PTR_PTR_1126b2e48;
      func_0x00010c2709c0(PTR_PTR_1126b2e48);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar15 = in_x4;
      func_0x00010c0e00e0(in_x4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      *(double *)((long)pppppuVar2 + (long)_DAT_112745c6c) = param_1;
      _objc_release(pppppuVar15);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126c9a28;
      func_0x00010bf6ed60(PTR_PTR_1126c9a28);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar11 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126c9b98;
      _objc_opt_class(PTR_PTR_1126c9b98);
      pppppuVar6 = pppppuVar11;
      _objc_opt_isKindOfClass(pppppuVar11,puVar3);
      pppppuVar15 = pppppuVar11;
      if (((ulong)pppppuVar6 & 1) == 0) {
        pppppuVar15 = (undefined8 *****)0x0;
      }
      _objc_retain(pppppuVar15);
      _objc_release(pppppuVar11);
      func_0x00010bed3420(pppppuVar2);
      goto LAB_10632b5d4;
    }
    puVar3 = PTR_PTR_1126c7da8;
    func_0x00010c257e40(PTR_PTR_1126c7da8);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar15 = pppppuVar12;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)pppppuVar15 != 0) {
      puVar3 = PTR_PTR_1126b6008;
      func_0x00010c27c280(PTR_PTR_1126b6008);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar15 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = (undefined **)pppppuVar15;
      func_0x00010bf1f3c0();
      _objc_release(pppppuVar15);
      _objc_release(puVar3);
      if ((int)unaff_x25 != 0) {
        pppppuVar15 = pppppuVar2;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        pppppuVar11 = pppppuVar15;
        func_0x00010c0d6c60();
        if (pppppuVar11 == (undefined8 *****)0x1) {
          iVar1 = (int)*(undefined8 *)((long)pppppuVar2 + (long)_DAT_112745b68);
          func_0x00010bf4e680();
          _objc_release(pppppuVar15);
          if (iVar1 != 0) {
            puVar3 = PTR_PTR_1126c98a0;
            func_0x00010c0689a0(PTR_PTR_1126c98a0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1b8f80(pppppuVar2);
            _objc_release(puVar3);
            goto LAB_10632c714;
          }
        }
        else {
          _objc_release(pppppuVar15);
        }
        func_0x00010beda3e0(pppppuVar2);
      }
LAB_10632c714:
      uVar10 = *(undefined8 *)((long)pppppuVar2 + (long)_DAT_112745b8c);
      func_0x00010bf60c20(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be6f9a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      func_0x00010c29ca00(pppppuVar2);
      pppppuVar15 = pppppuVar2;
      goto LAB_10632b5d4;
    }
    ppppuVar9 = (undefined8 ****)ppuVar17[199];
    func_0x00010c1402c0(ppppuVar9);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar15 = pppppuVar12;
    func_0x00010c0720c0();
    _objc_release(ppppuVar9);
    if ((int)pppppuVar15 != 0) {
      func_0x00010be95740(pppppuVar2);
      goto LAB_10632b5d8;
    }
    ppppuVar9 = (undefined8 ****)ppuVar17[199];
    func_0x00010c0f0300(ppppuVar9);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar15 = pppppuVar12;
    func_0x00010c0720c0();
    _objc_release(ppppuVar9);
    if ((int)pppppuVar15 != 0) {
      func_0x00010c0f02c0(*(undefined8 *)((long)pppppuVar2 + (long)_DAT_112745bcc));
      goto LAB_10632b5d8;
    }
    ppppuVar9 = (undefined8 ****)ppuVar17[199];
    func_0x00010c0f5e80(ppppuVar9);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar15 = pppppuVar12;
    func_0x00010c0720c0();
    _objc_release(ppppuVar9);
    if ((int)pppppuVar15 != 0) {
      lVar16 = *(long *)((long)pppppuVar2 + (long)_DAT_112745c00);
      if (lVar16 == 0) {
        pppppuVar15 = pppppuVar2;
        _objc_opt_class();
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f6200(pppppuVar2);
      }
      else {
        pppppuVar15 = (undefined8 *****)PTR_PTR_1126c9cb0;
        func_0x00010c0693c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f6220(lVar16);
        pppppuVar2 = pppppuVar15;
      }
      goto LAB_10632b5d4;
    }
    ppppuVar9 = (undefined8 ****)ppuVar17[199];
    func_0x00010c13d5c0(ppppuVar9);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar15 = pppppuVar12;
    func_0x00010c0720c0();
    _objc_release(ppppuVar9);
    if ((int)pppppuVar15 != 0) {
      lVar16 = *(long *)((long)pppppuVar2 + (long)_DAT_112745c00);
      if (lVar16 != 0) {
        pppppuVar15 = (undefined8 *****)PTR_PTR_1126c9cb0;
        func_0x00010c0693c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c13dba0(lVar16);
        pppppuVar2 = pppppuVar15;
        goto LAB_10632b5d4;
      }
      func_0x00010be95ce0(pppppuVar2);
      goto LAB_10632b5d8;
    }
    ppppuVar9 = (undefined8 ****)ppuVar17[199];
    func_0x00010c2368e0(ppppuVar9);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar15 = pppppuVar12;
    func_0x00010c0720c0();
    _objc_release(ppppuVar9);
    if ((int)pppppuVar15 != 0) {
LAB_10632c8d0:
      func_0x00010bfe1c40(pppppuVar2);
      goto LAB_10632b5d8;
    }
    ppppuVar9 = (undefined8 ****)ppuVar17[199];
    func_0x00010bfe1c20(ppppuVar9);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar15 = pppppuVar12;
    func_0x00010c0720c0();
    _objc_release(ppppuVar9);
    if ((int)pppppuVar15 != 0) goto LAB_10632c8d0;
    ppppuVar9 = (undefined8 ****)ppuVar17[199];
    func_0x00010c2694a0(ppppuVar9);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar15 = pppppuVar12;
    func_0x00010c0720c0();
    _objc_release(ppppuVar9);
    if ((int)pppppuVar15 != 0) {
      puVar3 = PTR_PTR_1126c98a0;
      func_0x00010c0689a0(PTR_PTR_1126c98a0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b8f80(pppppuVar2);
      _objc_release(puVar3);
      uVar10 = *(undefined8 *)((long)pppppuVar2 + (long)_DAT_112745b5c);
      puVar3 = PTR_PTR_1126c9460;
      func_0x00010c269c60(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = *(undefined ***)((long)pppppuVar2 + (long)_DAT_112745b8c);
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = unaff_x25;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7a0(uVar10);
      _objc_release(ppuVar17);
      _objc_release(unaff_x25);
LAB_10632c9b0:
      _objc_release(puVar3);
LAB_10632bcc0:
      func_0x00010bdc9800(pppppuVar2);
      goto LAB_10632b5d8;
    }
    ppppuVar9 = (undefined8 ****)ppuVar17[199];
    func_0x00010c269640(ppppuVar9);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar15 = pppppuVar12;
    func_0x00010c0720c0();
    _objc_release(ppppuVar9);
    if ((int)pppppuVar15 != 0) {
      uVar10 = *(undefined8 *)((long)pppppuVar2 + (long)_DAT_112745b5c);
      puVar3 = PTR_PTR_1126c9460;
      func_0x00010c269c80(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = *(undefined ***)((long)pppppuVar2 + (long)_DAT_112745b8c);
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = unaff_x25;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7a0(uVar10);
      _objc_release(ppuVar17);
      _objc_release(unaff_x25);
LAB_10632cbe4:
      _objc_release(puVar3);
      func_0x00010be24240(pppppuVar2);
      goto LAB_10632b5d8;
    }
    puVar3 = PTR_PTR_1126c9cf0;
    func_0x00010c269500(PTR_PTR_1126c9cf0);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar15 = pppppuVar12;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)pppppuVar15 != 0) {
      puVar3 = PTR_PTR_1126c9cf8;
      func_0x00010c0735c0(PTR_PTR_1126c9cf8);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar15 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar11 = pppppuVar15;
      func_0x00010bf1f3c0();
      _objc_release(pppppuVar15);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126c98a0;
      func_0x00010c0689a0(PTR_PTR_1126c98a0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b8f80(pppppuVar2);
      _objc_release(puVar3);
      unaff_x25 = *(undefined ***)((long)pppppuVar2 + (long)_DAT_112745b5c);
      puVar3 = PTR_PTR_1126c9460;
      if ((int)pppppuVar11 == 0) {
        func_0x00010c269c80(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c269c60();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuVar17 = *(undefined ***)((long)pppppuVar2 + (long)_DAT_112745b8c);
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar15 = (undefined8 *****)ppuVar17;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7c0(unaff_x25);
      _objc_release(pppppuVar15);
      _objc_release(ppuVar17);
      if (((ulong)pppppuVar11 & 1) != 0) goto LAB_10632c9b0;
      goto LAB_10632cbe4;
    }
    puVar3 = PTR_PTR_1126c9cf0;
    func_0x00010c0ff280(PTR_PTR_1126c9cf0);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar15 = pppppuVar12;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)pppppuVar15 != 0) {
      func_0x00010be2e240(pppppuVar2);
      goto LAB_10632b5d8;
    }
    ppppuVar9 = (undefined8 ****)ppuVar17[199];
    func_0x00010c288220(ppppuVar9);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar15 = pppppuVar12;
    func_0x00010c0720c0();
    _objc_release(ppppuVar9);
    pppppuVar11 = in_x4;
    if ((int)pppppuVar15 != 0) {
      unaff_x25 = &PTR_PTR_1126b6000;
      puVar3 = PTR_PTR_1126b6008;
      func_0x00010c0ea660(PTR_PTR_1126b6008);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar15 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar3);
      if (pppppuVar15 != (undefined8 *****)0x0) break;
      goto LAB_10632b5d8;
    }
    ppppuVar9 = (undefined8 ****)unaff_x25[0x66];
    func_0x00010c283340(ppppuVar9);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar15 = pppppuVar12;
    func_0x00010c0720c0();
    _objc_release(ppppuVar9);
    if ((int)pppppuVar15 != 0) {
      lVar16 = *(long *)((long)pppppuVar2 + (long)_DAT_112745b68);
      func_0x00010c0da1c0();
      if (lVar16 == 3) {
        func_0x00010bed2680(pppppuVar2);
      }
      goto LAB_10632b5d8;
    }
    puVar3 = PTR_PTR_1126b2338;
    func_0x00010c0c4140(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar15 = pppppuVar12;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)pppppuVar15 != 0) {
      puVar3 = PTR_PTR_1126b2348;
      func_0x00010c2348a0(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar15 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = (undefined **)pppppuVar15;
      func_0x00010bf1f3c0();
      _objc_release(pppppuVar15);
      _objc_release(puVar3);
      if ((int)unaff_x25 != 0) {
        unaff_x25 = (undefined **)(long)_DAT_112745b8c;
        pppppuVar11 = *(undefined8 ******)((long)pppppuVar2 + (long)unaff_x25);
        func_0x00010bf60c20();
        _objc_retainAutoreleasedReturnValue();
        pppppuVar15 = pppppuVar11;
        func_0x00010c0d9820();
        _objc_retainAutoreleasedReturnValue();
        if (pppppuVar15 == (undefined8 *****)0x0) {
          unaff_x25 = *(undefined ***)((long)pppppuVar2 + (long)unaff_x25);
          func_0x00010bf60c20();
          _objc_retainAutoreleasedReturnValue();
          pppppuVar15 = (undefined8 *****)unaff_x25;
          func_0x00010c0d9ae0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x25);
          _objc_release(pppppuVar11);
          if (pppppuVar15 == (undefined8 *****)0x0) {
            func_0x00010bf82f40(pppppuVar2);
            goto LAB_10632b5d8;
          }
        }
        else {
          _objc_release(pppppuVar11);
        }
        func_0x00010c188040(pppppuVar2);
        goto LAB_10632b5d4;
      }
      goto LAB_10632b5d8;
    }
    ppppuVar9 = (undefined8 ****)ppuVar17[199];
    func_0x00010c13a260(ppppuVar9);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar15 = pppppuVar12;
    func_0x00010c0720c0();
    _objc_release(ppppuVar9);
    if ((int)pppppuVar15 != 0) {
      pppppuVar15 = (undefined8 *****)PTR_PTR_1126b6008;
      func_0x00010c13a2c0();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar6 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (pppppuVar6 == (undefined8 *****)0x0) goto LAB_10632b5d4;
      unaff_x25 = (undefined **)PTR_PTR_1126b6008;
      func_0x00010c13a2a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = (undefined **)in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(unaff_x25);
      _objc_release(pppppuVar6);
      _objc_release(pppppuVar15);
      if ((undefined8 *****)ppuVar17 != (undefined8 *****)0x0) {
        puVar3 = PTR_PTR_1126b6008;
        func_0x00010c13a2c0(PTR_PTR_1126b6008);
        _objc_retainAutoreleasedReturnValue();
        pppppuVar15 = in_x4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126b6008;
        func_0x00010c13a2a0(PTR_PTR_1126b6008);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        unaff_x25 = (undefined **)PTR_s_doubleValue_1125bfb10;
        pppppuVar6 = pppppuVar15;
        _objc_opt_respondsToSelector(pppppuVar15,PTR_s_doubleValue_1125bfb10);
        if ((((ulong)pppppuVar6 & 1) != 0) &&
           (pppppuVar6 = pppppuVar11, _objc_opt_respondsToSelector(pppppuVar11,unaff_x25),
           ((ulong)pppppuVar6 & 1) != 0)) {
          func_0x00010c13a3a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0(pppppuVar15);
          dVar19 = param_1;
          func_0x00010bf885a0(pppppuVar11);
          func_0x00010c1a7de0(param_1,dVar19,pppppuVar2);
          _objc_release(pppppuVar2);
        }
        goto LAB_10632be8c;
      }
      goto LAB_10632b5d8;
    }
    ppppuVar9 = (undefined8 ****)ppuVar17[199];
    func_0x00010c24eb60(ppppuVar9);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar15 = pppppuVar12;
    func_0x00010c0720c0();
    _objc_release(ppppuVar9);
    if ((int)pppppuVar15 == 0) {
      ppppuVar9 = (undefined8 ****)ppuVar17[199];
      func_0x00010bf948a0(ppppuVar9);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar15 = pppppuVar12;
      func_0x00010c0720c0();
      _objc_release(ppppuVar9);
      if ((int)pppppuVar15 == 0) goto LAB_10632b5d8;
      pppppuVar15 = pppppuVar2;
      func_0x00010bf5f7e0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar13;
      func_0x00010be36bc0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = (undefined **)pppppuVar15;
      func_0x00010c0720c0();
      _objc_release(uVar10);
      _objc_release(pppppuVar15);
      if ((int)unaff_x25 == 0) goto LAB_10632b5d8;
      func_0x00010bdf6e60();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      pppppuVar15 = pppppuVar2;
      func_0x00010bf5f7e0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar13;
      func_0x00010be36bc0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = (undefined **)pppppuVar15;
      func_0x00010c0720c0();
      _objc_release(uVar10);
      _objc_release(pppppuVar15);
      if ((int)unaff_x25 == 0) goto LAB_10632b5d8;
      func_0x00010bdf6e60();
      _objc_retainAutoreleasedReturnValue();
    }
    pppppuVar11 = (undefined8 *****)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e940(pppppuVar2);
    pppppuVar15 = pppppuVar2;
LAB_10632b844:
    _objc_release(pppppuVar11);
    pppppuVar2 = pppppuVar15;
  } while( true );
  pppppuVar15 = (undefined8 *****)PTR_PTR_1126b6008;
  func_0x00010c0ea660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(in_x4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2827c0();
  func_0x00010beda3e0(pppppuVar2);
LAB_10632be8c:
  _objc_release(pppppuVar11);
  goto LAB_10632b5d4;
}



/* Entry: 10632b464; end: 10632d12b; -[SCOperaViewController operaViewDidSendEvent:page:params:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632b464(double param_1,double param_2,undefined **param_3,undefined8 param_4,
                  undefined **param_5,undefined8 param_6,undefined **param_7)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined **unaff_x25;
  undefined **ppuVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  ppuVar13 = &PTR_PTR_1126b2000;
  puVar7 = PTR_PTR_1126b2638;
  func_0x00010c152660(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = param_5;
  func_0x00010c0720c0();
  _objc_release(puVar7);
  ppuVar11 = param_7;
  if ((int)ppuVar9 != 0) {
    ppuVar11 = param_3;
    func_0x00010bf5f7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_6;
    func_0x00010be36bc0(param_6);
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = ppuVar11;
    func_0x00010c0720c0();
    _objc_release(uVar8);
    _objc_release(ppuVar11);
    if ((int)unaff_x25 == 0) goto LAB_10632b5d8;
    ppuVar11 = (undefined **)PTR_PTR_1126c98a0;
    func_0x00010c0689a0(PTR_PTR_1126c98a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d60e0(param_3);
    goto LAB_10632b5d4;
  }
  puVar7 = PTR_PTR_1126b2638;
  func_0x00010c269be0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = param_5;
  func_0x00010c0720c0();
  _objc_release(puVar7);
  if ((int)ppuVar9 != 0) {
LAB_10632b5b4:
    ppuVar11 = (undefined **)PTR_PTR_1126c98a0;
    func_0x00010c0689a0(PTR_PTR_1126c98a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8f80(param_3);
    goto LAB_10632b5d4;
  }
  puVar7 = PTR_PTR_1126b2638;
  func_0x00010c1526a0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = param_5;
  func_0x00010c0720c0();
  _objc_release(puVar7);
  if ((int)ppuVar9 != 0) {
    ppuVar11 = param_3;
    func_0x00010bf5f7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_6;
    func_0x00010be36bc0(param_6);
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = ppuVar11;
    func_0x00010c0720c0();
    _objc_release(uVar8);
    _objc_release(ppuVar11);
    if ((int)unaff_x25 == 0) goto LAB_10632b5d8;
    ppuVar11 = (undefined **)PTR_PTR_1126c98a0;
    func_0x00010c0689a0(PTR_PTR_1126c98a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d6160(param_3);
    goto LAB_10632b5d4;
  }
  puVar7 = PTR_PTR_1126b2638;
  func_0x00010c152620(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = param_5;
  func_0x00010c0720c0();
  _objc_release(puVar7);
  if ((int)ppuVar9 != 0) {
    ppuVar11 = (undefined **)PTR_PTR_1126c98a0;
    func_0x00010c0689a0(PTR_PTR_1126c98a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d6060(param_3);
    goto LAB_10632b5d4;
  }
  puVar7 = PTR_PTR_1126b2638;
  func_0x00010c2614e0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = param_5;
  func_0x00010c0720c0();
  _objc_release(puVar7);
  if ((int)ppuVar9 != 0) {
    func_0x00010c0eb6a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = param_3;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = (undefined **)PTR_PTR_1126b6008;
    func_0x00010c261520(PTR_PTR_1126b6008);
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = param_7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c261500(ppuVar9);
    _objc_release(unaff_x25);
LAB_10632b7e0:
    _objc_release(ppuVar11);
    ppuVar11 = param_3;
    goto LAB_10632b844;
  }
  puVar7 = PTR_PTR_1126b2638;
  func_0x00010c2614c0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = param_5;
  func_0x00010c0720c0();
  _objc_release(puVar7);
  if ((int)ppuVar9 != 0) {
    func_0x00010c0eb6a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = param_3;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2614c0();
    ppuVar11 = param_3;
    goto LAB_10632b844;
  }
  puVar7 = PTR_PTR_1126b2638;
  func_0x00010c261540(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = param_5;
  func_0x00010c0720c0();
  _objc_release(puVar7);
  if ((int)ppuVar9 != 0) {
    uVar8 = param_6;
    func_0x00010be36bc0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f13c0(param_3);
    _objc_release(uVar8);
    func_0x00010c0eb6a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = param_3;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = (undefined **)PTR_PTR_1126b6008;
    func_0x00010c261540();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = param_7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c261560(ppuVar9);
    _objc_release(ppuVar13);
    unaff_x25 = ppuVar11;
    goto LAB_10632b7e0;
  }
  puVar7 = PTR_PTR_1126b2638;
  func_0x00010bf0a200(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = param_5;
  func_0x00010c0720c0();
  _objc_release(puVar7);
  if ((int)ppuVar9 == 0) {
    puVar7 = PTR_PTR_1126b2638;
    func_0x00010c2a6840(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    if ((int)ppuVar9 == 0) {
      puVar7 = PTR_PTR_1126b2638;
      func_0x00010bf112e0(PTR_PTR_1126b2638);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = param_5;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      if ((int)ppuVar9 != 0) {
        ppuVar11 = param_3;
        func_0x00010bf5f7e0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_6;
        func_0x00010be36bc0(param_6);
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = ppuVar11;
        func_0x00010c0720c0();
        _objc_release(uVar8);
        _objc_release(ppuVar11);
        if ((int)unaff_x25 == 0) goto LAB_10632b5d8;
        if ((*(byte *)((long)param_3 + (long)_DAT_112745c48) & 1) != 0) goto LAB_10632b5d8;
        uVar2 = *(ulong *)((long)param_3 + (long)_DAT_112745b9c);
        func_0x00010c06c1a0();
        if ((uVar2 & 1) != 0) goto LAB_10632b5d8;
        puVar7 = PTR_PTR_1126c98a0;
        func_0x00010c0689a0(PTR_PTR_1126c98a0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b8f80(param_3);
        _objc_release(puVar7);
        uVar8 = *(undefined8 *)((long)param_3 + (long)_DAT_112745b5c);
        puVar7 = PTR_PTR_1126c9460;
        func_0x00010bf11320(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = *(undefined ***)((long)param_3 + (long)_DAT_112745b8c);
        func_0x00010bf60c20();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = unaff_x25;
        func_0x00010c0f0be0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb7a0(uVar8);
        _objc_release(ppuVar13);
        _objc_release(unaff_x25);
        _objc_release(puVar7);
        goto LAB_10632bcc0;
      }
      puVar7 = PTR_PTR_1126b2ea8;
      func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = param_5;
      func_0x00010c0720c0();
      if ((int)ppuVar9 == 0) {
        puVar3 = PTR_PTR_1126b2ea8;
        func_0x00010c235940(PTR_PTR_1126b2ea8);
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = param_5;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        _objc_release(puVar7);
        if ((int)unaff_x25 == 0) {
          puVar7 = PTR_PTR_1126b2638;
          func_0x00010c22b260(PTR_PTR_1126b2638);
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = param_5;
          func_0x00010c0720c0();
          _objc_release(puVar7);
          if ((int)ppuVar9 == 0) {
            puVar7 = PTR_PTR_1126b2638;
            func_0x00010bef85c0(PTR_PTR_1126b2638);
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = param_5;
            func_0x00010c0720c0();
            _objc_release(puVar7);
            if ((int)ppuVar9 == 0) {
              puVar7 = PTR_PTR_1126b2638;
              func_0x00010c285da0(PTR_PTR_1126b2638);
              _objc_retainAutoreleasedReturnValue();
              ppuVar9 = param_5;
              func_0x00010c0720c0();
              _objc_release(puVar7);
              if ((int)ppuVar9 == 0) {
                puVar7 = PTR_PTR_1126b2638;
                func_0x00010c113c60(PTR_PTR_1126b2638);
                _objc_retainAutoreleasedReturnValue();
                ppuVar11 = param_5;
                func_0x00010c0720c0();
                _objc_release(puVar7);
                if ((int)ppuVar11 != 0) {
                  puVar7 = PTR_PTR_1126b6008;
                  func_0x00010c113c40(PTR_PTR_1126b6008);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar9 = param_7;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar7);
                  param_1 = 0.0;
                  _objc_retain(ppuVar9);
                  ppuVar4 = ppuVar9;
                  func_0x00010bf52a60();
                  lVar12 = lRam0000000000000000;
                  do {
                    ppuVar11 = ppuVar9;
                    if (ppuVar4 == (undefined **)0x0) goto LAB_10632b844;
                    ppuVar11 = (undefined **)0x0;
                    do {
                      if (lRam0000000000000000 != lVar12) {
                        _objc_enumerationMutation(ppuVar9);
                      }
                      unaff_x25 = *(undefined ***)((long)ppuVar11 * 8);
                      ppuVar13 = param_3;
                      func_0x00010c0eb6a0();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar5 = ppuVar13;
                      func_0x00010c152980();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar6 = ppuVar5;
                      func_0x00010c0f36c0();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1374a0();
                      _objc_release(ppuVar6);
                      _objc_release(ppuVar5);
                      _objc_release(ppuVar13);
                      ppuVar11 = (undefined **)((long)ppuVar11 + 1);
                    } while (ppuVar4 != ppuVar11);
                    ppuVar4 = ppuVar9;
                    func_0x00010bf52a60();
                  } while( true );
                }
                puVar7 = PTR_PTR_1126b2638;
                func_0x00010c29a1a0(PTR_PTR_1126b2638);
                _objc_retainAutoreleasedReturnValue();
                ppuVar11 = param_5;
                func_0x00010c0720c0();
                _objc_release(puVar7);
                if ((int)ppuVar11 != 0) {
                  if ((*(byte *)((long)param_3 + (long)_DAT_112745c4c) & 1) != 0)
                  goto LAB_10632b5d8;
                  func_0x00010bdf6e80(param_3);
                  goto LAB_10632b5d8;
                }
                puVar7 = PTR_PTR_1126b2638;
                func_0x00010c08ea60(PTR_PTR_1126b2638);
                _objc_retainAutoreleasedReturnValue();
                ppuVar11 = param_5;
                func_0x00010c0720c0();
                _objc_release(puVar7);
                if ((int)ppuVar11 != 0) {
                  ppuVar11 = param_3;
                  func_0x00010c0eb6a0(param_3);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar9 = ppuVar11;
                  func_0x00010c152980();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c138c60();
                  _objc_release(ppuVar9);
                  _objc_release(ppuVar11);
                  func_0x00010c138c60(*(undefined8 *)((long)param_3 + (long)_DAT_112745c68));
                  goto LAB_10632b5d8;
                }
                puVar7 = PTR_PTR_1126b2638;
                func_0x00010c08ea40(PTR_PTR_1126b2638);
                _objc_retainAutoreleasedReturnValue();
                ppuVar11 = param_5;
                func_0x00010c0720c0();
                _objc_release(puVar7);
                if ((int)ppuVar11 == 0) {
                  unaff_x25 = &PTR_PTR_1126b2000;
                  puVar7 = PTR_PTR_1126b2330;
                  func_0x00010c0e9c40(PTR_PTR_1126b2330);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar11 = param_5;
                  func_0x00010c0720c0();
                  _objc_release(puVar7);
                  if ((int)ppuVar11 == 0) goto LAB_10632c2cc;
                  func_0x00010bed3400(param_3);
                  func_0x00010c1cbec0(param_3);
                  goto LAB_10632b5d8;
                }
                func_0x00010bdf6e60();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf7e940();
                ppuVar11 = param_3;
              }
              else {
                puVar7 = PTR_PTR_1126b6008;
                func_0x00010bfb2d80(PTR_PTR_1126b6008);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e00e0(param_7);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar7);
                func_0x00010bed8280(param_3);
              }
            }
            else {
              puVar7 = PTR_PTR_1126b6008;
              func_0x00010bfb2d80(PTR_PTR_1126b6008);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0e00e0(param_7);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar7);
              func_0x00010bdc6d00(param_3);
            }
          }
          else {
            puVar7 = PTR_PTR_1126b6008;
            func_0x00010c22c4e0(PTR_PTR_1126b6008);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0(param_7);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            func_0x00010beb1fa0(param_3);
          }
          goto LAB_10632b5d4;
        }
      }
      else {
        _objc_release(puVar7);
      }
      ppuVar13 = param_3;
      func_0x00010c0eb6a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar13;
      func_0x00010c152980();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c256740();
      _objc_release(ppuVar9);
      _objc_release(ppuVar13);
      func_0x00010bf2e980(*(undefined8 *)((long)param_3 + (long)_DAT_112745ba0));
      ppuVar13 = &PTR_PTR_1126b2000;
      puVar7 = PTR_PTR_1126b2e48;
      func_0x00010c09ef60(PTR_PTR_1126b2e48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(param_7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      func_0x00010bdc1060(ppuVar11);
      puVar7 = PTR_PTR_1126b2e48;
      dVar15 = param_1;
      func_0x00010c09f960(PTR_PTR_1126b2e48);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = param_7;
      func_0x00010c0e00e0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar16 = dVar15;
      _objc_release(ppuVar9);
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126b2e48;
      func_0x00010c09f9a0(PTR_PTR_1126b2e48);
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = param_7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(unaff_x25);
      _objc_release(puVar7);
      ppuVar9 = (undefined **)PTR_PTR_1126c98a0;
      func_0x00010c068a00(param_1,param_2,dVar15,dVar16,PTR_PTR_1126c98a0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b8f80(param_3);
      goto LAB_10632be8c;
    }
    ppuVar11 = param_3;
    func_0x00010bf5f7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_6;
    func_0x00010be36bc0(param_6);
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = ppuVar11;
    func_0x00010c0720c0();
    _objc_release(uVar8);
    _objc_release(ppuVar11);
    if ((int)unaff_x25 == 0) goto LAB_10632b5d8;
    goto LAB_10632b5b4;
  }
  unaff_x25 = &PTR_PTR_1126b6000;
  puVar7 = PTR_PTR_1126b6008;
  func_0x00010c09f100(PTR_PTR_1126b6008);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1060();
  dVar15 = param_1;
  dVar17 = param_2;
  _objc_release(ppuVar11);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126b6008;
  func_0x00010c09f120(PTR_PTR_1126b6008);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = param_7;
  func_0x00010c0e00e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1060();
  dVar16 = dVar15;
  _objc_release(ppuVar11);
  _objc_release(puVar7);
  ppuVar11 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar19 = 1.0;
  if (dVar16 <= 0.0) {
    dVar18 = 1.0;
LAB_10632bb28:
    _objc_release(ppuVar11);
  }
  else {
    ppuVar9 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    dVar14 = dVar16;
    _objc_release(ppuVar9);
    _objc_release(ppuVar11);
    dVar18 = 1.0;
    if (0.0 < dVar16) {
      ppuVar11 = param_3;
      func_0x00010c29bf00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      dVar18 = dVar15 / dVar14;
      _objc_release(ppuVar11);
      ppuVar11 = param_3;
      func_0x00010c29bf00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      dVar19 = dVar17 / dVar14;
      goto LAB_10632bb28;
    }
  }
  ppuVar11 = (undefined **)PTR_PTR_1126c98a0;
  func_0x00010c068a00(param_1,param_2,dVar18,dVar19,PTR_PTR_1126c98a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5f20(param_3);
LAB_10632b5d4:
  do {
    _objc_release(ppuVar11);
LAB_10632b5d8:
    while( true ) {
      while( true ) {
        _objc_release(param_7);
        _objc_release(param_6);
        _objc_release(param_5);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
          return;
        }
        ___stack_chk_fail();
LAB_10632c2cc:
        puVar7 = PTR_PTR_1126c9460;
        func_0x00010c27c060(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = param_5;
        func_0x00010c0720c0();
        _objc_release(puVar7);
        if ((int)ppuVar11 == 0) break;
        puVar7 = PTR_PTR_1126b6008;
        func_0x00010c27c280(PTR_PTR_1126b6008);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = param_7;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = ppuVar11;
        func_0x00010bf1f3c0();
        _objc_release(ppuVar11);
        _objc_release(puVar7);
        if ((int)unaff_x25 != 0) {
          ppuVar11 = param_3;
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar11;
          func_0x00010c0d6c60();
          if (ppuVar9 == (undefined **)0x1) {
            func_0x00010bf4e680();
            _objc_release(ppuVar11);
          }
          else {
            _objc_release(ppuVar11);
          }
          func_0x00010beda3e0(param_3);
        }
        func_0x00010c0d5ee0(*(undefined8 *)((long)param_3 + (long)_DAT_112745ba0));
      }
      puVar7 = PTR_PTR_1126c9460;
      func_0x00010c27c080(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = param_5;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      if ((int)ppuVar11 == 0) break;
      puVar7 = PTR_PTR_1126b6008;
      func_0x00010c27c320(PTR_PTR_1126b6008);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = param_7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = ppuVar11;
      func_0x00010bf1f3c0();
      _objc_release(ppuVar11);
      _objc_release(puVar7);
      if ((int)unaff_x25 != 0) {
        puVar7 = PTR_PTR_1126c98a0;
        func_0x00010c0689a0(PTR_PTR_1126c98a0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b8f80(param_3);
        _objc_release(puVar7);
      }
      func_0x00010c0d60a0(*(undefined8 *)((long)param_3 + (long)_DAT_112745ba0));
    }
    puVar7 = PTR_PTR_1126c9460;
    func_0x00010c2a5c80(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    if ((int)ppuVar11 != 0) {
      puVar7 = PTR_PTR_1126b2e48;
      func_0x00010c2709c0(PTR_PTR_1126b2e48);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = param_7;
      func_0x00010c0e00e0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      *(double *)((long)param_3 + (long)_DAT_112745c6c) = param_1;
      _objc_release(ppuVar11);
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126c9a28;
      func_0x00010bf6ed60(PTR_PTR_1126c9a28);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = param_7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126c9b98;
      _objc_opt_class(PTR_PTR_1126c9b98);
      ppuVar4 = ppuVar9;
      _objc_opt_isKindOfClass(ppuVar9,puVar7);
      ppuVar11 = ppuVar9;
      if (((ulong)ppuVar4 & 1) == 0) {
        ppuVar11 = (undefined **)0x0;
      }
      _objc_retain(ppuVar11);
      _objc_release(ppuVar9);
      func_0x00010bed3420(param_3);
      goto LAB_10632b5d4;
    }
    puVar7 = PTR_PTR_1126c7da8;
    func_0x00010c257e40(PTR_PTR_1126c7da8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    if ((int)ppuVar11 != 0) {
      puVar7 = PTR_PTR_1126b6008;
      func_0x00010c27c280(PTR_PTR_1126b6008);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = param_7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = ppuVar11;
      func_0x00010bf1f3c0();
      _objc_release(ppuVar11);
      _objc_release(puVar7);
      if ((int)unaff_x25 != 0) {
        ppuVar11 = param_3;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar11;
        func_0x00010c0d6c60();
        if (ppuVar9 == (undefined **)0x1) {
          iVar1 = (int)*(undefined8 *)((long)param_3 + (long)_DAT_112745b68);
          func_0x00010bf4e680();
          _objc_release(ppuVar11);
          if (iVar1 != 0) {
            puVar7 = PTR_PTR_1126c98a0;
            func_0x00010c0689a0(PTR_PTR_1126c98a0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1b8f80(param_3);
            _objc_release(puVar7);
            goto LAB_10632c714;
          }
        }
        else {
          _objc_release(ppuVar11);
        }
        func_0x00010beda3e0(param_3);
      }
LAB_10632c714:
      uVar8 = *(undefined8 *)((long)param_3 + (long)_DAT_112745b8c);
      func_0x00010bf60c20(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be6f9a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      func_0x00010c29ca00(param_3);
      ppuVar11 = param_3;
      goto LAB_10632b5d4;
    }
    puVar7 = ppuVar13[199];
    func_0x00010c1402c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    if ((int)ppuVar11 != 0) {
      func_0x00010be95740(param_3);
      goto LAB_10632b5d8;
    }
    puVar7 = ppuVar13[199];
    func_0x00010c0f0300(puVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    if ((int)ppuVar11 != 0) {
      func_0x00010c0f02c0(*(undefined8 *)((long)param_3 + (long)_DAT_112745bcc));
      goto LAB_10632b5d8;
    }
    puVar7 = ppuVar13[199];
    func_0x00010c0f5e80(puVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    if ((int)ppuVar11 != 0) {
      lVar12 = *(long *)((long)param_3 + (long)_DAT_112745c00);
      if (lVar12 == 0) {
        ppuVar11 = param_3;
        _objc_opt_class();
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f6200(param_3);
      }
      else {
        ppuVar11 = (undefined **)PTR_PTR_1126c9cb0;
        func_0x00010c0693c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f6220(lVar12);
        param_3 = ppuVar11;
      }
      goto LAB_10632b5d4;
    }
    puVar7 = ppuVar13[199];
    func_0x00010c13d5c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    if ((int)ppuVar11 != 0) {
      lVar12 = *(long *)((long)param_3 + (long)_DAT_112745c00);
      if (lVar12 != 0) {
        ppuVar11 = (undefined **)PTR_PTR_1126c9cb0;
        func_0x00010c0693c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c13dba0(lVar12);
        param_3 = ppuVar11;
        goto LAB_10632b5d4;
      }
      func_0x00010be95ce0(param_3);
      goto LAB_10632b5d8;
    }
    puVar7 = ppuVar13[199];
    func_0x00010c2368e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    if ((int)ppuVar11 != 0) {
LAB_10632c8d0:
      func_0x00010bfe1c40(param_3);
      goto LAB_10632b5d8;
    }
    puVar7 = ppuVar13[199];
    func_0x00010bfe1c20(puVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    if ((int)ppuVar11 != 0) goto LAB_10632c8d0;
    puVar7 = ppuVar13[199];
    func_0x00010c2694a0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    if ((int)ppuVar11 != 0) {
      puVar7 = PTR_PTR_1126c98a0;
      func_0x00010c0689a0(PTR_PTR_1126c98a0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b8f80(param_3);
      _objc_release(puVar7);
      uVar8 = *(undefined8 *)((long)param_3 + (long)_DAT_112745b5c);
      puVar7 = PTR_PTR_1126c9460;
      func_0x00010c269c60(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = *(undefined ***)((long)param_3 + (long)_DAT_112745b8c);
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = unaff_x25;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7a0(uVar8);
      _objc_release(ppuVar13);
      _objc_release(unaff_x25);
LAB_10632c9b0:
      _objc_release(puVar7);
LAB_10632bcc0:
      func_0x00010bdc9800(param_3);
      goto LAB_10632b5d8;
    }
    puVar7 = ppuVar13[199];
    func_0x00010c269640(puVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    if ((int)ppuVar11 != 0) {
      uVar8 = *(undefined8 *)((long)param_3 + (long)_DAT_112745b5c);
      puVar7 = PTR_PTR_1126c9460;
      func_0x00010c269c80(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = *(undefined ***)((long)param_3 + (long)_DAT_112745b8c);
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = unaff_x25;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7a0(uVar8);
      _objc_release(ppuVar13);
      _objc_release(unaff_x25);
LAB_10632cbe4:
      _objc_release(puVar7);
      func_0x00010be24240(param_3);
      goto LAB_10632b5d8;
    }
    puVar7 = PTR_PTR_1126c9cf0;
    func_0x00010c269500(PTR_PTR_1126c9cf0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    if ((int)ppuVar11 != 0) {
      puVar7 = PTR_PTR_1126c9cf8;
      func_0x00010c0735c0(PTR_PTR_1126c9cf8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = param_7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar11;
      func_0x00010bf1f3c0();
      _objc_release(ppuVar11);
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126c98a0;
      func_0x00010c0689a0(PTR_PTR_1126c98a0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b8f80(param_3);
      _objc_release(puVar7);
      unaff_x25 = *(undefined ***)((long)param_3 + (long)_DAT_112745b5c);
      puVar7 = PTR_PTR_1126c9460;
      if ((int)ppuVar9 == 0) {
        func_0x00010c269c80(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c269c60();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuVar13 = *(undefined ***)((long)param_3 + (long)_DAT_112745b8c);
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar13;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7c0(unaff_x25);
      _objc_release(ppuVar11);
      _objc_release(ppuVar13);
      if (((ulong)ppuVar9 & 1) != 0) goto LAB_10632c9b0;
      goto LAB_10632cbe4;
    }
    puVar7 = PTR_PTR_1126c9cf0;
    func_0x00010c0ff280(PTR_PTR_1126c9cf0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    if ((int)ppuVar11 != 0) {
      func_0x00010be2e240(param_3);
      goto LAB_10632b5d8;
    }
    puVar7 = ppuVar13[199];
    func_0x00010c288220(puVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    ppuVar9 = param_7;
    if ((int)ppuVar11 != 0) {
      unaff_x25 = &PTR_PTR_1126b6000;
      puVar7 = PTR_PTR_1126b6008;
      func_0x00010c0ea660(PTR_PTR_1126b6008);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = param_7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar7);
      if (ppuVar11 != (undefined **)0x0) break;
      goto LAB_10632b5d8;
    }
    puVar7 = unaff_x25[0x66];
    func_0x00010c283340(puVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    if ((int)ppuVar11 != 0) {
      lVar12 = *(long *)((long)param_3 + (long)_DAT_112745b68);
      func_0x00010c0da1c0();
      if (lVar12 == 3) {
        func_0x00010bed2680(param_3);
      }
      goto LAB_10632b5d8;
    }
    puVar7 = PTR_PTR_1126b2338;
    func_0x00010c0c4140(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    if ((int)ppuVar11 != 0) {
      puVar7 = PTR_PTR_1126b2348;
      func_0x00010c2348a0(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = param_7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = ppuVar11;
      func_0x00010bf1f3c0();
      _objc_release(ppuVar11);
      _objc_release(puVar7);
      if ((int)unaff_x25 != 0) {
        unaff_x25 = (undefined **)(long)_DAT_112745b8c;
        ppuVar9 = *(undefined ***)((long)param_3 + (long)unaff_x25);
        func_0x00010bf60c20();
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar9;
        func_0x00010c0d9820();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar11 == (undefined **)0x0) {
          unaff_x25 = *(undefined ***)((long)param_3 + (long)unaff_x25);
          func_0x00010bf60c20();
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = unaff_x25;
          func_0x00010c0d9ae0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x25);
          _objc_release(ppuVar9);
          if (ppuVar11 == (undefined **)0x0) {
            func_0x00010bf82f40(param_3);
            goto LAB_10632b5d8;
          }
        }
        else {
          _objc_release(ppuVar9);
        }
        func_0x00010c188040(param_3);
        goto LAB_10632b5d4;
      }
      goto LAB_10632b5d8;
    }
    puVar7 = ppuVar13[199];
    func_0x00010c13a260(puVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    if ((int)ppuVar11 != 0) {
      ppuVar11 = (undefined **)PTR_PTR_1126b6008;
      func_0x00010c13a2c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = param_7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar4 == (undefined **)0x0) goto LAB_10632b5d4;
      unaff_x25 = (undefined **)PTR_PTR_1126b6008;
      func_0x00010c13a2a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = param_7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(unaff_x25);
      _objc_release(ppuVar4);
      _objc_release(ppuVar11);
      if (ppuVar13 != (undefined **)0x0) {
        puVar7 = PTR_PTR_1126b6008;
        func_0x00010c13a2c0(PTR_PTR_1126b6008);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = param_7;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        puVar7 = PTR_PTR_1126b6008;
        func_0x00010c13a2a0(PTR_PTR_1126b6008);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        unaff_x25 = (undefined **)PTR_s_doubleValue_1125bfb10;
        ppuVar4 = ppuVar11;
        _objc_opt_respondsToSelector(ppuVar11,PTR_s_doubleValue_1125bfb10);
        if ((((ulong)ppuVar4 & 1) != 0) &&
           (ppuVar4 = ppuVar9, _objc_opt_respondsToSelector(ppuVar9,unaff_x25),
           ((ulong)ppuVar4 & 1) != 0)) {
          func_0x00010c13a3a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0(ppuVar11);
          dVar15 = param_1;
          func_0x00010bf885a0(ppuVar9);
          func_0x00010c1a7de0(param_1,dVar15,param_3);
          _objc_release(param_3);
        }
        goto LAB_10632be8c;
      }
      goto LAB_10632b5d8;
    }
    puVar7 = ppuVar13[199];
    func_0x00010c24eb60(puVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    if ((int)ppuVar11 == 0) {
      puVar7 = ppuVar13[199];
      func_0x00010bf948a0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = param_5;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      if ((int)ppuVar11 == 0) goto LAB_10632b5d8;
      ppuVar11 = param_3;
      func_0x00010bf5f7e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_6;
      func_0x00010be36bc0(param_6);
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = ppuVar11;
      func_0x00010c0720c0();
      _objc_release(uVar8);
      _objc_release(ppuVar11);
      if ((int)unaff_x25 == 0) goto LAB_10632b5d8;
      func_0x00010bdf6e60();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar11 = param_3;
      func_0x00010bf5f7e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_6;
      func_0x00010be36bc0(param_6);
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = ppuVar11;
      func_0x00010c0720c0();
      _objc_release(uVar8);
      _objc_release(ppuVar11);
      if ((int)unaff_x25 == 0) goto LAB_10632b5d8;
      func_0x00010bdf6e60();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e940(param_3);
    ppuVar11 = param_3;
LAB_10632b844:
    _objc_release(ppuVar9);
    param_3 = ppuVar11;
  } while( true );
  ppuVar11 = (undefined **)PTR_PTR_1126b6008;
  func_0x00010c0ea660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2827c0();
  func_0x00010beda3e0(param_3);
LAB_10632be8c:
  _objc_release(ppuVar9);
  goto LAB_10632b5d4;
}



/* Entry: 10632d12c; end: 10632d12f; -[SCOperaViewController extendedTouchHandling] */

void FUN_10632d12c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_selfOrWeakProxyToSelf_112634560);
  return;
}



/* Entry: 10632d130; end: 10632d227; -[SCOperaViewController registerGesture:blockingView:extendedInsets:defersInBoundsTouches:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632d130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar4 = (long)_DAT_112745c70;
  lVar1 = *(long *)(param_5 + lVar4);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126c9d00;
    _objc_alloc();
    lVar1 = param_5;
    func_0x00010c0eb6a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c031f00(puVar2,param_6,lVar1);
    uVar3 = *(undefined8 *)(param_5 + lVar4);
    *(undefined **)(param_5 + lVar4) = puVar2;
    _objc_release(uVar3);
    _objc_release(lVar1);
    lVar1 = *(long *)(param_5 + lVar4);
  }
  func_0x00010c126720(param_1,param_2,param_3,param_4,lVar1,param_6,param_7,param_8,param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10632d228; end: 10632d237; -[SCOperaViewController unregisterGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632d228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c282070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112745c70),PTR_s_unregisterGesture__11267e240);
  return;
}



/* Entry: 10632d238; end: 10632dbdf; -[SCOperaViewController _handlePlaybackEventForPage:params:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632d238(double param_1,undefined **param_2,undefined8 param_3,undefined **param_4,
                  undefined **param_5)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  double dVar18;
  double dVar19;
  undefined *puStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *apuStack_110 [16];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar2 = param_4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_2;
  func_0x00010bf5f7e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar2;
  ppuVar5 = ppuVar3;
  func_0x00010c0720c0();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  if ((int)ppuVar12 != 0) {
    puVar4 = PTR_PTR_1126c9cf8;
    func_0x00010c27c520(PTR_PTR_1126c9cf8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c067fc0();
    _objc_release(ppuVar5);
    _objc_release(puVar4);
    if (ppuVar6 != (undefined **)0x0) {
      puVar4 = PTR_PTR_1126c98a0;
      func_0x00010c0689a0(PTR_PTR_1126c98a0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b8f80(param_2);
      _objc_release(puVar4);
    }
    uVar13 = *(undefined8 *)((long)param_2 + (long)_DAT_112745b5c);
    ppuVar2 = (undefined **)PTR_PTR_1126c9460;
    func_0x00010c29ae40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar2;
    ppuVar6 = param_4;
    func_0x00010c0eb7c0(uVar13);
    _objc_release(ppuVar2);
    lVar14 = (long)_DAT_112745b8c;
    puVar7 = *(undefined **)((long)param_2 + lVar14);
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar7;
    func_0x00010c27bf80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = puVar4;
    func_0x00010bf529e0();
    if (puVar7 != (undefined *)0x0) {
      puVar7 = PTR_PTR_1126b2348;
      func_0x00010bf5fb40(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = param_5;
      func_0x00010c0dff20(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar19 = param_1 / 1000.0;
      _objc_release(ppuVar5);
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126b2348;
      func_0x00010c2a2680(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = param_5;
      func_0x00010c0dff20(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      _objc_release(ppuVar5);
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126b2348;
      func_0x00010bf50080(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = param_5;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126b2348;
      func_0x00010c250760(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = param_5;
      func_0x00010c0dff20(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar18 = param_1 / 1000.0;
      _objc_release(ppuVar5);
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126b2348;
      func_0x00010bf95320(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = param_5;
      func_0x00010c0dff20(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(ppuVar5);
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126c9cf8;
      func_0x00010bf9a340(PTR_PTR_1126c9cf8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      ppuVar6 = ppuVar5;
      _objc_opt_isKindOfClass(ppuVar5,puVar7);
      ppuVar2 = ppuVar5;
      if (((ulong)ppuVar6 & 1) == 0) {
        ppuVar2 = (undefined **)0x0;
      }
      _objc_retain(ppuVar2);
      _objc_release(ppuVar5);
      puVar7 = PTR_PTR_1126c9d08;
      func_0x00010befdf80(PTR_PTR_1126c9d08);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar2;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((int)ppuVar12 != 0) {
        puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(dVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        puVar16 = PTR_PTR_1126c9aa8;
        func_0x00010c22b6a0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)((long)param_2 + (long)_DAT_112745c34);
        func_0x00010c0f0be0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar8;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa540(puVar16);
        _objc_release(uVar13);
        _objc_release(uVar8);
        _objc_release(puVar16);
        _objc_release(puVar7);
      }
      ppuVar9 = (undefined **)PTR_PTR_1126c9d10;
      _objc_alloc();
      func_0x00010c067ec0(ppuVar3);
      func_0x00010c007260(dVar19,dVar18,param_1 / 1000.0);
      lStack_148 = 0;
      puStack_150 = (undefined *)0x0;
      uStack_138 = 0;
      plStack_140 = (long *)0x0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      _objc_retain(puVar4);
      ppuVar5 = &puStack_150;
      ppuVar6 = apuStack_110;
      puVar7 = puVar4;
      func_0x00010bf52a60();
      if (puVar7 != (undefined *)0x0) {
        lVar15 = *plStack_140;
        do {
          puVar16 = (undefined *)0x0;
          do {
            if (*plStack_140 != lVar15) {
              _objc_enumerationMutation(puVar4);
            }
            ppuVar17 = *(undefined ***)(lStack_148 + (long)puVar16 * 8);
            ppuVar5 = ppuVar17;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = ppuVar5;
            func_0x00010c0f0be0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar11 = ppuVar6;
            func_0x00010c118b40();
            _objc_retainAutoreleasedReturnValue();
            ppuVar10 = ppuVar11;
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar11);
            _objc_release(ppuVar6);
            _objc_release(ppuVar5);
            if (ppuVar10 != (undefined **)0x0) {
              iVar1 = (int)*(undefined8 *)((long)param_2 + (long)_DAT_112745bf0);
              func_0x00010c234fc0();
              ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
              if (iVar1 != 0) {
                puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c0df720(dVar19);
                _objc_retainAutoreleasedReturnValue();
                ppuVar5 = ppuVar10;
                func_0x00010c27c0c0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c14de00(ppuVar11);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar5);
                _objc_release(puVar7);
                puVar7 = PTR_PTR_1126c9aa8;
                func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
                _objc_retainAutoreleasedReturnValue();
                uVar8 = *(undefined8 *)((long)param_2 + (long)_DAT_112745c34);
                func_0x00010c0f0be0(uVar8);
                _objc_retainAutoreleasedReturnValue();
                uVar13 = uVar8;
                func_0x00010be36bc0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar6 = &PTR____CFConstantStringClassReference_110e4b058;
                func_0x00010befa540(puVar7);
                _objc_release(uVar13);
                _objc_release(uVar8);
                _objc_release(puVar7);
                func_0x00010c2a70c0(ppuVar10);
                ppuVar5 = param_2;
                func_0x00010bdf6e60(param_2);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d99a0();
                _objc_release(ppuVar5);
                if (param_1 / 1000.0 < dVar18) {
                  func_0x00010c089820();
                  _objc_retainAutoreleasedReturnValue();
                }
                else {
                  func_0x00010bfb1920();
                  _objc_retainAutoreleasedReturnValue();
                }
                uVar8 = *(undefined8 *)((long)param_2 + lVar14);
                func_0x00010bf60c20(uVar8);
                _objc_retainAutoreleasedReturnValue();
                uVar13 = uVar8;
                func_0x00010c0d9ae0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1cd3a0(ppuVar17);
                _objc_release(uVar13);
                _objc_release(uVar8);
                uVar8 = *(undefined8 *)((long)param_2 + lVar14);
                func_0x00010bf60c20(uVar8);
                _objc_retainAutoreleasedReturnValue();
                uVar13 = uVar8;
                func_0x00010c1126e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1e25c0(ppuVar17);
                _objc_release(uVar13);
                _objc_release(uVar8);
                uVar8 = *(undefined8 *)((long)param_2 + lVar14);
                func_0x00010bf60c20(uVar8);
                _objc_retainAutoreleasedReturnValue();
                uVar13 = uVar8;
                func_0x00010c0d9ae0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1e25c0();
                _objc_release(uVar13);
                _objc_release(uVar8);
                uVar8 = *(undefined8 *)((long)param_2 + lVar14);
                func_0x00010bf60c20();
                _objc_retainAutoreleasedReturnValue();
                uVar13 = uVar8;
                func_0x00010c1126e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1cd3a0();
                _objc_release(uVar13);
                _objc_release(uVar8);
                ppuVar5 = ppuVar17;
                func_0x00010c0f0be0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bea11c0(param_2);
                _objc_release(ppuVar5);
                func_0x00010c188040(param_2);
                ppuVar5 = ppuVar9;
                func_0x00010bf7dbe0(ppuVar10);
                puVar7 = puVar4;
                goto LAB_10632db48;
              }
            }
            _objc_release(ppuVar10);
            puVar16 = puVar16 + 1;
          } while (puVar7 != puVar16);
          ppuVar5 = &puStack_150;
          ppuVar6 = apuStack_110;
          puVar7 = puVar4;
          func_0x00010bf52a60();
        } while (puVar7 != (undefined *)0x0);
      }
      _objc_release(puVar4);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((int)ppuVar12 != 0) {
        puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(dVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        ppuVar10 = (undefined **)PTR_PTR_1126c9aa8;
        func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = *(undefined ***)((long)param_2 + (long)_DAT_112745c34);
        func_0x00010c0f0be0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = ppuVar11;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = &PTR____CFConstantStringClassReference_110e4b058;
        ppuVar5 = ppuVar17;
        func_0x00010befa540(ppuVar10);
LAB_10632db48:
        _objc_release(ppuVar17);
        _objc_release(ppuVar11);
        _objc_release(ppuVar10);
        _objc_release(puVar7);
      }
      _objc_release(ppuVar9);
      _objc_release(ppuVar2);
      _objc_release(ppuVar3);
    }
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar5);
  _objc_retain(ppuVar6);
  if (((ppuVar5 != ppuVar6) && (ppuVar5 != (undefined **)0x0)) && (ppuVar6 != (undefined **)0x0)) {
    ppuVar12 = *(undefined ***)((long)param_4 + (long)_DAT_112745b8c);
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar12;
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar2);
    _objc_release(ppuVar12);
    if (ppuVar3 != ppuVar6) {
      func_0x00010bed3400(param_4);
    }
  }
  _objc_release(ppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 10632dbe0; end: 10632dca3; -[SCOperaViewController _updateAttachmentExtendedModeOnTransitionFromPage:toPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632dbe0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((param_3 != param_4) && (param_3 != 0)) && (param_4 != 0)) {
    lVar1 = *(long *)(param_1 + _DAT_112745b8c);
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != param_4) {
      func_0x00010bed3400(param_1,param_2,param_4);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10632dca4; end: 10632dde3; -[SCOperaViewController _updateAttachmentExtendedModeIfNeeded:] */

void FUN_10632dca4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be0d640();
  if ((int)lVar1 != 0) {
    if (param_3 == 0) {
      lVar1 = param_1;
      func_0x00010bf60c20(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
    else {
      _objc_retain(param_3);
      lVar2 = param_3;
    }
    lVar1 = lVar2;
    func_0x00010be36bc0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f13a0(param_1,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0eb6a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0eb6a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(lVar3);
    _objc_release(lVar1);
    func_0x00010c0eb6a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cd680();
    _objc_release(param_1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10632dde4; end: 10632dec3; -[SCOperaViewController _extendedAttachmentFrameModeEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10632dde4(undefined8 param_1,double param_2,double param_3,long param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  double dVar15;
  long lVar16;
  double dVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  
  lVar6 = (long)_DAT_112745b68;
  lVar4 = *(long *)(param_4 + lVar6);
  func_0x00010bf9daa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    dVar20 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    uVar7 = SUB81(dVar20,0);
    uVar8 = (undefined1)((ulong)dVar20 >> 8);
    uVar9 = (undefined1)((ulong)dVar20 >> 0x10);
    uVar10 = (undefined1)((ulong)dVar20 >> 0x18);
    uVar11 = (undefined1)((ulong)dVar20 >> 0x20);
    uVar12 = (undefined1)((ulong)dVar20 >> 0x28);
    uVar13 = (undefined1)((ulong)dVar20 >> 0x30);
    uVar14 = (undefined1)((ulong)dVar20 >> 0x38);
    dVar19 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
    in_b0 = SUB81(dVar19,0);
    in_register_00005001 = (undefined1)((ulong)dVar19 >> 8);
    in_register_00005002 = (undefined1)((ulong)dVar19 >> 0x10);
    in_register_00005003 = (undefined1)((ulong)dVar19 >> 0x18);
    in_register_00005004 = (undefined1)((ulong)dVar19 >> 0x20);
    in_register_00005005 = (undefined1)((ulong)dVar19 >> 0x28);
    in_register_00005006 = (undefined1)((ulong)dVar19 >> 0x30);
    in_register_00005007 = (undefined1)((ulong)dVar19 >> 0x38);
    param_3 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
    param_2 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    dVar15 = param_2;
    dVar17 = param_3;
  }
  else {
    uVar5 = *(undefined8 *)(param_4 + lVar6);
    func_0x00010bf9daa0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2aa0();
    dVar20 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    dVar19 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
    dVar17 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
    dVar15 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    _objc_release(uVar5);
    uVar7 = (undefined1)param_1;
    uVar8 = (undefined1)((ulong)param_1 >> 8);
    uVar9 = (undefined1)((ulong)param_1 >> 0x10);
    uVar10 = (undefined1)((ulong)param_1 >> 0x18);
    uVar11 = (undefined1)((ulong)param_1 >> 0x20);
    uVar12 = (undefined1)((ulong)param_1 >> 0x28);
    uVar13 = (undefined1)((ulong)param_1 >> 0x30);
    uVar14 = (undefined1)((ulong)param_1 >> 0x38);
  }
  lVar6 = -(ulong)((double)CONCAT17(in_register_00005007,
                                    CONCAT16(in_register_00005006,
                                             CONCAT15(in_register_00005005,
                                                      CONCAT14(in_register_00005004,
                                                               CONCAT13(in_register_00005003,
                                                                        CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0))))))) ==
                  dVar19);
  lVar3 = -(ulong)((double)CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(
                                                  uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))))
                  == dVar20);
  lVar16 = -(ulong)(param_2 == dVar15);
  lVar18 = -(ulong)(param_3 == dVar17);
  auVar1[1] = ~(byte)((ulong)lVar6 >> 8);
  auVar1[0] = ~(byte)lVar6;
  auVar1[2] = ~(byte)((ulong)lVar6 >> 0x10);
  auVar1[3] = ~(byte)((ulong)lVar6 >> 0x18);
  auVar1[4] = ~(byte)lVar3;
  auVar1[5] = ~(byte)((ulong)lVar3 >> 8);
  auVar1[6] = ~(byte)((ulong)lVar3 >> 0x10);
  auVar1[7] = ~(byte)((ulong)lVar3 >> 0x18);
  auVar1[8] = ~(byte)lVar16;
  auVar1[9] = ~(byte)((ulong)lVar16 >> 8);
  auVar1[10] = ~(byte)((ulong)lVar16 >> 0x10);
  auVar1[0xb] = ~(byte)((ulong)lVar16 >> 0x18);
  auVar1[0xc] = ~(byte)lVar18;
  auVar1[0xd] = ~(byte)((ulong)lVar18 >> 8);
  auVar1[0xe] = ~(byte)((ulong)lVar18 >> 0x10);
  auVar1[0xf] = ~(byte)((ulong)lVar18 >> 0x18);
  uVar2 = NEON_umaxv(auVar1,4);
  _objc_release(lVar4);
  return uVar2 & 1;
}



/* Entry: 10632dec4; end: 10632df77; -[SCOperaViewController _verticalNeighborModelForId:isTopSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632dec4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112745b8c);
  _objc_retain(param_3);
  func_0x00010c09c9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    if (param_4 == 0) {
      func_0x00010c0f3aa0(lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf0cb60();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10632df78; end: 10632e113; -[SCOperaViewController _shareWebpageURL:] */

void FUN_10632df78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9d18;
  _objc_alloc();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10632e114;
  puStack_80 = &UNK_110842e18;
  uStack_78 = param_3;
  _objc_retain(param_3);
  func_0x00010bff0fe0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e4b0b8,&puStack_98);
  puVar3 = PTR_PTR_1126aeb08;
  _objc_alloc(PTR_PTR_1126aeb08);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_68 = uVar1;
  uStack_60 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0f80(puVar3,param_2,puVar4,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c10eda0(param_1,param_2,puVar3,1,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uStack_78);
  _objc_release(param_3);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10632e114; end: 10632e117;  */

void FUN_10632e114(void)

{
  return;
}



/* Entry: 10632e118; end: 10632e277; -[SCOperaViewController _interactionEventWithType:params:] */

void FUN_10632e118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b2e48;
  _objc_retain(param_6);
  func_0x00010c09ef60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_6;
  func_0x00010c0e00e0(param_6,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bdc1060(uVar2);
  puVar1 = PTR_PTR_1126b2e48;
  uVar4 = param_1;
  func_0x00010c09f960(PTR_PTR_1126b2e48);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_6;
  func_0x00010c0e00e0(param_6,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar5 = uVar4;
  _objc_release(uVar3);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b2e48;
  func_0x00010c09f9a0(PTR_PTR_1126b2e48);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_6;
  func_0x00010c0e00e0(param_6,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010bf885a0(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c98a0;
  func_0x00010c068a00(param_1,param_2,uVar4,uVar5,PTR_PTR_1126c98a0,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10632e278; end: 10632e317; -[SCOperaViewController presentWithTransitionAnimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632e278(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010bece000(param_1,param_2,1);
  lVar3 = (long)_DAT_112745c68;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c224260(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745b68);
  func_0x00010c10f2e0(uVar1);
  func_0x00010c10ae20(uVar2,param_2,(uint)uVar1 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10632e318; end: 10632e55b; -[SCOperaViewController presentFromViewController:config:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632e318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,long param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_7;
  func_0x00010010fab4(param_7,PTR_DAT_1126a4e58);
  if ((param_7 != 0) && ((int)lVar1 != 0)) {
    lVar1 = param_7;
    func_0x00010c0f2220();
    *(long *)(param_5 + _DAT_112745c74) = lVar1;
  }
  func_0x00010bf18180();
  puVar2 = PTR_PTR_1126c9d20;
  _objc_alloc();
  lVar1 = param_8;
  func_0x00010bf16300(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2744e0(param_8);
  uVar6 = param_1;
  func_0x00010c0eb1c0(*(undefined8 *)(param_5 + _DAT_112745b94));
  uVar7 = param_3;
  func_0x00010bf16320(param_8);
  func_0x00010bf16440(param_8);
  func_0x00010c27aa00(param_8);
  lVar5 = (long)_DAT_112745b68;
  func_0x00010bf12340();
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
  uVar3 = *(undefined8 *)(param_5 + _DAT_112745b58);
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034020(param_1,param_3,uVar6,param_2,uVar7,param_4,puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  func_0x00010c26e360(param_8);
  func_0x00010c214420(puVar2);
  lVar1 = param_8;
  func_0x00010bf16300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf16400(param_8);
    func_0x00010c16f4e0(puVar2);
  }
  func_0x00010c10f260(param_5);
  func_0x00010bf94960(PTR_PTR_1126c98e0);
  _objc_release(puVar2);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10632e55c; end: 10632e56b; -[SCOperaViewController setBaseViewFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632e55c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16f4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112745c68),PTR_s_setBaseViewFrame__112639758);
  return;
}



/* Entry: 10632e56c; end: 10632e65f; -[SCOperaViewController setBaseView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632e56c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112745c68;
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  _objc_retain(param_7);
  func_0x00010c16f460(uVar2,param_6,param_7);
  func_0x00010bf20c00(param_7);
  uVar1 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010c0f3c60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51460(param_1,param_2,param_3,param_4,param_7,param_6,uVar2);
  _objc_release(param_7);
  func_0x00010c16f4e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar3));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10632e660; end: 10632e6d7; -[SCOperaViewController updateBaseView:baseViewOrientation:topInset:transitionMode:] */

void FUN_10632e660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010c27a6a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c283bc0(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10632e6d8; end: 10632e707; -[SCOperaViewController transitionAnimator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632e6d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745c68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10632e708; end: 10632e73b; -[SCOperaViewController dismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632e708(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745b7c);
  func_0x00010bf84e00(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf84cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissWithAnimation__1125becd8,(uint)uVar1 ^ 1);
  return;
}



/* Entry: 10632e73c; end: 10632e767; -[SCOperaViewController dismissWithLastInteraction:] */

void FUN_10632e73c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c1b8f80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf82f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismiss_1125be578);
  return;
}



/* Entry: 10632e768; end: 10632e797; -[SCOperaViewController removeBlurOverlay] */

void FUN_10632e768(undefined8 param_1)

{
  func_0x00010c0eb6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe1ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10632e798; end: 10632e897; -[SCOperaViewController dismissWithAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632e798(long param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  *(undefined1 *)(param_1 + _DAT_112745c48) = 1;
  func_0x00010bf82f60(*(undefined8 *)(param_1 + _DAT_112745c68));
  lVar5 = (long)_DAT_112745c00;
  lVar1 = *(long *)(param_1 + lVar5);
  if ((lVar1 != 0) && (func_0x00010c079ba0(), (int)lVar1 != 0)) {
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
      FUN_10636f200(*(undefined8 *)(param_1 + _DAT_112745b98),uVar4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
  }
  return;
}



/* Entry: 10632e898; end: 10632eb97; -[SCOperaViewController logShakeToReportState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632e898(long param_1,long param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(param_3);
  _objc_release(puVar3);
  func_0x00010c0ab340(param_3);
  lVar4 = param_3;
  func_0x00010bef9860();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bdf6e60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  _objc_retain();
  _objc_retain(lVar5);
  _objc_retain(lVar4);
  func_0x00010be0ac80(param_1);
  lVar12 = (long)_DAT_112745bd4;
  lVar11 = *(long *)(param_1 + lVar12);
  _objc_retain(lVar11);
  lVar6 = lVar11;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar11);
      }
      uVar7 = *(undefined8 *)(param_1 + lVar12);
      func_0x00010c0e00e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010bf4b900();
      if (((ulong)puVar8 & 1) == 0) {
        func_0x00010c0ab360(lVar4);
      }
      _objc_release(uVar7);
      lVar10 = lVar10 + 1;
    } while (lVar6 != lVar10);
    lVar6 = lVar11;
    func_0x00010bf52a60();
  }
  _objc_release(lVar11);
  if (*(long *)(param_1 + _DAT_112745c00) != 0) {
    func_0x00010c0ab360(param_3);
  }
  lVar6 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ab360(param_3);
    _objc_release(param_1);
  }
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(param_2);
  func_0x00010befa120(uVar7);
  puVar8 = PTR_PTR_1126c9d28;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar7 = *(undefined8 *)(param_3 + 0x30);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e4b138;
  if (*(long *)(param_3 + 0x28) != param_2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  _objc_retain(ppuVar1);
  func_0x00010c25d4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  func_0x00010c0ab360(uVar7);
  _objc_release(param_2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 10632eb98; end: 10632ec83;  */

void FUN_10632eb98(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010befa120(uVar4);
  puVar2 = PTR_PTR_1126c9d28;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e4b138;
  if (*(long *)(param_1 + 0x28) != param_2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  _objc_retain(ppuVar1);
  func_0x00010c25d4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  func_0x00010c0ab360(uVar4);
  _objc_release(param_2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10632ec84; end: 10632f16f; -[SCOperaViewController didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632ec84(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar9 = (long)_DAT_112745c00;
  lVar8 = *(long *)(param_1 + lVar9);
  lVar6 = (long)_DAT_112745bf4;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf04780(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c0720c0(param_4,param_2,uVar1);
  _objc_release(uVar1);
  if (lVar8 == 0) {
    if ((int)uVar5 == 0) goto LAB_10632f140;
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c22a3a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c0720c0(param_3,param_2,uVar1);
    _objc_release(uVar1);
    if ((int)uVar5 == 0) {
      uVar1 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c22a180(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c0720c0(param_3,param_2,uVar1);
      _objc_release(uVar1);
      if ((int)uVar5 != 0) {
        puVar3 = PTR_PTR_1126c9aa8;
        func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = *(undefined8 *)(param_1 + _DAT_112745c34);
        func_0x00010c0f0be0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa540(puVar3,param_2,uVar5,&PTR____CFConstantStringClassReference_110e4b058,
                            &PTR____CFConstantStringClassReference_110e4b1f8);
        _objc_release(uVar5);
        _objc_release(uVar1);
        _objc_release(puVar3);
        func_0x00010be95ce0(param_1);
      }
      goto LAB_10632f140;
    }
    func_0x00010bddb7a0(param_1);
    lVar6 = (long)_DAT_112745c34;
    func_0x00010c0abc80(*(undefined8 *)(param_1 + lVar6));
    puVar3 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c0f0be0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa540(puVar3,param_2,uVar5,&PTR____CFConstantStringClassReference_110e4b058,
                        &PTR____CFConstantStringClassReference_110e4b1d8);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(puVar3);
    puVar3 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6200(param_1,param_2,0,puVar3);
  }
  else {
    if ((int)uVar5 == 0) goto LAB_10632f140;
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c22a3a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c0720c0(param_3,param_2,uVar1);
    _objc_release(uVar1);
    if ((int)uVar5 == 0) {
      uVar1 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c22a180(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c0720c0(param_3,param_2,uVar1);
      _objc_release(uVar1);
      if ((int)uVar5 == 0) goto LAB_10632f140;
      uVar5 = *(undefined8 *)(param_1 + lVar9);
      puVar3 = PTR_PTR_1126c9cb0;
      func_0x00010c22a500(PTR_PTR_1126c9cb0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c079be0(uVar5,param_2,puVar3);
      _objc_release(puVar3);
      if ((int)uVar5 == 0) goto LAB_10632f140;
      puVar3 = PTR_PTR_1126c9aa8;
      func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + _DAT_112745c34);
      func_0x00010c0f0be0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa540(puVar3,param_2,uVar5,&PTR____CFConstantStringClassReference_110e4b058,
                          &PTR____CFConstantStringClassReference_110e4b1f8);
      _objc_release(uVar5);
      _objc_release(uVar1);
      _objc_release(puVar3);
      uVar5 = *(undefined8 *)(param_1 + lVar9);
      puVar3 = PTR_PTR_1126c9cb0;
      func_0x00010c22a500(PTR_PTR_1126c9cb0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13dba0(uVar5,param_2,puVar3);
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + lVar9);
      puVar3 = PTR_PTR_1126c9cb0;
      func_0x00010bf77100(PTR_PTR_1126c9cb0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c079be0(uVar5,param_2,puVar3);
      if ((int)uVar5 == 0) {
        uVar5 = *(undefined8 *)(param_1 + lVar9);
        puVar2 = PTR_PTR_1126c9cb0;
        func_0x00010c23c5c0(PTR_PTR_1126c9cb0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c079be0(uVar5,param_2,puVar2);
        if ((int)uVar5 == 0) {
          uVar7 = *(ulong *)(param_1 + lVar9);
          puVar4 = PTR_PTR_1126c9cb0;
          func_0x00010c10f900(PTR_PTR_1126c9cb0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c079be0(uVar7,param_2,puVar4);
          _objc_release(puVar4);
          _objc_release(puVar2);
          _objc_release(puVar3);
          if ((uVar7 & 1) != 0) goto LAB_10632f140;
          func_0x00010bddb7a0(param_1);
          lVar6 = (long)_DAT_112745c34;
          func_0x00010c0abc80(*(undefined8 *)(param_1 + lVar6));
          puVar3 = PTR_PTR_1126c9aa8;
          func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = *(undefined8 *)(param_1 + lVar6);
          func_0x00010c0f0be0(uVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar1;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa540(puVar3,param_2,uVar5,&PTR____CFConstantStringClassReference_110e4b058,
                              &PTR____CFConstantStringClassReference_110e4b1d8);
          _objc_release(uVar5);
          _objc_release(uVar1);
          _objc_release(puVar3);
          uVar5 = *(undefined8 *)(param_1 + lVar9);
          puVar3 = PTR_PTR_1126c9cb0;
          func_0x00010c22a500(PTR_PTR_1126c9cb0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f6220(uVar5,param_2,0,puVar3);
        }
        else {
          _objc_release(puVar2);
        }
      }
    }
  }
  _objc_release(puVar3);
LAB_10632f140:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10632f170; end: 10632f2a3; -[SCOperaViewController maskableFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10632f170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = param_5;
  func_0x00010c0ea360();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c069200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb2140();
  _objc_release(lVar1);
  _objc_release(lVar4);
  lVar4 = (long)_DAT_112745c34;
  if ((int)lVar2 == 0) {
    func_0x00010c0bc280();
  }
  else if (*(long *)(param_5 + lVar4) == 0) {
    param_1 = *(undefined8 *)PTR__CGRectZero_110347608;
  }
  else {
    func_0x00010c0bc280();
    lVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_5 + lVar4);
    func_0x00010c29bf00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf513e0(param_1,param_2,param_3,param_4,lVar1,param_6,uVar3);
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
  return param_1;
}



/* Entry: 10632f2a4; end: 10632f33f; -[SCOperaViewController viewControllerTransitionAnimatorWillBeginPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632f2a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + _DAT_112745c78) = 1;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745c00);
  puVar1 = PTR_PTR_1126c9cb0;
  func_0x00010c0db980(PTR_PTR_1126c9cb0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13dba0(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745b5c);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010bf18820(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb780(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10632f340; end: 10632f54b; -[SCOperaViewController viewControllerTransitionAnimatorDidFinishPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632f340(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  
  func_0x00010bdd8e60();
  func_0x00010bf20c00(*(undefined8 *)(param_5 + (long)_DAT_112745b68));
  uVar1 = param_5;
  uVar6 = param_1;
  dVar8 = param_2;
  uVar5 = param_3;
  uVar7 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb68e0();
  _CGRectEqualToRect(param_1,param_2,param_3,param_4,uVar6,dVar8,uVar5,uVar7);
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    dVar8 = 0.0;
    func_0x00010bf51200(0,0,uVar1,param_6,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2 + dVar8,param_3,param_4);
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbe20();
    _objc_release(uVar1);
  }
  uVar7 = *(undefined8 *)(param_5 + (long)_DAT_112745b5c);
  puVar4 = PTR_PTR_1126b2330;
  func_0x00010bfafaa0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_5 + (long)_DAT_112745b8c);
  func_0x00010bf60c20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar7,param_6,puVar4,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10632f54c; end: 10632f653; -[SCOperaViewController viewControllerTransitionAnimatorDidBeginDismissing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632f54c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + _DAT_112745c44);
  func_0x00010c27dd80();
  if (lVar1 != 1) {
    uVar2 = *(ulong *)(param_1 + _DAT_112745b68);
    func_0x00010c0b5780();
    if ((uVar2 & 1) == 0) {
      func_0x00010c1c0f60(param_1,param_2,1);
    }
  }
  func_0x00010bde5040(param_1);
  lVar1 = param_1;
  func_0x00010bdf6e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288e40();
  _objc_release(lVar1);
  func_0x00010bfe15c0(*(undefined8 *)(param_1 + _DAT_112745c5c));
  uVar6 = *(undefined8 *)(param_1 + _DAT_112745b5c);
  puVar3 = PTR_PTR_1126b2330;
  func_0x00010bf17f80(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112745b8c);
  func_0x00010bf60c20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar6,param_2,puVar3,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10632f654; end: 10632f6a3; -[SCOperaViewController viewControllerTransitionAnimatorDidBeginDismissingWithInteraction:] */

void FUN_10632f654(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126c98a0;
    func_0x00010c0689a0(PTR_PTR_1126c98a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8f80(param_1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c29c3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_viewControllerTransitionAnimator_112684b20);
  return;
}



/* Entry: 10632f6a4; end: 10632f85f; -[SCOperaViewController viewControllerTransitionAnimatorWillBeginAnimatingToDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632f6a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  *(undefined1 *)(param_1 + _DAT_112745c48) = 1;
  func_0x00010c29e920();
  lVar7 = (long)_DAT_112745c34;
  lVar1 = *(long *)(param_1 + lVar7);
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = (long)_DAT_112745b5c;
  }
  else {
    func_0x00010c18dcc0(*(undefined8 *)(param_1 + lVar7),param_2,1);
    func_0x00010c200a20(*(undefined8 *)(param_1 + lVar7),param_2,1);
    lVar2 = param_1;
    func_0x00010bdeb340(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c089060(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2348;
    func_0x00010c089060(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(lVar2,param_2,lVar1,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar1);
    lVar1 = (long)_DAT_112745b5c;
    uVar6 = *(undefined8 *)(param_1 + lVar1);
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010bf3df00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c0f0be0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar6,param_2,puVar3,uVar4,lVar2);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  uVar5 = *(undefined8 *)(param_1 + lVar1);
  puVar3 = PTR_PTR_1126b2330;
  func_0x00010bf17ae0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c0f0be0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf60c40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar5,param_2,puVar3,uVar4,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10632f860; end: 10632f967; -[SCOperaViewController viewControllerTransitionAnimatorDidCancelDismissing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632f860(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + _DAT_112745c44);
  func_0x00010c27dd80();
  if (lVar1 != 1) {
    uVar2 = *(ulong *)(param_1 + _DAT_112745b68);
    func_0x00010c0b5780();
    if ((uVar2 & 1) == 0) {
      func_0x00010c1c0f60(param_1,param_2,0);
    }
  }
  func_0x00010be01c60(param_1);
  lVar1 = param_1;
  func_0x00010bdf6e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288e40();
  _objc_release(lVar1);
  func_0x00010c2358a0(*(undefined8 *)(param_1 + _DAT_112745c5c));
  uVar6 = *(undefined8 *)(param_1 + _DAT_112745b5c);
  puVar3 = PTR_PTR_1126b2330;
  func_0x00010bf2e260(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112745b8c);
  func_0x00010bf60c20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar6,param_2,puVar3,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10632f968; end: 10632fb03; -[SCOperaViewController viewControllerTransitionAnimatorDidFinishDismissing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632f968(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined1 *)(param_1 + _DAT_112745c78) = 0;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112745c00);
  puVar1 = PTR_PTR_1126c9cb0;
  func_0x00010c0db980(PTR_PTR_1126c9cb0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6220(uVar4);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745b58);
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf1f440();
  _objc_release(uVar4);
  _objc_release(uVar2);
  if (((param_3 & 1) == 0) && ((int)uVar3 != 0)) {
    puVar1 = PTR_PTR_1126c98a0;
    func_0x00010c0689a0(PTR_PTR_1126c98a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8f80(param_1);
    _objc_release(puVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745b5c);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010bfaf7a0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112745b8c);
  func_0x00010bf60c20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  if ((*(byte *)(param_1 + _DAT_112745c2c) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010becaf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__teardown_112590570);
  return;
}



/* Entry: 10632fb04; end: 10632fc2b; -[SCOperaViewController viewControllerTransitionAnimatorShouldBeginAuxViewActionWithDirection:gestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632fb04(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112745b68);
  func_0x00010bf12340();
  if ((iVar1 != 0) && (puVar2 = param_1, func_0x00010be18dc0(), param_3 == puVar2)) {
    puVar2 = param_1;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0d9ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9ba0;
    func_0x00010bf84be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar3 == puVar4) {
      uVar7 = *(undefined8 *)(param_1 + _DAT_112745b5c);
      puVar2 = PTR_PTR_1126c9460;
      func_0x00010c0f25c0(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + _DAT_112745b8c);
      func_0x00010bf60c20(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7a0(uVar7,param_2,puVar2,uVar6);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(puVar2);
    }
  }
  return;
}



/* Entry: 10632fc2c; end: 10632fcc3; -[SCOperaViewController viewControllerTransitionAnimatorShouldBeginDismissingWithDirection:gestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10632fc2c(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar2 = param_1;
  func_0x00010be42ea0(param_1,param_2,param_4);
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + (long)_DAT_112745b68);
    func_0x00010bf12340();
    if ((iVar1 == 0) || (uVar2 = param_1, func_0x00010be18dc0(), param_3 != uVar2)) {
      uVar3 = *(undefined8 *)(param_1 + (long)_DAT_112745b9c);
      func_0x00010c22e300(uVar3,param_2,param_3,param_4);
      goto LAB_10632fca8;
    }
  }
  uVar3 = 0;
LAB_10632fca8:
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 10632fcc4; end: 10632fdaf; -[SCOperaViewController _isPreventingTheScrubberGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10632fcc4(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  bool bVar4;
  
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_5 + _DAT_112745b8c);
  func_0x00010bf60c20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c9d30;
  func_0x00010c07d4a0(PTR_PTR_1126c9d30,param_6,uVar2);
  if ((int)puVar3 == 0) {
    bVar4 = false;
  }
  else {
    func_0x00010c137f60(PTR_PTR_1126c93f8);
    uVar1 = param_7;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_7,param_6,uVar1);
    func_0x00010bfb68e0(uVar1);
    bVar4 = param_4 - param_1 < param_2;
    _objc_release(uVar1);
  }
  _objc_release(uVar2);
  _objc_release(param_7);
  return bVar4;
}



/* Entry: 10632fdb0; end: 10632fe3f; -[SCOperaViewController _configureFadeTransitionForDismissalAnimation] */

void FUN_10632fdb0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bdf6e60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d1a00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    func_0x00010be01c60(param_1);
  }
  else {
    lVar3 = lVar1;
    func_0x00010bf9fa40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be08b60(param_1,param_2,lVar2,lVar3);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10632fe40; end: 10632fe6f; -[SCOperaViewController _forwardDirection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10632fe40(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112745b68);
  func_0x00010c0d6c60();
  lVar2 = -(ulong)(lVar1 != 1);
  if (lVar1 == 0) {
    lVar2 = 1;
  }
  return lVar2;
}



/* Entry: 10632fe70; end: 10632feff; -[SCOperaViewController _enableFadeTransitionForDismissalAnimation:fadingViews:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632fe70(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf90340(*(undefined8 *)(param_1 + _DAT_112745c68));
  lVar1 = param_1;
  func_0x00010c0eb6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10632ff00; end: 10632ff0f; -[SCOperaViewController _disableFadeTransitionForDismissalAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632ff00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7ff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112745c68),
             PTR_s_disableFadeTransitionInDismissal_1125bd970);
  return;
}



/* Entry: 10632ff10; end: 106330067; -[SCOperaViewController attachmentInteractionController:shouldBeginWithSwipeDirection:gestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10632ff10(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_5);
  lVar9 = (long)_DAT_112745b8c;
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf60c20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f3aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be6f9a0(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1d940();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar5 & 1) == 0) {
    if ((param_4 & 0xfffffffffffffffd) == 1) {
      lVar6 = *(long *)(param_1 + lVar9);
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar6;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar9;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar7);
      _objc_release(lVar9);
      _objc_release(lVar6);
      if (lVar8 != 0) goto LAB_106330020;
    }
    func_0x00010c0f24c0(param_1,param_2,3,param_4,param_5);
    bVar1 = param_1 != 1;
  }
  else {
LAB_106330020:
    bVar1 = false;
  }
  _objc_release(param_5);
  return bVar1;
}



/* Entry: 106330068; end: 1063300cb; -[SCOperaViewController attachmentInteractionControllerDidDismissAttachment:swipeDirection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106330068(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 7;
  if (param_4 != 1) {
    uVar1 = 8;
  }
  puVar2 = PTR_PTR_1126c98a0;
  func_0x00010c0689a0(PTR_PTR_1126c98a0,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b8f80(param_1,param_2,puVar2);
  func_0x00010c0d60a0(*(undefined8 *)(param_1 + _DAT_112745ba0),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1063300cc; end: 106330217; -[SCOperaViewController attachmentInteractionController:didUpdateSwipeAngle:withVerticalTranslation:] */

undefined8 FUN_1063300cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bdf6e60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9410;
  func_0x00010bf0d360();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c9410;
  func_0x00010bf0d380();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e940(param_3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bdf6e60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9410;
  func_0x00010bf0cb80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e940(param_3);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_3;
  }
  ___stack_chk_fail();
  iVar1 = 0;
  uVar8 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar8 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar6 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar6;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar6);
      if (puVar3 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        func_0x00010c252de0();
        _objc_release(puVar2);
      }
      else {
        puVar6 = puVar3;
        func_0x00010c0690e0();
      }
      if (puVar6 + -1 < (undefined *)0x4) {
        uVar8 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar6 + -1) * 8);
      }
      _objc_release(puVar3);
    }
  }
  _objc_release(0);
  return uVar8;
}



/* Entry: 106330218; end: 106330313; -[SCOperaViewController attachmentInteractionController:didUpdateAttachmentViewAnchorPointY:] */

undefined8 FUN_106330218(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bdf6e60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9410;
  func_0x00010bf0cb80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e940(param_2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_2;
  }
  ___stack_chk_fail();
  iVar1 = 0;
  uVar6 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar6 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar4 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar4;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar4);
      if (puVar3 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00010c252de0();
        _objc_release(puVar2);
      }
      else {
        puVar4 = puVar3;
        func_0x00010c0690e0();
      }
      if (puVar4 + -1 < (undefined *)0x4) {
        uVar6 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar4 + -1) * 8);
      }
      _objc_release(puVar3);
    }
  }
  _objc_release(0);
  return uVar6;
}



/* Entry: 106330314; end: 10633031f; -[SCOperaViewController supportedInterfaceOrientations] */

undefined8 FUN_106330314(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 106330320; end: 1063303db; -[SCOperaViewController deviceOrientationDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106330320(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 == 0) {
    uVar3 = param_1;
    func_0x00010c0eb6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c07d460();
    _objc_release(uVar1);
    _objc_release(uVar3);
    if ((uVar2 & 1) == 0) {
      uVar3 = *(ulong *)(param_1 + (long)_DAT_112745b68);
      func_0x00010c141b60();
      if ((uVar3 & 1) == 0) {
        func_0x00010bdf6e60(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c141940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(param_1);
        return;
      }
    }
  }
  return;
}



/* Entry: 1063303dc; end: 106330487; -[SCOperaViewController pageIsFullyVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1063303dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112745c34);
  _objc_retain(param_3);
  func_0x00010c0f0be0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,uVar1);
  _objc_release(param_3);
  if ((int)uVar2 == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = *(byte *)(param_1 + _DAT_112745c2c);
  }
  _objc_release(uVar1);
  _objc_release(uVar3);
  return bVar4 & 1;
}



/* Entry: 106330488; end: 10633056f; -[SCOperaViewController pageIsPartiallyVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106330488(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745b9c);
  func_0x00010c1521e0(uVar1);
  lVar2 = param_1;
  func_0x00010bee9960(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bf5f7e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0720c0(param_3,param_2,param_1);
  if ((uVar5 & 1) == 0) {
    uVar5 = param_3;
    func_0x00010c0720c0(param_3,param_2,lVar4);
  }
  else {
    uVar5 = 1;
  }
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 106330570; end: 106330913; -[SCOperaViewController relativePositionForPageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106330570(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  _objc_retain(param_3);
  lVar11 = (long)_DAT_112745b8c;
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf60c20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar10;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0(param_3,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar10);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + lVar11);
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c1126e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
    if ((uVar7 & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + lVar11);
      func_0x00010bf60c20();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c0f3aa0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0720c0();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar4);
      if ((uVar7 & 1) == 0) {
        uVar4 = *(ulong *)(param_1 + lVar11);
        func_0x00010bf60c20();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        func_0x00010c0d9ae0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c0f0be0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c0720c0();
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar3);
        _objc_release(uVar4);
        if ((uVar7 & 1) == 0) {
          uVar4 = *(ulong *)(param_1 + lVar11);
          func_0x00010bf60c20();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar4;
          func_0x00010bf0cb60();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          func_0x00010c0f0be0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c0720c0();
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar3);
          _objc_release(uVar4);
          if ((uVar7 & 1) == 0) {
            uVar4 = *(ulong *)(param_1 + lVar11);
            func_0x00010bf60c20();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar4;
            func_0x00010c0d9820();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar3;
            func_0x00010c0f0be0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010c0720c0();
            _objc_release(uVar6);
            _objc_release(uVar5);
            _objc_release(uVar3);
            _objc_release(uVar4);
            if ((uVar7 & 1) == 0) {
              uVar8 = *(undefined8 *)(param_1 + lVar11);
              func_0x00010bf60c20();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar8;
              func_0x00010c1125e0();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar10;
              func_0x00010c0f0be0();
              _objc_retainAutoreleasedReturnValue();
              uVar1 = uVar2;
              func_0x00010be36bc0();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar1;
              func_0x00010c0720c0();
              _objc_release(uVar1);
              _objc_release(uVar2);
              _objc_release(uVar10);
              _objc_release(uVar8);
              uVar10 = 6;
              if ((int)uVar9 == 0) {
                uVar10 = 0;
              }
            }
            else {
              uVar10 = 5;
            }
          }
          else {
            uVar10 = 4;
          }
        }
        else {
          uVar10 = 2;
        }
      }
      else {
        uVar10 = 3;
      }
    }
    else {
      uVar10 = 1;
    }
  }
  else {
    uVar10 = 0;
  }
  _objc_release(param_3);
  return uVar10;
}



/* Entry: 106330914; end: 106330923; -[SCOperaViewController safeInsetsForPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106330914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eb1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112745b94),PTR_s_operaSafeAreaInsets_112618688);
  return;
}



/* Entry: 106330924; end: 10633095b; -[SCOperaViewController setPausedForAttachment:] */

void FUN_106330924(undefined8 param_1)

{
  func_0x00010bdf6e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d99a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10633095c; end: 10633095f; -[SCOperaViewController setImageForBackdrop:] */

void FUN_10633095c(void)

{
  return;
}



/* Entry: 106330960; end: 10633097b; -[SCOperaViewController isPaused] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106330960(long param_1)

{
  if (*(long *)(param_1 + _DAT_112745c00) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be428d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isPaused_11256e3d0);
    return param_1;
  }
  return 0;
}



/* Entry: 10633097c; end: 1063309ef; -[SCOperaViewController pageIsAttachmentPage:] */

bool FUN_10633097c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c128180();
  if (lVar1 == 0) {
    func_0x00010bf60c20(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bee9960(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar1 = param_1;
  func_0x00010c0f3aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 1063309f0; end: 1063309fb; -[SCOperaViewController navigationIntentManagerNavigateImmediatelyToNextPage:] */

void FUN_1063309f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc9830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__advanceToNextPage_ignoreSetting_11254ffa8,0,1);
  return;
}



/* Entry: 1063309fc; end: 106330aa3; -[SCOperaViewController didReceiveAudioSessionActivatedSignal] */

void FUN_1063309fc(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106330aa4;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106330aa4; end: 106330b2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106330aa4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(char *)(param_1 + _DAT_112745c7c) == '\x01')) {
    *(undefined1 *)(param_1 + _DAT_112745c7c) = 0;
    uVar1 = *(ulong *)(param_1 + _DAT_112745c00);
    if (uVar1 == 0) {
      func_0x00010be95ce0(param_1);
    }
    else {
      func_0x00010c079ba0();
      if ((uVar1 & 1) == 0) {
        lVar2 = param_1;
        func_0x00010bdf6e60(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c13d1c0();
        _objc_release(lVar2);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106330b2c; end: 106330b83; -[SCOperaViewController didReceiveAudioSessionDeactivatedSignal] */

void FUN_106330b2c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106330b84;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 106330b84; end: 106330b9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106330b84(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112745c7c) = 1;
  return;
}



/* Entry: 106330b9c; end: 106330c03; -[SCOperaViewController _shouldPauseForAudioInterruption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106330b9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745b8c);
  func_0x00010bf60c20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf804e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (uint)uVar3 ^ 1;
}



/* Entry: 106330c04; end: 106330cd3; -[SCOperaViewController audioSessionDidBeginInterruption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106330c04(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745b58);
  func_0x00010bf0fb00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c079600();
  _objc_release(uVar1);
  puVar2 = param_1;
  func_0x00010beb4b80();
  if ((int)puVar2 == 0) {
    return;
  }
  lVar3 = (long)_DAT_112745c00;
  if (*(long *)(param_1 + lVar3) == 0) {
    puVar2 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6200(param_1,param_2,0,puVar2);
  }
  else {
    func_0x00010633560c();
    if (((ulong)puVar2 & 1) != 0) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    puVar2 = PTR_PTR_1126c9cb0;
    func_0x00010bf0f1e0(PTR_PTR_1126c9cb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6220(uVar1,param_2,0,puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106330cd4; end: 106330dc7; -[SCOperaViewController audioSession:didEndInterruption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106330cd4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_112745c00) == 0) {
    lVar1 = param_1;
    func_0x00010beb4b80();
    if ((param_4 != 0) && ((int)lVar1 != 0)) {
      func_0x00010be95ce0(param_1);
    }
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106330dc8;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106330dc8; end: 106330e33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106330dc8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112745c00);
    puVar1 = PTR_PTR_1126c9cb0;
    func_0x00010bf0f1e0(PTR_PTR_1126c9cb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13dba0(uVar2,param_2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106330e34; end: 106330e3b; -[SCOperaViewController audioSessionRouteDidChangeReasonNewDeviceAvailable:] */

void FUN_106330e34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcef30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__applyWorkaroundForAudioSessionR_112551568,param_3,1);
  return;
}



/* Entry: 106330e3c; end: 106330ec7; -[SCOperaViewController audioSessionRouteDidChangeReasonOldDeviceUnavailable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106330e3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010beb4b80();
  if ((int)lVar1 != 0) {
    func_0x00010bdcef20(param_1,param_2,param_3,0);
    uVar2 = *(ulong *)(param_1 + _DAT_112745c00);
    if (uVar2 == 0) {
      func_0x00010be95ce0(param_1);
    }
    else {
      func_0x00010c079ba0();
      if ((uVar2 & 1) == 0) {
        func_0x00010bdf6e60(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c13d1c0();
        _objc_release(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106330ec8; end: 106330ed7; -[SCOperaViewController audioSession:didChangeVolume:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106330ec8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a0f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112745bcc),PTR_s_volumeButtonPressed_112685e00);
  return;
}



/* Entry: 106330ed8; end: 106330f37; -[SCOperaViewController _applyWorkaroundForAudioSessionRouteConnectedOrDisconneted:connected:] */

void FUN_106330ed8(undefined8 param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    uVar1 = param_3;
    func_0x00010c06be40(param_3,param_2,0);
    if ((int)uVar1 == 0) goto LAB_106330f24;
  }
  else {
    uVar1 = param_3;
    func_0x00010c06be20();
    if ((uVar1 & 1) == 0) goto LAB_106330f24;
  }
  func_0x00010be6edc0(param_1);
LAB_106330f24:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106330f38; end: 1063310e3; -[SCOperaViewController _addFloatingLayer:page:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106330f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_7;
  func_0x00010c27dd80(param_7);
  func_0x00010c0df840(puVar2,param_6,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112745bdc;
  lVar3 = *(long *)(param_5 + lVar4);
  func_0x00010c0e00e0(lVar3,param_6,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_5 + _DAT_112745b84);
    func_0x00010c08c640(lVar3,param_6,param_7,*(undefined8 *)(param_5 + _DAT_112745b68),
                        *(undefined8 *)(param_5 + _DAT_112745b94),
                        *(undefined8 *)(param_5 + _DAT_112745b58),
                        *(undefined8 *)(param_5 + _DAT_112745b5c));
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010c1b98a0(lVar3,param_6,param_7,param_8);
      func_0x00010c1d0640(*(undefined8 *)(param_5 + lVar4),param_6,lVar3,puVar2);
      func_0x00010bf08b80(*(undefined8 *)(param_5 + _DAT_112745b78),param_6,lVar3);
      func_0x00010bef76c0(param_5,param_6,lVar3);
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      lVar4 = lVar3;
      func_0x00010c29bf00(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
      _objc_release(lVar4);
      _objc_release(param_5);
      func_0x00010c29c980(lVar3);
    }
    _objc_release(lVar3);
  }
  _objc_release(puVar2);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1063310e4; end: 1063313af; -[SCOperaViewController _updateFloatingLayer:page:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063310e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = param_7;
  func_0x00010c27dd80(param_7);
  func_0x00010c0df840(puVar1,param_6,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112745b8c;
  lVar2 = *(long *)(param_5 + lVar7);
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar2);
  if (lVar3 == 0) {
    lVar2 = *(long *)(param_5 + lVar7);
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar2);
    if (lVar3 == 0) goto LAB_106331250;
    uVar5 = 2;
  }
  else {
    uVar5 = 0;
  }
  func_0x00010c161be0(*(undefined8 *)(param_5 + _DAT_112745b7c),param_6,uVar5);
LAB_106331250:
  lVar4 = *(long *)(param_5 + _DAT_112745b84);
  func_0x00010c08c640(lVar4,param_6,param_7,*(undefined8 *)(param_5 + _DAT_112745b68),
                      *(undefined8 *)(param_5 + _DAT_112745b94),
                      *(undefined8 *)(param_5 + _DAT_112745b58),
                      *(undefined8 *)(param_5 + _DAT_112745b5c));
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    func_0x00010c1b98a0(lVar4,param_6,param_7,param_8);
    lVar6 = (long)_DAT_112745bdc;
    uVar5 = *(undefined8 *)(param_5 + lVar6);
    func_0x00010c0e00e0(uVar5,param_6,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b760(param_5,param_6,uVar5);
    func_0x00010c1d0640(*(undefined8 *)(param_5 + lVar6),param_6,lVar4,puVar1);
    func_0x00010bf08b80(*(undefined8 *)(param_5 + _DAT_112745b78),param_6,lVar4);
    func_0x00010bef76c0(param_5,param_6,lVar4);
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    lVar6 = lVar4;
    func_0x00010c29bf00(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(lVar6);
    _objc_release(param_5);
    func_0x00010c29c980(lVar4);
    _objc_release(uVar5);
  }
  _objc_release(lVar4);
  _objc_release(puVar1);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1063313b0; end: 106331523; -[SCOperaViewController _clearUpPreviousDummyPageViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063313b0(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_112745bd8;
  lVar1 = *(long *)(param_1 + lVar7);
  func_0x00010bf529e0();
  lVar3 = 0;
  if (lVar1 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar1 = *(long *)(param_1 + lVar7);
    _objc_retain(lVar1);
    lVar3 = lVar1;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(lVar1);
          }
          uVar6 = *(undefined8 *)(lStack_128 + lVar9 * 8);
          func_0x00010c2a6740(uVar6,param_2,0);
          uVar2 = uVar6;
          if (*(char *)(param_1 + _DAT_112745bbc) == '\x01') {
            func_0x00010c29d0c0();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x00010c29bf00(uVar6);
            _objc_retainAutoreleasedReturnValue();
          }
          func_0x00010c12c960();
          _objc_release(uVar2);
          func_0x00010c12c8e0(uVar6);
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        lVar3 = lVar1;
        puVar4 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar1);
    lVar3 = *(long *)(param_1 + lVar7);
    func_0x00010c12adc0();
    param_3 = (undefined *)puVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (param_3 != (undefined *)0x0) {
    puVar5 = PTR_PTR_1126c9ba0;
    func_0x00010bf84be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_3 != puVar5) {
      puVar5 = PTR_PTR_1126c9cd0;
      func_0x00010c0f20c0(PTR_PTR_1126c9cd0,param_2,*(undefined8 *)(lVar3 + _DAT_112745b68),
                          *(undefined8 *)(lVar3 + _DAT_112745b94),
                          *(undefined8 *)(lVar3 + _DAT_112745b58),
                          *(undefined8 *)(lVar3 + _DAT_112745b7c),
                          *(undefined8 *)(lVar3 + _DAT_112745b5c),
                          *(undefined8 *)(lVar3 + _DAT_112745b88),
                          *(undefined8 *)(lVar3 + _DAT_112745b84),param_3,lVar3,
                          *(undefined8 *)(lVar3 + _DAT_112745b90),
                          *(undefined8 *)(lVar3 + _DAT_112745b80));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(*(undefined8 *)(lVar3 + _DAT_112745bd8),param_2,puVar5);
      goto LAB_1063315ec;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_1063315ec:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106331524; end: 10633160b; -[SCOperaViewController _dummyPageViewControllerForViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106331524(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  if (param_3 != (undefined *)0x0) {
    puVar1 = PTR_PTR_1126c9ba0;
    func_0x00010bf84be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_3 != puVar1) {
      puVar1 = PTR_PTR_1126c9cd0;
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
      func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_112745bd8),param_2,puVar1);
      goto LAB_1063315ec;
    }
  }
  puVar1 = (undefined *)0x0;
LAB_1063315ec:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10633160c; end: 1063316cf; -[SCOperaViewController zoomIn:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633160c(ulong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
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
    func_0x00010bdf6e60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bf300();
    _objc_release(uVar1);
    if (param_3 == 0) {
      func_0x00010c2358a0(*(undefined8 *)(param_1 + (long)_DAT_112745c5c));
    }
    else {
      func_0x00010bfe15c0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063316d0; end: 106331737; -[SCOperaViewController hideChrome:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063316d0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bdf6e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe1c40();
  _objc_release(lVar1);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfe15d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112745c5c),PTR_s_hideActionBar_1125d5f30);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2358b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112745c5c),PTR_s_showActionBar_11266b050);
  return;
}



/* Entry: 106331738; end: 106331857; -[SCOperaViewController setHeightWithHeight:animationDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106331738(double param_1,double param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
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
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(double *)(param_3 + _DAT_112745c50) = param_1;
  dVar7 = 0.0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar2 = *(long *)(param_3 + _DAT_112745bd4);
  dVar9 = param_2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar2);
        }
        dVar7 = param_1;
        dVar9 = param_2;
        func_0x00010c13a280(*(undefined8 *)(lStack_118 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = lVar2;
      puVar4 = &uStack_120;
      func_0x00010bf52a60(lVar2,param_4,&uStack_120,auStack_d8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  dVar8 = dVar7;
  dVar10 = dVar9;
  _objc_retain(puVar4);
  if (*(long *)(lVar2 + _DAT_112745c80) != 0) {
    func_0x00010bdc10a0();
    bVar1 = false;
    if ((dVar8 == dVar7) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
      bVar1 = dVar10 == dVar9;
    }
    if (bVar1) goto LAB_1063318c0;
  }
  func_0x00010c200ea0(lVar2,param_4,0);
  func_0x00010becf400(dVar7,dVar9,lVar2,param_4,puVar4);
LAB_1063318c0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106331858; end: 1063318d3; -[SCOperaViewController setOperaSizeWithSize:coordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106331858(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = param_1;
  dVar3 = param_2;
  _objc_retain(param_5);
  if (*(long *)(param_3 + _DAT_112745c80) != 0) {
    func_0x00010bdc10a0();
    bVar1 = false;
    if ((dVar2 == param_1) && (bVar1 = false, !NAN(dVar3) && !NAN(param_2))) {
      bVar1 = dVar3 == param_2;
    }
    if (bVar1) goto LAB_1063318c0;
  }
  func_0x00010c200ea0(param_3,param_4,0);
  func_0x00010becf400(param_1,param_2,param_3,param_4,param_5);
LAB_1063318c0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}


