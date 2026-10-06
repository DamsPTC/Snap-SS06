/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c1fe58; end: 106c1fe5b; -[SCMemoriesCameraRollUploadBackgroundJobProviderEntryPoint begin] */

void FUN_106c1fe58(void)

{
  return;
}



/* Entry: 106c1fe5c; end: 106c1fed7; -[SCMemoriesCameraRollUploadBackgroundJobProviderEntryPoint _jobProcessor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c1fe5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d16a8;
  _objc_alloc(PTR_PTR_1126d16a8);
  param_1 = param_1 + _DAT_11275b024;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c150420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020840(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c1fed8; end: 106c200c3; -[SCMemoriesCameraRollUploadBackgroundJobProviderEntryPoint _jobConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c1fed8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  param_1 = param_1 + _DAT_11275b028;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf522a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126b7228;
  _objc_opt_new(PTR_PTR_1126b7228);
  puVar4 = PTR_PTR_1126b7238;
  _objc_opt_new(PTR_PTR_1126b7238);
  puVar5 = PTR_PTR_1126b7248;
  _objc_opt_new(PTR_PTR_1126b7248);
  lVar1 = lVar2;
  func_0x000108ec0cf4(lVar2);
  func_0x00010c1eac20(puVar5,param_2,lVar1);
  func_0x00010c1e9180(puVar4,param_2,puVar5);
  func_0x00010c1b67e0(puVar3,param_2,puVar4);
  puVar6 = PTR_PTR_1126b7230;
  _objc_opt_new(PTR_PTR_1126b7230);
  lVar1 = lVar2;
  func_0x000108ec0d44(lVar2);
  func_0x00010c1c35c0(puVar6,param_2,lVar1);
  func_0x00010c1edbc0(puVar6,param_2,2);
  lVar1 = lVar2;
  func_0x000108ec0d1c(lVar2);
  func_0x00010c1edae0(puVar6,param_2,lVar1);
  func_0x00010c1ed860(puVar3,param_2,puVar6);
  puVar7 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  lVar1 = lVar2;
  func_0x000108ec0b90(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169200(puVar7,param_2,lVar1);
  _objc_release(lVar1);
  func_0x00010c1cc140(puVar7,param_2,1);
  func_0x00010c1b66e0(puVar3,param_2,puVar7);
  func_0x00010c198180(puVar3,param_2,1);
  func_0x00010c1b6780(puVar3,param_2,0);
  puVar8 = puVar3;
  func_0x00010c1b6840(puVar3,param_2,&PTR____CFConstantStringClassReference_110e79818);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b67a0(puVar3,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c200c4; end: 106c2015b; -[SCMemoriesCameraRollUploadBackgroundJobProviderEntryPoint _submitBackgroundJob] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c200c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010be46360();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11275b02c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c085740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f200();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106c2015c; end: 106c201ab; -[SCMemoriesCameraRollUploadBackgroundJobProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c2015c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275b024);
  _objc_destroyWeak(param_1 + _DAT_11275b028);
  _objc_destroyWeak(param_1 + _DAT_11275b02c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275b030);
  return;
}



/* Entry: 106c201ac; end: 106c2041b; -[SCMemoriesCameraRollIndexUploader initWithBoltDataUploader:coreConfigProvider:photoPermissionCoordinator:grapheneRegistry:transactorProvider:performer:snapIndexClientService:localNotificationScheduler:deviceIdentifierProvider:requestHeaderProvider:] */

undefined8 *
FUN_106c201ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_68 = PTR_PTR_1126f5ce0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
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
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_7);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_7);
  }
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



/* Entry: 106c2041c; end: 106c20423;  */

void FUN_106c2041c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  lVar1 = lRam00000001136c6e10;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106c2a098;
  puStack_40 = &UNK_110842e18;
  uStack_38 = uVar3;
  _objc_retain(uVar3);
  uVar4 = uVar3;
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x1136c6e10,&puStack_58);
    uVar4 = uStack_38;
  }
  uVar2 = uRam00000001136c6e18;
  _objc_retain(uRam00000001136c6e18);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c20424; end: 106c20523; -[SCMemoriesCameraRollIndexUploader startUploading] */

