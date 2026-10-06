/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f60404; end: 107f60447; -[SCMemoriesStorageServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f60404(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112771e04);
  _objc_destroyWeak(param_1 + _DAT_112771e00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112771dfc);
  return;
}



/* Entry: 107f60448; end: 107f60577; -[SCResult sql_objectAndError:] */

void FUN_107f60448(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107f60578;
  uStack_30 = 0x107f60588;
  uStack_28 = 0;
  puStack_b0 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_107f60578;
  uStack_60 = 0x107f60588;
  uStack_58 = 0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_107f60590;
  puStack_90 = &UNK_1108639e8;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x107f605c8;
  puStack_b8 = &UNK_11084d888;
  puStack_78 = puStack_b0;
  puStack_48 = puStack_88;
  func_0x00010c0c0800(param_1,param_2,&puStack_a8,&puStack_d0);
  if (param_3 != (undefined8 *)0x0) {
    uVar1 = puStack_78[5];
    _objc_retainAutorelease();
    *param_3 = uVar1;
  }
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f60578; end: 107f6058f;  */

void FUN_107f60578(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f60590; end: 107f605ff;  */

void FUN_107f60590(long param_1,undefined8 param_2)

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



/* Entry: 107f60600; end: 107f60637; -[SCMemoriesAssetUploadState descriptionForLogging] */

undefined ** FUN_107f60600(long param_1)

{
  undefined **ppuVar1;
  
  func_0x00010bf97a20();
  if (param_1 - 1U < 7) {
    ppuVar1 = (undefined **)(&PTR_PTR_110a14ac8)[param_1 - 1U];
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ea0078;
  }
  return ppuVar1;
}



/* Entry: 107f60638; end: 107f607c3; -[SCMemoriesAssetRepositoryImplCpp getUploadStatesForAssetIds:] */

void FUN_107f60638(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar4 = *(undefined **)(param_1 + 8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107f607c4;
  puStack_60 = &UNK_110a14978;
  _objc_retain(param_3);
  uStack_58 = param_3;
  func_0x000100589538(puVar4,0,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar3 = PTR_PTR_1126af5d0;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    _objc_retain(puVar1);
    puVar3 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_retain(param_3);
  func_0x00010c0c0800(puVar3);
  _objc_release(param_3);
  _objc_release(uStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f607c4; end: 107f607d3;  */

void FUN_107f607c4(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 uStack_3c;
  long *plStack_38;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      uVar6 = *(undefined8 *)(param_2 + 8);
      uVar3 = uVar4;
      func_0x00010bf529e0(uVar4);
      func_0x000105440200(&plStack_38,uVar6,&UNK_10deeb198,0x3c,uVar3);
      uStack_3c = 1;
      func_0x00010544033c(plStack_38,&uStack_3c,uVar4);
      plVar5 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_107f61730);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_107f61650;
    }
  }
  plVar5 = (long *)0x0;
LAB_107f61650:
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar5);
  return;
}



/* Entry: 107f607d4; end: 107f607fb;  */

void FUN_107f607d4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_110a149e8,
                      &PTR___NSConcreteGlobalBlock_110a14a28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f607fc; end: 107f60827;  */

undefined8 FUN_107f607fc(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 0x10);
  }
  return 0;
}



/* Entry: 107f60828; end: 107f609a3; -[SCMemoriesAssetRepositoryImplCpp insertOrIgnoreUploadStateForAsset:uploadState:error:] */

