/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109039720; end: 109039757;  */

void FUN_109039720(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beeffa0(*(undefined8 *)(param_1 + 0x10),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109039758; end: 109039803; -[SCLensEffectAudioProcessor deactivateAudioPlayers] */

void FUN_109039758(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_30 = 0;
  _objc_copyWeak(auStack_38,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 109039804; end: 109039857;  */

void FUN_109039804(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf65dc0(*(undefined8 *)(param_1 + 0x10),param_2,0);
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109039858; end: 109039903; -[SCLensEffectAudioProcessor stopAllSoundEffects] */

void FUN_109039858(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_30 = 0;
  _objc_copyWeak(auStack_38,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 109039904; end: 10903993b;  */

void FUN_109039904(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c2640c0(*(undefined8 *)(param_1 + 0x10),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10903993c; end: 1090399f3; -[SCLensEffectAudioProcessor stopAllSoundEffectsAndWait] */

void FUN_10903993c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x00010bf0ae20(*(undefined8 *)(param_1 + 0x18));
  uVar1 = 0;
  _dispatch_semaphore_create();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1090399f4;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = uVar1;
  _objc_retain(uVar1);
  func_0x000107c27da4(uVar2,&puStack_60);
  _objc_release(uVar2);
  _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090399f4; end: 109039a67;  */

void FUN_1090399f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_109039a68;
  puStack_30 = &UNK_110842e18;
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x00010c2640c0(uVar2,param_2,&puStack_48);
  _objc_release(uStack_28);
  return;
}



/* Entry: 109039a68; end: 109039a6f;  */

void FUN_109039a68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 109039a70; end: 109039b1b; -[SCLensEffectAudioProcessor resumeAllSoundEffects] */

void FUN_109039a70(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_30 = 0;
  _objc_copyWeak(auStack_38,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 109039b1c; end: 109039b53;  */

void FUN_109039b1c(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c13d260(*(undefined8 *)(param_1 + 0x10),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109039b54; end: 109039c2f; -[SCLensEffectAudioProcessor muteAudioPlayersForRequestorId:] */

void FUN_109039b54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = 0;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 109039c30; end: 109039c87;  */

void FUN_109039c30(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) &&
     (func_0x00010befa120(*(undefined8 *)(lVar1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x20)),
     (*(byte *)(lVar1 + 0x28) & 1) == 0)) {
    *(undefined1 *)(lVar1 + 0x28) = 1;
    func_0x00010c0d3e80(*(undefined8 *)(lVar1 + 0x10),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 109039c88; end: 109039d63; -[SCLensEffectAudioProcessor unmuteAudioPlayersForRequestorId:] */

void FUN_109039c88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = 0;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 109039d64; end: 109039dc7;  */

void FUN_109039d64(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(lVar1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x20));
    if (*(char *)(lVar1 + 0x28) == '\x01') {
      lVar2 = *(long *)(lVar1 + 0x30);
      func_0x00010bf529e0();
      if (lVar2 == 0) {
        *(undefined1 *)(lVar1 + 0x28) = 0;
        func_0x00010c2818a0(*(undefined8 *)(lVar1 + 0x10),param_2,0);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 109039dc8; end: 109039e6f; -[SCLensEffectAudioProcessor processAudioBuffer:] */

void FUN_109039dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c31820(&UNK_10f548484);
  func_0x00010bf0ae20(*(undefined8 *)(param_1 + 0x18));
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_109039e70;
  puStack_48 = &UNK_110848c48;
  lStack_40 = param_1;
  uStack_38 = param_3;
  func_0x000107c27da4(*(undefined8 *)(param_1 + 0x20),&puStack_60);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109039e70; end: 109039ee3;  */

void FUN_109039e70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_28;
  
  puVar1 = &UNK_10f54849f;
  func_0x000107c31820(&UNK_10f54849f);
  uStack_28 = 0;
  func_0x00010c114580(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_2,
                      *(undefined8 *)(param_1 + 0x28),&uStack_28);
  func_0x000107c31828(puVar1);
  return;
}



/* Entry: 109039ee4; end: 109039f37; -[SCLensEffectAudioProcessor .cxx_destruct] */

void FUN_109039ee4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109039f38; end: 109039f3b; -[SCLensEffectNullAudioProcessor activateAudioPlayers] */

void FUN_109039f38(void)

{
  return;
}



/* Entry: 109039f3c; end: 109039f3f; -[SCLensEffectNullAudioProcessor deactivateAudioPlayers] */

void FUN_109039f3c(void)

{
  return;
}



/* Entry: 109039f40; end: 109039f43; -[SCLensEffectNullAudioProcessor stopAllSoundEffects] */

void FUN_109039f40(void)

{
  return;
}



/* Entry: 109039f44; end: 109039f47; -[SCLensEffectNullAudioProcessor stopAllSoundEffectsAndWait] */

void FUN_109039f44(void)

{
  return;
}



/* Entry: 109039f48; end: 109039f4b; -[SCLensEffectNullAudioProcessor resumeAllSoundEffects] */

void FUN_109039f48(void)

{
  return;
}



/* Entry: 109039f4c; end: 109039f4f; -[SCLensEffectNullAudioProcessor muteAudioPlayersForRequestorId:] */

void FUN_109039f4c(void)

{
  return;
}



/* Entry: 109039f50; end: 109039f53; -[SCLensEffectNullAudioProcessor unmuteAudioPlayersForRequestorId:] */

void FUN_109039f50(void)

{
  return;
}



/* Entry: 109039f54; end: 109039f57; -[SCLensEffectNullAudioProcessor processAudioBuffer:] */

void FUN_109039f54(void)

{
  return;
}



/* Entry: 109039f58; end: 109039f67; -[SCLensEffectNullErrorHandler errorHandlerWithSelector:] */

undefined ** FUN_109039f58(void)

{
  return &PTR___NSConcreteGlobalBlock_110ad5cf0;
}



/* Entry: 109039f68; end: 109039f77; -[SCLensEffectNullErrorHandler errorHandlerWithSelector:effectId:] */

undefined ** FUN_109039f68(void)

{
  return &PTR___NSConcreteGlobalBlock_110ad5d10;
}



/* Entry: 109039f78; end: 10903a0d7; -[SCLensEffectProcessor initWithVideoProcessingComponent:configuration:lensProcessingSettings:performer:] */

undefined1 *
FUN_109039f78(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fffa0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x78) = 1;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    func_0x00010c151300(param_5);
    uVar4 = SUB84((double)param_1,0);
    func_0x00010c1f7440(param_4);
    func_0x00010be3b220(puVar1);
    uVar2 = param_6;
    func_0x00010bfe8380();
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    func_0x00010bf69620(PTR_PTR_1126b2930);
    *(undefined4 *)((long)puVar1 + 0x30) = uVar4;
    func_0x00010bea97a0(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10903a0d8; end: 10903a38b; -[SCLensEffectProcessor _setUpObservableSubscriptions] */

void FUN_10903a0d8(undefined4 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_98,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010bfac7c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10903a38c;
  puStack_a8 = &UNK_110842a38;
  _objc_copyWeak(auStack_a0,auStack_98);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126ae6b8;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010bf30c20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uStack_90 = uVar2;
  func_0x00010bfac7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uStack_88 = uVar3;
  func_0x00010bf21c80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf41860(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = auStack_98;
  _objc_copyWeak(auStack_c8,puVar9);
  puVar7 = puVar6;
  func_0x00010c25ff60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  puVar8 = auStack_98;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume();
  _objc_retain(puVar9);
  puVar8 = puVar8 + 0x20;
  _objc_loadWeakRetained();
  if (puVar8 != (undefined1 *)0x0) {
    func_0x00010bfb2c80(puVar9);
    *(undefined4 *)(puVar8 + 0x30) = param_1;
  }
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 10903a38c; end: 10903a537;  */

void FUN_10903a38c(undefined4 param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    func_0x00010bfb2c80(param_3);
    *(undefined4 *)(param_2 + 0x30) = param_1;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10903a538; end: 10903a557; -[SCLensEffectProcessor setProcessingMode:] */

void FUN_10903a538(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x60) == param_3) {
    return;
  }
  *(long *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1e3950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setProcessingMode_completion__112656878,param_3,0
            );
  return;
}



/* Entry: 10903a558; end: 10903a56b; -[SCLensEffectProcessor frameOrientation] */

undefined8 * FUN_10903a558(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  double dVar8;
  undefined8 uStack_28;
  
  func_0x00010c0ed100();
  puVar1 = &UNK_10e515408;
  puVar4 = &uStack_28;
  uStack_28 = param_3;
  func_0x00010addac74(&UNK_10e515408,puVar4);
  if (puVar1 != &UNK_10e515488) {
    return *(undefined8 **)(puVar1 + 8);
  }
  puVar1 = &UNK_10f6adf59;
  FUN_1093fd0ac();
  uVar7 = 0;
  plVar5 = (long *)&UNK_10e515510;
  while( true ) {
    for (; plVar6 = (long *)(&UNK_10e515490 + uVar7 * 0x10), *plVar6 < (long)puVar1;
        uVar7 = uVar7 * 2 + 2) {
      plVar6 = plVar5;
      if (2 < uVar7) goto code_r0x00010adcf600;
    }
    if (3 < uVar7) break;
    uVar7 = uVar7 << 1 | 1;
    plVar5 = plVar6;
  }
code_r0x00010adcf600:
  if ((plVar6 != (long *)&UNK_10e515510) &&
     (*plVar6 <= (long)puVar1 && plVar6 != (long *)&UNK_10e515510)) {
    return (undefined8 *)plVar6[1];
  }
  puVar1 = &UNK_10f6adf59;
  FUN_1093fd0ac(&UNK_10f6adf59);
  dVar8 = param_1;
  _objc_retain(puVar4);
  puVar2 = puVar4;
  func_0x00010c065ec0(puVar4);
  func_0x00010bfac7a0(puVar4);
  puVar3 = puVar4;
  func_0x00010c065d80(puVar4);
  func_0x00010adcf4bc();
  func_0x00010ad51244(puVar1,param_1,param_2,(float)dVar8,puVar2 == (undefined8 *)0x2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return puVar4;
}



/* Entry: 10903a56c; end: 10903a70f; -[SCLensEffectProcessor processPixelBuffer:inputSource:timestamp:error:] */

void FUN_10903a56c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 *param_5,long *param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  puVar1 = &UNK_10f5484ed;
  func_0x000107c31820(&UNK_10f5484ed);
  lVar2 = param_3;
  _CVPixelBufferGetHeight();
  lVar3 = param_3;
  _CVPixelBufferGetWidth();
  if ((((*(long *)(param_1 + 0x68) == 0) || (*(long *)(param_1 + 0x70) == 0)) ||
      (*(long *)(param_1 + 0x68) != lVar3)) || (*(long *)(param_1 + 0x70) != lVar2)) {
    *(long *)(param_1 + 0x68) = lVar3;
    *(long *)(param_1 + 0x70) = lVar2;
    func_0x00010beddf20(param_1,param_2,param_3);
  }
  func_0x00010beaf220(param_1,param_2,param_4);
  lVar2 = param_1;
  func_0x00010bfb6e40(param_1);
  uStack_68 = param_5[1];
  uStack_70 = *param_5;
  uStack_60 = param_5[2];
  lVar3 = param_1;
  func_0x00010be82aa0(param_1,param_2,param_4,&uStack_70,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x18);
  lStack_78 = 0;
  func_0x00010c115180(lVar4,param_2,param_3,lVar3,&lStack_78);
  lVar2 = lStack_78;
  _objc_retain(lStack_78);
  if ((lVar4 == 0) || (lVar2 != 0)) {
    puVar5 = (undefined *)0x0;
    if ((param_6 != (long *)0x0) && (lVar2 != 0)) {
      _objc_retainAutorelease(lVar2);
      puVar5 = (undefined *)0x0;
      *param_6 = lVar2;
    }
  }
  else {
    puVar5 = PTR_PTR_1126dd088;
    _objc_alloc(PTR_PTR_1126dd088);
    func_0x00010c039b00();
  }
  _objc_release(lVar2);
  _objc_release(lVar3);
  func_0x000107c31828(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10903a710; end: 10903a947; -[SCLensEffectProcessor processPixelBufferToImage:orientation:inputSource:timestamp:error:] */

void FUN_10903a710(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 *param_6,long *param_7)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar1 = &UNK_10f548512;
  func_0x000107c31820(&UNK_10f548512);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  lVar8 = *(long *)(param_1 + 0x68);
  if ((((lVar8 == 0) || (*(long *)(param_1 + 0x70) == 0)) ||
      (lVar9 = param_3, _CVPixelBufferGetWidth(), lVar8 != lVar9)) ||
     (lVar9 = *(long *)(param_1 + 0x70), lVar8 = param_3, _CVPixelBufferGetHeight(), lVar9 != lVar8)
     ) {
    func_0x00010beddf20(param_1,param_2,param_3);
  }
  func_0x00010beaf220(param_1,param_2,5);
  func_0x00010c1d6440(param_1,param_2,param_4);
  uVar2 = param_1;
  func_0x00010bfb6e40();
  uVar4 = param_1;
  if (param_5 == 4) {
    uVar3 = param_1;
    func_0x00010c1158c0();
    uVar6 = uVar2;
    if ((uVar3 & 1) == 0) {
      if (uVar2 < 8) {
        uVar6 = *(ulong *)(&UNK_10dfb2918 + uVar2 * 8);
      }
      else {
        uVar6 = 6;
      }
    }
    uStack_68 = param_6[1];
    uStack_70 = *param_6;
    uStack_60 = param_6[2];
    func_0x00010be82ac0(param_1,param_2,4,&uStack_70,uVar6,uVar6,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_68 = param_6[1];
    uStack_70 = *param_6;
    uStack_60 = param_6[2];
    func_0x00010be82ac0(param_1,param_2,param_5,&uStack_70,uVar2,uVar2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  lStack_78 = 0;
  func_0x00010c115500(uVar5,param_2,param_3,uVar4,&lStack_78);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lStack_78;
  _objc_retain(lStack_78);
  func_0x00010beddf00(param_1,param_2,param_5);
  if (lVar8 == 0) {
    _objc_retain(uVar5);
    uVar7 = uVar5;
  }
  else if (param_7 == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    _objc_retainAutorelease(lVar8);
    *param_7 = lVar8;
    uVar7 = 0;
  }
  _objc_release(uVar5);
  _objc_release(lVar8);
  _objc_release(uVar4);
  func_0x000107c31828(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 10903a948; end: 10903a98b; -[SCLensEffectProcessor resetProcessor] */

void FUN_10903a948(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  lVar2 = param_1;
  func_0x00010c1158c0();
  uVar1 = 4;
  if ((int)lVar2 == 0) {
    uVar1 = 0;
  }
  func_0x00010c1e3920(param_1,param_2,uVar1);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}



/* Entry: 10903a98c; end: 10903a9f3; -[SCLensEffectProcessor setOrientation:] */

void FUN_10903a98c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(long *)(param_1 + 0x40) != param_3) {
    *(long *)(param_1 + 0x40) = param_3;
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_10903a9f4;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  }
  return;
}



/* Entry: 10903a9f4; end: 10903aa13;  */

void FUN_10903a9f4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(long *)(lVar1 + 0x68) != 0) && (*(long *)(lVar1 + 0x70) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010beddf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s__updateProcessingResolutionForPi_112595170,0)
    ;
    return;
  }
  return;
}



/* Entry: 10903aa14; end: 10903aacb; -[SCLensEffectProcessor _initializeCOFValues] */

void FUN_10903aa14(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 8);
  func_0x00010c0749c0();
  *(undefined1 *)(param_1 + 0x48) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf468a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc3160();
  *(char *)(param_1 + 0x49) = (char)uVar3;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf468a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc6680();
  *(long *)(param_1 + 0x50) = (long)(int)uVar3;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf468a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc3160();
  *(char *)(param_1 + 0x58) = (char)uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10903aacc; end: 10903ab57; -[SCLensEffectProcessor _configureProcessingInfo] */

void FUN_10903aacc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x00010beddf20(param_1,param_2,0);
  _CMTimeMake(auStack_38,0,1);
  func_0x00010bfb6e40(param_1);
  lVar1 = param_1;
  func_0x00010be82aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176840(*(undefined8 *)(param_1 + 0x18));
  _objc_release(lVar1);
  return;
}



/* Entry: 10903ab58; end: 10903ac57; -[SCLensEffectProcessor _updateProcessingResolutionForPixelBuffer:] */

void FUN_10903ab58(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar4 = *(ulong *)(param_1 + 0x68);
  if (uVar4 == 0) {
    uVar4 = param_3;
    _CVPixelBufferGetWidth();
  }
  uVar2 = *(ulong *)(param_1 + 0x70);
  if (*(ulong *)(param_1 + 0x70) == 0) {
    _CVPixelBufferGetHeight();
    uVar2 = param_3;
  }
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x49) & 1) == 0) {
      uVar1 = uVar4;
      if (uVar2 <= uVar4) {
        uVar1 = uVar2;
      }
      uVar3 = *(ulong *)(param_1 + 0x50);
      if (uVar1 <= *(ulong *)(param_1 + 0x50)) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = uVar4;
      if (uVar2 <= uVar4) {
        uVar3 = uVar2;
      }
    }
  }
  else {
    uVar3 = 0x438;
  }
  uVar1 = (long)((float)uVar3 / ((float)uVar4 / (float)uVar2));
  if (uVar2 < uVar4) {
    uVar1 = uVar3;
    uVar3 = (long)(((float)uVar4 / (float)uVar2) * (float)uVar3);
  }
  dVar7 = (double)uVar1;
  dVar6 = (double)uVar3;
  uVar4 = param_1;
  func_0x00010c0ed100();
  dVar5 = dVar7;
  if ((uVar4 < 6) && ((1L << (uVar4 & 0x3f) & 0x33U) != 0)) {
    dVar5 = dVar6;
    dVar6 = dVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2278d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setYuvRenderingResolutionWidth_h_112667858,
             (long)dVar5,(long)dVar6);
  return;
}



/* Entry: 10903ac58; end: 10903ac73; -[SCLensEffectProcessor _setupProcessingForInputSource:] */

void FUN_10903ac58(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 10) {
                    /* WARNING: Could not recover jumptable at 0x00010c1e3930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_setProcessingMode__112656870,
               *(undefined8 *)(&UNK_10dfb2958 + param_3 * 8));
    return;
  }
  return;
}



/* Entry: 10903ac74; end: 10903ac93; -[SCLensEffectProcessor _updateProcessingModeAfterSavingWithInputSource:] */

void FUN_10903ac74(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 6) {
                    /* WARNING: Could not recover jumptable at 0x00010beaf230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__setupProcessingForInputSource__112589630,
               *(undefined8 *)(&UNK_10dfb29a8 + (param_3 - 1U) * 8));
    return;
  }
  return;
}



/* Entry: 10903ac94; end: 10903acd3; -[SCLensEffectProcessor _processingInfoForInputSource:timestamp:pixelBufferOrientation:] */

void FUN_10903ac94(void)

{
  func_0x00010be82ac0();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10903acd4; end: 10903af8f; -[SCLensEffectProcessor _processingInfoForInputSource:timestamp:pixelBufferOrientation:inputTextureOrientation:outputTextureOrientation:] */

void FUN_10903acd4(long param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uVar3 = 1;
  puVar1 = PTR_PTR_1126dd090;
  if (param_3 < 5) {
    if (param_3 < 2) {
      if (param_3 == 0) {
        _objc_alloc(PTR_PTR_1126dd090);
        fVar4 = *(float *)(param_1 + 0x30);
        uVar6 = *(undefined1 *)(param_1 + 0x78);
        func_0x00010c2321a0(param_1);
        uStack_88 = param_4[1];
        uStack_90 = *param_4;
        uStack_80 = param_4[2];
        func_0x00010c01e140((double)fVar4,puVar1,param_2,0,param_5,&uStack_90,0,uVar6,param_1,1);
        goto LAB_10903af08;
      }
      if (param_3 != 1) goto LAB_10903af08;
LAB_10903adcc:
      uVar3 = 2;
    }
    else if (param_3 != 2) {
      if (param_3 == 3) goto LAB_10903adcc;
      if (param_3 != 4) goto LAB_10903af08;
    }
LAB_10903add0:
    _objc_alloc(PTR_PTR_1126dd090);
    fVar4 = *(float *)(param_1 + 0x30);
    func_0x00010c2321a0();
    func_0x00010c2906c0();
    func_0x00010c0e8dc0();
    uStack_88 = param_4[1];
    uStack_90 = *param_4;
    uStack_80 = param_4[2];
    uVar6 = 0;
    uVar5 = 0;
    lVar2 = 0;
  }
  else {
    if (param_3 < 7) {
      if (param_3 != 5) {
        if (param_3 != 6) goto LAB_10903af08;
        goto LAB_10903add0;
      }
      goto LAB_10903adcc;
    }
    lVar2 = param_1;
    if (param_3 - 7U < 2) {
      _objc_alloc(PTR_PTR_1126dd090);
      func_0x00010c290c00(param_1);
      fVar4 = *(float *)(param_1 + 0x30);
      func_0x00010c081740();
      uVar6 = (undefined1)param_1;
      func_0x00010c2906c0();
      uStack_88 = param_4[1];
      uStack_90 = *param_4;
      uStack_80 = param_4[2];
    }
    else {
      if (param_3 != 9) goto LAB_10903af08;
      func_0x00010c21dbc0(param_1,param_2,1);
      puVar1 = PTR_PTR_1126dd090;
      _objc_alloc(PTR_PTR_1126dd090);
      func_0x00010c290c00(param_1);
      fVar4 = *(float *)(param_1 + 0x30);
      func_0x00010c081740();
      uVar6 = (undefined1)param_1;
      func_0x00010c2906c0();
      uStack_88 = param_4[1];
      uStack_90 = *param_4;
      uStack_80 = param_4[2];
    }
    uVar5 = 1;
    uVar3 = 3;
    param_6 = param_5;
    param_7 = param_5;
  }
  func_0x00010c01e120((double)fVar4,puVar1,param_2,uVar3,param_5,param_6,param_7,&uStack_90,lVar2,
                      uVar5,0,0,uVar6);
LAB_10903af08:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10903af90; end: 10903af9b; -[SCLensEffectProcessor shouldProcessARFrames] */

byte FUN_10903af90(long param_1)

{
  return *(byte *)(param_1 + 0x79) & 1;
}



/* Entry: 10903af9c; end: 10903afa3; -[SCLensEffectProcessor setShouldProcessARFrames:] */

void FUN_10903af9c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x79) = param_3;
  return;
}



/* Entry: 10903afa4; end: 10903afaf; -[SCLensEffectProcessor processingFileStream] */

byte FUN_10903afa4(long param_1)

{
  return *(byte *)(param_1 + 0x7a) & 1;
}



/* Entry: 10903afb0; end: 10903afb7; -[SCLensEffectProcessor setProcessingFileStream:] */

void FUN_10903afb0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x7a) = param_3;
  return;
}



/* Entry: 10903afb8; end: 10903afbf; -[SCLensEffectProcessor orientation] */

undefined8 FUN_10903afb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10903afc0; end: 10903afcb; -[SCLensEffectProcessor useOutput] */

byte FUN_10903afc0(long param_1)

{
  return *(byte *)(param_1 + 0x7b) & 1;
}



/* Entry: 10903afcc; end: 10903afd3; -[SCLensEffectProcessor setUseOutput:] */

void FUN_10903afcc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x7b) = param_3;
  return;
}



/* Entry: 10903afd4; end: 10903afdf; -[SCLensEffectProcessor useTimestampAsCurrentTime] */

byte FUN_10903afd4(long param_1)

{
  return *(byte *)(param_1 + 0x7c) & 1;
}



/* Entry: 10903afe0; end: 10903afe7; -[SCLensEffectProcessor setUseTimestampAsCurrentTime:] */

void FUN_10903afe0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x7c) = param_3;
  return;
}



/* Entry: 10903afe8; end: 10903aff3; -[SCLensEffectProcessor isTranscoding] */

byte FUN_10903afe8(long param_1)

{
  return *(byte *)(param_1 + 0x7d) & 1;
}



/* Entry: 10903aff4; end: 10903affb; -[SCLensEffectProcessor setIsTranscoding:] */

void FUN_10903aff4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x7d) = param_3;
  return;
}



/* Entry: 10903affc; end: 10903b003; -[SCLensEffectProcessor processingMode] */

undefined8 FUN_10903affc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10903b004; end: 10903b057; -[SCLensEffectProcessor .cxx_destruct] */

void FUN_10903b004(long param_1)

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



/* Entry: 10903b058; end: 10903b0f3; -[SCLensEffectTrackingProvider initWithTrackingComponent:performer:] */

undefined1 *
FUN_10903b058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fffa8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10903b0f4; end: 10903b14f; -[SCLensEffectTrackingProvider restartTrackingWithNormalizedPoint:] */

void FUN_10903b0f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10903b150;
  puStack_30 = &UNK_110858dc0;
  lStack_28 = param_3;
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x00010c0f7fc0(*(undefined8 *)(param_3 + 0x10),param_4,&puStack_48);
  return;
}



/* Entry: 10903b150; end: 10903b18b;  */

void FUN_10903b150(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c13c0a0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10903b18c; end: 10903b1b7; -[SCLensEffectTrackingProvider .cxx_destruct] */

void FUN_10903b18c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10903b1b8; end: 10903b24f; -[SCLensEffectViewportProvider initWithVideoProcessingComponent:] */

undefined1 * FUN_10903b1b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fffb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar2 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    uVar4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    *(undefined8 *)((long)puVar1 + 0xb8) = uVar3;
    *(undefined8 *)((long)puVar1 + 0xb0) = uVar2;
    *(undefined8 *)((long)puVar1 + 200) = uVar5;
    *(undefined8 *)((long)puVar1 + 0xc0) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x28) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x20) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x38) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x48) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x40) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x58) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x68) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x60) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x78) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x88) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x80) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x98) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x90) = uVar2;
    *(undefined8 *)((long)puVar1 + 0xa8) = uVar5;
    *(undefined8 *)((long)puVar1 + 0xa0) = uVar4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10903b250; end: 10903b25b; -[SCLensEffectViewportProvider setupPreviewRect:] */