void FUN_106c20424(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  *(undefined1 *)(param_1 + 0x58) = 0;
  _objc_initWeak(auStack_38,param_1);
  func_0x00010bdda040(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  lVar2 = lVar1;
  func_0x00010bfb26a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106c20524; end: 106c206ab;  */

void FUN_106c20524(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126af5d0;
  puVar3 = PTR_PTR_1126ae6b8;
  if (param_1 == 0) {
    lVar1 = param_1;
    FUN_106c2a5b0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_106c206ac;
    uStack_50 = 0x106c206bc;
    lStack_48 = 0;
    func_0x00010c0c0800(param_2);
    puVar3 = (undefined *)puStack_68[5];
    _objc_retain(puVar3);
    __Block_object_dispose(&uStack_70,8);
    lVar1 = lStack_48;
  }
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c206ac; end: 106c206c3;  */

void FUN_106c206ac(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106c206c4; end: 106c20803;  */

void FUN_106c206c4(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x00010bf1f3c0();
  puVar2 = PTR_PTR_1126af5d0;
  puVar3 = PTR_PTR_1126ae6b8;
  if ((param_2 & 1) == 0) {
    uVar5 = 7;
    FUN_106c2a5b0(7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar1 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined **)(lVar4 + 0x28) = puVar3;
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be1d2e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar5 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 106c20804; end: 106c2085b; -[SCMemoriesCameraRollIndexUploader cancel] */

void FUN_106c20804(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106c2085c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_38);
  return;
}



/* Entry: 106c2085c; end: 106c2086b;  */

void FUN_106c2085c(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x58) = 1;
  return;
}



/* Entry: 106c2086c; end: 106c20923; -[SCMemoriesCameraRollIndexUploader _canStartUploadingJob] */

void FUN_106c2086c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126af5d0;
  puVar3 = PTR_PTR_1126ae6b8;
  if (*(char *)(param_1 + 0x58) == '\x01') {
    uVar1 = 6;
    FUN_106c2a5b0(6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  else {
    puVar3 = (undefined *)0x1;
    FUN_106c2a114(1,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x50),
                  *(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c20924; end: 106c20ac7; -[SCMemoriesCameraRollIndexUploader _getBatchIdToUpload] */

void FUN_106c20924(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_PTR_1126af5d0;
  puVar4 = PTR_PTR_1126ae6b8;
  if (*(char *)(param_1 + 0x58) == '\x01') {
    uVar1 = 6;
    FUN_106c2a5b0(6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x000100589538();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_106c206ac;
    uStack_40 = 0x106c206bc;
    uStack_38 = 0;
    func_0x00010c0c0800(uVar1);
    puVar4 = (undefined *)puStack_58[5];
    _objc_retain(puVar4);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c20ac8; end: 106c20b5f;  */

void FUN_106c20ac8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b60f8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  FUN_106c2ff98(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  FUN_106c303e4(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0134e0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c20b60; end: 106c20df3;  */

void FUN_106c20b60(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  lVar8 = param_2;
  func_0x00010c154b60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  if (lVar1 == 0) {
    puVar10 = (undefined *)0x0;
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0((double)*(long *)(lVar1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar8 = param_2;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(lVar2 + 0x10);
  }
  _objc_release();
  _objc_release(lVar8);
  if ((puVar9 == (undefined *)0x0) ||
     (puVar3 = puVar9, FUN_106c20df4(puVar9,1), puVar4 = PTR_PTR_1126af5d0,
     puVar5 = PTR_PTR_1126ae6b8, (int)puVar3 == 0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bdd8580();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar7 = *(undefined8 *)(lVar8 + 0x28);
    *(undefined8 *)(lVar8 + 0x28) = uVar6;
    _objc_release(uVar7);
    _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    _objc_copyWeak(auStack_68,auStack_58);
    uStack_60 = uVar11;
    func_0x00010bfb26a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar11 = *(undefined8 *)(lVar8 + 0x28);
    *(undefined8 *)(lVar8 + 0x28) = uVar6;
    _objc_release(uVar11);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  else {
    uVar11 = 7;
    FUN_106c2a5b0(7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar6 = *(undefined8 *)(lVar8 + 0x28);
    *(undefined **)(lVar8 + 0x28) = puVar5;
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(uVar11);
  }
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106c20df4; end: 106c20e7b;  */

bool FUN_106c20df4(double param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain();
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(param_2);
  _objc_release(puVar1);
  return param_1 <= (double)(param_3 * 0x15180);
}



/* Entry: 106c20e7c; end: 106c20fc7;  */

void FUN_106c20e7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106c206ac;
  uStack_60 = 0x106c206bc;
  uStack_58 = 0;
  _objc_copyWeak(auStack_90,param_1 + 0x28);
  uStack_88 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0c0800(param_2);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_90);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c20fc8; end: 106c2114f;  */

void FUN_106c20fc8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bee57e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106c21150; end: 106c213a3; -[SCMemoriesCameraRollIndexUploader _calculateDeltaToUpload:previouslyUploadedBatchId:lastUploadTime:] */

void FUN_106c21150(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126af5d0;
  puVar4 = PTR_PTR_1126ae6b8;
  if (*(char *)(param_1 + 0x58) == '\x01') {
    uVar1 = 6;
    FUN_106c2a5b0(6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    if (param_4 == 0) {
      lVar5 = -1;
    }
    else {
      lVar5 = param_4;
      func_0x00010c067fc0();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc0000000;
    pcStack_90 = FUN_106c213a4;
    puStack_88 = &UNK_110969450;
    uVar1 = uVar3;
    lStack_80 = lVar5;
    uStack_78 = param_3;
    func_0x00010b5edefc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puStack_c8 = &uStack_d0;
    uStack_d0 = 0;
    uStack_c0 = 0x3032000000;
    pcStack_b8 = FUN_106c206ac;
    uStack_b0 = 0x106c206bc;
    uStack_a8 = 0;
    _objc_retain(param_5);
    func_0x00010c0c0800(uVar1);
    puVar4 = (undefined *)puStack_c8[5];
    _objc_retain(puVar4);
    _objc_release(param_5);
    __Block_object_dispose(&uStack_d0,8);
    _objc_release(uStack_a8);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c213a4; end: 106c21497;  */

void FUN_106c213a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = param_2;
  FUN_106c309bc(param_2,uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  FUN_106c30af8(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  FUN_106c304f0(param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126d16b0;
  _objc_alloc(PTR_PTR_1126d16b0);
  func_0x00010bff2560();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c21498; end: 106c214eb;  */

void FUN_106c21498(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bee5760(uVar1,param_2,param_2,*(int *)(param_1 + 0x38) != 0,
                      *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106c214ec; end: 106c21583;  */

void FUN_106c214ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126af5d0;
  puVar3 = PTR_PTR_1126ae6b8;
  uVar1 = 1;
  FUN_106c2a5b0(1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar3;
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c21584; end: 106c21aa7; -[SCMemoriesCameraRollIndexUploader _uploadDelta:isFullUpload:lastUploadTime:] */

void FUN_106c21584(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,long param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  double dVar12;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar3 = PTR_PTR_1126af5d0;
  puVar4 = PTR_PTR_1126ae6b8;
  if (param_2[0x58] == '\x01') {
    puVar2 = (undefined *)0x6;
    FUN_106c2a5b0(6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    param_2 = puVar4;
    goto LAB_106c21a60;
  }
  puVar2 = param_4;
  func_0x00010befcea0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_4;
  func_0x00010bf6d060();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_4;
  func_0x00010c276140();
  puVar5 = puVar2;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = puVar3;
    func_0x00010bf529e0();
    bVar1 = puVar5 != (undefined *)0x0;
    if (param_6 != 0) goto LAB_106c21690;
LAB_106c216c8:
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    _objc_retain(puVar3);
    _CACurrentMediaTime();
    puVar5 = PTR_PTR_1126d16d8;
    dVar12 = param_1;
    _objc_opt_new();
    _objc_retain(puVar2);
    puVar8 = puVar2;
    func_0x00010bf529e0();
    if (puVar8 == (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar9 = puVar2;
      func_0x00010c0b8600(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar9;
      func_0x00010c0d3c80();
      _objc_release(puVar9);
    }
    _objc_release(puVar2);
    func_0x00010c176e40(puVar5);
    _objc_release(puVar8);
    _objc_retain(puVar3);
    puVar8 = puVar3;
    func_0x00010bf529e0();
    if (puVar8 == (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar9 = puVar3;
      func_0x00010c0b8600(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar9;
      func_0x00010c0d3c80();
      _objc_release(puVar9);
    }
    _objc_release(puVar3);
    func_0x00010c18b840(puVar5);
    _objc_release(puVar8);
    _CACurrentMediaTime();
    func_0x00010b5f2b54(dVar12 - param_1,uVar10);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar10);
    _objc_release(uVar7);
    puVar8 = puVar5;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c08fa60();
    _objc_release(puVar8);
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar8 = puVar5;
    func_0x00010bf2a920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    puVar11 = puVar5;
    func_0x00010bf6bf60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(puVar11);
    _objc_release(puVar8);
    puVar8 = puVar2;
    func_0x00010bf529e0(puVar2);
    puVar11 = puVar3;
    func_0x00010bf529e0(puVar3);
    func_0x00010b5f25f8((double)puVar9 / 1000.0,uVar10,puVar8,puVar11,(long)(int)puVar4);
    if (puVar9 < (undefined *)0x2711) {
      func_0x00010bee5780(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bee5980(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar10);
  }
  else {
    bVar1 = true;
    if (param_6 == 0) goto LAB_106c216c8;
LAB_106c21690:
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x000108ec0d6c();
    lVar6 = param_6;
    FUN_106c20df4(param_6,uVar10);
    _objc_release(uVar7);
    if (bVar1 || (((uint)lVar6 ^ 0xffffffff) & 1) != 0) goto LAB_106c216c8;
    uVar10 = *(undefined8 *)(param_2 + 0x50);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106c21aa8;
    puStack_80 = &UNK_1109694a0;
    _objc_retain(param_4);
    puStack_78 = param_4;
    func_0x00010b5edefc(uVar10,0,&puStack_98);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar10);
    puVar4 = PTR_PTR_1126af5d0;
    param_2 = PTR_PTR_1126ae6b8;
    uVar10 = 9;
    FUN_106c2a5b0(9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar10);
    puVar5 = puStack_78;
  }
  _objc_release(puVar5);
LAB_106c21a60:
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106c21aa8; end: 106c21af3;  */

undefined * FUN_106c21aa8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf5e1c0(uVar1);
  FUN_106c313f8(param_2,uVar1);
  _objc_release(param_2);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 106c21af4; end: 106c21f67; -[SCMemoriesCameraRollIndexUploader _uploadLargeDeltaToBolt:isFullUpload:expectedNumItems:numberOfItemsUploaded:] */

void FUN_106c21af4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar5 = PTR_PTR_1126af5d0;
  puVar6 = PTR_PTR_1126ae6b8;
  if (param_1[0x58] == '\x01') {
    puVar1 = (undefined *)0x6;
    FUN_106c2a5b0(6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010c156da0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c08fa60();
    puVar5 = PTR_PTR_1126af5d0;
    puVar6 = PTR_PTR_1126ae6b8;
    if (puVar4 == (undefined *)0x0) {
      puVar4 = (undefined *)0x5;
      FUN_106c2a5b0(5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    else {
      uVar8 = param_3;
      func_0x00010bf63640(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010bcb41bc(puVar1,uVar8,0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      puVar7 = puVar4;
      func_0x00010c08fa60();
      puVar5 = PTR_PTR_1126af5d0;
      puVar6 = PTR_PTR_1126ae6b8;
      if (puVar7 == (undefined *)0x0) {
        puVar7 = (undefined *)0x5;
        FUN_106c2a5b0(5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0860a0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
      else {
        puVar7 = puVar4;
        func_0x00010c25eac0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar7;
        func_0x00010c08fa60();
        puVar5 = PTR_PTR_1126af5d0;
        puVar6 = PTR_PTR_1126ae6b8;
        if (puVar2 == (undefined *)0x0) {
          uVar8 = 5;
          FUN_106c2a5b0(5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa01c0(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0860a0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          _objc_release(uVar8);
        }
        else {
          func_0x00010c08fa60(puVar4);
          puVar2 = puVar4;
          func_0x00010c25eac0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          puVar4 = puVar2;
          func_0x00010c08fa60();
          puVar5 = PTR_PTR_1126af5d0;
          puVar6 = PTR_PTR_1126ae6b8;
          if (puVar4 == (undefined *)0x0) {
            uVar8 = 5;
            FUN_106c2a5b0(5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa01c0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0860a0(puVar6);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
          }
          else {
            uVar3 = *(undefined8 *)(param_1 + 0x20);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar3;
            func_0x00010c0c8b00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
            _objc_initWeak(auStack_68,param_1);
            func_0x00010bee59a0(param_1);
            _objc_retainAutoreleasedReturnValue();
            _objc_copyWeak(auStack_80,auStack_68);
            uStack_78 = param_6;
            uStack_6c = param_4;
            _objc_retain(puVar1);
            _objc_retain(puVar7);
            puVar6 = param_1;
            uStack_70 = param_5;
            func_0x00010bfb26a0(param_1);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            _objc_release(puVar1);
            _objc_destroyWeak(auStack_80);
            _objc_release(param_1);
            _objc_destroyWeak(auStack_68);
          }
          _objc_release(uVar8);
          puVar4 = puVar2;
        }
      }
      _objc_release(puVar7);
    }
    _objc_release(puVar4);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106c21f68; end: 106c22167;  */

void FUN_106c21f68(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126af5d0;
  puVar4 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    lVar2 = lVar1;
    FUN_106c2a5b0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_106c206ac;
    uStack_70 = 0x106c206bc;
    lStack_68 = 0;
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(*(undefined8 *)(param_1 + 0x28));
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    func_0x00010c0c0800(param_2);
    puVar4 = (undefined *)puStack_88[5];
    _objc_retain(puVar4);
    _objc_release(uVar5);
    _objc_release(uVar6);
    __Block_object_dispose(&uStack_90,8);
    lVar2 = lStack_68;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c22168; end: 106c22307;  */

void FUN_106c22168(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010beec820(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5f2704(*(undefined8 *)(param_1 + 0x20),1,0,*(undefined1 *)(param_1 + 0x54),
                      *(undefined8 *)(param_1 + 0x48));
  puVar1 = PTR_PTR_1126d16b8;
  _objc_opt_new(PTR_PTR_1126d16b8);
  func_0x00010c172f40();
  func_0x00010c195660(puVar1);
  func_0x00010c195640(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bee5780();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c22308; end: 106c22453; -[SCMemoriesCameraRollIndexUploader _uploadLargeDeltaToBolt:numberOfItemsUploaded:] */

void FUN_106c22308(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  uStack_60 = param_4;
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c22454; end: 106c2270b;  */

void FUN_106c22454(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126af5d0;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(char *)(lVar1 + 0x58) != '\x01') {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b5980;
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar5);
      func_0x00010bf1f1e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2aade0(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      func_0x00010c2a8800(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b3a20(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b5988;
      func_0x00010bfeb740(PTR_PTR_1126b5988);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      func_0x00010c2abca0(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010bf21f60(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_retain(param_2);
      _objc_retain(param_2);
      func_0x00010c28eb40(uVar2);
      _objc_release(puVar4);
      _objc_release(uVar2);
      puVar3 = PTR_PTR_1126b0418;
      func_0x00010bf54280(PTR_PTR_1126b0418);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(param_2);
      goto LAB_106c226d8;
    }
    uVar2 = 6;
  }
  FUN_106c2a5b0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  func_0x00010bf436e0(param_2);
  puVar3 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
LAB_106c226d8:
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c2270c; end: 106c22803;  */

void FUN_106c2270c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af5d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4db80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 106c22804; end: 106c2299f; -[SCMemoriesCameraRollIndexUploader _uploadDeltaToBackend:boltCameraRollDelta:isFullUpload:expectedNumItems:numberOfItemsUploaded:] */

void FUN_106c22804(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
  _objc_initWeak(auStack_68,param_1);
  puVar3 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_78 = param_7;
  uStack_70 = param_6;
  uStack_6c = param_5;
  uStack_6b = param_3 != 0;
  func_0x00010bf54280(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c229a0; end: 106c22c0b;  */

void FUN_106c229a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  puVar4 = PTR_PTR_1126af5d0;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(char *)(lVar1 + 0x58) != '\x01') {
      lVar3 = lVar1;
      func_0x00010be1b360(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(lVar1 + 0x30);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126ae748;
      lVar6 = *(long *)(param_1 + 0x30);
      _objc_retain(lVar6);
      func_0x00010bf24820(puVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar6;
      func_0x00010bfe02e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      lVar6 = lVar5;
      func_0x00010bf529e0();
      if (lVar6 != 0) {
        func_0x00010bef9140(puVar4);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      func_0x00010befab00(puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c16c6a0(puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_retain(param_2);
      func_0x00010bfbf620(uVar2);
      _objc_release(puVar4);
      _objc_release(uVar2);
      puVar4 = PTR_PTR_1126b0418;
      func_0x00010bf54280(PTR_PTR_1126b0418);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(lVar3);
      goto LAB_106c22bdc;
    }
    uVar2 = 6;
  }
  FUN_106c2a5b0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(puVar4);
  _objc_release(uVar2);
  func_0x00010bf436e0(param_2);
  puVar4 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
LAB_106c22bdc:
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c22c0c; end: 106c22deb;  */

void FUN_106c22c0c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bf2a6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c13c0c0();
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  if ((param_2 == 0) || (param_3 != 0)) {
    func_0x00010bf3ec40(param_3);
    func_0x00010c0df780(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b5f23d0(uVar5,0,puVar4,*(undefined1 *)(param_1 + 0x39),lVar2,
                        *(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x38));
    _objc_release(puVar4);
    uVar5 = 2;
    if (*(char *)(param_1 + 0x38) == '\0') {
      uVar5 = 4;
    }
    FUN_106c2a5b0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    puVar4 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6);
    _objc_release(puVar4);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x28));
    _objc_release(uVar5);
  }
  else {
    func_0x00010b5f23d0(uVar5,1,0,*(undefined1 *)(param_1 + 0x39),lVar2,
                        *(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x38));
    puVar4 = PTR_PTR_1126af5d0;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    if ((int)lVar2 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2619e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = (undefined *)0xa;
      FUN_106c2a5b0(10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c22dec; end: 106c22e5f; -[SCMemoriesCameraRollIndexUploader _generateIndexRequest:boltCameraRollDelta:isFullUpload:expectedNumItems:] */

void FUN_106c22dec(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010bdd9400();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d16c0;
  _objc_opt_new(PTR_PTR_1126d16c0);
  func_0x00010c176d00();
  puVar2 = PTR_PTR_1126d16c8;
  _objc_opt_new(PTR_PTR_1126d16c8);
  func_0x00010c1a28e0();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c22e60; end: 106c22f7b; -[SCMemoriesCameraRollIndexUploader _cameraRollGeneration:boltCameraRollDelta:isFullUpload:expectedNumItems:] */

void FUN_106c22e60(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d16d0;
  _objc_opt_new(PTR_PTR_1126d16d0);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25d160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c9a0(puVar1,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c21cca0(puVar1,param_3,(long)param_1);
  _objc_release(puVar4);
  func_0x00010c1b16a0(puVar1,param_3,param_6);
  if (param_4 == 0) {
    func_0x00010c172e40(puVar1,param_3,param_5);
  }
  else {
    func_0x00010c176dc0(puVar1,param_3,param_4);
  }
  func_0x00010c198920(puVar1,param_3,param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c22f7c; end: 106c23133; -[SCMemoriesCameraRollIndexUploader _uploadDidFinish:previouslyUploadedBatchIdNumber:numberOfItemsUploaded:] */

void FUN_106c22f7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106c23134;
  puStack_68 = &UNK_110969650;
  _objc_retain(param_4);
  uVar2 = uVar1;
  uStack_60 = param_4;
  uStack_58 = param_3;
  func_0x00010b5edefc(uVar1,0,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_106c206ac;
  uStack_90 = 0x106c206bc;
  uStack_88 = 0;
  _objc_retain(param_5);
  func_0x00010c0c0800(uVar2);
  uVar1 = puStack_a8[5];
  _objc_retain(uVar1);
  _objc_release(param_5);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  _objc_release(uVar2);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c23134; end: 106c232cf;  */

undefined * FUN_106c23134(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar1 != 0) {
    func_0x00010c067fc0();
    FUN_106c313f8(param_3,lVar1);
  }
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  FUN_106c315ec(param_3,(long)param_1,*(undefined8 *)(param_2 + 0x28));
  _objc_release(puVar2);
  _objc_release(param_3);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 106c232d0; end: 106c2335f; -[SCMemoriesCameraRollIndexUploader .cxx_destruct] */

void FUN_106c232d0(long param_1)

{
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



/* Entry: 106c23360; end: 106c2348b; -[SCMemoriesCameraRollIndexUploader _initWithTransactor:performer:coreConfigProvider:] */

undefined8 *
FUN_106c23360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f5ce0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[10];
    puVar1[10] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106c2348c; end: 106c234b3;  */

void FUN_106c2348c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c234b4; end: 106c2384f;  */

void FUN_106c234b4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bf170;
  _objc_alloc_init(PTR_PTR_1126bf170);
  if (param_2 == 0) {
    _objc_retain(0);
    func_0x00010bf885a0(0);
    func_0x00010c1b9120(puVar1);
    _objc_release(0);
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x38);
    _objc_retain(uVar6);
    func_0x00010bf885a0(uVar6);
    func_0x00010c1b9120(puVar1);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_2 + 0x40);
  }
  _objc_retain(uVar6);
  func_0x00010bf885a0(uVar6);
  func_0x00010c1be5e0(puVar1);
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126d16e0;
  _objc_opt_new(PTR_PTR_1126d16e0);
  if (param_2 == 0) {
    _objc_retain(0);
    func_0x00010c1a99c0(puVar2);
    _objc_release(0);
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    _objc_retain(uVar6);
    func_0x00010c1a99c0(puVar2);
    _objc_release(uVar6);
  }
  func_0x00010c1b0e60(puVar2);
  func_0x00010c1b9180(puVar2);
  if (param_2 == 0) {
    func_0x00010c185780(puVar2);
    func_0x00010c1b41a0(puVar2);
    func_0x00010c1c5440(puVar2);
    uVar6 = 0;
  }
  else {
    func_0x00010c185780(puVar2);
    func_0x00010c1b41a0(puVar2);
    if (*(uint *)(param_2 + 0x20) < 3) {
      func_0x00010c1c5440(puVar2);
    }
    uVar6 = *(undefined8 *)(param_2 + 0x28);
  }
  _objc_retain(uVar6);
  func_0x00010c282760(uVar6);
  func_0x00010c1c5360(puVar2);
  _objc_release(uVar6);
  if (param_2 == 0) {
    _objc_retain(0);
    func_0x00010bf1f3c0();
    func_0x00010c177420(puVar2);
    _objc_release(0);
    lVar7 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    _objc_retain(uVar6);
    func_0x00010bf1f3c0();
    func_0x00010c177420(puVar2);
    _objc_release(uVar6);
    lVar7 = *(long *)(param_2 + 0x58);
  }
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010c08fa60();
  _objc_release(lVar7);
  puVar4 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  if (lVar3 != 0) {
    _objc_opt_class(PTR_PTR_1126d16e8);
    if (param_2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 0x58);
    }
    _objc_retain(uVar6);
    func_0x00010c27f240(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    func_0x00010c2161e0(puVar2);
    _objc_release(puVar4);
  }
  if (param_2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(param_2 + 0x50);
  }
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010c08fa60();
  _objc_release(lVar7);
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (lVar3 != 0) {
    _objc_opt_class(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_opt_class();
    func_0x00010c226900(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    if (param_2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 0x50);
    }
    _objc_retain(uVar6);
    func_0x00010c27f260(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    func_0x00010c223f60(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c23850; end: 106c23863;  */

undefined8 FUN_106c23850(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  return 0;
}



/* Entry: 106c23864; end: 106c23927; -[SCMemoriesCameraRollDelta initWithAdditionDelta:deletionDelta:totalCRCountInCurrentBatchToUpload:currentBatchIdToUpload:] */

undefined1 *
FUN_106c23864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f5ce8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c23928; end: 106c2394b; -[SCMemoriesCameraRollDelta copyWithZone:] */

undefined8 FUN_106c23928(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c2394c; end: 106c239d3; -[SCMemoriesCameraRollDelta hash] */

undefined8 * FUN_106c2394c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  lStack_38 = (long)*(int *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x20);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  puVar3 = &uStack_48;
  uStack_40 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106c23a74:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106c23a80;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(int *)(puVar3 + 1) == *(int *)(param_3 + 1) && (puVar3[4] == param_3[4])))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[3];
        if (puVar6 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_106c23a80;
        }
        goto LAB_106c23a74;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106c23a80:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106c239d4; end: 106c23a9b; -[SCMemoriesCameraRollDelta isEqual:] */

long FUN_106c239d4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106c23a74:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106c23a80;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(int *)(param_1 + 8) == *(int *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106c23a80;
        }
        goto LAB_106c23a74;
      }
    }
    lVar3 = 0;
  }
LAB_106c23a80:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106c23a9c; end: 106c23aa3; -[SCMemoriesCameraRollDelta additionDelta] */

undefined8 FUN_106c23a9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106c23aa4; end: 106c23aab; -[SCMemoriesCameraRollDelta deletionDelta] */

undefined8 FUN_106c23aa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106c23aac; end: 106c23ab3; -[SCMemoriesCameraRollDelta totalCRCountInCurrentBatchToUpload] */

undefined4 FUN_106c23aac(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 106c23ab4; end: 106c23abb; -[SCMemoriesCameraRollDelta currentBatchIdToUpload] */

undefined8 FUN_106c23ab4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106c23abc; end: 106c23aeb; -[SCMemoriesCameraRollDelta .cxx_destruct] */

void FUN_106c23abc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106c23aec; end: 106c23b73; -[SCMemoriesCameraRollMetadataIndexer indexCameraRollItem:thumbnail:] */

void FUN_106c23aec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf0af00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c15b140(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar1;
  FUN_106c2e570(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106c23b74; end: 106c23b87; -[SCMemoriesCameraRollMetadataIndexer isReady] */

void FUN_106c23b74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0860b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae6b8,PTR_s_just__1125ff238,PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 106c23b88; end: 106c23b93; -[SCMemoriesCameraRollMetadataIndexer indexerTypeString] */

undefined ** FUN_106c23b88(void)

{
  return &PTR____CFConstantStringClassReference_110dceed8;
}



/* Entry: 106c23b94; end: 106c23b9b; -[SCMemoriesCameraRollMetadataIndexer indexerType] */

undefined8 FUN_106c23b94(void)

{
  return 1;
}



/* Entry: 106c23b9c; end: 106c24007; -[SCMemoriesCameraRollIndexerManager initWithCoreConfigProvider:photoPermissionCoordinator:applicationLifecycleEvents:grapheneRegistry:transactorProvider:localNotificationScheduler:blizzardLogger:modelProvider:memoriesVisualTagAnalyzer:memoriesLogger:] */

undefined8 *
FUN_106c23b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  puStack_80 = PTR_PTR_1126f5cf0;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106c24008;
    puStack_98 = &UNK_1108878e0;
    _objc_retain(param_7);
    uStack_90 = param_7;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar1[0xb] = 14000;
    puVar1[10] = 1000;
    puVar1[0xc] = 2;
    *(undefined2 *)(puVar1 + 0xd) = 0;
    _objc_retain(param_3);
    _objc_retain(param_10);
    _objc_retain(param_11);
    _objc_retain(param_6);
    _objc_retain(param_12);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d1740;
    _objc_alloc_init(PTR_PTR_1126d1740);
    func_0x00010befa120(puVar3);
    puVar5 = puVar3;
    func_0x00010bf51e00();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(param_12);
    _objc_release(param_6);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_3);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar5;
    _objc_release(uVar2);
    _objc_initWeak(auStack_b8,puVar1);
    uVar2 = param_5;
    func_0x00010bf79200(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c0,auStack_b8);
    uVar7 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(uStack_90);
  }
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



/* Entry: 106c24008; end: 106c2400f;  */

void FUN_106c24008(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  lVar1 = lRam00000001136c6e10;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106c2a098;
  puStack_40 = &UNK_110842e18;
  uStack_38 = uVar3;
  _objc_retain(uVar3);
  uVar4 = uVar3;
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x1136c6e10,&puStack_58);
    uVar4 = uStack_38;
  }
  uVar2 = uRam00000001136c6e18;
  _objc_retain(uRam00000001136c6e18);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c24010; end: 106c2403b;  */

void FUN_106c24010(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c2403c; end: 106c2411f; -[SCMemoriesCameraRollIndexerManager startIndexing] */

void FUN_106c2403c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  *(undefined1 *)(param_1 + 0x6a) = 0;
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf6ab80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c24120; end: 106c24383;  */

void FUN_106c24120(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  puVar5 = PTR_PTR_1126af5d0;
  puVar6 = PTR_PTR_1126ae6b8;
  if (puVar1 == (undefined *)0x0) {
    puVar4 = puVar1;
    FUN_106c2a534();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  else {
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_106c24384;
    uStack_80 = 0x106c24394;
    puStack_78 = (undefined *)0x0;
    _objc_initWeak(auStack_a8,puVar1);
    puVar5 = puVar1;
    func_0x00010bdda020(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_106c2439c;
    puStack_c0 = &UNK_110969780;
    _objc_copyWeak(auStack_b0,auStack_a8);
    puStack_b8 = &uStack_a0;
    puVar2 = puVar4;
    func_0x00010bfb26a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e0,auStack_a8);
    puVar6 = puVar3;
    func_0x00010bfb26a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_e0);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_b0);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_a8);
    __Block_object_dispose(&uStack_a0,8);
    puVar4 = puStack_78;
  }
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106c24384; end: 106c2439b;  */

void FUN_106c24384(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106c2439c; end: 106c2452b;  */

void FUN_106c2439c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126af5d0;
  puVar3 = PTR_PTR_1126ae6b8;
  if (param_1 == 0) {
    lVar1 = param_1;
    FUN_106c2a534();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_106c24384;
    uStack_50 = 0x106c24394;
    lStack_48 = 0;
    func_0x00010c0c0800(param_2);
    puVar3 = (undefined *)puStack_68[5];
    _objc_retain(puVar3);
    __Block_object_dispose(&uStack_70,8);
    lVar1 = lStack_48;
  }
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c2452c; end: 106c24787;  */

void FUN_106c2452c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf1f3c0();
  puVar6 = PTR_PTR_1126af5d0;
  puVar3 = PTR_PTR_1126ae6b8;
  if ((uVar1 & 1) == 0) {
    uVar2 = 4;
    FUN_106c2a534(4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined **)(lVar5 + 0x28) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar6);
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_106c24384;
    uStack_50 = 0x106c24394;
    uStack_48 = 0;
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_106c24384;
    uStack_80 = 0x106c24394;
    uStack_78 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be1d300(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c0800();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae6b8;
    if (puStack_68[5] == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010be103e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      puVar6 = *(undefined **)(lVar5 + 0x28);
      *(undefined8 *)(lVar5 + 0x28) = uVar2;
    }
    else {
      puVar6 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uVar2 = *(undefined8 *)(lVar5 + 0x28);
      *(undefined **)(lVar5 + 0x28) = puVar3;
      _objc_release(uVar2);
    }
    _objc_release(puVar6);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uStack_78);
    __Block_object_dispose(&uStack_70,8);
    uVar2 = uStack_48;
  }
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 106c24788; end: 106c248b7;  */

void FUN_106c24788(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
    _objc_release(uVar2);
    lVar3 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_2 + 0x18);
  }
  _objc_retain(lVar3);
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (lVar3 == 0) {
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    lVar4 = *(long *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
  }
  else {
    if (param_2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_2 + 0x18);
    }
    _objc_retain(lVar4);
    lVar3 = lVar4;
    func_0x00010c067fc0(lVar4);
    func_0x00010bf655e0((double)lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
    _objc_release(uVar2);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c248b8; end: 106c248ef;  */

void FUN_106c248b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c248f0; end: 106c24967;  */

void FUN_106c248f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126ae6b8;
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c24968; end: 106c24a4b;  */

void FUN_106c24968(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126af5d0;
  puVar4 = PTR_PTR_1126ae6b8;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = puVar1;
    FUN_106c2a534();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    puVar4 = puVar1;
    func_0x00010be808c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c24a4c; end: 106c24aa3; -[SCMemoriesCameraRollIndexerManager cancel] */

void FUN_106c24a4c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106c24aa4;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_38);
  return;
}



/* Entry: 106c24aa4; end: 106c24ab3;  */

void FUN_106c24aa4(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x6a) = 1;
  return;
}



/* Entry: 106c24ab4; end: 106c24c6f; -[SCMemoriesCameraRollIndexerManager _canStartIndexingJob] */

void FUN_106c24ab4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar4 = PTR_PTR_1126af5d0;
  puVar5 = PTR_PTR_1126ae6b8;
  if (*(char *)(param_1 + 0x6a) == '\x01') {
    uVar3 = 3;
    FUN_106c2a534(3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar5,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c0b8600(uVar3,param_2,&PTR___NSConcreteGlobalBlock_1109697d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae6b8;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106c24da0;
    puStack_70 = &UNK_110860958;
    uStack_68 = uVar6;
    _objc_retain(uVar1);
    _objc_retain(uVar2);
    _objc_retain(uVar7);
    _objc_retain(uVar6);
    func_0x00010bf41860(puVar4,param_2,uVar3,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfb26a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c24c70; end: 106c24d9f;  */

void FUN_106c24c70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c07bc40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c24da0; end: 106c24e0b;  */

void FUN_106c24da0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106c24e0c;
  puStack_20 = &UNK_11091b6f8;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf04920(param_2,param_2,&puStack_38);
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  return;
}



/* Entry: 106c24e0c; end: 106c24edb;  */

uint FUN_106c24e0c(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c154b60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010bfb0d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b5f288c(uVar4,uVar1,&PTR____CFConstantStringClassReference_110e79838);
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_2);
  return (uint)uVar2 ^ 1;
}



/* Entry: 106c24edc; end: 106c24f93;  */

void FUN_106c24edc(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010bf1f3c0();
  puVar3 = PTR_PTR_1126af5d0;
  puVar1 = PTR_PTR_1126ae6b8;
  if ((param_2 & 1) == 0) {
    uVar2 = 2;
    FUN_106c2a534(2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  else {
    puVar1 = (undefined *)0x0;
    FUN_106c2a114(0,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                  *(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c24f94; end: 106c2510f; -[SCMemoriesCameraRollIndexerManager _getBatchToIndex] */

void FUN_106c24f94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = PTR_PTR_1126af5d0;
  if (*(char *)(param_1 + 0x6a) == '\x01') {
    uVar1 = 3;
    FUN_106c2a534(3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010b5edefc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_106c24384;
    uStack_40 = 0x106c24394;
    uStack_38 = 0;
    func_0x00010c0c0800(uVar1);
    puVar3 = (undefined *)puStack_58[5];
    _objc_retain(puVar3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c25110; end: 106c25257;  */

void FUN_106c25110(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_106c2fd98();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126b60f8;
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    FUN_106c310a4(param_3,(long)param_1);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b60f8;
    lVar2 = param_3;
    FUN_106c300a4(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2b40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  else {
    lVar2 = lVar1;
    func_0x00010bfb1920(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2b40(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c25258; end: 106c253b3;  */

void FUN_106c25258(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c154b60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    puVar1 = PTR_PTR_1126d16f8;
    _objc_opt_new(PTR_PTR_1126d16f8);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126af5d0;
  uVar2 = param_2;
  func_0x00010bfb0d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c253b4; end: 106c2558b; -[SCMemoriesCameraRollIndexerManager _fetchCameraRoll:] */

void FUN_106c253b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar5 = PTR_PTR_1126af5d0;
  puVar3 = PTR_PTR_1126ae6b8;
  if (*(char *)(param_1 + 0x6a) == '\x01') {
    lVar1 = 3;
    FUN_106c2a534(3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar5,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  else {
    lVar1 = param_1;
    func_0x00010be63300();
    puVar2 = PTR_PTR_1126b2688;
    _objc_opt_new();
    func_0x00010c2ab380();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x50)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2add00(puVar2,param_2,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar4 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ae6b8;
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106c2558c;
    puStack_70 = &UNK_1108683b8;
    lStack_68 = lVar1;
    puStack_60 = puVar4;
    uStack_58 = uVar6;
    _objc_retain(uVar6);
    func_0x00010bf54280(puVar5,param_2,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010c25ffc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c2558c; end: 106c256eb;  */

void FUN_106c2558c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bfab780(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c256ec; end: 106c257bf;  */

void FUN_106c256ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0fb3e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf5a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126d1700;
  _objc_alloc(PTR_PTR_1126d1700);
  func_0x00010bff46e0();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  puVar4 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c257c0; end: 106c25973; -[SCMemoriesCameraRollIndexerManager _processCameraRollFetchResultResult:batchId:] */

void FUN_106c257c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126af5d0;
  puVar3 = PTR_PTR_1126ae6b8;
  if (*(char *)(param_1 + 0x6a) == '\x01') {
    uVar1 = 3;
    FUN_106c2a534(3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_106c24384;
    uStack_60 = 0x106c24394;
    uStack_58 = 0;
    _objc_retain(param_4);
    func_0x00010c0c0800(param_3);
    puVar3 = (undefined *)puStack_78[5];
    _objc_retain(puVar3);
    _objc_release(param_4);
    __Block_object_dispose(&uStack_80,8);
    uVar1 = uStack_58;
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c25974; end: 106c25a5b;  */

void FUN_106c25974(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c067fc0(uVar2);
  func_0x00010be808a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106c25a5c; end: 106c25e53; -[SCMemoriesCameraRollIndexerManager _processCameraRollFetchResult:batchId:] */

void FUN_106c25a5c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uStack_218;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  uint uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  puVar5 = PTR_PTR_1126af5d0;
  puVar12 = PTR_PTR_1126ae6b8;
  if (*(char *)(param_1 + 0x6a) == '\x01') {
    uVar4 = 3;
    FUN_106c2a534(3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  else {
    uVar4 = param_3;
    func_0x00010bf0bae0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf529e0();
    uVar1 = *(ulong *)(param_1 + 0x50);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_106c24384;
    uStack_88 = 0x106c24394;
    uStack_80 = 0;
    uStack_d8 = 0;
    uStack_c8 = 0x3032000000;
    pcStack_c0 = FUN_106c24384;
    uStack_b8 = 0x106c24394;
    uStack_b0 = 0;
    lVar7 = param_1;
    puStack_d0 = &uStack_d8;
    puStack_a0 = &uStack_a8;
    func_0x00010be38ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_106c25e54;
    puStack_e8 = &UNK_1109698d0;
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_120 = 0xc2000000;
    uStack_118 = 0x106c25e8c;
    puStack_110 = &UNK_11084d888;
    puStack_108 = &uStack_d8;
    puStack_e0 = &uStack_a8;
    func_0x00010c0c0800();
    _objc_release(lVar7);
    puVar12 = PTR_PTR_1126ae6b8;
    if (puStack_d0[5] == 0) {
      puVar8 = (undefined *)puStack_a0[5];
      func_0x00010bfed260();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = puStack_a0[5];
      func_0x00010c0d9b20();
      _objc_retainAutoreleasedReturnValue();
      if (uVar9 == 0) {
        uStack_218 = param_3;
        func_0x00010c0e2100();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(uVar9);
        uStack_218 = uVar9;
      }
      _objc_release(uVar9);
      uVar3 = (uint)puStack_a0[5];
      func_0x00010bf9fda0();
      uVar10 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      puStack_170 = puVar5;
      uStack_130 = (uint)(uVar6 < uVar1) & (uVar3 ^ 0xffffffff);
      uStack_168 = 0xc2000000;
      pcStack_160 = FUN_106c25ec4;
      puStack_158 = &UNK_110969900;
      uStack_148 = uStack_218;
      uVar11 = uVar10;
      puStack_150 = puVar8;
      uStack_140 = param_4;
      uStack_138 = uVar2;
      func_0x00010b5edefc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      puStack_198 = &uStack_1a0;
      uStack_1a0 = 0;
      uStack_190 = 0x3032000000;
      pcStack_188 = FUN_106c24384;
      uStack_180 = 0x106c24394;
      uStack_178 = 0;
      func_0x00010c0c0800(uVar11);
      puVar12 = (undefined *)puStack_198[5];
      _objc_retain(puVar12);
      __Block_object_dispose(&uStack_1a0,8);
      _objc_release(uStack_178);
      _objc_release(uVar11);
      _objc_release(uStack_218);
    }
    else {
      puVar8 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(puVar12);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar8);
    __Block_object_dispose(&uStack_d8,8);
    _objc_release(uStack_b0);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
  }
  _objc_release(uVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 106c25e54; end: 106c25ec3;  */

void FUN_106c25e54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c25ec4; end: 106c2623b;  */

undefined * FUN_106c25ec4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar18 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar18);
  lVar17 = lVar18;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (lVar17 != 0) {
    lVar21 = 0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(lVar18);
      }
      uVar19 = *(ulong *)(lVar21 * 8);
      uVar20 = uVar19;
      func_0x00010c0cc4c0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar19;
      func_0x00010c271060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a0560();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar20;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(param_1 + 0x30);
      uVar3 = uVar20;
      func_0x00010c072ac0();
      uVar4 = uVar20;
      func_0x00010c07d3a0();
      uVar5 = uVar20;
      func_0x00010c0c6c20();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0c6ac0(uVar20);
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c073f20(uVar20);
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar20;
      func_0x00010c08b3c0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar20;
      func_0x00010c0b55a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar20;
      func_0x00010bf5a7e0();
      uVar11 = uVar19;
      func_0x00010c2a0600();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar1;
      func_0x00010c271000();
      _objc_retainAutoreleasedReturnValue();
      FUN_106c31708(param_2,uVar2,uVar16,uVar3 & 0xffffffff,uVar4 & 0xffffffff,uVar5,puVar6,puVar7,
                    uVar8,uVar9,uVar10,uVar11,uVar12);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(uVar2);
      _objc_release(uVar19);
      _objc_release(uVar1);
      _objc_release(uVar20);
      lVar21 = lVar21 + 1;
    } while (lVar17 != lVar21);
    lVar17 = lVar18;
    func_0x00010bf52a60();
  }
  _objc_release(lVar18);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010c26f320();
    func_0x00010c0df720(puVar6);
    _objc_retainAutoreleasedReturnValue();
    FUN_106c312b4(param_2,puVar6,*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar6);
  }
  lVar17 = param_2;
  FUN_106c304f0(param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar17;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar13 == 0) {
    uVar20 = 0;
  }
  else {
    uVar20 = *(ulong *)(lVar13 + 8);
  }
  _objc_release();
  _objc_release(lVar17);
  if ((*(int *)(param_1 + 0x40) != 0) || (*(ulong *)(param_1 + 0x38) <= uVar20)) {
    FUN_106c311ac(param_2,*(undefined8 *)(param_1 + 0x30));
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return PTR____kCFBooleanTrue_11034ab68;
  }
  ___stack_chk_fail();
  puVar7 = PTR_PTR_1126af5d0;
  puVar6 = PTR_PTR_1126ae6b8;
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  uVar16 = *(undefined8 *)(lVar17 + 0x28);
  *(undefined **)(lVar17 + 0x28) = puVar6;
  _objc_release(uVar16);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar14);
  return puVar14;
}



/* Entry: 106c2623c; end: 106c26373;  */

void FUN_106c2623c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126af5d0;
  puVar3 = PTR_PTR_1126ae6b8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar3;
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c26374; end: 106c2655b; -[SCMemoriesCameraRollIndexerManager _cachedIndexResults:batchId:] */

void FUN_106c26374(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126af5d0;
  if (*(char *)(param_1 + 0x6a) == '\x01') {
    uVar1 = 3;
    FUN_106c2a534(3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_106c24384;
    uStack_60 = 0x106c24394;
    uStack_58 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000100589538();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c0c0800(uVar3);
    puVar4 = (undefined *)puStack_78[5];
    _objc_retain(puVar4);
    _objc_release(uVar3);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c2655c; end: 106c26573;  */

void FUN_106c2655c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_localIdentifier_1126050b0);
  return;
}



/* Entry: 106c26574; end: 106c2686f;  */

void FUN_106c26574(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  lVar7 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      if (*(long *)(lVar10 * 8) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(*(long *)(lVar10 * 8) + 0x10);
      }
      _objc_retain(uVar9);
      func_0x00010c1d0640(puVar2);
      _objc_release(uVar9);
      lVar10 = lVar10 + 1;
    } while (lVar7 != lVar10);
    lVar7 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar10);
  lVar7 = lVar10;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar10);
      }
      puVar4 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        _objc_retain();
        uVar9 = 0;
        uVar11 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(puVar4 + 0x50);
        _objc_retain(uVar9);
        uVar11 = *(undefined8 *)(puVar4 + 0x58);
      }
      _objc_retain(uVar11);
      puVar5 = PTR_PTR_1126d1708;
      _objc_alloc(PTR_PTR_1126d1708);
      func_0x00010c0625e0();
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar5);
      _objc_release(uVar11);
      _objc_release(uVar9);
      _objc_release(puVar4);
      lVar8 = lVar8 + 1;
    } while (lVar7 != lVar8);
    lVar7 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  puVar4 = PTR_PTR_1126af5d0;
  puVar5 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar9 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar4;
  _objc_release(uVar9);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126af5d0;
  uVar9 = 1;
  FUN_106c2a534(1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  uVar11 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar2;
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 106c26870; end: 106c268df;  */

void FUN_106c26870(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126af5d0;
  uVar1 = 1;
  FUN_106c2a534(1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c268e0; end: 106c26b3b; -[SCMemoriesCameraRollIndexerManager _assetsToIndex:batchId:] */

void FUN_106c268e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar5 = PTR_PTR_1126af5d0;
  uVar2 = param_3;
  if (*(char *)(param_1 + 0x6a) == '\x01') {
    uVar1 = 3;
    FUN_106c2a534(3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    FUN_106c2adf8(param_3,*(undefined8 *)(param_1 + 0x50));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar1 = uVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x106c26b44;
    puStack_68 = &UNK_1109699d0;
    uVar4 = uVar3;
    uStack_60 = uVar1;
    uStack_58 = param_4;
    func_0x000100589538();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x3032000000;
    pcStack_98 = FUN_106c24384;
    uStack_90 = 0x106c24394;
    uStack_88 = 0;
    puStack_d8 = &uStack_e0;
    uStack_e0 = 0;
    uStack_d0 = 0x3032000000;
    pcStack_c8 = FUN_106c24384;
    uStack_c0 = 0x106c24394;
    uStack_b8 = 0;
    _objc_retain(uVar2);
    func_0x00010c0c0800(uVar4);
    puVar5 = (undefined *)puStack_a8[5];
    _objc_retain(puVar5);
    _objc_release(uVar2);
    __Block_object_dispose(&uStack_e0,8);
    _objc_release(uStack_b8);
    __Block_object_dispose(&uStack_b0,8);
    _objc_release(uStack_88);
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c26b3c; end: 106c26b53;  */

void FUN_106c26b3c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_localIdentifier_1126050b0);
  return;
}



/* Entry: 106c26b54; end: 106c26c2b;  */

void FUN_106c26b54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010c0b8600(param_2,param_2,&PTR___NSConcreteGlobalBlock_110969a20);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c26c2c; end: 106c26c3f;  */

undefined8 FUN_106c26c2c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  return 0;
}



/* Entry: 106c26c40; end: 106c26c8b;  */

uint FUN_106c26c40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09da80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 106c26c8c; end: 106c26cfb;  */

void FUN_106c26c8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126af5d0;
  uVar1 = 1;
  FUN_106c2a534(1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c26cfc; end: 106c26e7b; -[SCMemoriesCameraRollIndexerManager _indexResultsWithAllAssets:batchId:] */

void FUN_106c26cfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af5d0;
  if (*(char *)(param_1 + 0x6a) == '\x01') {
    uVar1 = 3;
    FUN_106c2a534(3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_106c24384;
    uStack_50 = 0x106c24394;
    uStack_48 = 0;
    func_0x00010bdcfba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c0800();
    _objc_release(param_1);
    puVar2 = (undefined *)puStack_68[5];
    _objc_retain(puVar2);
    __Block_object_dispose(&uStack_70,8);
    uVar1 = uStack_48;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c26e7c; end: 106c26fcb;  */

void FUN_106c26e7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdd8060(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010c0c0800(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


