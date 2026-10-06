/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8065cc; end: 10b8065f7;  */

void FUN_10b8065cc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be28940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b8065f8; end: 10b806663; -[SIGNotificationDismissablePresenterPrivate dialog] */

void FUN_10b8065f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126e15a8;
    _objc_alloc();
    func_0x00010c063400();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar2);
    func_0x00010c160fc0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x18));
    func_0x00010c219b60(*(undefined8 *)(param_1 + 0x20),param_2,0);
    lVar3 = *(long *)(param_1 + 0x20);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b806664; end: 10b8066bb; -[SIGNotificationDismissablePresenterPrivate _handleDismissalEvent] */

void FUN_10b806664(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x58);
  func_0x00010c10f660();
  if (uVar1 < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010c18f8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x58),PTR_s_setDismissalRequested__112641848,1);
    return;
  }
  if (uVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be02f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0,param_1,PTR_s__dismissNotificationViewWithDela_11255e560);
    return;
  }
  return;
}



/* Entry: 10b8066bc; end: 10b8066bf; -[SIGNotificationDismissablePresenterPrivate containerView] */

void FUN_10b8066bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf71cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dialog_1125ba0e0);
  return;
}



/* Entry: 10b8066c0; end: 10b8066cb; -[SIGNotificationDismissablePresenterPrivate presentNotificationOverView:completion:] */

void FUN_10b8066c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0694f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_internalPresentNotificationOverV_1125f7f48,param_3,1,param_4);
  return;
}



/* Entry: 10b8066cc; end: 10b806c23; -[SIGNotificationDismissablePresenterPrivate internalPresentNotificationOverView:animateAndRemoveAfterDelay:completion:] */

