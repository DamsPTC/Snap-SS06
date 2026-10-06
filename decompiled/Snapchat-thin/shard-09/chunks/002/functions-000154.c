/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ae1efc; end: 106ae1f03; -[SCBlizzardUploadManager backgroundUploadContexts] */

undefined8 FUN_106ae1efc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106ae1f04; end: 106ae1f33; -[SCBlizzardUploadManager setBackgroundUploadContexts:] */

void FUN_106ae1f04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae1f34; end: 106ae1f3b; -[SCBlizzardUploadManager activeBackgroundUploadFilenames] */

undefined8 FUN_106ae1f34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 106ae1f3c; end: 106ae1f6b; -[SCBlizzardUploadManager setActiveBackgroundUploadFilenames:] */

void FUN_106ae1f3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae1f6c; end: 106ae1f77; -[SCBlizzardUploadManager activeFilenamesFetchComplete] */

byte FUN_106ae1f6c(long param_1)

{
  return *(byte *)(param_1 + 9) & 1;
}



/* Entry: 106ae1f78; end: 106ae1f7f; -[SCBlizzardUploadManager setActiveFilenamesFetchComplete:] */

void FUN_106ae1f78(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 106ae1f80; end: 106ae2057; -[SCBlizzardUploadManager .cxx_destruct] */

void FUN_106ae1f80(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106ae2058; end: 106ae205f; -[SCBlizzardPageViewState pageChangeTs] */

undefined8 FUN_106ae2058(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ae2060; end: 106ae2093; -[SCBlizzardRtusEventIdProvider getEventIdFromSessionId:logQueueName:logQueueSequenceId:] */

void FUN_106ae2060(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e6e618);
  return;
}



/* Entry: 106ae2094; end: 106ae20a3; -[SCBlizzardRtusEventRouter _reportSessionIdNilErrorForEvent:] */

void FUN_106ae2094(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar4 = *(long *)(param_1 + 8);
  puVar7 = (undefined1 *)0x1;
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  if (lVar4 != 0) {
    plVar8 = *(long **)(lVar4 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11095d500;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11095d500,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = (undefined1 *)puVar6;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_106aca750;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar5 = &UNK_11095d550;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11095d550,&uStack_100,puVar7);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_106aca8c4;
  if (puVar3 != (undefined *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    puStack_120 = puVar2;
    puStack_118 = puVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11095d5a0,&uStack_140,puVar5);
    func_0x00010007e5dc(&puStack_128);
  }
  return;
}



/* Entry: 106ae20a4; end: 106ae20f7; -[SCBlizzardRtusEventRouter _reportClientCacheManagerNilForRtusEvent:] */

void FUN_106ae20a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bfcde60(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_106aca750();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ae20f8; end: 106ae232f; -[SCBlizzardRtusEventRouter _routeRtusEventToProductQueues:eventProperties:eventId:clientTs:] */

void FUN_106ae20f8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfc89c0();
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfc9200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar2);
  puVar13 = &uStack_130;
  puVar14 = auStack_f0;
  uVar15 = 0x10;
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,puVar13,puVar14,0x10);
  if (lVar1 != 0) {
    lVar16 = *plStack_120;
    do {
      lVar17 = 0;
      do {
        if (*plStack_120 != lVar16) {
          _objc_enumerationMutation(lVar2);
        }
        uVar15 = *(undefined8 *)(lStack_128 + lVar17 * 8);
        func_0x00010c067fc0();
        uVar3 = *(ulong *)(param_1 + 0x18);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c07b360();
        _objc_release(uVar3);
        if ((uVar4 & 1) == 0) {
          uVar5 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c22dca0();
          _objc_release(uVar5);
          if ((int)uVar6 != 0) {
            lVar7 = param_1;
            func_0x00010be22380(param_1,param_2,param_3,param_5,param_6,uVar15);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = *(undefined8 *)(param_1 + 0x20);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befaca0();
            _objc_release(uVar8);
            _objc_release(lVar7);
            uVar8 = uVar15;
          }
        }
        lVar17 = lVar17 + 1;
      } while (lVar1 != lVar17);
      puVar13 = &uStack_130;
      puVar14 = auStack_f0;
      uVar15 = 0x10;
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,puVar13,puVar14,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar15);
  _objc_retain(puVar14);
  _objc_retain(puVar13);
  puVar9 = puVar13;
  func_0x00010bfc89c0(puVar13);
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfc5840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar10 = PTR_PTR_1126d0510;
  _objc_alloc(PTR_PTR_1126d0510);
  puVar11 = puVar13;
  func_0x00010bfc52e0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar13;
  func_0x00010c272040(puVar13,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  func_0x00010c010c40(puVar10,param_2,puVar11,puVar14,uVar8,puVar12,puVar9,uVar15);
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106ae2330; end: 106ae2467; -[SCBlizzardRtusEventRouter _getRtusEventFromEventBase:eventId:clientTs:product:] */

void FUN_106ae2330(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfc89c0(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc5840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126d0510;
  _objc_alloc(PTR_PTR_1126d0510);
  uVar2 = param_3;
  func_0x00010bfc52e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c272040(param_3,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c010c40(puVar4,param_2,uVar2,param_4,param_6,uVar5,uVar1,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106ae2468; end: 106ae246f; -[SCBlizzardRtusEventRouter graphene] */

undefined8 FUN_106ae2468(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106ae2470; end: 106ae249f; -[SCBlizzardRtusEventRouter setGraphene:] */

void FUN_106ae2470(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ae24a0; end: 106ae24a7; -[SCBlizzardRtusEventRouter rtusEventIdProvider] */

undefined8 FUN_106ae24a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ae24a8; end: 106ae24d7; -[SCBlizzardRtusEventRouter setRtusEventIdProvider:] */

void FUN_106ae24a8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ae24d8; end: 106ae24df; -[SCBlizzardRtusEventRouter rtusConfigProvider] */

undefined8 FUN_106ae24d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ae24e0; end: 106ae250f; -[SCBlizzardRtusEventRouter setRtusConfigProvider:] */

void FUN_106ae24e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae2510; end: 106ae2517; -[SCBlizzardRtusEventRouter rtusClientCacheManager] */

undefined8 FUN_106ae2510(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106ae2518; end: 106ae258f; -[SCBlizzardRtusEventRouter .cxx_destruct] */

void FUN_106ae2518(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ae2590; end: 106ae25e3; +[SCBlizzard registerEventObserver:] */

void FUN_106ae2590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d0540;
  _objc_retain(param_3);
  func_0x00010c22ba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1263c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ae25e4; end: 106ae260f; +[SCBlizzard uploaderForSpectrum] */

void FUN_106ae25e4(void)

{
  undefined8 uVar1;
  
  uVar1 = uRam00000001136c4b98;
  _objc_retain(uRam00000001136c4b98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ae2610; end: 106ae263b; +[SCBlizzard uploaderForBlizzard] */

void FUN_106ae2610(void)

{
  undefined8 uVar1;
  
  uVar1 = uRam00000001136c4b90;
  _objc_retain(uRam00000001136c4b90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ae263c; end: 106ae2643; -[SCBlizzardABEventManager resetCache] */

void FUN_106ae263c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1383d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetCacheWithUserGuid__11262bb10,0);
  return;
}



/* Entry: 106ae2644; end: 106ae2763; -[SCBlizzardABEventManager resetCacheWithUserGuid:] */

void FUN_106ae2644(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c197de0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bf70780();
  if (((uVar2 & 1) == 0) && (param_3 == 0)) {
    puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
    func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0();
    _objc_release(puVar1);
  }
  else {
    lVar3 = param_1;
    func_0x00010bf9a560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(lVar3);
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf9a560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(lVar3);
    _objc_release(puVar1);
    func_0x00010c257580(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ae2764; end: 106ae27cb; -[SCBlizzardABEventManager storeCache] */

void FUN_106ae2764(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9a560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,param_1,&PTR____CFConstantStringClassReference_110e6e698);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ae27cc; end: 106ae27d3; -[SCBlizzardABEventManager experimentProvider] */

undefined8 FUN_106ae27cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106ae27d4; end: 106ae2803; -[SCBlizzardABEventManager .cxx_destruct] */

void FUN_106ae27d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ae2804; end: 106ae2807; -[SCBlizzardSamplingProvider willLogEventsOfType:] */

void FUN_106ae2804(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb45f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__shouldLogEventForUserSampling__11258ab20);
  return;
}



/* Entry: 106ae2808; end: 106ae287f; -[SCBlizzardSamplingProvider _shouldLogSpectrumEventForUserSampling:] */

undefined8 FUN_106ae2808(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf9a4a0(param_4);
  if ((param_1 == 0.0) || (func_0x00010bf9a4a0(param_4), param_1 == 1.0)) {
    param_2 = 1;
  }
  else {
    func_0x00010beb4620(param_1 * 100.0,param_2);
  }
  _objc_release(param_4);
  return param_2;
}



/* Entry: 106ae2880; end: 106ae28ab; -[SCBlizzardSamplingProvider _randomFloatValueBetweenZeroAndOne] */

double FUN_106ae2880(void)

{
  ulong uVar1;
  
  uVar1 = 100000000;
  _arc4random_uniform(100000000);
  return (double)(uVar1 & 0xffffffff) / 100000000.0;
}



/* Entry: 106ae28ac; end: 106ae28db; -[SCBlizzardSamplingProvider .cxx_destruct] */

void FUN_106ae28ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ae28dc; end: 106ae29cb; -[SCBlizzardSamplingRateResolver initWithCms:fallbackSamplingConfig:policyCache:graphene:] */

undefined1 *
FUN_106ae28dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f4c50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    func_0x00010c1a4320(puVar1);
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ae29cc; end: 106ae29d3; -[SCBlizzardSamplingRateResolver graphene] */

undefined8 FUN_106ae29cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106ae29d4; end: 106ae2a23; -[SCBlizzardSamplingRateResolver .cxx_destruct] */

void FUN_106ae29d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106ae2a24; end: 106ae2a8b; +[SCBlizzardSessionIdProvider removeAllSessionIdDidChangeHandlers] */

void FUN_106ae2a24(void)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(0x1136c4ba8);
  uVar1 = uRam00000001136c4bb0;
  func_0x00010bf51e00(uRam00000001136c4bb0);
  func_0x00010c12adc0(uRam00000001136c4bb0);
  _os_unfair_lock_unlock(0x1136c4ba8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae2a8c; end: 106ae2a93; -[SCBlizzardSessionIdProvider experimentProvider] */

undefined8 FUN_106ae2a8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ae2a94; end: 106ae2a9b; -[SCBlizzardSessionIdProvider isFirstStart] */

undefined1 FUN_106ae2a94(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 106ae2a9c; end: 106ae2aa3; -[SCBlizzardSessionIdProvider setIsFirstStart:] */

void FUN_106ae2a9c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 106ae2aa4; end: 106ae2ad3; -[SCBlizzardSessionIdProvider .cxx_destruct] */

void FUN_106ae2aa4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106ae2ad4; end: 106ae2adb; -[SCBlizzardSessionLogger graphene] */

undefined8 FUN_106ae2ad4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ae2adc; end: 106ae2b17; -[SCBlizzardSessionLogger .cxx_destruct] */

void FUN_106ae2adc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ae2b18; end: 106ae2b23; -[SCBlizzardAppStateProvider .cxx_destruct] */

void FUN_106ae2b18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ae2b24; end: 106ae2b6b; -[SCBlizzardConnectivityStateProvider isConnectedToNetwork] */

void FUN_106ae2b24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf48f60();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c06f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ba4e8,PTR_s_isConnected__1125f9618,uVar2);
  return;
}



/* Entry: 106ae2b6c; end: 106ae2baf; -[SCBlizzardConnectivityStateProvider isConnectedViaWifi] */

bool FUN_106ae2b6c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf48f60();
  _objc_release(lVar1);
  return lVar2 == 2;
}



/* Entry: 106ae2bb0; end: 106ae2bf3; -[SCBlizzardConnectivityStateProvider isConnectedViaWWAN] */

bool FUN_106ae2bb0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf48f60();
  _objc_release(lVar1);
  return lVar2 == 1;
}



/* Entry: 106ae2bf4; end: 106ae2bff; -[SCBlizzardConnectivityStateProvider .cxx_destruct] */

void FUN_106ae2bf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ae2c00; end: 106ae2d2f;  */

void FUN_106ae2c00(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR____kCFBooleanFalse_11034ab60;
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf05fe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1f440();
    func_0x00010c0df6e0(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar4 = puVar3;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106ae2d30; end: 106ae2db3; -[SCBlizzardExperimentProvider dataPipelineHealthReportingEnabled] */

void FUN_106ae2d30(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf1f440();
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 106ae2db4; end: 106ae2e37; -[SCBlizzardExperimentProvider dataPipelineHealthSampleRate] */

void FUN_106ae2db4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c067f00();
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 106ae2e38; end: 106ae2ebb; -[SCBlizzardExperimentProvider dataPipelineHealthNonUserTrackedEventFix] */

void FUN_106ae2e38(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf1f440();
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 106ae2ebc; end: 106ae2efb; -[SCBlizzardExperimentProvider gpsFreshPullEnabled] */

undefined8 FUN_106ae2ebc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106ae2efc; end: 106ae2f3b; -[SCBlizzardExperimentProvider gpsFreshPullIntervalHours] */

undefined8 FUN_106ae2efc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106ae2f3c; end: 106ae2fbf; -[SCBlizzardExperimentProvider invariantChecksEnabled] */

void FUN_106ae2f3c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0xa0;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf1f440();
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 106ae2fc0; end: 106ae3037; -[SCBlizzardExperimentProvider invariantChecksBehavior] */

void FUN_106ae2fc0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 == 0) {
    lVar3 = param_1 + 0xa0;
    _objc_loadWeakRetained();
    lVar1 = lVar3;
    func_0x00010c25d780();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(long *)(param_1 + 0x50) = lVar1;
    _objc_release(uVar2);
    _objc_release(lVar3);
    lVar3 = *(long *)(param_1 + 0x50);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106ae3038; end: 106ae30ab; -[SCBlizzardExperimentProvider blizzardDiskFlushIntervalCheckEnabled] */

undefined1 FUN_106ae3038(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106ae30ac;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136c4c60 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136c4c60,&puStack_38);
  }
  return uRam00000001136c4c48;
}



/* Entry: 106ae30ac; end: 106ae30f3;  */

void FUN_106ae30ac(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0xa0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf1f440();
  uRam00000001136c4c48 = (undefined1)lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ae30f4; end: 106ae3183; -[SCBlizzardExperimentProvider backgroundDiskFlushIntervalSecs] */

void FUN_106ae30f4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x90);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0xa0;
    _objc_loadWeakRetained();
    func_0x00010c067f00();
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    *(undefined **)(param_1 + 0x90) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x90);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 106ae3184; end: 106ae3213; -[SCBlizzardExperimentProvider backgroundDiskFlushCountThreshold] */

void FUN_106ae3184(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x98);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0xa0;
    _objc_loadWeakRetained();
    func_0x00010c067f00();
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    *(undefined **)(param_1 + 0x98) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x98);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 106ae3214; end: 106ae3297; -[SCBlizzardExperimentProvider blizzardTier0ForegroundUrlSessionEnabled] */

void FUN_106ae3214(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf1f440();
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    *(undefined **)(param_1 + 0x80) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x80);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 106ae3298; end: 106ae32af; -[SCBlizzardExperimentProvider circumstanceEngine] */

void FUN_106ae3298(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ae32b0; end: 106ae32bb; -[SCBlizzardExperimentProvider setCircumstanceEngine:] */

void FUN_106ae32b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa0,param_3);
  return;
}



/* Entry: 106ae32bc; end: 106ae32c7; -[SCBlizzardExperimentProvider setAppStartExperimentReader:] */

void FUN_106ae32bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 106ae32c8; end: 106ae33d3; -[SCBlizzardExperimentProvider .cxx_destruct] */

void FUN_106ae32c8(long param_1)

{
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_destroyWeak(param_1 + 0xa0);
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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ae33d4; end: 106ae33db; -[SCBlizzardFilePaths setStorageRoot:] */

void FUN_106ae33d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106ae33dc; end: 106ae340b; -[SCBlizzardFilePaths setLibraryDirectory:] */

void FUN_106ae33dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae340c; end: 106ae3453; -[SCBlizzardFilePaths .cxx_destruct] */

void FUN_106ae340c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ae3454; end: 106ae3597; -[SCBlizzardPageViewStateManager _findNearestPageViewStateForActionTs:] */

long FUN_106ae3454(long param_1,undefined8 param_2)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 in_b0;
  undefined1 uVar9;
  undefined1 in_register_00005001;
  undefined1 uVar10;
  undefined1 in_register_00005002;
  undefined1 uVar11;
  undefined1 in_register_00005003;
  undefined1 uVar12;
  undefined1 in_register_00005004;
  undefined1 uVar13;
  undefined1 in_register_00005005;
  undefined1 uVar14;
  undefined1 in_register_00005006;
  undefined1 uVar15;
  undefined1 in_register_00005007;
  undefined1 uVar16;
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
  bVar3 = false;
  if (!NAN((double)CONCAT17(in_register_00005007,
                            CONCAT16(in_register_00005006,
                                     CONCAT15(in_register_00005005,
                                              CONCAT14(in_register_00005004,
                                                       CONCAT13(in_register_00005003,
                                                                CONCAT12(in_register_00005002,
                                                                         CONCAT11(
                                                  in_register_00005001,in_b0))))))))) {
    bVar3 = (double)CONCAT17(in_register_00005007,
                             CONCAT16(in_register_00005006,
                                      CONCAT15(in_register_00005005,
                                               CONCAT14(in_register_00005004,
                                                        CONCAT13(in_register_00005003,
                                                                 CONCAT12(in_register_00005002,
                                                                          CONCAT11(
                                                  in_register_00005001,in_b0))))))) == 0.0;
  }
  if (!bVar3) {
    dVar1 = (double)CONCAT17(in_register_00005007,
                             CONCAT16(in_register_00005006,
                                      CONCAT15(in_register_00005005,
                                               CONCAT14(in_register_00005004,
                                                        CONCAT13(in_register_00005003,
                                                                 CONCAT12(in_register_00005002,
                                                                          CONCAT11(
                                                  in_register_00005001,in_b0)))))));
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar4 = *(long *)(param_1 + 0x38);
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(lVar4);
          }
          lVar6 = *(long *)(lStack_128 + lVar8 * 8);
          func_0x00010c0f0ce0(lVar6);
          bVar2 = false;
          bVar3 = NAN((double)CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,
                                                  CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,
                                                  uVar9))))))));
          if (!NAN(dVar1) && !bVar3) {
            bVar2 = dVar1 < (double)CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,
                                                  CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,
                                                  uVar9)))))));
          }
          if (bVar2 == (NAN(dVar1) || bVar3)) {
            _objc_retain(lVar6);
            _objc_release();
            goto LAB_106ae3558;
          }
          lVar8 = lVar8 + 1;
        } while (lVar5 != lVar8);
        lVar5 = lVar4;
        func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar5 != 0);
    }
    _objc_release(lVar4);
  }
  lVar6 = *(long *)(param_1 + 0x28);
  lVar4 = lVar6;
  _objc_retain();
