/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b09fcc; end: 107b0a077; -[SCStoriesSnapViewerDataCoordinator fetchViewerInfoWithBatchSnapsByType:liveSpotlightSnapExternalIds:requestSource:] */

void FUN_107b09fcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1109fbe00);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfab5a0(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b0a078; end: 107b0a07b;  */

void FUN_107b0a078(void)

{
  return;
}



/* Entry: 107b0a07c; end: 107b0a253; -[SCStoriesSnapViewerDataCoordinator fetchViewerInfoWithBatchSnapsByType:liveSpotlightSnapExternalIds:requestSource:completionQueue:completion:] */

void FUN_107b0a07c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_4;
  FUN_107b0b910();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c26f320();
    _objc_release(puVar3);
    _objc_initWeak(auStack_68,param_2);
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_68);
    uStack_70 = param_1;
    _objc_retain(param_5);
    _objc_retain(param_7);
    _objc_retain(param_8);
    func_0x00010bfab5c0(uVar4);
    _objc_release(uVar4);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107b0a254; end: 107b0a2eb;  */

void FUN_107b0a254(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be551a0(*(undefined8 *)(param_1 + 0x40));
  _objc_release(lVar1);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  if (param_2 == 0) {
    func_0x00010be29cc0(lVar1);
  }
  else {
    func_0x00010be29ce0(*(undefined8 *)(param_1 + 0x40),lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b0a2ec; end: 107b0a39f; -[SCStoriesSnapViewerDataCoordinator _handleFetchedViewerInfoFailureWithCompletionQueue:completion:] */

void FUN_107b0a2ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c0b3260(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107b0a3a0;
  puStack_40 = &UNK_110849530;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010007380c(param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 107b0a3a0; end: 107b0a3af;  */

void FUN_107b0a3a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107b0a3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 107b0a3b0; end: 107b0a62b; -[SCStoriesSnapViewerDataCoordinator _handleFetchedViewerInfoWithResponse:liveSpotlightSnapExternalIds:fetchStartTime:completionQueue:completion:] */

void FUN_107b0a3b0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_4;
  func_0x00010c13be40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_4;
    func_0x00010c13be40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      func_0x00010be551a0(param_1,param_2);
      _objc_initWeak(auStack_a0,param_2);
      uVar5 = *(undefined8 *)(param_2 + 8);
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      uStack_c8 = 0x107b0a63c;
      puStack_c0 = &UNK_110864a08;
      _objc_retain(param_4);
      lStack_b8 = param_4;
      lStack_b0 = param_2;
      _objc_retain(param_5);
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      uStack_a8 = param_5;
      func_0x00010c11de00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_e8,auStack_a0);
      uStack_e0 = param_1;
      _objc_retain(param_6);
      _objc_retain(param_7);
      func_0x00010c0f8500(uVar5);
      _objc_release(uVar4);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_destroyWeak(auStack_e8);
      _objc_release(uStack_a8);
      _objc_release(lStack_b8);
      _objc_destroyWeak(auStack_a0);
      goto LAB_107b0a5c4;
    }
  }
  func_0x00010c0b3260(*(undefined8 *)(param_2 + 0x18));
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_107b0a62c;
  puStack_80 = &UNK_110849530;
  _objc_retain(param_7);
  uStack_78 = param_7;
  func_0x00010007380c(param_6,&puStack_98);
  _objc_release(uStack_78);
LAB_107b0a5c4:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107b0a62c; end: 107b0a653;  */

void FUN_107b0a62c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107b0a638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 107b0a654; end: 107b0a71b;  */

void FUN_107b0a654(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar3);
  func_0x00010be551a0(*(undefined8 *)(param_1 + 0x38));
  _objc_release(lVar3);
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar3);
  func_0x00010be50540(*(undefined8 *)(param_1 + 0x38));
  _objc_release(lVar3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107b0a71c;
  puStack_48 = &UNK_11084a9b8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  uStack_38 = param_2;
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uStack_40);
  return;
}



/* Entry: 107b0a71c; end: 107b0a72f;  */

void FUN_107b0a71c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107b0a72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 107b0a730; end: 107b0a74f; -[SCStoriesSnapViewerDataCoordinator _logApplyViewerInfoResponse:fetchStartTime:] */

void FUN_107b0a730(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ead178;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0b3270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_logViewerInfoFetchResult__11260a6a8,ppuVar1);
  return;
}



/* Entry: 107b0a750; end: 107b0a757; -[SCStoriesSnapViewerDataCoordinator viewersWithSnapId:] */

void FUN_107b0a750(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 107b0a758; end: 107b0a75f; -[SCStoriesSnapViewerDataCoordinator viewersCount] */

void FUN_107b0a758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_count_1125b2420);
  return;
}



/* Entry: 107b0a760; end: 107b0a787; -[SCStoriesSnapViewerDataCoordinator allSnapIdToSnapViewers] */