void FUN_10b8066cc(double param_1,undefined **param_2,undefined8 param_3,undefined *param_4,
                  uint param_5,undefined8 param_6)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **unaff_x22;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10b806c24;
  puStack_b0 = &UNK_110849530;
  _objc_retain(param_6);
  ppuVar2 = &puStack_c8;
  uStack_a8 = param_6;
  _objc_retainBlock();
  puVar12 = param_2[9];
  param_2[9] = (undefined *)ppuVar2;
  _objc_release(puVar12);
  if (param_4 == (undefined *)0x0) {
    (**(code **)(param_2[9] + 0x10))();
  }
  else {
    puVar12 = param_2[0xb];
    func_0x00010c10f660();
    if (puVar12 == (undefined *)0x0) {
      iVar1 = (int)param_2[0xb];
      func_0x00010bf84f00();
      if (iVar1 == 0) {
        func_0x00010c1e12c0(param_2[0xb]);
        ppuVar2 = param_2;
        func_0x00010bf71ce0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(param_4);
        _objc_release(ppuVar2);
        ppuVar2 = param_2;
        func_0x00010bf71ce0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = param_4;
        func_0x00010c274200(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14da40(PTR__OBJC_CLASS___UIScreen_1126aea10);
        ppuVar4 = ppuVar3;
        func_0x00010bf493c0(param_1 + 16.0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = param_2 + 6;
        puVar13 = *ppuVar14;
        *ppuVar14 = (undefined *)ppuVar4;
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(ppuVar3);
        _objc_release(ppuVar2);
        ppuVar2 = param_2;
        func_0x00010bf71ce0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = param_4;
        func_0x00010c274200(param_4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar3;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = param_2 + 7;
        puVar13 = *ppuVar15;
        *ppuVar15 = (undefined *)ppuVar4;
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(ppuVar3);
        _objc_release(ppuVar2);
        puVar12 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        ppuVar2 = param_2;
        func_0x00010bf71ce0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = param_4;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar3;
        func_0x00010bf493c0(0x4030000000000000);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = param_2;
        ppuStack_a0 = ppuVar4;
        func_0x00010bf71ce0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar5;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = param_4;
        func_0x00010c2793a0(param_4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar6;
        func_0x00010bf493c0(0xc030000000000000);
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = param_2;
        ppuStack_98 = ppuVar8;
        func_0x00010bf71ce0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar9;
        func_0x00010bfe0660();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = ppuVar10;
        func_0x00010bf494e0(0);
        _objc_retainAutoreleasedReturnValue();
        puStack_88 = *ppuVar15;
        puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
        ppuStack_90 = unaff_x22;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar12);
        _objc_release(puVar11);
        _objc_release(unaff_x22);
        _objc_release(ppuVar10);
        _objc_release(ppuVar9);
        _objc_release(ppuVar8);
        _objc_release(puVar7);
        _objc_release(ppuVar6);
        _objc_release(ppuVar5);
        _objc_release(ppuVar4);
        _objc_release(puVar13);
        _objc_release(ppuVar3);
        _objc_release(ppuVar2);
        func_0x00010c08cdc0(param_4);
        func_0x00010c162480(*ppuVar15);
        func_0x00010c162480(*ppuVar14);
        _objc_retain(param_4);
        puVar12 = param_2[8];
        param_2[8] = param_4;
        _objc_release(puVar12);
        if ((param_5 & 1) == 0) {
          func_0x00010c08cdc0(param_2[8]);
          (**(code **)(param_2[9] + 0x10))();
        }
        else {
          _objc_initWeak(auStack_d0,param_2);
          puVar13 = PTR__OBJC_CLASS___UIView_1126aec20;
          puVar12 = PTR___NSConcreteStackBlock_11034bd00;
          puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_f0 = 0xc2000000;
          uStack_e8 = 0x10b806c38;
          puStack_e0 = &UNK_110842e18;
          _objc_retain(param_4);
          puStack_120 = puVar12;
          uStack_118 = 0xc2000000;
          pcStack_110 = FUN_10b806c40;
          puStack_108 = &UNK_110849200;
          unaff_x22 = &puStack_120;
          puStack_d8 = param_4;
          _objc_copyWeak(auStack_100,auStack_d0);
          func_0x00010bf03440(0x3fd3333333333333,0,puVar13);
          _objc_destroyWeak(auStack_100);
          _objc_release(puStack_d8);
          _objc_destroyWeak(auStack_d0);
        }
      }
      else {
        func_0x00010c12c960(param_2[4]);
        (**(code **)(param_2[9] + 0x10))();
      }
    }
    else {
      (**(code **)(param_2[9] + 0x10))();
    }
  }
  _objc_release(uStack_a8);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x22 + 4);
  _objc_destroyWeak(auStack_d0);
  __Unwind_Resume();
  if (*(long *)(param_4 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b806c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_4 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b806c24; end: 10b806c3f;  */

void FUN_10b806c24(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b806c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b806c40; end: 10b806cb7;  */

void FUN_10b806c40(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1e12c0(*(undefined8 *)(lVar1 + 0x58),param_2,2);
    uVar2 = *(ulong *)(lVar1 + 0x58);
    func_0x00010bf84f00();
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    uVar3 = 0;
    if ((uVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x28);
    }
    func_0x00010be02f00(uVar3,param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b806cb8; end: 10b806cdf; -[SIGNotificationDismissablePresenterPrivate debugInfo] */

void FUN_10b806cb8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b806ce0; end: 10b806e97; -[SIGNotificationDismissablePresenterPrivate _dismissNotificationViewWithDelay:] */

void FUN_10b806ce0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  ppuVar3 = &puStack_c0;
  lVar1 = *(long *)(param_2 + 0x58);
  func_0x00010c10f660();
  if (lVar1 == 2) {
    if (*(long *)(param_2 + 0x60) != 0) {
      func_0x00010bf436e0();
      uVar2 = *(undefined8 *)(param_2 + 0x60);
      *(undefined8 *)(param_2 + 0x60) = 0;
      _objc_release(uVar2);
    }
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_2 + 0x58);
    _objc_retain(uVar8);
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    _objc_retainBlock();
    _objc_initWeak(auStack_68,*(undefined8 *)(param_2 + 0x40));
    _objc_initWeak(auStack_70,*(undefined8 *)(param_2 + 0x20));
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10b806e98;
    puStack_a8 = &UNK_110d621c8;
    _objc_copyWeak(auStack_80,auStack_68);
    _objc_copyWeak(auStack_78,auStack_70);
    uStack_a0 = uVar6;
    uStack_98 = uVar7;
    uStack_90 = uVar8;
    uStack_88 = uVar2;
    _objc_retainBlock(&puStack_c0);
    puVar4 = PTR_PTR_1126c0878;
    _objc_alloc();
    func_0x00010c000460(param_1);
    uVar5 = *(undefined8 *)(param_2 + 0x60);
    *(undefined **)(param_2 + 0x60) = puVar4;
    _objc_release(uVar5);
    func_0x00010c24d960(*(undefined8 *)(param_2 + 0x60));
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar2);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  return;
}



/* Entry: 10b806e98; end: 10b806f2f;  */

void FUN_10b806e98(long param_1,int param_2)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (param_2 != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10b806f30;
    puStack_58 = &UNK_110d62198;
    _objc_copyWeak(auStack_30,param_1 + 0x40);
    _objc_copyWeak(auStack_28,param_1 + 0x48);
    uStack_48 = *(undefined8 *)(param_1 + 0x28);
    uStack_50 = *(undefined8 *)(param_1 + 0x20);
    uStack_38 = *(undefined8 *)(param_1 + 0x38);
    uStack_40 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107c312d0("APPSTORE",&puStack_70);
    _objc_destroyWeak(auStack_28);
    _objc_destroyWeak(auStack_30);
  }
  return;
}



/* Entry: 10b806f30; end: 10b80707b;  */

void FUN_10b806f30(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = param_1 + 0x48;
    _objc_loadWeakRetained();
    _objc_release();
    _objc_release(lVar2);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    if (lVar3 != 0) {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_10b80707c;
      puStack_60 = &UNK_110848218;
      uStack_50 = *(undefined8 *)(param_1 + 0x28);
      uStack_58 = *(undefined8 *)(param_1 + 0x20);
      _objc_copyWeak(auStack_48,param_1 + 0x40);
      _objc_copyWeak(auStack_80,param_1 + 0x48);
      func_0x00010bf03440(0x3fd3333333333333,0,puVar1);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_48);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010b80705c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
  return;
}



/* Entry: 10b80707c; end: 10b807167;  */

void FUN_10b80707c(long param_1,undefined8 param_2)

{
  func_0x00010c162480(*(undefined8 *)(param_1 + 0x20),param_2,0);
  func_0x00010c162480(*(undefined8 *)(param_1 + 0x28),param_2,1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b807168; end: 10b807203; -[SIGNotificationDismissablePresenterPrivate .cxx_destruct] */

void FUN_10b807168(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b807204; end: 10b8072ef; -[SIGNotificationButton initWithButtonText:buttonIcon:buttonIconFuture:contentModeDetail:buttonStyle:] */

long FUN_10b807204(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfee200();
  if (param_1 != 0) {
    uVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar1;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_4;
    _objc_release(uVar1);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_5;
    _objc_release(uVar1);
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_6;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + 0x20) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b8072f0; end: 10b8072f7; -[SIGNotificationButton buttonStyle] */

undefined8 FUN_10b8072f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b8072f8; end: 10b80731f; -[SIGNotificationButton buttonText] */

void FUN_10b8072f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b807320; end: 10b807347; -[SIGNotificationButton buttonIcon] */

void FUN_10b807320(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b807348; end: 10b80736f; -[SIGNotificationButton buttonIconFuture] */

void FUN_10b807348(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b807370; end: 10b807397; -[SIGNotificationButton contentModeDetail] */

void FUN_10b807370(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b807398; end: 10b807447; -[SIGNotificationButton asyncButtonIconWithCompletion:] */

void FUN_10b807398(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b807448;
  puStack_40 = &UNK_1108bd2a0;
  uVar1 = param_3;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(uVar2,param_2,&puStack_58,uVar1,0);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b807448; end: 10b807453;  */

void FUN_10b807448(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b807450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10b807454; end: 10b8074c3; +[SIGNotificationButton buttonText:] */

void FUN_10b807454(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010c08fa60(), lVar1 == 0)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b15a0;
    _objc_alloc(PTR_PTR_1126b15a0);
    func_0x00010bffa0a0();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b8074c4; end: 10b80753b; +[SIGNotificationButton buttonText:buttonIcon:] */

void FUN_10b8074c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b15a0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bffa0a0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b80753c; end: 10b8075b3; +[SIGNotificationButton buttonTextGray:buttonIcon:] */

void FUN_10b80753c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b15a0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bffa0a0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b8075b4; end: 10b8075bb; +[SIGNotificationButton buttonIcon:] */

void FUN_10b8075b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf25670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_buttonIcon_contentModeDetail__1125a6f40,param_3,0);
  return;
}



/* Entry: 10b8075bc; end: 10b8075cb; +[SIGNotificationButton buttonIcon:contentMode:] */

void FUN_10b8075bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf25650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4048000000000000,0x4048000000000000,param_1,
             PTR_s_buttonIcon_contentMode_desiredBu_1125a6f38);
  return;
}



/* Entry: 10b8075cc; end: 10b8075d7; +[SIGNotificationButton buttonIcon:contentMode:desiredButtonSize:] */

void FUN_10b8075cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf25610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_buttonIcon_buttonIconFuture_cont_1125a6f28,param_3,0,param_4);
  return;
}



/* Entry: 10b8075d8; end: 10b8075e7; +[SIGNotificationButton buttonIconFuture:contentMode:desiredButtonSize:] */

void FUN_10b8075d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf25610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_buttonIcon_buttonIconFuture_cont_1125a6f28,0,param_3,param_4);
  return;
}



/* Entry: 10b8075e8; end: 10b8076bb; +[SIGNotificationButton buttonIcon:buttonIconFuture:contentMode:desiredButtonSize:] */

void FUN_10b8075e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126e15b0;
  _objc_alloc(PTR_PTR_1126e15b0);
  func_0x00010c003860(param_1,param_2);
  if (param_5 == 0) {
    if (param_6 == 0) {
      param_3 = 0;
    }
    else {
      func_0x00010bf25700(param_3,param_4,param_6,puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010bf25660(param_3,param_4,param_5,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b8076bc; end: 10b80773f; +[SIGNotificationButton buttonIcon:contentModeDetail:] */

void FUN_10b8076bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b15a0;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010bffa0a0();
    _objc_release(param_4);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b807740; end: 10b8077c3; +[SIGNotificationButton buttonIconFuture:contentModeDetail:] */

void FUN_10b807740(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b15a0;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010bffa0a0();
    _objc_release(param_4);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b8077c4; end: 10b80780b; -[SIGNotificationButton .cxx_destruct] */

void FUN_10b8077c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b80780c; end: 10b807867; -[SIGNotificationButtonContentModeDetail initWithContentMode:desiredButtonSize:] */

void FUN_10b80780c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270b1f8;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
  }
  return;
}



/* Entry: 10b807868; end: 10b80786f; -[SIGNotificationButtonContentModeDetail contentMode] */

undefined8 FUN_10b807868(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b807870; end: 10b807877; -[SIGNotificationButtonContentModeDetail desiredButtonSize] */

undefined1  [16] FUN_10b807870(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}



/* Entry: 10b807878; end: 10b8078f3; -[SIGNotificationImage initWithImage:imageContentMode:imageStyle:synchronousLoadImage:] */

long FUN_10b807878(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + 0x10) = param_4;
    *(undefined8 *)(param_1 + 0x18) = param_5;
    *(undefined1 *)(param_1 + 0x20) = param_6;
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b8078f4; end: 10b8078fb; -[SIGNotificationImage imageStyle] */

undefined8 FUN_10b8078f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b8078fc; end: 10b807903; -[SIGNotificationImage imageContentMode] */

undefined8 FUN_10b8078fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b807904; end: 10b8079b3; -[SIGNotificationImage imageWithCompletion:] */

void FUN_10b807904(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b8079b4;
  puStack_40 = &UNK_1108bd2a0;
  uVar1 = param_3;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(uVar2,param_2,&puStack_58,uVar1,*(undefined1 *)(param_1 + 0x20));
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b8079b4; end: 10b8079bf;  */

void FUN_10b8079b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8079bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10b8079c0; end: 10b8079cf; +[SIGNotificationImage iconImage:] */

void FUN_10b8079c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe56d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c3378,PTR_s_iconImage_synchronousLoadImage__1125d6f78,param_3,0);
  return;
}



/* Entry: 10b8079d0; end: 10b807a3f; +[SIGNotificationImage iconImage:synchronousLoadImage:] */

void FUN_10b8079d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3378;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010c01c100();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b807a40; end: 10b807a53; +[SIGNotificationImage largeImage:] */

void FUN_10b807a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c088090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c3378,PTR_s_largeImage_imageContentMode_sync_1125ffa30,param_3,4,0);
  return;
}



/* Entry: 10b807a54; end: 10b807a63; +[SIGNotificationImage largeImage:imageContentMode:] */

void FUN_10b807a54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c088090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c3378,PTR_s_largeImage_imageContentMode_sync_1125ffa30,param_3,param_4,0);
  return;
}



/* Entry: 10b807a64; end: 10b807ad7; +[SIGNotificationImage largeImage:imageContentMode:synchronousLoadImage:] */

void FUN_10b807a64(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3378;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010c01c100();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b807ad8; end: 10b807ae3; -[SIGNotificationImage .cxx_destruct] */

void FUN_10b807ad8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b807ae4; end: 10b807bb3; -[SIGNotificationImageInfoActionDialog initWithImage:primaryText:primaryTextStyle:primaryTextMaxLines:secondaryText:secondaryTextStyle:actionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b807ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_11270b200;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithImage_primaryText_primar_1125e4a78,param_3,param_4,
                      param_5,param_6,param_7,param_8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_9;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794098);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112794098) = uVar2;
    _objc_release(uVar3);
    func_0x00010beacc80(puVar1);
  }
  _objc_release(param_9);
  return (undefined1 *)puVar1;
}



/* Entry: 10b807bb4; end: 10b807c93; -[SIGNotificationImageInfoActionDialog initWithImage:primaryText:primaryTextStyle:primaryTextMaxLines:secondaryText:secondaryTextStyle:actionHandler:notificationButton:buttonActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b807bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_11270b200;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithImage_primaryText_primar_1125e4a90,param_3,param_4,
                      param_5,param_6,param_7,param_8,param_10,param_11);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_9;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794098);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112794098) = uVar2;
    _objc_release(uVar3);
    func_0x00010beacc80(puVar1);
  }
  _objc_release(param_9);
  return puVar1;
}



/* Entry: 10b807c94; end: 10b807cf3; -[SIGNotificationImageInfoActionDialog _setupGestureRecognizer] */

void FUN_10b807c94(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10b807cf4; end: 10b807d63; -[SIGNotificationImageInfoActionDialog _didLongPressHandled:] */

/* WARNING: Possible PIC construction at 0x00010b807d34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b807d38) */
/* WARNING: Removing unreachable block (ram,0x00010b807d58) */
/* WARNING: Removing unreachable block (ram,0x00010b807d48) */

void FUN_10b807cf4(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c252440();
                    /* WARNING: Could not recover jumptable at 0x00010c1a8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHighlighted__112647c38,param_3 - 1U < 2);
  return;
}



/* Entry: 10b807d64; end: 10b807d9f; -[SIGNotificationImageInfoActionDialog gestureRecognizer:shouldReceiveTouch:] */

bool FUN_10b807d64(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_4 == param_1;
}



/* Entry: 10b807da0; end: 10b807da7; -[SIGNotificationImageInfoActionDialog gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_10b807da0(void)

{
  return 1;
}



/* Entry: 10b807da8; end: 10b807dbb; -[SIGNotificationImageInfoActionDialog .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b807da8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794098,0);
  return;
}



/* Entry: 10b807dbc; end: 10b807f53; -[SIGNotificationImageInfoDialog initWithImage:primaryText:primaryTextStyle:primaryTextMaxLines:secondaryText:secondaryTextStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b807dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_11270b208;
  uStack_70 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_70,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11279409c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11279409c) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_1127940a0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127940a4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127940a4) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127940a8) = param_5;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127940ac) = param_8;
    lVar4 = (long)_DAT_1127940b0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127940b4) = 0;
    func_0x00010c21c320(puVar1);
    func_0x00010bf492c0(puVar1);
    func_0x00010bf42b20(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b807f54; end: 10b808173; -[SIGNotificationImageInfoDialog initWithImage:primaryText:primaryTextStyle:primaryTextMaxLines:secondaryText:secondaryTextStyle:notificationButton:buttonActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b807f54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_11270b208;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11279409c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11279409c) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_1127940a0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127940a4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127940a4) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127940a8) = param_5;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127940ac) = param_8;
    lVar4 = (long)_DAT_1127940b0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127940b8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127940b4) = 0;
    uVar2 = param_10;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127940bc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127940bc) = uVar2;
    _objc_release(uVar3);
    func_0x00010c21c320(puVar1);
    func_0x00010bf492c0(puVar1);
    func_0x00010bf42b20(puVar1);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b808174; end: 10b8082bb; -[SIGNotificationImageInfoDialog commonSetup] */

void FUN_10b808174(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c1ad9a0(param_1,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0x3f800000);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0x4018000000000000);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(0,0x4000000000000000);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xca);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010c17d4c0(param_1,param_2,0);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b8082bc; end: 10b8083a7; -[SIGNotificationImageInfoDialog setHighlighted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8082bc(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (*(byte *)(param_1 + _DAT_1127940b4) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_1127940b4) = (char)param_3;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (param_3 == 0) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf414e0(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1,param_2,puVar2);
    _objc_release(puVar2);
    uVar3 = 0xc6;
  }
  else {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1,param_2,puVar1);
    uVar3 = 0xc1;
  }
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_1127940c0),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b8083a8; end: 10b8084bb; -[SIGNotificationImageInfoDialog traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8083a8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_s_traitCollectionDidChange__11267bf88;
  puStack_48 = PTR_PTR_11270b208;
  uStack_50 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_50,puVar1,param_3);
  uVar2 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1069c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c1069c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar5 & 1) == 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x00010bf492c0(param_1);
  }
  return;
}



