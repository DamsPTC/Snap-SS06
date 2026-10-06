/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10603f0c4; end: 10603f3d3; -[SCPlusMyProfileSectionActionHandler _launchPinBestFriendAlert] */

undefined1 * FUN_10603f0c4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc();
  lVar2 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40();
  _objc_release(lVar2);
  _objc_initWeak(auStack_80,param_1);
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar13);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010901d7c4();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126aed70;
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar5 = uVar4;
  func_0x00010603fbb8();
  _objc_retainAutoreleasedReturnValue();
  uStack_d0 = uVar4;
  func_0x00010c14de00(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10603f3d4;
  puStack_a8 = &UNK_110909210;
  puVar12 = auStack_80;
  _objc_copyWeak(auStack_88,puVar12);
  uStack_a0 = uVar13;
  uStack_98 = uVar3;
  puStack_90 = puVar1;
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(uVar5);
  puVar8 = PTR_PTR_1126aed70;
  func_0x00010603fbd0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar9 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar10 = puVar9;
  func_0x00010603fba0();
  _objc_retainAutoreleasedReturnValue();
  uStack_d0 = uVar4;
  func_0x00010c14de00(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar7;
  puStack_70 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar9);
  _objc_release(puVar11);
  _objc_release(puVar6);
  _objc_release(puVar10);
  func_0x00010bf0c980(puVar1);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_destroyWeak(auStack_80);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (undefined1 *)0x1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_d8 = FUN_10603f3d4;
  uStack_100 = uVar4;
  uStack_f8 = uVar3;
  uStack_f0 = uVar13;
  puStack_e8 = puVar1;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar12);
  _objc_copyWeak(auStack_108,puVar6 + 0x38);
  func_0x00010bf84b00(puVar12);
  _objc_destroyWeak(auStack_108);
  _objc_release(puVar12);
  return puVar12;
}



/* Entry: 10603f3d4; end: 10603f48b;  */

void FUN_10603f3d4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10603f48c; end: 10603f4ef;  */

void FUN_10603f48c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0fbf60(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2df40(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x30));
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10603f4f0; end: 10603f4ff;  */

void FUN_10603f4f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10603f500; end: 10603f5c7; -[SCPlusMyProfileSectionActionHandler _handlePinBestFriendObservable:uiContainer:] */

void FUN_10603f500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  func_0x00010bfb0d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10603f5c8;
  puStack_40 = &UNK_1108544b0;
  uStack_38 = param_4;
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10603f5c8; end: 10603f6fb;  */

