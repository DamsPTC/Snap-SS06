/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108bab080; end: 108bab087; -[SCUnlockableSwipeInteraction swipeTimesSec] */

undefined8 FUN_108bab080(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108bab088; end: 108bab0b7; -[SCUnlockableSwipeInteraction setSwipeTimesSec:] */

void FUN_108bab088(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bab0b8; end: 108bab0bf; -[SCUnlockableSwipeInteraction recordingTimeSec] */

undefined8 FUN_108bab0b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108bab0c0; end: 108bab0c7; -[SCUnlockableSwipeInteraction setRecordingTimeSec:] */

void FUN_108bab0c0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x70) = param_1;
  return;
}



/* Entry: 108bab0c8; end: 108bab0cf; -[SCUnlockableSwipeInteraction postCaptureTimeSec] */

undefined8 FUN_108bab0c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108bab0d0; end: 108bab0d7; -[SCUnlockableSwipeInteraction setPostCaptureTimeSec:] */

void FUN_108bab0d0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x78) = param_1;
  return;
}



/* Entry: 108bab0d8; end: 108bab0df; -[SCUnlockableSwipeInteraction flagInfo] */

undefined8 FUN_108bab0d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 108bab0e0; end: 108bab10f; -[SCUnlockableSwipeInteraction setFlagInfo:] */

void FUN_108bab0e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bab110; end: 108bab117; -[SCUnlockableSwipeInteraction maxSwipeTimeSecOverride] */

undefined8 FUN_108bab110(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 108bab118; end: 108bab11f; -[SCUnlockableSwipeInteraction setMaxSwipeTimeSecOverride:] */

void FUN_108bab118(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x88) = param_1;
  return;
}



/* Entry: 108bab120; end: 108bab127; -[SCUnlockableSwipeInteraction maxContinuousTimeSecOverride] */

undefined8 FUN_108bab120(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 108bab128; end: 108bab12f; -[SCUnlockableSwipeInteraction setMaxContinuousTimeSecOverride:] */

void FUN_108bab128(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x90) = param_1;
  return;
}



/* Entry: 108bab130; end: 108bab137; -[SCUnlockableSwipeInteraction noFillServeItemId] */

undefined8 FUN_108bab130(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 108bab138; end: 108bab13f; -[SCUnlockableSwipeInteraction setNoFillServeItemId:] */

void FUN_108bab138(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108bab140; end: 108bab147; -[SCUnlockableSwipeInteraction noFillEncryptedAdTrackData] */

undefined8 FUN_108bab140(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 108bab148; end: 108bab14f; -[SCUnlockableSwipeInteraction setNoFillEncryptedAdTrackData:] */

void FUN_108bab148(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108bab150; end: 108bab1c7; -[SCUnlockableSwipeInteraction .cxx_destruct] */

void FUN_108bab150(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108bab1c8; end: 108bab1d3; -[SCUnlockablesMetricsServices .cxx_destruct] */

void FUN_108bab1c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bab1d4; end: 108bab4b3; -[SCUnlockableAdTrackInfo initWithCarouselSize:trackUrl:sequenceNumber:trackRequestCookie:sessionId:requestId:opportunityRequestId:lastInteractedLensId:rawUserData:creationTimestampMillis:deviceHeight:deviceWidth:trackType:adType:snapCreationInfo:swipeInteractions:carouselExitEvent:lensSource:inventoryType:] */

undefined8 *
FUN_108bab1d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_17);
  _objc_retain();
  puStack_70 = PTR_PTR_1126fd698;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    puVar1[3] = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    puVar1[0xd] = param_15;
    puVar1[0xe] = param_16;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
    puVar1[0x11] = param_19;
    puVar1[0x12] = param_20;
    puVar1[0x13] = param_21;
  }
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
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 108bab4b4; end: 108bab77f; -[SCUnlockableAdTrackInfo initWithCoder:] */

undefined1 * FUN_108bab4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd698;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x88) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x90) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x98) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bab780; end: 108bab7a3; -[SCUnlockableAdTrackInfo copyWithZone:] */