LAB_106ae3558:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
    return lVar6;
  }
  ___stack_chk_fail();
  return *(long *)(lVar4 + 0x28);
}



/* Entry: 106ae3598; end: 106ae359f; -[SCBlizzardPageViewStateManager currentPageViewState] */

undefined8 FUN_106ae3598(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106ae35a0; end: 106ae35cf; -[SCBlizzardPageViewStateManager setCurrentPageViewState:] */

void FUN_106ae35a0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ae35d0; end: 106ae35d7; -[SCBlizzardPageViewStateManager experimentProvider] */

undefined8 FUN_106ae35d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106ae35d8; end: 106ae3607; -[SCBlizzardPageViewStateManager setExperimentProvider:] */

void FUN_106ae35d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae3608; end: 106ae360f; -[SCBlizzardPageViewStateManager cachedPageViewStates] */

undefined8 FUN_106ae3608(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106ae3610; end: 106ae363f; -[SCBlizzardPageViewStateManager setCachedPageViewStates:] */

void FUN_106ae3610(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae3640; end: 106ae3693; -[SCBlizzardPageViewStateManager .cxx_destruct] */

void FUN_106ae3640(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ae3694; end: 106ae37c3; +[SCBlizzardUtils getDictionaryOfPopulatedFieldsFromObject:] */

void FUN_106ae3694(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined4 uStack_64;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar2 = param_3;
  _objc_opt_class();
  _class_copyIvarList();
  if (uStack_64 != 0) {
    uVar6 = 0;
    do {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _ivar_getName();
      func_0x00010c14de00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010c296f60();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        puVar5 = puVar3;
        func_0x00010c260c00(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puVar1);
        _objc_release(puVar5);
      }
      _objc_release(lVar4);
      _objc_release(puVar3);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uStack_64);
  }
  _free(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ae37c4; end: 106ae387f; +[SCBlizzardUtils camelCaseToUnderscoreString:] */

void FUN_106ae37c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  _objc_retain(param_3);
  func_0x00010c127e80(puVar1,param_2,&PTR____CFConstantStringClassReference_110e6ed78,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c08fa60(param_3);
  puVar3 = puVar1;
  func_0x00010c25cfa0(puVar1,param_2,param_3,0,0,uVar2,
                      &PTR____CFConstantStringClassReference_110e6ed98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010c0b5ac0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106ae3880; end: 106ae38a7; +[SCBlizzardUtils getBlizzardEventSourceString:] */

undefined ** FUN_106ae3880(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 1U < 3) {
    return (undefined **)(&PTR_PTR_11095f280)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e56878;
}



/* Entry: 106ae38a8; end: 106ae390f; +[Frame descriptor] */

void FUN_106ae38a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4c70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b12640,
                        &PTR____CFConstantStringClassReference_110e6ee18,&PTR_DAT_11316ef40,
                        &PTR_DAT_11316ef78,2,0x18,0x1c);
    puRam00000001136c4c70 = puVar1;
  }
  return;
}



/* Entry: 106ae3910; end: 106ae3977; +[EventEnvelope descriptor] */

void FUN_106ae3910(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4c78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b12690,
                        &PTR____CFConstantStringClassReference_110e6ee38,&PTR_DAT_11316ef40,
                        &PTR_DAT_11316f0f8,7,0x38,0x1c);
    puRam00000001136c4c78 = puVar1;
  }
  return;
}



/* Entry: 106ae3978; end: 106ae39f3; +[BlizzardMirroringRoutingConfig descriptor] */

undefined * FUN_106ae3978(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4c80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b126e0,
                        &PTR____CFConstantStringClassReference_110e6ee58,&PTR_DAT_11316ef40,
                        &PTR_DAT_11316efb8,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c4c80 = puVar1;
  }
  return puRam00000001136c4c80;
}



/* Entry: 106ae39f4; end: 106ae3a5b; +[HeaderEnvelope descriptor] */

void FUN_106ae39f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4c88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b12730,
                        &PTR____CFConstantStringClassReference_110e6ee78,&PTR_DAT_11316ef40,
                        &PTR_DAT_11316f038,6,0x30,0x1c);
    puRam00000001136c4c88 = puVar1;
  }
  return;
}



