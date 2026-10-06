/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a6c1c0; end: 107a6c2e3; -[SCTopicViewerSoundShareSender _containerWithPresentingViewController:] */

void FUN_107a6c1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_3);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107a6c2e4;
  puStack_58 = &UNK_110849680;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0311a0(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a6c2e4; end: 107a6c37f;  */

void FUN_107a6c2e4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a6c380; end: 107a6c3af; -[SCTopicViewerSoundShareSender _detachSendToUI] */

void FUN_107a6c380(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x48),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a6c3b0; end: 107a6c713; -[SCTopicViewerSoundShareSender _sendToSelectedItems:additionalText:] */

void FUN_107a6c3b0(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
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
  ppuVar4 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar14 = param_3;
  func_0x00010bf529e0();
  if (ppuVar14 != (undefined **)0x0) {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar11 = *(undefined8 *)(param_1 + 0x38);
      uVar1 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain();
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      _objc_retain(param_3);
      ppuVar4 = param_3;
      func_0x00010bf52a60();
      if (ppuVar4 == (undefined **)0x0) {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        lVar12 = *plStack_120;
        do {
          ppuVar14 = (undefined **)0x0;
          do {
            if (*plStack_120 != lVar12) {
              _objc_enumerationMutation(param_3);
            }
            lVar15 = *(long *)(lStack_128 + (long)ppuVar14 * 8);
            lVar13 = lVar15;
            func_0x00010c0f4aa0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            puVar8 = PTR_PTR_1126b01c0;
            lVar5 = lVar15;
            func_0x00010c122a80(lVar15);
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010c122b80();
            _objc_retainAutoreleasedReturnValue();
            if (lVar13 == 0) {
              func_0x00010c294260(puVar8);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar7);
              _objc_release(lVar6);
              lVar13 = 1;
            }
            else {
              func_0x00010bfcf680();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar7);
              _objc_release(lVar6);
              _objc_release(lVar5);
              func_0x00010c0f4aa0();
              _objc_retainAutoreleasedReturnValue();
              lVar13 = lVar15;
              func_0x00010bf529e0();
              lVar5 = lVar15;
            }
            _objc_release(lVar5);
            lVar2 = lVar13 + lVar2;
            func_0x00010befa120(puVar3);
            _objc_release(puVar8);
            ppuVar14 = (undefined **)((long)ppuVar14 + 1);
          } while (ppuVar4 != ppuVar14);
          ppuVar4 = param_3;
          func_0x00010bf52a60();
        } while (ppuVar4 != (undefined **)0x0);
      }
      _objc_release(param_3);
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010bf51e00(puVar3);
      uVar10 = uVar9;
      func_0x00010c246920(uVar9);
      _objc_retainAutoreleasedReturnValue();
      puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_170 = 0xc2000000;
      pcStack_168 = FUN_107a6c714;
      puStack_160 = &UNK_1109f80e8;
      lStack_158 = param_1;
      uStack_140 = uVar11;
      _objc_retain(param_4);
      uVar11 = uVar1;
      uStack_150 = param_4;
      uStack_148 = uVar1;
      lStack_138 = lVar2;
      _objc_retain(uVar1);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &puStack_178;
      func_0x00010c297260(uVar10);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(puVar8);
      _objc_release(uVar9);
      _objc_release(uStack_148);
      _objc_release(uStack_150);
      _objc_release(uVar1);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bea0a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3[4],PTR_s__sendToConversations_trackId_add_112585c30,param_2,param_3[7],
               param_3[5],param_3[8],param_3[6],ppuVar4);
    return;
  }
  return;
}



/* Entry: 107a6c714; end: 107a6c72f;  */

void FUN_107a6c714(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea0a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__sendToConversations_trackId_add_112585c30,
             param_2,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30),param_3);
  return;
}



/* Entry: 107a6c730; end: 107a6cc1f; -[SCTopicViewerSoundShareSender _sendToConversations:trackId:additionalText:numOfRecipients:sendToSessionId:error:] */

void FUN_107a6c730(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_8 == 0) {
    lVar2 = param_3;
    func_0x00010bf50b20();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        puVar3 = PTR_PTR_1126d61b0;
        _objc_opt_new();
        func_0x00010841fab4(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c206a40(puVar3);
        _objc_release(param_4);
        puVar4 = PTR_PTR_1126be930;
        _objc_opt_new();
        func_0x00010c206b00();
        puVar5 = PTR_PTR_1126ba668;
        _objc_opt_new();
        func_0x00010c1fea60();
        puVar6 = puVar5;
        func_0x00010bf63640();
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 != (undefined *)0x0) {
          lVar2 = param_3;
          func_0x00010bf026a0(param_3);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(param_7);
          puVar6 = PTR_PTR_1126b1a40;
          _objc_opt_new(PTR_PTR_1126b1a40);
          func_0x00010c2b9b80();
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c2aa660(puVar6);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c2aa540(puVar6);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c2b0820(puVar6);
          _objc_unsafeClaimAutoreleasedReturnValue();
          lVar1 = lVar2;
          func_0x0001086063f4(lVar2,param_6,0,0,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2ac2e0(puVar6);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(lVar1);
          func_0x00010011df08();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2bc480(puVar6);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(lVar1);
          func_0x00010c2b8260(puVar6);
          _objc_unsafeClaimAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2afd40(puVar6);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar7);
          puVar7 = puVar6;
          func_0x00010bf21f60(puVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          _objc_release(param_7);
          _objc_release(lVar2);
          puVar8 = PTR_PTR_1126be6d0;
          _objc_alloc();
          puVar6 = PTR_PTR_1126b28f8;
          _objc_retain(puVar7);
          _objc_alloc(puVar6);
          func_0x00010c02b8e0();
          puVar9 = puVar6;
          func_0x00010c2a82e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          puVar10 = puVar9;
          func_0x00010bf21f60(puVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          _objc_release(puVar6);
          func_0x00010c002bc0();
          puVar6 = puVar8;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          _objc_release(puVar10);
          uVar11 = *(undefined8 *)(param_1 + 8);
          func_0x00010c269d40(uVar11);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar11;
          func_0x00010bf37880();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar11);
          _objc_initWeak(auStack_68,param_1);
          uVar11 = *(undefined8 *)(param_1 + 8);
          func_0x00010c269d40(uVar11);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = param_3;
          func_0x00010bf50b20(param_3);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(PTR___dispatch_main_q_11034be20);
          _objc_copyWeak(auStack_70,auStack_68);
          func_0x00010c15c260(uVar11);
          _objc_release(PTR___dispatch_main_q_11034be20);
          _objc_release(lVar2);
          _objc_release(uVar11);
          _objc_destroyWeak(auStack_70);
          _objc_destroyWeak(auStack_68);
          _objc_release(uVar12);
          _objc_release(puVar6);
          _objc_release(puVar7);
        }
        _objc_release();
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
      }
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107a6cc20; end: 107a6cc53;  */

void FUN_107a6cc20(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebaca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a6cc54; end: 107a6cd43; -[SCTopicViewerSoundShareSender _showSendResult:] */

void FUN_107a6cc54(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126afde0;
  if (lVar2 != 0) {
    if (param_3 == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e1c5f8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c5f8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf54760(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e05498;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e05498,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf55ce0(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar3);
    func_0x00010c25f340(lVar2);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107a6cd44; end: 107a6ce0b; -[SCTopicViewerSoundShareSender didSendWithSelectionState:] */

void FUN_107a6cd44(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c1599e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x50);
    _objc_release(lVar1);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(param_1 + 0x50) + 0x10))();
    }
  }
  lVar1 = param_3;
  func_0x00010c1599e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010befd440(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bea0ce0(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bde3970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__completeWorkflow_1125567f8);
  return;
}



/* Entry: 107a6ce0c; end: 107a6ce0f; -[SCTopicViewerSoundShareSender didDismissWithSelectedItems:sendToDismissSource:] */

void FUN_107a6ce0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde3970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__completeWorkflow_1125567f8);
  return;
}