undefined8 FUN_108bab780(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bab7a4; end: 108bab957; -[SCUnlockableAdTrackInfo encodeWithCoder:] */

void FUN_108bab7a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110eeaa38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110eeaa58);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110eeaa78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110eeaa98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110ebfff8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110ead5b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110eeaab8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110eeaad8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110eeaaf8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110eeab18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110eeab38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110eeab58);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110eeab78);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110e2dd18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110eeab98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x80),
                      &PTR____CFConstantStringClassReference_110eeabb8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x88),
                      &PTR____CFConstantStringClassReference_110eeabd8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x90),
                      &PTR____CFConstantStringClassReference_110eeabf8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x98),
                      &PTR____CFConstantStringClassReference_110eeac18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bab958; end: 108baba73; -[SCUnlockableAdTrackInfo hash] */

undefined8 * FUN_108bab958(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_c0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c0 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_b0 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_b8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x68));
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x70));
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x88));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x90));
  lVar5 = *(long *)(param_1 + 0x98);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_48 = uVar2;
  func_0x000107c3191c(&uStack_c0,0x13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108babc54:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108babc60;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((((ulong)puVar4 & 1) != 0) &&
         ((((*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8) &&
            (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18))) &&
           (*(long *)((long)puVar3 + 0x68) == *(long *)(param_3 + 0x68))) &&
          ((*(long *)((long)puVar3 + 0x70) == *(long *)(param_3 + 0x70) &&
           (*(long *)((long)puVar3 + 0x88) == *(long *)(param_3 + 0x88))))))) &&
        (*(long *)((long)puVar3 + 0x90) == *(long *)(param_3 + 0x90))) &&
       (*(long *)((long)puVar3 + 0x98) == *(long *)(param_3 + 0x98))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x20);
        if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x28);
          if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x30);
            if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x38);
              if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x40);
                if ((lVar5 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x48);
                  if ((lVar5 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x50);
                    if ((lVar5 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)puVar3 + 0x58);
                      if ((lVar5 == *(long *)(param_3 + 0x58)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = *(long *)((long)puVar3 + 0x60);
                        if ((lVar5 == *(long *)(param_3 + 0x60)) ||
                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = *(long *)((long)puVar3 + 0x78);
                          if ((lVar5 == *(long *)(param_3 + 0x78)) ||
                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            puVar6 = *(undefined1 **)((long)puVar3 + 0x80);
                            if (puVar6 != *(undefined1 **)(param_3 + 0x80)) {
                              func_0x00010c071ae0();
                              goto LAB_108babc60;
                            }
                            goto LAB_108babc54;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108babc60:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108baba74; end: 108babc7b; -[SCUnlockableAdTrackInfo isEqual:] */

long FUN_108baba74(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108babc54:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108babc60;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
            (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
           (*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68))) &&
          ((*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70) &&
           (*(long *)(param_1 + 0x88) == *(long *)(param_3 + 0x88))))))) &&
        (*(long *)(param_1 + 0x90) == *(long *)(param_3 + 0x90))) &&
       (*(long *)(param_1 + 0x98) == *(long *)(param_3 + 0x98))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x50);
                    if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x58);
                      if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x60);
                        if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x78);
                          if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x80);
                            if (lVar3 != *(long *)(param_3 + 0x80)) {
                              func_0x00010c071ae0();
                              goto LAB_108babc60;
                            }
                            goto LAB_108babc54;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108babc60:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108babc7c; end: 108babc83; -[SCUnlockableAdTrackInfo carouselSize] */

undefined8 FUN_108babc7c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108babc84; end: 108babc8b; -[SCUnlockableAdTrackInfo trackUrl] */

undefined8 FUN_108babc84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108babc8c; end: 108babc93; -[SCUnlockableAdTrackInfo sequenceNumber] */

undefined8 FUN_108babc8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108babc94; end: 108babc9b; -[SCUnlockableAdTrackInfo trackRequestCookie] */

undefined8 FUN_108babc94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108babc9c; end: 108babca3; -[SCUnlockableAdTrackInfo sessionId] */