bool FUN_107f60828(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = *(undefined **)(param_1 + 8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107f609a4;
  puStack_58 = &UNK_110a14a48;
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x00010b5edefc(puVar3,0,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar2 = PTR_PTR_1126af5d0;
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    _objc_retain(puVar3);
    puVar2 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c24cae0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3 != (undefined *)0x0;
}



/* Entry: 107f609a4; end: 107f60a2b;  */

undefined * FUN_107f609a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf0b260(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf0b760(uVar1);
  FUN_107f619e8(param_2,uVar2,(long)(int)uVar1,0,*(undefined8 *)(param_1 + 0x28),0,0);
  _objc_release(param_2);
  _objc_release(uVar2);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 107f60a2c; end: 107f60ba7; -[SCMemoriesAssetRepositoryImplCpp updateUploadStateForAssetId:uploadState:error:] */

bool FUN_107f60a2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = *(undefined **)(param_1 + 8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107f60ba8;
  puStack_58 = &UNK_110a14a48;
  _objc_retain(param_4);
  uStack_50 = param_4;
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x00010b5edefc(puVar3,0,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar2 = PTR_PTR_1126af5d0;
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    _objc_retain(puVar3);
    puVar2 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c24cae0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3 != (undefined *)0x0;
}



/* Entry: 107f60ba8; end: 107f60bcf;  */

undefined * FUN_107f60ba8(long param_1,undefined8 param_2)

{
  FUN_107f61bf8(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 107f60bd0; end: 107f60d23; -[SCMemoriesAssetRepositoryImplCpp deleteOrIgnoreUploadStateForAssetId:error:] */

bool FUN_107f60bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar3 = *(undefined **)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107f60d24;
  puStack_50 = &UNK_110a14a78;
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x00010b5edefc(puVar3,0,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar2 = PTR_PTR_1126af5d0;
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    _objc_retain(puVar3);
    puVar2 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c24cae0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return puVar3 != (undefined *)0x0;
}



/* Entry: 107f60d24; end: 107f60d4b;  */

undefined * FUN_107f60d24(long param_1,undefined8 param_2)

{
  FUN_107f61d60(param_2,*(undefined8 *)(param_1 + 0x20));
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 107f60d4c; end: 107f60ed7; -[SCMemoriesAssetRepositoryImplCpp getUploadStateForAssetId:] */

void FUN_107f60d4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar4 = *(undefined **)(param_1 + 8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107f60ed8;
  puStack_60 = &UNK_110a14978;
  _objc_retain(param_3);
  uStack_58 = param_3;
  func_0x000100589538(puVar4,0,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar3 = PTR_PTR_1126af5d0;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    _objc_retain(puVar1);
    puVar3 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_retain(param_3);
  func_0x00010c0c0800(puVar3);
  _objc_release(param_3);
  _objc_release(uStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f60ed8; end: 107f60ee7;  */

void FUN_107f60ed8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      lVar1 = param_2 + 0x10;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_2 + 8),&UNK_10deeb1d5,0x36);
      func_0x0001005fcac0();
      func_0x0001005fcb64(lVar1,FUN_107f61958);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107f6189c;
    }
  }
  lVar1 = 0;
LAB_107f6189c:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107f60ee8; end: 107f60f37;  */

void FUN_107f60ee8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 8);
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f60f38; end: 107f60f3b;  */

void FUN_107f60f38(void)

{
  return;
}



/* Entry: 107f60f3c; end: 107f61007; -[SCMemoriesAssetRepositoryImplCpp deleteOrIgnoreUploadStateForAssetId:completionHandler:] */

void FUN_107f60f3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107f61008;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  if (lVar2 == 0) {
    FUN_107f61008(&puStack_68);
    uVar1 = param_4;
  }
  else {
    func_0x00010007380c(lVar2,&puStack_68);
    uVar1 = uStack_38;
  }
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f61008; end: 107f61063;  */

void FUN_107f61008(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  func_0x00010bf6c4e0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      &uStack_28);
  uVar1 = uStack_28;
  _objc_retain(uStack_28);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 107f61064; end: 107f6115b; -[SCMemoriesAssetRepositoryImplCpp insertOrIgnoreUploadStateForAsset:uploadState:completionHandler:] */

void FUN_107f61064(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 0x10);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107f6115c;
  puStack_68 = &UNK_1108465d0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  if (lVar2 == 0) {
    FUN_107f6115c(&puStack_80);
    uVar1 = param_5;
  }
  else {
    func_0x00010007380c(lVar2,&puStack_80);
    uVar1 = uStack_48;
  }
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f6115c; end: 107f611b7;  */

void FUN_107f6115c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  func_0x00010c066b60(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),&uStack_28);
  uVar1 = uStack_28;
  _objc_retain(uStack_28);
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 107f611b8; end: 107f612af; -[SCMemoriesAssetRepositoryImplCpp updateUploadStateForAssetId:uploadState:completionHandler:] */

void FUN_107f611b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 0x10);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107f612b0;
  puStack_68 = &UNK_1108465d0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  if (lVar2 == 0) {
    FUN_107f612b0(&puStack_80);
    uVar1 = param_5;
  }
  else {
    func_0x00010007380c(lVar2,&puStack_80);
    uVar1 = uStack_48;
  }
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f612b0; end: 107f6130b;  */

void FUN_107f612b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  func_0x00010c28b800(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),&uStack_28);
  uVar1 = uStack_28;
  _objc_retain(uStack_28);
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 107f6130c; end: 107f6133b; -[SCMemoriesAssetRepositoryImplCpp .cxx_destruct] */

void FUN_107f6130c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f6133c; end: 107f613fb; -[SCMemoriesAssetRepositoryImplCpp _initWithDatabasePath:dispatchQueue:wipe:] */

undefined8
FUN_107f6133c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c03b0;
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(puVar2);
    puVar1 = PTR_PTR_1126d8780;
    _objc_opt_class(PTR_PTR_1126d8780);
    func_0x00010be3ab00(puVar2,param_2,puVar1,param_3,0,param_5);
    _objc_release(param_3);
  }
  func_0x00010c055120(param_1,param_2,puVar2,param_4);
  _objc_release(puVar2);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 107f613fc; end: 107f6142b; +[SCMemoriesAssetUploadState fromInt:] */

void FUN_107f613fc(void)

{
  _objc_alloc(PTR_PTR_1126d84b8);
  func_0x00010c0105c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f6142c; end: 107f61443; -[SCMemoriesAssetUploadState toInt] */

long FUN_107f6142c(int param_1)

{
  func_0x00010c067ec0();
  return (long)param_1;
}



/* Entry: 107f61444; end: 107f6146b; -[MemoriesDb getConn] */

void FUN_107f61444(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f6146c; end: 107f6157f; -[MemoriesDb .cxx_destruct] */

void FUN_107f6146c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f61580; end: 107f6172f;  */

void FUN_107f61580(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      func_0x000105440200(&plStack_38,uVar5,&UNK_10deeb198,0x3c,uVar3);
      uStack_3c = 1;
      func_0x00010544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_107f61730);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_107f61650;
    }
  }
  plVar4 = (long *)0x0;
LAB_107f61650:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 107f61730; end: 107f617f3;  */

void FUN_107f61730(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d8788;
  _objc_alloc(PTR_PTR_1126d8788);
  puVar2 = PTR_PTR_1126d84b8;
  func_0x00010b5ef268(param_1,0);
  func_0x00010bfbac60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001005fdab8(param_1,1);
  _objc_retainAutoreleasedReturnValue();
  FUN_107f62164(puVar1,puVar2,param_1);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f617f4; end: 107f61957;  */

void FUN_107f617f4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x10;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10deeb1d5,0x36);
      func_0x0001005fcac0();
      func_0x0001005fcb64(lVar1,FUN_107f61958);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107f6189c;
    }
  }
  lVar1 = 0;