void FUN_10903b250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  *(undefined8 *)(param_5 + 0x20) = param_3;
  *(undefined8 *)(param_5 + 0x28) = param_4;
  return;
}



/* Entry: 10903b25c; end: 10903b267; -[SCLensEffectViewportProvider setupTopBarRect:] */

void FUN_10903b25c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x30) = param_1;
  *(undefined8 *)(param_5 + 0x38) = param_2;
  *(undefined8 *)(param_5 + 0x40) = param_3;
  *(undefined8 *)(param_5 + 0x48) = param_4;
  return;
}



/* Entry: 10903b268; end: 10903b273; -[SCLensEffectViewportProvider setupCaptureButtonRect:] */

void FUN_10903b268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x50) = param_1;
  *(undefined8 *)(param_5 + 0x58) = param_2;
  *(undefined8 *)(param_5 + 0x60) = param_3;
  *(undefined8 *)(param_5 + 0x68) = param_4;
  return;
}



/* Entry: 10903b274; end: 10903b27f; -[SCLensEffectViewportProvider setupKeyboardRect:] */

void FUN_10903b274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x70) = param_1;
  *(undefined8 *)(param_5 + 0x78) = param_2;
  *(undefined8 *)(param_5 + 0x80) = param_3;
  *(undefined8 *)(param_5 + 0x88) = param_4;
  return;
}



