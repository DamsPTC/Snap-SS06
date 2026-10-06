/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c077c8; end: 106c0787f; -[SCSnapchattersPublicInfoCleanUpJob processJobWithJobConfig:input:context:onComplete:] */

undefined8 FUN_106c077c8(long param_1,undefined8 param_2)

{
  undefined8 in_x5;
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(in_x5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106c07880;
  puStack_40 = &UNK_11085adb8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106c07a18;
  puStack_68 = &UNK_110842508;
  uStack_60 = in_x5;
  lStack_38 = param_1;
  _objc_retain(in_x5);
  func_0x00010c0f8500(uVar1,param_2,&puStack_58,0,&puStack_80);
  _objc_release(uStack_60);
  _objc_release(in_x5);
  return 0;
}



/* Entry: 106c07880; end: 106c07a17;  */

void FUN_106c07880(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_3;
  _objc_retain(param_3);
  uVar4 = (uint)lVar3;
  func_0x0001090216c8(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10));
  lVar2 = param_3;
  FUN_106c07e48(param_1 + -43200.0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar5 = *(undefined8 *)(lVar7 * 8);
      FUN_106c08044(param_3,uVar5);
      uVar4 = (uint)uVar5;
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(lVar2);
  func_0x00010c0a5d80(uVar5);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(lVar2);
  func_0x00010c0ae080(uVar5);
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)(param_3 + 0x20);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106c07a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x10))(lVar3,uVar4 ^ 1,0);
    return;
  }
  return;
}



/* Entry: 106c07a18; end: 106c07a33;  */

void FUN_106c07a18(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106c07a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2 ^ 1,0);
    return;
  }
  return;
}



/* Entry: 106c07a34; end: 106c07a6f; -[SCSnapchattersPublicInfoCleanUpJob .cxx_destruct] */

void FUN_106c07a34(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c07a70; end: 106c07b0f; -[SCSnapchattersPublicInfoJobLogger initWithGrapheneRegistry:] */

undefined1 * FUN_106c07a70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f5bb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c244cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c07b10; end: 106c07b63; -[SCSnapchattersPublicInfoJobLogger logExpiredSnapchattersCount:] */

void FUN_106c07b10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1588;
  func_0x00010bf9ca20(PTR_PTR_1126d1588);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c07b64; end: 106c07bb7; -[SCSnapchattersPublicInfoJobLogger logRemovedSnapchattersCount:] */

void FUN_106c07b64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1588;
  func_0x00010c12f4c0(PTR_PTR_1126d1588);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c07bb8; end: 106c07bc3; -[SCSnapchattersPublicInfoJobLogger .cxx_destruct] */

void FUN_106c07bb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c07bc4; end: 106c07c5f; -[SCSnapchattersPublicInfoJobProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c07bc4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_11275ad1c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c085740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e5c0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bec61b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__submitJobWithJobTypeIdentifier__11258f210,
             &PTR____CFConstantStringClassReference_110e79458);
  return;
}



/* Entry: 106c07c60; end: 106c07e0f; -[SCSnapchattersPublicInfoJobProviderEntryPoint _submitJobWithJobTypeIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c07c60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126b7228;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126b7238;
  _objc_opt_new(PTR_PTR_1126b7238);
  puVar3 = PTR_PTR_1126b7248;
  _objc_opt_new(PTR_PTR_1126b7248);
  func_0x00010c1eac20();
  func_0x00010c1e9180(puVar2,param_2,puVar3);
  func_0x00010c1b67e0(puVar1,param_2,puVar2);
  puVar4 = PTR_PTR_1126b7230;
  _objc_opt_new(PTR_PTR_1126b7230);
  func_0x00010c1c35c0();
  func_0x00010c1edae0(puVar4,param_2,0x3c);
  func_0x00010c1ed860(puVar1,param_2,puVar4);
  puVar5 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  puVar6 = puVar5;
  func_0x00010bf06200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar6);
  func_0x00010c1b66e0(puVar1,param_2,puVar5);
  func_0x00010c198180(puVar1,param_2,3);
  func_0x00010c1b6840(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1b6780(puVar1,param_2,0);
  param_1 = param_1 + _DAT_11275ad1c;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010c085740();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f200();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c07e10; end: 106c07e47; -[SCSnapchattersPublicInfoJobProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c07e10(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275ad20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275ad1c);
  return;
}



/* Entry: 106c07e48; end: 106c08043;  */