/* Entry: 106ae3a5c; end: 106ae3ae7; +[SpectrumSequentialItem descriptor] */

undefined * FUN_106ae3a5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4c90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b12780,
                        &PTR____CFConstantStringClassReference_110e6ee98,&PTR_DAT_11316ef40,
                        &PTR_DAT_11316eff8,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136c4c90 = puVar1;
  }
  return puRam00000001136c4c90;
}



/* Entry: 106ae3ae8; end: 106ae3bcb; +[SpectrumSequentialItemList descriptor] */

void FUN_106ae3ae8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4c98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b127d0,
                        &PTR____CFConstantStringClassReference_110e6eeb8,&PTR_DAT_11316ef40,
                        &PTR_DAT_11316ef58,1,0x10,0x1c);
    puRam00000001136c4c98 = puVar1;
  }
  return;
}



/* Entry: 106ae3bcc; end: 106ae3bd7;  */

bool FUN_106ae3bcc(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106ae3bd8; end: 106ae3c53;  */

undefined * FUN_106ae3bd8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4cb8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e6ef98,
                        &UNK_10dde3e58,&UNK_10dde3ea0,4,FUN_106ae3c54,0);
    do {
      if (puRam00000001136c4cb8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4cb8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4cb8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4cb8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4cb8;
}



/* Entry: 106ae3c54; end: 106ae3c5f;  */

bool FUN_106ae3c54(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 106ae3c60; end: 106ae3ceb; +[ClientHeader descriptor] */

undefined * FUN_106ae3c60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4cc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b12a00,
                        &PTR____CFConstantStringClassReference_110e6efb8,&PTR_DAT_11316f290,
                        &PTR_DAT_11316f348,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001136c4cc0 = puVar1;
  }
  return puRam00000001136c4cc0;
}



