/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090b3894; end: 1090b389f; -[SCNeoPlayerHLSPlaylistManager setDelegate:] */

void FUN_1090b3894(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 1090b38a0; end: 1090b38a7; -[SCNeoPlayerHLSPlaylistManager topLevelEntries] */

undefined8 FUN_1090b38a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1090b38a8; end: 1090b390b; -[SCNeoPlayerHLSPlaylistManager .cxx_destruct] */

void FUN_1090b38a8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
  func_0x0001090b3990(param_1 + 0x48);
  func_0x0001090b3990(param_1 + 0x38);
  func_0x0001090b3990(param_1 + 0x30);
  func_0x0001090b3990(param_1 + 0x28);
  func_0x0001090b3990(param_1 + 0x20);
  func_0x0001090b3990(param_1 + 0x18);
  func_0x0001090b3990(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090b390c; end: 1090b3ab3;  */

void FUN_1090b390c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1090b3ab4; end: 1090b3b7f; -[SCNeoPlayerHLSPlaylistManagerEntry initWithEntryId:url:rendition:parameters:] */

undefined1 *
FUN_1090b3ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  func_0x0001090b41bc();
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1127005a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x0001090b41b4();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    func_0x0001090b41bc();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x0001090b41ac();
  return (undefined1 *)puVar1;
}



/* Entry: 1090b3b80; end: 1090b3c0f; -[SCNeoPlayerHLSPlaylistManagerEntry segmentAtTime:] */

void FUN_1090b3b80(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(ulong *)(param_2 + 0x30);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_1090b3c10;
  puStack_30 = &UNK_110ad85f0;
  uStack_28 = param_1;
  FUN_1090950b0(uVar1,&puStack_48);
  uVar2 = *(ulong *)(param_2 + 0x30);
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    func_0x00010c0dfd40(*(undefined8 *)(param_2 + 0x30));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090b3c10; end: 1090b3c87;  */

ulong FUN_1090b3c10(double param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain(param_3);
  dVar2 = *(double *)(param_2 + 0x20);
  func_0x00010c250f20(param_3);
  if (param_1 <= dVar2) {
    dVar3 = *(double *)(param_2 + 0x20);
    func_0x00010c250f20(param_3);
    dVar2 = param_1;
    func_0x00010bf8b160(param_3);
    uVar1 = (ulong)(param_1 + dVar2 <= dVar3);
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  func_0x0001090b41ac();
  return uVar1;
}



/* Entry: 1090b3c88; end: 1090b3c8f; -[SCNeoPlayerHLSPlaylistManagerEntry segmentWithMediaSequence:] */

void FUN_1090b3c88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_objectForKey__1126159e0)
  ;
  return;
}



/* Entry: 1090b3c90; end: 1090b3ddb; -[SCNeoPlayerHLSPlaylistManagerEntry setSegments:] */

void FUN_1090b3c90(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  double dVar17;
  
  uVar5 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126dd3e0;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar2;
  _objc_release(uVar6);
  func_0x0001090b41b4();
  uVar3 = *(ulong *)(param_1 + 0x30);
  *(long *)(param_1 + 0x30) = param_3;
  _objc_release();
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  func_0x0001090b41b4();
  func_0x0001090b4190();
  lVar1 = lRam0000000000000000;
  if (uVar3 == 0) {
    dVar17 = 0.0;
  }
  else {
    dVar17 = 0.0;
    do {
      uVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar7 = *(ulong *)(uVar8 * 8);
        uVar6 = *(undefined8 *)(param_1 + 8);
        uVar4 = uVar7;
        func_0x00010c0c6660(uVar7);
        func_0x00010c1d0560(uVar6,param_2,uVar7,uVar4);
        func_0x00010bf8b160();
        dVar17 = dVar17 + (double)CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,
                                                  CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,
                                                  uVar9)))))));
        uVar8 = uVar8 + 1;
        in_ZR = uVar8 == uVar3;
      } while (uVar8 < uVar3);
      func_0x0001090b4190();
      uVar3 = uVar7;
    } while (uVar7 != 0);
  }
  uVar6 = 0;
  func_0x0001090b41ac();
  *(double *)(param_1 + 0x48) = dVar17;
  func_0x0001090b41ac();
  func_0x0001090b41d0(uVar5);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001090b41c4();
    uVar5 = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(param_3 + 0x38) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 1090b3ddc; end: 1090b3e03; -[SCNeoPlayerHLSPlaylistManagerEntry setAudioEntries:] */

void FUN_1090b3ddc(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001090b41c4();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090b3e04; end: 1090b3e2b; -[SCNeoPlayerHLSPlaylistManagerEntry setSubtitlesEntries:] */

void FUN_1090b3e04(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001090b41c4();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x40) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090b3e2c; end: 1090b3e3b; -[SCNeoPlayerHLSPlaylistManagerEntry segmentsLoaded] */

bool FUN_1090b3e2c(long param_1)

{
  return *(long *)(param_1 + 0x30) != 0;
}



/* Entry: 1090b3e3c; end: 1090b3e77; -[SCNeoPlayerHLSPlaylistManagerEntry bitrate] */

void FUN_1090b3e3c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf15780();
  if (0 < lVar1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf13430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_averageBandwidth_1125a26b0);
  return;
}



/* Entry: 1090b3e78; end: 1090b40fb; -[SCNeoPlayerHLSPlaylistManagerEntry audioEntryWithSystemLocale:userChosenLocale:] */

