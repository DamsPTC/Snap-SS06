/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a10e7c; end: 107a11327; -[SCStoryManagementActionHandler initWithUserSession:storyId:storyType:myStoriesDataCoordinator:playbackManagementDataProvider:storiesMediaCoordinator:saveStoryScopeExposer:storyShareScopeExposer:storyShareScopeServices:circumstanceEngine:snapchattersSynchronousDataFetcher:standardExternalContentShareScopeExposer:externalLinkSendingService:safetyReportScopeExposer:saveFriendStoryOperaPluginProvider:bloopsReportScopeExposer:temporaryFileWriter:ourStoriesAttributionManager:ourStorySnapPlaybackInfos:] */

undefined8 *
FUN_107a10e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
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
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126f94c0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    puVar1[3] = param_5;
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_20;
    _objc_release(uVar2);
    uVar2 = param_21;
    func_0x00010bf51e00();
    uVar4 = puVar1[0x16];
    puVar1[0x16] = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126b12c0;
    _objc_alloc();
    func_0x00010c05e460();
    uVar4 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126afea0);
    uVar2 = uVar4;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar5);
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126afea0);
    uVar2 = uVar4;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_retain(param_13);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_19;
    _objc_release(uVar2);
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
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
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107a11328; end: 107a11337;  */

void FUN_107a11328(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_deleteStorySnapScopeLauncher_1125b8c68);
  return;
}



/* Entry: 107a11338; end: 107a11967; -[SCStoryManagementActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_107a11338(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar6 = param_4;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d5e38;
  _objc_opt_class(PTR_PTR_1126d5e38);
  uVar3 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar1 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  uVar6 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c0720c0();
  _objc_release(uVar6);
  uVar6 = uVar1;
  if ((int)uVar3 == 0) {
    uVar3 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    uVar3 = uVar1;
    if ((int)uVar4 != 0) {
      func_0x00010bf3cf60(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf25140(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdfa760(param_1);
LAB_107a1147c:
      _objc_release(uVar3);
      goto LAB_107a11488;
    }
    uVar4 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    if ((int)uVar5 != 0) {
      uVar6 = *(ulong *)(param_1 + 0x20);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3cf60(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13fa00(uVar6);
      _objc_release(uVar3);
      goto LAB_107a11488;
    }
    uVar4 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    if ((int)uVar5 != 0) {
      func_0x00010bf3cf60(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5b440(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010bf625e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bebaf80(param_1);
      _objc_release(uVar4);
      goto LAB_107a1147c;
    }
    uVar6 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar6);
    if ((int)uVar3 == 0) {
      uVar6 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x00010c0720c0();
      _objc_release(uVar6);
      if ((int)uVar3 == 0) {
        uVar6 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar6;
        func_0x00010c0720c0();
        _objc_release(uVar6);
        if ((int)uVar3 == 0) {
          uVar6 = param_4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar6;
          func_0x00010c0720c0();
          if ((int)uVar3 == 0) {
            uVar3 = param_4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010c0720c0();
            _objc_release(uVar3);
            _objc_release(uVar6);
            if ((int)uVar4 == 0) {
              uVar7 = *(undefined8 *)(param_1 + 0x48);
              func_0x00010bfd0140(uVar7);
              goto LAB_107a11490;
            }
          }
          else {
            _objc_release(uVar6);
          }
          uVar7 = 1;
          func_0x00010bf83dc0(*(undefined8 *)(param_1 + 0x68));
          goto LAB_107a11490;
        }
        uVar3 = param_4;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126b11d0;
        _objc_opt_class(PTR_PTR_1126b11d0);
        uVar4 = uVar3;
        _objc_opt_isKindOfClass(uVar3,puVar2);
        uVar6 = uVar3;
        if ((uVar4 & 1) == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar3);
        _objc_initWeak(auStack_58,param_1);
        uVar7 = *(undefined8 *)(param_1 + 0x68);
        _objc_copyWeak(auStack_c0,auStack_58);
        _objc_retain(uVar6);
        func_0x00010bf83dc0(uVar7);
        _objc_release(uVar6);
        _objc_destroyWeak(auStack_c0);
        _objc_destroyWeak(auStack_58);
        goto LAB_107a11488;
      }
      _objc_initWeak(auStack_58,param_1);
      uVar3 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b11d0;
      _objc_opt_class(PTR_PTR_1126b11d0);
      uVar4 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar2);
      uVar6 = uVar3;
      if ((uVar4 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar3);
      uVar7 = *(undefined8 *)(param_1 + 0x68);
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      uStack_a8 = 0x107a119c0;
      puStack_a0 = &UNK_110841fb0;
      ppuVar8 = &puStack_b8;
      _objc_copyWeak(auStack_90,auStack_58);
      _objc_retain(uVar6);
      uStack_98 = uVar6;
      func_0x00010bf83dc0(uVar7);
      uVar3 = uStack_98;
    }
    else {
      _objc_initWeak(auStack_58,param_1);
      uVar3 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b11d0;
      _objc_opt_class(PTR_PTR_1126b11d0);
      uVar4 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar2);
      uVar6 = uVar3;
      if ((uVar4 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar3);
      uVar7 = *(undefined8 *)(param_1 + 0x68);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_107a11968;
      puStack_70 = &UNK_110841fb0;
      ppuVar8 = &puStack_88;
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(uVar6);
      uStack_68 = uVar6;
      func_0x00010bf83dc0(uVar7);
      uVar3 = uStack_68;
    }
    _objc_release(uVar3);
    _objc_destroyWeak(ppuVar8 + 5);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_58);
  }
  else {
    func_0x00010bf3cf60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be99be0(param_1);
LAB_107a11488:
    _objc_release(uVar6);
  }
  uVar7 = 1;
LAB_107a11490:
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 107a11968; end: 107a11a67;  */

void FUN_107a11968(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c23f800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfa760(lVar1,param_2,uVar2,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a11a68; end: 107a11b33; -[SCStoryManagementActionHandler _saveSnapWithClientId:] */

void FUN_107a11a68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0xc0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c25a220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar4 = PTR_PTR_1126b10b0;
  _objc_alloc(PTR_PTR_1126b10b0);
  func_0x00010bfff0a0();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x50),param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107a11b34; end: 107a11b53; -[SCStoryManagementActionHandler didCompleteSaveStoryScope:] */

void FUN_107a11b34(long param_1)

{
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x50));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 107a11b54; end: 107a11d6b; -[SCStoryManagementActionHandler _deleteSnapWithClientId:businessProfileId:] */

void FUN_107a11b54(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = param_1 + 0xb8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar4 != 0) {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc();
    lVar4 = param_1 + 0xb8;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c038f40(puVar1,param_2,lVar4,1);
    _objc_release(lVar4);
    lVar4 = param_4;
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR_PTR_1126cc630;
      _objc_alloc(PTR_PTR_1126cc630);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e43098);
      func_0x00010bff3f60(puVar7,param_2,0,param_4,uVar2);
    }
    puVar3 = PTR_PTR_1126b10b8;
    _objc_alloc();
    lVar6 = 0;
    func_0x00010bfff000();
    lVar4 = *(long *)(param_1 + 0x60);
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010bf239c0(lVar4,param_2,puVar5,puVar1,param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010bfe63a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08b7c0();
      _objc_release(uVar2);
      _objc_release(lVar6);
      lVar6 = param_1;
    }
    _objc_release(lVar4);
    _objc_release(puVar3);
    _objc_release(puVar7);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar6);
  lVar4 = param_3 + 0xc0;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c25a360();
  _objc_release(lVar6);
  _objc_release(lVar4);
  uVar2 = *(undefined8 *)(param_3 + 0x58);
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107a11d6c; end: 107a11ddb; -[SCStoryManagementActionHandler didSelectDeleteStorySnaps:clientIdsBeingDeleted:] */

void FUN_107a11d6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0xc0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c25a360();
  _objc_release(param_4);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107a11ddc; end: 107a11e0f; -[SCStoryManagementActionHandler didCancelDeleteStorySnap] */

void FUN_107a11ddc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bfe63a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a11e10; end: 107a11e13; -[SCStoryManagementActionHandler didDeleteSnapProStorySnaps:] */

