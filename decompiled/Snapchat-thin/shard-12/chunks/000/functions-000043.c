/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ca0c08; end: 108ca0c0b; -[SCLensProcessingNullPluginRegistry register:] */

void FUN_108ca0c08(void)

{
  return;
}



/* Entry: 108ca0c0c; end: 108ca0c0f; -[SCLensProcessingNullPluginRegistry assertPlugin] */

void FUN_108ca0c0c(void)

{
  return;
}



/* Entry: 108ca0c10; end: 108ca0c7f; +[SCLensProcessingSinglePluginRegistry createPluginOnRegistry:] */

void FUN_108ca0c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126db448;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
  func_0x00010bff8d00(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ca0c80; end: 108ca0cff; -[SCLensProcessingSinglePluginRegistry initWithBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108ca0c80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe0a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127799a8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127799a8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ca0d00; end: 108ca0d6b; -[SCLensProcessingSinglePluginRegistry register:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ca0d00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127799a8;
  lVar1 = *(long *)(param_1 + lVar3);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127799ac);
    *(long *)(param_1 + _DAT_1127799ac) = lVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 108ca0d6c; end: 108ca0d6f; -[SCLensProcessingSinglePluginRegistry assertPlugin] */

void FUN_108ca0d6c(void)

{
  return;
}



/* Entry: 108ca0d70; end: 108ca0daf; -[SCLensProcessingSinglePluginRegistry .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ca0d70(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127799a8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127799ac,0);
  return;
}



/* Entry: 108ca0db0; end: 108ca1227; -[SCLensProcessingWorkflow initWithProcessingStrategy:lensProcessingCore:lensEffectWarmupComponent:metadataProvider:processingActivator:processingPipeline:audioProcessingPipeline:renderingPipeline:lensCarouselStudySettings:applicationLifecycleEvents:screenLifecycleEvents:performer:relyOnMuteSwitchCheckerOnly:] */

undefined8 *
FUN_108ca0db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,char param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
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
  puStack_70 = PTR_PTR_1126fe0b0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    uVar3 = param_4;
    func_0x00010bf07ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = uVar3;
    _objc_release(uVar2);
    uVar3 = param_4;
    func_0x00010bf0f8c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = uVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126db5a0;
    _objc_retain(param_4);
    _objc_opt_class(puVar4);
    uVar5 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar4);
    uVar3 = param_4;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = uVar3;
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
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[10];
    puVar1[10] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0xa1) = 1;
    puVar4 = PTR_PTR_1126b6df8;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar4;
    _objc_release(uVar2);
    func_0x00010c214d00(0x3fe0000000000000,puVar1[0xc]);
    *(char *)(puVar1 + 0x14) = param_15;
    if (param_15 != '\0') {
      _objc_initWeak(auStack_80,puVar1[0xc]);
      _objc_initWeak(auStack_88,puVar1);
      puVar4 = PTR_PTR_1126b6df8;
      _objc_copyWeak(auStack_98,auStack_80);
      _objc_copyWeak(auStack_90,auStack_88);
      uVar2 = puVar1[0xb];
      func_0x00010c11de00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf38500(puVar4);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
    }
    puVar4 = PTR_PTR_1126db838;
    _objc_alloc();
    func_0x00010c0255e0();
    uVar2 = puVar1[2];
    puVar1[2] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar4;
    _objc_release(uVar2);
    auVar6 = NEON_fmov(0x4014000000000000,8);
    puVar1[0x11] = auVar6._8_8_;
    puVar1[0x10] = auVar6._0_8_;
  }
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



/* Entry: 108ca1228; end: 108ca129f;  */

void FUN_108ca1228(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1c8c60();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155440(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108ca12a0; end: 108ca1383; -[SCLensProcessingWorkflow begin] */

void FUN_108ca12a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x00010bec6c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec6f40(param_1,param_2,*(undefined8 *)(param_1 + 0x90),
                      *(undefined8 *)(param_1 + 0x98),lVar1);
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    func_0x00010bec7820(param_1);
  }
  func_0x00010bef9980(*(undefined8 *)(param_1 + 0x60),param_2,param_1);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108ca1384; end: 108ca14a3; -[SCLensProcessingWorkflow endWorkflowForUsecase:completion:] */

void FUN_108ca1384(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  if (param_3 != 6) {
    func_0x00010bf2dce0(*(undefined8 *)(param_1 + 0x20));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108ca14a4;
  puStack_50 = &UNK_11085b7b0;
  lStack_48 = param_1;
  uStack_40 = param_4;
  lStack_38 = param_3;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar1);
  func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x60),param_2,param_1);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 108ca14a4; end: 108ca1533;  */