ulong FUN_1090b3e78(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_3;
  _objc_retain();
  func_0x0001090b41bc();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar4 = *(ulong *)(param_1 + 0x38);
  func_0x0001090b41b4();
  func_0x0001090b4190();
  if (uVar1 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    uVar6 = 0;
    lVar10 = *plStack_120;
    do {
      uVar5 = 0;
      do {
        in_ZR = *plStack_120 == lVar10;
        if (!(bool)in_ZR) {
          _objc_enumerationMutation(uVar4);
        }
        uVar8 = *(ulong *)(lStack_128 + uVar5 * 8);
        if (param_4 != 0) {
          uVar9 = uVar8;
          func_0x00010c130940(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c087ea0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_4;
          func_0x00010c0720c0(param_4,param_2,uVar9);
          _objc_release(uVar9);
          func_0x0001090b41a4();
          if ((uVar2 & 1) != 0) {
            _objc_retain(uVar8);
            _objc_release(uVar4);
            goto LAB_1090b40b0;
          }
        }
        uVar9 = uVar8;
        func_0x00010c130940();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf12260();
        if ((uVar9 & 1) == 0) {
          func_0x0001090b41a4();
          uVar9 = 0;
        }
        else {
          uVar9 = uVar8;
          func_0x00010c130940(uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar9;
          func_0x00010c087ea0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = param_3;
          func_0x00010c0720c0(param_3,param_2,uVar2);
          _objc_release(uVar2);
          _objc_release(uVar9);
          func_0x0001090b41a4();
          uVar9 = 10;
          if ((uVar3 & 1) == 0) {
            uVar9 = 0;
          }
        }
        uVar2 = uVar8;
        func_0x00010c130940();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c070480();
        func_0x0001090b41a4();
        uVar9 = uVar9 | uVar2 & 0xffffffff;
        if ((uVar7 == 0) || (uVar6 < uVar9)) {
          _objc_retain(uVar8);
          _objc_release(uVar7);
          uVar6 = uVar9;
          uVar7 = uVar8;
        }
        uVar5 = uVar5 + 1;
        in_ZR = uVar5 == uVar1;
      } while (uVar5 < uVar1);
      uVar1 = uVar4;
      func_0x00010bf52a60(uVar4,param_2,&uStack_130,auStack_f0,0x10);
    } while (uVar1 != 0);
  }
  _objc_release(uVar4);
  _objc_retain(uVar7);
  uVar8 = uVar7;
LAB_1090b40b0:
  _objc_release(uVar7);
  _objc_release(param_4);
  _objc_release();
  func_0x0001090b41d0(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    return *(ulong *)(param_3 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return uVar8;
}



/* Entry: 1090b40fc; end: 1090b4103; -[SCNeoPlayerHLSPlaylistManagerEntry entryId] */

undefined8 FUN_1090b40fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1090b4104; end: 1090b410b; -[SCNeoPlayerHLSPlaylistManagerEntry url] */

undefined8 FUN_1090b4104(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1090b410c; end: 1090b4113; -[SCNeoPlayerHLSPlaylistManagerEntry rendition] */

undefined8 FUN_1090b410c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1090b4114; end: 1090b411b; -[SCNeoPlayerHLSPlaylistManagerEntry parameters] */

undefined8 FUN_1090b4114(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1090b411c; end: 1090b4123; -[SCNeoPlayerHLSPlaylistManagerEntry segments] */

undefined8 FUN_1090b411c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1090b4124; end: 1090b412b; -[SCNeoPlayerHLSPlaylistManagerEntry audioEntries] */

undefined8 FUN_1090b4124(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1090b412c; end: 1090b4133; -[SCNeoPlayerHLSPlaylistManagerEntry subtitlesEntries] */

undefined8 FUN_1090b412c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1090b4134; end: 1090b413b; -[SCNeoPlayerHLSPlaylistManagerEntry duration] */

undefined8 FUN_1090b4134(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1090b413c; end: 1090b418f; -[SCNeoPlayerHLSPlaylistManagerEntry .cxx_destruct] */

void FUN_1090b413c(long param_1)

{
  func_0x0001090b419c(param_1 + 0x40);
  func_0x0001090b419c(param_1 + 0x38);
  func_0x0001090b419c(param_1 + 0x30);
  func_0x0001090b419c(param_1 + 0x28);
  func_0x0001090b419c(param_1 + 0x20);
  func_0x0001090b419c(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090b4190; end: 1090b41e3;  */

void FUN_1090b4190(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1090b41e4; end: 1090b445f; -[SCNeoPlayerHLSSegmentStream initWithMediaSegment:dataProvider:mediaDataManager:mediaQueue:mediaInitSectionResolver:blockAllocatorPool:instruments:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1090b41e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  func_0x0001090b465c();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar2 = param_3;
  func_0x00010c0c6660(param_3);
  func_0x00010bf25e80(param_3);
  func_0x00010c066e20(param_5);
  puStack_68 = PTR_PTR_1127005a8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithMediaDataManager_mediaDa_1125e7e88,param_5,uVar2,param_9,
                      0,param_6,param_10);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112781710;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112781714;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112781718;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar2);
    if (param_7 == 0) {
      puVar3 = PTR_PTR_1126dd4f0;
      _objc_alloc(PTR_PTR_1126dd4f0);
      puVar4 = PTR_PTR_1126dd478;
      func_0x00010c22bee0(PTR_PTR_1126dd478);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e700(puVar3);
      _objc_release(puVar4);
      func_0x00010bdff5e0(puVar1);
      func_0x0001090b4634();
    }
    else {
      _objc_initWeak(auStack_78,puVar1);
      _objc_copyWeak(auStack_80,auStack_78);
      func_0x00010c13aae0(param_7);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
    }
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  func_0x0001090b4654();
  _objc_release(param_5);
  func_0x0001090b4634();
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1090b4460; end: 1090b44af;  */

void FUN_1090b4460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x21;
  
  func_0x0001090b4648();
  func_0x0001090b465c();
  lVar1 = unaff_x21 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be5e840();
  _objc_release(param_3);
  func_0x0001090b4634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1090b44b0; end: 1090b4537; -[SCNeoPlayerHLSSegmentStream seekToBeginningOfSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090b44b0(long param_1,undefined8 param_2)

{
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010c250f20(*(undefined8 *)(param_1 + _DAT_112781710));
  _CMTimeMakeWithSeconds(&uStack_38,1000);
  uStack_68 = uStack_30;
  uStack_70 = uStack_38;
  uStack_60 = uStack_28;
  uStack_a8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_b0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_a0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_90 = uStack_b0;
  uStack_88 = uStack_a8;
  uStack_80 = uStack_a0;
  func_0x00010c1572c0(auStack_50,param_1,param_2,&uStack_70,&uStack_90,&uStack_b0);
  return;
}



/* Entry: 1090b4538; end: 1090b4547; -[SCNeoPlayerHLSSegmentStream _didReceiveMediaInfoResolver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090b4538(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c064850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initializeDemuxerWithMediaInfoRe_1125f6c20,param_3,
             *(undefined8 *)(param_1 + _DAT_112781714));
  return;
}



/* Entry: 1090b4548; end: 1090b45d3; -[SCNeoPlayerHLSSegmentStream _mediaInfoResolver:didCompleteWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090b4548(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  
  func_0x0001090b4648();
  func_0x0001090b465c();
  func_0x00010bf99fe0(*(undefined8 *)(unaff_x21 + _DAT_112781718));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77940();
  func_0x0001090b4654();
  if (param_4 == 0) {
    func_0x00010bdff5e0();
  }
  else {
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c149640();
    func_0x0001090b4654();
  }
  func_0x0001090b4634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090b45d4; end: 1090b45e3; -[SCNeoPlayerHLSSegmentStream mediaSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1090b45d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781710);
}



/* Entry: 1090b45e4; end: 1090b4633; -[SCNeoPlayerHLSSegmentStream .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090b45e4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112781710,0);
  _objc_storeStrong(param_1 + _DAT_112781718,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112781714,0);
  return;
}



/* Entry: 1090b4634; end: 1090b4663;  */

void FUN_1090b4634(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090b4664; end: 1090b491f; -[SCNeoPlayerHLSStream initWithEntry:bufferChunkManager:mediaAssetConfiguration:mediaQueue:dataProviderFactory:instruments:delegate:] */

undefined8 *
FUN_1090b4664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  func_0x0001090b5bd4();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1127005b0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    func_0x0001090b5bf8();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_3;
    _objc_release(uVar2);
    func_0x0001090b5bd4();
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126dd4d0;
    _objc_alloc();
    func_0x00010bf97200(param_3);
    func_0x00010c11de00(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e6e0();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    func_0x0001090b5bb4(uVar2);
    _objc_release(param_6);
    func_0x00010c18b5e0(puVar1[2]);
    func_0x00010c066e20(puVar1[2]);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126dd4e8;
    func_0x0001090b5c14();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    func_0x0001090b5bb4(uVar2);
    puVar3 = PTR_PTR_1126dd3e0;
    func_0x0001090b5c14();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x0001090b5bb4(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    func_0x0001090b5bb4(uVar2);
    puVar3 = PTR_PTR_1126dd4c0;
    func_0x0001090b5c14();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    func_0x0001090b5bb4(uVar2);
    _objc_storeWeak(puVar1 + 6,param_9);
    puVar3 = PTR__kCMTimeZero_110348670;
    uVar2 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    puVar1[0x14] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    puVar1[0x13] = uVar2;
    puVar1[0x15] = *(undefined8 *)(puVar3 + 0x10);
  }
  _objc_release(param_9);
  func_0x0001090b5b94();
  func_0x0001090b5bac();
  func_0x0001090b5b74();
  _objc_release(param_5);
  func_0x0001090b5b40();
  func_0x0001090b5b38();
  return puVar1;
}



/* Entry: 1090b4920; end: 1090b4a63; -[SCNeoPlayerHLSStream dealloc] */

void FUN_1090b4920(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_48;
  
  plVar3 = &lStack_130;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uVar1 = *(ulong *)(param_1 + 0x40);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001090b5c44();
  func_0x0001090b5bdc();
  uVar4 = (uint)param_3;
  if (uVar2 != 0) {
    lVar6 = *plStack_100;
    do {
      uVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(uVar1);
        }
        func_0x00010bf2e620(*(undefined8 *)(lStack_108 + uVar7 * 8));
        uVar7 = uVar7 + 1;
        in_ZR = uVar7 == uVar2;
      } while (uVar7 < uVar2);
      func_0x0001090b5c44();
      uVar2 = uVar1;
      func_0x0001090b5bdc();
      uVar4 = (uint)param_3;
    } while (uVar2 != 0);
  }
  func_0x0001090b5b40();
  puStack_118 = PTR_PTR_1127005b0;
  lStack_120 = param_1;
  _objc_msgSendSuper2(&lStack_120,PTR_s_dealloc_112525b20);
  func_0x0001090b5c30(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001090b5b40();
  puStack_128 = PTR_PTR_1127005b0;
  lStack_130 = param_1;
  _objc_msgSendSuper2(&lStack_130,PTR_s_dealloc_112525b20);
  func_0x0001090b5bbc();
  if (*(byte *)((long)plVar3 + 0x82) == uVar4) {
    return;
  }
  *(char *)((long)plVar3 + 0x82) = (char)uVar4;
  if (uVar4 != 0) {
    lVar6 = *(long *)((long)plVar3 + 0x58);
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 == 0) {
      uVar5 = 1;
      goto LAB_1090b4aac;
    }
  }
  uVar5 = 0;
LAB_1090b4aac:
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)((long)plVar3 + 0x10),PTR_s_setEnabled__112642f38,uVar5);
  return;
}



/* Entry: 1090b4a64; end: 1090b4ac3; -[SCNeoPlayerHLSStream setActive:] */

void FUN_1090b4a64(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(byte *)(param_1 + 0x82) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x82) = (char)param_3;
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x58);
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      uVar2 = 1;
      goto LAB_1090b4aac;
    }
  }
  uVar2 = 0;
LAB_1090b4aac:
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setEnabled__112642f38,uVar2);
  return;
}



/* Entry: 1090b4ac4; end: 1090b4b33; -[SCNeoPlayerHLSStream _onError:] */

void FUN_1090b4ac4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long unaff_x20;
  
  func_0x0001090b5b54();
  iVar1 = (int)*(undefined8 *)(unaff_x20 + 0x58);
  func_0x00010c0e3f00();
  if (iVar1 != 0) {
    func_0x00010c195460(*(undefined8 *)(unaff_x20 + 0x10),param_2,0);
    _objc_loadWeakRetained(unaff_x20 + 0x30);
    func_0x00010c149640();
    func_0x0001090b5b84();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090b4b34; end: 1090b4d37; -[SCNeoPlayerHLSStream _getOrCreateMediaInitSectionResolverWithMediaInitSection:] */

void FUN_1090b4b34(void)

{
  undefined *puVar1;
  long unaff_x21;
  undefined8 uVar2;
  
  func_0x0001090b5b64();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x0001090b5c00();
  func_0x0001090b5c00();
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090b5ba4();
  func_0x0001090b5b74();
  puVar1 = *(undefined **)(unaff_x21 + 0x40);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uVar2 = *(undefined8 *)(unaff_x21 + 0x28);
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64200(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090b5b94();
    func_0x0001090b5bac();
    puVar1 = PTR_PTR_1126dd528;
    _objc_alloc(PTR_PTR_1126dd528);
    func_0x0001090b5c00();
    func_0x00010c11de00(*(undefined8 *)(unaff_x21 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008ae0(puVar1);
    func_0x0001090b5ba4();
    func_0x00010c1d0560(*(undefined8 *)(unaff_x21 + 0x40));
    func_0x0001090b5b74();
  }
  func_0x0001090b5b40();
  func_0x0001090b5b38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1090b4d38; end: 1090b4f1f; -[SCNeoPlayerHLSStream _getOrCreateSegmentStreamForSegment:] */

void FUN_1090b4d38(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x19;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x21;
  
  func_0x0001090b5b64();
  puVar3 = *(undefined **)(unaff_x21 + 0x18);
  func_0x0001090b5b9c();
  func_0x00010c0dff20(puVar3,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    uVar4 = *(undefined8 *)(unaff_x21 + 0x28);
    lVar1 = unaff_x19;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64200(uVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090b5bac();
    func_0x0001090b5b74();
    func_0x00010c0c53a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (unaff_x19 != 0) {
      func_0x00010c0c53a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be21120();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090b5b94();
    }
    puVar3 = PTR_PTR_1126dd530;
    _objc_alloc(PTR_PTR_1126dd530);
    func_0x00010c029d20();
    puVar2 = puVar3;
    func_0x00010c222100();
    uVar4 = *(undefined8 *)(unaff_x21 + 0x18);
    func_0x0001090b5b9c();
    func_0x00010c1d0560(uVar4,param_2,puVar3,puVar2);
    func_0x0001090b5b74();
    func_0x0001090b5b40();
  }
  func_0x0001090b5b38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1090b4f20; end: 1090b4faf; -[SCNeoPlayerHLSStream _notifyHasNextSampleBuffersIfNeeded] */

void FUN_1090b4f20(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
    func_0x00010bfd9760();
    if (iVar1 != 0) {
      _objc_loadWeakRetained(param_1 + 0x30);
      func_0x00010c1496e0();
      func_0x0001090b5b40();
    }
  }
  if (*(int *)(param_1 + 100) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
    func_0x00010bfd9700();
    if (iVar1 != 0) {
      param_1 = param_1 + 0x30;
      _objc_loadWeakRetained(param_1);
      func_0x00010c1496c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1090b4fb0; end: 1090b5003; -[SCNeoPlayerHLSStream _updateActiveSegmentAtTime:] */

void FUN_1090b4fb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  func_0x0001090b5c1c();
  _CMTimeGetSeconds(auStack_40);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c158180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed2880(param_1,param_2,uVar1);
  func_0x0001090b5b38();
  return;
}



/* Entry: 1090b5004; end: 1090b50ef; -[SCNeoPlayerHLSStream _prepareNextSegmentsAfterSegment:] */

long FUN_1090b5004(double param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  func_0x0001090b5b54();
  func_0x00010bf46560(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c3360();
  dVar3 = param_1;
  func_0x00010bf8b160();
  dVar4 = dVar3;
  func_0x0001090b5b84();
  lVar1 = 0;
  param_1 = param_1 - dVar3;
  while (0.0 < param_1) {
    lVar2 = *(long *)(unaff_x20 + 0x90);
    func_0x0001090b5b9c();
    func_0x00010c1585c0(lVar2,param_3,unaff_x19 + 1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090b5b38();
    if (lVar2 == 0) break;
    func_0x00010bf8b160(lVar2);
    unaff_x19 = unaff_x20;
    dVar3 = dVar4;
    func_0x00010be21260();
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = lVar1 + 1;
    param_1 = param_1 - dVar4;
    dVar4 = dVar3;
  }
  func_0x0001090b5b38();
  return lVar1;
}



/* Entry: 1090b50f0; end: 1090b5267; -[SCNeoPlayerHLSStream _updateActiveSegment:] */

void FUN_1090b50f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long lVar4;
  long unaff_x21;
  
  func_0x0001090b5b64();
  func_0x00010bf18e80(*(undefined8 *)(unaff_x21 + 0x10));
  if (unaff_x19 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = unaff_x21;
    func_0x00010be21260();
    _objc_retainAutoreleasedReturnValue();
  }
  if (lVar4 != *(long *)(unaff_x21 + 0x48)) {
    func_0x00010c157140();
    func_0x00010c157140(lVar4);
    func_0x0001090b5bd4();
    uVar1 = *(undefined8 *)(unaff_x21 + 0x48);
    *(long *)(unaff_x21 + 0x48) = lVar4;
    _objc_release(uVar1);
    if (*(int *)(unaff_x21 + 0x60) != 0) {
      uVar2 = *(undefined8 *)(unaff_x21 + 0x38);
      func_0x00010bf99fe0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x0001090b5b9c();
      func_0x00010bf7e2a0(uVar2,param_2,uVar1);
      func_0x0001090b5b74();
    }
    if (*(int *)(unaff_x21 + 100) != 0) {
      uVar2 = *(undefined8 *)(unaff_x21 + 0x38);
      func_0x00010bf99fe0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x0001090b5b9c();
      func_0x00010bf7e280(uVar2,param_2,uVar1);
      func_0x0001090b5b74();
    }
    func_0x00010c28b3c0();
    func_0x00010c0c48e0(lVar4);
    if (unaff_x19 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = unaff_x21;
      func_0x00010be78c80();
      lVar3 = lVar3 + 1;
    }
    func_0x00010c187b00(*(undefined8 *)(unaff_x21 + 0x10),param_2,lVar4,lVar3);
    lVar4 = unaff_x21 + 0x30;
    _objc_loadWeakRetained(lVar4);
    func_0x0001090b5b9c();
    func_0x00010bfe3b80(lVar4);
    func_0x0001090b5b74();
  }
  func_0x00010bf95a20(*(undefined8 *)(unaff_x21 + 0x10));
  func_0x0001090b5b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090b5268; end: 1090b52cb; -[SCNeoPlayerHLSStream didLoadSegments] */

void FUN_1090b5268(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined1 *)(param_1 + 0x80) = 1;
  func_0x00010bf8b160(*(undefined8 *)(param_1 + 0x90));
  _CMTimeMakeWithSeconds(&uStack_40,10000);
  *(undefined8 *)(param_1 + 0x70) = uStack_38;
  *(undefined8 *)(param_1 + 0x68) = uStack_40;
  *(undefined8 *)(param_1 + 0x78) = uStack_30;
  uStack_38 = *(undefined8 *)(param_1 + 0xa0);
  uStack_40 = *(undefined8 *)(param_1 + 0x98);
  uStack_30 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010bed28a0(param_1,param_2,&uStack_40);
  return;
}



/* Entry: 1090b52cc; end: 1090b530b; -[SCNeoPlayerHLSStream setStartTime:] */

void FUN_1090b52cc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0xa8) = param_3[2];
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    func_0x0001090b5c1c();
    func_0x00010bed28a0();
  }
  return;
}



/* Entry: 1090b530c; end: 1090b5323; -[SCNeoPlayerHLSStream computeMediaDataManagerMetrics] */

void FUN_1090b530c(undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf45910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_2 + 0x10),PTR_s_computeMetrics_1125aefe8)
    ;
    return;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1090b5324; end: 1090b5457; -[SCNeoPlayerHLSStream setVideoTrackId:audioTrackId:currentTime:] */

void FUN_1090b5324(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *extraout_x8;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  undefined8 uVar6;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong uStack_180;
  long lStack_178;
  long lStack_170;
  ulong uStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = false;
  puVar5 = param_5;
  if (*(int *)(param_1 + 0x60) == (int)param_3) {
    uVar1 = *(int *)(param_1 + 100) == (int)param_4;
    lVar3 = param_1;
    if ((bool)uVar1) goto LAB_1090b5410;
  }
  *(int *)(param_1 + 0x60) = (int)param_3;
  *(int *)(param_1 + 100) = (int)param_4;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  unaff_x21 = *(ulong *)(param_1 + 0x18);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = unaff_x21;
  func_0x0001090b5c44();
  func_0x0001090b5bdc();
  if (uVar2 != 0) {
    unaff_x23 = *plStack_110;
    do {
      unaff_x24 = 0;
      do {
        if (*plStack_110 != unaff_x23) {
          _objc_enumerationMutation(unaff_x21);
        }
        param_3 = (undefined8 *)(ulong)*(uint *)(param_1 + 0x60);
        param_4 = (undefined8 *)(ulong)*(uint *)(param_1 + 100);
        uStack_138 = param_5[1];
        uStack_140 = *param_5;
        uStack_130 = param_5[2];
        puVar5 = &uStack_140;
        func_0x00010c222100(*(undefined8 *)(lStack_118 + unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
        uVar1 = unaff_x24 == uVar2;
      } while (unaff_x24 < uVar2);
      func_0x0001090b5c44();
      uVar2 = unaff_x21;
      func_0x0001090b5bdc();
    } while (uVar2 != 0);
  }
  unaff_x22 = 0;
  lVar3 = unaff_x22;
  func_0x0001090b5b84();
LAB_1090b5410:
  func_0x0001090b5c30(uStack_58);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = lVar3;
  func_0x0001090b5b84();
  func_0x0001090b5bf0();
  pcStack_148 = FUN_1090b5458;
  uStack_198 = param_3[1];
  uStack_1a0 = *param_3;
  uStack_190 = param_3[2];
  uStack_180 = unaff_x24;
  lStack_178 = unaff_x23;
  lStack_170 = unaff_x22;
  uStack_168 = unaff_x21;
  lStack_160 = param_1;
  lStack_158 = lVar3;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010bed28a0();
  if (*(long *)(lVar4 + 0x48) == 0) {
    uVar6 = *param_3;
    extraout_x8[1] = param_3[1];
    *extraout_x8 = uVar6;
    extraout_x8[2] = param_3[2];
  }
  else {
    uStack_198 = param_3[1];
    uStack_1a0 = *param_3;
    uStack_190 = param_3[2];
    uStack_1b8 = param_4[1];
    uStack_1c0 = *param_4;
    uStack_1b0 = param_4[2];
    uStack_1d8 = puVar5[1];
    uStack_1e0 = *puVar5;
    uStack_1d0 = puVar5[2];
    func_0x00010c1572c0(extraout_x8,*(long *)(lVar4 + 0x48),param_2,&uStack_1a0,&uStack_1c0,
                        &uStack_1e0);
  }
  return;
}



/* Entry: 1090b5458; end: 1090b5513; -[SCNeoPlayerHLSStream seekToTime:toleranceBefore:toleranceAfter:] */

void FUN_1090b5458(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_58 = param_4[1];
  uStack_60 = *param_4;
  uStack_50 = param_4[2];
  func_0x00010bed28a0(param_2,param_3,&uStack_60);
  if (*(long *)(param_2 + 0x48) == 0) {
    uVar1 = *param_4;
    param_1[1] = param_4[1];
    *param_1 = uVar1;
    param_1[2] = param_4[2];
  }
  else {
    uStack_58 = param_4[1];
    uStack_60 = *param_4;
    uStack_50 = param_4[2];
    uStack_78 = param_5[1];
    uStack_80 = *param_5;
    uStack_70 = param_5[2];
    uStack_98 = param_6[1];
    uStack_a0 = *param_6;
    uStack_90 = param_6[2];
    func_0x00010c1572c0(param_1,*(long *)(param_2 + 0x48),param_3,&uStack_60,&uStack_80,&uStack_a0);
  }
  return;
}



/* Entry: 1090b5514; end: 1090b5553; -[SCNeoPlayerHLSStream timebase] */

void FUN_1090b5514(long param_1)

{
  func_0x00010bf99fe0(*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26fdc0();
  FUN_1090b5b2c();
  return;
}



/* Entry: 1090b5554; end: 1090b5557; -[SCNeoPlayerHLSStream updatedLoadedTimeRanges] */

void FUN_1090b5554(void)

{
  return;
}



/* Entry: 1090b5558; end: 1090b570b; -[SCNeoPlayerHLSStream updateTrackInfos] */

void FUN_1090b5558(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar3 = *(ulong *)(param_1 + 0x48);
  func_0x00010c277fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x48);
  func_0x00010c09ca80();
  func_0x0001090b5bd4();
  _objc_sync_enter(param_1);
  uVar7 = *(ulong *)(param_1 + 0x88);
  _objc_retain(uVar7);
  func_0x0001090b5bf8();
  uVar8 = uVar7;
  func_0x00010bf529e0();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  if (uVar8 == uVar4) {
    uVar8 = 0;
    do {
      uVar4 = uVar7;
      func_0x00010bf529e0();
      bVar1 = uVar4 > uVar8;
      if (uVar4 <= uVar8) break;
      uVar4 = uVar7;
      func_0x00010c0dfd40(uVar7,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0dfd40(uVar3,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071ae0(uVar4,param_2,uVar5);
      func_0x0001090b5ba4();
      func_0x0001090b5b94();
      uVar8 = uVar8 + 1;
    } while ((uVar4 & 1) != 0);
  }
  else {
    bVar1 = true;
  }
  func_0x0001090b5b38();
  func_0x0001090b5b84();
  func_0x0001090b5bf8();
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  *(ulong *)(param_1 + 0x88) = uVar3;
  _objc_release(uVar6);
  *(undefined1 *)(param_1 + 0x81) = uVar2;
  _objc_sync_exit(param_1);
  func_0x0001090b5b40();
  if (bVar1) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1496a0();
    func_0x0001090b5b84();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1090b570c; end: 1090b57d7; -[SCNeoPlayerHLSStream _updateCurrentSegmentStreamIfNeeded] */

void FUN_1090b570c(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x60) == 0) {
    if (*(int *)(param_1 + 100) == 0) goto LAB_1090b5760;
    uVar2 = 1;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x48);
    func_0x00010bf78ea0();
    if (*(int *)(param_1 + 100) == 0) {
      if ((int)uVar2 == 0) {
        return;
      }
      goto LAB_1090b5760;
    }
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
  func_0x00010bf78e20();
  if ((iVar1 == 0) || ((uVar2 & 1) == 0)) {
    return;
  }
LAB_1090b5760:
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  lVar3 = *(long *)(param_1 + 0x48);
  func_0x00010c0c65e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6660();
  func_0x00010c1585c0(uVar4,param_2,lVar3 + 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090b5b40();
  func_0x00010bed2880(param_1,param_2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1090b57d8; end: 1090b57df; -[SCNeoPlayerHLSStream hasNextAudioSampleBuffer] */

void FUN_1090b57d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd9710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_hasNextAudioSampleBuffer_1125d3f80);
  return;
}



/* Entry: 1090b57e0; end: 1090b5823; -[SCNeoPlayerHLSStream dequeueNextAudioSampleBufferWithError:] */

void FUN_1090b57e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf6df60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed6740(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090b5824; end: 1090b5853; -[SCNeoPlayerHLSStream didReachEndOfAudioTrack] */

long FUN_1090b5824(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 100) != 0) {
    if (*(char *)(param_1 + 0x80) != '\x01') {
      return 0;
    }
    lVar1 = *(long *)(param_1 + 0x48);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf78e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_didReachEndOfAudioTrack_1125bbd30);
      return lVar1;
    }
  }
  return 1;
}



/* Entry: 1090b5854; end: 1090b585b; -[SCNeoPlayerHLSStream hasNextVideoSampleBuffer] */

void FUN_1090b5854(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd9770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_hasNextVideoSampleBuffer_1125d3f98);
  return;
}



/* Entry: 1090b585c; end: 1090b589f; -[SCNeoPlayerHLSStream dequeueNextVideoSampleBufferWithError:] */

void FUN_1090b585c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf6dfe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed6740(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090b58a0; end: 1090b58cf; -[SCNeoPlayerHLSStream didReachEndOfVideoTrack] */

long FUN_1090b58a0(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    if (*(char *)(param_1 + 0x80) != '\x01') {
      return 0;
    }
    lVar1 = *(long *)(param_1 + 0x48);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf78eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_didReachEndOfVideoTrack_1125bbd50);
      return lVar1;
    }
  }
  return 1;
}



/* Entry: 1090b58d0; end: 1090b58d7; -[SCNeoPlayerHLSStream sampleBufferProvider:didFailWithError:] */

void FUN_1090b58d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be690b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onError__112577dc8,param_4);
  return;
}



/* Entry: 1090b58d8; end: 1090b58db; -[SCNeoPlayerHLSStream sampleBufferProvider:loadedTimeRangesDidChange:] */

void FUN_1090b58d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28d450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updatedLoadedTimeRanges_112680f38);
  return;
}



/* Entry: 1090b58dc; end: 1090b58ef; -[SCNeoPlayerHLSStream sampleBufferProviderDidLoadTrackInfos:] */

void FUN_1090b58dc(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + 0x48)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c28b3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateTrackInfos_112680718);
  return;
}