LAB_107f6189c:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107f61958; end: 107f619e7;  */

void FUN_107f61958(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d8790;
  _objc_alloc(PTR_PTR_1126d8790);
  puVar2 = PTR_PTR_1126d84b8;
  func_0x00010b5ef268(param_1,0);
  func_0x00010bfbac60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107f62020(puVar1,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f619e8; end: 107f61bf7;  */

void FUN_107f619e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  int iStack_54;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x18;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10deeb20c,0xed);
      iStack_54 = 1;
      func_0x0001005fcac0();
      iVar1 = iStack_54;
      iStack_54 = iStack_54 + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_3);
      func_0x0001005fcac0(lVar2,&iStack_54,param_4);
      func_0x00010b5eed14(lVar2,&iStack_54,param_5);
      func_0x0001005fcac0(lVar2,&iStack_54,param_6);
      func_0x0001005fcac0(lVar2,&iStack_54,param_7);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 107f61bf8; end: 107f61d5f;  */

void FUN_107f61bf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x20;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10deeb2fa,0x3e);
      uStack_44 = 1;
      func_0x00010b5eed14();
      func_0x0001005fcac0(lVar1,&uStack_44,param_3);
      func_0x00010b5ef0d0(lVar1);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107f61d60; end: 107f61e8f;  */

