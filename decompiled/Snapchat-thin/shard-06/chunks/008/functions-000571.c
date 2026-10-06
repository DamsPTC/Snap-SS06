/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ef12f8; end: 104ef12ff; -[SCMapPlaceProfileV2StoryCarouselData rankedStoryThumbnails] */

undefined8 FUN_104ef12f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104ef1300; end: 104ef1307; -[SCMapPlaceProfileV2StoryCarouselData hasImportantSnaps] */

undefined1 FUN_104ef1300(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104ef1308; end: 104ef1313; -[SCMapPlaceProfileV2StoryCarouselData .cxx_destruct] */

void FUN_104ef1308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104ef1314; end: 104ef14e7;  */

void FUN_104ef1314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126ae630;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bfe6000(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ad780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c2ac300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init(PTR_PTR_1126ae560);
  puVar3 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  _objc_retain(param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar3);
  _objc_release(uVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae638;
  _objc_opt_new(PTR_PTR_1126ae638);
  puVar5 = puVar3;
  func_0x00010bf22ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104ef14e8; end: 104ef14f3;  */

void FUN_104ef14e8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104ef14f4; end: 104ef1687;  */

void FUN_104ef14f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126ae630;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bfe6000(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init(PTR_PTR_1126ae560);
  puVar3 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  _objc_retain(param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar3);
  _objc_release(uVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae638;
  _objc_opt_new(PTR_PTR_1126ae638);
  puVar5 = puVar3;
  func_0x00010bf22ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104ef1688; end: 104ef1697;  */

void FUN_104ef1688(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09b650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_loadHTMLString_baseURL__1126047a0,*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 104ef1698; end: 104ef1977; -[SCMapPlaceShareWorkflow initWithPlaceSharingScope:uiContainer:messageSender:destinationParser:sendToScopeExposer:sendToScopeServices:valdiRuntimeProvider:userLocationHelpers:placeProfileDataFetcher:placeDiscoveryDataFetcher:mapStoryPreviewFetcher:offPlatformLinkGenerationService:blizzardLogger:] */

undefined8 *
FUN_104ef1698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

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
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126e4e88;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
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
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
  }
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



/* Entry: 104ef1978; end: 104ef1ad7; -[SCMapPlaceShareWorkflow sendPlaceShareToChat] */

void FUN_104ef1978(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  puVar1 = PTR_PTR_1126b0810;
  _objc_alloc(PTR_PTR_1126b0810);
  func_0x00010c046120();
  puVar2 = PTR_PTR_1126b0818;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0;
  func_0x00010c044540(puVar2,param_2,puVar3,0x1c,0x1d,2,0x93,0,0,0,0,0,0);
  _objc_release(puVar3);
  lVar4 = param_1;
  func_0x00010bdf30e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bdf3100();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  lVar6 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar6);
  func_0x00010bf23ee0(uVar7,param_2,lVar6,PTR____NSArray0__struct_11034ab48,lVar4,0,puVar1,0,lVar5,
                      puVar2,uVar8 & 0xffffffffffff0000,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,uVar7);
  _objc_release(uVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ef1ad8; end: 104ef1adb; -[SCMapPlaceShareWorkflow didDismissWithSelectedItems:sendToDismissSource:] */

void FUN_104ef1ad8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea0cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendToScopeDidFinish_112585cd8);
  return;
}



/* Entry: 104ef1adc; end: 104ef1e87; -[SCMapPlaceShareWorkflow didSendWithSelectionState:] */

void FUN_104ef1adc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined1 auStack_148 [8];
  long lStack_140;
  undefined1 auStack_138 [8];
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
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_3;
  func_0x00010c1599e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar15 = 0;
  if (lVar3 != 0) {
    lVar16 = *plStack_120;
    do {
      lVar17 = 0;
      do {
        if (*plStack_120 != lVar16) {
          _objc_enumerationMutation(lVar2);
        }
        lVar18 = *(long *)(lStack_128 + lVar17 * 8);
        lVar4 = lVar18;
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        lVar4 = lVar5;
        func_0x00010c15ab60();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar4;
        func_0x00010c0720c0();
        _objc_release(lVar4);
        lVar4 = lVar5;
        if ((int)lVar6 == 0) {
          lVar6 = lVar5;
          func_0x00010c15ab60();
          _objc_retainAutoreleasedReturnValue();
          lVar18 = lVar6;
          func_0x00010c0720c0();
          _objc_release(lVar6);
          if ((int)lVar18 != 0) {
            func_0x00010c122b80();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar4;
            func_0x00010c08fa60();
            if (lVar6 != 0) {
              puVar7 = PTR_PTR_1126b01c0;
              func_0x00010c294260(PTR_PTR_1126b01c0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar1);
              _objc_release(puVar7);
              lVar15 = lVar15 + 1;
            }
            goto LAB_104ef1cf8;
          }
        }
        else {
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar4;
          func_0x00010c08fa60();
          if (lVar6 != 0) {
            puVar7 = PTR_PTR_1126b01c0;
            func_0x00010bfcf680(PTR_PTR_1126b01c0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar1);
            _objc_release(puVar7);
            func_0x00010c0f4aa0();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar18;
            func_0x00010bf529e0();
            _objc_release(lVar18);
            lVar15 = lVar6 + lVar15;
          }
LAB_104ef1cf8:
          _objc_release(lVar4);
        }
        _objc_release(lVar5);
        lVar17 = lVar17 + 1;
      } while (lVar3 != lVar17);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  _objc_initWeak(auStack_138,param_1);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010c246920();
  _objc_retainAutoreleasedReturnValue();
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_104ef1e88;
  puStack_158 = &UNK_110859da8;
  puVar13 = auStack_138;
  _objc_copyWeak(auStack_148,puVar13);
  _objc_retain(param_3);
  ppuVar14 = &puStack_170;
  lStack_150 = param_3;
  lStack_140 = lVar15;
  func_0x00010c297260(uVar10);
  _objc_release(uVar10);
  _objc_release(uVar8);
  func_0x00010bea0cc0(param_1);
  _objc_release(lStack_150);
  _objc_destroyWeak(auStack_148);
  _objc_destroyWeak(auStack_138);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_148);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  _objc_retain(puVar13);
  lVar15 = param_3 + 0x28;
  _objc_loadWeakRetained(lVar15);
  if (ppuVar14 == (undefined **)0x0) {
    puVar9 = puVar13;
    func_0x00010bf50b20(puVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010befd440(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar13;
    func_0x00010bf026a0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x0001086063f4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9fa80(lVar15);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(puVar9);
  }
  else {
    func_0x00010bea0cc0(lVar15);
  }
  _objc_release(lVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar13);
  return;
}



/* Entry: 104ef1e88; end: 104ef1f7b;  */

void FUN_104ef1e88(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  if (param_3 == 0) {
    uVar2 = param_2;
    func_0x00010bf50b20(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010befd440(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010bf026a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x0001086063f4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9fa80(lVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    func_0x00010bea0cc0(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ef1f7c; end: 104ef2083; -[SCMapPlaceShareWorkflow _sendPlaceMessageToConversations:additionalText:analyticsDestinationInfo:] */

void FUN_104ef1f7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0fd0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be74480(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x000108604db4(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c3c0(uVar2,param_2,uVar4,param_4,param_3,lVar1,lVar3,0,0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104ef2084; end: 104ef21e7; -[SCMapPlaceShareWorkflow _platformAnalyticsWithDestinationInfo:] */

void FUN_104ef2084(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2130;
  _objc_alloc(PTR_PTR_1126b2130);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0fd0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060780(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b1a40;
  _objc_opt_new(PTR_PTR_1126b1a40);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c247520(uVar2);
  func_0x00010c2b9b80(puVar3,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa660(puVar3,param_2,4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac2e0(puVar3,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc480(puVar3,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afd40(puVar3,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c2b5620(puVar3,param_2,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104ef21e8; end: 104ef226b; -[SCMapPlaceShareWorkflow _sendToScopeDidFinish] */

void FUN_104ef21e8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf6b020(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b98a0();
    _objc_release(uVar2);
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf6f440();
    _objc_release(lVar1);
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104ef226c; end: 104ef23eb; -[SCMapPlaceShareWorkflow _createSendToPreviewConfiguration] */

void FUN_104ef226c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0fd0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(lVar1);
    func_0x00010bf11fe0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b07e8;
    _objc_alloc(PTR_PTR_1126b07e8);
    func_0x00010c061960();
    puVar5 = PTR_PTR_1126b07f0;
    func_0x00010bfbb840(PTR_PTR_1126b07f0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b07f8;
    _objc_alloc(PTR_PTR_1126b07f8);
    func_0x00010c01dde0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104ef23ec; end: 104ef2433;  */

void FUN_104ef23ec(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf16a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104ef2434; end: 104ef2527; -[SCMapPlaceShareWorkflow _createPlaceShareSendToViewForPlaceID:] */

void FUN_104ef2434(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b2138;
    _objc_alloc(PTR_PTR_1126b2138);
    puVar2 = PTR_PTR_1126b2140;
    _objc_opt_new(PTR_PTR_1126b2140);
    lVar1 = param_1;
    func_0x00010be74120(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40(puVar5,param_2,puVar2,lVar1,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104ef2528; end: 104ef261f; -[SCMapPlaceShareWorkflow _createSendToShareSheetConfiguration] */

void FUN_104ef2528(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126b0808;
  _objc_alloc(PTR_PTR_1126b0808);
  func_0x00010c051820();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ef2620; end: 104ef265f;  */

void FUN_104ef2620(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf4940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104ef2660; end: 104ef2793; -[SCMapPlaceShareWorkflow _createTextConfiguration] */

void FUN_104ef2660(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c2a3ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c28f340(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbf800(uVar1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  else {
    func_0x00010bfbf800(uVar1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(uVar1);
  puVar6 = PTR_PTR_1126ae558;
  puVar5 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar1 = uVar4;
  func_0x00010beec820(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar5,param_2,uVar1,uVar4,0,10,0,0);
  func_0x00010bfe9ca0(puVar6,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104ef2794; end: 104ef293f; -[SCMapPlaceShareWorkflow _placeCardContextForPlaceID:] */

void FUN_104ef2794(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b2148;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126ae820;
  _objc_alloc_init(PTR_PTR_1126ae820);
  func_0x00010be131a0(param_1,param_2,param_3,puVar2);
  puVar3 = puVar2;
  func_0x00010c272120(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179680(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  lVar4 = param_1;
  func_0x00010be74100(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar5 = lVar4;
  func_0x00010c272120(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dbee0(puVar1,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010c171b20(puVar1,param_2,*(undefined8 *)(param_1 + 0x68));
  puVar3 = PTR_PTR_1126b2150;
  _objc_alloc_init(PTR_PTR_1126b2150);
  func_0x00010c1b38c0();
  func_0x00010c1dc240(puVar1,param_2,puVar3);
  puVar6 = PTR_PTR_1126b2158;
  _objc_alloc_init(PTR_PTR_1126b2158);
  func_0x00010c207140();
  uVar7 = 0x48;
  func_0x000100c6f294(0x48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207200(puVar6,param_2,uVar7);
  _objc_release(uVar7);
  uVar7 = 3;
  func_0x00010ba1c764(3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dce20(puVar6,param_2,uVar7);
  _objc_release(uVar7);
  func_0x00010c1dc280(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ef2940; end: 104ef299f; -[SCMapPlaceShareWorkflow _getFormattedDistanceToLocationWithLat:lng:] */

void FUN_104ef2940(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc5c20(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104ef29a0; end: 104ef2adf; -[SCMapPlaceShareWorkflow _fetchPlaceProfileDataForPlaceID:placeCardDataSubject:] */

void FUN_104ef29a0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010bfa7a60(uVar2);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ef2ae0; end: 104ef2be7;  */

void FUN_104ef2ae0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (param_4 != 0)) {
    puVar3 = PTR_PTR_1126b2160;
    _objc_alloc_init(PTR_PTR_1126b2160);
    func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x20));
  }
  else {
    puVar1 = (undefined *)(param_2 + 0x30);
    _objc_loadWeakRetained(puVar1);
    func_0x00010c08aca0(param_3);
    uVar4 = param_1;
    func_0x00010c09abe0(param_3);
    puVar3 = puVar1;
    func_0x00010be1f340(param_1,uVar4,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    lVar2 = param_3;
    func_0x0001068779ec(param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x20));
    param_2 = param_2 + 0x30;
    _objc_loadWeakRetained(param_2);
    func_0x00010be131e0();
    _objc_release(param_2);
    _objc_release(lVar2);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ef2be8; end: 104ef2e1b; -[SCMapPlaceShareWorkflow _placeAnnotationObservableForPlaceID:] */

void FUN_104ef2be8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar3);
    puVar2 = PTR_PTR_1126ae6b8;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x104ef2cdc;
    puStack_48 = &UNK_11084f340;
    uStack_40 = uVar3;
    _objc_retain(param_3);
    lStack_38 = param_3;
    _objc_retain(uVar3);
    func_0x00010bf54280(puVar2,param_2,&puStack_60);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_38);
    _objc_release(uStack_40);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ef2e1c; end: 104ef2e7b;  */

/* WARNING: Possible PIC construction at 0x000104ef2e58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104ef2e5c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_104ef2e1c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if ((param_2 == 0) || (param_3 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    func_0x00010687710c(*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_complete_1125ae760);
  return;
}



/* Entry: 104ef2e7c; end: 104ef3003; -[SCMapPlaceShareWorkflow _fetchPlaceStoryPreviewForPlaceID:placeCardData:placeCardDataSubject:] */

void FUN_104ef2e7c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x104ef2f78;
    puStack_48 = &UNK_110859af8;
    _objc_retain(param_4);
    uStack_40 = param_4;
    _objc_retain(param_5);
    uStack_38 = param_5;
    func_0x00010bfa9680(uVar2,param_2,param_3,0,0,&puStack_60);
    _objc_release(uVar2);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ef3004; end: 104ef30b3; -[SCMapPlaceShareWorkflow .cxx_destruct] */

void FUN_104ef3004(long param_1)

{
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
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ef30b4; end: 104ef33cf; -[SCMapPlaceSharingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef30b4(long param_1,undefined8 param_2)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11271682c;
    _objc_loadWeakRetained();
  }
  lVar21 = lVar20;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar21;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar21);
  _objc_release(lVar20);
  lVar21 = (long)_DAT_1127167fc;
  lVar20 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar2 = lVar20;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_112716800;
  uVar18 = *(undefined8 *)(param_1 + lVar23);
  *(long *)(param_1 + lVar23) = lVar2;
  _objc_release(uVar18);
  _objc_release(lVar20);
  puVar3 = PTR_PTR_1126b2168;
  _objc_alloc();
  lVar21 = param_1 + lVar21;
  _objc_loadWeakRetained();
  uVar19 = *(undefined8 *)(param_1 + lVar23);
  lVar20 = param_1 + _DAT_112716810;
  _objc_loadWeakRetained();
  lVar4 = lVar20;
  func_0x00010c0b9c80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112716814;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + _DAT_112716834);
  _objc_retain();
  lVar23 = param_1 + _DAT_112716830;
  _objc_loadWeakRetained();
  lVar6 = param_1 + _DAT_112716824;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11271681c;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c292d00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  FUN_104ef33d0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0fd400();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  FUN_104ef33d0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c0fcf60();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112716820;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c110e20();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112716828;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0367a0(puVar3,param_2,lVar21,uVar19,lVar4,lVar5,uVar18,lVar23,lVar7,lVar9,lVar11,
                      lVar13,lVar15,lVar17,lVar1);
  lVar22 = (long)_DAT_112716804;
  uVar19 = *(undefined8 *)(param_1 + lVar22);
  *(undefined **)(param_1 + lVar22) = puVar3;
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar23);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar20);
  _objc_release(lVar21);
  func_0x00010c15c3e0(*(undefined8 *)(param_1 + lVar22));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ef33d0; end: 104ef33f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef33d0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112716818);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ef33f4; end: 104ef34d3; -[SCMapPlaceSharingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef33f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112716834,0);
  _objc_destroyWeak(param_1 + _DAT_112716830);
  _objc_destroyWeak(param_1 + _DAT_11271682c);
  _objc_destroyWeak(param_1 + _DAT_112716828);
  _objc_destroyWeak(param_1 + _DAT_112716824);
  _objc_destroyWeak(param_1 + _DAT_112716820);
  _objc_destroyWeak(param_1 + _DAT_11271681c);
  _objc_destroyWeak(param_1 + _DAT_112716818);
  _objc_destroyWeak(param_1 + _DAT_112716814);
  _objc_destroyWeak(param_1 + _DAT_112716810);
  _objc_destroyWeak(param_1 + _DAT_11271680c);
  _objc_destroyWeak(param_1 + _DAT_112716808);
  _objc_destroyWeak(param_1 + _DAT_1127167fc);
  _objc_storeStrong(param_1 + _DAT_112716804,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112716800,0);
  return;
}



/* Entry: 104ef34d4; end: 104ef34e7; -[SCComposerDelayedDismissContainerViewController exit:] */

void FUN_104ef34d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104ef34e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  return;
}



/* Entry: 104ef34e8; end: 104ef34fb; -[SCComposerDelayedDismissContainerViewController backgroundExitBehavior] */

void FUN_104ef34e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9b4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4072c00000000000,PTR_PTR_1126aecb0,PTR_s_exitAfterSpecificTimeWithSeconds_1125c46d8);
  return;
}



/* Entry: 104ef34fc; end: 104ef391f; -[SCVenueAdderViewController initWithNetworkingClient:navigator:blizzardLogger:callback:detachUI:removeScope:runtime:moderationSource:currentUserId:startingPinCoord:useStagingPlacesService:placeSuggestEditRevGeoFetcher:photoPickerRouter:venueEditorAsyncRequestCallback:composerStaticMapURLGenerator:nativeMapSDK:configProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104ef34fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_80 = PTR_PTR_1126e4e90;
  puVar1 = &uStack_88;
  uStack_88 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar4 = (long)_DAT_112716838;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271683c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112716840;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112716844);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112716844) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    lVar4 = (long)_DAT_112716848;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271684c) = param_1;
    ((undefined8 *)((long)puVar1 + (long)_DAT_11271684c))[1] = param_2;
    lVar5 = (long)_DAT_112716850;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112716854;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112716858;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_12;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11271685c;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_11;
    _objc_release(uVar2);
    uVar2 = param_10;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112716860) = param_14;
    lVar4 = (long)_DAT_112716864;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_19;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112716868;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_20;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271686c;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_16;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112716870;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_21;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112716874;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_17;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    lVar4 = (long)_DAT_112716878;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_18;
    _objc_release();
    func_0x00010b837400();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_11271687c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = uVar2;
    _objc_release(uVar3);
    func_0x00010c1797c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c19efc0(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar4));
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 104ef3920; end: 104ef3d5f; -[SCVenueAdderViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef3920(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_88 = PTR_PTR_1126e4e90;
  lStack_90 = param_1;
  _objc_msgSendSuper2(&lStack_90,PTR_s_viewDidLoad_112684cd8);
  puVar2 = PTR_PTR_1126b2170;
  _objc_alloc_init();
  puVar1 = (undefined8 *)(param_1 + _DAT_11271684c);
  uVar11 = *puVar1;
  uVar12 = puVar1[1];
  puVar3 = puVar2;
  _CLLocationCoordinate2DIsValid(uVar11,uVar12);
  if ((int)puVar3 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*puVar1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c186e20(puVar2);
    _objc_release(puVar3);
    uVar11 = puVar1[1];
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(uVar11,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c186e40(puVar2);
    _objc_release(puVar3);
  }
  func_0x00010c21e620(puVar2);
  func_0x00010c1c8e20(puVar2);
  puVar3 = PTR_PTR_1126b2178;
  _objc_alloc_init(PTR_PTR_1126b2178);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8bc0(puVar3);
  _objc_release(puVar4);
  func_0x000109021e0c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebca0(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b2180;
  _objc_alloc(PTR_PTR_1126b2180);
  func_0x00010c02f7a0();
  func_0x00010c18f560();
  func_0x00010c171b20(puVar4);
  func_0x00010c2209e0(puVar4);
  func_0x00010c220740(puVar4);
  func_0x00010c180820(puVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112716864);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c27e0(puVar4);
  _objc_release(uVar5);
  _objc_initWeak(auStack_98,param_1);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_104ef3d60;
  puStack_a8 = &UNK_110859e08;
  _objc_copyWeak(auStack_a0,auStack_98);
  func_0x00010c19b320(puVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11271685c);
  puVar9 = auStack_98;
  _objc_copyWeak(auStack_c8,puVar9);
  _objc_opt_class(PTR_PTR_1126b1dc0);
  func_0x00010c0b7ac0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2860(puVar4);
  puVar6 = PTR_PTR_1126b2188;
  _objc_alloc();
  func_0x00010c061d40();
  lVar10 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar10);
  func_0x00010c14c940(puVar6);
  lVar10 = (long)_DAT_112716880;
  _objc_retain(puVar6);
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar6;
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11271687c);
  uStack_80 = *(undefined8 *)(param_1 + lVar10);
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(uVar7);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume(puVar2);
  _objc_retain(puVar9);
  puVar2 = puVar2 + 0x20;
  _objc_loadWeakRetained(puVar2);
  func_0x00010be297a0(uVar11,uVar12);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104ef3d60; end: 104ef3dbf;  */

void FUN_104ef3d60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be297a0(param_1,param_2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ef3dc0; end: 104ef3dff;  */

void FUN_104ef3dc0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde6cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104ef3e00; end: 104ef3e2f; -[SCVenueAdderViewController cardTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef3e00(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271687c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ef3e30; end: 104ef3e83; -[SCVenueAdderViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef3e30(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  (**(code **)(*(long *)(param_1 + _DAT_112716848) + 0x10))();
  puStack_28 = PTR_PTR_1126e4e90;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104ef3e84; end: 104ef3fbf; -[SCVenueAdderViewController _constructMapView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef3e84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b1dc0;
  _objc_alloc(PTR_PTR_1126b1dc0);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c014980(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_112716868),
                      *(undefined8 *)(param_1 + _DAT_112716870));
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b1dd0;
  _objc_alloc_init(PTR_PTR_1126b1dd0);
  puVar4 = PTR_PTR_1126b1dd8;
  _objc_alloc_init(PTR_PTR_1126b1dd8);
  func_0x00010c1c21c0(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c0b9280(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c0b9280(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0();
  _objc_release(puVar4);
  func_0x00010c167220(puVar3,param_2,0);
  puVar4 = puVar1;
  func_0x00010c0b9c00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064780();
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ef3fc0; end: 104ef407f; -[SCVenueAdderViewController _handleFetchAddressForLat:lng:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef3fc0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_3 + _DAT_11271686c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104ef4080;
  puStack_40 = &UNK_110859e38;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010bfa4b00(param_1,param_2,uVar1,param_4,&puStack_58);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 104ef4080; end: 104ef40d7;  */

void FUN_104ef4080(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126b2190;
    _objc_alloc_init(PTR_PTR_1126b2190);
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104ef40d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2);
  return;
}



/* Entry: 104ef40d8; end: 104ef414f; -[SCVenueAdderViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104ef40d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_3 + _DAT_112716880);
  if ((param_5 == uVar1) && (func_0x00010bf2d520(param_1,param_2,uVar1,param_4,1), (uVar1 & 1) != 0)
     ) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_5);
  return uVar2;
}



/* Entry: 104ef4150; end: 104ef4163; -[SCVenueAdderViewController cardTransitionWillBeginWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef4150(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104ef4160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + _DAT_112716844) + 0x10))();
  return;
}



/* Entry: 104ef4164; end: 104ef4167; -[SCVenueAdderViewController cardTransitionDidUpdateProgress:] */

void FUN_104ef4164(void)

{
  return;
}



/* Entry: 104ef4168; end: 104ef4187; -[SCVenueAdderViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef4168(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000104ef4180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + _DAT_112716848) + 0x10))();
    return;
  }
  return;
}



/* Entry: 104ef4188; end: 104ef418b; -[SCVenueAdderViewController cardToExpandTransition] */

void FUN_104ef4188(void)

{
  return;
}



/* Entry: 104ef418c; end: 104ef41db; -[SCVenueAdderViewController exit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef418c(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  (**(code **)(*(long *)(param_1 + _DAT_112716844) + 0x10))();
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ef41dc; end: 104ef41ef; -[SCVenueAdderViewController backgroundExitBehavior] */

void FUN_104ef41dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9b4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4072c00000000000,PTR_PTR_1126aecb0,PTR_s_exitAfterSpecificTimeWithSeconds_1125c46d8);
  return;
}



/* Entry: 104ef41f0; end: 104ef41ff; -[SCVenueAdderViewController openPhotoPicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef41f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c239150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112716874),PTR_s_showPhotoPickerOptions_11266be78);
  return;
}



/* Entry: 104ef4200; end: 104ef4237; -[SCVenueAdderViewController provideOnPhotoSelectedWithOnPhotoSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef4200(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112716884);
  *(undefined8 *)(param_1 + _DAT_112716884) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ef4238; end: 104ef4247; -[SCVenueAdderViewController showErrorDialogWithErrorText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef4238(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c239110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112716874),PTR_s_showPhotoPickerErrorText__11266be68);
  return;
}



/* Entry: 104ef4248; end: 104ef43a3; -[SCVenueAdderViewController photoPickerFinishedSelectingWithURLs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104ef4248(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf84080(*(undefined8 *)(param_1 + _DAT_112716874));
  lVar6 = (long)_DAT_112716884;
  if (*(long *)(param_1 + lVar6) != 0) {
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = *(undefined8 *)(lVar7 * 8);
        lVar5 = *(long *)(param_1 + lVar6);
        func_0x00010beec820(uVar3);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar5 + 0x10))(lVar5,uVar3);
        _objc_release(uVar3);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return param_3;
  }
  ___stack_chk_fail();
  return 0;
}



/* Entry: 104ef43a4; end: 104ef43ab; -[SCVenueAdderViewController shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_104ef43a4(void)

{
  return 0;
}



/* Entry: 104ef43ac; end: 104ef43b7; -[SCVenueAdderViewController pushToValdiMarshaller:] */

undefined8 FUN_104ef43ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010afa3720(param_3,param_1);
  func_0x00010afa36fc();
  func_0x00010afa35fc();
  func_0x00010afa35c0();
  return param_3;
}



/* Entry: 104ef43b8; end: 104ef44f7; -[SCVenueAdderViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef43b8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112716870,0);
  _objc_storeStrong(param_1 + _DAT_112716868,0);
  _objc_storeStrong(param_1 + _DAT_112716878,0);
  _objc_storeStrong(param_1 + _DAT_112716884,0);
  _objc_storeStrong(param_1 + _DAT_112716874,0);
  _objc_storeStrong(param_1 + _DAT_11271686c,0);
  _objc_storeStrong(param_1 + _DAT_112716848,0);
  _objc_storeStrong(param_1 + _DAT_112716844,0);
  _objc_storeStrong(param_1 + _DAT_112716864,0);
  _objc_storeStrong(param_1 + _DAT_112716880,0);
  _objc_storeStrong(param_1 + _DAT_11271685c,0);
  _objc_storeStrong(param_1 + _DAT_112716858,0);
  _objc_storeStrong(param_1 + _DAT_112716854,0);
  _objc_storeStrong(param_1 + _DAT_112716850,0);
  _objc_storeStrong(param_1 + _DAT_11271687c,0);
  _objc_storeStrong(param_1 + _DAT_112716840,0);
  _objc_storeStrong(param_1 + _DAT_11271683c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112716838,0);
  return;
}



/* Entry: 104ef44f8; end: 104ef4997; -[SCVenueEditorViewController initWithNetworkingClient:navigator:blizzardLogger:callback:detachUI:removeScope:runtime:moderationSource:placeId:currentUserId:mapSessionId:placeSessionId:useStagingPlacesService:placeSuggestEditRevGeoFetcher:photoPickerRouter:venueEditorAsyncRequestCallback:composerStaticMapURLGenerator:nativeMapSDK:configProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104ef44f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
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
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  puStack_70 = PTR_PTR_1126e4e98;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar4 = (long)_DAT_112716888;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271688c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112716890;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112716894;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112716898);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112716898) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    lVar5 = (long)_DAT_11271689c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_1127168a0;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127168a4;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_14;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127168a8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127168ac;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127168b0;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127168b4;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    uVar2 = param_8;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127168b8) = param_15;
    lVar4 = (long)_DAT_1127168bc;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_20;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127168c0;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_21;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127168c4;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_17;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127168c8;
    _objc_retain(param_22);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_22;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127168cc;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_18;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    lVar4 = (long)_DAT_1127168d0;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_19;
    _objc_release();
    func_0x00010b837400();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_1127168d4;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = uVar2;
    _objc_release(uVar3);
    func_0x00010c1797c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c19efc0(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar4));
  }
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
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



/* Entry: 104ef4998; end: 104ef4da7; -[SCVenueEditorViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef4998(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_88 = PTR_PTR_1126e4e98;
  lStack_90 = param_3;
  _objc_msgSendSuper2(&lStack_90,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126b2198;
  _objc_alloc();
  func_0x00010c036360();
  func_0x00010c1be820();
  func_0x00010c21e620(puVar1);
  func_0x00010c1c8e20(puVar1);
  puVar2 = PTR_PTR_1126b2178;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8bc0(puVar2);
  _objc_release(puVar3);
  func_0x00010c1c25a0(puVar2);
  puVar3 = puVar2;
  func_0x00010c1dc740(puVar2);
  func_0x000109021e0c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebca0(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b21a0;
  _objc_alloc(PTR_PTR_1126b21a0);
  func_0x00010c02f7a0();
  func_0x00010c2209e0();
  func_0x00010c220740(puVar3);
  func_0x00010c180820(puVar3);
  func_0x00010c171b20(puVar3);
  func_0x00010c18f560(puVar3);
  uVar4 = *(undefined8 *)(param_3 + _DAT_1127168bc);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c27e0(puVar3);
  _objc_release(uVar4);
  _objc_initWeak(auStack_98,param_3);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_104ef4da8;
  puStack_a8 = &UNK_110859e08;
  _objc_copyWeak(auStack_a0,auStack_98);
  func_0x00010c19b320(puVar3);
  uVar4 = *(undefined8 *)(param_3 + _DAT_1127168b4);
  puVar8 = auStack_98;
  _objc_copyWeak(auStack_c8,puVar8);
  _objc_opt_class(PTR_PTR_1126b1dc0);
  func_0x00010c0b7ac0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2860(puVar3);
  puVar5 = PTR_PTR_1126b21a8;
  _objc_alloc();
  func_0x00010c061d40();
  lVar9 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar9);
  func_0x00010c14c940(puVar5);
  lVar9 = (long)_DAT_1127168d8;
  _objc_retain(puVar5);
  uVar6 = *(undefined8 *)(param_3 + lVar9);
  *(undefined **)(param_3 + lVar9) = puVar5;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_3 + _DAT_1127168d4);
  uStack_80 = *(undefined8 *)(param_3 + lVar9);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(uVar6);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume(puVar1);
  _objc_retain(puVar8);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be297a0(param_1,param_2);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ef4da8; end: 104ef4e07;  */

void FUN_104ef4da8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be297a0(param_1,param_2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ef4e08; end: 104ef4e47;  */

void FUN_104ef4e08(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde6cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104ef4e48; end: 104ef4e77; -[SCVenueEditorViewController cardTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef4e48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127168d4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ef4e78; end: 104ef4ecb; -[SCVenueEditorViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef4e78(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  (**(code **)(*(long *)(param_1 + _DAT_11271689c) + 0x10))();
  puStack_28 = PTR_PTR_1126e4e98;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104ef4ecc; end: 104ef5007; -[SCVenueEditorViewController _constructMapView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef4ecc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b1dc0;
  _objc_alloc(PTR_PTR_1126b1dc0);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c014980(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_1127168c0),
                      *(undefined8 *)(param_1 + _DAT_1127168c8));
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b1dd0;
  _objc_alloc_init(PTR_PTR_1126b1dd0);
  puVar4 = PTR_PTR_1126b1dd8;
  _objc_alloc_init(PTR_PTR_1126b1dd8);
  func_0x00010c1c21c0(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c0b9280(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c0b9280(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0();
  _objc_release(puVar4);
  func_0x00010c167220(puVar3,param_2,0);
  puVar4 = puVar1;
  func_0x00010c0b9c00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064780();
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ef5008; end: 104ef50c7; -[SCVenueEditorViewController _handleFetchAddressForLat:lng:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef5008(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_3 + _DAT_1127168c4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104ef50c8;
  puStack_40 = &UNK_110859e38;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010bfa4b00(param_1,param_2,uVar1,param_4,&puStack_58);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 104ef50c8; end: 104ef511f;  */

void FUN_104ef50c8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126b2190;
    _objc_alloc_init(PTR_PTR_1126b2190);
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104ef511c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2);
  return;
}



/* Entry: 104ef5120; end: 104ef5197; -[SCVenueEditorViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104ef5120(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_3 + _DAT_1127168d8);
  if ((param_5 == uVar1) && (func_0x00010bf2d520(param_1,param_2,uVar1,param_4,1), (uVar1 & 1) != 0)
     ) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_5);
  return uVar2;
}



/* Entry: 104ef5198; end: 104ef51ab; -[SCVenueEditorViewController cardTransitionWillBeginWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef5198(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104ef51a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + _DAT_112716898) + 0x10))();
  return;
}



/* Entry: 104ef51ac; end: 104ef51af; -[SCVenueEditorViewController cardTransitionDidUpdateProgress:] */

void FUN_104ef51ac(void)

{
  return;
}



/* Entry: 104ef51b0; end: 104ef51cf; -[SCVenueEditorViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef51b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000104ef51c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + _DAT_11271689c) + 0x10))();
    return;
  }
  return;
}



/* Entry: 104ef51d0; end: 104ef51d3; -[SCVenueEditorViewController cardToExpandTransition] */

void FUN_104ef51d0(void)

{
  return;
}



/* Entry: 104ef51d4; end: 104ef5223; -[SCVenueEditorViewController exit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef51d4(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  (**(code **)(*(long *)(param_1 + _DAT_112716898) + 0x10))();
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ef5224; end: 104ef5237; -[SCVenueEditorViewController backgroundExitBehavior] */

void FUN_104ef5224(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9b4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4072c00000000000,PTR_PTR_1126aecb0,PTR_s_exitAfterSpecificTimeWithSeconds_1125c46d8);
  return;
}



/* Entry: 104ef5238; end: 104ef5247; -[SCVenueEditorViewController openPhotoPicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef5238(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c239150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127168cc),PTR_s_showPhotoPickerOptions_11266be78);
  return;
}



/* Entry: 104ef5248; end: 104ef527f; -[SCVenueEditorViewController provideOnPhotoSelectedWithOnPhotoSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef5248(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127168dc);
  *(undefined8 *)(param_1 + _DAT_1127168dc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ef5280; end: 104ef528f; -[SCVenueEditorViewController showErrorDialogWithErrorText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef5280(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c239110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127168cc),PTR_s_showPhotoPickerErrorText__11266be68);
  return;
}



/* Entry: 104ef5290; end: 104ef53eb; -[SCVenueEditorViewController photoPickerFinishedSelectingWithURLs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104ef5290(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf84080(*(undefined8 *)(param_1 + _DAT_1127168cc));
  lVar6 = (long)_DAT_1127168dc;
  if (*(long *)(param_1 + lVar6) != 0) {
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = *(undefined8 *)(lVar7 * 8);
        lVar5 = *(long *)(param_1 + lVar6);
        func_0x00010beec820(uVar3);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar5 + 0x10))(lVar5,uVar3);
        _objc_release(uVar3);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return param_3;
  }
  ___stack_chk_fail();
  return 0;
}



/* Entry: 104ef53ec; end: 104ef53f3; -[SCVenueEditorViewController shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_104ef53ec(void)

{
  return 0;
}



/* Entry: 104ef53f4; end: 104ef53ff; -[SCVenueEditorViewController pushToValdiMarshaller:] */

undefined8 FUN_104ef53f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010afa3720(param_3,param_1);
  func_0x00010afa36fc();
  func_0x00010afa35fc();
  func_0x00010afa35c0();
  return param_3;
}



/* Entry: 104ef5400; end: 104ef556f; -[SCVenueEditorViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef5400(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127168d0,0);
  _objc_storeStrong(param_1 + _DAT_1127168dc,0);
  _objc_storeStrong(param_1 + _DAT_1127168cc,0);
  _objc_storeStrong(param_1 + _DAT_1127168c8,0);
  _objc_storeStrong(param_1 + _DAT_1127168c0,0);
  _objc_storeStrong(param_1 + _DAT_1127168bc,0);
  _objc_storeStrong(param_1 + _DAT_1127168c4,0);
  _objc_storeStrong(param_1 + _DAT_11271689c,0);
  _objc_storeStrong(param_1 + _DAT_112716898,0);
  _objc_storeStrong(param_1 + _DAT_1127168d8,0);
  _objc_storeStrong(param_1 + _DAT_1127168b4,0);
  _objc_storeStrong(param_1 + _DAT_1127168b0,0);
  _objc_storeStrong(param_1 + _DAT_1127168ac,0);
  _objc_storeStrong(param_1 + _DAT_1127168a8,0);
  _objc_storeStrong(param_1 + _DAT_1127168a4,0);
  _objc_storeStrong(param_1 + _DAT_1127168a0,0);
  _objc_storeStrong(param_1 + _DAT_1127168d4,0);
  _objc_storeStrong(param_1 + _DAT_112716894,0);
  _objc_storeStrong(param_1 + _DAT_112716890,0);
  _objc_storeStrong(param_1 + _DAT_112716888,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271688c,0);
  return;
}



/* Entry: 104ef5570; end: 104ef5b7f; -[SCVenueEditorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef5570(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
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
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar1 = param_1 + _DAT_1127168e0;
  _objc_loadWeakRetained();
  lVar16 = lVar1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar16 = param_1 + _DAT_1127168e4;
    _objc_loadWeakRetained();
    lVar3 = lVar16;
    func_0x00010c0d8300();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + _DAT_1127168e8);
    *(long *)(param_1 + _DAT_1127168e8) = lVar15;
    _objc_release(uVar14);
    _objc_release(lVar3);
    _objc_release(lVar16);
    lVar16 = param_1 + _DAT_1127168ec;
    _objc_loadWeakRetained();
    lVar3 = lVar16;
    func_0x00010bf1cf00();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + _DAT_1127168f0);
    *(long *)(param_1 + _DAT_1127168f0) = lVar15;
    _objc_release(uVar14);
    _objc_release(lVar3);
    _objc_release(lVar16);
    puVar4 = PTR_PTR_1126afe50;
    _objc_alloc();
    func_0x00010c040b80();
    lVar16 = (long)_DAT_1127168f4;
    uVar14 = *(undefined8 *)(param_1 + lVar16);
    *(undefined **)(param_1 + lVar16) = puVar4;
    _objc_release(uVar14);
    _objc_opt_class(PTR_PTR_1126b21b0);
    func_0x00010c181960(*(undefined8 *)(param_1 + lVar16));
    _objc_initWeak(auStack_80,param_1);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_104ef5b80;
    puStack_90 = &UNK_1108434b0;
    _objc_copyWeak(auStack_88,auStack_80);
    ppuVar5 = &puStack_a8;
    _objc_retainBlock();
    uVar14 = *(undefined8 *)(param_1 + _DAT_1127168f8);
    *(undefined ***)(param_1 + _DAT_1127168f8) = ppuVar5;
    _objc_release(uVar14);
    puStack_d0 = puVar4;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x104ef5bac;
    puStack_b8 = &UNK_1108434b0;
    _objc_copyWeak(auStack_b0,auStack_80);
    ppuVar5 = &puStack_d0;
    _objc_retainBlock();
    uVar14 = *(undefined8 *)(param_1 + _DAT_1127168fc);
    *(undefined ***)(param_1 + _DAT_1127168fc) = ppuVar5;
    _objc_release(uVar14);
    lVar15 = (long)_DAT_112716900;
    lVar16 = param_1 + lVar15;
    _objc_loadWeakRetained();
    lVar3 = lVar16;
    func_0x00010c082f80();
    _objc_release(lVar16);
    if ((int)lVar3 == 0) {
      puStack_f8 = puVar4;
      uStack_f0 = 0xc2000000;
      uStack_e8 = 0x104ef5bd8;
      puStack_e0 = &UNK_1108434b0;
      _objc_copyWeak(auStack_d8,auStack_80);
      ppuVar5 = &puStack_f8;
      _objc_retainBlock();
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126b2098;
      puVar8 = puVar7;
      func_0x000104ef71cc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ec5c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      puVar10 = puVar7;
      func_0x00010befa120(puVar7);
      puVar8 = PTR_PTR_1126b2098;
      func_0x000104ef71e4();
      _objc_retainAutoreleasedReturnValue();
      puStack_120 = puVar4;
      uStack_118 = 0xc2000000;
      uStack_110 = 0x104ef5c04;
      puStack_108 = &UNK_1108434b0;
      _objc_copyWeak(auStack_100,auStack_80);
      func_0x00010bf6f1c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar11 = puVar7;
      func_0x00010befa120(puVar7);
      puVar10 = PTR_PTR_1126b2098;
      func_0x000104ef71fc();
      _objc_retainAutoreleasedReturnValue();
      puStack_148 = puVar4;
      uStack_140 = 0xc2000000;
      uStack_138 = 0x104ef5c34;
      puStack_130 = &UNK_1108434b0;
      _objc_copyWeak(auStack_128,auStack_80);
      func_0x00010bf6f1c0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      func_0x00010befa120(puVar7);
      puStack_170 = puVar4;
      uStack_168 = 0xc2000000;
      uStack_160 = 0x104ef5c64;
      puStack_158 = &UNK_1108434b0;
      _objc_copyWeak(auStack_150,auStack_80);
      ppuVar12 = &puStack_170;
      _objc_retainBlock(ppuVar12);
      puStack_198 = puVar4;
      uStack_190 = 0xc2000000;
      uStack_188 = 0x104ef5cb0;
      puStack_180 = &UNK_1108434b0;
      _objc_copyWeak(auStack_178,auStack_80);
      ppuVar13 = &puStack_198;
      _objc_retainBlock(ppuVar13);
      puVar4 = PTR_PTR_1126b2088;
      _objc_alloc(PTR_PTR_1126b2088);
      func_0x00010c003520();
      param_1 = param_1 + lVar15;
      _objc_loadWeakRetained(param_1);
      lVar16 = param_1;
      func_0x00010c10fd00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar16;
      func_0x000104ef71b4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10afc0(puVar4);
      _objc_release(lVar3);
      _objc_release(lVar16);
      _objc_release(param_1);
      _objc_release(puVar4);
      _objc_release(ppuVar13);
      _objc_destroyWeak(auStack_178);
      _objc_release(ppuVar12);
      _objc_destroyWeak(auStack_150);
      _objc_release(puVar10);
      _objc_destroyWeak(auStack_128);
      _objc_release(puVar8);
      _objc_destroyWeak(auStack_100);
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_release(ppuVar5);
      _objc_destroyWeak(auStack_d8);
    }
    else {
      puVar6 = auStack_80;
      _objc_loadWeakRetained(puVar6);
      func_0x00010be48720();
      _objc_release(puVar6);
    }
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
  return;
}



/* Entry: 104ef5b80; end: 104ef5cfb;  */

void FUN_104ef5b80(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf6f420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ef5cfc; end: 104ef61af; -[SCVenueEditorEntryPoint _launchSuggestAnEdit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef5cfc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  
  lVar2 = param_1 + _DAT_1127168e0;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar4;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar5 = param_1;
    func_0x00010bdf1460();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_112716904;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c297ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar7 = PTR_PTR_1126b21b8;
    _objc_alloc();
    lVar1 = (long)_DAT_1127168f4;
    lVar28 = (long)_DAT_112716900;
    lVar2 = param_1 + lVar28;
    _objc_loadWeakRetained();
    lVar8 = lVar2;
    func_0x00010c0d02c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + lVar28;
    _objc_loadWeakRetained();
    lVar9 = lVar3;
    func_0x00010c0fd0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + _DAT_112716908;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar13 = param_1 + lVar28;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010c0b39c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b9ce0();
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar16 = param_1 + lVar28;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010c0b39c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fd4a0();
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1;
    FUN_104ef61b0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar19;
    func_0x00010c0fd540();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = param_1 + _DAT_11271690c;
    _objc_loadWeakRetained();
    lVar22 = lVar21;
    func_0x00010c28f5e0();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_1 + _DAT_112716910;
    _objc_loadWeakRetained();
    lVar24 = lVar23;
    func_0x00010c0d5a80();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar24;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = param_1 + _DAT_112716914;
    _objc_loadWeakRetained();
    lVar27 = lVar26;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02f800(puVar7);
    _objc_release(lVar27);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(puVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(puVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar3);
    _objc_release(lVar8);
    _objc_release(lVar2);
    func_0x00010c1eea80(lVar5);
    func_0x00010c1db3e0(lVar5);
    func_0x00010c1c1bc0(*(undefined8 *)(param_1 + lVar1));
    puVar15 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    _objc_alloc(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
    func_0x00010c0402e0();
    puVar18 = puVar7;
    func_0x00010bf31fa0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b20(puVar15);
    _objc_release(puVar18);
    param_1 = param_1 + lVar28;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    FUN_104ef61d4();
    _objc_release(lVar2);
    _objc_release(param_1);
    _objc_release(puVar15);
    _objc_release(puVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 104ef61b0; end: 104ef61d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef61b0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112716904);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ef61d4; end: 104ef62c7;  */

void FUN_104ef61d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c1cb760(param_2);
  uVar1 = param_2;
  func_0x00010c068d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
  func_0x00010c1c8b80(param_2);
  _objc_retain(param_3);
  func_0x00010c10eda0(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 104ef62c8; end: 104ef66af; -[SCVenueEditorEntryPoint _launchSuggestAPlace] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef62c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  
  lVar2 = param_3 + _DAT_1127168e0;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar4;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar5 = param_3;
    func_0x00010bdf1460();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3 + _DAT_112716904;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c297ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar7 = PTR_PTR_1126b21c0;
    _objc_alloc();
    lVar1 = (long)_DAT_1127168f4;
    lVar23 = (long)_DAT_112716900;
    lVar2 = param_3 + lVar23;
    _objc_loadWeakRetained();
    lVar8 = lVar2;
    func_0x00010c0d02c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3 + _DAT_112716908;
    _objc_loadWeakRetained();
    lVar9 = lVar3;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_3 + lVar23;
    _objc_loadWeakRetained();
    func_0x00010c252060();
    lVar12 = param_3;
    FUN_104ef61b0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c0fd540();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_3 + _DAT_11271690c;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010c28f5e0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_3 + _DAT_112716910;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010c0d5a80();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_3 + _DAT_112716914;
    _objc_loadWeakRetained();
    lVar20 = lVar19;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02f7e0(param_1,param_2,puVar7);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar3);
    _objc_release(lVar8);
    _objc_release(lVar2);
    func_0x00010c1eea80(lVar5);
    func_0x00010c1db3e0(lVar5);
    func_0x00010c1c1bc0(*(undefined8 *)(param_3 + lVar1));
    puVar21 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    _objc_alloc(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
    func_0x00010c0402e0();
    puVar22 = puVar7;
    func_0x00010bf31fa0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b20(puVar21);
    _objc_release(puVar22);
    param_3 = param_3 + lVar23;
    _objc_loadWeakRetained(param_3);
    lVar2 = param_3;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    FUN_104ef61d4();
    _objc_release(lVar2);
    _objc_release(param_3);
    _objc_release(puVar21);
    _objc_release(puVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 104ef66b0; end: 104ef671f; -[SCVenueEditorEntryPoint _createPhotoPickerRouter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef66b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b21c8;
  _objc_alloc(PTR_PTR_1126b21c8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112716918);
  param_1 = param_1 + _DAT_11271691c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c035e20(puVar1,param_2,uVar2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ef6720; end: 104ef682b; -[SCVenueEditorEntryPoint _sendReportRequestWithReportType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef6720(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + _DAT_1127168e0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_48,param_1);
  uStack_50 = param_3;
  _objc_copyWeak(auStack_58,auStack_48);
  func_0x00010bfc69a0(lVar3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar3);
  return;
}



/* Entry: 104ef682c; end: 104ef6a73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef682c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  lVar11 = (long)_DAT_112716920;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + lVar11);
  if (lVar1 != 0) {
    func_0x00010bf6ef60();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
  }
  puVar2 = PTR_PTR_1126b21d0;
  func_0x00010bfbc0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_112716900;
  lVar1 = *(long *)(param_1 + 0x20) + lVar12;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c0fd0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x20) + (long)_DAT_112716908;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,param_1 + 0x28);
  lVar12 = *(long *)(param_1 + 0x20) + lVar12;
  _objc_loadWeakRetained();
  lVar7 = lVar12;
  func_0x00010c0d02c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x000109021e0c();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  func_0x00010c15d9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar11);
  *(undefined **)(*(long *)(param_1 + 0x20) + lVar11) = puVar9;
  _objc_release(uVar10);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar12);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  func_0x00010be9fe00(*(undefined8 *)(param_1 + 0x20));
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 104ef6a74; end: 104ef6bab;  */

void FUN_104ef6a74(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x000104ef7214();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  if ((param_2 & 1) == 0) {
    func_0x000104ef722c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uStack_38 = 0x90;
  }
  else {
    uStack_38 = 0x9e;
  }
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x104ef6b50;
  puStack_48 = &UNK_110848c48;
  lStack_40 = lVar2;
  _objc_retain(lVar2);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_60);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12e1c0();
  _objc_release(param_1);
  _objc_release(lStack_40);
  _objc_release(lVar2);
  return;
}



/* Entry: 104ef6bac; end: 104ef6c6f; -[SCVenueEditorEntryPoint _sendReportActionMetricRequestWithActionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef6bac(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined4 uStack_48;
  
  lVar1 = param_1 + _DAT_1127168e0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104ef6c70;
  puStack_58 = &UNK_110859e98;
  lStack_50 = param_1;
  uStack_48 = param_3;
  func_0x00010bfc69a0(lVar3,param_2,&puStack_70);
  _objc_release(lVar3);
  return;
}



/* Entry: 104ef6c70; end: 104ef6def;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef6c70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126b21d8;
  func_0x00010bfbc0e0(PTR_PTR_1126b21d8,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112716900;
  lVar2 = *(long *)(param_1 + 0x20) + lVar9;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0fd0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = *(long *)(param_1 + 0x20) + lVar9;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b9ce0();
  func_0x00010c0df840(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar9 = *(long *)(param_1 + 0x20) + lVar9;
  _objc_loadWeakRetained(lVar9);
  lVar7 = lVar9;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fd4a0();
  func_0x00010c0df840(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3520(puVar1);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(lVar9);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ef6df0; end: 104ef6e43; -[SCVenueEditorEntryPoint detachUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef6df0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112716900;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ef6e44; end: 104ef6edb; -[SCVenueEditorEntryPoint removeScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef6e44(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1 + _DAT_112716900;
  _objc_loadWeakRetained(lVar2);
  lVar1 = lVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297be0();
  _objc_release(lVar1);
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + _DAT_112716920);
  if (lVar2 != 0) {
    func_0x00010bf6ef60();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 104ef6edc; end: 104ef6ee3; -[SCVenueEditorEntryPoint shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_104ef6edc(void)

{
  return 0;
}



/* Entry: 104ef6ee4; end: 104ef6eef; -[SCVenueEditorEntryPoint pushToValdiMarshaller:] */

undefined8 FUN_104ef6ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010afa3720(param_3,param_1);
  func_0x00010afa36fc();
  func_0x00010afa35fc();
  func_0x00010afa35c0();
  return param_3;
}



/* Entry: 104ef6ef0; end: 104ef6f87; -[SCVenueEditorEntryPoint dismissEditorRootWithSucceeded:] */

void FUN_104ef6ef0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  undefined1 uStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104ef6f88;
  puStack_48 = &UNK_1108488f8;
  uStack_40 = param_1;
  uStack_30 = param_3;
  _objc_copyWeak(auStack_38,auStack_28);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_60);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104ef6f88; end: 104ef7073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef6f88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_112716900;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c082f80();
    _objc_release(lVar2);
    puVar1 = PTR_PTR_1126afca8;
    if ((int)lVar3 == 0) {
      func_0x000104ef7214();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000104ef7244();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x9e);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238720(puVar1,param_2,lVar2,puVar4);
    _objc_release(puVar4);
    _objc_release(lVar2);
  }
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf6f420();
  _objc_release(lVar2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12e1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ef7074; end: 104ef71ab; -[SCVenueEditorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef7074(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112716918,0);
  _objc_destroyWeak(param_1 + _DAT_11271691c);
  _objc_destroyWeak(param_1 + _DAT_112716930);
  _objc_destroyWeak(param_1 + _DAT_112716904);
  _objc_destroyWeak(param_1 + _DAT_112716910);
  _objc_destroyWeak(param_1 + _DAT_11271690c);
  _objc_destroyWeak(param_1 + _DAT_11271692c);
  _objc_destroyWeak(param_1 + _DAT_112716914);
  _objc_destroyWeak(param_1 + _DAT_1127168ec);
  _objc_destroyWeak(param_1 + _DAT_112716928);
  _objc_destroyWeak(param_1 + _DAT_1127168e4);
  _objc_destroyWeak(param_1 + _DAT_1127168e0);
  _objc_destroyWeak(param_1 + _DAT_112716924);
  _objc_destroyWeak(param_1 + _DAT_112716908);
  _objc_destroyWeak(param_1 + _DAT_112716900);
  _objc_storeStrong(param_1 + _DAT_1127168fc,0);
  _objc_storeStrong(param_1 + _DAT_1127168f8,0);
  _objc_storeStrong(param_1 + _DAT_1127168f4,0);
  _objc_storeStrong(param_1 + _DAT_1127168e8,0);
  _objc_storeStrong(param_1 + _DAT_1127168f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112716920,0);
  return;
}



/* Entry: 104ef71ac; end: 104ef725b;  */

void FUN_104ef71ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2390f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_showPhotoLibraryPermissionsDialo_11266be60);
  return;
}