void FUN_108ca14a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bdd10e0(*(undefined8 *)(param_1 + 0x20),param_2,0);
  func_0x00010be82a40(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be4b9c0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bddfd60(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x30) == 6) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010bf44420(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3a8a0();
    _objc_release(uVar1);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108ca1524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108ca1534; end: 108ca1543; +[SCLensProcessingWorkflow setMainThreadBlocked:] */

void FUN_108ca1534(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  uRam000000011372e3d8 = param_3;
  return;
}



/* Entry: 108ca1544; end: 108ca1553; +[SCLensProcessingWorkflow mainThreadBlocked] */

undefined1 FUN_108ca1544(void)

{
  return uRam000000011372e3d8;
}



/* Entry: 108ca1554; end: 108ca1b5f; -[SCLensProcessingWorkflow _subscribeOnObservablesWithAppLifecycleEvent:screenLifecycleEvents:isAnyEffectAppliedObservable:] */

void FUN_108ca1554(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_80,param_1);
  uVar7 = param_4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_108ca1cd4;
  puStack_90 = &UNK_110842a38;
  _objc_copyWeak(auStack_88,auStack_80);
  uVar3 = uVar2;
  func_0x00010bf87460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x80);
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar6);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_108ca1d14;
  puStack_c8 = &UNK_110ac0e88;
  _objc_retain(param_5);
  uStack_c0 = param_5;
  uStack_b0 = uVar7;
  _objc_retain(uVar6);
  uVar7 = uVar3;
  uStack_b8 = uVar6;
  func_0x00010c2656e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_108ca1e24;
  puStack_f0 = &UNK_110842a38;
  _objc_copyWeak(auStack_e8,auStack_80);
  uVar4 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar7);
  uVar7 = uVar3;
  func_0x00010c2b2440(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_130 = puVar1;
  uStack_128 = 0xc2000000;
  uStack_120 = 0x108ca1ef0;
  puStack_118 = &UNK_110842a38;
  _objc_copyWeak(auStack_110,auStack_80);
  uVar2 = uVar7;
  func_0x00010c25ff60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_initWeak(auStack_138,*(undefined8 *)(param_1 + 0x20));
  _objc_initWeak(auStack_140,*(undefined8 *)(param_1 + 0x28));
  uVar2 = uVar3;
  func_0x00010bf65f60(*(undefined8 *)(param_1 + 0x88),uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_170 = puVar1;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x108ca1f50;
  puStack_158 = &UNK_1108fa1a0;
  _objc_copyWeak(auStack_150,auStack_138);
  _objc_copyWeak(auStack_148,auStack_140);
  uVar4 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf75dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_198 = puVar1;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_108ca1fdc;
  puStack_180 = &UNK_110846510;
  _objc_copyWeak(auStack_178,auStack_80);
  uVar4 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c2a1de0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1d8 = puVar1;
  uStack_1d0 = 0xc2000000;
  uStack_1c8 = 0x108ca2008;
  puStack_1c0 = &UNK_110ac0ef8;
  _objc_copyWeak(auStack_1a8,auStack_80);
  _objc_copyWeak(auStack_1a0,auStack_140);
  _objc_retain(uVar3);
  uStack_1b8 = uVar3;
  _objc_retain(uVar6);
  uVar2 = uVar5;
  uStack_1b0 = uVar6;
  func_0x00010c2656e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_1e8,auStack_138);
  _objc_copyWeak(auStack_1e0,auStack_80);
  uVar4 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_1e0);
  _objc_destroyWeak(auStack_1e8);
  _objc_release(uStack_1b0);
  _objc_release(uStack_1b8);
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_1a8);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_148);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  _objc_destroyWeak(auStack_110);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_e8);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108ca1b60; end: 108ca1c6b;  */