/* Entry: 10b8084bc; end: 10b8084d7; -[SIGNotificationImageInfoDialog _buttonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8084bc(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127940bc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b8084d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + _DAT_1127940bc) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b8084d8; end: 10b808c63; -[SIGNotificationImageInfoDialog setUpSubviewsWithPrimaryText:secondaryText:secondaryTextStyle:notificationImage:notificationButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8084d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar5 = PTR_PTR_1126aea58;
  _objc_alloc();
  uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
  func_0x00010c160fc0();
  func_0x00010c21ad00(puVar5);
  func_0x00010c1c3ae0(0x4035000000000000,puVar5);
  func_0x00010c165e00(puVar5);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar5);
  _objc_release(puVar1);
  func_0x00010c1bdb00(puVar5);
  lVar4 = (long)_DAT_1127940a0;
  lVar2 = *(long *)(param_1 + lVar4);
  if ((lVar2 != 0) && (func_0x00010c067fc0(), 0 < lVar2)) {
    func_0x00010c067fc0(*(undefined8 *)(param_1 + lVar4));
  }
  func_0x00010c1cfce0(puVar5);
  func_0x00010c213040(puVar5);
  func_0x00010c181f00(0x447a0000,puVar5);
  func_0x00010c181cc0(0x443b8000,puVar5);
  func_0x00010c212f20(puVar5);
  func_0x00010c21e900(puVar5);
  lVar2 = param_7;
  func_0x00010bf25920();
  if ((lVar2 == 2) || (lVar2 = param_7, func_0x00010bf25920(), lVar2 == 3)) {
    func_0x00010c165e20(puVar5);
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127940c0);
  *(undefined **)(param_1 + _DAT_1127940c0) = puVar5;
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
  func_0x00010c160fc0();
  func_0x00010c21ad00(puVar5);
  func_0x00010c1c3ae0(0x4032000000000000,puVar5);
  func_0x00010c165e00(puVar5);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar5);
  _objc_release(puVar1);
  func_0x00010c1bdb00(puVar5);
  func_0x00010c1cfce0(puVar5);
  func_0x00010c213040(puVar5);
  func_0x00010c181f00(0x447a0000,puVar5);
  func_0x00010c181cc0(0x443b8000,puVar5);
  func_0x00010c212f20(puVar5);
  func_0x00010c21e900(puVar5);
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127940c8);
  *(undefined **)(param_1 + _DAT_1127940c8) = puVar5;
  _objc_release(uVar6);
  puVar5 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  func_0x00010c16e060();
  func_0x00010c166c00(puVar5);
  func_0x00010c190b80(puVar5);
  func_0x00010c207380(0,puVar5);
  func_0x00010bef6d60(puVar5);
  func_0x00010bef6d60(puVar5);
  func_0x00010c21e900(puVar5);
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127940cc);
  *(undefined **)(param_1 + _DAT_1127940cc) = puVar5;
  _objc_release(uVar6);
  if (param_6 != 0) {
    puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    func_0x00010bfe7280(param_6);
    func_0x00010c182220(puVar5);
    _objc_initWeak(auStack_98,puVar5);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10b808c64;
    puStack_a8 = &UNK_110856cc0;
    _objc_copyWeak(auStack_a0,auStack_98);
    func_0x00010bfe9360(param_6);
    func_0x00010c160fc0(puVar5);
    func_0x00010c21e900(puVar5);
    func_0x00010c17d4c0(puVar5);
    puVar1 = puVar5;
    func_0x00010c08c0e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4010000000000000);
    _objc_release(puVar1);
    func_0x00010befbb60(param_1);
    uVar6 = *(undefined8 *)(param_1 + _DAT_1127940d0);
    *(undefined **)(param_1 + _DAT_1127940d0) = puVar5;
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
  }
  if (param_7 == 0) goto LAB_10b808be0;
  lVar2 = param_7;
  func_0x00010bf25920();
  puVar5 = PTR_PTR_1126aec40;
  lVar4 = param_7;
  if (lVar2 - 2U < 2) {
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf25920();
    func_0x00010c20eaa0(puVar5);
    lVar2 = param_7;
    func_0x00010bf259e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(puVar5);
    _objc_release(lVar2);
    func_0x00010bf255c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(puVar5);
LAB_10b808a00:
    _objc_release(lVar4);
    func_0x00010c1c3ae0(0x4035000000000000,puVar5);
  }
  else if (lVar2 == 1) {
    puVar5 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_7;
    func_0x00010bf255c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_7;
      func_0x00010bf256c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        _objc_initWeak(auStack_98,puVar5);
        _objc_copyWeak(auStack_c8,auStack_98);
        func_0x00010bf0c020(param_7);
        _objc_destroyWeak(auStack_c8);
        _objc_destroyWeak(auStack_98);
      }
    }
    else {
      lVar2 = param_7;
      func_0x00010bf255c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9fc0(puVar5);
      _objc_release(lVar2);
    }
    lVar2 = param_7;
    func_0x00010bf4cc00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c181ee0(puVar5);
      func_0x00010c182ae0(puVar5);
      puVar1 = puVar5;
      func_0x00010bfe90c0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_7;
      func_0x00010bf4cc00(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4cbe0();
      func_0x00010c182220(puVar1);
      _objc_release(lVar2);
      _objc_release(puVar1);
    }
  }
  else {
    if (lVar2 == 0) {
      func_0x00010bf25cc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf259e0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216260(puVar5);
      goto LAB_10b808a00;
    }
    puVar5 = (undefined *)0x0;
  }
  func_0x00010c160fc0(puVar5);
  func_0x00010befbd60(puVar5);
  func_0x00010c181cc0(0x443bc000,puVar5);
  func_0x00010befbb60(param_1);
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127940d4);
  *(undefined **)(param_1 + _DAT_1127940d4) = puVar5;
  _objc_release(uVar6);
LAB_10b808be0:
  func_0x00010befbb60(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b808c64; end: 10b808cab;  */

