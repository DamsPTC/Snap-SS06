/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ebf5f4; end: 104ebf64b;  */

void FUN_104ebf5f4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10cce0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ebf64c; end: 104ebf6bb; -[SCLensMemoriesPickerWorkflow reset] */

void FUN_104ebf64c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104ebf6bc;
  puStack_30 = &UNK_110857ee0;
  uStack_28 = uVar2;
  _objc_retain(uVar2);
  func_0x00010c1429e0(uVar1,param_2,&puStack_48);
  _objc_release(uVar2);
  return;
}



/* Entry: 104ebf6bc; end: 104ebf6d3;  */

void FUN_104ebf6bc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c139e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_resetWithContentDeliveryServices_11262c1b8,
             *(undefined8 *)(param_1 + 0x20),&PTR___NSConcreteGlobalBlock_110857ec0);
  return;
}



/* Entry: 104ebf6d4; end: 104ebf6df; -[SCLensMemoriesPickerWorkflow actionHandler:didShareMedia:uiContainer:] */

void FUN_104ebf6d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fa0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_persistMedia_withUiContainer__11261c248,param_4,param_5);
  return;
}



/* Entry: 104ebf6e0; end: 104ebf83f; -[SCLensMemoriesPickerWorkflow actionHandler:didSelectAsset:uiContainer:] */

void FUN_104ebf6e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar2);
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(uVar2);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c1429e0(uVar3);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ebf840; end: 104ebf8b3;  */

void FUN_104ebf840(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfea4e0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ebf8b4; end: 104ebf8b7; -[SCLensMemoriesPickerWorkflow didImportMedia:uiContainer:] */

void FUN_104ebf8b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fa0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_persistMedia_withUiContainer__11261c248);
  return;
}



/* Entry: 104ebf8b8; end: 104ebf8ff; -[SCLensMemoriesPickerWorkflow didSaveMediaWithPayload:] */

void FUN_104ebf8b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0c91e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ebf900; end: 104ebf9a7; -[SCLensMemoriesPickerWorkflow requestToDismissPage] */

void FUN_104ebf900(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104ebf9a8;
  puStack_50 = &UNK_110857f40;
  uStack_48 = uVar2;
  uStack_40 = uVar4;
  lStack_38 = lVar3;
  _objc_retain(uVar4);
  _objc_retain(uVar2);
  func_0x00010c1429e0(uVar1,param_2,&puStack_68);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(lVar3);
  return;
}



/* Entry: 104ebf9a8; end: 104ebfa03;  */

void FUN_104ebf9a8(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_104ebfa04;
  puStack_28 = &UNK_110841f80;
  uStack_18 = *(undefined8 *)(param_1 + 0x30);
  uStack_20 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c139e60(param_2,param_2,*(undefined8 *)(param_1 + 0x20),&puStack_40);
  return;
}



/* Entry: 104ebfa04; end: 104ebfa33;  */

void FUN_104ebfa04(long param_1,undefined8 param_2)

