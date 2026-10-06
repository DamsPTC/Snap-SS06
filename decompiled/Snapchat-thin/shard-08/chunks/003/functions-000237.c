/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10601c41c; end: 10601c6c7; -[SCMapFriendActionLocationSheet _shareLocationCell] */

void FUN_10601c41c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010901e6c8();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    lVar3 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010601da80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar10 = PTR_PTR_1126c7238;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2923e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09f720(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar10 = PTR_PTR_1126b10a0;
  func_0x00010c2655e0(PTR_PTR_1126b10a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  _objc_initWeak(auStack_70,puVar10);
  _objc_copyWeak(auStack_80,auStack_70);
  _objc_copyWeak(auStack_78,auStack_68);
  puVar11 = puVar10;
  func_0x00010bf1d200(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar10);
  _objc_release(puVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10601c6c8; end: 10601c72f;  */

void FUN_10601c6c8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ffc0();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10601c730; end: 10601c947; -[SCMapFriendActionLocationSheet _handleLocationSettingsTappedWithActionSheet:] */

void FUN_10601c730(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c0a0440(uVar9);
  puVar1 = param_1;
  func_0x00010be61aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c22c5c0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 == 1) {
    func_0x00010be4f860();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    puVar5 = param_1;
    func_0x00010beb1ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x80);
    *(undefined **)(param_1 + 0x80) = puVar5;
    _objc_release(uVar9);
    param_1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
  }
  puVar6 = PTR_PTR_1126b10a0;
  func_0x00010601da98();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(param_1);
  puVar6 = puVar7;
  func_0x00010c160fc0(puVar7);
  func_0x00010601da50();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1312e0(param_3);
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  uVar9 = param_2;
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeef20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 10601c948; end: 10601c993;  */

void FUN_10601c948(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeef20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10601c994; end: 10601caff; -[SCMapFriendActionLocationSheet _handleMuteFriendLocationToggledWithActionSheet:cell:] */

void FUN_10601c994(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c071800();
  if ((int)uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010c07d660();
    if ((uVar1 & 1) == 0) {
      func_0x00010be04860(param_1);
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      func_0x00010c195460(param_4);
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c2923e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_4);
      func_0x00010c281960(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10601cb00; end: 10601cb53;  */

void FUN_10601cb00(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32740();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10601cb54; end: 10601ce5b; -[SCMapFriendActionLocationSheet _displayMuteConfirmationAlertWithActionsheet:cell:] */

void FUN_10601cb54(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  if (lVar2 == 0) {
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010901e6c8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar4;
  }
  _objc_release(lVar1);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010601dab0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010601dac8();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_80;
  _objc_initWeak(puVar6,param_1);
  puVar7 = PTR_PTR_1126aed70;
  func_0x00010601dae0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = auStack_80;
  _objc_copyWeak(auStack_88,puVar11);
  _objc_retain(param_4);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar8 = PTR_PTR_1126aed70;
  func_0x00010601daf8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar9 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar7;
  puStack_70 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar9);
  _objc_release(puVar10);
  func_0x00010c10eda0(param_3);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  _objc_retain(puVar11);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010be00ee0();
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10601ce5c; end: 10601ceaf;  */

void FUN_10601ce5c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00ee0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10601ceb0; end: 10601cebf;  */

void FUN_10601ceb0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10601cec0; end: 10601d007; -[SCMapFriendActionLocationSheet _didTapMuteConfirmationWithAlert:cell:] */

void FUN_10601cec0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0d3fa0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10601d008; end: 10601d05b;  */

void FUN_10601d008(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c880();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10601d05c; end: 10601d08b; -[SCMapFriendActionLocationSheet _handleMutedFriendsList:] */

void FUN_10601d05c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10601d08c; end: 10601d223; -[SCMapFriendActionLocationSheet _handleUnmuteServiceResponseWithError:cell:] */

void FUN_10601d08c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10601d144;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10601d224; end: 10601d307; -[SCMapFriendActionLocationSheet _handleMuteServiceResponseWithError:cell:alert:] */

void FUN_10601d224(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10601d308;
  puStack_68 = &UNK_11084c4a0;
  uStack_60 = param_3;
  lStack_58 = param_1;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10601d308; end: 10601d3eb;  */

void FUN_10601d308(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    func_0x00010c1fade0(*(undefined8 *)(param_1 + 0x30),param_2,1,1);
    func_0x00010c0a0440(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20));
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
    func_0x00010c0dc640(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126afde0;
    func_0x00010601db10();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf55ce0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c25f340(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10601d3ec; end: 10601d4e3; -[SCMapFriendActionLocationSheet _handleShareLocationToggledWithActionSheet:cell:] */

void FUN_10601d3ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  byte bStack_38;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c071800();
  if ((int)uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010c07d660();
    func_0x00010c195460(*(undefined8 *)(param_1 + 0x80));
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x10601d494;
    puStack_48 = &UNK_110845ce0;
    lStack_40 = param_1;
    bStack_38 = (byte)uVar1 ^ 1;
    func_0x0001000d76cc("APPSTORE",&puStack_60);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10601d4e4; end: 10601d67f; -[SCMapFriendActionLocationSheet _performShareLocationActionWithFriendId:shouldShare:] */

void FUN_10601d4e4(undefined *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_1;
  if (*(long *)(param_1 + 0x58) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(param_3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bfcc660();
    _objc_release(uVar2);
    _objc_release(uVar7);
    uVar1 = 2;
    if ((int)uVar6 == 0) {
      uVar1 = param_4 ^ 1;
    }
    puVar3 = PTR_PTR_1126b1c10;
    _objc_alloc();
    func_0x00010c063240(*(undefined8 *)PTR__UIWindowLevelNormal_110345e88);
    puVar4 = PTR_PTR_1126c59a0;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_50 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0583e0(puVar4,param_2,puVar3,param_1,4,puVar5,uVar1);
    _objc_release(puVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar2;
    _objc_release(uVar7);
    _objc_release(uVar6);
    func_0x00010c10ae00(*(undefined8 *)(param_1 + 0x58));
    _objc_release(param_3);
    _objc_release(puVar4);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar3 + 0x90) != 0) {
    return;
  }
  puVar4 = PTR_PTR_1126b1c10;
  _objc_alloc(PTR_PTR_1126b1c10);
  func_0x00010c063240(*(undefined8 *)PTR__UIWindowLevelNormal_110345e88);
  puVar5 = PTR_PTR_1126c3158;
  _objc_alloc(PTR_PTR_1126c3158);
  func_0x00010c0583c0();
  uVar6 = *(undefined8 *)(puVar3 + 0x88);
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bf21f80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar3 + 0x90);
  *(undefined8 *)(puVar3 + 0x90) = uVar2;
  _objc_release(uVar7);
  _objc_release(uVar6);
  func_0x00010c08bd40(*(undefined8 *)(puVar3 + 0x90));
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10601d680; end: 10601d73f; -[SCMapFriendActionLocationSheet _handleLocationSharingSettingsTapped] */

void FUN_10601d680(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126b1c10;
  _objc_alloc(PTR_PTR_1126b1c10);
  func_0x00010c063240(*(undefined8 *)PTR__UIWindowLevelNormal_110345e88);
  puVar2 = PTR_PTR_1126c3158;
  _objc_alloc(PTR_PTR_1126c3158);
  func_0x00010c0583c0();
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf21f80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  func_0x00010c08bd40(*(undefined8 *)(param_1 + 0x90));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10601d740; end: 10601d7af; -[SCMapFriendActionLocationSheet shareLocationFlowScopeDidDismiss] */

void FUN_10601d740(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10601d7b0;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  return;
}



/* Entry: 10601d7b0; end: 10601d7bf;  */

void FUN_10601d7b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80),PTR_s_setEnabled__112642f38,1);
  return;
}



/* Entry: 10601d7c0; end: 10601d81b; -[SCMapFriendActionLocationSheet onExitGhostModeWith:] */

void FUN_10601d7c0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10601d81c;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_40);
  return;
}



/* Entry: 10601d81c; end: 10601d85f;  */

void FUN_10601d81c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
    uVar1 = uVar2;
    func_0x00010c07d660(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1fadf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar2,PTR_s_setSelected_animated__11265c5a0,(uint)uVar1 ^ 1,1);
    return;
  }
  return;
}



/* Entry: 10601d860; end: 10601d8bb; -[SCMapFriendActionLocationSheet onShareLocationActionCompletedWith:success:] */

void FUN_10601d860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10601d8bc;
  puStack_30 = &UNK_110861e68;
  uStack_28 = param_1;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  return;
}



/* Entry: 10601d8bc; end: 10601d933;  */

void FUN_10601d8bc(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
    func_0x00010c07d660(uVar1);
    func_0x00010c1fade0(uVar1);
    if (*(ulong *)(param_1 + 0x28) < 3) {
      func_0x00010c0a0440(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80),PTR_s_setEnabled__112642f38,1);
  return;
}



/* Entry: 10601d934; end: 10601d943; -[SCMapFriendActionLocationSheet locationSharingSettingsScopeDidDismiss] */

void FUN_10601d934(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10601d944; end: 10601d94b; -[SCMapFriendActionLocationSheet position] */

undefined8 FUN_10601d944(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10601d94c; end: 10601d953; -[SCMapFriendActionLocationSheet prominentActionButton] */

undefined8 FUN_10601d94c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10601d954; end: 10601da4f; -[SCMapFriendActionLocationSheet .cxx_destruct] */

void FUN_10601d954(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
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



/* Entry: 10601da50; end: 10601db5f;  */

void FUN_10601da50(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e38c78;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e38c78,
                      &PTR____CFConstantStringClassReference_110e38c98,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10601db60; end: 10601ddc3; +[SCLocationSharingHelper locationSharingStatusForPersonWithUserId:currentUserId:locationSharingPreferences:mapPeopleFriendsProvider:mapUserPreferences:userLocationPermissionsManager:] */

undefined8
FUN_10601db60(undefined8 param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
             long param_6,ulong param_7,ulong param_8)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010c08fa60();
    uVar7 = 0xb;
    if ((((param_7 == 0) || (param_6 == 0)) || (param_5 == 0)) || (lVar2 == 0)) goto LAB_10601dcd8;
    func_0x00010be42900(param_1,param_2,param_3,param_4,param_6);
    if ((int)param_1 != 0) {
      lVar2 = param_6;
      func_0x00010c0b96e0(param_6,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      if ((lVar2 == 0) || (uVar3 = param_5, func_0x00010bfd7100(), (int)uVar3 == 0)) {
        uVar7 = 0xb;
      }
      else {
        uVar3 = param_5;
        func_0x00010bfd6d40();
        if ((int)uVar3 == 0) {
          uVar7 = 1;
        }
        else {
          uVar3 = param_5;
          func_0x00010c1067a0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bfcc660();
          if ((((int)uVar4 == 0) || (uVar4 = param_7, func_0x00010beff680(), (uVar4 & 1) == 0)) &&
             (uVar4 = uVar3, func_0x00010c22c5c0(), uVar4 != 0)) {
            if (uVar4 == 3) {
              uVar4 = uVar3;
              func_0x00010bf1c9a0();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar4;
              func_0x00010bf4b900();
              _objc_release(uVar4);
              if ((int)uVar5 != 0) {
                uVar4 = uVar3;
                func_0x00010bfcc660();
                iVar1 = (int)uVar4;
                uVar6 = 3;
                uVar7 = 8;
LAB_10601dd78:
                if (iVar1 == 0) {
                  uVar7 = uVar6;
                }
                goto LAB_10601ddb8;
              }
            }
            else if (uVar4 == 2) {
              uVar4 = uVar3;
              func_0x00010c2a4ba0();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar4;
              func_0x00010bf4b900();
              _objc_release(uVar4);
              if ((uVar5 & 1) == 0) {
                uVar4 = uVar3;
                func_0x00010bfcc660();
                iVar1 = (int)uVar4;
                uVar6 = 2;
                uVar7 = 7;
                goto LAB_10601dd78;
              }
            }
            uVar4 = uVar3;
            func_0x00010bfcc660();
            if ((uVar4 & 1) == 0) {
              uVar4 = param_8;
              func_0x00010bf10fa0();
              if (uVar4 < 5) {
                uVar7 = *(undefined8 *)(&UNK_10ddd39c8 + uVar4 * 8);
              }
              else {
                uVar7 = 0;
              }
            }
            else {
              uVar7 = 4;
            }
          }
          else {
            uVar7 = 6;
          }
LAB_10601ddb8:
          _objc_release(uVar3);
        }
      }
      _objc_release(lVar2);
      goto LAB_10601dcd8;
    }
  }
  uVar7 = 0xb;
LAB_10601dcd8:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 10601ddc4; end: 10601df33; +[SCLocationSharingHelper _isPersonWithUserId:currentUserId:mapPeopleFriendsProvider:] */

bool FUN_10601ddc4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (((param_5 == 0) || (lVar2 = param_3, func_0x00010c08fa60(), lVar2 == 0)) ||
     (lVar2 = param_4, func_0x00010c08fa60(), lVar2 == 0)) {
    bVar1 = false;
    goto LAB_10601dea4;
  }
  uVar3 = param_5;
  func_0x00010c0b96e0(param_5,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
LAB_10601de90:
    bVar1 = false;
  }
  else {
    uVar4 = uVar3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    if ((int)uVar5 != 0) {
LAB_10601de88:
      _objc_release(uVar4);
      goto LAB_10601de90;
    }
    uVar5 = uVar3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0720c0();
    if ((int)uVar6 != 0) {
      _objc_release(uVar5);
      goto LAB_10601de88;
    }
    uVar6 = uVar3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((uVar7 & 1) != 0) goto LAB_10601de90;
    uVar4 = param_5;
    func_0x00010bfb9020(param_5,param_2,param_3);
    bVar1 = uVar4 == 1;
  }
  _objc_release(uVar3);
LAB_10601dea4:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10601df34; end: 10601e03b; -[SCAddFriendsQuickAddCarouselSection collectionView:willDisplayCell:atIndexInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10601df34(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c20f8;
  _objc_opt_class(PTR_PTR_1126c20f8);
  uVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  if ((param_4 != 0) && ((uVar2 & 1) != 0)) {
    _objc_storeWeak(param_1 + (long)_DAT_11273d004,param_4);
    puStack_38 = PTR_PTR_1126ef1b0;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_collectionView_willDisplayCell_a_1125adb08,param_3,param_4,
                        param_5);
    func_0x00010c155a60();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126c7240;
    _objc_opt_class(PTR_PTR_1126c7240);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    uVar2 = param_1;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    func_0x00010c0acf20(uVar2);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10601e03c; end: 10601e04f; -[SCAddFriendsQuickAddCarouselSection collectionViewDidEndDisplayingCell:atIndexInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10601e03c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273d004,0);
  return;
}



/* Entry: 10601e050; end: 10601e13f; -[SCAddFriendsQuickAddCarouselSection dismissTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10601e050(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11273d004;
  _objc_retain(param_5);
  lVar1 = param_3 + lVar4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf512a0(param_1,param_2,param_5,param_4,lVar1);
  _objc_release(param_5);
  _objc_release(lVar1);
  lVar1 = param_3 + lVar4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c102b20(param_1,param_2);
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    bVar3 = true;
  }
  else {
    param_3 = param_3 + lVar4;
    _objc_loadWeakRetained(param_3);
    lVar1 = param_3;
    func_0x00010bf4c080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    bVar3 = param_1 <= 0.0;
    _objc_release(lVar1);
    _objc_release(param_3);
  }
  return bVar3;
}



/* Entry: 10601e140; end: 10601e18f; -[SCAddFriendsQuickAddCarouselSection dismissTransitionWillBegin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10601e140(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11273d004;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10601e190; end: 10601e1df; -[SCAddFriendsQuickAddCarouselSection dismissTransitionDidEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10601e190(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11273d004;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10601e1e0; end: 10601e1ef; -[SCAddFriendsQuickAddCarouselSection .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10601e1e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273d004);
  return;
}



/* Entry: 10601e1f0; end: 10601e1fb; +[SCAddFriendsQuickAddCarouselSectionDataProvider announcerIdentifier] */

undefined ** FUN_10601e1f0(void)

{
  return &PTR____CFConstantStringClassReference_110db82d8;
}



/* Entry: 10601e1fc; end: 10601e203; -[SCAddFriendsQuickAddCarouselSectionDataProvider addListener:] */

void FUN_10601e1fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10601e204; end: 10601e20b; -[SCAddFriendsQuickAddCarouselSectionDataProvider removeListener:] */

void FUN_10601e204(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10601e20c; end: 10601e40f; -[SCAddFriendsQuickAddCarouselSectionDataProvider initWithSnapchattersDataFetcher:snapchattersDataTracker:imageDownloader:displayDateObservable:viewModelGenerator:snapchatterRanker:suggestionPageType:useSCSnapchatterCollectionViewCell:configsProvider:circumstanceEngine:] */

undefined8 *
FUN_10601e20c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126ef1b8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar3);
    uVar3 = param_7;
    _objc_retainBlock();
    uVar4 = puVar1[0xb];
    puVar1[0xb] = uVar3;
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar3 = puVar1[0xc];
    puVar1[0xc] = param_8;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[9];
    puVar1[9] = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)(puVar1 + 0xd) = param_9;
    *(undefined1 *)((long)puVar1 + 0x6c) = param_10;
    _objc_retain(param_11);
    uVar3 = puVar1[0xe];
    puVar1[0xe] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar1[0xf];
    puVar1[0xf] = param_12;
    _objc_release(uVar3);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10601e410; end: 10601e487; -[SCAddFriendsQuickAddCarouselSectionDataProvider configureProfileQuickAddCarouselImpressionLoggingWithLogger:surfaceSessionId:] */

void FUN_10601e410(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf51e00();
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10601e488; end: 10601e50f; -[SCAddFriendsQuickAddCarouselSectionDataProvider avoidShowingSnapchatterWithUserId:] */

void FUN_10601e488(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = *(undefined **)(param_1 + 0x40);
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0d3c80();
    }
    func_0x00010befa120();
    puVar2 = puVar1;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10601e510; end: 10601e687; -[SCAddFriendsQuickAddCarouselSectionDataProvider setUp] */

void FUN_10601e510(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  _objc_opt_new(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21b4a0(puVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0e0e60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar1 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar2);
  return;
}



/* Entry: 10601e688; end: 10601e6cf;  */

void FUN_10601e688(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea37e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10601e6d0; end: 10601e717; -[SCAddFriendsQuickAddCarouselSectionDataProvider tearDown] */

void FUN_10601e6d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10601e718; end: 10601e71f; -[SCAddFriendsQuickAddCarouselSectionDataProvider dataLoadingStatus] */

undefined8 FUN_10601e718(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10601e720; end: 10601e853; -[SCAddFriendsQuickAddCarouselSectionDataProvider setSectionDataModel:] */

void FUN_10601e720(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + 0x10) = 1;
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c2622c0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10601e854; end: 10601e89b;  */

void FUN_10601e854(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be85c00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10601e89c; end: 10601e8ef; -[SCAddFriendsQuickAddCarouselSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_10601e89c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10601e8f0;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10601e8f0; end: 10601e8fb;  */

void FUN_10601e8f0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde7430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__containerCellViewModelForIndexP_1125576a8,
             param_2);
  return;
}



/* Entry: 10601e8fc; end: 10601e9b7; -[SCAddFriendsQuickAddCarouselSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_10601e8fc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    _objc_opt_class();
  }
  else {
    _objc_opt_class();
  }
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(puVar1 + 0x38),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10601e9b8; end: 10601e9bf; -[SCAddFriendsQuickAddCarouselSectionDataProvider numberOfItemsInSection:] */

void FUN_10601e9b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10601e9c0; end: 10601eaeb; -[SCAddFriendsQuickAddCarouselSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_10601e9c0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_50,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10601eaec;
  puStack_60 = &UNK_110845ae0;
  puVar5 = auStack_50;
  _objc_copyWeak(auStack_58,puVar5);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e38dd8;
  ppuVar2 = ppuVar1;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_58);
  puVar4 = auStack_50;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_50);
  __Unwind_Resume(puVar4);
  _objc_retain(puVar5);
  puVar4 = puVar4 + 0x20;
  _objc_loadWeakRetained(puVar4);
  func_0x00010bde5680();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10601eaec; end: 10601eb33;  */

void FUN_10601eaec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5680();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10601eb34; end: 10601eb3b; -[SCAddFriendsQuickAddCarouselSectionDataProvider itemCountForCarouselSection] */

void FUN_10601eb34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10601eb3c; end: 10601eb93; -[SCAddFriendsQuickAddCarouselSectionDataProvider didStartSnapchattersUpdateDataRequest:] */

void FUN_10601eb3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10601eb94;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010c0bc6e0(param_3,param_2,&puStack_38);
  return;
}



/* Entry: 10601eb94; end: 10601ec3f;  */

void FUN_10601eb94(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10601ec40; end: 10601ec6b;  */

void FUN_10601ec40(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10601ec6c; end: 10601ed4b; -[SCAddFriendsQuickAddCarouselSectionDataProvider didStartSnapchattersSuggestDataRequest:] */

void FUN_10601ec6c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf0a7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10601ed4c; end: 10601ed77;  */

void FUN_10601ed4c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10601ed78; end: 10601ef93; -[SCAddFriendsQuickAddCarouselSectionDataProvider didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_10601ed78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10601ef94;
  puStack_90 = &UNK_1108b68d0;
  uStack_88 = param_1;
  _objc_copyWeak(auStack_80,auStack_78);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_10601f0fc;
  puStack_c0 = &UNK_1108b6900;
  uStack_b8 = param_1;
  _objc_copyWeak(auStack_b0,auStack_78);
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_10601f234;
  puStack_f0 = &UNK_1109088c0;
  uStack_e8 = param_1;
  _objc_copyWeak(auStack_e0,auStack_78);
  puStack_138 = puVar1;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_10601f328;
  puStack_120 = &UNK_1108b6930;
  uStack_118 = param_1;
  _objc_copyWeak(auStack_110,auStack_78);
  _objc_copyWeak(auStack_140,auStack_78);
  func_0x00010c0bc6c0(param_3);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10601ef94; end: 10601f0cb;  */

void FUN_10601ef94(long param_1,undefined8 param_2)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar1;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000010);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
  _objc_copyWeak(auStack_68,param_1 + 0x28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(param_2);
  return;
}



/* Entry: 10601f0cc; end: 10601f0f7;  */

void FUN_10601f0cc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10601f0f8; end: 10601f0fb;  */

void FUN_10601f0f8(void)

{
  return;
}



/* Entry: 10601f0fc; end: 10601f207;  */

void FUN_10601f0fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
  _objc_copyWeak(auStack_58,param_1 + 0x28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 10601f208; end: 10601f233;  */

void FUN_10601f208(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10601f234; end: 10601f2fb;  */

void FUN_10601f234(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10601f2fc; end: 10601f327;  */

void FUN_10601f2fc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10601f328; end: 10601f403;  */

void FUN_10601f328(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10601f404; end: 10601f42f;  */

void FUN_10601f404(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10601f430; end: 10601f433;  */

void FUN_10601f430(void)

{
  return;
}



/* Entry: 10601f434; end: 10601f4fb;  */

void FUN_10601f434(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10601f4fc; end: 10601f527;  */

void FUN_10601f4fc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10601f528; end: 10601f52b;  */

void FUN_10601f528(void)

{
  return;
}



/* Entry: 10601f52c; end: 10601f61f; -[SCAddFriendsQuickAddCarouselSectionDataProvider didEndSnapchattersFetchDataRequest:withSuccess:error:] */

void FUN_10601f52c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf0a6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10601f620; end: 10601f64b;  */

void FUN_10601f620(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10601f64c; end: 10601f787; -[SCAddFriendsQuickAddCarouselSectionDataProvider didEndSnapchattersSuggestDataRequest:withSuccess:error:] */

void FUN_10601f64c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10601f788;
  puStack_70 = &UNK_110908930;
  uStack_68 = param_1;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c0bdc80(param_3);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10601f788; end: 10601f817;  */

void FUN_10601f788(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10601f818; end: 10601f843;  */

void FUN_10601f818(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10601f844; end: 10601f8ef;  */

void FUN_10601f844(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10601f8f0; end: 10601f91b;  */

void FUN_10601f8f0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10601f91c; end: 10601f923;  */

void FUN_10601f91c(void)

{
  return;
}



/* Entry: 10601f924; end: 10601fa87; -[SCAddFriendsQuickAddCarouselSectionDataProvider _containerCellViewModelForIndexPath:] */

void FUN_10601f924(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c142240(param_3);
  func_0x00010c0dfd40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c2923e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfeb7a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar4);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  lVar1 = *(long *)(param_1 + 0x58);
  uVar4 = 1;
  func_0x00010bc9107c(1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf529e0(uVar5);
  (**(code **)(lVar1 + 0x10))
            (lVar1,uVar6,param_3,&PTR____CFConstantStringClassReference_110ea9018,lVar2 != 0,uVar4,
             uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bffd260(puVar3);
  _objc_release(lVar1);
  _objc_release(uVar4);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10601fa88; end: 10601fb0f; -[SCAddFriendsQuickAddCarouselSectionDataProvider _configureRecipientCollectionViewCell:] */

void FUN_10601fa88(long param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  ppuVar1 = &PTR_PTR_1126b16d8;
  if (*(char *)(param_1 + 0x6c) == '\0') {
    ppuVar1 = &PTR_PTR_1126c7248;
  }
  puVar3 = *ppuVar1;
  _objc_opt_class(puVar3);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar2 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  func_0x00010c1aa200(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10601fb10; end: 10601fbf7; -[SCAddFriendsQuickAddCarouselSectionDataProvider _rankAndSetSnapchatters:] */

void FUN_10601fb10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x60) == 0) {
    func_0x00010bea7bc0(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c11f6a0(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10601fbf8; end: 10601fc3f;  */

void FUN_10601fbf8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea7bc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10601fc40; end: 10601fdab; -[SCAddFriendsQuickAddCarouselSectionDataProvider _setSnapchatters:] */

void FUN_10601fc40(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x10601fd20;
    puStack_40 = &UNK_11085a548;
    puVar3 = param_3;
    lStack_38 = param_1;
    func_0x0001006372a4(param_3,&puStack_58);
    _objc_release(param_3);
    puVar1 = puVar3;
    func_0x00010bf529e0();
    if (puVar1 == (undefined *)0x0) {
      _objc_release(puVar3);
      puVar3 = PTR____NSArray0__struct_11034ab48;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar3;
  _objc_release(uVar2);
  uVar2 = 1;
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar2 = 2;
  }
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  param_1 = param_1 + 0x98;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10601fdac; end: 10601fe03; -[SCAddFriendsQuickAddCarouselSectionDataProvider logProfileQuickAddCarouselImpressionOnDisplay] */

void FUN_10601fdac(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10601fe04;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0xa8),param_2,&puStack_38);
  return;
}



/* Entry: 10601fe04; end: 10601fe0b;  */

void FUN_10601fe04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be573f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logProfileQuickAddCarouselImpre_112573698);
  return;
}



/* Entry: 10601fe0c; end: 10601ffa3; -[SCAddFriendsQuickAddCarouselSectionDataProvider _logProfileQuickAddCarouselImpressionIfNeeded] */

void FUN_10601fe0c(double param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  if (((*(byte *)(param_2 + 0x90) & 1) == 0) && (*(long *)(param_2 + 0x80) != 0)) {
    lVar2 = *(long *)(param_2 + 0x88);
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      lVar2 = *(long *)(param_2 + 0x38);
      func_0x00010bf529e0();
      if (lVar2 != 0) {
        uVar3 = *(ulong *)(param_2 + 0x38);
        func_0x00010bf529e0();
        uVar1 = uVar3;
        if (9 < uVar3) {
          uVar1 = 10;
        }
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_3,uVar1);
        _objc_retainAutoreleasedReturnValue();
        if (uVar3 != 0) {
          uVar3 = 0;
          do {
            lVar5 = *(long *)(param_2 + 0x38);
            func_0x00010c0dfd40(lVar5,param_3,uVar3);
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lVar5;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar5);
            lVar5 = lVar2;
            func_0x00010c08fa60();
            if (lVar5 != 0) {
              puVar6 = PTR_PTR_1126b4a10;
              _objc_alloc(PTR_PTR_1126b4a10);
              func_0x00010c050cc0();
              func_0x00010befa120(puVar4,param_3,puVar6);
              _objc_release(puVar6);
            }
            _objc_release(lVar2);
            uVar3 = uVar3 + 1;
          } while (uVar1 != uVar3);
        }
        puVar6 = puVar4;
        func_0x00010bf529e0();
        if (puVar6 != (undefined *)0x0) {
          *(undefined1 *)(param_2 + 0x90) = 1;
          puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f320();
          _objc_release(puVar6);
          func_0x00010c0aeee0(*(undefined8 *)(param_2 + 0x80),param_3,9,2,0,(long)(param_1 * 1000.0)
                              ,*(undefined8 *)(param_2 + 0x88),puVar4);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar4);
        return;
      }
    }
  }
  return;
}



/* Entry: 10601ffa4; end: 10601ffdb; -[SCAddFriendsQuickAddCarouselSectionDataProvider _updateSectionDataModel] */

void FUN_10601ffa4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bf51e00(uVar1);
  func_0x00010c1f9220(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10601ffdc; end: 10602008f; -[SCAddFriendsQuickAddCarouselSectionDataProvider _setDisplayDate:] */

void FUN_10601ffdc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x48);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_10602007c;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(ulong *)(param_1 + 0x48) = param_3;
    _objc_release(uVar2);
    func_0x00010bedf280(param_1);
  }
LAB_10602007c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106020090; end: 106020153; -[SCAddFriendsQuickAddCarouselSectionDataProvider _shuffleTopKSnapchatters:topK:] */

void FUN_106020090(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (param_4 <= uVar1) {
    uVar1 = param_4;
  }
  uVar2 = param_3;
  func_0x00010bf529e0(param_3);
  uVar3 = param_3;
  func_0x00010c25e980(param_3,param_2,0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0d3c80();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c25e980(param_3,param_2,uVar1,uVar2 - uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c23b4a0(uVar4);
  func_0x00010befa160(uVar4,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106020154; end: 106020167; -[SCAddFriendsQuickAddCarouselSectionDataProvider didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_106020154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110f8a778);
  return;
}



/* Entry: 106020168; end: 10602017f; -[SCAddFriendsQuickAddCarouselSectionDataProvider dataProviderDelegate] */

void FUN_106020168(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106020180; end: 10602018b; -[SCAddFriendsQuickAddCarouselSectionDataProvider setDataProviderDelegate:] */

void FUN_106020180(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x98,param_3);
  return;
}



/* Entry: 10602018c; end: 106020193; -[SCAddFriendsQuickAddCarouselSectionDataProvider sectionDataModel] */

undefined8 FUN_10602018c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 106020194; end: 10602019b; -[SCAddFriendsQuickAddCarouselSectionDataProvider updateQueuePerformer] */

undefined8 FUN_106020194(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10602019c; end: 1060201cb; -[SCAddFriendsQuickAddCarouselSectionDataProvider setUpdateQueuePerformer:] */

void FUN_10602019c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