void FUN_10603f5c8(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_2;
  func_0x00010bf1f3c0();
  puVar1 = PTR_PTR_1126aed70;
  if ((param_2 & 1) == 0) {
    func_0x00010603fc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    puVar2 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar3 = puVar2;
    func_0x00010603fbe8();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar5,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 10603f6fc; end: 10603f70b;  */

void FUN_10603f6fc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10603f70c; end: 10603f8bb; -[SCPlusMyProfileSectionActionHandler _launchSendBuddyPassWithContext:] */

bool FUN_10603f70c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  ppuVar3 = &puStack_a0;
  _objc_retain(param_3);
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 != 0) {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc();
    lVar2 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c038f40();
    _objc_release(lVar2);
    _objc_initWeak(auStack_68,param_1);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10603f8bc;
    puStack_88 = &UNK_11085dbf8;
    puStack_80 = puVar1;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    uStack_78 = param_3;
    _objc_retainBlock(&puStack_a0);
    puVar4 = PTR_PTR_1126c7430;
    _objc_alloc(PTR_PTR_1126c7430);
    uVar5 = param_3;
    func_0x00010c0b39c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c015420(puVar4);
    _objc_release(uVar5);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar4);
    _objc_release(ppuVar3);
    _objc_release(uStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return lVar6 != 0;
}



/* Entry: 10603f8bc; end: 10603f987;  */

void FUN_10603f8bc(long param_1,int param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  if (param_2 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10603f988;
    puStack_48 = &UNK_110841fb0;
    uStack_40 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_38,param_1 + 0x30);
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_destroyWeak(auStack_38);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf440c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  return;
}



/* Entry: 10603f988; end: 10603fa13;  */

void FUN_10603f988(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  func_0x00010bf6f440(uVar1);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10603fa14; end: 10603fa3f;  */

void FUN_10603fa14(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf75100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10603fa40; end: 10603fa9f; -[SCPlusMyProfileSectionActionHandler _loggingContextWithFeatureType:] */

void FUN_10603fa40(void)

{
  _objc_alloc(PTR_PTR_1126b1da8);
  func_0x00010c04abe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10603faa0; end: 10603fae7; -[SCPlusMyProfileSectionActionHandler didDismissSendFriendBuddyPassScope] */

void FUN_10603faa0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10603fae8; end: 10603faff; -[SCPlusMyProfileSectionActionHandler presentingViewController] */

void FUN_10603fae8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10603fb00; end: 10603fb0b; -[SCPlusMyProfileSectionActionHandler setPresentingViewController:] */

void FUN_10603fb00(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 10603fb0c; end: 10603fb13; -[SCPlusMyProfileSectionActionHandler uiContainer] */

undefined8 FUN_10603fb0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10603fb14; end: 10603fb9f; -[SCPlusMyProfileSectionActionHandler .cxx_destruct] */

void FUN_10603fb14(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 10603fba0; end: 10603fc17;  */

void FUN_10603fba0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e39758;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e39758,
                      &PTR____CFConstantStringClassReference_110e39778,0);
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



/* Entry: 10603fc18; end: 10603fce3; -[SCCPlusCustomChatColorHandlerImpl initWithCurrentUserId:conversationId:conversationServices:] */

undefined1 *
FUN_10603fc18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ef3a0;
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



/* Entry: 10603fce4; end: 10603fdc3; -[SCCPlusCustomChatColorHandlerImpl getColor] */

void FUN_10603fce4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b1588;
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar4);
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf50600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa5f20();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_retain(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10603fdc4; end: 106040093;  */

void FUN_10603fdc4(long param_1,long param_2,undefined **param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = param_3;
  _objc_retain(param_2);
  if (param_3 == (undefined **)0x1) {
    uVar14 = *(undefined8 *)(param_1 + 0x28);
    ppuVar13 = &PTR____CFConstantStringClassReference_110e38938;
    func_0x000106c7723c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar13;
    func_0x00010bfbb6e0(uVar14);
  }
  else {
    if (param_3 != (undefined **)0x0) goto LAB_106040050;
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar14);
    lVar2 = param_2;
    func_0x00010bf500c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar4 = lVar3;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    if (lVar4 == 0) {
      ppuVar13 = (undefined **)0x0;
    }
    else {
      do {
        lVar12 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar3);
          }
          ppuVar13 = *(undefined ***)(lVar12 * 8);
          ppuVar5 = ppuVar13;
          func_0x00010c0f4a60();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar5;
          func_0x00010c272380();
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = ppuVar6;
          func_0x00010c0720c0();
          _objc_release(ppuVar6);
          _objc_release(ppuVar5);
          if (((ulong)ppuVar7 & 1) != 0) {
            _objc_retain(ppuVar13);
            goto LAB_10603ff58;
          }
          lVar12 = lVar12 + 1;
        } while (lVar4 != lVar12);
        lVar4 = lVar3;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
      ppuVar13 = (undefined **)0x0;
    }
LAB_10603ff58:
    _objc_release(lVar3);
    _objc_release(uVar14);
    if (ppuVar13 == (undefined **)0x0) {
      uVar14 = *(undefined8 *)(param_1 + 0x28);
      ppuVar6 = &PTR____CFConstantStringClassReference_110e398f8;
      func_0x000106c7723c();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar6;
      func_0x00010bfbb6e0(uVar14);
    }
    else {
      ppuVar5 = ppuVar13;
      func_0x00010bf40c40();
      if ((int)ppuVar5 == 0) {
        puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010bf41080();
        iVar1 = (int)puVar9;
        _objc_release(puVar8);
      }
      else {
        ppuVar5 = ppuVar13;
        func_0x00010bf40c40(ppuVar13);
        iVar1 = (int)ppuVar5;
      }
      ppuVar6 = (undefined **)PTR_PTR_1126c7438;
      _objc_alloc();
      func_0x00010c009f40((double)iVar1);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf41120(ppuVar13);
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1883a0(ppuVar6);
      _objc_release(puVar8);
      ppuVar5 = ppuVar6;
      func_0x00010bfbb700(*(undefined8 *)(param_1 + 0x28));
    }
    _objc_release(ppuVar6);
  }
  _objc_release(ppuVar13);
LAB_106040050:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    puVar8 = PTR_PTR_1126b1588;
    _objc_retain(ppuVar5);
    _objc_opt_new();
    uVar10 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010bf50600(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar10;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282760(ppuVar5);
    _objc_release(ppuVar5);
    func_0x00010c0d0420(uVar14);
    _objc_release(uVar14);
    _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  return;
}



/* Entry: 106040094; end: 10604017b; -[SCCPlusCustomChatColorHandlerImpl setColorWithCustomColorId:] */

void FUN_106040094(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126b1588;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf50600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = param_3;
  func_0x00010c282760(param_3);
  _objc_release(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10604017c;
  puStack_50 = &UNK_110841f20;
  puStack_48 = puVar1;
  func_0x00010c0d0420(uVar3,param_2,uVar5,uVar4,&puStack_68);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10604017c; end: 1060401eb;  */

void FUN_10604017c(long param_1,int param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e39918;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e39918);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb6e0(uVar2);
  }
  else {
    ppuVar1 = (undefined **)PTR_PTR_1126b15a8;
    func_0x00010c27f660(PTR_PTR_1126b15a8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb700(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1060401ec; end: 106040227; -[SCCPlusCustomChatColorHandlerImpl .cxx_destruct] */

void FUN_1060401ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106040228; end: 10604030b; -[SCCPlusCustomNotificationSoundImpl initWithCustomSoundId:audioFactory:] */

undefined1 *
FUN_106040228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ef3a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
    func_0x000107fd4144();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10604030c; end: 1060404d3; -[SCCPlusCustomNotificationSoundImpl getAudioWithCallback:] */

void FUN_10604030c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  if (param_3 == 0) goto LAB_1060404b8;
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107fd4124();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e39938;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e39938);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x000106c7758c();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,0,ppuVar6);
  }
  else {
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c25cea0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0f58c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar6;
    func_0x00010c0f5960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(ppuVar6);
    if (ppuVar5 == (undefined **)0x0) {
LAB_10604041c:
      ppuVar6 = &PTR____CFConstantStringClassReference_110e39958;
      func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e39958);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar6;
      func_0x000106c7758c();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_3 + 0x10))(param_3,0,ppuVar4);
    }
    else {
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bfad300();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar6 == (undefined **)0x0) goto LAB_10604041c;
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___AVAsset_1126aff38;
      func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVAsset_1126aff38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfc2980(uVar7);
    }
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(lVar1);
LAB_1060404b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060404d4; end: 1060404db; -[SCCPlusCustomNotificationSoundImpl id2] */

undefined8 FUN_1060404d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1060404dc; end: 1060404e3; -[SCCPlusCustomNotificationSoundImpl setId2:] */

void FUN_1060404dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060404e4; end: 1060404eb; -[SCCPlusCustomNotificationSoundImpl localizedName] */

undefined8 FUN_1060404e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1060404ec; end: 1060404f3; -[SCCPlusCustomNotificationSoundImpl setLocalizedName:] */

void FUN_1060404ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060404f4; end: 10604052f; -[SCCPlusCustomNotificationSoundImpl .cxx_destruct] */

void FUN_1060404f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106040530; end: 10604063b; -[SCCPlusCustomNotificationSoundProviderImpl initWithConversationId:conversationServices:temporaryFileWriterServices:performerProvider:] */

undefined1 *
FUN_106040530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ef3b0;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b2f00;
    _objc_alloc();
    func_0x00010c0510a0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10604063c; end: 10604071b; -[SCCPlusCustomNotificationSoundProviderImpl getAvailableSoundsWithCallback:] */

void FUN_10604063c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfcd0c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10604071c;
    puStack_48 = &UNK_11084aaa8;
    uStack_40 = uVar1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar3,param_2,&puStack_60);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lStack_38);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10604071c; end: 1060409cf;  */

void FUN_10604071c(long param_1)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c7440;
  _objc_alloc();
  func_0x00010c007c60();
  puVar2 = PTR_PTR_1126c7440;
  _objc_alloc();
  func_0x00010c007c60();
  puVar3 = PTR_PTR_1126c7440;
  _objc_alloc();
  func_0x00010c007c60();
  puVar4 = PTR_PTR_1126c7440;
  _objc_alloc();
  func_0x00010c007c60();
  puVar5 = PTR_PTR_1126c7440;
  _objc_alloc();
  func_0x00010c007c60();
  puVar6 = PTR_PTR_1126c7440;
  _objc_alloc();
  func_0x00010c007c60();
  puVar7 = PTR_PTR_1126c7440;
  _objc_alloc();
  func_0x00010c007c60();
  puVar8 = PTR_PTR_1126c7440;
  _objc_alloc();
  func_0x00010c007c60();
  puVar9 = PTR_PTR_1126c7440;
  _objc_alloc();
  func_0x00010c007c60();
  puVar10 = PTR_PTR_1126c7440;
  _objc_alloc();
  func_0x00010c007c60();
  puVar11 = PTR_PTR_1126c7440;
  _objc_alloc();
  func_0x00010c007c60();
  puVar12 = PTR_PTR_1126c7440;
  _objc_alloc();
  func_0x00010c007c60();
  puVar13 = PTR_PTR_1126c7440;
  _objc_alloc();
  func_0x00010c007c60();
  lVar20 = *(long *)(param_1 + 0x28);
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = 0;
  (**(code **)(lVar20 + 0x10))(lVar20,puVar15);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar18);
  if (lVar18 != 0) {
    uVar16 = *(undefined8 *)(puVar1 + 0x10);
    func_0x00010bf50600(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar18);
    func_0x00010bfa5f20(uVar17);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(lVar18);
  }
  _objc_release(lVar18);
  return;
}



/* Entry: 1060409d0; end: 106040a9b; -[SCCPlusCustomNotificationSoundProviderImpl getSelectedSoundIdWithCallback:] */