/* Entry: 106ae3cec; end: 106ae3d53; +[ServerHeader descriptor] */

void FUN_106ae3cec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4cc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b12a50,
                        &PTR____CFConstantStringClassReference_110e6efd8,&PTR_DAT_11316f290,
                        &PTR_DAT_11316f3c8,0xb,0x58,0x1c);
    puRam00000001136c4cc8 = puVar1;
  }
  return;
}



/* Entry: 106ae3d54; end: 106ae3dbb; +[IngestorHeader descriptor] */

void FUN_106ae3d54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4cd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b12aa0,
                        &PTR____CFConstantStringClassReference_110e6eff8,&PTR_DAT_11316f290,
                        &PTR_DAT_11316f2a8,1,0x10,0x1c);
    puRam00000001136c4cd0 = puVar1;
  }
  return;
}



/* Entry: 106ae3dbc; end: 106ae3e23; +[UserLocation descriptor] */

void FUN_106ae3dbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4cd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b12af0,
                        &PTR____CFConstantStringClassReference_110e322f8,&PTR_DAT_11316f290,
                        &PTR_s_country_11316f2e8,3,0x20,0x1c);
    puRam00000001136c4cd8 = puVar1;
  }
  return;
}



/* Entry: 106ae3e24; end: 106ae3f07; +[SpectrumAuthStatus descriptor] */