void FUN_107b0a760(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b0a788; end: 107b0a7af; -[SCStoriesSnapViewerDataCoordinator snapIdToSnapViewersObservable] */

void FUN_107b0a788(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b0a7b0; end: 107b0a823; -[SCStoriesSnapViewerDataCoordinator _logLatencyWithFetchStartTime:step:] */

void FUN_107b0a7b0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  dVar2 = param_1;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c26f320();
  _objc_release(puVar1);
  func_0x00010c0b3240(dVar2 - param_1,*(undefined8 *)(param_2 + 0x18),param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b0a824; end: 107b0a91b; -[SCStoriesSnapViewerDataCoordinator removeViewerInfoWithSnapIds:] */

void FUN_107b0a824(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107b0a91c;
    puStack_50 = &UNK_11085adb8;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    lStack_48 = param_3;
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = puVar1;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x107b0a92c;
    puStack_78 = &UNK_110841f20;
    _objc_retain(param_3);
    lStack_70 = param_3;
    func_0x00010c0f8500(uVar4,param_2,&puStack_68,uVar3,&puStack_90);
    _objc_release(uVar3);
    _objc_release(lStack_70);
    _objc_release(lStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107b0a91c; end: 107b0a92f;  */

ulong FUN_107b0a91c(long param_1,ulong param_2)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  undefined *puVar11;
  long in_x5;
  long in_x6;
  int iVar12;
  undefined8 in_x7;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uStack_720;
  undefined8 *puStack_718;
  undefined8 uStack_710;
  undefined1 uStack_708;
  undefined *puStack_700;
  undefined *puStack_6f8;
  undefined1 **ppuStack_6f0;
  undefined *puStack_6e8;
  int iStack_6d4;
  undefined *puStack_6d0;
  undefined *puStack_6c8;
  long lStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  undefined *puStack_6a8;
  undefined *puStack_6a0;
  undefined *puStack_698;
  undefined *puStack_690;
  ulong uStack_688;
  undefined *puStack_680;
  undefined *puStack_678;
  undefined8 *puStack_670;
  undefined *puStack_668;
  undefined *puStack_660;
  undefined *puStack_658;
  undefined *puStack_650;
  undefined *puStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  ulong uStack_630;
  undefined *puStack_628;
  undefined8 uStack_620;
  long lStack_618;
  long *plStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  long lStack_5d8;
  long *plStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  long lStack_598;
  long *plStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined1 uStack_551;
  undefined8 uStack_550;
  undefined8 uStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined **ppuStack_508;
  undefined **ppuStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined8 *puStack_4e8;
  undefined *puStack_4e0;
  undefined8 uStack_4d8;
  undefined *puStack_4d0;
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 uStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 *puStack_488;
  long *plStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined **ppuStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 *puStack_230;
  undefined *apuStack_208 [3];
  long *plStack_1f0;
  long *plStack_1e8;
  long lStack_1d0;
  undefined1 *puStack_140;
  undefined *puStack_138;
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
  
  puVar9 = *(undefined **)(param_1 + 0x20);
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar3 = param_2;
  func_0x0001084ee5fc();
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uVar4 = uVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  iVar10 = (int)auStack_e8;
  puVar11 = (undefined *)0x10;
  uVar16 = uVar4;
  func_0x00010bf52a60();
  iVar12 = (int)in_x7;
  if (uVar16 != 0) {
    lVar19 = *plStack_120;
    do {
      uVar21 = 0;
      do {
        if (*plStack_120 != lVar19) {
          _objc_enumerationMutation(uVar4);
        }
        puVar9 = *(undefined **)(lStack_128 + uVar21 * 8);
        puVar11 = PTR_PTR_1126d6778;
        func_0x00010851f874();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar11);
        uVar21 = uVar21 + 1;
      } while (uVar16 != uVar21);
      iVar10 = (int)auStack_e8;
      puVar11 = (undefined *)0x10;
      uVar16 = uVar4;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
      iVar12 = (int)in_x7;
    } while (uVar16 != 0);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar16 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar16;
  }
  ___stack_chk_fail();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_2);
  __Unwind_Resume();
  puStack_138 = &SUB_1084ee948;
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_6d4 = iVar10;
  uStack_688 = uVar16;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain();
  puStack_648 = (undefined *)puVar7;
  _objc_retain(puVar7);
  puStack_6d0 = puVar11;
  _objc_retain(puVar11);
  lStack_6b0 = in_x5;
  _objc_retain(in_x5);
  lStack_6b8 = in_x6;
  _objc_retain(in_x6);
  puVar18 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puVar5 = puStack_648;
  puStack_690 = puVar9;
  if ((puVar9 == (undefined *)0x1) && (iVar12 != 0)) {
    func_0x00010bf529e0(puStack_648);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puStack_648;
    uStack_528 = 0;
    uStack_530 = 0;
    uStack_518 = 0;
    uStack_520 = 0;
    uStack_548 = 0;
    uStack_550 = 0;
    uStack_538 = 0;
    plStack_540 = (long *)0x0;
    _objc_retain(puStack_648);
    func_0x00010bf52a60();
    if (puVar11 != (undefined *)0x0) {
      lVar19 = *plStack_540;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_540 != lVar19) {
            _objc_enumerationMutation(puStack_648);
          }
          puVar5 = puStack_648;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar5;
          func_0x00010bf529e0();
          if (puVar15 == (undefined *)0x0) {
            func_0x00010c1d0640(puVar18);
          }
          else {
            puVar15 = puVar5;
            func_0x0001084d2cc4(puVar5,0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar18);
            _objc_release(puVar15);
          }
          _objc_release(puVar5);
          puVar9 = puVar9 + 1;
        } while (puVar11 != puVar9);
        puVar11 = puStack_648;
        func_0x00010bf52a60();
      } while (puVar11 != (undefined *)0x0);
    }
    _objc_release(puStack_648);
    puVar11 = puVar18;
    func_0x00010bf51e00();
    _objc_release(puStack_648);
    _objc_release(puVar18);
    puVar5 = puVar11;
  }
  puStack_648 = puVar5;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puStack_690;
  puStack_6c8 = puVar5;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x0) {
    if (iStack_6d4 != 0) {
      func_0x0001084efe2c(uStack_688,puVar9,puStack_6d0);
    }
  }
  else {
    _objc_opt_class(PTR_PTR_1126d5360);
    if (uStack_688 == 0) {
      uStack_460 = 0;
      uStack_478 = 0;
      plStack_480 = (long *)0x0;
      uStack_468 = 0;
      uStack_470 = 0;
      puStack_488 = (undefined8 *)0x0;
      uStack_490 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_490);
    }
    puVar6 = &uStack_551;
    func_0x0001009612e4(puVar6);
    func_0x000100961348(&puStack_4e0,puStack_6c8);
    func_0x000107c281a0(&ppuStack_250,0xc,puVar6,&puStack_4e0);
    ppuStack_508 = (undefined **)0x0;
    ppuStack_500 = (undefined **)0x0;
    puStack_4f8 = (undefined *)0x0;
    uStack_4b0 = (ulong)uStack_4b0._4_4_ << 0x20;
    puVar7 = &uStack_490;
    func_0x000107c310cc(puVar7,&ppuStack_250,&ppuStack_508,&uStack_4b0);
    _objc_retainAutoreleasedReturnValue();
    puStack_670 = puVar7;
    if (ppuStack_508 != (undefined **)0x0) {
      ppuStack_500 = ppuStack_508;
      __ZdlPv();
    }
    plVar2 = plStack_1e8;
    ppuStack_250 = &PTR_DAT_110862700;
    plStack_1e8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_1f0;
    plStack_1f0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppuStack_508 = apuStack_208;
    func_0x000107c27dd4(&ppuStack_508);
    ppuStack_508 = &puStack_4e0;
    func_0x000107c27dd4(&ppuStack_508);
    func_0x000107c27da8(&uStack_468);
    _objc_release(uStack_478);
    _objc_release(plStack_480);
    puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puStack_670;
    uStack_578 = 0;
    uStack_580 = 0;
    uStack_568 = 0;
    uStack_570 = 0;
    lStack_598 = 0;
    uStack_5a0 = 0;
    uStack_588 = 0;
    plStack_590 = (long *)0x0;
    puStack_658 = puVar9;
    _objc_retain(puStack_670);
    func_0x00010bf52a60();
    if (puVar7 != (undefined8 *)0x0) {
      lVar19 = *plStack_590;
      do {
        puVar17 = (undefined8 *)0x0;
        do {
          if (*plStack_590 != lVar19) {
            _objc_enumerationMutation(puStack_670);
          }
          puVar11 = *(undefined **)(lStack_598 + (long)puVar17 * 8);
          puVar9 = puVar11;
          func_0x00010c259cc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar9 != (undefined *)0x0) {
            puVar9 = puVar11;
            func_0x00010c259cc0(puVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puStack_658);
            _objc_release(puVar9);
          }
          func_0x00010c27dd80(puVar11);
          puVar17 = (undefined8 *)((long)puVar17 + 1);
        } while (puVar7 != puVar17);
        puVar7 = puStack_670;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined8 *)0x0);
    }
    _objc_release(puStack_670);
    puVar18 = puStack_6c8;
    uStack_5b8 = 0;
    uStack_5c0 = 0;
    uStack_5a8 = 0;
    uStack_5b0 = 0;
    lStack_5d8 = 0;
    uStack_5e0 = 0;
    uStack_5c8 = 0;
    plStack_5d0 = (long *)0x0;
    _objc_retain(puStack_6c8);
    func_0x00010bf52a60();
    puVar9 = puStack_648;
    puStack_6a8 = puVar18;
    if (puVar18 != (undefined *)0x0) {
      lStack_6c0 = *plStack_5d0;
      do {
        puStack_660 = (undefined *)0x0;
        do {
          if (*plStack_5d0 != lStack_6c0) {
            _objc_enumerationMutation(puStack_6c8);
          }
          uVar14 = *(undefined8 *)(lStack_5d8 + (long)puStack_660 * 8);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puStack_658;
          puStack_628 = puVar9;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puStack_628;
          func_0x00010bf529e0();
          puStack_678 = puVar11;
          if (puVar9 == (undefined *)0x0) {
            if (puVar11 != (undefined *)0x0) {
              puVar9 = PTR_PTR_1126d9eb0;
              func_0x0001085210b0(PTR_PTR_1126d9eb0,puVar11);
              _objc_retainAutoreleasedReturnValue();
              puStack_680 = puVar9;
              func_0x00010c25ed40(uStack_688);
              _objc_unsafeClaimAutoreleasedReturnValue();
              goto code_r0x0001084ef7a4;
            }
          }
          else {
            puStack_488 = (undefined8 *)0x0;
            uStack_490 = 0;
            uStack_478 = 0;
            plStack_480 = (long *)0x0;
            uStack_468 = 0;
            uStack_470 = 0;
            uStack_458 = 0;
            uStack_460 = 0;
            puVar11 = puStack_628;
            puStack_668 = (undefined *)uVar14;
            func_0x00010c140180();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar11;
            func_0x00010bf52a60();
            if (puVar9 != (undefined *)0x0) {
              lVar19 = *plStack_480;
              do {
                puVar18 = (undefined *)0x0;
                do {
                  if (*plStack_480 != lVar19) {
                    _objc_enumerationMutation(puVar11);
                  }
                  puVar15 = (undefined *)puStack_488[(long)puVar18];
                  puVar5 = puVar15;
                  func_0x00010c26d760();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (puVar5 != (undefined *)0x0) {
                    func_0x00010c26d760();
                    _objc_retainAutoreleasedReturnValue();
                    puStack_680 = puVar15;
                    goto code_r0x0001084eef1c;
                  }
                  puVar18 = puVar18 + 1;
                } while (puVar9 != puVar18);
                puVar9 = puVar11;
                func_0x00010bf52a60();
              } while (puVar9 != (undefined *)0x0);
            }
            puStack_680 = (undefined *)0x0;
code_r0x0001084eef1c:
            _objc_release(puVar11);
            puVar11 = puStack_628;
            func_0x000100504554(puStack_628,&PTR___NSConcreteGlobalBlock_110a4ffa0);
            uVar3 = uStack_688;
            func_0x000100aac27c(uStack_688,puVar11);
            _objc_retainAutoreleasedReturnValue();
            uStack_630 = uVar3;
            _objc_release(puVar11);
            puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            _objc_opt_new();
            puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            puStack_640 = puVar11;
            _objc_opt_new();
            puVar11 = puStack_628;
            dVar23 = 0.0;
            uStack_5f8 = 0;
            uStack_600 = 0;
            uStack_5e8 = 0;
            uStack_5f0 = 0;
            lStack_618 = 0;
            uStack_620 = 0;
            uStack_608 = 0;
            plStack_610 = (long *)0x0;
            puStack_638 = puVar9;
            _objc_retain(puStack_628);
            func_0x00010bf52a60();
            lVar22 = 0;
            lVar19 = 0;
            if (puVar11 == (undefined *)0x0) {
              dVar25 = 0.0;
              dVar24 = 0.0;
              dVar26 = 0.0;
            }
            else {
              lVar13 = *plStack_610;
              dVar25 = 0.0;
              dVar24 = 0.0;
              dVar26 = 0.0;
              do {
                puVar9 = (undefined *)0x0;
                dVar27 = dVar26;
                do {
                  if (*plStack_610 != lVar13) {
                    _objc_enumerationMutation(puStack_628);
                  }
                  uVar16 = *(ulong *)(lStack_618 + (long)puVar9 * 8);
                  uVar3 = uVar16;
                  func_0x00010c15f2e0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = uVar3;
                  func_0x00010bfda7c0();
                  _objc_release(uVar3);
                  dVar26 = dVar27;
                  if ((uVar4 & 1) == 0) {
                    uVar3 = uVar16;
                    func_0x00010c26f2a0(uVar16);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf9c720();
                    dVar26 = dVar23;
                    if (dVar25 <= dVar23) {
                      uVar4 = uVar16;
                      func_0x00010c26f2a0(uVar16);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bf9c720();
                      dVar26 = dVar23;
                      _objc_release(uVar4);
                      dVar25 = dVar23;
                    }
                    _objc_release(uVar3);
                    uVar3 = uVar16;
                    func_0x00010c15f2e0(uVar16);
                    _objc_retainAutoreleasedReturnValue();
                    uVar4 = uStack_630;
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    _objc_release(uVar3);
                    lVar19 = lVar19 + 1;
                    if (uVar4 == 0) {
                      uVar3 = uVar16;
                      func_0x00010c15f2e0();
                      _objc_retainAutoreleasedReturnValue();
                      uVar4 = uVar3;
                      func_0x00010c08fa60();
                      _objc_release(uVar3);
                      if (uVar4 != 0) {
                        uVar3 = uVar16;
                        func_0x00010c15f2e0(uVar16);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010befa120(puStack_640);
                        _objc_release(uVar3);
                      }
                      func_0x00010c26f2a0(uVar16);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c2709c0();
                      dVar23 = dVar26;
                      _objc_release(uVar16);
                      func_0x00010befa120(puStack_638);
                      lVar22 = lVar22 + 1;
                    }
                    else {
                      func_0x00010c26f2a0(uVar16);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c2709c0();
                      dVar23 = dVar26;
                      _objc_release(uVar16);
                      dVar24 = dVar26;
                      dVar26 = dVar27;
                    }
                  }
                  puVar9 = puVar9 + 1;
                  dVar27 = dVar26;
                } while (puVar11 != puVar9);
                puVar11 = puStack_628;
                func_0x00010bf52a60();
              } while (puVar11 != (undefined *)0x0);
            }
            _objc_release(puStack_628);
            puVar11 = PTR_PTR_1126d9eb0;
            if (puStack_678 == (undefined *)0x0) {
              puStack_650 = (undefined *)0x0;
              func_0x000108520e40();
              _objc_retainAutoreleasedReturnValue();
              if (puVar11 != (undefined *)0x0) {
                puStack_650 = puVar11;
                _objc_setProperty_nonatomic_copy(puVar11);
                goto code_r0x0001084ef224;
              }
code_r0x0001084ef7e0:
              puStack_650 = (undefined *)0x0;
            }
            else {
              puStack_650 = (undefined *)0x0;
              func_0x000100aad504();
              _objc_retainAutoreleasedReturnValue();
              if (puVar11 == (undefined *)0x0) goto code_r0x0001084ef7e0;
code_r0x0001084ef224:
              *(undefined **)(puVar11 + 0x28) = puStack_690;
              puStack_650 = puVar11;
            }
            lVar13 = lStack_6b0;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar13 != 0) {
              lVar13 = lStack_6b0;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar13;
              func_0x00010c282800();
              if (puStack_650 != (undefined *)0x0) {
                *(long *)(puStack_650 + 0x88) = lVar8;
              }
              _objc_release(lVar13);
            }
            lVar13 = lStack_6b8;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar13 != 0) {
              lVar13 = lStack_6b8;
              func_0x00010c0e00e0(lStack_6b8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfb2c80();
              if (puStack_650 != (undefined *)0x0) {
                *(int *)(puStack_650 + 0x18) = SUB84(dVar23,0);
              }
              _objc_release(lVar13);
            }
            puVar11 = puStack_638;
            func_0x00010bf529e0();
            if (puVar11 == (undefined *)0x0) {
              puStack_6a0 = (undefined *)0x0;
              puStack_698 = (undefined *)0x0;
            }
            else {
              puVar11 = PTR_PTR_1126d5358;
              _objc_alloc();
              puVar9 = puStack_638;
              func_0x00010c0dfd20(puStack_638);
              _objc_retainAutoreleasedReturnValue();
              puVar18 = puVar11;
              func_0x00010c0f4380();
              puStack_698 = puVar18;
              _objc_release(puVar9);
              _objc_release(puVar11);
              puVar11 = PTR_PTR_1126d5358;
              _objc_alloc();
              puVar9 = puVar11;
              func_0x00010c0f43a0();
              puStack_6a0 = puVar9;
              _objc_release(puVar11);
            }
            puVar9 = puStack_628;
            func_0x00010c089820();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar9;
            func_0x000100aad290();
            _objc_retainAutoreleasedReturnValue();
            puStack_668 = puVar11;
            _objc_retain(puStack_628);
            puVar11 = puStack_628;
            uVar14 = 0;
            if ((long)puStack_690 < 3) {
              if (puStack_690 == (undefined *)0x1) {
                uStack_4b0 = 0;
                uStack_4a0 = 0x2020000000;
                uStack_498 = 0;
                dVar23 = 0.0;
                puStack_488 = (undefined8 *)0x0;
                uStack_490 = 0;
                uStack_478 = 0;
                plStack_480 = (long *)0x0;
                uStack_468 = 0;
                uStack_470 = 0;
                uStack_458 = 0;
                uStack_460 = 0;
                puStack_4a8 = &uStack_4b0;
                _objc_retain(puStack_628);
                func_0x00010bf52a60();
                if (puVar11 != (undefined *)0x0) {
                  lVar13 = *plStack_480;
                  do {
                    puVar18 = (undefined *)0x0;
                    do {
                      if (*plStack_480 != lVar13) {
                        _objc_enumerationMutation(puStack_628);
                      }
                      uVar20 = puStack_488[(long)puVar18];
                      uVar14 = uVar20;
                      func_0x00010bf0e700(uVar20);
                      _objc_retainAutoreleasedReturnValue();
                      puStack_4e0 = PTR___NSConcreteStackBlock_11034bd00;
                      uStack_4d8 = 0xc2000000;
                      puStack_4d0 = &UNK_1084f2bf0;
                      puStack_4c8 = &UNK_110a500c0;
                      puStack_4e8 = &uStack_4b0;
                      ppuStack_508 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
                      ppuStack_500 = (undefined **)0xc2000000;
                      puStack_4f8 = &UNK_1084f2c34;
                      puStack_4f0 = &UNK_110a4fbc0;
                      uStack_4c0 = uVar20;
                      puStack_4b8 = puStack_4e8;
                      func_0x00010c0c1340();
                      _objc_release(uVar14);
                      puVar18 = puVar18 + 1;
                    } while (puVar11 != puVar18);
                    puVar11 = puStack_628;
                    func_0x00010bf52a60();
                  } while (puVar11 != (undefined *)0x0);
                }
                _objc_release(puStack_628);
                uVar14 = puStack_4a8[3];
                __Block_object_dispose(&uStack_4b0,8);
              }
              else if (puStack_690 == (undefined *)0x2) {
                func_0x00010c089820(puStack_628);
                _objc_retainAutoreleasedReturnValue();
                uStack_490 = 0;
                plStack_480 = (long *)0x2020000000;
                uStack_478 = 2;
                puVar18 = puVar11;
                puStack_488 = &uStack_490;
                func_0x00010bf0e700();
                _objc_retainAutoreleasedReturnValue();
                ppuStack_250 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
                uStack_248 = 0xc2000000;
                puStack_240 = &UNK_1084f2b58;
                puStack_238 = &UNK_110a4fbc0;
                puStack_230 = &uStack_490;
                func_0x00010c0c1340();
                _objc_release(puVar18);
                uVar14 = puStack_488[3];
                __Block_object_dispose(&uStack_490,8);
                _objc_release(puVar11);
              }
            }
            else if (puStack_690 == (undefined *)0x3) {
              uVar14 = 1;
            }
            else if (puStack_690 == (undefined *)0x5) {
              dVar23 = 0.0;
              uStack_468 = 0;
              uStack_470 = 0;
              uStack_458 = 0;
              uStack_460 = 0;
              puStack_488 = (undefined8 *)0x0;
              uStack_490 = 0;
              uStack_478 = 0;
              plStack_480 = (long *)0x0;
              _objc_retain(puStack_628);
              func_0x00010bf52a60();
              if (puVar11 != (undefined *)0x0) {
                lVar13 = *plStack_480;
                do {
                  puVar18 = (undefined *)0x0;
                  do {
                    if (*plStack_480 != lVar13) {
                      _objc_enumerationMutation(puStack_628);
                    }
                    lVar8 = puStack_488[(long)puVar18];
                    func_0x00010c25b820();
                    if (lVar8 == 1) {
                      _objc_release(puStack_628);
                      uVar14 = 0x100;
                      goto code_r0x0001084ef684;
                    }
                    puVar18 = puVar18 + 1;
                  } while (puVar11 != puVar18);
                  puVar11 = puStack_628;
                  func_0x00010bf52a60();
                } while (puVar11 != (undefined *)0x0);
              }
              _objc_release(puStack_628);
              uVar14 = 0x80;
            }
            else if (puStack_690 == (undefined *)0x6) {
              uVar14 = 0x200;
            }
code_r0x0001084ef684:
            _objc_release(puStack_628);
            puVar11 = puStack_650;
            if (puStack_650 != (undefined *)0x0) {
              *(undefined8 *)(puStack_650 + 0x60) = uVar14;
              _objc_setProperty_nonatomic_copy(puStack_650);
              *(double *)(puVar11 + 0x38) = dVar25;
              *(long *)(puVar11 + 0x40) = lVar19;
              puVar11[0x14] = dVar26 != 0.0;
            }
            puVar18 = puVar9;
            func_0x00010c26f2a0(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2709c0();
            if (puVar11 == (undefined *)0x0) {
              _objc_release(puVar18);
            }
            else {
              *(double *)(puVar11 + 0x48) = dVar23;
              _objc_release(puVar18);
              *(double *)(puStack_650 + 0x50) = dVar26;
              *(double *)(puStack_650 + 0x58) = dVar24;
              *(long *)(puStack_650 + 0x68) = lVar22;
            }
            puVar11 = puStack_650;
            puVar18 = puVar9;
            func_0x00010c12fc80(puVar9);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar18;
            func_0x00010bf30620();
            _objc_retainAutoreleasedReturnValue();
            if (puVar11 == (undefined *)0x0) {
              _objc_release(puVar5);
              _objc_release(puVar18);
            }
            else {
              _objc_setProperty_nonatomic_copy(puVar11);
              _objc_release(puVar5);
              _objc_release(puVar18);
              *(undefined **)(puStack_650 + 0x78) = puStack_698;
              *(undefined **)(puStack_650 + 0x80) = puStack_6a0;
              _objc_setProperty_nonatomic_copy(puStack_650);
            }
            func_0x00010c25ed40(uStack_688);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puStack_668);
            _objc_release(puVar9);
            _objc_release(puStack_650);
            _objc_release(puStack_638);
            _objc_release(puStack_640);
            _objc_release(uStack_630);
code_r0x0001084ef7a4:
            _objc_release(puStack_680);
          }
          puVar11 = puStack_678;
          _objc_release(puStack_678);
          _objc_release(puStack_628);
          puVar9 = puStack_648;
          puStack_660 = puStack_660 + 1;
        } while (puStack_660 != puStack_6a8);
        puVar18 = puStack_6c8;
        func_0x00010bf52a60();
        puStack_6a8 = puVar18;
      } while (puVar18 != (undefined *)0x0);
    }
    _objc_release(puStack_6c8);
    if (iStack_6d4 != 0) {
      puVar9 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160();
      puVar11 = puVar9;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001084efe2c(uStack_688,puStack_690,puVar11);
      _objc_release(puVar11);
      _objc_release(puVar9);
    }
    _objc_release(puStack_658);
    _objc_release(puStack_670);
  }
  _objc_release(puStack_6c8);
  _objc_release(lStack_6b8);
  _objc_release(lStack_6b0);
  _objc_release(puStack_6d0);
  _objc_release(puStack_648);
  uVar3 = uStack_688;
  _objc_release(uStack_688);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) {
    return uVar3;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puStack_658);
  _objc_release(puStack_670);
  _objc_release(puStack_6c8);
  _objc_release(lStack_6b8);
  _objc_release(lStack_6b0);
  _objc_release(puStack_6d0);
  _objc_release(puStack_648);
  _objc_release(uStack_688);
  __Unwind_Resume(uVar3);
  puStack_6e8 = &UNK_1084efcbc;
  puStack_718 = &uStack_720;
  uStack_720 = 0;
  uStack_710 = 0x2020000000;
  uStack_708 = 0;
  puStack_700 = puVar11;
  puStack_6f8 = puVar9;
  ppuStack_6f0 = &puStack_140;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1340();
  _objc_release(uVar3);
  bVar1 = *(byte *)(puStack_718 + 3);
  __Block_object_dispose(&uStack_720,8);
  return (ulong)bVar1;
}



/* Entry: 107b0a930; end: 107b0a977;  */