{
  func_0x00010c094f40(*(undefined8 *)(param_1 + 0x20),param_2,PTR____NSArray0__struct_11034ab48);
                    /* WARNING: Could not recover jumptable at 0x00010c0c91d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_memoriesPickerDidCancel_11260fe88);
  return;
}



/* Entry: 104ebfa34; end: 104ebfb83; -[SCLensMemoriesPickerWorkflow persistMedia:withUiContainer:] */

void FUN_104ebfa34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  _objc_initWeak(auStack_58,param_1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c1429e0(uVar4);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ebfb84; end: 104ebfc07;  */

void FUN_104ebfb84(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0fa160(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ebfc08; end: 104ebfc63; -[SCLensMemoriesPickerWorkflow .cxx_destruct] */

void FUN_104ebfc08(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ebfc64; end: 104ebfc93;  */

void FUN_104ebfc64(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db94d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db94d8,
                      &PTR____CFConstantStringClassReference_110db94f8,0);
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



/* Entry: 104ebfc94; end: 104ebfd83; -[SCLensRemoteApiAuthenticationHandler handleOAuthWithAuthURL:completion:] */

void FUN_104ebfc94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04e820();
  puVar2 = puVar1;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104ebfd84;
  puStack_50 = &UNK_110857fa0;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010be2d080(param_1,param_2,param_3,puVar2,&puStack_68);
  _objc_release(param_3);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(puVar2);
  return;
}



/* Entry: 104ebfd84; end: 104ebffab;  */

void FUN_104ebfd84(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44780(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c11d4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (puVar5 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(puVar2);
        }
        puVar9 = *(undefined **)((long)puVar10 * 8);
        puVar3 = puVar9;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf32ee0();
        _objc_release(puVar3);
        if (puVar4 == (undefined *)0x0) {
          func_0x00010c296d80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          if (puVar9 == (undefined *)0x0) goto LAB_104ebff1c;
          lVar8 = *(long *)(param_1 + 0x20);
          pcVar7 = *(code **)(lVar8 + 0x10);
          puVar5 = (undefined *)0x0;
          puVar2 = puVar9;
          goto LAB_104ebff5c;
        }
        puVar10 = puVar10 + 1;
      } while (puVar5 != puVar10);
      puVar5 = puVar2;
      func_0x00010bf52a60();
    }
    _objc_release(puVar2);
LAB_104ebff1c:
    lVar8 = *(long *)(param_1 + 0x20);
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = *(code **)(lVar8 + 0x10);
    puVar9 = (undefined *)0x0;
    puVar2 = puVar5;
LAB_104ebff5c:
    (*pcVar7)(lVar8,puVar9,puVar5);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000104ebfdfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ebffac; end: 104ec0017; -[SCLensRemoteApiAuthenticationHandler presentationAnchorForWebAuthenticationSession:] */

void FUN_104ebffac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104ec0018; end: 104ec00b3; -[SCLensRemoteApiAuthenticationHandler reset] */

void FUN_104ec0018(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    _objc_retain(lVar2);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_104ec00b4;
    puStack_30 = &UNK_110842e18;
    lStack_28 = lVar2;
    _objc_retain(lVar2);
    func_0x00010c0f7fc0(lVar1,param_2,&puStack_48);
    _objc_release(lVar1);
    _objc_release(lStack_28);
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 104ec00b4; end: 104ec00bb;  */

void FUN_104ec00b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 104ec00bc; end: 104ec0207; -[SCLensRemoteApiAuthenticationHandler _handleOAuth2WithAuthURL:callbackScheme:completion:] */

void FUN_104ec00bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
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



/* Entry: 104ec0208; end: 104ec028b;  */

void FUN_104ec0208(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___ASWebAuthenticationSession_1126b1c78;
    _objc_alloc();
    func_0x00010c057940();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_retain();
    _objc_release(uVar2);
    func_0x00010c1e1200(puVar1,param_2,param_1);
    func_0x00010c24d960(puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ec028c; end: 104ec0293; -[SCLensRemoteApiAuthenticationHandler webAuthSession] */

undefined8 FUN_104ec028c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104ec0294; end: 104ec02c3; -[SCLensRemoteApiAuthenticationHandler setWebAuthSession:] */

void FUN_104ec0294(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104ec02c4; end: 104ec02cf; -[SCLensRemoteApiAuthenticationHandler .cxx_destruct] */

void FUN_104ec02c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ec02d0; end: 104ec0497; -[SCLensRemoteApiAuthenticationHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ec02d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110858020);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1c88;
  _objc_alloc();
  lVar3 = param_1 + _DAT_112715fa8;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c129ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112715fac;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0966a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112715fb0;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c096680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008c00(puVar2,param_2,lVar4,lVar6,puVar1,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar9 = PTR_PTR_1126b1c90;
  _objc_alloc(PTR_PTR_1126b1c90);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104ec04b4;
  puStack_70 = &UNK_110858040;
  puVar10 = PTR_PTR_1126ae720;
  puStack_68 = puVar2;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff5840(puVar9,param_2,puVar1,puVar10);
  _objc_release(puVar10);
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112715fb4),param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 104ec0498; end: 104ec04b3;  */

void FUN_104ec0498(void)

{
  _objc_alloc_init(PTR_PTR_1126b1c80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ec04b4; end: 104ec04db;  */

void FUN_104ec04b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ec04dc; end: 104ec052f; -[SCLensRemoteApiAuthenticationHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ec04dc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112715fb4,0);
  _objc_destroyWeak(param_1 + _DAT_112715fb0);
  _objc_destroyWeak(param_1 + _DAT_112715fa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112715fac);
  return;
}



/* Entry: 104ec0530; end: 104ec062b; -[SCLensRemoteApiTokenManager initWithDataProvider:rpcHandler:authHandler:remoteApiLogger:] */

undefined1 *
FUN_104ec0530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e4d18;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ec062c; end: 104ec06b3; -[SCLensRemoteApiTokenManager deleteDataForSpecId:withCompletionQueue:completionHandler:] */

void FUN_104ec062c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6ba80();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ec06b4; end: 104ec0b9f; -[SCLensRemoteApiTokenManager checkOAuthStatusForSpecId:lensId:withCompletionQueue:completionHandler:] */

void FUN_104ec06b4(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfaaec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c129c80();
    _objc_release(uVar4);
    lVar5 = *(long *)(param_2 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010bfc6540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = lVar1;
    func_0x00010bf106c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c2481e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6bfa0();
    _objc_release(uVar4);
    lVar8 = lVar5;
    func_0x00010c08fa60();
    if ((lVar8 == 0) || (lVar8 = param_4, func_0x00010c0720c0(), (int)lVar8 == 0)) {
      if (lVar7 == 0) {
        puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c8 = 0xc2000000;
        pcStack_c0 = FUN_104ec0ca0;
        puStack_b8 = &UNK_110849530;
        _objc_retain(param_7);
        lStack_b0 = param_7;
        func_0x00010007380c(param_6,&puStack_d0);
        lVar8 = lStack_b0;
      }
      else {
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_104ec0ba0;
        puStack_90 = &UNK_11084aaa8;
        _objc_retain(lVar7);
        lStack_88 = lVar7;
        _objc_retain(param_7);
        lStack_80 = param_7;
        func_0x00010007380c(param_6,&puStack_a8);
        _objc_release(lStack_80);
        lVar8 = lStack_88;
      }
      _objc_release(lVar8);
    }
    else {
      func_0x00010be72ba0(param_2);
    }
    _objc_release(lVar7);
    _objc_release(lVar6);
  }
  else {
    func_0x00010bf9c880(lVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    dVar9 = param_1;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar3);
    if (dVar9 < param_1) {
      uVar4 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c129c60();
      _objc_release(uVar4);
      puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f0 = 0xc2000000;
      uStack_e8 = 0x104ec0cb4;
      puStack_e0 = &UNK_110849530;
      _objc_retain(param_7);
      lStack_d8 = param_7;
      func_0x00010007380c(param_6,&puStack_f8);
      lVar1 = lStack_d8;
      goto LAB_104ec0b4c;
    }
    lVar1 = lVar2;
    func_0x00010c125640();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar5 == 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c129c80();
      _objc_release(uVar4);
      puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_118 = 0xc2000000;
      uStack_110 = 0x104ec0cc8;
      puStack_108 = &UNK_110849530;
      _objc_retain(param_7);
      lStack_100 = param_7;
      func_0x00010007380c(param_6,&puStack_120);
      lVar1 = lStack_100;
      goto LAB_104ec0b4c;
    }
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c125640(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_5);
    _objc_retain(lVar2);
    _objc_retain(lVar1);
    func_0x00010c1256e0(uVar4);
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(lVar1);
    _objc_release(lVar2);
    _objc_release(param_5);
    _objc_release(param_7);
    _objc_release(param_6);
    lVar5 = param_4;
  }
  _objc_release(lVar5);
LAB_104ec0b4c:
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104ec0ba0; end: 104ec0c9f;  */

void FUN_104ec0ba0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e2e0();
  _objc_release(puVar2);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000104ec0cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + 0x20) + 0x10))(*(long *)(puVar1 + 0x20),0,0);
  return;
}



/* Entry: 104ec0ca0; end: 104ec0cdb;  */

void FUN_104ec0ca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104ec0cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 104ec0cdc; end: 104ec0f13;  */

void FUN_104ec0cdc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_8);
  if (param_8 == 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x30) + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c129c60();
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b1c98;
    _objc_alloc(PTR_PTR_1126b1c98);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c2732e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c150520(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04ada0(param_1 + (double)param_5,puVar2);
    _objc_release(uVar1);
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    _objc_retain(uVar3);
    uVar1 = *(undefined8 *)(param_2 + 0x50);
    _objc_retain(uVar1);
    func_0x00010c28f1c0(uVar4);
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104ec0f14;
    puStack_78 = &UNK_11084aaa8;
    puVar2 = *(undefined **)(param_2 + 0x50);
    _objc_retain(puVar2);
    puStack_68 = puVar2;
    _objc_retain(param_8);
    lStack_70 = param_8;
    func_0x00010007380c(uVar3,&puStack_90);
    _objc_release(lStack_70);
    puVar2 = puStack_68;
  }
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 104ec0f14; end: 104ec0f37;  */

void FUN_104ec0f14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104ec0f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104ec0f38; end: 104ec0f93;  */

void FUN_104ec0f38(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),7);
  return;
}



/* Entry: 104ec0f94; end: 104ec1193; -[SCLensRemoteApiTokenManager startOAuthFlowForSpecId:lensId:withCompletionQueue:completionHandler:] */

void FUN_104ec0f94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14a780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(uVar3);
  _objc_retain(param_4);
  _objc_retain(uVar2);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bfc82c0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ec1194; end: 104ec1487;  */

void FUN_104ec1194(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_3 == 1) && (param_6 == 0)) {
    puVar8 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    _objc_alloc(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8);
    func_0x00010c04e820();
    puVar1 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
    _objc_alloc();
    func_0x00010c02dc20();
    puVar2 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
    puStack_90 = puVar1;
    _objc_alloc();
    func_0x00010c02dc20();
    puVar3 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
    puStack_88 = puVar2;
    _objc_alloc();
    func_0x00010c02dc20();
    puVar4 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
    puStack_80 = puVar3;
    _objc_alloc();
    func_0x00010c02dc20();
    puVar5 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
    puStack_78 = puVar4;
    _objc_alloc();
    func_0x00010c02dc20();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6460(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained();
    if (param_1 == 0) {
      func_0x00010bf8bf40(PTR_PTR_1126b1c88);
    }
    else {
      puVar1 = puVar8;
      func_0x00010bdc2b80(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be25fe0(param_1);
      _objc_release(puVar1);
    }
    _objc_release(param_1);
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_104ec1488;
    puStack_a8 = &UNK_11084aaa8;
    puVar8 = *(undefined **)(param_1 + 0x48);
    _objc_retain(puVar8);
    puStack_98 = puVar8;
    _objc_retain(param_6);
    lStack_a0 = param_6;
    func_0x00010007380c(uVar7,&puStack_c0);
    func_0x00010be50680(PTR_PTR_1126b1c88);
    _objc_release(lStack_a0);
    puVar8 = puStack_98;
  }
  _objc_release(puVar8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000104ec1498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x28) + 0x10))
            (*(long *)(param_2 + 0x28),0,*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 104ec1488; end: 104ec149b;  */

void FUN_104ec1488(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104ec1498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104ec149c; end: 104ec14cf; -[SCLensRemoteApiTokenManager reset] */

void FUN_104ec149c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ec14d0; end: 104ec168f; -[SCLensRemoteApiTokenManager _handleAuthFlowWithSpecId:uri:lensId:withCompletionQueue:completionHandler:] */

void FUN_104ec14d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(uVar2);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bfd19e0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ec1690; end: 104ec17df;  */

void FUN_104ec1690(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_3 == 0) && (lVar3 = param_2, func_0x00010c08fa60(), lVar3 != 0)) {
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained();
    if (param_1 == 0) {
      func_0x00010bf8bf40(PTR_PTR_1126b1c88);
    }
    else {
      func_0x00010be72ba0(param_1);
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_104ec17e0;
    puStack_58 = &UNK_11084aaa8;
    lVar3 = *(long *)(param_1 + 0x40);
    _objc_retain(lVar3);
    lStack_48 = lVar3;
    _objc_retain(param_3);
    lStack_50 = param_3;
    func_0x00010007380c(uVar2,&puStack_70);
    puVar1 = PTR_PTR_1126b1c88;
    func_0x00010c08fa60(param_2);
    func_0x00010be50680(puVar1);
    _objc_release(lStack_50);
    param_1 = lStack_48;
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104ec17e0; end: 104ec17f3;  */

void FUN_104ec17e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104ec17f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104ec17f4; end: 104ec193f; -[SCLensRemoteApiTokenManager _performTokenExchangeWithSpecId:authCode:withCompletionQueue:completionHandler:] */

void FUN_104ec17f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104ec1940;
  puStack_68 = &UNK_110858130;
  uStack_60 = param_3;
  uStack_58 = param_5;
  uStack_50 = uVar2;
  uStack_48 = param_6;
  _objc_retain(uVar2);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f90a0(uVar1,param_2,param_3,param_4,0,&puStack_80);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104ec1940; end: 104ec1b33;  */

void FUN_104ec1940(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_8 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b1c98;
    _objc_alloc(PTR_PTR_1126b1c98);
    func_0x00010c04ada0(param_1 + (double)param_5);
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    _objc_retain(uVar2);
    func_0x00010c28f1c0(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_104ec1b34;
    puStack_88 = &UNK_11084aaa8;
    puVar1 = *(undefined **)(param_2 + 0x38);
    _objc_retain(puVar1);
    puStack_78 = puVar1;
    _objc_retain(param_8);
    lStack_80 = param_8;
    func_0x00010007380c(uVar3,&puStack_a0);
    _objc_release(lStack_80);
    puVar1 = puStack_78;
  }
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ec1b34; end: 104ec1b57;  */

void FUN_104ec1b34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104ec1b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104ec1b58; end: 104ec1bdb; +[SCLensRemoteApiTokenManager earlyReturn:completion:] */

void FUN_104ec1b58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104ec1bdc;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010007380c(param_3,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_4);
  return;
}



/* Entry: 104ec1bdc; end: 104ec1bef;  */

void FUN_104ec1bdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104ec1bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 104ec1bf0; end: 104ec1ca3; +[SCLensRemoteApiTokenManager _logAuthFlowFailureWithLogger:specId:lensId:error:isUserCancelled:] */

void FUN_104ec1bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_7 & 1) == 0) {
    func_0x00010bf3ec40();
  }
  uVar1 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c129be0();
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ec1ca4; end: 104ec1ceb; -[SCLensRemoteApiTokenManager .cxx_destruct] */

void FUN_104ec1ca4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ec1cec; end: 104ec2087; -[SCLensProcessingURIServiceRemoteApiModuleHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ec1cec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  lVar16 = (long)_DAT_112715fc8;
  lVar17 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar2 = lVar17;
  func_0x00010bf07dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  puVar3 = PTR_PTR_1126b1ca0;
  _objc_alloc();
  func_0x00010bff3dc0();
  puVar4 = PTR_PTR_1126b1ca8;
  _objc_alloc();
  lVar17 = param_1 + _DAT_112715fcc;
  _objc_loadWeakRetained();
  lVar5 = lVar17;
  func_0x00010c273120();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112715fd0;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c096680();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112715fd4;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c0966a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112715fd8;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010bf39900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053f40(puVar4,param_2,lVar5,lVar7,puVar1,lVar9,puVar3,lVar11);
  uVar15 = *(undefined8 *)(param_1 + _DAT_112715fdc);
  *(undefined **)(param_1 + _DAT_112715fdc) = puVar4;
  _objc_release(uVar15);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar17);
  puVar12 = PTR_PTR_1126b1cb0;
  _objc_alloc(PTR_PTR_1126b1cb0);
  func_0x00010c0199e0();
  lVar17 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar17);
  lVar6 = lVar17;
  func_0x00010c28f2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar6);
  _objc_release(lVar17);
  lVar17 = param_1 + _DAT_112715fe0;
  _objc_loadWeakRetained();
  lVar6 = lVar17;
  func_0x00010bf229c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010c0d3c80();
  _objc_release(lVar6);
  _objc_release(lVar17);
  puVar4 = (undefined *)(param_1 + lVar16);
  _objc_loadWeakRetained();
  puVar13 = puVar4;
  func_0x00010bf04ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar14 = puVar13;
  func_0x00010bf22020(puVar13,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (puVar14 != (undefined *)0x0) {
    puVar4 = puVar14;
  }
  func_0x00010befa160(lVar8,param_2,puVar4);
  _objc_release(puVar14);
  lVar17 = (long)_DAT_112715fe4;
  _objc_retain(lVar8);
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  *(long *)(param_1 + lVar17) = lVar8;
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(param_1 + _DAT_112715fe8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104ec2088;
  puStack_70 = &UNK_110858160;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x104ec20e4;
  puStack_a0 = &UNK_110844e40;
  lStack_98 = lVar8;
  puStack_90 = puVar1;
  lStack_68 = lVar2;
  _objc_retain(puVar1);
  _objc_retain(lVar8);
  _objc_retain(lVar2);
  func_0x00010bf9d5c0(uVar15,param_2,&puStack_88,&puStack_b8);
  _objc_release(puStack_90);
  _objc_release(lStack_98);
  _objc_release(lStack_68);
  _objc_release(puVar1);
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar3);
  return;
}