void FUN_10b808c64(long param_1,undefined8 param_2)

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



/* Entry: 10b808cac; end: 10b808d13;  */

void FUN_10b808cac(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1a9fc0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b808d14; end: 10b809d9b; -[SIGNotificationImageInfoDialog constrainSubviewsWithPrimaryText:secondaryText:notificationImage:notificationButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10b808d14(double param_1,undefined8 param_2,double param_3,double param_4,ulong param_5,
                   undefined8 param_6,ulong param_7,long param_8,long param_9,long param_10)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  double unaff_d11;
  undefined1 *puVar29;
  code *pcVar30;
  undefined *puStack_158;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  puVar29 = &stack0xfffffffffffffff0;
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar19 = (long)_DAT_1127940c0;
  func_0x00010c219b60(*(undefined8 *)(param_5 + lVar19),param_6,0);
  func_0x00010c219b60(*(undefined8 *)(param_5 + (long)_DAT_1127940c8),param_6,0);
  lVar25 = (long)_DAT_1127940cc;
  func_0x00010c219b60(*(undefined8 *)(param_5 + lVar25),param_6,0);
  lVar20 = (long)_DAT_1127940d0;
  func_0x00010c219b60(*(undefined8 *)(param_5 + lVar20),param_6,0);
  lVar24 = (long)_DAT_1127940d4;
  func_0x00010c219b60(*(undefined8 *)(param_5 + lVar24),param_6,0);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126e15b8;
  uVar12 = param_5;
  if (param_9 == 0) {
    param_1 = 12.0;
    if (param_8 == 0) {
      func_0x00010c279540(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar12;
      func_0x00010c1069c0();
      _objc_retainAutoreleasedReturnValue();
      param_1 = 16.0;
      uVar26 = 0x4034000000000000;
LAB_10b808e9c:
      func_0x00010bf8bbe0(param_1,uVar26,0x4034000000000000,puVar2,param_6,uVar10);
      _objc_release(uVar10);
      _objc_release(uVar12);
    }
LAB_10b808ec0:
    param_2 = 0x4030000000000000;
    unaff_d11 = 32.0;
LAB_10b808ee4:
    param_4 = 16.0;
    func_0x00010c18e200(param_1,param_2,param_1,param_5);
  }
  else {
    lVar3 = param_9;
    func_0x00010bfe8d00();
    puVar2 = PTR_PTR_1126e15b8;
    if (lVar3 == 1) {
      param_1 = 6.0;
      unaff_d11 = 22.0;
      param_2 = 0x4018000000000000;
      goto LAB_10b808ee4;
    }
    if (lVar3 == 0) {
      param_1 = 12.0;
      if (param_8 == 0) {
        func_0x00010c279540(param_5);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar12;
        func_0x00010c1069c0();
        _objc_retainAutoreleasedReturnValue();
        param_1 = 12.0;
        uVar26 = 0x4032000000000000;
        goto LAB_10b808e9c;
      }
      goto LAB_10b808ec0;
    }
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_5 + lVar25);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_5;
  func_0x00010bf348e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar5;
  func_0x00010bf493a0(uVar5,param_6,uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(param_5 + lVar25);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_5;
  func_0x00010c08cee0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bf49460(uVar6,param_6,uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar12);
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_5 + lVar25);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_5;
  func_0x00010c08cee0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf49500(uVar7,param_6,uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar12);
  _objc_release(uVar7);
  uVar8 = *(undefined8 *)(param_5 + lVar25);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_5;
  func_0x00010c08cee0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf49500(uVar8,param_6,uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar12);
  _objc_release(uVar8);
  uVar8 = 3;
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar5;
  uStack_a0 = uVar6;
  uStack_98 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_a8,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar4,param_6,puVar11);
  _objc_release(puVar11);
  if (param_9 == 0) {
    uVar9 = *(undefined8 *)(param_5 + lVar25);
    func_0x00010c08de00(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_5;
    func_0x00010c08cee0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar9;
    func_0x00010bf493a0(uVar9,param_6,uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    dVar27 = 0.0;
LAB_10b8091d4:
    _objc_release(uVar10);
    _objc_release(uVar9);
  }
  else {
    lVar3 = param_9;
    func_0x00010bfe8d00();
    if (lVar3 == 0) {
      dVar27 = 16.0;
LAB_10b809188:
      uVar9 = *(undefined8 *)(param_5 + lVar25);
      func_0x00010c08de00(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(ulong *)(param_5 + lVar20);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar9;
      param_1 = dVar27;
      func_0x00010bf493c0(dVar27,uVar9,param_6,uVar10);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10b8091d4;
    }
    if (lVar3 == 1) {
      dVar27 = 8.0;
      goto LAB_10b809188;
    }
    uVar17 = 0;
    dVar27 = 0.0;
  }
  func_0x00010befa120(puVar4,param_6,uVar17);
  _objc_release(uVar17);
  func_0x00010befa160(puVar2,param_6,puVar4);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  if (param_9 == 0) {
    if (param_10 == 0) {
      func_0x00010befa120(puVar2,param_6,uVar26);
      puStack_158 = (undefined *)0x0;
      goto LAB_10b809d04;
    }
    puStack_158 = (undefined *)0x0;
    dVar28 = 0.0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = *(undefined **)(param_5 + lVar20);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_5;
    func_0x00010bf348e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = puVar11;
    func_0x00010bf493a0(puVar11,param_6,uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    _objc_release(puVar11);
    param_1 = 5.65581687602019e-315;
    func_0x00010c1e3380(0x443b8000,puStack_158);
    uVar6 = *(undefined8 *)(param_5 + lVar20);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_5;
    func_0x00010c08cee0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar12;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bf493a0(uVar6,param_6,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar12);
    _objc_release(uVar6);
    uVar7 = *(undefined8 *)(param_5 + lVar20);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_5;
    func_0x00010c08cee0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010bf49460(uVar7,param_6,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar12);
    _objc_release(uVar7);
    uVar8 = *(undefined8 *)(param_5 + lVar20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_5;
    func_0x00010c08cee0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010bf49500(uVar8,param_6,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar12);
    _objc_release(uVar8);
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_c0 = uVar5;
    uStack_b8 = uVar6;
    uStack_b0 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_c0,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar4,param_6,puVar11);
    _objc_release(puVar11);
    lVar3 = param_9;
    func_0x00010bfe8d00();
    if (lVar3 == 0) {
      dVar28 = 24.0;
LAB_10b809470:
      uVar8 = *(undefined8 *)(param_5 + lVar20);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar8;
      func_0x00010bf49420(dVar28);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      uVar12 = *(ulong *)(param_5 + lVar20);
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar12;
      param_1 = dVar28;
      func_0x00010bf49420(dVar28);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
    }
    else {
      if (lVar3 == 1) {
        dVar28 = 48.0;
        goto LAB_10b809470;
      }
      uVar10 = 0;
      uVar17 = 0;
      dVar28 = 0.0;
    }
    uVar8 = 2;
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_d0 = uVar17;
    uStack_c8 = uVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_d0,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar4,param_6,puVar11);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar17);
    func_0x00010befa160(puVar2,param_6,puVar4);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    if (param_10 == 0) {
      func_0x00010befa120(puVar2,param_6,uVar26);
      if (puStack_158 != (undefined *)0x0) {
        func_0x00010befa120(puVar2,param_6,puStack_158);
        _objc_release(puStack_158);
      }
      goto LAB_10b809d04;
    }
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_10;
  func_0x00010bf25920();
  if (lVar3 - 2U < 2) {
LAB_10b80959c:
    param_3 = (param_3 + -32.0) - (dVar27 + unaff_d11 + dVar28);
    param_2 = 0x4035000000000000;
    puVar11 = PTR_PTR_1126e15b8;
    func_0x00010c087880(param_3,0x4035000000000000,PTR_PTR_1126e15b8,param_6,
                        *(undefined8 *)(param_5 + (long)_DAT_1127940a8),param_7);
    if (((ulong)puVar11 & 1) == 0) {
      if (param_8 == 0) {
        uVar21 = 0;
      }
      else {
        param_2 = 0x4032000000000000;
        puVar11 = PTR_PTR_1126e15b8;
        func_0x00010c087880(param_3,0x4032000000000000,PTR_PTR_1126e15b8,param_6,
                            *(undefined8 *)(param_5 + (long)_DAT_1127940ac));
        uVar21 = (uint)puVar11;
      }
      uVar23 = 1;
    }
    else {
      uVar23 = 1;
      uVar21 = 1;
    }
  }
  else {
    if (lVar3 == 1) {
      lVar3 = param_10;
      func_0x00010bf4cc00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 == 0) {
        uVar23 = 0;
        uVar21 = 0;
        goto LAB_10b80977c;
      }
      uVar7 = *(undefined8 *)(param_5 + lVar24);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_10;
      func_0x00010bf4cc00(param_10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e9e0();
      uVar5 = uVar7;
      func_0x00010bf49420();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_5 + lVar24);
      uStack_e0 = uVar5;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_10;
      func_0x00010bf4cc00(param_10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e9e0();
      uVar6 = uVar8;
      func_0x00010bf49420(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_d8 = uVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_e0,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar4,param_6,puVar11);
      _objc_release(puVar11);
      _objc_release(uVar6);
      _objc_release(lVar13);
      _objc_release(uVar8);
      _objc_release(uVar5);
      _objc_release(lVar3);
      _objc_release(uVar7);
    }
    else if (lVar3 == 0) goto LAB_10b80959c;
    uVar23 = 0;
    uVar21 = 0;
  }
LAB_10b80977c:
  uVar12 = param_5;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar12;
  func_0x00010c1069c0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar10;
  func_0x00010c0720c0();
  if ((uVar14 & 1) == 0) {
    uVar14 = param_5;
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c1069c0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    _UIContentSizeCategoryIsAccessibilityCategory();
    uVar22 = (uint)uVar16;
    _objc_release(uVar15);
    _objc_release(uVar14);
  }
  else {
    uVar22 = 1;
  }
  _objc_release(uVar10);
  _objc_release(uVar12);
  uVar1 = 0;
  if (param_9 != 0) {
    uVar1 = uVar23 & uVar22;
  }
  if ((uVar1 & uVar21) == 1) {
    uVar6 = *(undefined8 *)(param_5 + lVar25);
    func_0x00010c274200(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_5;
    func_0x00010c08cee0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bf493a0(uVar6,param_6,uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_6,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar10);
    _objc_release(uVar12);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_5 + lVar20);
    func_0x00010bf348e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_5 + lVar19);
    func_0x00010bf348e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bf493a0(uVar6,param_6,uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_6,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_5 + lVar24);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_5 + lVar20);
    func_0x00010c2793a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bf493c0(dVar27,uVar6,param_6,uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar7 = *(undefined8 *)(param_5 + lVar24);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_5;
    func_0x00010c08cee0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar12;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010bf49500(uVar7,param_6,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar12);
    _objc_release(uVar7);
    uVar8 = *(undefined8 *)(param_5 + lVar24);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_5 + lVar25);
    func_0x00010bf1ff80(uVar17);
    _objc_retainAutoreleasedReturnValue();
    param_1 = 4.0;
    uVar7 = uVar8;
    func_0x00010bf493c0(0x4010000000000000,uVar8,param_6,uVar17);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar17);
    _objc_release(uVar8);
    uVar8 = 3;
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_f8 = uVar5;
    uStack_f0 = uVar6;
    uStack_e8 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_f8,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar4,param_6,puVar11);
  }
  else {
    func_0x00010befa120(puVar2,param_6,uVar26);
    if (puStack_158 != (undefined *)0x0) {
      func_0x00010befa120(puVar2);
    }
    uVar6 = *(undefined8 *)(param_5 + lVar24);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_5 + lVar25);
    func_0x00010c2793a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    param_1 = 8.0;
    uVar5 = uVar6;
    func_0x00010bf49480(0x4020000000000000,uVar6,param_6,uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar7 = *(undefined8 *)(param_5 + lVar24);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_5;
    func_0x00010c08cee0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar12;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010bf493a0(uVar7,param_6,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar12);
    _objc_release(uVar7);
    uVar8 = *(undefined8 *)(param_5 + lVar24);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_5;
    func_0x00010c08cee0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010bf49460(uVar8,param_6,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar12);
    _objc_release(uVar8);
    puVar18 = *(undefined **)(param_5 + lVar24);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_5;
    func_0x00010bf348e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar18;
    func_0x00010bf493a0(puVar18,param_6,uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    _objc_release(puVar18);
    uVar8 = 4;
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_118 = uVar5;
    uStack_110 = uVar6;
    uStack_108 = uVar7;
    puStack_100 = puVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_118,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar4,param_6,puVar18);
    _objc_release(puVar18);
  }
  _objc_release(puVar11);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(param_5 + lVar24);
  func_0x00010bf1ff80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_5;
  func_0x00010c08cee0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bf49500(uVar6,param_6,uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar12);
  _objc_release(uVar6);
  func_0x00010befa120(puVar4,param_6,uVar5);
  func_0x00010befa160(puVar2,param_6,puVar4);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puStack_158);
  puStack_158 = puVar2;