void FUN_107a11e10(void)

{
  return;
}



/* Entry: 107a11e14; end: 107a11eb3; -[SCStoryManagementActionHandler _sendSnapWithClientId:] */

void FUN_107a11e14(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_1 + 0xb8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf22b60(uVar2,param_2,param_3,uVar3,lVar1,0xb8,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x38),param_2,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a11eb4; end: 107a11efb; -[SCStoryManagementActionHandler didCompleteStoryShareScope] */

void FUN_107a11eb4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107a11efc; end: 107a121ab; -[SCStoryManagementActionHandler _showSnapActionMenuForClientId:creatorId:customStoryOwnerId:] */

void FUN_107a11efc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b1200;
  _objc_alloc(PTR_PTR_1126b1200);
  func_0x00010c063540();
  func_0x00010c1059a0(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
  if (*(long *)(param_1 + 0x18) == 2) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2923e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0720c0(param_4,param_2,uVar2);
    if ((uVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c2923e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0(param_5,param_2,uVar4);
      _objc_release(uVar4);
    }
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(param_4,param_2,uVar2);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b11f8;
  _objc_alloc(PTR_PTR_1126b11f8);
  func_0x00010c04e300();
  puVar6 = PTR_PTR_1126b1208;
  _objc_alloc();
  uVar2 = 0x12;
  func_0x00010bc9107c(0x12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02b180(puVar6,param_2,puVar5,puVar1,0,0,uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar6;
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x68),param_2,param_1);
  lVar7 = param_1 + 0xc0;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c25a220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107a121ac;
  puStack_78 = &UNK_110841f80;
  lStack_70 = lVar8;
  lStack_68 = lVar7;
  _objc_retain();
  _objc_retain(lVar8);
  func_0x00010c10d0e0(uVar2,param_2,lVar8,&puStack_90);
  _objc_release(lStack_68);
  _objc_release(lStack_70);
  _objc_release(lVar7);
  _objc_release(lVar8);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a121ac; end: 107a12237;  */

void FUN_107a121ac(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_1126a4f48;
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010010fab4(lVar4,puVar2);
  lVar1 = lVar4;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar4);
  if (lVar1 != 0) {
    func_0x00010c29e000(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6200();
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a12238; end: 107a122ef; -[SCStoryManagementActionHandler unifiedActionMenuPresenterDidDismiss:] */

void FUN_107a12238(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar3);
  param_1 = param_1 + 0xc0;
  _objc_loadWeakRetained();
  lVar4 = param_1;
  func_0x00010c25a220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_DAT_1126a4f48;
  _objc_retain(lVar4);
  lVar5 = lVar4;
  func_0x00010010fab4(lVar4,puVar2);
  lVar1 = lVar4;
  if ((int)lVar5 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar4);
  if (lVar1 != 0) {
    lVar5 = lVar4;
    func_0x00010c29e000(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13d1c0();
    _objc_release(lVar5);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107a122f0; end: 107a122f3; -[SCStoryManagementActionHandler unifiedActionMenuPresenterWillDismiss:] */

void FUN_107a122f0(void)

{
  return;
}



/* Entry: 107a122f4; end: 107a1230b; -[SCStoryManagementActionHandler presentingViewController] */

void FUN_107a122f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a1230c; end: 107a12317; -[SCStoryManagementActionHandler setPresentingViewController:] */

void FUN_107a1230c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xb8,param_3);
  return;
}



/* Entry: 107a12318; end: 107a1232f; -[SCStoryManagementActionHandler delegate] */

void FUN_107a12318(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a12330; end: 107a1233b; -[SCStoryManagementActionHandler setDelegate:] */

void FUN_107a12330(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xc0,param_3);
  return;
}



/* Entry: 107a1233c; end: 107a1245f; -[SCStoryManagementActionHandler .cxx_destruct] */

void FUN_107a1233c(long param_1)

{
  _objc_destroyWeak(param_1 + 0xc0);
  _objc_destroyWeak(param_1 + 0xb8);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a12460; end: 107a127f7; -[SCStoryManagementOverlayLayer initWithPage:] */

undefined1 * FUN_107a12460(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f94c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar6 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(ulong *)((long)puVar1 + 0x10) = uVar6;
    _objc_release(uVar5);
    uVar6 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c2827c0();
    *(ulong *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c2827c0();
    *(ulong *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c2827c0();
    *(ulong *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c2827c0();
    *(ulong *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    _objc_release(uVar6);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d5e08;
    _objc_opt_class(PTR_PTR_1126d5e08);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar6 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x38);
    *(ulong *)((long)puVar1 + 0x38) = uVar6;
    _objc_release(uVar5);
    uVar6 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c2827c0();
    *(ulong *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 0xc) = (char)uVar2;
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 0xd) = (char)uVar2;
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c2827c0();
    *(ulong *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 0xe) = (char)uVar2;
    _objc_release(uVar6);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a127f8; end: 107a12843; +[SCStoryManagementOverlayLayer layerWithPage:] */

void FUN_107a127f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5e10;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a12844; end: 107a1284b; -[SCStoryManagementOverlayLayer type] */

undefined8 FUN_107a12844(void)

{
  return 0x19;
}



/* Entry: 107a1284c; end: 107a12857; -[SCStoryManagementOverlayLayer layerViewControllerClass] */

void FUN_107a1284c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d5e50);
  return;
}



/* Entry: 107a12858; end: 107a12a07; -[SCStoryManagementOverlayLayer isEqual:] */

bool FUN_107a12858(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    puVar4 = PTR_PTR_1126d5e10;
    _objc_opt_class(PTR_PTR_1126d5e10);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    uVar1 = param_3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    if (uVar1 == 0) {
      bVar3 = false;
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x10);
      uVar5 = param_3;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      if (((((uVar6 == uVar5) &&
            (uVar7 = *(ulong *)(param_1 + 0x18), uVar6 = param_3, func_0x00010c29ebc0(),
            uVar7 == uVar6)) &&
           (uVar7 = *(ulong *)(param_1 + 0x20), uVar6 = param_3, func_0x00010c29ebe0(),
           uVar7 == uVar6)) &&
          ((((uVar7 = *(ulong *)(param_1 + 0x28), uVar6 = param_3, func_0x00010c1518e0(),
             uVar7 == uVar6 &&
             (uVar7 = *(ulong *)(param_1 + 0x30), uVar6 = param_3, func_0x00010c151900(),
             uVar7 == uVar6)) &&
            ((bVar2 = *(byte *)(param_1 + 8), uVar6 = param_3, func_0x00010bf9fe20(),
             (uint)bVar2 == (uint)uVar6 &&
             ((bVar2 = *(byte *)(param_1 + 9), uVar6 = param_3, func_0x00010c28eca0(),
              (uint)bVar2 == (uint)uVar6 &&
              (bVar2 = *(byte *)(param_1 + 10), uVar6 = param_3, func_0x00010c23a440(),
              (uint)bVar2 == (uint)uVar6)))))) &&
           (uVar7 = *(ulong *)(param_1 + 0x40), uVar6 = param_3, func_0x00010c140600(),
           uVar7 == uVar6)))) &&
         (((bVar2 = *(byte *)(param_1 + 0xb), uVar6 = param_3, func_0x00010c234040(),
           (uint)bVar2 == (uint)uVar6 &&
           (bVar2 = *(byte *)(param_1 + 0xd), uVar6 = param_3, func_0x00010c290d60(),
           (uint)bVar2 == (uint)uVar6)) &&
          (uVar7 = *(ulong *)(param_1 + 0x48), uVar6 = param_3, func_0x00010c297440(),
          uVar7 == uVar6)))) {
        bVar2 = *(byte *)(param_1 + 0xe);
        uVar6 = param_3;
        func_0x00010c07dc40(param_3);
        bVar3 = (uint)bVar2 == (uint)uVar6;
      }
      else {
        bVar3 = false;
      }
      _objc_release(uVar5);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 107a12a08; end: 107a12a0f; -[SCStoryManagementOverlayLayer clientId] */

undefined8 FUN_107a12a08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a12a10; end: 107a12a17; -[SCStoryManagementOverlayLayer viewedCountFriend] */

undefined8 FUN_107a12a10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107a12a18; end: 107a12a1f; -[SCStoryManagementOverlayLayer viewedCountOther] */

undefined8 FUN_107a12a18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107a12a20; end: 107a12a27; -[SCStoryManagementOverlayLayer screenshotCountFriend] */

undefined8 FUN_107a12a20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107a12a28; end: 107a12a2f; -[SCStoryManagementOverlayLayer screenshotCountOther] */

undefined8 FUN_107a12a28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107a12a30; end: 107a12a37; -[SCStoryManagementOverlayLayer failedToPost] */

undefined1 FUN_107a12a30(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107a12a38; end: 107a12a3f; -[SCStoryManagementOverlayLayer uploading] */

undefined1 FUN_107a12a38(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107a12a40; end: 107a12a47; -[SCStoryManagementOverlayLayer showStoryManagementOnOpen] */

undefined1 FUN_107a12a40(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107a12a48; end: 107a12a4f; -[SCStoryManagementOverlayLayer managementViewController] */

undefined8 FUN_107a12a48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107a12a50; end: 107a12a57; -[SCStoryManagementOverlayLayer rewatchCount] */

undefined8 FUN_107a12a50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107a12a58; end: 107a12a5f; -[SCStoryManagementOverlayLayer shouldShowRewatchCount] */

undefined1 FUN_107a12a58(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107a12a60; end: 107a12a67; -[SCStoryManagementOverlayLayer shouldHideStatCounts] */

undefined1 FUN_107a12a60(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107a12a68; end: 107a12a6f; -[SCStoryManagementOverlayLayer useUnifiedFooterExperience] */

undefined1 FUN_107a12a68(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 107a12a70; end: 107a12a77; -[SCStoryManagementOverlayLayer variant] */

undefined8 FUN_107a12a70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107a12a78; end: 107a12a7f; -[SCStoryManagementOverlayLayer isSharedSpotlight] */

undefined1 FUN_107a12a78(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 107a12a80; end: 107a12aaf; -[SCStoryManagementOverlayLayer .cxx_destruct] */

void FUN_107a12a80(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107a12ab0; end: 107a12b63; -[SCStoryManagementOverlayLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107a12ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f94d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithConfiguration_layerViewC_1125de030,param_3,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767f34);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112767f34) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 107a12b64; end: 107a12c3b; -[SCStoryManagementOverlayLayerViewController loadView] */

/* WARNING: Possible PIC construction at 0x000107a12bc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107a12bcc) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a12b64(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c290d60();
  _objc_release(lVar4);
  if ((int)lVar1 == 0) {
    puVar2 = PTR_PTR_1126d5e58;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar4 = (long)_DAT_112767f38;
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
    puVar2 = *(undefined **)(param_1 + lVar4);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setView__112666308,puVar2);
  return;
}



/* Entry: 107a12c3c; end: 107a12d2b; -[SCStoryManagementOverlayLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a12c3c(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == param_4) {
    _objc_release(param_4);
    _objc_release(param_3);
  }
  else {
    if (param_4 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,param_4);
      _objc_release(param_4);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_107a12d10;
    }
    lVar3 = (long)_DAT_112767f3c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(ulong *)(param_1 + lVar3) = param_4;
    _objc_release(uVar2);
    uVar1 = param_4;
    func_0x00010c290d60();
    if ((int)uVar1 == 0) {
      func_0x00010c2298c0(*(undefined8 *)(param_1 + _DAT_112767f38),param_2,param_4);
    }
    else {
      func_0x00010beb0e60(param_1,param_2,param_4);
    }
  }
LAB_107a12d10:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a12d2c; end: 107a12ecb; -[SCStoryManagementOverlayLayerViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a12d2c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f94d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_viewWillAppear__1126853f0);
  lVar6 = (long)_DAT_112767f40;
  if (*(long *)(param_1 + lVar6) == 0) {
    _objc_retain(param_1);
    _objc_retain(param_1);
    uVar1 = param_1;
    func_0x00010c0f3ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar4 = param_1;
    while ((uVar2 = param_1, uVar1 != 0 &&
           ((uVar1 = uVar4, func_0x00010010fab4(uVar4,PTR_DAT_1126a4f48), uVar4 == 0 ||
            (uVar2 = uVar4, (uVar1 & 1) == 0))))) {
      uVar2 = uVar4;
      func_0x00010c0f3ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      uVar1 = uVar2;
      func_0x00010c0f3ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar4 = uVar2;
    }
    _objc_retain(uVar2);
    _objc_release(uVar4);
    _objc_release(param_1);
    puVar3 = PTR_PTR_1126b0f00;
    _objc_alloc();
    uVar4 = uVar2;
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04fc60();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar6));
    _objc_release(uVar2);
  }
  uVar4 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 != 0) {
    *(undefined1 *)(param_1 + (long)_DAT_112767f44) = 1;
  }
  return;
}



/* Entry: 107a12ecc; end: 107a12fa7; -[SCStoryManagementOverlayLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a12ecc(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f94d0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidFullyAppear_112684c88);
  *(undefined1 *)(param_1 + _DAT_112767f48) = 1;
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112767f3c);
  func_0x00010c23a440();
  if (iVar1 != 0) {
    lVar4 = (long)_DAT_112767f44;
    if ((*(byte *)(param_1 + lVar4) & 1) == 0) {
      lVar2 = param_1;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) {
        *(undefined1 *)(param_1 + lVar4) = 1;
        uVar3 = *(undefined8 *)(param_1 + _DAT_112767f40);
        func_0x00010c29c100(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c10eda0(uVar3);
        _objc_release(param_1);
      }
    }
  }
  return;
}



/* Entry: 107a12fa8; end: 107a12ff3; -[SCStoryManagementOverlayLayerViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a12fa8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f94d0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidFullyDisappear_112684ca8);
  *(undefined1 *)(param_1 + _DAT_112767f48) = 0;
  return;
}



/* Entry: 107a12ff4; end: 107a13093; -[SCStoryManagementOverlayLayerViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a12ff4(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f94d0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLayoutSubviews_112684cc8);
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c290d60();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112767f4c));
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 107a13094; end: 107a131af; -[SCStoryManagementOverlayLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a13094(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c25a2a0(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126c9410;
    func_0x00010c25a2c0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
    if (lVar4 == 0) goto LAB_107a13194;
    uVar5 = *(undefined8 *)(param_1 + _DAT_112767f38);
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010c25a2a0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c9410;
    func_0x00010c25a2c0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28c220(uVar5,param_2,param_3,puVar1,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
LAB_107a13194:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a131b0; end: 107a1345b; -[SCStoryManagementOverlayLayerViewController _setupUnifiedFooterExperienceForLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a131b0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  
  puVar1 = PTR_PTR_1126d5e60;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c047140();
  puVar2 = PTR_PTR_1126b0ec8;
  _objc_alloc(PTR_PTR_1126b0ec8);
  lVar14 = param_3;
  func_0x00010c29ebc0(param_3);
  lVar3 = param_3;
  func_0x00010c29ebe0(param_3);
  lVar4 = param_3;
  func_0x00010c1518e0(param_3);
  lVar5 = param_3;
  func_0x00010c151900(param_3);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = param_3;
  func_0x00010c29ebc0(param_3);
  lVar7 = param_3;
  func_0x00010c29ebe0(param_3);
  func_0x00010c0df840(puVar8,param_2,lVar7 + lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0624a0((double)(ulong)(lVar3 + lVar14),(double)(ulong)(lVar5 + lVar4),puVar2,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb098,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb098,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb098,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb098,puVar8);
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar14 = param_3;
  func_0x00010c140600(param_3);
  func_0x00010c0df840(puVar8,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1edfa0(puVar2,param_2,puVar8);
  _objc_release(puVar8);
  func_0x00010c07dc40();
  puVar8 = PTR_PTR_1126b0ed0;
  _objc_alloc(PTR_PTR_1126b0ed0);
  func_0x00010c047aa0(0);
  func_0x00010c297440(param_3);
  _objc_release(param_3);
  puVar9 = PTR_PTR_1126d5e68;
  _objc_alloc(PTR_PTR_1126d5e68);
  func_0x00010c003e00();
  lVar14 = (long)_DAT_112767f4c;
  if (*(long *)(param_1 + lVar14) == 0) {
    puVar10 = PTR_PTR_1126d5e70;
    _objc_alloc();
    uVar11 = *(undefined8 *)(param_1 + _DAT_112767f34);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40(puVar10,param_2,puVar9,puVar1,uVar12);
    uVar13 = *(undefined8 *)(param_1 + lVar14);
    *(undefined **)(param_1 + lVar14) = puVar10;
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(param_1);
  }
  else {
    func_0x00010c2226c0(*(long *)(param_1 + lVar14),param_2,puVar9);
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a1345c; end: 107a1349f; -[SCStoryManagementOverlayLayerViewController didTapRetryPost] */

void FUN_107a1345c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5e20;
  func_0x00010c1045a0(PTR_PTR_1126d5e20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a134a0; end: 107a13517; -[SCStoryManagementOverlayLayerViewController shouldPresentStoryManagement] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a134a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112767f40);
  func_0x00010c29c100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0(uVar2,param_2,param_1,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a13518; end: 107a1356f; -[SCStoryManagementOverlayLayerViewController presentInsights] */

void FUN_107a13518(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107a13570;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 107a13570; end: 107a13577;  */

void FUN_107a13570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c232090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_shouldPresentStoryManagement_11266a248);
  return;
}



/* Entry: 107a13578; end: 107a1357b; -[SCStoryManagementOverlayLayerViewController deleteSnapWithSnap:] */

void FUN_107a13578(void)

{
  return;
}



/* Entry: 107a1357c; end: 107a135d3; -[SCStoryManagementOverlayLayerViewController saveSnapWithSnap:] */

void FUN_107a1357c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107a135d4;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 107a135d4; end: 107a13617;  */

void FUN_107a135d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c149e20(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a13618; end: 107a1361b; -[SCStoryManagementOverlayLayerViewController saveSnapsWithSnaps:] */

void FUN_107a13618(void)

{
  return;
}



/* Entry: 107a1361c; end: 107a13673; -[SCStoryManagementOverlayLayerViewController sendSnapWithSnap:] */

void FUN_107a1361c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107a13674;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 107a13674; end: 107a136b7;  */

void FUN_107a13674(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c15c9e0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a136b8; end: 107a136bb; -[SCStoryManagementOverlayLayerViewController copyLinkWithSnap:] */

void FUN_107a136b8(void)

{
  return;
}



/* Entry: 107a136bc; end: 107a137b3; -[SCStoryManagementOverlayLayerViewController viewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a136bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112767f3c;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c0b82a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e1400();
  lVar2 = param_1;
  func_0x00010bf99b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5400(uVar1,param_2,lVar2);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf3cf60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ac940(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010c138ae0(uVar1);
  puVar4 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_alloc(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  func_0x00010c0402e0();
  puVar5 = puVar4;
  func_0x00010c0d6280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(puVar5);
  func_0x00010c1c8b80(puVar4,param_2,5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107a137b4; end: 107a137c3; -[SCStoryManagementOverlayLayerViewController showProfilePresenterDidStartPresenting:withSwipeDirection:] */

void FUN_107a137b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf04430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_announceEvent__11259eab0,&PTR____CFConstantStringClassReference_110ea9ed8
            );
  return;
}



/* Entry: 107a137c4; end: 107a137d3; -[SCStoryManagementOverlayLayerViewController showProfilePresenterDidFinishDismissing:] */

void FUN_107a137c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf04430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_announceEvent__11259eab0,&PTR____CFConstantStringClassReference_110ea9ef8
            );
  return;
}



/* Entry: 107a137d4; end: 107a137e3; -[SCStoryManagementOverlayLayerViewController showProfilePresenterSwipeUpEnabled:withDirection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107a137d4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112767f48);
}



/* Entry: 107a137e4; end: 107a13827; -[SCStoryManagementOverlayLayerViewController layerViewContainerOption] */

undefined8 FUN_107a137e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c290d60();
  _objc_release(param_1);
  uVar1 = 3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 107a13828; end: 107a13897; -[SCStoryManagementOverlayLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a13828(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112767f34,0);
  _objc_storeStrong(param_1 + _DAT_112767f3c,0);
  _objc_storeStrong(param_1 + _DAT_112767f40,0);
  _objc_storeStrong(param_1 + _DAT_112767f4c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112767f38,0);
  return;
}



/* Entry: 107a13898; end: 107a13f2f; -[SCStoryManagementOverlayCountPillView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107a13898(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined8 *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined8 *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  long lVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f0 = PTR_PTR_1126f94d8;
  puVar1 = &uStack_f8;
  uStack_f8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4032800000000000);
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf414e0(0x3fc999999999999a);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar5 = (undefined8 *)PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767f50);
    *(undefined8 **)((long)puVar1 + (long)_DAT_112767f50) = puVar5;
    _objc_release(uVar6);
    _objc_retain(puVar5);
    func_0x00010c219b60(puVar5);
    func_0x00010c182220(puVar5);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar5);
    _objc_release(puVar3);
    func_0x00010befbb60(puVar1);
    puVar4 = PTR_PTR_1126aea58;
    _objc_alloc();
    uVar37 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar38 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar39 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar40 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar37,uVar38,uVar39,uVar40);
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767f54);
    *(undefined **)((long)puVar1 + (long)_DAT_112767f54) = puVar4;
    _objc_release(uVar6);
    _objc_retain(puVar4);
    func_0x00010c219b60(puVar4);
    func_0x00010c21ad00(puVar4);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar4);
    _objc_release(puVar3);
    func_0x00010befbb60(puVar1);
    puVar7 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar37,uVar38,uVar39,uVar40);
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767f58);
    *(undefined **)((long)puVar1 + (long)_DAT_112767f58) = puVar7;
    _objc_release(uVar6);
    _objc_retain(puVar7);
    func_0x00010c219b60(puVar7);
    func_0x00010c21ad00(puVar7);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar7);
    _objc_release(puVar3);
    func_0x00010befbb60(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = puVar5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    puStack_e8 = puVar9;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar5;
    puStack_e0 = puVar12;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf49420(0x4031000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar5;
    puStack_d8 = puVar14;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010bf49420(0x4031000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar4;
    puStack_d0 = puVar16;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar17;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar4;
    puStack_c8 = puVar19;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar4;
    puStack_c0 = puVar22;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar23;
    func_0x00010bf49420(0x4031000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar4;
    puStack_b8 = puVar24;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar25;
    func_0x00010bf49420(0x4031000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar7;
    puStack_b0 = puVar26;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puVar27;
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar30 = puVar7;
    puStack_a8 = puVar29;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = puVar1;
    func_0x00010bf348e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar32 = puVar30;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar33 = puVar7;
    puStack_a0 = puVar32;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar34 = puVar33;
    func_0x00010bf49420(0x4042800000000000);
    _objc_retainAutoreleasedReturnValue();
    param_4 = 0xb;
    puVar35 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar34;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar35;
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar35);
    _objc_release(puVar34);
    _objc_release(puVar33);
    _objc_release(puVar32);
    _objc_release(puVar31);
    _objc_release(puVar30);
    _objc_release(puVar29);
    _objc_release(puVar28);
    _objc_release(puVar27);
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  func_0x00010bfe9720(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar36 = (long)_DAT_112767f50;
  func_0x00010c1a9f00(*(undefined8 *)((long)puVar2 + lVar36));
  _objc_release(param_3);
  func_0x00010c1a7f60(*(undefined8 *)((long)puVar2 + lVar36));
  lVar36 = (long)_DAT_112767f54;
  func_0x00010c212f20(*(undefined8 *)((long)puVar2 + lVar36));
  func_0x00010c08fa60(param_4);
  _objc_release(param_4);
  func_0x00010c1a7f60(*(undefined8 *)((long)puVar2 + lVar36));
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return puVar2;
}



/* Entry: 107a13f30; end: 107a13feb; -[SCStoryManagementOverlayCountPillView setImage:iconText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a13f30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  func_0x00010bfe9720(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = (long)_DAT_112767f50;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar1));
  _objc_release(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1));
  lVar1 = (long)_DAT_112767f54;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c08fa60(param_4);
  _objc_release(param_4);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 107a13fec; end: 107a1401b; -[SCStoryManagementOverlayCountPillView setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a13fec(long param_1)

{
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112767f58));
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 107a1401c; end: 107a1403f; -[SCStoryManagementOverlayCountPillView intrinsicContentSize] */

undefined1  [16] FUN_107a1401c(double param_1)

{
  undefined1 auVar1 [16];
  
  func_0x00010bde8220();
  auVar1._0_8_ = param_1 + 24.0;
  auVar1._8_8_ = 0x4042800000000000;
  return auVar1;
}



/* Entry: 107a14040; end: 107a14157; -[SCStoryManagementOverlayCountPillView _contentWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107a14040(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  lVar1 = *(long *)(param_2 + _DAT_112767f50);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar4 = (long)_DAT_112767f58;
    lVar2 = *(long *)(param_2 + lVar4);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      dVar5 = 21.0;
      goto LAB_107a14134;
    }
  }
  lVar3 = *(long *)(param_2 + _DAT_112767f54);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    _objc_release(lVar3);
    lVar4 = (long)_DAT_112767f58;
    dVar5 = 17.0;
  }
  else {
    lVar4 = (long)_DAT_112767f58;
    lVar2 = *(long *)(param_2 + lVar4);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar3);
    param_1 = 21.0;
    dVar5 = 17.0;
    if (lVar1 != 0) {
      dVar5 = 21.0;
    }
  }
LAB_107a14134:
  func_0x00010c0699c0(*(undefined8 *)(param_2 + lVar4));
  return dVar5 + param_1;
}



/* Entry: 107a14158; end: 107a141a7; -[SCStoryManagementOverlayCountPillView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a14158(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112767f58,0);
  _objc_storeStrong(param_1 + _DAT_112767f54,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112767f50,0);
  return;
}



/* Entry: 107a141a8; end: 107a141f7; -[SCStoryManagementOverlayLayerView initWithFrame:] */

undefined1 * FUN_107a141a8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f94e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010be3a720(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107a141f8; end: 107a148a7; -[SCStoryManagementOverlayLayerView _initSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a141f8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1198;
  _objc_alloc();
  uVar9 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
  lVar8 = (long)_DAT_112767f5c;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar7);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar8));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar8));
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bfcd9c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209760(0x3fe0000000000000,0);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bfcd9c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196020(0x3fe0000000000000,0x3ff0000000000000);
  _objc_release(uVar7);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_a0 = puVar3;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bfcd9c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar8 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar8);
  puVar1 = PTR_PTR_1126d5e78;
  _objc_alloc();
  func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
  lVar8 = (long)_DAT_112767f60;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar7);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar8));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar8));
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fe0(uVar7);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010c1d0120();
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar8));
  lVar8 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar8);
  puVar2 = PTR_PTR_1126d5e78;
  _objc_alloc();
  func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
  lVar8 = (long)_DAT_112767f64;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar2;
  _objc_release(uVar7);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar8));
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fe0(uVar7);
  _objc_release(puVar2);
  puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010c1d0120();
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar8));
  lVar8 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar8);
  puVar2 = PTR_PTR_1126d5e78;
  _objc_alloc();
  func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
  lVar8 = (long)_DAT_112767f68;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar2;
  _objc_release(uVar7);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar8));
  func_0x00010c1a9fe0(*(undefined8 *)(param_1 + lVar8));
  puVar5 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010c1d0120();
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar8));
  lVar8 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar8);
  _objc_initWeak(auStack_a8,param_1);
  puVar3 = PTR_PTR_1126ae720;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_107a148a8;
  puStack_b8 = &UNK_110912388;
  _objc_copyWeak(auStack_b0,auStack_a8);
  func_0x00010c0b8440();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112767f6c);
  *(undefined **)(param_1 + _DAT_112767f6c) = puVar3;
  _objc_release(uVar7);
  puVar3 = PTR_PTR_1126ae720;
  puStack_f8 = puVar2;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x107a148e8;
  puStack_e0 = &UNK_110912358;
  _objc_copyWeak(auStack_d8,auStack_a8);
  func_0x00010c0b8440();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112767f70);
  *(undefined **)(param_1 + _DAT_112767f70) = puVar3;
  _objc_release(uVar7);
  puVar3 = PTR_PTR_1126ae720;
  puStack_120 = puVar2;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x107a14928;
  puStack_108 = &UNK_1109f52f8;
  _objc_copyWeak(auStack_100,auStack_a8);
  func_0x00010c0b8440();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112767f74);
  *(undefined **)(param_1 + _DAT_112767f74) = puVar3;
  _objc_release(uVar7);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_128,auStack_a8);
  func_0x00010c0b8440();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112767f78);
  *(undefined **)(param_1 + _DAT_112767f78) = puVar2;
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume(puVar1);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  puVar2 = puVar1;
  func_0x00010be96fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a148a8; end: 107a149a7;  */

