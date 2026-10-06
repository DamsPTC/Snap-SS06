/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1070c22c8; end: 1070c238b;  */

uint FUN_1070c22c8(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  _objc_retain(param_2);
  uVar2 = 0;
  if ((param_1 < 0x2c) &&
     ((((1L << (param_1 & 0x3f) & 0x8000000004U) != 0 ||
       ((1L << (param_1 & 0x3f) & 0x40000000002U) != 0)) ||
      ((1L << (param_1 & 0x3f) & 0x80000000100U) != 0)))) {
    uVar1 = param_2;
    func_0x00010bf1f440(param_2);
    uVar2 = (uint)uVar1 ^ 1;
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1070c238c; end: 1070c2417;  */

void FUN_1070c238c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e1e498,0,0);
  return;
}



/* Entry: 1070c2418; end: 1070c2467;  */

long FUN_1070c2418(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110e9fef8,1,0);
  return (long)(int)param_1;
}



/* Entry: 1070c2468; end: 1070c24bb;  */

void FUN_1070c2468(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e9ff58,0,0);
  return;
}



/* Entry: 1070c24bc; end: 1070c24e3;  */

long FUN_1070c24bc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110de9898,0,0);
  return (long)(int)param_1;
}



/* Entry: 1070c24e4; end: 1070c24f7;  */

void FUN_1070c24e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e9ffb8,1,0);
  return;
}



/* Entry: 1070c24f8; end: 1070c251f;  */

uint FUN_1070c24f8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110de98b8,0,0);
  return (uint)param_1 & ((int)(uint)param_1 >> 0x1f ^ 0xffffffffU);
}



/* Entry: 1070c2520; end: 1070c25c3; -[SCPreviewDirectSnapCreateLogger initWithCommonLoggingServices:cameraFeatureLoggingServices:] */

undefined1 *
FUN_1070c2520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8a18;
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



/* Entry: 1070c25c4; end: 1070c2723; -[SCPreviewDirectSnapCreateLogger logDirectSnapCreateIfNeededForConfiguration:] */