void FUN_107b0a930(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed4920();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b0a978; end: 107b0a97f;  */

void FUN_107b0a978(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107b0a980; end: 107b0a9a7;  */

void FUN_107b0a980(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 107b0a9a8; end: 107b0aa1f; -[SCStoriesSnapViewerDataCoordinator .cxx_destruct] */

void FUN_107b0a9a8(long param_1)

{
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



/* Entry: 107b0aa20; end: 107b0ad9b;  */

/* WARNING: Possible PIC construction at 0x000107b0ae5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107b0afe0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b0ae60) */
/* WARNING: Removing unreachable block (ram,0x000107b0aed4) */
/* WARNING: Removing unreachable block (ram,0x000107b0aee0) */
/* WARNING: Removing unreachable block (ram,0x000107b0aee4) */
/* WARNING: Removing unreachable block (ram,0x000107b0aef4) */
/* WARNING: Removing unreachable block (ram,0x000107b0aefc) */
/* WARNING: Removing unreachable block (ram,0x000107b0af3c) */
/* WARNING: Removing unreachable block (ram,0x000107b0af58) */
/* WARNING: Removing unreachable block (ram,0x000107b0afe4) */
/* WARNING: Removing unreachable block (ram,0x000107b0aff0) */
/* WARNING: Removing unreachable block (ram,0x000107b0b004) */
/* WARNING: Removing unreachable block (ram,0x000107b0b0b8) */
/* WARNING: Removing unreachable block (ram,0x000107b0b418) */
/* WARNING: Removing unreachable block (ram,0x000107b0b480) */
/* WARNING: Removing unreachable block (ram,0x000107b0b424) */
/* WARNING: Removing unreachable block (ram,0x000107b0b488) */
/* WARNING: Removing unreachable block (ram,0x000107b0b140) */
/* WARNING: Removing unreachable block (ram,0x000107b0b458) */
/* WARNING: Removing unreachable block (ram,0x000107b0b174) */
/* WARNING: Removing unreachable block (ram,0x000107b0b194) */
/* WARNING: Removing unreachable block (ram,0x000107b0b198) */
/* WARNING: Removing unreachable block (ram,0x000107b0b1a8) */
/* WARNING: Removing unreachable block (ram,0x000107b0b1b0) */
/* WARNING: Removing unreachable block (ram,0x000107b0b28c) */
/* WARNING: Removing unreachable block (ram,0x000107b0b3d0) */
/* WARNING: Removing unreachable block (ram,0x000107b0b29c) */
/* WARNING: Removing unreachable block (ram,0x000107b0b1c8) */
/* WARNING: Removing unreachable block (ram,0x000107b0b330) */
/* WARNING: Removing unreachable block (ram,0x000107b0b3dc) */
/* WARNING: Removing unreachable block (ram,0x000107b0b368) */
/* WARNING: Removing unreachable block (ram,0x000107b0b378) */
/* WARNING: Removing unreachable block (ram,0x000107b0b37c) */
/* WARNING: Removing unreachable block (ram,0x000107b0b38c) */
/* WARNING: Removing unreachable block (ram,0x000107b0b394) */
/* WARNING: Removing unreachable block (ram,0x000107b0b3b0) */
/* WARNING: Removing unreachable block (ram,0x000107b0b3cc) */
/* WARNING: Removing unreachable block (ram,0x000107b0b3e0) */
/* WARNING: Removing unreachable block (ram,0x000107b0b244) */
/* WARNING: Removing unreachable block (ram,0x000107b0b3e4) */
/* WARNING: Removing unreachable block (ram,0x000107b0b3ec) */
/* WARNING: Removing unreachable block (ram,0x000107b0b3f8) */
/* WARNING: Removing unreachable block (ram,0x000107b0b414) */
/* WARNING: Removing unreachable block (ram,0x000107b0b46c) */
/* WARNING: Removing unreachable block (ram,0x000107b0b498) */
/* WARNING: Removing unreachable block (ram,0x000107b0b4a0) */
/* WARNING: Removing unreachable block (ram,0x000107b0b4d0) */
/* WARNING: Removing unreachable block (ram,0x000107b0b4f8) */
/* WARNING: Removing unreachable block (ram,0x000107b0b53c) */
/* WARNING: Removing unreachable block (ram,0x000107b0b508) */
/* WARNING: Removing unreachable block (ram,0x000107b0b544) */
/* WARNING: Removing unreachable block (ram,0x000107b0b6c4) */
/* WARNING: Removing unreachable block (ram,0x000107b0b650) */
/* WARNING: Removing unreachable block (ram,0x000107b0b6e4) */
/* WARNING: Removing unreachable block (ram,0x000107b0b744) */
/* WARNING: Removing unreachable block (ram,0x000107b0b754) */
/* WARNING: Removing unreachable block (ram,0x000107b0b788) */
/* WARNING: Removing unreachable block (ram,0x000107b0b6b0) */
/* WARNING: Removing unreachable block (ram,0x000107b0b83c) */
/* WARNING: Removing unreachable block (ram,0x000107b0b8b4) */
/* WARNING: Removing unreachable block (ram,0x000107b0b8b8) */
/* WARNING: Removing unreachable block (ram,0x000107b0b820) */
/* WARNING: Removing unreachable block (ram,0x000107b0b894) */
/* WARNING: Removing unreachable block (ram,0x000107b0b094) */

void FUN_107b0aa20(undefined8 param_1,undefined *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_2;
  _objc_retain(param_2);
  puVar9 = PTR_PTR_1126d6760;
  _objc_opt_new();
  func_0x00010c25b720(param_2);
  func_0x00010c20ddc0(puVar9);
  puVar2 = param_2;
  func_0x00010c241440();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c0d3c80();
  func_0x00010c204700(puVar9);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae740;
  _objc_opt_new(PTR_PTR_1126ae740);
  func_0x00010c1f9680(puVar9);
  _objc_release(puVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  puVar2 = param_2;
  func_0x00010c156940();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    unaff_x25 = (undefined *)*puStack_120;
    do {
      unaff_x26 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_120 != unaff_x25) {
          _objc_enumerationMutation(puVar2);
        }
        unaff_x23 = *(undefined **)(lStack_128 + (long)unaff_x26 * 8);
        unaff_x24 = puVar9;
        func_0x00010c156940();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067ec0(unaff_x23);
        func_0x00010befc800(unaff_x24);
        _objc_release(unaff_x24);
        unaff_x26 = unaff_x26 + 1;
      } while (puVar3 != unaff_x26);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar5 = (undefined *)0x0;
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  uVar11 = 0x107b0abe8;
  ___stack_chk_fail();
  puVar1 = &uStack_130;
  while( true ) {
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x10);
    register0x00000008 = (BADSPACEBASE *)((long)puVar1 + -0x1f0);
    *(undefined8 *)((long)puVar1 + -0x60) = unaff_x28;
    *(undefined **)((long)puVar1 + -0x58) = unaff_x27;
    *(undefined **)((long)puVar1 + -0x50) = unaff_x26;
    *(undefined **)((long)puVar1 + -0x48) = unaff_x25;
    *(undefined **)((long)puVar1 + -0x40) = unaff_x24;
    *(undefined **)((long)puVar1 + -0x38) = unaff_x23;
    *(undefined **)((long)puVar1 + -0x30) = puVar5;
    *(undefined **)((long)puVar1 + -0x28) = puVar2;
    *(undefined **)((long)puVar1 + -0x20) = puVar9;
    *(undefined **)((long)puVar1 + -0x18) = param_2;
    *(undefined1 **)((long)puVar1 + -0x10) = puVar10;
    *(undefined8 *)((long)puVar1 + -8) = uVar11;
    *(undefined8 *)((long)puVar1 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    param_2 = puVar6;
    _objc_retain(puVar6);
    *(undefined8 *)((long)puVar1 + -0x1a8) = 0;
    *(undefined8 *)((long)puVar1 + -0x1b0) = 0;
    *(undefined8 *)((long)puVar1 + -0x198) = 0;
    *(undefined8 *)((long)puVar1 + -0x1a0) = 0;
    *(undefined8 *)((long)puVar1 + -0x188) = 0;
    *(undefined8 *)((long)puVar1 + -400) = 0;
    *(undefined8 *)((long)puVar1 + -0x178) = 0;
    *(undefined8 *)((long)puVar1 + -0x180) = 0;
    func_0x00010c13be40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined *)((long)puVar1 + -0x1b0);
    puVar8 = (undefined *)((long)puVar1 + -0xe8);
    puVar9 = (undefined *)0x10;
    puVar4 = puVar3;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      unaff_x24 = (undefined *)**(undefined8 **)((long)puVar1 + -0x1a0);
      do {
        unaff_x25 = (undefined *)0x0;
        do {
          if ((undefined *)**(undefined8 **)((long)puVar1 + -0x1a0) != unaff_x24) {
            _objc_enumerationMutation(puVar3);
          }
          puVar5 = *(undefined **)(*(long *)((long)puVar1 + -0x1a8) + (long)unaff_x25 * 8);
          *(undefined8 *)((long)puVar1 + -0x1e8) = 0;
          *(undefined8 *)((long)puVar1 + -0x1f0) = 0;
          *(undefined8 *)((long)puVar1 + -0x1d8) = 0;
          *(undefined8 *)((long)puVar1 + -0x1e0) = 0;
          *(undefined8 *)((long)puVar1 + -0x1c8) = 0;
          *(undefined8 *)((long)puVar1 + -0x1d0) = 0;
          *(undefined8 *)((long)puVar1 + -0x1b8) = 0;
          *(undefined8 *)((long)puVar1 + -0x1c0) = 0;
          func_0x00010c13be00();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar5;
          func_0x00010bf52a60();
          if (puVar2 != (undefined *)0x0) {
            unaff_x26 = (undefined *)**(undefined8 **)((long)puVar1 + -0x1e0);
            unaff_x23 = puVar2;
            do {
              unaff_x27 = (undefined *)0x0;
              do {
                if ((undefined *)**(undefined8 **)((long)puVar1 + -0x1e0) != unaff_x26) {
                  _objc_enumerationMutation(puVar5);
                }
                param_2 = *(undefined **)(*(long *)((long)puVar1 + -0x1e8) + (long)unaff_x27 * 8);
                (**(code **)(puVar6 + 0x10))(puVar6);
                unaff_x27 = unaff_x27 + 1;
              } while (unaff_x23 != unaff_x27);
              unaff_x23 = puVar5;
              func_0x00010bf52a60();
            } while (unaff_x23 != (undefined *)0x0);
          }
          _objc_release(puVar5);
          unaff_x25 = unaff_x25 + 1;
        } while (unaff_x25 != puVar4);
        puVar7 = (undefined *)((long)puVar1 + -0x1b0);
        puVar8 = (undefined *)((long)puVar1 + -0xe8);
        puVar9 = (undefined *)0x10;
        puVar4 = puVar3;
        func_0x00010bf52a60();
        puVar2 = (undefined *)0x0;
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    puVar4 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x68)) break;
    ___stack_chk_fail();
    *(undefined8 *)((long)puVar1 + -0x260) = unaff_d9;
    *(undefined8 *)((long)puVar1 + -600) = unaff_d8;
    *(undefined8 *)((long)puVar1 + -0x250) = unaff_x28;
    *(undefined **)((long)puVar1 + -0x248) = unaff_x27;
    *(undefined **)((long)puVar1 + -0x240) = unaff_x26;
    *(undefined **)((long)puVar1 + -0x238) = unaff_x25;
    *(undefined **)((long)puVar1 + -0x230) = unaff_x24;
    *(undefined **)((long)puVar1 + -0x228) = unaff_x23;
    *(undefined **)((long)puVar1 + -0x220) = puVar5;
    *(undefined **)((long)puVar1 + -0x218) = puVar2;
    *(undefined **)((long)puVar1 + -0x210) = puVar3;
    *(undefined **)((long)puVar1 + -0x208) = puVar6;
    *(undefined1 **)((long)puVar1 + -0x200) = (undefined1 *)((long)puVar1 + -0x10);
    *(code **)((long)puVar1 + -0x1f8) = FUN_107b0ad9c;
    *(undefined8 *)((long)puVar1 + -0x270) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(param_2);
    _objc_retain(puVar7);
    *(undefined **)((long)puVar1 + -0x3c0) = puVar8;
    _objc_retain(puVar8);
    _objc_retain(puVar9);
    unaff_x25 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    *(undefined **)((long)puVar1 + -0x318) = PTR___NSConcreteStackBlock_11034bd00;
    unaff_d8 = 0xc2000000;
    *(undefined8 *)((long)puVar1 + -0x310) = 0xc2000000;
    *(code **)((long)puVar1 + -0x308) = FUN_107b0ba5c;
    *(undefined **)((long)puVar1 + -0x300) = &UNK_1109fbe50;
    *(undefined **)((long)puVar1 + -0x2f8) = unaff_x25;
    _objc_retain();
    puVar6 = (undefined *)((long)puVar1 + -0x318);
    *(undefined **)((long)puVar1 + -0x3b8) = param_2;
    uVar11 = 0x107b0ae60;
    puVar1 = (undefined8 *)((long)puVar1 + -0x3d0);
    puVar3 = param_2;
    puVar2 = puVar4;
    puVar5 = puVar8;
    unaff_x23 = puVar7;
  }
  return;
}



/* Entry: 107b0ad9c; end: 107b0b0bb;  */

void FUN_107b0ad9c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  long lVar14;
  long lVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  undefined8 uVar21;
  undefined **ppuVar22;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_107b0ba5c;
  puStack_110 = &UNK_1109fbe50;
  puStack_108 = puVar3;
  _objc_retain();
  func_0x000107b0abe8(param_2,&puStack_128);
  puVar4 = puVar3;
  func_0x00010bf51e00();
  _objc_release(puStack_108);
  _objc_release(puVar3);
  lVar14 = param_1;
  func_0x0001084ee5fc(param_1,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  _objc_retain(lVar14);
  lVar5 = lVar14;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar15 = *plStack_160;
    do {
      lVar17 = 0;
      do {
        if (*plStack_160 != lVar15) {
          _objc_enumerationMutation(lVar14);
        }
        uVar21 = *(undefined8 *)(lStack_168 + lVar17 * 8);
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(uVar21);
        lVar17 = lVar17 + 1;
      } while (lVar5 != lVar17);
      lVar5 = lVar14;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar14);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b8 = 0xc2000000;
  pcStack_1b0 = FUN_107b0b0bc;
  puStack_1a8 = &UNK_1109fbe20;
  uStack_1a0 = param_3;
  uStack_198 = param_4;
  _objc_retain();
  puStack_190 = puVar6;
  _objc_retain(param_5);
  uStack_188 = param_5;
  lStack_180 = param_1;
  puStack_178 = puVar3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_retain(puVar3);
  ppuVar13 = &puStack_1c0;
  func_0x000107b0abe8(param_2);
  puVar7 = puVar6;
  func_0x00010bf529e0();
  if (puVar7 != (undefined *)0x0) {
    func_0x00010bf529e0(puVar6);
    func_0x00010c0b32a0(param_5);
  }
  _objc_release(puStack_178);
  _objc_release(lStack_180);
  _objc_release(uStack_188);
  _objc_release(puStack_190);
  _objc_release(uStack_198);
  _objc_release(uStack_1a0);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(lVar14);
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar13);
  uVar21 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar19 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  _objc_retain();
  _objc_retain(uVar1);
  _objc_retain(uVar19);
  _objc_retain(uVar2);
  ppuVar22 = ppuVar13;
  func_0x00010c156560();
  if (ppuVar22 == (undefined **)0x0) {
    ppuVar22 = ppuVar13;
    func_0x00010bfd77e0();
    if ((int)ppuVar22 == 0) {
      ppuStack_3f0 = (undefined **)0x0;
    }
    else {
      ppuVar22 = ppuVar13;
      func_0x00010bfcd160();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_3f0 = ppuVar22;
      func_0x00010c29c5c0();
      func_0x00010c1518c0();
      _objc_release(ppuVar22);
    }
    ppuStack_3e8 = (undefined **)0x0;
    ppuVar22 = (undefined **)0x0;
    ppuVar20 = (undefined **)0x0;
  }
  else {
    ppuVar8 = ppuVar13;
    func_0x00010c156540();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar8;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    if (ppuVar9 == (undefined **)0x0) {
      ppuStack_3f0 = (undefined **)0x0;
      ppuStack_3e8 = (undefined **)0x0;
      ppuVar22 = (undefined **)0x0;
      ppuVar20 = (undefined **)0x0;
    }
    else {
      ppuStack_3f0 = (undefined **)0x0;
      ppuStack_3e8 = (undefined **)0x0;
      ppuVar22 = (undefined **)0x0;
      ppuVar20 = (undefined **)0x0;
      do {
        ppuVar18 = (undefined **)0x0;
        do {
          if (lRam0000000000000000 != lVar5) {
            _objc_enumerationMutation(ppuVar8);
          }
          ppuVar16 = *(undefined ***)((long)ppuVar18 * 8);
          ppuVar10 = ppuVar16;
          func_0x00010c156900();
          if ((int)ppuVar10 == 1) {
            ppuVar22 = ppuVar16;
            func_0x00010c1226c0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar10 = ppuVar22;
            FUN_107b0ba9c();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar20);
            _objc_release(ppuVar22);
            ppuVar22 = ppuVar16;
            func_0x00010c156520();
            _objc_retainAutoreleasedReturnValue();
            ppuVar20 = ppuVar22;
            func_0x00010c29c5c0();
            ppuVar11 = ppuVar16;
            func_0x00010c1226e0();
            _objc_release(ppuVar22);
            if (ppuVar11 < ppuVar20) {
              ppuVar20 = ppuVar16;
              func_0x00010c156520();
              _objc_retainAutoreleasedReturnValue();
              ppuVar22 = ppuVar20;
              func_0x00010c29c5c0();
              _objc_release(ppuVar20);
              func_0x00010c156520(ppuVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1518c0();
            }
            else {
              ppuVar22 = ppuVar10;
              func_0x00010bf529e0();
              _objc_retain(ppuVar10);
              ppuVar20 = ppuVar10;
              func_0x00010bf52a60();
              lVar15 = lRam0000000000000000;
              while (ppuVar16 = ppuVar10, ppuVar20 != (undefined **)0x0) {
                ppuVar16 = (undefined **)0x0;
                do {
                  if (lRam0000000000000000 != lVar15) {
                    _objc_enumerationMutation(ppuVar10);
                  }
                  func_0x00010c151b40(*(undefined8 *)((long)ppuVar16 * 8));
                  ppuVar16 = (undefined **)((long)ppuVar16 + 1);
                } while (ppuVar20 != ppuVar16);
                ppuVar20 = ppuVar10;
                func_0x00010bf52a60();
              }
            }
            _objc_release(ppuVar16);
            ppuVar20 = ppuVar10;
          }
          else {
            ppuVar10 = ppuVar16;
            func_0x00010c156900();
            if ((int)ppuVar10 == 4) {
              ppuVar10 = ppuVar16;
              func_0x00010c1226c0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar11 = ppuVar10;
              FUN_107b0ba9c();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuStack_3e8);
              _objc_release(ppuVar10);
              ppuVar10 = ppuVar16;
              func_0x00010c156520();
              _objc_retainAutoreleasedReturnValue();
              ppuStack_3f0 = ppuVar10;
              func_0x00010c29c5c0();
              _objc_release(ppuVar10);
              func_0x00010c156520();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1518c0();
              _objc_release(ppuVar16);
              ppuStack_3e8 = ppuVar11;
            }
            else {
              func_0x00010c0b32c0(uVar2);
            }
          }
          ppuVar18 = (undefined **)((long)ppuVar18 + 1);
        } while (ppuVar18 != ppuVar9);
        ppuVar9 = ppuVar8;
        func_0x00010bf52a60();
      } while (ppuVar9 != (undefined **)0x0);
    }
    _objc_release(ppuVar8);
  }
  if ((undefined *)((long)ppuVar22 + (long)ppuStack_3f0) == (undefined *)0x0) {
    ppuVar22 = ppuVar13;
    func_0x00010c241220(ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar1;
    func_0x00010bf4b900();
    _objc_release(ppuVar22);
    if ((int)uVar12 != 0) {
      ppuVar22 = ppuVar13;
      func_0x00010c241220(ppuVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar19);
      _objc_release(ppuVar22);
    }
  }
  ppuVar22 = ppuVar13;
  func_0x00010bfd77e0();
  if ((int)ppuVar22 != 0) {
    ppuVar22 = ppuVar13;
    func_0x00010bfcd160();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f680();
    func_0x00010c22a980();
    _objc_release(ppuVar22);
  }
  ppuVar22 = ppuVar13;
  func_0x00010bfcd160();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar22;
  func_0x00010c140600();
  _objc_release(ppuVar22);
  ppuVar22 = (undefined **)PTR_PTR_1126d6768;
  _objc_alloc();
  ppuVar9 = ppuVar13;
  func_0x00010c241220(ppuVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047b40();
  _objc_release(ppuVar9);
  _objc_release(ppuStack_3e8);
  _objc_release(ppuVar20);
  _objc_release(uVar2);
  _objc_release(uVar19);
  _objc_release(uVar1);
  _objc_release(uVar21);
  uVar21 = *(undefined8 *)(param_2 + 0x40);
  lVar5 = *(long *)(param_2 + 0x48);
  ppuVar20 = ppuVar13;
  func_0x00010c241220(ppuVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_2 + 0x38);
  _objc_retain(uVar21);
  _objc_retain(ppuVar22);
  _objc_retain(lVar5);
  _objc_retain(uVar19);
  if (lVar5 == 0) {
    ppuVar9 = (undefined **)PTR_PTR_1126d6778;
    func_0x00010851f08c(PTR_PTR_1126d6778,ppuVar22);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar5);
    lVar15 = lVar5;
    func_0x00010bfb91e0();
    lVar17 = lVar5;
    func_0x00010c0edf40();
    _objc_release(lVar5);
    _objc_retain(ppuVar22);
    ppuVar9 = ppuVar22;
    func_0x00010bfb91e0();
    ppuVar8 = ppuVar22;
    func_0x00010c0edf40();
    _objc_release(ppuVar22);
    if ((long)((long)ppuVar8 + (long)ppuVar9) < lVar17 + lVar15) {
      func_0x00010c0b32e0(uVar19);
      goto LAB_107b0b83c;
    }
    _objc_retain(lVar5);
    lVar15 = lVar5;
    func_0x00010bfb8ac0();
    lVar17 = lVar5;
    func_0x00010c0edf20();
    _objc_release(lVar5);
    _objc_retain(ppuVar22);
    ppuVar8 = ppuVar22;
    func_0x00010bfb8ac0();
    ppuVar9 = ppuVar22;
    func_0x00010c0edf20();
    _objc_release(ppuVar22);
    if ((long)((long)ppuVar9 + (long)ppuVar8) < lVar17 + lVar15) {
      func_0x00010c0b32e0(uVar19);
    }
    ppuVar9 = (undefined **)PTR_PTR_1126d6778;
    func_0x00010851f384(PTR_PTR_1126d6778,lVar5);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar22;
    func_0x00010bfb9200(ppuVar22);
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar9 == (undefined **)0x0) goto LAB_107b0b8b8;
    _objc_setProperty_nonatomic_copy(ppuVar9);
    _objc_release(ppuVar8);
    ppuVar8 = ppuVar22;
    func_0x00010bfb91e0();
    ppuVar9[5] = (undefined *)ppuVar8;
    ppuVar8 = ppuVar22;
    func_0x00010bfb8ac0();
    ppuVar9[6] = (undefined *)ppuVar8;
    ppuVar8 = ppuVar22;
    func_0x00010c0edf60(ppuVar22);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(ppuVar9);
    _objc_release(ppuVar8);
    ppuVar18 = ppuVar22;
    func_0x00010c0edf40();
    ppuVar9[8] = (undefined *)ppuVar18;
    ppuVar18 = ppuVar22;
    func_0x00010c0edf20();
    ppuVar9[9] = (undefined *)ppuVar18;
    ppuVar18 = ppuVar22;
    func_0x00010bf1f680();
    ppuVar9[10] = (undefined *)ppuVar18;
    ppuVar18 = ppuVar22;
    func_0x00010c22a980();
    ppuVar9[0xb] = (undefined *)ppuVar18;
    ppuVar18 = ppuVar22;
    func_0x00010c140600();
    ppuVar9[0xc] = (undefined *)ppuVar18;
  }
  while( true ) {
    func_0x00010c25ed40(uVar21);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(ppuVar9);
LAB_107b0b83c:
    _objc_release(uVar19);
    _objc_release(lVar5);
    _objc_release(ppuVar22);
    _objc_release(uVar21);
    _objc_release(lVar5);
    _objc_release(ppuVar20);
    _objc_release(ppuVar22);
    _objc_release(ppuVar13);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) break;
    ___stack_chk_fail();
LAB_107b0b8b8:
    _objc_release(ppuVar8);
    func_0x00010bfb91e0(ppuVar22);
    func_0x00010bfb8ac0(ppuVar22);
    func_0x00010c0edf60(ppuVar22);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x00010c0edf40(ppuVar22);
    func_0x00010c0edf20(ppuVar22);
    func_0x00010bf1f680(ppuVar22);
    func_0x00010c22a980(ppuVar22);
    func_0x00010c140600(ppuVar22);
  }
  return;
}



