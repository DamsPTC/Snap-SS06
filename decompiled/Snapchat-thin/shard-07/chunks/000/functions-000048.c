/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1050eaa64; end: 1050eaa6b; -[SCProfileFlatlandMyProfileServices displaySnapcodeViewSubject] */

undefined8 FUN_1050eaa64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1050eaa6c; end: 1050eaa73; -[SCProfileFlatlandMyProfileServices transitionToViewStateSubject] */

undefined8 FUN_1050eaa6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1050eaa74; end: 1050eaa7b; -[SCProfileFlatlandMyProfileServices updateScrollPositionYSubject] */

undefined8 FUN_1050eaa74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1050eaa7c; end: 1050eaac3; -[SCProfileFlatlandMyProfileServices .cxx_destruct] */

void FUN_1050eaa7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050eaac4; end: 1050eab4b; -[SCCommunityWaitlistPillDialogActionDataModel initWithIsVerified:completionBlock:] */

undefined1 *
FUN_1050eaac4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e61a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1050eab4c; end: 1050eab6f; -[SCCommunityWaitlistPillDialogActionDataModel copyWithZone:] */

undefined8 FUN_1050eab4c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050eab70; end: 1050eab77; -[SCCommunityWaitlistPillDialogActionDataModel isVerified] */

undefined1 FUN_1050eab70(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1050eab78; end: 1050eab7f; -[SCCommunityWaitlistPillDialogActionDataModel completionBlock] */

undefined8 FUN_1050eab78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1050eab80; end: 1050eab8b; -[SCCommunityWaitlistPillDialogActionDataModel .cxx_destruct] */

void FUN_1050eab80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1050eab8c; end: 1050eac6b; -[SCProfileFlatlandIdentityPillDialogViewController initWithViewModel:valdiRuntimeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1050eab8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e61b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11271c0dc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271c0e0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    func_0x00010c189400(puVar1);
    func_0x00010c1c8b80(puVar1);
    func_0x00010c1c8c00(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050eac6c; end: 1050eafe7; -[SCProfileFlatlandIdentityPillDialogViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050eac6c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126b4788;
  _objc_alloc(PTR_PTR_1126b4788);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c00d1c0(puVar1);
  lVar6 = (long)_DAT_11271c0dc;
  uVar5 = *(ulong *)(param_1 + lVar6);
  puVar2 = PTR_PTR_1126b3d88;
  _objc_opt_class(PTR_PTR_1126b3d88);
  _objc_opt_isKindOfClass(uVar5,puVar2);
  if ((uVar5 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + lVar6);
    puVar2 = PTR_PTR_1126b3d98;
    _objc_opt_class(PTR_PTR_1126b3d98);
    _objc_opt_isKindOfClass(uVar5,puVar2);
    if ((uVar5 & 1) == 0) {
      uVar5 = *(ulong *)(param_1 + lVar6);
      puVar2 = PTR_PTR_1126b3da0;
      _objc_opt_class(PTR_PTR_1126b3da0);
      _objc_opt_isKindOfClass(uVar5,puVar2);
      if ((uVar5 & 1) == 0) {
        uVar5 = *(ulong *)(param_1 + lVar6);
        puVar2 = PTR_PTR_1126b3e60;
        _objc_opt_class(PTR_PTR_1126b3e60);
        _objc_opt_isKindOfClass(uVar5,puVar2);
        if ((uVar5 & 1) == 0) {
          uVar5 = *(ulong *)(param_1 + lVar6);
          puVar2 = PTR_PTR_1126b3d90;
          _objc_opt_class(PTR_PTR_1126b3d90);
          _objc_opt_isKindOfClass(uVar5,puVar2);
          if ((uVar5 & 1) == 0) {
            puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
            _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
            goto LAB_1050eaf64;
          }
          puVar2 = PTR_PTR_1126b4b48;
          _objc_alloc(PTR_PTR_1126b4b48);
          uVar3 = *(undefined8 *)(param_1 + _DAT_11271c0e0);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c142e00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c062020(puVar2);
        }
        else {
          puVar2 = PTR_PTR_1126b4b40;
          _objc_alloc(PTR_PTR_1126b4b40);
          uVar3 = *(undefined8 *)(param_1 + _DAT_11271c0e0);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c142e00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c062020(puVar2);
        }
      }
      else {
        puVar2 = PTR_PTR_1126b4b38;
        _objc_alloc(PTR_PTR_1126b4b38);
        uVar3 = *(undefined8 *)(param_1 + _DAT_11271c0e0);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c142e00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c062020(puVar2);
      }
    }
    else {
      puVar2 = PTR_PTR_1126b4b30;
      _objc_alloc(PTR_PTR_1126b4b30);
      uVar3 = *(undefined8 *)(param_1 + _DAT_11271c0e0);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c142e00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c062020(puVar2);
    }
  }
  else {
    puVar2 = PTR_PTR_1126b4b28;
    _objc_alloc(PTR_PTR_1126b4b28);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11271c0e0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c062020(puVar2);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
LAB_1050eaf64:
  func_0x00010c222380(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1050eafe8; end: 1050eb013;  */

void FUN_1050eafe8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050eb014; end: 1050eb06b; -[SCProfileFlatlandIdentityPillDialogViewController _dismissViewController] */

void FUN_1050eb014(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1050eb06c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1050eb06c; end: 1050eb07b;  */

void FUN_1050eb06c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1050eb07c; end: 1050eb087; -[SCProfileFlatlandIdentityPillDialogViewController defaultProjectNameV2] */

void FUN_1050eb07c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1164b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_profile_112623348);
  return;
}



/* Entry: 1050eb088; end: 1050eb093; -[SCProfileFlatlandIdentityPillDialogViewController defaultSubProjectName] */

undefined ** FUN_1050eb088(void)

{
  return &PTR____CFConstantStringClassReference_110dc5cf8;
}



/* Entry: 1050eb094; end: 1050eb09f; -[SCProfileFlatlandIdentityPillDialogViewController backgroundExitBehavior] */

void FUN_1050eb094(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9b830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aecb0,PTR_s_exitImmediately_1125c47b0);
  return;
}



/* Entry: 1050eb0a0; end: 1050eb0f3; -[SCProfileFlatlandIdentityPillDialogViewController exit:] */

void FUN_1050eb0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_3);
  func_0x00010bf098c0(puVar1);
  func_0x00010bf84b00(param_1,param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050eb0f4; end: 1050eb133; -[SCProfileFlatlandIdentityPillDialogViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050eb0f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271c0e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271c0dc,0);
  return;
}



/* Entry: 1050eb134; end: 1050eb1cf; -[SCProfileDeepLinkProcessor initWithGrapheneRegistry:navigationDelegate:] */

undefined1 *
FUN_1050eb134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e61b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050eb1d0; end: 1050eb26b; -[SCProfileDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_1050eb1d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bee5b00(param_1,param_2,param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10d100();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x00010bf94720(param_5,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1050eb26c; end: 1050eb273; -[SCProfileDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_1050eb26c(void)

{
  return 1;
}



/* Entry: 1050eb274; end: 1050eb277; -[SCProfileDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_1050eb274(void)

{
  return;
}



/* Entry: 1050eb278; end: 1050eb3d7; -[SCProfileDeepLinkProcessor _uploadMetricsForURL:] */

void FUN_1050eb278(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4b50;
  func_0x00010bf68ac0(PTR_PTR_1126b4b50);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    uVar3 = param_3;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    bVar1 = (int)uVar4 == 0;
    uVar5 = 0xf;
    if (bVar1) {
      uVar5 = 0;
    }
    ppuVar8 = &PTR____CFConstantStringClassReference_110dc5d78;
    if (bVar1) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110dc3a38;
    }
  }
  else {
    uVar5 = 0xd;
    ppuVar8 = &PTR____CFConstantStringClassReference_110dc5d38;
  }
  func_0x00010bb0584c(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,uVar5,ppuVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar5);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c117600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050eb3d8; end: 1050eb403; -[SCProfileDeepLinkProcessor .cxx_destruct] */

void FUN_1050eb3d8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050eb404; end: 1050eb49f; -[SCProfileDeepLinkProcessorPlugin initWithGrapheneRegistry:navigationDelegate:] */

undefined1 *
FUN_1050eb404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e61c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050eb4a0; end: 1050eb4b3; -[SCProfileDeepLinkProcessorPlugin identifier] */

void FUN_1050eb4a0(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 1050eb4b4; end: 1050eb4bb; -[SCProfileDeepLinkProcessorPlugin priority] */

undefined8 FUN_1050eb4b4(void)

{
  return 1000;
}



/* Entry: 1050eb4bc; end: 1050eb4cf; -[SCProfileDeepLinkProcessorPlugin canProvideProcessorForFeature:] */

void FUN_1050eb4bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110db7358);
  return;
}



/* Entry: 1050eb4d0; end: 1050eb51b; -[SCProfileDeepLinkProcessorPlugin isValidDeepLink:] */

undefined8 FUN_1050eb4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d2a0(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1050eb51c; end: 1050eb57f; -[SCProfileDeepLinkProcessorPlugin makeDeepLinkProcessor] */

void FUN_1050eb51c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b4b58;
  _objc_alloc(PTR_PTR_1126b4b58);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0186e0(puVar1,param_2,uVar2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050eb580; end: 1050eb5ab; -[SCProfileDeepLinkProcessorPlugin .cxx_destruct] */

void FUN_1050eb580(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050eb5ac; end: 1050eb6bf; -[SCProfileDeepLinkProcessorPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050eb5ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b4b60;
  _objc_alloc(PTR_PTR_1126b4b60);
  lVar2 = param_1 + _DAT_11271c0f4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11271c0f8;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0186e0(puVar1,param_2,lVar3,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11271c0fc;
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



/* Entry: 1050eb6c0; end: 1050eb70f; -[SCProfileDeepLinkProcessorPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050eb6c0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271c0f4);
  _objc_destroyWeak(param_1 + _DAT_11271c0f8);
  _objc_destroyWeak(param_1 + _DAT_11271c100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271c0fc);
  return;
}



/* Entry: 1050eb710; end: 1050eb73b; +[SCGrapheneProfiledeeplinkMetric deeplinkhandled] */

void FUN_1050eb710(void)

{
  _objc_alloc(PTR_PTR_1126b4b50);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050eb73c; end: 1050eb7db; -[SCGrapheneProfiledeeplinkMetric description] */

void FUN_1050eb73c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc5d98;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dc5d98,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e61c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1050eb7dc; end: 1050eb91f; -[SCGrapheneRegistry profiledeeplinkGraphene] */

void FUN_1050eb7dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1050eb864;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b93d0 != -1) {
    func_0x00010002a2fc(0x1136b93d0,&puStack_48);
  }
  uVar1 = uRam00000001136b93c8;
  _objc_retain(uRam00000001136b93c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1050eb920; end: 1050eb9bb; -[SCFriendProfilePageLaunchHandler initWithFriendProfileScopeExposer:mainTabNavigationServices:] */

undefined1 *
FUN_1050eb920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e61d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x18) = 9;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050eb9bc; end: 1050ebb27; -[SCFriendProfilePageLaunchHandler launchWithCommand:uiContainer:completion:] */

void FUN_1050eb9bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf2a020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c2366c0(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050ebb28; end: 1050ebb5b;  */

void FUN_1050ebb28(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8d220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050ebb5c; end: 1050ebbd7; -[SCFriendProfilePageLaunchHandler friendProfileDidDismiss:] */

void FUN_1050ebb5c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1050ebbd8; end: 1050ebc83; -[SCFriendProfilePageLaunchHandler _removeScopeAndlaunchWithPageLaunchCommand:uiContainer:] */

void FUN_1050ebbd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  func_0x00010be48a20(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050ebc84; end: 1050ebde3; -[SCFriendProfilePageLaunchHandler _launchWithCommand:uiContainer:] */

void FUN_1050ebc84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bfb86c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfb25e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b3fa0;
  _objc_alloc();
  uStack_a0 = 0x1f;
  uStack_98 = 1;
  uStack_88 = 0x11;
  uStack_90 = 0xffffffffcf5d0adf;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 1;
  _objc_retain(uVar3);
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = uVar3;
  if (puVar4 == (undefined *)0x0) {
    _objc_release(uVar3);
  }
  else {
    func_0x00010c015a00(puVar4,param_2,&uStack_a0,param_4,uVar2,param_1);
  }
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050ebde4; end: 1050ebdeb; -[SCFriendProfilePageLaunchHandler screen] */

undefined4 FUN_1050ebde4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 1050ebdec; end: 1050ebe13; -[SCFriendProfilePageLaunchHandler .cxx_destruct] */

void FUN_1050ebdec(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1050ebe14; end: 1050ebecf; -[SCGroupProfilePageLaunchHandler initWithGroupProfileScopeExposer:navigationServices:mainTabNavigationServices:] */

undefined1 *
FUN_1050ebe14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e61d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x20) = 0x26;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050ebed0; end: 1050ec027; -[SCGroupProfilePageLaunchHandler launchWithCommand:uiContainer:completion:] */

void FUN_1050ebed0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf2a020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  func_0x00010c2366c0(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050ec028; end: 1050ec05b;  */

void FUN_1050ec028(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8d200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050ec05c; end: 1050ec0d7; -[SCGroupProfilePageLaunchHandler groupProfileWillDimiss:] */

void FUN_1050ec05c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1050ec0d8; end: 1050ec0db; -[SCGroupProfilePageLaunchHandler groupProfileDidDimiss:withRequestedFriendshipProfile:] */

void FUN_1050ec0d8(void)

{
  return;
}



/* Entry: 1050ec0dc; end: 1050ec0df; -[SCGroupProfilePageLaunchHandler groupProfileDidDismiss:withRequestedChat:deeplinkType:] */

void FUN_1050ec0dc(void)

{
  return;
}



/* Entry: 1050ec0e0; end: 1050ec16b; -[SCGroupProfilePageLaunchHandler _removeScopeAndlaunchWithPageLaunchCommand:] */

void FUN_1050ec0e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  func_0x00010be48a40(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050ec16c; end: 1050ec2af; -[SCGroupProfilePageLaunchHandler _launchWithPageLaunchCommand:] */

void FUN_1050ec16c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  func_0x00010bfcf0a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b4b68;
  _objc_alloc(PTR_PTR_1126b4b68);
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0029c0(puVar2,param_2,lVar6,uVar1,0x1f,param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c1b9580(puVar2,param_2,1);
  uVar7 = param_3;
  func_0x00010bfb25e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19dc20(puVar2,param_2,uVar7);
  _objc_release(uVar7);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050ec2b0; end: 1050ec2b7; -[SCGroupProfilePageLaunchHandler screen] */

undefined4 FUN_1050ec2b0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 1050ec2b8; end: 1050ec2e7; -[SCGroupProfilePageLaunchHandler .cxx_destruct] */

void FUN_1050ec2b8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1050ec2e8; end: 1050ec573; -[SCProfilePageLauncherPlugin initWithMainTabNavigationServices:unifiedPublicProfilesPresenterScopeExposer:navigationServices:storyPlayerCreator:friendProfileScopeExposer:groupProfileScopeExposer:feedCardRequestSender:] */

undefined8 *
FUN_1050ec2e8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_90 = PTR_PTR_1126e61e0;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar9 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar9;
    func_0x00010bf56860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    uVar9 = param_5;
    func_0x00010c0d66a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e1580(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar9);
    puVar4 = PTR_PTR_1126b4b70;
    _objc_alloc();
    func_0x00010c028080();
    puVar5 = PTR_PTR_1126b4b78;
    _objc_alloc();
    func_0x00010c028060();
    puVar6 = PTR_PTR_1126b4b80;
    _objc_alloc();
    func_0x00010c015920();
    puVar7 = PTR_PTR_1126b4b88;
    _objc_alloc();
    func_0x00010c019220();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar4;
    puStack_80 = puVar5;
    puStack_78 = puVar6;
    puStack_70 = puVar7;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar1[1];
    puVar1[1] = puVar8;
    _objc_release(uVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  return *(undefined8 **)(param_3 + 8);
}



/* Entry: 1050ec574; end: 1050ec57b; -[SCProfilePageLauncherPlugin handlers] */

undefined8 FUN_1050ec574(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1050ec57c; end: 1050ec5ab; -[SCProfilePageLauncherPlugin setHandlers:] */

void FUN_1050ec57c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1050ec5ac; end: 1050ec5b7; -[SCProfilePageLauncherPlugin .cxx_destruct] */

void FUN_1050ec5ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050ec5b8; end: 1050ec7db; -[SCProfilePageLauncherPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050ec5b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lVar1 = param_1 + _DAT_11271c124;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfa37e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1050ec7dc;
  puStack_70 = &UNK_110867208;
  puVar4 = PTR_PTR_1126ae720;
  lStack_68 = lVar3;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b4b90;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11271c128;
  _objc_loadWeakRetained(lVar1);
  uVar11 = *(undefined8 *)(param_1 + _DAT_11271c12c);
  lVar2 = param_1 + _DAT_11271c130;
  _objc_loadWeakRetained(lVar2);
  lVar6 = param_1 + _DAT_11271c134;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bfea2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bfea320();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bfea2c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0280a0(puVar5,param_2,lVar1,uVar11,lVar2,lVar10,
                      *(undefined8 *)(param_1 + _DAT_11271c138),
                      *(undefined8 *)(param_1 + _DAT_11271c13c),puVar4);
  uVar11 = *(undefined8 *)(param_1 + _DAT_11271c140);
  *(undefined **)(param_1 + _DAT_11271c140) = puVar5;
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_11271c144;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(lVar3);
  return;
}



/* Entry: 1050ec7dc; end: 1050ec7e3;  */

void FUN_1050ec7dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf56190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_createFeedCardRequestSender_1125b3208);
  return;
}



/* Entry: 1050ec7e4; end: 1050ec87f; -[SCProfilePageLauncherPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050ec7e4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271c13c,0);
  _objc_storeStrong(param_1 + _DAT_11271c138,0);
  _objc_storeStrong(param_1 + _DAT_11271c12c,0);
  _objc_destroyWeak(param_1 + _DAT_11271c124);
  _objc_destroyWeak(param_1 + _DAT_11271c134);
  _objc_destroyWeak(param_1 + _DAT_11271c130);
  _objc_destroyWeak(param_1 + _DAT_11271c128);
  _objc_destroyWeak(param_1 + _DAT_11271c144);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271c140,0);
  return;
}



/* Entry: 1050ec880; end: 1050ec99b; -[SCPublicProfilePageLaunchHandler initWithMainTabNavigationServices:unifiedPublicProfilesPresenterScopeExposer:navigationServices:storyPlayer:feedCardRequestSender:] */

undefined1 *
FUN_1050ec880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e61e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x50) = 5;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050ec99c; end: 1050ecc23; -[SCPublicProfilePageLaunchHandler launchWithCommand:uiContainer:completion:] */

void FUN_1050ec99c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c11a640();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2926c0();
  uVar3 = uVar1;
  func_0x00010bf4c300(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf4c300();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf4dac0();
  _objc_release(uVar4);
  if ((int)uVar2 == 1) {
    uVar2 = param_3;
    func_0x00010c11a640();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1050ecc24;
    puStack_80 = &UNK_110849530;
    _objc_retain(param_5);
    uStack_78 = param_5;
    func_0x00010be7dde0(param_1);
    _objc_release(uStack_78);
  }
  else if ((int)uVar5 == 2) {
    _objc_initWeak(auStack_a0,param_1);
    uVar2 = uVar3;
    func_0x00010c259cc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1050ecc3c;
    puStack_b0 = &UNK_110867238;
    _objc_copyWeak(auStack_a8,auStack_a0);
    _objc_copyWeak(auStack_d0,auStack_a0);
    func_0x00010be13ac0(param_1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_a0);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050ecc24; end: 1050ecc3b;  */

void FUN_1050ecc24(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001050ecc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 1050ecc3c; end: 1050eccaf;  */

void FUN_1050ecc3c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be78f60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050eccb0; end: 1050ece37; -[SCPublicProfilePageLaunchHandler _alertGenericError] */

void FUN_1050eccb0(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc34d8;
  uVar7 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc34d8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar4);
  _objc_release(ppuVar1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 1050ece38; end: 1050ece47;  */

void FUN_1050ece38(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1050ece48; end: 1050ed06b; -[SCPublicProfilePageLaunchHandler _fetchSavedStoryWithStoryId:successBlock:failureBlock:] */

void FUN_1050ece48(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b4b98;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126b4ba0;
  _objc_opt_new(PTR_PTR_1126b4ba0);
  puVar3 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar2,param_3,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar2,param_3,(long)(param_1 * 1000.0));
  _objc_release(puVar3);
  func_0x00010c17d080(puVar2,param_3,1);
  puVar3 = PTR_PTR_1126b1080;
  _objc_opt_new(PTR_PTR_1126b1080);
  func_0x00010c1843a0();
  func_0x00010c1a99c0(puVar3,param_3,param_4);
  _objc_release(param_4);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b4ba8;
  _objc_opt_new(PTR_PTR_1126b4ba8);
  func_0x00010c19af80();
  func_0x00010befa120(puVar4,param_3,puVar5);
  func_0x00010c17d060(puVar1,param_3,puVar2);
  func_0x00010c1c0ec0(puVar1,param_3,puVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1050ed06c;
  puStack_68 = &UNK_110867288;
  uStack_60 = param_6;
  uStack_58 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfa6b40(uVar6,param_3,puVar1,PTR___dispatch_main_q_11034be20,&puStack_80);
  _objc_release(uVar6);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1050ed06c; end: 1050ed0fb;  */

void FUN_1050ed06c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if (param_3 != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  uVar1 = param_2;
  func_0x00010bfa3700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050ed0fc; end: 1050ed2d7; -[SCPublicProfilePageLaunchHandler _preparePublicProfilePageAndPlaySavedStoryWithFeedCard:] */

void FUN_1050ed0fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4bb0;
  uVar7 = param_3;
  func_0x00010bfa36a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lStack_68 = 0;
  func_0x00010c0f40e0(puVar2,param_2,uVar7,&lStack_68);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_68;
  _objc_retain(lStack_68);
  _objc_release(uVar7);
  if ((lVar1 == 0) && (puVar2 != (undefined *)0x0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c11a640();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf5b080(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c0720c0(uVar7,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar7);
    _objc_release(uVar3);
    if ((int)uVar6 == 0) {
      func_0x00010bdc9be0(param_1);
    }
    else {
      puVar4 = puVar2;
      func_0x00010bf5b080();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      *(undefined **)(param_1 + 0x20) = puVar5;
      _objc_release(uVar7);
      _objc_release(puVar4);
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_1050ed2d8;
      puStack_80 = &UNK_110841f80;
      lStack_78 = param_1;
      _objc_retain(param_3);
      uStack_70 = param_3;
      func_0x00010be7dde0(param_1,param_2,uVar6,uVar7,&puStack_98);
      _objc_release(uStack_70);
    }
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1050ed2d8; end: 1050ed2e3;  */

void FUN_1050ed2d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be748f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__playSavedStoryWithFeedCard__11257abd8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1050ed2e4; end: 1050ed39b; -[SCPublicProfilePageLaunchHandler _playSavedStoryWithFeedCard:] */

void FUN_1050ed2e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c11a640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf4c300();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  func_0x00010c0fe940(*(undefined8 *)(param_1 + 0x38),param_2,param_3,0,0,0,0,0x16,uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1050ed39c; end: 1050ed59f; -[SCPublicProfilePageLaunchHandler _presentPublicProfile:uiContainer:completion:] */

void FUN_1050ed39c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) {
    lVar3 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar3);
    lVar1 = lVar3;
    func_0x00010c0d6760();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    param_4 = param_1;
    func_0x00010bdf5280(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126b0f10;
      _objc_alloc(PTR_PTR_1126b0f10);
      uVar5 = param_3;
      func_0x000107aeba50(param_3);
      func_0x00010c033440(puVar4,param_2,uVar5,0,0);
      puVar6 = PTR_PTR_1126b0f18;
      _objc_alloc(PTR_PTR_1126b0f18);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = param_3;
      func_0x00010c11a640(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010c078840();
      func_0x00010bff9da0(puVar6,param_2,uVar9,puVar4,0,0,uVar8,0,0,0);
      _objc_release(uVar5);
      func_0x00010c1cd960(puVar6,param_2,0x32);
      func_0x00010c1cd9a0(puVar6,param_2,0x20e40509);
      puVar7 = PTR_PTR_1126b0f20;
      _objc_alloc(PTR_PTR_1126b0f20);
      func_0x00010c056680();
      uVar5 = param_5;
      _objc_retainBlock();
      uVar8 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = uVar5;
      _objc_release(uVar8);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar4);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050ed5a0; end: 1050ed637; -[SCPublicProfilePageLaunchHandler _createUiContainerWithNavigationDelegate:] */

void FUN_1050ed5a0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_topmostViewController_11267b0f0);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_3;
    func_0x00010c275b20();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      puVar2 = PTR_PTR_1126b1030;
      _objc_alloc(PTR_PTR_1126b1030);
      func_0x00010c039440();
      _objc_release(uVar1);
      goto LAB_1050ed61c;
    }
  }
  puVar2 = (undefined *)0x0;
LAB_1050ed61c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050ed638; end: 1050ed67f; -[SCPublicProfilePageLaunchHandler unifiedPublicProfilesPresenterScopeDidFinishPresentingViewController:] */

void FUN_1050ed638(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x38));
  if (*(long *)(param_1 + 0x48) != 0) {
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1050ed680; end: 1050ed6c7; -[SCPublicProfilePageLaunchHandler unifiedPublicProfilesPresenterScopeDidComplete] */

void FUN_1050ed680(long param_1)

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



/* Entry: 1050ed6c8; end: 1050ed6cb; -[SCPublicProfilePageLaunchHandler swipeInteractionPresenter:didStartPresentingWithSwipeDirection:] */

void FUN_1050ed6c8(void)

{
  return;
}



/* Entry: 1050ed6cc; end: 1050ed6cf; -[SCPublicProfilePageLaunchHandler swipeInteractionPresenterDidFinishDismissing:] */

void FUN_1050ed6cc(void)

{
  return;
}



/* Entry: 1050ed6d0; end: 1050ed6d7; -[SCPublicProfilePageLaunchHandler swipeInteractionPresenter:swipeEnabledWithDirection:] */

undefined8 FUN_1050ed6d0(void)

{
  return 0;
}



/* Entry: 1050ed6d8; end: 1050ed6df; -[SCPublicProfilePageLaunchHandler screen] */

undefined4 FUN_1050ed6d8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



/* Entry: 1050ed6e0; end: 1050ed75b; -[SCPublicProfilePageLaunchHandler .cxx_destruct] */

void FUN_1050ed6e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1050ed75c; end: 1050ed81f; -[SCPublisherProfilePageLaunchHandler initWithMainTabNavigationServices:unifiedPublicProfilesPresenterScopeExposer:navigationServices:] */

undefined1 *
FUN_1050ed75c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e61f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x20) = 10;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050ed820; end: 1050eda33; -[SCPublisherProfilePageLaunchHandler launchWithCommand:uiContainer:completion:] */

void FUN_1050ed820(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) {
    lVar3 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar3);
    lVar1 = lVar3;
    func_0x00010c0d6760();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    param_4 = lVar2;
    func_0x00010c0cf9a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    puVar4 = PTR_PTR_1126b0f10;
    _objc_alloc(PTR_PTR_1126b0f10);
    uVar5 = param_3;
    func_0x000107aeba50(param_3);
    func_0x00010c033440(puVar4,param_2,uVar5,0,0);
    puVar6 = PTR_PTR_1126b0f18;
    _objc_alloc(PTR_PTR_1126b0f18);
    uVar5 = param_3;
    func_0x00010c11b440(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c11b440(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c078840();
    func_0x00010bff9da0(puVar6,param_2,uVar7,puVar4,0,0,uVar9,0,0,0);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    func_0x00010c1cd960(puVar6,param_2,0x32);
    func_0x00010c1cd9a0(puVar6,param_2,0x4a68a6a6);
    puVar10 = PTR_PTR_1126b0f20;
    _objc_alloc(PTR_PTR_1126b0f20);
    func_0x00010c056680();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar10);
    _objc_release(puVar10);
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050eda34; end: 1050eda7b; -[SCPublisherProfilePageLaunchHandler unifiedPublicProfilesPresenterScopeDidComplete] */

void FUN_1050eda34(long param_1)

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



/* Entry: 1050eda7c; end: 1050eda83; -[SCPublisherProfilePageLaunchHandler screen] */

undefined4 FUN_1050eda7c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 1050eda84; end: 1050edab7; -[SCPublisherProfilePageLaunchHandler .cxx_destruct] */

void FUN_1050eda84(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1050edab8; end: 1050edc43; -[SCScanResultsSnapcodeAddFriendViewModelProvider initWithFriendProfileScopeExposer:bitmojiSelfieFetcher:snapchatterPublicInfoFetcher:snapProProfilesProvider:sessionLogger:performer:] */

undefined1 *
FUN_1050edab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e61f8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_8;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050edc44; end: 1050edc6f; -[SCScanResultsSnapcodeAddFriendViewModelProvider end] */

void FUN_1050edc44(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050edc70; end: 1050edc97; -[SCScanResultsSnapcodeAddFriendViewModelProvider scanResultViewModels] */

void FUN_1050edc70(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1050edc98; end: 1050eddd3; -[SCScanResultsSnapcodeAddFriendViewModelProvider configureWithContext:] */

void FUN_1050edc98(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
    _objc_initWeak(auStack_48,param_1);
    lVar2 = param_3;
    func_0x00010c2450c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    lVar4 = lVar3;
    func_0x00010c25ff60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1050eddd4; end: 1050ede1b;  */

void FUN_1050eddd4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be308e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050ede1c; end: 1050edf77; -[SCScanResultsSnapcodeAddFriendViewModelProvider _handleSnapcodeMetadata:] */

void FUN_1050ede1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c28ff20();
  if (lVar1 == 1) {
    puVar2 = PTR_PTR_1126b4bb8;
    _objc_alloc(PTR_PTR_1126b4bb8);
    lVar3 = param_3;
    func_0x00010c0f6420(param_3);
    _objc_retainAutoreleasedReturnValue();
    lStack_58 = 0;
    func_0x00010c008360(puVar2,param_2,lVar3,&lStack_58);
    lVar1 = lStack_58;
    _objc_release(lVar3);
    if (lVar1 == 0) {
      puVar4 = puVar2;
      func_0x00010c2923e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beb9320(param_1,param_2,puVar4);
      _objc_release(puVar4);
      puVar4 = puVar2;
      func_0x00010c2923e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c294d60();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010c14f740(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be08660(param_1,param_2,puVar4,lVar3,lVar5);
      _objc_release(lVar5);
      _objc_release(lVar3);
      _objc_release(lVar1);
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1050edf78; end: 1050ee143; -[SCScanResultsSnapcodeAddFriendViewModelProvider _emitViewModelForSnapchatterWithUserId:decodedUuid:scannableId:] */

void FUN_1050edf78(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_60 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_68;
  _objc_copyWeak(auStack_70);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c09d7c0(uVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(puVar5);
  puVar4 = puVar5;
  func_0x00010bf529e0();
  if (puVar4 == (undefined1 *)0x1) {
    param_3 = param_3 + 0x30;
    _objc_loadWeakRetained(param_3);
    puVar4 = puVar5;
    func_0x00010bfb1920(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be08620(param_3);
    _objc_release(puVar4);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1050ee144; end: 1050ee1c7;  */

void FUN_1050ee144(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 1) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be08620(param_1);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050ee1c8; end: 1050ee49b; -[SCScanResultsSnapcodeAddFriendViewModelProvider _emitViewModelForSnapchatter:decodedUuid:scannableId:] */

void FUN_1050ee1c8(long param_1,undefined1 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  lVar1 = param_3;
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010c242760();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      _objc_initWeak(auStack_78,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c242760();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_70 = lVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010c1176c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar8;
      func_0x00010bfb0d80();
      _objc_retainAutoreleasedReturnValue();
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_1050ee49c;
      puStack_a0 = &UNK_1108672b8;
      _objc_retain(param_3);
      param_2 = auStack_78;
      lStack_98 = param_3;
      _objc_copyWeak(auStack_80,param_2);
      _objc_retain(param_4);
      uStack_90 = param_4;
      _objc_retain(param_5);
      uVar7 = uVar6;
      uStack_88 = param_5;
      func_0x00010c25ff60(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar8);
      _objc_release(puVar5);
      _objc_release(lVar1);
      _objc_release(uVar4);
      _objc_release(uStack_88);
      _objc_release(uStack_90);
      _objc_destroyWeak(auStack_80);
      _objc_release(lStack_98);
      _objc_destroyWeak(auStack_78);
      goto LAB_1050ee404;
    }
    func_0x00010c294420(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010be08640(param_1);
  _objc_release(lVar1);
LAB_1050ee404:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  lVar1 = param_3;
  __Unwind_Resume();
  pcStack_c8 = FUN_1050ee49c;
  lStack_f0 = param_1;
  uStack_e8 = param_5;
  uStack_e0 = param_4;
  lStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_1050ee5ac;
  uStack_100 = 0x1050ee5bc;
  uVar8 = *(undefined8 *)(lVar1 + 0x20);
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = uVar8;
  func_0x00010c0c0800(param_2);
  lVar1 = lVar1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be08640();
  _objc_release(lVar1);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(uStack_f8);
  _objc_release(param_2);
  return;
}



/* Entry: 1050ee49c; end: 1050ee5ab;  */

void FUN_1050ee49c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1050ee5ac;
  uStack_40 = 0x1050ee5bc;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = uVar1;
  func_0x00010c0c0800(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be08640();
  _objc_release(param_1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1050ee5ac; end: 1050ee5c3;  */

void FUN_1050ee5ac(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1050ee5c4; end: 1050ee67f;  */

void FUN_1050ee5c4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 != 0) {
    lVar1 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = lVar2;
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050ee680; end: 1050eea5b; -[SCScanResultsSnapcodeAddFriendViewModelProvider _emitViewModelForSnapchatter:withDisplayName:decodedUuid:scannableId:] */

void FUN_1050ee680(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar10 = param_6;
  _objc_retain();
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bed20;
  FUN_1050ef2f4();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_70 = uVar10;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_initWeak(auStack_80,param_1);
  puVar2 = PTR_PTR_1126aef38;
  _objc_alloc(PTR_PTR_1126aef38);
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010c0d83a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x00010c0d83a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae6b8;
  func_0x00010c0d83a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  func_0x00010c0048e0(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = PTR_PTR_1126aef40;
  _objc_alloc(PTR_PTR_1126aef40);
  lVar6 = param_1;
  func_0x00010bdd4a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aef30;
  lVar7 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020120(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar7);
  _objc_release(lVar6);
  puVar3 = PTR_PTR_1126aef48;
  puVar5 = PTR_PTR_1126aef50;
  _objc_alloc(PTR_PTR_1126aef50);
  func_0x00010c05a5c0();
  func_0x00010c2453a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126aef58;
  _objc_alloc(PTR_PTR_1126aef58);
  puVar8 = puVar5;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b920(puVar5);
  _objc_release(puVar9);
  _objc_release(puVar8);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  lVar6 = param_3 + 0x28;
  _objc_loadWeakRetained(lVar6);
  uVar10 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c2923e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb9320(lVar6);
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}