/* Entry: 10903b280; end: 10903b28b; -[SCLensEffectViewportProvider setupSafeRenderRect:] */

void FUN_10903b280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x90) = param_1;
  *(undefined8 *)(param_5 + 0x98) = param_2;
  *(undefined8 *)(param_5 + 0xa0) = param_3;
  *(undefined8 *)(param_5 + 0xa8) = param_4;
  return;
}



/* Entry: 10903b28c; end: 10903b2b3; -[SCLensEffectViewportProvider setupOutputResolution:] */

void FUN_10903b28c(double param_1,double param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d7150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)((long)param_1 + 1U & 0xfffffffffffffffe),
             (double)((long)param_2 + 1U & 0xfffffffffffffffe),*(undefined8 *)(param_3 + 8),
             PTR_s_setOutputResolution__112653678);
  return;
}



/* Entry: 10903b2b4; end: 10903b2bb; -[SCLensEffectViewportProvider setViewPortAspectRatioNumerator:denominator:] */

void FUN_10903b2b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setViewPortAspectRatioNumerator__1126664e0);
  return;
}



/* Entry: 10903b2bc; end: 10903b43b; -[SCLensEffectViewportProvider dispatchViewportData] */

void FUN_10903b2bc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = param_1;
  _CGRectIsEmpty(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8),
                 *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200));
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    uVar8 = *(undefined8 *)(param_1 + 0xb8);
    uVar29 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    uVar22 = *(undefined8 *)PTR__CGPointZero_110347540;
    uVar21 = *(undefined8 *)(param_1 + 200);
    uVar14 = *(undefined8 *)(param_1 + 0xc0);
    uVar23 = *(undefined8 *)(param_1 + 200);
    uVar15 = uVar14;
    _CGRectOffset();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    uVar24 = *(undefined8 *)(param_1 + 0x28);
    _CGRectOffset();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    uVar17 = *(undefined8 *)(param_1 + 0x40);
    uVar25 = *(undefined8 *)(param_1 + 0x48);
    _CGRectOffset();
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    uVar11 = *(undefined8 *)(param_1 + 0x58);
    uVar18 = *(undefined8 *)(param_1 + 0x60);
    uVar26 = *(undefined8 *)(param_1 + 0x68);
    _CGRectOffset();
    uVar6 = *(undefined8 *)(param_1 + 0x70);
    uVar12 = *(undefined8 *)(param_1 + 0x78);
    uVar19 = *(undefined8 *)(param_1 + 0x80);
    uVar27 = *(undefined8 *)(param_1 + 0x88);
    _CGRectOffset();
    uVar7 = *(undefined8 *)(param_1 + 0x90);
    uVar13 = *(undefined8 *)(param_1 + 0x98);
    uVar20 = *(undefined8 *)(param_1 + 0xa0);
    uVar28 = *(undefined8 *)(param_1 + 0xa8);
    _CGRectOffset();
    uStack_140 = uVar22;
    uStack_138 = uVar29;
    uStack_130 = uVar14;
    uStack_128 = uVar21;
    uStack_120 = uVar2;
    uStack_118 = uVar8;
    uStack_110 = uVar15;
    uStack_108 = uVar23;
    uStack_100 = uVar3;
    uStack_f8 = uVar9;
    uStack_f0 = uVar16;
    uStack_e8 = uVar24;
    uStack_e0 = uVar4;
    uStack_d8 = uVar10;
    uStack_d0 = uVar17;
    uStack_c8 = uVar25;
    uStack_c0 = uVar5;
    uStack_b8 = uVar11;
    uStack_b0 = uVar18;
    uStack_a8 = uVar26;
    uStack_a0 = uVar6;
    uStack_98 = uVar12;
    uStack_90 = uVar19;
    uStack_88 = uVar27;
    uStack_80 = uVar7;
    uStack_78 = uVar13;
    uStack_70 = uVar20;
    uStack_68 = uVar28;
    func_0x00010c2232c0(*(undefined8 *)(param_1 + 8),param_2,&uStack_140,0);
  }
  return;
}