/* Entry: 107b0b0bc; end: 107b0b90f;  */

void FUN_107b0b0bc(long param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puStack_210;
  undefined *puStack_208;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar15 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain();
  _objc_retain(uVar2);
  _objc_retain(uVar15);
  _objc_retain(uVar3);
  puVar17 = param_2;
  func_0x00010c156560();
  if (puVar17 == (undefined *)0x0) {
    puVar17 = param_2;
    func_0x00010bfd77e0();
    if ((int)puVar17 == 0) {
      puStack_210 = (undefined *)0x0;
    }
    else {
      puVar17 = param_2;
      func_0x00010bfcd160();
      _objc_retainAutoreleasedReturnValue();
      puStack_210 = puVar17;
      func_0x00010c29c5c0();
      func_0x00010c1518c0();
      _objc_release(puVar17);
    }
    puStack_208 = (undefined *)0x0;
    puVar17 = (undefined *)0x0;
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar4 = param_2;
    func_0x00010c156540();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    if (puVar5 == (undefined *)0x0) {
      puStack_210 = (undefined *)0x0;
      puStack_208 = (undefined *)0x0;
      puVar17 = (undefined *)0x0;
      puVar16 = (undefined *)0x0;
    }
    else {
      puStack_210 = (undefined *)0x0;
      puStack_208 = (undefined *)0x0;
      puVar17 = (undefined *)0x0;
      puVar16 = (undefined *)0x0;
      do {
        puVar14 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar9) {
            _objc_enumerationMutation(puVar4);
          }
          puVar13 = *(undefined **)((long)puVar14 * 8);
          puVar6 = puVar13;
          func_0x00010c156900();
          if ((int)puVar6 == 1) {
            puVar17 = puVar13;
            func_0x00010c1226c0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar17;
            FUN_107b0ba9c();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar16);
            _objc_release(puVar17);
            puVar17 = puVar13;
            func_0x00010c156520();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar17;
            func_0x00010c29c5c0();
            puVar7 = puVar13;
            func_0x00010c1226e0();
            _objc_release(puVar17);
            if (puVar7 < puVar16) {
              puVar16 = puVar13;
              func_0x00010c156520();
              _objc_retainAutoreleasedReturnValue();
              puVar17 = puVar16;
              func_0x00010c29c5c0();
              _objc_release(puVar16);
              func_0x00010c156520(puVar13);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1518c0();
            }
            else {
              puVar17 = puVar6;
              func_0x00010bf529e0();
              _objc_retain(puVar6);
              puVar16 = puVar6;
              func_0x00010bf52a60();
              lVar10 = lRam0000000000000000;
              while (puVar13 = puVar6, puVar16 != (undefined *)0x0) {
                puVar13 = (undefined *)0x0;
                do {
                  if (lRam0000000000000000 != lVar10) {
                    _objc_enumerationMutation(puVar6);
                  }
                  func_0x00010c151b40(*(undefined8 *)((long)puVar13 * 8));
                  puVar13 = puVar13 + 1;
                } while (puVar16 != puVar13);
                puVar16 = puVar6;
                func_0x00010bf52a60();
              }
            }
            _objc_release(puVar13);
            puVar16 = puVar6;
          }
          else {
            puVar6 = puVar13;
            func_0x00010c156900();
            if ((int)puVar6 == 4) {
              puVar6 = puVar13;
              func_0x00010c1226c0();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar6;
              FUN_107b0ba9c();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puStack_208);
              _objc_release(puVar6);
              puVar6 = puVar13;
              func_0x00010c156520();
              _objc_retainAutoreleasedReturnValue();
              puStack_210 = puVar6;
              func_0x00010c29c5c0();
              _objc_release(puVar6);
              func_0x00010c156520();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1518c0();
              _objc_release(puVar13);
              puStack_208 = puVar7;
            }
            else {
              func_0x00010c0b32c0(uVar3);
            }
          }
          puVar14 = puVar14 + 1;
        } while (puVar14 != puVar5);
        puVar5 = puVar4;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined *)0x0);
    }
    _objc_release(puVar4);
  }
  if (puVar17 + (long)puStack_210 == (undefined *)0x0) {
    puVar17 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010bf4b900();
    _objc_release(puVar17);
    if ((int)uVar8 != 0) {
      puVar17 = param_2;
      func_0x00010c241220(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar15);
      _objc_release(puVar17);
    }
  }
  puVar17 = param_2;
  func_0x00010bfd77e0();
  if ((int)puVar17 != 0) {
    puVar17 = param_2;
    func_0x00010bfcd160();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f680();
    func_0x00010c22a980();
    _objc_release(puVar17);
  }
  puVar17 = param_2;
  func_0x00010bfcd160();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar17;
  func_0x00010c140600();
  _objc_release(puVar17);
  puVar17 = PTR_PTR_1126d6768;
  _objc_alloc();
  puVar5 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047b40();
  _objc_release(puVar5);
  _objc_release(puStack_208);
  _objc_release(puVar16);
  _objc_release(uVar3);
  _objc_release(uVar15);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  lVar9 = *(long *)(param_1 + 0x48);
  puVar16 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  _objc_retain(puVar17);
  _objc_retain(lVar9);
  _objc_retain(uVar15);
  if (lVar9 == 0) {
    puVar5 = PTR_PTR_1126d6778;
    func_0x00010851f08c(PTR_PTR_1126d6778,puVar17);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar9);
    lVar10 = lVar9;
    func_0x00010bfb91e0();
    lVar11 = lVar9;
    func_0x00010c0edf40();
    _objc_release(lVar9);
    _objc_retain(puVar17);
    puVar5 = puVar17;
    func_0x00010bfb91e0();
    puVar4 = puVar17;
    func_0x00010c0edf40();
    _objc_release(puVar17);
    if ((long)(puVar4 + (long)puVar5) < lVar11 + lVar10) {
      func_0x00010c0b32e0(uVar15);
      goto LAB_107b0b83c;
    }
    _objc_retain(lVar9);
    lVar10 = lVar9;
    func_0x00010bfb8ac0();
    lVar11 = lVar9;
    func_0x00010c0edf20();
    _objc_release(lVar9);
    _objc_retain(puVar17);
    puVar4 = puVar17;
    func_0x00010bfb8ac0();
    puVar5 = puVar17;
    func_0x00010c0edf20();
    _objc_release(puVar17);
    if ((long)(puVar5 + (long)puVar4) < lVar11 + lVar10) {
      func_0x00010c0b32e0(uVar15);
    }
    puVar5 = PTR_PTR_1126d6778;
    func_0x00010851f384(PTR_PTR_1126d6778,lVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar17;
    func_0x00010bfb9200(puVar17);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) goto LAB_107b0b8b8;
    _objc_setProperty_nonatomic_copy(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar17;
    func_0x00010bfb91e0();
    *(undefined **)(puVar5 + 0x28) = puVar4;
    puVar4 = puVar17;
    func_0x00010bfb8ac0();
    *(undefined **)(puVar5 + 0x30) = puVar4;
    puVar4 = puVar17;
    func_0x00010c0edf60(puVar17);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar5);
    _objc_release(puVar4);
    puVar14 = puVar17;
    func_0x00010c0edf40();
    *(undefined **)(puVar5 + 0x40) = puVar14;
    puVar14 = puVar17;
    func_0x00010c0edf20();
    *(undefined **)(puVar5 + 0x48) = puVar14;
    puVar14 = puVar17;
    func_0x00010bf1f680();
    *(undefined **)(puVar5 + 0x50) = puVar14;
    puVar14 = puVar17;
    func_0x00010c22a980();
    *(undefined **)(puVar5 + 0x58) = puVar14;
    puVar14 = puVar17;
    func_0x00010c140600();
    *(undefined **)(puVar5 + 0x60) = puVar14;
  }
  while( true ) {
    func_0x00010c25ed40(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
LAB_107b0b83c:
    _objc_release(uVar15);
    _objc_release(lVar9);
    _objc_release(puVar17);
    _objc_release(uVar1);
    _objc_release(lVar9);
    _objc_release(puVar16);
    _objc_release(puVar17);
    _objc_release(param_2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) break;
    ___stack_chk_fail();
LAB_107b0b8b8:
    _objc_release(puVar4);
    func_0x00010bfb91e0(puVar17);
    func_0x00010bfb8ac0(puVar17);
    func_0x00010c0edf60(puVar17);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x00010c0edf40(puVar17);
    func_0x00010c0edf20(puVar17);
    func_0x00010bf1f680(puVar17);
    func_0x00010c22a980(puVar17);
    func_0x00010c140600(puVar17);
  }
  return;
}



/* Entry: 107b0b910; end: 107b0ba5b;  */

void FUN_107b0b910(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar4 = *(undefined8 *)(lVar7 * 8);
      func_0x00010c241440(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar2);
      _objc_release(uVar4);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar5 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b0ba5c; end: 107b0ba9b;  */

void FUN_107b0ba5c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b0ba9c; end: 107b0bc37;  */

void FUN_107b0ba9c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char cStack_79;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  char *pcStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107b0bc38;
  puStack_60 = &UNK_1109fbe80;
  pcStack_48 = &cStack_79;
  uStack_58 = param_2;
  puStack_50 = puVar1;
  _objc_retain();
  _objc_retain(param_2);
  uVar2 = param_1;
  func_0x000100504554(param_1,&puStack_78);
  _objc_release(puStack_50);
  _objc_release(uStack_58);
  _objc_release(puVar1);
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010bf529e0();
  uVar4 = param_1;
  func_0x00010bf529e0();
  if (uVar3 < uVar4) {
    if (cStack_79 == '\x01') {
      func_0x00010c0b3200(param_4);
      uVar3 = uVar2;
      func_0x00010bf529e0();
      uVar4 = param_1;
      func_0x00010bf529e0();
      if (uVar4 <= uVar3 + 1) goto LAB_107b0bbfc;
      func_0x00010bf529e0(param_1);
      func_0x00010bf529e0(uVar2);
    }
    else {
      func_0x00010bf529e0(param_1);
      func_0x00010bf529e0(uVar2);
    }
    func_0x00010c0b3220(param_4);
  }
LAB_107b0bbfc:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107b0bc38; end: 107b0bd83;  */

void FUN_107b0bc38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c29f040();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108f579f0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if ((*(long *)(param_1 + 0x30) == 0) || (uVar1 = uVar2, func_0x00010c0720c0(), (int)uVar1 == 0)) {
    uVar3 = *(ulong *)(param_1 + 0x28);
    func_0x00010bf4b900();
    if ((uVar3 & 1) == 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
      puVar5 = PTR_PTR_1126d6770;
      _objc_alloc(PTR_PTR_1126d6770);
      func_0x00010c243d20(param_2);
      uVar1 = param_2;
      func_0x00010c121800(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a2640();
      uVar4 = param_2;
      func_0x00010c121800(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a2600();
      func_0x00010c05c2e0(puVar5);
      _objc_release(uVar4);
      _objc_release(uVar1);
    }
    else {
      puVar5 = (undefined *)0x0;
    }
  }
  else {
    puVar5 = (undefined *)0x0;
    **(undefined1 **)(param_1 + 0x30) = 1;
  }
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107b0f0ac; end: 107b0f187;  */

undefined * FUN_107b0f0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010c26f2a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010c26f2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2709c0(uVar2);
  func_0x00010c0df720(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf433a0(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 107b0f188; end: 107b0f59f; -[SCFriendStoriesSyncer initWithDocObjectContext:performer:storiesSnapchatterFetcher:snapchatterPublicInfoFetcher:customStoriesDataSyncer:discoverFeedEventsController:debugInfoDataProvider:grapheneMetricsEmitter:ghostToFriendStoriesMetricsEmitter:debounceInterval:adConfigProvider:interactionHistoryManager:storiesRanker:circumstanceEngine:storiesConfigProvider:] */

undefined8 *
FUN_107b0f188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  puStack_80 = PTR_PTR_1126f9d70;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d67b8;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cf450;
    _objc_alloc();
    func_0x00010c034d20(param_1);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    func_0x00010c0d9840(puVar1[0x11]);
    _objc_retain(param_14);
    uVar2 = puVar1[7];
    puVar1[7] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[8];
    puVar1[8] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_16);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_16);
  }
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
  return puVar1;
}



/* Entry: 107b0f5a0; end: 107b0f5cf;  */

void FUN_107b0f5a0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108f54528(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 107b0f5d0; end: 107b0f73b; -[SCFriendStoriesSyncer attemptToSyncWithTriggerType:externalCallback:callback:callbackQueue:] */

void FUN_107b0f5d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (((param_3 == 1) || (param_3 == 4)) || (param_3 == 3)) {
    func_0x00010c251cc0(*(undefined8 *)(param_1 + 0x58));
  }
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_58,auStack_48);
  lStack_50 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107b0f73c; end: 107b0f777;  */

void FUN_107b0f73c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd0f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b0f778; end: 107b0f8d7; -[SCFriendStoriesSyncer _attemptToSyncWithTriggerType:externalCallback:callback:callbackQueue:] */

void FUN_107b0f778(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107b0f8d8;
  puStack_68 = &UNK_110857398;
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_copyWeak(auStack_90,auStack_58);
  uStack_88 = param_3;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bf0dac0(uVar1);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_90);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107b0f8d8; end: 107b0f917;  */

void FUN_107b0f8d8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    func_0x00010bf1f3c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x000107b0f908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 107b0f918; end: 107b0f9ef;  */

void FUN_107b0f918(long param_1,byte param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  byte bStack_48;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 & 1) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x50);
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      func_0x000108f13b9c(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a6e20(uVar3);
      _objc_release(uVar2);
    }
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107b0f9f0;
    puStack_58 = &UNK_11084a9b8;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uStack_50 = uVar3;
    bStack_48 = param_2 ^ 1;
    func_0x00010007380c(uVar2,&puStack_70);
    _objc_release(uStack_50);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 107b0f9f0; end: 107b0fa03;  */

