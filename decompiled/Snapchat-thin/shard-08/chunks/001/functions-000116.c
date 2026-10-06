/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105deea04; end: 105deea57; -[SCPreviewStickerPickerLogger closedStickerPicker:] */

void FUN_105deea04(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 == 0) {
    lVar1 = 0x10;
  }
  else {
    if (param_4 != 1) goto LAB_105deea38;
    lVar1 = 8;
  }
  *(long *)(param_2 + lVar1) = *(long *)(param_2 + lVar1) + 1;
LAB_105deea38:
  _CACurrentMediaTime();
  *(double *)(param_2 + 0x68) =
       *(double *)(param_2 + 0x68) + (param_1 - *(double *)(param_2 + 0x70));
  return;
}



/* Entry: 105deea58; end: 105deea77; -[SCPreviewStickerPickerLogger closedStickerPickerWithSearchCount:pretypeStickerTagSelectCount:prefixMatchStickerTagSelectCount:] */

void FUN_105deea58(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + param_3;
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + param_4;
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + param_5;
  return;
}



/* Entry: 105deea78; end: 105deea7f; -[SCPreviewStickerPickerLogger pickerOpenedCount] */

undefined8 FUN_105deea78(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 105deea80; end: 105deea87; -[SCPreviewStickerPickerLogger context] */

undefined8 FUN_105deea80(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 105deea88; end: 105deea8f; -[SCPreviewStickerPickerLogger setContext:] */

void FUN_105deea88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105deea90; end: 105deeaef; -[SCPreviewStickerPickerLogger .cxx_destruct] */

void FUN_105deea90(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x50,0);
  return;
}



/* Entry: 105deeaf0; end: 105deec63; -[SCPreviewUserInteractionStateLogger initWithPreviewConfiguration:latencyLogger:blizzardServices:] */

undefined1 *
FUN_105deeaf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ed250;
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
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105deec64; end: 105deec8b; -[SCPreviewUserInteractionStateLogger creativeToolsEditSessionId] */

void FUN_105deec64(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105deec8c; end: 105deef6f; -[SCPreviewUserInteractionStateLogger userStartedEnteringInteractionState:openAction:] */

void FUN_105deec8c(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  double dVar9;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  dVar9 = 0.0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar6 = *(undefined **)(param_1 + 0x38);
  _objc_retain(puVar6);
  puVar1 = puVar6;
  func_0x00010bf52a60(puVar6,param_2,&uStack_120,auStack_d8,0x10);
  if (puVar1 != (undefined *)0x0) {
    lVar7 = *plStack_110;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(puVar6);
        }
        uVar2 = *(undefined8 *)(lStack_118 + (long)puVar8 * 8);
        func_0x00010c067fc0(uVar2);
        lVar3 = param_1;
        puVar5 = param_3;
        func_0x00010be3d2a0(param_1,param_2,param_3,uVar2);
        if ((int)lVar3 == 0) goto LAB_105deef28;
        puVar8 = puVar8 + 1;
      } while (puVar1 != puVar8);
      puVar1 = puVar6;
      func_0x00010bf52a60(puVar6,param_2,&uStack_120,auStack_d8,0x10);
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(puVar6);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar7 = param_1;
  func_0x00010be472e0(param_1,param_2,param_3);
  func_0x00010c250e60(uVar2,param_2,lVar7,1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _CACurrentMediaTime();
  func_0x00010c0df720(dVar9 * 1000.0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,puVar1,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar1);
  puVar6 = PTR_PTR_1126bac30;
  _objc_opt_new();
  lVar7 = param_1 + 8;
  _objc_loadWeakRetained(lVar7);
  lVar3 = lVar7;
  func_0x00010c243320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar6,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar7);
  lVar7 = param_1 + 8;
  _objc_loadWeakRetained(lVar7);
  lVar3 = lVar7;
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(puVar6,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010be06fe0(param_1,param_2,param_3);
  func_0x00010c1939c0(puVar6,param_2,lVar7);
  func_0x00010c1d4c40(puVar6,param_2,param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c293fc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010befa120(uVar2,param_2,puVar1);
  _objc_release();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar2);
LAB_105deef28:
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_4 + 0x40) != 0) {
    uVar2 = *(undefined8 *)(param_4 + 0x10);
    lVar7 = param_4;
    func_0x00010be472e0();
    func_0x00010bf956c0(uVar2,param_2,lVar7,1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_4 + 0x28);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2,param_2,puVar1,puVar6);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105deef70; end: 105def00b; -[SCPreviewUserInteractionStateLogger userFinishedEnteringInteractionState:] */

void FUN_105deef70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_1;
    func_0x00010be472e0();
    func_0x00010bf956c0(uVar4,param_2,lVar1,1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4,param_2,puVar2,puVar3);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 105def00c; end: 105def0bf; -[SCPreviewUserInteractionStateLogger userInteractedOnInteractionState:] */

void FUN_105def00c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (param_3 == 0xd) {
    func_0x00010c0a5760(uVar4,param_2,0xf,1);
  }
  else {
    lVar1 = param_1;
    func_0x00010be472e0(param_1,param_2,param_3);
    func_0x00010c0c3f20(uVar4,param_2,lVar1,1);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4,param_2,puVar2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105def0c0; end: 105def0c7; -[SCPreviewUserInteractionStateLogger userExitedInteractionState:] */

void FUN_105def0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c292070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_userExitedInteractionState_exitT_112682240,param_3,0xffffffffffffffff);
  return;
}



/* Entry: 105def0c8; end: 105def0d7; -[SCPreviewUserInteractionStateLogger userExitedInteractionState:mentionUserIds:] */

void FUN_105def0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2920b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_userExitedInteractionState_exitT_112682250,param_3,0xffffffffffffffff,0,
             param_4);
  return;
}



/* Entry: 105def0d8; end: 105def0e3; -[SCPreviewUserInteractionStateLogger userExitedInteractionState:exitType:] */

void FUN_105def0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2920b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_userExitedInteractionState_exitT_112682250,param_3,param_4,0,0);
  return;
}



/* Entry: 105def0e4; end: 105def0eb; -[SCPreviewUserInteractionStateLogger userExitedInteractionState:exitType:cropToolLoggingParams:] */