/* Entry: 1090b58f0; end: 1090b58f3; -[SCNeoPlayerHLSStream sampleBufferProviderHasNewAudioBuffer:] */

void FUN_1090b58f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be649b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyHasNextSampleBuffersIfNee_112576c08);
  return;
}



/* Entry: 1090b58f4; end: 1090b58f7; -[SCNeoPlayerHLSStream sampleBufferProviderHasNewVideoBuffer:] */

void FUN_1090b58f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be649b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyHasNextSampleBuffersIfNee_112576c08);
  return;
}



/* Entry: 1090b58f8; end: 1090b5963; -[SCNeoPlayerHLSStream sampleBufferProvider:didLoadDataSize:withLatency:] */

void FUN_1090b58f8(undefined8 param_1)

{
  func_0x0001090b5b54();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c149660(param_1);
  func_0x0001090b5b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090b5964; end: 1090b596b; -[SCNeoPlayerHLSStream loadedTimeRanges] */

undefined8 FUN_1090b5964(void)

{
  return 0;
}



/* Entry: 1090b596c; end: 1090b59b3; -[SCNeoPlayerHLSStream duration] */

void FUN_1090b596c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  param_1[1] = *(undefined8 *)(param_2 + 0x70);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x78);
  _objc_sync_exit(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1090b59b4; end: 1090b59bb; -[SCNeoPlayerHLSStream error] */

void FUN_1090b59b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf987f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x58),PTR_s_error_1125c3ba0);
  return;
}