void FUN_1060409d0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf50600(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106040a9c;
    puStack_40 = &UNK_1109092f8;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010bfa5f20(uVar2,param_2,uVar3,&puStack_58);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106040a9c; end: 106040baf;  */

void FUN_106040a9c(long param_1,undefined **param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  
  _objc_retain(param_2);
  if (param_3 == 1) {
    lVar4 = *(long *)(param_1 + 0x20);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e38938;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e38938);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x000106c7758c();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,0,ppuVar3);
LAB_106040b70:
    _objc_release(ppuVar3);
  }
  else {
    if (param_3 != 0) goto LAB_106040b80;
    lVar4 = *(long *)(param_1 + 0x20);
    ppuVar2 = param_2;
    func_0x00010bf619a0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar3 = param_2;
      func_0x00010bf619a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar3;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,ppuVar1,0);
      _objc_release(ppuVar1);
      goto LAB_106040b70;
    }
    (**(code **)(lVar4 + 0x10))(lVar4,0,0);
  }
  _objc_release(ppuVar2);
LAB_106040b80:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106040bb0; end: 106040cd7; -[SCCPlusCustomNotificationSoundProviderImpl setSelectedSoundIdWithSoundId:callback:] */

void FUN_106040bb0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf50600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + 8);
  if (param_3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar3 = param_3;
    func_0x00010c067fc0(param_3);
    func_0x00010c0df780(puVar5,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106040cd8;
  puStack_50 = &UNK_110842508;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010c0d0440(uVar2,param_2,uVar4,puVar5,&puStack_68);
  if (param_3 != 0) {
    _objc_release(puVar5);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106040cd8; end: 106040d73;  */

void FUN_106040cd8(long param_1,int param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    return;
  }
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106040d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x10))(lVar3,0);
    return;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e39978;
  func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e39978);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x000106c7758c();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,ppuVar2);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106040d74; end: 106040dbb; -[SCCPlusCustomNotificationSoundProviderImpl .cxx_destruct] */

void FUN_106040d74(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106040dbc; end: 106040ecf; -[SCCPlusCustomRingtoneProvider initWithConversationId:conversationServices:temporaryFileWriterServices:isBestFriendConversation:featureSettingsService:] */

undefined1 *
FUN_106040dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ef3b8;
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
    puVar3 = PTR_PTR_1126b2f00;
    _objc_alloc();
    func_0x00010c0510a0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106040ed0; end: 106041153; -[SCCPlusCustomRingtoneProvider getAvailableSoundsWithCallback:] */

void FUN_106040ed0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  int iVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_3;
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar2 = PTR_PTR_1126c7448;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf61b00();
    func_0x00010c0df840(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c007c40();
    _objc_release(puVar4);
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126b2a30;
    func_0x00010bf61b40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(puVar5);
        }
        iVar11 = (int)*(undefined8 *)((long)puVar10 * 8);
        func_0x00010c282760();
        if (iVar11 != 0) {
          puVar6 = PTR_PTR_1126c7448;
          _objc_alloc(PTR_PTR_1126c7448);
          func_0x00010bf61b20(PTR_PTR_1126b2a30);
          func_0x00010c007c40(puVar6);
          func_0x00010befa120(puVar1);
          _objc_release(puVar6);
        }
        puVar10 = puVar10 + 1;
      } while (puVar4 != puVar10);
      puVar4 = puVar5;
      func_0x00010bf52a60();
    }
    _objc_release(puVar5);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = 0;
    (**(code **)(param_3 + 0x10))(param_3,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar8);
  if (lVar8 != 0) {
    uVar7 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010bf50600(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar8);
    func_0x00010bfa5f20(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(lVar8);
  }
  _objc_release(lVar8);
  return;
}



/* Entry: 106041154; end: 10604121f; -[SCCPlusCustomRingtoneProvider getSelectedSoundIdWithCallback:] */

void FUN_106041154(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf50600(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106041220;
    puStack_40 = &UNK_1109092f8;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010bfa5f20(uVar2,param_2,uVar3,&puStack_58);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106041220; end: 106041333;  */

void FUN_106041220(long param_1,undefined **param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  
  _objc_retain(param_2);
  if (param_3 == 1) {
    lVar4 = *(long *)(param_1 + 0x20);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e38938;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e38938);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x000106c7758c();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,0,ppuVar3);
LAB_1060412f4:
    _objc_release(ppuVar3);
  }
  else {
    if (param_3 != 0) goto LAB_106041304;
    lVar4 = *(long *)(param_1 + 0x20);
    ppuVar2 = param_2;
    func_0x00010bf61b60();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar3 = param_2;
      func_0x00010bf61b60(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar3;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,ppuVar1,0);
      _objc_release(ppuVar1);
      goto LAB_1060412f4;
    }
    (**(code **)(lVar4 + 0x10))(lVar4,0,0);
  }
  _objc_release(ppuVar2);
LAB_106041304:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106041334; end: 10604145f; -[SCCPlusCustomRingtoneProvider setSelectedSoundIdWithSoundId:callback:] */

void FUN_106041334(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf50600(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar4 = *(undefined8 *)(param_1 + 8);
    if (param_3 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar3 = param_3;
      func_0x00010c067fc0(param_3);
      func_0x00010c0df780(puVar5,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106041460;
    puStack_50 = &UNK_110842508;
    _objc_retain(param_4);
    lStack_48 = param_4;
    func_0x00010c0d0460(uVar2,param_2,uVar4,puVar5,&puStack_68);
    if (param_3 != 0) {
      _objc_release(puVar5);
    }
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(lStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106041460; end: 1060414fb;  */

void FUN_106041460(long param_1,int param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    return;
  }
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106041494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x10))(lVar3,0);
    return;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e39998;
  func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e39998);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x000106c7758c();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,ppuVar2);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1060414fc; end: 106041543; -[SCCPlusCustomRingtoneProvider .cxx_destruct] */

void FUN_1060414fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106041544; end: 1060415f7; -[SCCPlusGlobalCustomRingtoneProvider initWithTemporaryFileWriterServices:featureSettingsService:] */

undefined1 *
FUN_106041544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ef3c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b2f00;
    _objc_alloc();
    func_0x00010c0510a0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060415f8; end: 1060417c3; -[SCCPlusGlobalCustomRingtoneProvider getAvailableSoundsWithCallback:] */

void FUN_1060415f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_3;
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar2 = PTR_PTR_1126b2a30;
    func_0x00010bf61b40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(puVar2);
        }
        puVar4 = PTR_PTR_1126c7448;
        _objc_alloc(PTR_PTR_1126c7448);
        func_0x00010bf61b20(PTR_PTR_1126b2a30);
        func_0x00010c007c40(puVar4);
        func_0x00010befa120(puVar1);
        _objc_release(puVar4);
        puVar7 = puVar7 + 1;
      } while (puVar3 != puVar7);
      puVar3 = puVar2;
      func_0x00010bf52a60();
    }
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = 0;
    (**(code **)(param_3 + 0x10))(param_3,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar5 != 0) {
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    _objc_retain(lVar5);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf61b00();
    func_0x00010c0df840(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,puVar1,0);
    _objc_release(lVar5);
    _objc_release(puVar1);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar8);
    return;
  }
  return;
}