void FUN_107b0f9f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107b0fa00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 107b0fa04; end: 107b0fc13; -[SCFriendStoriesSyncer fetchDeltaInfoWithCompletion:completionQueue:] */

void FUN_107b0fa04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x0001084e692c(lVar4,0,0);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 8);
  func_0x0001084e73c8(lVar1,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x0001084eb4fc(lVar2,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar4;
    func_0x00010bd869d0(lVar4,0,&PTR___NSConcreteGlobalBlock_1109fbfe0);
  }
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar1;
    func_0x00010bd869d0(lVar1,0,&PTR___NSConcreteGlobalBlock_1109fc020);
  }
  if (lVar2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar2;
    func_0x00010bd869d0(lVar2,0,&PTR___NSConcreteGlobalBlock_1109fc060);
  }
  puVar3 = PTR_PTR_1126d67c0;
  _objc_alloc();
  func_0x00010c05efa0();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_107b0fc14;
  puStack_90 = &UNK_110852488;
  lStack_88 = lVar5;
  lStack_80 = lVar6;
  lStack_78 = lVar7;
  puStack_70 = puVar3;
  uStack_68 = param_3;
  _objc_retain();
  _objc_retain(lVar7);
  _objc_retain(lVar6);
  _objc_retain(lVar5);
  _objc_retain(param_3);
  func_0x00010007380c(param_4,&puStack_a8);
  _objc_release(param_4);
  _objc_release(puStack_70);
  _objc_release(lStack_78);
  _objc_release(lStack_80);
  _objc_release(lStack_88);
  _objc_release(uStack_68);
  _objc_release(puVar3);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  return;
}



/* Entry: 107b0fc14; end: 107b0fd93;  */

void FUN_107b0fc14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar6 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar6);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  _objc_opt_new();
  _objc_retain();
  func_0x00010bf97ce0(uVar1);
  _objc_release(uVar1);
  _objc_retain(puVar3);
  func_0x00010bf97ce0(uVar2);
  _objc_release(uVar2);
  if (lVar6 != 0) {
    _objc_retain(puVar3);
    func_0x00010bf97ce0(lVar6);
    _objc_release(puVar3);
  }
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(lVar6);
  (**(code **)(lVar5 + 0x10))(lVar5,puVar4,*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107b0fd94; end: 107b0fedb; -[SCFriendStoriesSyncer receivedBatchStoriesResponse:] */

void FUN_107b0fd94(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *unaff_x21;
  undefined **unaff_x22;
  undefined1 auStack_a8 [8];
  undefined1 uStack_a0;
  undefined1 auStack_98 [8];
  undefined **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar3 = 2;
  func_0x00010c0b0960(*(undefined8 *)(param_1 + 0x58));
  if (param_3 != (undefined *)0x0) {
    param_1 = *(long *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = &PTR____CFConstantStringClassReference_110f41418;
    ppuStack_58 = &PTR____CFConstantStringClassReference_110f422f8;
    unaff_x21 = param_3;
    func_0x00010c135700();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = unaff_x21;
    if (unaff_x21 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = unaff_x22;
    func_0x00010bf7dbc0(param_1);
    uVar3 = SUB81(ppuVar4,0);
    _objc_release(puVar2);
    if (unaff_x21 == (undefined *)0x0) {
      _objc_release(puVar1);
    }
    _objc_release(unaff_x21);
    _objc_release(param_1);
  }
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_107b0fedc;
  ppuStack_90 = unaff_x22;
  puStack_88 = unaff_x21;
  lStack_80 = param_1;
  puStack_78 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010c0b0960(*(undefined8 *)(puVar1 + 0x58));
  _objc_initWeak(auStack_98,puVar1);
  uVar5 = *(undefined8 *)(puVar1 + 0x10);
  _objc_copyWeak(auStack_a8,auStack_98);
  uStack_a0 = uVar3;
  func_0x00010c0f7fc0(uVar5);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_98);
  return;
}



/* Entry: 107b0fedc; end: 107b0ff9f; -[SCFriendStoriesSyncer finishedProcessingResponseWithSuccess:] */

void FUN_107b0fedc(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x00010c0b0960(*(undefined8 *)(param_1 + 0x58),param_2,3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107b0ffa0; end: 107b0ffd3;  */

void FUN_107b0ffa0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b0ffd4; end: 107b10437; -[SCFriendStoriesSyncer handleStoriesResponse:triggerType:extraData:completion:] */

void FUN_107b0ffd4(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                  ulong param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 uVar18;
  undefined1 uVar19;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar8 = param_4;
  FUN_107b191c4(param_4,*(undefined8 *)(param_2 + 0x50),
                &PTR____CFConstantStringClassReference_110ea1a58);
  puVar9 = PTR_PTR_1126d67c0;
  if ((uVar8 & 1) == 0) {
    func_0x00010bfaffc0(param_2);
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7,0);
    }
    goto LAB_107b10318;
  }
  _objc_retain(param_6);
  _objc_opt_class(puVar9);
  uVar10 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar9);
  uVar8 = param_6;
  if ((uVar10 & 1) == 0) {
    uVar8 = 0;
  }
  _objc_retain(uVar8);
  _objc_release(param_6);
  uVar10 = uVar8;
  func_0x00010c293c60();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf626a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar8;
  func_0x00010c11ab60();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  _objc_release(puVar9);
  uStack_90 = 0;
  uStack_88 = 0;
  uVar18 = 0x106;
  if (7 < param_5 - 0xcU) {
    uVar18 = 5;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_b0 = 0;
  lStack_a8 = 0;
  lStack_b8 = 0;
  FUN_107b133a0(param_4,&uStack_88,&uStack_90,&uStack_98,&uStack_a0,&lStack_a8,&lStack_b0,&lStack_b8
                ,uVar18);
  uVar7 = uStack_88;
  _objc_retain(uStack_88);
  uVar6 = uStack_90;
  _objc_retain();
  uVar5 = uStack_98;
  _objc_retain(uStack_98);
  uVar4 = uStack_a0;
  _objc_retain(uStack_a0);
  lVar3 = lStack_a8;
  _objc_retain(lStack_a8);
  lVar2 = lStack_b0;
  _objc_retain(lStack_b0);
  lVar1 = lStack_b8;
  _objc_retain();
  lVar13 = lVar3;
  func_0x00010bf529e0();
  if (lVar13 == 0) {
    lVar13 = lVar2;
    func_0x00010bf529e0();
    uVar19 = 0;
    if ((lVar13 == 0) && (lVar1 == 0)) {
      uVar14 = uVar10;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      FUN_107b10438();
      if ((int)uVar15 == 0) {
        uVar15 = uVar11;
        func_0x00010bf002e0();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar15;
        FUN_107b10438();
        if ((int)uVar16 == 0) {
          uVar16 = uVar12;
          func_0x00010bf002e0();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar16;
          FUN_107b10438();
          _objc_release(uVar16);
          _objc_release(uVar15);
          _objc_release(uVar14);
          if ((uVar17 & 1) != 0) goto LAB_107b10190;
          func_0x00010c0a6e80(*(undefined8 *)(param_2 + 0x50));
          uVar19 = 1;
          goto LAB_107b10194;
        }
        _objc_release(uVar15);
      }
      _objc_release(uVar14);
      goto LAB_107b10190;
    }
  }
  else {
LAB_107b10190:
    uVar19 = 0;
  }
LAB_107b10194:
  _objc_initWeak(auStack_c0,param_2);
  _objc_copyWeak(auStack_e8,auStack_c0);
  _objc_retain(param_4);
  _objc_retain(lVar2);
  _objc_retain(uVar7);
  _objc_retain(uVar5);
  _objc_retain(uVar4);
  uStack_d0 = uStack_80;
  uStack_e0 = param_1;
  lStack_d8 = param_5;
  uStack_c8 = uVar19;
  _objc_retain(param_7);
  func_0x00010be85480(param_2);
  _objc_release(param_7);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_c0);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar8);
LAB_107b10318:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 107b10438; end: 107b10497;  */

bool FUN_107b10438(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  func_0x00010c0d3c80(param_1);
  func_0x00010c12d500();
  _objc_release(param_2);
  lVar1 = param_1;
  func_0x00010bf529e0(param_1);
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 107b10498; end: 107b1054b;  */

void FUN_107b10498(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be82480(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x68));
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b1054c; end: 107b10927; -[SCFriendStoriesSyncer _processStoriesResponse:updatedCustomStoryIds:allFriendStoryIds:allCustomStoryIds:allPublicUserStoryIds:friendIdToUsernameMap:userIdToBitmojiAvatarIdMap:userIdToBitmojiAvatarSelfieId:fetchStartTime:triggerType:upateRankedStoryIdsOnly:lastUpdatedSnapTimeStamp:externalCompletion:] */

void FUN_107b1054c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  long param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined1 auStack_100 [8];
  long lStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined1 uStack_e7;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
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
  _objc_retain(param_16);
  lVar1 = param_3;
  func_0x00010be53540(param_1);
  _dispatch_group_create();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_107b10928;
  uStack_88 = 0x107b10938;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_3 + 0x38);
  puStack_80 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar3 != 0) {
    _dispatch_group_enter(lVar1);
    uVar4 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x15;
    _dispatch_get_global_queue(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = puVar2;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_107b10940;
    puStack_c0 = &UNK_110853230;
    puStack_b0 = &uStack_a8;
    _objc_retain(lVar1);
    lStack_b8 = lVar1;
    func_0x00010bfcac60(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lStack_b8);
  }
  _objc_initWeak(auStack_e0,param_3);
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uStack_e7 = param_13 == 0x11;
  puStack_178 = puVar2;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_107b1099c;
  puStack_160 = &UNK_1109fbf60;
  uStack_140 = param_11;
  uStack_138 = param_12;
  uStack_e8 = param_14;
  puStack_108 = &uStack_a8;
  lStack_f8 = param_13;
  lStack_158 = param_3;
  uStack_150 = param_5;
  uStack_148 = param_10;
  uStack_130 = param_7;
  uStack_128 = param_8;
  uStack_120 = param_9;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_100,auStack_e0);
  uStack_110 = param_16;
  uStack_118 = param_6;
  uStack_f0 = param_2;
  _objc_retain(param_16);
  _objc_retain(param_6);
  func_0x000100bc0718(lVar1,uVar4,&puStack_178);
  _objc_release(uVar4);
  _objc_release(uStack_110);
  _objc_release(uStack_118);
  _objc_destroyWeak(auStack_100);
  _objc_release(uStack_120);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  _objc_release(uStack_138);
  _objc_release(uStack_140);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_destroyWeak(auStack_e0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(puStack_80);
  _objc_release(param_16);
  _objc_release(param_6);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_5);
  _objc_release(lVar1);
  return;
}



/* Entry: 107b10928; end: 107b1093f;  */

void FUN_107b10928(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107b10940; end: 107b1099b;  */

void FUN_107b10940(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b1099c; end: 107b10b97;  */

void FUN_107b1099c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_107b10b98;
  puStack_b0 = &UNK_1109fbf00;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_a8 = uVar3;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_a0 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_98 = uVar3;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_90 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_88 = uVar3;
  _objc_retain(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uStack_80 = uVar2;
  _objc_retain(uVar4);
  lStack_70 = *(long *)(param_1 + 0x20);
  uStack_58 = *(undefined2 *)(param_1 + 0x90);
  uStack_68 = *(undefined8 *)(param_1 + 0x70);
  uStack_60 = *(undefined8 *)(param_1 + 0x80);
  uVar3 = *(undefined8 *)(lStack_70 + 0x10);
  uStack_78 = uVar4;
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  _objc_copyWeak(auStack_e0,param_1 + 0x78);
  uStack_d8 = *(undefined8 *)(param_1 + 0x80);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar5);
  uStack_d0 = *(undefined8 *)(param_1 + 0x88);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar2);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_e0);
  _objc_release(uVar4);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  return;
}



/* Entry: 107b10b98; end: 107b10c0f;  */

void FUN_107b10b98(long param_1,undefined8 param_2)

{
  FUN_107b0bd84(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x50),1)
  ;
  return;
}



/* Entry: 107b10c10; end: 107b10c8f;  */

void FUN_107b10c10(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c1065e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0df760(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bdfe2e0(*(undefined8 *)(param_1 + 0x48));
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b10c90; end: 107b10d1f;  */

void FUN_107b10c90(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),7);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x78,param_2 + 0x78);
  return;
}



/* Entry: 107b10d20; end: 107b10e7f; -[SCFriendStoriesSyncer _didFinishProcessResponseWithTriggerType:success:updatedCustomStoryIds:lastUpdatedSnapTimeStamp:predictedSessionDepth:externalCompletion:] */

void FUN_107b10d20(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (7 < param_4 - 0xc) {
    func_0x00010c0b0960(*(undefined8 *)(param_2 + 0x58));
    func_0x00010be32a60(param_2);
  }
  ppuVar1 = &PTR_PTR_110d26e50;
  if ((param_4 & 0xfffffffffffffffd) != 1) {
    ppuVar1 = &PTR_PTR_110d26e58;
  }
  puVar3 = *ppuVar1;
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(puVar3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c265d80();
  _objc_release(uVar4);
  func_0x00010c28d2a0(*(undefined8 *)(param_2 + 0x60));
  uVar4 = *(undefined8 *)(param_2 + 0x80);
  puVar2 = PTR_PTR_1126d67c8;
  _objc_alloc(PTR_PTR_1126d67c8);
  func_0x00010c021900(param_1);
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x88));
  _objc_release(puVar3);
  if (param_8 != 0) {
    (**(code **)(param_8 + 0x10))(param_8,1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 107b10e80; end: 107b10f07; -[SCFriendStoriesSyncer _handleUpdatedFriendStoriesOnPerformerWithSuccess:] */

void FUN_107b10e80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((int)param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b86c0(param_1,param_2,puVar1);
    _objc_release(puVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13bba0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b10f08; end: 107b11187; -[SCFriendStoriesSyncer _querySnapchatterUsernamesWithUserIds:userStorySequences:completion:] */

void FUN_107b10f08(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(param_5 + 0x10))
              (param_5,PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58
               ,PTR____NSDictionary0__struct_11034ab58);
  }
  else {
    lVar1 = param_4;
    func_0x00010bd869d0(param_4,0,&PTR___NSConcreteGlobalBlock_1109fc0d0);
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c11de00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_5);
      func_0x00010c09d7c0(uVar4);
      _objc_release(uVar5);
      _objc_release(uVar4);
      lVar2 = param_5;
    }
    else {
      lVar2 = param_3;
      func_0x00010c0d3c80();
      lVar3 = lVar1;
      func_0x00010bf002e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d500(lVar2);
      _objc_release(lVar3);
      lVar3 = lVar2;
      func_0x00010bf529e0();
      if (lVar3 == 0) {
        (**(code **)(param_5 + 0x10))
                  (param_5,lVar1,PTR____NSDictionary0__struct_11034ab58,
                   PTR____NSDictionary0__struct_11034ab58);
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf51e00(lVar2);
        uVar5 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c11de00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(lVar1);
        _objc_retain(param_5);
        func_0x00010bfaa4c0(uVar4);
        _objc_release(uVar5);
        _objc_release(lVar3);
        _objc_release(uVar4);
        _objc_release(param_5);
        _objc_release(lVar1);
      }
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b11188; end: 107b1141b;  */

void FUN_107b11188(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_2;
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  puVar4 = param_2;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_2);
      }
      uVar12 = *(undefined8 *)((long)puVar10 * 8);
      uVar11 = uVar12;
      func_0x00010c294420(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar12;
      func_0x00010c2923e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(uVar6);
      _objc_release(uVar11);
      uVar11 = uVar12;
      func_0x00010bf1bae0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar11;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar12;
      func_0x00010c2923e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar11);
      uVar11 = uVar12;
      func_0x00010bf1bae0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar11;
      func_0x00010bf1c0a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2923e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(uVar12);
      _objc_release(uVar6);
      _objc_release(uVar11);
      puVar10 = puVar10 + 1;
    } while (puVar4 != puVar10);
    puVar4 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    puVar8 = puVar1;
    (**(code **)(lVar5 + 0x10))(lVar5,puVar1,puVar2,puVar3);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  uVar11 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(puVar8);
  func_0x00010c0d3c80();
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0d3c80();
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0d3c80();
  _objc_retain(uVar11);
  _objc_retain(uVar6);
  _objc_retain(uVar7);
  func_0x00010bf97ce0(puVar8);
  _objc_release(puVar8);
  func_0x00010bef7f60(uVar11);
  lVar5 = *(long *)(param_2 + 0x28);
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x10))(lVar5,uVar11,uVar6,uVar7);
  }
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar11);
  _objc_release(uVar7);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar11);
  return;
}



