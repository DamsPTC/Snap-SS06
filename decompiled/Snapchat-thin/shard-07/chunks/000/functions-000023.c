/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105068d64; end: 105068ff7; -[SCFriendActionSheetWorkflow initWithUserSession:conversationIdResolver:userBlizzardServices:actionPluginFactoryServices:actionExposer:imageDownloader:imageFetchingService:friendActionSheetScope:generativeBackgroundsServices:circumstanceEngine:bitmojiStyle:] */

undefined8 *
FUN_105068d64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126e5cf0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[8];
    puVar1[8] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[9];
    puVar1[9] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
    puVar1[0xf] = param_13;
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
  }
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



/* Entry: 105068ff8; end: 105069013; -[SCFriendActionSheetWorkflow end] */

void FUN_105068ff8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_didTriggerEventWithEventName_ann_1125bd098,
             &PTR____CFConstantStringClassReference_110eba218,0,0);
  return;
}



/* Entry: 105069014; end: 10506904b; -[SCFriendActionSheetWorkflow _applicationDidEnterBackground:] */

void FUN_105069014(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf83100(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10506904c; end: 1050691bb; -[SCFriendActionSheetWorkflow presentUnifiedProfileWithFriendUnifiedActionMenuActionHandler:snapchatter:configuration:sourcePageType:] */

void FUN_10506904c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
  _CACurrentMediaTime();
  _objc_initWeak(auStack_58,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(param_7);
  uStack_60 = param_1;
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010bf83dc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1050691bc; end: 105069253;  */

void FUN_1050691bc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107cdc4f0(*(undefined8 *)(param_1 + 0x48),uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf643e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7b8c0(lVar2);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105069254; end: 105069343; -[SCFriendActionSheetWorkflow presentCameraWithFriendUnifiedActionMenuActionHandler:snapchatter:] */

void FUN_105069254(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010bf83dc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105069344; end: 105069377;  */

void FUN_105069344(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7a720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105069378; end: 1050693a7; -[SCFriendActionSheetWorkflow dismissUnifiedActionMenuWithFriendUnifiedActionMenuActionHandler:showAnimation:] */

void FUN_105069378(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bf83dc0(*(undefined8 *)(param_1 + 0x10),param_2,param_4,0);
                    /* WARNING: Could not recover jumptable at 0x00010be46e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__lastActionMenuPresenterDidDismi_11256f520);
  return;
}



/* Entry: 1050693a8; end: 1050693d3; -[SCFriendActionSheetWorkflow presentMapWithFriendUnifiedActionMenuActionHandler:] */

void FUN_1050693a8(long param_1)

{
  param_1 = param_1 + 0x88;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb7a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050693d4; end: 10506940b; -[SCFriendActionSheetWorkflow unifiedActionMenuPresenterDidDismiss:] */

void FUN_1050693d4(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c07dfc0();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be46e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__lastActionMenuPresenterDidDismi_11256f520);
  return;
}



/* Entry: 10506940c; end: 1050694c3; -[SCFriendActionSheetWorkflow _lastActionMenuPresenterDidDismiss] */

void FUN_10506940c(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1 + 0x88;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfb7880();
  _objc_release(lVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10506948c;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_48);
  return;
}



/* Entry: 1050694c4; end: 10506955b; -[SCFriendActionSheetWorkflow _presentFriendUnifiedProfileWithSnapchatterFromActionSheet:configuration:openningData:dataSource:] */

void FUN_1050694c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_x5;
  
  _objc_retain(in_x5);
  lVar1 = in_x5;
  func_0x00010bf2bf20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  param_1 = param_1 + 0x88;
  _objc_loadWeakRetained(param_1);
  if (lVar1 == 0) {
    func_0x00010bfb7a60(param_1);
  }
  else {
    lVar1 = in_x5;
    func_0x00010bf2bf20(in_x5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb7a80(param_1,param_2,lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x5);
  return;
}



/* Entry: 10506955c; end: 10506977b; -[SCFriendActionSheetWorkflow presentFriendUnifiedActionSheetWithOpenFriendActionData:factory:] */

void FUN_10506955c(long param_1,undefined1 *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined **unaff_x25;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x80;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_68,param_1);
    lVar1 = param_3;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b01c0;
    func_0x00010c294260();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10506977c;
    puStack_88 = &UNK_1108576a8;
    param_2 = auStack_68;
    _objc_copyWeak(auStack_70,param_2);
    _objc_retain(param_3);
    lStack_80 = param_3;
    _objc_retain(param_4);
    uStack_78 = param_4;
    func_0x00010bf504e0(uVar3);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uStack_78);
    _objc_release(lStack_80);
    _objc_destroyWeak(auStack_70);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_68);
    unaff_x25 = &puStack_a0;
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x25 + 0x30));
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(param_2);
  lVar1 = param_3 + 0x30;
  _objc_loadWeakRetained(lVar1);
  puVar6 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7b880(lVar1);
  _objc_release(uVar3);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10506977c; end: 10506981b;  */

void FUN_10506977c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7b880(lVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10506981c; end: 105069d7f; -[SCFriendActionSheetWorkflow _presentFriendUnifiedActionSheetWithOpenFriendActionData:conversationId:friendProfileFactory:] */

void FUN_10506981c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar1 = PTR_PTR_1126b41d8;
    _objc_alloc();
    uVar9 = param_3;
    func_0x00010bf46560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0daca0();
    uVar2 = param_3;
    func_0x00010bf46560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c263da0();
    func_0x00010c01a700();
    _objc_release(uVar2);
    _objc_release(uVar9);
    uVar9 = param_3;
    func_0x00010c244280(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010bfb90e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    puVar3 = PTR_PTR_1126b41c8;
    _objc_alloc();
    uVar9 = uVar2;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126afdd8;
    func_0x00010bf0e140(param_3);
    func_0x00010bfc8740();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x000107cdc434();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_5;
    func_0x00010bfcdfc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_3;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_5;
    func_0x00010c2446c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010bf148a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03b2e0();
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar3;
    _objc_release(uVar10);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar9);
    lVar8 = *(long *)(param_1 + 0x30);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar8 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    }
    _objc_initWeak(auStack_80,param_1);
    puVar4 = PTR_PTR_1126afdd8;
    func_0x00010c247a20(*(undefined8 *)(param_1 + 0x58));
    func_0x00010bfc8740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    puVar3 = PTR_PTR_1126b4520;
    _objc_alloc();
    uVar9 = uVar2;
    func_0x00010c15ffa0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c027940();
    uVar11 = *(undefined8 *)(param_1 + 0x60);
    *(undefined **)(param_1 + 0x60) = puVar3;
    _objc_release(uVar11);
    _objc_release(uVar9);
    lVar8 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x60));
    _objc_release(lVar8);
    uVar13 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(uVar13);
    uVar9 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c14b780();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010bfce860();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_105069d80;
    puStack_b0 = &UNK_1108644f8;
    uStack_a8 = uVar13;
    _objc_retain(param_3);
    uStack_a0 = param_3;
    _objc_retain(param_4);
    uStack_98 = param_4;
    _objc_retain(uVar9);
    uStack_90 = uVar9;
    _objc_retain(uVar11);
    uStack_88 = uVar11;
    _objc_copyWeak(auStack_d0,auStack_80);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar9);
    _objc_retain(uVar11);
    _objc_retain(param_5);
    func_0x00010bf9d5c0(uVar12);
    _objc_release(param_5);
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_d0);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(uVar13);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_80);
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105069d80; end: 105069f33;  */