/* Entry: 1060417c4; end: 106041873; -[SCCPlusGlobalCustomRingtoneProvider getSelectedSoundIdWithCallback:] */

void FUN_1060417c4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf61b00();
    func_0x00010c0df840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,puVar2,0);
    _objc_release(param_3);
    _objc_release(puVar2);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 106041874; end: 106041977; -[SCCPlusGlobalCustomRingtoneProvider setSelectedSoundIdWithSoundId:callback:] */

void FUN_106041874(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106041978;
    puStack_58 = &UNK_110841f80;
    uStack_50 = uVar2;
    _objc_retain(param_3);
    puStack_98 = puVar1;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1060419a0;
    puStack_80 = &UNK_110849530;
    uStack_48 = param_3;
    _objc_retain(param_4);
    lStack_78 = param_4;
    func_0x00010c0f8520(uVar2,param_2,&puStack_70,0,&puStack_98);
    _objc_release(lStack_78);
    _objc_release(uStack_48);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106041978; end: 10604199f;  */

void FUN_106041978(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c067fc0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c188770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setCustomRingtoneId__11263fbf8,uVar2);
  return;
}



/* Entry: 1060419a0; end: 1060419af;  */

void FUN_1060419a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001060419ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1060419b0; end: 1060419df; -[SCCPlusGlobalCustomRingtoneProvider .cxx_destruct] */

void FUN_1060419b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060419e0; end: 106041b37; -[SCPlusCustomRingtoneSound initWithCustomRingtoneId:audioFactory:isBestFriendConversation:useSoundFromRingtoneId:] */

undefined1 *
FUN_1060419e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined1 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ef3c8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(long *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b2a30;
    func_0x00010c09e660();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
    if ((param_6 != 0) && (lVar5 = param_6, func_0x00010c2827c0(), lVar5 != param_3)) {
      puVar3 = PTR_PTR_1126b2a30;
      func_0x00010bf61b20();
      *(undefined **)((long)puVar1 + 8) = puVar3;
      puVar3 = PTR_PTR_1126b2a30;
      func_0x00010c09e660();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
      *(undefined **)((long)puVar1 + 0x30) = puVar3;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_6);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106041b38; end: 106041d0b; -[SCPlusCustomRingtoneSound getAudioWithCallback:] */

void FUN_106041b38(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  if (param_3 == 0) goto LAB_106041cf0;
  puVar1 = PTR_PTR_1126b2a30;
  func_0x00010c247040();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e39938;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e39938);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x000106c7758c();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,0,ppuVar6);
  }
  else {
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c25cea0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c0f58c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar6;
    func_0x00010c0f5960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(ppuVar6);
    if (ppuVar5 == (undefined **)0x0) {
LAB_106041c54:
      ppuVar6 = &PTR____CFConstantStringClassReference_110e39958;
      func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e39958);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar6;
      func_0x000106c7758c();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_3 + 0x10))(param_3,0,ppuVar4);
    }
    else {
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bfad300();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar6 == (undefined **)0x0) goto LAB_106041c54;
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___AVAsset_1126aff38;
      func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVAsset_1126aff38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfc2980(uVar7);
    }
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(puVar1);
LAB_106041cf0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106041d0c; end: 106041d13; -[SCPlusCustomRingtoneSound id2] */

undefined8 FUN_106041d0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106041d14; end: 106041d1b; -[SCPlusCustomRingtoneSound setId2:] */

void FUN_106041d14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106041d1c; end: 106041d23; -[SCPlusCustomRingtoneSound localizedName] */

undefined8 FUN_106041d1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106041d24; end: 106041d2b; -[SCPlusCustomRingtoneSound setLocalizedName:] */

void FUN_106041d24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106041d2c; end: 106041d33; -[SCPlusCustomRingtoneSound localizedSubtitle] */

undefined8 FUN_106041d2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106041d34; end: 106041d3b; -[SCPlusCustomRingtoneSound setLocalizedSubtitle:] */

void FUN_106041d34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106041d3c; end: 106041d83; -[SCPlusCustomRingtoneSound .cxx_destruct] */

void FUN_106041d3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106041d84; end: 106041f33;  */

byte FUN_106041d84(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar4 = 0;
  }
  else {
    lVar2 = param_1;
    FUN_106041f34();
    bVar4 = 1;
    if (lVar2 == 0) {
      puStack_48 = &uStack_50;
      uStack_50 = 0;
      uStack_40 = 0x2020000000;
      uStack_38 = 0;
      puStack_68 = &uStack_70;
      uStack_70 = 0;
      uStack_60 = 0x2020000000;
      uStack_58 = 1;
      if (lRam00000001136c2c50 != -1) {
        func_0x00010002a2fc(0x1136c2c50,&PTR___NSConcreteGlobalBlock_110909378);
      }
      uVar1 = uRam00000001136c2c48;
      _objc_retain(uRam00000001136c2c48);
      lVar2 = param_1;
      func_0x00010bf44700(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      puVar3 = PTR_PTR_1126b61c0;
      func_0x00010bf8e840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf97e80(lVar2);
      if (*(char *)(puStack_48 + 3) == '\x01') {
        bVar4 = *(byte *)(puStack_68 + 3);
      }
      else {
        bVar4 = 0;
      }
      _objc_release(puVar3);
      _objc_release(lVar2);
      __Block_object_dispose(&uStack_70,8);
      __Block_object_dispose(&uStack_50,8);
    }
  }
  _objc_release(param_1);
  return bVar4 & 1;
}



/* Entry: 106041f34; end: 1060420e7;  */

long FUN_106041f34(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1;
  _objc_retain();
  FUN_106042650();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_f0;
  uVar3 = uVar2;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  lVar5 = 0;
  if (uVar3 != 0) {
    do {
      uVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(uVar2);
        }
        iVar1 = (int)*(undefined8 *)(uVar8 * 8);
        func_0x00010c067ec0();
        if (((2 < iVar1) || (iVar1 != 0)) &&
           (uVar4 = param_1, func_0x00010bf4bb00(), (uVar4 & 1) != 0)) {
          lVar5 = (long)iVar1;
          goto LAB_106042098;
        }
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
      puVar6 = auStack_f0;
      uVar3 = uVar2;
      func_0x00010bf52a60();
    } while (uVar3 != 0);
    lVar5 = 0;
  }
LAB_106042098:
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return lVar5;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(param_1 + 0x20);
  func_0x00010bf4b900();
  if ((int)lVar5 != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    if (*(char *)(lVar7 + 0x18) == '\x01') {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
      *puVar6 = 1;
    }
    else {
      *(undefined1 *)(lVar7 + 0x18) = 1;
    }
  }
  return lVar5;
}



/* Entry: 1060420e8; end: 10604214b;  */

void FUN_1060420e8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  if ((int)uVar1 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    if (*(char *)(lVar2 + 0x18) == '\x01') {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
      *param_4 = 1;
    }
    else {
      *(undefined1 *)(lVar2 + 0x18) = 1;
    }
  }
  return;
}



/* Entry: 10604214c; end: 10604264f;  */

void FUN_10604214c(undefined **param_1)

