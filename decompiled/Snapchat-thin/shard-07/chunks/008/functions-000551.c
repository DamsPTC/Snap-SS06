/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a4390c; end: 105a43917;  */

void FUN_105a4390c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c253050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_statusCoordinatorBluetoothTurned_112672638,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105a43918; end: 105a43ab7; -[SCSpectaclesAppStatusListenerAnnouncer statusCoordinatorNumberOfDevicesUpdated:] */

void FUN_105a43918(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_statusCoordinatorNumberOfDevices_112672648;
  while (PTR_s_statusCoordinatorNumberOfDevices_112672648 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_statusCoordinatorNumberOfDevices_112672648;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c253090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_statusCoordinatorNumberOfDevices_112672648,
             *(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 105a43ab8; end: 105a43ac3;  */

void FUN_105a43ab8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c253090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_statusCoordinatorNumberOfDevices_112672648,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105a43ac4; end: 105a43c8b; -[SCSpectaclesAppStatusListenerAnnouncer statusCoordinator:needsToUpdateStateForDevice:] */

void FUN_105a43ac4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_statusCoordinator_needsToUpdateS_112672620;
  while (PTR_s_statusCoordinator_needsToUpdateS_112672620 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        _objc_retain(param_4);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_4);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_statusCoordinator_needsToUpdateS_112672620;
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c252ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_statusCoordinator_needsToUpdateS_112672620,
             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 105a43c8c; end: 105a43c9b;  */

void FUN_105a43c8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c252ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_statusCoordinator_needsToUpdateS_112672620,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105a43c9c; end: 105a43e3b; -[SCSpectaclesAppStatusListenerAnnouncer statusCoordinatorPressedLearnMoreForBluetoothOverloadError:] */

void FUN_105a43c9c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_statusCoordinatorPressedLearnMor_112672650;
  while (PTR_s_statusCoordinatorPressedLearnMor_112672650 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_statusCoordinatorPressedLearnMor_112672650;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2530b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_statusCoordinatorPressedLearnMor_112672650,
             *(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 105a43e3c; end: 105a43e47;  */

void FUN_105a43e3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2530b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_statusCoordinatorPressedLearnMor_112672650,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105a43e48; end: 105a43feb; -[SCSpectaclesAppStatusListenerAnnouncer statusCoordinatorNeedsToPair:deviceProductType:] */

void FUN_105a43e48(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_statusCoordinatorNeedsToPair_dev_112672640;
  while (PTR_s_statusCoordinatorNeedsToPair_dev_112672640 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_statusCoordinatorNeedsToPair_dev_112672640;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c253070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_statusCoordinatorNeedsToPair_dev_112672640,
             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 105a43fec; end: 105a43ffb;  */

void FUN_105a43fec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c253070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_statusCoordinatorNeedsToPair_dev_112672640,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105a43ffc; end: 105a441cb; -[SCSpectaclesAppStatusListenerAnnouncer statusCoordinator:updateMemoriesSideButtonTooltipVisibility:tooltipText:] */

void FUN_105a43ffc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_statusCoordinator_updateMemories_112672628;
  while (PTR_s_statusCoordinator_updateMemories_112672628 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        _objc_retain(param_5);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_5);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_statusCoordinator_updateMemories_112672628;
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c253010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_statusCoordinator_updateMemories_112672628,
             *(undefined8 *)(param_3 + 0x28),*(undefined1 *)(param_3 + 0x38),
             *(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 105a441cc; end: 105a441df;  */

void FUN_105a441cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c253010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_statusCoordinator_updateMemories_112672628,
             *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105a441e0; end: 105a44367;  */

void FUN_105a441e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0b8300(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf48720();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x000105a4429c(param_1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105a44368; end: 105a4436f;  */

void FUN_105a44368(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc3550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_UUID_11254e6f0);
  return;
}



/* Entry: 105a44370; end: 105a444bf;  */

void FUN_105a44370(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0b8300();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf48720();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105a45654;
  puStack_50 = &UNK_110870ac0;
  uStack_48 = uVar3;
  _objc_retain(param_1);
  _objc_retain(uVar3);
  ppuVar4 = &puStack_68;
  _objc_retainBlock(ppuVar4);
  uVar1 = param_1;
  func_0x000105a4429c(param_1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010bfaea20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(ppuVar4);
  _objc_release(uStack_48);
  _objc_release(uVar3);
  uVar1 = uVar2;
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a444c0; end: 105a444c7;  */

void FUN_105a444c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc3550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_UUID_11254e6f0);
  return;
}



/* Entry: 105a444c8; end: 105a4464f;  */

void FUN_105a444c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0b8300();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf48720();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105a445dc;
  puStack_40 = &UNK_110870ac0;
  uStack_38 = uVar3;
  _objc_retain(uVar3);
  ppuVar4 = &puStack_58;
  _objc_retainBlock(ppuVar4);
  uVar1 = param_1;
  func_0x000105a4429c(param_1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010bfaea20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(ppuVar4);
  _objc_release(uStack_38);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105a44650; end: 105a446a3;  */

ulong FUN_105a44650(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c06ee80(param_1,param_2,2);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c06ee80(param_1,param_2,1);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105a446a4; end: 105a44fe3;  */

void FUN_105a446a4(ulong param_1,long param_2,uint param_3,undefined8 param_4,ulong param_5,
                  ulong param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  puVar4 = PTR_PTR_1126af180;
  if (param_1 == 0) {
    if (param_3 != 0) {
      FUN_105a44fe4();
    }
LAB_105a449d8:
    func_0x00010c1acfe0(param_4);
  }
  else {
    puVar3 = puVar2;
    if (((param_6 < 0x14) && ((1L << (param_6 & 0x3f) & 0x8c000U) != 0)) && (param_3 != 0)) {
      func_0x0001090250c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef320();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126af178;
      func_0x00010c22b900();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x000109025570();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x000109025588();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_a8 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c235c40(puVar3);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar4);
      puVar3 = puVar4;
    }
    puVar4 = PTR_PTR_1126af180;
    if ((param_6 < 0x14) && ((1L << (param_6 & 0x3f) & 0x8c000U) != 0)) goto LAB_105a449d8;
    if ((param_3 != 0) && (param_6 == 0xb)) {
      func_0x0001090250c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef320();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126af178;
      func_0x00010c22b900();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x0001090255a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x0001090255b8();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_a8 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c235c40(puVar3);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar4);
LAB_105a449c8:
      func_0x00010c1b3460(param_4);
      goto LAB_105a449d8;
    }
    if (param_6 == 0xb) goto LAB_105a449c8;
    if (param_6 == 6) {
      func_0x00010c23ab20(param_7);
      goto LAB_105a449d8;
    }
    uVar8 = param_1;
    func_0x00010bf48d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf48920();
    _objc_release(uVar8);
    if ((int)uVar9 != 0) {
      if (param_3 != 0) {
        uVar16 = param_8;
        func_0x00010c269d40(param_8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9e60();
        _objc_release(uVar16);
      }
      puVar4 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_108 = 0xc2000000;
      pcStack_100 = FUN_105a45124;
      puStack_f8 = &UNK_110848bd8;
      _objc_retain(param_4);
      uStack_f0 = param_4;
      _objc_retain(puVar2);
      puStack_e8 = puVar2;
      _objc_retain(param_1);
      _objc_retain(&puStack_110);
      uVar8 = param_1;
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf17500();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar8);
      if (uVar9 == 0) {
        _objc_release(&puStack_110);
        _objc_release(param_1);
LAB_105a44e5c:
        lVar15 = param_2;
        func_0x00010bf529e0();
        if (lVar15 == 0) {
          func_0x00010c1acfe0(param_4);
          func_0x00010bf43d60(puVar2);
        }
        else {
          puStack_138 = puVar4;
          uStack_130 = 0xc2000000;
          pcStack_128 = FUN_105a45180;
          puStack_120 = &UNK_110870ac0;
          _objc_retain(param_2);
          uVar8 = param_5;
          lStack_118 = param_2;
          func_0x00010bfaea20();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010bf529e0();
          _objc_release(uVar8);
          uVar8 = param_1;
          FUN_105a45200();
          if (uVar8 < uVar9) {
            func_0x00010c1b1840(param_4);
            if (param_3 == 0) {
              func_0x00010c1acfe0(param_4);
              goto LAB_105a44fbc;
            }
            lVar15 = param_2;
            func_0x00010bf529e0();
            puStack_168 = puVar4;
            uStack_160 = 0xc2000000;
            pcStack_158 = FUN_105a45574;
            puStack_150 = &UNK_110848bd8;
            _objc_retain(param_4);
            uStack_148 = param_4;
            _objc_retain(puVar2);
            puStack_140 = puVar2;
            FUN_105a45324(lVar15,&puStack_168);
            _objc_release(puStack_140);
            _objc_release(uStack_148);
          }
          else {
            func_0x00010c1acfe0(param_4);
LAB_105a44fbc:
            func_0x00010bf43d60(puVar2);
          }
          _objc_release(lStack_118);
        }
      }
      else {
        uVar8 = param_1;
        func_0x00010c0692a0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010bf17500();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c067fc0();
        if ((long)uVar10 < 10) {
          bVar1 = false;
        }
        else {
          uVar10 = param_1;
          func_0x00010c0692a0();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar10;
          func_0x00010bf175c0();
          bVar1 = uVar11 != 2;
          _objc_release(uVar10);
        }
        _objc_release(uVar9);
        _objc_release(uVar8);
        puVar3 = PTR_PTR_1126af180;
        if ((bVar1) || (param_3 == 0)) {
          _objc_release(&puStack_110);
          _objc_release(param_1);
          if (bVar1) goto LAB_105a44e5c;
        }
        else {
          func_0x0001090250c0();
          _objc_retainAutoreleasedReturnValue();
          puStack_a8 = puVar4;
          uStack_a0 = 0xc2000000;
          uStack_98 = 0x105a456d8;
          puStack_90 = &UNK_1108498b0;
          _objc_retain(&puStack_110);
          ppuStack_88 = &puStack_110;
          func_0x00010beef320();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
          puVar6 = PTR_PTR_1126af180;
          func_0x000109025078();
          _objc_retainAutoreleasedReturnValue();
          puStack_e0 = puVar4;
          uStack_d8 = 0xc2000000;
          uStack_d0 = 0x105a456f0;
          puStack_c8 = &UNK_1108498b0;
          ppuStack_c0 = &puStack_110;
          func_0x00010beef320();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
          puVar7 = PTR_PTR_1126af178;
          func_0x00010c22b900();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          puVar12 = puVar7;
          func_0x0001090255d0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          uVar8 = param_1;
          func_0x00010c0692a0();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010bf17500();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb5c60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar4;
          func_0x0001090255e8();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_b8 = puVar3;
          puStack_b0 = puVar6;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c235c40(puVar7);
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar4);
          _objc_release(puVar5);
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(puVar12);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(ppuStack_c0);
          _objc_release(puVar3);
          _objc_release(ppuStack_88);
          _objc_release(param_1);
        }
        if ((param_3 & 1) == 0) {
          func_0x00010c1acfe0(param_4);
          func_0x00010bf43d60(puVar2);
        }
      }
      _objc_release(puStack_e8);
      _objc_release(uStack_f0);
      goto LAB_105a449f0;
    }
    if (param_3 != 0) {
      FUN_105a44fe4();
    }
    func_0x00010c1acfe0(param_4);
  }
  func_0x00010bf43d60(puVar2);
LAB_105a449f0:
  puVar4 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000109025540();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x000109025558();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af180;
  puVar6 = puVar5;
  func_0x0001090250c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c1acfe0(*(undefined8 *)(puVar2 + 0x20));
  uVar16 = *(undefined8 *)(puVar2 + 0x28);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105a44fe4; end: 105a45123;  */

void FUN_105a44fe4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000109025540();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000109025558();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af180;
  puVar4 = puVar3;
  func_0x0001090250c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c1acfe0(*(undefined8 *)(puVar1 + 0x20));
  uVar8 = *(undefined8 *)(puVar1 + 0x28);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105a45124; end: 105a4517f;  */

void FUN_105a45124(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c1acfe0(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a45180; end: 105a451ff;  */

undefined8 FUN_105a45180(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c27dd80();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010bdc3540(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar2);
    _objc_release(lVar1);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 105a45200; end: 105a45323;  */

undefined8 FUN_105a45200(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar7;
  ulong unaff_x22;
  ulong uVar6;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c075fc0();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    uVar7 = 0x14;
    goto LAB_105a45300;
  }
  uVar2 = param_1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf175c0();
  if (uVar4 == 2) {
LAB_105a452ac:
    uVar5 = param_1;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c06e420();
    iVar1 = (int)uVar6;
    _objc_release(uVar5);
    if (uVar4 != 2) goto LAB_105a452d8;
  }
  else {
    uVar3 = param_1;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = uVar3;
    func_0x00010bf17500();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = unaff_x22;
    func_0x00010c067fc0();
    if ((long)uVar5 < 0x29) goto LAB_105a452ac;
    iVar1 = 1;
LAB_105a452d8:
    _objc_release(unaff_x22);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  uVar7 = 0x7fffffffffffffff;
  if (iVar1 == 0) {
    uVar7 = 0x28;
  }
LAB_105a45300:
  _objc_release(param_1);
  return uVar7;
}



/* Entry: 105a45324; end: 105a45573;  */

void FUN_105a45324(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000109025600();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = puVar2;
  func_0x000109025618();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126af180;
  puVar5 = puVar4;
  func_0x000109025630();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126af180;
  puVar7 = puVar6;
  func_0x000109025078();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar1);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c1acfe0(*(undefined8 *)(param_2 + 0x20));
  uVar11 = *(undefined8 *)(param_2 + 0x28);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105a45574; end: 105a455cf;  */

void FUN_105a45574(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c1acfe0(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a455d0; end: 105a456c7;  */

undefined8 FUN_105a455d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  func_0x00010c26f500(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c26f500(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = param_3;
  func_0x00010bf433a0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105a456c8; end: 105a45747;  */

void FUN_105a456c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 105a45748; end: 105a4578b; -[SCSpectaclesAppStatusCoordinator mockDeviceGotUnpaired] */

void FUN_105a45748(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf6ff20(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2487c0(param_1,param_2,uVar1,5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a4578c; end: 105a457cf; -[SCSpectaclesAppStatusCoordinator mockSpectaclesErrorStateLowBattery] */

void FUN_105a4578c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf6ff20(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c248800(param_1,param_2,uVar1,9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a457d0; end: 105a45813; -[SCSpectaclesAppStatusCoordinator mockSpectaclesErrorStateLowTemp] */

void FUN_105a457d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf6ff20(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c248800(param_1,param_2,uVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a45814; end: 105a45857; -[SCSpectaclesAppStatusCoordinator mockSpectaclesErrorStateHighTemp] */

void FUN_105a45814(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf6ff20(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c248800(param_1,param_2,uVar1,8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a45858; end: 105a4589b; -[SCSpectaclesAppStatusCoordinator mockSpectaclesErrorStateStorageFull] */

void FUN_105a45858(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf6ff20(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c248800(param_1,param_2,uVar1,10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a4589c; end: 105a458df; -[SCSpectaclesAppStatusCoordinator mockSpectaclesErrorStateFirmwareCrash] */

void FUN_105a4589c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf6ff20(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c248800(param_1,param_2,uVar1,0xc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a458e0; end: 105a45a9f; -[SCAlertViewCoordinator showLowBatteryAlertForDevice:] */

void FUN_105a458e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000106e937b0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = uVar1;
  func_0x0001090255d0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_3;
  func_0x00010c0692a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010bf17500(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar7 = &PTR____CFConstantStringClassReference_110e18418;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e18418,0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c1375c0(uVar1);
  func_0x00010c0df780(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb7b80(param_1);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(ppuVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a45aa0; end: 105a45b17; -[SCAlertViewCoordinator showLowTemperatureAlert] */

void FUN_105a45aa0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e18438;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e18438,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e18458;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e18458,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb7b80(param_1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 105a45b18; end: 105a45b8f; -[SCAlertViewCoordinator showHighTemperatureAlert] */

void FUN_105a45b18(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e18438;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e18438,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e18478;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e18478,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb7b80(param_1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 105a45b90; end: 105a45c07; -[SCAlertViewCoordinator showLowStorageAlert] */

void FUN_105a45b90(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e18498;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e18498,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e184b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e184b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb7b80(param_1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 105a45c08; end: 105a45d1f; -[SCAlertViewCoordinator _showAlertWithTitle:description:] */

undefined *
FUN_105a45c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126af180;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001090250c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c235c40(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar3);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_90;
  pcStack_58 = FUN_105a45d20;
  puStack_80 = puVar2;
  uStack_78 = param_1;
  uStack_70 = param_4;
  uStack_68 = param_3;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(uVar1);
  puStack_88 = PTR_PTR_1126eb650;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined **)0x0) {
    uVar5 = uVar1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined8 *)((long)ppuVar4 + 0x10) = uVar5;
    _objc_release(uVar6);
    uVar5 = uVar1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)ppuVar4 + 0x18);
    *(undefined8 *)((long)ppuVar4 + 0x18) = uVar5;
    _objc_release(uVar6);
    uVar5 = uVar1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)ppuVar4 + 0x20);
    *(undefined8 *)((long)ppuVar4 + 0x20) = uVar5;
    _objc_release(uVar6);
    uVar5 = uVar1;
    func_0x00010bf66f20();
    *(long *)((long)ppuVar4 + 0x28) = (long)(int)uVar5;
    uVar5 = uVar1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)ppuVar4 + 0x30);
    *(undefined8 *)((long)ppuVar4 + 0x30) = uVar5;
    _objc_release(uVar6);
    uVar5 = uVar1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)ppuVar4 + 0x38);
    *(undefined8 *)((long)ppuVar4 + 0x38) = uVar5;
    _objc_release(uVar6);
    uVar5 = uVar1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)ppuVar4 + 0x40);
    *(undefined8 *)((long)ppuVar4 + 0x40) = uVar5;
    _objc_release(uVar6);
    if (*(long *)((long)ppuVar4 + 0x40) == 0) {
      uVar6 = *(undefined8 *)((long)ppuVar4 + 0x20);
      _objc_retain(uVar6);
      uVar5 = *(undefined8 *)((long)ppuVar4 + 0x40);
      *(undefined8 *)((long)ppuVar4 + 0x40) = uVar6;
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)((long)ppuVar4 + 0x20);
      *(undefined8 *)((long)ppuVar4 + 0x20) = 0;
      _objc_release(uVar5);
    }
    uVar5 = uVar1;
    func_0x00010bf66ce0();
    *(char *)((long)ppuVar4 + 8) = (char)uVar5;
    uVar5 = uVar1;
    func_0x00010bf66f40();
    *(undefined8 *)((long)ppuVar4 + 0x48) = uVar5;
    uVar5 = uVar1;
    func_0x00010bf66f40();
    *(undefined8 *)((long)ppuVar4 + 0x50) = uVar5;
    uVar5 = uVar1;
    func_0x00010bf66f40();
    *(undefined8 *)((long)ppuVar4 + 0x58) = uVar5;
  }
  _objc_release(uVar1);
  return (undefined *)ppuVar4;
}



/* Entry: 105a45d20; end: 105a45f0b; -[SCLagunaFirmwareUpdateUserInfo initWithCoder:] */

undefined1 * FUN_105a45d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126eb650;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f20();
    *(long *)((long)puVar1 + 0x28) = (long)(int)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    if (*(long *)((long)puVar1 + 0x40) == 0) {
      uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
      _objc_retain(uVar3);
      uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
      *(undefined8 *)((long)puVar1 + 0x40) = uVar3;
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
      *(undefined8 *)((long)puVar1 + 0x20) = 0;
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a45f0c; end: 105a460eb; -[SCLagunaFirmwareUpdateUserInfo encodeWithCoder:] */

void FUN_105a45f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf70720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e0fa78);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfd38e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e184d8);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfb0d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e184f8);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf700a0(param_1);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e18518);
  uVar1 = param_1;
  func_0x00010c15ffa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e18538);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c1603a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e18558);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c269f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e18578);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c286a60(param_1);
  func_0x00010bf92da0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e18598);
  uVar1 = param_1;
  func_0x00010bf88bc0(param_1);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e185b8);
  uVar1 = param_1;
  func_0x00010c27a2a0(param_1);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e185d8);
  func_0x00010c285540(param_1);
  func_0x00010bf92fc0(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110e185f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a460ec; end: 105a460f3; -[SCLagunaFirmwareUpdateUserInfo deviceId] */

undefined8 FUN_105a460ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a460f4; end: 105a460fb; -[SCLagunaFirmwareUpdateUserInfo setDeviceId:] */

void FUN_105a460f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105a460fc; end: 105a46103; -[SCLagunaFirmwareUpdateUserInfo hardwareVersion] */

undefined8 FUN_105a460fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a46104; end: 105a46133; -[SCLagunaFirmwareUpdateUserInfo setHardwareVersion:] */

void FUN_105a46104(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a46134; end: 105a4613b; -[SCLagunaFirmwareUpdateUserInfo firmwareVersion] */

undefined8 FUN_105a46134(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105a4613c; end: 105a4616b; -[SCLagunaFirmwareUpdateUserInfo setFirmwareVersion:] */

void FUN_105a4613c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a4616c; end: 105a46173; -[SCLagunaFirmwareUpdateUserInfo deviceColor] */

undefined8 FUN_105a4616c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105a46174; end: 105a4617b; -[SCLagunaFirmwareUpdateUserInfo setDeviceColor:] */

void FUN_105a46174(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 105a4617c; end: 105a46183; -[SCLagunaFirmwareUpdateUserInfo sessionId] */

undefined8 FUN_105a4617c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105a46184; end: 105a4618b; -[SCLagunaFirmwareUpdateUserInfo setSessionId:] */

void FUN_105a46184(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105a4618c; end: 105a46193; -[SCLagunaFirmwareUpdateUserInfo sessionStartTime] */

undefined8 FUN_105a4618c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105a46194; end: 105a461c3; -[SCLagunaFirmwareUpdateUserInfo setSessionStartTime:] */

void FUN_105a46194(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a461c4; end: 105a461cb; -[SCLagunaFirmwareUpdateUserInfo targetFirmwareVersion] */

undefined8 FUN_105a461c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105a461cc; end: 105a461fb; -[SCLagunaFirmwareUpdateUserInfo setTargetFirmwareVersion:] */

void FUN_105a461cc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a461fc; end: 105a46203; -[SCLagunaFirmwareUpdateUserInfo updateIsActive] */

undefined1 FUN_105a461fc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105a46204; end: 105a4620b; -[SCLagunaFirmwareUpdateUserInfo setUpdateIsActive:] */

void FUN_105a46204(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105a4620c; end: 105a46213; -[SCLagunaFirmwareUpdateUserInfo downloadDurationInMs] */

undefined8 FUN_105a4620c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105a46214; end: 105a4621b; -[SCLagunaFirmwareUpdateUserInfo setDownloadDurationInMs:] */

void FUN_105a46214(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 105a4621c; end: 105a46223; -[SCLagunaFirmwareUpdateUserInfo transferDurationInMs] */

undefined8 FUN_105a4621c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105a46224; end: 105a4622b; -[SCLagunaFirmwareUpdateUserInfo setTransferDurationInMs:] */

void FUN_105a46224(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 105a4622c; end: 105a46233; -[SCLagunaFirmwareUpdateUserInfo updateDurationInMs] */

undefined8 FUN_105a4622c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105a46234; end: 105a4623b; -[SCLagunaFirmwareUpdateUserInfo setUpdateDurationInMs:] */

void FUN_105a46234(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 105a4623c; end: 105a4629b; -[SCLagunaFirmwareUpdateUserInfo .cxx_destruct] */

void FUN_105a4623c(long param_1)

{
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



/* Entry: 105a4629c; end: 105a46343; -[SCSpectaclesDevice hasEnoughBatteryForFirmwareUpdate] */

bool FUN_105a4629c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  lVar1 = param_1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf175c0();
  if (lVar2 == 2) {
    bVar5 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0692a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf17500();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c067fc0();
    func_0x00010c1375c0(param_1);
    bVar5 = param_1 <= lVar4;
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return bVar5;
}



/* Entry: 105a46344; end: 105a463bf; -[SCSpectaclesDevice tooColdForFirmwareUpdate] */

bool FUN_105a46344(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  lVar1 = param_1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52980();
  if (lVar2 == 999) {
    bVar3 = false;
  }
  else {
    func_0x00010c0692a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf52980();
    bVar3 = lVar2 < 5;
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  return bVar3;
}



/* Entry: 105a463c0; end: 105a4643b; -[SCSpectaclesDevice tooHotForFirmwareUpdate] */

bool FUN_105a463c0(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  lVar1 = param_1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52980();
  if (lVar2 == 999) {
    bVar3 = false;
  }
  else {
    func_0x00010c0692a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf52980();
    bVar3 = 0x3c < lVar2;
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  return bVar3;
}



/* Entry: 105a4643c; end: 105a464cf; -[SCSpectaclesDevice requiredBatteryLevelForFirmwareUpdate] */

undefined8 FUN_105a4643c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  uVar1 = param_1;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c078aa0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c06e420();
    _objc_release(param_1);
    puVar3 = (undefined8 *)&UNK_10ddc9f98;
    if ((int)uVar1 == 0) {
      puVar3 = (undefined8 *)&UNK_10ddc9f90;
    }
  }
  else {
    puVar3 = (undefined8 *)&UNK_10ddc9fa0;
  }
  return *puVar3;
}



/* Entry: 105a464d0; end: 105a464d7; -[SCSpectaclesFirmwareDownloader reset] */

void FUN_105a464d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 105a464d8; end: 105a465ab; -[SCSpectaclesFirmwareDownloader startCheckingUpdateWithTag:digest:] */

void FUN_105a464d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf38680(*(undefined8 *)(param_1 + 0x18));
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf891d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + 0x18),PTR_s_downloadUpdate_1125bfe18);
  return;
}



/* Entry: 105a465ac; end: 105a465b3; -[SCSpectaclesFirmwareDownloader startDownloadingUpdate] */

void FUN_105a465ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf891d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_downloadUpdate_1125bfe18);
  return;
}



/* Entry: 105a465b4; end: 105a46793; -[SCSpectaclesFirmwareDownloader versionResourceDownloader:didCheckUpdateAvailable:metadata:] */

void FUN_105a465b4(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_5);
  if ((param_4 & 1) == 0) {
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfb0920();
    goto LAB_105a46770;
  }
  lVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110daeeb8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c0720c0();
  if ((int)lVar1 == 0) {
    lVar1 = lVar2;
    func_0x00010c0720c0(lVar2,param_2,&PTR____CFConstantStringClassReference_110e18698);
    if ((int)lVar1 != 0) {
      lVar1 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar1);
      goto LAB_105a4666c;
    }
    lVar1 = param_5;
    func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110e18618);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c0c68;
    _objc_alloc();
    lVar4 = param_5;
    func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110dd8fd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar3,param_2,lVar4);
    _objc_release(lVar4);
    lVar4 = lVar1;
    func_0x00010c08fa60();
    if ((lVar4 == 0) || (puVar3 == (undefined *)0x0)) {
      lVar4 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar4);
      func_0x00010bfb0920();
    }
    else {
      lVar4 = param_5;
      func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110e186b8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010be263e0(param_1,param_2,param_5);
      if ((uVar5 & 1) == 0) {
        lVar6 = param_1 + 0x10;
        _objc_loadWeakRetained(lVar6);
        func_0x00010bfb0940();
        _objc_release(lVar6);
      }
    }
    _objc_release(lVar4);
    _objc_release(puVar3);
  }
  else {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
LAB_105a4666c:
    func_0x00010bfb0920();
  }
  _objc_release(lVar1);
LAB_105a46770:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105a46794; end: 105a468c7; -[SCSpectaclesFirmwareDownloader _handleBadRequestForMetadata:] */

uint FUN_105a46794(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dd2eb8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e18638);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e18658);
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar2 != 0) {
      func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110dcf238);
    }
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfb0920();
    _objc_release(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dd2eb8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_3);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105a468c8; end: 105a468cb; -[SCSpectaclesFirmwareDownloader versionResourceDownloader:didDownloadFileBlob:] */

void FUN_105a468c8(void)

{
  return;
}



/* Entry: 105a468cc; end: 105a46937; -[SCSpectaclesFirmwareDownloader versionResourceDownloader:didVerifyFileContent:didSaveToDisk:] */

void FUN_105a468cc(long param_1)

{
  undefined8 in_x4;
  undefined8 uVar1;
  
  _objc_retain(in_x4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = in_x4;
  _objc_retain(in_x4);
  _objc_release(uVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb0900();
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a46938; end: 105a4696f; -[SCSpectaclesFirmwareDownloader didFailCheckingUpdateWithDownloader:] */

void FUN_105a46938(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb0920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a46970; end: 105a469a3; -[SCSpectaclesFirmwareDownloader didFailDownloadingFileBlobWithDownloader:] */

void FUN_105a46970(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb0960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a469a4; end: 105a469d7; -[SCSpectaclesFirmwareDownloader didFailVerifyingFileContentWithDownloader:] */

void FUN_105a469a4(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb0960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a469d8; end: 105a469df; -[SCSpectaclesFirmwareDownloader filePath] */

undefined8 FUN_105a469d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105a469e0; end: 105a469f7; -[SCSpectaclesFirmwareDownloader delegate] */

void FUN_105a469e0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a469f8; end: 105a46a03; -[SCSpectaclesFirmwareDownloader setDelegate:] */

void FUN_105a469f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 105a46a04; end: 105a46a0b; -[SCSpectaclesFirmwareDownloader resourceDownloader] */

undefined8 FUN_105a46a04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a46a0c; end: 105a46a3b; -[SCSpectaclesFirmwareDownloader setResourceDownloader:] */

void FUN_105a46a0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a46a3c; end: 105a46a73; -[SCSpectaclesFirmwareDownloader .cxx_destruct] */

void FUN_105a46a3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a46a74; end: 105a46b1f; +[SCSpectaclesFirmwareManager requiredBatteryLevelForFirmwareUpdate:] */

undefined8 FUN_105a46a74(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c078aa0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06e420();
    _objc_release(uVar1);
    puVar3 = (undefined8 *)&UNK_10ddc9f98;
    if ((int)uVar2 == 0) {
      puVar3 = (undefined8 *)&UNK_10ddc9f90;
    }
  }
  else {
    puVar3 = (undefined8 *)&UNK_10ddc9fa0;
  }
  uVar4 = *puVar3;
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 105a46b20; end: 105a46b67; -[SCSpectaclesFirmwareManager stateForDevice:] */

long FUN_105a46b20(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if ((param_3 == *(long *)(param_1 + 0x78)) &&
     (lVar1 = param_1, func_0x00010becaaa0(), (int)lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bee09f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__updateStateForManagerState__112595c20,*(undefined8 *)(param_1 + 0x80))
    ;
    return param_1;
  }
  return 0;
}



/* Entry: 105a46b68; end: 105a46bab; -[SCSpectaclesFirmwareManager updateProgressForDevice:] */

undefined8 FUN_105a46b68(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 != *(long *)(param_1 + 0x78)) {
    return 0;
  }
  lVar1 = param_1;
  func_0x00010becaaa0();
  if ((int)lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x88);
  }
  return uVar2;
}



/* Entry: 105a46bac; end: 105a46bff; -[SCSpectaclesFirmwareManager updateFirmwareVersionForDevice:] */

void FUN_105a46bac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000106e937b0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b340(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a46c00; end: 105a46cf7; -[SCSpectaclesFirmwareManager checkUpdateForDevice:] */

uint FUN_105a46c00(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010c0a69a0(*(undefined8 *)(param_1 + 0x20));
  uVar1 = param_1;
  func_0x00010becaaa0();
  if ((uVar1 & 1) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105a46cf8; end: 105a46dbb;  */

void FUN_105a46cf8(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((uVar2 != 0) && (uVar3 = uVar2, func_0x00010becaaa0(), (uVar3 & 1) == 0)) {
    iVar1 = (int)*(undefined8 *)(uVar2 + 0x40);
    func_0x00010bfd8380();
    if ((iVar1 == 0) ||
       (uVar3 = uVar2, func_0x00010c283a00(uVar2,param_2,*(undefined8 *)(param_1 + 0x20)),
       (int)uVar3 == 0)) {
      if ((*(byte *)(uVar2 + 0xd8) & 1) == 0) {
        func_0x00010becf280(uVar2,param_2,0);
      }
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar5);
      uVar4 = *(undefined8 *)(uVar2 + 0x78);
      *(undefined8 *)(uVar2 + 0x78) = uVar5;
      _objc_release(uVar4);
      func_0x00010becf280(uVar2,param_2,1);
    }
    else {
      uVar3 = uVar2;
      func_0x00010bdc5140(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c249240();
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105a46dbc; end: 105a46eab; -[SCSpectaclesFirmwareManager _startUpdatingDevice:] */

long FUN_105a46dbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c283a00();
  if ((int)lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 105a46eac; end: 105a46f0f;  */

void FUN_105a46eac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) &&
     (lVar2 = lVar1, func_0x00010c283a00(lVar1,param_2,*(undefined8 *)(param_1 + 0x20)),
     (int)lVar2 != 0)) {
    if ((*(byte *)(lVar1 + 0xd8) & 1) == 0) {
      func_0x00010becf280(lVar1,param_2,0);
    }
    func_0x00010bec1ee0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a46f10; end: 105a46f17; -[SCSpectaclesFirmwareManager addListener:] */

void FUN_105a46f10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x100),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105a46f18; end: 105a46f1f; -[SCSpectaclesFirmwareManager removeListener:] */

void FUN_105a46f18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x100),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105a46f20; end: 105a46fc7; -[SCSpectaclesFirmwareManager prefetchNewFirmwareVersion] */

void FUN_105a46f20(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105a46fc8; end: 105a46ffb;  */

void FUN_105a46fc8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be774e0();
  func_0x00010bec0f00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a46ffc; end: 105a47037; -[SCSpectaclesFirmwareManager _activeAnnouncer] */

void FUN_105a46ffc(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x100);
    _objc_retain(uVar1);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a47038; end: 105a4721b; -[SCSpectaclesFirmwareManager _startUpdatingDevice:updateIsActive:] */

void FUN_105a47038(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0xd8) = param_4;
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined **)(param_1 + 0xe0) = puVar2;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  uVar1 = param_3;
  func_0x00010bfb0d20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  _objc_release(uVar4);
  uVar5 = *(ulong *)(param_1 + 0xa0);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c08b340(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c072160();
  _objc_release(uVar1);
  if ((uVar5 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = 0;
    _objc_release(uVar1);
  }
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    lVar6 = *(long *)(param_1 + 0x78);
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x00010bef07c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 == lVar3) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_105a4721c;
      puStack_50 = &UNK_110842e18;
      lStack_48 = param_1;
      func_0x000100162d98("APPSTORE",&puStack_68);
    }
  }
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c24eca0();
  _objc_release(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x00010bdca660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a6b20(uVar1);
  _objc_release(lVar3);
  func_0x00010becf280(param_1);
  func_0x00010bec1220(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 105a4721c; end: 105a47227;  */

void FUN_105a4721c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb76d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
             PTR_s_freezeActiveDeviceForFirmwareUpd_1125cb758);
  return;
}



/* Entry: 105a47228; end: 105a473df; -[SCSpectaclesFirmwareManager _startPassiveUpdates] */

void FUN_105a47228(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong unaff_x20;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  ulong uStack_150;
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
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + 0x58);
  func_0x00010bf48f60();
  if (uVar1 != 2) {
    uVar1 = *(ulong *)(param_1 + 0x50);
    func_0x00010bf642a0();
    if ((uVar1 & 1) != 0) goto LAB_105a473a4;
  }
  func_0x000106fd2cec();
  if ((int)uVar1 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x40);
    func_0x00010bfd8380();
    if (((int)uVar1 != 0) && (*(long *)(param_1 + 0x78) == 0)) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uVar1 = param_1 + 0x10;
      _objc_loadWeakRetained();
      unaff_x20 = uVar1;
      func_0x00010bf71280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar1 = unaff_x20;
      func_0x00010bf52a60();
      if (uVar1 != 0) {
        lVar5 = *plStack_120;
        do {
          uVar6 = 0;
          do {
            if (*plStack_120 != lVar5) {
              _objc_enumerationMutation(unaff_x20);
            }
            uVar4 = *(undefined8 *)(lStack_128 + uVar6 * 8);
            uVar2 = *(ulong *)(param_1 + 0x40);
            func_0x00010bf705c0();
            if (((uVar2 & 1) == 0) && (uVar3 = uVar4, func_0x00010bfd6b40(), (int)uVar3 != 0)) {
              uVar2 = *(ulong *)(param_1 + 0xf8);
              func_0x00010bf4b900();
              if ((uVar2 & 1) == 0) {
                func_0x00010bf48d40();
                _objc_retainAutoreleasedReturnValue();
                uVar3 = uVar4;
                func_0x00010bf48920();
                _objc_release(uVar4);
                if ((int)uVar3 != 0) {
                  func_0x00010bec1ee0(param_1);
                  goto LAB_105a4739c;
                }
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar1 != uVar6);
          uVar1 = unaff_x20;
          func_0x00010bf52a60();
        } while (uVar1 != 0);
      }
LAB_105a4739c:
      uVar1 = unaff_x20;
      _objc_release();
    }
  }
LAB_105a473a4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_105a473e0;
    uStack_150 = unaff_x20;
    lStack_148 = param_1;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_initWeak(auStack_158,uVar1);
    uVar4 = *(undefined8 *)(uVar1 + 8);
    _objc_copyWeak(auStack_160,auStack_158);
    func_0x00010c0f7fc0(uVar4);
    _objc_destroyWeak(auStack_160);
    _objc_destroyWeak(auStack_158);
    return;
  }
  return;
}



/* Entry: 105a473e0; end: 105a47487; -[SCSpectaclesFirmwareManager _prefetchNewFirmwareVersion] */

void FUN_105a473e0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105a47488; end: 105a47513;  */

void FUN_105a47488(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x40);
    func_0x00010bfd8380();
    if ((uVar1 & 1) == 0) {
      lVar2 = param_1 + 0x10;
      _objc_loadWeakRetained();
      lVar3 = lVar2;
      func_0x00010bf71280();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (lVar4 != 0) {
        func_0x00010bfa7e00(*(undefined8 *)(param_1 + 0x40));
        func_0x00010c268300(param_1,param_2,*(undefined8 *)(param_1 + 0x40));
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