/* Entry: 107b1141c; end: 107b11643;  */

void FUN_107b1141c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0d3c80();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d3c80();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d3c80();
  _objc_retain(uVar4);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  func_0x00010bf97ce0(param_2);
  _objc_release(param_2);
  func_0x00010bef7f60(uVar4);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,uVar4,uVar1,uVar2);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107b11644; end: 107b116b7; -[SCFriendStoriesSyncer _logFetchFriendStoriesLatencyWithStartTime:step:] */

void FUN_107b11644(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  dVar2 = param_1;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c26f320();
  _objc_release(puVar1);
  func_0x00010c0a6e00(dVar2 - param_1,*(undefined8 *)(param_2 + 0x50),param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b116b8; end: 107b116bf; -[SCFriendStoriesSyncer addListener:] */

void FUN_107b116b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107b116c0; end: 107b116c7; -[SCFriendStoriesSyncer removeListener:] */

void FUN_107b116c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107b116c8; end: 107b116ef; -[SCFriendStoriesSyncer observeFriendStoriesFetching] */

void FUN_107b116c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b116f0; end: 107b11717; -[SCFriendStoriesSyncer observeFriendStoriesPredictedSessionDepth] */

void FUN_107b116f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b11718; end: 107b11723; -[SCFriendStoriesSyncer lastResponseTime] */

void FUN_107b11718(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xa0,1);
  return;
}



/* Entry: 107b11724; end: 107b1172b; -[SCFriendStoriesSyncer setLastResponseTime:] */

void FUN_107b11724(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 107b1172c; end: 107b11827; -[SCFriendStoriesSyncer .cxx_destruct] */

void FUN_107b1172c(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107b11828; end: 107b1182f;  */

void FUN_107b11828(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15e630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_sequenceInfo_1126353a8);
  return;
}



/* Entry: 107b11830; end: 107b118ab;  */

void FUN_107b11830(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010c15e620(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107b118ac; end: 107b118b3;  */

void FUN_107b118ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15e630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_sequenceInfo_1126353a8);
  return;
}



/* Entry: 107b118b4; end: 107b11c1f;  */

void FUN_107b118b4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c0dd8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126d5c50;
  _objc_opt_new(PTR_PTR_1126d5c50);
  func_0x00010c196c60(puVar1);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf98200(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b200();
  _objc_release(puVar2);
  uVar3 = param_2;
  func_0x000108f139ec(param_2,0x1a);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1805c0(puVar1);
  _objc_release(uVar3);
  lVar4 = param_3;
  func_0x00010c08b1c0(param_3);
  _objc_release(param_3);
  lVar4 = lVar4 + 1;
  func_0x000108f1399c(lVar4,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18bae0(puVar1);
  _objc_release(lVar4);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b11c20; end: 107b11ca7;  */

void FUN_107b11c20(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5bc00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_2);
  lVar3 = lVar2;
  func_0x00010c08fa60();
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar2;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107b11ca8; end: 107b12a87;  */

void FUN_107b11ca8(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
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
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined *puVar26;
  long lVar27;
  long lVar28;
  undefined *puVar29;
  undefined *puVar30;
  long lVar31;
  undefined *puVar32;
  undefined *puVar33;
  long lVar34;
  undefined1 auStack_750 [8];
  undefined *puStack_748;
  undefined8 uStack_740;
  code *pcStack_738;
  undefined *puStack_730;
  undefined *puStack_728;
  undefined1 auStack_720 [8];
  undefined1 auStack_718 [8];
  undefined4 uStack_684;
  long lStack_5e0;
  
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = param_2;
  func_0x000107b194dc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x0001084e6550();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar8 = param_2;
  func_0x00010c13b960();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar9 == 0) {
      _objc_release(lVar8);
      func_0x00010bf529e0(param_3);
      func_0x00010bf529e0(puVar4);
      func_0x00010c0b22a0(param_6);
      puVar26 = puVar5;
      func_0x00010bf529e0();
      if (puVar26 != (undefined *)0x0) {
        func_0x00010bf529e0(puVar5);
        func_0x00010c0b2260(param_6);
        puVar29 = puVar5;
        func_0x00010bf00d20();
        _objc_retainAutoreleasedReturnValue();
        puVar26 = puVar29;
        func_0x00010bf52a60();
        lVar9 = lRam0000000000000000;
        while (puVar26 != (undefined *)0x0) {
          puVar33 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar9) {
              _objc_enumerationMutation(puVar29);
            }
            puVar16 = PTR_PTR_1126d67d0;
            func_0x00010851b910(PTR_PTR_1126d67d0,*(undefined8 *)((long)puVar33 * 8));
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25ed40(param_1);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar16);
            puVar33 = puVar33 + 1;
          } while (puVar26 != puVar33);
          puVar26 = puVar29;
          func_0x00010bf52a60();
        }
        _objc_release(puVar29);
        puVar29 = puVar5;
        func_0x00010bf002e0();
        _objc_retainAutoreleasedReturnValue();
        puVar26 = puVar29;
        func_0x00010bf52a60();
        lVar9 = lRam0000000000000000;
        while (puVar26 != (undefined *)0x0) {
          puVar33 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar9) {
              _objc_enumerationMutation(puVar29);
            }
            func_0x00010c1d0640(puVar4);
            puVar33 = puVar33 + 1;
          } while (puVar26 != puVar33);
          puVar26 = puVar29;
          func_0x00010bf52a60();
        }
        _objc_release(puVar29);
      }
      puVar26 = puVar4;
      func_0x00010bf51e00();
      puVar29 = puVar6;
      func_0x00010bf51e00();
      puVar33 = puVar7;
      func_0x00010bf51e00();
      puVar16 = puVar26;
      func_0x0001084ee948(param_1,3,puVar26,0,PTR____NSArray0__struct_11034ab48,puVar29,puVar33,0);
      _objc_release(puVar33);
      _objc_release(puVar29);
      _objc_release(puVar26);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(param_2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
        return;
      }
      ___stack_chk_fail();
      __Unwind_Resume();
      _objc_retain(puVar16);
      _objc_initWeak(auStack_718,param_1);
      uVar25 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar25);
      _objc_retainAutoreleasedReturnValue();
      puStack_748 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_740 = 0xc2000000;
      pcStack_738 = FUN_107b12be8;
      puStack_730 = &UNK_1109fc0f0;
      _objc_copyWeak(auStack_720,auStack_718);
      _objc_retain(puVar16);
      puStack_728 = puVar16;
      _objc_copyWeak(auStack_750,auStack_718);
      _objc_retain(puVar16);
      func_0x00010bfa5340(uVar25);
      _objc_release(uVar25);
      _objc_release(puVar16);
      _objc_destroyWeak(auStack_750);
      _objc_release(puStack_728);
      _objc_destroyWeak(auStack_720);
      _objc_destroyWeak(auStack_718);
      _objc_release(puVar16);
      return;
    }
    lVar28 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      puVar29 = *(undefined **)(lVar28 * 8);
      puVar26 = puVar29;
      func_0x00010bfd58a0();
      if ((int)puVar26 == 0) {
        puVar26 = (undefined *)0x0;
      }
      else {
        puVar33 = puVar29;
        func_0x00010bf454e0();
        _objc_retainAutoreleasedReturnValue();
        puVar26 = puVar33;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar33);
      }
      lVar10 = lVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar33 = puVar29;
      func_0x00010c252d60();
      if ((int)puVar33 == 3) {
        if (lVar10 != 0) {
          lVar11 = lVar10;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar11;
          func_0x00010c08fa60();
          _objc_release(lVar11);
          if (lVar12 != 0) {
            lStack_5e0 = lVar10;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar5);
            goto LAB_107b12774;
          }
        }
      }
      else {
        puVar33 = puVar29;
        func_0x00010c252d60();
        if (((int)puVar33 != 1) || (puVar33 = puVar29, func_0x00010bfdcc60(), (int)puVar33 == 0))
        goto LAB_107b12780;
        lStack_5e0 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if ((lStack_5e0 != 0) && (lVar11 = lStack_5e0, func_0x000100bf119c(), (int)lVar11 != 0)) {
          func_0x00010c0ad380(param_6);
          goto LAB_107b12774;
        }
        lVar11 = lStack_5e0;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar11;
        func_0x00010c08fa60();
        if (lVar12 == 0) {
          func_0x00010c0b22e0(param_6);
        }
        else {
          func_0x00010c2592e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c259d00(puVar29);
          func_0x00010c150c20(puVar29);
          puVar33 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar6);
          _objc_release(puVar33);
          puVar33 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df740(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar33);
          puVar33 = puVar29;
          func_0x00010bf31ee0();
          if ((int)puVar33 == 4) {
            puVar33 = puVar29;
            func_0x00010c11ab00();
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lStack_5e0;
            func_0x00010bf1bae0();
            _objc_retainAutoreleasedReturnValue();
            lVar13 = lVar12;
            func_0x00010bf1acc0();
            _objc_retainAutoreleasedReturnValue();
            lVar14 = lStack_5e0;
            func_0x00010bf1bae0();
            _objc_retainAutoreleasedReturnValue();
            lVar15 = lVar14;
            func_0x00010bf1c0a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(param_1);
            _objc_retain(puVar33);
            _objc_retain(lVar10);
            _objc_retain(puVar26);
            _objc_retain(lVar11);
            _objc_retain(param_6);
            _objc_retain(param_7);
            _objc_retain(lVar13);
            _objc_retain(lVar15);
            puVar16 = puVar33;
            func_0x00010bfd91a0();
            puVar30 = PTR____NSArray0__struct_11034ab48;
            if ((int)puVar16 != 0) {
              puVar16 = puVar33;
              func_0x00010c0cc0c0();
              _objc_retainAutoreleasedReturnValue();
              puVar30 = puVar33;
              func_0x00010bfd7420();
              if (((ulong)puVar30 & 1) == 0) {
                func_0x00010c0b2280(param_6);
LAB_107b12180:
                uStack_684 = 0;
LAB_107b12184:
                func_0x00010bfdcd00(puVar16);
                puVar30 = puVar33;
                func_0x00010c2456a0();
                _objc_retainAutoreleasedReturnValue();
                lVar20 = lVar10;
                func_0x00010c25b340(lVar10);
                _objc_retainAutoreleasedReturnValue();
                puVar17 = puVar16;
                func_0x00010c25b540(puVar16);
                _objc_retainAutoreleasedReturnValue();
                puVar18 = puVar30;
                func_0x000108f0d2d4(puVar30,lVar20,puVar17,puVar26,lVar11,lVar13,lVar15,uStack_684);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar17);
                _objc_release(lVar20);
                _objc_release(puVar30);
                puVar17 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
                func_0x00010c1607a0();
                _objc_retainAutoreleasedReturnValue();
                puVar19 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
                func_0x00010c1607a0();
                _objc_retainAutoreleasedReturnValue();
                lVar21 = lVar10;
                func_0x00010c25b340();
                _objc_retainAutoreleasedReturnValue();
                lVar20 = lVar21;
                func_0x00010bf52a60();
                lVar24 = lRam0000000000000000;
                while (lVar20 != 0) {
                  lVar31 = 0;
                  do {
                    if (lRam0000000000000000 != lVar24) {
                      _objc_enumerationMutation(lVar21);
                    }
                    lVar34 = *(long *)(lVar31 * 8);
                    lVar22 = lVar34;
                    func_0x00010c15f2e0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar23 = lVar22;
                    func_0x00010c08fa60();
                    _objc_release(lVar22);
                    if (lVar23 != 0) {
                      func_0x00010c15f2e0(lVar34);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010befa120(puVar17);
                      _objc_release(lVar34);
                    }
                    lVar31 = lVar31 + 1;
                  } while (lVar20 != lVar31);
                  lVar20 = lVar21;
                  func_0x00010bf52a60();
                }
                _objc_release(lVar21);
                _objc_retain(puVar18);
                puVar30 = puVar18;
                func_0x00010bf52a60();
                lVar20 = lRam0000000000000000;
                while (puVar30 != (undefined *)0x0) {
                  puVar32 = (undefined *)0x0;
                  do {
                    if (lRam0000000000000000 != lVar20) {
                      _objc_enumerationMutation(puVar18);
                    }
                    lVar31 = *(long *)((long)puVar32 * 8);
                    lVar24 = lVar31;
                    func_0x00010c15f2e0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar21 = lVar24;
                    func_0x00010c08fa60();
                    _objc_release(lVar24);
                    if (lVar21 != 0) {
                      func_0x00010c15f2e0(lVar31);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010befa120(puVar19);
                      _objc_release(lVar31);
                    }
                    puVar32 = puVar32 + 1;
                  } while (puVar30 != puVar32);
                  puVar30 = puVar18;
                  func_0x00010bf52a60();
                }
                _objc_release(puVar18);
                _objc_retain(puVar17);
                puVar30 = puVar17;
                func_0x00010bf52a60();
                lVar20 = lRam0000000000000000;
                while (puVar30 != (undefined *)0x0) {
                  puVar32 = (undefined *)0x0;
                  do {
                    if (lRam0000000000000000 != lVar20) {
                      _objc_enumerationMutation(puVar17);
                    }
                    func_0x00010bf4b900(puVar19);
                    puVar32 = puVar32 + 1;
                  } while (puVar30 != puVar32);
                  puVar30 = puVar17;
                  func_0x00010bf52a60();
                }
                _objc_release(puVar17);
                _objc_retain(puVar19);
                puVar30 = puVar19;
                func_0x00010bf52a60();
                lVar20 = lRam0000000000000000;
                while (puVar30 != (undefined *)0x0) {
                  puVar32 = (undefined *)0x0;
                  do {
                    if (lRam0000000000000000 != lVar20) {
                      _objc_enumerationMutation(puVar19);
                    }
                    func_0x00010bf4b900(puVar17);
                    puVar32 = puVar32 + 1;
                  } while (puVar30 != puVar32);
                  puVar30 = puVar19;
                  func_0x00010bf52a60();
                }
                _objc_release(puVar19);
                func_0x00010c0b22c0(param_6);
                if (lVar10 == 0) {
                  puVar30 = PTR_PTR_1126d5c20;
                  _objc_alloc(PTR_PTR_1126d5c20);
                  func_0x00010c05bc60();
                  puVar32 = PTR_PTR_1126d67d0;
                  func_0x00010851b2c0(PTR_PTR_1126d67d0,puVar30);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar30);
                }
                else {
                  puVar32 = PTR_PTR_1126d67d0;
                  func_0x00010851b4f8();
                  _objc_retainAutoreleasedReturnValue();
                }
                _objc_retain(&PTR___NSConcreteGlobalBlock_110a4fa40);
                puVar30 = puVar18;
                func_0x00010c246ca0(puVar18);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar18);
                _objc_release(&PTR___NSConcreteGlobalBlock_110a4fa40);
                if (puVar32 != (undefined *)0x0) {
                  _objc_setProperty_nonatomic_copy(puVar32);
                }
                puVar18 = puVar33;
                func_0x00010bfb68a0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c15e640();
                _objc_release(puVar18);
                lVar20 = lVar10;
                func_0x00010c15e620();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c08b1c0();
                _objc_release(lVar20);
                puVar18 = PTR_PTR_1126d6790;
                _objc_alloc(PTR_PTR_1126d6790);
                func_0x00010c021a40();
                if (puVar32 != (undefined *)0x0) {
                  _objc_setProperty_nonatomic_copy(puVar32);
                }
                _objc_release(puVar18);
                func_0x00010c25ed40(param_1);
                _objc_unsafeClaimAutoreleasedReturnValue();
                _objc_release(puVar32);
                _objc_release(puVar19);
                _objc_release(puVar17);
              }
              else {
                puVar30 = puVar33;
                func_0x00010bfb68a0();
                _objc_retainAutoreleasedReturnValue();
                puVar17 = puVar30;
                func_0x00010c15e580();
                puVar18 = puVar33;
                func_0x00010bfb68a0();
                _objc_retainAutoreleasedReturnValue();
                puVar19 = puVar18;
                func_0x00010c15e660();
                _objc_release(puVar18);
                _objc_release(puVar30);
                func_0x00010c0b2280(param_6);
                if ((long)puVar17 <= (long)puVar19) goto LAB_107b12180;
                puVar17 = puVar33;
                func_0x00010c2456c0();
                puVar30 = (undefined *)0x0;
                if ((lVar10 != 0) && (puVar17 != (undefined *)0x0)) {
                  uStack_684 = 1;
                  goto LAB_107b12184;
                }
              }
              _objc_release(puVar16);
            }
            _objc_release(lVar15);
            _objc_release(lVar13);
            _objc_release(param_7);
            _objc_release(param_6);
            _objc_release(lVar11);
            _objc_release(puVar26);
            _objc_release(lVar10);
            _objc_release(puVar33);
            _objc_release(param_1);
            func_0x00010c1d0640(puVar4);
            _objc_release(puVar30);
            _objc_release(lVar15);
            _objc_release(lVar14);
            _objc_release(lVar13);
            _objc_release(lVar12);
            _objc_release(puVar33);
          }
          _objc_release(puVar29);
        }
        _objc_release(lVar11);