void FUN_105def0e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2920b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_userExitedInteractionState_exitT_112682250);
  return;
}



/* Entry: 105def0ec; end: 105def553; -[SCPreviewUserInteractionStateLogger userExitedInteractionState:exitType:cropToolLoggingParams:mentionUserIds:] */

void FUN_105def0ec(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _CACurrentMediaTime();
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  dVar7 = param_1;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar5,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar7 = param_1 * 1000.0 - dVar7;
  _objc_release(uVar5);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c42e8;
  _objc_opt_new(PTR_PTR_1126c42e8);
  lVar6 = param_2 + 8;
  _objc_loadWeakRetained(lVar6);
  lVar2 = lVar6;
  func_0x00010c243320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar6);
  lVar6 = param_2 + 8;
  _objc_loadWeakRetained(lVar6);
  lVar2 = lVar6;
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar6);
  func_0x00010c185a80(puVar1,param_3,*(undefined8 *)(param_2 + 0x40));
  lVar6 = param_2;
  func_0x00010be06fe0(param_2,param_3,param_4);
  func_0x00010c1939c0(puVar1,param_3,lVar6);
  func_0x00010c192d40(dVar7,puVar1);
  func_0x00010c198620(puVar1,param_3,param_5);
  lVar6 = param_7;
  func_0x00010c08fa60(param_7);
  _objc_release(param_7);
  func_0x00010c226760(puVar1,param_3,lVar6 != 0);
  lVar6 = *(long *)(param_2 + 0x28);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar6,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  if (lVar6 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar5,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar5);
    _objc_release(puVar3);
    func_0x00010c21a8e0(dVar7,puVar1);
  }
  lVar6 = *(long *)(param_2 + 0x30);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar6,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  if (lVar6 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar5,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar5);
    _objc_release(puVar3);
    func_0x00010c213a40(dVar7,puVar1);
  }
  if ((param_4 == 7) && (param_6 != 0)) {
    lVar6 = param_6;
    func_0x00010bf98d00(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c166680(puVar1,param_3,lVar6);
    _objc_release(lVar6);
    lVar6 = param_6;
    func_0x00010c08ade0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1666a0(puVar1,param_3,lVar6);
    _objc_release(lVar6);
    lVar6 = param_6;
    func_0x00010bf259a0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c166640(puVar1,param_3,lVar6);
    _objc_release(lVar6);
    lVar6 = param_6;
    func_0x00010bf25ba0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c166660(puVar1,param_3,lVar6);
    _objc_release(lVar6);
  }
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c293fc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010c12cd60(*(undefined8 *)(param_2 + 0x38));
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar5,param_3,puVar3);
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar5,param_3,puVar3);
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar5,param_3,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 105def554; end: 105def63f; -[SCPreviewUserInteractionStateLogger logPreviewToolReadyLatency:] */

void FUN_105def554(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x48);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar4 != 0) {
    return;
  }
  _CACurrentMediaTime();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720((param_1 - *(double *)(param_2 + 0x50)) * 1000.0,
                      PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3,param_3,puVar1,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105def640; end: 105def997; -[SCPreviewUserInteractionStateLogger reportPreviewToolReadyLatencyWithMediaType:locationEnabled:] */

void FUN_105def640(long param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
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
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar9 = *(long *)(param_1 + 0x48);
  _objc_retain(lVar9);
  lVar4 = lVar9;
  func_0x00010bf52a60(lVar9,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar4 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar9);
        }
        uVar10 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        uVar6 = uVar10;
        func_0x00010c067fc0(uVar10);
        lVar5 = param_1;
        func_0x00010be06fe0(param_1,param_2,uVar6);
        func_0x00010baf5024();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,lVar5);
        uVar6 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010c0e00e0(uVar6,param_2,uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3,param_2,uVar6);
        _objc_release(uVar6);
        _objc_release(lVar5);
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = lVar9;
      func_0x00010bf52a60(lVar9,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar9);
  puVar7 = PTR_PTR_1126c4ce0;
  _objc_opt_new(PTR_PTR_1126c4ce0);
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained(lVar4);
  lVar9 = lVar4;
  func_0x00010c243320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar7,param_2,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar4);
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained(lVar4);
  lVar9 = lVar4;
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(puVar7,param_2,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar4);
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained(lVar4);
  lVar9 = lVar4;
  func_0x00010c242400();
  func_0x00010c2056c0(puVar7,param_2,lVar9);
  _objc_release(lVar4);
  uVar1 = param_3 + 1;
  if (uVar1 < 0x1c) {
    if ((1L << (uVar1 & 0x3f) & 0xd8de0fdU) != 0) {
      uVar6 = 1;
      if ((param_3 + 1U < 0x1c) && ((1L << (param_3 + 1U & 0x3f) & 0xb4b5dbbU) != 0)) {
        if (param_3 + 1U < 0x1b) {
          uVar6 = *(undefined8 *)(&UNK_10ddd0be0 + (param_3 + 1U) * 8);
        }
        else {
          uVar6 = 0;
        }
      }
      goto LAB_105def8dc;
    }
    if (uVar1 == 8) {
      uVar6 = 5;
      goto LAB_105def8dc;
    }
    if (uVar1 == 10) {
      uVar6 = 0xe;
      goto LAB_105def8dc;
    }
  }
  uVar6 = 2;
LAB_105def8dc:
  func_0x00010c1c5440(puVar7,param_2,uVar6);
  func_0x00010c1bf9a0(puVar7,param_2,param_4);
  func_0x00010c216ea0(puVar7,param_2,puVar2);
  func_0x00010c1b9300(puVar7,param_2,puVar3);
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c293fc0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar6);
  _objc_release(uVar10);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _CACurrentMediaTime();
    *(ulong *)(puVar2 + 0x50) =
         CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,CONCAT13(uVar15,CONCAT12(
                                                  uVar14,CONCAT11(uVar13,uVar12)))))));
    return;
  }
  return;
}



/* Entry: 105def998; end: 105def9bb; -[SCPreviewUserInteractionStateLogger onPreviewStarted] */