void FUN_105069d80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b4528;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c244280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037420(puVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105069f34; end: 10506a197; -[SCFriendActionSheetWorkflow _presentFriendUnifiedActionSheetWithOpenFriendActionData:friendDataSource:conversationId:friendProfileFactory:plugins:] */

void FUN_105069f34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c14dfc0(puVar1,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ddfe0(*(undefined8 *)(param_1 + 0x60),param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_6;
  func_0x00010beeea60(param_6,param_2,param_3,param_4,param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf0e140(param_3);
  uVar6 = param_6;
  func_0x00010bfb9080(param_6,param_2,param_4,uVar3,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x18),param_2,param_1);
  func_0x00010bef9980(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c1c07e0(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x38));
  puVar4 = PTR_PTR_1126b1208;
  _objc_alloc();
  puVar1 = PTR_PTR_1126afdd8;
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  uVar5 = param_3;
  func_0x00010bf0e140(param_3);
  _objc_release(param_3);
  func_0x00010bfc8740(puVar1,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02b1a0(puVar4,param_2,uVar2,uVar7,uVar3,uVar6,puVar1,param_7,0);
  _objc_release(param_7);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar4;
  _objc_release(uVar3);
  _objc_release(puVar1);
  func_0x00010bef9980(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x10),param_2,param_1);
  func_0x00010c161ba0(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x10));
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar6);
  _objc_retain(uVar3);
  param_1 = param_1 + 0x80;
  _objc_loadWeakRetained(param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10506a198;
  puStack_78 = &UNK_110841f80;
  uStack_70 = uVar3;
  uStack_68 = uVar6;
  func_0x00010c10d0e0(uVar6,param_2,param_1,&puStack_90);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10506a198; end: 10506a1d3;  */

void FUN_10506a198(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c10f940(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e1580(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10506a1d4; end: 10506a1ff; -[SCFriendActionSheetWorkflow _presentCameraWithSnapchatterFromFriendActionSheet:] */

void FUN_10506a1d4(long param_1)

{
  param_1 = param_1 + 0x88;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb7a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10506a200; end: 10506a217; -[SCFriendActionSheetWorkflow presentingViewController] */

void FUN_10506a200(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10506a218; end: 10506a223; -[SCFriendActionSheetWorkflow setPresentingViewController:] */

void FUN_10506a218(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 10506a224; end: 10506a23b; -[SCFriendActionSheetWorkflow delegate] */

void FUN_10506a224(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10506a23c; end: 10506a247; -[SCFriendActionSheetWorkflow setDelegate:] */

void FUN_10506a23c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 10506a248; end: 10506a317; -[SCFriendActionSheetWorkflow .cxx_destruct] */

void FUN_10506a248(long param_1)

{
  _objc_destroyWeak(param_1 + 0x88);
  _objc_destroyWeak(param_1 + 0x80);
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



/* Entry: 10506a318; end: 10506a3c3; -[SCGroupActionContextImpl initWithLoggingService:sourcePageType:sessionId:] */

undefined1 *
FUN_10506a318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e5cf8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10506a3c4; end: 10506a3cf; -[SCGroupActionContextImpl setPresentingViewController:] */

void FUN_10506a3c4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10506a3d0; end: 10506a427; -[SCGroupActionContextImpl modalUIContainer] */

void FUN_10506a3d0(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10506a428; end: 10506a437; -[SCGroupActionContextImpl logActionWithName:] */

void FUN_10506a428(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a0470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logActionWithName_sourcePageType_112605b28,param_3,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10506a438; end: 10506a44f; -[SCGroupActionContextImpl presentingViewController_LEGACY_DO_NOT_USE] */

void FUN_10506a438(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10506a450; end: 10506a467; -[SCGroupActionContextImpl delegate] */

void FUN_10506a450(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10506a468; end: 10506a473; -[SCGroupActionContextImpl setDelegate:] */

void FUN_10506a468(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10506a474; end: 10506a47b; -[SCGroupActionContextImpl sourcePageType] */

undefined8 FUN_10506a474(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10506a47c; end: 10506a483; -[SCGroupActionContextImpl sessionId] */

undefined8 FUN_10506a47c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10506a484; end: 10506a4c3; -[SCGroupActionContextImpl .cxx_destruct] */

void FUN_10506a484(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10506a4c4; end: 10506a7c7; -[SCGroupActionSheetWorkflow initWithUserSession:groupServices:grapheneServices:userBlizzardServices:actionExposer:presentingViewController:notificationServices:imageDownloader:imageFetchingService:groupActionSheetScope:delegate:performer:generativeBackgroundsServices:bitmojiStyle:circumstanceEngine:] */

undefined8 *
FUN_10506a4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_18);
  puStack_68 = PTR_PTR_1126e5d00;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xd,param_8);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xe,param_14);
    _objc_retain(param_15);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_16;
    _objc_release(uVar2);
    puVar1[0x11] = param_17;
    _objc_retain(param_18);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_18;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
  }
  _objc_release(param_18);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
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



/* Entry: 10506a7c8; end: 10506a7ff; -[SCGroupActionSheetWorkflow _applicationDidEnterBackground:] */

void FUN_10506a7c8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf83100(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10506a800; end: 10506a917; -[SCGroupActionSheetWorkflow presentGroupUnifiedActionSheetWithGroupId:sourcePageType:hideRecursiveOptions:factory:] */

void FUN_10506a800(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_3);
  uStack_58 = param_4;
  uStack_50 = param_5;
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 10506a918; end: 10506a953;  */

void FUN_10506a918(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7bb40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10506a954; end: 10506ab03; -[SCGroupActionSheetWorkflow _presentGroupUnifiedActionSheetWithGroupId:sourcePageType:hideRecursiveOptions:factory:] */

void FUN_10506a954(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar1 = param_1 + 0x68;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        _objc_initWeak(auStack_68,param_1);
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bfcf2c0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x78);
        func_0x00010c11de00(uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_80,auStack_68);
        _objc_retain(param_3);
        uStack_78 = param_4;
        uStack_70 = param_5;
        func_0x00010c244de0(uVar3);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_80);
        _objc_destroyWeak(auStack_68);
      }
      _objc_release(lVar1);
    }
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 10506ab04; end: 10506abbb;  */

void FUN_10506ab04(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  if ((param_3 == 0) && (lVar1 != 0)) {
    puVar2 = PTR_PTR_1126afdd8;
    func_0x00010bfc8740(PTR_PTR_1126afdd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7bb20(param_1);
    _objc_release(puVar2);
  }
  else {
    func_0x00010be02560(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10506abbc; end: 10506acef; -[SCGroupActionSheetWorkflow presentUnifiedProfileWithGroupUnifiedActionMenuActionHandler:groupId:sourcePageType:] */

void FUN_10506abbc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_58,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(param_6);
  uStack_60 = param_1;
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_5);
  func_0x00010bf83dc0(uVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10506acf0; end: 10506ad53;  */

void FUN_10506acf0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107cdc4f0(*(undefined8 *)(param_1 + 0x38),uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7bb80();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10506ad54; end: 10506ad83; -[SCGroupActionSheetWorkflow dismissUnifiedActionMenuWithGroupUnifiedActionMenuActionHandler:showAnimation:] */

void FUN_10506ad54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bf83dc0(*(undefined8 *)(param_1 + 0x10),param_2,param_4,0);
                    /* WARNING: Could not recover jumptable at 0x00010be46e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__lastActionMenuPresenterDidDismi_11256f520);
  return;
}



/* Entry: 10506ad84; end: 10506ad9f; -[SCGroupActionSheetWorkflow end] */

void FUN_10506ad84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didTriggerEventWithEventName_ann_1125bd098,
             &PTR____CFConstantStringClassReference_110eba218,0,0);
  return;
}



/* Entry: 10506ada0; end: 10506ada3; -[SCGroupActionSheetWorkflow unifiedActionMenuPresenterDidDismiss:] */

void FUN_10506ada0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be46e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__lastActionMenuPresenterDidDismi_11256f520);
  return;
}



/* Entry: 10506ada4; end: 10506ae5b; -[SCGroupActionSheetWorkflow _lastActionMenuPresenterDidDismiss] */

void FUN_10506ada4(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1 + 0x70;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfce440();
  _objc_release(lVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10506ae24;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_48);
  return;
}



/* Entry: 10506ae5c; end: 10506aea3; -[SCGroupActionSheetWorkflow _presentGroupUnifiedProfileFromActionSheetWithGroupId:openningData:] */

void FUN_10506ae5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfce460();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10506aea4; end: 10506b4d3; -[SCGroupActionSheetWorkflow _presentGroupUnifiedActionSheetWithFactory:groupMembers:groupId:sourcePageType:hideRecursiveOptions:] */

undefined1 *
FUN_10506aea4(long param_1,undefined1 *param_2,undefined1 *param_3,undefined **param_4,
             undefined8 param_5,undefined **param_6)

{
  int iVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 *puStack_1e0;
  undefined **ppuStack_1d8;
  undefined1 *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 auStack_1c0 [8];
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_10506b4d4;
  puStack_118 = &UNK_110864588;
  ppuVar15 = param_4;
  lStack_110 = param_1;
  func_0x00010bfece40();
  if (ppuVar15 == (undefined **)0x7fffffffffffffff) {
    func_0x00010be02560(param_1);
    ppuVar15 = param_6;
  }
  else {
    puVar2 = param_3;
    func_0x00010bfcf4c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar4 = PTR_PTR_1126afdd8;
    func_0x00010bfc8740();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0720c0();
    if ((int)puVar5 != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x90);
      FUN_1050330f4();
      if (iVar1 != 0) {
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        lStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        plStack_160 = (long *)0x0;
        _objc_retain(param_4);
        ppuVar6 = param_4;
        func_0x00010bf52a60();
        if (ppuVar6 != (undefined **)0x0) {
          lVar18 = *plStack_160;
          do {
            ppuVar15 = (undefined **)0x0;
            do {
              if (*plStack_160 != lVar18) {
                _objc_enumerationMutation(param_4);
              }
              uVar16 = *(ulong *)(lStack_168 + (long)ppuVar15 * 8);
              uVar7 = uVar16;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              uVar13 = *(undefined8 *)(param_1 + 8);
              func_0x00010c2923e0(uVar13);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar7;
              func_0x00010c0720c0();
              _objc_release(uVar13);
              _objc_release(uVar7);
              if ((uVar8 & 1) == 0) {
                uVar7 = uVar16;
                func_0x00010bf85d80();
                _objc_retainAutoreleasedReturnValue();
                if (uVar7 == 0) {
                  func_0x00010c294420();
                  _objc_retainAutoreleasedReturnValue();
                }
                else {
                  _objc_retain(uVar7);
                  uVar16 = uVar7;
                }
                _objc_release(uVar7);
                uVar7 = uVar16;
                func_0x00010c08fa60();
                if (uVar7 != 0) {
                  func_0x00010befa120(puVar3);
                }
                _objc_release(uVar16);
              }
              ppuVar15 = (undefined **)((long)ppuVar15 + 1);
            } while (ppuVar6 != ppuVar15);
            ppuVar6 = param_4;
            func_0x00010bf52a60();
          } while (ppuVar6 != (undefined **)0x0);
        }
        _objc_release(param_4);
      }
    }
    func_0x00010c247a20(*(undefined8 *)(param_1 + 0x60));
    puVar9 = param_3;
    func_0x00010bfce4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b41c8;
    _objc_alloc();
    puVar10 = puVar2;
    func_0x00010c15ffa0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = param_6;
    func_0x000107cdc434(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010bf148a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03b300();
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar5;
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(ppuVar6);
    _objc_release(puVar10);
    lVar18 = *(long *)(param_1 + 0x40);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar18 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
    }
    _objc_initWeak(auStack_178,param_1);
    puVar11 = PTR_PTR_1126afdd8;
    func_0x00010c247a20(*(undefined8 *)(param_1 + 0x60));
    func_0x00010bfc8740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    puVar12 = PTR_PTR_1126b4540;
    _objc_alloc();
    puVar10 = puVar2;
    func_0x00010c15ffa0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c027940();
    _objc_release(puVar10);
    lVar18 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar18);
    func_0x00010c1e1580(puVar12);
    _objc_release(lVar18);
    lVar18 = param_1 + 0x70;
    _objc_loadWeakRetained(lVar18);
    func_0x00010c18b5e0(puVar12);
    _objc_release(lVar18);
    uVar13 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c14b780();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(uVar14);
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    uVar17 = *(undefined8 *)(param_1 + 0x40);
    puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b0 = 0xc2000000;
    pcStack_1a8 = FUN_10506b558;
    puStack_1a0 = &UNK_1108645b8;
    puStack_198 = puVar12;
    _objc_retain(param_5);
    uStack_190 = param_5;
    _objc_retain(uVar13);
    uStack_188 = uVar13;
    _objc_retain(uVar14);
    puStack_208 = puVar5;
    uStack_200 = 0xc2000000;
    pcStack_1f8 = FUN_10506b5dc;
    puStack_1f0 = &UNK_1108645e8;
    ppuVar15 = &puStack_208;
    param_2 = auStack_178;
    uStack_180 = uVar14;
    _objc_copyWeak(auStack_1c0);
    puStack_1e8 = puVar9;
    puStack_1e0 = puVar2;
    _objc_retain(param_6);
    ppuStack_1d8 = param_6;
    _objc_retain(param_3);
    ppuVar6 = &puStack_208;
    puStack_1d0 = param_3;
    puStack_1c8 = puVar12;
    func_0x00010bf9d5c0(uVar17);
    _objc_release(puStack_1d0);
    _objc_release(ppuStack_1d8);
    _objc_destroyWeak(auStack_1c0);
    _objc_release(uStack_180);
    _objc_release(uStack_188);
    _objc_release(uStack_190);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_destroyWeak(auStack_178);
    _objc_release(puVar9);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar15 + 9);
  _objc_destroyWeak(auStack_178);
  __Unwind_Resume();
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 8);
  func_0x00010c2923e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010c0720c0();
  _objc_release(uVar13);
  _objc_release(param_2);
  if ((int)puVar2 != 0) {
    *(undefined1 *)ppuVar6 = 1;
  }
  return puVar2;
}



/* Entry: 10506b4d4; end: 10506b557;  */

undefined8 FUN_10506b4d4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_2);
  if ((int)uVar2 != 0) {
    *param_4 = 1;
  }
  return uVar2;
}



/* Entry: 10506b558; end: 10506b5db;  */

void FUN_10506b558(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b4548;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010bf7fc00(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c037400(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10506b5dc; end: 10506b637;  */

void FUN_10506b5dc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7bb60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10506b638; end: 10506b7bf; -[SCGroupActionSheetWorkflow _presentGroupUnifiedActionSheetWithMenuViewDataProvider:groupDataSource:sourcePageType:factory:plugins:context:] */

void FUN_10506b638(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bfcf480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_6;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010bef9980(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c1c07e0(*(undefined8 *)(param_1 + 0x18));
  puVar1 = PTR_PTR_1126b1208;
  _objc_alloc();
  func_0x00010c02b1a0();
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  func_0x00010bef9980(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c161ba0(*(undefined8 *)(param_1 + 0x18));
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10506b7c0;
  puStack_60 = &UNK_110848ba8;
  uStack_58 = uVar2;
  lStack_50 = param_1;
  uStack_48 = param_8;
  _objc_retain(param_8);
  _objc_retain(uVar2);
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_48);
  _objc_release(uVar2);
  _objc_release(param_8);
  return;
}



/* Entry: 10506b7c0; end: 10506b85b;  */

void FUN_10506b7c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28) + 0x68;
  _objc_loadWeakRetained(lVar2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10506b85c;
  puStack_48 = &UNK_110841f80;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar3;
  func_0x00010c10d0e0(uVar1,param_2,lVar2,&puStack_60);
  _objc_release(lVar2);
  _objc_release(uStack_40);
  return;
}



/* Entry: 10506b85c; end: 10506b897;  */

void FUN_10506b85c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c10f940(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e1580(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10506b898; end: 10506b8ef; -[SCGroupActionSheetWorkflow _dismissAndPresentErrorStatusMessage] */

void FUN_10506b898(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10506b8f0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 10506b8f0; end: 10506b967;  */

void FUN_10506b8f0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x70;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfce440();
  _objc_release(lVar1);
  return;
}



/* Entry: 10506b968; end: 10506b96f;  */

void FUN_10506b968(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7b3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentErrorStatusMessage_11257c688);
  return;
}



/* Entry: 10506b970; end: 10506ba0f; -[SCGroupActionSheetWorkflow _presentErrorStatusMessage] */

void FUN_10506b970(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c0dc640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126afde0;
  func_0x00010506bb34();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0(puVar3,param_2,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c25f340(uVar2,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10506ba10; end: 10506baeb; -[SCGroupActionSheetWorkflow .cxx_destruct] */

void FUN_10506ba10(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
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



/* Entry: 10506baec; end: 10506bd43;  */

void FUN_10506baec(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc3c18;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc3c18,
                      &PTR____CFConstantStringClassReference_110dc3c38,0);
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



/* Entry: 10506bd44; end: 10506bde7; -[SCAuraFriendProfileLegacyScope initWithAuraFriendProfileScope:sharingViewControllerPresenter:] */

undefined1 *
FUN_10506bd44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5d08;
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



/* Entry: 10506bde8; end: 10506bdef; -[SCAuraFriendProfileLegacyScope auraFriendProfileScope] */

undefined8 FUN_10506bde8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10506bdf0; end: 10506bdf7; -[SCAuraFriendProfileLegacyScope sharingViewControllerPresenter] */

undefined8 FUN_10506bdf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10506bdf8; end: 10506be27; -[SCAuraFriendProfileLegacyScope .cxx_destruct] */

void FUN_10506bdf8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10506be28; end: 10506becb; -[SCAuraMyProfileLegacyScope initWithAuraMyProfileScope:sharingViewControllerPresenter:] */

undefined1 *
FUN_10506be28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5d10;
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



/* Entry: 10506becc; end: 10506bed3; -[SCAuraMyProfileLegacyScope auraMyProfileScope] */

undefined8 FUN_10506becc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10506bed4; end: 10506bedb; -[SCAuraMyProfileLegacyScope sharingViewControllerPresenter] */

undefined8 FUN_10506bed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10506bedc; end: 10506bf0b; -[SCAuraMyProfileLegacyScope .cxx_destruct] */

void FUN_10506bedc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10506bf0c; end: 10506bf77; +[SCAuraProfileType friendCompatibilityProfileWithFriendUserId:] */

void FUN_10506bf0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b3b30;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10506bf78; end: 10506bfdf; +[SCAuraProfileType friendPersonalityProfileWithFriendUserId:] */

void FUN_10506bf78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b3b30;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10506bfe0; end: 10506c027; +[SCAuraProfileType myPersonalityProfile] */

void FUN_10506bfe0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b3b30;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10506c028; end: 10506c04b; -[SCAuraProfileType copyWithZone:] */

undefined8 FUN_10506c028(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10506c04c; end: 10506c0c3; -[SCAuraProfileType hash] */

void FUN_10506c04c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126e5d18;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10506c0c4; end: 10506c107; -[SCAuraProfileType internalInit] */

void FUN_10506c0c4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e5d18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10506c108; end: 10506c1bf; -[SCAuraProfileType isEqual:] */

long FUN_10506c108(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10506c198:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10506c1a4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10506c1a4;
        }
        goto LAB_10506c198;
      }
    }
    lVar3 = 0;
  }
LAB_10506c1a4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10506c1c0; end: 10506c26f; -[SCAuraProfileType matchMyPersonalityProfile:friendPersonalityProfile:friendCompatibilityProfile:] */

void FUN_10506c1c0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_10506c24c;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if (lVar2 != 1) {
      if ((lVar2 == 0) && (param_3 != 0)) {
        (**(code **)(param_3 + 0x10))(param_3);
      }
      goto LAB_10506c24c;
    }
    if (param_4 == 0) goto LAB_10506c24c;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar2 = param_4;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_10506c24c:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10506c270; end: 10506c29f; -[SCAuraProfileType .cxx_destruct] */

void FUN_10506c270(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10506c2a0; end: 10506c2a7; +[SCProfile3DeeplinkHandler isMyProfile3EnabledWithCircumstanceEngine:] */

void FUN_10506c2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f158f8,0,0);
  return;
}



/* Entry: 10506c2a8; end: 10506c5bb; -[SCProfile3DeeplinkHandler initWithCircumstanceEngine:userSession:settingsScopeExposer:settingsScopeServices:changeUsernameScopeExposer:passwordSettingsScopeExposer:passwordSettingsScopeServices:bitmojiExtensionSettingsFactoryServices:contactSupportScopeExposer:contactSupportScopeServices:sessionManagementScopeExposer:sessionManagementScopeServices:bugsAndSuggestionsScopeExposer:phoneSettingsScopeExposer:phoneSettingsScopeServices:profileManagementScopeExposer:] */

undefined8 *
FUN_10506c2a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_70 = PTR_PTR_1126e5d20;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_storeWeak(puVar1 + 3,param_5);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 5,param_7);
    _objc_storeWeak(puVar1 + 6,param_8);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 8,param_10);
    _objc_storeWeak(puVar1 + 10,param_11);
    _objc_storeWeak(puVar1 + 0xb,param_12);
    _objc_storeWeak(puVar1 + 0xc,param_13);
    _objc_storeWeak(puVar1 + 0xd,param_14);
    _objc_storeWeak(puVar1 + 0xe,param_15);
    _objc_storeWeak(puVar1 + 0xf,param_16);
    _objc_storeWeak(puVar1 + 0x10,param_17);
    _objc_storeWeak(puVar1 + 0x11,param_18);
  }
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



/* Entry: 10506c5bc; end: 10506c5bf; -[SCProfile3DeeplinkHandler clear] */

void FUN_10506c5bc(void)

{
  return;
}



/* Entry: 10506c5c0; end: 10506c653; -[SCProfile3DeeplinkHandler navigationUIContainerForNavigationController:animated:] */

void FUN_10506c5c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aead0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02e500();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10506c654; end: 10506c65b;  */

undefined1 FUN_10506c654(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 10506c65c; end: 10506c757; -[SCProfile3DeeplinkHandler presentSettingsPageOnNav:] */

void FUN_10506c65c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c228220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = param_1;
    func_0x00010c0d6d00(param_1,param_2,param_3,1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_1;
      func_0x00010c2282a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf22f40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      func_0x00010c228220(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620();
      _objc_release(param_1);
      _objc_release(lVar3);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10506c758; end: 10506c867; -[SCProfile3DeeplinkHandler presentSettingsPageOnNav:initialAction:] */

void FUN_10506c758(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c228220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = param_1;
    func_0x00010c0d6d00(param_1,param_2,param_3,1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_1;
      func_0x00010c2282a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf22f40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      func_0x00010c228220(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620();
      _objc_release(param_1);
      _objc_release(lVar3);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10506c868; end: 10506c92b; -[SCProfile3DeeplinkHandler handleDeeplinkPayload:hostingNavigationController:] */

void FUN_10506c868(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c087060();
  if (lVar1 == 3) {
    func_0x00010c0f8c60(param_1,param_2,param_4);
  }
  else if (lVar1 == 2) {
    lVar1 = param_3;
    func_0x00010c116da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bfea040(param_3);
    func_0x00010c0f8d20(param_1,param_2,lVar1,lVar2,param_4);
    _objc_release(lVar1);
  }
  else if (lVar1 == 1) {
    func_0x00010c0f8fc0(param_1,param_2,param_3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10506c92c; end: 10506cb27; -[SCProfile3DeeplinkHandler performPendingInvitationsDeeplinkWithHostingNavigationController:] */

void FUN_10506c92c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c116de0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c116de0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  func_0x00010c10e240(param_1);
  lVar1 = param_1;
  func_0x00010c228220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c0d6d00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      _objc_initWeak(auStack_48,param_1);
      func_0x00010c293740(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010bf25180();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0b7dc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(lVar1);
      func_0x00010c2a14c0(lVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(param_1);
      _objc_release(lVar1);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10506cb28; end: 10506cd3f;  */

void FUN_10506cb28(undefined *param_1,long param_2,undefined *param_3,undefined4 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long lVar7;
  undefined1 auStack_1d8 [8];
  undefined4 uStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
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
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_3 == (undefined *)0x0) {
    param_3 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_3 != (undefined *)0x0) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      lVar1 = param_2;
      func_0x00010bfd3360();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf52a60();
      unaff_x23 = 0;
      if (lVar2 != 0) {
        lVar7 = *plStack_120;
        puStack_138 = param_3;
        do {
          lVar6 = 0;
          do {
            if (*plStack_120 != lVar7) {
              _objc_enumerationMutation(lVar1);
            }
            unaff_x24 = *(undefined8 *)(lStack_128 + lVar6 * 8);
            unaff_x25 = unaff_x24;
            func_0x00010bf25020();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x25;
            func_0x00010c291840();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = unaff_x26;
            func_0x00010c074e40();
            _objc_release(unaff_x26);
            _objc_release(unaff_x25);
            if ((int)uVar3 != 0) {
              unaff_x23 = unaff_x24;
              func_0x00010bf25020();
              _objc_retainAutoreleasedReturnValue();
              param_3 = puStack_138;
              goto LAB_10506cc6c;
            }
            lVar6 = lVar6 + 1;
          } while (lVar2 != lVar6);
          lVar2 = lVar1;
          func_0x00010bf52a60();
        } while (lVar2 != 0);
        unaff_x23 = 0;
        param_3 = puStack_138;
      }
LAB_10506cc6c:
      _objc_release(lVar1);
      param_1 = PTR_PTR_1126b0f38;
      _objc_alloc();
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      param_5 = 0;
      uVar3 = unaff_x23;
      func_0x00010c0581c0();
      param_4 = (undefined4)uVar3;
      unaff_x22 = param_3;
      func_0x00010c116de0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1;
      func_0x00010bf9d620();
      _objc_release(unaff_x22);
      _objc_release(param_1);
      _objc_release(unaff_x23);
    }
    _objc_release(param_3);
  }
  lVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_178 = FUN_10506cd40;
    uStack_1c0 = unaff_x26;
    uStack_1b8 = unaff_x25;
    uStack_1b0 = unaff_x24;
    uStack_1a8 = unaff_x23;
    puStack_1a0 = unaff_x22;
    puStack_198 = param_1;
    puStack_190 = param_3;
    lStack_188 = param_2;
    puStack_180 = &stack0xfffffffffffffff0;
    _objc_retain(puVar5);
    _objc_retain(param_5);
    puVar4 = puVar5;
    func_0x00010c08fa60();
    if (puVar4 != (undefined *)0x0) {
      _objc_initWeak(auStack_1c8,lVar1);
      func_0x00010c293740(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf25180();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar2;
      func_0x00010c0b7ee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_1d8,auStack_1c8);
      _objc_retain(param_5);
      uStack_1d0 = param_4;
      func_0x00010bfd3240(lVar7);
      _objc_release(lVar7);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(param_5);
      _objc_destroyWeak(auStack_1d8);
      _objc_destroyWeak(auStack_1c8);
    }
    _objc_release(param_5);
    _objc_release(puVar5);
    return;
  }
  return;
}



/* Entry: 10506cd40; end: 10506cea7; -[SCProfile3DeeplinkHandler performProfileManagementDeeplinkWithProfileId:deeplinkAction:hostingNavigationController:] */

void FUN_10506cd40(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_58,param_1);
    func_0x00010c293740(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf25180();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b7ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_5);
    uStack_60 = param_4;
    func_0x00010bfd3240(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_1);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10506cea8; end: 10506d023;  */

void FUN_10506cea8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c116de0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010c116de0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12e1c0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
    lVar1 = param_1;
    func_0x00010c0d6d00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b0f38;
    _objc_alloc(PTR_PTR_1126b0f38);
    uVar4 = param_2;
    func_0x00010bf25020(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0581c0(puVar3);
    _objc_release(uVar4);
    lVar2 = param_1;
    func_0x00010c116de0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620();
    _objc_release(lVar2);
    _objc_release(puVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10506d024; end: 10506d08f; -[SCProfile3DeeplinkHandler settingsScopeWantsDismiss] */

void FUN_10506d024(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c228220();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10506d090; end: 10506d117; -[SCProfile3DeeplinkHandler settingsScopeDidDismiss] */

void FUN_10506d090(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c228220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010c228220(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10506d118; end: 10506d14f; -[SCProfile3DeeplinkHandler usernameChangeComplete] */

void FUN_10506d118(undefined8 param_1)

{
  func_0x00010bf35380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10506d150; end: 10506d187; -[SCProfile3DeeplinkHandler usernameChangeShareComplete] */

void FUN_10506d150(undefined8 param_1)

{
  func_0x00010bf35380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10506d188; end: 10506d1bf; -[SCProfile3DeeplinkHandler usernameChangeCanceled] */

void FUN_10506d188(undefined8 param_1)

{
  func_0x00010bf35380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10506d1c0; end: 10506d1f7; -[SCProfile3DeeplinkHandler usernameChangeDismissed] */

void FUN_10506d1c0(undefined8 param_1)

{
  func_0x00010bf35380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10506d1f8; end: 10506d22f; -[SCProfile3DeeplinkHandler passwordSettingsDidCompleteChange] */

void FUN_10506d1f8(undefined8 param_1)

{
  func_0x00010c0f5580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10506d230; end: 10506d267; -[SCProfile3DeeplinkHandler passwordSettingsDidExitWithoutCompletion] */

void FUN_10506d230(undefined8 param_1)

{
  func_0x00010c0f5580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10506d268; end: 10506d26f; -[SCProfile3DeeplinkHandler didDismissBitmojiExtensionSettings] */

void FUN_10506d268(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c170cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setBitmojiExtensionSettingsPrese_112639d58,0)
  ;
  return;
}



/* Entry: 10506d270; end: 10506d2a7; -[SCProfile3DeeplinkHandler contactSupportDidComplete] */

void FUN_10506d270(undefined8 param_1)

{
  func_0x00010bf4a4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10506d2a8; end: 10506d2df; -[SCProfile3DeeplinkHandler sessionManagementPageDismissed] */

void FUN_10506d2a8(undefined8 param_1)

{
  func_0x00010c1601e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