void FUN_108ca1b60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_108ca1c6c;
  uStack_30 = 0x108ca1c7c;
  uStack_28 = 0;
  func_0x00010c0c15c0(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ca1c6c; end: 108ca1cd3;  */

void FUN_108ca1c6c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108ca1cd4; end: 108ca1d13;  */

void FUN_108ca1cd4(long param_1,undefined8 param_2)

{
  func_0x00010bf1f3c0(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1f75a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ca1d14; end: 108ca1dfb;  */

void FUN_108ca1d14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf1f3c0();
  if ((int)uVar1 == 0) {
    puVar2 = *(undefined **)(param_1 + 0x20);
    func_0x00010c2519e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c268560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf65f60(*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    puVar5 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108ca1dfc; end: 108ca1e23;  */

undefined * FUN_108ca1dfc(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  
  func_0x00010bf1f3c0();
  puVar1 = PTR____kCFBooleanFalse_11034ab60;
  if (param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



/* Entry: 108ca1e24; end: 108ca1fdb;  */

void FUN_108ca1e24(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf1f3c0(param_2);
    _objc_release(param_2);
    func_0x00010be9bc20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108ca1fdc; end: 108ca2093;  */

void FUN_108ca1fdc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcd8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ca2094; end: 108ca20af;  */

uint FUN_108ca2094(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf1f3c0(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 108ca20b0; end: 108ca2133;  */

void FUN_108ca20b0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf5e060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    return;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4b9c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ca2134; end: 108ca2257; -[SCLensProcessingWorkflow _subscribeToForegroundEvents] */

void FUN_108ca2134(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  _objc_initWeak(auStack_40,*(undefined8 *)(param_1 + 0x60));
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c2a6420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_40);
  _objc_copyWeak(auStack_48,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108ca2258; end: 108ca2333;  */

void FUN_108ca2258(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  puVar1 = PTR_PTR_1126b6df8;
  if (lVar2 != 0) {
    _objc_copyWeak(auStack_40,param_1 + 0x20);
    _objc_copyWeak(auStack_38,param_1 + 0x28);
    func_0x00010bf384e0(puVar1);
    _objc_destroyWeak(auStack_38);
    _objc_destroyWeak(auStack_40);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108ca2334; end: 108ca238f;  */

void FUN_108ca2334(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1c8c60();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdce880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ca2390; end: 108ca26e3; -[SCLensProcessingWorkflow _subscribeOnEffectApplicatorEvents] */

void FUN_108ca2390(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  _objc_initWeak(auStack_88,*(undefined8 *)(param_1 + 0x20));
  puVar2 = PTR_PTR_1126db840;
  _objc_alloc();
  func_0x00010c00f120(0);
  puVar3 = auStack_88;
  _objc_loadWeakRetained(puVar3);
  puVar4 = puVar3;
  func_0x00010c2a6680();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_108ca26e4;
  puStack_98 = &UNK_11086d980;
  _objc_copyWeak(auStack_90,auStack_80);
  puVar5 = puVar4;
  func_0x00010c25ff60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = auStack_88;
  _objc_loadWeakRetained(puVar3);
  puVar4 = puVar3;
  func_0x00010bf778e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x108ca2714;
  puStack_c0 = &UNK_11086d980;
  _objc_copyWeak(auStack_b8,auStack_80);
  puVar5 = puVar4;
  func_0x00010c25ff60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar6 = auStack_88;
  _objc_loadWeakRetained(puVar6);
  puVar4 = puVar6;
  func_0x00010c2a7120();
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_108ca2744;
  puStack_f0 = &UNK_110ac0b88;
  _objc_copyWeak(auStack_e0,auStack_88);
  _objc_retain(puVar2);
  puVar5 = puVar4;
  puStack_e8 = puVar2;
  func_0x00010c2656e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar5;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_initWeak(auStack_110,*(undefined8 *)(param_1 + 0x28));
  _objc_copyWeak(auStack_120,auStack_80);
  _objc_copyWeak(auStack_118,auStack_110);
  puVar4 = puVar3;
  func_0x00010c25ff60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_120);
  _objc_destroyWeak(auStack_110);
  _objc_release(puStack_e8);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108ca26e4; end: 108ca2743;  */

void FUN_108ca26e4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd10e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ca2744; end: 108ca298f;  */

void FUN_108ca2744(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_108ca1c6c;
  uStack_78 = 0x108ca1c7c;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf5e060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0ba200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d3c80();
  lStack_70 = lVar4;
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126ae6b8;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf7dd40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  lStack_68 = lVar2;
  _objc_loadWeakRetained();
  lVar3 = param_1;
  func_0x00010bf9fc40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_60 = lVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cab40(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = puVar6;
  func_0x00010c2519e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar6);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(lStack_70);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  uVar8 = 8;
  __Block_object_dispose(&uStack_98,8);
  __Unwind_Resume(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar8,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 108ca2990; end: 108ca2997;  */

void FUN_108ca2990(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 108ca2998; end: 108ca2af3;  */

void FUN_108ca2998(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  func_0x00010bf8d080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar3 = *(undefined8 *)(lVar9 * 8);
      uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
      func_0x00010c094540(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(uVar8);
      _objc_release(uVar3);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  func_0x00010c0df760(puVar4);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar6);
  puVar5 = puVar4 + 0x20;
  _objc_loadWeakRetained(puVar5);
  func_0x00010bf1f3c0(lVar6);
  func_0x00010be82a40(puVar5);
  _objc_release(puVar5);
  puVar5 = puVar4 + 0x20;
  _objc_loadWeakRetained(puVar5);
  func_0x00010bf1f3c0(lVar6);
  func_0x00010be4b9c0(puVar5);
  _objc_release(puVar5);
  lVar2 = lVar6;
  func_0x00010bf1f3c0();
  _objc_release(lVar6);
  if ((int)lVar2 == 0) {
    puVar4 = puVar4 + 0x20;
    _objc_loadWeakRetained(puVar4);
    func_0x00010bdd10e0();
  }
  else {
    puVar5 = puVar4 + 0x28;
    _objc_loadWeakRetained(puVar5);
    func_0x00010beef740();
    _objc_release(puVar5);
    puVar5 = puVar4 + 0x28;
    _objc_loadWeakRetained(puVar5);
    func_0x00010c13d240();
    _objc_release(puVar5);
    puVar4 = puVar4 + 0x28;
    _objc_loadWeakRetained(puVar4);
    puVar5 = PTR_PTR_1126db718;
    _objc_opt_class(PTR_PTR_1126db718);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2818c0(puVar4);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 108ca2af4; end: 108ca2c13;  */

void FUN_108ca2af4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf1f3c0(param_2);
  func_0x00010be82a40(lVar1);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf1f3c0(param_2);
  func_0x00010be4b9c0(lVar1);
  _objc_release(lVar1);
  uVar2 = param_2;
  func_0x00010bf1f3c0();
  _objc_release(param_2);
  if ((int)uVar2 == 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdd10e0();
  }
  else {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010beef740();
    _objc_release(lVar1);
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c13d240();
    _objc_release(lVar1);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    puVar3 = PTR_PTR_1126db718;
    _objc_opt_class(PTR_PTR_1126db718);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2818c0(param_1);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ca2c14; end: 108ca2c8b; -[SCLensProcessingWorkflow _applicationInBackground] */

void FUN_108ca2c14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dce0(*(undefined8 *)(param_1 + 0x20));
  puVar1 = &UNK_10f5115b5;
  func_0x000107c31818();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_108ca2c8c;
  puStack_38 = &UNK_110848c48;
  lStack_30 = param_1;
  puStack_28 = puVar1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x58),param_2,&puStack_50);
  return;
}



/* Entry: 108ca2c8c; end: 108ca2d63;  */

void FUN_108ca2c8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c31820(&UNK_10f5115d0);
  func_0x00010bdd10e0(*(undefined8 *)(param_1 + 0x20),param_2,0);
  func_0x00010bddfd60(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be82a40(*(undefined8 *)(param_1 + 0x20),param_2,0);
  func_0x00010be4b9c0(*(undefined8 *)(param_1 + 0x20),param_2,0);
  func_0x00010c255840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010bf44420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a8a0();
  _objc_release(uVar2);
  func_0x000107c3181c(*(undefined8 *)(param_1 + 0x28));
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ca2d64; end: 108ca2deb; -[SCLensProcessingWorkflow _screenBecameVisible:] */

void FUN_108ca2d64(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bddfd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__clearAllEffects_1125558f8);
    return;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf07da0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010bdd10e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be82a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__processingActive__11257e430,1);
    return;
  }
  return;
}



/* Entry: 108ca2dec; end: 108ca2df3; -[SCLensProcessingWorkflow _clearAllEffects] */

void FUN_108ca2dec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3a830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_clearAllEffects_1125ac3b0);
  return;
}



/* Entry: 108ca2df4; end: 108ca2e93; -[SCLensProcessingWorkflow _audioActive:] */

void FUN_108ca2df4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    func_0x00010c255780(*(undefined8 *)(param_1 + 0x60));
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d3ec0(uVar2,param_2,param_1);
  }
  else {
    lVar1 = param_1;
    func_0x00010c151400();
    if ((int)lVar1 == 0) {
      return;
    }
    func_0x00010c24d960(*(undefined8 *)(param_1 + 0x60));
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2818c0(uVar2,param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ca2e94; end: 108ca2f33; -[SCLensProcessingWorkflow _processingActive:] */

/* WARNING: Possible PIC construction at 0x000108ca2ee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108ca2f10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108ca2eec) */
/* WARNING: Removing unreachable block (ram,0x000108ca2f14) */

void FUN_108ca2e94(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    func_0x00010c1bc6a0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c12dd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x38),PTR_s_removeProcessingModule__112629160,
               *(undefined8 *)(param_1 + 0x10));
    return;
  }
  lVar1 = param_1;
  func_0x00010c151400();
  if ((int)lVar1 != 0) {
    func_0x00010c1bc6a0(*(undefined8 *)(param_1 + 8));
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c115b00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c139380();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010befabb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x38),PTR_s_addProcessingModule__11259c490,
               *(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}



/* Entry: 108ca2f34; end: 108ca3013; -[SCLensProcessingWorkflow _lensProcessingScopeActive:] */

void FUN_108ca2f34(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x58));
  if (param_3 != 0) {
    if ((*(long *)(param_1 + 0x70) == 0) &&
       (lVar1 = param_1, func_0x00010c151400(), (int)lVar1 != 0)) {
      puVar2 = PTR_PTR_1126db718;
      func_0x00010c0b6d40();
      if (((ulong)puVar2 & 1) == 0) {
        func_0x00010c1c1a60(PTR_PTR_1126db718,param_2,1);
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_40 = 0xc0000000;
        pcStack_38 = FUN_108ca3014;
        puStack_30 = &UNK_110848088;
        lStack_28 = param_1;
        func_0x00010beefde0(uVar3,param_2,&puStack_48);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x70) = uVar3;
        _objc_release(uVar4);
        func_0x00010c1c1a60(PTR_PTR_1126db718,param_2,0);
      }
    }
    return;
  }
  func_0x00010bf86de0();
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108ca3014; end: 108ca3017;  */

void FUN_108ca3014(void)

{
  return;
}



/* Entry: 108ca3018; end: 108ca3077; -[SCLensProcessingWorkflow _audioSessionWillDeactivateNotificationReceived:] */

void FUN_108ca3018(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf5e060();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c255870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_stopAllSoundEffectsAndWait_112673040);
    return;
  }
  return;
}



/* Entry: 108ca3078; end: 108ca30d7; -[SCLensProcessingWorkflow _audioSessionDidActivateNotificationReceived:] */

void FUN_108ca3078(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf5e060();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c13d250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_resumeAllSoundEffects_11262ceb0);
    return;
  }
  return;
}



/* Entry: 108ca30d8; end: 108ca30df; -[SCLensProcessingWorkflow secretFeatureChecker:didCheckSecretFeatureMode:] */

void FUN_108ca30d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdce890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applySecretFeatureState__1125513c0,param_4);
  return;
}



/* Entry: 108ca30e0; end: 108ca310f; -[SCLensProcessingWorkflow _applySecretFeatureState:] */

void FUN_108ca30e0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    return;
  }
  if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d3ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_muteAudioPlayersForRequestorId__1126129c8,
               &PTR____CFConstantStringClassReference_110ef0ad8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2818d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_unmuteAudioPlayersForRequestorId_11267e058,
             &PTR____CFConstantStringClassReference_110ef0ad8);
  return;
}



/* Entry: 108ca3110; end: 108ca311b; -[SCLensProcessingWorkflow screenVisible] */

byte FUN_108ca3110(long param_1)

{
  return *(byte *)(param_1 + 0xa1) & 1;
}



/* Entry: 108ca311c; end: 108ca3123; -[SCLensProcessingWorkflow setScreenVisible:] */

void FUN_108ca311c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa1) = param_3;
  return;
}