void FUN_1070c25c4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c074480();
  if ((((uVar1 & 1) != 0) || (uVar1 = param_3, func_0x00010c083a80(), (int)uVar1 != 0)) &&
     ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0b3920(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf52280(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bf5aac0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a4fc0(uVar3,param_2,uVar4,puVar6);
      _objc_release(puVar6);
    }
    else {
      func_0x00010c0a4fc0(uVar3,param_2,uVar4,uVar1);
    }
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070c2724; end: 1070c2753; -[SCPreviewDirectSnapCreateLogger .cxx_destruct] */

void FUN_1070c2724(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070c2754; end: 1070c28a3; -[SCPreviewFeaturesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070c2754(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  if (param_1 == 0) {
    lVar4 = 0;
    uVar5 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112763fc0;
    _objc_loadWeakRetained();
    uVar5 = *(undefined8 *)(param_1 + _DAT_112763fbc);
  }
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1070c28f0;
  puStack_58 = &UNK_110844e40;
  _objc_retain(lVar4);
  lStack_50 = lVar4;
  _objc_retain(puVar1);
  puStack_48 = puVar1;
  func_0x00010bf9d5c0(uVar5,param_2,&PTR___NSConcreteGlobalBlock_11098d178,&puStack_70);
  puVar2 = PTR_PTR_1126d4b80;
  _objc_alloc(PTR_PTR_1126d4b80);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c026460(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112763fb8);
  }
  func_0x00010bf9d660(uVar5,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puStack_48);
  _objc_release(lStack_50);
  _objc_release(lVar4);
  _objc_release(puVar1);
  return;
}



/* Entry: 1070c28a4; end: 1070c28ef;  */

void FUN_1070c28a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d4b78;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c037380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1070c28f0; end: 1070c299f;  */

void FUN_1070c28f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_11098d1b8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf22660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf09f80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070c29a0; end: 1070c29a7;  */

void FUN_1070c29a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_target_112678178);
  return;
}



/* Entry: 1070c29a8; end: 1070c2a9f;  */

undefined * FUN_1070c29a8(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_s_responderChainPriority_11262c7d8;
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_responderChainPriority_11262c7d8);
  if ((uVar1 & 1) != 0) {
    func_0x00010c13b6e0(param_2);
  }
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,puVar2);
  if ((uVar1 & 1) != 0) {
    func_0x00010c13b6e0(param_3);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf433a0(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 1070c2aa0; end: 1070c2af7; -[SCPreviewFeaturesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070c2aa0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112763fc0);
  _objc_storeStrong(param_1 + _DAT_112763fbc,0);
  _objc_storeStrong(param_1 + _DAT_112763fb8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112763fb4);
  return;
}



/* Entry: 1070c2af8; end: 1070c2d3b; -[SCPreviewScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070c2af8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  uVar1 = param_1 + _DAT_112763fc4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(uVar1);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d4b90;
  _objc_alloc(PTR_PTR_1126d4b90);
  func_0x00010c00b8a0();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112764208));
  puVar6 = auStack_68;
  _objc_loadWeakRetained();
  if (puVar6 != (undefined1 *)0x0) {
    param_1 = param_1 + _DAT_112764250;
    _objc_loadWeakRetained(param_1);
    lVar7 = param_1;
    func_0x00010c09a4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    _objc_retain(puVar3);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar7);
    _objc_release(puVar8);
    _objc_release(lVar7);
    _objc_release(param_1);
    _objc_release(puVar3);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 1070c2d3c; end: 1070c2ed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070c2d3c(long param_1,undefined8 param_2)

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
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR_PTR_1126d4b88;
    _objc_alloc(PTR_PTR_1126d4b88);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1 + _DAT_112763fc8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar1 + _DAT_1127641fc;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c103760();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1 + _DAT_112764200;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar1 + _DAT_112764070;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1 + _DAT_112764028;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar1 + _DAT_112764204;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c22b420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c001ce0(puVar12,param_2,uVar11,lVar2,lVar4,lVar5,lVar7,lVar8,lVar10);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1070c2ed4; end: 1070c2f1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070c2ed4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112764070);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070c2f1c; end: 1070c2f2b;  */

void FUN_1070c2f1c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7ffd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__previewViewControllerSetupWithS_11257d990,
             param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1070c2f2c; end: 1070c4573; -[SCPreviewScopeEntryPoint _previewViewControllerSetupWithSnapEditorListeners:sendDependentTasksHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070c2f2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
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
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
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
  long lVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  undefined *puVar66;
  undefined *puVar67;
  undefined *puVar68;
  undefined *puVar69;
  undefined *puVar70;
  long lVar71;
  long lVar72;
  long lStack_328;
  undefined1 auStack_1a8 [8];
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_80,param_1);
  _objc_retain();
  if ((param_1 != 0) && ((*(byte *)(param_1 + _DAT_11276420c) & 1) == 0)) {
    *(undefined1 *)(param_1 + _DAT_11276420c) = 1;
    uVar1 = param_1 + _DAT_112764280;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c072b80();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      lVar71 = param_1 + _DAT_112764210;
      _objc_loadWeakRetained();
      lStack_328 = lVar71;
      func_0x00010c24b780();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar71);
    }
    else {
      lStack_328 = 0;
    }
    lVar71 = (long)_DAT_112763fc4;
    uVar1 = param_1 + lVar71;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c08ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126afee0;
    _objc_opt_class(PTR_PTR_1126afee0);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain();
    _objc_release(uVar2);
    lVar5 = param_1 + _DAT_112764080;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c112260();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_112763fcc;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0600(lVar6);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    lVar5 = param_1 + _DAT_112764080;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c112260();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_112763fe0;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010bf1cf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e19e0(lVar6);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    puVar3 = PTR_PTR_1126d4b98;
    _objc_alloc();
    lVar5 = param_1 + _DAT_112764000;
    _objc_loadWeakRetained();
    lVar9 = lVar5;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_1127640a0;
    _objc_loadWeakRetained();
    lVar6 = param_1 + _DAT_112764268;
    _objc_loadWeakRetained();
    lVar10 = lVar6;
    func_0x00010bf1cf00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_112764240;
    _objc_loadWeakRetained();
    lVar11 = lVar8;
    func_0x00010bf24d40();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + _DAT_1127640f8;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010bf2fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1 + _DAT_112763fcc;
    _objc_loadWeakRetained();
    uVar2 = param_1 + lVar71;
    _objc_loadWeakRetained();
    uVar4 = uVar2;
    func_0x00010c08ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar15 = PTR_PTR_1126afee0;
    _objc_opt_class(PTR_PTR_1126afee0);
    uVar16 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar15);
    uVar2 = uVar4;
    if ((uVar16 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain();
    _objc_release(uVar4);
    lVar17 = param_1 + _DAT_112764034;
    _objc_loadWeakRetained();
    lVar18 = param_1 + _DAT_112764040;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1 + _DAT_112763fdc;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010c08f100();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_1 + _DAT_11276404c;
    _objc_loadWeakRetained();
    lVar23 = param_1 + _DAT_112764008;
    _objc_loadWeakRetained();
    lVar24 = lVar23;
    func_0x00010c084e20();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = param_1 + _DAT_112764294;
    _objc_loadWeakRetained();
    lVar26 = lVar25;
    func_0x00010c0c7d00();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = lVar26;
    func_0x00010bef14a0();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = param_1 + _DAT_112764290;
    _objc_loadWeakRetained();
    lVar29 = lVar28;
    func_0x00010c0c7ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar30 = param_1 + _DAT_112764120;
    _objc_loadWeakRetained();
    lVar31 = lVar30;
    func_0x00010c0c84c0();
    _objc_retainAutoreleasedReturnValue();
    uVar32 = *(undefined8 *)(param_1 + _DAT_1127642bc);
    _objc_retain();
    lVar72 = (long)_DAT_112763ff0;
    lVar33 = param_1 + lVar72;
    _objc_loadWeakRetained();
    lVar34 = param_1 + _DAT_112764070;
    _objc_loadWeakRetained();
    lVar35 = param_1 + _DAT_112763fe8;
    _objc_loadWeakRetained();
    lVar36 = param_1 + _DAT_112763fe0;
    _objc_loadWeakRetained();
    lVar37 = param_1 + _DAT_112763fc8;
    _objc_loadWeakRetained();
    lVar38 = param_1 + _DAT_112764080;
    _objc_loadWeakRetained();
    lVar39 = param_1 + _DAT_112764098;
    _objc_loadWeakRetained();
    lVar40 = lVar39;
    func_0x00010c243b20();
    _objc_retainAutoreleasedReturnValue();
    lVar41 = param_1 + _DAT_112764098;
    _objc_loadWeakRetained();
    lVar42 = lVar41;
    func_0x00010c28e500();
    _objc_retainAutoreleasedReturnValue();
    uVar43 = *(undefined8 *)(param_1 + _DAT_1127642c0);
    _objc_retain();
    uVar44 = *(undefined8 *)(param_1 + _DAT_1127642b8);
    _objc_retain();
    lVar45 = param_1 + _DAT_112764160;
    _objc_loadWeakRetained();
    lVar46 = param_1 + _DAT_112764164;
    _objc_loadWeakRetained();
    lVar47 = lVar46;
    func_0x00010c2542a0();
    _objc_retainAutoreleasedReturnValue();
    lVar48 = param_1 + _DAT_1127640b0;
    _objc_loadWeakRetained();
    lVar49 = param_1 + _DAT_1127640b8;
    _objc_loadWeakRetained();
    lVar50 = param_1 + _DAT_112764278;
    _objc_loadWeakRetained();
    lVar51 = param_1 + _DAT_1127642a4;
    _objc_loadWeakRetained();
    lVar52 = param_1 + _DAT_1127641a4;
    _objc_loadWeakRetained();
    lVar53 = param_1 + _DAT_112764218;
    _objc_loadWeakRetained();
    lVar54 = param_1 + _DAT_1127641a8;
    _objc_loadWeakRetained();
    lVar55 = param_1 + _DAT_1127641ac;
    _objc_loadWeakRetained();
    lVar56 = param_1 + _DAT_1127641a0;
    _objc_loadWeakRetained();
    lVar57 = param_1 + _DAT_1127642a8;
    _objc_loadWeakRetained();
    lVar58 = param_1 + _DAT_1127642ac;
    _objc_loadWeakRetained();
    lVar59 = param_1 + _DAT_1127642b4;
    _objc_loadWeakRetained();
    lVar60 = lVar59;
    func_0x00010c29a700();
    _objc_retainAutoreleasedReturnValue();
    lVar61 = param_1 + _DAT_1127642b0;
    _objc_loadWeakRetained();
    lVar62 = lVar61;
    func_0x00010c29f540();
    _objc_retainAutoreleasedReturnValue();
    lVar63 = param_1 + _DAT_1127641bc;
    _objc_loadWeakRetained();
    lVar64 = lVar63;
    func_0x00010c1308e0();
    _objc_retainAutoreleasedReturnValue();
    lVar65 = param_1 + _DAT_1127641ec;
    _objc_loadWeakRetained();
    func_0x00010c05d040();
    _objc_release(lVar65);
    _objc_release(lVar64);
    _objc_release(lVar63);
    _objc_release(lVar62);
    _objc_release(lVar61);
    _objc_release(lVar60);
    _objc_release(lVar59);
    _objc_release(lVar58);
    _objc_release(lVar57);
    _objc_release(lVar56);
    _objc_release(lVar55);
    _objc_release(lVar54);
    _objc_release(lVar53);
    _objc_release(lVar52);
    _objc_release(lVar51);
    _objc_release(lVar50);
    _objc_release(lVar49);
    _objc_release(lVar48);
    _objc_release(lVar47);
    _objc_release(lVar46);
    _objc_release(lVar45);
    _objc_release(uVar44);
    _objc_release(uVar43);
    _objc_release(lVar42);
    _objc_release(lVar41);
    _objc_release(lVar40);
    _objc_release(lVar39);
    _objc_release(lVar38);
    _objc_release(lVar37);
    _objc_release(lVar36);
    _objc_release(lVar35);
    _objc_release(lVar34);
    _objc_release(lVar33);
    _objc_release(uVar32);
    _objc_release(lVar31);
    _objc_release(lVar30);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(lVar27);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(uVar2);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar8);
    _objc_release(lVar10);
    _objc_release(lVar6);
    _objc_release(lVar7);
    _objc_release(lVar9);
    _objc_release(lVar5);
    puVar66 = PTR_PTR_1126ae560;
    _objc_opt_new();
    lVar5 = param_1 + _DAT_112764254;
    _objc_loadWeakRetained();
    uVar32 = *(undefined8 *)(param_1 + _DAT_112764214);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1070c498c;
    puStack_98 = &UNK_110844e40;
    _objc_retain(puVar66);
    puStack_90 = puVar66;
    _objc_retain(lVar5);
    lStack_88 = lVar5;
    func_0x00010bf9d5c0(uVar32);
    puVar67 = PTR_PTR_1126d4ba8;
    _objc_alloc_init();
    uVar32 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_112763fe8;
    _objc_loadWeakRetained(lVar7);
    lVar6 = lVar7;
    func_0x00010bfede40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac560(uVar32);
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar7);
    _objc_release(uVar32);
    uVar32 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_112763fe8;
    _objc_loadWeakRetained(lVar7);
    lVar6 = lVar7;
    func_0x00010c114380();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e35c0(uVar32);
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar7);
    _objc_release(uVar32);
    uVar32 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_112763fe8;
    _objc_loadWeakRetained(lVar7);
    lVar6 = lVar7;
    func_0x00010c103780();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dec80(uVar32);
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar7);
    _objc_release(uVar32);
    uVar32 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_112763fe8;
    _objc_loadWeakRetained();
    lVar6 = lVar7;
    func_0x00010c15dfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fcbc0(uVar32);
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar7);
    _objc_release(uVar32);
    uVar32 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_112763fe8;
    _objc_loadWeakRetained(lVar7);
    lVar6 = lVar7;
    func_0x00010c0d20c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c97c0(uVar32);
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar7);
    _objc_release(uVar32);
    puVar15 = PTR_PTR_1126ae720;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_1070c4a08;
    puStack_d0 = &UNK_1108cc668;
    _objc_copyWeak(auStack_b8,auStack_80);
    _objc_retain(uVar1);
    uStack_c8 = uVar1;
    _objc_retain(puVar3);
    puStack_c0 = puVar3;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_11276415c;
    _objc_loadWeakRetained();
    lVar17 = lVar7;
    func_0x00010c242d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    lVar7 = param_1 + _DAT_112763fdc;
    _objc_loadWeakRetained();
    lVar10 = lVar7;
    func_0x00010c14a8e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    lVar7 = param_1 + _DAT_1127640b8;
    _objc_loadWeakRetained();
    lVar18 = lVar7;
    func_0x00010c2a29c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    lVar7 = param_1 + _DAT_112763fec;
    _objc_loadWeakRetained();
    lVar11 = lVar7;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    puVar68 = PTR_PTR_1126ae720;
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_1070c4df8;
    puStack_110 = &UNK_11098d238;
    _objc_retain(lVar17);
    lStack_108 = lVar17;
    _objc_retain(lVar10);
    lStack_100 = lVar10;
    _objc_retain(lVar18);
    lStack_f8 = lVar18;
    _objc_retain(lVar11);
    lStack_f0 = lVar11;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar69 = PTR_PTR_1126cb710;
    _objc_alloc();
    puVar70 = puVar66;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_112764224;
    _objc_loadWeakRetained();
    lVar22 = lVar7;
    func_0x00010c1302a0();
    _objc_retainAutoreleasedReturnValue();
    lVar72 = param_1 + lVar72;
    _objc_loadWeakRetained();
    lVar13 = lVar72;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_112764228;
    _objc_loadWeakRetained();
    lVar23 = lVar6;
    func_0x00010bf611e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_112763ff4;
    _objc_loadWeakRetained();
    lVar20 = lVar8;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + _DAT_112763ff8;
    _objc_loadWeakRetained();
    lVar25 = lVar12;
    func_0x00010c292d20();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1 + _DAT_11276422c;
    _objc_loadWeakRetained();
    lVar9 = param_1 + _DAT_112764220;
    _objc_loadWeakRetained();
    lVar28 = lVar9;
    func_0x00010c2572e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0104c0();
    _objc_release(lVar28);
    _objc_release(lVar9);
    _objc_release(lVar14);
    _objc_release(lVar25);
    _objc_release(lVar12);
    _objc_release(lVar20);
    _objc_release(lVar8);
    _objc_release(lVar23);
    _objc_release(lVar6);
    _objc_release(lVar13);
    _objc_release(lVar72);
    _objc_release(lVar22);
    _objc_release(lVar7);
    _objc_release(puVar70);
    func_0x00010c1e1b80(puVar67);
    _objc_storeWeak(param_1 + _DAT_112764230,puVar69);
    func_0x00010c2088a0(puVar69);
    func_0x00010c17c5e0(puVar69);
    lVar7 = param_1 + lVar71;
    _objc_loadWeakRetained(lVar7);
    lVar6 = lVar7;
    func_0x00010c2bd480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2272e0(puVar69);
    _objc_release(lVar6);
    _objc_release(lVar7);
    lVar7 = param_1 + lVar71;
    _objc_loadWeakRetained(lVar7);
    lVar6 = lVar7;
    func_0x00010c244100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205d20(puVar69);
    _objc_release(lVar6);
    _objc_release(lVar7);
    lVar7 = param_1 + lVar71;
    _objc_loadWeakRetained(lVar7);
    lVar6 = lVar7;
    func_0x00010bf2a360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176c20(puVar69);
    _objc_release(lVar6);
    _objc_release(lVar7);
    lVar7 = param_1 + _DAT_112763fc8;
    _objc_loadWeakRetained(lVar7);
    lVar6 = lVar7;
    func_0x00010c240640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2121a0();
    _objc_release(lVar6);
    _objc_release(lVar7);
    lVar7 = param_1 + _DAT_112763fc8;
    _objc_loadWeakRetained(lVar7);
    lVar6 = lVar7;
    func_0x00010c08f640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2121a0();
    _objc_release(lVar6);
    _objc_release(lVar7);
    func_0x00010c09c7a0(puVar69);
    lVar7 = param_1 + lVar71;
    _objc_loadWeakRetained(lVar7);
    lVar6 = lVar7;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar6);
    _objc_release(lVar7);
    puVar70 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar32 = *(undefined8 *)(param_1 + _DAT_112764234);
    *(undefined **)(param_1 + _DAT_112764234) = puVar70;
    _objc_release(uVar32);
    lVar7 = param_1 + lVar71;
    _objc_loadWeakRetained();
    lVar6 = lVar7;
    func_0x00010c229000();
    _objc_retainAutoreleasedReturnValue();
    puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_148 = 0xc2000000;
    uStack_140 = 0x1070c4e2c;
    puStack_138 = &UNK_110857468;
    _objc_copyWeak(auStack_130,auStack_80);
    lVar8 = lVar6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar7);
    lVar7 = param_1 + lVar71;
    _objc_loadWeakRetained();
    lVar6 = lVar7;
    func_0x00010c178f20();
    _objc_retainAutoreleasedReturnValue();
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    uStack_168 = 0x1070c4e58;
    puStack_160 = &UNK_11098d268;
    _objc_copyWeak(auStack_158,auStack_80);
    lVar8 = lVar6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar7);
    lVar7 = param_1 + lVar71;
    _objc_loadWeakRetained();
    lVar6 = lVar7;
    func_0x00010bf168e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_198 = 0xc2000000;
    uStack_190 = 0x1070c4ea0;
    puStack_188 = &UNK_110843540;
    _objc_copyWeak(auStack_180,auStack_80);
    lVar8 = lVar6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar7);
    puVar70 = PTR_PTR_1126d4bc0;
    _objc_alloc();
    lVar7 = param_1 + _DAT_112763fcc;
    _objc_loadWeakRetained(lVar7);
    lVar6 = param_1 + _DAT_112763fd4;
    _objc_loadWeakRetained();
    func_0x00010c000180();
    _objc_release(lVar6);
    _objc_release(lVar7);
    lVar71 = param_1 + lVar71;
    _objc_loadWeakRetained();
    lVar7 = lVar71;
    func_0x00010c0a5040();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_1a8,auStack_80);
    _objc_retain(puVar70);
    lVar6 = lVar7;
    func_0x00010c25ff60(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar6);
    _objc_release(lVar7);
    _objc_release(lVar71);
    _objc_release(puVar70);
    _objc_destroyWeak(auStack_1a8);
    _objc_release(puVar70);
    _objc_destroyWeak(auStack_180);
    _objc_destroyWeak(auStack_158);
    _objc_destroyWeak(auStack_130);
    _objc_release(puVar69);
    _objc_release(puVar68);
    _objc_release(lStack_f0);
    _objc_release(lStack_f8);
    _objc_release(lStack_100);
    _objc_release(lStack_108);
    _objc_release(lVar11);
    _objc_release(lVar18);
    _objc_release(lVar10);
    _objc_release(lVar17);
    _objc_release(puVar15);
    _objc_release(puStack_c0);
    _objc_release(uStack_c8);
    _objc_destroyWeak(auStack_b8);
    _objc_release(puVar67);
    _objc_release(lStack_88);
    _objc_release(puStack_90);
    _objc_release(lVar5);
    _objc_release(puVar66);
    _objc_release(puVar3);
    _objc_release(uVar1);
    _objc_release(lStack_328);
  }
  _objc_release(param_1);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1070c4574; end: 1070c493f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070c4574(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112764080);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070c4940; end: 1070c498b;  */