/* Entry: 104ec2088; end: 104ec2143;  */

void FUN_104ec2088(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1cb8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c0373e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ec2144; end: 104ec21af; -[SCLensProcessingURIServiceRemoteApiModuleHandlerEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ec2144(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c137fe0(*(undefined8 *)(param_1 + _DAT_112715fdc));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112715fe4);
  *(undefined8 *)(param_1 + _DAT_112715fe4) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126e4d20;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ec21b0; end: 104ec2247; -[SCLensProcessingURIServiceRemoteApiModuleHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ec21b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112715fe8,0);
  _objc_destroyWeak(param_1 + _DAT_112715fe0);
  _objc_destroyWeak(param_1 + _DAT_112715fd8);
  _objc_destroyWeak(param_1 + _DAT_112715fcc);
  _objc_destroyWeak(param_1 + _DAT_112715fd0);
  _objc_destroyWeak(param_1 + _DAT_112715fd4);
  _objc_destroyWeak(param_1 + _DAT_112715fc8);
  _objc_storeStrong(param_1 + _DAT_112715fe4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112715fdc,0);
  return;
}



/* Entry: 104ec2248; end: 104ec2383; -[SCRemoteApiLensProcessingMetadataProvider initWithAppliedEffectsObservable:] */

undefined8 * FUN_104ec2248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e4d28;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,puVar1);
    _objc_copyWeak(auStack_50,auStack_48);
    uVar3 = param_3;
    func_0x00010c25ff60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104ec2384; end: 104ec23d3;  */