/* Entry: 108ca3124; end: 108ca3207; -[SCLensProcessingWorkflow .cxx_destruct] */

void FUN_108ca3124(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
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



/* Entry: 108ca3208; end: 108ca33cf; -[SCLensProcessingEffectFetcher initWithLensDataFetcher:applicationLifecycleEvents:] */

undefined8 *
FUN_108ca3208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126fe0b8;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 4) = 0;
    _objc_initWeak(auStack_68,puVar1);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_108ca33d0;
    puStack_78 = &UNK_110ac0008;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c0e33e0(param_3);
    uVar2 = param_4;
    func_0x00010bf75dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_98,auStack_68);
    uVar4 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[5];
    puVar1[5] = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108ca33d0; end: 108ca3447;  */

void FUN_108ca33d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef9980(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ca3448; end: 108ca3477; -[SCLensProcessingEffectFetcher setupInmemoryAssetsDataProvider:] */

void FUN_108ca3448(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108ca3478; end: 108ca34cf; -[SCLensProcessingEffectFetcher _clearFetchingEffects] */

void FUN_108ca3478(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x20);
  return;
}



/* Entry: 108ca34d0; end: 108ca36f7; -[SCLensProcessingEffectFetcher fetchWithLensMetadata:] */

void FUN_108ca34d0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126ae558;
  if (lVar2 == 0) {
    FUN_108ca7010(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010c072d20();
    param_2 = param_3;
    if ((int)lVar1 == 0) {
      _os_unfair_lock_lock(param_1 + 0x20);
      puVar5 = *(undefined **)(param_1 + 0x18);
      lVar1 = param_3;
      func_0x00010c094540(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (puVar5 == (undefined *)0x0) {
        puVar5 = PTR_PTR_1126ae560;
        _objc_opt_new(PTR_PTR_1126ae560);
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        lVar1 = param_3;
        func_0x00010c094540(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar6);
        _objc_release(lVar1);
        uVar6 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa7fa0(uVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(uVar6);
      }
      _os_unfair_lock_unlock(param_1 + 0x20);
      puVar3 = puVar5;
      func_0x00010bfbc3e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    else {
      puVar3 = PTR_PTR_1126ae558;
      func_0x00010bfe9ca0(PTR_PTR_1126ae558);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bddd790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108ca36f8; end: 108ca36ff; -[SCLensProcessingEffectFetcher didFinishLoadingContentForLens:contentPath:error:fromCache:fromAsf:lensDataFetcher:] */

void FUN_108ca36f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddd790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__checkFetchedLens_error__112554f80,param_3,param_5);
  return;
}



/* Entry: 108ca3700; end: 108ca370b; -[SCLensProcessingEffectFetcher didFinishLoadingContentForAsset:lens:content:error:fromAsf:lensDataFetcher:] */

void FUN_108ca3700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddd790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__checkFetchedLens_error__112554f80,param_4,param_6);
  return;
}



/* Entry: 108ca370c; end: 108ca370f; -[SCLensProcessingEffectFetcher didFinishLoadingExternalDataForLens:error:fromAsf:lensDataFetcher:] */

void FUN_108ca370c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddd790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkFetchedLens_error__112554f80);
  return;
}



/* Entry: 108ca3710; end: 108ca3713; -[SCLensProcessingEffectFetcher willStartLoadingLens:lensAssets:externalData:fromAsf:lensDataFetcher:] */

void FUN_108ca3710(void)

{
  return;
}



/* Entry: 108ca3714; end: 108ca3717; -[SCLensProcessingEffectFetcher willStartLoadingContentForLens:fromCache:fromAsf:lensDataFetcher:] */

void FUN_108ca3714(void)

{
  return;
}



/* Entry: 108ca3718; end: 108ca371b; -[SCLensProcessingEffectFetcher willStartLoadingImageForLens:fromCache:fromAsf:lensDataFetcher:] */

void FUN_108ca3718(void)

{
  return;
}



/* Entry: 108ca371c; end: 108ca371f; -[SCLensProcessingEffectFetcher didFinishLoadingImageForLens:image:error:fromCache:fromAsf:lensDataFetcher:] */

void FUN_108ca371c(void)

{
  return;
}



/* Entry: 108ca3720; end: 108ca3723; -[SCLensProcessingEffectFetcher willStartLoadingAsset:lens:fromAsf:lensDataFetcher:] */

void FUN_108ca3720(void)

{
  return;
}



/* Entry: 108ca3724; end: 108ca3727; -[SCLensProcessingEffectFetcher willStartLoadingExternalDataForLens:fromAsf:lensDataFetcher:] */

void FUN_108ca3724(void)

{
  return;
}



/* Entry: 108ca3728; end: 108ca3913; -[SCLensProcessingEffectFetcher _checkFetchedLens:error:] */

void FUN_108ca3728(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x20);
    lVar3 = *(long *)(param_1 + 0x18);
    lVar1 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar3 != 0) {
      if (param_4 == 0) {
        lVar1 = param_3;
        func_0x00010c072d20();
        puVar2 = PTR_PTR_1126ae6a8;
        if ((int)lVar1 != 0) {
          if (*(long *)(param_1 + 0x10) != 0) {
            lVar1 = param_3;
            func_0x00010c0b8380(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1375a0(puVar2,param_2,lVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf97ce0();
            _objc_release(puVar2);
            _objc_release(lVar1);
          }
          uVar4 = *(undefined8 *)(param_1 + 0x18);
          lVar1 = param_3;
          func_0x00010c094540(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar4,param_2,0,lVar1);
          _objc_release(lVar1);
          func_0x00010bf43d60(lVar3,param_2,param_3);
        }
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        lVar1 = param_3;
        func_0x00010c094540(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar4,param_2,0,lVar1);
        _objc_release(lVar1);
        func_0x00010bf43ca0(lVar3,param_2,param_4);
      }
    }
    _objc_release(lVar3);
    _os_unfair_lock_unlock(param_1 + 0x20);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ca3914; end: 108ca3aa3;  */

void FUN_108ca3914(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b9660;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80(param_2);
  uVar3 = param_2;
  func_0x00010bf12ea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf93ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bf93e80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010bf38a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bff43e0(puVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1ea220(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ca3aa4; end: 108ca3aeb; -[SCLensProcessingEffectFetcher .cxx_destruct] */

void FUN_108ca3aa4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ca3aec; end: 108ca3d67; -[SCLensProcessingLensModeAggregator initWithEffectFeatureProvider:effectApplicator:lensModeSortingStrategy:performer:] */

undefined8 *
FUN_108ca3aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126fe0c0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    _objc_retain();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar4;
    _objc_release(uVar2);
    _objc_retain(puVar4);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar5;
    _objc_release(uVar2);
    _objc_retain(puVar5);
    func_0x00010bef7f00(param_3);
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = param_4;
    func_0x00010bf7dd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar5);
    _objc_retain(puVar4);
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(puVar3);
    uVar6 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[7];
    puVar1[7] = uVar6;
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108ca3d68; end: 108ca3f4b;  */

void FUN_108ca3d68(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  undefined8 uVar9;
  long unaff_x23;
  long lVar10;
  long unaff_x24;
  long lVar11;
  long lVar12;
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  undefined1 auStack_178 [8];
  long lStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010bf8d080();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = auStack_e8;
  uVar8 = 0x10;
  lVar2 = param_2;
  func_0x00010bf52a60();
  puVar1 = PTR____kCFBooleanFalse_11034ab60;
  if (lVar2 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_2);
        }
        lVar10 = *(long *)(lStack_128 + lVar12 * 8);
        unaff_x24 = lVar10;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = unaff_x24;
        func_0x00010c08fa60();
        _objc_release(unaff_x24);
        unaff_x23 = lVar10;
        if (lVar3 != 0) {
          uVar8 = *(undefined8 *)(param_1 + 0x20);
          lVar3 = lVar10;
          func_0x00010c094540(lVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar8);
          _objc_release(lVar3);
          unaff_x24 = *(long *)(param_1 + 0x28);
          func_0x00010c094540(lVar10);
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = unaff_x24;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar10);
          if (unaff_x23 != 0) {
            unaff_x24 = param_1 + 0x38;
            _objc_loadWeakRetained();
            func_0x00010be072e0();
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(unaff_x24);
            lVar3 = *(long *)(param_1 + 0x20);
            func_0x00010bf529e0();
            if (lVar3 == 0) {
              func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30));
            }
          }
          _objc_release(unaff_x23);
        }
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      puVar7 = auStack_e8;
      uVar8 = 0x10;
      lVar2 = param_2;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x21 = 0;
      unaff_x22 = puVar1;
    } while (lVar2 != 0);
  }
  lVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_108ca3f4c;
  lStack_170 = unaff_x24;
  lStack_168 = unaff_x23;
  puStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  lStack_150 = param_2;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  _objc_retain(uVar8);
  puVar4 = (undefined1 *)puVar6;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c08fa60();
  _objc_release(puVar4);
  if ((puVar5 != (undefined1 *)0x0) &&
     (puVar4 = puVar7, func_0x00010c08fa60(), puVar4 != (undefined1 *)0x0)) {
    _objc_initWeak(auStack_178,lVar2);
    uVar9 = *(undefined8 *)(lVar2 + 0x18);
    uStack_180 = 0;
    _objc_copyWeak(auStack_188,auStack_178);
    _objc_retain(puVar6);
    _objc_retain(puVar7);
    _objc_retain(uVar8);
    func_0x00010c0f7fc0(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_188);
    _objc_destroyWeak(auStack_178);
  }
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  return;
}