void FUN_105def998(undefined8 param_1,long param_2)

{
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x50) = param_1;
  return;
}



/* Entry: 105def9bc; end: 105def9cf; -[SCPreviewUserInteractionStateLogger _interactionState:canBeEnteredDuringExistingInteractionState:] */

bool FUN_105def9bc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  return param_3 == 4 && param_4 == 0 || param_4 == 0xd;
}



/* Entry: 105def9d0; end: 105def9f3; -[SCPreviewUserInteractionStateLogger _latencyLoggerToolTypeForInteractionState:] */

undefined8 FUN_105def9d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0xe) {
    return *(undefined8 *)(&UNK_10ddd0cb8 + (param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 105def9f4; end: 105defa13; -[SCPreviewUserInteractionStateLogger _editToolNameForInteractionState:] */

undefined8 FUN_105def9f4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0x10) {
    return *(undefined8 *)(&UNK_10ddd0d28 + param_3 * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 105defa14; end: 105defa93; -[SCPreviewUserInteractionStateLogger .cxx_destruct] */

void FUN_105defa14(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105defa94; end: 105defabf; +[SCGrapheneGeofilterMetric visibleCount] */

void FUN_105defa94(void)

{
  _objc_alloc(PTR_PTR_1126c4c78);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105defac0; end: 105defb5f; -[SCGrapheneGeofilterMetric description] */

void FUN_105defac0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2ac58;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e2ac58,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ed258;
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



/* Entry: 105defb60; end: 105defca3; -[SCGrapheneRegistry geofilterGraphene] */

void FUN_105defb60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105defbe8;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c22f0 != -1) {
    func_0x00010002a2fc(0x1136c22f0,&puStack_48);
  }
  uVar1 = uRam00000001136c22e8;
  _objc_retain(uRam00000001136c22e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105defca4; end: 105df0263; -[SCPreviewScopeServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105defca4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar15 = (long)_DAT_112736df4;
  lVar18 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar2 = lVar18;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar17 = param_1 + _DAT_112736df8;
    _objc_loadWeakRetained();
    lVar3 = lVar17;
    func_0x00010bf9f4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b25c0;
    _objc_opt_new(PTR_PTR_1126b25c0);
    puVar5 = puVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010bf8cba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar17);
  }
  else {
    _objc_retain(lVar2);
    lVar6 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar18);
  lVar18 = param_1 + lVar15;
  _objc_loadWeakRetained(lVar18);
  lVar2 = lVar18;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar18);
  uVar7 = param_1 + lVar15;
  _objc_loadWeakRetained();
  uVar8 = uVar7;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar4 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar9 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar4);
  uVar7 = uVar8;
  if ((uVar9 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(uVar8);
  puVar4 = PTR_PTR_1126c4ce8;
  _objc_alloc(PTR_PTR_1126c4ce8);
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_112736e00;
    _objc_loadWeakRetained(lVar18);
  }
  lVar2 = lVar18;
  func_0x00010c293740(lVar18);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_112736e10;
    _objc_loadWeakRetained(lVar17);
  }
  lVar3 = lVar17;
  func_0x00010bfc1300(lVar17);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf39940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d440(puVar4);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar17);
  _objc_release(lVar2);
  _objc_release(lVar18);
  puVar12 = PTR_PTR_1126c4cf0;
  _objc_alloc();
  lVar18 = param_1 + _DAT_112736df8;
  _objc_loadWeakRetained(lVar18);
  lVar2 = lVar18;
  func_0x00010bf9f4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00eda0();
  _objc_release(lVar2);
  _objc_release(lVar18);
  _objc_initWeak(auStack_80,param_1);
  puVar5 = (undefined *)(param_1 + lVar15);
  _objc_loadWeakRetained();
  puVar13 = puVar5;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  if (puVar13 == (undefined *)0x0) {
    puVar14 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105df0264;
  puStack_a8 = &UNK_1108e9d38;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(puVar12);
  puStack_a0 = puVar12;
  _objc_retain(lVar6);
  lStack_98 = lVar6;
  _objc_retain(uVar7);
  uStack_90 = uVar7;
  func_0x00010c297260(puVar14);
  if (puVar13 == (undefined *)0x0) {
    _objc_release(puVar14);
  }
  _objc_release(puVar13);
  _objc_release(puVar5);
  _objc_initWeak(auStack_c8,param_1);
  puVar13 = puVar12;
  func_0x00010c240640();
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_105df0630;
  puStack_e8 = &UNK_1108e7960;
  _objc_retain(lVar6);
  lStack_e0 = lVar6;
  _objc_copyWeak(auStack_d0,auStack_c8);
  _objc_retain(puVar13);
  puStack_d8 = puVar13;
  func_0x00010befa300(uVar7);
  puVar5 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_108,auStack_c8);
  func_0x00010bf11fe0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_112736e20;
    _objc_loadWeakRetained(lVar18);
  }
  func_0x00010c16a940(lVar18);
  _objc_release(lVar18);
  _objc_release(puVar5);
  uVar16 = 0;
  if (param_1 != 0) {
    uVar16 = *(undefined8 *)(param_1 + _DAT_112736e28);
  }
  _objc_retain(uVar16);
  func_0x00010bf9d660(uVar16);
  _objc_release(uVar16);
  _objc_destroyWeak(auStack_108);
  _objc_release(puStack_d8);
  _objc_destroyWeak(auStack_d0);
  _objc_release(lStack_e0);
  _objc_release(puVar13);
  _objc_destroyWeak(auStack_c8);
  _objc_release(uStack_90);
  _objc_release(lStack_98);
  _objc_release(puStack_a0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar12);
  _objc_release(puVar4);
  _objc_release(uVar7);
  _objc_release(lVar6);
  return;
}



