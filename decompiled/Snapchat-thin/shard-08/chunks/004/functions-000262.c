/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106080b18; end: 106080c8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106080b18(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_11090af40,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar2 = pcVar1 + _DAT_11273e1c8;
  _objc_loadWeakRetained();
  pcVar1 = pcVar1 + _DAT_11273e1cc;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126ae720;
  _objc_retain();
  _objc_retain(pcVar2);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c76d0;
  _objc_alloc(PTR_PTR_1126c76d0);
  func_0x00010c062640();
  _objc_release(puVar3);
  _objc_release(pcVar1);
  _objc_release(pcVar2);
  _objc_release(pcVar1);
  _objc_release(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106080c8c; end: 106080e03; -[SCVoiceMLLensNotificationServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106080c8c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1 + _DAT_11273e1c8;
  _objc_loadWeakRetained();
  param_1 = param_1 + _DAT_11273e1cc;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126ae720;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106080d80;
  puStack_48 = &UNK_11090b010;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_retain();
  _objc_retain(lVar1);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c76d0;
  _objc_alloc(PTR_PTR_1126c76d0);
  func_0x00010c062640();
  _objc_release(puVar2);
  _objc_release(lStack_38);
  _objc_release(lStack_40);
  _objc_release(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106080e04; end: 106080e47; -[SCVoiceMLLensNotificationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106080e04(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273e1d0);
  _objc_destroyWeak(param_1 + _DAT_11273e1cc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273e1c8);
  return;
}



/* Entry: 106080e48; end: 106080f13; +[SCVoiceMLNotificationImageTitleInfoPresenter createPresenterImage:imageContentMode:title:info:accessibilityIdentifier:actionHandler:] */

void FUN_106080e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c76d8;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038c20();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106080f14; end: 1060810a3; -[SCVoiceMLNotificationImageTitleInfoPresenter initWithPresenterImage:imageContentMode:title:info:actionHandler:accessibilityIdentifier:] */

undefined8 *
FUN_106080f14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ef6e0;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    puVar1[0xc] = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar4 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar4 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar4 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar4 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1060810a4; end: 106081113; -[SCVoiceMLNotificationImageTitleInfoPresenter dialog] */

void FUN_1060810a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c76e0;
    _objc_alloc();
    func_0x00010c01c120();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)(param_1 + 8),param_2,0);
    lVar3 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106081114; end: 106081117; -[SCVoiceMLNotificationImageTitleInfoPresenter containerView] */

void FUN_106081114(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf71cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dialog_1125ba0e0);
  return;
}



/* Entry: 106081118; end: 1060815ef; -[SCVoiceMLNotificationImageTitleInfoPresenter presentNotificationOverView:completion:] */

void FUN_106081118(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1060815f0;
  puStack_b0 = &UNK_110849530;
  _objc_retain(param_5);
  ppuVar2 = &puStack_c8;
  uStack_a8 = param_5;
  _objc_retainBlock();
  ppuVar3 = ppuVar2;
  func_0x00010bf51e00();
  uVar16 = *(undefined8 *)(param_2 + 0x48);
  *(undefined ***)(param_2 + 0x48) = ppuVar3;
  _objc_release(uVar16);
  if (param_4 == 0) {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  else {
    lVar4 = param_2;
    func_0x00010bf71ce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_4);
    _objc_release(lVar4);
    lVar4 = param_2;
    func_0x00010bf71ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    func_0x00010c274200(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14da40(PTR__OBJC_CLASS___UIScreen_1126aea10);
    lVar7 = lVar5;
    func_0x00010bf493c0(param_1 + 16.0);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_2 + 0x38);
    *(long *)(param_2 + 0x38) = lVar7;
    _objc_release(uVar16);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = param_2;
    func_0x00010bf71ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    func_0x00010c274200(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_2 + 0x40);
    *(long *)(param_2 + 0x40) = lVar7;
    _objc_release(uVar16);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar4 = param_2;
    func_0x00010bf71ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_2;
    lStack_a0 = lVar7;
    func_0x00010bf71ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_4;
    func_0x00010c2793a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar9;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_2;
    lStack_98 = lVar11;
    func_0x00010bf71ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010bf494e0(0);
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = *(undefined8 *)(param_2 + 0x40);
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_90 = lVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    func_0x00010c08cdc0(param_4);
    func_0x00010c162480(*(undefined8 *)(param_2 + 0x40));
    func_0x00010c162480(*(undefined8 *)(param_2 + 0x38));
    puVar15 = PTR__OBJC_CLASS___UIView_1126aec20;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x106081604;
    puStack_d8 = &UNK_110842e18;
    _objc_retain(param_4);
    lStack_d0 = param_4;
    func_0x00010bf03420(0x3fd3333333333333,puVar15);
    _objc_initWeak(auStack_f8,param_2);
    puStack_120 = puVar1;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_10608160c;
    puStack_108 = &UNK_1108434b0;
    _objc_copyWeak(auStack_100,auStack_f8);
    uVar16 = 0;
    func_0x0001008553e8(0,&puStack_120);
    uVar17 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_2 + 0x50) = uVar16;
    _objc_release(uVar17);
    _dispatch_time(0,3300000000);
    func_0x00010058c530();
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_f8);
    _objc_release(lStack_d0);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_a8);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_4 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001060815fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_4 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1060815f0; end: 10608160b;  */

void FUN_1060815f0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001060815fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10608160c; end: 10608163f;  */

void FUN_10608160c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be0ba80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106081640; end: 106081677; -[SCVoiceMLNotificationImageTitleInfoPresenter dismissPresenter] */

void FUN_106081640(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__executeDismissAnimation_112560840);
  return;
}