/* Entry: 108ca3f4c; end: 108ca40b3; -[SCLensProcessingLensModeAggregator applyCameraModeWithLens:identifier:completion:] */

void FUN_108ca3f4c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if ((lVar2 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uStack_50 = 0;
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108ca40b4; end: 108ca4177;  */

void FUN_108ca40b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    uVar2 = uVar3;
    func_0x00010c094540(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4,param_2,uVar3,uVar2);
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(lVar1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c094540(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4,param_2,uVar3,uVar2);
    _objc_release(uVar2);
    func_0x00010bdcdc80(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x40),param_2,PTR____kCFBooleanTrue_11034ab68);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108ca4178; end: 108ca421b; -[SCLensProcessingLensModeAggregator removeCameraModeFor:] */

void FUN_108ca4178(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108ca421c;
    puStack_50 = &UNK_110844b80;
    uStack_38 = 0;
    lStack_48 = param_1;
    _objc_retain(param_3);
    lStack_40 = param_3;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
    _objc_release(lStack_40);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108ca421c; end: 108ca4227;  */

void FUN_108ca421c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8b990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__removeCameraModeWithIdentifier__112580800,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108ca4228; end: 108ca427b; -[SCLensProcessingLensModeAggregator didAppliedCameraModeObservable] */

void FUN_108ca4228(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf7ddc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5cae0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108ca427c; end: 108ca4517; -[SCLensProcessingLensModeAggregator didLoadCameraModeObservable] */

void FUN_108ca427c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf778e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6b8;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x108ca4374;
  puStack_50 = &UNK_1108683b8;
  uStack_48 = uVar1;
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  _objc_retain(uVar4);
  _objc_retain(uVar3);
  _objc_retain(uVar1);
  func_0x00010bf54280(puVar2,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ca4518; end: 108ca460b; -[SCLensProcessingLensModeAggregator didRemoveCameraModeObservable] */

void FUN_108ca4518(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf7dd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010befa120(puVar1,param_2,lVar2);
  }
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010bf9fc40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    func_0x00010befa120(puVar1,param_2,lVar3);
  }
  puVar5 = PTR_PTR_1126ae6b8;
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c0cab40(puVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010be5cae0(param_1,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108ca460c; end: 108ca4633; -[SCLensProcessingLensModeAggregator cameraModeActivatedObservable] */

void FUN_108ca460c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ca4634; end: 108ca4813; -[SCLensProcessingLensModeAggregator requestImagePickerForEffectId:photoPickerOptions:selectionLimit:useLensCoreTinselTracking:interfaceAction:completion:] */

void FUN_108ca4634(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined1 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x18));
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      if (param_7 - 2U < 2) {
        lVar1 = param_1;
        func_0x00010c0fb520(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c0e00e0(uVar2,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0xc2000000;
        pcStack_78 = FUN_108ca4814;
        puStack_70 = &UNK_110849530;
        _objc_retain(param_8);
        uStack_68 = param_8;
        func_0x00010c239120(lVar1,param_2,uVar2,(uint)param_4 & 1,param_4 >> 1 & 1,param_4 >> 2 & 1,
                            param_4 >> 3 & 1,param_5,param_6);
        _objc_release(uVar2);
        _objc_release(lVar1);
        uVar2 = uStack_68;
      }
      else {
        if (param_7 != 4) goto LAB_108ca47e4;
        func_0x00010c0fb520(param_1);
        _objc_retainAutoreleasedReturnValue();
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0xc2000000;
        uStack_a0 = 0x108ca482c;
        puStack_98 = &UNK_110849530;
        _objc_retain(param_8);
        uStack_90 = param_8;
        func_0x00010bfe2560(param_1,param_2,&puStack_b0);
        _objc_release(param_1);
        uVar2 = uStack_90;
      }
      _objc_release(uVar2);
    }
  }
LAB_108ca47e4:
  _objc_release(param_8);
  _objc_release(param_3);
  return;
}



/* Entry: 108ca4814; end: 108ca4843;  */

void FUN_108ca4814(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108ca4824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 108ca4844; end: 108ca4847; -[SCLensProcessingLensModeAggregator requestPlayButtonForEffectId:interfaceAction:] */

void FUN_108ca4844(void)

{
  return;
}



/* Entry: 108ca4848; end: 108ca484b; -[SCLensProcessingLensModeAggregator requestSnapButtonForEffectId:interfaceAction:completion:] */

void FUN_108ca4848(void)

{
  return;
}



/* Entry: 108ca484c; end: 108ca484f; -[SCLensProcessingLensModeAggregator requestAttachmentButtonForEffectId:interfaceAction:] */

void FUN_108ca484c(void)

{
  return;
}



/* Entry: 108ca4850; end: 108ca4853; -[SCLensProcessingLensModeAggregator requestModalCardForEffectId:headerId:descriptionId:interfaceAction:completion:] */

void FUN_108ca4850(void)

{
  return;
}



/* Entry: 108ca4854; end: 108ca4857; -[SCLensProcessingLensModeAggregator requestHideIntefaceElementsForEffectId:interfaceAction:] */

void FUN_108ca4854(void)

{
  return;
}



/* Entry: 108ca4858; end: 108ca4a0f; -[SCLensProcessingLensModeAggregator _mapEffectsObservable:] */

void FUN_108ca4858(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x108ca4948;
  puStack_50 = &UNK_1108683b8;
  uStack_48 = param_3;
  uStack_40 = uVar2;
  uStack_38 = uVar3;
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ca4a10; end: 108ca4bcf;  */

void FUN_108ca4a10(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar8 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2;
  _objc_retain(param_2);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar1 = param_2;
  func_0x00010bf8d080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar15 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar1);
        }
        lVar10 = *(long *)(lStack_128 + lVar15 * 8);
        lVar9 = lVar10;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar9;
        func_0x00010c08fa60();
        _objc_release(lVar9);
        if (lVar11 != 0) {
          lVar11 = *(long *)(param_1 + 0x28);
          lVar9 = lVar10;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar9);
          lVar9 = lVar11;
          func_0x00010c08fa60();
          if (lVar9 != 0) {
            uVar12 = *(undefined8 *)(param_1 + 0x30);
            func_0x00010c094540();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0d9840(uVar12);
            _objc_release(lVar10);
          }
          _objc_release(lVar11);
        }
        lVar15 = lVar15 + 1;
      } while (lVar2 != lVar15);
      lVar2 = lVar1;
      puVar8 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  func_0x00010bf0ae40(*(undefined8 *)(param_2 + 0x18));
  lVar2 = param_2;
  func_0x00010be072e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(lVar2);
  lVar13 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar13 == 0) {
    _objc_release(lVar2);
  }
  else {
    lVar9 = 0;
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        lVar14 = *(long *)(lVar11 * 8);
        lVar10 = lVar14;
        func_0x00010bf08640();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar10;
        func_0x00010bf529e0();
        _objc_release(lVar10);
        if (lVar5 == 0) {
          lVar10 = lVar14;
          func_0x00010bf8cea0(lVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(lVar10);
        }
        lVar10 = lVar14;
        func_0x00010bf08640();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar10;
        func_0x00010bfb2660();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar10);
        puVar6 = PTR_PTR_1126db410;
        _objc_alloc(PTR_PTR_1126db410);
        func_0x00010bf8cea0(lVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c00f100(puVar6);
        _objc_release(lVar14);
        func_0x00010befa120(puVar4);
        lVar10 = lVar5;
        func_0x00010bf529e0();
        lVar9 = lVar10 + lVar9;
        _objc_release(puVar6);
        _objc_release(lVar5);
        lVar11 = lVar11 + 1;
      } while (lVar13 != lVar11);
      lVar13 = lVar2;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
    _objc_release(lVar2);
    if (lVar9 != 0) {
      func_0x00010bf08400(*(undefined8 *)(param_2 + 8));
      goto LAB_108ca4e1c;
    }
  }
  func_0x00010bf3b2a0(*(undefined8 *)(param_2 + 8));
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x40));
LAB_108ca4e1c:
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf8ccd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar7,PTR_s_effect_1125c0cd8);
  return;
}