LAB_107b12774:
        _objc_release(lStack_5e0);
      }
LAB_107b12780:
      _objc_release(lVar10);
      _objc_release(puVar26);
      lVar28 = lVar28 + 1;
    } while (lVar28 != lVar9);
    lVar9 = lVar8;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107b12a88; end: 107b12be7; -[SCPublicUserStoriesSyncer fetchPublicUserStoriesWithUserIds:] */

void FUN_107b12a88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107b12be8;
  puStack_60 = &UNK_1109fc0f0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_copyWeak(auStack_80,auStack_48);
  _objc_retain(param_3);
  func_0x00010bfa5340(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107b12be8; end: 107b12c33;  */

void FUN_107b12be8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd2f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107b12c34; end: 107b12c87;  */

void FUN_107b12c34(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26520();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b12c88; end: 107b12ddb; -[SCPublicUserStoriesSyncer _handleBatchStoryLookupResponse:userIds:] */

void FUN_107b12c88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfaa4c0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b12ddc; end: 107b12e2f;  */

void FUN_107b12ddc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be806c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b12e30; end: 107b12f4f; -[SCPublicUserStoriesSyncer _processBatchStoryLookupResponse:userIds:userIdToSnapchatterMap:] */

void FUN_107b12e30(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c13b980();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    uVar2 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8500(uVar3);
    _objc_release(uVar2);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b12f50; end: 107b12f6f;  */

void FUN_107b12f50(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  undefined *puVar33;
  undefined *puVar34;
  long lVar35;
  undefined *puVar36;
  undefined *puVar37;
  long lVar38;
  undefined1 auStack_750 [8];
  undefined *puStack_748;
  undefined8 uStack_740;
  code *pcStack_738;
  undefined *puStack_730;
  undefined *puStack_728;
  undefined1 auStack_720 [8];
  undefined1 auStack_718 [8];
  undefined4 uStack_684;
  long lStack_5e0;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar28 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30);
  uVar30 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x38);
  lVar31 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(lVar1);
  _objc_retain(uVar28);
  _objc_retain(lVar2);
  _objc_retain(uVar3);
  _objc_retain(uVar30);
  lVar5 = lVar1;
  func_0x000107b194dc();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x0001084e6550();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar11 = lVar1;
  func_0x00010c13b960();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  do {
    if (lVar12 == 0) {
      _objc_release(lVar11);
      func_0x00010bf529e0(uVar28);
      func_0x00010bf529e0(puVar7);
      func_0x00010c0b22a0(uVar3);
      puVar29 = puVar8;
      func_0x00010bf529e0();
      if (puVar29 != (undefined *)0x0) {
        func_0x00010bf529e0(puVar8);
        func_0x00010c0b2260(uVar3);
        puVar33 = puVar8;
        func_0x00010bf00d20();
        _objc_retainAutoreleasedReturnValue();
        puVar29 = puVar33;
        func_0x00010bf52a60();
        lVar12 = lRam0000000000000000;
        while (puVar29 != (undefined *)0x0) {
          puVar37 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar12) {
              _objc_enumerationMutation(puVar33);
            }
            puVar19 = PTR_PTR_1126d67d0;
            func_0x00010851b910(PTR_PTR_1126d67d0,*(undefined8 *)((long)puVar37 * 8));
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25ed40(param_2);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar19);
            puVar37 = puVar37 + 1;
          } while (puVar29 != puVar37);
          puVar29 = puVar33;
          func_0x00010bf52a60();
        }
        _objc_release(puVar33);
        puVar33 = puVar8;
        func_0x00010bf002e0();
        _objc_retainAutoreleasedReturnValue();
        puVar29 = puVar33;
        func_0x00010bf52a60();
        lVar12 = lRam0000000000000000;
        while (puVar29 != (undefined *)0x0) {
          puVar37 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar12) {
              _objc_enumerationMutation(puVar33);
            }
            func_0x00010c1d0640(puVar7);
            puVar37 = puVar37 + 1;
          } while (puVar29 != puVar37);
          puVar29 = puVar33;
          func_0x00010bf52a60();
        }
        _objc_release(puVar33);
      }
      puVar29 = puVar7;
      func_0x00010bf51e00();
      puVar33 = puVar9;
      func_0x00010bf51e00();
      puVar37 = puVar10;
      func_0x00010bf51e00();
      puVar19 = puVar29;
      func_0x0001084ee948(param_2,3,puVar29,0,PTR____NSArray0__struct_11034ab48,puVar33,puVar37,0);
      _objc_release(puVar37);
      _objc_release(puVar33);
      _objc_release(puVar29);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(uVar30);
      _objc_release(uVar3);
      _objc_release(lVar2);
      _objc_release(uVar28);
      _objc_release(lVar1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar31) {
        return;
      }
      ___stack_chk_fail();
      __Unwind_Resume();
      _objc_retain(puVar19);
      _objc_initWeak(auStack_718,param_2);
      uVar28 = *(undefined8 *)(param_2 + 0x18);
      func_0x00010c269d40(uVar28);
      _objc_retainAutoreleasedReturnValue();
      puStack_748 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_740 = 0xc2000000;
      pcStack_738 = FUN_107b12be8;
      puStack_730 = &UNK_1109fc0f0;
      _objc_copyWeak(auStack_720,auStack_718);
      _objc_retain(puVar19);
      puStack_728 = puVar19;
      _objc_copyWeak(auStack_750,auStack_718);
      _objc_retain(puVar19);
      func_0x00010bfa5340(uVar28);
      _objc_release(uVar28);
      _objc_release(puVar19);
      _objc_destroyWeak(auStack_750);
      _objc_release(puStack_728);
      _objc_destroyWeak(auStack_720);
      _objc_destroyWeak(auStack_718);
      _objc_release(puVar19);
      return;
    }
    lVar32 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar11);
      }
      puVar33 = *(undefined **)(lVar32 * 8);
      puVar29 = puVar33;
      func_0x00010bfd58a0();
      if ((int)puVar29 == 0) {
        puVar29 = (undefined *)0x0;
      }
      else {
        puVar37 = puVar33;
        func_0x00010bf454e0();
        _objc_retainAutoreleasedReturnValue();
        puVar29 = puVar37;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar37);
      }
      lVar13 = lVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar37 = puVar33;
      func_0x00010c252d60();
      if ((int)puVar37 == 3) {
        if (lVar13 != 0) {
          lVar14 = lVar13;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar14;
          func_0x00010c08fa60();
          _objc_release(lVar14);
          if (lVar15 != 0) {
            lStack_5e0 = lVar13;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar8);
            goto LAB_107b12774;
          }
        }
      }
      else {
        puVar37 = puVar33;
        func_0x00010c252d60();
        if (((int)puVar37 != 1) || (puVar37 = puVar33, func_0x00010bfdcc60(), (int)puVar37 == 0))
        goto LAB_107b12780;
        lStack_5e0 = lVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if ((lStack_5e0 != 0) && (lVar14 = lStack_5e0, func_0x000100bf119c(), (int)lVar14 != 0)) {
          func_0x00010c0ad380(uVar3);
          goto LAB_107b12774;
        }
        lVar14 = lStack_5e0;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar14;
        func_0x00010c08fa60();
        if (lVar15 == 0) {
          func_0x00010c0b22e0(uVar3);
        }
        else {
          func_0x00010c2592e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c259d00(puVar33);
          func_0x00010c150c20(puVar33);
          puVar37 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar9);
          _objc_release(puVar37);
          puVar37 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df740(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar10);
          _objc_release(puVar37);
          puVar37 = puVar33;
          func_0x00010bf31ee0();
          if ((int)puVar37 == 4) {
            puVar37 = puVar33;
            func_0x00010c11ab00();
            _objc_retainAutoreleasedReturnValue();
            lVar15 = lStack_5e0;
            func_0x00010bf1bae0();
            _objc_retainAutoreleasedReturnValue();
            lVar16 = lVar15;
            func_0x00010bf1acc0();
            _objc_retainAutoreleasedReturnValue();
            lVar17 = lStack_5e0;
            func_0x00010bf1bae0();
            _objc_retainAutoreleasedReturnValue();
            lVar18 = lVar17;
            func_0x00010bf1c0a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(param_2);
            _objc_retain(puVar37);
            _objc_retain(lVar13);
            _objc_retain(puVar29);
            _objc_retain(lVar14);
            _objc_retain(uVar3);
            _objc_retain(uVar30);
            _objc_retain(lVar16);
            _objc_retain(lVar18);
            puVar19 = puVar37;
            func_0x00010bfd91a0();
            puVar34 = PTR____NSArray0__struct_11034ab48;
            if ((int)puVar19 != 0) {
              puVar19 = puVar37;
              func_0x00010c0cc0c0();
              _objc_retainAutoreleasedReturnValue();
              puVar34 = puVar37;
              func_0x00010bfd7420();
              if (((ulong)puVar34 & 1) == 0) {
                func_0x00010c0b2280(uVar3);
LAB_107b12180:
                uStack_684 = 0;
LAB_107b12184:
                func_0x00010bfdcd00(puVar19);
                puVar34 = puVar37;
                func_0x00010c2456a0();
                _objc_retainAutoreleasedReturnValue();
                lVar23 = lVar13;
                func_0x00010c25b340(lVar13);
                _objc_retainAutoreleasedReturnValue();
                puVar20 = puVar19;
                func_0x00010c25b540(puVar19);
                _objc_retainAutoreleasedReturnValue();
                puVar21 = puVar34;
                func_0x000108f0d2d4(puVar34,lVar23,puVar20,puVar29,lVar14,lVar16,lVar18,uStack_684);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar20);
                _objc_release(lVar23);
                _objc_release(puVar34);
                puVar20 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
                func_0x00010c1607a0();
                _objc_retainAutoreleasedReturnValue();
                puVar22 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
                func_0x00010c1607a0();
                _objc_retainAutoreleasedReturnValue();
                lVar24 = lVar13;
                func_0x00010c25b340();
                _objc_retainAutoreleasedReturnValue();
                lVar23 = lVar24;
                func_0x00010bf52a60();
                lVar27 = lRam0000000000000000;
                while (lVar23 != 0) {
                  lVar35 = 0;
                  do {
                    if (lRam0000000000000000 != lVar27) {
                      _objc_enumerationMutation(lVar24);
                    }
                    lVar38 = *(long *)(lVar35 * 8);
                    lVar25 = lVar38;
                    func_0x00010c15f2e0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar26 = lVar25;
                    func_0x00010c08fa60();
                    _objc_release(lVar25);
                    if (lVar26 != 0) {
                      func_0x00010c15f2e0(lVar38);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010befa120(puVar20);
                      _objc_release(lVar38);
                    }
                    lVar35 = lVar35 + 1;
                  } while (lVar23 != lVar35);
                  lVar23 = lVar24;
                  func_0x00010bf52a60();
                }
                _objc_release(lVar24);
                _objc_retain(puVar21);
                puVar34 = puVar21;
                func_0x00010bf52a60();
                lVar23 = lRam0000000000000000;
                while (puVar34 != (undefined *)0x0) {
                  puVar36 = (undefined *)0x0;
                  do {
                    if (lRam0000000000000000 != lVar23) {
                      _objc_enumerationMutation(puVar21);
                    }
                    lVar35 = *(long *)((long)puVar36 * 8);
                    lVar27 = lVar35;
                    func_0x00010c15f2e0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar24 = lVar27;
                    func_0x00010c08fa60();
                    _objc_release(lVar27);
                    if (lVar24 != 0) {
                      func_0x00010c15f2e0(lVar35);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010befa120(puVar22);
                      _objc_release(lVar35);
                    }
                    puVar36 = puVar36 + 1;
                  } while (puVar34 != puVar36);
                  puVar34 = puVar21;
                  func_0x00010bf52a60();
                }
                _objc_release(puVar21);
                _objc_retain(puVar20);
                puVar34 = puVar20;
                func_0x00010bf52a60();
                lVar23 = lRam0000000000000000;
                while (puVar34 != (undefined *)0x0) {
                  puVar36 = (undefined *)0x0;
                  do {
                    if (lRam0000000000000000 != lVar23) {
                      _objc_enumerationMutation(puVar20);
                    }
                    func_0x00010bf4b900(puVar22);
                    puVar36 = puVar36 + 1;
                  } while (puVar34 != puVar36);
                  puVar34 = puVar20;
                  func_0x00010bf52a60();
                }
                _objc_release(puVar20);
                _objc_retain(puVar22);
                puVar34 = puVar22;
                func_0x00010bf52a60();
                lVar23 = lRam0000000000000000;
                while (puVar34 != (undefined *)0x0) {
                  puVar36 = (undefined *)0x0;
                  do {
                    if (lRam0000000000000000 != lVar23) {
                      _objc_enumerationMutation(puVar22);
                    }
                    func_0x00010bf4b900(puVar20);
                    puVar36 = puVar36 + 1;
                  } while (puVar34 != puVar36);
                  puVar34 = puVar22;
                  func_0x00010bf52a60();
                }
                _objc_release(puVar22);
                func_0x00010c0b22c0(uVar3);
                if (lVar13 == 0) {
                  puVar34 = PTR_PTR_1126d5c20;
                  _objc_alloc(PTR_PTR_1126d5c20);
                  func_0x00010c05bc60();
                  puVar36 = PTR_PTR_1126d67d0;
                  func_0x00010851b2c0(PTR_PTR_1126d67d0,puVar34);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar34);
                }
                else {
                  puVar36 = PTR_PTR_1126d67d0;
                  func_0x00010851b4f8();
                  _objc_retainAutoreleasedReturnValue();
                }
                _objc_retain(&PTR___NSConcreteGlobalBlock_110a4fa40);
                puVar34 = puVar21;
                func_0x00010c246ca0(puVar21);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar21);
                _objc_release(&PTR___NSConcreteGlobalBlock_110a4fa40);
                if (puVar36 != (undefined *)0x0) {
                  _objc_setProperty_nonatomic_copy(puVar36);
                }
                puVar21 = puVar37;
                func_0x00010bfb68a0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c15e640();
                _objc_release(puVar21);
                lVar23 = lVar13;
                func_0x00010c15e620();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c08b1c0();
                _objc_release(lVar23);
                puVar21 = PTR_PTR_1126d6790;
                _objc_alloc(PTR_PTR_1126d6790);
                func_0x00010c021a40();
                if (puVar36 != (undefined *)0x0) {
                  _objc_setProperty_nonatomic_copy(puVar36);
                }
                _objc_release(puVar21);
                func_0x00010c25ed40(param_2);
                _objc_unsafeClaimAutoreleasedReturnValue();
                _objc_release(puVar36);
                _objc_release(puVar22);
                _objc_release(puVar20);
              }
              else {
                puVar34 = puVar37;
                func_0x00010bfb68a0();
                _objc_retainAutoreleasedReturnValue();
                puVar20 = puVar34;
                func_0x00010c15e580();
                puVar21 = puVar37;
                func_0x00010bfb68a0();
                _objc_retainAutoreleasedReturnValue();
                puVar22 = puVar21;
                func_0x00010c15e660();
                _objc_release(puVar21);
                _objc_release(puVar34);
                func_0x00010c0b2280(uVar3);
                if ((long)puVar20 <= (long)puVar22) goto LAB_107b12180;
                puVar20 = puVar37;
                func_0x00010c2456c0();
                puVar34 = (undefined *)0x0;
                if ((lVar13 != 0) && (puVar20 != (undefined *)0x0)) {
                  uStack_684 = 1;
                  goto LAB_107b12184;
                }
              }
              _objc_release(puVar19);
            }
            _objc_release(lVar18);
            _objc_release(lVar16);
            _objc_release(uVar30);
            _objc_release(uVar3);
            _objc_release(lVar14);
            _objc_release(puVar29);
            _objc_release(lVar13);
            _objc_release(puVar37);
            _objc_release(param_2);
            func_0x00010c1d0640(puVar7);
            _objc_release(puVar34);
            _objc_release(lVar18);
            _objc_release(lVar17);
            _objc_release(lVar16);
            _objc_release(lVar15);
            _objc_release(puVar37);
          }
          _objc_release(puVar33);
        }
        _objc_release(lVar14);