/* Entry: 107a6ce10; end: 107a6ce87; -[SCTopicViewerSoundShareSender _completeWorkflow] */

void FUN_107a6ce10(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bdfb680(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a6ce88; end: 107a6cf0b; -[SCTopicViewerSoundShareSender .cxx_destruct] */

void FUN_107a6ce88(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 107a6cf0c; end: 107a6d017;  */

void FUN_107a6cf0c(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    _objc_retain();
    func_0x000107e48310();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar2 = param_1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf0a460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((param_2 & 1) == 0) {
      _objc_retain(puVar4);
      puVar5 = puVar4;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar4);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107a6d018; end: 107a6d08f; -[SCTopicViewerRemixesHeaderCollectionViewCell initWithFrame:] */

undefined1 * FUN_107a6d018(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9870;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    _objc_release(puVar2);
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107a6d090; end: 107a6d0ef; -[SCTopicViewerRemixesHeaderCollectionViewCell dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a6d090(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_112768e40));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_112768e44));
  puStack_28 = PTR_PTR_1126f9870;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107a6d0f0; end: 107a6d0ff; +[SCTopicViewerRemixesHeaderCollectionViewCell sizeWithViewModel:constrainedToSize:] */

void FUN_107a6d0f0(undefined8 param_1,undefined8 param_2)

{
  NEON_fminnm(param_2,0x4057800000000000);
  return;
}



/* Entry: 107a6d100; end: 107a6d203; -[SCTopicViewerRemixesHeaderCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a6d100(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d61b8;
  _objc_opt_class(PTR_PTR_1126d61b8);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    lVar6 = (long)_DAT_112768e48;
    uVar5 = *(ulong *)(param_1 + lVar6);
    _objc_retain(param_3);
    _objc_retain(uVar5);
    if (param_3 == uVar5) {
      _objc_release(uVar5);
      _objc_release(param_3);
    }
    else {
      if (uVar5 == 0) {
        _objc_release();
      }
      else {
        uVar3 = param_3;
        func_0x00010c071ae0();
        _objc_release(uVar5);
        _objc_release(param_3);
        if ((uVar3 & 1) != 0) goto LAB_107a6d1e4;
      }
      _objc_retain(param_3);
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      *(ulong *)(param_1 + lVar6) = uVar1;
      _objc_release(uVar4);
      func_0x00010beb07c0(param_1);
      func_0x00010beb01a0(param_1);
    }
  }
LAB_107a6d1e4:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a6d204; end: 107a6d7ff; -[SCTopicViewerRemixesHeaderCollectionViewCell _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a6d204(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  lVar13 = (long)_DAT_112768e4c;
  uVar10 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar1;
  _objc_release(uVar10);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar13));
  uVar10 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c08c0e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(uVar10);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar13));
  uVar10 = *(undefined8 *)(param_1 + lVar13);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(uVar10);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar11 = (long)_DAT_112768e50;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c219b60(uVar10);
  func_0x000107a801e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar11));
  _objc_release(uVar10);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar11));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar11));
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar12 = (long)_DAT_112768e54;
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar10);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar12));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar12));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  uStack_90 = *(undefined8 *)(param_1 + lVar11);
  uStack_88 = *(undefined8 *)(param_1 + lVar12);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0();
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1);
  func_0x00010c16e060(puVar1);
  func_0x00010c207380(0x4010000000000000,puVar1);
  func_0x00010c166c00(puVar1);
  puStack_d8 = puVar1;
  func_0x00010c190b80(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  uStack_a0 = *(undefined8 *)(param_1 + lVar13);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0();
  _objc_release(puVar3);
  func_0x00010c219b60(puVar2);
  func_0x00010c16e060(puVar2);
  func_0x00010c207380(0x402c000000000000,puVar2);
  func_0x00010c166c00(puVar2);
  func_0x00010c190b80(puVar2);
  lVar11 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar11);
  puStack_120 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar1 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  puStack_e8 = puVar1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_e0 = lVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_f0 = lVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  puStack_f8 = puVar1;
  puStack_d0 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  puStack_108 = puVar3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_100 = lVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_110 = lVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  puStack_118 = puVar3;
  puStack_c8 = puVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  puStack_130 = puVar1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = lVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = lVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  puStack_140 = puVar1;
  puStack_c0 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  puStack_b8 = puVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010bf49420(0x4054000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar13);
  uStack_b0 = uVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf49420(0x4054000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010beef8c0(puStack_120);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar10);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(puVar3);
  _objc_release(puStack_140);
  _objc_release(lStack_138);
  _objc_release(lStack_128);
  _objc_release(puStack_130);
  _objc_release(puStack_118);
  _objc_release(lStack_110);
  _objc_release(lStack_100);
  _objc_release(puStack_108);
  _objc_release(puStack_f8);
  _objc_release(lStack_f0);
  _objc_release(lStack_e0);
  _objc_release(puStack_e8);
  _objc_release(puVar2);
  puVar1 = puStack_d8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_1b0;
  pcStack_148 = FUN_107a6d800;
  uStack_180 = uVar5;
  puStack_178 = puVar4;
  lStack_170 = lVar12;
  puStack_168 = puVar2;
  uStack_160 = uVar7;
  uStack_158 = uVar6;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  lVar11 = (long)_DAT_112768e40;
  func_0x00010bf86d40(*(undefined8 *)(puVar1 + lVar11));
  _objc_initWeak(auStack_188,puVar1);
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_107a6d91c;
  puStack_198 = &UNK_11084eff0;
  _objc_copyWeak(auStack_190,auStack_188);
  _objc_retainBlock(&puStack_1b0);
  puVar2 = puVar9;
  func_0x00010c26dea0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(puVar1 + lVar11);
  *(undefined **)(puVar1 + lVar11) = puVar3;
  _objc_release(uVar10);
  _objc_release(puVar2);
  _objc_release(ppuVar8);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_188);
  _objc_release(puVar9);
  return;
}



/* Entry: 107a6d800; end: 107a6d91b; -[SCTopicViewerRemixesHeaderCollectionViewCell _setupThumbnailImageSubscriptionWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a6d800(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112768e40;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar5));
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107a6d91c;
  puStack_58 = &UNK_11084eff0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_70);
  uVar2 = param_3;
  func_0x00010c26dea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107a6d91c; end: 107a6d98b;  */

void FUN_107a6d91c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bee2040(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a6d98c; end: 107a6d9f3; -[SCTopicViewerRemixesHeaderCollectionViewCell _updateThumbnailImage:] */

/* WARNING: Possible PIC construction at 0x000107a6d9e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107a6d9e4) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a6d98c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768e4c);
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110eaacd8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setImage__1126481e8,param_3);
  return;
}



/* Entry: 107a6d9f4; end: 107a6db0f; -[SCTopicViewerRemixesHeaderCollectionViewCell _setupSubmissionCountSubscriptionWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a6d9f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112768e44;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar5));
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107a6db10;
  puStack_58 = &UNK_11084eff0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_70);
  uVar2 = param_3;
  func_0x00010c25ecc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107a6db10; end: 107a6dbb7;  */

void FUN_107a6db10(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107a6dbb8;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 107a6dbb8; end: 107a6dc0b;  */

void FUN_107a6dbb8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ec5e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bede740(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a6dc0c; end: 107a6dcd7; -[SCTopicViewerRemixesHeaderCollectionViewCell _updateRemixCountSubtitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a6dc0c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c067fc0();
  if (lVar1 == 1) {
    func_0x000107a801f8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107a80210();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c067fc0();
  _objc_release(param_3);
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110eaad18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112768e54),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a6dcd8; end: 107a6dce7; -[SCTopicViewerRemixesHeaderCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a6dcd8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112768e48);
}



/* Entry: 107a6dce8; end: 107a6dcf7; -[SCTopicViewerRemixesHeaderCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a6dce8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112768e58);
}



/* Entry: 107a6dcf8; end: 107a6dd37; -[SCTopicViewerRemixesHeaderCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a6dcf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112768e58;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a6dd38; end: 107a6ddc7; -[SCTopicViewerRemixesHeaderCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a6dd38(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112768e58,0);
  _objc_storeStrong(param_1 + _DAT_112768e48,0);
  _objc_storeStrong(param_1 + _DAT_112768e44,0);
  _objc_storeStrong(param_1 + _DAT_112768e40,0);
  _objc_storeStrong(param_1 + _DAT_112768e54,0);
  _objc_storeStrong(param_1 + _DAT_112768e50,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112768e4c,0);
  return;
}



/* Entry: 107a6ddc8; end: 107a6df23; -[SCTopicViewerRemixesHeaderInteractor initWithStoriesSnapPlaybackMetadata:submissionCountObservable:storiesThumbnailCoordinator:] */

undefined1 *
FUN_107a6ddc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

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
  puStack_48 = PTR_PTR_1126f9878;
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
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    func_0x00010be14f00(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a6df24; end: 107a6df57; -[SCTopicViewerRemixesHeaderInteractor remixesHeaderViewModel] */

void FUN_107a6df24(void)

{
  _objc_alloc(PTR_PTR_1126d61b8);
  func_0x00010c051e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a6df58; end: 107a6e0d3; -[SCTopicViewerRemixesHeaderInteractor _fetchThumbnailImage] */

void FUN_107a6df58(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107a6e0d4;
  puStack_58 = &UNK_110853030;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_70);
  puVar2 = *(undefined **)(param_1 + 8);
  func_0x00010c26df40();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0c5340(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c3398;
    _objc_alloc(PTR_PTR_1126c3398);
    uVar4 = uVar3;
    func_0x00010bf267e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffa8e0(puVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11da60(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107a6e0d4; end: 107a6e11b;  */

void FUN_107a6e0d4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29c40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a6e11c; end: 107a6e25f; -[SCTopicViewerRemixesHeaderInteractor _handleFetchedThumbnailImage:] */

void FUN_107a6e11c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_b0;
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_107a6e260;
    puStack_40 = &UNK_110842e18;
    uStack_38 = uVar4;
    func_0x000100162d98("APPSTORE",&puStack_58);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      uStack_70 = 0x107a6e2a4;
      puStack_68 = &UNK_110842e18;
      ppuVar3 = &puStack_80;
      uStack_60 = uVar4;
    }
    else {
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x107a6e2e8;
      puStack_98 = &UNK_110841f80;
      uStack_90 = uVar4;
      puStack_88 = puVar2;
    }
    func_0x000100162d98("APPSTORE",ppuVar3);
    _objc_release(puVar2);
  }
  _objc_release(uVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a6e260; end: 107a6e32f;  */

void FUN_107a6e260(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a6e330; end: 107a6e383; -[SCTopicViewerRemixesHeaderInteractor .cxx_destruct] */

void FUN_107a6e330(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a6e384; end: 107a6e47b; -[SCTopicViewerRemixesHeaderProvider initWithStoriesSnapPlaybackMetadata:storiesThumbnailCoordinator:] */

undefined1 *
FUN_107a6e384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f9880;
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
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a6e47c; end: 107a6e4f7; -[SCTopicViewerRemixesHeaderProvider headerSectionWithActionHandler:presentingController:sessionId:] */

void FUN_107a6e47c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010be34d60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar1;
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126d61c0;
  _objc_alloc(PTR_PTR_1126d61c0);
  func_0x00010c01a000();
  puVar3 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  func_0x00010c1f9240();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107a6e4f8; end: 107a6e58b; -[SCTopicViewerRemixesHeaderProvider dynamicHeaderTrackerForTopicView:] */

void FUN_107a6e4f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d6170;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = puVar1;
  func_0x000107a80228();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000107a80228();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0546a0(puVar1,param_2,param_3,puVar2,puVar3);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a6e58c; end: 107a6e5e3; -[SCTopicViewerRemixesHeaderProvider updateWithSubmissionCount:] */

void FUN_107a6e58c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126ae750;
  if (param_3 == 0) {
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2468a0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a6e5e4; end: 107a6e617; -[SCTopicViewerRemixesHeaderProvider _headerInteractor] */

void FUN_107a6e5e4(void)

{
  _objc_alloc(PTR_PTR_1126d61c8);
  func_0x00010c04d300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a6e618; end: 107a6e65f; -[SCTopicViewerRemixesHeaderProvider .cxx_destruct] */

void FUN_107a6e618(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a6e660; end: 107a6e66b; +[SCTopicViewerRemixesHeaderSectionDataProvider announcerIdentifier] */

undefined ** FUN_107a6e660(void)

{
  return &PTR____CFConstantStringClassReference_110eaad78;
}



/* Entry: 107a6e66c; end: 107a6e673; -[SCTopicViewerRemixesHeaderSectionDataProvider addListener:] */

void FUN_107a6e66c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107a6e674; end: 107a6e67b; -[SCTopicViewerRemixesHeaderSectionDataProvider removeListener:] */

void FUN_107a6e674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107a6e67c; end: 107a6e6ef; -[SCTopicViewerRemixesHeaderSectionDataProvider initWithHeaderInteractor:] */

undefined1 * FUN_107a6e67c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9888;
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



/* Entry: 107a6e6f0; end: 107a6e7b3; -[SCTopicViewerRemixesHeaderSectionDataProvider setSectionDataModel:] */

void FUN_107a6e6f0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x18);
  if (uVar3 == 0) {
LAB_107a6e770:
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = param_3;
    _objc_release(uVar2);
    uVar3 = param_1 + 0x20;
    _objc_loadWeakRetained(uVar3);
    func_0x00010c155aa0();
  }
  else {
    _objc_retain(uVar3);
    _objc_retain(param_3);
    if (uVar3 != param_3) {
      if (param_3 == 0) {
        _objc_release(uVar3);
      }
      else {
        uVar1 = uVar3;
        func_0x00010c071ae0(uVar3,param_2,param_3);
        _objc_release(param_3);
        _objc_release(uVar3);
        if ((uVar1 & 1) != 0) goto LAB_107a6e7a0;
      }
      goto LAB_107a6e770;
    }
    _objc_release(param_3);
  }
  _objc_release(uVar3);
LAB_107a6e7a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a6e7b4; end: 107a6e873; -[SCTopicViewerRemixesHeaderSectionDataProvider containerCellViewModelsForIndexPaths:] */

undefined * FUN_107a6e7b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c129b00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aea98;
  _objc_alloc();
  func_0x00010bffd260();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_107a6e874;
    lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110eaad58;
    puVar2 = PTR_PTR_1126d61d0;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_opt_class();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&ppuStack_68,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
      ___stack_chk_fail();
      return (undefined *)0x1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar3;
}



/* Entry: 107a6e874; end: 107a6e8f3; -[SCTopicViewerRemixesHeaderSectionDataProvider contentCellClassesByReuseIdentifier] */

undefined * FUN_107a6e874(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110eaad58;
  puVar1 = PTR_PTR_1126d61d0;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 107a6e8f4; end: 107a6e8fb; -[SCTopicViewerRemixesHeaderSectionDataProvider numberOfSections] */

undefined8 FUN_107a6e8f4(void)

{
  return 1;
}



/* Entry: 107a6e8fc; end: 107a6e903; -[SCTopicViewerRemixesHeaderSectionDataProvider numberOfItemsInSection:] */

undefined8 FUN_107a6e8fc(void)

{
  return 1;
}



/* Entry: 107a6e904; end: 107a6e90b; -[SCTopicViewerRemixesHeaderSectionDataProvider sectionDataModel] */

undefined8 FUN_107a6e904(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107a6e90c; end: 107a6e923; -[SCTopicViewerRemixesHeaderSectionDataProvider dataProviderDelegate] */

void FUN_107a6e90c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a6e924; end: 107a6e92f; -[SCTopicViewerRemixesHeaderSectionDataProvider setDataProviderDelegate:] */

void FUN_107a6e924(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 107a6e930; end: 107a6e937; -[SCTopicViewerRemixesHeaderSectionDataProvider updateQueuePerformer] */

undefined8 FUN_107a6e930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107a6e938; end: 107a6e967; -[SCTopicViewerRemixesHeaderSectionDataProvider setUpdateQueuePerformer:] */

void FUN_107a6e938(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a6e968; end: 107a6e9b7; -[SCTopicViewerRemixesHeaderSectionDataProvider .cxx_destruct] */

void FUN_107a6e968(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a6e9b8; end: 107a6ea5b; -[SCTopicViewerRemixesHeaderViewModel initWithThumbnailImageObservable:submissionCountObservable:] */

undefined1 *
FUN_107a6e9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9890;
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



/* Entry: 107a6ea5c; end: 107a6ea7f; -[SCTopicViewerRemixesHeaderViewModel copyWithZone:] */

undefined8 FUN_107a6ea5c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107a6ea80; end: 107a6ea87; -[SCTopicViewerRemixesHeaderViewModel thumbnailImageObservable] */

undefined8 FUN_107a6ea80(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107a6ea88; end: 107a6ea8f; -[SCTopicViewerRemixesHeaderViewModel submissionCountObservable] */

undefined8 FUN_107a6ea88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a6ea90; end: 107a6eabf; -[SCTopicViewerRemixesHeaderViewModel .cxx_destruct] */

void FUN_107a6ea90(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a6eac0; end: 107a6eb9b; -[SCTopicViewerDynamicHeaderTracker initWithTopicView:visibleHeaderDisplayName:hiddenHeaderDisplayName:animatesTransitions:] */

undefined1 *
FUN_107a6eac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f9898;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = param_6;
    *(undefined1 *)((long)puVar1 + 0x30) = 1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a6eb9c; end: 107a6eba3; -[SCTopicViewerDynamicHeaderTracker initWithTopicView:visibleHeaderDisplayName:hiddenHeaderDisplayName:] */

void FUN_107a6eb9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0546d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithTopicView_visibleHeaderD_1125f2bc0);
  return;
}



/* Entry: 107a6eba4; end: 107a6ec2b; -[SCTopicViewerDynamicHeaderTracker _updateDisplayName] */

void FUN_107a6eba4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1;
  func_0x00010be40e40();
  if ((uint)*(byte *)(param_1 + 0x30) == (uint)lVar2) {
    return;
  }
  *(char *)(param_1 + 0x30) = (char)lVar2;
  lVar1 = 0x10;
  if ((uint)lVar2 == 0) {
    lVar1 = 0x18;
  }
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  _objc_retain(uVar3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c28c6c0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a6ec2c; end: 107a6ec3b; -[SCTopicViewerDynamicHeaderTracker _isHeaderVisible] */

bool FUN_107a6ec2c(long param_1)

{
  return 0 < *(long *)(param_1 + 0x28);
}



/* Entry: 107a6ec3c; end: 107a6ecb7; -[SCTopicViewerDynamicHeaderTracker didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_107a6ec3c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f8a778);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f8a798);
    if ((int)uVar1 == 0) goto LAB_107a6eca0;
    lVar2 = -1;
  }
  else {
    lVar2 = 1;
  }
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + lVar2;
LAB_107a6eca0:
  func_0x00010bed7020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a6ecb8; end: 107a6ecef; -[SCTopicViewerDynamicHeaderTracker .cxx_destruct] */

void FUN_107a6ecb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107a6ecf0; end: 107a6ed7f;  */

void FUN_107a6ecf0(ulong param_1)

{
  if ((long)param_1 < 3) {
    if (param_1 < 2) {
      func_0x000108f5821c();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_1 == 2) {
      func_0x000107a80120();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_1 - 3 < 2) {
    func_0x000107a800f0();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 5) {
    func_0x000107a80108();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 8) {
    func_0x000107a80240();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a6ed80; end: 107a6eeb7;  */

void FUN_107a6ed80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (param_1 == 8) {
    uVar4 = 0xc4;
    if (lRam00000001138466f0 < 3) {
      uVar4 = 0xd4;
    }
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110eaad98);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c14d100(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else if (param_1 == 5) {
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110eaadd8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_1 - 3U < 2) {
      uVar4 = 0xc4;
      if (lRam00000001138466f0 < 3) {
        uVar4 = 0xd4;
      }
    }
    else {
      uVar4 = 0xd4;
    }
    puVar3 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40,param_2,0x6c,uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107a6eeb8; end: 107a6ef23;  */

void FUN_107a6eeb8(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((param_1 < 9) && ((1L << (param_1 & 0x3f) & 0x118U) != 0)) {
    if (lRam00000001138466f0 < 3) {
      uVar1 = 0x34;
    }
    else {
      uVar1 = 0x6a;
    }
  }
  else {
    uVar1 = 0xd5;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a6ef24; end: 107a6eff3;  */

undefined * FUN_107a6ef24(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lStack_38;
  
  func_0x00010c1195e0(param_1,param_2,&PTR____CFConstantStringClassReference_110de91b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ba430;
  uVar2 = param_1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  lStack_38 = 0;
  func_0x00010c0f40e0(puVar3,param_2,uVar2,&lStack_38);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_38;
  _objc_release(uVar2);
  if (lVar1 == 0) {
    puVar4 = puVar3;
    func_0x00010c0fe180(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c071920();
    _objc_release(puVar4);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  _objc_release(puVar3);
  _objc_release(param_1);
  return puVar5;
}



/* Entry: 107a6eff4; end: 107a6f007;  */

void FUN_107a6eff4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110eaadb8,0,0);
  return;
}



/* Entry: 107a6f008; end: 107a6f07f; -[SCTopicViewerTapGestureRecognizer reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a6f008(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f98a0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_reset_11262ba18);
  *(undefined1 *)(param_1 + _DAT_112768eb8) = 0;
  uVar3 = *(undefined8 *)PTR__CGPointZero_110347540;
  lVar1 = (long)_DAT_112768ebc;
  lVar2 = (long)_DAT_112768ec0;
  ((undefined8 *)(param_1 + lVar1))[1] = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar3);
  return;
}



/* Entry: 107a6f080; end: 107a6f217; -[SCTopicViewerTapGestureRecognizer touchesBegan:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a6f080(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f98a0;
  lStack_60 = param_3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_touchesBegan_withEvent__11267b780,param_5,param_6);
  _objc_initWeak(auStack_68,param_3);
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c137660(param_3);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c150360();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + _DAT_112768ec0);
  *(undefined **)(param_3 + _DAT_112768ec0) = puVar1;
  _objc_release(uVar3);
  lVar4 = (long)_DAT_112768ebc;
  lVar2 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_3);
  *(undefined8 *)(param_3 + lVar4) = param_1;
  ((undefined8 *)(param_3 + lVar4))[1] = param_2;
  _objc_release(lVar2);
  func_0x00010c209fc0(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 107a6f218; end: 107a6f243;  */

void FUN_107a6f218(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde2e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a6f244; end: 107a6f28b; -[SCTopicViewerTapGestureRecognizer _completeLongPress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a6f244(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c1b2600(param_1,param_2,1);
  lVar2 = (long)_DAT_112768ec0;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setState__112660218,3);
  return;
}



/* Entry: 107a6f28c; end: 107a6f35b; -[SCTopicViewerTapGestureRecognizer touchesMoved:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a6f28c(long param_1)

{
  double *pdVar1;
  bool bVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f98a0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_touchesMoved_withEvent__11252ca58);
  pdVar1 = (double *)(param_1 + _DAT_112768ebc);
  dVar4 = *pdVar1;
  dVar5 = pdVar1[1];
  bVar2 = false;
  if ((dVar4 == *(double *)PTR__CGPointZero_110347540) &&
     (bVar2 = false, !NAN(dVar5) && !NAN(*(double *)(PTR__CGPointZero_110347540 + 8)))) {
    bVar2 = dVar5 == *(double *)(PTR__CGPointZero_110347540 + 8);
  }
  if (!bVar2) {
    lVar3 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_1);
    _objc_release(lVar3);
    dVar4 = *pdVar1 - dVar4;
    _hypot(dVar4,pdVar1[1] - dVar5);
    if (10.0 < dVar4) {
      func_0x00010c209fc0(param_1);
    }
  }
  return;
}



/* Entry: 107a6f35c; end: 107a6f3c3; -[SCTopicViewerTapGestureRecognizer touchesEnded:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a6f35c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f98a0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_touchesEnded_withEvent__11267b788);
  lVar2 = (long)_DAT_112768ec0;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010c209fc0(param_1);
  return;
}



/* Entry: 107a6f3c4; end: 107a6f3d3; -[SCTopicViewerTapGestureRecognizer isLongPress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107a6f3c4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112768eb8);
}



/* Entry: 107a6f3d4; end: 107a6f3e3; -[SCTopicViewerTapGestureRecognizer setIsLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a6f3d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112768eb8) = param_3;
  return;
}



/* Entry: 107a6f3e4; end: 107a6f3f3; -[SCTopicViewerTapGestureRecognizer requiredLongPressTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a6f3e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112768eb4);
}



/* Entry: 107a6f3f4; end: 107a6f403; -[SCTopicViewerTapGestureRecognizer setRequiredLongPressTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a6f3f4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112768eb4) = param_1;
  return;
}



/* Entry: 107a6f404; end: 107a6f417; -[SCTopicViewerTapGestureRecognizer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a6f404(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112768ec0,0);
  return;
}



/* Entry: 107a6f418; end: 107a6fb07; -[SCTopicViewerViewController initWithTopic:topicStoryType:displayName:thumbnailCoordinator:topicOperaPresenter:topicReportManager:topicShareManager:topicPageRequester:additionalTopicsRequester:ourStoriesOnboardingManager:isCameosEnabled:cameraPresenter:sourcePageSessionId:sourcePageType:blizzardLogger:headerSectionProvider:thirdPartyAppId:webBrowsingScopeExposer:shouldAllowAddToTopic:joinTopicChatEnabled:imageProvider:additionalTopicsToLoad:operaShowUseSound:soundReportManager:ctaProvider:storiesExperimentServices:soundTopicPageImprovementsEnabled:soundTopicHeaderStylingEnabled:topicPageNewSnapGridEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107a6f418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             long param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined4 param_22,undefined4 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined4 param_30)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  puStack_70 = PTR_PTR_1126f98a8;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_112768ec4;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_3;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112768ec8) = param_4;
    lVar6 = (long)_DAT_112768ecc;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_5;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112768ed0;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_6;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112768ed4;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_7;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar2 + lVar6));
    lVar6 = (long)_DAT_112768ed8;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_8;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112768edc;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_9;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112768ee0;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_10;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112768ee4;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_11;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112768ee8;
    _objc_retain(param_12);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_12;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112768eec) = param_13;
    *(bool *)((long)puVar2 + (long)_DAT_112768ef0) = param_17 == 0x5f;
    puVar4 = PTR_PTR_1126d61d8;
    _objc_alloc();
    func_0x00010bff00e0();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112768ef4);
    *(undefined **)((long)puVar2 + (long)_DAT_112768ef4) = puVar4;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112768ef8;
    _objc_retain(param_18);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_18;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112768efc;
    _objc_retain(param_15);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_15;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112768f00;
    _objc_retain(param_16);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_16;
    _objc_release(uVar3);
    *(long *)((long)puVar2 + (long)_DAT_112768f04) = param_17;
    *(undefined1 *)((long)puVar2 + (long)_DAT_112768f08) = (undefined1)param_22;
    lVar6 = (long)_DAT_112768f0c;
    _objc_retain(param_21);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_21;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112768f10) = 0;
    uVar1 = 0;
    if (param_17 != 0x17) {
      uVar1 = param_22._1_1_;
    }
    *(undefined1 *)((long)puVar2 + (long)_DAT_112768f14) = uVar1;
    lVar6 = (long)_DAT_112768f18;
    _objc_retain(param_25);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_25;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112768f1c;
    _objc_retain(param_26);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_26;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112768f20;
    _objc_retain(param_27);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_27;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112768f24) = 0;
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112768f28);
    *(undefined **)((long)puVar2 + (long)_DAT_112768f28) = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar5);
    lVar6 = (long)_DAT_112768f2c;
    _objc_retain(param_19);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_19;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112768f30;
    _objc_retain(param_20);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_20;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112768f34;
    _objc_retain(param_28);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_28;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112768f38;
    _objc_retain(param_29);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_29;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112768f3c) = (undefined1)param_30;
    *(undefined1 *)((long)puVar2 + (long)_DAT_112768f40) = param_30._1_1_;
    *(undefined1 *)((long)puVar2 + (long)_DAT_112768f44) = param_30._2_1_;
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release();
    func_0x00010b837400();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112768f48;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined **)((long)puVar2 + lVar6) = puVar4;
    _objc_release(uVar3);
    func_0x00010c1797c0(*(undefined8 *)((long)puVar2 + lVar6));
    func_0x00010c19efc0(0x3ff0000000000000,*(undefined8 *)((long)puVar2 + lVar6));
    func_0x00010c219b20(puVar2);
    lVar6 = (long)_DAT_112768f4c;
    _objc_retain(param_24);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_24;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112768f50) = 0;
    func_0x00010c189400(puVar2);
  }
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 107a6fb08; end: 107a6fb53; -[SCTopicViewerViewController _defaultCTAButtonActionModelForAddToTopic] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a6fb08(long param_1)

{
  if (*(char *)(param_1 + _DAT_112768f08) == '\x01') {
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a6fb54; end: 107a6fb9f; -[SCTopicViewerViewController _moreButtonActionModelForAddToTopic] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a6fb54(long param_1)

{
  if (*(char *)(param_1 + _DAT_112768f08) == '\x01') {
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a6fba0; end: 107a6fff3; -[SCTopicViewerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a6fba0(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar2 = param_1;
  func_0x00010be611e0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + _DAT_112768ec8) == 5) {
    lVar9 = (long)_DAT_112768f30;
    lVar3 = *(long *)(param_1 + lVar9);
    func_0x00010c08fa60();
    if ((lVar3 == 0) || (param_1[_DAT_112768f08] != '\x01')) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      uStack_88 = *(undefined8 *)(param_1 + lVar9);
      ppuStack_90 = &PTR____CFConstantStringClassReference_110eab4f8;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b460(puVar8);
      _objc_release(puVar4);
    }
  }
  else {
    puVar8 = param_1;
    func_0x00010bdf9280(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = param_1;
  func_0x00010be43e60();
  if ((int)puVar4 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + _DAT_112768f34);
  }
  _objc_retain(uVar10);
  puVar4 = param_1;
  func_0x00010be43e60();
  if ((int)puVar4 == 0) {
    bVar7 = 0;
  }
  else if ((param_1[_DAT_112768f40] & 1) == 0) {
    bVar7 = param_1[_DAT_112768f3c];
  }
  else {
    bVar7 = 1;
  }
  func_0x00010be43e60();
  if ((bVar7 & 1) == 0) {
    ppuVar11 = *(undefined ***)(param_1 + _DAT_112768ecc);
  }
  else {
    ppuVar11 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  _objc_retain(ppuVar11);
  puVar4 = PTR_PTR_1126d61e0;
  _objc_alloc();
  func_0x00010c00d540();
  lVar3 = (long)_DAT_112768f54;
  uVar6 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar4;
  _objc_release(uVar6);
  func_0x00010c161980(*(undefined8 *)(param_1 + lVar3));
  _objc_initWeak(auStack_a0,param_1);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_107a6fff4;
  puStack_b0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_a8,auStack_a0);
  ppuVar5 = &puStack_c8;
  _objc_retainBlock();
  uVar12 = *(undefined8 *)(param_1 + lVar3);
  lVar9 = (long)_DAT_112768f58;
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bfdefa0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7620(uVar12);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  _objc_copyWeak(auStack_d0,auStack_a0);
  _objc_retain(ppuVar5);
  func_0x00010c0e0c00(uVar6);
  func_0x00010c222380(param_1);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112768f48);
  uStack_98 = *(undefined8 *)(param_1 + lVar3);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(uVar6);
  _objc_release(puVar4);
  _objc_release(ppuVar5);
  _objc_destroyWeak(auStack_d0);
  _objc_release(ppuVar5);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(ppuVar11);
  _objc_release(uVar10);
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_a0);
    __Unwind_Resume(puVar1);
    puVar1 = puVar1 + 0x20;
    _objc_loadWeakRetained(puVar1);
    func_0x00010be2a6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107a6fff4; end: 107a7001f;  */

void FUN_107a6fff4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a70020; end: 107a70083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a70020(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1a7620(*(undefined8 *)(param_1 + _DAT_112768f54));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a70084; end: 107a700d3; -[SCTopicViewerViewController _handleHeaderAccessoryButtonTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a70084(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112768f2c;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_handleTopicViewerHiddenDueToPres_1125d2560);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfd2ee0(*(undefined8 *)(param_1 + lVar2));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf7cbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112768f58),
             PTR_s_didTapHeaderAccessoryButtonFromP_1125bcc90,param_1);
  return;
}



/* Entry: 107a700d4; end: 107a70343; -[SCTopicViewerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a700d4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f98a8;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_viewDidLoad_112684cd8);
  lVar7 = (long)_DAT_112768f54;
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c245740(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e04a0();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b1318;
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c245740(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1555c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112768f5c;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar2;
  _objc_release(uVar6);
  _objc_release(uVar1);
  func_0x00010c17e720(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar7));
  puVar2 = PTR_PTR_1126d61e8;
  _objc_alloc();
  func_0x00010c054340();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a100();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112768f18;
  lVar7 = *(long *)(param_1 + lVar9);
  func_0x00010bf529e0();
  if (lVar7 != 0) {
    uVar8 = 0;
    do {
      uVar1 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c0dfd20(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126d61e8;
      _objc_alloc(PTR_PTR_1126d61e8);
      uVar8 = uVar8 + 1;
      func_0x00010c054340();
      func_0x00010befa120(puVar3);
      _objc_release(puVar4);
      _objc_release(uVar1);
      uVar5 = *(ulong *)(param_1 + lVar9);
      func_0x00010bf529e0();
    } while (uVar8 < uVar5);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768f60);
  *(undefined **)(param_1 + _DAT_112768f60) = puVar3;
  _objc_release(uVar1);
  func_0x00010beaf980(param_1);
  func_0x00010be8ac80(param_1);
  func_0x00010be12b80(param_1);
  _objc_release(puVar2);
  return;
}



/* Entry: 107a70344; end: 107a70613; -[SCTopicViewerViewController _setupSections] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a70344(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
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
  lVar13 = (long)_DAT_112768f64;
  lVar2 = param_1;
  if (*(long *)(param_1 + lVar13) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_112768f2c;
    lVar2 = *(long *)(param_1 + lVar9);
    func_0x00010bfdfe60(lVar2,param_2,*(undefined8 *)(param_1 + _DAT_112768ef4),param_1,
                        *(undefined8 *)(param_1 + _DAT_112768f68));
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      *(undefined1 *)(param_1 + _DAT_112768f24) = 1;
      uVar3 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010bf8b8c0(uVar3,param_2,*(undefined8 *)(param_1 + _DAT_112768f54));
      _objc_retainAutoreleasedReturnValue();
      lVar9 = (long)_DAT_112768f6c;
      uVar8 = *(undefined8 *)(param_1 + lVar9);
      *(undefined8 *)(param_1 + lVar9) = uVar3;
      _objc_release(uVar8);
      if (*(long *)(param_1 + lVar9) != 0) {
        func_0x00010bef9980(lVar2);
      }
      puVar4 = PTR_PTR_1126b16f8;
      _objc_alloc(PTR_PTR_1126b16f8);
      func_0x00010c028e00();
      puVar11 = (undefined *)0x0;
      if (*(char *)(param_1 + _DAT_112768f44) == '\x01') {
        puVar11 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297340(0,0x4020000000000000,0,0x4020000000000000,
                            PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar5 = PTR_PTR_1126b1700;
      _objc_alloc(PTR_PTR_1126b1700);
      func_0x00010c043020(0);
      puVar6 = PTR_PTR_1126b1308;
      _objc_alloc(PTR_PTR_1126b1308);
      func_0x00010c042ce0();
      func_0x00010befa120(puVar1,param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar11);
      _objc_release(puVar4);
    }
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar10 = *(long *)(param_1 + _DAT_112768f60);
    _objc_retain(lVar10);
    lVar9 = lVar10;
    func_0x00010bf52a60(lVar10,param_2,&uStack_130,auStack_e8,0x10);
    if (lVar9 != 0) {
      lVar12 = *plStack_120;
      do {
        lVar14 = 0;
        do {
          if (*plStack_120 != lVar12) {
            _objc_enumerationMutation(lVar10);
          }
          lVar7 = param_1;
          func_0x00010be1be80(param_1,param_2,*(undefined8 *)(lStack_128 + lVar14 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,lVar7);
          _objc_release(lVar7);
          lVar14 = lVar14 + 1;
        } while (lVar9 != lVar14);
        lVar9 = lVar10;
        func_0x00010bf52a60(lVar10,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar9 != 0);
    }
    _objc_release(lVar10);
    uVar3 = *(undefined8 *)(param_1 + lVar13);
    *(undefined **)(param_1 + lVar13) = puVar1;
    _objc_release(uVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(lVar2);
  return;
}



/* Entry: 107a70614; end: 107a70687; -[SCTopicViewerViewController _reloadSectionsConfigurations] */

void FUN_107a70614(undefined8 param_1)

{
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 107a70688; end: 107a707a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a70688(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar7 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c1d6020(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112768f5c),param_2,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112768f64),0);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar8 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112768f60);
  _objc_retain(lVar8);
  lVar1 = lVar8;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_100;
    do {
      lVar10 = 0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(lVar8);
        }
        func_0x00010bf043c0(*(undefined8 *)(lStack_108 + lVar10 * 8));
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar8;
      puVar7 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  lVar1 = lVar8;
  func_0x00010bdf45c0(lVar8,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  func_0x00010bef9980();
  func_0x00010c1f9240(puVar2,param_2,puVar7);
  func_0x00010c161980(puVar2,param_2,*(undefined8 *)(lVar8 + _DAT_112768ef4));
  puVar3 = PTR_PTR_1126b16f8;
  _objc_alloc(PTR_PTR_1126b16f8);
  func_0x00010c028e00();
  uVar12 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar11 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uVar13 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  uVar14 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  puVar4 = (undefined1 *)puVar7;
  func_0x00010c07b180();
  _objc_release(puVar7);
  if (((int)puVar4 != 0) && (lVar9 = lVar8, func_0x00010beb4140(), (int)lVar9 != 0)) {
    lVar9 = lVar8;
    func_0x00010be43e60();
    uVar11 = 0;
    uVar12 = 0x4028000000000000;
    if ((int)lVar9 == 0) {
      uVar12 = 0;
    }
    uVar13 = 0;
    uVar14 = 0;
  }
  uVar15 = 0x3ff0000000000000;
  if (*(char *)(lVar8 + _DAT_112768f44) == '\0') {
    uVar15 = 0x4010000000000000;
  }
  puVar5 = PTR_PTR_1126b1700;
  _objc_alloc(PTR_PTR_1126b1700);
  puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(uVar12,uVar11,uVar13,uVar14,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043020(uVar15,puVar5,param_2,0,puVar3,puVar6,0,0,0);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126b1308;
  _objc_alloc(PTR_PTR_1126b1308);
  func_0x00010c042ce0();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107a707a8; end: 107a7098b; -[SCTopicViewerViewController _generateSnapsSectionWithDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a707a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdf45c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  func_0x00010bef9980();
  func_0x00010c1f9240(puVar2,param_2,param_3);
  func_0x00010c161980(puVar2,param_2,*(undefined8 *)(param_1 + _DAT_112768ef4));
  puVar3 = PTR_PTR_1126b16f8;
  _objc_alloc(PTR_PTR_1126b16f8);
  func_0x00010c028e00();
  uVar8 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar7 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uVar9 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  uVar10 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  uVar11 = param_3;
  func_0x00010c07b180();
  _objc_release(param_3);
  if (((int)uVar11 != 0) && (lVar4 = param_1, func_0x00010beb4140(), (int)lVar4 != 0)) {
    lVar4 = param_1;
    func_0x00010be43e60();
    uVar7 = 0;
    uVar8 = 0x4028000000000000;
    if ((int)lVar4 == 0) {
      uVar8 = 0;
    }
    uVar9 = 0;
    uVar10 = 0;
  }
  uVar11 = 0x3ff0000000000000;
  if (*(char *)(param_1 + _DAT_112768f44) == '\0') {
    uVar11 = 0x4010000000000000;
  }
  puVar5 = PTR_PTR_1126b1700;
  _objc_alloc(PTR_PTR_1126b1700);
  puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(uVar8,uVar7,uVar9,uVar10,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043020(uVar11,puVar5,param_2,0,puVar3,puVar6,0,0,0);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126b1308;
  _objc_alloc(PTR_PTR_1126b1308);
  func_0x00010c042ce0();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107a7098c; end: 107a70b5b; -[SCTopicViewerViewController _createSupplementaryViewProviderForDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7098c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar6 = &puStack_70;
  _objc_retain(param_3);
  func_0x00010beb4140(param_1);
  uVar2 = param_3;
  func_0x00010c07b180();
  if ((int)uVar2 == 0) {
    lVar5 = (long)_DAT_112768f2c;
    uVar1 = *(ulong *)(param_1 + lVar5);
    _objc_opt_respondsToSelector(uVar1,PTR_s_customHeaderSectionViewModelForA_1125b5f38);
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010bf61640(uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar1 = *(ulong *)(param_1 + lVar5);
    _objc_opt_respondsToSelector(uVar1,PTR_s_customActionHandler_1125b5df8);
    if ((uVar1 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_112768ef4);
      _objc_retain(uVar3);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010bf61140(uVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010be43e60(param_1);
    if (*(char *)(param_1 + _DAT_112768f44) == '\x01') {
      _objc_initWeak(auStack_48,param_3);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_107a70b5c;
      puStack_58 = &UNK_110848ca8;
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retainBlock(&puStack_70);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    else {
      ppuVar6 = (undefined **)0x0;
    }
    puVar4 = PTR_PTR_1126d61f0;
    _objc_alloc(PTR_PTR_1126d61f0);
    func_0x00010bff0700();
    _objc_release(ppuVar6);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    puVar4 = PTR_PTR_1126d61f0;
    _objc_alloc(PTR_PTR_1126d61f0);
    func_0x00010bff06e0();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107a70b5c; end: 107a70bb7;  */

bool FUN_107a70b5c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c275680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 107a70bb8; end: 107a70c13; -[SCTopicViewerViewController _shouldHideSnapGridHeaderRow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_107a70bb8(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1;
  func_0x00010be43e60();
  if (((int)lVar1 == 0) ||
     (((*(byte *)(param_1 + _DAT_112768f40) & 1) == 0 &&
      ((*(byte *)(param_1 + _DAT_112768f3c) & 1) == 0)))) {
    bVar2 = *(byte *)(param_1 + _DAT_112768f44);
  }
  else {
    bVar2 = 1;
  }
  return bVar2 & 1;
}



/* Entry: 107a70c14; end: 107a70d13; -[SCTopicViewerViewController _fetchMoreTopics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a70c14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar8 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar9 = *(long *)(param_1 + _DAT_112768f60);
  _objc_retain(lVar9);
  lVar11 = lVar9;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    lVar10 = *plStack_100;
    do {
      lVar12 = 0;
      do {
        if (*plStack_100 != lVar10) {
          _objc_enumerationMutation(lVar9);
        }
        func_0x00010be12ba0(param_1);
        lVar12 = lVar12 + 1;
      } while (lVar11 != lVar12);
      lVar11 = lVar9;
      puVar8 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  uVar1 = *(undefined8 *)(lVar9 + _DAT_112768f38);
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c0e00;
  func_0x00010c2753e0(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf1f320();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar11 = *(long *)(lVar9 + _DAT_112768f70);
  if (lVar11 == 0) {
    uVar13 = 0;
  }
  else {
    puVar3 = PTR_PTR_1126b1278;
    func_0x00010c1231a0(PTR_PTR_1126b1278);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2400();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar11;
    func_0x00010bf926c0();
    uVar13 = (uint)lVar10 ^ 1;
    _objc_release(lVar11);
    _objc_release(puVar3);
  }
  puVar5 = (undefined1 *)puVar8;
  func_0x00010c08a260();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = (undefined1 *)puVar8;
  if ((puVar5 == (undefined1 *)0x0) || (_objc_release(), (((uint)uVar4 | uVar13) & 1) == 0)) {
    func_0x00010c137340(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b0ee0(puVar8);
    _objc_initWeak(auStack_168,lVar9);
    puVar5 = (undefined1 *)puVar8;
    func_0x00010c2751c0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined1 *)puVar8;
    func_0x00010c08a260(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_170,auStack_168);
    _objc_retain(puVar8);
    func_0x00010bfaa520(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar8);
    _objc_destroyWeak(auStack_170);
    _objc_destroyWeak(auStack_168);
  }
  else {
    func_0x00010c08a260(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee3de0(lVar9);
  }
  _objc_release(puVar6);
  _objc_release(puVar8);
  return;
}