/* Entry: 108ca4bd0; end: 108ca4e77; -[SCLensProcessingLensModeAggregator _removeCameraModeWithIdentifier:] */

void FUN_108ca4bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x18));
  lVar2 = param_1;
  func_0x00010be072e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(lVar2);
  lVar5 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar5 == 0) {
    _objc_release(lVar2);
  }
  else {
    lVar10 = 0;
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        lVar12 = *(long *)(lVar11 * 8);
        lVar6 = lVar12;
        func_0x00010bf08640();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf529e0();
        _objc_release(lVar6);
        if (lVar7 == 0) {
          lVar6 = lVar12;
          func_0x00010bf8cea0(lVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(lVar6);
        }
        lVar6 = lVar12;
        func_0x00010bf08640();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bfb2660();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        puVar8 = PTR_PTR_1126db410;
        _objc_alloc(PTR_PTR_1126db410);
        func_0x00010bf8cea0(lVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c00f100(puVar8);
        _objc_release(lVar12);
        func_0x00010befa120(puVar4);
        lVar6 = lVar7;
        func_0x00010bf529e0();
        lVar10 = lVar6 + lVar10;
        _objc_release(puVar8);
        _objc_release(lVar7);
        lVar11 = lVar11 + 1;
      } while (lVar5 != lVar11);
      lVar5 = lVar2;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
    _objc_release(lVar2);
    if (lVar10 != 0) {
      func_0x00010bf08400(*(undefined8 *)(param_1 + 8));
      goto LAB_108ca4e1c;
    }
  }
  func_0x00010bf3b2a0(*(undefined8 *)(param_1 + 8));
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40));
LAB_108ca4e1c:
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf8ccd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_effect_1125c0cd8);
  return;
}