/* Entry: 105df0264; end: 105df05b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df0264(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 == 0) goto LAB_105df058c;
  func_0x00010c2042c0(*(undefined8 *)(param_1 + 0x20));
  lVar8 = lVar2 + _DAT_112736df4;
  _objc_loadWeakRetained();
  lVar7 = lVar8;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar8);
  if (lVar7 == 0) {
    lVar8 = param_2;
    func_0x00010bfdc2e0();
    if ((int)lVar8 != 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      lVar8 = param_2;
      func_0x00010c23fe00(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_2;
      func_0x00010c0c5200(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c139f00(uVar10);
      goto LAB_105df037c;
    }
  }
  else {
    lVar8 = lVar2 + _DAT_112736e08;
    _objc_loadWeakRetained(lVar8);
    lVar7 = lVar8;
    func_0x00010bf51700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12ce20();
    _objc_release(lVar3);
LAB_105df037c:
    _objc_release(lVar7);
    _objc_release(lVar8);
    func_0x00010c195460(*(undefined8 *)(param_1 + 0x28));
  }
  lVar8 = lVar2 + _DAT_112736e0c;
  _objc_loadWeakRetained(lVar8);
  lVar7 = lVar8;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07bf40(param_2);
  func_0x00010c2b6ac0(lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar8);
  lVar8 = lVar2 + _DAT_112736e0c;
  _objc_loadWeakRetained(lVar8);
  lVar7 = lVar8;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4ca00(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c2aae60(lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar8);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bf926c0();
  if (iVar1 != 0) {
    uVar5 = *(ulong *)(param_1 + 0x28);
    func_0x00010c09dea0();
    if (uVar5 != 0xffffffffffffffff) {
      uVar9 = 0;
      do {
        puVar6 = PTR_PTR_1126affe8;
        if (uVar9 < uVar5) {
          func_0x00010c09e180();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bfccec0(PTR_PTR_1126affe8);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010bf6c5c0(*(undefined8 *)(param_1 + 0x28));
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar6);
        uVar9 = uVar9 + 1;
      } while (uVar5 + 1 != uVar9);
    }
    func_0x00010bf30e80(*(undefined8 *)(param_1 + 0x28));
    lVar7 = *(long *)(param_1 + 0x30);
    func_0x00010c26fea0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(lVar8);
    lVar8 = lVar7;
    func_0x00010c110bc0();
    if (lVar8 != 1) {
      lVar8 = *(long *)(param_1 + 0x28);
      func_0x00010c09dea0();
      if ((lVar7 != 0) && (lVar8 != 0)) {
        func_0x00010c09dea0(*(undefined8 *)(param_1 + 0x28));
      }
    }
    _objc_release(lVar7);
  }
LAB_105df058c:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105df05b4; end: 105df062f;  */

bool FUN_105df05b4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08eee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar3 != 0;
}



/* Entry: 105df0630; end: 105df06df;  */