void FUN_106ae3e24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4ce0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b12b40,
                        &PTR____CFConstantStringClassReference_110e6f018,&PTR_DAT_11316f290,
                        &PTR_s_authType_11316f2c8,1,8,0x1c);
    puRam00000001136c4ce0 = puVar1;
  }
  return;
}



/* Entry: 106ae3f08; end: 106ae3f13;  */

bool FUN_106ae3f08(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106ae3f14; end: 106ae3f8f;  */

undefined * FUN_106ae3f14(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4cf0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e6f058,
                        &UNK_10dde3ee8,&UNK_10dde3f08,3,FUN_106ae3f90,0);
    do {
      if (puRam00000001136c4cf0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4cf0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4cf0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4cf0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4cf0;
}



/* Entry: 106ae3f90; end: 106ae3f9b;  */

bool FUN_106ae3f90(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106ae3f9c; end: 106ae4017;  */

undefined * FUN_106ae3f9c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4cf8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e6f078,
                        &UNK_10dde3f14,&UNK_10dde3f30,3,FUN_106ae4018,0);
    do {
      if (puRam00000001136c4cf8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4cf8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4cf8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4cf8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4cf8;
}



/* Entry: 106ae4018; end: 106ae4023;  */

bool FUN_106ae4018(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106ae4024; end: 106ae40b3;  */

undefined * FUN_106ae4024(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4d00 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e6f098,
                        &UNK_10dde3f3c,&UNK_10dde3f84,4,FUN_106ae40b4,0,&UNK_10dde3f94);
    do {
      if (puRam00000001136c4d00 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4d00;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4d00,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4d00 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4d00;
}



/* Entry: 106ae40b4; end: 106ae40bf;  */

bool FUN_106ae40b4(uint param_1)

{
  return param_1 < 4;
}