void FUN_107a148a8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be96fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107a149a8; end: 107a14a67; -[SCStoryManagementOverlayLayerView _retryPostLabel] */

void FUN_107a149a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc(PTR_PTR_1126aea58);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  func_0x00010c1cfce0(puVar1,param_2,1);
  func_0x00010c213040(puVar1,param_2,1);
  puVar2 = puVar1;
  func_0x00010c21ad00(puVar1,param_2,7);
  func_0x000108f588ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a14a68; end: 107a14b77; -[SCStoryManagementOverlayLayerView _retryPostButton] */

void FUN_107a14a68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  puVar2 = puVar1;
  func_0x00010c216380(puVar1,param_2,0xd5,0);
  func_0x000108f588c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar1,param_2,puVar2,0);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ea9c58);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c1a9fc0(puVar1,param_2,puVar3,0);
  func_0x00010c1aab40(puVar1,param_2,0xd5,0);
  func_0x00010c16e480(puVar1,param_2,0xd0,0);
  func_0x00010befbd60(puVar1,param_2,param_1,PTR_s__onRetryPostTapped_112537f90,0x40);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a14b78; end: 107a14bbf; -[SCStoryManagementOverlayLayerView _uploadingView] */

void FUN_107a14b78(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5e80;
  _objc_alloc(PTR_PTR_1126d5e80);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a14bc0; end: 107a14d37; -[SCStoryManagementOverlayLayerView _upArrowView] */

void FUN_107a14bc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc(PTR__OBJC_CLASS___UIButton_1126aec48);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = puVar1;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf833a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(puVar1,param_2,puVar4,0);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c182220(puVar1,param_2,4);
  func_0x00010befbd60(puVar1,param_2,param_1,PTR_s__presentStoryManagement_112537f88,0x40);
  func_0x00010c219b60(puVar1,param_2,0);
  uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_a0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformRotate(&uStack_70,0x400921fb54442d18,&uStack_a0);
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  func_0x00010c219960(puVar1,param_2,&uStack_a0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c181e40(0,0x4030000000000000,0x4030000000000000,0x4030000000000000,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a14d38; end: 107a159bf; -[SCStoryManagementOverlayLayerView updateConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a14d38(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  ulong uVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  long lVar39;
  undefined8 uVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  int iVar46;
  long lVar47;
  double dVar48;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar39 = (long)_DAT_112767f7c;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_4,
                      *(undefined8 *)(param_3 + lVar39));
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar41 = (long)_DAT_112767f5c;
  uVar2 = *(undefined8 *)(param_3 + lVar41);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = lVar25;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + lVar41);
  uStack_e0 = uVar40;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = lVar26;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + lVar41);
  uStack_d8 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_3 + lVar41);
  uStack_d0 = uVar30;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49420(0x4057400000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar42 = (long)_DAT_112767f60;
  uVar10 = *(undefined8 *)(param_3 + lVar42);
  uStack_c8 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar41;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar10;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_3 + lVar42);
  uStack_c0 = uVar28;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar12;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar44 = (long)_DAT_112767f64;
  uVar15 = *(undefined8 *)(param_3 + lVar44);
  uStack_b8 = uVar29;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar15;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_3 + lVar44);
  uStack_b0 = uVar18;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_3 + lVar42);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar19;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar43 = (long)_DAT_112767f68;
  uVar22 = *(undefined8 *)(param_3 + lVar43);
  uStack_a8 = uVar21;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = lVar42;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar22;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_3 + lVar43);
  uStack_a0 = uVar31;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar43;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  dVar48 = -8.0;
  uVar27 = uVar23;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar33 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar27;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1);
  _objc_release(puVar33);
  _objc_release(uVar27);
  _objc_release(lVar24);
  _objc_release(lVar43);
  _objc_release(uVar23);
  _objc_release(uVar31);
  _objc_release(lVar44);
  _objc_release(lVar42);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(uVar15);
  _objc_release(uVar29);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar28);
  _objc_release(lVar11);
  _objc_release(lVar41);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar30);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar47);
  _objc_release(lVar26);
  _objc_release(uVar3);
  _objc_release(uVar40);
  _objc_release(lVar45);
  _objc_release(lVar25);
  _objc_release(uVar2);
  lVar45 = (long)_DAT_112767f70;
  lVar25 = *(long *)(param_3 + lVar45);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar25 != 0) {
    lVar47 = (long)_DAT_112767f6c;
    lVar26 = *(long *)(param_3 + lVar47);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar25);
    if (lVar26 != 0) {
      uVar27 = *(undefined8 *)(param_3 + lVar47);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar40 = uVar27;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_3 + lVar45);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar30 = uVar40;
      func_0x00010bf493c0(0xc022000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_3 + lVar47);
      uStack_100 = uVar30;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar3;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      lVar25 = param_3;
      func_0x00010bf4dce0();
      _objc_retainAutoreleasedReturnValue();
      lVar26 = lVar25;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar28 = uVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_3 + lVar45);
      uStack_f8 = uVar28;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar29 = uVar5;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar47 = param_3;
      func_0x00010bf4dce0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar47;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      dVar48 = -16.0;
      uVar18 = uVar29;
      func_0x00010bf493c0(0xc030000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_3 + lVar45);
      uStack_f0 = uVar18;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar8;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      lVar45 = param_3;
      func_0x00010bf4dce0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar45;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar31 = uVar21;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar33 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_e8 = uVar31;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar1);
      _objc_release(puVar33);
      _objc_release(uVar31);
      _objc_release(lVar7);
      _objc_release(lVar45);
      _objc_release(uVar21);
      _objc_release(uVar8);
      _objc_release(uVar18);
      _objc_release(lVar6);
      _objc_release(lVar47);
      _objc_release(uVar29);
      _objc_release(uVar5);
      _objc_release(uVar28);
      _objc_release(lVar26);
      _objc_release(lVar25);
      _objc_release(uVar9);
      _objc_release(uVar3);
      _objc_release(uVar30);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(uVar40);
      _objc_release(uVar27);
    }
  }
  lVar45 = (long)_DAT_112767f74;
  lVar25 = *(long *)(param_3 + lVar45);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar25 != 0) {
    uVar28 = *(undefined8 *)(param_3 + lVar45);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar40 = uVar28;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = param_3;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar25;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    dVar48 = -16.0;
    uVar4 = uVar40;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar29 = *(undefined8 *)(param_3 + lVar45);
    uStack_110 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = uVar29;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar45 = param_3;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar47 = lVar45;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar30;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar33 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_108 = uVar9;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release(puVar33);
    _objc_release(uVar9);
    _objc_release(lVar47);
    _objc_release(lVar45);
    _objc_release(uVar30);
    _objc_release(uVar29);
    _objc_release(uVar4);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(uVar40);
    _objc_release(uVar28);
  }
  lVar45 = (long)_DAT_112767f78;
  lVar25 = *(long *)(param_3 + lVar45);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar25 != 0) {
    uVar30 = *(undefined8 *)(param_3 + lVar45);
    func_0x00010c269d40(uVar30);
    _objc_retainAutoreleasedReturnValue();
    uVar40 = uVar30;
    func_0x00010bfe90c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar40;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    _objc_release(uVar4);
    _objc_release(uVar40);
    _objc_release(uVar30);
    uVar31 = *(undefined8 *)(param_3 + lVar45);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar40 = uVar31;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = param_3;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar25;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar40;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = *(undefined8 *)(param_3 + lVar45);
    uStack_130 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = uVar27;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar47 = param_3;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar47;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar30;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_3 + lVar45);
    uStack_128 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = uVar2;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar28;
    func_0x00010bf49420(dVar48 + 32.0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_3 + lVar45);
    uStack_120 = uVar29;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar3;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar18;
    func_0x00010bf49420(param_2 + 16.0);
    _objc_retainAutoreleasedReturnValue();
    puVar33 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_118 = uVar21;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release(puVar33);
    _objc_release(uVar21);
    _objc_release(uVar18);
    _objc_release(uVar3);
    _objc_release(uVar29);
    _objc_release(uVar28);
    _objc_release(uVar2);
    _objc_release(uVar9);
    _objc_release(lVar6);
    _objc_release(lVar47);
    _objc_release(uVar30);
    _objc_release(uVar27);
    _objc_release(uVar4);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(uVar40);
    _objc_release(uVar31);
  }
  puVar38 = puVar1;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar33 = puVar1;
  func_0x00010bf51e00();
  uVar40 = *(undefined8 *)(param_3 + lVar39);
  *(undefined **)(param_3 + lVar39) = puVar33;
  _objc_release(uVar40);
  puStack_138 = PTR_PTR_1126f94e0;
  lStack_140 = param_3;
  _objc_msgSendSuper2(&lStack_140,PTR_s_updateConstraints_11267ec30);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    _objc_retain(puVar38);
    puVar33 = puVar38;
    func_0x00010bf9fe20();
    if ((int)puVar33 == 0) {
      puVar33 = puVar38;
      func_0x00010c28eca0();
      iVar46 = _DAT_112767f74;
      if ((int)puVar33 == 0) {
        lVar25 = (long)_DAT_112767f78;
        uVar32 = *(ulong *)(puVar1 + lVar25);
        func_0x00010c06f880();
        if ((uVar32 & 1) == 0) {
          func_0x00010bf57500(*(undefined8 *)(puVar1 + lVar25));
          _objc_unsafeClaimAutoreleasedReturnValue();
          puVar33 = puVar1;
          func_0x00010bf4dce0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar40 = *(undefined8 *)(puVar1 + lVar25);
          func_0x00010c269d40(uVar40);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befbb60(puVar33);
          _objc_release(uVar40);
          _objc_release(puVar33);
        }
        puVar34 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puVar33 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c29ebc0(puVar38);
        func_0x00010c29ebe0(puVar38);
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        puVar35 = puVar34;
        func_0x00010c22d980();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar33);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar35);
        _objc_release(puVar34);
        func_0x00010c212f20(*(undefined8 *)(puVar1 + _DAT_112767f60));
        puVar35 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c1518e0(puVar38);
        func_0x00010c151900(puVar38);
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        puVar36 = puVar35;
        func_0x00010c22d980();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar34);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar36);
        _objc_release(puVar35);
        func_0x00010c212f20(*(undefined8 *)(puVar1 + _DAT_112767f64));
        puVar36 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puVar35 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c140600(puVar38);
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        puVar37 = puVar36;
        func_0x00010c22d980();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar35);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar37);
        _objc_release(puVar36);
        func_0x00010c212f20(*(undefined8 *)(puVar1 + _DAT_112767f68));
        iVar46 = _DAT_112767f74;
        uVar40 = *(undefined8 *)(puVar1 + _DAT_112767f74);
        func_0x00010c269d40(uVar40);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2558c0();
        _objc_release(uVar40);
        _objc_release(puVar35);
        _objc_release(puVar34);
      }
      else {
        uVar32 = *(ulong *)(puVar1 + _DAT_112767f74);
        func_0x00010c06f880();
        if ((uVar32 & 1) == 0) {
          func_0x00010bf57500(*(undefined8 *)(puVar1 + iVar46));
          _objc_unsafeClaimAutoreleasedReturnValue();
          puVar33 = puVar1;
          func_0x00010bf4dce0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar40 = *(undefined8 *)(puVar1 + iVar46);
          func_0x00010c269d40(uVar40);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befbb60(puVar33);
          _objc_release(uVar40);
          _objc_release(puVar33);
        }
        puVar33 = *(undefined **)(puVar1 + iVar46);
        func_0x00010c269d40(puVar33);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c24dbc0();
      }
    }
    else {
      lVar25 = (long)_DAT_112767f6c;
      uVar32 = *(ulong *)(puVar1 + lVar25);
      func_0x00010c06f880();
      if ((uVar32 & 1) == 0) {
        func_0x00010bf57500(*(undefined8 *)(puVar1 + lVar25));
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar33 = puVar1;
        func_0x00010bf4dce0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar40 = *(undefined8 *)(puVar1 + lVar25);
        func_0x00010c269d40(uVar40);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(puVar33);
        _objc_release(uVar40);
        _objc_release(puVar33);
      }
      lVar25 = (long)_DAT_112767f70;
      uVar32 = *(ulong *)(puVar1 + lVar25);
      func_0x00010c06f880();
      if ((uVar32 & 1) == 0) {
        func_0x00010bf57500(*(undefined8 *)(puVar1 + lVar25));
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar33 = puVar1;
        func_0x00010bf4dce0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar40 = *(undefined8 *)(puVar1 + lVar25);
        func_0x00010c269d40(uVar40);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(puVar33);
        _objc_release(uVar40);
        _objc_release(puVar33);
      }
      iVar46 = _DAT_112767f74;
      puVar33 = *(undefined **)(puVar1 + _DAT_112767f74);
      func_0x00010c269d40(puVar33);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2558c0();
    }
    _objc_release(puVar33);
    puVar33 = puVar38;
    func_0x00010bf9fe20();
    if ((((ulong)puVar33 & 1) == 0) &&
       (puVar33 = puVar38, func_0x00010c28eca0(), ((ulong)puVar33 & 1) == 0)) {
      func_0x00010c230de0(puVar38);
    }
    func_0x00010c1a7f60(*(undefined8 *)(puVar1 + _DAT_112767f60));
    puVar33 = puVar38;
    func_0x00010bf9fe20();
    if ((((ulong)puVar33 & 1) == 0) &&
       (puVar33 = puVar38, func_0x00010c28eca0(), ((ulong)puVar33 & 1) == 0)) {
      func_0x00010c230de0(puVar38);
    }
    func_0x00010c1a7f60(*(undefined8 *)(puVar1 + _DAT_112767f64));
    puVar33 = puVar38;
    func_0x00010bf9fe20();
    if (((ulong)puVar33 & 1) == 0) {
      func_0x00010c28eca0(puVar38);
    }
    uVar40 = *(undefined8 *)(puVar1 + _DAT_112767f78);
    func_0x00010c269d40(uVar40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar40);
    func_0x00010bf9fe20(puVar38);
    uVar40 = *(undefined8 *)(puVar1 + _DAT_112767f6c);
    func_0x00010c269d40(uVar40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar40);
    func_0x00010bf9fe20(puVar38);
    uVar40 = *(undefined8 *)(puVar1 + _DAT_112767f70);
    func_0x00010c269d40(uVar40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar40);
    func_0x00010c28eca0(puVar38);
    uVar40 = *(undefined8 *)(puVar1 + iVar46);
    func_0x00010c269d40(uVar40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar40);
    puVar33 = puVar38;
    func_0x00010bf9fe20();
    if (((((ulong)puVar33 & 1) == 0) &&
        (puVar33 = puVar38, func_0x00010c28eca0(), ((ulong)puVar33 & 1) == 0)) &&
       (puVar33 = puVar38, func_0x00010c234040(), (int)puVar33 != 0)) {
      func_0x00010c230de0(puVar38);
    }
    func_0x00010c1a7f60(*(undefined8 *)(puVar1 + _DAT_112767f68));
    func_0x00010c1cbf40(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar38);
    return;
  }
  return;
}