LAB_10b809d04:
  puVar4 = puVar2;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_6,puVar2);
  uVar5 = *(undefined8 *)(param_5 + (long)_DAT_1127940c4);
  *(undefined **)(param_5 + (long)_DAT_1127940c4) = puVar2;
  _objc_release(uVar5);
  _objc_release(uVar26);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return param_7;
  }
  ___stack_chk_fail();
  puVar11 = PTR_PTR_1126c4e78;
  pcVar30 = FUN_10b809d9c;
  _objc_retain(uVar8);
  func_0x00010bf0e900(param_2,puVar11,param_6,puVar4,0,4,0,1,0,dVar27,param_3,uVar10,puStack_158,
                      puVar2,uVar26,puVar29,pcVar30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ba0(param_1,0x7fefffffffffffff,uVar8,param_6,3,puVar11,0);
  _objc_release(uVar8);
  puVar2 = puVar11;
  func_0x00010c0e00e0(puVar11,param_6,*(undefined8 *)PTR__NSFontAttributeName_1103457f0);
  _objc_retainAutoreleasedReturnValue();
  dVar27 = (double)(ulong)(uint)(float)param_4;
  func_0x00010c099280();
  _objc_release(puVar2);
  _objc_release(puVar11);
  return (ulong)((float)(int)dVar27 < (float)(int)param_4);
}