void FUN_104ec2384(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ec23d4; end: 104ec255b; -[SCRemoteApiLensProcessingMetadataProvider getAppliedEffectMetadataWithLensId:completion:] */

void FUN_104ec23d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c268560(uVar1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x104ec24bc;
  puStack_48 = &UNK_110858190;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ec255c; end: 104ec25a3;  */

undefined8 FUN_104ec255c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 104ec25a4; end: 104ec25df; -[SCRemoteApiLensProcessingMetadataProvider .cxx_destruct] */

void FUN_104ec25a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ec25e0; end: 104ec275f; -[SCLensRemoteApiModuleUriHandler initWithTokenManager:remoteApiLogger:apiServicePlugins:remoteApiRpcHandler:remoteApiLensMetadataProvider:circumstanceEngine:] */

undefined1 *
FUN_104ec25e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e4d30;
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
    uVar2 = param_5;
    func_0x00010c268560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ec2760; end: 104ec28cf; -[SCLensRemoteApiModuleUriHandler handleWithRequest:completion:] */

void FUN_104ec2760(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010beb72a0();
  if ((int)lVar1 == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010bfc2680(uVar3);
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else {
    uVar2 = param_3;
    func_0x00010c08fb40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2f100(param_1);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ec28d0; end: 104ec292b;  */

void FUN_104ec28d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be2f100(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ec292c; end: 104ec298f; -[SCLensRemoteApiModuleUriHandler reset] */

void FUN_104ec292c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c25ff60(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110858218);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ec2990; end: 104ec2ae3;  */

long FUN_104ec2990(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(param_2);
      }
      uVar6 = *(undefined8 *)(lVar7 * 8);
      uVar2 = uVar6;
      func_0x00010c135640();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c06f880();
      _objc_release(uVar2);
      if ((int)uVar3 != 0) {
        func_0x00010c135640(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c137fe0();
        _objc_release(uVar2);
        _objc_release(uVar6);
      }
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
    lVar1 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_2;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)(param_2 + 0x30);
  func_0x00010c269d40(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bf1f440();
  _objc_release(lVar4);
  return lVar1;
}



/* Entry: 104ec2ae4; end: 104ec2b33; -[SCLensRemoteApiModuleUriHandler _shouldUseLensFromRequest] */

undefined8 FUN_104ec2ae4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f440();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104ec2b34; end: 104ec315b; -[SCLensRemoteApiModuleUriHandler _handleRequest:metadata:completion:] */

void FUN_104ec2b34(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x00010c28f280();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f5860();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar3 < (undefined *)0x2) {
    _objc_opt_class(param_1);
    puVar1 = param_3;
    func_0x00010c28f280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd25e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,param_1);
    _objc_release(param_1);
    goto LAB_104ec30d0;
  }
  puVar2 = param_3;
  func_0x00010c28f280();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0f5860();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf32ee0();
  puVar7 = param_3;
  puVar3 = param_3;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010bdcc920();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c2481e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c08fa60();
    _objc_release(puVar4);
    if (puVar5 != (undefined *)0x0) {
      puVar4 = puVar2;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c08fa60();
      _objc_release(puVar4);
      if ((puVar5 != (undefined *)0x0) &&
         ((puVar4 = param_1, func_0x00010be41340(), ((ulong)puVar4 & 1) != 0 ||
          (uVar6 = param_4, func_0x00010c137aa0(), (int)uVar6 != 0)))) {
        func_0x00010bfe5ec0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28f280(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be72540(param_1);
        goto LAB_104ec2f2c;
      }
    }
    _objc_opt_class(param_1);
    func_0x00010c28f280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd25e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,param_1);
    _objc_release(param_1);
  }
  else {
    puVar4 = puVar1;
    func_0x00010bf32ee0();
    puVar2 = PTR_PTR_1126b1cc0;
    if (puVar4 == (undefined *)0x0) {
      puVar4 = param_3;
      func_0x00010bf1e9c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f40e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = puVar2;
      func_0x00010bf04bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c08fa60();
      _objc_release(puVar4);
      if (puVar5 == (undefined *)0x0) {
LAB_104ec2ed8:
        _objc_opt_class(param_1);
        func_0x00010c28f280(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdd25e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_5 + 0x10))(param_5,param_1);
        puVar3 = param_1;
      }
      else {
        func_0x00010c28f280(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c094540(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdddf60(param_1);
      }
    }
    else {
      puVar4 = puVar1;
      func_0x00010bf32ee0();
      puVar2 = PTR_PTR_1126b1cc8;
      if (puVar4 != (undefined *)0x0) {
        puVar3 = puVar1;
        func_0x00010bf32ee0();
        puVar2 = PTR_PTR_1126b1cd0;
        if (puVar3 == (undefined *)0x0) {
          puVar3 = param_3;
          func_0x00010bf1e9c0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f40e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          puVar3 = puVar2;
          func_0x00010bf04bc0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c08fa60();
          _objc_release(puVar3);
          if (puVar4 == (undefined *)0x0) {
            _objc_opt_class(param_1);
            func_0x00010c28f280(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdd25e0(param_1);
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(param_5 + 0x10))(param_5,param_1);
            puVar3 = param_1;
            goto LAB_104ec2f2c;
          }
          func_0x00010c28f280(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdfa9a0(param_1);
        }
        else {
          _objc_opt_class(param_1);
          puVar2 = param_3;
          func_0x00010c28f280(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdd25e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(param_5 + 0x10))(param_5,param_1);
          puVar7 = param_1;
        }
        goto LAB_104ec30c0;
      }
      puVar4 = param_3;
      func_0x00010bf1e9c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f40e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = puVar2;
      func_0x00010bf04bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c08fa60();
      _objc_release(puVar4);
      if (puVar5 == (undefined *)0x0) goto LAB_104ec2ed8;
      func_0x00010c28f280(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c094540(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bec08e0(param_1);
    }
LAB_104ec2f2c:
    _objc_release(puVar3);
  }
LAB_104ec30c0:
  _objc_release(puVar7);
  _objc_release(puVar2);
LAB_104ec30d0:
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ec315c; end: 104ec32d7; -[SCLensRemoteApiModuleUriHandler _checkOAuthStatus:uri:lensId:completion:] */

void FUN_104ec315c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf04bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104ec32d8;
  puStack_80 = &UNK_110858238;
  uStack_78 = param_4;
  uStack_70 = uVar3;
  uStack_68 = param_3;
  uStack_60 = param_5;
  uStack_58 = param_6;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010bf382c0(uVar1,param_2,uVar2,param_5,PTR___dispatch_main_q_11034be20,&puStack_98);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_58);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_6);
  return;
}



/* Entry: 104ec32d8; end: 104ec342f;  */

void FUN_104ec32d8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126b1ca8;
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf04bc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be568e0(puVar2);
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b1cd8;
    func_0x00010c0cb140(PTR_PTR_1126b1cd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0420();
    lVar6 = *(long *)(param_1 + 0x40);
    puVar3 = PTR_PTR_1126b1ce0;
    _objc_alloc(PTR_PTR_1126b1ce0);
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar5 = puVar2;
    func_0x00010bf63640(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c059e80(puVar3);
    (**(code **)(lVar6 + 0x10))(lVar6,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x40);
    func_0x00010bdddf80(PTR_PTR_1126b1ca8,param_2,param_3,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))(lVar6,puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104ec3430; end: 104ec376f; -[SCLensRemoteApiModuleUriHandler _startOAuthFlow:uri:lensId:completion:] */

void FUN_104ec3430(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf04bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c129c00(uVar1,param_2,uVar2,param_5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf04bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x104ec35f4;
  puStack_80 = &UNK_110858238;
  uStack_78 = param_4;
  uStack_70 = uVar3;
  uStack_68 = param_3;
  uStack_60 = param_5;
  uStack_58 = param_6;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c24f740(uVar1,param_2,uVar2,param_5,PTR___dispatch_main_q_11034be20,&puStack_98);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_58);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_6);
  return;
}



/* Entry: 104ec3770; end: 104ec38eb; -[SCLensRemoteApiModuleUriHandler _performRemoteApiCall:requestIdentifier:uri:completion:] */

void FUN_104ec3770(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ec38ec; end: 104ec3943;  */

void FUN_104ec38ec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2d3a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ec3944; end: 104ec3bf3; -[SCLensRemoteApiModuleUriHandler _handleAsRemoteApiWithRequest:uri:completion:] */

void FUN_104ec3944(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf95e20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c2481e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c094540(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c129d40(uVar1,param_3,uVar2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0998a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _CACurrentMediaTime();
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c2481e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf95e20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c094540(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010c080020(param_4);
  uVar8 = param_4;
  func_0x00010c0f3900(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010bf1e9c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104ec3cb4;
  puStack_a0 = &UNK_1108582d8;
  uStack_98 = uVar1;
  uStack_90 = param_4;
  uStack_88 = param_5;
  uStack_80 = param_6;
  uStack_78 = param_1;
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(uVar1);
  func_0x00010bfd02a0(uVar5,param_3,uVar2,uVar4,uVar6,uVar7,uVar8,uVar9,uVar3,&puStack_b8);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uStack_88);
  _objc_release(uStack_80);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return;
}



/* Entry: 104ec3bf4; end: 104ec3cb3;  */

void FUN_104ec3bf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b1cf0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c086560(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c085300(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c05a120(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ec3cb4; end: 104ec40e3;  */

void FUN_104ec3cb4(double param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,ulong param_6,long param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _CACurrentMediaTime();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720((param_1 - *(double *)(param_2 + 0x40)) * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bf95e20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c2481e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c094540(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0(puVar2);
  if (param_7 == 0) {
    func_0x00010c129d80(uVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar6 = param_4;
    func_0x00010c0d3c80();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    uVar15 = param_6;
    func_0x00010bf529e0();
    if (uVar15 != 0) {
      _objc_retain(param_6);
      puVar7 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      _objc_alloc_init(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
      uVar15 = param_6;
      func_0x00010bf529e0();
      if (uVar15 != 0) {
        uVar15 = 0;
        do {
          uVar9 = param_6;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010c28f340();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar10;
          func_0x00010beec820();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar9;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar12;
          func_0x00010bf15de0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf06ba0(puVar7);
          _objc_release(uVar13);
          _objc_release(uVar12);
          _objc_release(uVar11);
          _objc_release(uVar10);
          uVar10 = uVar9;
          func_0x00010c085300();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar10;
          func_0x00010c08fa60();
          _objc_release(uVar10);
          if (uVar11 != 0) {
            uVar10 = uVar9;
            func_0x00010c085300();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar10;
            func_0x00010bf15de0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf06ba0(puVar7);
            _objc_release(uVar11);
            _objc_release(uVar10);
          }
          uVar10 = param_6;
          func_0x00010bf529e0();
          if (uVar15 != uVar10 - 1) {
            func_0x00010bf070e0(puVar7);
          }
          _objc_release(uVar9);
          uVar15 = uVar15 + 1;
          uVar9 = param_6;
          func_0x00010bf529e0();
        } while (uVar15 < uVar9);
      }
      _objc_release(param_6);
      func_0x00010c1d0640(puVar6);
      _objc_release(puVar7);
    }
    lVar14 = *(long *)(param_2 + 0x38);
    puVar7 = PTR_PTR_1126b1ce0;
    _objc_alloc(PTR_PTR_1126b1ce0);
    func_0x00010c059e80();
    (**(code **)(lVar14 + 0x10))(lVar14,puVar7);
  }
  else {
    func_0x00010c129d60();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar14 = *(long *)(param_2 + 0x38);
    puVar7 = PTR_PTR_1126b1ce0;
    _objc_alloc(PTR_PTR_1126b1ce0);
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x00010c059e80(puVar7);
    (**(code **)(lVar14 + 0x10))(lVar14,puVar7);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104ec40e4; end: 104ec4177; +[SCLensRemoteApiModuleUriHandler _showErrorDialogIfNeeded:] */

void FUN_104ec40e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0720c0();
  if ((int)lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar2 = param_3;
    func_0x00010bf3ec40();
    _objc_release(lVar1);
    if (lVar2 == 1) goto LAB_104ec4164;
  }
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&PTR___NSConcreteGlobalBlock_110858308);
LAB_104ec4164:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ec4178; end: 104ec4323;  */

void FUN_104ec4178(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126aed70;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010b75e3bc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar3 = puVar2;
  FUN_104ec5fb0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000104ec5fc8();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c1417c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c10eda0(puVar6);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104ec4324; end: 104ec4333;  */

void FUN_104ec4324(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104ec4334; end: 104ec44e3; -[SCLensRemoteApiModuleUriHandler _deleteTokens:uri:completion:] */

void FUN_104ec4334(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf04bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x104ec4444;
  puStack_58 = &UNK_110858070;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf6ba80(uVar2,param_2,uVar1,0,&puStack_70);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 104ec44e4; end: 104ec4667; +[SCLensRemoteApiModuleUriHandler _logOAuthFlowCompleteWithLogger:apiSpecId:lensId:error:success:] */

void FUN_104ec44e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,int param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar3 = param_3;
  if ((param_6 == 0) && (param_7 != 0)) {
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c129c20();
  }
  else {
    lVar1 = param_6;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0720c0();
    _objc_release(lVar1);
    if ((int)lVar2 == 0) {
      if (param_6 == 0) goto LAB_104ec4638;
      func_0x00010c269d40(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar1 = param_6;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      func_0x00010c269d40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3ec40(param_6);
    }
    func_0x00010c129c40();
  }
  _objc_release(uVar3);
LAB_104ec4638:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ec4668; end: 104ec46ff; +[SCLensRemoteApiModuleUriHandler _badRequestResponseWithURI:description:] */

void FUN_104ec4668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1ce0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x00010c059e80(puVar1,param_2,param_3,400,param_4,puVar2,0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ec4700; end: 104ec48c3; +[SCLensRemoteApiModuleUriHandler _checkOAuthStatusResponseFromError:uri:] */

void FUN_104ec4700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar5 = PTR_PTR_1126b1ce0;
    _objc_alloc(PTR_PTR_1126b1ce0);
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x00010c059e80(puVar5,param_2,param_4,500,0,puVar6,0);
  }
  else {
    puVar6 = PTR_PTR_1126b1cd8;
    func_0x00010c0cb140(PTR_PTR_1126b1cd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0420();
    _objc_opt_class(param_1);
    uVar1 = param_3;
    func_0x00010bf3ec40(param_3);
    uVar2 = param_3;
    func_0x00010c292820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be5fe00(param_1,param_2,uVar1,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1971a0(puVar6,param_2,param_1);
    _objc_release(param_1);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126b1ce0;
    _objc_alloc(PTR_PTR_1126b1ce0);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar4 = puVar6;
    func_0x00010bf63640(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c059e80(puVar5,param_2,param_4,200,0,puVar3,puVar4);
    _objc_release(param_4);
    _objc_release(puVar4);
    param_4 = puVar3;
  }
  _objc_release(param_4);
  _objc_release(puVar6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104ec48c4; end: 104ec4a87; +[SCLensRemoteApiModuleUriHandler _startAuthResponseFromError:uri:] */

void FUN_104ec48c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar5 = PTR_PTR_1126b1ce0;
    _objc_alloc(PTR_PTR_1126b1ce0);
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x00010c059e80(puVar5,param_2,param_4,500,0,puVar6,0);
  }
  else {
    puVar6 = PTR_PTR_1126b1cd8;
    func_0x00010c0cb140(PTR_PTR_1126b1cd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0420();
    _objc_opt_class(param_1);
    uVar1 = param_3;
    func_0x00010bf3ec40(param_3);
    uVar2 = param_3;
    func_0x00010c292820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be5fe00(param_1,param_2,uVar1,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1971a0(puVar6,param_2,param_1);
    _objc_release(param_1);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126b1ce0;
    _objc_alloc(PTR_PTR_1126b1ce0);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar4 = puVar6;
    func_0x00010bf63640(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c059e80(puVar5,param_2,param_4,200,0,puVar3,puVar4);
    _objc_release(param_4);
    _objc_release(puVar4);
    param_4 = puVar3;
  }
  _objc_release(param_4);
  _objc_release(puVar6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104ec4a88; end: 104ec4b47; +[SCLensRemoteApiModuleUriHandler _messageFromCode:userInfo:] */

void FUN_104ec4a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f2d318);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db9878;
  if (param_4 != (undefined **)0x0) {
    ppuVar1 = param_4;
  }
  _objc_retain(ppuVar1);
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9978);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ec4b48; end: 104ec4f4b; -[SCLensRemoteApiModuleUriHandler _handleOnPlugInsRegistered:requestIdentifier:request:uri:completion:] */

void FUN_104ec4b48(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar13 = *(ulong *)(lVar12 * 8);
        uVar3 = uVar13;
        func_0x00010c263280();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf00560();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf43280();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(uVar3);
        uVar6 = param_5;
        func_0x00010c2481e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        func_0x00010bf4b900();
        if ((uVar3 & 1) == 0) {
          _objc_release(uVar6);
        }
        else {
          func_0x00010c263140();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = param_5;
          func_0x00010bf95e20(param_5);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar13;
          func_0x00010bf4b900();
          _objc_release(uVar10);
          _objc_release(uVar13);
          _objc_release(uVar6);
          if ((int)uVar3 != 0) {
            func_0x00010be25d20(param_1);
            _objc_release(uVar5);
            _objc_release(param_3);
            goto LAB_104ec4dd0;
          }
        }
        _objc_release(uVar5);
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
  }
  uVar6 = param_5;
  func_0x00010bf4b880();
  if ((int)uVar6 == 0) {
    uVar6 = param_5;
    func_0x00010bf4b820();
    puVar7 = PTR_PTR_1126b0250;
    if ((int)uVar6 == 0) {
      uVar6 = param_5;
      func_0x00010c2481e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c075f40();
      _objc_release(uVar6);
      if ((int)puVar7 != 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_5;
        func_0x00010bf95e20(param_5);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = param_5;
        func_0x00010c2481e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = param_5;
        func_0x00010c094540(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c129d20(uVar8);
        _objc_release(uVar9);
        _objc_release(uVar10);
        _objc_release(uVar6);
        _objc_release(uVar8);
        uVar10 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar10;
        func_0x00010bf1f440();
        _objc_release(uVar10);
        if ((int)uVar6 != 0) {
          _objc_opt_class(param_1);
          goto LAB_104ec4da0;
        }
      }
      func_0x00010be25d40(param_1);
      goto LAB_104ec4dd0;
    }
    _objc_opt_class(param_1);
  }
  else {
    _objc_opt_class(param_1);
  }
LAB_104ec4da0:
  func_0x00010bdd25e0();
  _objc_retainAutoreleasedReturnValue();
  param_2 = param_1;
  (**(code **)(param_7 + 0x10))(param_7,param_1);
  _objc_release(param_1);
LAB_104ec4dd0:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfe5f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_identifierObjc_1125d7190);
  return;
}



/* Entry: 104ec4f4c; end: 104ec4f53;  */

void FUN_104ec4f4c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_identifierObjc_1125d7190);
  return;
}



/* Entry: 104ec4f54; end: 104ec5097; -[SCLensRemoteApiModuleUriHandler _handleAsApiPlugin:uri:request:completion:] */

void FUN_104ec4f54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c135640(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd2440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104ec5098;
  puStack_68 = &UNK_110858388;
  uStack_60 = param_4;
  uStack_58 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_4);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 104ec5098; end: 104ec53f3;  */

void FUN_104ec5098(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c252ee0(param_2);
  func_0x00010c0df780(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar1 = param_2;
  func_0x00010c0998a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (uVar8 != 0) {
    uVar1 = param_2;
    func_0x00010c0998a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
    uVar8 = uVar1;
    func_0x00010bf529e0();
    if (uVar8 != 0) {
      uVar8 = 0;
      do {
        uVar5 = uVar1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ba0(puVar3);
        _objc_release(uVar7);
        _objc_release(uVar6);
        uVar6 = uVar5;
        func_0x00010c086560();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar6 != 0) {
          uVar6 = uVar5;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010bf15de0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf06ba0(puVar3);
          _objc_release(uVar7);
          _objc_release(uVar6);
        }
        uVar6 = uVar5;
        func_0x00010c085300();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar6 != 0) {
          uVar6 = uVar5;
          func_0x00010c085300();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010bf15de0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf06ba0(puVar3);
          _objc_release(uVar7);
          _objc_release(uVar6);
        }
        uVar6 = uVar1;
        func_0x00010bf529e0();
        if (uVar8 != uVar6 - 1) {
          func_0x00010bf070e0(puVar3);
        }
        _objc_release(uVar5);
        uVar8 = uVar8 + 1;
        uVar5 = uVar1;
        func_0x00010bf529e0();
      } while (uVar8 < uVar5);
    }
    func_0x00010c1d0640(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar1);
  }
  puVar3 = PTR_PTR_1126b1ce0;
  _objc_alloc(PTR_PTR_1126b1ce0);
  uVar1 = param_2;
  func_0x00010bf1e9c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059e80(puVar3);
  _objc_release(uVar1);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ec53f4; end: 104ec5d87; -[SCLensRemoteApiModuleUriHandler _apiRequestFromUriRequest:metadata:] */

undefined *
FUN_104ec53f4(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  ulong uVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined **ppuVar29;
  undefined *puVar30;
  undefined **ppuStack_2d8;
  undefined *puStack_2c0;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar2 = param_3;
  func_0x00010c28f280();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c0f5860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  ppuVar2 = ppuVar3;
  func_0x00010bf529e0();
  if (ppuVar2 != (undefined **)0x4) {
    puVar24 = (undefined *)0x0;
    goto LAB_104ec5d30;
  }
  ppuVar2 = ppuVar3;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = param_3;
  func_0x00010c28f280();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c11d080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010c08fa60();
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  puVar24 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  if (ppuVar7 == (undefined **)0x0) {
    uVar26 = 0;
  }
  else {
    ppuVar5 = param_3;
    func_0x00010c28f280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf44780();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar24;
    func_0x00010c11d4e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar24);
    _objc_release(ppuVar5);
    _objc_retain(puVar25);
    puVar24 = puVar25;
    func_0x00010bf52a60();
    lVar21 = lRam0000000000000000;
    if (puVar24 == (undefined *)0x0) {
      uVar26 = 0;
    }
    else {
      do {
        puVar28 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar21) {
            _objc_enumerationMutation(puVar25);
          }
          uVar26 = *(undefined8 *)((long)puVar28 * 8);
          uVar8 = uVar26;
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010c0720c0();
          _objc_release(uVar8);
          if ((int)uVar9 != 0) {
            func_0x00010c296d80();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_104ec5640;
          }
          puVar28 = puVar28 + 1;
        } while (puVar24 != puVar28);
        puVar24 = puVar25;
        func_0x00010bf52a60();
      } while (puVar24 != (undefined *)0x0);
      uVar26 = 0;
    }
LAB_104ec5640:
    _objc_release(puVar25);
    _objc_release(puVar25);
  }
  ppuVar5 = param_3;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c0d3c80();
  _objc_release(ppuVar5);
  ppuVar7 = ppuVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = (undefined *)0x0;
  ppuVar18 = param_3;
  if (ppuVar7 == (undefined **)0x0) {
LAB_104ec5c20:
    puVar24 = PTR_PTR_1126b1cf8;
    _objc_alloc();
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c080040(param_4);
    ppuVar29 = param_3;
    func_0x00010bf1e9c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar18;
    func_0x00010c03ef60();
    _objc_release(ppuVar29);
  }
  else {
    _objc_retain(ppuVar7);
    puVar24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    ppuVar5 = ppuVar7;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar5);
    ppuStack_2d8 = ppuVar5;
    func_0x00010bf52a60();
    lVar21 = lRam0000000000000000;
    if (ppuStack_2d8 != (undefined **)0x0) {
      do {
        ppuVar29 = (undefined **)0x0;
        do {
          if (lRam0000000000000000 != lVar21) {
            _objc_enumerationMutation(ppuVar5);
          }
          uVar10 = *(ulong *)((long)ppuVar29 * 8);
          func_0x00010bf44740();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar10;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          uVar22 = uVar11;
          func_0x00010c25d0a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          uVar23 = uVar22;
          func_0x00010c11f420();
          if (((uVar23 == 0x7fffffffffffffff) ||
              (uVar12 = uVar22, func_0x00010c11f420(), uVar12 == 0x7fffffffffffffff)) ||
             (uVar12 == 0)) {
LAB_104ec5830:
            uVar23 = 0;
          }
          else {
            if (((uVar12 - 1 < uVar23 + 1) ||
                (uVar13 = uVar22, func_0x00010c08fa60(), uVar13 <= uVar23 + 1)) ||
               (uVar23 = uVar22, func_0x00010c08fa60(), uVar23 <= uVar12 - 1)) goto LAB_104ec5830;
            uVar23 = uVar22;
            func_0x00010c260c80();
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(uVar22);
          _objc_release(uVar22);
          _objc_release(uVar11);
          if (uVar23 == 0) {
            _objc_release(uVar10);
            _objc_release(ppuVar5);
            puVar28 = (undefined *)0x0;
            goto LAB_104ec5bd4;
          }
          _objc_retain(uVar10);
          uVar11 = uVar10;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          if (uVar11 == 0) {
            puStack_2c0 = (undefined *)0x0;
            puVar28 = (undefined *)0x0;
          }
          else {
            puStack_2c0 = (undefined *)0x0;
            puVar28 = (undefined *)0x0;
            do {
              uVar22 = 0;
              do {
                puVar30 = puStack_2c0;
                ppuVar16 = &PTR____CFConstantStringClassReference_110db9798;
                if (lRam0000000000000000 != lVar1) {
                  _objc_enumerationMutation(uVar10);
                }
                uVar14 = *(ulong *)(uVar22 * 8);
                func_0x00010c25d0a0();
                _objc_retainAutoreleasedReturnValue();
                uVar12 = uVar14;
                func_0x00010bfda7c0();
                uVar13 = uVar14;
                if ((int)uVar12 == 0) {
                  uVar12 = uVar14;
                  func_0x00010bfda7c0();
                  if ((int)uVar12 != 0) {
                    _objc_retain(uVar14);
                    uVar12 = uVar14;
                    func_0x00010c11f420();
                    puVar15 = puVar28;
                    if (uVar12 != 0x7fffffffffffffff) {
                      func_0x00010c08fa60();
                      uVar17 = uVar14;
                      func_0x00010c08fa60();
                      if ((long)ppuVar16 + uVar12 < uVar17) {
                        func_0x00010c260c00(uVar14);
                        _objc_retainAutoreleasedReturnValue();
                        puVar30 = PTR__OBJC_CLASS___NSData_1126ae778;
                        func_0x00010c08fa60();
                        func_0x00010c08fa60(uVar13);
                        uVar12 = uVar13;
                        func_0x00010c25cf00(uVar13);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bf649e0();
                        _objc_retainAutoreleasedReturnValue();
                        puVar28 = puStack_2c0;
                        puStack_2c0 = puVar30;
                        goto LAB_104ec5a5c;
                      }
                    }
                    puStack_2c0 = (undefined *)0x0;
                    goto LAB_104ec5a88;
                  }
                }
                else {
                  _objc_retain(uVar14);
                  uVar12 = uVar14;
                  func_0x00010c11f420();
                  if (uVar12 != 0x7fffffffffffffff) {
                    ppuVar16 = &PTR____CFConstantStringClassReference_110db9778;
                    func_0x00010c08fa60();
                    uVar17 = uVar14;
                    func_0x00010c08fa60();
                    if ((long)ppuVar16 + uVar12 < uVar17) {
                      func_0x00010c260c00(uVar14);
                      _objc_retainAutoreleasedReturnValue();
                      puVar15 = PTR__OBJC_CLASS___NSData_1126ae778;
                      func_0x00010c08fa60();
                      func_0x00010c08fa60(uVar13);
                      uVar12 = uVar13;
                      func_0x00010c25cf00(uVar13);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bf649e0(puVar15);
                      _objc_retainAutoreleasedReturnValue();
LAB_104ec5a5c:
                      _objc_release(uVar12);
                      _objc_release(uVar13);
                      puVar30 = puVar28;
                      goto LAB_104ec5a88;
                    }
                  }
                  puVar15 = (undefined *)0x0;
                  puVar30 = puVar28;
LAB_104ec5a88:
                  _objc_release(uVar14);
                  _objc_release(puVar30);
                  puVar28 = puVar15;
                }
                _objc_release(uVar14);
                uVar22 = uVar22 + 1;
              } while (uVar11 != uVar22);
              uVar11 = uVar10;
              func_0x00010bf52a60();
            } while (uVar11 != 0);
          }
          _objc_release(uVar10);
          puVar30 = PTR_PTR_1126b1d00;
          _objc_alloc(PTR_PTR_1126b1d00);
          puVar15 = PTR__OBJC_CLASS___NSURL_1126ae598;
          _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
          func_0x00010c04e820();
          func_0x00010c05a120(puVar30);
          _objc_release(puVar15);
          func_0x00010befa120(puVar24);
          _objc_release(puVar30);
          _objc_release(puStack_2c0);
          _objc_release(puVar28);
          _objc_release(uVar23);
          _objc_release(uVar10);
          ppuVar29 = (undefined **)((long)ppuVar29 + 1);
        } while (ppuVar29 != ppuStack_2d8);
        ppuStack_2d8 = ppuVar5;
        func_0x00010bf52a60();
      } while (ppuStack_2d8 != (undefined **)0x0);
    }
    _objc_release(ppuVar5);
    puVar28 = puVar24;
    func_0x00010bf51e00();
LAB_104ec5bd4:
    _objc_release(puVar25);
    _objc_release(ppuVar5);
    _objc_release(puVar24);
    _objc_release(ppuVar7);
    puVar25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar28 != (undefined *)0x0) {
      func_0x00010c1d0640(ppuVar6);
      puVar25 = puVar28;
      goto LAB_104ec5c20;
    }
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110db99f8;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = (undefined *)0x0;
  }
  _objc_release(ppuVar18);
  _objc_release(puVar25);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(uVar26);
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
LAB_104ec5d30:
  _objc_release(ppuVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar24);
    return puVar24;
  }
  ___stack_chk_fail();
  puVar24 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c28f280(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf44780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  puVar28 = puVar24;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar25 = puVar28;
  func_0x00010bf52a60();
  lVar20 = lRam0000000000000000;
  do {
    if (puVar25 == (undefined *)0x0) {
      puVar25 = (undefined *)0x0;
LAB_104ec5eec:
      _objc_release(puVar28);
      _objc_release(puVar28);
      _objc_release(puVar24);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
        return puVar25;
      }
      ___stack_chk_fail();
      _objc_storeStrong(puVar24 + 0x38,0);
      _objc_storeStrong(puVar24 + 0x30,0);
      _objc_storeStrong(puVar24 + 0x28,0);
      _objc_storeStrong(puVar24 + 0x20,0);
      _objc_storeStrong(puVar24 + 0x18,0);
      _objc_storeStrong(puVar24 + 0x10,0);
      puVar24 = puVar24 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(puVar24,0);
      return puVar24;
    }
    puVar30 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar20) {
        _objc_enumerationMutation(puVar28);
      }
      puVar27 = *(undefined **)((long)puVar30 * 8);
      puVar15 = puVar27;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar15;
      func_0x00010c0720c0();
      _objc_release(puVar15);
      if (((ulong)puVar19 & 1) != 0) {
        func_0x00010c296d80(puVar27);
        _objc_retainAutoreleasedReturnValue();
        puVar25 = puVar27;
        func_0x00010bf1f3c0();
        _objc_release(puVar27);
        goto LAB_104ec5eec;
      }
      puVar30 = puVar30 + 1;
    } while (puVar25 != puVar30);
    puVar25 = puVar28;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 104ec5d88; end: 104ec5f43; -[SCLensRemoteApiModuleUriHandler _isInternalRemoteApiModuleUsageRequest:] */

undefined * FUN_104ec5d88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar2 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c28f280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf44780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar7 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (puVar7 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
LAB_104ec5eec:
      _objc_release(puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
        return puVar7;
      }
      ___stack_chk_fail();
      _objc_storeStrong(puVar2 + 0x38,0);
      _objc_storeStrong(puVar2 + 0x30,0);
      _objc_storeStrong(puVar2 + 0x28,0);
      _objc_storeStrong(puVar2 + 0x20,0);
      _objc_storeStrong(puVar2 + 0x18,0);
      _objc_storeStrong(puVar2 + 0x10,0);
      puVar2 = puVar2 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(puVar2,0);
      return puVar2;
    }
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      puVar8 = *(undefined **)((long)puVar9 * 8);
      puVar4 = puVar8;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0720c0();
      _objc_release(puVar4);
      if (((ulong)puVar5 & 1) != 0) {
        func_0x00010c296d80(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar8;
        func_0x00010bf1f3c0();
        _objc_release(puVar8);
        goto LAB_104ec5eec;
      }
      puVar9 = puVar9 + 1;
    } while (puVar7 != puVar9);
    puVar7 = puVar3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 104ec5f44; end: 104ec5faf; -[SCLensRemoteApiModuleUriHandler .cxx_destruct] */

void FUN_104ec5f44(long param_1)

{
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



/* Entry: 104ec5fb0; end: 104ec5fdf;  */

void FUN_104ec5fb0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db9ad8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db9ad8,
                      &PTR____CFConstantStringClassReference_110db9af8,0);
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



/* Entry: 104ec5fe0; end: 104ec6083; -[SCLensRemoteApiAuthenticationHandlerServices initWithAuthHandler:tokenManager:] */

undefined1 *
FUN_104ec5fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4d38;
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



/* Entry: 104ec6084; end: 104ec608b; -[SCLensRemoteApiAuthenticationHandlerServices authHandler] */

undefined8 FUN_104ec6084(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104ec608c; end: 104ec60bb; -[SCLensRemoteApiAuthenticationHandlerServices setAuthHandler:] */

void FUN_104ec608c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104ec60bc; end: 104ec60c3; -[SCLensRemoteApiAuthenticationHandlerServices tokenManager] */

undefined8 FUN_104ec60bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104ec60c4; end: 104ec60f3; -[SCLensRemoteApiAuthenticationHandlerServices setTokenManager:] */

void FUN_104ec60c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ec60f4; end: 104ec619f; -[SCLensRemoteApiAuthenticationHandlerServices .cxx_destruct] */

void FUN_104ec60f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ec61a0; end: 104ec61ab;  */

bool FUN_104ec61a0(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 104ec61ac; end: 104ec6213; +[SCLensRemoteApiGetOAuth2StatusRequest descriptor] */

void FUN_104ec61ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9118 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a06030,
                        &PTR____CFConstantStringClassReference_110db9b58,
                        &PTR_s_snapchat_lenses_1130ba378,&PTR_s_apiSpecId_1130ba390,1,0x10,0x1c);
    puRam00000001136b9118 = puVar1;
  }
  return;
}


