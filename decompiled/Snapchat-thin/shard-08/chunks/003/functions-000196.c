/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f705a4; end: 105f705d7;  */

void FUN_105f705a4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be96e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f705d8; end: 105f7068f;  */

void FUN_105f705d8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf83000(param_2);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105f70690; end: 105f706c3;  */

void FUN_105f70690(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdda540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f706c4; end: 105f70767;  */

void FUN_105f706c4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf83000(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105f70768; end: 105f70793;  */

void FUN_105f70768(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f70794; end: 105f7084b;  */

void FUN_105f70794(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf83000(param_2);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105f7084c; end: 105f7087f;  */

void FUN_105f7084c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beeef20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f70880; end: 105f70a23; -[SCCancelMenuActionSheetEntryPoint _retryBlockWithActionSheet:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f70880(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  lVar2 = param_1 + _DAT_11273b3ac;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105f70a24;
  puStack_78 = &UNK_110843540;
  _objc_copyWeak(auStack_70,auStack_68);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105f70a6c;
  puStack_a0 = &UNK_110852b60;
  _objc_copyWeak(auStack_98,auStack_68);
  _objc_copyWeak(auStack_c0,auStack_68);
  func_0x00010c0bd120(lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010beeef20(param_1);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 105f70a24; end: 105f70a6b;  */

void FUN_105f70a24(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be96ee0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f70a6c; end: 105f70ad3;  */

void FUN_105f70a6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be96f00();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f70ad4; end: 105f70b1b;  */

void FUN_105f70ad4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be96f20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f70b1c; end: 105f70ba3; -[SCCancelMenuActionSheetEntryPoint _retryForConversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f70b1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273b3b0;
  _objc_retain(param_3);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13f360();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f70ba4; end: 105f70c4b; -[SCCancelMenuActionSheetEntryPoint _retryForConversationId:messageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f70ba4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273b3b0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13f680();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f70c4c; end: 105f70d03; -[SCCancelMenuActionSheetEntryPoint _retryForConversationIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f70c4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108fe410);
  puVar1 = PTR_PTR_1126c29a0;
  _objc_alloc(PTR_PTR_1126c29a0);
  func_0x00010c00bbe0();
  param_1 = param_1 + _DAT_11273b3b4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c0d5940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13f880();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f70d04; end: 105f70d13;  */

void FUN_105f70d04(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc35d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0cd8,PTR_s_UUIDWithString__11254e710,param_2);
  return;
}



/* Entry: 105f70d14; end: 105f70eb7; -[SCCancelMenuActionSheetEntryPoint _cancelBlockWithActionSheet:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f70d14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  lVar2 = param_1 + _DAT_11273b3ac;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105f70eb8;
  puStack_78 = &UNK_110843540;
  _objc_copyWeak(auStack_70,auStack_68);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x105f70f70;
  puStack_a0 = &UNK_110852b60;
  _objc_copyWeak(auStack_98,auStack_68);
  _objc_copyWeak(auStack_c0,auStack_68);
  func_0x00010c0bd120(lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010beeef20(param_1);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 105f70eb8; end: 105f70fd7;  */

void FUN_105f70eb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_2;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = puVar1;
  func_0x00010bdda8c0(param_1);
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  _objc_retain(uVar2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdda8a0();
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f70fd8; end: 105f7101f;  */

void FUN_105f70fd8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdda8c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f71020; end: 105f710d7; -[SCCancelMenuActionSheetEntryPoint _cancelForConversationIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f71020(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108fe430);
  puVar1 = PTR_PTR_1126c29a0;
  _objc_alloc(PTR_PTR_1126c29a0);
  func_0x00010c00bbe0();
  param_1 = param_1 + _DAT_11273b3b4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c0d5940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2f0a0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f710d8; end: 105f710e7;  */

void FUN_105f710d8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc35d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0cd8,PTR_s_UUIDWithString__11254e710,param_2);
  return;
}



/* Entry: 105f710e8; end: 105f7118f; -[SCCancelMenuActionSheetEntryPoint _cancelForConversationId:messageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f710e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273b3b0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2f0c0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f71190; end: 105f7128b; -[SCCancelMenuActionSheetEntryPoint _didTapMoreCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f71190(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11273b3ac;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfb79a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = param_1 + lVar4;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bfce500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      return;
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273b3bc);
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bfce500();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273b3b8);
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bfb79a0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf9d620(uVar3,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f7128c; end: 105f712ff; -[SCCancelMenuActionSheetEntryPoint actionSheetDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f7128c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11273b3ac;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf2e740(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f71300; end: 105f71363; -[SCCancelMenuActionSheetEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f71300(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273b3bc,0);
  _objc_storeStrong(param_1 + _DAT_11273b3b8,0);
  _objc_destroyWeak(param_1 + _DAT_11273b3b4);
  _objc_destroyWeak(param_1 + _DAT_11273b3b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273b3ac);
  return;
}



/* Entry: 105f71364; end: 105f71393;  */

void FUN_105f71364(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e33d58;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e33d58,
                      &PTR____CFConstantStringClassReference_110e33d78,0);
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



/* Entry: 105f71394; end: 105f71437; -[SCGenerativeContentPlusUpsellPresenter initWithPlusSubscribeScopeExposer:plusSubscribeScopeServices:] */

undefined1 *
FUN_105f71394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ee4d0;
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



/* Entry: 105f71438; end: 105f714ef; -[SCGenerativeContentPlusUpsellPresenter presentPlusUpsellInContainer:pageType:plusFeatureType:] */

void FUN_105f71438(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1da8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04abe0();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf23e60(uVar2,param_2,param_3,puVar1,param_1,4,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f714f0; end: 105f71537; -[SCGenerativeContentPlusUpsellPresenter plusSubscribeDidDismiss] */

void FUN_105f714f0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105f71538; end: 105f71567; -[SCGenerativeContentPlusUpsellPresenter .cxx_destruct] */

void FUN_105f71538(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f71568; end: 105f716e3; -[SCChatCustomizationHubImageLoaderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f71568(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = param_1;
  func_0x00010be41920();
  if ((int)lVar6 != 0) {
    puVar1 = PTR_PTR_1126c6740;
    _objc_alloc();
    if (param_1 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = param_1 + _DAT_11273b3d0;
      _objc_loadWeakRetained(lVar6);
    }
    lVar2 = lVar6;
    func_0x00010bf4c240(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    FUN_105f716e4(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002f60(puVar1,param_2,lVar2,lVar4);
    lVar7 = (long)_DAT_11273b3c8;
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar1;
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar6);
    lVar6 = param_1;
    func_0x000105f71708(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010bf44b60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,*(undefined8 *)(param_1 + lVar7));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126840(lVar3,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar6);
    return;
  }
  return;
}



/* Entry: 105f716e4; end: 105f7172b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f716e4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11273b3d4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f7172c; end: 105f7180f; -[SCChatCustomizationHubImageLoaderEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f7172c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_50;
  undefined *puStack_48;
  
  if (*(long *)(param_1 + _DAT_11273b3c8) != 0) {
    lVar1 = param_1 + _DAT_11273b3d8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf44b60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2820a0(lVar3);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  puStack_48 = PTR_PTR_1126ee4d8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f71810; end: 105f7187f; -[SCChatCustomizationHubImageLoaderEntryPoint _isLoaderEnabled] */

undefined8 FUN_105f71810(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_105f716e4();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f440();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 105f71880; end: 105f718df; -[SCChatCustomizationHubImageLoaderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f71880(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273b3d8);
  _objc_destroyWeak(param_1 + _DAT_11273b3d4);
  _objc_destroyWeak(param_1 + _DAT_11273b3d0);
  _objc_destroyWeak(param_1 + _DAT_11273b3cc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273b3c8,0);
  return;
}



/* Entry: 105f718e0; end: 105f71b2b; -[SCGenerativeBackgroundsComposerContextFactoryImpl initGrpcServiceFactory:cofStoring:subscriptionInfoProvider:loggingHelper:disclaimerPresenter:disclaimerHandler:plusUpsellPresenter:actionSheetPresenterFactory:generativeContentReportScopeExposer:bitmojiFlatlandConfigProvider:generativeContentType:] */

undefined8 *
FUN_105f718e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_68 = PTR_PTR_1126ee4e0;
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
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    puVar1[10] = param_13;
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



/* Entry: 105f71b2c; end: 105f71c4b; -[SCGenerativeBackgroundsComposerContextFactoryImpl createViewContextWithContainer:presentingViewController:] */

void FUN_105f71b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_4);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105f71c4c;
  puStack_58 = &UNK_110857508;
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010bf5a040(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_78);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105f71c4c; end: 105f71c73;  */

void FUN_105f71c4c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f71c74; end: 105f71c8b;  */

void FUN_105f71c74(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f71c8c; end: 105f7201b; -[SCGenerativeBackgroundsComposerContextFactoryImpl createViewContextWithContainerBlock:presentingViewControllerBlock:] */

void FUN_105f71c8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_80,param_1);
  puVar2 = PTR_PTR_1126c6748;
  _objc_alloc(PTR_PTR_1126c6748);
  lVar3 = param_1;
  func_0x00010bec88c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_105f7201c;
  puStack_98 = &UNK_1108fe460;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_105f72144;
  puStack_c8 = &UNK_110848708;
  uStack_90 = param_3;
  _objc_copyWeak(auStack_b8,auStack_80);
  _objc_retain(param_3);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_105f721a4;
  puStack_f8 = &UNK_1108fe490;
  uStack_c0 = param_3;
  _objc_copyWeak(auStack_e8,auStack_80);
  _objc_retain(param_4);
  lVar4 = param_1;
  uStack_f0 = param_4;
  func_0x00010be0e980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019520(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c1c06c0(puVar2);
  puVar5 = PTR_PTR_1126c6750;
  _objc_alloc(PTR_PTR_1126c6750);
  func_0x00010bff7fe0();
  func_0x00010c170ec0(puVar2);
  _objc_release(puVar5);
  if (*(long *)(param_1 + 0x38) != 0) {
    puStack_140 = puVar1;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_105f72284;
    puStack_128 = &UNK_110848708;
    _objc_copyWeak(auStack_118,auStack_80);
    _objc_retain(param_3);
    uStack_120 = param_3;
    func_0x00010c18fde0(puVar2);
    puStack_170 = puVar1;
    uStack_168 = 0xc2000000;
    uStack_160 = 0x105f7233c;
    puStack_158 = &UNK_1108fe460;
    _objc_copyWeak(auStack_148,auStack_80);
    _objc_retain(param_3);
    uStack_150 = param_3;
    func_0x00010c1e0fc0(puVar2);
    _objc_release(uStack_150);
    _objc_destroyWeak(auStack_148);
    _objc_release(uStack_120);
    _objc_destroyWeak(auStack_118);
  }
  _objc_copyWeak(auStack_178,auStack_80);
  _objc_retain(param_3);
  func_0x00010c1d34c0(puVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_178);
  _objc_release(uStack_f0);
  _objc_destroyWeak(auStack_e8);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f7201c; end: 105f72143;  */

void FUN_105f7201c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,PTR____kCFBooleanFalse_11034ab60);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_105f72120;
  }
  puVar2 = *(undefined **)(param_1 + 0x20);
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR____kCFBooleanFalse_11034ab60;
  if (puVar2 == (undefined *)0x0) {
LAB_105f720e0:
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = *(long *)(puVar1 + 0x30);
    func_0x00010bfcc520();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (**(code **)(lVar3 + 0x10))();
    _objc_release(lVar3);
    puVar5 = PTR____kCFBooleanTrue_11034ab68;
    if ((int)lVar4 != 0) goto LAB_105f720e0;
    puVar6 = puVar1;
    func_0x00010be7b100(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = puVar6;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
LAB_105f72120:
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105f72144; end: 105f721a3;  */

void FUN_105f72144(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    (**(code **)(lVar2 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      func_0x00010c10bae0(*(undefined8 *)(lVar1 + 0x28),param_2,lVar2);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f721a4; end: 105f72283;  */

void FUN_105f721a4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    (**(code **)(lVar2 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_38,lVar2);
    _objc_release(lVar2);
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = auStack_38;
    _objc_loadWeakRetained(puVar4);
    uVar5 = uVar3;
    func_0x00010c0b7620(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105f72284; end: 105f7256b;  */

void FUN_105f72284(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(lVar1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c080120();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      lVar5 = *(long *)(param_1 + 0x20);
      (**(code **)(lVar5 + 0x10))();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 != 0) {
        func_0x00010c10d9a0(*(undefined8 *)(lVar1 + 0x38),param_2,lVar5,9,7);
      }
      _objc_release(lVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f7256c; end: 105f725f3; -[SCGenerativeBackgroundsComposerContextFactoryImpl _featurePlusStatus] */

void FUN_105f7256c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105f725f4; end: 105f7265b;  */

undefined ** FUN_105f725f4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c080120();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010bfd6d20();
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4090;
    if ((int)uVar1 == 0) {
      ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c40a8;
    }
  }
  else {
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4078;
  }
  _objc_release(param_2);
  return ppuVar2;
}



/* Entry: 105f7265c; end: 105f726e3; -[SCGenerativeBackgroundsComposerContextFactoryImpl _subscribedToSnapchatPlus] */

void FUN_105f7265c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105f726e4; end: 105f72713;  */

void FUN_105f726e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c080120(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 105f72714; end: 105f7280b; -[SCGenerativeBackgroundsComposerContextFactoryImpl _presentDisclaimerInContainer:] */

void FUN_105f72714(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c10c620(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010bfb2660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105f7280c; end: 105f728bf;  */

void FUN_105f7280c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (uVar1 = param_2, func_0x00010bf1f3c0(), (int)uVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010c227e00();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_release(lVar2);
  }
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f728c0; end: 105f72907; -[SCGenerativeBackgroundsComposerContextFactoryImpl generativeContentReportDidCompleteWithCancelled:] */

void FUN_105f728c0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x48));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105f72908; end: 105f72997; -[SCGenerativeBackgroundsComposerContextFactoryImpl .cxx_destruct] */

void FUN_105f72908(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 105f72998; end: 105f72a3b; -[SCGenerativeBackgroundsComposerImageLoader initWithContentDelivery:circumstanceEngine:] */

undefined1 *
FUN_105f72998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ee4e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f72a3c; end: 105f72aa7; -[SCGenerativeBackgroundsComposerImageLoader supportedURLSchemes] */

void FUN_105f72a3c(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar1 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e33df8;
  puVar5 = (undefined8 *)0x1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    if (pppuVar1 == (undefined ***)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110e33e38,
                          &PTR____CFConstantStringClassReference_110e33eb8,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *puVar5 = puVar4;
    }
    else {
      func_0x000108543f0c();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = (undefined1 *)pppuVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c25cf40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = puVar3;
      func_0x00010c08fa60();
      if (puVar2 == (undefined1 *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                            &PTR____CFConstantStringClassReference_110e33e38,
                            &PTR____CFConstantStringClassReference_110e33eb8,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *puVar5 = puVar4;
      }
      else {
        puVar2 = (undefined1 *)pppuVar1;
        func_0x00010c0e00e0(pppuVar1,param_2,&PTR____CFConstantStringClassReference_110db1138);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067ec0();
        _objc_release(puVar2);
        _objc_alloc(PTR_PTR_1126c6758);
        func_0x00010bff6640();
      }
      _objc_release(puVar3);
      _objc_release(pppuVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f72aa8; end: 105f72beb; -[SCGenerativeBackgroundsComposerImageLoader requestPayloadWithURL:error:] */

void FUN_105f72aa8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (param_3 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e33e38,
                        &PTR____CFConstantStringClassReference_110e33eb8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puVar4 = (undefined *)0x0;
    *param_4 = puVar3;
  }
  else {
    func_0x000108543f0c();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c25cf40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110e33e38,
                          &PTR____CFConstantStringClassReference_110e33eb8,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      puVar4 = (undefined *)0x0;
      *param_4 = puVar3;
    }
    else {
      lVar1 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db1138);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      _objc_release(lVar1);
      puVar4 = PTR_PTR_1126c6758;
      _objc_alloc(PTR_PTR_1126c6758);
      func_0x00010bff6640();
    }
    _objc_release(lVar2);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105f72bec; end: 105f730bf; -[SCGenerativeBackgroundsComposerImageLoader loadImageWithRequestPayload:parameters:completion:] */

void FUN_105f72bec(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar12 = PTR_PTR_1126c6758;
  _objc_retain(param_3);
  _objc_opt_class(puVar12);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar12);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 == 0) {
    puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,0,puVar12);
    _objc_release(puVar12);
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b08b8;
    _objc_alloc();
    uVar2 = param_3;
    func_0x00010bf14660(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0295e0();
    _objc_release(uVar2);
    func_0x00010bfa1820(param_3);
    uVar2 = param_1;
    func_0x00010be0c580(param_1);
    puVar12 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar12;
    func_0x00010bf64e40((double)uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar5 = PTR_PTR_1126b1058;
    _objc_alloc();
    uVar2 = param_3;
    func_0x00010bf14660(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b360();
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126b1050;
    _objc_alloc();
    uVar2 = param_3;
    func_0x00010bf14660(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010bf14660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05a200();
    _objc_release(uVar7);
    _objc_release(uVar2);
    func_0x00010bfa1820(param_3);
    uVar2 = param_1;
    func_0x00010be6f2a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b1378;
    func_0x00010c0c46a0(puVar3);
    func_0x00010c108220(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126b9620;
    _objc_opt_new();
    func_0x00010bfa1820(param_3);
    func_0x00010bde7a20(param_1);
    func_0x00010c181bc0(puVar9);
    _objc_initWeak(auStack_80,param_1);
    uVar10 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar9;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_3);
    _objc_retain(param_6);
    _objc_retain(puVar3);
    uVar11 = uVar10;
    func_0x00010bf88ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(uVar10);
    puVar12 = PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    _objc_retain(uVar11);
    func_0x00010bffae00(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar11);
    _objc_release(puVar3);
    _objc_release(param_6);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 105f730c0; end: 105f73187;  */

void FUN_105f730c0(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      puVar2 = *(undefined **)(param_1 + 0x20);
      func_0x00010bf14660(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be961a0(lVar1);
    }
    else {
      lVar3 = *(long *)(param_1 + 0x38);
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,0,puVar2);
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f73188; end: 105f7318f;  */

void FUN_105f73188(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 105f73190; end: 105f732ef; -[SCGenerativeBackgroundsComposerImageLoader _retrieveAssetForContentKey:pageInfo:backgroundURL:completion:] */

void FUN_105f73190(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c13e560(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f732f0; end: 105f7334b;  */

void FUN_105f732f0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be276c0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f7334c; end: 105f734f7; -[SCGenerativeBackgroundsComposerImageLoader _handleContentManagerResult:backgroundURL:completion:] */

void FUN_105f7334c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x00010bfcaaa0();
  if (puVar1 != (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,0,puVar1);
    goto LAB_105f734d0;
  }
  puVar1 = param_3;
  func_0x00010c13e900(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = *(code **)(param_5 + 0x10);
    puVar3 = (undefined *)0x0;
    puVar6 = puVar4;
LAB_105f7346c:
    (*pcVar5)(param_5,puVar3,puVar4);
  }
  else {
    puVar3 = PTR_PTR_1126b27a8;
    func_0x00010bfe9800();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      pcVar5 = *(code **)(param_5 + 0x10);
      puVar4 = (undefined *)0x0;
      puVar6 = puVar3;
      goto LAB_105f7346c;
    }
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,0,puVar4);
    _objc_release(puVar4);
    puVar6 = (undefined *)0x0;
  }
  _objc_release(puVar6);
  _objc_release(puVar2);
LAB_105f734d0:
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f734f8; end: 105f7354f; -[SCGenerativeBackgroundsComposerImageLoader _expirationInDatesForFeatureAttribution:] */

long FUN_105f734f8(double param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  if (param_4 - 1U < 2) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e33e78;
    uVar3 = 5;
  }
  else {
    if (param_4 != 0) goto LAB_105f73544;
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e33e58;
    uVar3 = 0x93a80;
  }
  func_0x00010c067f00(uVar1,param_3,ppuVar2,uVar3,0);
  param_1 = (double)(int)uVar1;
LAB_105f73544:
  return (long)param_1;
}



/* Entry: 105f73550; end: 105f73607; -[SCGenerativeBackgroundsComposerImageLoader _pageInfoForFeatureAttribution:] */

undefined * FUN_105f73550(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 < 3) {
    puVar5 = (&PTR_PTR_1108fe530)[param_3];
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  puVar1 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c032f60(puVar1);
  iVar3 = (int)puVar5;
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  uVar4 = 0x19;
  if (iVar3 == 2) {
    uVar4 = 0x1a;
  }
  return (undefined *)(ulong)uVar4;
}



/* Entry: 105f73608; end: 105f73617; -[SCGenerativeBackgroundsComposerImageLoader _contentAttributionForFeatureAttribution:] */

undefined4 FUN_105f73608(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x19;
  if (param_3 == 2) {
    uVar1 = 0x1a;
  }
  return uVar1;
}



/* Entry: 105f73618; end: 105f73647; -[SCGenerativeBackgroundsComposerImageLoader .cxx_destruct] */

void FUN_105f73618(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f73648; end: 105f736bb; -[SCGenerativeBackgroundsComposerLoggingHelper initWithBlizzardLogger:] */

undefined1 * FUN_105f73648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ee4f0;
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



/* Entry: 105f736bc; end: 105f736c7; -[SCGenerativeBackgroundsComposerLoggingHelper pushToValdiMarshaller:] */

undefined8 FUN_105f736bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df158;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x00010af9dcbc();
  return param_3;
}



/* Entry: 105f736c8; end: 105f736cf; -[SCGenerativeBackgroundsComposerLoggingHelper blizzardLogger] */

undefined8 FUN_105f736c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105f736d0; end: 105f736ff; -[SCGenerativeBackgroundsComposerLoggingHelper setBlizzardLogger:] */

void FUN_105f736d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f73700; end: 105f7370b; -[SCGenerativeBackgroundsComposerLoggingHelper .cxx_destruct] */

void FUN_105f73700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f7370c; end: 105f73887; -[SCGenerativeBackgroundsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f7370c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105f73888;
  puStack_68 = &UNK_1108fe548;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c6788;
  _objc_alloc(PTR_PTR_1126c6788);
  func_0x00010bff6680();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11273b414));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105f73888; end: 105f7391f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f73888(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126c6760;
    _objc_alloc(PTR_PTR_1126c6760);
    lVar1 = param_1 + _DAT_11273b418;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffe1e0(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f73920; end: 105f73c5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f73920(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + _DAT_11273b42c;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf3f680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_11273b428;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf1cf00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126c6768;
    _objc_alloc();
    func_0x00010bff8500();
    puVar6 = PTR_PTR_1126c6770;
    _objc_alloc();
    uVar16 = *(undefined8 *)(param_1 + _DAT_11273b438);
    _objc_retain(uVar16);
    lVar1 = param_1;
    func_0x00010be01fe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c062d40(puVar6,param_2,uVar16,lVar1);
    _objc_release(uVar16);
    _objc_release(lVar1);
    puVar7 = PTR_PTR_1126c6778;
    _objc_alloc();
    lVar1 = (long)_DAT_11273b43c;
    uVar16 = *(undefined8 *)(param_1 + _DAT_11273b440);
    _objc_retain(uVar16);
    lVar1 = param_1 + lVar1;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0378a0(puVar7,param_2,uVar16,lVar1);
    _objc_release(uVar16);
    _objc_release(lVar1);
    puVar15 = PTR_PTR_1126c6780;
    _objc_alloc();
    lVar1 = param_1 + _DAT_11273b41c;
    _objc_loadWeakRetained();
    lVar8 = lVar1;
    func_0x00010bfcfa80();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_11273b420;
    _objc_loadWeakRetained();
    lVar10 = lVar2;
    func_0x00010c260800();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010be02000(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + _DAT_11273b430;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010beef000();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + _DAT_11273b444);
    lVar17 = (long)_DAT_11273b434;
    _objc_retain(uVar16);
    lVar17 = param_1 + lVar17;
    _objc_loadWeakRetained();
    lVar14 = lVar17;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfeed40(puVar15,param_2,lVar9,lVar3,lVar10,puVar5,puVar6,lVar11,puVar7,lVar13,uVar16
                        ,lVar14,1);
    _objc_release(uVar16);
    _objc_release(lVar14);
    _objc_release(lVar17);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar2);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 105f73c5c; end: 105f73dff; -[SCGenerativeBackgroundsEntryPoint _disclaimerConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f73c5c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11273b418;
    _objc_loadWeakRetained(param_1);
  }
  lVar1 = param_1;
  func_0x00010bf398e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25d780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e33fb8;
  func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e33fb8,
                      &PTR____CFConstantStringClassReference_110e33fd8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e33ff8;
  func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e33ff8,
                      &PTR____CFConstantStringClassReference_110e33fd8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110e34018;
  func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e34018,
                      &PTR____CFConstantStringClassReference_110e33fd8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e34038;
  func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e34038,
                      &PTR____CFConstantStringClassReference_110e33fd8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110e34058;
  func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e34058,
                      &PTR____CFConstantStringClassReference_110e33fd8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c6790;
  _objc_alloc(PTR_PTR_1126c6790);
  func_0x00010c04f940();
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105f73e00; end: 105f73f0f; -[SCGenerativeBackgroundsEntryPoint _disclaimerHandler] */

void FUN_105f73e00(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126c6798;
  _objc_alloc(PTR_PTR_1126c6798);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105f73f10;
  puStack_58 = &UNK_110848ca8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c017c20(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f73f10; end: 105f74043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105f73f10(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_11273b424;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1e120();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return lVar4;
}



/* Entry: 105f74044; end: 105f7410f; -[SCGenerativeBackgroundsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f74044(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273b444,0);
  _objc_storeStrong(param_1 + _DAT_11273b440,0);
  _objc_destroyWeak(param_1 + _DAT_11273b43c);
  _objc_storeStrong(param_1 + _DAT_11273b438,0);
  _objc_storeStrong(param_1 + _DAT_11273b414,0);
  _objc_destroyWeak(param_1 + _DAT_11273b434);
  _objc_destroyWeak(param_1 + _DAT_11273b430);
  _objc_destroyWeak(param_1 + _DAT_11273b42c);
  _objc_destroyWeak(param_1 + _DAT_11273b428);
  _objc_destroyWeak(param_1 + _DAT_11273b424);
  _objc_destroyWeak(param_1 + _DAT_11273b420);
  _objc_destroyWeak(param_1 + _DAT_11273b41c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273b418);
  return;
}



/* Entry: 105f74110; end: 105f74183; -[SCGenerativeBackgroundsFeatureStatusProvider initWithCircumstanceEngine:] */

undefined1 * FUN_105f74110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ee4f8;
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



/* Entry: 105f74184; end: 105f7419b; -[SCGenerativeBackgroundsFeatureStatusProvider isFeatureEnabled] */

void FUN_105f74184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e34078,0,0);
  return;
}



/* Entry: 105f7419c; end: 105f741b3; -[SCGenerativeBackgroundsFeatureStatusProvider isViewingEnabled] */

void FUN_105f7419c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e34098,0,0);
  return;
}



/* Entry: 105f741b4; end: 105f741bf; -[SCGenerativeBackgroundsFeatureStatusProvider .cxx_destruct] */

void FUN_105f741b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f741c0; end: 105f74233; -[SCGenerativeBackgroundsFlatlandConfigProvider initWithBitmojiFlatlandConfigProvider:] */

undefined1 * FUN_105f741c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ee500;
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



/* Entry: 105f74234; end: 105f742bb; -[SCGenerativeBackgroundsFlatlandConfigProvider getDefaultBitmojiBackgroundIdObservableWithUserId:] */

void FUN_105f74234(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf68de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010b09c8d0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105f742bc; end: 105f74343; -[SCGenerativeBackgroundsFlatlandConfigProvider getDefaultBitmojiSceneIdObservableWithUserId:] */

void FUN_105f742bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf6a200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010b09c8d0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105f74344; end: 105f7434f; -[SCGenerativeBackgroundsFlatlandConfigProvider .cxx_destruct] */

void FUN_105f74344(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f74350; end: 105f744bb; -[SCGenerativeBackgroundsImageLoaderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f74350(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126c6740;
  _objc_alloc();
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11273b458;
    _objc_loadWeakRetained(lVar5);
  }
  lVar2 = lVar5;
  func_0x00010bf4c240(lVar5);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11273b45c;
    _objc_loadWeakRetained(lVar6);
  }
  lVar3 = lVar6;
  func_0x00010bf398e0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002f60(puVar1,param_2,lVar2,lVar3);
  lVar7 = (long)_DAT_11273b450;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar5);
  lVar5 = param_1;
  FUN_105f744bc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bf44b60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,*(undefined8 *)(param_1 + lVar7));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126840(lVar6,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(lVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 105f744bc; end: 105f744df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f744bc(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11273b460);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f744e0; end: 105f745e7; -[SCGenerativeBackgroundsImageLoaderEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f744e0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  lVar1 = param_1 + _DAT_11273b454;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c074580();
  if ((int)lVar4 != 0) {
    lVar4 = *(long *)(param_1 + _DAT_11273b450);
    _objc_release(lVar1);
    if (lVar4 == 0) goto LAB_105f745ac;
    lVar1 = param_1 + _DAT_11273b460;
    _objc_loadWeakRetained(lVar1);
    lVar4 = lVar1;
    func_0x00010bf44b60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2820a0(lVar2);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
LAB_105f745ac:
  puStack_48 = PTR_PTR_1126ee508;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f745e8; end: 105f74647; -[SCGenerativeBackgroundsImageLoaderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f745e8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273b460);
  _objc_destroyWeak(param_1 + _DAT_11273b45c);
  _objc_destroyWeak(param_1 + _DAT_11273b458);
  _objc_destroyWeak(param_1 + _DAT_11273b454);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273b450,0);
  return;
}



/* Entry: 105f74648; end: 105f7472b; -[SCGenerativeChatWallpapersServiceProvider provide] */

void FUN_105f74648(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c67a0;
  _objc_alloc(PTR_PTR_1126c67a0);
  func_0x00010c004580();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f7472c; end: 105f74a23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f7472c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + _DAT_11273b47c;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf3f680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_11273b478;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf1cf00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126c6768;
    _objc_alloc();
    func_0x00010bff8500();
    puVar6 = PTR_PTR_1126c6770;
    _objc_alloc();
    uVar14 = *(undefined8 *)(param_1 + _DAT_11273b484);
    _objc_retain(uVar14);
    lVar1 = param_1;
    func_0x00010be01fe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c062d40(puVar6,param_2,uVar14,lVar1);
    _objc_release(uVar14);
    _objc_release(lVar1);
    puVar7 = PTR_PTR_1126c6778;
    _objc_alloc();
    lVar1 = (long)_DAT_11273b488;
    uVar14 = *(undefined8 *)(param_1 + _DAT_11273b48c);
    _objc_retain(uVar14);
    lVar1 = param_1 + lVar1;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0378a0(puVar7,param_2,uVar14,lVar1);
    _objc_release(uVar14);
    _objc_release(lVar1);
    puVar15 = PTR_PTR_1126c6780;
    _objc_alloc(PTR_PTR_1126c6780);
    lVar1 = param_1 + _DAT_11273b46c;
    _objc_loadWeakRetained();
    lVar8 = lVar1;
    func_0x00010bfcfa80();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_11273b470;
    _objc_loadWeakRetained();
    lVar10 = lVar2;
    func_0x00010c260800();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010be02000(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + _DAT_11273b480;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010beef000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfeed40(puVar15,param_2,lVar9,lVar3,lVar10,puVar5,puVar6,lVar11,puVar7,lVar13,
                        *(undefined8 *)(param_1 + _DAT_11273b490),0,2);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar2);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 105f74a24; end: 105f74bc7; -[SCGenerativeChatWallpapersServiceProvider _disclaimerConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f74a24(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11273b468;
    _objc_loadWeakRetained(param_1);
  }
  lVar1 = param_1;
  func_0x00010bf398e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25d780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e33fb8;
  func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e33fb8,
                      &PTR____CFConstantStringClassReference_110e33fd8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e340b8;
  func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e340b8,
                      &PTR____CFConstantStringClassReference_110e33fd8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110e34018;
  func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e34018,
                      &PTR____CFConstantStringClassReference_110e33fd8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e34038;
  func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e34038,
                      &PTR____CFConstantStringClassReference_110e33fd8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110e34058;
  func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e34058,
                      &PTR____CFConstantStringClassReference_110e33fd8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c6790;
  _objc_alloc(PTR_PTR_1126c6790);
  func_0x00010c04f940();
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105f74bc8; end: 105f74cd7; -[SCGenerativeChatWallpapersServiceProvider _disclaimerHandler] */

void FUN_105f74bc8(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126c6798;
  _objc_alloc(PTR_PTR_1126c6798);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105f74cd8;
  puStack_58 = &UNK_110848ca8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c017c20(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f74cd8; end: 105f74e0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105f74cd8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_11273b474;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1e120();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return lVar4;
}



/* Entry: 105f74e0c; end: 105f74ec7; -[SCGenerativeChatWallpapersServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f74e0c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273b490,0);
  _objc_storeStrong(param_1 + _DAT_11273b48c,0);
  _objc_destroyWeak(param_1 + _DAT_11273b488);
  _objc_storeStrong(param_1 + _DAT_11273b484,0);
  _objc_destroyWeak(param_1 + _DAT_11273b480);
  _objc_destroyWeak(param_1 + _DAT_11273b47c);
  _objc_destroyWeak(param_1 + _DAT_11273b478);
  _objc_destroyWeak(param_1 + _DAT_11273b474);
  _objc_destroyWeak(param_1 + _DAT_11273b470);
  _objc_destroyWeak(param_1 + _DAT_11273b46c);
  _objc_destroyWeak(param_1 + _DAT_11273b468);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273b464);
  return;
}



/* Entry: 105f74ec8; end: 105f74f4f; -[SCGenerativeBackgroundsImageRequest initWithBackgroundURL:feature:] */

undefined1 *
FUN_105f74ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ee510;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f74f50; end: 105f74f73; -[SCGenerativeBackgroundsImageRequest copyWithZone:] */

undefined8 FUN_105f74f50(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105f74f74; end: 105f74fdf; -[SCGenerativeBackgroundsImageRequest hash] */

undefined8 * FUN_105f74f74(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lStack_30 = (long)*(int *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105f75064;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(int *)(puVar2 + 1) != *(int *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_105f75064;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_105f75064;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_105f75064:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 105f74fe0; end: 105f7507f; -[SCGenerativeBackgroundsImageRequest isEqual:] */

long FUN_105f74fe0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105f75064;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(int *)(param_1 + 8) != *(int *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_105f75064;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_105f75064;
    }
  }
  lVar3 = 1;
LAB_105f75064:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105f75080; end: 105f75087; -[SCGenerativeBackgroundsImageRequest backgroundURL] */

undefined8 FUN_105f75080(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105f75088; end: 105f7508f; -[SCGenerativeBackgroundsImageRequest feature] */

undefined4 FUN_105f75088(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