/* Entry: 10b809d9c; end: 10b809e8f; +[SIGNotificationImageInfoDialog labelWillWrapInAvailableWidth:typographyStyle:maximumFontSize:text:] */

bool FUN_10b809d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  
  puVar1 = PTR_PTR_1126c4e78;
  _objc_retain(param_8);
  func_0x00010bf0e900(param_2,puVar1,param_6,param_7,0,4,0,1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ba0(param_1,0x7fefffffffffffff,param_8,param_6,3,puVar1,0);
  _objc_release(param_8);
  puVar2 = puVar1;
  func_0x00010c0e00e0(puVar1,param_6,*(undefined8 *)PTR__NSFontAttributeName_1103457f0);
  _objc_retainAutoreleasedReturnValue();
  dVar3 = (double)(ulong)(uint)(float)param_4;
  func_0x00010c099280();
  _objc_release(puVar2);
  _objc_release(puVar1);
  return (float)(int)dVar3 < (float)(int)param_4;
}



/* Entry: 10b809e90; end: 10b809fef; +[SIGNotificationImageInfoDialog dynamicTypePaddingRampValueForSizeCategory:xSmallValue:largeValue:xxxLargeValue:] */

double FUN_10b809e90(double param_1,double param_2,double param_3,undefined8 param_4,
                    undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  double dVar2;
  
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010c0720c0(param_6,param_5,*(undefined8 *)PTR__UIContentSizeCategoryExtraSmall_110345b58)
  ;
  if ((uVar1 & 1) != 0) goto LAB_10b809f2c;
  uVar1 = param_6;
  func_0x00010c0720c0(param_6,param_5,*(undefined8 *)PTR__UIContentSizeCategorySmall_110345b78);
  if ((int)uVar1 == 0) {
    uVar1 = param_6;
    func_0x00010c0720c0(param_6,param_5,*(undefined8 *)PTR__UIContentSizeCategoryMedium_110345b70);
    if ((int)uVar1 == 0) {
      uVar1 = param_6;
      func_0x00010c0720c0(param_6,param_5,*(undefined8 *)PTR__UIContentSizeCategoryLarge_110345b68);
      param_1 = param_2;
      if ((uVar1 & 1) != 0) goto LAB_10b809f2c;
      uVar1 = param_6;
      func_0x00010c0720c0(param_6,param_5,
                          *(undefined8 *)PTR__UIContentSizeCategoryExtraLarge_110345b50);
      if ((int)uVar1 == 0) {
        uVar1 = param_6;
        func_0x00010c0720c0(param_6,param_5,
                            *(undefined8 *)PTR__UIContentSizeCategoryExtraExtraLarge_110345b48);
        if ((int)uVar1 == 0) {
          uVar1 = param_6;
          func_0x00010c0720c0(param_6,param_5,
                              *(undefined8 *)
                               PTR__UIContentSizeCategoryExtraExtraExtraLarge_110345b40);
          param_1 = param_3;
          if (((uVar1 & 1) == 0) &&
             (uVar1 = param_6, _UIContentSizeCategoryIsAccessibilityCategory(), (int)uVar1 == 0)) {
            param_1 = param_2;
          }
          goto LAB_10b809f2c;
        }
        param_1 = param_3 + (param_3 - param_2) / -3.0;
        goto LAB_10b809f28;
      }
      param_1 = param_3 - param_2;
      dVar2 = 3.0;
    }
    else {
      param_1 = param_2 - param_1;
      dVar2 = -3.0;
    }
    param_1 = param_2 + param_1 / dVar2;
  }
  else {
    param_1 = param_1 + (param_2 - param_1) / 3.0;
  }
LAB_10b809f28:
  param_1 = (double)(long)param_1;
LAB_10b809f2c:
  _objc_release(param_6);
  return param_1;
}



/* Entry: 10b809ff0; end: 10b809fff; -[SIGNotificationImageInfoDialog highlighted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b809ff0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127940b4);
}



/* Entry: 10b80a000; end: 10b80a0df; -[SIGNotificationImageInfoDialog .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b80a000(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127940c4,0);
  _objc_storeStrong(param_1 + _DAT_1127940bc,0);
  _objc_storeStrong(param_1 + _DAT_1127940d4,0);
  _objc_storeStrong(param_1 + _DAT_1127940d0,0);
  _objc_storeStrong(param_1 + _DAT_1127940cc,0);
  _objc_storeStrong(param_1 + _DAT_1127940c8,0);
  _objc_storeStrong(param_1 + _DAT_1127940c0,0);
  _objc_storeStrong(param_1 + _DAT_1127940b8,0);
  _objc_storeStrong(param_1 + _DAT_1127940b0,0);
  _objc_storeStrong(param_1 + _DAT_1127940a4,0);
  _objc_storeStrong(param_1 + _DAT_1127940a0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11279409c,0);
  return;
}



/* Entry: 10b80a0e0; end: 10b80a133; +[SIGNotificationImageInfoPresenter createPresenterImage:text:actionHandler:swipeToDismissEnabled:accessibilityIdentifier:] */