undefined8 FUN_108babc9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108babca4; end: 108babcab; -[SCUnlockableAdTrackInfo requestId] */

undefined8 FUN_108babca4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108babcac; end: 108babcb3; -[SCUnlockableAdTrackInfo opportunityRequestId] */

undefined8 FUN_108babcac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108babcb4; end: 108babcbb; -[SCUnlockableAdTrackInfo lastInteractedLensId] */

undefined8 FUN_108babcb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108babcbc; end: 108babcc3; -[SCUnlockableAdTrackInfo rawUserData] */

undefined8 FUN_108babcbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108babcc4; end: 108babccb; -[SCUnlockableAdTrackInfo creationTimestampMillis] */

undefined8 FUN_108babcc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108babccc; end: 108babcd3; -[SCUnlockableAdTrackInfo deviceHeight] */

undefined8 FUN_108babccc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108babcd4; end: 108babcdb; -[SCUnlockableAdTrackInfo deviceWidth] */

undefined8 FUN_108babcd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108babcdc; end: 108babce3; -[SCUnlockableAdTrackInfo trackType] */

undefined8 FUN_108babcdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108babce4; end: 108babceb; -[SCUnlockableAdTrackInfo adType] */

undefined8 FUN_108babce4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108babcec; end: 108babcf3; -[SCUnlockableAdTrackInfo snapCreationInfo] */

undefined8 FUN_108babcec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108babcf4; end: 108babcfb; -[SCUnlockableAdTrackInfo swipeInteractions] */

undefined8 FUN_108babcf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 108babcfc; end: 108babd03; -[SCUnlockableAdTrackInfo carouselExitEvent] */

undefined8 FUN_108babcfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 108babd04; end: 108babd0b; -[SCUnlockableAdTrackInfo lensSource] */

undefined8 FUN_108babd04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 108babd0c; end: 108babd13; -[SCUnlockableAdTrackInfo inventoryType] */

undefined8 FUN_108babd0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 108babd14; end: 108babdbb; -[SCUnlockableAdTrackInfo .cxx_destruct] */