/* Entry: 10903b43c; end: 10903b447; -[SCLensEffectViewportProvider fullScreenRect] */

undefined8 FUN_10903b43c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10903b448; end: 10903b453; -[SCLensEffectViewportProvider setFullScreenRect:] */

void FUN_10903b448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0xb0) = param_1;
  *(undefined8 *)(param_5 + 0xb8) = param_2;
  *(undefined8 *)(param_5 + 0xc0) = param_3;
  *(undefined8 *)(param_5 + 200) = param_4;
  return;
}



/* Entry: 10903b454; end: 10903b45f; -[SCLensEffectViewportProvider .cxx_destruct] */

void FUN_10903b454(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10903b460; end: 10903b4eb; -[SCLensProcessingTexture initWithPreviewPixelBuffer:effects:isDrawable:] */

undefined1 *
FUN_10903b460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fffb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10903b4ec; end: 10903b4f7; -[SCLensProcessingTexture initWithPreviewPixelBuffer:] */

void FUN_10903b4ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c039b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithPreviewPixelBuffer_effec_1125ec0c8,param_3,0,0);
  return;
}



/* Entry: 10903b4f8; end: 10903b55b; -[SCLensProcessingTexture initWithTexture:effects:isDrawable:] */

undefined8
FUN_10903b4f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  _objc_retain(param_4);
  func_0x00010c111940(param_3);
  func_0x00010c039b20(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 10903b55c; end: 10903b587; +[SCLensProcessingTexture notDrawable] */

void FUN_10903b55c(void)

{
  _objc_alloc(PTR_PTR_1126dd088);
  func_0x00010c039b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10903b588; end: 10903b58f; -[SCLensProcessingTexture previewPixelBuffer] */

undefined8 FUN_10903b588(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10903b590; end: 10903b597; -[SCLensProcessingTexture effects] */

undefined8 FUN_10903b590(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10903b598; end: 10903b59f; -[SCLensProcessingTexture isDrawable] */

undefined1 FUN_10903b598(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10903b5a0; end: 10903b5ab; -[SCLensProcessingTexture .cxx_destruct] */

void FUN_10903b5a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10903b5ac; end: 10903b61f; -[SCLensEffectAssertingQueuePerformer initWithAssertionPerformer:] */

undefined1 * FUN_10903b5ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fffc0;
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



/* Entry: 10903b620; end: 10903b66b; +[SCLensEffectAssertingQueuePerformer createAssertingPerformer:] */

void FUN_10903b620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db7a8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff4180();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10903b66c; end: 10903b673; -[SCLensEffectAssertingQueuePerformer assertQueue] */

void FUN_10903b66c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0ae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_assertQueue_1125a0538);
  return;
}



/* Entry: 10903b674; end: 10903b67b; -[SCLensEffectAssertingQueuePerformer assertNotQueue] */

void FUN_10903b674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0ae30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_assertNotQueue_1125a0530);
  return;
}



/* Entry: 10903b67c; end: 10903b6bf; -[SCLensEffectAssertingQueuePerformer perform:] */

void FUN_10903b67c(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 8));
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10903b6c0; end: 10903b6c7; -[SCLensEffectAssertingQueuePerformer queue] */