void FUN_107f61d60(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x28;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10deeb339,0x2e);
      func_0x0001005fcac0();
      func_0x00010b5ef0d0(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f61e90; end: 107f61eb3; -[GetAssetIdsFromEntryIds copyWithZone:] */

undefined8 FUN_107f61e90(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f61eb4; end: 107f61ebb; -[GetAssetIdsFromEntryIds hash] */

void FUN_107f61eb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 107f61ebc; end: 107f61f4b; -[GetAssetIdsFromEntryIds isEqual:] */

long FUN_107f61ebc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107f61f30;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_107f61f30;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_107f61f30;
    }
  }
  lVar3 = 1;
LAB_107f61f30:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107f61f4c; end: 107f61f57; -[GetAssetIdsFromEntryIds .cxx_destruct] */

void FUN_107f61f4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f61f58; end: 107f61f7b; -[GetAssetIdsFromSnapIds copyWithZone:] */

undefined8 FUN_107f61f58(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f61f7c; end: 107f61f83; -[GetAssetIdsFromSnapIds hash] */

void FUN_107f61f7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 107f61f84; end: 107f62013; -[GetAssetIdsFromSnapIds isEqual:] */

long FUN_107f61f84(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107f61ff8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_107f61ff8;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_107f61ff8;
    }
  }
  lVar3 = 1;
LAB_107f61ff8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107f62014; end: 107f6201f; -[GetAssetIdsFromSnapIds .cxx_destruct] */

void FUN_107f62014(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f62020; end: 107f6209b;  */

undefined1 * FUN_107f62020(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_30;
  undefined *puStack_28;
  
  plVar1 = &lStack_30;
  _objc_retain(param_2);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_28 = PTR_PTR_1126fbce0;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 107f6209c; end: 107f620bf; -[GetUploadStateForAsset copyWithZone:] */

undefined8 FUN_107f6209c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f620c0; end: 107f620c7; -[GetUploadStateForAsset hash] */

void FUN_107f620c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 107f620c8; end: 107f62157; -[GetUploadStateForAsset isEqual:] */

long FUN_107f620c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107f6213c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_107f6213c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_107f6213c;
    }
  }
  lVar3 = 1;
LAB_107f6213c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107f62158; end: 107f62163; -[GetUploadStateForAsset .cxx_destruct] */

void FUN_107f62158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f62164; end: 107f62213;  */

undefined1 * FUN_107f62164(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_1126fbce8;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 107f62214; end: 107f62237; -[GetUploadStatesForAssets copyWithZone:] */

undefined8 FUN_107f62214(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f62238; end: 107f622ab; -[GetUploadStatesForAssets hash] */

undefined8 * FUN_107f62238(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107f6232c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107f62338;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_107f62338;
        }
        goto LAB_107f6232c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107f62338:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107f622ac; end: 107f62353; -[GetUploadStatesForAssets isEqual:] */

long FUN_107f622ac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107f6232c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107f62338;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_107f62338;
        }
        goto LAB_107f6232c;
      }
    }
    lVar3 = 0;
  }
LAB_107f62338:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107f62354; end: 107f62383; -[GetUploadStatesForAssets .cxx_destruct] */