void FUN_108babd14(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108babdbc; end: 108babdd7; +[SCUnlockableAdTrackInfoBuilder unlockableAdTrackInfo] */

void FUN_108babdbc(void)

{
  _objc_alloc_init(PTR_PTR_1126d0f48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108babdd8; end: 108bac26b; +[SCUnlockableAdTrackInfoBuilder unlockableAdTrackInfoFromExistingUnlockableAdTrackInfo:] */

void FUN_108babdd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  
  puVar1 = PTR_PTR_1126d0f48;
  _objc_retain(param_3);
  func_0x00010c280ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf32ae0(param_3);
  puVar3 = puVar1;
  func_0x00010c2aa380(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c278ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2bbae0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c15e680(param_3);
  puVar6 = puVar4;
  func_0x00010c2b8360(puVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c278600();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2bba40(puVar6,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2b8500(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c135700();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2b70c0(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c0ebce0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c2b4f20(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c089040();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010c2b2180(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c120400();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010c2b6820(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010bf5ab60();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010c2ab3e0(puVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010bf70600();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010c2ac380(puVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010bf71240();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010c2ac3c0(puVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_3;
  func_0x00010c278a40(param_3);
  puVar25 = puVar23;
  func_0x00010c2bbac0(puVar23,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_3;
  func_0x00010bef60a0(param_3);
  puVar26 = puVar25;
  func_0x00010c2a7e20(puVar25,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_3;
  func_0x00010c23fb80(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar26;
  func_0x00010c2b9260(puVar26,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = param_3;
  func_0x00010c264ca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar27;
  func_0x00010c2bab80(puVar27,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = param_3;
  func_0x00010bf326a0(param_3);
  puVar31 = puVar29;
  func_0x00010c2aa2c0(puVar29,param_2,uVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = param_3;
  func_0x00010c096ca0(param_3);
  puVar32 = puVar31;
  func_0x00010c2b2ca0(puVar31,param_2,uVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = param_3;
  func_0x00010c06a4a0(param_3);
  _objc_release(param_3);
  puVar33 = puVar32;
  func_0x00010c2b0040(puVar32,param_2,uVar30);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(puVar29);
  _objc_release(uVar28);
  _objc_release(puVar27);
  _objc_release(uVar24);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar23);
  _objc_release(uVar22);
  _objc_release(puVar21);
  _objc_release(uVar20);
  _objc_release(puVar19);
  _objc_release(uVar18);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar33);
  return;
}



/* Entry: 108bac26c; end: 108bac2d7; -[SCUnlockableAdTrackInfoBuilder build] */

void FUN_108bac26c(void)

{
  _objc_alloc(PTR_PTR_1126daf88);
  func_0x00010bffcd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bac2d8; end: 108bac2df; -[SCUnlockableAdTrackInfoBuilder withCarouselSize:] */

void FUN_108bac2d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108bac2e0; end: 108bac317; -[SCUnlockableAdTrackInfoBuilder withTrackUrl:] */

long FUN_108bac2e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108bac318; end: 108bac31f; -[SCUnlockableAdTrackInfoBuilder withSequenceNumber:] */

void FUN_108bac318(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 108bac320; end: 108bac357; -[SCUnlockableAdTrackInfoBuilder withTrackRequestCookie:] */

long FUN_108bac320(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108bac358; end: 108bac38f; -[SCUnlockableAdTrackInfoBuilder withSessionId:] */

long FUN_108bac358(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108bac390; end: 108bac3c7; -[SCUnlockableAdTrackInfoBuilder withRequestId:] */

long FUN_108bac390(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108bac3c8; end: 108bac3ff; -[SCUnlockableAdTrackInfoBuilder withOpportunityRequestId:] */

long FUN_108bac3c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108bac400; end: 108bac437; -[SCUnlockableAdTrackInfoBuilder withLastInteractedLensId:] */

long FUN_108bac400(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108bac438; end: 108bac46f; -[SCUnlockableAdTrackInfoBuilder withRawUserData:] */

long FUN_108bac438(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108bac470; end: 108bac4a7; -[SCUnlockableAdTrackInfoBuilder withCreationTimestampMillis:] */

long FUN_108bac470(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108bac4a8; end: 108bac4df; -[SCUnlockableAdTrackInfoBuilder withDeviceHeight:] */

long FUN_108bac4a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108bac4e0; end: 108bac517; -[SCUnlockableAdTrackInfoBuilder withDeviceWidth:] */

long FUN_108bac4e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108bac518; end: 108bac51f; -[SCUnlockableAdTrackInfoBuilder withTrackType:] */

void FUN_108bac518(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 108bac520; end: 108bac527; -[SCUnlockableAdTrackInfoBuilder withAdType:] */

void FUN_108bac520(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 108bac528; end: 108bac55f; -[SCUnlockableAdTrackInfoBuilder withSnapCreationInfo:] */

long FUN_108bac528(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108bac560; end: 108bac597; -[SCUnlockableAdTrackInfoBuilder withSwipeInteractions:] */

long FUN_108bac560(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108bac598; end: 108bac59f; -[SCUnlockableAdTrackInfoBuilder withCarouselExitEvent:] */

void FUN_108bac598(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 108bac5a0; end: 108bac5a7; -[SCUnlockableAdTrackInfoBuilder withLensSource:] */

void FUN_108bac5a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 108bac5a8; end: 108bac5af; -[SCUnlockableAdTrackInfoBuilder withInventoryType:] */

void FUN_108bac5a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 108bac5b0; end: 108bac657; -[SCUnlockableAdTrackInfoBuilder .cxx_destruct] */

void FUN_108bac5b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108bac658; end: 108bac6b7; -[SCUnlockableAttachmentLoadingAnalytics initWithLoadedOnEntry:loadedOnExit:visiblePageLoadTimeSeconds:] */

void FUN_108bac658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd6a0;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  return;
}



/* Entry: 108bac6b8; end: 108bac6db; -[SCUnlockableAttachmentLoadingAnalytics copyWithZone:] */

undefined8 FUN_108bac6b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bac6dc; end: 108bac75f; -[SCUnlockableAttachmentLoadingAnalytics hash] */

ulong * FUN_108bac6dc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  double dVar5;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 9);
  uVar3 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_20 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(char *)((long)puVar1 + 8) != param_3[8] || (*(char *)((long)puVar1 + 9) != param_3[9]))
         )) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        dVar5 = ABS(*(double *)((long)puVar1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        if (dVar5 <= 2.2250738585072014e-308) {
          dVar5 = 2.2250738585072014e-308;
        }
        puVar4 = (undefined1 *)
                 (ulong)(ABS(*(double *)((long)puVar1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar5
                        );
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 108bac760; end: 108bac82b; -[SCUnlockableAttachmentLoadingAnalytics isEqual:] */

bool FUN_108bac760(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) ||
         ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 108bac82c; end: 108bac833; -[SCUnlockableAttachmentLoadingAnalytics loadedOnEntry] */

undefined1 FUN_108bac82c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108bac834; end: 108bac83b; -[SCUnlockableAttachmentLoadingAnalytics loadedOnExit] */

undefined1 FUN_108bac834(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108bac83c; end: 108bac843; -[SCUnlockableAttachmentLoadingAnalytics visiblePageLoadTimeSeconds] */

undefined8 FUN_108bac83c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bac844; end: 108bac937; -[SCUnlockableLensProductImpressionUpdate initWithPosition:productId:productOptionString:swipedOverCount:visibleAtLensExit:productTapped:firstSelectionTimestamp:totalSelectionTime:] */

undefined1 *
FUN_108bac844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8,
             undefined1 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_6);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126fd6a8;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = param_7;
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
  }
  _objc_release(param_10);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 108bac938; end: 108bac95b; -[SCUnlockableLensProductImpressionUpdate copyWithZone:] */

undefined8 FUN_108bac938(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bac95c; end: 108baca13; -[SCUnlockableLensProductImpressionUpdate hash] */

long * FUN_108bac95c(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  double dVar9;
  double dVar10;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_68 = (long)*(int *)(param_1 + 0xc);
  lVar6 = *(long *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lStack_60 = -lVar6;
  if (-1 < lVar6) {
    lStack_60 = lVar6;
  }
  func_0x00010bfde980();
  lStack_50 = (long)*(int *)(param_1 + 0x10);
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = (ulong)*(byte *)(param_1 + 9);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  plVar4 = &lStack_68;
  uStack_38 = uVar3;
  func_0x000107c3191c(plVar4,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar4 == param_3) {
LAB_108bacb18:
    plVar8 = (long *)0x1;
  }
  else {
    plVar8 = (long *)0x0;
    if ((plVar4 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_108bacb24;
    plVar8 = plVar4;
    _objc_opt_class(plVar4);
    plVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar8);
    if ((((ulong)plVar5 & 1) != 0) &&
       ((((*(int *)((long)plVar4 + 0xc) == *(int *)((long)param_3 + 0xc) &&
          (plVar4[3] == param_3[3])) && ((int)plVar4[2] == (int)param_3[2])) &&
        (((char)plVar4[1] == (char)param_3[1] &&
         (*(char *)((long)plVar4 + 9) == *(char *)((long)param_3 + 9))))))) {
      dVar10 = ABS((double)plVar4[6] - (double)param_3[6]);
      dVar9 = ABS((double)plVar4[6] + (double)param_3[6]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((bVar1) &&
         ((lVar6 = plVar4[4], lVar6 == param_3[4] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        plVar8 = (long *)plVar4[5];
        if (plVar8 != (long *)param_3[5]) {
          func_0x00010c071ae0();
          goto LAB_108bacb24;
        }
        goto LAB_108bacb18;
      }
    }
    plVar8 = (long *)0x0;
  }
LAB_108bacb24:
  _objc_release(param_3);
  return plVar8;
}



/* Entry: 108baca14; end: 108bacb3f; -[SCUnlockableLensProductImpressionUpdate isEqual:] */

long FUN_108baca14(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108bacb18:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bacb24;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc) &&
          (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
         (*(int *)(param_1 + 0x10) == *(int *)(param_3 + 0x10))) &&
        ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
      dVar5 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 != *(long *)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_108bacb24;
        }
        goto LAB_108bacb18;
      }
    }
    lVar4 = 0;
  }
LAB_108bacb24:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108bacb40; end: 108bacb47; -[SCUnlockableLensProductImpressionUpdate position] */

undefined4 FUN_108bacb40(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 108bacb48; end: 108bacb4f; -[SCUnlockableLensProductImpressionUpdate productId] */

undefined8 FUN_108bacb48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bacb50; end: 108bacb57; -[SCUnlockableLensProductImpressionUpdate productOptionString] */

undefined8 FUN_108bacb50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108bacb58; end: 108bacb5f; -[SCUnlockableLensProductImpressionUpdate swipedOverCount] */

undefined4 FUN_108bacb58(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 108bacb60; end: 108bacb67; -[SCUnlockableLensProductImpressionUpdate visibleAtLensExit] */

undefined1 FUN_108bacb60(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108bacb68; end: 108bacb6f; -[SCUnlockableLensProductImpressionUpdate productTapped] */

undefined1 FUN_108bacb68(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108bacb70; end: 108bacb77; -[SCUnlockableLensProductImpressionUpdate firstSelectionTimestamp] */

undefined8 FUN_108bacb70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108bacb78; end: 108bacb7f; -[SCUnlockableLensProductImpressionUpdate totalSelectionTime] */

undefined8 FUN_108bacb78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108bacb80; end: 108bacbaf; -[SCUnlockableLensProductImpressionUpdate .cxx_destruct] */

void FUN_108bacb80(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 108bacbb0; end: 108bacc63; -[SCUnlockableSwipeFlagInfo initWithIsFlagged:flagReasonId:flagNote:] */

undefined1 *
FUN_108bacbb0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fd6b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108bacc64; end: 108bacc87; -[SCUnlockableSwipeFlagInfo copyWithZone:] */

undefined8 FUN_108bacc64(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bacc88; end: 108bacd03; -[SCUnlockableSwipeFlagInfo hash] */

ulong * FUN_108bacc88(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
LAB_108bacd94:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108bacda0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_108bacda0;
        }
        goto LAB_108bacd94;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108bacda0:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 108bacd04; end: 108bacdbb; -[SCUnlockableSwipeFlagInfo isEqual:] */

long FUN_108bacd04(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108bacd94:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bacda0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_108bacda0;
        }
        goto LAB_108bacd94;
      }
    }
    lVar3 = 0;
  }
LAB_108bacda0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108bacdbc; end: 108bacdc3; -[SCUnlockableSwipeFlagInfo isFlagged] */

undefined1 FUN_108bacdbc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108bacdc4; end: 108bacdcb; -[SCUnlockableSwipeFlagInfo flagReasonId] */

undefined8 FUN_108bacdc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bacdcc; end: 108bacdd3; -[SCUnlockableSwipeFlagInfo flagNote] */

undefined8 FUN_108bacdcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bacdd4; end: 108bace03; -[SCUnlockableSwipeFlagInfo .cxx_destruct] */

void FUN_108bacdd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108bace04; end: 108bacf0f; -[SCUnlockableLensProductInteraction initWithPosition:productId:productOptionString:swipedOverCount:visibleAtLensExit:visibleAtLastUpdate:visibleAtSessionEnd:productTapped:firstSelectionTimestamp:totalSelectionTime:] */

undefined1 *
FUN_108bace04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8,
             undefined1 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_6);
  _objc_retain(param_12);
  puStack_78 = PTR_PTR_1126fd6b8;
  uStack_80 = param_2;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = param_7;
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = param_9;
    *(undefined1 *)((long)puVar1 + 10) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 0xb) = param_10._1_1_;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
  }
  _objc_release(param_12);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 108bacf10; end: 108bacf33; -[SCUnlockableLensProductInteraction copyWithZone:] */

undefined8 FUN_108bacf10(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bacf34; end: 108bad00b; -[SCUnlockableLensProductInteraction hash] */

long * FUN_108bacf34(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ushort uVar9;
  undefined4 uVar10;
  ulong uVar11;
  double dVar12;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_78 = (long)*(int *)(param_1 + 0xc);
  lVar6 = *(long *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lStack_70 = -lVar6;
  if (-1 < lVar6) {
    lStack_70 = lVar6;
  }
  func_0x00010bfde980();
  lStack_60 = (long)*(int *)(param_1 + 0x10);
  uVar10 = *(undefined4 *)(param_1 + 8);
  uVar7 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar10 >> 0x18),
                                          (uint6)(byte)((uint)uVar10 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar10) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar10 >> 8),(short)uVar7);
  uVar11 = CONCAT44((int)(uVar7 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar7 >> 0x20),(int)uVar11)) &
          0xff01ff01ffffffff;
  uVar9 = (ushort)(uVar7 >> 0x30);
  uStack_58 = (ulong)uVar1 & 0xff;
  uStack_50 = uVar7 >> 0x10 & 0xff;
  uStack_48 = (ulong)CONCAT24(uVar9,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_40 = (ulong)uVar9;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  plVar4 = &lStack_78;
  uStack_38 = uVar3;
  func_0x000107c3191c(plVar4,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar4 == param_3) {
LAB_108bad134:
    plVar8 = (long *)0x1;
  }
  else {
    plVar8 = (long *)0x0;
    if ((plVar4 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_108bad140;
    plVar8 = plVar4;
    _objc_opt_class(plVar4);
    plVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar8);
    if (((((ulong)plVar5 & 1) != 0) &&
        ((((*(int *)((long)plVar4 + 0xc) == *(int *)((long)param_3 + 0xc) &&
           (plVar4[3] == param_3[3])) && ((int)plVar4[2] == (int)param_3[2])) &&
         (((char)plVar4[1] == (char)param_3[1] &&
          (*(char *)((long)plVar4 + 9) == *(char *)((long)param_3 + 9))))))) &&
       ((*(char *)((long)plVar4 + 10) == *(char *)((long)param_3 + 10) &&
        (*(char *)((long)plVar4 + 0xb) == *(char *)((long)param_3 + 0xb))))) {
      dVar12 = ABS((double)plVar4[6] - (double)param_3[6]);
      if (((dVar12 < 2.2250738585072014e-308) ||
          (dVar12 < ABS((double)plVar4[6] + (double)param_3[6]) * 2.220446049250313e-16)) &&
         ((lVar6 = plVar4[4], lVar6 == param_3[4] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        plVar8 = (long *)plVar4[5];
        if (plVar8 != (long *)param_3[5]) {
          func_0x00010c071ae0();
          goto LAB_108bad140;
        }
        goto LAB_108bad134;
      }
    }
    plVar8 = (long *)0x0;
  }
LAB_108bad140:
  _objc_release(param_3);
  return plVar8;
}



/* Entry: 108bad00c; end: 108bad15b; -[SCUnlockableLensProductInteraction isEqual:] */

long FUN_108bad00c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108bad134:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bad140;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc) &&
           (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
          (*(int *)(param_1 + 0x10) == *(int *)(param_3 + 0x10))) &&
         ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))))) &&
       ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
        (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))) {
      dVar4 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
      if (((dVar4 < 2.2250738585072014e-308) ||
          (dVar4 < ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                   2.220446049250313e-16)) &&
         ((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
          (func_0x00010c071ae0(), (int)lVar3 != 0)))) {
        lVar3 = *(long *)(param_1 + 0x28);
        if (lVar3 != *(long *)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_108bad140;
        }
        goto LAB_108bad134;
      }
    }
    lVar3 = 0;
  }
LAB_108bad140:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108bad15c; end: 108bad163; -[SCUnlockableLensProductInteraction position] */

undefined4 FUN_108bad15c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