/* Entry: 1090b59bc; end: 1090b59d3; -[SCNeoPlayerHLSStream delegate] */

void FUN_1090b59bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090b59d4; end: 1090b59df; -[SCNeoPlayerHLSStream setDelegate:] */

void FUN_1090b59d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 1090b59e0; end: 1090b59e7; -[SCNeoPlayerHLSStream currentSegment] */

void FUN_1090b59e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c65f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_mediaSegment_11260f390);
  return;
}



/* Entry: 1090b59e8; end: 1090b59ef; -[SCNeoPlayerHLSStream mediaDataManager:didFailToLoadWithError:forSourceIndex:] */

void FUN_1090b59e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be690b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onError__112577dc8,param_4);
  return;
}



/* Entry: 1090b59f0; end: 1090b5a37; -[SCNeoPlayerHLSStream mediaDataManager:didUpdateBufferAtByteOffset:forSourceIndex:loadLatency:loadSize:] */

void FUN_1090b59f0(undefined8 param_1,undefined8 param_2)

{
  func_0x0001090b5c08();
  func_0x00010bfe3bc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1090b5a38; end: 1090b5a73; -[SCNeoPlayerHLSStream mediaDataManager:didReachEndforSourceIndex:] */

void FUN_1090b5a38(undefined8 param_1)

{
  func_0x0001090b5c08();
  func_0x00010bfe3ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090b5a74; end: 1090b5a7b; -[SCNeoPlayerHLSStream trackInfos] */

undefined8 FUN_1090b5a74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1090b5a7c; end: 1090b5a83; -[SCNeoPlayerHLSStream loadedTrackInfos] */

undefined1 FUN_1090b5a7c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x81);
}