{
  long lVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar3 = param_1;
  _objc_retain();
  FUN_106042650();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (ppuVar4 == (undefined **)0x0) {
      _objc_release(ppuVar3);
      FUN_106041f34();
      ppuVar10 = param_1;
      func_0x00010c25cfc0();
      _objc_retainAutoreleasedReturnValue();
LAB_1060423fc:
      _objc_release(param_1);
      puVar7 = PTR_PTR_1126b61c0;
      func_0x00010bf8e840();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      do {
        if (puVar8 == (undefined *)0x0) {
          _objc_release(puVar7);
          _objc_retain(param_1);
          ppuVar3 = param_1;
LAB_106042600:
          _objc_release(ppuVar10);
          _objc_release(param_1);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
            ___stack_chk_fail();
            if (lRam00000001136c2c40 != -1) {
              func_0x00010002a2fc(0x1136c2c40,&PTR___NSConcreteGlobalBlock_110909358);
            }
            ppuVar3 = ppuRam00000001136c2c38;
            _objc_retain(ppuRam00000001136c2c38);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
          return;
        }
        puVar13 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar7);
          }
          ppuVar12 = *(undefined ***)((long)puVar13 * 8);
          ppuVar4 = ppuVar10;
          func_0x00010c08fa60();
          ppuVar3 = ppuVar12;
          func_0x00010c08fa60();
          if (ppuVar3 <= ppuVar4) {
            ppuVar4 = ppuVar10;
            func_0x00010c08fa60();
            ppuVar3 = ppuVar12;
            func_0x00010c08fa60();
            if ((undefined **)((long)ppuVar4 + 1) != ppuVar3) {
              uVar11 = 0;
              do {
                func_0x00010c08fa60(ppuVar12);
                ppuVar4 = ppuVar10;
                func_0x00010c260c80();
                _objc_retainAutoreleasedReturnValue();
                ppuVar3 = ppuVar4;
                func_0x00010c0720c0();
                if ((int)ppuVar3 != 0) {
                  func_0x00010c08fa60(ppuVar12);
                  ppuVar12 = ppuVar10;
                  func_0x00010c260c20();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar5 = ppuVar10;
                  func_0x00010c260c00(ppuVar10);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar6 = ppuVar12;
                  func_0x00010c25ce40();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar3 = ppuVar6;
                  func_0x00010c25ce40();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar6);
                  _objc_release(ppuVar5);
                  _objc_release(ppuVar12);
                  _objc_release(ppuVar4);
                  _objc_release(puVar7);
                  goto LAB_106042600;
                }
                _objc_release(ppuVar4);
                uVar11 = uVar11 + 1;
                ppuVar4 = ppuVar10;
                func_0x00010c08fa60();
                ppuVar3 = ppuVar12;
                func_0x00010c08fa60();
              } while (uVar11 < (ulong)((long)ppuVar4 + (1 - (long)ppuVar3)));
            }
          }
          puVar13 = puVar13 + 1;
        } while (puVar13 != puVar8);
        puVar8 = puVar7;
        func_0x00010bf52a60();
      } while( true );
    }
    ppuVar12 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(ppuVar3);
      }
      iVar2 = (int)*(undefined8 *)((long)ppuVar12 * 8);
      func_0x00010c067ec0();
      if (iVar2 < 3) {
        if (iVar2 != 0) {
          if (iVar2 == 1) {
            ppuVar10 = &PTR____CFConstantStringClassReference_110e399d8;
          }
          else if (iVar2 == 2) {
            ppuVar10 = &PTR____CFConstantStringClassReference_110e399f8;
          }
          else {
LAB_106042258:
            ppuVar10 = &PTR____CFConstantStringClassReference_110daafd8;
          }
          goto LAB_106042274;
        }
      }
      else {
        if (iVar2 == 3) {
          ppuVar10 = &PTR____CFConstantStringClassReference_110e39a18;
        }
        else if (iVar2 == 4) {
          ppuVar10 = &PTR____CFConstantStringClassReference_110e39a38;
        }
        else {
          if (iVar2 != 5) goto LAB_106042258;
          ppuVar10 = &PTR____CFConstantStringClassReference_110e39a58;
        }
LAB_106042274:
        ppuVar5 = param_1;
        func_0x00010c08fa60();
        ppuVar6 = ppuVar10;
        func_0x00010c08fa60();
        if (ppuVar6 <= ppuVar5) {
          ppuVar5 = param_1;
          func_0x00010c08fa60();
          ppuVar6 = ppuVar10;
          func_0x00010c08fa60();
          if ((undefined **)((long)ppuVar5 + 1) != ppuVar6) {
            uVar11 = 0;
            do {
              func_0x00010c08fa60(ppuVar10);
              ppuVar5 = param_1;
              func_0x00010c260c80();
              _objc_retainAutoreleasedReturnValue();
              ppuVar6 = ppuVar5;
              func_0x00010c0720c0();
              if (((ulong)ppuVar6 & 1) != 0) {
                func_0x00010c08fa60(ppuVar10);
                ppuVar4 = param_1;
                func_0x00010c260c00(param_1);
                _objc_retainAutoreleasedReturnValue();
                ppuVar12 = param_1;
                func_0x00010c260c20();
                _objc_retainAutoreleasedReturnValue();
                ppuVar10 = ppuVar12;
                func_0x00010c25ce40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar12);
                _objc_release(ppuVar4);
                _objc_release(ppuVar5);
                _objc_release(ppuVar3);
                goto LAB_1060423fc;
              }
              _objc_release(ppuVar5);
              uVar11 = uVar11 + 1;
              ppuVar5 = param_1;
              func_0x00010c08fa60();
              ppuVar6 = ppuVar10;
              func_0x00010c08fa60();
            } while (uVar11 < (ulong)((long)ppuVar5 + (1 - (long)ppuVar6)));
          }
        }
      }
      ppuVar12 = (undefined **)((long)ppuVar12 + 1);
    } while (ppuVar12 != ppuVar4);
    ppuVar4 = ppuVar3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106042650; end: 1060426a3;  */

void FUN_106042650(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c2c40 != -1) {
    func_0x00010002a2fc(0x1136c2c40,&PTR___NSConcreteGlobalBlock_110909358);
  }
  uVar1 = uRam00000001136c2c38;
  _objc_retain(uRam00000001136c2c38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060426a4; end: 1060426bb;  */

void FUN_1060426a4(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001136c2c38;
  ppuRam00000001136c2c38 = &PTR__OBJC_CLASS___NSConstantArray_11117fe10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060426bc; end: 1060426f7;  */

void FUN_1060426bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                      &PTR____CFConstantStringClassReference_110e399b8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c2c48;
  puRam00000001136c2c48 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060426f8; end: 106042807; -[SCCPlusAppIconProviderImpl initWithFeatureSettingsService:circumstanceEngine:] */

undefined1 *
FUN_1060426f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ef3d0;
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
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000106c76f58();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106042808; end: 10604280f; -[SCCPlusAppIconProviderImpl appIconNameObservable] */

void FUN_106042808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_toSCBridgeObservable_11267a270);
  return;
}



/* Entry: 106042810; end: 106042937; -[SCCPlusAppIconProviderImpl availableAppIconsObservable] */