/* Entry: 108ca4e78; end: 108ca4e7f;  */

void FUN_108ca4e78(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8ccd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_effect_1125c0cd8);
  return;
}



/* Entry: 108ca4e80; end: 108ca516b; -[SCLensProcessingLensModeAggregator _applyCameraModeWithLens:identifier:completion:] */

void FUN_108ca4e80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x18));
  lVar2 = param_1;
  func_0x00010be07280();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(lVar2);
  lVar4 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      lVar12 = *(long *)(lVar10 * 8);
      lVar5 = lVar12;
      func_0x00010bf08640();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bfb2660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      lVar5 = lVar6;
      func_0x00010bf529e0();
      if (lVar5 != 0) {
        puVar7 = PTR_PTR_1126db410;
        _objc_alloc(PTR_PTR_1126db410);
        func_0x00010bf8cea0(lVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c00f100(puVar7);
        _objc_release(lVar12);
        func_0x00010befa120(puVar3);
        func_0x00010bf529e0(lVar6);
        _objc_release(puVar7);
      }
      _objc_release(lVar6);
      lVar10 = lVar10 + 1;
    } while (lVar4 != lVar10);
    lVar4 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar11);
  uVar9 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(puVar3);
  _objc_retain(uVar11);
  func_0x00010bf08400(uVar9);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(uVar11);
  _objc_release(uVar11);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf8ccd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_effect_1125c0cd8);
  return;
}



/* Entry: 108ca516c; end: 108ca5173;  */

void FUN_108ca516c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8ccd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_effect_1125c0cd8);
  return;
}



/* Entry: 108ca5174; end: 108ca5203;  */