void FUN_10b80a0e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e15c0;
  func_0x00010bf57f00(PTR_PTR_1126e15c0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0ae0;
  _objc_alloc(PTR_PTR_1126b0ae0);
  func_0x00010c03a360();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b80a134; end: 10b80a19f; +[SIGNotificationImageInfoPresenter createPresenterImage:imageContentMode:title:actionHandler:buttonTitle:buttonActionHandler:swipeToDismissEnabled:accessibilityIdentifier:] */

void FUN_10b80a134(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e15c0;
  func_0x00010bf57ea0(PTR_PTR_1126e15c0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0ae0;
  _objc_alloc(PTR_PTR_1126b0ae0);
  func_0x00010c03a360();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b80a1a0; end: 10b80a217; +[SIGNotificationImageInfoPresenter createPresenterDynamicTypeNotificationWithImage:primaryText:primaryTextStyle:secondaryText:actionHandler:notificationButton:buttonActionHandler:dismissalHandler:swipeToDismissEnabled:accessibilityIdentifier:] */

void FUN_10b80a1a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e15c0;
  func_0x00010bf57e80(0,PTR_PTR_1126e15c0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0ae0;
  _objc_alloc(PTR_PTR_1126b0ae0);
  func_0x00010c03a360();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b80a218; end: 10b80a28b; +[SIGNotificationImageInfoPresenter createPresenterDynamicTypeNotificationWithImage:primaryText:primaryTextStyle:secondaryText:actionHandler:notificationButton:buttonActionHandler:dismissalHandler:swipeToDismissEnabled:maxPresentationDurationSecs:accessibilityIdentifier:] */

void FUN_10b80a218(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e15c0;
  func_0x00010bf57e80(PTR_PTR_1126e15c0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0ae0;
  _objc_alloc(PTR_PTR_1126b0ae0);
  func_0x00010c03a360();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b80a28c; end: 10b80a307; +[SIGNotificationImageInfoPresenter createPresenterDynamicTypeNotificationWithImage:primaryText:primaryTextStyle:primaryTextMaxLines:secondaryText:actionHandler:notificationButton:buttonActionHandler:dismissalHandler:swipeToDismissEnabled:maxPresentationDurationSecs:accessibilityIdentifier:] */

void FUN_10b80a28c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e15c0;
  func_0x00010bf57e00(PTR_PTR_1126e15c0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0ae0;
  _objc_alloc(PTR_PTR_1126b0ae0);
  func_0x00010c03a360();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b80a308; end: 10b80a383; +[SIGNotificationImageInfoPresenter createPresenterDynamicTypeNotificationWithImage:primaryText:primaryTextStyle:primaryTextMaxLines:secondaryText:secondaryTextStyle:actionHandler:notificationButton:buttonActionHandler:dismissalHandler:swipeToDismissEnabled:maxPresentationDurationSecs:accessibilityIdentifier:] */

void FUN_10b80a308(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e15c0;
  func_0x00010bf57e40(PTR_PTR_1126e15c0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0ae0;
  _objc_alloc(PTR_PTR_1126b0ae0);
  func_0x00010c03a360();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b80a384; end: 10b80a3ff; +[SIGNotificationImageInfoPresenter createPresenterDynamicTypeNotificationWithImage:primaryText:primaryTextStyle:primaryTextMaxLines:secondaryText:secondaryTextStyle:actionHandler:notificationButton:buttonActionHandler:dismissalHandler:dismissalReasonHandler:swipeToDismissEnabled:maxPresentationDurationSecs:accessibilityIdentifier:] */

void FUN_10b80a384(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e15c0;
  func_0x00010bf57e20(PTR_PTR_1126e15c0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0ae0;
  _objc_alloc(PTR_PTR_1126b0ae0);
  func_0x00010c03a360();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b80a400; end: 10b80a46b; +[SIGNotificationImageInfoPresenter createPresenterWithImage:imageContentMode:primaryText:secondaryText:buttonText:url:accessibilityIdentifier:] */

void FUN_10b80a400(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e15c0;
  func_0x00010bf57f40(PTR_PTR_1126e15c0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0ae0;
  _objc_alloc(PTR_PTR_1126b0ae0);
  func_0x00010c03a360();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b80a46c; end: 10b80a4bf; +[SIGNotificationImageInfoPresenter createPresenterImage:primaryText:secondaryText:actionHandler:swipeToDismissEnabled:accessibilityIdentifier:] */

void FUN_10b80a46c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e15c0;
  func_0x00010bf57ee0(PTR_PTR_1126e15c0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0ae0;
  _objc_alloc(PTR_PTR_1126b0ae0);
  func_0x00010c03a360();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b80a4c0; end: 10b80a533; -[SIGNotificationImageInfoPresenter initWithPrivatePresenter:] */

undefined1 * FUN_10b80a4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270b210;
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



/* Entry: 10b80a534; end: 10b80a53b; -[SIGNotificationImageInfoPresenter containerView] */

void FUN_10b80a534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_containerView_1125b0650)
  ;
  return;
}



/* Entry: 10b80a53c; end: 10b80a543; -[SIGNotificationImageInfoPresenter presentNotificationOverView:completion:] */

void FUN_10b80a53c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10d3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_presentNotificationOverView_comp_112620f08);
  return;
}



/* Entry: 10b80a544; end: 10b80a54b; -[SIGNotificationImageInfoPresenter dismissPresenter] */

void FUN_10b80a544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_dismissPresenter_1125bea28);
  return;
}



/* Entry: 10b80a54c; end: 10b80a553; -[SIGNotificationImageInfoPresenter debugInfo] */

void FUN_10b80a54c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf66210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_debugInfo_1125b7228);
  return;
}



/* Entry: 10b80a554; end: 10b80a55f; -[SIGNotificationImageInfoPresenter .cxx_destruct] */

void FUN_10b80a554(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b80a560; end: 10b80a61b; +[SIGNotificationImageInfoPresenterPrivate createPresenterImage:text:actionHandler:swipeToDismissEnabled:accessibilityIdentifier:] */

void FUN_10b80a560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e15c0;
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038c60();
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b80a61c; end: 10b80a6f3; +[SIGNotificationImageInfoPresenterPrivate createPresenterImage:primaryText:secondaryText:actionHandler:swipeToDismissEnabled:accessibilityIdentifier:] */

void FUN_10b80a61c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e15c0;
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038c60();
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b80a6f4; end: 10b80a807; +[SIGNotificationImageInfoPresenterPrivate createPresenterImage:imageContentMode:title:actionHandler:buttonTitle:buttonActionHandler:swipeToDismissEnabled:accessibilityIdentifier:] */

void FUN_10b80a6f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e15c0;
  _objc_retain(param_11);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038c40(0);
  _objc_release(param_11);
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



/* Entry: 10b80a808; end: 10b80a8df; +[SIGNotificationImageInfoPresenterPrivate createPresenterNotificationImage:primaryText:secondaryText:actionHandler:swipeToDismissEnabled:accessibilityIdentifier:] */

void FUN_10b80a808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e15c0;
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038c60();
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b80a8e0; end: 10b80aa07; +[SIGNotificationImageInfoPresenterPrivate createPresenterNotificationImage:primaryText:secondaryText:actionHandler:notificationButton:buttonActionHandler:swipeToDismissEnabled:accessibilityIdentifier:] */

void FUN_10b80a8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e15c0;
  _objc_retain(param_11);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038c40(0);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b80aa08; end: 10b80ab4f; +[SIGNotificationImageInfoPresenterPrivate createPresenterDynamicTypeNotificationWithImage:primaryText:primaryTextStyle:secondaryText:actionHandler:notificationButton:buttonActionHandler:dismissalHandler:swipeToDismissEnabled:maxPresentationDurationSecs:accessibilityIdentifier:] */

void FUN_10b80aa08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e15c0;
  _objc_retain(param_14);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c038c40(param_1);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b80ab50; end: 10b80ab93; +[SIGNotificationImageInfoPresenterPrivate createPresenterDynamicTypeNotificationWithImage:primaryText:primaryTextStyle:primaryTextMaxLines:secondaryText:actionHandler:notificationButton:buttonActionHandler:dismissalHandler:swipeToDismissEnabled:maxPresentationDurationSecs:accessibilityIdentifier:] */

void FUN_10b80ab50(void)

{
  func_0x00010bf57e40();
  return;
}



/* Entry: 10b80ab94; end: 10b80acef; +[SIGNotificationImageInfoPresenterPrivate createPresenterDynamicTypeNotificationWithImage:primaryText:primaryTextStyle:primaryTextMaxLines:secondaryText:secondaryTextStyle:actionHandler:notificationButton:buttonActionHandler:dismissalHandler:swipeToDismissEnabled:maxPresentationDurationSecs:accessibilityIdentifier:] */

void FUN_10b80ab94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e15c0;
  _objc_retain(param_16);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c038c40(param_1);
  _objc_release(param_16);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b80acf0; end: 10b80ae6b; +[SIGNotificationImageInfoPresenterPrivate createPresenterDynamicTypeNotificationWithImage:primaryText:primaryTextStyle:primaryTextMaxLines:secondaryText:secondaryTextStyle:actionHandler:notificationButton:buttonActionHandler:dismissalHandler:dismissalReasonHandler:swipeToDismissEnabled:maxPresentationDurationSecs:accessibilityIdentifier:] */

void FUN_10b80acf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e15c0;
  _objc_retain(param_17);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c038c40(param_1);
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b80ae6c; end: 10b80af67; +[SIGNotificationImageInfoPresenterPrivate createPresenterWithImage:imageContentMode:primaryText:secondaryText:buttonText:url:swipeToDismissEnabled:accessibilityIdentifier:] */

void FUN_10b80ae6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e15c0;
  _objc_retain(param_11);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038c00();
  _objc_release(param_11);
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



/* Entry: 10b80af68; end: 10b80b13b; -[SIGNotificationImageInfoPresenterPrivate initWithPresenterNotificationImage:primaryText:secondaryText:actionHandler:swipeToDismissEnabled:accessibilityIdentifier:legacyImage:] */

undefined8 *
FUN_10b80af68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_11270b218;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar4 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar4 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar4);
    puVar1[6] = 6;
    puVar1[5] = 0x14;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar4 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar4 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar4);
    *(undefined1 *)(puVar1 + 10) = param_7;
    puVar1[0x19] = 0x4008000000000000;
    *(undefined1 *)(puVar1 + 0x17) = 0;
    _objc_retain(param_9);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_9;
    _objc_release(uVar2);
    puVar1[0x11] = 4;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b80b13c; end: 10b80b477; -[SIGNotificationImageInfoPresenterPrivate initWithPresenterNotificationImage:primaryText:primaryTextStyle:primaryTextMaxLines:secondaryText:secondaryTextStyle:actionHandler:notificationButton:buttonActionHandler:dismissalHandler:dismissalReasonHandler:swipeToDismissEnabled:maxPresentationDurationSecs:accessibilityIdentifier:legacyImage:legacyImageContentMode:legacyButtonTitle:callerOptedInForDTNotification:] */

undefined8 *
FUN_10b80b13c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined1 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_20);
  puStack_80 = PTR_PTR_11270b218;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar4 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar4);
    puVar1[5] = param_6;
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar4 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar4);
    puVar1[6] = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar4 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_11);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_11;
    _objc_release(uVar2);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar4 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_13;
    _objc_retainBlock();
    uVar4 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_14;
    _objc_retainBlock();
    uVar4 = puVar1[0x16];
    puVar1[0x16] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar4 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar4);
    *(undefined1 *)(puVar1 + 10) = param_15;
    if (param_1 <= 0.0) {
      param_1 = 3.0;
    }
    puVar1[0x19] = param_1;
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    puVar1[0x11] = param_19;
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar4 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar4);
    *(undefined1 *)(puVar1 + 0x17) = 0;
    *(undefined1 *)((long)puVar1 + 0xb9) = param_21;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_20);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10b80b478; end: 10b80b71f; -[SIGNotificationImageInfoPresenterPrivate initWithPresenterImage:imageContentMode:primaryText:secondaryText:buttonText:url:swipeToDismissEnabled:accessibilityIdentifier:] */