/* Entry: 1090b5a84; end: 1090b5a8b; -[SCNeoPlayerHLSStream entry] */

undefined8 FUN_1090b5a84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1090b5a8c; end: 1090b5a93; -[SCNeoPlayerHLSStream active] */

undefined1 FUN_1090b5a8c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x82);
}



/* Entry: 1090b5a94; end: 1090b5aa7; -[SCNeoPlayerHLSStream startTime] */

void FUN_1090b5a94(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  param_1[1] = *(undefined8 *)(param_2 + 0xa0);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0xa8);
  return;
}



/* Entry: 1090b5aa8; end: 1090b5b2b; -[SCNeoPlayerHLSStream .cxx_destruct] */

void FUN_1090b5aa8(long param_1)

{
  func_0x0001090b5b7c(param_1 + 0x90);
  func_0x0001090b5b7c(param_1 + 0x88);
  func_0x0001090b5b7c(param_1 + 0x58);
  func_0x0001090b5b7c(param_1 + 0x50);
  func_0x0001090b5b7c(param_1 + 0x48);
  func_0x0001090b5b7c(param_1 + 0x40);
  func_0x0001090b5b7c(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  func_0x0001090b5b7c(param_1 + 0x28);
  func_0x0001090b5b7c(param_1 + 0x20);
  func_0x0001090b5b7c(param_1 + 0x18);
  func_0x0001090b5b7c(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090b5b2c; end: 1090b5c4f;  */

void FUN_1090b5b2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090b5c50; end: 1090b5dc3; -[SCNeoPlayerIOSAudioOutput init] */

undefined8 * FUN_1090b5c50(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1127005b8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___AVAudioSession_1126b6de8;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    uVar4 = 0xb0;
    __Znwm();
    func_0x0001090c81e0();
    uStack_48 = 0;
    uVar3 = puVar1[2];
    puVar1[2] = uVar4;
    FUN_1090b5ea0(uVar3);
    FUN_1090b5e74(&uStack_48);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090b5ecc();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090b5ecc();
    _objc_release(puVar2);
    func_0x00010beda640(puVar1);
  }
  return puVar1;
}



/* Entry: 1090b5dc4; end: 1090b5e13; -[SCNeoPlayerIOSAudioOutput _updateLatency] */

void FUN_1090b5dc4(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  func_0x00010c0eee80(*(undefined8 *)(param_2 + 8));
  lVar1 = *(long *)(param_2 + 0x10);
  dVar2 = param_1;
  func_0x00010c149840(*(undefined8 *)(param_2 + 8));
  func_0x0001090c8f00();
  *(long *)(lVar1 + 0x50) = (long)(param_1 * (double)(uint)(int)dVar2);
  *(ulong *)(lVar1 + 0x58) = (ulong)(uint)(int)dVar2 | 0x100000000;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar1 + 0x10);
  return;
}



/* Entry: 1090b5e14; end: 1090b5e17; -[SCNeoPlayerIOSAudioOutput _audioRouteDidChange:] */

void FUN_1090b5e14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beda650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateLatency_112594338);
  return;
}