void FUN_107f62354(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f62384; end: 107f623a7; -[GetSnapDocDataForSnapIds copyWithZone:] */

undefined8 FUN_107f62384(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f623a8; end: 107f6241b; -[GetSnapDocDataForSnapIds hash] */

undefined8 * FUN_107f623a8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107f6249c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107f624a8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_107f624a8;
        }
        goto LAB_107f6249c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107f624a8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107f6241c; end: 107f624c3; -[GetSnapDocDataForSnapIds isEqual:] */

long FUN_107f6241c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107f6249c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107f624a8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_107f624a8;
        }
        goto LAB_107f6249c;
      }
    }
    lVar3 = 0;
  }
LAB_107f624a8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107f624c4; end: 107f624f3; -[GetSnapDocDataForSnapIds .cxx_destruct] */

void FUN_107f624c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f624f4; end: 107f6253f; -[SCMemoriesAssetUploadState initWithEnum:] */

void FUN_107f624f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fbcf8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(int *)((long)puVar1 + 8) = (int)param_3;
  }
  return;
}



/* Entry: 107f62540; end: 107f62563; -[SCMemoriesAssetUploadState copyWithZone:] */

undefined8 FUN_107f62540(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f62564; end: 107f6256b; -[SCMemoriesAssetUploadState intValue] */

undefined4 FUN_107f62564(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 107f6256c; end: 107f62573; -[SCMemoriesAssetUploadState enumValue] */

undefined8 FUN_107f6256c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f62574; end: 107f6257f; -[SCMemoriesStorageServices .cxx_destruct] */

void FUN_107f62574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f62580; end: 107f62607; -[SCMemoriesAsset initWithAssetId:assetType:] */

undefined1 *
FUN_107f62580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fbd08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f62608; end: 107f6262b; -[SCMemoriesAsset copyWithZone:] */

undefined8 FUN_107f62608(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f6262c; end: 107f62633; -[SCMemoriesAsset assetId] */

undefined8 FUN_107f6262c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f62634; end: 107f6263b; -[SCMemoriesAsset assetType] */

undefined4 FUN_107f62634(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 107f6263c; end: 107f62647; -[SCMemoriesAsset .cxx_destruct] */

void FUN_107f6263c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107f62648; end: 107f6271b;  */

void FUN_107f62648(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_2);
  func_0x00010c0f7fe0(uVar4,uVar1);
  puVar3 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f6271c; end: 107f62727;  */

void FUN_107f6271c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107f62728; end: 107f6293f;  */

undefined * FUN_107f62728(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_a8 = (undefined **)0xc2000000;
  pcStack_a0 = FUN_107f62648;
  puStack_98 = &UNK_1108b6250;
  uStack_90 = param_4;
  uStack_88 = param_3;
  uStack_80 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf54280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_3);
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126ae6b8;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_78 = param_2;
  puStack_70 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cab40(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  ppuStack_a8 = &puStack_b0;
  puStack_b0 = (undefined *)0x0;
  pcStack_a0 = (code *)0x2020000000;
  puStack_98 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff00);
  puVar2 = puVar3;
  func_0x00010bfad7a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&puStack_b0,8);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&puStack_b0,8);
  __Unwind_Resume();
  lVar5 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  if ((*(byte *)(lVar5 + 0x18) & 1) == 0) {
    *(undefined1 *)(lVar5 + 0x18) = 1;
    uVar4 = (uint)*(byte *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18);
  }
  else {
    uVar4 = 0;
  }
  return (undefined *)(ulong)(uVar4 & 1);
}



/* Entry: 107f62940; end: 107f62973;  */

byte FUN_107f62940(long param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if ((*(byte *)(lVar2 + 0x18) & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x18) = 1;
    bVar1 = *(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18);
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 107f62974; end: 107f629db; -[SCMemoriesObserverLifecycle init] */

undefined1 * FUN_107f62974(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fbd10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107f629dc; end: 107f62a1f; -[SCMemoriesObserverLifecycle dealloc] */

void FUN_107f629dc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80();
  puStack_28 = PTR_PTR_1126fbd10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107f62a20; end: 107f62ab7; -[SCMemoriesObserverLifecycle addKey:disposable:] */

void FUN_107f62a20(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((param_4 != 0) && (lVar1 != 0)) {
    func_0x00010c12bfc0(param_1,param_2,param_3);
    _os_unfair_lock_lock(param_1 + 0x10);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,param_4,param_3);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f62ab8; end: 107f62b43; -[SCMemoriesObserverLifecycle getDisposableForKey:] */

void FUN_107f62ab8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0e00e0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f62b44; end: 107f62bd3; -[SCMemoriesObserverLifecycle removeDisposableForKey:] */

void FUN_107f62b44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bf86d40(lVar1);
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  }
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f62bd4; end: 107f62d0b; -[SCMemoriesObserverLifecycle disposeAll] */

void FUN_107f62bd4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      func_0x00010bf86d40(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 8));
  lVar3 = param_1 + 0x10;
  _os_unfair_lock_unlock(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x10);
  __Unwind_Resume(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + 8,0);
  return;
}



/* Entry: 107f62d0c; end: 107f62d17; -[SCMemoriesObserverLifecycle .cxx_destruct] */

void FUN_107f62d0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f62d18; end: 107f62d7f; -[SCDisposableObserver addTo:withKey:] */

void FUN_107f62d18(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
    func_0x00010bef9560(param_3,param_2,param_4,param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f62d80; end: 107f6318f; -[SCNativeErrorReporter reportNonfatalForError:] */

void FUN_107f62d80(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b3e90;
  _objc_opt_new();
  puVar9 = PTR_PTR_1126b8460;
  _objc_opt_new();
  _objc_retain(param_3);
  func_0x00010bf33240();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf3ec40(param_3);
  _objc_release(param_3);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_107f63190;
  puStack_80 = &UNK_110a14b30;
  _objc_retain(puVar9);
  puStack_78 = puVar9;
  _objc_retain(param_3);
  puStack_70 = param_3;
  _objc_retain(puVar1);
  ppuVar4 = &puStack_98;
  puStack_68 = puVar1;
  _objc_retainBlock();
  puVar2 = param_3;
  func_0x00010bf33240();
  switch(puVar2) {
  case (undefined *)0x0:
    puVar2 = param_3;
    func_0x00010bf3ec40(param_3);
    func_0x00010b7ea744(puVar1,puVar2);
    goto code_r0x000107f62fb4;
  case (undefined *)0x1:
    func_0x00010bf3ec40(param_3);
    func_0x00010c186120(puVar1);
    goto code_r0x000107f62fb4;
  case (undefined *)0x2:
    func_0x00010bf3ec40(param_3);
    func_0x00010c1899a0(puVar1);
    goto code_r0x000107f62fb4;
  case (undefined *)0x3:
    pcVar8 = (code *)ppuVar4[2];
    uVar10 = 10;
    break;
  case (undefined *)0x4:
    pcVar8 = (code *)ppuVar4[2];
    uVar10 = 0xb;
    break;
  case (undefined *)0x5:
    pcVar8 = (code *)ppuVar4[2];
    uVar10 = 0xc;
    break;
  case (undefined *)0x6:
    pcVar8 = (code *)ppuVar4[2];
    uVar10 = 0xd;
    break;
  case (undefined *)0x7:
    pcVar8 = (code *)ppuVar4[2];
    uVar10 = 0xe;
    break;
  default:
    goto LAB_107f63044;
  case (undefined *)0x9:
    pcVar8 = (code *)ppuVar4[2];
    uVar10 = 0xf;
    break;
  case (undefined *)0xa:
    pcVar8 = (code *)ppuVar4[2];
    uVar10 = 0x10;
    break;
  case (undefined *)0xb:
    pcVar8 = (code *)ppuVar4[2];
    uVar10 = 0x11;
    break;
  case (undefined *)0xc:
    pcVar8 = (code *)ppuVar4[2];
    uVar10 = 0x12;
    break;
  case (undefined *)0xd:
    pcVar8 = (code *)ppuVar4[2];
    uVar10 = 0x13;
    break;
  case (undefined *)0xe:
    func_0x00010c1cd920(puVar1);
    goto code_r0x000107f62fb4;
  case (undefined *)0xf:
    pcVar8 = (code *)ppuVar4[2];
    uVar10 = 0x14;
    break;
  case (undefined *)0x10:
    pcVar8 = (code *)ppuVar4[2];
    uVar10 = 0x15;
    break;
  case (undefined *)0x11:
    pcVar8 = (code *)ppuVar4[2];
    uVar10 = 0x16;
    break;
  case (undefined *)0x12:
    pcVar8 = (code *)ppuVar4[2];
    uVar10 = 0x17;
    break;
  case (undefined *)0x14:
    func_0x00010bf3ec40(param_3);
    func_0x00010c1c2540(puVar1);
code_r0x000107f62fb4:
    _objc_release(puVar9);
    puVar9 = (undefined *)0x0;
    goto LAB_107f63044;
  }
  (*pcVar8)(ppuVar4,uVar10);
LAB_107f63044:
  puVar5 = puVar1;
  func_0x00010bf98960();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar10 = *(undefined8 *)(param_1 + 8);
  puVar6 = param_3;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b3e98;
  if ((int)puVar5 == 0) {
    puVar5 = PTR_PTR_1126b3e98;
    func_0x00010bf60460(PTR_PTR_1126b3e98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c132d60(uVar10);
  }
  else {
    puVar5 = param_3;
    func_0x00010c24d480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf53a80(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c133420(uVar10);
    _objc_release(puVar7);
  }
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(ppuVar4);
  _objc_release(puStack_68);
  _objc_release(puStack_70);
  _objc_release(puStack_78);
  _objc_release(puVar3);
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107f63190; end: 107f63213;  */

void FUN_107f63190(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d01e8;
  _objc_opt_new(PTR_PTR_1126d01e8);
  func_0x00010c1c7300(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar1);
  func_0x00010bf3ec40(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cbda0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d100();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1c7270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_setMessaging__11264f6c0,param_2);
  return;
}



/* Entry: 107f63214; end: 107f63217; -[SCNativeErrorReporter reportError:] */

void FUN_107f63214(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c133470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reportNonfatalForError__11262a738);
  return;
}



/* Entry: 107f63218; end: 107f63223; -[SCNativeErrorReporter .cxx_destruct] */

void FUN_107f63218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f63224; end: 107f6329f;  */

undefined * FUN_107f63224(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113728678 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ec8a38,
                        &UNK_10deeb380,&UNK_10deeb39c,3,FUN_107f632a0,0);
    do {
      if (puRam0000000113728678 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113728678;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113728678,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113728678 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113728678;
}



/* Entry: 107f632a0; end: 107f632ab;  */

bool FUN_107f632a0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 107f632ac; end: 107f63337; +[BackupOperationDetailedState descriptor] */

undefined * FUN_107f632ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728680 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b8d480,
                        &PTR____CFConstantStringClassReference_110ec8a58,&PTR_DAT_11324c408,
                        &PTR_DAT_11324c700,0x12,0x98,0x1c);
    func_0x00010c229040();
    puRam0000000113728680 = puVar1;
  }
  return puRam0000000113728680;
}



/* Entry: 107f63338; end: 107f633b3; +[BackupOperationDetailedState_DeleteSnaps descriptor] */

undefined * FUN_107f63338(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728688 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b8d4d0,
                        &PTR____CFConstantStringClassReference_110ec8a78,&PTR_DAT_11324c408,
                        &PTR_DAT_11324c420,1,0x10,0x1c);
    func_0x00010c228780();
    puRam0000000113728688 = puVar1;
  }
  return puRam0000000113728688;
}



/* Entry: 107f633b4; end: 107f6342f; +[BackupOperationDetailedState_HighlightSnaps descriptor] */

undefined * FUN_107f633b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728690 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b8d520,
                        &PTR____CFConstantStringClassReference_110ec8a98,&PTR_DAT_11324c408,
                        &PTR_DAT_11324c440,3,0x20,0x1c);
    func_0x00010c228780();
    puRam0000000113728690 = puVar1;
  }
  return puRam0000000113728690;
}



