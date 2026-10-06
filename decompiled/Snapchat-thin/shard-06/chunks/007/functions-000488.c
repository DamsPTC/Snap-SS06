/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d50b18; end: 104d50bcf; -[SCFriendmojiSettingsFlow _updatePolicy:] */

void FUN_104d50b18(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x18);
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
      if ((uVar1 & 1) != 0) goto LAB_104d50bbc;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = param_3;
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  }
LAB_104d50bbc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d50bd0; end: 104d50c17; -[SCFriendmojiSettingsFlow .cxx_destruct] */

void FUN_104d50bd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d50c18; end: 104d50dbf; -[SCFriendmojiUserPolicySettingsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d50c18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126afc88;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112711d54;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfb9ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016060(puVar1,param_2,lVar3);
  lVar7 = (long)_DAT_112711d58;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c2662e0(*(undefined8 *)(param_1 + lVar7));
  puVar1 = PTR_PTR_1126afc90;
  _objc_alloc(PTR_PTR_1126afc90);
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bfb9aa0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112711d5c;
  _objc_loadWeakRetained(lVar2);
  lVar7 = lVar2;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112711d60;
  _objc_loadWeakRetained(lVar3);
  lVar5 = lVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00a780(puVar1,param_2,param_1,uVar6,lVar4,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(uVar6);
  param_1 = param_1 + _DAT_112711d64;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d50dc0; end: 104d50e87; -[SCFriendmojiUserPolicySettingsEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d50dc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126afc98;
  func_0x00010bf0c040();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112711d68;
  _objc_retain();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104d50e88;
  puStack_40 = &UNK_110842e18;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  func_0x00010bdfb800(param_1,param_2,&puStack_58);
  puVar3 = puVar1;
  func_0x00010c117720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d50e88; end: 104d50e8f;  */

void FUN_104d50e88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 104d50e90; end: 104d50fc7; -[SCFriendmojiUserPolicySettingsEntryPoint settingsFriendmojiRowProvider:presentWhoCanWithUIContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d50e90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711d58);
  func_0x00010bfb9ae0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = param_4;
  _objc_retain(param_4);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d50fc8; end: 104d5104f;  */

void FUN_104d50fc8(long param_1,undefined *param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  if (param_2 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126afca0;
    func_0x00010bfb9b80(PTR_PTR_1126afca0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_2);
    puVar1 = param_2;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd07e0();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d51050; end: 104d510ff; -[SCFriendmojiUserPolicySettingsEntryPoint friendmojiPolicySettingsViewController:didSelectPolicy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d51050(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711d58);
  func_0x00010bf7aca0(uVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar1,param_2,&PTR___NSConcreteGlobalBlock_11084ce78,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d51100; end: 104d51107; -[SCFriendmojiUserPolicySettingsEntryPoint friendmojiPolicySettingsViewControllerShouldDetach:] */

void FUN_104d51100(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfb810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__detachWithCompletion__11255c7a0,0);
  return;
}



/* Entry: 104d51108; end: 104d5115f; -[SCFriendmojiUserPolicySettingsEntryPoint friendmojiPolicySettingsViewControllerLeftSwipeDidSucceed:] */

void FUN_104d51108(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104d51160;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bcbe2c4("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104d51160; end: 104d51177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d51160(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112711d6c);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112711d6c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d51178; end: 104d5121f; -[SCFriendmojiUserPolicySettingsEntryPoint _attachToUIContainer:initialPolicy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d51178(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar3 = (long)_DAT_112711d6c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_retain(param_4);
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126afcb0;
    _objc_alloc(PTR_PTR_1126afcb0);
    func_0x00010c00ada0();
    _objc_release(param_4);
    func_0x00010bf0c980(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d51220; end: 104d512a7; -[SCFriendmojiUserPolicySettingsEntryPoint _detachWithCompletion:] */

void FUN_104d51220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104d512a8;
  puStack_38 = &UNK_11084aaa8;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104d512a8; end: 104d5136b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d512a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar3 = (long)_DAT_112711d6c;
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + lVar3);
  _objc_retain(lVar2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3) = 0;
  _objc_release(uVar1);
  if (lVar2 == 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    }
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104d5136c;
    puStack_40 = &UNK_110849530;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    uStack_38 = uVar1;
    func_0x00010bf6f440(lVar2,param_2,&puStack_58);
    _objc_release(uStack_38);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 104d5136c; end: 104d5137f;  */

void FUN_104d5136c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104d51378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 104d51380; end: 104d5140b; -[SCFriendmojiUserPolicySettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d51380(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112711d60);
  _objc_destroyWeak(param_1 + _DAT_112711d5c);
  _objc_destroyWeak(param_1 + _DAT_112711d54);
  _objc_destroyWeak(param_1 + _DAT_112711d64);
  _objc_destroyWeak(param_1 + _DAT_112711d70);
  _objc_storeStrong(param_1 + _DAT_112711d68,0);
  _objc_storeStrong(param_1 + _DAT_112711d6c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112711d58,0);
  return;
}



/* Entry: 104d5140c; end: 104d5144b;  */

void FUN_104d5140c(long param_1)

{
  if (param_1 == 1) {
    func_0x00010bfb9b80(PTR_PTR_1126afca0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0e8b40();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d5144c; end: 104d51523; -[SCFriendmojiPolicySettingsViewController initWithDelegate:selectedPolicy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104d5144c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e4068;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112711d74),param_3);
    lVar3 = (long)_DAT_112711d78;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112711d7c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d51524; end: 104d51aa7; -[SCFriendmojiPolicySettingsViewController loadView] */

void FUN_104d51524(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
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
  undefined *puVar23;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = PTR_PTR_1126e4068;
  uStack_a0 = param_1;
  _objc_msgSendSuper2(&uStack_a0,PTR_s_loadView_112604be0);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc(PTR__OBJC_CLASS___UITableView_1126aed40);
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c2116c0(param_1);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar4);
  _objc_release(puVar3);
  uVar4 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189840();
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e9a0();
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eeb20(0x4046000000000000);
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167740();
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0();
  _objc_release(uVar4);
  _objc_release(puVar3);
  uVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  uStack_90 = uVar8;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  uStack_88 = uVar13;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_1;
  uStack_80 = uVar18;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar22;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(param_1);
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
  _objc_release(uVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db0cd8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db0cd8,
                      &PTR____CFConstantStringClassReference_110db0c98,0);
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



/* Entry: 104d51aa8; end: 104d51aab; -[SCFriendmojiPolicySettingsViewController getTitle] */

void FUN_104d51aa8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db0cd8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db0cd8,
                      &PTR____CFConstantStringClassReference_110db0c98,0);
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



/* Entry: 104d51aac; end: 104d51aeb; -[SCFriendmojiPolicySettingsViewController leftButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d51aac(long param_1)

{
  func_0x00010be997c0();
  param_1 = param_1 + _DAT_112711d74;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb98a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d51aec; end: 104d51b2b; -[SCFriendmojiPolicySettingsViewController leftSwipeSucceed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d51aec(long param_1)

{
  func_0x00010be997c0();
  param_1 = param_1 + _DAT_112711d74;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb9880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d51b2c; end: 104d51bf7; -[SCFriendmojiPolicySettingsViewController _savePolicyIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d51b2c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + _DAT_112711d7c);
  uVar3 = *(ulong *)(param_1 + _DAT_112711d78);
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  if (uVar2 == uVar3) {
    _objc_release(uVar3);
  }
  else {
    if (uVar3 == 0) {
      _objc_release(uVar2);
    }
    else {
      uVar1 = uVar2;
      func_0x00010c071ae0(uVar2,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar1 & 1) != 0) {
        return;
      }
    }
    uVar2 = param_1 + _DAT_112711d74;
    _objc_loadWeakRetained(uVar2);
    func_0x00010bfb9860();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d51bf8; end: 104d51efb; -[SCFriendmojiPolicySettingsViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d51bf8(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010bf6e060();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
    _objc_alloc(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
    func_0x00010c04ec80();
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c26c280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c26c280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(puVar3);
  _objc_release(puVar2);
  lVar4 = param_4;
  func_0x00010c142240();
  FUN_104d5140c();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_104d51efc;
  uStack_60 = 0x104d51f0c;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010c0bf280();
  puVar2 = puVar1;
  func_0x00010c26c280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c26c280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(puVar2);
  func_0x00010c1fbac0(puVar1);
  lVar5 = *(long *)(param_1 + _DAT_112711d7c);
  _objc_retain(lVar5);
  _objc_retain(lVar4);
  if ((lVar5 != lVar4) && (lVar4 != 0)) {
    func_0x00010c071ae0(lVar5);
  }
  _objc_release(lVar4);
  _objc_release(lVar5);
  func_0x00010c17c180(puVar1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(ppuStack_58);
  _objc_release(lVar4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d51efc; end: 104d51f13;  */

void FUN_104d51efc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d51f14; end: 104d51f8b;  */

void FUN_104d51f14(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  FUN_104d521ec();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d51f8c; end: 104d51f8f;  */

void FUN_104d51f8c(void)

{
  return;
}



/* Entry: 104d51f90; end: 104d51f97; -[SCFriendmojiPolicySettingsViewController tableView:numberOfRowsInSection:] */

undefined8 FUN_104d51f90(void)

{
  return 2;
}



/* Entry: 104d51f98; end: 104d5202f; -[SCFriendmojiPolicySettingsViewController tableView:heightForHeaderInSection:] */

undefined8
FUN_104d51f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_s_class_1125ac0b8;
  puVar2 = &uStack_50;
  puStack_48 = PTR_PTR_1126e4068;
  uStack_50 = param_2;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&uStack_50,puVar1);
  puVar3 = (undefined1 *)puVar2;
  func_0x000104d52234();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0780(puVar2);
  _objc_release(param_4);
  _objc_release(puVar3);
  return param_1;
}



/* Entry: 104d52030; end: 104d520a3; -[SCFriendmojiPolicySettingsViewController tableView:viewForHeaderInSection:] */

void FUN_104d52030(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4068;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_class_1125ac0b8);
  puVar2 = (undefined1 *)puVar1;
  func_0x000104d52234();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29cd60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d520a4; end: 104d5213f; -[SCFriendmojiPolicySettingsViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d520a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010bf6e880(param_3,param_2,param_4,1);
  uVar1 = param_4;
  func_0x00010c142240();
  _objc_release(param_4);
  FUN_104d5140c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711d7c);
  *(undefined8 *)(param_1 + _DAT_112711d7c) = uVar1;
  _objc_release(uVar2);
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d52140; end: 104d5214f; -[SCFriendmojiPolicySettingsViewController tableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d52140(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112711d80);
}



/* Entry: 104d52150; end: 104d5218f; -[SCFriendmojiPolicySettingsViewController setTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d52150(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112711d80;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d52190; end: 104d521eb; -[SCFriendmojiPolicySettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d52190(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112711d80,0);
  _objc_storeStrong(param_1 + _DAT_112711d78,0);
  _objc_storeStrong(param_1 + _DAT_112711d7c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112711d74);
  return;
}



/* Entry: 104d521ec; end: 104d52263;  */

void FUN_104d521ec(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db0c78;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db0c78,
                      &PTR____CFConstantStringClassReference_110db0c98,0);
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



/* Entry: 104d52264; end: 104d522db; -[SCLiveMirrorNavigator initWithRuntime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104d52264(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4070;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithRuntime__1125edce0,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112711d84),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d522dc; end: 104d523ef; -[SCLiveMirrorNavigator presentComponentWithPage:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d522dc(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_112711d84;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf5e500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_initWeak(auStack_48,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d523f0;
  puStack_70 = &UNK_110844dd0;
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_retain(lVar2);
  lStack_60 = lVar2;
  uStack_50 = param_4;
  func_0x000100162d98("APPSTORE",&puStack_88);
  _objc_release(lStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 104d523f0; end: 104d52427;  */

void FUN_104d523f0(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be057a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d52428; end: 104d5253b; -[SCLiveMirrorNavigator pushComponentWithPage:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d52428(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_112711d84;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf5e500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_initWeak(auStack_48,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d5253c;
  puStack_70 = &UNK_110844dd0;
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_retain(lVar2);
  lStack_60 = lVar2;
  uStack_50 = param_4;
  func_0x000100162d98("APPSTORE",&puStack_88);
  _objc_release(lStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 104d5253c; end: 104d52573;  */

void FUN_104d5253c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be057c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d52574; end: 104d52637; -[SCLiveMirrorNavigator popToSelfWithAnimated:] */

void FUN_104d52574(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  undefined1 uStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x104d52604;
  puStack_40 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_38,auStack_28);
  uStack_30 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104d52638; end: 104d526f7; -[SCLiveMirrorNavigator _doPresentComponentWithPage:sourceComponentContext:animated:] */

void FUN_104d52638(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0b7040(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0799a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  if (lVar2 == 0) {
    func_0x00010c1c8b80(uVar1,param_2,0);
  }
  func_0x00010c0b8200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d526f8; end: 104d527cf; -[SCLiveMirrorNavigator _doPushComponentWithPage:sourceComponentContext:animated:] */

void FUN_104d526f8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0b8200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010be057a0(param_1,param_2,param_3,param_4,param_5);
    _objc_release(param_4);
  }
  else {
    func_0x00010c0b7040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(param_3);
    func_0x00010c11c520(lVar2,param_2,param_1,param_5);
    param_3 = param_1;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104d527d0; end: 104d52887; -[SCLiveMirrorNavigator _doPopToSelfWithAnimated:] */

void FUN_104d527d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c0b8200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c0b8200(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar1 = param_1;
    func_0x00010c10f940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84b00();
    _objc_release(lVar1);
  }
  else {
    func_0x00010c1039c0(lVar2,param_2,param_1,param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104d52888; end: 104d52acf; -[SCLiveMirrorNavigator makeContainerViewControllerWithPage:parentComposerContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d52888(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126afcc0;
  _objc_alloc(PTR_PTR_1126afcc0);
  lVar10 = (long)_DAT_112711d84;
  lVar2 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c040b80(puVar1);
  _objc_release(lVar2);
  uVar3 = param_3;
  func_0x00010bf443a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0d3c80();
  _objc_release(uVar3);
  func_0x00010c1d0640(uVar4);
  puVar5 = PTR_PTR_1126afcc8;
  _objc_alloc(PTR_PTR_1126afcc8);
  uVar3 = param_3;
  func_0x00010bf44480(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf445a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf51e00(uVar4);
  param_1 = param_1 + lVar10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c000640(puVar5);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  if (param_4 != 0) {
    puVar8 = puVar5;
    func_0x00010c295200(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d90a0();
    _objc_release(puVar8);
  }
  puVar8 = PTR_PTR_1126afcd0;
  _objc_alloc();
  func_0x00010c0601e0();
  puVar9 = puVar8;
  _objc_opt_respondsToSelector();
  if (((ulong)puVar9 & 1) != 0) {
    uVar3 = param_3;
    func_0x00010c239260(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c202620(puVar8);
    _objc_release(uVar3);
  }
  puVar9 = puVar8;
  _objc_opt_respondsToSelector(puVar8,PTR_s_setTitle__1126632b8);
  if (((ulong)puVar9 & 1) != 0) {
    uVar3 = param_3;
    func_0x00010c0fe2c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar8);
    _objc_release(uVar3);
  }
  func_0x00010c1c1bc0(puVar1);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 104d52ad0; end: 104d52adf; -[SCLiveMirrorNavigator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d52ad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112711d84);
  return;
}



/* Entry: 104d52ae0; end: 104d52aeb; +[SCCBitmojiBitmojiCreateFlowComponent componentPath] */

undefined ** FUN_104d52ae0(void)

{
  return &PTR____CFConstantStringClassReference_110db0d58;
}



/* Entry: 104d52aec; end: 104d52b1f; -[SCCBitmojiBitmojiCreateFlowComponent initWithViewModel:componentContext:runtime:] */

void FUN_104d52aec(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4078;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 104d52b20; end: 104d52b6f; -[SCCBitmojiBitmojiCreateFlowComponent setViewModel:] */

void FUN_104d52b20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d52b70; end: 104d52bb3; -[SCCBitmojiBitmojiCreateFlowComponent viewModel] */

void FUN_104d52b70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d52bb4; end: 104d52bcf; +[SCCBitmojiCreateFlowLaunchConfig valdiMarshallableObjectDescriptor] */

void FUN_104d52bb4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_optionIds_11084cee8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 104d52bd0; end: 104d52bdb; +[SCCBitmojiFinishMyAvatarComponent componentPath] */

undefined ** FUN_104d52bd0(void)

{
  return &PTR____CFConstantStringClassReference_110db0d78;
}



/* Entry: 104d52bdc; end: 104d52c0f; -[SCCBitmojiFinishMyAvatarComponent initWithViewModel:componentContext:runtime:] */

void FUN_104d52bdc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4080;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 104d52c10; end: 104d52c5f; -[SCCBitmojiFinishMyAvatarComponent setViewModel:] */

void FUN_104d52c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d52c60; end: 104d52ca3; -[SCCBitmojiFinishMyAvatarComponent viewModel] */

void FUN_104d52c60(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d52ca4; end: 104d52caf; +[SCCBitmojiLiveMirrorComponent componentPath] */

undefined ** FUN_104d52ca4(void)

{
  return &PTR____CFConstantStringClassReference_110db0d98;
}



/* Entry: 104d52cb0; end: 104d52ce3; -[SCCBitmojiLiveMirrorComponent initWithViewModel:componentContext:runtime:] */

void FUN_104d52cb0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4088;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 104d52ce4; end: 104d52d33; -[SCCBitmojiLiveMirrorComponent setViewModel:] */

void FUN_104d52ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d52d34; end: 104d52d77; -[SCCBitmojiLiveMirrorComponent viewModel] */

void FUN_104d52d34(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d52d78; end: 104d52ee3; -[SCCBitmojiBitmojiCreateFlowComponentContext initWithNavigator:alertPresenter:nativeBuilderService:pageSource:handleExit:networkClient:actionSheetPresenter:getTraitsFromSelfie:useSkipAsExit:setCameraStarted:] */

undefined8 *
FUN_104d52d78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
             undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_13);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_10;
  _objc_retainBlock();
  _objc_release(param_10);
  uVar2 = param_13;
  _objc_retainBlock();
  _objc_release(param_13);
  puStack_68 = PTR_PTR_1126e4090;
  puVar3 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x000104d5306c();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  return puVar3;
}



/* Entry: 104d52ee4; end: 104d52f17; +[SCCBitmojiBitmojiCreateFlowComponentContext valdiMarshallableObjectDescriptor] */

void FUN_104d52ee4(undefined8 *param_1)

{
  *param_1 = &PTR_s_avatarPreviewViewFactory_11084cf60;
  param_1[1] = &PTR_s_SCValdiViewFactory_11084d098;
  param_1[2] = &PTR_s_ol_o_11084cf18;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104d52f18; end: 104d52f77;  */

void FUN_104d52f18(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  FUN_104d5305c(FUN_104d53000);
  _objc_retainBlock(&puStack_48);
  func_0x000104d53080();
  func_0x000104d5306c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d52f78; end: 104d52f9f;  */

undefined8 FUN_104d52f78(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 104d52fa0; end: 104d52fff;  */

void FUN_104d52fa0(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  FUN_104d5305c(0x104d5302c);
  _objc_retainBlock(&puStack_48);
  func_0x000104d53080();
  func_0x000104d5306c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d53000; end: 104d5305b;  */

void FUN_104d53000(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 104d5305c; end: 104d5308b;  */

void FUN_104d5305c(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104d5308c; end: 104d53143; -[SCCBitmojiFinishMyAvatarContext initWithOptionIds:launchCreateFlow:exit:] */

undefined8 *
FUN_104d5308c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  puStack_48 = PTR_PTR_1126e4098;
  puVar2 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_4);
  return puVar2;
}



/* Entry: 104d53144; end: 104d53163; +[SCCBitmojiFinishMyAvatarContext valdiMarshallableObjectDescriptor] */

void FUN_104d53144(undefined8 *param_1)

{
  *param_1 = &PTR_s_optionIds_11084d108;
  param_1[1] = &PTR_s_SCCBitmojiCreateFlowLaunchConfig_11084d168;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104d53164; end: 104d53367; -[SCCBitmojiLiveMirrorComponentContext initWithGrpcServiceFactory:navigator:alertPresenter:cofStore:nativeBuilderService:isUAGatingEnabled:pageSource:handleExit:networkClient:blizzardLogger:sessionId:cameraViewFactory:getTraitsFromSelfie:useSkipAsExit:setCameraStarted:] */

undefined8 *
FUN_104d53164(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined4 param_16,
             undefined4 param_17,undefined8 param_18)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_18);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_15;
  _objc_retainBlock();
  _objc_release(param_15);
  _objc_retainBlock();
  func_0x000104d534f0();
  puStack_70 = PTR_PTR_1126e40a0;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  func_0x000104d534f0();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_18);
  _objc_release(uVar1);
  _objc_release(param_10);
  return puVar2;
}



/* Entry: 104d53368; end: 104d5339b; +[SCCBitmojiLiveMirrorComponentContext valdiMarshallableObjectDescriptor] */

void FUN_104d53368(undefined8 *param_1)

{
  *param_1 = &PTR_s_avatarPreviewViewFactory_11084d1c0;
  param_1[1] = &PTR_s_SCValdiViewFactory_11084d388;
  param_1[2] = &PTR_s_ol_o_11084d178;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104d5339c; end: 104d533fb;  */

void FUN_104d5339c(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  FUN_104d534e0(FUN_104d53484);
  _objc_retainBlock(&puStack_48);
  func_0x000104d53504();
  func_0x000104d534f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d533fc; end: 104d53423;  */

undefined8 FUN_104d533fc(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 104d53424; end: 104d53483;  */

void FUN_104d53424(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  FUN_104d534e0(0x104d534b0);
  _objc_retainBlock(&puStack_48);
  func_0x000104d53504();
  func_0x000104d534f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d53484; end: 104d534df;  */

void FUN_104d53484(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 104d534e0; end: 104d5350f;  */

void FUN_104d534e0(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104d53510; end: 104d535b3; -[SCBitmojiFlatlandCtaPromoManagerImpl initWithConfigProvider:preferences:] */

undefined1 *
FUN_104d53510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e40a8;
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



/* Entry: 104d535b4; end: 104d536cb; -[SCBitmojiFlatlandCtaPromoManagerImpl clearBackgroundsCtaPromo] */

void FUN_104d535b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf14080();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104d536cc; end: 104d5377f;  */

void FUN_104d536cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c0b8600(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d53780; end: 104d53817;  */

undefined * FUN_104d53780(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c298be0(param_2);
  _objc_release(param_2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde0200(param_1);
  _objc_release(puVar1);
  _objc_release(param_1);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 104d53818; end: 104d5392f; -[SCBitmojiFlatlandCtaPromoManagerImpl clearScenesCtaPromo] */

void FUN_104d53818(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14faa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104d53930; end: 104d539e3;  */

void FUN_104d53930(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c0b8600(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d539e4; end: 104d53a7b;  */

undefined * FUN_104d539e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c298be0(param_2);
  _objc_release(param_2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde0200(param_1);
  _objc_release(puVar1);
  _objc_release(param_1);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 104d53a7c; end: 104d53b0b; -[SCBitmojiFlatlandCtaPromoManagerImpl shouldShowBackgroundContentBadgesForVersion:] */

bool FUN_104d53a7c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5d400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067fc0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar4 < param_3;
}



/* Entry: 104d53b0c; end: 104d53b9b; -[SCBitmojiFlatlandCtaPromoManagerImpl shouldShowSceneContentBadgesForVersion:] */

bool FUN_104d53b0c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5d400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067fc0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar4 < param_3;
}



/* Entry: 104d53b9c; end: 104d53caf; -[SCBitmojiFlatlandCtaPromoManagerImpl _clearCtaPromoWithCtaType:value:] */

void FUN_104d53b9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = *(undefined **)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010bf5d400();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar5);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar3,param_2,param_4,puVar1);
  _objc_release(param_4);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c186700();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104d53cb0; end: 104d53cdf; -[SCBitmojiFlatlandCtaPromoManagerImpl .cxx_destruct] */

void FUN_104d53cb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d53ce0; end: 104d53df7; -[SCBitmojiFlatlandCtaPromoServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d53ce0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afcd8;
  _objc_alloc(PTR_PTR_1126afcd8);
  func_0x00010c006d00();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112711d9c);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104d53df8; end: 104d53e37;  */

void FUN_104d53df8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdec960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104d53e38; end: 104d53ef3; -[SCBitmojiFlatlandCtaPromoServicesEntryPoint _createCtaPromoManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d53e38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126afce0;
  _objc_alloc(PTR_PTR_1126afce0);
  lVar2 = param_1 + _DAT_112711d90;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112711d94;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0014e0(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d53ef4; end: 104d53f47; -[SCBitmojiFlatlandCtaPromoServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d53ef4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112711d9c,0);
  _objc_destroyWeak(param_1 + _DAT_112711d90);
  _objc_destroyWeak(param_1 + _DAT_112711d94);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112711d98);
  return;
}



/* Entry: 104d53f48; end: 104d53fbb; -[SCBitmojiFlatlandUserServiceOpsMetricsLogger initWithGraphene:] */

undefined1 * FUN_104d53f48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e40b0;
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



/* Entry: 104d53fbc; end: 104d54047; -[SCBitmojiFlatlandUserServiceOpsMetricsLogger logUpdateFlatlandInfoSuccess] */

void FUN_104d53fbc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126afce8;
  func_0x00010c285d80(PTR_PTR_1126afce8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104d54048; end: 104d541b7; -[SCBitmojiFlatlandUserServiceOpsMetricsLogger logUpdateFlatlandInfoFailedWithErorr:] */

void FUN_104d54048(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_PTR_1126afce8;
  _objc_retain(param_3);
  func_0x00010c285d80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dabe78;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4;
  }
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110db0db8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf3ec40();
  _objc_release(param_3);
  func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110db0df8);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110db0dd8,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 104d541b8; end: 104d541c3; -[SCBitmojiFlatlandUserServiceOpsMetricsLogger .cxx_destruct] */

void FUN_104d541b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d541c4; end: 104d5437b; -[SCBitmojiFlatlandUserServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d541c4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104d5437c;
  puStack_78 = &UNK_11084d4a8;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afcf0;
  _objc_alloc();
  func_0x00010c018080();
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_98,auStack_68);
  _objc_retain(puVar2);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126afcf8;
  _objc_alloc(PTR_PTR_1126afcf8);
  func_0x00010c013760();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112711da4));
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 104d5437c; end: 104d54423;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5437c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_112711dac;
    _objc_loadWeakRetained(lVar3);
  }
  lVar1 = lVar3;
  func_0x00010bfcdfa0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(param_1);
  lVar3 = lVar1;
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf1b600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104d54424; end: 104d5446b;  */

void FUN_104d54424(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdedd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104d5446c; end: 104d5454b; -[SCBitmojiFlatlandUserServicesEntryPoint _createFlatlandUserUpdaterWithOpsMetricsLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5446c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126afd00;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + _DAT_112711da8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf1b5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = 0;
  if (param_1 != 0) {
    lVar4 = param_1 + _DAT_112711db0;
    _objc_loadWeakRetained(lVar4);
  }
  lVar5 = lVar4;
  func_0x00010bfcfa00(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8020(puVar1,param_2,lVar3,lVar5,param_3);
  _objc_release(param_3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d5454c; end: 104d5459f; -[SCBitmojiFlatlandUserServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5454c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112711da4,0);
  _objc_destroyWeak(param_1 + _DAT_112711db0);
  _objc_destroyWeak(param_1 + _DAT_112711dac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112711da8);
  return;
}



/* Entry: 104d545a0; end: 104d5470b; -[SCBitmojiFlatlandUserUpdater initWithBitmojiFlatlandInfoMutator:grpcClientFactory:opsMetricsLogger:] */

undefined8 *
FUN_104d545a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e40b8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    puVar4 = PTR_PTR_1126ae720;
    _objc_retain(param_4);
    _objc_retain(puVar3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_release(param_4);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}


