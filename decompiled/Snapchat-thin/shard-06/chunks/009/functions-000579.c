/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f1839c; end: 104f183cb; -[SCMemoriesSnapshotSnapPickerSnapTranscoder .cxx_destruct] */

void FUN_104f1839c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f183cc; end: 104f18667; -[SCMemoriesSnapshotSnapPickerRouteActionsImpl initWithUIContainer:memoriesPickerScopeExposer:memoriesPickerScopeServices:valdiRuntimeProvider:myUsernameProvider:myDisplayNameProvider:myBitmojiAvatarIdProvider:myBitmojiSelfieIdProvider:userSession:memoriesLegacyOperaPresenterBuilder:circumstanceEngine:] */

undefined8 *
FUN_104f183cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126e5040;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
    uVar2 = param_13;
    func_0x00010bf1f440();
    *(char *)(puVar1 + 0xe) = (char)uVar2;
  }
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



/* Entry: 104f18668; end: 104f1879f; -[SCMemoriesSnapshotSnapPickerRouteActionsImpl presentMemoriesPickerWithDelegate:actionHandler:] */

void FUN_104f18668(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b1c60;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = puVar1;
  func_0x000104f19aec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052c80(puVar1,param_2,puVar2,0,0,1,0,1,0x101);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR_PTR_1126aedf8;
  func_0x00010bfb9300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23840(uVar3,param_2,param_3,0,0,param_4,uVar4,puVar1,puVar2,
                      &PTR____CFConstantStringClassReference_110dbac98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f187a0; end: 104f18813; -[SCMemoriesSnapshotSnapPickerRouteActionsImpl dismissMemoriesPickerWithCompletion:] */

void FUN_104f187a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c12e1c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a4ae0();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f18814; end: 104f18b5b; -[SCMemoriesSnapshotSnapPickerRouteActionsImpl presentOperaWithPresentingViewController:gallerySnap:galleryEntry:sourceView:delegate:] */

void FUN_104f18814(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [16];
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x58,param_7);
  lVar2 = param_1;
  func_0x00010bdf0d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(long *)(param_1 + 0x50) = lVar2;
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf977c0();
  lVar2 = (long)(int)uVar1;
  func_0x00010b5f5864(lVar2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2600;
  _objc_alloc();
  func_0x00010bfbdda0();
  func_0x00010bf977c0();
  func_0x00010c07b240();
  func_0x00010b5fc5e4();
  func_0x00010c0f7a20(param_5);
  uVar1 = param_5;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c080ca0();
  uVar9 = param_5;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3d240();
  uVar7 = param_5;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c010560();
  _objc_release(uVar7);
  _objc_release(uVar9);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b2608;
  func_0x00010c243fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2610;
  _objc_alloc();
  uVar1 = param_4;
  func_0x00010c241220(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019020();
  _objc_release(puVar6);
  _objc_release(uVar1);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f2220(param_3);
  uVar1 = param_3;
  func_0x00010c10d5e0(0,0,uVar9);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar1);
  _objc_initWeak(auStack_160,lVar2);
  puVar3 = PTR_PTR_1126b2618;
  _objc_alloc();
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_104f18dbc;
  puStack_170 = &UNK_1108434b0;
  _objc_copyWeak(auStack_168,auStack_160);
  _objc_copyWeak(auStack_190,auStack_160);
  func_0x00010c05ec80(puVar3);
  puVar4 = PTR_PTR_1126b2208;
  _objc_alloc(PTR_PTR_1126b2208);
  puVar5 = puVar3;
  func_0x00010bf63080(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb1920();
  puVar6 = puVar3;
  func_0x00010c0eaa60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ec17a8(*(undefined8 *)(lVar2 + 0x68),0x80);
  func_0x00010bff9720(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar7 = *(undefined8 *)(lVar2 + 0x60);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf22c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_168);
  _objc_destroyWeak(auStack_160);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 104f18b5c; end: 104f18dbb; -[SCMemoriesSnapshotSnapPickerRouteActionsImpl _createOperaPresenterWithDelegate:] */

void FUN_104f18b5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126b2618;
  _objc_alloc();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104f18dbc;
  puStack_90 = &UNK_1108434b0;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010c05ec80(puVar1);
  puVar2 = PTR_PTR_1126b2208;
  _objc_alloc(PTR_PTR_1126b2208);
  puVar3 = puVar1;
  func_0x00010bf63080(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb1920();
  puVar4 = puVar1;
  func_0x00010c0eaa60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ec17a8(*(undefined8 *)(param_1 + 0x68),0x80);
  func_0x00010bff9720(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf22c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 104f18dbc; end: 104f18e4b;  */

void FUN_104f18dbc(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104f18e4c;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104f18e4c; end: 104f18e77;  */

void FUN_104f18e4c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f18e78; end: 104f18f07;  */

void FUN_104f18e78(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104f18f08;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104f18f08; end: 104f18f33;  */

void FUN_104f18f08(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f18f34; end: 104f18f5f; -[SCMemoriesSnapshotSnapPickerRouteActionsImpl _didConfirmPickedSnap] */

void FUN_104f18f34(long param_1)

{
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f18f60; end: 104f18f8b; -[SCMemoriesSnapshotSnapPickerRouteActionsImpl _didCancelPickedSnap] */

void FUN_104f18f60(long param_1)

{
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf72d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f18f8c; end: 104f18f93; -[SCMemoriesSnapshotSnapPickerRouteActionsImpl dismissOpera] */

void FUN_104f18f8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf82f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x50),PTR_s_dismiss_1125be578);
  return;
}



/* Entry: 104f18f94; end: 104f18fdb; -[SCMemoriesSnapshotSnapPickerRouteActionsImpl operaPresenterDidDismiss] */

void FUN_104f18f94(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf75000();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,0);
  return;
}



/* Entry: 104f18fdc; end: 104f18fe3; -[SCMemoriesSnapshotSnapPickerRouteActionsImpl operaPresenterDidOpenView] */

undefined8 FUN_104f18fdc(void)

{
  return 0;
}



/* Entry: 104f18fe4; end: 104f18fe7; -[SCMemoriesSnapshotSnapPickerRouteActionsImpl operaPresenterWillOpenViewWithOperaItem:] */

void FUN_104f18fe4(void)

{
  return;
}



/* Entry: 104f18fe8; end: 104f18feb; -[SCMemoriesSnapshotSnapPickerRouteActionsImpl operaPresenterDidPresent] */

void FUN_104f18fe8(void)

{
  return;
}



/* Entry: 104f18fec; end: 104f18ff3; -[SCMemoriesSnapshotSnapPickerRouteActionsImpl operaPresenterOverrideTransitionMode] */

undefined8 FUN_104f18fec(void)

{
  return 4;
}



/* Entry: 104f18ff4; end: 104f190a3; -[SCMemoriesSnapshotSnapPickerRouteActionsImpl .cxx_destruct] */

void FUN_104f18ff4(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
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



/* Entry: 104f190a4; end: 104f19197; -[SCMemoriesSnapshotSnapPickerWorkflow initWithRouter:snapTranscoder:notificationPool:delegate:] */

undefined1 *
FUN_104f190a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e5048;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f19198; end: 104f1926b; -[SCMemoriesSnapshotSnapPickerWorkflow beginWorkflow] */

void FUN_104f19198(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126b2620;
  _objc_alloc();
  func_0x00010c00a2c0();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1429e0(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  return;
}



/* Entry: 104f1926c; end: 104f192c3;  */

void FUN_104f1926c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10d060(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f192c4; end: 104f19337; -[SCMemoriesSnapshotSnapPickerWorkflow requestToDismissPage] */

void FUN_104f192c4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104f19338;
  puStack_30 = &UNK_11085b048;
  lStack_28 = lVar1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_48);
  _objc_release(lVar1);
  return;
}



/* Entry: 104f19338; end: 104f1938f;  */

void FUN_104f19338(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104f19390;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf83d80(param_2,param_2,&puStack_38);
  return;
}



/* Entry: 104f19390; end: 104f19397;  */

void FUN_104f19390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c9c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_memoriesSnapshotSnapPickerDidCan_112610130);
  return;
}



/* Entry: 104f19398; end: 104f19517; -[SCMemoriesSnapshotSnapPickerWorkflow actionHandler:didPickSnap:withEntry:fromView:] */

void FUN_104f19398(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_4;
  _objc_release(uVar1);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_5;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c1429e0(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f19518; end: 104f195ab;  */

void FUN_104f19518(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf4b2e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10d680(param_2);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f195ac; end: 104f19683; -[SCMemoriesSnapshotSnapPickerWorkflow didConfirmPickedSnap] */

void FUN_104f195ac(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c279b40(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104f19684; end: 104f19783;  */

void FUN_104f19684(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104f19784;
  puStack_68 = &UNK_110850cf8;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_60 = param_2;
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_retain(param_4);
  uStack_50 = param_4;
  func_0x000100162d98("APPSTORE",&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104f19784; end: 104f197bb;  */

void FUN_104f19784(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea8a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f197bc; end: 104f198b7; -[SCMemoriesSnapshotSnapPickerWorkflow _setTranscodedSnapDoc:snapDocKey:error:] */

void FUN_104f197bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_5 == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = param_3;
    _objc_release(uVar1);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = param_4;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126afde0;
    uVar2 = uVar1;
    func_0x000104f19ad4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf55ce0(puVar3,param_2,uVar2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340(uVar1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&PTR___NSConcreteGlobalBlock_11085b0f8);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f198b8; end: 104f198bf;  */

void FUN_104f198b8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dismissOpera_1125be980);
  return;
}



/* Entry: 104f198c0; end: 104f198d7; -[SCMemoriesSnapshotSnapPickerWorkflow didCancelPickedSnap] */

void FUN_104f198c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1429f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_runRouteWithAction__11262e498,
             &PTR___NSConcreteGlobalBlock_11085b118);
  return;
}



/* Entry: 104f198d8; end: 104f199a7; -[SCMemoriesSnapshotSnapPickerWorkflow didDismissOpera] */

void FUN_104f198d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(param_1 + 0x38);
  _objc_retain(lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  if (lVar3 != 0) {
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104f199a8;
    puStack_50 = &UNK_11085b138;
    lStack_48 = lVar2;
    lStack_40 = lVar3;
    uStack_38 = uVar4;
    func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_68);
    _objc_release(lVar2);
  }
  _objc_release(uVar4);
  _objc_release(lVar3);
  return;
}



/* Entry: 104f199a8; end: 104f19a07;  */

void FUN_104f199a8(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104f19a08;
  puStack_30 = &UNK_110848ba8;
  uStack_20 = *(undefined8 *)(param_1 + 0x28);
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  uStack_18 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf83d80(param_2,param_2,&puStack_48);
  return;
}



/* Entry: 104f19a08; end: 104f19a17;  */

void FUN_104f19a08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c9c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_memoriesSnapshotSnapPickerDidSel_112610138,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104f19a18; end: 104f19a8b; -[SCMemoriesSnapshotSnapPickerWorkflow .cxx_destruct] */

void FUN_104f19a18(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f19a8c; end: 104f19b03;  */

void FUN_104f19a8c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbacb8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dbacb8,
                      &PTR____CFConstantStringClassReference_110dbacd8,0);
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



/* Entry: 104f19b04; end: 104f19b4f; +[SCSnapshotsOperaOverlayLayer layerWithPage:] */

void FUN_104f19b04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2578;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f19b50; end: 104f19c2f; -[SCSnapshotsOperaOverlayLayer initWithPage:] */

undefined1 * FUN_104f19b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_28 = PTR_PTR_1126e5050;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f19c30; end: 104f19c37; -[SCSnapshotsOperaOverlayLayer type] */

undefined8 FUN_104f19c30(void)

{
  return 0x19;
}



/* Entry: 104f19c38; end: 104f19c43; -[SCSnapshotsOperaOverlayLayer layerViewControllerClass] */

void FUN_104f19c38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126b2628);
  return;
}



/* Entry: 104f19c44; end: 104f19de3; -[SCSnapshotsOperaOverlayLayer isEqual:] */

bool FUN_104f19c44(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  puVar2 = param_3;
  _objc_opt_class();
  puVar3 = PTR_PTR_1126b2578;
  _objc_opt_class();
  if (puVar2 != puVar3) {
    bVar1 = false;
    goto LAB_104f19dc0;
  }
  _objc_retain(param_3);
  puVar2 = param_1;
  func_0x00010c29d940();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010c29d940();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  if (puVar2 == puVar3) {
    _objc_release(puVar3);
    _objc_release(puVar2);
LAB_104f19d1c:
    puVar4 = param_1;
    func_0x00010bf44f20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_3;
    func_0x00010bf44f20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == puVar5) {
      func_0x00010c295200(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_3;
      func_0x00010c295200(param_3);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = param_1 == puVar6;
      _objc_release();
      _objc_release(param_1);
    }
    else {
      bVar1 = false;
    }
    _objc_release(puVar5);
LAB_104f19da0:
    _objc_release(puVar4);
  }
  else {
    if (puVar3 == (undefined *)0x0) {
      bVar1 = false;
      puVar4 = puVar2;
      goto LAB_104f19da0;
    }
    puVar4 = puVar2;
    func_0x00010c071ae0(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((int)puVar4 != 0) goto LAB_104f19d1c;
    bVar1 = false;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
LAB_104f19dc0:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104f19de4; end: 104f19deb; -[SCSnapshotsOperaOverlayLayer viewModelObservable] */

undefined8 FUN_104f19de4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104f19dec; end: 104f19df3; -[SCSnapshotsOperaOverlayLayer composerRuntime] */

undefined8 FUN_104f19dec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104f19df4; end: 104f19dfb; -[SCSnapshotsOperaOverlayLayer valdiContext] */

undefined8 FUN_104f19df4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104f19dfc; end: 104f19e37; -[SCSnapshotsOperaOverlayLayer .cxx_destruct] */

void FUN_104f19dfc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f19e38; end: 104f19ea3; -[SCSnapshotsOperaOverlayLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104f19e38(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e5058;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithConfiguration_layerViewC_1125de030);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112717038);
    *(undefined **)((long)puVar1 + (long)_DAT_112717038) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104f19ea4; end: 104f1a087; -[SCSnapshotsOperaOverlayLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f19ea4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c222380(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b2580;
  _objc_alloc(PTR_PTR_1126b2580);
  puVar2 = PTR_PTR_1126b2588;
  _objc_alloc(PTR_PTR_1126b2588);
  func_0x00010c05ac00();
  func_0x00010c049380(puVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b2630;
  _objc_alloc();
  lVar3 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf44f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar2,param_2,puVar1,lVar4,lVar6);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11271703c);
  *(undefined **)(param_1 + _DAT_11271703c) = puVar2;
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112717040);
  *(undefined **)(param_1 + _DAT_112717040) = puVar2;
  _objc_release(uVar7);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f1a088; end: 104f1a1b7; -[SCSnapshotsOperaOverlayLayerViewController didTap:] */

void FUN_104f1a088(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_4,param_3,uVar2);
  dVar4 = param_1;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bfb68e0(uVar1);
  _CGRectGetWidth();
  uVar2 = param_2;
  dVar5 = dVar4;
  func_0x00010bf46560(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2690e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf99b40(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2638;
  if (dVar4 * dVar5 <= param_1) {
    func_0x00010c2694a0(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c269640();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0eb780(param_2,param_3,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f1a1b8; end: 104f1a3a7; -[SCSnapshotsOperaOverlayLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f1a1b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_112717038));
    _objc_initWeak(auStack_68,param_1);
    lVar1 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c29d940();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e0ec0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    lVar5 = lVar4;
    func_0x00010c25ff60(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126b2640;
    func_0x00010c08cb00(PTR_PTR_1126b2640);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08d120(param_1);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f1a3a8; end: 104f1a3ef;  */

void FUN_104f1a3a8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bead660();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f1a3f0; end: 104f1a3ff; -[SCSnapshotsOperaOverlayLayerViewController _setupLayerViewWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f1a3f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2226d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271703c),PTR_s_setViewModel__1126663d8);
  return;
}



/* Entry: 104f1a400; end: 104f1a44f; -[SCSnapshotsOperaOverlayLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f1a400(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112717040,0);
  _objc_storeStrong(param_1 + _DAT_11271703c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112717038,0);
  return;
}



/* Entry: 104f1a450; end: 104f1a5ef; -[SCMemoriesWidgetEducationBannerPlugin initWithFeatureSettingsService:userEducationTrayScopeExposer:userEducationTrayScopeServices:uiContainer:userTrackedLogger:mergedDataSource:grapheneRegistry:timeProvider:] */

undefined1 *
FUN_104f1a450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e5060;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f1a5f0; end: 104f1a6b7; -[SCMemoriesWidgetEducationBannerPlugin viewModel] */

void FUN_104f1a5f0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  uVar2 = 2;
  _dispatch_get_global_queue(2,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104f1a6b8;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  func_0x00010007380c(uVar2,&puStack_60);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f1a6b8; end: 104f1a7bb;  */

/* WARNING: Possible PIC construction at 0x000104f1a774: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104f1a778) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_104f1a6b8(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010beb2ee0();
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b2648;
    _objc_alloc(PTR_PTR_1126b2648);
    lVar2 = *(long *)(param_1 + 0x20) + 0x20;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c0120e0(puVar4);
    _objc_release(lVar2);
    puVar4 = PTR_PTR_1126b2650;
    _objc_alloc(PTR_PTR_1126b2650);
    func_0x00010c03a100();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_completeWithValue__1125ae900,puVar4);
  return;
}



/* Entry: 104f1a7bc; end: 104f1a83b; -[SCMemoriesWidgetEducationBannerPlugin _shouldCreateWidgetEducationBannerViewModel] */

undefined8 FUN_104f1a7bc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfaaf20();
  _objc_release(uVar1);
  if (uVar2 < 0x14) {
    uVar3 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x000108e00e78();
    _objc_release(uVar4);
  }
  return uVar3;
}



/* Entry: 104f1a83c; end: 104f1a8af; -[SCMemoriesWidgetEducationBannerPlugin .cxx_destruct] */

void FUN_104f1a83c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f1a8b0; end: 104f1aa23; -[SCMemoriesWidgetEducationBannerPluginActionHandler initWithFeatureSettingsService:userEducationTrayScopeExposer:userEducationTrayScopeServices:uiContainer:userTrackedLogger:grapheneRegistry:timeProvider:] */

undefined1 *
FUN_104f1a8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e5068;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f1aa24; end: 104f1aa4f; -[SCMemoriesWidgetEducationBannerPluginActionHandler didDismiss] */

void FUN_104f1aa24(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be50b20(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010be54370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logGrapheneMetricWithAction__112572a78,3);
  return;
}



/* Entry: 104f1aa50; end: 104f1ab8b; -[SCMemoriesWidgetEducationBannerPluginActionHandler didTapCTA] */

void FUN_104f1aa50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b2658;
  _objc_alloc(PTR_PTR_1126b2658);
  puVar2 = puVar1;
  func_0x000104f1b5f4();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bdf1020(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae5a0;
  _objc_alloc(PTR_PTR_1126ae5a0);
  puVar5 = puVar4;
  func_0x000104f1b5dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051340(puVar4,param_2,puVar5,1,0);
  func_0x00010c053280(puVar1,param_2,puVar2,lVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(puVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  lVar3 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf23ca0(uVar6,param_2,lVar3,puVar1,0xe,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,uVar6);
  func_0x00010be50b20(param_1,param_2,1);
  func_0x00010be54360(param_1,param_2,2);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f1ab8c; end: 104f1abbf; -[SCMemoriesWidgetEducationBannerPluginActionHandler didShow] */

void FUN_104f1ab8c(undefined8 param_1)

{
  func_0x00010bee43e0();
  func_0x00010be50b20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be54370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logGrapheneMetricWithAction__112572a78,1);
  return;
}



/* Entry: 104f1abc0; end: 104f1ac07; -[SCMemoriesWidgetEducationBannerPluginActionHandler userEducationTrayDidComplete:] */

void FUN_104f1abc0(long param_1)

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



/* Entry: 104f1ac08; end: 104f1ad6b; -[SCMemoriesWidgetEducationBannerPluginActionHandler _createPages] */

void FUN_104f1ac08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ae588;
  _objc_alloc();
  puVar2 = puVar1;
  FUN_104f1b594();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01cfe0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dbad78,puVar2);
  puVar3 = PTR_PTR_1126ae588;
  puStack_70 = puVar1;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x000104f1b5ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01cfe0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dbad98,puVar4);
  puVar5 = PTR_PTR_1126ae588;
  puStack_68 = puVar3;
  _objc_alloc();
  puVar6 = puVar5;
  func_0x000104f1b5c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01cfe0(puVar5,param_2,&PTR____CFConstantStringClassReference_110dbadb8,puVar6);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(puVar2 + 8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0de7e0();
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(puVar2 + 8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cf5c0();
  _objc_release(uVar8);
  func_0x00010beec800(*(undefined8 *)(puVar2 + 0x38));
  uVar8 = *(undefined8 *)(puVar2 + 8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b8ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 104f1ad6c; end: 104f1ae03; -[SCMemoriesWidgetEducationBannerPluginActionHandler _updateWidgetEducationBannerFeatureSettingsProperties] */

void FUN_104f1ad6c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0de7e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cf5c0();
  _objc_release(uVar1);
  func_0x00010beec800(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b8ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f1ae04; end: 104f1aeb3; -[SCMemoriesWidgetEducationBannerPluginActionHandler _logBlizzardMetricWithAction:] */

void FUN_104f1ae04(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0de7e0();
  _objc_release(uVar1);
  uVar1 = 0xffffffffffff8000;
  _dispatch_get_global_queue(0xffffffffffff8000,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  return;
}



/* Entry: 104f1aeb4; end: 104f1af2b;  */

void FUN_104f1aeb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2660;
  _objc_opt_new(PTR_PTR_1126b2660);
  func_0x00010c161620();
  func_0x00010c16f180(puVar1,param_2,0);
  func_0x00010c1cf5a0(puVar1,param_2,*(undefined8 *)(param_1 + 0x30));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f1af2c; end: 104f1afdb; -[SCMemoriesWidgetEducationBannerPluginActionHandler _logGrapheneMetricWithAction:] */

void FUN_104f1af2c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0de7e0();
  _objc_release(uVar1);
  uVar1 = 0xffffffffffff8000;
  _dispatch_get_global_queue(0xffffffffffff8000,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  return;
}



/* Entry: 104f1afdc; end: 104f1b10b;  */

void FUN_104f1afdc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010c2a4d00(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bec5900(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dbadd8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar2);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 104f1b10c; end: 104f1b133; -[SCMemoriesWidgetEducationBannerPluginActionHandler _stringValueWithAction:] */

undefined ** FUN_104f1b10c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    return (undefined **)(&PTR_PTR_11085b198)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dbadf8;
}



/* Entry: 104f1b134; end: 104f1b19b; -[SCMemoriesWidgetEducationBannerPluginActionHandler .cxx_destruct] */

void FUN_104f1b134(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f1b19c; end: 104f1b267; -[SCMemoriesWidgetEducationBannerPluginDataSourceImpl initWithTitle:pages:buttonConfiguration:] */

undefined1 *
FUN_104f1b19c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e5070;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f1b268; end: 104f1b26f; -[SCMemoriesWidgetEducationBannerPluginDataSourceImpl title] */

undefined8 FUN_104f1b268(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104f1b270; end: 104f1b277; -[SCMemoriesWidgetEducationBannerPluginDataSourceImpl pages] */

undefined8 FUN_104f1b270(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104f1b278; end: 104f1b27f; -[SCMemoriesWidgetEducationBannerPluginDataSourceImpl buttonConfiguration] */

undefined8 FUN_104f1b278(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104f1b280; end: 104f1b2bb; -[SCMemoriesWidgetEducationBannerPluginDataSourceImpl .cxx_destruct] */

void FUN_104f1b280(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f1b2bc; end: 104f1b51b; -[SCMemoriesWidgetEducationBannerPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f1b2bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar13 = (long)_DAT_11271708c;
  lVar1 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2668;
  _objc_alloc();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112717090;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar11;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    lVar15 = 0;
    uVar16 = 0;
    lVar13 = 0;
  }
  else {
    uVar16 = *(undefined8 *)(param_1 + _DAT_1127170a0);
    _objc_retain(uVar16);
    lVar15 = param_1 + _DAT_1127170a4;
    _objc_loadWeakRetained(lVar15);
    lVar13 = param_1 + lVar13;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar13;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11271709c;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar12;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112717094;
    _objc_loadWeakRetained(lVar14);
  }
  lVar7 = lVar14;
  func_0x00010c0cadc0(lVar14);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = 0;
  if (param_1 != 0) {
    lVar8 = param_1 + _DAT_112717098;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar8;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126aeea8;
  _objc_opt_new();
  func_0x00010c012100(puVar3,param_2,lVar4,uVar16,lVar15,lVar5,lVar6,lVar7,lVar9,puVar10);
  _objc_release(uVar16);
  func_0x00010c125b60(lVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar14);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(lVar5);
  _objc_release(lVar13);
  _objc_release(lVar15);
  _objc_release(lVar4);
  _objc_release(lVar11);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f1b51c; end: 104f1b593; -[SCMemoriesWidgetEducationBannerPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f1b51c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127170a4);
  _objc_storeStrong(param_1 + _DAT_1127170a0,0);
  _objc_destroyWeak(param_1 + _DAT_11271709c);
  _objc_destroyWeak(param_1 + _DAT_112717098);
  _objc_destroyWeak(param_1 + _DAT_112717094);
  _objc_destroyWeak(param_1 + _DAT_112717090);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271708c);
  return;
}



/* Entry: 104f1b594; end: 104f1b60b;  */

void FUN_104f1b594(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbae78;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dbae78,
                      &PTR____CFConstantStringClassReference_110dbae98,0);
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



/* Entry: 104f1b60c; end: 104f1b94f; -[SCMemoriesSnapsTabCRSectionDataSource initWithDelegate:photoPermissionCoordinator:coreConfigProvider:grapheneRegistry:applicationLifecycleEvents:userTrackedLogger:memoriesExperimentService:] */

undefined8 *
FUN_104f1b60c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e5078;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_retain(param_8);
    uVar4 = puVar1[2];
    puVar1[2] = param_8;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar4);
    _objc_initWeak(auStack_78,puVar1);
    uVar4 = param_9;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b2670;
    _objc_alloc();
    fVar7 = -32.0;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010bfee780();
    uVar5 = puVar1[9];
    puVar1[9] = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0xc];
    puVar1[0xc] = puVar2;
    _objc_release(uVar5);
    _objc_storeWeak(puVar1 + 0xe,param_3);
    _objc_retain(param_9);
    uVar5 = puVar1[0xb];
    puVar1[0xb] = param_9;
    _objc_release();
    func_0x000107e902bc();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[10];
    puVar1[10] = uVar5;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126b2678;
    _objc_alloc();
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108ec0174();
    func_0x00010c0096a0((double)fVar7);
    uVar6 = puVar1[0xd];
    puVar1[0xd] = puVar2;
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_80);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104f1b950; end: 104f1b97f;  */

void FUN_104f1b950(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0fb7e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 104f1b980; end: 104f1b9df;  */

void FUN_104f1b980(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bddd2a0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f1b9e0; end: 104f1bae7; -[SCMemoriesSnapsTabCRSectionDataSource updateCRViewModelForDatesIfNeeded:requestUUID:] */

void FUN_104f1b9e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c25ee40(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f1bae8; end: 104f1bc17;  */

void FUN_104f1bae8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x104f1bb9c;
    puStack_50 = &UNK_110848ba8;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lStack_48 = lVar1;
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uStack_40 = uVar4;
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    func_0x00010c0f7fc0(uVar3,param_2,&puStack_68);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104f1bc18; end: 104f1bcf7; -[SCMemoriesSnapsTabCRSectionDataSource uiDidReceivedUpdatesForDates:] */

void FUN_104f1bc18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104f1bcf8; end: 104f1bd6b;  */

void FUN_104f1bcf8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_104f1bd6c;
    puStack_30 = &UNK_11085b220;
    lStack_28 = lVar1;
    func_0x00010bf97e80(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f1bd6c; end: 104f1bd83;  */

void FUN_104f1bd6c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),
             PTR_s_setObject_forKeyedSubscript__112651bb8,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be4e0,param_2);
  return;
}



/* Entry: 104f1bd84; end: 104f1be3b; -[SCMemoriesSnapsTabCRSectionDataSource uiDidAnnounceRecluster] */

void FUN_104f1bd84(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010bf2e1a0(*(undefined8 *)(param_1 + 0x68));
  if (*(long *)(param_1 + 8) != 0) {
    _objc_initWeak(auStack_28,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 104f1be3c; end: 104f1be8b;  */

void FUN_104f1be3c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f1be8c; end: 104f1bf8f; -[SCMemoriesSnapsTabCRSectionDataSource _kickOffRequestsIfPossibleWithRequest:] */

void FUN_104f1be8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_3;
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010beffe00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010be1e6c0(param_1,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = lVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      func_0x00010bddf060(param_1);
      goto LAB_104f1bf70;
    }
    lVar2 = param_1;
    func_0x00010be1e780();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lVar2;
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c136e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bebff00(param_1,param_2,uVar1);
  }
  else {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = param_3;
  }
  _objc_release(uVar1);
LAB_104f1bf70:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f1bf90; end: 104f1c04b; -[SCMemoriesSnapsTabCRSectionDataSource _getDateArrayNotInUIWithDateArray:] */

void FUN_104f1bf90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_retain(param_3);
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104f1c04c;
  puStack_48 = &UNK_11085b250;
  uStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x00010bf97e80(param_3,param_2,&puStack_60);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f1c04c; end: 104f1c10b;  */

void FUN_104f1c04c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf7ed80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c067fc0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (lVar4 != 0) goto LAB_104f1c0ec;
    }
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  }
LAB_104f1c0ec:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f1c10c; end: 104f1c237; -[SCMemoriesSnapsTabCRSectionDataSource _getDatesNeedRefetch] */

void FUN_104f1c10c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x104f1c1b4;
  puStack_48 = &UNK_11085b280;
  lStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x00010bf97e80(uVar3,param_2,&puStack_60);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f1c238; end: 104f1c37f; -[SCMemoriesSnapsTabCRSectionDataSource _startFetchingWithUUID:] */

void FUN_104f1c238(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0d3c80();
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    func_0x00010bdcc7a0(param_1,param_2,param_3);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x104f1c30c;
    puStack_50 = &UNK_11085b2b0;
    lStack_48 = param_1;
    _objc_retain(uVar1);
    uStack_40 = uVar1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010bf97e80(uVar3,param_2,&puStack_68);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f1c380; end: 104f1c4af; -[SCMemoriesSnapsTabCRSectionDataSource _fetchNewRecentSummaryAssetsWithDateMedadata:datesNeedRefetchCountDownSet:UUID:] */

void FUN_104f1c380(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f1c4b0; end: 104f1c70f;  */

void FUN_104f1c4b0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (*(long *)(param_1 + 0x20) != 0)) && (*(long *)(param_1 + 0x28) != 0)) {
    puVar2 = PTR_PTR_1126b2688;
    _objc_opt_new();
    lVar3 = lVar1;
    func_0x00010be21480(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b59c0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar4 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010be12280(lVar1);
    func_0x000108ebf264();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b2688;
    _objc_opt_new(PTR_PTR_1126b2688);
    lVar6 = lVar1;
    func_0x00010be21480(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b59c0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar6);
    func_0x00010c2a87c0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,*(undefined8 *)(lVar1 + 0x48));
    uVar9 = *(undefined8 *)(lVar1 + 0x48);
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_copyWeak(auStack_70,param_1 + 0x38);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar10);
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar11);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar8);
    func_0x00010bf8b840(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(lVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104f1c710; end: 104f1c8c7;  */

void FUN_104f1c710(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long lStack_48;
  
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    if (lVar1 == 0) {
      lVar3 = 4;
    }
    else {
      lVar1 = param_2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bf529e0();
      lVar3 = lVar3 + 4;
      _objc_release(lVar1);
    }
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar1);
    _objc_retain(param_2);
    lStack_48 = lVar3;
    _objc_copyWeak(auStack_58,param_1 + 0x40);
    _objc_copyWeak(auStack_50,param_1 + 0x48);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar2);
    func_0x00010bf8b840(lVar1);
    _objc_release(lVar1);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_58);
    _objc_release(param_2);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 104f1c8c8; end: 104f1caf3;  */

void FUN_104f1c8c8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar2 == lVar4) {
      puVar5 = (undefined *)(param_1 + 0x48);
      _objc_loadWeakRetained();
      if (puVar5 == (undefined *)0x0) goto LAB_104f1cabc;
      func_0x00010bedbbc0();
    }
    else {
      puVar5 = PTR_PTR_1126b2688;
      _objc_opt_new(PTR_PTR_1126b2688);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2add00(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = puVar5;
      func_0x00010bf21f60(puVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar1);
      _objc_copyWeak(auStack_58,param_1 + 0x48);
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar8);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar9);
      uVar10 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar10);
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar7);
      func_0x00010bf8b840(lVar1);
      _objc_release(lVar1);
      _objc_release(uVar7);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_destroyWeak(auStack_58);
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
  }
LAB_104f1cabc:
  _objc_release(param_2);
  return;
}



/* Entry: 104f1caf4; end: 104f1cb6f;  */

void FUN_104f1caf4(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      func_0x00010bedbbc0(param_1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