void FUN_108ca5174(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  if (param_3 == 0) {
    if (1 < param_2) {
      if (param_2 != 2) goto LAB_108ca51f0;
      func_0x00010be0e2e0(*(undefined8 *)(param_1 + 0x28));
    }
    lVar1 = *(long *)(param_1 + 0x48);
    if (lVar1 == 0) goto LAB_108ca51f0;
    pcVar3 = *(code **)(lVar1 + 0x10);
    lVar2 = 0;
  }
  else {
    func_0x00010be0e2e0(*(undefined8 *)(param_1 + 0x28));
    lVar1 = *(long *)(param_1 + 0x48);
    if (lVar1 == 0) goto LAB_108ca51f0;
    pcVar3 = *(code **)(lVar1 + 0x10);
    lVar2 = param_3;
  }
  (*pcVar3)(lVar1,lVar2);
LAB_108ca51f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ca5204; end: 108ca5473; -[SCLensProcessingLensModeAggregator _failedToApplyLayers:error:] */

void FUN_108ca5204(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x18));
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  _objc_retain(param_3);
  puVar5 = &uStack_1b0;
  puVar6 = auStack_f0;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,puVar5,puVar6,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_1a0;
    do {
      lVar13 = 0;
      do {
        if (*plStack_1a0 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        lVar2 = *(long *)(lStack_1a8 + lVar13 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        func_0x00010bf8d080();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf52a60();
        if (lVar3 != 0) {
          lVar8 = *plStack_1e0;
          do {
            lVar12 = 0;
            do {
              if (*plStack_1e0 != lVar8) {
                _objc_enumerationMutation(lVar2);
              }
              lVar9 = *(long *)(lStack_1e8 + lVar12 * 8);
              lVar4 = lVar9;
              func_0x00010c094540();
              _objc_retainAutoreleasedReturnValue();
              lVar10 = lVar4;
              func_0x00010c08fa60();
              _objc_release(lVar4);
              if (lVar10 != 0) {
                lVar10 = *(long *)(param_1 + 0x30);
                lVar4 = lVar9;
                func_0x00010c094540(lVar9);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e00e0(lVar10,param_2,lVar4);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar4);
                lVar4 = lVar10;
                func_0x00010c08fa60();
                if (lVar4 != 0) {
                  func_0x00010be072e0(param_1,param_2,lVar10);
                  _objc_unsafeClaimAutoreleasedReturnValue();
                  uVar11 = *(undefined8 *)(param_1 + 0x28);
                  func_0x00010c094540();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(uVar11,param_2,0,lVar9);
                  _objc_release(lVar9);
                }
                _objc_release(lVar10);
              }
              lVar12 = lVar12 + 1;
            } while (lVar3 != lVar12);
            lVar3 = lVar2;
            func_0x00010bf52a60(lVar2,param_2,&uStack_1f0,auStack_170,0x10);
          } while (lVar3 != 0);
        }
        _objc_release(lVar2);
        lVar13 = lVar13 + 1;
      } while (lVar13 != lVar1);
      puVar5 = &uStack_1b0;
      puVar6 = auStack_f0;
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,puVar5,puVar6,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  _os_unfair_lock_lock(param_3 + 0x20);
  lVar1 = param_3;
  func_0x00010be07120(param_3,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c0954c0(uVar11,param_2,puVar5,puVar6,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_3 + 0x20);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
  return;
}



/* Entry: 108ca5474; end: 108ca552f; -[SCLensProcessingLensModeAggregator _effectsApplingEffect:identifier:] */

void FUN_108ca5474(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x20);
  lVar1 = param_1;
  func_0x00010be07120(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0954c0(uVar2,param_2,param_3,param_4,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108ca5530; end: 108ca55cb; -[SCLensProcessingLensModeAggregator _effectsRemovingIdentifier:] */

void FUN_108ca5530(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  lVar1 = param_1;
  func_0x00010be07120(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0954e0(uVar2,param_2,param_3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108ca55cc; end: 108ca56b7; -[SCLensProcessingLensModeAggregator _effectLayerTypeForCameraModeIdentifier:] */

void FUN_108ca55cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126db848;
  func_0x00010c0ef440();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf4b900();
  _objc_release(puVar1);
  if ((int)puVar2 == 0) {
    puVar1 = PTR_PTR_1126db848;
    func_0x00010c27f720();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf4b900();
    _objc_release(puVar1);
    ppuVar3 = &PTR____CFConstantStringClassReference_110f77198;
    _objc_retain(&PTR____CFConstantStringClassReference_110f77198);
    if (((ulong)puVar2 & 1) == 0) {
      puVar1 = PTR_PTR_1126b9b28;
      func_0x00010c104740(PTR_PTR_1126b9b28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4bb00(param_3,param_2,puVar1);
      _objc_release(puVar1);
    }
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f771d8;
    _objc_retain(&PTR____CFConstantStringClassReference_110f771d8);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 108ca56b8; end: 108ca56cf; -[SCLensProcessingLensModeAggregator photoPickerDelegate] */

void FUN_108ca56b8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ca56d0; end: 108ca56db; -[SCLensProcessingLensModeAggregator setPhotoPickerDelegate:] */

void FUN_108ca56d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 108ca56dc; end: 108ca574f; -[SCLensProcessingLensModeAggregator .cxx_destruct] */

void FUN_108ca56dc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ca5750; end: 108ca588f;  */

void FUN_108ca5750(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b3770;
  func_0x00010c104620(PTR_PTR_1126b3770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(uVar5,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar5 == 0) {
    puVar1 = PTR_PTR_1126db858;
    _objc_alloc(PTR_PTR_1126db858);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c025900(puVar1,param_2,uVar5);
    _objc_release(uVar5);
  }
  else {
    puVar1 = PTR_PTR_1126db850;
    _objc_opt_new(PTR_PTR_1126db850);
  }
  puVar2 = PTR_PTR_1126db860;
  _objc_alloc(PTR_PTR_1126db860);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00ef80(puVar2,param_2,uVar5,uVar3,puVar1,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ca5890; end: 108ca5993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ca5890(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x00010bf29e00(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,param_1 + 0x28);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 108ca5994; end: 108ca5a1f;  */

void FUN_108ca5994(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0(param_2);
    func_0x00010c1bd520(lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108ca5a20; end: 108ca5a23;  */

void FUN_108ca5a20(void)

{
  return;
}