/* Entry: 1090b5e18; end: 1090b5e1b; -[SCNeoPlayerIOSAudioOutput _onInterruption:] */

void FUN_1090b5e18(void)

{
  return;
}



/* Entry: 1090b5e1c; end: 1090b5e3f; -[SCNeoPlayerIOSAudioOutput audioOutput] */

void FUN_1090b5e1c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x10);
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 1090b5e40; end: 1090b5e6b; -[SCNeoPlayerIOSAudioOutput .cxx_destruct] */

void FUN_1090b5e40(long param_1)

{
  FUN_1090b5e74(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090b5e6c; end: 1090b5e73; -[SCNeoPlayerIOSAudioOutput .cxx_construct] */

void FUN_1090b5e6c(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 1090b5e74; end: 1090b5e9f;  */

undefined8 * FUN_1090b5e74(undefined8 *param_1)

{
  FUN_1090b5ea0(*param_1);
  return param_1;
}



/* Entry: 1090b5ea0; end: 1090b5ed7;  */

void FUN_1090b5ea0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001090b5ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090b5ed8; end: 1090b63eb; -[SCNeoPlayerItemCPP initWithURL:mediaAssetConfiguration:playerConfiguration:dataProviderFactory:videoRendererPerformanceMetricsProvider:subtitlesUrl:externalIdentifier:mediaQueue:error:] */

/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_1090b5ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9,
             undefined8 param_10)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined1 auStack_140 [8];
  undefined8 *puStack_138;
  long alStack_130 [2];
  undefined8 *puStack_120;
  undefined1 auStack_118 [8];
  long *plStack_110;
  undefined1 auStack_100 [8];
  long lStack_f8;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_90 = PTR_PTR_1127005c0;
  puVar6 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar6,PTR_s_init_1125d9248);
  if (puVar6 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar7 = puVar6[3];
    puVar6[3] = param_3;
    _objc_release(uVar7);
    _objc_retain(param_8);
    uVar7 = puVar6[4];
    puVar6[4] = param_8;
    _objc_release(uVar7);
    _objc_retain(param_10);
    uVar7 = puVar6[2];
    puVar6[2] = param_10;
    _objc_release(uVar7);
    puVar8 = PTR_PTR_1126dd538;
    _objc_alloc();
    func_0x00010c001f60();
    uVar7 = puVar6[5];
    puVar6[5] = puVar8;
    _objc_release(uVar7);
    FUN_109095190(auStack_118,param_3,param_6,puVar6[5],param_4,param_5,param_10);
    FUN_1090d0bfc(&puStack_120,auStack_118);
    alStack_130[1] = 8;
    func_0x00010bf99fe0(puVar6[5]);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26fdc0();
    func_0x00010c11de00(param_10);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = 0x20;
    __Znwm();
    FUN_1090cbf68();
    alStack_130[0] = lVar9;
    func_0x0001090b6564();
    func_0x0001090b6574();
    FUN_1090c4588(auStack_140);
    puVar10 = (undefined8 *)0x180;
    __Znwm();
    plVar11 = puVar10 + 1;
    *plVar11 = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_DAT_110ad8650;
    if ((puStack_120 != (undefined8 *)0x0) && (puStack_120[2] != 0)) {
      plVar1 = (long *)(puStack_120[2] + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puStack_78 = puStack_120;
    if ((lStack_f8 != 0) && (*(long *)(lStack_f8 + 0x10) != 0)) {
      plVar1 = (long *)(*(long *)(lStack_f8 + 0x10) + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lStack_80 = lStack_f8;
    if (alStack_130[0] != 0) {
      plVar1 = (long *)(alStack_130[0] + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar2 = puVar10 + 3;
    lStack_88 = alStack_130[0];
    FUN_1090ebec4(puVar2,&puStack_78,&lStack_80,auStack_140,&lStack_88,auStack_100,alStack_130 + 1,1
                 );
    FUN_1090a94d4(&lStack_88);
    FUN_1090b64f0(&lStack_80);
    FUN_1090b651c(&puStack_78);
    if ((puVar10[5] == 0) || (*(long *)(puVar10[5] + 8) == -1)) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = *plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      puStack_78 = puVar2;
      puStack_70 = puVar10;
      func_0x000107c278e4(puVar10 + 4,&puStack_78);
      func_0x000107c278ec(&puStack_78);
    }
    ppuVar3 = (undefined8 **)(puVar6 + 1);
    puStack_138 = puVar2;
    if (ppuVar3 != &puStack_138) {
      puStack_138 = (undefined8 *)0x0;
      puVar10 = *ppuVar3;
      *ppuVar3 = puVar2;
      FUN_1090ac2cc(puVar10);
    }
    FUN_1090ac2a8(&puStack_138);
    FUN_109094fc4(auStack_140);
    if (param_8 != 0) {
      puVar10 = *ppuVar3;
      func_0x00010beec820(param_8);
      _objc_retainAutoreleasedReturnValue();
      FUN_109095bd4(&lStack_80);
      (**(code **)(*plStack_110 + 0x10))(&puStack_78,plStack_110,&lStack_80);
      func_0x0001090ec98c(puVar10,&puStack_78);
      FUN_10909c860(&puStack_78);
      func_0x000107c278f4(&lStack_80);
      func_0x0001090b6564();
    }
    func_0x00010c08fa60();
    if (param_9 != 0) {
      func_0x00010bf99fe0(puVar6[5]);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf77e00();
      func_0x0001090b6564();
    }
    FUN_1090a9464(alStack_130);
    FUN_1090aebb0(&puStack_120);
    FUN_1090aea18(auStack_118);
  }
  _objc_release(param_10);
  func_0x0001090b6574();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1090b63ec; end: 1090b643b; -[SCNeoPlayerItemCPP dealloc] */

void FUN_1090b63ec(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    func_0x000107c3105c();
  }
  puStack_28 = PTR_PTR_1127005c0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090b643c; end: 1090b646f; -[SCNeoPlayerItemCPP duration] */

void FUN_1090b643c(undefined8 param_1,long param_2)

{
  (**(code **)(**(long **)(*(long *)(param_2 + 8) + 0x20) + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CMTimeMake_110348440)(param_1);
  return;
}



/* Entry: 1090b6470; end: 1090b6477; -[SCNeoPlayerItemCPP cppInstance] */

undefined8 FUN_1090b6470(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1090b6478; end: 1090b647f; -[SCNeoPlayerItemCPP instruments] */

undefined8 FUN_1090b6478(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1090b6480; end: 1090b64bf; -[SCNeoPlayerItemCPP .cxx_destruct] */

undefined8 FUN_1090b6480(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001090b656c(param_1 + 0x28);
  func_0x0001090b656c(param_1 + 0x20);
  func_0x0001090b656c(param_1 + 0x18);
  func_0x0001090b656c(param_1 + 0x10);
  func_0x0001090ad7b0(param_1 + 8);
  FUN_1090ac2cc();
  return unaff_x19;
}



/* Entry: 1090b64c0; end: 1090b64cb; -[SCNeoPlayerItemCPP .cxx_construct] */

void FUN_1090b64c0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 1090b64cc; end: 1090b64df;  */

void FUN_1090b64cc(void)

{
  func_0x0001090b6554();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090b64e0; end: 1090b64ef;  */

void FUN_1090b64e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090b64e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1090b64f0; end: 1090b651b;  */

undefined8 * FUN_1090b64f0(undefined8 *param_1)

{
  func_0x000107c2ab10(*param_1);
  return param_1;
}



/* Entry: 1090b651c; end: 1090b6547;  */

undefined8 * FUN_1090b651c(undefined8 *param_1)

{
  FUN_1090b6548(*param_1);
  return param_1;
}



/* Entry: 1090b6548; end: 1090b657b;  */

void FUN_1090b6548(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}