void FUN_106042810(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lVar1 = param_1;
  func_0x000106c76b08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000106c75a58(uVar2,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106042938;
  puStack_60 = &UNK_1109093c0;
  uVar3 = uVar2;
  lStack_58 = lVar1;
  func_0x0001006372a4();
  _objc_release(uVar2);
  puStack_a0 = puVar4;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1060429c8;
  puStack_88 = &UNK_1109093f0;
  uVar2 = uVar3;
  lStack_80 = lVar1;
  func_0x000100504554(uVar3,&puStack_a0);
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106042938; end: 106042acf;  */

ulong FUN_106042938(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_2;
    func_0x00010c0d4f60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000106c76df4();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 106042ad0; end: 106042b63; -[SCCPlusAppIconProviderImpl setAppIconNameWithName:] */

void FUN_106042ad0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18));
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106042b64;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_3;
  lStack_28 = param_1;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(param_3);
  return;
}



/* Entry: 106042b64; end: 106042bd7;  */

void FUN_106042b64(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106c76ffc(uVar3,puVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106042bd8; end: 106042c13; -[SCCPlusAppIconProviderImpl .cxx_destruct] */

void FUN_106042bd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106042c14; end: 106042ca3; -[SCCPlusPinBestFriendServiceImpl initWithPinBestFriendService:] */

undefined1 * FUN_106042c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef3d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106042ca4; end: 106042d13; -[SCCPlusPinBestFriendServiceImpl pinnedBestFriendObservable] */

void FUN_106042ca4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0fc3a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106042d14; end: 106042d5b;  */

void FUN_106042d14(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106042d5c; end: 106042e5b; -[SCCPlusPinBestFriendServiceImpl setPinnedBestFriendWithUserId:callback:] */

void FUN_106042d5c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  if (param_3 == 0) {
    func_0x00010c281d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0fbf60(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = uVar1;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106042e5c;
  puStack_50 = &UNK_110857398;
  uStack_48 = param_4;
  _objc_retain(param_4);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(uVar1);
  return;
}



/* Entry: 106042e5c; end: 106042eeb;  */

void FUN_106042e5c(long param_1,int param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf1f3c0();
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106042e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x10))(lVar3,0);
    return;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc18b8;
  func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc18b8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x000106c7758c();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,ppuVar2);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106042eec; end: 106042f1b; -[SCCPlusPinBestFriendServiceImpl .cxx_destruct] */

void FUN_106042eec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106042f1c; end: 106043003; -[SCCPlusPostViewEmojiPageProviderImpl initWithFeatureSettingsService:snapchatterServices:performerProvider:] */

undefined1 *
FUN_106042f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ef3e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106043004; end: 10604307b; -[SCCPlusPostViewEmojiPageProviderImpl setEmojiWithEmoji:] */

void FUN_106043004(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df4c0();
  _objc_release(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10604307c; end: 10604318f; -[SCCPlusPostViewEmojiPageProviderImpl setEmojiForFriendWithEmoji:friendId:] */

void FUN_10604307c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1588;
  _objc_retain(param_4);
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c244ac0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106043190;
  puStack_60 = &UNK_1108519b8;
  uStack_58 = param_3;
  lStack_50 = param_1;
  puStack_48 = puVar1;
  _objc_retain(param_3);
  func_0x00010c2448c0(uVar3,param_2,param_4,PTR___dispatch_main_q_11034be20,&puStack_78);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_retain(puVar1);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106043190; end: 106043273;  */

void FUN_106043190(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x20);
  }
  puVar2 = PTR_PTR_1126ae5c0;
  func_0x00010c1df320(PTR_PTR_1126ae5c0,param_2,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20);
  func_0x00010c244ae0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df340();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 106043274; end: 1060432e3;  */

void FUN_106043274(long param_1,int param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e39a78;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e39a78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb6e0(uVar2);
  }
  else {
    ppuVar1 = (undefined **)PTR_PTR_1126b15a8;
    func_0x00010c27f660(PTR_PTR_1126b15a8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb700(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1060432e4; end: 10604336f; -[SCCPlusPostViewEmojiPageProviderImpl selectedEmojiObservable] */

void FUN_1060432e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c105520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2519e0(uVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106043370; end: 10604359b; -[SCCPlusPostViewEmojiPageProviderImpl availableEmojiCollectionsObservable] */

void FUN_106043370(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae568;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfcd0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = puVar1;
  func_0x00010c272120(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10604359c; end: 1060435a7; -[SCCPlusPostViewEmojiPageProviderImpl unsetEmojiResourceUrl] */

undefined ** FUN_10604359c(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 1060435a8; end: 1060435ef; -[SCCPlusPostViewEmojiPageProviderImpl .cxx_destruct] */

void FUN_1060435a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060435f0; end: 10604384b;  */

void FUN_1060435f0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c7460;
  _objc_alloc(PTR_PTR_1126c7460);
  lVar2 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00f540(puVar1);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_106041d84();
  if ((int)lVar3 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar3 = lVar2;
    FUN_10604214c(lVar2,1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    FUN_10604214c(lVar2,2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    FUN_10604214c(lVar2,3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    FUN_10604214c(lVar2,4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    FUN_10604214c(lVar2,5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c7468;
    _objc_alloc(PTR_PTR_1126c7468);
    func_0x00010c026120();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  func_0x00010c202f20(puVar1);
  _objc_release(puVar8);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25ce60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bfda7c0();
  lVar4 = lVar3;
  if (((int)lVar2 != 0) && (lVar2 = lVar3, func_0x00010bfdcf80(), (int)lVar2 != 0)) {
    func_0x00010c08fa60(lVar3);
    func_0x00010c260c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  lVar3 = lVar4;
  func_0x00010c08fa60();
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = lVar4;
  }
  _objc_retain(lVar2);
  _objc_release(lVar4);
  func_0x00010c1cafa0(puVar1);
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10604384c; end: 10604397b; -[SCComposerMediaAudio initWithTemporaryFileWriterServices:AudioData:] */

undefined1 *
FUN_10604384c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ef3e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc();
    func_0x00010c0082a0();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_release();
    FUN_106045be0();
    *(undefined **)((long)puVar1 + 0x30) = puVar4;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10604397c; end: 106043b13; -[SCComposerMediaAudio initWithTemporaryFileWriterServices:AVAsset:] */

undefined8 *
FUN_10604397c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ef3e8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release();
    FUN_106045be0();
    puVar1[6] = uVar2;
    _objc_initWeak(auStack_58,puVar1);
    uVar2 = puVar1[5];
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106043b14; end: 106043d27;  */

undefined1 *
FUN_106043b14(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
             undefined1 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  long lVar9;
  long lVar10;
  undefined1 *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined1 *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x20 = *(long *)(puVar2 + 8);
    _objc_retain(unaff_x20);
    puVar3 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
    _objc_opt_new();
    uVar8 = *(undefined8 *)(puVar2 + 8);
    *(undefined **)(puVar2 + 8) = puVar3;
    _objc_release(uVar8);
    unaff_x22 = *(undefined8 *)PTR__AVMediaTypeAudio_110348070;
    unaff_x21 = unaff_x20;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain();
    param_3 = &uStack_130;
    param_4 = auStack_e8;
    param_5 = 0x10;
    lVar4 = unaff_x21;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar9 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(unaff_x21);
          }
          param_4 = *(undefined1 **)(lStack_128 + lVar10 * 8);
          unaff_x24 = *(undefined8 *)(puVar2 + 8);
          func_0x00010bef9f20();
          _objc_retainAutoreleasedReturnValue();
          if (param_4 == (undefined1 *)0x0) {
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            uStack_168 = 0;
            uStack_170 = 0;
            uStack_158 = 0;
            uStack_160 = 0;
            uStack_188 = 0;
            uStack_190 = 0;
            uStack_178 = 0;
            uStack_180 = 0;
          }
          else {
            func_0x00010c26f620(&uStack_160,param_4);
            func_0x00010c26f620(&uStack_190,param_4);
          }
          uStack_1a8 = uStack_188;
          uStack_1b0 = uStack_190;
          uStack_1a0 = uStack_180;
          lStack_198 = 0;
          param_3 = &uStack_160;
          param_5 = (char)&uStack_1b0;
          func_0x00010c067160(unaff_x24);
          lVar1 = lStack_198;
          _objc_retain(lStack_198);
          if (lVar1 != 0) {
            uVar8 = *(undefined8 *)(puVar2 + 8);
            *(undefined8 *)(puVar2 + 8) = 0;
            _objc_release(uVar8);
            _objc_release(lVar1);
            _objc_release(unaff_x24);
            unaff_x23 = lVar4;
            goto LAB_106043ccc;
          }
          _objc_release(unaff_x24);
          lVar10 = lVar10 + 1;
        } while (lVar4 != lVar10);
        param_3 = &uStack_130;
        param_4 = auStack_e8;
        param_5 = 0x10;
        lVar4 = unaff_x21;
        func_0x00010bf52a60();
        unaff_x23 = lVar4;
      } while (lVar4 != 0);
    }
LAB_106043ccc:
    _objc_release(unaff_x21);
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
  }
  puVar5 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    ppuVar6 = &puStack_200;
    pcStack_1b8 = FUN_106043d28;
    uStack_1f0 = unaff_x24;
    lStack_1e8 = unaff_x23;
    uStack_1e0 = unaff_x22;
    lStack_1d8 = unaff_x21;
    lStack_1d0 = unaff_x20;
    puStack_1c8 = puVar2;
    puStack_1c0 = &stack0xfffffffffffffff0;
    _objc_retain(param_3);
    _objc_retain(param_4);
    puStack_1f8 = PTR_PTR_1126ef3e8;
    puStack_200 = puVar5;
    _objc_msgSendSuper2(&puStack_200,PTR_s_init_1125d9248);
    if (ppuVar6 != (undefined1 **)0x0) {
      _objc_retain(param_3);
      uVar8 = *(undefined8 *)((long)ppuVar6 + 0x20);
      *(undefined8 **)((long)ppuVar6 + 0x20) = param_3;
      _objc_release(uVar8);
      puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      func_0x00010bf0b9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)((long)ppuVar6 + 8);
      *(undefined **)((long)ppuVar6 + 8) = puVar3;
      _objc_release(uVar8);
      _objc_retain(param_4);
      uVar8 = *(undefined8 *)((long)ppuVar6 + 0x10);
      *(undefined1 **)((long)ppuVar6 + 0x10) = param_4;
      _objc_release(uVar8);
      *(undefined1 *)((long)ppuVar6 + 0x18) = param_5;
      puVar3 = PTR_PTR_1126ae790;
      _objc_alloc();
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c021520();
      uVar8 = *(undefined8 *)((long)ppuVar6 + 0x28);
      *(undefined **)((long)ppuVar6 + 0x28) = puVar3;
      _objc_release(uVar8);
      _objc_release();
      FUN_106045be0();
      *(undefined **)((long)ppuVar6 + 0x30) = puVar7;
    }
    _objc_release(param_4);
    _objc_release(param_3);
    return (undefined1 *)ppuVar6;
  }
  return puVar5;
}



/* Entry: 106043d28; end: 106043e6b; -[SCComposerMediaAudio initWithTemporaryFileWriterServices:FileURL:deleteOnDispose:] */

undefined1 *
FUN_106043d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ef3e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x00010bf0b9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_release();
    FUN_106045be0();
    *(undefined **)((long)puVar1 + 0x30) = puVar4;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106043e6c; end: 106043f13; -[SCComposerMediaAudio getDurationMs] */

double FUN_106043e6c(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  double dVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  puVar2 = PTR_PTR_1126b0010;
  func_0x00010c266c80(PTR_PTR_1126b0010,param_3,&PTR__OBJC_CLASS___NSConstantArray_11117fe28,
                      *(undefined8 *)(param_2 + 8),&uStack_48);
  uVar1 = uStack_48;
  _objc_retain(uStack_48);
  dVar3 = 0.0;
  if ((int)puVar2 != 0) {
    if (*(long *)(param_2 + 8) == 0) {
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_60);
    }
    _CMTimeGetSeconds(&uStack_60);
    dVar3 = param_1 * 1000.0;
  }
  _objc_release(uVar1);
  return dVar3;
}



/* Entry: 106043f14; end: 106043fbb; -[SCComposerMediaAudio getSamplesWithSampleCount:callback:] */

void FUN_106043f14(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106043fbc;
    puStack_60 = &UNK_11085b7b0;
    lStack_58 = param_2;
    uStack_48 = param_1;
    _objc_retain(param_4);
    lStack_50 = param_4;
    func_0x00010c0f7fc0(uVar1,param_3,&puStack_78);
    _objc_release(lStack_50);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106043fbc; end: 10604469b;  */

/* WARNING: Removing unreachable block (ram,0x000106044528) */

void FUN_106043fbc(long param_1)

{
  short sVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  short *psVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 uVar16;
  double *pdVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  double *pdVar23;
  double dVar24;
  double dVar25;
  double dStack_100;
  uint uStack_f4;
  long alStack_f0 [4];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar17 = *(double **)(*(long *)(param_1 + 0x20) + 8);
  dVar24 = *(double *)(param_1 + 0x30);
  if (dVar24 <= 0.0) {
    dVar24 = 0.0;
  }
  dVar25 = 65535.0;
  if (dVar24 <= 65535.0) {
    dVar25 = dVar24;
  }
  _objc_retain(pdVar17);
  if ((pdVar17 == (double *)0x0) || (uVar20 = (ulong)dVar25, uVar20 == 0)) {
    puVar4 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___AVAssetReader_1126bf598;
    _objc_alloc();
    alStack_f0[1] = 0;
    func_0x00010bff4200();
    lVar2 = alStack_f0[1];
    _objc_retain(alStack_f0[1]);
    if (lVar2 == 0) {
      pdVar23 = pdVar17;
      func_0x00010c279200();
      _objc_retainAutoreleasedReturnValue();
      pdVar5 = pdVar23;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pdVar23);
      ppuVar8 = (undefined **)PTR__OBJC_CLASS___AVAssetReaderTrackOutput_1126bf5a0;
      puVar4 = PTR_PTR_1126af5d0;
      if (pdVar5 == (double *)0x0) {
        ppuVar8 = &PTR____CFConstantStringClassReference_110e39b78;
        FUN_1060485c8(&PTR____CFConstantStringClassReference_110e39b78);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        alStack_f0[2] = *(long *)PTR__AVFormatIDKey_11034cf30;
        alStack_f0[3] = *(long *)PTR__AVSampleRateKey_11034cf60;
        ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4450;
        ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4468;
        uStack_d0 = *(undefined8 *)PTR__AVLinearPCMBitDepthKey_11034cf38;
        uStack_c8 = *(undefined8 *)PTR__AVLinearPCMIsBigEndianKey_11034cf40;
        ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4480;
        puStack_98 = PTR____kCFBooleanFalse_11034ab60;
        uStack_c0 = *(undefined8 *)PTR__AVLinearPCMIsFloatKey_11034cf48;
        uStack_b8 = *(undefined8 *)PTR__AVLinearPCMIsNonInterleaved_11034cf50;
        puStack_90 = PTR____kCFBooleanFalse_11034ab60;
        puStack_88 = PTR____kCFBooleanFalse_11034ab60;
        puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b5e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = puVar3;
        func_0x00010bf2c480();
        if (((ulong)puVar4 & 1) == 0) {
          ppuVar9 = &PTR____CFConstantStringClassReference_110e39b98;
        }
        else {
          func_0x00010befa4c0(puVar3);
          pdVar23 = pdVar5;
          func_0x00010bfb5b00();
          _objc_retainAutoreleasedReturnValue();
          pdVar6 = pdVar23;
          func_0x00010bf51e00();
          _objc_release(pdVar23);
          pdVar23 = pdVar6;
          func_0x00010bf529e0();
          if (pdVar23 != (double *)0x0) {
            pdVar23 = (double *)0x0;
LAB_1060441fc:
            pdVar7 = pdVar6;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if ((pdVar7 == (double *)0x0) ||
               (_CMAudioFormatDescriptionGetStreamBasicDescription(), pdVar7 == (double *)0x0))
            goto LAB_106044228;
            _objc_release(pdVar6);
            ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSMutableData_1126b4958;
            func_0x00010bf64b80();
            _objc_retainAutoreleasedReturnValue();
            _objc_retainAutorelease();
            ppuVar10 = ppuVar9;
            func_0x00010bf25f00();
            func_0x00010bf8b160(&dStack_100,pdVar17);
            _CMTimeGetSeconds(&dStack_100);
            dVar25 = *pdVar7;
            func_0x00010c250140(puVar3);
            puVar4 = puVar3;
            func_0x00010c252d60();
            if (puVar4 != (undefined *)0x1) {
              puVar4 = puVar3;
              func_0x00010c252d60();
              if (puVar4 != (undefined *)0x2) goto LAB_106044644;
              goto LAB_106044578;
            }
            lVar22 = 0;
            uVar19 = 0;
            uVar21 = 0;
            do {
              ppuVar11 = ppuVar8;
              func_0x00010bf52120();
              if (ppuVar11 != (undefined **)0x0) {
                _CMSampleBufferGetAudioBufferListWithRetainedBlockBuffer();
                if (dStack_100._0_4_ != 0) {
                  uVar12 = 0;
                  do {
                    uVar15 = *(uint *)((long)alStack_f0 + uVar12 * 0x10 + -4);
                    if (1 < uVar15) {
                      uVar14 = (ulong)(uVar15 >> 1);
                      psVar13 = (short *)alStack_f0[uVar12 * 2];
                      do {
                        sVar1 = *psVar13;
                        uVar15 = -(int)sVar1;
                        if (-1 < sVar1) {
                          uVar15 = (uint)sVar1;
                        }
                        uVar21 = uVar21 + uVar15;
                        uVar19 = uVar19 + 1;
                        if (((ulong)(long)((dVar24 * dVar25) / (double)uVar20) <= uVar19) &&
                           (lVar22 != uVar20 - 1)) {
                          ppuVar10[lVar22] = (undefined *)((double)uVar21 / (double)uVar19);
                          lVar22 = lVar22 + 1;
                          uVar21 = 0;
                          uVar19 = 0;
                        }
                        uVar14 = uVar14 - 1;
                        psVar13 = psVar13 + 1;
                      } while (uVar14 != 0);
                    }
                    uVar12 = uVar12 + 1;
                  } while (uVar12 != ((ulong)dStack_100 & 0xffffffff));
                }
                _CFRelease(ppuVar11);
              }
              puVar4 = puVar3;
              func_0x00010c252d60();
            } while (puVar4 == (undefined *)0x1);
            puVar4 = puVar3;
            func_0x00010c252d60();
            if (puVar4 == (undefined *)0x2) {
              if (uVar19 != 0) {
                ppuVar10[lVar22] = (undefined *)((double)uVar21 / (double)uVar19);
              }
LAB_106044578:
              ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
              _objc_retainAutoreleasedReturnValue();
              uVar19 = 0;
              do {
                uVar21 = uVar19;
                if ((long)uVar19 < 0xb) {
                  uVar21 = 10;
                }
                uVar12 = uVar19 + 10;
                if ((long)uVar20 <= (long)(uVar19 + 10)) {
                  uVar12 = uVar20;
                }
                dStack_100 = 0.0;
                _vDSP_maxvD(ppuVar10 + (uVar21 - 10),1,&dStack_100,uVar12 - (uVar21 - 10));
                dVar24 = 0.0;
                if (0.0 < dStack_100) {
                  dVar24 = (double)ppuVar10[uVar19] / dStack_100;
                }
                puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c0df720(dVar24,PTR__OBJC_CLASS___NSNumber_1126ae570);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(ppuVar11);
                _objc_release(puVar4);
                uVar19 = uVar19 + 1;
              } while (uVar20 != uVar19);
              puVar4 = PTR_PTR_1126af5d0;
              func_0x00010c2619e0();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
LAB_106044644:
              puVar4 = PTR_PTR_1126af5d0;
              ppuVar11 = &PTR____CFConstantStringClassReference_110e39bd8;
              FUN_1060485c8(&PTR____CFConstantStringClassReference_110e39bd8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfa01c0();
              _objc_retainAutoreleasedReturnValue();
            }
            _objc_release(ppuVar11);
            goto LAB_1060442cc;
          }
LAB_10604423c:
          _objc_release(pdVar6);
          ppuVar9 = &PTR____CFConstantStringClassReference_110e39bb8;
        }
        puVar4 = PTR_PTR_1126af5d0;
        FUN_1060485c8(ppuVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0();
        _objc_retainAutoreleasedReturnValue();
LAB_1060442cc:
        _objc_release(ppuVar9);
      }
      _objc_release(ppuVar8);
      _objc_release(pdVar5);
    }
    else {
      puVar4 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  _objc_release(pdVar17);
  uVar18 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar18);
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar16);
  func_0x00010c0c0800(puVar4);
  _objc_release(uVar16);
  _objc_release(uVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0001060446a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar4 + 0x20) + 0x10))();
    return;
  }
  return;
LAB_106044228:
  pdVar23 = (double *)((long)pdVar23 + 1);
  pdVar7 = pdVar6;
  func_0x00010bf529e0();
  if (pdVar7 <= pdVar23) goto LAB_10604423c;
  goto LAB_1060441fc;
}



/* Entry: 10604469c; end: 1060446ab;  */

void FUN_10604469c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001060446a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,0);
  return;
}