void FUN_10903b6c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_queue_1126251a0);
  return;
}



/* Entry: 10903b6c8; end: 10903b6d3; -[SCLensEffectAssertingQueuePerformer .cxx_destruct] */

void FUN_10903b6c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10903b6d4; end: 10903b7ef; -[SCLensEffectQueuePerformer initWithPerformer:lensCrashLogger:cancelationController:shouldCatchExceptions:shouldCatchJSExceptions:] */

undefined1 *
FUN_10903b6d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fffc8;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
    *(undefined1 *)((long)puVar1 + 0x31) = param_6;
    *(undefined1 *)((long)puVar1 + 0x32) = param_7;
    uVar2 = 0x11;
    _dispatch_get_global_queue(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x30) = 1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10903b7f0; end: 10903b7f7; -[SCLensEffectQueuePerformer queue] */

void FUN_10903b7f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_queue_1126251a0);
  return;
}



/* Entry: 10903b7f8; end: 10903b81f; -[SCLensEffectQueuePerformer isValid] */

undefined1 FUN_10903b7f8(long param_1)

{
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 8));
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 10903b820; end: 10903b85b; -[SCLensEffectQueuePerformer perform:] */

void FUN_10903b820(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010be5b580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10903b85c; end: 10903b8c7; -[SCLensEffectQueuePerformer performV2:] */

void FUN_10903b85c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf0ae40(uVar1);
  func_0x00010be5b580(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  (**(code **)(param_1 + 0x10))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10903b8c8; end: 10903b903; -[SCLensEffectQueuePerformer performImmediatelyIfCurrentPerformer:] */

void FUN_10903b8c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010be5b580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f88c0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10903b904; end: 10903b96f; -[SCLensEffectQueuePerformer performAndWait:] */

void FUN_10903b904(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf0ae40(uVar1);
  func_0x00010be5b580(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  (**(code **)(param_1 + 0x10))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10903b970; end: 10903b9bb; -[SCLensEffectQueuePerformer perform:after:] */

void FUN_10903b970(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010be5b580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fe0(param_1,uVar1,param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10903b9bc; end: 10903b9e3; -[SCLensEffectQueuePerformer invalidate] */

void FUN_10903b9bc(long param_1)

{
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 10903b9e4; end: 10903ba2b; -[SCLensEffectQueuePerformer performUnsafeBlockWithInfo:block:completion:] */

void FUN_10903b9e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010be5c660(param_1,param_2,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10903ba2c; end: 10903bacf; -[SCLensEffectQueuePerformer performUnsafeBlockV2WithInfo:block:completion:] */

void FUN_10903ba2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf0ae40(uVar1);
  func_0x00010be5c660(param_1,param_2,param_4,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  (**(code **)(param_1 + 0x10))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10903bad0; end: 10903bb17; -[SCLensEffectQueuePerformer performUnsafeBlockImmediatelyIfCurrentPerformerWithInfo:block:completion:] */

void FUN_10903bad0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010be5c660(param_1,param_2,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f88c0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