/* Entry: 107a159c0; end: 107a15f87; -[SCStoryManagementOverlayLayerView setupViewForLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a159c0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  int iVar11;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf9fe20();
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c28eca0();
    iVar11 = _DAT_112767f74;
    if ((int)uVar1 == 0) {
      lVar10 = (long)_DAT_112767f78;
      uVar1 = *(ulong *)(param_1 + lVar10);
      func_0x00010c06f880();
      if ((uVar1 & 1) == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + lVar10));
        _objc_unsafeClaimAutoreleasedReturnValue();
        lVar4 = param_1;
        func_0x00010bf4dce0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_1 + lVar10);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(lVar4,param_2,uVar2);
        _objc_release(uVar2);
        _objc_release(lVar4);
      }
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar1 = param_3;
      func_0x00010c29ebc0(param_3);
      uVar5 = param_3;
      func_0x00010c29ebe0(param_3);
      func_0x00010c0df840(puVar6,param_2,uVar5 + uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c22d980();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dc4658);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
      func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112767f60),param_2,puVar3);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar1 = param_3;
      func_0x00010c1518e0(param_3);
      uVar5 = param_3;
      func_0x00010c151900(param_3);
      func_0x00010c0df840(puVar7,param_2,uVar5 + uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c22d980();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110dc4658);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
      func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112767f64),param_2,puVar6);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar1 = param_3;
      func_0x00010c140600(param_3);
      func_0x00010c0df840(puVar8,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c22d980();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110dc4658);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar8);
      func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112767f68),param_2,puVar7);
      iVar11 = _DAT_112767f74;
      uVar2 = *(undefined8 *)(param_1 + _DAT_112767f74);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2558c0();
      _objc_release(uVar2);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    else {
      uVar1 = *(ulong *)(param_1 + _DAT_112767f74);
      func_0x00010c06f880();
      if ((uVar1 & 1) == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + iVar11));
        _objc_unsafeClaimAutoreleasedReturnValue();
        lVar10 = param_1;
        func_0x00010bf4dce0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_1 + iVar11);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(lVar10,param_2,uVar2);
        _objc_release(uVar2);
        _objc_release(lVar10);
      }
      puVar3 = *(undefined **)(param_1 + iVar11);
      func_0x00010c269d40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24dbc0();
    }
  }
  else {
    lVar10 = (long)_DAT_112767f6c;
    uVar1 = *(ulong *)(param_1 + lVar10);
    func_0x00010c06f880();
    if ((uVar1 & 1) == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar10));
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(lVar4,param_2,uVar2);
      _objc_release(uVar2);
      _objc_release(lVar4);
    }
    lVar10 = (long)_DAT_112767f70;
    uVar1 = *(ulong *)(param_1 + lVar10);
    func_0x00010c06f880();
    if ((uVar1 & 1) == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar10));
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(lVar4,param_2,uVar2);
      _objc_release(uVar2);
      _objc_release(lVar4);
    }
    iVar11 = _DAT_112767f74;
    puVar3 = *(undefined **)(param_1 + _DAT_112767f74);
    func_0x00010c269d40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2558c0();
  }
  _objc_release(puVar3);
  uVar1 = param_3;
  func_0x00010bf9fe20();
  if (((uVar1 & 1) == 0) && (uVar1 = param_3, func_0x00010c28eca0(), (uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010c230de0(param_3);
  }
  else {
    uVar1 = 1;
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112767f60),param_2,uVar1);
  uVar1 = param_3;
  func_0x00010bf9fe20();
  if (((uVar1 & 1) == 0) && (uVar1 = param_3, func_0x00010c28eca0(), (uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010c230de0(param_3);
  }
  else {
    uVar1 = 1;
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112767f64),param_2,uVar1);
  uVar1 = param_3;
  func_0x00010bf9fe20();
  if ((uVar1 & 1) == 0) {
    func_0x00010c28eca0(param_3);
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112767f78);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  func_0x00010bf9fe20(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112767f6c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  func_0x00010bf9fe20(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112767f70);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  func_0x00010c28eca0(param_3);
  uVar2 = *(undefined8 *)(param_1 + iVar11);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf9fe20();
  if ((((uVar1 & 1) == 0) && (uVar1 = param_3, func_0x00010c28eca0(), (uVar1 & 1) == 0)) &&
     (uVar1 = param_3, func_0x00010c234040(), (int)uVar1 != 0)) {
    uVar1 = param_3;
    func_0x00010c230de0(param_3);
  }
  else {
    uVar1 = 1;
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112767f68),param_2,uVar1);
  func_0x00010c1cbf40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a15f88; end: 107a15fbb; -[SCStoryManagementOverlayLayerView _onRetryPostTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a15f88(long param_1)

{
  param_1 = param_1 + _DAT_112767f80;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a15fbc; end: 107a15fef; -[SCStoryManagementOverlayLayerView _presentStoryManagement] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a15fbc(long param_1)

{
  param_1 = param_1 + _DAT_112767f80;
  _objc_loadWeakRetained(param_1);
  func_0x00010c232080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a15ff0; end: 107a1600f; -[SCStoryManagementOverlayLayerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a15ff0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112767f80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a16010; end: 107a16023; -[SCStoryManagementOverlayLayerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a16010(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112767f80,param_3);
  return;
}



/* Entry: 107a16024; end: 107a160df; -[SCStoryManagementOverlayLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a16024(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112767f80);
  _objc_storeStrong(param_1 + _DAT_112767f7c,0);
  _objc_storeStrong(param_1 + _DAT_112767f78,0);
  _objc_storeStrong(param_1 + _DAT_112767f74,0);
  _objc_storeStrong(param_1 + _DAT_112767f70,0);
  _objc_storeStrong(param_1 + _DAT_112767f6c,0);
  _objc_storeStrong(param_1 + _DAT_112767f68,0);
  _objc_storeStrong(param_1 + _DAT_112767f64,0);
  _objc_storeStrong(param_1 + _DAT_112767f60,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112767f5c,0);
  return;
}



/* Entry: 107a160e0; end: 107a164e3; -[SCStoryManagementOverlayUploadingView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107a160e0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c0 = PTR_PTR_1126f94e8;
  uVar23 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar24 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar25 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar26 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar22 = &uStack_c8;
  uStack_c8 = param_1;
  _objc_msgSendSuper2(uVar23,uVar24,uVar25,uVar26,puVar22,PTR_s_initWithFrame__1125e2948);
  puVar21 = puVar22;
  if (puVar22 != (undefined8 *)0x0) {
    puVar1 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    uVar2 = *(undefined8 *)((long)puVar22 + (long)_DAT_112767f84);
    *(undefined **)((long)puVar22 + (long)_DAT_112767f84) = puVar1;
    _objc_release(uVar2);
    _objc_retain(puVar1);
    func_0x00010c219b60(puVar1);
    func_0x00010c1a8560(puVar1);
    func_0x00010befbb60(puVar22);
    puVar3 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar23,uVar24,uVar25,uVar26);
    uVar23 = *(undefined8 *)((long)puVar22 + (long)_DAT_112767f88);
    *(undefined **)((long)puVar22 + (long)_DAT_112767f88) = puVar3;
    _objc_release(uVar23);
    _objc_retain(puVar3);
    func_0x00010c219b60(puVar3);
    ppuVar4 = &PTR____CFConstantStringClassReference_110ea9c78;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea9c78,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar3);
    _objc_release(ppuVar4);
    func_0x00010c21ad00(puVar3);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar3);
    _objc_release(puVar5);
    func_0x00010c21e900(puVar3);
    func_0x00010befbb60(puVar22);
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar6 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar22;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    puStack_b8 = puVar8;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar22;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar3;
    puStack_b0 = puVar11;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar22;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar3;
    puStack_a8 = puVar14;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar22;
    func_0x00010bf348e0(puVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar3;
    puStack_a0 = puVar17;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x00010bf49420(0x4049000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar19;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
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
    func_0x00010c069fa0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar22;
  }
  ___stack_chk_fail();
  puVar22 = *(undefined8 **)((long)puVar21 + (long)_DAT_112767f84);
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar22,PTR_s_startAnimating_112671118);
  return puVar22;
}



/* Entry: 107a164e4; end: 107a164f3; -[SCStoryManagementOverlayUploadingView startAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a164e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112767f84),PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 107a164f4; end: 107a16503; -[SCStoryManagementOverlayUploadingView stopAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a164f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112767f84),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 107a16504; end: 107a1655b; -[SCStoryManagementOverlayUploadingView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107a16504(double param_1,long param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  func_0x00010c0699c0(*(undefined8 *)(param_2 + _DAT_112767f84));
  dVar1 = param_1 + 16.0;
  func_0x00010c0699c0(*(undefined8 *)(param_2 + _DAT_112767f88));
  auVar2._0_8_ = dVar1 + param_1;
  auVar2._8_8_ = 0x4049000000000000;
  return auVar2;
}



/* Entry: 107a1655c; end: 107a1659b; -[SCStoryManagementOverlayUploadingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1655c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112767f88,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112767f84,0);
  return;
}



/* Entry: 107a1659c; end: 107a1670f; -[SCStoryManagementActionBarActionHandler initWithStoryId:presentingViewController:saveStoryScopeExposer:deleteStorySnapScopeExposer:deleteStorySnapScopeServices:storyShareScopeExposer:storyShareScopeServices:] */