/* Entry: 106081678; end: 10608176b; -[SCVoiceMLNotificationImageTitleInfoPresenter _executeDismissAnimation] */

void FUN_106081678(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf71ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010c162480(*(undefined8 *)(param_1 + 0x38));
    func_0x00010c162480(*(undefined8 *)(param_1 + 0x40));
    func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0b950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__executeCompletionBlock_1125607f0);
  return;
}



/* Entry: 10608176c; end: 1060817b7;  */

void FUN_10608176c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf71ce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060817b8; end: 1060817bf;  */

void FUN_1060817b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0b950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__executeCompletionBlock_1125607f0);
  return;
}



/* Entry: 1060817c0; end: 1060817d3; -[SCVoiceMLNotificationImageTitleInfoPresenter _executeCompletionBlock] */

void FUN_1060817c0(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001060817cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1060817d4; end: 1060817fb; -[SCVoiceMLNotificationImageTitleInfoPresenter debugInfo] */

void FUN_1060817d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060817fc; end: 106081897; -[SCVoiceMLNotificationImageTitleInfoPresenter .cxx_destruct] */

void FUN_1060817fc(long param_1)

{
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



/* Entry: 106081898; end: 1060819cb; -[SCVoiceMLVoiceOnNotificationImageTitleInfoDialog initWithImage:imageContentMode:title:info:actionHandler:accessibilityIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106081898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ef6e8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_60,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273e204) = 0;
    uVar2 = param_7;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273e208);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273e208) = uVar2;
    _objc_release(uVar3);
    func_0x00010c160fc0(puVar1);
    func_0x00010beacc80(puVar1);
    func_0x00010bde5e60(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060819cc; end: 106081a7b; -[SCVoiceMLVoiceOnNotificationImageTitleInfoDialog setHighlighted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060819cc(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (*(byte *)(param_1 + _DAT_11273e204) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11273e204) = (char)param_3;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (param_3 == 0) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf414e0(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1,param_2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106081a7c; end: 10608272b; -[SCVoiceMLVoiceOnNotificationImageTitleInfoDialog _configureUIWithTitle:info:imageFuture:imageContentMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106081a7c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  long lVar26;
  undefined *puVar27;
  long lVar28;
  long lVar29;
  undefined *puVar30;
  undefined *puVar31;
  long lVar32;
  undefined *puVar33;
  undefined1 *puVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
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
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  uVar36 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar37 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar38 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar39 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar36,uVar37,uVar38,uVar39);
  func_0x00010c21e900();
  func_0x00010c219b60(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar2);
  func_0x00010c182220(puVar1);
  func_0x00010c17d4c0(puVar1);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(puVar2);
  func_0x00010befbb60(param_1);
  _objc_initWeak(auStack_128,puVar1);
  puVar3 = auStack_130;
  puVar34 = auStack_128;
  _objc_copyWeak(puVar3,puVar34);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(param_5);
  _objc_release(puVar3);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010c21e900(puVar4);
  func_0x00010c219b60(puVar4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar4);
  _objc_release(puVar2);
  func_0x00010befbb60(param_1);
  puVar5 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar36,uVar37,uVar38,uVar39);
  func_0x00010c21e900();
  func_0x00010c21ad00(puVar5);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar5);
  _objc_release(puVar2);
  func_0x00010c212f20(puVar5);
  func_0x00010c1cfce0(puVar5);
  func_0x00010c213040(puVar5);
  func_0x00010c219b60(puVar5);
  lVar35 = (long)_DAT_11273e20c;
  _objc_retain(puVar5);
  uVar6 = *(undefined8 *)(param_1 + lVar35);
  *(undefined **)(param_1 + lVar35) = puVar5;
  _objc_release(uVar6);
  func_0x00010befbb60(puVar4);
  puVar7 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar36,uVar37,uVar38,uVar39);
  func_0x00010c21e900(puVar7);
  func_0x00010c21ad00(puVar7);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar7);
  _objc_release(puVar2);
  func_0x00010c212f20(puVar7);
  func_0x00010c1cfce0(puVar7);
  func_0x00010c213040(puVar7);
  func_0x00010c219b60(puVar7);
  lVar35 = (long)_DAT_11273e210;
  _objc_retain(puVar7);
  uVar6 = *(undefined8 *)(param_1 + lVar35);
  *(undefined **)(param_1 + lVar35) = puVar7;
  _objc_release(uVar6);
  func_0x00010befbb60(puVar4);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar8 = puVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar5;
  puStack_c8 = puVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar5;
  puStack_c0 = puVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar30;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar5;
  puStack_b8 = puVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar7;
  puStack_b0 = puVar27;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar7;
  puStack_a8 = puVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar4;
  func_0x00010c2793a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar31;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar7;
  puStack_a0 = puVar22;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar4;
  func_0x00010bf1ff80(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar23;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar25;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar33);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar31);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar27);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar30);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar14 = puVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar14;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar4;
  puStack_110 = puVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar18;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar1;
  puStack_108 = puVar27;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar4;
  puStack_100 = puVar21;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010bf49520(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar1;
  puStack_f8 = puVar23;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar24;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  puStack_f0 = puVar25;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  puStack_e8 = puVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar13;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  puStack_e0 = puVar30;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf49420(0x404a000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  puStack_d8 = puVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar10;
  func_0x00010bf49420(0x404a000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_d0 = puVar33;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar31);
  _objc_release(puVar33);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar30);
  _objc_release(lVar29);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(lVar28);
  _objc_release(puVar11);
  _objc_release(puVar25);
  _objc_release(lVar32);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(lVar35);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar16);
  _objc_release(puVar17);
  _objc_release(puVar27);
  _objc_release(lVar26);
  _objc_release(puVar18);
  _objc_release(puVar19);
  _objc_release(puVar15);
  _objc_release(puVar14);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar8 = puVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  puStack_120 = puVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar10;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_118 = puVar33;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar31);
  _objc_release(puVar33);
  _objc_release(lVar32);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar35);
  _objc_release(puVar8);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010bf414e0(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar8);
  _objc_release(puVar2);
  lVar35 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(lVar35);
  lVar35 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0x3f800000);
  _objc_release(lVar35);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  lVar35 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(lVar35);
  _objc_release(puVar2);
  lVar35 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0x402c000000000000);
  _objc_release(lVar35);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_128);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_128);
  __Unwind_Resume(param_3);
  _objc_retain(puVar34);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010c1a9f00();
  _objc_release(puVar34);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10608272c; end: 106082773;  */

void FUN_10608272c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1a9f00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106082774; end: 1060827d3; -[SCVoiceMLVoiceOnNotificationImageTitleInfoDialog _setupGestureRecognizer] */

void FUN_106082774(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  func_0x00010c050900();
  func_0x00010c18b5e0();
  func_0x00010c1c8340(0,puVar1);
  func_0x00010bef9040(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060827d4; end: 106082843; -[SCVoiceMLVoiceOnNotificationImageTitleInfoDialog _didLongPressHandled:] */

/* WARNING: Possible PIC construction at 0x000106082814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106082818) */
/* WARNING: Removing unreachable block (ram,0x000106082838) */
/* WARNING: Removing unreachable block (ram,0x000106082828) */

void FUN_1060827d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c252440();
                    /* WARNING: Could not recover jumptable at 0x00010c1a8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHighlighted__112647c38,param_3 - 1U < 2);
  return;
}



/* Entry: 106082844; end: 10608287f; -[SCVoiceMLVoiceOnNotificationImageTitleInfoDialog gestureRecognizer:shouldReceiveTouch:] */

bool FUN_106082844(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_4 == param_1;
}



/* Entry: 106082880; end: 10608288f; -[SCVoiceMLVoiceOnNotificationImageTitleInfoDialog highlighted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106082880(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273e204);
}



/* Entry: 106082890; end: 1060828df; -[SCVoiceMLVoiceOnNotificationImageTitleInfoDialog .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106082890(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273e208,0);
  _objc_storeStrong(param_1 + _DAT_11273e20c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273e210,0);
  return;
}



/* Entry: 1060828e0; end: 106082983; -[SCVoiceMLLensNotificationServicesImpl initWithNotificationPool:lensFavoritesNotificationService:] */

undefined1 *
FUN_1060828e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ef6f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106082984; end: 1060829cb; -[SCVoiceMLLensNotificationServicesImpl _submitSIGDestructiveNotificationWithText:] */

void FUN_106082984(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afde0;
  func_0x00010bf55ce0(PTR_PTR_1126afde0,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec66c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060829cc; end: 106082a9b; -[SCVoiceMLLensNotificationServicesImpl _submitSIGNotification:] */

void FUN_1060829cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106082a9c;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106082a9c; end: 106082af7;  */

void FUN_106082a9c(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106082af8; end: 106082b7f; -[SCVoiceMLLensNotificationServicesImpl presentFavoriteNotificatonForResult:imageFuture:actionHandler:] */

void FUN_106082af8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d360();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106082b80; end: 106082bbb; -[SCVoiceMLLensNotificationServicesImpl presentLensAlreadyFavoritedErrorNotificaton] */

void FUN_106082b80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_106082cbc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec66a0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106082bbc; end: 106082bf7; -[SCVoiceMLLensNotificationServicesImpl presentCannotFavoriteUnpublishedLensErrorNotificaton] */

void FUN_106082bbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000106082cd4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec66a0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106082bf8; end: 106082c33; -[SCVoiceMLLensNotificationServicesImpl presentCannotShareUnpublishedLensErrorNotificaton] */

void FUN_106082bf8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000106082cec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec66a0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106082c34; end: 106082c8b; -[SCVoiceMLLensNotificationServicesImpl presentFTUENotificationWithImageFuture:title:description:accessibilityIdentifier:actionHandler:] */

void FUN_106082c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c76d8;
  func_0x00010bf57ec0(PTR_PTR_1126c76d8,param_2,param_3,2,param_4,param_5,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec66c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106082c8c; end: 106082cbb; -[SCVoiceMLLensNotificationServicesImpl .cxx_destruct] */

void FUN_106082c8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106082cbc; end: 106082d03;  */

void FUN_106082cbc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3c138;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e3c138,
                      &PTR____CFConstantStringClassReference_110e3c158,0);
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



/* Entry: 106082d04; end: 106082d77; -[SCVoiceMLLensNotificationServices initWithVoiceMLLensNotificationServicesProvider:] */

undefined1 * FUN_106082d04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef6f8;
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



/* Entry: 106082d78; end: 106082d7f; -[SCVoiceMLLensNotificationServices vmlNotificationServicesProvider] */

undefined8 FUN_106082d78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106082d80; end: 106082d8f; -[SCVoiceMLLensNotificationServices .cxx_destruct] */

void FUN_106082d80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106082d90; end: 106082eb7; -[SCMatchaUserTraceLogger logUserTraceEvent:] */

void FUN_106082d90(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar6 = *(long *)(param_3 + 8);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        lVar3 = *(long *)(lStack_118 + lVar8 * 8);
        (**(code **)(lVar3 + 0x10))(lVar3,(long)*(int *)(param_3 + 0x18),param_5);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar6;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  dVar1 = (double)CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,
                                                  CONCAT12(uVar11,CONCAT11(uVar10,uVar9)))))));
  _objc_retain(puVar5);
  if ((dVar1 < param_2) || (param_2 < dVar1)) {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e20(param_5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 106082eb8; end: 106082f5b; -[SCMatchaUserTraceLogger logUserTraceScrollingEventWithStartingY:endingY:pageName:] */

void FUN_106082eb8(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_5);
  if ((param_1 < param_2) || (param_2 < param_1)) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_4,
                        &PTR____CFConstantStringClassReference_110e3c1f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e20(param_3,param_4,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106082f5c; end: 106082f63; -[SCMatchaUserTraceLogger _didEnterBackground:] */

void FUN_106082f5c(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 106082f64; end: 106082fcb; -[SCMatchaUserTraceLogger .cxx_destruct] */

void FUN_106082f64(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106082fcc; end: 106083033; -[SCCameraStabilityServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106082fcc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273e240);
  _objc_destroyWeak(param_1 + _DAT_11273e23c);
  _objc_destroyWeak(param_1 + _DAT_11273e238);
  _objc_destroyWeak(param_1 + _DAT_11273e234);
  _objc_destroyWeak(param_1 + _DAT_11273e230);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273e22c);
  return;
}



/* Entry: 106083034; end: 1060830ab; -[SCCameraToSnappableStabilityMonitorFactoryImpl .cxx_destruct] */

void FUN_106083034(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060830ac; end: 1060830db; -[SCCameraHealthMonitor start] */

void FUN_1060830ac(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010bddad80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be48790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__launchTimer_11256fb80);
  return;
}



/* Entry: 1060830dc; end: 106083133; -[SCCameraHealthMonitor _appDidEnterBackground] */

void FUN_1060830dc(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106083134;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 106083134; end: 10608313b;  */

void FUN_106083134(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddad90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__cancelSessionRunningMonitoring_112554500);
  return;
}



/* Entry: 10608313c; end: 10608324b; -[SCCameraHealthMonitor _launchTimer] */

void FUN_10608313c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___dispatch_source_type_timer_11034be38;
  _dispatch_source_create(PTR___dispatch_source_type_timer_11034be38,0,0,uVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = 0;
  _dispatch_time(0,6000000000);
  _dispatch_source_set_timer(uVar3,uVar1,6000000000,0);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10608324c;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  _dispatch_source_set_event_handler(uVar1,&puStack_60);
  _dispatch_resume(*(undefined8 *)(param_1 + 8));
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10608324c; end: 106083277;  */

void FUN_10608324c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdde460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106083278; end: 1060832cf; -[SCCameraHealthMonitor _checkTimer] */

void FUN_106083278(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    _dispatch_source_cancel();
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar1);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf299e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1060832d0; end: 1060832e7; -[SCCameraHealthMonitor delegate] */

void FUN_1060832d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060832e8; end: 1060832f3; -[SCCameraHealthMonitor setDelegate:] */

void FUN_1060832e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1060832f4; end: 10608332b; -[SCCameraHealthMonitor .cxx_destruct] */

void FUN_1060832f4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10608332c; end: 10608339f; -[SCCameraCrashLogger initWithAppInsightsMetadataStorage:] */

undefined1 * FUN_10608332c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef718;
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



/* Entry: 1060833a0; end: 1060833ff; -[SCCameraCrashLogger logCaptureSessionId:] */

void FUN_1060833a0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d07a0();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106083400; end: 10608340b; -[SCCameraCrashLogger .cxx_destruct] */

void FUN_106083400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10608340c; end: 1060834b3; -[SCCameraFeaturePerformanceLogger loadingDidAbort] */

void FUN_10608340c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f88c0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1060834b4; end: 1060834df;  */

void FUN_1060834b4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4f040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060834e0; end: 10608353b; -[SCCameraFeaturePerformanceLogger _loadingDidAbort] */

void FUN_1060834e0(double param_1,long param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined1 *)(param_2 + 0x50) = 0;
    func_0x00010c069d00(*(undefined8 *)(param_2 + 0x30));
    _CACurrentMediaTime();
                    /* WARNING: Could not recover jumptable at 0x00010be556d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              ((param_1 - *(double *)(param_2 + 0x40)) * 1000.0,param_2,
               PTR_s__logLoadingResultWithResult_debu_112572f50,1,0);
    return;
  }
  return;
}



/* Entry: 10608353c; end: 1060835e3; -[SCCameraFeaturePerformanceLogger loadingDidStart] */

void FUN_10608353c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f88c0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1060835e4; end: 10608360f;  */

void FUN_1060835e4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4f080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106083610; end: 10608370f; -[SCCameraFeaturePerformanceLogger _loadingDidStart] */

void FUN_106083610(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  if ((*(char *)(param_2 + 0x50) == '\x01') && (*(char *)(param_2 + 0x51) != '\x01')) {
    return;
  }
  *(undefined2 *)(param_2 + 0x50) = 1;
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x40) = param_1;
  func_0x00010c069d00(*(undefined8 *)(param_2 + 0x30));
  puVar5 = PTR_PTR_1126b71d8;
  lVar2 = param_2 + 0x48;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c09c480();
  puVar1 = PTR_s__logLoadingDidTimeOut_11252ea30;
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1503a0((double)lVar3 / 1000.0,puVar5,param_3,param_2,puVar1,0,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  *(undefined **)(param_2 + 0x30) = puVar5;
  _objc_release(uVar6);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106083710; end: 1060837b7; -[SCCameraFeaturePerformanceLogger loadingDidSucceed] */

void FUN_106083710(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f88c0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1060837b8; end: 1060837e3;  */

void FUN_1060837b8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4f0a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060837e4; end: 106083843; -[SCCameraFeaturePerformanceLogger _loadingDidSucceed] */

void FUN_1060837e4(double param_1,long param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined1 *)(param_2 + 0x50) = 0;
    func_0x00010c069d00(*(undefined8 *)(param_2 + 0x30));
    _CACurrentMediaTime();
                    /* WARNING: Could not recover jumptable at 0x00010be556d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              ((param_1 - *(double *)(param_2 + 0x40)) * 1000.0,param_2,
               PTR_s__logLoadingResultWithResult_debu_112572f50,0,
               &PTR____CFConstantStringClassReference_110daafd8);
    return;
  }
  return;
}



/* Entry: 106083844; end: 10608391b; -[SCCameraFeaturePerformanceLogger loadingDidFailWithReason:] */

void FUN_106083844(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10608391c; end: 106083953;  */

void FUN_10608391c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4f060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106083954; end: 1060839df; -[SCCameraFeaturePerformanceLogger _loadingDidFailWithReason:isTimeoutError:] */

void FUN_106083954(double param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 0x50) == '\x01') {
    if ((param_5 & 1) == 0) {
      *(undefined1 *)(param_2 + 0x50) = 0;
    }
    else {
      *(undefined1 *)(param_2 + 0x51) = 1;
    }
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    _objc_retain(param_4);
    func_0x00010c069d00(uVar1);
    _CACurrentMediaTime();
    func_0x00010be556c0((param_1 - *(double *)(param_2 + 0x40)) * 1000.0,param_2,param_3,2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  return;
}



/* Entry: 1060839e0; end: 106083b27; -[SCCameraFeaturePerformanceLogger _logLoadingDidTimeOut] */

void FUN_1060839e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0f74a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(puVar4);
  func_0x00010c0f88c0(uVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar4);
  return;
}



/* Entry: 106083b28; end: 106083b5f;  */

void FUN_106083b28(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4f060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106083b60; end: 106083bd3; -[SCCameraFeaturePerformanceLogger _logLoadingResultWithResult:debugInfo:elapsedTimeMs:] */

void FUN_106083b60(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_5);
  lVar1 = param_2 + 0x48;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c09c480();
  func_0x00010be53100(param_1,(double)lVar2,param_2,param_3,param_4,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106083bd4; end: 106083d73; -[SCCameraFeaturePerformanceLogger _logFeatureLoadResultWithElapsedTimeMs:loadResult:timeoutMs:debugInfo:] */

void FUN_106083bd4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126c7728;
  _objc_retain(param_6);
  _objc_opt_new(puVar1);
  lVar2 = param_3 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf70d80();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126aff08;
  func_0x00010c073f00(PTR_PTR_1126aff08,param_4,lVar5);
  lVar2 = param_3 + 0x48;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfa28e0();
  func_0x00010c19aa80(puVar1,param_4,lVar3);
  _objc_release(lVar2);
  func_0x00010c1b7560(param_1,puVar1);
  func_0x00010c1be800(puVar1,param_4,param_5);
  func_0x00010c215bc0(param_2,puVar1);
  func_0x00010c189fe0(puVar1,param_4,param_6);
  _objc_release(param_6);
  func_0x00010c177420(puVar1,param_4,*(undefined8 *)(param_3 + 0x20));
  func_0x00010c1764e0(puVar1,param_4,(uint)puVar6 ^ 1);
  lVar2 = param_3 + 0x28;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0d6ca0();
  func_0x00010c1cba40(puVar1,param_4,lVar3);
  _objc_release(lVar2);
  uVar7 = *(undefined8 *)(param_3 + 8);
  func_0x00010bf1cf00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar8);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106083d74; end: 106083dd3; -[SCCameraFeaturePerformanceLogger .cxx_destruct] */

void FUN_106083d74(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106083dd4; end: 106083eaf; -[SCCameraScreenshotLogger initWithCameraUserLoggingServices:] */

undefined1 * FUN_106083dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ef728;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106083eb0; end: 106083fc7; -[SCCameraScreenshotLogger logScreenshotTakenFromScreen:sessionId:lensId:isFrontCamera:] */

void FUN_106083eb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_50 = param_6;
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_58 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106083fc8; end: 10608408f;  */

void FUN_106083fc8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c7730;
    _objc_alloc_init(PTR_PTR_1126c7730);
    func_0x00010c1764e0();
    func_0x00010c179280(puVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1bbd60(puVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    uVar4 = 4;
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar4 = 5;
    }
    func_0x00010c1d8800(puVar2,param_2,uVar4);
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010bf1cf00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106084090; end: 1060840bf; -[SCCameraScreenshotLogger .cxx_destruct] */

void FUN_106084090(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060840c0; end: 10608426f; -[SCCameraShortcutLogger logCameraShortcutTapWithShortcutId:scanSessionId:storySnapItemId:shortcutSource:cameraModes:componentInfo:] */

void FUN_1060840c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106084270; end: 10608434f;  */

void FUN_106084270(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c7738;
    _objc_opt_new(PTR_PTR_1126c7738);
    func_0x00010c1ffc60();
    if (*(long *)(param_1 + 0x28) != 0) {
      func_0x00010c1f64e0(puVar2);
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      func_0x00010c20db80(puVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010b9f8838(uVar3);
    func_0x00010c1ffd80(puVar2,param_2,uVar3);
    func_0x00010c176a60(puVar2,param_2,*(undefined8 *)(param_1 + 0x40));
    func_0x00010c1ffc20(puVar2,param_2,*(undefined8 *)(param_1 + 0x48));
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010bf1cf00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106084350; end: 1060844ff; -[SCCameraShortcutLogger logCameraShortcutEnableWithShortcutId:scanSessionId:storySnapItemId:shortcutSource:cameraModes:componentInfo:] */

void FUN_106084350(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106084500; end: 1060845df;  */

void FUN_106084500(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c7740;
    _objc_opt_new(PTR_PTR_1126c7740);
    func_0x00010c1ffc60();
    if (*(long *)(param_1 + 0x28) != 0) {
      func_0x00010c1f64e0(puVar2);
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      func_0x00010c20db80(puVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010b9f8838(uVar3);
    func_0x00010c1ffd80(puVar2,param_2,uVar3);
    func_0x00010c176a60(puVar2,param_2,*(undefined8 *)(param_1 + 0x40));
    func_0x00010c1ffc20(puVar2,param_2,*(undefined8 *)(param_1 + 0x48));
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010bf1cf00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060845e0; end: 106084717; -[SCCameraShortcutLogger logCameraShortcutWarningTapWithShortcutId:scanSessionId:shortcutSource:confirmed:] */

void FUN_1060845e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_50 = param_6;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106084718; end: 1060847d7;  */

void FUN_106084718(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c7748;
    _objc_opt_new(PTR_PTR_1126c7748);
    func_0x00010c1ffc60();
    func_0x00010c1f64e0(puVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010b9f8838(uVar3);
    func_0x00010c1ffd80(puVar2,param_2,uVar3);
    func_0x00010c180b00(puVar2,param_2,*(undefined1 *)(param_1 + 0x40));
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010bf1cf00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060847d8; end: 10608493f; -[SCCameraShortcutLogger logCameraShortcutActivationDelayWithLatencyMillis:shortcutId:scanSessionId:shortcutSource:componentInfo:] */

void FUN_1060847d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106084940; end: 106084a0f;  */

void FUN_106084940(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c7750;
    _objc_opt_new(PTR_PTR_1126c7750);
    func_0x00010c1b92c0();
    func_0x00010c1ffc60(puVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1f64e0(puVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010b9f8838(uVar3);
    func_0x00010c1ffd80(puVar2,param_2,uVar3);
    func_0x00010c1ffc20(puVar2,param_2,*(undefined8 *)(param_1 + 0x38));
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010bf1cf00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106084a10; end: 106084b97; -[SCCameraShortcutLogger logCameraShortcutCreateTapWithShortcutId:storySnapItemId:pageSource:shortcutSource:componentInfo:] */

void FUN_106084a10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106084b98; end: 106084c6b;  */

void FUN_106084b98(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c7758;
    _objc_opt_new(PTR_PTR_1126c7758);
    func_0x00010c1ffc60();
    func_0x00010c20db80(puVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bb10e88(uVar3);
    func_0x00010c1d86a0(puVar2,param_2,uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010b9f8838(uVar3);
    func_0x00010c1ffd80(puVar2,param_2,uVar3);
    func_0x00010c1ffc20(puVar2,param_2,*(undefined8 *)(param_1 + 0x40));
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010bf1cf00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106084c6c; end: 106084c83; -[SCCameraShortcutLogger cameraShortcutSnapActionLoggingDelegate] */

void FUN_106084c6c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106084c84; end: 106084cbb; -[SCCameraShortcutLogger .cxx_destruct] */

void FUN_106084c84(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106084cbc; end: 106084d93; -[SCCameraSnapCaptureLogger initWithCameraUserBlizzardLogger:audioSessionServices:crashServices:] */

undefined1 *
FUN_106084cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ef738;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf53fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106084d94; end: 1060854e7; -[SCCameraSnapCaptureLogger logVideoSnapCaptureStatus:callsite:intervalSinceStartWriting:captureParameters:] */

void FUN_106084d94(double param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  float fVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar15 = (undefined4)((ulong)param_2 >> 0x20);
  uVar14 = (undefined4)param_2;
  dVar13 = param_1;
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_7;
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126c7760;
    _objc_alloc_init(PTR_PTR_1126c7760);
    func_0x00010c0c6760(param_7);
    func_0x00010c2256c0(puVar3,param_4,(long)dVar13);
    func_0x00010c0c6760(param_7);
    func_0x00010c1a7d00(puVar3,param_4,(long)(double)CONCAT44(uVar15,uVar14));
    puVar4 = PTR_PTR_1126c7768;
    _objc_alloc_init(PTR_PTR_1126c7768);
    lVar1 = param_7;
    func_0x00010bfad080(param_7);
    func_0x00010c19bb40(puVar4,param_4,lVar1);
    lVar1 = param_7;
    func_0x00010c299e60(param_7);
    func_0x00010c2215c0(puVar4,param_4,lVar1);
    func_0x00010bf0ed60(param_7);
    func_0x00010c16ba20(puVar4,param_4,(long)dVar13);
    func_0x00010c2992e0(param_7);
    func_0x00010c2211a0(puVar4,param_4,(long)dVar13);
    lVar1 = param_7;
    func_0x00010bf3f040();
    uVar10 = 6;
    if (lVar1 != 1) {
      uVar10 = 0;
    }
    uVar6 = 7;
    if (lVar1 != 2) {
      uVar6 = uVar10;
    }
    func_0x00010c1895a0(puVar4,param_4,uVar6);
    func_0x00010c1ec9a0(puVar4,param_4,puVar3);
    puVar5 = PTR_PTR_1126c7770;
    _objc_alloc_init(PTR_PTR_1126c7770);
    if (param_5 < 4) {
      ppuVar11 = (undefined **)(&PTR_PTR_11090b070)[param_5];
    }
    else {
      ppuVar11 = &PTR____CFConstantStringClassReference_110db78d8;
    }
    func_0x00010c20a2c0(puVar5,param_4,ppuVar11);
    lVar1 = param_7;
    func_0x00010bf31200(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179280(puVar5,param_4,lVar1);
    _objc_release(lVar1);
    func_0x00010c1c4ba0(puVar5,param_4,puVar4);
    func_0x00010c0fcd20(param_7);
    func_0x00010c1dc100(puVar5,param_4,(long)dVar13);
    fVar12 = SUB84(dVar13,0);
    func_0x00010c0fcd20(param_7);
    func_0x00010c1dc0c0(puVar5,param_4,(long)(double)CONCAT44(uVar15,uVar14));
    lVar1 = param_7;
    func_0x00010bf21ec0(param_7);
    func_0x00010c174200(puVar5,param_4,lVar1);
    uVar6 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010c15fac0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ef220();
    func_0x00010c1c56a0(puVar5,param_4,(long)(fVar12 * 100.0));
    _objc_release(uVar10);
    _objc_release(uVar6);
    puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    lVar1 = param_7;
    func_0x00010bf124e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c082de0(puVar7,param_4,lVar1);
    _objc_release(lVar1);
    puVar8 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    if ((int)puVar7 != 0) {
      lVar1 = param_7;
      func_0x00010bf124e0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf64b60(puVar8,param_4,lVar1,0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (puVar8 != (undefined *)0x0) {
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc();
        func_0x00010c008340();
        if (puVar7 != (undefined *)0x0) {
          func_0x00010c16d560(puVar5,param_4,puVar7);
          _objc_release(puVar7);
        }
      }
      _objc_release(puVar8);
    }
    lVar1 = param_7;
    func_0x00010c07bec0(param_7);
    func_0x00010c1b2880(puVar5,param_4,lVar1);
    lVar1 = param_7;
    func_0x00010c07bec0(param_7);
    func_0x00010c1af460(puVar5,param_4,lVar1);
    lVar1 = param_7;
    func_0x00010bf0fa00(param_7);
    func_0x00010c1f53e0(puVar5,param_4,lVar1);
    puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_7;
    func_0x00010bf987e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c09e6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar8,param_4,lVar2,&PTR____CFConstantStringClassReference_110e3c278);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_7;
    func_0x00010bf987e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c09e560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar8,param_4,lVar2,&PTR____CFConstantStringClassReference_110e3c298);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_7;
    func_0x00010bf987e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar8,param_4,lVar2,&PTR____CFConstantStringClassReference_110e3c2b8);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar1 = param_7;
    func_0x00010bf987e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf3ec40();
    func_0x00010c0df780(puVar7,param_4,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar8,param_4,puVar7,&PTR____CFConstantStringClassReference_110e3c2d8);
    _objc_release(puVar7);
    _objc_release(lVar1);
    lVar1 = param_7;
    func_0x00010bf987e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar8,param_4,lVar2,&PTR____CFConstantStringClassReference_110e3c2f8);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar1 = param_7;
    func_0x00010c069c20(param_7);
    func_0x00010c0df780(puVar7,param_4,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar8,param_4,puVar7,&PTR____CFConstantStringClassReference_110e3c318);
    _objc_release(puVar7);
    func_0x00010c1d0640(puVar8,param_4,param_6,&PTR____CFConstantStringClassReference_110dea058);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar8,param_4,puVar7,&PTR____CFConstantStringClassReference_110e3c338);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar9 = PTR_PTR_1126b24e8;
    func_0x00010c2763c0(PTR_PTR_1126b24e8,param_4,0);
    func_0x00010c0df880(puVar7,param_4,puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar8,param_4,puVar7,&PTR____CFConstantStringClassReference_110e3c358);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar9 = PTR_PTR_1126b24e8;
    func_0x00010bfb7440(PTR_PTR_1126b24e8,param_4,0);
    func_0x00010c0df880(puVar7,param_4,puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar8,param_4,puVar7,&PTR____CFConstantStringClassReference_110e3c378);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010c082de0(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_4,puVar8);
    if ((int)puVar7 == 0) {
      ppuVar11 = &PTR____CFConstantStringClassReference_110e3c398;
    }
    else {
      puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_4,puVar8,0,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
      _objc_release(puVar7);
    }
    func_0x00010c1971a0(puVar5,param_4,ppuVar11);
    uVar10 = *(undefined8 *)(param_3 + 8);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar10);
    if (param_5 == 2) {
      puVar7 = PTR_PTR_1126b3e90;
      _objc_opt_new(PTR_PTR_1126b3e90);
      lVar1 = param_7;
      func_0x00010bf987e0(param_7);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010bdd9660(param_3,param_4,lVar1);
      func_0x00010c1776c0(puVar7,param_4,lVar2);
      _objc_release(lVar1);
      uVar10 = *(undefined8 *)(param_3 + 0x18);
      puVar9 = PTR_PTR_1126b3e98;
      func_0x00010bf60460(PTR_PTR_1126b3e98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c133420(uVar10,param_4,puVar7,0,ppuVar11,puVar9);
      _objc_release(puVar9);
      _objc_release(puVar7);
    }
    _objc_release(ppuVar11);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1060854e8; end: 10608566b; -[SCCameraSnapCaptureLogger _cameraVideoRecordingErrorCodeWithNSError:] */

undefined8 FUN_1060854e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0720c0();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    lVar1 = param_3;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0720c0();
    _objc_release(lVar1);
    if ((int)lVar2 == 0) {
      lVar1 = param_3;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0720c0();
      _objc_release(lVar1);
      if ((int)lVar2 == 0) {
        lVar1 = param_3;
        func_0x00010bf87dc0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c0720c0();
        _objc_release(lVar1);
        if (((int)lVar2 != 0) && (lVar1 = param_3, func_0x00010bf3ec40(), lVar1 == 0xbb9)) {
          uVar3 = 5;
          goto LAB_106085650;
        }
      }
      else {
        lVar1 = param_3;
        func_0x00010bf3ec40();
        if (lVar1 == -0x6f) {
          uVar3 = 6;
          goto LAB_106085650;
        }
      }
    }
    else {
      lVar1 = param_3;
      func_0x00010bf3ec40();
      if (lVar1 == -0x44c) {
        uVar3 = 4;
        goto LAB_106085650;
      }
    }
  }
  else {
    lVar1 = param_3;
    func_0x00010bf3ec40();
    if (lVar1 == -0x2e18) {
      uVar3 = 2;
      goto LAB_106085650;
    }
    if (lVar1 == -0x2e47) {
      uVar3 = 3;
      goto LAB_106085650;
    }
    if (lVar1 == -0x2e6b) {
      uVar3 = 1;
      goto LAB_106085650;
    }
  }
  uVar3 = 0;
LAB_106085650:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10608566c; end: 1060856a7; -[SCCameraSnapCaptureLogger .cxx_destruct] */

void FUN_10608566c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060856a8; end: 106085727; -[SCCameraSnapCreationLogger initWithCameraUserBlizzardLogger:] */

undefined1 * FUN_1060856a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef740;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106085728; end: 1060858eb; -[SCCameraSnapCreationLogger logDirectSnapActionEventWithCaptureSessionId:snapSessionId:isImage:lensesActive:activeLensID:activeCameraModes:cameraSource:snapSource:] */

void FUN_106085728(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126c46c0;
  _objc_retain(param_11);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c205660();
  _objc_release(param_4);
  func_0x00010c179280(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c161fe0(puVar1,param_2,param_5 ^ 1);
  func_0x00010c1d7e80(puVar1,param_2,&PTR____CFConstantStringClassReference_110f59ad8);
  func_0x00010c174980(puVar1,param_2,0);
  func_0x00010c226560(puVar1,param_2,param_6);
  uVar2 = param_8;
  func_0x00010c0b8600(param_8,param_2,&PTR___NSConcreteGlobalBlock_11090b090);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  uVar3 = uVar2;
  func_0x00010bf446e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e3c3f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_11);
  _objc_release(param_7);
  func_0x00010c176320(puVar1,param_2,puVar4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060858ec; end: 10608591b;  */

void FUN_1060858ec(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e2b998);
  return;
}



/* Entry: 10608591c; end: 106085ab7; -[SCCameraSnapCreationLogger logCameraSnapCreateStepWithCaptureSessionId:stepName:stepDescription:isFingerDownCapture:isBatchCapture:playbackSessionId:cameraType:extras:] */

void FUN_10608591c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_10);
  if (((param_3 != 0) && (lVar1 = param_3, func_0x00010c08fa60(), (param_7 & 1) == 0)) &&
     (lVar1 != 0)) {
    puVar2 = PTR_PTR_1126c7778;
    _objc_alloc_init(PTR_PTR_1126c7778);
    func_0x00010c179280();
    func_0x00010c20a720(puVar2,param_2,param_4);
    func_0x00010c20a6a0(puVar2,param_2,param_5);
    func_0x00010c1b0f20(puVar2,param_2,param_6);
    func_0x00010c1dd800(puVar2,param_2,param_8);
    func_0x00010c177420(puVar2,param_2,param_9);
    if (param_10 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010c082de0(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_10);
      if ((int)puVar3 == 0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110e3c398;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_10,0,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
        func_0x00010c008340();
        _objc_release(puVar3);
      }
      func_0x00010c1999a0(puVar2,param_2,ppuVar4);
      _objc_release(ppuVar4);
    }
    func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106085ab8; end: 106085cc7; -[SCCameraSnapCreationLogger logDirectSnapCaptureLossWithCaptureSessionId:isImage:isFingerDownCapture:isBatchCapture:snapSource:errorMessage:] */

void FUN_106085ab8(long param_1,undefined8 param_2,long param_3,uint param_4,undefined8 param_5,
                  ulong param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  if (((param_3 != 0) && (lVar1 = param_3, func_0x00010c08fa60(), (param_6 & 1) == 0)) &&
     (lVar1 != 0)) {
    puVar2 = PTR_PTR_1126c7780;
    _objc_alloc_init(PTR_PTR_1126c7780);
    func_0x00010c179280();
    func_0x00010c161fe0(puVar2,param_2,param_4 ^ 1);
    func_0x00010c1b0f20(puVar2,param_2,param_5);
    func_0x00010c1af740(puVar2,param_2,0);
    func_0x00010c2056c0(puVar2,param_2,param_7);
    func_0x00010c197240(puVar2,param_2,param_8);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar4 = PTR_PTR_1126b24e8;
    func_0x00010c2763c0(PTR_PTR_1126b24e8,param_2,0);
    func_0x00010c0df880(puVar5,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3,param_2,puVar5,&PTR____CFConstantStringClassReference_110e3c358);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar4 = PTR_PTR_1126b24e8;
    func_0x00010bfb7440(PTR_PTR_1126b24e8,param_2,0);
    func_0x00010c0df880(puVar5,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3,param_2,puVar5,&PTR____CFConstantStringClassReference_110e3c378);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010c082de0(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar3);
    if ((int)puVar5 == 0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110e3c398;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar3,0,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
      _objc_release(puVar5);
    }
    func_0x00010c18c620(puVar2,param_2,ppuVar6);
    func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar2);
    _objc_release(ppuVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