void FUN_105df0630(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  func_0x00010bf30e80(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  FUN_105df06e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204260();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  FUN_105df06e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e1aa0();
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105df06e0; end: 105df0703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df06e0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112736dfc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105df0704; end: 105df0743;  */

void FUN_105df0704(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeae40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105df0744; end: 105df07d3; -[SCPreviewScopeServicesEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df0744(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = (long)_DAT_112736dfc;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c204260();
  _objc_release(lVar1);
  lVar2 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c1e1aa0();
  _objc_release(lVar2);
  puStack_38 = PTR_PTR_1126ed260;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105df07d4; end: 105df08f7; -[SCPreviewScopeServicesEntryPoint _createAssetSaver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df07d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126c4cf8;
  _objc_alloc(PTR_PTR_1126c4cf8);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_112736e18;
    _objc_loadWeakRetained(lVar6);
  }
  lVar2 = lVar6;
  func_0x00010bf4c240(lVar6);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112736e1c;
    _objc_loadWeakRetained(lVar7);
  }
  lVar3 = lVar7;
  func_0x00010c127e00(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = 0;
  if (param_1 != 0) {
    lVar4 = param_1 + _DAT_112736e14;
    _objc_loadWeakRetained(lVar4);
  }
  lVar5 = lVar4;
  func_0x00010c095b60(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002fe0(puVar1,param_2,lVar2,lVar3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105df08f8; end: 105df0917; -[SCPreviewScopeServicesEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df08f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112736e24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105df0918; end: 105df092b; -[SCPreviewScopeServicesEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df0918(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112736e24,param_3);
  return;
}



/* Entry: 105df092c; end: 105df0a07; -[SCPreviewScopeServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df092c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112736e28,0);
  _objc_destroyWeak(param_1 + _DAT_112736e24);
  _objc_destroyWeak(param_1 + _DAT_112736e20);
  _objc_destroyWeak(param_1 + _DAT_112736e1c);
  _objc_destroyWeak(param_1 + _DAT_112736dfc);
  _objc_destroyWeak(param_1 + _DAT_112736e18);
  _objc_destroyWeak(param_1 + _DAT_112736e14);
  _objc_destroyWeak(param_1 + _DAT_112736e10);
  _objc_destroyWeak(param_1 + _DAT_112736e0c);
  _objc_destroyWeak(param_1 + _DAT_112736e08);
  _objc_destroyWeak(param_1 + _DAT_112736df8);
  _objc_destroyWeak(param_1 + _DAT_112736e04);
  _objc_destroyWeak(param_1 + _DAT_112736df4);
  _objc_destroyWeak(param_1 + _DAT_112736e00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112736e2c,0);
  return;
}



/* Entry: 105df0a08; end: 105df0aef; -[SCUcoLensMediaAssetSaver initWithContentDelivery:genericAssetsRegistry:lensPerformerProvider:] */

undefined1 *
FUN_105df0a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ed268;
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
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105df0af0; end: 105df0c3f; -[SCUcoLensMediaAssetSaver saveAssetForLensId:asset:completion:] */

void FUN_105df0af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010be3d180(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105df0c40;
  puStack_70 = &UNK_110857fd0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  uStack_68 = param_4;
  _objc_retain(param_3);
  uStack_60 = param_3;
  _objc_retain(param_5);
  uStack_58 = param_5;
  func_0x000100a0df38(param_1,&puStack_88);
  _objc_release(param_1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105df0c40; end: 105df0d27;  */

void FUN_105df0c40(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_48,param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010be98de0(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105df0d28; end: 105df0ddf;  */

void FUN_105df0d28(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  if (param_2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_2,0,0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar2);
    func_0x00010be98e20();
    _objc_release(lVar2);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be8b8c0();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x000105df0ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  return;
}



/* Entry: 105df0de0; end: 105df0e2b; -[SCUcoLensMediaAssetSaver removeAssetsForLensId:] */

void FUN_105df0de0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010be8b8c0(param_1,param_2,param_3);
    func_0x00010bdf9e20(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 105df0e2c; end: 105df0e33; -[SCUcoLensMediaAssetSaver _contentDelivery] */

void FUN_105df0e2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 105df0e34; end: 105df0e7b; -[SCUcoLensMediaAssetSaver _intensiveWorkPerformer] */

void FUN_105df0e34(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105df0e7c; end: 105df103f; -[SCUcoLensMediaAssetSaver _saveDataToContentManager:lensId:completion:] */

void FUN_105df0e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b08b8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0295e0();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x40f5180000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  func_0x00010bde7b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c14a860(param_1);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105df1040; end: 105df1093;  */

void FUN_105df1040(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010be96080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105df1090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  return;
}



/* Entry: 105df1094; end: 105df1217; -[SCUcoLensMediaAssetSaver _retreiveContentFilePathFromContentKey:lensId:completion:] */

void FUN_105df1094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  func_0x00010bde7b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c13e560(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105df1218; end: 105df1357;  */

void FUN_105df1218(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x21;
  long unaff_x22;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfcaaa0();
  if (lVar1 == 0) {
    ppuStack_68 = &PTR____CFConstantStringClassReference_110e2ac98;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_60 = &PTR____CFConstantStringClassReference_110e2acb8;
    unaff_x22 = param_2;
    uStack_58 = uVar2;
    func_0x00010bfc5880();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_50 = unaff_x22;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x22);
    _objc_release(uVar2);
    unaff_x21 = param_1 + 0x38;
    _objc_loadWeakRetained();
    param_4 = *(long *)(param_1 + 0x20);
    param_3 = *(long *)(param_1 + 0x28);
    func_0x00010be98d00();
    _objc_release(unaff_x21);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar3);
    _objc_release(puVar3);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  }
  lVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_105df1358;
  lStack_a0 = unaff_x22;
  lStack_98 = unaff_x21;
  lStack_90 = param_1;
  lStack_88 = param_2;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_a8,lVar1);
    func_0x00010be3d180(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_105df1480;
    puStack_c8 = &UNK_110848218;
    _objc_copyWeak(auStack_b0,auStack_a8);
    _objc_retain(param_3);
    lStack_c0 = param_3;
    _objc_retain(param_4);
    lStack_b8 = param_4;
    func_0x000100a0df38(lVar1,&puStack_e0);
    _objc_release(lVar1);
    _objc_release(lStack_b8);
    _objc_release(lStack_c0);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105df1358; end: 105df147f; -[SCUcoLensMediaAssetSaver _saveContentKeyForLensId:key:] */

void FUN_105df1358(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010be3d180(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105df1480;
    puStack_58 = &UNK_110848218;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_50 = param_3;
    _objc_retain(param_4);
    lStack_48 = param_4;
    func_0x000100a0df38(param_1,&puStack_70);
    _objc_release(param_1);
    _objc_release(lStack_48);
    _objc_release(lStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105df1480; end: 105df1507;  */

void FUN_105df1480(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = *(undefined **)(lVar1 + 0x20);
    func_0x00010c0e00e0(puVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    }
    func_0x00010befa120(puVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x20),param_2,puVar2,*(undefined8 *)(param_1 + 0x20)
                       );
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105df1508; end: 105df15ff; -[SCUcoLensMediaAssetSaver _removeCachedContentForLensId:] */

void FUN_105df1508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010be3d180(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105df1600;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x000100a0df38(param_1,&puStack_68);
  _objc_release(param_1);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105df1600; end: 105df16a7;  */

void FUN_105df1600(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x20);
    func_0x00010c0e00e0(lVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c12d3e0(*(undefined8 *)(lVar1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x20));
    if (lVar3 != 0) {
      lVar2 = lVar1;
      func_0x00010bde7b60(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12b940();
      _objc_release(lVar2);
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105df16a8; end: 105df171b; -[SCUcoLensMediaAssetSaver _saveDataToLensMediaGenericAsset:lensId:] */

void FUN_105df16a8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c4d00;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010bff4360();
    _objc_release(param_3);
    func_0x00010c28f1a0(*(undefined8 *)(param_1 + 0x10),param_2,puVar1,0x12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105df171c; end: 105df1727; -[SCUcoLensMediaAssetSaver _deleteDataLensMediaGenericAssetForLensId:] */

void FUN_105df171c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12b2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAssetForAssetType__1126286d0,0x12);
  return;
}



/* Entry: 105df1728; end: 105df176f; -[SCUcoLensMediaAssetSaver .cxx_destruct] */

void FUN_105df1728(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105df1770; end: 105df1917; -[SCUcoLensMediaAssetTransferPlugin initWithSnapEditorAnnouncer:lensPerformerProvider:lensMediaAssetSaver:fileManager:previewConfiguration:metadataProvider:appliedEffectsObservable:] */

undefined1 *
FUN_105df1770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_58 = PTR_PTR_1126ed270;
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
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    func_0x00010beada20(puVar1);
    func_0x00010beac400(puVar1);
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



/* Entry: 105df1918; end: 105df195f; -[SCUcoLensMediaAssetTransferPlugin _serialInitiatedQueuePerformer] */

void FUN_105df1918(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15e720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105df1960; end: 105df1967; -[SCUcoLensMediaAssetTransferPlugin _lensMediaAssetSaver] */

void FUN_105df1960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 105df1968; end: 105df1b6b; -[SCUcoLensMediaAssetTransferPlugin handleRequest:] */

void FUN_105df1968(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  lVar2 = param_3;
  func_0x00010bf95e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf32ee0();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    lVar2 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0998a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bdd7ea0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      _objc_opt_class(param_1);
      func_0x00010be4a320();
    }
    else {
      _objc_initWeak(auStack_58,param_1);
      func_0x00010be4b360(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x00010c149fa0(param_1);
      _objc_release(param_1);
      _objc_destroyWeak(auStack_60);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_58);
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    _objc_opt_class(param_1);
    func_0x00010be4a320();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105df1b6c; end: 105df1bf7;  */

void FUN_105df1b6c(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    _objc_opt_class(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bea78a0();
    _objc_release(lVar1);
    _objc_opt_class(*(undefined8 *)(param_1 + 0x20));
  }
  func_0x00010be4a320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105df1bf8; end: 105df1bfb; -[SCUcoLensMediaAssetTransferPlugin reset] */

void FUN_105df1bf8(void)

{
  return;
}



/* Entry: 105df1bfc; end: 105df1d6b; +[SCUcoLensMediaAssetTransferPlugin _lensApiServiceResponseForRequest:statusCode:body:responseSubject:message:] */

void FUN_105df1bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_5);
  puVar2 = param_5;
  if (param_5 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    if (param_7 != 0) {
      func_0x00010c1d0640(puVar1,param_2,param_7,&PTR____CFConstantStringClassReference_110dd9438);
    }
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar1,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126b0278;
  _objc_alloc(PTR_PTR_1126b0278);
  uVar3 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0f3900(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03efa0(puVar1,param_2,uVar3,param_4,uVar4,puVar2,0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c0d9840(param_6,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105df1d6c; end: 105df1ebb; -[SCUcoLensMediaAssetTransferPlugin _setupEditorEventsSubscription] */

void FUN_105df1d6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9d240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea13e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105df1ebc; end: 105df1f03;  */

void FUN_105df1ebc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be306c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105df1f04; end: 105df2067; -[SCUcoLensMediaAssetTransferPlugin _setupLensMetadataSubscription] */

void FUN_105df1f04(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf07ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x28);
  }
  _objc_retain(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010bea13e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c0e0ea0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  lVar1 = lVar2;
  func_0x00010c25ff60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar3);
  return;
}



/* Entry: 105df2068; end: 105df20d7;  */

void FUN_105df2068(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be2b4c0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105df20d8; end: 105df220b; -[SCUcoLensMediaAssetTransferPlugin _handleSnapEditorStateUpdate:] */

void FUN_105df20d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0bff20(param_3);
  if (*(char *)(puStack_48 + 3) == '\x01') {
    lVar1 = param_1;
    func_0x00010be4b360(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c094540(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b320(lVar1);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return;
}



/* Entry: 105df220c; end: 105df2233;  */

void FUN_105df220c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105df2234; end: 105df2327; -[SCUcoLensMediaAssetTransferPlugin _handleLensMetadataUpdate:] */

void FUN_105df2234(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x40);
  func_0x00010bf51e00();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0(uVar2,param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      func_0x00010c200d40(*(undefined8 *)(param_1 + 0x38),param_2,0);
      lVar4 = param_1;
      func_0x00010be4b360(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c094540(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12b320(lVar4,param_2,uVar2);
      _objc_release(uVar2);
      _objc_release(lVar4);
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df2328; end: 105df244b; -[SCUcoLensMediaAssetTransferPlugin _cachedAssetFromLinkedResources:] */

void FUN_105df2328(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack_48;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uStack_48 = 0;
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64aa0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,lVar3,1,&uStack_48);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uStack_48;
    _objc_retain(uStack_48);
    func_0x00010bea13e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(param_1);
    _objc_release(uVar1);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105df244c; end: 105df245b;  */

void FUN_105df244c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),
             PTR_s_removeItemAtPath_error__112628d30,*(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 105df245c; end: 105df2487; -[SCUcoLensMediaAssetTransferPlugin _setShouldRemoveUcoDataFromMemories] */

void FUN_105df245c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c074540(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c200d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_setShouldRemoveUcoDataFromMemori_11265dd78,uVar1)
  ;
  return;
}



/* Entry: 105df2488; end: 105df250b; -[SCUcoLensMediaAssetTransferPlugin .cxx_destruct] */

void FUN_105df2488(long param_1)

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



/* Entry: 105df250c; end: 105df2773; -[SCUcoLensMediaAssetTransferPluginV2EntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df250c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + _DAT_112736e64;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b3770;
  func_0x00010c104620(PTR_PTR_1126b3770);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar5 != 0) {
    _objc_initWeak(auStack_58,param_1);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bf11fe0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b0250;
    _objc_alloc(PTR_PTR_1126b0250);
    puVar7 = PTR_PTR_1126b0258;
    func_0x00010c111a80(PTR_PTR_1126b0258);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefa40(puVar6);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126b0260;
    _objc_alloc(PTR_PTR_1126b0260);
    func_0x00010c03ee80();
    param_1 = param_1 + _DAT_112736e68;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 105df2774; end: 105df27b3;  */

void FUN_105df2774(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdee600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105df27b4; end: 105df294f; -[SCUcoLensMediaAssetTransferPluginV2EntryPoint _createHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df27b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126c4d08;
  _objc_alloc(PTR_PTR_1126c4d08);
  lVar2 = param_1 + _DAT_112736e6c;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c240780();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112736e70;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112736e74;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf0b6c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112736e78;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010c110980();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112736e68;
  _objc_loadWeakRetained();
  lVar11 = param_1;
  func_0x00010bf07dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0479e0(puVar1,param_2,lVar3,lVar5,lVar7,puVar8,lVar10,0,lVar11);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105df2950; end: 105df29c3; -[SCUcoLensMediaAssetTransferPluginV2EntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df2950(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112736e6c);
  _objc_destroyWeak(param_1 + _DAT_112736e74);
  _objc_destroyWeak(param_1 + _DAT_112736e78);
  _objc_destroyWeak(param_1 + _DAT_112736e70);
  _objc_destroyWeak(param_1 + _DAT_112736e68);
  _objc_destroyWeak(param_1 + _DAT_112736e64);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736e7c);
  return;
}



/* Entry: 105df29c4; end: 105df2a6b; -[SCScreenshotLogger initWithUserTrackedLogger:] */

undefined1 * FUN_105df29c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed278;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105df2a6c; end: 105df2afb; -[SCScreenshotLogger logScreenshotSnapPreviewWithCommonLoggingParams:] */

void FUN_105df2a6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105df2afc;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105df2afc; end: 105df2b07;  */

void FUN_105df2afc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be58310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logScreenshotSnapPreviewWithCom_112573a60,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105df2b08; end: 105df2b97; -[SCScreenshotLogger logScreenshotSnapSendWithCommonLoggingParams:] */

void FUN_105df2b08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105df2b98;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105df2b98; end: 105df2ba3;  */

void FUN_105df2b98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be58330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logScreenshotSnapSendWithCommon_112573a68,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105df2ba4; end: 105df2e37; -[SCScreenshotLogger _logScreenshotSnapPreviewWithCommonLoggingParams:] */

void FUN_105df2ba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c4d10;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1d7e80();
  uVar3 = param_3;
  func_0x00010c243340(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bfb2540(param_3);
  func_0x00010c19daa0(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010bfd3440(param_3);
  func_0x00010c1a5460(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010bf2fba0(param_3);
  func_0x00010c178460(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010c0c6c20(param_3);
  lVar2 = param_1;
  func_0x00010bdc39a0(param_1,param_2,uVar3);
  func_0x00010c1c5440(puVar1,param_2,lVar2);
  uVar3 = param_3;
  func_0x00010c247520(param_3);
  func_0x00010c206c40(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010bf89ea0(param_3);
  func_0x00010c191960(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010bf5c920(param_3);
  func_0x00010c226060(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010c0ce9a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8600(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c232ee0(param_3);
  func_0x00010c2263c0(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010c14a280(param_3);
  func_0x00010c1f5840(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010c23fde0(param_3);
  func_0x00010c226de0(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010c23fd80(param_3);
  func_0x00010c226f40(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010c247520(param_3);
  func_0x00010c2056c0(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010c087b00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7380(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c2453c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2060e0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c268ec0(param_3);
  func_0x00010c211b80(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010c2a8860(param_3);
  func_0x00010c225c80(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010bf0f140(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c4e0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c2a0400(param_3);
  func_0x00010c223e80(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010c23ef00(param_3);
  _objc_release(param_3);
  func_0x00010c203740(puVar1,param_2,uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105df2e38; end: 105df33ef; -[SCScreenshotLogger _logScreenshotSnapSendWithCommonLoggingParams:] */

void FUN_105df2e38(float param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  double dVar6;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c4d18;
  _objc_opt_new(PTR_PTR_1126c4d18);
  func_0x00010c1d7e80();
  uVar2 = param_4;
  func_0x00010c243340(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bfd76a0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_4;
    func_0x00010c094540(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c240(puVar1,param_3,uVar2);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c095a20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bc480(puVar1,param_3,uVar2);
    _objc_release(uVar2);
  }
  uVar2 = param_4;
  func_0x00010bf037a0(param_4);
  func_0x00010c167f20(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010bf03500(param_4);
  func_0x00010c167e60(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010c2a8340(param_4);
  func_0x00010c225be0(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010bfb2540(param_4);
  func_0x00010c19daa0(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010bfd3440(param_4);
  func_0x00010c1a5460(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010bf2fba0(param_4);
  func_0x00010c178460(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010c0c6c20(param_4);
  lVar3 = param_2;
  func_0x00010bdc39a0(param_2,param_3,uVar2);
  func_0x00010c1c5440(puVar1,param_3,lVar3);
  uVar2 = param_4;
  func_0x00010c247520(param_4);
  func_0x00010c206c40(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010bf5c920(param_4);
  func_0x00010c226060(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010bf89ea0(param_4);
  func_0x00010c191960(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010c0ce9a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8600(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf52700(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184460(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c122b20(param_4);
  func_0x00010c1e88a0(puVar1,param_3,uVar2);
  func_0x00010c0c4ba0(param_4);
  dVar6 = (double)param_1;
  func_0x00010c205880(dVar6,puVar1);
  fVar5 = SUB84(dVar6,0);
  uVar2 = param_4;
  func_0x00010c243700(param_4);
  func_0x00010c205840(puVar1,param_3,uVar2);
  func_0x00010c29e480(param_4);
  func_0x00010c222d20((double)fVar5,puVar1);
  uVar2 = param_4;
  func_0x00010c253c00(param_4);
  func_0x00010c20abc0(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010c2551a0(param_4);
  func_0x00010c20ba80(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010c264640(param_4);
  func_0x00010c210580(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010bf1c3a0(param_4);
  func_0x00010c20a860(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010c2441e0(param_4);
  func_0x00010c20b8c0(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010bf1c3c0(param_4);
  func_0x00010c20a8a0(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010c244200(param_4);
  func_0x00010c20b900(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010c281340(param_4);
  func_0x00010c20bb20(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010c281380(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20bb40(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bfccb60(param_4);
  func_0x00010c20b040(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010bfccbc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b060(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf8e9a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aec0(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf1c420(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a8c0(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c244220(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b920(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf61f40(param_4);
  func_0x00010c20ac00(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010bf61d60(param_4);
  func_0x00010c20ac20(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010bf61d80(param_4);
  func_0x00010c20ac60(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010c2538c0(param_4);
  func_0x00010c20a840(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010bf61f60(param_4);
  func_0x00010c20acc0(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010bf61da0(param_4);
  func_0x00010c20ac40(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010bf61dc0(param_4);
  func_0x00010c20ac80(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010c2453c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2060e0(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c1101a0(param_4);
  func_0x00010c1e1760(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010c1084c0(param_4);
  func_0x00010c1e0780(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010bf219a0(param_4);
  func_0x00010c174020(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010bf219e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174060(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c2a8860(param_4);
  func_0x00010c225c80(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010bf0f140(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c4e0(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c29a680(param_4);
  func_0x00010c221b20(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010c2a0400(param_4);
  func_0x00010c223e80(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010c297de0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2208c0(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c23ef00(param_4);
  func_0x00010c203740(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010c27c4a0(param_4);
  func_0x00010c21a480(puVar1,param_3,uVar2);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105df33f0; end: 105df3487; -[SCScreenshotLogger _SCAMediaTypeFromMediaType:] */

undefined8 FUN_105df33f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3 + 1;
  if (uVar1 < 0x1c) {
    if ((1L << (uVar1 & 0x3f) & 0xd8de0fdU) != 0) {
      uVar2 = 1;
      if ((param_3 + 1U < 0x1c) && ((1L << (param_3 + 1U & 0x3f) & 0xb4b5dbbU) != 0)) {
        if (0x1a < param_3 + 1U) {
          return 0;
        }
        uVar2 = *(undefined8 *)(&UNK_10ddd0da8 + (param_3 + 1U) * 8);
      }
      return uVar2;
    }
    if (uVar1 == 8) {
      return 5;
    }
    if (uVar1 == 10) {
      return 0xe;
    }
  }
  return 2;
}



/* Entry: 105df3488; end: 105df34c3; -[SCScreenshotLogger .cxx_destruct] */

void FUN_105df3488(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105df34c4; end: 105df35cf; -[SCScreenshotLoggingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df34c4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112736e90);
  *(undefined **)(param_1 + _DAT_112736e90) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126c4d28;
  _objc_alloc(PTR_PTR_1126c4d28);
  func_0x00010c042700();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112736e94));
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105df35d0; end: 105df3667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df35d0(long param_1,undefined8 param_2)

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
    puVar3 = PTR_PTR_1126c4d20;
    _objc_alloc(PTR_PTR_1126c4d20);
    lVar1 = param_1 + _DAT_112736e8c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05f0c0(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105df3668; end: 105df36bf; -[SCScreenshotLoggingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df3668(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112736e94,0);
  _objc_destroyWeak(param_1 + _DAT_112736e8c);
  _objc_destroyWeak(param_1 + _DAT_112736e98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112736e90,0);
  return;
}



/* Entry: 105df36c0; end: 105df3853; -[SCPreviewLensServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df36c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  pcStack_70 = FUN_105df3854;
  puStack_68 = &UNK_1108e9e60;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c4d40;
  _objc_alloc(PTR_PTR_1126c4d40);
  func_0x00010c008c80();
  uVar4 = 0;
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112736ebc);
  }
  _objc_retain(uVar4);
  func_0x00010bf9d660(uVar4);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105df3854; end: 105df39c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df3854(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126c4d30;
    _objc_alloc(PTR_PTR_1126c4d30);
    lVar1 = param_1 + _DAT_112736ea0;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c0937c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_112736ea4;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf24d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_112736ea8;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c092540();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_112736eac;
    _objc_loadWeakRetained(lVar7);
    lVar8 = param_1 + _DAT_112736eb4;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar8;
    func_0x00010c092300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c023f20(puVar10,param_2,lVar2,lVar4,lVar6,lVar7,lVar9);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105df39c8; end: 105df3a7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df39c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126c4d38;
    _objc_alloc(PTR_PTR_1126c4d38);
    lVar1 = param_1 + _DAT_112736eb0;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c129f40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03f6a0(puVar4,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105df3a80; end: 105df3b0f; -[SCPreviewLensServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df3a80(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112736ebc,0);
  _objc_destroyWeak(param_1 + _DAT_112736eb8);
  _objc_destroyWeak(param_1 + _DAT_112736eb4);
  _objc_destroyWeak(param_1 + _DAT_112736eb0);
  _objc_destroyWeak(param_1 + _DAT_112736eac);
  _objc_destroyWeak(param_1 + _DAT_112736ea8);
  _objc_destroyWeak(param_1 + _DAT_112736ea4);
  _objc_destroyWeak(param_1 + _DAT_112736ea0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736e9c);
  return;
}



/* Entry: 105df3b10; end: 105df3c27; -[SCLegacyPreviewTooltipsServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df3b10(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112736edc);
  }
  _objc_retain(uVar3);
  puVar2 = PTR_PTR_1126c4d48;
  _objc_alloc(PTR_PTR_1126c4d48);
  func_0x00010c039d20();
  func_0x00010bf9d660(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105df3c28; end: 105df3c67;  */

void FUN_105df3c28(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be7ff40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105df3c68; end: 105df3e83; -[SCLegacyPreviewTooltipsServicesEntryPoint _previewTooltipsProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df3c68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
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
  
  puVar1 = PTR_PTR_1126c4d50;
  _objc_alloc();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_112736ecc;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar13;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112736ec8;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar14;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_105df3e84();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1a840();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  FUN_105df3e84();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c150cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  FUN_105df3e84(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c127bc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_112736ed4;
    _objc_loadWeakRetained(lVar15);
  }
  lVar10 = lVar15;
  func_0x00010bf45e20(lVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = 0;
  if (param_1 != 0) {
    lVar11 = param_1 + _DAT_112736ed8;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar11;
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c012000(puVar1,param_2,lVar2,lVar3,lVar5,lVar7,lVar9,lVar10,lVar12);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar15);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar14);
  _objc_release(lVar2);
  _objc_release(lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105df3e84; end: 105df3ea7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df3e84(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112736ed0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105df3ea8; end: 105df3f2b; -[SCLegacyPreviewTooltipsServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df3ea8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112736edc,0);
  _objc_destroyWeak(param_1 + _DAT_112736ed8);
  _objc_destroyWeak(param_1 + _DAT_112736ed4);
  _objc_destroyWeak(param_1 + _DAT_112736ed0);
  _objc_destroyWeak(param_1 + _DAT_112736ecc);
  _objc_destroyWeak(param_1 + _DAT_112736ec8);
  _objc_destroyWeak(param_1 + _DAT_112736ec4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736ec0);
  return;
}



/* Entry: 105df3f2c; end: 105df41bb; -[SCPreviewTooltipsProviderImpl initWithFeatureSettingsService:preferences:birthdayInfoProvider:scoreInfoProvider:registrationInfoProvider:cameraConfig:creativeToolsABProvider:] */

undefined1 *
FUN_105df3f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126ed280;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c157620();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1add40();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c157600();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1add40();
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010c087fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c087fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010c06e1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar5);
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



/* Entry: 105df41bc; end: 105df41f3; -[SCPreviewTooltipsProviderImpl shouldDisplayCaptionHelp] */

ulong FUN_105df41bc(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c22f6e0();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c22f890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_shouldDisplayLapsedCaptionHelpTo_112669848);
  return param_1;
}