void FUN_106c07e48(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_1a4;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d1590);
  if (param_2 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_2);
  }
  puVar2 = &uStack_111;
  func_0x000108c31c24();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  ppuStack_188 = &PTR_DAT_11086d7d0;
  uStack_148 = 0;
  uStack_150 = 0;
  lStack_138 = 0;
  lStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 6;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_DAT_11089b010;
  lStack_c0 = 0;
  lStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  lStack_1a0 = 0;
  lStack_198 = 0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_1;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar3,&ppuStack_110,&lStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_1a0 != 0) {
    lStack_198 = lStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_DAT_11089b010;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_DAT_11086d7d0;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_140 != 0) {
    lStack_138 = lStack_140;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c08044; end: 106c080d3;  */

void FUN_106c08044(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d1598;
  func_0x000108c32938(PTR_PTR_1126d1598,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c080d4; end: 106c080ff; +[SCGrapheneSnapchattersPublicInfoJobMetric expiredSnapchattersCount] */

void FUN_106c080d4(void)

{
  _objc_alloc(PTR_PTR_1126d1588);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c08100; end: 106c0812b; +[SCGrapheneSnapchattersPublicInfoJobMetric removedSnapchattersCount] */

void FUN_106c08100(void)

{
  _objc_alloc(PTR_PTR_1126d1588);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c0812c; end: 106c081cb; -[SCGrapheneSnapchattersPublicInfoJobMetric description] */

void FUN_106c0812c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e79498;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e79498,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f5bc0;
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



/* Entry: 106c081cc; end: 106c08317; -[SCGrapheneRegistry snapchattersPublicInfoJobGraphene] */

void FUN_106c081cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106c08254;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c6df8 != -1) {
    func_0x00010002a2fc(0x1136c6df8,&puStack_48);
  }
  uVar1 = uRam00000001136c6df0;
  _objc_retain(uRam00000001136c6df0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c08318; end: 106c0831b; -[SCLensRemoteAssetsUploadOperationStoreCleanupJobEntryPoint begin] */

void FUN_106c08318(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec6110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__submitJob_11258f1e8);
  return;
}



/* Entry: 106c0831c; end: 106c083cb; -[SCLensRemoteAssetsUploadOperationStoreCleanupJobEntryPoint _submitJob] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c0831c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_11275ad28;
    _objc_loadWeakRetained(lVar3);
  }
  lVar1 = lVar3;
  func_0x00010c085740(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be46360(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f200(lVar2,param_2,0,param_1,0,0);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106c083cc; end: 106c0850f; -[SCLensRemoteAssetsUploadOperationStoreCleanupJobEntryPoint _jobConfig] */

void FUN_106c083cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b7228;
  _objc_opt_new(PTR_PTR_1126b7228);
  puVar2 = PTR_PTR_1126b7238;
  _objc_opt_new(PTR_PTR_1126b7238);
  puVar3 = PTR_PTR_1126b7248;
  _objc_opt_new(PTR_PTR_1126b7248);
  func_0x00010c1eac20();
  func_0x00010c1e9180(puVar2,param_2,puVar3);
  puVar4 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  puVar5 = puVar4;
  func_0x00010bf06200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010bf06200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010bf06200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar5);
  func_0x00010c1b67e0(puVar1,param_2,puVar2);
  func_0x00010c1b66e0(puVar1,param_2,puVar4);
  func_0x00010c198180(puVar1,param_2,3);
  func_0x00010c1b6840(puVar1,param_2,&PTR____CFConstantStringClassReference_110e794f8);
  func_0x00010c1b6780(puVar1,param_2,0);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c08510; end: 106c08547; -[SCLensRemoteAssetsUploadOperationStoreCleanupJobEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c08510(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275ad28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275ad24);
  return;
}



/* Entry: 106c08548; end: 106c08643; -[SCLensFriendsFeedContextDataSyncTTLChecker initWithUserPreferences:timeProvider:timeToLive:syncedDataType:] */

undefined1 *
FUN_106c08548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f5bc8;
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
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be76d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined1 **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c08644; end: 106c0871b; -[SCLensFriendsFeedContextDataSyncTTLChecker canSyncItems] */

bool FUN_106c08644(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  bool bVar5;
  double dVar6;
  
  uVar1 = *(ulong *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    bVar5 = true;
  }
  else {
    func_0x00010beec800(*(undefined8 *)(param_2 + 0x10));
    dVar6 = param_1;
    func_0x00010bf885a0(uVar2);
    param_1 = param_1 - dVar6;
    dVar6 = param_1 / 3600.0;
    func_0x00010bf885a0(*(undefined8 *)(param_2 + 0x18));
    bVar5 = param_1 < dVar6;
  }
  _objc_release(uVar1);
  return bVar5;
}



/* Entry: 106c0871c; end: 106c0878f; -[SCLensFriendsFeedContextDataSyncTTLChecker logItemsSynced] */

void FUN_106c0871c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010beec800(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c08790; end: 106c087ab; -[SCLensFriendsFeedContextDataSyncTTLChecker _preferenceKeyForDataType:] */

undefined ** FUN_106c08790(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e79518;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e79538;
  }
  return ppuVar1;
}



/* Entry: 106c087ac; end: 106c087f3; -[SCLensFriendsFeedContextDataSyncTTLChecker .cxx_destruct] */

void FUN_106c087ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c087f4; end: 106c088bb; -[SCLensFriendsFeedContextDeltaSyncProcessor processDeltaSyncUpdates:deletions:isFullSync:transactionContext:] */

ulong FUN_106c087f4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                   int param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_4);
  puVar1 = param_4;
  if (param_5 != 0) {
    func_0x00010bdf9d40(param_1,param_2,param_6);
    _objc_release(param_4);
    puVar1 = PTR____NSArray0__struct_11034ab48;
  }
  func_0x00010be80d40(param_1,param_2,param_3,puVar1,param_6);
  if ((param_1 & 1) == 0) {
    func_0x00010beec4e0(param_6);
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106c088bc; end: 106c0892f; -[SCLensFriendsFeedContextDeltaSyncProcessor _deleteAllStoredItemsWithTransactionContext:] */

void FUN_106c088bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010bec6640(param_1,param_2,lVar2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106c08930; end: 106c089c7; -[SCLensFriendsFeedContextDeltaSyncProcessor _processDeltaSyncUpdates:deletions:transactionContext:] */

undefined8
FUN_106c08930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010be72d80(param_1,param_2,param_3,param_5);
  if ((int)uVar1 != 0) {
    func_0x00010be71a80(param_1,param_2,param_4,param_3,param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106c089c8; end: 106c08a8b; -[SCLensFriendsFeedContextDeltaSyncProcessor _performUpdates:transactionContext:] */

bool FUN_106c089c8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf35180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 == lVar3) {
    func_0x00010bec6640(param_1,param_2,lVar2,param_4);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  return lVar1 == lVar3;
}



/* Entry: 106c08a8c; end: 106c08b4b; -[SCLensFriendsFeedContextDeltaSyncProcessor _performDeletions:deltaSyncUpdates:transactionContext:] */

void FUN_106c08a8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf43280(param_3,param_2,&PTR___NSConcreteGlobalBlock_1109687a0);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6d100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar1);
  func_0x00010bec6640(param_1,param_2,lVar2,param_5);
  _objc_release(param_5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c08b4c; end: 106c08c8b;  */

void FUN_106c08b4c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0f5860(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_106c08c8c;
    uStack_40 = 0x106c08c9c;
    uStack_38 = 0;
    func_0x00010c0bee60(lVar3);
    uVar4 = puStack_58[5];
    _objc_retain(uVar4);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(lVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106c08c8c; end: 106c08ca3;  */

void FUN_106c08c8c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106c08ca4; end: 106c08cdb;  */

void FUN_106c08ca4(long param_1,undefined8 param_2)

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



/* Entry: 106c08cdc; end: 106c08e07; -[SCLensFriendsFeedContextDeltaSyncProcessor _submitRequests:transactionContext:] */

void FUN_106c08cdc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_110,auStack_c8,0x10);
    if (lVar1 != 0) {
      lVar2 = *plStack_100;
      do {
        lVar3 = 0;
        do {
          if (*plStack_100 != lVar2) {
            _objc_enumerationMutation(param_3);
          }
          func_0x00010c25ed40(param_4,param_2,*(undefined8 *)(lStack_108 + lVar3 * 8));
          _objc_unsafeClaimAutoreleasedReturnValue();
          lVar3 = lVar3 + 1;
        } while (lVar1 != lVar3);
        lVar1 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_110,auStack_c8,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(param_3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c08e08; end: 106c08e1f; -[SCLensFriendsFeedContextDeltaSyncProcessor delegate] */

void FUN_106c08e08(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c08e20; end: 106c08e2b; -[SCLensFriendsFeedContextDeltaSyncProcessor setDelegate:] */

void FUN_106c08e20(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 106c08e2c; end: 106c08e33; -[SCLensFriendsFeedContextDeltaSyncProcessor .cxx_destruct] */

void FUN_106c08e2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106c08e34; end: 106c08f3b; -[SCLensFriendsFeedContextEventLensesDeltaSyncer initWithDeltaForceMapper:deltaSyncProcessor:dataSyncTTLChecker:deltaSyncJobConfig:] */

undefined1 *
FUN_106c08e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f5bd0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x10));
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c08f3c; end: 106c08f63; -[SCLensFriendsFeedContextEventLensesDeltaSyncer type] */

void FUN_106c08f3c(void)

{
  _objc_alloc(PTR_PTR_1126b0448);
  func_0x00010c02d480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c08f64; end: 106c08fab; -[SCLensFriendsFeedContextEventLensesDeltaSyncer canProcessDeltaSyncWithGroupKey:] */

undefined8 FUN_106c08f64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c087060(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106c08fac; end: 106c08ff3; -[SCLensFriendsFeedContextEventLensesDeltaSyncer processDeltaSyncWithGroupKey:isFullSync:updates:deletions:transactionContext:] */

void FUN_106c08fac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c1148e0(uVar1,param_2,param_5,param_6,param_4,param_7);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0a9090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x18),PTR_s_logItemsSynced_112607e30);
    return;
  }
  return;
}



/* Entry: 106c08ff4; end: 106c08fff; -[SCLensFriendsFeedContextEventLensesDeltaSyncer dataSyncerIdentifier] */

undefined ** FUN_106c08ff4(void)

{
  return &PTR____CFConstantStringClassReference_110e79558;
}



/* Entry: 106c09000; end: 106c09003; -[SCLensFriendsFeedContextEventLensesDeltaSyncer deltaSyncClientType] */

void FUN_106c09000(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_type_11267d188);
  return;
}



/* Entry: 106c09004; end: 106c0906f; -[SCLensFriendsFeedContextEventLensesDeltaSyncer deltaSyncKey] */

void FUN_106c09004(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0440;
  _objc_alloc(PTR_PTR_1126b0440);
  puVar2 = PTR_PTR_1126b0438;
  func_0x00010c0d5160(PTR_PTR_1126b0438,param_2,&PTR____CFConstantStringClassReference_110e795b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021180(puVar1,param_2,&PTR____CFConstantStringClassReference_110e79598,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c09070; end: 106c09077; -[SCLensFriendsFeedContextEventLensesDeltaSyncer deltaSyncType] */

undefined8 FUN_106c09070(void)

{
  return 2;
}



/* Entry: 106c09078; end: 106c0907b; -[SCLensFriendsFeedContextEventLensesDeltaSyncer onDeltaSync:isFullSync:updates:deletions:transactionContext:] */

void FUN_106c09078(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c114930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_processDeltaSyncWithGroupKey_isF_112622c68);
  return;
}



/* Entry: 106c0907c; end: 106c090b3; -[SCLensFriendsFeedContextEventLensesDeltaSyncer jobConfig] */

void FUN_106c0907c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c1b6840(uVar1,param_2,&PTR____CFConstantStringClassReference_110e79558);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c090b4; end: 106c090bb; -[SCLensFriendsFeedContextEventLensesDeltaSyncer submitOnRegister] */

undefined8 FUN_106c090b4(void)

{
  return 1;
}



/* Entry: 106c090bc; end: 106c0910b; -[SCLensFriendsFeedContextEventLensesDeltaSyncer deleteAllRequestWithTransactionContext:] */

void FUN_106c090bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_106c12fe8(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c0910c; end: 106c09117;  */

void FUN_106c0910c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d15a0;
  _objc_retain(param_2);
  _objc_opt_self(puVar1);
  lVar2 = param_2;
  FUN_106c18594();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106c09118; end: 106c09177; -[SCLensFriendsFeedContextEventLensesDeltaSyncer changeRequestsForUpdates:withTransactionContext:] */

void FUN_106c09118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106c09178;
  puStack_20 = &UNK_110968800;
  uStack_18 = param_1;
  func_0x00010bf43280(param_3,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c09178; end: 106c091db;  */

void FUN_106c09178(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bf6d4e0(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_106c189d4(lVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106c091dc; end: 106c092d7; -[SCLensFriendsFeedContextEventLensesDeltaSyncer deletionRequestsForKeys:deltaSyncUpdates:withTransactionContext:] */

void FUN_106c091dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf097a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf09f80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  FUN_106c13100(param_5,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar2);
  uVar4 = uVar3;
  func_0x00010c0b8600(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106c092d8; end: 106c092e3;  */

void FUN_106c092d8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d15a0;
  _objc_retain(param_2);
  _objc_opt_self(puVar1);
  lVar2 = param_2;
  FUN_106c18594();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106c092e4; end: 106c0932b; -[SCLensFriendsFeedContextEventLensesDeltaSyncer .cxx_destruct] */

void FUN_106c092e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c0932c; end: 106c093fb; -[SCLensFriendsFeedContextEventsDeltaForceMapper deltaSyncEventFromItem:] */

void FUN_106c0932c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be36c00(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar1);
  if ((int)puVar2 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010be5ae40(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110e795d8,0);
    func_0x00010be5ae40(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110e0a798,0);
    puVar2 = PTR_PTR_1126d15a8;
    _objc_alloc(PTR_PTR_1126d15a8);
    func_0x00010c03d700();
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c093fc; end: 106c0951b; -[SCLensFriendsFeedContextEventsDeltaForceMapper deltaSyncEventLensFromItem:] */

void FUN_106c093fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be36c00(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bec58c0(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110db19f8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar1);
  if ((int)puVar3 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar2);
    if ((int)puVar3 != 0) {
      func_0x00010be5ae40(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110e795f8,0
                         );
      func_0x00010bec58c0(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110e79618);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126d15b0;
      _objc_alloc(PTR_PTR_1126d15b0);
      func_0x00010c03d6e0();
      _objc_release(param_1);
      goto LAB_106c094ec;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_106c094ec:
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c0951c; end: 106c0957b; -[SCLensFriendsFeedContextEventsDeltaForceMapper archivedEventLensRecordIdsFromItems:] */

void FUN_106c0951c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106c0957c;
  puStack_20 = &UNK_110968850;
  uStack_18 = param_1;
  func_0x00010bf43280(param_3,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c0957c; end: 106c095e7;  */

void FUN_106c0957c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bdd5120();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be36c00(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c095e8; end: 106c0974b; -[SCLensFriendsFeedContextEventsDeltaForceMapper _identifierForItem:] */

void FUN_106c095e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c084700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f5860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_106c0974c;
    uStack_40 = 0x106c0975c;
    uStack_38 = 0;
    lVar1 = lVar2;
    func_0x00010bfb1920(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bee60();
    _objc_release(lVar3);
    _objc_release(lVar1);
    uVar4 = puStack_58[5];
    _objc_retain(uVar4);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106c0974c; end: 106c09763;  */

void FUN_106c0974c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106c09764; end: 106c0979b;  */

void FUN_106c09764(long param_1,undefined8 param_2)

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



/* Entry: 106c0979c; end: 106c098c7; -[SCLensFriendsFeedContextEventsDeltaForceMapper _longValueFromItem:forKey:fallbackValue:] */

undefined8
FUN_106c0979c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uVar2 = param_3;
  uStack_38 = param_5;
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0580();
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106c098c8; end: 106c098d7;  */

void FUN_106c098c8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 106c098d8; end: 106c09a23; -[SCLensFriendsFeedContextEventsDeltaForceMapper _stringValueFromItem:forKey:] */

void FUN_106c098d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106c0974c;
  uStack_40 = 0x106c0975c;
  uStack_38 = 0;
  uVar2 = param_3;
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0580();
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c09a24; end: 106c09a5b;  */

void FUN_106c09a24(long param_1,undefined8 param_2)

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



/* Entry: 106c09a5c; end: 106c09b83; -[SCLensFriendsFeedContextEventsDeltaForceMapper _boolValueFromItem:forKey:] */

undefined1
FUN_106c09a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_3;
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0580();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106c09b84; end: 106c09b93;  */

void FUN_106c09b84(long param_1,undefined1 param_2)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 106c09b94; end: 106c09c7f; -[SCLensFriendsFeedContextEventsDeltaSyncFetcher initWithDocObjectContext:excludedEventTypes:performer:] */

undefined1 *
FUN_106c09b94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f5bd8;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c09c80; end: 106c09d17; -[SCLensFriendsFeedContextEventsDeltaSyncFetcher contextEventModelForEventType:] */

void FUN_106c09c80(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010be402a0();
  if ((uVar1 & 1) == 0) {
    func_0x00010bec6c00(param_1);
    uVar1 = param_1;
    func_0x00010be5f480(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      uVar1 = param_1;
      func_0x00010be73700(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdd79a0(param_1,param_2,uVar1,param_3);
    }
    _objc_retain(uVar1);
    _objc_release(uVar1);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c09d18; end: 106c09dbf; -[SCLensFriendsFeedContextEventsDeltaSyncFetcher _contextEventModelFromCachedEvent:eventLenses:] */

void FUN_106c09d18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010bf43280(param_4,param_2,&PTR___NSConcreteGlobalBlock_1109688a0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d15c0;
  _objc_alloc(PTR_PTR_1126d15c0);
  uVar2 = param_3;
  func_0x00010bf9a440(param_3);
  uVar3 = param_3;
  func_0x00010c113c80(param_3);
  _objc_release(param_3);
  func_0x00010c010ee0(puVar1,param_2,uVar2,uVar3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c09dc0; end: 106c09e93;  */

void FUN_106c09dc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_2;
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80();
  _objc_release(uVar1);
  if ((int)puVar3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126d15b8;
    _objc_alloc(PTR_PTR_1126d15b8);
    uVar1 = param_2;
    func_0x00010c094540(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bfe5be0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c024540(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c09e94; end: 106c09f23; -[SCLensFriendsFeedContextEventsDeltaSyncFetcher _memoryCachedEventWithType:] */

void FUN_106c09e94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c09f24; end: 106c09fb7; -[SCLensFriendsFeedContextEventsDeltaSyncFetcher _cacheInMemoryEvent:forEventType:] */

void FUN_106c09f24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,param_3,puVar1);
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c09fb8; end: 106c09ffb; -[SCLensFriendsFeedContextEventsDeltaSyncFetcher _cleanupMemoryCache] */

void FUN_106c09fb8(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x30);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x30);
  return;
}



/* Entry: 106c09ffc; end: 106c0a0bf; -[SCLensFriendsFeedContextEventsDeltaSyncFetcher _persistentCachedEventWithType:] */

void FUN_106c09ffc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_106c12d9c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_106c132ec();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010bde82e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106c0a0c0; end: 106c0a10f; -[SCLensFriendsFeedContextEventsDeltaSyncFetcher _isEventTypeExcluded:] */

undefined8 FUN_106c0a0c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 106c0a110; end: 106c0a357; -[SCLensFriendsFeedContextEventsDeltaSyncFetcher _subscribeOnDocObjectUpdatesIfNeeded] */

void FUN_106c0a110(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if (*(long *)(param_1 + 0x28) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar1;
    _objc_release(uVar6);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    FUN_106c13538(uVar2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    FUN_106c1361c(uVar3,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_initWeak(auStack_68,param_1);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106c0a358;
    puStack_78 = &UNK_1108634b8;
    _objc_copyWeak(auStack_70,auStack_68);
    uVar6 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_copyWeak(auStack_98,auStack_68);
    uVar6 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 106c0a358; end: 106c0a3af;  */

void FUN_106c0a358(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddf800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c0a3b0; end: 106c0a403; -[SCLensFriendsFeedContextEventsDeltaSyncFetcher .cxx_destruct] */

void FUN_106c0a3b0(long param_1)

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



/* Entry: 106c0a404; end: 106c0a50b; -[SCLensFriendsFeedContextEventsDeltaSyncer initWithDeltaForceMapper:deltaSyncProcessor:dataSyncTTLChecker:deltaSyncJobConfig:] */

undefined1 *
FUN_106c0a404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f5be0;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x10));
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c0a50c; end: 106c0a533; -[SCLensFriendsFeedContextEventsDeltaSyncer type] */

void FUN_106c0a50c(void)

{
  _objc_alloc(PTR_PTR_1126b0448);
  func_0x00010c02d480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c0a534; end: 106c0a57b; -[SCLensFriendsFeedContextEventsDeltaSyncer canProcessDeltaSyncWithGroupKey:] */

undefined8 FUN_106c0a534(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c087060(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106c0a57c; end: 106c0a5c3; -[SCLensFriendsFeedContextEventsDeltaSyncer processDeltaSyncWithGroupKey:isFullSync:updates:deletions:transactionContext:] */

void FUN_106c0a57c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c1148e0(uVar1,param_2,param_5,param_6,param_4,param_7);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0a9090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x18),PTR_s_logItemsSynced_112607e30);
    return;
  }
  return;
}



/* Entry: 106c0a5c4; end: 106c0a5cf; -[SCLensFriendsFeedContextEventsDeltaSyncer dataSyncerIdentifier] */

undefined ** FUN_106c0a5c4(void)

{
  return &PTR____CFConstantStringClassReference_110e79658;
}



/* Entry: 106c0a5d0; end: 106c0a5d3; -[SCLensFriendsFeedContextEventsDeltaSyncer deltaSyncClientType] */

void FUN_106c0a5d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_type_11267d188);
  return;
}



/* Entry: 106c0a5d4; end: 106c0a63f; -[SCLensFriendsFeedContextEventsDeltaSyncer deltaSyncKey] */

void FUN_106c0a5d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0440;
  _objc_alloc(PTR_PTR_1126b0440);
  puVar2 = PTR_PTR_1126b0438;
  func_0x00010c0d5160(PTR_PTR_1126b0438,param_2,&PTR____CFConstantStringClassReference_110e3dd18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021180(puVar1,param_2,&PTR____CFConstantStringClassReference_110e79678,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c0a640; end: 106c0a647; -[SCLensFriendsFeedContextEventsDeltaSyncer deltaSyncType] */

undefined8 FUN_106c0a640(void)

{
  return 2;
}



/* Entry: 106c0a648; end: 106c0a64b; -[SCLensFriendsFeedContextEventsDeltaSyncer onDeltaSync:isFullSync:updates:deletions:transactionContext:] */

void FUN_106c0a648(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c114930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_processDeltaSyncWithGroupKey_isF_112622c68);
  return;
}



/* Entry: 106c0a64c; end: 106c0a683; -[SCLensFriendsFeedContextEventsDeltaSyncer jobConfig] */

void FUN_106c0a64c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c1b6840(uVar1,param_2,&PTR____CFConstantStringClassReference_110e79658);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c0a684; end: 106c0a68b; -[SCLensFriendsFeedContextEventsDeltaSyncer submitOnRegister] */

undefined8 FUN_106c0a684(void)

{
  return 1;
}



/* Entry: 106c0a68c; end: 106c0a6db; -[SCLensFriendsFeedContextEventsDeltaSyncer deleteAllRequestWithTransactionContext:] */

void FUN_106c0a68c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_106c12934(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c0a6dc; end: 106c0a6e7;  */

void FUN_106c0a6dc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d15c8;
  _objc_retain(param_2);
  _objc_opt_self(puVar1);
  lVar2 = param_2;
  FUN_106c1708c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106c0a6e8; end: 106c0a747; -[SCLensFriendsFeedContextEventsDeltaSyncer changeRequestsForUpdates:withTransactionContext:] */

void FUN_106c0a6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106c0a748;
  puStack_20 = &UNK_110968800;
  uStack_18 = param_1;
  func_0x00010bf43280(param_3,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c0a748; end: 106c0a7ab;  */

void FUN_106c0a748(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bf6d4c0(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_106c17444(lVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106c0a7ac; end: 106c0a84b; -[SCLensFriendsFeedContextEventsDeltaSyncer deletionRequestsForKeys:deltaSyncUpdates:withTransactionContext:] */

void FUN_106c0a7ac(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_x4;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_retain(in_x4);
  func_0x00010c225c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = in_x4;
  FUN_106c12a4c(in_x4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x4);
  _objc_release(puVar1);
  uVar3 = uVar2;
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106c0a84c; end: 106c0a857;  */

void FUN_106c0a84c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d15c8;
  _objc_retain(param_2);
  _objc_opt_self(puVar1);
  lVar2 = param_2;
  FUN_106c1708c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106c0a858; end: 106c0a89f; -[SCLensFriendsFeedContextEventsDeltaSyncer .cxx_destruct] */

void FUN_106c0a858(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c0a8a0; end: 106c0a913; -[SCLensFriendsFeedContextCleanUpJob initWithUserStorageServices:] */

undefined1 * FUN_106c0a8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5be8;
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