void FUN_1070c4940(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d4ba0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c037380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1070c498c; end: 1070c4a07;  */

void FUN_1070c498c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bf22660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c174be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf43d60(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1070c4a08; end: 1070c4dd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070c4a08(long param_1,undefined8 param_2)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
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
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
  undefined *puVar33;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar33 = (undefined *)0x0;
  }
  else {
    puVar33 = PTR_PTR_1126d4bb0;
    _objc_alloc();
    uVar31 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1 + _DAT_112763fc8;
    _objc_loadWeakRetained();
    lVar3 = lVar1 + _DAT_112763fcc;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1 + _DAT_112763fd0;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010bf2a2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1 + _DAT_112764218;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar1 + _DAT_112763fd4;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010c23fba0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf42540();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar1 + _DAT_112763fd8;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010c1519c0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar1 + _DAT_112763fdc;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010c08f100();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar18;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar1 + _DAT_112763fe0;
    _objc_loadWeakRetained();
    lVar21 = lVar1 + _DAT_112763fe4;
    _objc_loadWeakRetained();
    lVar32 = (long)_DAT_112763fe8;
    lVar22 = lVar1 + lVar32;
    _objc_loadWeakRetained();
    lVar23 = lVar22;
    func_0x00010c15dfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar23;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar1 + lVar32;
    _objc_loadWeakRetained();
    lVar26 = lVar25;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = lVar1 + lVar32;
    _objc_loadWeakRetained();
    lVar27 = lVar32;
    func_0x00010bf42260();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = lVar1 + _DAT_11276421c;
    _objc_loadWeakRetained();
    lVar29 = lVar1 + _DAT_112764220;
    _objc_loadWeakRetained();
    lVar30 = lVar29;
    func_0x00010c2572e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0398a0(puVar33,param_2,uVar31,lVar2,lVar6,lVar9,lVar11,lVar13,uVar14,lVar16,lVar19,
                        lVar20,lVar21,lVar24,lVar26,lVar27,lVar28,lVar30);
    _objc_release(lVar30);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(lVar27);
    _objc_release(lVar32);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(uVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar33);
  return;
}



/* Entry: 1070c4dd4; end: 1070c4df7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070c4dd4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11276415c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070c4df8; end: 1070c4ee7;  */

void FUN_1070c4df8(void)

{
  _objc_alloc(PTR_PTR_1126d4bb8);
  func_0x00010c048540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070c4ee8; end: 1070c4f0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070c4ee8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112763fd4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070c4f0c; end: 1070c4fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070c4f0c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = lVar1 + _DAT_112763fc4;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c08ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126afee0;
    _objc_opt_class(PTR_PTR_1126afee0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    func_0x00010c0a5060(uVar6);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1070c4fb8; end: 1070c505b; -[SCPreviewScopeEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070c4fb8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar3 = (long)_DAT_112764230;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar3 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf84b00();
    _objc_release(lVar3);
  }
  puStack_38 = PTR_PTR_1126f8a20;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070c505c; end: 1070c508f; -[SCPreviewScopeEntryPoint _setupMultisnapView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070c505c(long param_1)

{
  param_1 = param_1 + _DAT_112764230;
  _objc_loadWeakRetained(param_1);
  func_0x00010c228fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070c5090; end: 1070c50e7; -[SCPreviewScopeEntryPoint _setCaptureDiscardRelatedData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070c5090(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112764230;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c178f00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070c50e8; end: 1070c513f; -[SCPreviewScopeEntryPoint _batchCaptureDidCreateSnapWithBatchCaptureSessionID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070c50e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112764230;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf168c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070c5140; end: 1070c5f97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070c5140(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112763ffc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070c5f98; end: 1070c6b3b; -[SCPreviewScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070c5f98(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127641f8,0);
  _objc_destroyWeak(param_1 + _DAT_1127641f4);
  _objc_destroyWeak(param_1 + _DAT_1127641f0);
  _objc_destroyWeak(param_1 + _DAT_1127641ec);
  _objc_destroyWeak(param_1 + _DAT_1127641e8);
  _objc_destroyWeak(param_1 + _DAT_112764220);
  _objc_destroyWeak(param_1 + _DAT_1127642c8);
  _objc_storeStrong(param_1 + _DAT_1127641e4,0);
  _objc_destroyWeak(param_1 + _DAT_1127641e0);
  _objc_storeStrong(param_1 + _DAT_1127641dc,0);
  _objc_destroyWeak(param_1 + _DAT_1127641d8);
  _objc_storeStrong(param_1 + _DAT_1127641d4,0);
  _objc_storeStrong(param_1 + _DAT_1127642c4,0);
  _objc_storeStrong(param_1 + _DAT_1127642c0,0);
  _objc_storeStrong(param_1 + _DAT_1127641d0,0);
  _objc_storeStrong(param_1 + _DAT_1127641cc,0);
  _objc_storeStrong(param_1 + _DAT_112764208,0);
  _objc_storeStrong(param_1 + _DAT_1127641c8,0);
  _objc_storeStrong(param_1 + _DAT_112764214,0);
  _objc_storeStrong(param_1 + _DAT_1127641c4,0);
  _objc_storeStrong(param_1 + _DAT_1127641c0,0);
  _objc_storeStrong(param_1 + _DAT_1127642bc,0);
  _objc_storeStrong(param_1 + _DAT_1127642b8,0);
  _objc_destroyWeak(param_1 + _DAT_1127641bc);
  _objc_destroyWeak(param_1 + _DAT_1127642b4);
  _objc_destroyWeak(param_1 + _DAT_1127642b0);
  _objc_destroyWeak(param_1 + _DAT_1127641b8);
  _objc_destroyWeak(param_1 + _DAT_1127641b4);
  _objc_destroyWeak(param_1 + _DAT_1127641b0);
  _objc_destroyWeak(param_1 + _DAT_11276422c);
  _objc_destroyWeak(param_1 + _DAT_1127642ac);
  _objc_destroyWeak(param_1 + _DAT_1127642a8);
  _objc_destroyWeak(param_1 + _DAT_1127641ac);
  _objc_destroyWeak(param_1 + _DAT_112764218);
  _objc_destroyWeak(param_1 + _DAT_1127641a8);
  _objc_destroyWeak(param_1 + _DAT_1127641a4);
  _objc_destroyWeak(param_1 + _DAT_1127641a0);
  _objc_destroyWeak(param_1 + _DAT_1127642a4);
  _objc_destroyWeak(param_1 + _DAT_11276419c);
  _objc_destroyWeak(param_1 + _DAT_112764198);
  _objc_destroyWeak(param_1 + _DAT_112764194);
  _objc_destroyWeak(param_1 + _DAT_112764190);
  _objc_destroyWeak(param_1 + _DAT_11276418c);
  _objc_destroyWeak(param_1 + _DAT_1127642a0);
  _objc_destroyWeak(param_1 + _DAT_112764188);
  _objc_destroyWeak(param_1 + _DAT_112764184);
  _objc_destroyWeak(param_1 + _DAT_112764180);
  _objc_destroyWeak(param_1 + _DAT_11276417c);
  _objc_destroyWeak(param_1 + _DAT_112764178);
  _objc_destroyWeak(param_1 + _DAT_112764174);
  _objc_destroyWeak(param_1 + _DAT_112764170);
  _objc_destroyWeak(param_1 + _DAT_11276416c);
  _objc_destroyWeak(param_1 + _DAT_112764168);
  _objc_destroyWeak(param_1 + _DAT_112764164);
  _objc_destroyWeak(param_1 + _DAT_112764160);
  _objc_destroyWeak(param_1 + _DAT_11276415c);
  _objc_destroyWeak(param_1 + _DAT_112764158);
  _objc_destroyWeak(param_1 + _DAT_11276429c);
  _objc_destroyWeak(param_1 + _DAT_112764154);
  _objc_destroyWeak(param_1 + _DAT_112764150);
  _objc_destroyWeak(param_1 + _DAT_11276414c);
  _objc_destroyWeak(param_1 + _DAT_112763fcc);
  _objc_destroyWeak(param_1 + _DAT_112764148);
  _objc_destroyWeak(param_1 + _DAT_112764144);
  _objc_destroyWeak(param_1 + _DAT_112764140);
  _objc_destroyWeak(param_1 + _DAT_112764298);
  _objc_destroyWeak(param_1 + _DAT_11276413c);
  _objc_destroyWeak(param_1 + _DAT_112764138);
  _objc_destroyWeak(param_1 + _DAT_112764134);
  _objc_destroyWeak(param_1 + _DAT_112764130);
  _objc_destroyWeak(param_1 + _DAT_112763fdc);
  _objc_destroyWeak(param_1 + _DAT_11276412c);
  _objc_destroyWeak(param_1 + _DAT_112764128);
  _objc_destroyWeak(param_1 + _DAT_112764124);
  _objc_destroyWeak(param_1 + _DAT_112764120);
  _objc_destroyWeak(param_1 + _DAT_11276411c);
  _objc_destroyWeak(param_1 + _DAT_112764294);
  _objc_destroyWeak(param_1 + _DAT_112764290);
  _objc_destroyWeak(param_1 + _DAT_11276428c);
  _objc_destroyWeak(param_1 + _DAT_11276421c);
  _objc_destroyWeak(param_1 + _DAT_112764118);
  _objc_destroyWeak(param_1 + _DAT_112764114);
  _objc_destroyWeak(param_1 + _DAT_112764110);
  _objc_destroyWeak(param_1 + _DAT_11276410c);
  _objc_destroyWeak(param_1 + _DAT_112764108);
  _objc_destroyWeak(param_1 + _DAT_112764104);
  _objc_destroyWeak(param_1 + _DAT_112764100);
  _objc_destroyWeak(param_1 + _DAT_1127640fc);
  _objc_destroyWeak(param_1 + _DAT_112764288);
  _objc_destroyWeak(param_1 + _DAT_1127640f8);
  _objc_destroyWeak(param_1 + _DAT_112764284);
  _objc_destroyWeak(param_1 + _DAT_1127640f4);
  _objc_destroyWeak(param_1 + _DAT_1127640f0);
  _objc_destroyWeak(param_1 + _DAT_1127640ec);
  _objc_destroyWeak(param_1 + _DAT_1127640e8);
  _objc_destroyWeak(param_1 + _DAT_112763ff4);
  _objc_destroyWeak(param_1 + _DAT_1127640e4);
  _objc_destroyWeak(param_1 + _DAT_1127640e0);
  _objc_destroyWeak(param_1 + _DAT_112764210);
  _objc_destroyWeak(param_1 + _DAT_112764280);
  _objc_destroyWeak(param_1 + _DAT_1127640dc);
  _objc_destroyWeak(param_1 + _DAT_11276427c);
  _objc_destroyWeak(param_1 + _DAT_1127640d8);
  _objc_destroyWeak(param_1 + _DAT_1127640d4);
  _objc_destroyWeak(param_1 + _DAT_1127640d0);
  _objc_destroyWeak(param_1 + _DAT_1127640cc);
  _objc_destroyWeak(param_1 + _DAT_112764278);
  _objc_destroyWeak(param_1 + _DAT_1127640c8);
  _objc_destroyWeak(param_1 + _DAT_1127640c4);
  _objc_destroyWeak(param_1 + _DAT_1127640c0);
  _objc_destroyWeak(param_1 + _DAT_1127640bc);
  _objc_destroyWeak(param_1 + _DAT_1127640b8);
  _objc_destroyWeak(param_1 + _DAT_112764224);
  _objc_destroyWeak(param_1 + _DAT_1127640b4);
  _objc_destroyWeak(param_1 + _DAT_1127640b0);
  _objc_destroyWeak(param_1 + _DAT_112764274);
  _objc_destroyWeak(param_1 + _DAT_1127640ac);
  _objc_destroyWeak(param_1 + _DAT_112764270);
  _objc_destroyWeak(param_1 + _DAT_11276426c);
  _objc_destroyWeak(param_1 + _DAT_1127640a8);
  _objc_destroyWeak(param_1 + _DAT_112763ff8);
  _objc_destroyWeak(param_1 + _DAT_1127640a4);
  _objc_destroyWeak(param_1 + _DAT_112764268);
  _objc_destroyWeak(param_1 + _DAT_112764264);
  _objc_destroyWeak(param_1 + _DAT_1127640a0);
  _objc_destroyWeak(param_1 + _DAT_11276409c);
  _objc_destroyWeak(param_1 + _DAT_112764260);
  _objc_destroyWeak(param_1 + _DAT_112764098);
  _objc_destroyWeak(param_1 + _DAT_112764094);
  _objc_destroyWeak(param_1 + _DAT_112764090);
  _objc_destroyWeak(param_1 + _DAT_11276408c);
  _objc_destroyWeak(param_1 + _DAT_112764088);
  _objc_destroyWeak(param_1 + _DAT_112764084);
  _objc_destroyWeak(param_1 + _DAT_112763fd8);
  _objc_destroyWeak(param_1 + _DAT_112764080);
  _objc_destroyWeak(param_1 + _DAT_11276407c);
  _objc_destroyWeak(param_1 + _DAT_112764078);
  _objc_destroyWeak(param_1 + _DAT_112763fc8);
  _objc_destroyWeak(param_1 + _DAT_112763fe0);
  _objc_destroyWeak(param_1 + _DAT_112764074);
  _objc_destroyWeak(param_1 + _DAT_11276425c);
  _objc_destroyWeak(param_1 + _DAT_112764258);
  _objc_destroyWeak(param_1 + _DAT_112764254);
  _objc_destroyWeak(param_1 + _DAT_112763fe8);
  _objc_destroyWeak(param_1 + _DAT_112764250);
  _objc_destroyWeak(param_1 + _DAT_112764070);
  _objc_destroyWeak(param_1 + _DAT_112763ff0);
  _objc_destroyWeak(param_1 + _DAT_1127641fc);
  _objc_destroyWeak(param_1 + _DAT_112764228);
  _objc_destroyWeak(param_1 + _DAT_11276406c);
  _objc_destroyWeak(param_1 + _DAT_112764068);
  _objc_destroyWeak(param_1 + _DAT_112764064);
  _objc_destroyWeak(param_1 + _DAT_112764060);
  _objc_destroyWeak(param_1 + _DAT_11276405c);
  _objc_destroyWeak(param_1 + _DAT_112764058);
  _objc_destroyWeak(param_1 + _DAT_112764054);
  _objc_destroyWeak(param_1 + _DAT_112763fe4);
  _objc_destroyWeak(param_1 + _DAT_11276424c);
  _objc_destroyWeak(param_1 + _DAT_112764050);
  _objc_destroyWeak(param_1 + _DAT_11276404c);
  _objc_destroyWeak(param_1 + _DAT_112764248);
  _objc_destroyWeak(param_1 + _DAT_112764048);
  _objc_destroyWeak(param_1 + _DAT_112764044);
  _objc_destroyWeak(param_1 + _DAT_112764040);
  _objc_destroyWeak(param_1 + _DAT_11276403c);
  _objc_destroyWeak(param_1 + _DAT_112764038);
  _objc_destroyWeak(param_1 + _DAT_112764034);
  _objc_destroyWeak(param_1 + _DAT_112764030);
  _objc_destroyWeak(param_1 + _DAT_112764200);
  _objc_destroyWeak(param_1 + _DAT_11276402c);
  _objc_destroyWeak(param_1 + _DAT_112764028);
  _objc_destroyWeak(param_1 + _DAT_112764244);
  _objc_destroyWeak(param_1 + _DAT_112763fd0);
  _objc_destroyWeak(param_1 + _DAT_112763fd4);
  _objc_destroyWeak(param_1 + _DAT_112764024);
  _objc_destroyWeak(param_1 + _DAT_112764020);
  _objc_destroyWeak(param_1 + _DAT_112764240);
  _objc_destroyWeak(param_1 + _DAT_11276423c);
  _objc_destroyWeak(param_1 + _DAT_11276401c);
  _objc_destroyWeak(param_1 + _DAT_112764018);
  _objc_destroyWeak(param_1 + _DAT_112764014);
  _objc_destroyWeak(param_1 + _DAT_112764238);
  _objc_destroyWeak(param_1 + _DAT_112764010);
  _objc_destroyWeak(param_1 + _DAT_11276400c);
  _objc_destroyWeak(param_1 + _DAT_112763fec);
  _objc_destroyWeak(param_1 + _DAT_112764204);
  _objc_destroyWeak(param_1 + _DAT_112764008);
  _objc_destroyWeak(param_1 + _DAT_112763fc4);
  _objc_destroyWeak(param_1 + _DAT_112764004);
  _objc_destroyWeak(param_1 + _DAT_112764000);
  _objc_destroyWeak(param_1 + _DAT_112763ffc);
  _objc_storeStrong(param_1 + _DAT_112764234,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112764230);
  return;
}



/* Entry: 1070c6b3c; end: 1070c6bf7; -[SCPreviewScopedMemoriesActivityServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070c6b3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126d4bc8;
  _objc_alloc(PTR_PTR_1126d4bc8);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_1127642d0;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c0c7cc0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0b73e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02a320(puVar1,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1070c6bf8; end: 1070c6c2f; -[SCPreviewScopedMemoriesActivityServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070c6bf8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127642d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127642cc);
  return;
}



/* Entry: 1070c6c30; end: 1070c74cb; -[SCMainAppPreviewResourceProvider initWithUserSession:blizzardUserServices:composerBlizzardLogger:bundledLensProvider:captionDataProvider:commonLoggingServices:configuration:contentDeliveryServices:featureSettingsService:galleryLogger:grapheneServices:itemViewService:memoriesActivityController:memoriesActivityItemProviderBuilder:memoriesCloudFS:memoriesPreviewShareSheetExportScopeExposer:previewABServices:creativeToolsABServices:previewFeaturesServices:previewLoggingServices:previewScopeServices:previewVideoProviderServices:snapVideoFilterFactory:uploadQualityController:snapVideoFilterScopeExposer:spectaclesCustomExportScopeExposer:spectaclesAuxiliaryContentServices:stickerInjector:videoTrackingServices:watermarkingServices:memoriesSaveServices:filterDataServices:filterControllingServices:filterLoggingServices:filterUIServices:filterProcessingServices:filtersController:venueFilterController:infoStickerDataSource:videoObjectTracker:viewportController:imageProcessRenderingSessionFactory:snapEditorTweakServices:] */

undefined8 *
FUN_1070c6c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain();
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
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  puStack_70 = PTR_PTR_1126f8a28;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_5;
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
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[1];
    puVar1[1] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[6];
    puVar1[6] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[7];
    puVar1[7] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[8];
    puVar1[8] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[9];
    puVar1[9] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[10];
    puVar1[10] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_44;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_13);
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_45;
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_release(param_13);
  }
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
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
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1070c74cc; end: 1070c7593;  */

void FUN_1070c74cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b0308;
  _objc_alloc(PTR_PTR_1126b0308);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfcdfa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c293fc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a840(puVar1,param_2,1,8,0x13,uVar3,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1070c7594; end: 1070c763f; -[SCMainAppPreviewResourceProvider hotReloadFeatures] */

void FUN_1070c7594(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010befa300(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1070c7640; end: 1070c7767;  */

void FUN_1070c7640(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) &&
     ((uVar1 = param_2, func_0x00010c083340(), (uVar1 & 1) != 0 ||
      (uVar1 = param_2, func_0x00010c06d080(), (int)uVar1 != 0)))) {
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c2485a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf91760();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x128);
      func_0x00010c27ece0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0xa0);
      func_0x00010bf2fba0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010c252b00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2076a0(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar2);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar4);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070c7768; end: 1070c7ee7; -[SCMainAppPreviewResourceProvider exporter] */

void FUN_1070c7768(long param_1,undefined8 param_2)

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
  long lVar16;
  long lVar17;
  long lVar18;
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
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  undefined *puVar44;
  undefined8 uVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  long lVar64;
  
  lVar64 = *(long *)(param_1 + 0x98);
  if (lVar64 == 0) {
    puVar1 = PTR_PTR_1126d4bd0;
    _objc_alloc();
    lVar64 = param_1;
    func_0x00010bfa3500();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar64;
    func_0x00010c0ef680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c111b60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bfae240();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0ef680();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bfadbe0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf07a40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c243b20();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010bfa3500();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010bfa3500();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c2a0940();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1;
    func_0x00010bfa3500();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c2705e0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1;
    func_0x00010bfa3500();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010bf207a0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1;
    func_0x00010c29f540();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_1;
    func_0x00010bfa3500();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar18;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1;
    func_0x00010bfa3500();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar20;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_1;
    func_0x00010bfa3500();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar22;
    func_0x00010c29a9a0();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = param_1;
    func_0x00010bfa3500();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar24;
    func_0x00010c29a9c0();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = param_1;
    func_0x00010c2484a0();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = param_1;
    func_0x00010bfa3500();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = lVar27;
    func_0x00010c27e580();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = param_1;
    func_0x00010bfa3500();
    _objc_retainAutoreleasedReturnValue();
    lVar30 = lVar29;
    func_0x00010c27e760();
    _objc_retainAutoreleasedReturnValue();
    lVar31 = param_1;
    func_0x00010c111720();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = param_1;
    func_0x00010bf42a20();
    _objc_retainAutoreleasedReturnValue();
    lVar33 = lVar32;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar34 = lVar33;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar35 = lVar34;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    lVar36 = param_1;
    func_0x00010c0c9400();
    _objc_retainAutoreleasedReturnValue();
    lVar37 = param_1;
    func_0x00010c248640();
    _objc_retainAutoreleasedReturnValue();
    lVar38 = param_1;
    func_0x00010c0c7ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar39 = param_1;
    func_0x00010bf2fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar40 = param_1;
    func_0x00010bfa3500();
    _objc_retainAutoreleasedReturnValue();
    lVar41 = lVar40;
    func_0x00010bf71d60();
    _objc_retainAutoreleasedReturnValue();
    lVar42 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar43 = param_1;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    puVar44 = PTR_PTR_1126b1350;
    _objc_alloc();
    func_0x00010bfeee60();
    uVar58 = *(undefined8 *)(param_1 + 0x18);
    uVar45 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010c1104a0();
    _objc_retainAutoreleasedReturnValue();
    uVar62 = *(undefined8 *)(param_1 + 0x70);
    uVar59 = *(undefined8 *)(param_1 + 0x40);
    lVar46 = param_1;
    func_0x00010c0c84c0();
    _objc_retainAutoreleasedReturnValue();
    uVar63 = *(undefined8 *)(param_1 + 0x30);
    uVar60 = *(undefined8 *)(param_1 + 0xf0);
    lVar47 = param_1;
    func_0x00010bf4c2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar61 = *(undefined8 *)(param_1 + 0x60);
    lVar48 = param_1;
    func_0x00010c1103c0();
    _objc_retainAutoreleasedReturnValue();
    lVar49 = lVar48;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    lVar50 = param_1;
    func_0x00010bf5aec0();
    _objc_retainAutoreleasedReturnValue();
    lVar51 = lVar50;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    lVar52 = param_1;
    func_0x00010bfa3500();
    _objc_retainAutoreleasedReturnValue();
    lVar53 = lVar52;
    func_0x00010c26c8e0();
    _objc_retainAutoreleasedReturnValue();
    lVar54 = param_1;
    func_0x00010bfa3500();
    _objc_retainAutoreleasedReturnValue();
    lVar55 = lVar54;
    func_0x00010bfe8440();
    _objc_retainAutoreleasedReturnValue();
    lVar56 = param_1;
    func_0x00010c084e20();
    _objc_retainAutoreleasedReturnValue();
    lVar57 = param_1;
    func_0x00010bfe8640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032920(puVar1,param_2,lVar2,lVar3,lVar5,lVar7,lVar8,lVar10,lVar12,lVar14,lVar16,
                        lVar17,lVar19,lVar21,lVar23,lVar25,lVar26,lVar28,lVar30,lVar31,lVar35,lVar36
                        ,lVar37,lVar38,lVar39,lVar41,lVar42,lVar43,puVar44,uVar58,uVar45,uVar62,
                        uVar59,lVar46,uVar63,uVar60,lVar47,uVar61,lVar49,lVar51,lVar53,lVar55,lVar56
                        ,lVar57);
    uVar58 = *(undefined8 *)(param_1 + 0x98);
    *(undefined **)(param_1 + 0x98) = puVar1;
    _objc_release(uVar58);
    _objc_release(lVar57);
    _objc_release(lVar56);
    _objc_release(lVar55);
    _objc_release(lVar54);
    _objc_release(lVar53);
    _objc_release(lVar52);
    _objc_release(lVar51);
    _objc_release(lVar50);
    _objc_release(lVar49);
    _objc_release(lVar48);
    _objc_release(lVar47);
    _objc_release(lVar46);
    _objc_release(uVar45);
    _objc_release(puVar44);
    _objc_release(lVar43);
    _objc_release(lVar42);
    _objc_release(lVar41);
    _objc_release(lVar40);
    _objc_release(lVar39);
    _objc_release(lVar38);
    _objc_release(lVar37);
    _objc_release(lVar36);
    _objc_release(lVar35);
    _objc_release(lVar34);
    _objc_release(lVar33);
    _objc_release(lVar32);
    _objc_release(lVar31);
    _objc_release(lVar30);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(lVar27);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
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
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar64);
    lVar64 = *(long *)(param_1 + 0x98);
  }
  _objc_retain(lVar64);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar64);
  return;
}



/* Entry: 1070c7ee8; end: 1070c7f3b; -[SCMainAppPreviewResourceProvider customStoriesOnboardingManager] */

void FUN_1070c7ee8(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136ca048 != -1) {
    func_0x00010002a2fc(0x1136ca048,&PTR___NSConcreteGlobalBlock_11098d2c8);
  }
  uVar1 = uRam00000001136ca050;
  _objc_retain(uRam00000001136ca050);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070c7f3c; end: 1070c7f67;  */

void FUN_1070c7f3c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107d6fb64();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam00000001136ca050;
  uRam00000001136ca050 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070c7f68; end: 1070c7f6f; -[SCMainAppPreviewResourceProvider contentDeliveryServices] */

undefined8 FUN_1070c7f68(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1070c7f70; end: 1070c7f77; -[SCMainAppPreviewResourceProvider grapheneServices] */

undefined8 FUN_1070c7f70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1070c7f78; end: 1070c7f7f; -[SCMainAppPreviewResourceProvider bundledLensProvider] */

undefined8 FUN_1070c7f78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1070c7f80; end: 1070c7f87; -[SCMainAppPreviewResourceProvider captionDataProvider] */

undefined8 FUN_1070c7f80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1070c7f88; end: 1070c7f8f; -[SCMainAppPreviewResourceProvider commerceLogger] */

undefined8 FUN_1070c7f88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1070c7f90; end: 1070c7f97; -[SCMainAppPreviewResourceProvider galleryLogger] */

undefined8 FUN_1070c7f90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1070c7f98; end: 1070c7f9f; -[SCMainAppPreviewResourceProvider memoriesActivityController] */

undefined8 FUN_1070c7f98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1070c7fa0; end: 1070c7fa7; -[SCMainAppPreviewResourceProvider memoriesActivityItemProviderBuilder] */

undefined8 FUN_1070c7fa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1070c7fa8; end: 1070c7faf; -[SCMainAppPreviewResourceProvider memoriesCloudFS] */

undefined8 FUN_1070c7fa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1070c7fb0; end: 1070c7fb7; -[SCMainAppPreviewResourceProvider snapVideoFilterFactory] */

undefined8 FUN_1070c7fb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1070c7fb8; end: 1070c7fbf; -[SCMainAppPreviewResourceProvider uploadQualityController] */

undefined8 FUN_1070c7fb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1070c7fc0; end: 1070c7fc7; -[SCMainAppPreviewResourceProvider stickerInjector] */

undefined8 FUN_1070c7fc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1070c7fc8; end: 1070c7fcf; -[SCMainAppPreviewResourceProvider featureSettingsService] */

undefined8 FUN_1070c7fc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1070c7fd0; end: 1070c7fd7; -[SCMainAppPreviewResourceProvider snapVideoFilterScopeExposer] */

undefined8 FUN_1070c7fd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1070c7fd8; end: 1070c7fdf; -[SCMainAppPreviewResourceProvider previewABServices] */

undefined8 FUN_1070c7fd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1070c7fe0; end: 1070c7fe7; -[SCMainAppPreviewResourceProvider creativeToolsABServices] */

undefined8 FUN_1070c7fe0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1070c7fe8; end: 1070c7fef; -[SCMainAppPreviewResourceProvider commonLoggingServices] */

undefined8 FUN_1070c7fe8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1070c7ff0; end: 1070c7ff7; -[SCMainAppPreviewResourceProvider configuration] */

undefined8 FUN_1070c7ff0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1070c7ff8; end: 1070c8027; -[SCMainAppPreviewResourceProvider setExporter:] */

void FUN_1070c7ff8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070c8028; end: 1070c802f; -[SCMainAppPreviewResourceProvider features] */

undefined8 FUN_1070c8028(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 1070c8030; end: 1070c8037; -[SCMainAppPreviewResourceProvider previewLoggingServices] */

undefined8 FUN_1070c8030(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 1070c8038; end: 1070c803f; -[SCMainAppPreviewResourceProvider previewScopeServices] */

undefined8 FUN_1070c8038(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1070c8040; end: 1070c8047; -[SCMainAppPreviewResourceProvider previewVideoProviderServices] */

undefined8 FUN_1070c8040(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 1070c8048; end: 1070c804f; -[SCMainAppPreviewResourceProvider memoriesPreviewShareSheetExportScopeExposer] */

undefined8 FUN_1070c8048(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 1070c8050; end: 1070c8057; -[SCMainAppPreviewResourceProvider spectaclesCustomExportScopeExposer] */

undefined8 FUN_1070c8050(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 1070c8058; end: 1070c805f; -[SCMainAppPreviewResourceProvider spectaclesAuxiliaryContentServices] */

undefined8 FUN_1070c8058(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 1070c8060; end: 1070c8067; -[SCMainAppPreviewResourceProvider blizzardUserServices] */

undefined8 FUN_1070c8060(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 1070c8068; end: 1070c806f; -[SCMainAppPreviewResourceProvider composerBlizzardLogger] */

undefined8 FUN_1070c8068(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 1070c8070; end: 1070c8077; -[SCMainAppPreviewResourceProvider userSession] */

undefined8 FUN_1070c8070(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 1070c8078; end: 1070c807f; -[SCMainAppPreviewResourceProvider videoTrackingServices] */

undefined8 FUN_1070c8078(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 1070c8080; end: 1070c8087; -[SCMainAppPreviewResourceProvider watermarkingServices] */

undefined8 FUN_1070c8080(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 1070c8088; end: 1070c808f; -[SCMainAppPreviewResourceProvider memoriesSaveServices] */

undefined8 FUN_1070c8088(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 1070c8090; end: 1070c8097; -[SCMainAppPreviewResourceProvider itemViewService] */

undefined8 FUN_1070c8090(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 1070c8098; end: 1070c809f; -[SCMainAppPreviewResourceProvider filterDataServices] */

undefined8 FUN_1070c8098(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 1070c80a0; end: 1070c80a7; -[SCMainAppPreviewResourceProvider filterControllingServices] */

undefined8 FUN_1070c80a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 1070c80a8; end: 1070c80af; -[SCMainAppPreviewResourceProvider filterLoggingServices] */

undefined8 FUN_1070c80a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 1070c80b0; end: 1070c80b7; -[SCMainAppPreviewResourceProvider filterUIServices] */

undefined8 FUN_1070c80b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 1070c80b8; end: 1070c80bf; -[SCMainAppPreviewResourceProvider filtersController] */

undefined8 FUN_1070c80b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 1070c80c0; end: 1070c80c7; -[SCMainAppPreviewResourceProvider venueFilterController] */

undefined8 FUN_1070c80c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 1070c80c8; end: 1070c80cf; -[SCMainAppPreviewResourceProvider infoStickerDataSource] */

undefined8 FUN_1070c80c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 1070c80d0; end: 1070c80d7; -[SCMainAppPreviewResourceProvider videoObjectTracker] */

undefined8 FUN_1070c80d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 1070c80d8; end: 1070c80df; -[SCMainAppPreviewResourceProvider viewportController] */

undefined8 FUN_1070c80d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 1070c80e0; end: 1070c80e7; -[SCMainAppPreviewResourceProvider imageProcessRenderingSessionFactory] */

undefined8 FUN_1070c80e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}



/* Entry: 1070c80e8; end: 1070c80ef; -[SCMainAppPreviewResourceProvider snapEditorTweakServices] */

undefined8 FUN_1070c80e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



/* Entry: 1070c80f0; end: 1070c80f7; -[SCMainAppPreviewResourceProvider filterProcessingServices] */

undefined8 FUN_1070c80f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}



/* Entry: 1070c80f8; end: 1070c832b; -[SCMainAppPreviewResourceProvider .cxx_destruct] */

void FUN_1070c80f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070c832c; end: 1070c83d7; -[PreviewViewController _isHMDCapable] */

ulong FUN_1070c832c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c078ae0();
  if ((uVar3 & 1) == 0) {
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0746c0();
    _objc_release(uVar3);
    _objc_release(param_1);
  }
  else {
    uVar4 = 1;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 1070c83d8; end: 1070c83df; -[PreviewViewController shouldSaveSpectaclesLensSnapAsCopy] */

undefined8 FUN_1070c83d8(void)

{
  return 0;
}



/* Entry: 1070c83e0; end: 1070c848b; -[PreviewViewController _savedLensIs3DLens] */

ulong FUN_1070c83e0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c078ae0();
  if ((uVar3 & 1) == 0) {
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0746c0();
    _objc_release(uVar3);
    _objc_release(param_1);
  }
  else {
    uVar4 = 1;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 1070c848c; end: 1070c857f; -[PreviewViewController _shouldSaveSpectaclesVideoTrimmedSnapAsCopy] */

long FUN_1070c848c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c07f1a0();
  if ((int)lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010c0d2440();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar6 = 0;
    }
    else {
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c0d20c0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0d25c0();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(param_1);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar6;
}



/* Entry: 1070c8580; end: 1070c8583; -[PreviewViewController _shouldSaveCheeriosAsCopy] */

void FUN_1070c8580(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd54b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hasCheeriosTimelineTrim_1125d2ed0);
  return;
}



/* Entry: 1070c8584; end: 1070c8703; -[PreviewViewController hasCheeriosTimelineTrim] */

bool FUN_1070c8584(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
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
  
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c06e860();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    lVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c26fea0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 == 1) {
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c26fea0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(param_1);
      if (lVar3 == 0) {
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        func_0x00010bf4d840(&uStack_70,lVar3);
        func_0x00010c27c900(&uStack_a0,lVar3);
      }
      puVar5 = &uStack_70;
      _CMTimeRangeEqual(puVar5,&uStack_a0);
      _objc_release(lVar3);
      return (int)puVar5 == 0;
    }
  }
  return false;
}



/* Entry: 1070c8704; end: 1070c8747; -[PreviewViewController shouldSaveSpectaclesSnapAsCopy] */

ulong FUN_1070c8704(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c232e80();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010beb5840(), (uVar1 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010beb5810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__shouldSaveCheeriosAsCopy_11258afa8);
    return param_1;
  }
  return 1;
}



/* Entry: 1070c8748; end: 1070c874f; -[PreviewViewController hasSpectaclesAnimatedContent] */

undefined8 FUN_1070c8748(void)

{
  return 0;
}



/* Entry: 1070c8750; end: 1070c87b7; -[PreviewViewController saveSpectaclesLensWithCompletionHandler:] */

void FUN_1070c8750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be82ee0(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c239680();
  func_0x00010bddde40(param_1,param_2,uVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070c87b8; end: 1070c8827; -[PreviewViewController saveSpectaclesSnapAsCopyWithCompletionHandler:] */

void FUN_1070c87b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c232e80();
  if ((int)uVar1 == 0) {
    uVar2 = param_1;
    func_0x00010beb5800();
    uVar1 = 5;
    if ((int)uVar2 == 0) {
      uVar1 = 0;
    }
  }
  else {
    uVar2 = param_1;
    func_0x00010be9a540();
    uVar1 = 2;
    if ((int)uVar2 == 0) {
      uVar1 = 3;
    }
  }
  func_0x00010be7e3c0(param_1,param_2,uVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