undefined8 *
FUN_10b80b478(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_11270b218;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_3 == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR_PTR_1126c3378;
      func_0x00010c088060();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = puVar1[0xf];
    puVar1[0xf] = puVar2;
    _objc_release(uVar4);
    uVar4 = param_5;
    func_0x00010bf51e00();
    uVar5 = puVar1[2];
    puVar1[2] = uVar4;
    _objc_release(uVar5);
    puVar1[5] = 0x14;
    uVar4 = param_6;
    func_0x00010bf51e00();
    uVar5 = puVar1[4];
    puVar1[4] = uVar4;
    _objc_release(uVar5);
    puVar1[6] = 6;
    uVar4 = param_8;
    func_0x00010bf51e00();
    uVar5 = puVar1[7];
    puVar1[7] = uVar4;
    _objc_release(uVar5);
    uVar4 = param_11;
    func_0x00010bf51e00();
    uVar5 = puVar1[8];
    puVar1[8] = uVar4;
    _objc_release(uVar5);
    puVar1[0x19] = 0x4008000000000000;
    *(undefined2 *)(puVar1 + 0x17) = 0x100;
    *(undefined1 *)(puVar1 + 10) = param_9;
    _objc_retain(param_7);
    uVar4 = puVar1[0x14];
    puVar1[0x14] = param_7;
    _objc_release(uVar4);
    _objc_initWeak(auStack_78,puVar1);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10b80b720;
    puStack_88 = &UNK_1108434b0;
    _objc_copyWeak(auStack_80,auStack_78);
    ppuVar3 = &puStack_a0;
    _objc_retainBlock();
    uVar4 = puVar1[0x13];
    puVar1[0x13] = ppuVar3;
    _objc_release(uVar4);
    _objc_retainBlock();
    uVar4 = puVar1[9];
    puVar1[9] = ppuVar3;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x18];
    puVar1[0x18] = puVar2;
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b80b720; end: 10b80b74b;  */

void FUN_10b80b720(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be325a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b80b74c; end: 10b80b7b3; -[SIGNotificationImageInfoPresenterPrivate dialog] */

void FUN_10b80b74c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010bf55f40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar2;
    _objc_release(uVar1);
    func_0x00010c160fc0(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x40));
    func_0x00010c219b60(*(undefined8 *)(param_1 + 8),param_2,0);
    lVar2 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10b80b7b4; end: 10b80bbbb; -[SIGNotificationImageInfoPresenterPrivate createDynamicSizeTypographyDialog] */

void FUN_10b80b7b4(long param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x48);
    if (puVar2 == (undefined *)0x0) {
      puVar6 = PTR_PTR_1126e15b8;
      if ((*(long *)(param_1 + 0x90) == 0) && (*(long *)(param_1 + 0xa0) == 0)) {
        _objc_alloc(PTR_PTR_1126e15b8);
        puVar9 = *(undefined **)(param_1 + 0x78);
        puVar2 = puVar9;
        if (puVar9 == (undefined *)0x0) {
          puVar2 = PTR_PTR_1126c3378;
          func_0x00010c088040(PTR_PTR_1126c3378);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c01c240(puVar6);
      }
      else {
        _objc_alloc(PTR_PTR_1126e15b8);
        puVar9 = *(undefined **)(param_1 + 0x78);
        puVar2 = puVar9;
        if (puVar9 == (undefined *)0x0) {
          puVar2 = PTR_PTR_1126c3378;
          func_0x00010c088060(PTR_PTR_1126c3378);
          _objc_retainAutoreleasedReturnValue();
        }
        if (*(long *)(param_1 + 0x90) == 0) {
          puVar8 = PTR_PTR_1126b15a0;
          func_0x00010bf25a00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01c2a0(puVar6);
          _objc_release(puVar8);
        }
        else {
          func_0x00010c01c2a0(puVar6);
        }
      }
      if (puVar9 != (undefined *)0x0) goto LAB_10b80bb6c;
    }
    else {
      func_0x00010bf51e00();
      uVar1 = *(undefined1 *)(param_1 + 0x50);
      _objc_initWeak(auStack_80,param_1);
      puVar6 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_10b80bbbc;
      puStack_98 = &UNK_11084ee80;
      uStack_88 = uVar1;
      _objc_copyWeak(auStack_90,auStack_80);
      ppuVar3 = &puStack_b0;
      _objc_retainBlock();
      puStack_e0 = puVar6;
      uStack_d8 = 0xc2000000;
      uStack_d0 = 0x10b80bc0c;
      puStack_c8 = &UNK_11088fcb8;
      _objc_retain();
      ppuStack_c0 = ppuVar3;
      _objc_retain(puVar2);
      uVar4 = 0;
      puStack_b8 = puVar2;
      func_0x000107c27d90(0,&puStack_e0);
      puVar6 = PTR_PTR_1126e15c8;
      if ((*(long *)(param_1 + 0x90) == 0) && (*(long *)(param_1 + 0xa0) == 0)) {
        _objc_alloc(PTR_PTR_1126e15c8);
        puVar8 = *(undefined **)(param_1 + 0x78);
        puVar9 = puVar8;
        if (puVar8 == (undefined *)0x0) {
          puVar9 = PTR_PTR_1126c3378;
          func_0x00010c088040(PTR_PTR_1126c3378);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c01c260(puVar6);
      }
      else {
        _objc_alloc(PTR_PTR_1126e15c8);
        puVar8 = *(undefined **)(param_1 + 0x78);
        puVar9 = puVar8;
        if (puVar8 == (undefined *)0x0) {
          puVar9 = PTR_PTR_1126c3378;
          func_0x00010c088060();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar7 = *(undefined **)(param_1 + 0x90);
        puVar5 = puVar7;
        if (puVar7 == (undefined *)0x0) {
          puVar5 = PTR_PTR_1126b15a0;
          func_0x00010bf25a00();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c01c280();
        if (puVar7 == (undefined *)0x0) {
          _objc_release(puVar5);
        }
      }
      if (puVar8 == (undefined *)0x0) {
        _objc_release(puVar9);
      }
      _objc_release(uVar4);
      _objc_release(puStack_b8);
      _objc_release(ppuStack_c0);
      _objc_release(ppuVar3);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(auStack_80);
    }
    _objc_release(puVar2);
  }
LAB_10b80bb6c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b80bbbc; end: 10b80bc4f;  */

byte FUN_10b80bbbc(long param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0xb8) ^ 1;
    }
    _objc_release();
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}