/* Entry: 107f63430; end: 107f634ab; +[BackupOperationDetailedState_UploadTagsOpData descriptor] */

undefined * FUN_107f63430(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728698 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b8d570,
                        &PTR____CFConstantStringClassReference_110ec8ab8,&PTR_DAT_11324c408,
                        &PTR_s_snapId_11324c4a0,3,0x18,0x1c);
    func_0x00010c228780();
    puRam0000000113728698 = puVar1;
  }
  return puRam0000000113728698;
}



/* Entry: 107f634ac; end: 107f63527; +[BackupOperationDetailedState_SnapGenerationData descriptor] */

undefined * FUN_107f634ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137286a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b8d5c0,
                        &PTR____CFConstantStringClassReference_110ec8ad8,&PTR_DAT_11324c408,
                        &PTR_DAT_11324c500,0x10,0x80,0x1c);
    func_0x00010c228780();
    puRam00000001137286a0 = puVar1;
  }
  return puRam00000001137286a0;
}



/* Entry: 107f63528; end: 107f6358f; +[SCMemoriesStoryGenFeedWithFeatures descriptor] */

void FUN_107f63528(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137286a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b8d660,
                        &PTR____CFConstantStringClassReference_110ec8af8,&PTR_DAT_11324c950,
                        &PTR_DAT_11324cc28,5,0x28,0x1c);
    puRam00000001137286a8 = puVar1;
  }
  return;
}