LAB_107b12774:
        _objc_release(lStack_5e0);
      }
LAB_107b12780:
      _objc_release(lVar13);
      _objc_release(puVar29);
      lVar32 = lVar32 + 1;
    } while (lVar32 != lVar12);
    lVar12 = lVar11;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107b12f70; end: 107b13263; -[SCPublicUserStoriesSyncer _batchStoryLookupRequestWithUserIds:ignoreBlockerStories:] */

void FUN_107b12f70(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be11060();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d5c48;
  _objc_opt_new();
  puVar9 = puVar3;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar3);
  _objc_release(puVar9);
  func_0x00010c1d64a0(puVar3);
  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar3);
  _objc_release(puVar9);
  func_0x00010be90b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cd40(puVar3);
  _objc_release(param_1);
  func_0x00010c1a9c80(puVar3);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar12 = *(undefined8 *)(lVar11 * 8);
      puVar5 = PTR_PTR_1126c0dd8;
      _objc_opt_new(PTR_PTR_1126c0dd8);
      func_0x000108f139ec(uVar12,0x11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1805c0(puVar5);
      _objc_release(uVar12);
      lVar6 = lVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c067fc0();
      _objc_release(lVar6);
      if (0 < lVar7) {
        puVar8 = PTR_PTR_1126d67d8;
        _objc_opt_new(PTR_PTR_1126d67d8);
        func_0x00010c1fcec0();
        func_0x00010c1fcf60(puVar8);
        func_0x00010c18bae0(puVar5);
        _objc_release(puVar8);
      }
      func_0x00010befa120(puVar9);
      _objc_release(puVar5);
      lVar11 = lVar11 + 1;
    } while (lVar4 != lVar11);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar5 = puVar9;
  func_0x00010bf51e00(puVar9);
  puVar8 = puVar5;
  func_0x00010c1ebde0(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar9);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    puVar9 = *(undefined **)(param_3 + 8);
    func_0x0001084e6550(puVar9,puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    func_0x00010bd869d0();
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107b13264; end: 107b1330f; -[SCPublicUserStoriesSyncer _fetchExistingUserIdToSequenceMappingWithUserIds:] */

void FUN_107b13264(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x0001084e6550(uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bd869d0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107b13310; end: 107b1331b; -[SCPublicUserStoriesSyncer _requestClientInfo] */

void FUN_107b13310(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126c0e20;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar4);
  _objc_retain(uVar1);
  _objc_opt_new(puVar2);
  func_0x000108f1337c();
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126aed60;
  func_0x00010c15fac0(PTR_PTR_1126aed60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a4e0();
  func_0x00010c206a80(puVar2);
  _objc_release(puVar3);
  uVar4 = uVar1;
  func_0x000108f136bc(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c180e80(puVar2);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf88860();
  _objc_release(puVar3);
  if (puVar5 != (undefined *)0xffffffffffffffff) {
    puVar3 = PTR_PTR_1126b7410;
    func_0x00010c22b6a0(PTR_PTR_1126b7410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf88860();
    puVar5 = puVar2;
    func_0x00010bf48c80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16eee0();
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  func_0x000108f137cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c9e0(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b1331c; end: 107b1339f; -[SCPublicUserStoriesSyncer .cxx_destruct] */

void FUN_107b1331c(long param_1)

{
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



/* Entry: 107b133a0; end: 107b13b73;  */

long FUN_107b133a0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  int param_9,undefined4 param_10,double *param_11)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  double dVar24;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar21 = param_1;
  func_0x00010bfa3f40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar21;
  func_0x00010bfa4340();
  _objc_release(lVar21);
  if (((int)lVar1 == param_9) && (lVar21 = param_1, func_0x00010bfd9ca0(), (int)lVar21 != 0)) {
    lVar21 = param_1;
    func_0x00010c0ece40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar21;
    func_0x00010bf32240();
    if (lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lVar9 = lVar21;
      func_0x00010bf32220();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      if (lVar10 == 0) {
        dVar24 = 0.0;
      }
      else {
        dVar24 = 0.0;
        do {
          lVar20 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar9);
            }
            lVar23 = *(long *)(lVar20 * 8);
            lVar11 = lVar23;
            func_0x00010bfd58a0();
            if ((int)lVar11 != 0) {
              lVar11 = lVar23;
              func_0x00010bf454e0();
              _objc_retainAutoreleasedReturnValue();
              lVar12 = lVar11;
              func_0x00010bf52680();
              _objc_release(lVar11);
              lVar11 = lVar23;
              func_0x00010bf454e0();
              _objc_retainAutoreleasedReturnValue();
              if ((int)lVar12 == 0x1a) {
                lVar12 = lVar11;
                func_0x00010bfe5ea0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar11);
                func_0x00010befa120(puVar2);
                func_0x00010befa120(puVar4);
                lVar11 = lVar23;
                func_0x00010c293b00();
                _objc_retainAutoreleasedReturnValue();
                lVar16 = lVar11;
                FUN_107b13b74();
                _objc_release(lVar11);
                if ((int)lVar16 != 0) {
                  func_0x00010befa120(puVar6);
                }
                lVar11 = lVar23;
                func_0x00010c293b00();
                _objc_retainAutoreleasedReturnValue();
                lVar16 = lVar11;
                func_0x00010bfb68a0();
                _objc_retainAutoreleasedReturnValue();
                lVar19 = lVar16;
                func_0x00010c15e5a0();
                _objc_release(lVar16);
                _objc_release(lVar11);
joined_r0x000107b139c8:
                if (dVar24 < (double)lVar19) {
                  func_0x00010c293b00();
                  _objc_retainAutoreleasedReturnValue();
                  lVar11 = lVar23;
                  func_0x00010bfb68a0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar16 = lVar11;
                  func_0x00010c15e5a0();
                  dVar24 = (double)lVar16;
                  _objc_release(lVar11);
LAB_107b139e4:
                  _objc_release(lVar23);
                }
              }
              else {
                lVar12 = lVar11;
                func_0x00010bf52680();
                _objc_release(lVar11);
                lVar11 = lVar23;
                func_0x00010bf454e0();
                _objc_retainAutoreleasedReturnValue();
                if ((int)lVar12 != 0x1e) {
                  lVar12 = lVar11;
                  func_0x00010bf52680();
                  _objc_release(lVar11);
                  if ((int)lVar12 != 0x11) goto LAB_107b139f4;
                  lVar11 = lVar23;
                  func_0x00010bf454e0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar12 = lVar11;
                  func_0x00010bfe5ea0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar11);
                  func_0x00010befa120(puVar3);
                  func_0x00010befa120(puVar4);
                  lVar11 = lVar23;
                  func_0x00010c293b00();
                  _objc_retainAutoreleasedReturnValue();
                  lVar16 = lVar11;
                  FUN_107b13b74();
                  _objc_release(lVar11);
                  if ((int)lVar16 != 0) {
                    func_0x00010befa120(puVar8);
                  }
                  lVar11 = lVar23;
                  func_0x00010c293b00();
                  _objc_retainAutoreleasedReturnValue();
                  lVar16 = lVar11;
                  func_0x00010bfb68a0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar19 = lVar16;
                  func_0x00010c15e5a0();
                  _objc_release(lVar16);
                  _objc_release(lVar11);
                  goto joined_r0x000107b139c8;
                }
                lVar12 = lVar11;
                func_0x00010bfe5ea0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar5);
                _objc_release(lVar12);
                _objc_release(lVar11);
                lVar11 = lVar23;
                func_0x00010c293b00();
                _objc_retainAutoreleasedReturnValue();
                lVar12 = lVar11;
                FUN_107b13b74();
                _objc_release(lVar11);
                if ((int)lVar12 != 0) {
                  lVar11 = lVar23;
                  func_0x00010bf454e0(lVar23);
                  _objc_retainAutoreleasedReturnValue();
                  lVar12 = lVar11;
                  func_0x00010bfe5ea0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar7);
                  _objc_release(lVar12);
                  _objc_release(lVar11);
                }
                lVar11 = lVar23;
                func_0x00010c293b00();
                _objc_retainAutoreleasedReturnValue();
                lVar12 = lVar11;
                func_0x00010bfb68a0();
                _objc_retainAutoreleasedReturnValue();
                lVar16 = lVar12;
                func_0x00010c15e5a0();
                _objc_release(lVar12);
                _objc_release(lVar11);
                if (dVar24 < (double)lVar16) {
                  lVar11 = lVar23;
                  func_0x00010c293b00();
                  _objc_retainAutoreleasedReturnValue();
                  lVar12 = lVar11;
                  func_0x00010bfb68a0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar16 = lVar12;
                  func_0x00010c15e5a0();
                  dVar24 = (double)lVar16;
                  _objc_release(lVar12);
                  _objc_release(lVar11);
                }
                func_0x00010c293b00();
                _objc_retainAutoreleasedReturnValue();
                lVar11 = lVar23;
                func_0x00010c2456c0();
                lVar12 = lVar23;
                if (lVar11 != 0) {
                  func_0x00010c2456a0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar11 = lVar23;
                  func_0x00010bf52a60();
                  lVar16 = lRam0000000000000000;
                  while (lVar11 != 0) {
                    lVar19 = 0;
                    do {
                      if (lRam0000000000000000 != lVar16) {
                        _objc_enumerationMutation(lVar23);
                      }
                      lVar22 = *(long *)(lVar19 * 8);
                      lVar13 = lVar22;
                      func_0x00010bf5b480();
                      _objc_retainAutoreleasedReturnValue();
                      lVar14 = lVar13;
                      func_0x00010c2923e0();
                      _objc_retainAutoreleasedReturnValue();
                      lVar15 = lVar14;
                      func_0x00010c08fa60();
                      _objc_release(lVar14);
                      _objc_release(lVar13);
                      if (lVar15 != 0) {
                        func_0x00010bf5b480(lVar22);
                        _objc_retainAutoreleasedReturnValue();
                        lVar13 = lVar22;
                        func_0x00010c2923e0();
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010befa120(puVar4);
                        _objc_release(lVar13);
                        _objc_release(lVar22);
                      }
                      lVar19 = lVar19 + 1;
                    } while (lVar11 != lVar19);
                    lVar11 = lVar23;
                    func_0x00010bf52a60();
                  }
                  goto LAB_107b139e4;
                }
              }
              _objc_release(lVar12);
            }
LAB_107b139f4:
            lVar20 = lVar20 + 1;
          } while (lVar20 != lVar10);
          lVar10 = lVar9;
          func_0x00010bf52a60();
        } while (lVar10 != 0);
      }
      _objc_release(lVar9);
      if (param_2 != (undefined8 *)0x0) {
        puVar17 = puVar2;
        func_0x00010bf51e00();
        _objc_autorelease();
        *param_2 = puVar17;
      }
      if (param_3 != (undefined8 *)0x0) {
        puVar17 = puVar4;
        func_0x00010bf00560();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_3 = puVar17;
      }
      if (param_4 != (undefined8 *)0x0) {
        puVar17 = puVar5;
        func_0x00010bf51e00();
        _objc_autorelease();
        *param_4 = puVar17;
      }
      if (param_5 != (undefined8 *)0x0) {
        puVar17 = puVar3;
        func_0x00010bf51e00();
        _objc_autorelease();
        *param_5 = puVar17;
      }
      if (param_6 != (undefined8 *)0x0) {
        puVar17 = puVar6;
        func_0x00010bf51e00();
        _objc_autorelease();
        *param_6 = puVar17;
      }
      if (param_7 != (undefined8 *)0x0) {
        puVar17 = puVar7;
        func_0x00010bf51e00();
        _objc_autorelease();
        *param_7 = puVar17;
      }
      if (param_8 != (undefined8 *)0x0) {
        puVar17 = puVar8;
        func_0x00010bf51e00();
        _objc_autorelease();
        *param_8 = puVar17;
      }
      *param_11 = dVar24;
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(lVar21);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain();
  lVar21 = param_1;
  func_0x00010bfd7420();
  if ((int)lVar21 != 0) {
    lVar21 = param_1;
    func_0x00010bfb68a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar21;
    func_0x00010c15e580();
    lVar18 = param_1;
    func_0x00010bfb68a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar18;
    func_0x00010c15e660();
    _objc_release(lVar18);
    _objc_release(lVar21);
    if ((lVar9 < lVar1) && (lVar21 = param_1, func_0x00010c2456c0(), lVar21 == 0)) {
      lVar21 = 0;
      goto LAB_107b13bfc;
    }
  }
  lVar21 = 1;
LAB_107b13bfc:
  _objc_release(param_1);
  return lVar21;
}



/* Entry: 107b13b74; end: 107b13c23;  */

undefined8 FUN_107b13b74(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bfd7420();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bfb68a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c15e580();
    lVar3 = param_1;
    func_0x00010bfb68a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c15e660();
    _objc_release(lVar3);
    _objc_release(lVar1);
    if ((lVar4 < lVar2) && (lVar1 = param_1, func_0x00010c2456c0(), lVar1 == 0)) {
      uVar5 = 0;
      goto LAB_107b13bfc;
    }
  }
  uVar5 = 1;
LAB_107b13bfc:
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 107b13c24; end: 107b13d07; -[SCStoriesCachedPropertiesCoordinator setLastResponseMetaInfosByFeedType:] */

void FUN_107b13c24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  func_0x00010c14ac00(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107b13d08; end: 107b13d4f;  */

void FUN_107b13d08(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b13d50; end: 107b13e63; -[SCStoriesCachedPropertiesCoordinator lastResponseMetaInfosByFeedType] */

void FUN_107b13d50(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = &uStack_68;
  uStack_68 = 0;
  uStack_58 = 0x3032000000;
  pcStack_50 = FUN_107b13e64;
  uStack_48 = 0x107b13e74;
  uStack_40 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_70,auStack_38);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_60[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_70);
  __Block_object_dispose(&uStack_68,8);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b13e64; end: 107b13e7b;  */

void FUN_107b13e64(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107b13e7c; end: 107b13ecb;  */

void FUN_107b13e7c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    func_0x00010bf51e00();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b13ecc; end: 107b13f83; -[SCStoriesCachedPropertiesCoordinator _saveMetaInfoToDisk] */

void FUN_107b13ecc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107b13f84;
  puStack_40 = &UNK_11085adb8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar2;
  _objc_retain();
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500(uVar1,param_2,&puStack_58,uVar3,0);
  _objc_release(uVar3);
  _objc_release(uStack_38);
  _objc_release(uVar2);
  return;
}



/* Entry: 107b13f84; end: 107b1408f;  */

void FUN_107b13f84(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar6 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar8 = *(long *)(param_1 + 0x20);
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
        func_0x0001084e7a10(param_2,*(undefined8 *)(lStack_108 + lVar10 * 8));
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar8;
      puVar6 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(puVar6);
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d67e0;
  _objc_alloc();
  func_0x00010c067ec0(puVar6);
  func_0x00010c0127a0();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar6);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  *(undefined **)(param_2 + 0x18) = puVar4;
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 8);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(puVar3);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500(uVar7);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 107b14090; end: 107b141cb; -[SCStoriesCachedPropertiesCoordinator _cleanPropertiesByFeedType:] */

void FUN_107b14090(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010bf72020(puVar1,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d67e0;
  _objc_alloc();
  uVar5 = param_3;
  func_0x00010c067ec0(param_3);
  func_0x00010c0127a0(puVar2,param_2,(long)(int)uVar5,0);
  func_0x00010c1d0640(puVar1,param_2,puVar2,param_3);
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar3;
  _objc_release(uVar5);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107b141cc;
  puStack_40 = &UNK_11085adb8;
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  puStack_38 = puVar2;
  _objc_retain(puVar2);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500(uVar5,param_2,&puStack_58,uVar4,0);
  _objc_release(uVar4);
  _objc_release(puStack_38);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 107b141cc; end: 107b141db;  */

void FUN_107b141cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  func_0x000108521d30(uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b141dc; end: 107b14233; -[SCStoriesCachedPropertiesCoordinator savePropertiesToDisk] */

void FUN_107b141dc(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107b14234;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 107b14234; end: 107b1423b;  */

void FUN_107b14234(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be99650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__saveMetaInfoToDisk_112583f30);
  return;
}



/* Entry: 107b1423c; end: 107b142cb; -[SCStoriesCachedPropertiesCoordinator cleanPropertiesByFeedType:] */

void FUN_107b1423c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107b142cc;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107b142cc; end: 107b142d7;  */

void FUN_107b142cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddef70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__cleanPropertiesByFeedType__112555578,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107b142d8; end: 107b14313; -[SCStoriesCachedPropertiesCoordinator .cxx_destruct] */

void FUN_107b142d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107b14314; end: 107b1439b; -[SCStoriesDataCoordinator rankedStoryIdsWithCompletion:] */

void FUN_107b14314(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107b1439c;
  puStack_30 = &UNK_110859310;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c11f8c0(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}