undefined1 *
FUN_107a1659c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126f94f0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
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



/* Entry: 107a16710; end: 107a1686f; -[SCStoryManagementActionBarActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_107a16710(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
LAB_107a16840:
    uVar5 = 0;
  }
  else {
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar4 == 0) {
      uVar2 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      if ((int)uVar4 == 0) {
        uVar2 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((int)uVar4 == 0) goto LAB_107a16840;
        func_0x00010bea04a0(param_1);
      }
      else {
        func_0x00010bdfa740(param_1);
      }
    }
    else {
      func_0x00010be99be0(param_1);
    }
    uVar5 = 1;
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 107a16870; end: 107a16927; -[SCStoryManagementActionBarActionHandler _saveSnapWithClientId:] */

void FUN_107a16870(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b10b0;
  _objc_alloc(PTR_PTR_1126b10b0);
  func_0x00010bfff0a0();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a16928; end: 107a16947; -[SCStoryManagementActionBarActionHandler didCompleteSaveStoryScope:] */

void FUN_107a16928(long param_1)

{
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x18));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 107a16948; end: 107a16a9f; -[SCStoryManagementActionBarActionHandler _deleteSnapWithClientId:] */

void FUN_107a16948(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126aead8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  lVar6 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c038f40(puVar1,param_2,lVar6,1);
  _objc_release(lVar6);
  puVar2 = PTR_PTR_1126b10b8;
  _objc_alloc();
  puVar4 = (undefined *)0x0;
  func_0x00010bfff000();
  _objc_release(param_3);
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf239c0(lVar6,param_2,puVar3,puVar1,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,lVar6);
    _objc_release(lVar6);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  uVar5 = *(undefined8 *)(puVar1 + 0x40);
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110ddd998;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_b0 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_b0,&ppuStack_b8,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7e0(uVar5,param_2,&PTR____CFConstantStringClassReference_110ea9f38,puVar2);
  _objc_release(puVar2);
  func_0x00010c12e1c0(*(undefined8 *)(puVar1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c12e1c0(*(undefined8 *)(puVar4 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 107a16aa0; end: 107a16b7f; -[SCStoryManagementActionBarActionHandler didSelectDeleteStorySnaps:clientIdsBeingDeleted:] */

void FUN_107a16aa0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  ppuStack_58 = &PTR____CFConstantStringClassReference_110ddd998;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_50 = param_4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110ea9f38,puVar1);
  _objc_release(puVar1);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c12e1c0(*(undefined8 *)(param_4 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 107a16b80; end: 107a16b9f; -[SCStoryManagementActionBarActionHandler didCancelDeleteStorySnap] */

void FUN_107a16b80(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}