/* Entry: 107f63590; end: 107f635f7; +[SCMemoriesStoryGenFeed descriptor] */

void FUN_107f63590(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137286b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b8d6b0,
                        &PTR____CFConstantStringClassReference_110dab1b8,&PTR_DAT_11324c950,
                        &PTR_DAT_11324c988,2,0x18,0x1c);
    puRam00000001137286b0 = puVar1;
  }
  return;
}



/* Entry: 107f635f8; end: 107f6365f; +[SCMemoriesStoryGenStory descriptor] */

void FUN_107f635f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137286b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b8d700,
                        &PTR____CFConstantStringClassReference_110e31138,&PTR_DAT_11324c950,
                        &PTR_s_id_p_11324ca88,3,0x20,0x1c);
    puRam00000001137286b8 = puVar1;
  }
  return;
}



/* Entry: 107f63660; end: 107f636c7; +[SCMemoriesStoryGenStoryMetadata descriptor] */

void FUN_107f63660(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137286c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b8d750,
                        &PTR____CFConstantStringClassReference_110ec8b18,&PTR_DAT_11324c950,
                        &PTR_s_title_11324ccc8,0xf,0x78,0x1c);
    puRam00000001137286c0 = puVar1;
  }
  return;
}



/* Entry: 107f636c8; end: 107f63753; +[SCMemoriesStoryGenStoryThumbnail descriptor] */

undefined * FUN_107f636c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137286c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b8d7a0,
                        &PTR____CFConstantStringClassReference_110e0bab8,&PTR_DAT_11324c950,
                        &PTR_DAT_11324c9c8,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137286c8 = puVar1;
  }
  return puRam00000001137286c8;
}



/* Entry: 107f63754; end: 107f637df; +[SCMemoriesStoryGenStoryTypeMetadata descriptor] */

undefined * FUN_107f63754(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137286d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b8d7f0,
                        &PTR____CFConstantStringClassReference_110ec8b38,&PTR_DAT_11324c950,
                        &PTR_DAT_11324ca08,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137286d0 = puVar1;
  }
  return puRam00000001137286d0;
}



/* Entry: 107f637e0; end: 107f63847; +[SCMemoriesStoryGenSnapchatRecapStoryMetadata descriptor] */

void FUN_107f637e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137286d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b8d840,
                        &PTR____CFConstantStringClassReference_110ec8b58,&PTR_DAT_11324c950,
                        &PTR_DAT_11324ca48,2,0x10,0x1c);
    puRam00000001137286d8 = puVar1;
  }
  return;
}


