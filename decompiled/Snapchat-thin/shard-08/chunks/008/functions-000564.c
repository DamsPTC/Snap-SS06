/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1066bcd7c; end: 1066bcfbb;  */

void FUN_1066bcd7c(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bfe9920();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  puVar3 = *(undefined **)(param_1 + 0x20);
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfe8fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf529e0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (puVar2 == puVar5) {
    uVar6 = *(ulong *)(param_1 + 0x28);
    func_0x00010c076b20();
    puVar1 = PTR_PTR_1126af5d0;
    if ((uVar6 & 1) == 0) {
      puVar2 = PTR_PTR_1126ccf50;
      func_0x00010bfe86e0(PTR_PTR_1126ccf50);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = param_2;
      func_0x00010bfe9920(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      uVar6 = *(ulong *)(param_1 + 0x28);
      func_0x00010c076b20();
      puVar1 = PTR_PTR_1126af5d0;
      if ((uVar6 & 1) == 0) {
        puVar4 = PTR_PTR_1126ccf50;
        func_0x00010bfe86e0(PTR_PTR_1126ccf50);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0(puVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar5 = PTR_PTR_1126ccf60;
        _objc_alloc(PTR_PTR_1126ccf60);
        puVar4 = param_2;
        func_0x00010bf039a0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff2ec0(puVar5);
        func_0x00010c2619e0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
  }
  else {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066bcfbc; end: 1066bd09b;  */

void FUN_1066bcfbc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ccf58;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c14e700(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247520(param_2);
  uVar4 = param_2;
  func_0x00010c0c5220(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c01c360(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066bd09c; end: 1066bd13f; -[SCLensExplorerImageDownsamplingDataStore lensExplorerImageForURL:type:preferredSize:] */

void FUN_1066bd09c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  _objc_retain(param_5);
  func_0x00010c093000(param_1,param_2,uVar1,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be06380(param_1,param_2,param_3,param_4,uVar1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1066bd140; end: 1066bd1ff; -[SCLensExplorerImageDownsamplingDataStore lensExplorerImageForStoryItem:type:preferredSize:] */

void FUN_1066bd140(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + 8);
  _objc_retain(param_5);
  func_0x00010c092fe0(param_1,param_2,uVar2,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c1121a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010be06380(param_1,param_2,param_3,param_4,uVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1066bd200; end: 1066bd207; -[SCLensExplorerImageDownsamplingDataStore cancelOperationsForKeys:] */

void FUN_1066bd200(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2e8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelOperationsForKeys__1125a93d8);
  return;
}



/* Entry: 1066bd208; end: 1066bd20f; -[SCLensExplorerImageDownsamplingDataStore cancelAllDownloads] */

void FUN_1066bd208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelAllDownloads_1125a90d8);
  return;
}



/* Entry: 1066bd210; end: 1066bd2ef; -[SCLensExplorerImageDownsamplingDataStore _downsampleImage:imageUrl:size:] */

void FUN_1066bd210(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  _objc_retain(uVar2);
  _objc_retain(param_5);
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uStack_48 = *(undefined8 *)(param_3 + 0x20);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1066bd2f0;
  puStack_70 = &UNK_110934408;
  uVar1 = param_5;
  uStack_68 = uVar2;
  uStack_60 = param_6;
  uStack_58 = param_1;
  uStack_50 = param_2;
  func_0x00010c0b8640(param_5,param_4,&puStack_88,*(undefined8 *)(param_3 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066bd2f0; end: 1066bd497;  */

void FUN_1066bd2f0(long param_1,undefined *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  if (param_2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010c076b20();
    puVar3 = PTR_PTR_1126af5d0;
    if ((uVar1 & 1) == 0) {
      puVar4 = PTR_PTR_1126ccf50;
      func_0x00010bfe86e0(PTR_PTR_1126ccf50);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = param_2;
      func_0x00010bfe6ac0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c14e6c0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                          *(undefined8 *)(param_1 + 0x40));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      uVar1 = *(ulong *)(param_1 + 0x20);
      func_0x00010c076b20();
      puVar3 = PTR_PTR_1126af5d0;
      if ((uVar1 & 1) == 0) {
        puVar5 = PTR_PTR_1126ccf50;
        func_0x00010bfe86e0(PTR_PTR_1126ccf50);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0(puVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar2 = PTR_PTR_1126ccf58;
        _objc_alloc(PTR_PTR_1126ccf58);
        func_0x00010c247520(param_2);
        puVar5 = param_2;
        func_0x00010c0c5220(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01c360(puVar2);
        func_0x00010c2619e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
      }
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066bd498; end: 1066bd4d3; -[SCLensExplorerImageDownsamplingDataStore .cxx_destruct] */

void FUN_1066bd498(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066bd4d4; end: 1066bd57f; -[SCLensExplorerImageModel initWithImage:sourceType:mediaIdentifier:] */

undefined1 *
FUN_1066bd4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f26c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066bd580; end: 1066bd643; -[SCLensExplorerImageModel initWithCoder:] */

undefined1 * FUN_1066bd580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f26c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066bd644; end: 1066bd667; -[SCLensExplorerImageModel copyWithZone:] */

undefined8 FUN_1066bd644(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1066bd668; end: 1066bd6db; -[SCLensExplorerImageModel encodeWithCoder:] */

void FUN_1066bd668(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e593d8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e593f8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110db93d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066bd6dc; end: 1066bd73b; -[SCLensExplorerImageModel hash] */

undefined8 * FUN_1066bd6dc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    puVar4 = (undefined8 *)0x1;
  }
  else {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
      puVar4 = puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        puVar4 = (undefined8 *)puVar2[3];
        func_0x00010c0720c0(puVar4);
      }
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 1066bd73c; end: 1066bd7d3; -[SCLensExplorerImageModel isEqual:] */

undefined8 FUN_1066bd73c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c0720c0(uVar3);
      }
    }
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1066bd7d4; end: 1066bd7db; -[SCLensExplorerImageModel image] */

undefined8 FUN_1066bd7d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1066bd7dc; end: 1066bd7e3; -[SCLensExplorerImageModel source] */

undefined8 FUN_1066bd7dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1066bd7e4; end: 1066bd7eb; -[SCLensExplorerImageModel mediaIdentifier] */

undefined8 FUN_1066bd7e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1066bd7ec; end: 1066bd81b; -[SCLensExplorerImageModel .cxx_destruct] */

void FUN_1066bd7ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066bd81c; end: 1066bd917; -[SCLensExplorerImagesDataStore initWithImagesDownloader:imagesCache:lensExplorerDependencyProvider:performer:] */

undefined1 *
FUN_1066bd81c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f26d0;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066bd918; end: 1066bd9d3; -[SCLensExplorerImagesDataStore initWithImagesDownloader:imagesCache:lensExplorerDependencyProvider:] */

undefined8
FUN_1066bd918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c021520();
  func_0x00010c01d1e0(param_1,param_2,param_3,param_4,param_5,puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1066bd9d4; end: 1066bda5b; -[SCLensExplorerImagesDataStore initWithImagesDownloader:imagesCache:lensExplorerDependencyProvider:lensExplorerPerformanceLogger:performer:] */

long FUN_1066bd9d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  func_0x00010c01d1e0(param_1,param_2,param_3,param_4,param_5,param_7);
  if (param_1 != 0) {
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_6;
    _objc_release(uVar1);
  }
  _objc_release(param_6);
  return param_1;
}



/* Entry: 1066bda5c; end: 1066bdadb; -[SCLensExplorerImagesDataStore initWithImagesDownloader:imagesCache:lensExplorerDependencyProvider:lensExplorerPerformanceLogger:] */

long FUN_1066bda5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  func_0x00010c01d1a0(param_1,param_2,param_3,param_4,param_5);
  if (param_1 != 0) {
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_6;
    _objc_release(uVar1);
  }
  _objc_release(param_6);
  return param_1;
}



/* Entry: 1066bdadc; end: 1066bdd63; -[SCLensExplorerImagesDataStore lensExplorerAnimationForLensItem:preferredSize:] */

void FUN_1066bdadc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c26fac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2780e0();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_88,param_3);
  puVar3 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1066bdd64;
  puStack_98 = &UNK_110934438;
  _objc_copyWeak(auStack_90,auStack_88);
  func_0x00010c297260(puVar3);
  _objc_release(puVar3);
  lVar4 = param_5;
  func_0x00010c2810a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_5;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bfe8fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf529e0();
  _objc_release(lVar6);
  puVar3 = puVar2;
  if (lVar7 == 0) {
    func_0x00010bf43d60(puVar2);
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + 0x18);
    _objc_copyWeak(auStack_c8,auStack_88);
    _objc_retain(lVar4);
    _objc_retain(param_5);
    uStack_c0 = param_1;
    uStack_b8 = param_2;
    _objc_retain(puVar2);
    func_0x00010c0f7fc0(uVar1);
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(param_5);
    _objc_release(lVar4);
    _objc_destroyWeak(auStack_c8);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066bdd64; end: 1066bdddb;  */

void FUN_1066bdd64(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0acc00(*(undefined8 *)(param_1 + 0x28),param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066bdddc; end: 1066bdff3; -[SCLensExplorerImagesDataStore lensExplorerImageForURL:type:preferredSize:] */

void FUN_1066bdddc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c26fac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c278100();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_78,param_3);
  puVar3 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1066bdff4;
  puStack_88 = &UNK_110934468;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010c297260(puVar3);
  _objc_release(puVar3);
  puVar3 = puVar2;
  if (param_5 == 0) {
    func_0x00010bf43d60(puVar2);
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + 0x18);
    _objc_copyWeak(auStack_c0,auStack_78);
    _objc_retain(param_5);
    uStack_b8 = param_1;
    uStack_b0 = param_2;
    _objc_retain(puVar2);
    uStack_a8 = param_6;
    func_0x00010c0f7fc0(uVar1);
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_c0);
  }
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066bdff4; end: 1066be02b;  */

void FUN_1066bdff4(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0acc00(*(undefined8 *)(param_1 + 0x28),param_2,2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066be02c; end: 1066be163;  */

void FUN_1066be02c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010beec820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c092fc0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_48 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c297260(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_60);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1066be164; end: 1066be25b;  */

void FUN_1066be164(long param_1,long param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR_PTR_1126ccf50;
    func_0x00010c0da4e0(PTR_PTR_1126ccf50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar4);
    _objc_release(puVar3);
  }
  else {
    if (param_3 == (undefined *)0x0) {
      if (param_2 != 0) {
        func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
        goto LAB_1066be234;
      }
    }
    else {
      puVar3 = param_3;
      func_0x00010bf3ec40();
      puVar2 = PTR_PTR_1126ccf50;
      func_0x00010bfe6f40();
      if (puVar3 == puVar2) {
        func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
        goto LAB_1066be234;
      }
    }
    func_0x00010bf88c80(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),lVar1);
  }
LAB_1066be234:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066be25c; end: 1066be41b; -[SCLensExplorerImagesDataStore lensExplorerImageForStoryItem:type:preferredSize:] */

void FUN_1066be25c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_58,param_3);
  puVar4 = puVar1;
  if (param_5 == 0) {
    func_0x00010bf43d60(puVar1);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_5;
    func_0x00010c1121a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar5 = *(undefined8 *)(param_3 + 0x18);
    _objc_copyWeak(auStack_78,auStack_58);
    _objc_retain(lVar3);
    uStack_70 = param_1;
    uStack_68 = param_2;
    _objc_retain(puVar1);
    _objc_retain(param_5);
    uStack_60 = param_6;
    func_0x00010c0f7fc0(uVar5);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(puVar1);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_78);
    _objc_release(lVar3);
  }
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066be41c; end: 1066be54b;  */

void FUN_1066be41c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c092fc0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    uStack_58 = *(undefined8 *)(param_1 + 0x50);
    uStack_48 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c297260(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_60);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1066be54c; end: 1066be647;  */

void FUN_1066be54c(long param_1,long param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR_PTR_1126ccf50;
    func_0x00010c0da4e0(PTR_PTR_1126ccf50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar4);
    _objc_release(puVar3);
  }
  else {
    if (param_3 == (undefined *)0x0) {
      if (param_2 != 0) {
        func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
        goto LAB_1066be620;
      }
    }
    else {
      puVar3 = param_3;
      func_0x00010bf3ec40();
      puVar2 = PTR_PTR_1126ccf50;
      func_0x00010bfe6f40();
      if (puVar3 == puVar2) {
        func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
        goto LAB_1066be620;
      }
    }
    func_0x00010bf88c60(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),lVar1);
  }
LAB_1066be620:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066be648; end: 1066be72f; -[SCLensExplorerImagesDataStore cancelOperationsForKeys:] */

void FUN_1066be648(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (lVar1 = param_3, func_0x00010bf529e0(), lVar1 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1066be730; end: 1066be777;  */

void FUN_1066be730(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf2e8c0(*(undefined8 *)(lVar1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf2e2a0(*(undefined8 *)(lVar1 + 8),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066be778; end: 1066be81f; -[SCLensExplorerImagesDataStore cancelAllDownloads] */

void FUN_1066be778(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1066be820; end: 1066be853;  */

void FUN_1066be820(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf2dcc0(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066be854; end: 1066be907; -[SCLensExplorerImagesDataStore downloadImageForURL:prefferedSize:type:promise:] */

void FUN_1066be854(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x00010bf88cc0(param_1,param_2,uVar1,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2aa80(param_1,param_2,param_3,param_4,uVar1,param_5,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066be908; end: 1066bea4f; -[SCLensExplorerImagesDataStore downloadAnimationForItem:prefferedSize:promise:] */

void FUN_1066be908(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_3);
  uVar1 = *(undefined8 *)(param_3 + 8);
  func_0x00010bf88820(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c297260(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1066bea50; end: 1066bebaf;  */

void FUN_1066bea50(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126ccf50;
    func_0x00010c0da4e0(PTR_PTR_1126ccf50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar6);
    _objc_release(puVar2);
  }
  else {
    if (param_3 == 0) {
      lVar3 = param_2;
      func_0x00010bfe9920();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar3);
      if (lVar4 != 0) {
        lVar3 = param_2;
        func_0x00010bfe9920(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bf039a0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bfe8fa0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(lVar3);
        func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
        goto LAB_1066beb84;
      }
    }
    else {
      func_0x00010bf3ec40(param_3);
      func_0x00010bfe7520(PTR_PTR_1126ccf50);
    }
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
LAB_1066beb84:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066bebb0; end: 1066bec7f; -[SCLensExplorerImagesDataStore downloadImageForStoryItem:type:preferredSize:promise:] */

void FUN_1066bebb0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + 8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x00010bf88c40(param_1,param_2,uVar2,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c1121a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010be2aa80(param_1,param_2,param_3,param_4,uVar2,uVar1,param_6,param_7);
  _objc_release(param_7);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1066bec80; end: 1066bed9b; -[SCLensExplorerImagesDataStore _handleImagePromise:url:prefferedSize:type:resultPromise:] */

void FUN_1066bec80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010c297260(param_3);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066bed9c; end: 1066beebb;  */

void FUN_1066bed9c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126ccf50;
    func_0x00010c0da4e0(PTR_PTR_1126ccf50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar3);
LAB_1066bee8c:
    _objc_release(puVar2);
  }
  else {
    if (param_3 == 0) {
      if (param_2 != 0) {
        puVar2 = PTR_PTR_1126ccf58;
        _objc_alloc(PTR_PTR_1126ccf58);
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010beec820(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01c360(puVar2);
        _objc_release(uVar3);
        func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
        goto LAB_1066bee8c;
      }
    }
    else {
      func_0x00010bf3ec40(param_3);
      func_0x00010bfe7520(PTR_PTR_1126ccf50);
    }
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066beebc; end: 1066bef0f; -[SCLensExplorerImagesDataStore .cxx_destruct] */

void FUN_1066beebc(long param_1)

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



/* Entry: 1066bef10; end: 1066befb3; -[SCLensExplorerOperationTrackingImageDataStore initWithImageDataStore:operationTracker:] */

undefined1 *
FUN_1066bef10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f26d8;
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



/* Entry: 1066befb4; end: 1066befbb; -[SCLensExplorerOperationTrackingImageDataStore cancelAllDownloads] */

void FUN_1066befb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelAllDownloads_1125a90d8);
  return;
}



/* Entry: 1066befbc; end: 1066bf00b; -[SCLensExplorerOperationTrackingImageDataStore cancelOperationsForKeys:] */

void FUN_1066befbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bfafa40(uVar1,param_2,param_3);
  func_0x00010bf2e8c0(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066bf00c; end: 1066bf0c3; -[SCLensExplorerOperationTrackingImageDataStore lensExplorerAnimationForLensItem:preferredSize:] */

void FUN_1066bf00c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  _objc_retain(param_5);
  uVar2 = param_5;
  func_0x00010bf039a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0c54a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24fc20(uVar3,param_4,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_3 + 8);
  func_0x00010c092aa0(param_1,param_2,uVar2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1066bf0c4; end: 1066bf183; -[SCLensExplorerOperationTrackingImageDataStore lensExplorerImageForStoryItem:type:preferredSize:] */

void FUN_1066bf0c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  _objc_retain(param_5);
  uVar2 = param_5;
  func_0x00010c1121a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24fc20(uVar3,param_4,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_3 + 8);
  func_0x00010c092fe0(param_1,param_2,uVar2,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1066bf184; end: 1066bf22b; -[SCLensExplorerOperationTrackingImageDataStore lensExplorerImageForURL:type:preferredSize:] */

void FUN_1066bf184(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010beec820(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24fc20(uVar2,param_4,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_3 + 8);
  func_0x00010c093000(param_1,param_2,uVar1,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066bf22c; end: 1066bf25b; -[SCLensExplorerOperationTrackingImageDataStore .cxx_destruct] */

void FUN_1066bf22c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066bf25c; end: 1066bf793; +[SCLensExplorerContainerItem containerItemFromTile:] */

void FUN_1066bf25c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  ulong uVar18;
  float fVar19;
  double dVar20;
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
  _objc_retain(param_3);
  puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar10 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar2 = param_3;
  func_0x00010c084fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf52a60();
  fVar19 = (float)uVar10;
  if (uVar3 != 0) {
    lVar14 = *plStack_120;
    do {
      uVar18 = 0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(uVar2);
        }
        uVar16 = *(undefined8 *)(lStack_128 + uVar18 * 8);
        uVar4 = uVar16;
        func_0x00010c0848c0();
        puVar7 = PTR_PTR_1126ccd90;
        puVar5 = PTR_PTR_1126ccd50;
        puVar6 = PTR_PTR_1126ccc48;
        puVar17 = PTR_PTR_1126ccc38;
        iVar1 = (int)uVar4;
        if (iVar1 < 4) {
          if (iVar1 == 1) {
            func_0x00010c0974e0(uVar16);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = param_3;
            func_0x00010bfe5ea0(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c093140(puVar17,param_2,uVar16,uVar8);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar8);
            _objc_release(uVar16);
            puVar9 = PTR_PTR_1126ccd78;
            func_0x00010c094c60(PTR_PTR_1126ccd78,param_2,puVar17);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1066bf570;
          }
          if (iVar1 == 2) {
            func_0x00010bf5bb80(uVar16);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = param_3;
            func_0x00010bfe5ea0(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0930e0(puVar5,param_2,uVar16,uVar8);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar8);
            _objc_release(uVar16);
            puVar9 = PTR_PTR_1126ccd78;
            func_0x00010bf5b520(PTR_PTR_1126ccd78,param_2,puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar5;
            goto LAB_1066bf570;
          }
        }
        else {
          uVar8 = param_3;
          if (iVar1 == 4) {
            func_0x00010c2757c0(uVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe5ea0(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0931c0(puVar6,param_2,uVar16,uVar8);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            if (iVar1 == 5) {
              func_0x00010bfe1040(uVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfe5ea0(param_3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c092fa0(puVar7,param_2,uVar16,uVar8);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar8);
              _objc_release(uVar16);
              puVar9 = PTR_PTR_1126ccd78;
              func_0x00010bfe1000(PTR_PTR_1126ccd78,param_2,puVar7);
              _objc_retainAutoreleasedReturnValue();
              puVar17 = puVar7;
              goto LAB_1066bf570;
            }
            if (iVar1 != 6) goto LAB_1066bf590;
            func_0x00010c096fc0(uVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe5ea0(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c093180(puVar6,param_2,uVar16,uVar8);
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(uVar8);
          _objc_release(uVar16);
          puVar9 = PTR_PTR_1126ccd78;
          func_0x00010c25a040(PTR_PTR_1126ccd78,param_2,puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar6;
LAB_1066bf570:
          func_0x00010befa120(puVar15,param_2,puVar9);
          _objc_release(puVar9);
          _objc_release(puVar17);
        }
LAB_1066bf590:
        uVar18 = uVar18 + 1;
      } while (uVar3 != uVar18);
      uVar3 = uVar2;
      func_0x00010bf52a60(uVar2,param_2,&uStack_130,auStack_f0,0x10);
      fVar19 = (float)uVar10;
    } while (uVar3 != 0);
  }
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c130180(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010bfb1920(puVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010c1301c0(param_1,param_2,uVar2,puVar17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar17);
  _objc_release(uVar2);
  func_0x00010be8b220(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ccd70;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010bf6e6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar15;
  func_0x00010bf51e00();
  uVar8 = param_3;
  func_0x00010bfa3d00();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar11 = param_3;
  func_0x00010bf68960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3420(puVar17,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar2;
  uVar13 = uVar3;
  func_0x00010c002780();
  _objc_release(puVar17);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(puVar5);
  _objc_release(uVar18);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar10);
  _objc_release(puVar15);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(uVar12);
  _objc_retain(uVar13);
  uVar2 = param_3;
  func_0x00010bde80c0(param_3,param_2,uVar12,uVar13);
  uVar3 = param_3;
  func_0x00010be4bf20(param_3,param_2,uVar12);
  uVar18 = uVar12;
  func_0x00010c2480a0();
  if ((int)uVar18 == 0) {
    puVar15 = PTR_PTR_1126ccf40;
    func_0x00010bf6a480(PTR_PTR_1126ccf40);
  }
  else {
    puVar15 = (undefined *)(long)(int)uVar18;
  }
  uVar18 = uVar12;
  func_0x00010c0ed100();
  iVar1 = (int)uVar18;
  if (iVar1 == 1) {
LAB_1066bf83c:
    puVar17 = PTR_PTR_1126ccd88;
    func_0x00010c298de0(PTR_PTR_1126ccd88);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (iVar1 == 0) {
    func_0x00010be9bdc0(param_3,param_2,uVar13);
    puVar17 = PTR_PTR_1126ccd88;
    func_0x00010bfe4400(PTR_PTR_1126ccd88,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (iVar1 == -0x4524111) goto LAB_1066bf83c;
    puVar17 = (undefined *)0x0;
  }
  puVar6 = PTR_PTR_1126ccd80;
  _objc_alloc(PTR_PTR_1126ccd80);
  func_0x00010c0852a0(uVar12);
  dVar20 = (double)fVar19;
  uVar18 = uVar12;
  func_0x00010c2902c0(uVar12);
  uVar8 = uVar12;
  func_0x00010c2902e0(uVar12);
  uVar11 = uVar12;
  func_0x00010bfd8740();
  if ((uVar11 & 1) == 0) {
    func_0x00010c04ad80(dVar20,0,puVar6,param_2,puVar15,puVar17,uVar2,uVar18,uVar8,uVar3);
  }
  else {
    uVar11 = uVar12;
    func_0x00010c097560(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26e960();
    func_0x00010c04ad80(dVar20,(double)fVar19,puVar6,param_2,puVar15,puVar17,uVar2,uVar18,uVar8,
                        uVar3);
    _objc_release(uVar11);
  }
  _objc_release(puVar17);
  _objc_release(uVar13);
  _objc_release(uVar12);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1066bf794; end: 1066bf97b; +[SCLensExplorerContainerItem renderStrategyFromCategoryStrategy:contentItem:] */

void FUN_1066bf794(float param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  double dVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_2;
  func_0x00010bde80c0(param_2,param_3,param_4,param_5);
  uVar3 = param_2;
  func_0x00010be4bf20(param_2,param_3,param_4);
  uVar4 = param_4;
  func_0x00010c2480a0();
  if ((int)uVar4 == 0) {
    puVar8 = PTR_PTR_1126ccf40;
    func_0x00010bf6a480(PTR_PTR_1126ccf40);
  }
  else {
    puVar8 = (undefined *)(long)(int)uVar4;
  }
  uVar4 = param_4;
  func_0x00010c0ed100();
  iVar1 = (int)uVar4;
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      func_0x00010be9bdc0(param_2,param_3,param_5);
      puVar9 = PTR_PTR_1126ccd88;
      func_0x00010bfe4400(PTR_PTR_1126ccd88,param_3,param_2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1066bf884;
    }
    if (iVar1 != -0x4524111) {
      puVar9 = (undefined *)0x0;
      goto LAB_1066bf884;
    }
  }
  puVar9 = PTR_PTR_1126ccd88;
  func_0x00010c298de0(PTR_PTR_1126ccd88);
  _objc_retainAutoreleasedReturnValue();
LAB_1066bf884:
  puVar5 = PTR_PTR_1126ccd80;
  _objc_alloc(PTR_PTR_1126ccd80);
  func_0x00010c0852a0(param_4);
  dVar10 = (double)param_1;
  uVar4 = param_4;
  func_0x00010c2902c0(param_4);
  uVar6 = param_4;
  func_0x00010c2902e0(param_4);
  uVar7 = param_4;
  func_0x00010bfd8740();
  if ((uVar7 & 1) == 0) {
    func_0x00010c04ad80(dVar10,0,puVar5,param_3,puVar8,puVar9,uVar2,uVar4,uVar6,uVar3);
  }
  else {
    uVar7 = param_4;
    func_0x00010c097560(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26e960();
    func_0x00010c04ad80(dVar10,(double)param_1,puVar5,param_3,puVar8,puVar9,uVar2,uVar4,uVar6,uVar3)
    ;
    _objc_release(uVar7);
  }
  _objc_release(puVar9);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1066bf97c; end: 1066bfa3f; +[SCLensExplorerContainerItem _lensTileLayoutFromStrategy:] */

undefined8 FUN_1066bf97c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bfd8740();
  if ((int)uVar3 != 0) {
    uVar3 = param_3;
    func_0x00010c097560();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c097580();
    _objc_release(uVar3);
    if ((int)uVar1 == 1) {
      uVar3 = param_3;
      func_0x00010c097560();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010c1062a0();
      _objc_release(uVar3);
      iVar2 = (int)uVar1;
      if ((iVar2 != -0x4524111) && (iVar2 != 0)) {
        if (iVar2 == 2) {
          uVar3 = 2;
        }
        else {
          uVar3 = 1;
        }
        goto LAB_1066bfa1c;
      }
    }
  }
  uVar3 = 0;
LAB_1066bfa1c:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1066bfa40; end: 1066bfb0f; +[SCLensExplorerContainerItem _scrollBehaviourForContentItem:] */

undefined8 FUN_1066bfa40(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_38 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    uStack_28 = 0;
    func_0x00010c0be980(param_3);
    uVar1 = puStack_38[3];
    __Block_object_dispose(&uStack_40,8);
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1066bfb10; end: 1066bfb23;  */

void FUN_1066bfb10(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1066bfb24; end: 1066bfc3f; +[SCLensExplorerContainerItem _contentTypeFromCategoryStrategy:contentItem:] */

undefined8 FUN_1066bfb24(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar3 = param_3;
  func_0x00010c27dd80();
  uVar2 = 0;
  iVar1 = (int)uVar3;
  if ((iVar1 != -0x4524111) && (iVar1 != 0)) {
    if (iVar1 != 1) goto LAB_1066bfb9c;
    uVar2 = 1;
  }
  puStack_48[3] = uVar2;
LAB_1066bfb9c:
  if (param_4 != 0) {
    func_0x00010c0be980(param_4);
  }
  uVar3 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1066bfc40; end: 1066bfc53;  */

void FUN_1066bfc40(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 2;
  return;
}



/* Entry: 1066bfc54; end: 1066bfcdf; +[SCLensExplorerContainerItem _remoteStateForContainerTile:] */

void FUN_1066bfc54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ccc80;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c25c6c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfd9280(param_3);
  _objc_release(param_3);
  func_0x00010c04e760(puVar1,param_2,uVar2,0,uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066bfce0; end: 1066bfedf; +[SCLensExplorerHeroItem lensExplorerHeroItemWithHeroTile:containerId:] */

void FUN_1066bfce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ccd40;
  _objc_retain(param_3);
  func_0x00010c0b3b20(puVar1,param_2,3,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cce78;
  func_0x00010c0932c0(PTR_PTR_1126cce78,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aad20();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar4 = param_3;
  func_0x00010bf8d2c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126ccd90;
  _objc_alloc(PTR_PTR_1126ccd90);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = param_3;
  func_0x00010bfe5ea0(param_3);
  func_0x00010c0df7c0(puVar1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar4 = param_3;
  func_0x00010bf4db80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3420(puVar8,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c08cda0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c01a5a0(puVar6,param_2,puVar7,puVar8,uVar9,uVar5,puVar3);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(uVar4);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1066bfee0; end: 1066bfeef;  */

void FUN_1066bfee0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c092f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ccd98,PTR_s_lensExplorerHeroItemLayoutElemen_1126025f0,param_2);
  return;
}



/* Entry: 1066bfef0; end: 1066bffe7; +[SCLensExplorerHeroItemLayoutElement lensExplorerHeroItemLayoutElementWithHeroTileElement:] */

void FUN_1066bfef0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf4ce20();
    lVar2 = param_3;
    if ((int)lVar1 == 3) {
      func_0x00010c26bbe0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be35200(param_1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if ((int)lVar1 != 2) goto LAB_1066bffc8;
      func_0x00010bfe7620(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be351e0(param_1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar2);
    if (param_1 != 0) {
      puVar3 = PTR_PTR_1126ccd98;
      _objc_alloc(PTR_PTR_1126ccd98);
      lVar1 = param_3;
      func_0x00010bf8d1c0(param_3);
      func_0x00010c00f180(puVar3,param_2,(long)(int)lVar1,param_1);
      _objc_release(param_1);
      goto LAB_1066bffcc;
    }
  }
LAB_1066bffc8:
  puVar3 = (undefined *)0x0;
LAB_1066bffcc:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066bffe8; end: 1066c0123; +[SCLensExplorerHeroItemLayoutElement _heroItemLayoutElementTypeFromImageElement:] */

void FUN_1066bffe8(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
    goto LAB_1066c0100;
  }
  puVar2 = param_3;
  func_0x00010bfe8360();
  puVar4 = (undefined *)0x0;
  iVar1 = (int)puVar2;
  if (iVar1 == 0) goto LAB_1066c0100;
  if (iVar1 == 2) {
    puVar2 = param_3;
    func_0x00010bfe8fc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar2);
    if ((int)puVar4 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
      func_0x00010c04e820();
      puVar4 = PTR_PTR_1126ccda0;
      func_0x00010c12a1c0(PTR_PTR_1126ccda0,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      goto LAB_1066c00d8;
    }
    puVar4 = (undefined *)0x0;
  }
  else {
    if (iVar1 == 1) {
      puVar4 = param_3;
      func_0x00010c106260(param_3);
      func_0x00010be76c40(param_1,param_2,puVar4);
      puVar4 = PTR_PTR_1126ccda0;
      func_0x00010c106280(PTR_PTR_1126ccda0,param_2,param_1);
      _objc_retainAutoreleasedReturnValue();
    }
LAB_1066c00d8:
    puVar3 = PTR_PTR_1126ccda8;
    func_0x00010bfe95a0(PTR_PTR_1126ccda8,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    puVar4 = puVar3;
  }
  _objc_release(puVar2);
LAB_1066c0100:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066c0124; end: 1066c01db; +[SCLensExplorerHeroItemLayoutElement _heroItemLayoutElementTypeFromTextElement:] */

void FUN_1066c0124(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bfe5a60(param_3);
    func_0x00010be76c40(param_1,param_2,lVar1);
    puVar2 = PTR_PTR_1126ccda8;
    lVar1 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26cd60(puVar2,param_2,lVar1,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066c01dc; end: 1066c01e7; +[SCLensExplorerHeroItemLayoutElement _predefinedIconFromIcon:] */

bool FUN_1066c01dc(undefined8 param_1,undefined8 param_2,int param_3)

{
  return param_3 == 1;
}



/* Entry: 1066c01e8; end: 1066c042b; +[SCLensExplorerLensFeedItem feedItemWithCategoryItem:] */

void FUN_1066c01e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c0848c0();
  puVar6 = PTR_PTR_1126ccd90;
  puVar3 = PTR_PTR_1126ccd70;
  puVar4 = PTR_PTR_1126ccd50;
  puVar5 = PTR_PTR_1126ccc48;
  puVar7 = PTR_PTR_1126ccc38;
  puVar8 = (undefined *)0x0;
  iVar1 = (int)uVar2;
  if (iVar1 < 4) {
    if (iVar1 == 1) {
      uVar2 = param_3;
      func_0x00010c0974e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c093120(puVar7,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar8 = PTR_PTR_1126ccc20;
      func_0x00010c094c60(PTR_PTR_1126ccc20,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar1 != 2) goto LAB_1066c0408;
      uVar2 = param_3;
      func_0x00010bf5bb80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0930c0(puVar4,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar8 = PTR_PTR_1126ccc20;
      func_0x00010bf5b520(PTR_PTR_1126ccc20,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
    }
  }
  else if (iVar1 == 7) {
    uVar2 = param_3;
    func_0x00010c25b640(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c093160(puVar5,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar8 = PTR_PTR_1126ccc20;
    func_0x00010c25a040(PTR_PTR_1126ccc20,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
  }
  else if (iVar1 == 6) {
    uVar2 = param_3;
    func_0x00010bfe1040(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c092fa0(puVar6,param_2,uVar2,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar8 = PTR_PTR_1126ccc20;
    func_0x00010bfe1000(PTR_PTR_1126ccc20,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
  }
  else {
    if (iVar1 != 4) goto LAB_1066c0408;
    uVar2 = param_3;
    func_0x00010bf4b080(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4ae80(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar7 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR_PTR_1126ccc20;
      func_0x00010bf4aea0(PTR_PTR_1126ccc20,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(puVar7);
LAB_1066c0408:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1066c042c; end: 1066c056b; +[SCLensExplorerLensFeedItem lensFeedItemFromContainerContentItem:] */

void FUN_1066c042c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1066c056c;
  uStack_30 = 0x1066c057c;
  uStack_28 = 0;
  func_0x00010c0be980(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066c056c; end: 1066c0583;  */

void FUN_1066c056c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1066c0584; end: 1066c06a3;  */

void FUN_1066c0584(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ccc20;
  func_0x00010c094c60(PTR_PTR_1126ccc20,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1066c06a4; end: 1066c0777; -[SCLensExplorerLensFeedItem mapToStoryItem] */

void FUN_1066c06a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1066c0778;
  uStack_30 = 0x1066c0788;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1066c0790;
  puStack_60 = &UNK_1109345f8;
  puStack_48 = puStack_58;
  func_0x00010c0be960(param_1,param_2,0,&puStack_78,0,0,0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066c0778; end: 1066c078f;  */

void FUN_1066c0778(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1066c0790; end: 1066c07c7;  */

void FUN_1066c0790(long param_1,undefined8 param_2)

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



/* Entry: 1066c07c8; end: 1066c089b; -[SCLensExplorerLensFeedItem asLensItem] */

void FUN_1066c07c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1066c0778;
  uStack_30 = 0x1066c0788;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1066c089c;
  puStack_60 = &UNK_1109345c8;
  puStack_48 = puStack_58;
  func_0x00010c0be960(param_1,param_2,&puStack_78,0,0,0,0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066c089c; end: 1066c08d3;  */

void FUN_1066c089c(long param_1,undefined8 param_2)

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



/* Entry: 1066c08d4; end: 1066c0b17; -[SCLensExplorerLensItem withLoggingInfo:] */

void FUN_1066c08d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
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
  
  puVar1 = PTR_PTR_1126ccc38;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010c2810a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c095760();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf68960();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c26e0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c0900a0();
  uVar10 = param_1;
  func_0x00010c07f200();
  uVar11 = param_1;
  func_0x00010c29c5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010bf15220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07d340();
  uVar13 = param_1;
  func_0x00010bfd96a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  func_0x00010bf48fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbe3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0591c0(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,param_3,uVar9,
                      (char)uVar10);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066c0b18; end: 1066c102f; +[SCLensExplorerLensItem lensExplorerItemWithLensTile:] */

void FUN_1066c0b18(undefined *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  
  _objc_retain(param_3);
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 == 0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c094540(param_3);
    func_0x00010c0df7c0(puVar18,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar18;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    uVar1 = param_3;
    func_0x00010c095fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    uVar3 = uVar1;
    func_0x00010bfe5b40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3420(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
    uVar3 = uVar1;
    func_0x00010c26d760(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c26e0a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3420(puVar6,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bfe8b20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bdc3060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c26d760(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bfe8b20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010c0ddf20();
    puVar18 = param_1;
    func_0x00010be377a0(param_1,param_2,uVar7,(long)(int)uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar3);
    puVar9 = puVar18;
    func_0x00010bf529e0();
    puVar10 = puVar18;
    if (puVar9 != (undefined *)0x0) {
      if (puVar6 == (undefined *)0x0) {
        puVar6 = puVar18;
        func_0x00010bfb1920(puVar18);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar9 = puVar18;
      func_0x00010bf529e0(puVar18);
      func_0x00010c25e980(puVar18,param_2,1,puVar9 + -1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar18);
    }
    uVar3 = uVar1;
    func_0x00010c26d760(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bfe8b20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bfb6d60();
    _objc_release(uVar5);
    _objc_release(uVar3);
    puVar11 = PTR_PTR_1126ccd38;
    _objc_alloc();
    func_0x00010c059200((double)(int)uVar8 / 1000.0);
    puVar9 = PTR_PTR_1126ccd30;
    uVar3 = param_3;
    func_0x00010bf5b280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c094c00(puVar9,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar12 = PTR_PTR_1126ccd40;
    uVar3 = param_3;
    func_0x00010bfdae00();
    if ((uVar3 & 1) == 0) {
      func_0x00010c0b3b20(puVar12,param_2,4,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar3 = param_3;
      func_0x00010c11fb20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b3b20(puVar12,param_2,4,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
    }
    puVar13 = PTR_PTR_1126cce78;
    func_0x00010c0932c0(PTR_PTR_1126cce78,param_2,puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2880();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar18 = PTR_PTR_1126ccc38;
    _objc_alloc();
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar3 = param_3;
    func_0x00010c094540(param_3);
    func_0x00010c0df7c0(puVar14,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c095760(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar13;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c0900a0(param_3);
    func_0x00010be4a460(param_1,param_2,uVar5);
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar5 = param_3;
    func_0x00010c29c5c0(param_3);
    func_0x00010c0df7c0(puVar17,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07d340();
    func_0x00010c0591c0(puVar18,param_2,puVar15,uVar3,0,puVar4,puVar6,puVar9,puVar11,puVar16,param_1
                        ,0);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(uVar3);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar9);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 1066c1030; end: 1066c111f; +[SCLensExplorerLensItem lensExplorerItemWithLensTile:containerId:] */

void FUN_1066c1030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  func_0x00010c093120(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cce78;
  uVar1 = param_1;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0932c0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c2aad20(puVar2,param_2,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2b3180(param_1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066c1120; end: 1066c1867; +[SCLensExplorerLensItem lensExplorerItemWithLens:] */

void FUN_1066c1120(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puStack_a0;
  undefined *puStack_98;
  
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    puVar22 = (undefined *)0x0;
    goto LAB_1066c1838;
  }
  puVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar22 = param_3;
  func_0x00010bfe5b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3420(puVar2,param_2,puVar22);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  puVar22 = param_3;
  func_0x00010c095fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar23 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (puVar22 == (undefined *)0x0) {
    puStack_98 = (undefined *)0x0;
    puVar23 = (undefined *)0x0;
  }
  else {
    puVar22 = param_3;
    func_0x00010c095fe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar22;
    func_0x00010c26e500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3420(puVar23,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar22);
    puVar22 = param_3;
    func_0x00010c095fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar22;
    func_0x00010c28f800();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puStack_98 = (undefined *)0x0;
    }
    else {
      puVar4 = param_3;
      func_0x00010c095fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c15e6c0();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar22);
      if ((long)puVar5 < 1) {
        puStack_98 = (undefined *)0x0;
        goto LAB_1066c13f8;
      }
      puVar22 = param_3;
      func_0x00010c095fe0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar22;
      func_0x00010c28f800();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_3;
      func_0x00010c095fe0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c15e6c0();
      func_0x00010be377a0(param_1,param_2,puVar3,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar22);
      puVar3 = param_1;
      func_0x00010bf529e0();
      puVar22 = param_1;
      if (puVar3 != (undefined *)0x0) {
        if (puVar23 == (undefined *)0x0) {
          puVar23 = param_1;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar3 = param_1;
        func_0x00010bf529e0(param_1);
        func_0x00010c25e980(param_1,param_2,1,puVar3 + -1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_1);
      }
      puVar3 = param_3;
      func_0x00010c095fe0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c15e5c0();
      _objc_release(puVar3);
      puStack_98 = PTR_PTR_1126ccd38;
      _objc_alloc();
      puVar3 = param_3;
      func_0x00010c095fe0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c28f800();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c059200((double)(long)puVar4 / 1000.0,puStack_98,param_2,puVar1,puVar5,puVar22);
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
    _objc_release(puVar22);
  }
LAB_1066c13f8:
  puVar22 = param_3;
  func_0x00010bf43020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar22 == (undefined *)0x0) {
    puStack_a0 = (undefined *)0x0;
  }
  else {
    puStack_a0 = PTR_PTR_1126ccd30;
    _objc_alloc();
    puVar22 = param_3;
    func_0x00010bf43020();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar22;
    func_0x00010bf0ea80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010bf43020();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c092080();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_3;
    func_0x00010bf43020();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c092080();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c291440();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_3;
    func_0x00010bf43020();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c092080();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c2936e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_3;
    func_0x00010bf43020();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c092080();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010c078fa0();
    puVar16 = param_3;
    func_0x00010bf43020();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010c092080();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010c2427a0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = param_3;
    func_0x00010bf43020();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    func_0x00010c092080();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    func_0x00010c242800();
    func_0x00010c05c6e0(puStack_a0,param_2,puVar3,puVar6,puVar9,puVar12,(ulong)puVar15 & 0xffffffff,
                        0,puVar18,(ulong)puVar21 & 0xff);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar22);
  }
  puVar3 = PTR_PTR_1126ccd40;
  _objc_alloc();
  puVar22 = param_3;
  func_0x00010c2813a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar22;
  func_0x00010c11fae0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_3;
  func_0x00010c2813a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c11fa40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01d7e0(puVar3,param_2,0,0,puVar4,puVar6,puVar1,4,0);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar22);
  puVar4 = param_3;
  func_0x00010c0953c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar5 = (undefined *)0x0;
  if (puVar4 != (undefined *)0x0) {
    puVar4 = param_3;
    func_0x00010c0953c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c29c5c0();
    func_0x00010c0df780(puVar22,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar5 = puVar22;
  }
  puVar22 = PTR_PTR_1126ccc38;
  _objc_alloc(PTR_PTR_1126ccc38);
  puVar4 = param_3;
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_3;
  func_0x00010c07f200();
  puVar7 = param_3;
  func_0x00010c0953c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf15220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07eda0();
  func_0x00010c0591c0(puVar22,param_2,puVar1,puVar4,0,puVar2,puVar23,puStack_a0,puStack_98,puVar3,0,
                      (char)puVar6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puStack_a0);
  _objc_release(puStack_98);
  _objc_release(puVar23);
  _objc_release(puVar2);
  _objc_release(puVar1);
LAB_1066c1838:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return;
}



/* Entry: 1066c1868; end: 1066c1953; +[SCLensExplorerLensItem _imageURLsFromPattern:numberOfItems:] */

void FUN_1066c1868(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (param_4 != 0) {
    lVar4 = 0;
    do {
      puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820(puVar2,param_2,puVar3);
      _objc_release(puVar3);
      func_0x00010befa120(puVar1,param_2,puVar2);
      _objc_release(puVar2);
      lVar4 = lVar4 + 1;
    } while (param_4 != lVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066c1954; end: 1066c196b; +[SCLensExplorerLensItem _lensAttributionFromData:] */

undefined8 FUN_1066c1954(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = 0;
  }
  if (param_3 == 1) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1066c196c; end: 1066c1973; -[SCLensExplorerLensItem mapToLensWithCategoryId:] */

void FUN_1066c196c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ba1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_mapToLensWithCategoryId_pickedLe_11260c288,param_3,0);
  return;
}



/* Entry: 1066c1974; end: 1066c1b3b; -[SCLensExplorerLensItem mapToLensWithCategoryId:pickedLensSource:] */

void FUN_1066c1974(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uStack_68;
  
  if (param_3 == 0) {
    uStack_68 = (undefined *)0x0;
  }
  else {
    uStack_68 = PTR_PTR_1126ccf68;
    func_0x00010c093a80();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar11 = PTR_PTR_1126ae6a8;
  uVar1 = param_1;
  func_0x00010c2810a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c095760(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf5b080(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c292e20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c0b3ae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c11fc00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c0b3ae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c11fc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07d340();
  func_0x00010c0fdae0(puVar11,param_2,uVar1,uVar3,uVar4,uVar6,uVar8,uVar10,(char)param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1066c1b3c; end: 1066c1c7f; +[SCLensExplorerLensItemCreator lensItemCreatorFromCretorMetadata:] */

void FUN_1066c1b3c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  puVar1 = PTR_PTR_1126ccd30;
  puVar9 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    lVar2 = param_3;
    func_0x00010bf5b580(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf5b440(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf1acc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c117080(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c078fa0(param_3);
    lVar7 = param_3;
    func_0x00010c242860(param_3);
    lVar8 = param_3;
    func_0x00010c242880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c05c6e0(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar6,(int)lVar7 == 2,lVar8,0);
    _objc_release(lVar8);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar9 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1066c1c80; end: 1066c1d5b; +[SCLensExplorerLensItemLoggingInfo loggingInfoWithItemType:rankingInfo:] */

void FUN_1066c1c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cce78;
  _objc_opt_new(PTR_PTR_1126cce78);
  func_0x00010c2b1b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_4 != 0) {
    lVar2 = param_4;
    func_0x00010c135700(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b6780(puVar1,param_2,lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010c278f20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b67a0(puVar1,param_2,lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066c1d5c; end: 1066c1d8b; -[SCLensExplorerLensItemLoggingInfo globalIndex] */

long FUN_1066c1d5c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c156040();
  func_0x00010bfec9e0(param_1);
  return param_1 + lVar1;
}



/* Entry: 1066c1d8c; end: 1066c1f73; +[SCLensExplorerResponseFeedModel feedModelFromContainer:feedActivationAction:] */

void FUN_1066c1d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  func_0x00010bfa3d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80(puVar8,param_2,uVar1);
  _objc_release(uVar1);
  if ((int)puVar8 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c084fc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126ccdf8;
    uVar1 = param_3;
    func_0x00010bfa3d00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ea80(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar8 = PTR_PTR_1126ccc88;
    _objc_alloc(PTR_PTR_1126ccc88);
    uVar1 = param_3;
    func_0x00010bfa3d00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0d4f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c0d4f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c12a440(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010c130180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c012580(puVar8,param_2,uVar1,uVar4,uVar5,puVar3,uVar2,uVar6,uVar7,0);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1066c1f74; end: 1066c1f83;  */

void FUN_1066c1f74(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c093ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ccc20,PTR_s_lensFeedItemFromContainerContent_1126029c0,param_2);
  return;
}



/* Entry: 1066c1f84; end: 1066c218b; -[SCLensExplorerResponseFeedModel customDebugDescription] */

void FUN_1066c1f84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0();
  uVar2 = param_1;
  func_0x00010bfa3d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e59438);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e59458);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c260ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e59478);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e59498);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c12a440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e594b8);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c130180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e594d8);
  _objc_release(uVar2);
  func_0x00010c070480();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e594f8);
  func_0x00010bfa3660();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e59518);
  func_0x00010bfe5be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e59538);
  _objc_release(param_1);
  func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e59558);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066c218c; end: 1066c23df; +[SCLensExplorerStoryItem lensExplorerItemWithTopicTile:] */

void FUN_1066c218c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126ccd40;
  puVar5 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010c0b3b20(puVar1,param_2,5,0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126ccd48;
    lVar2 = param_3;
    func_0x00010bfe5ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0d4f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    lVar4 = param_3;
    func_0x00010c094340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar5,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126ccd30;
    lVar6 = param_3;
    func_0x00010bf5b280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c094c00(puVar7,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c097740(puVar8,param_2,lVar2,lVar3,puVar5,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(lVar6);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar5 = PTR_PTR_1126ccc48;
    _objc_alloc(PTR_PTR_1126ccc48);
    lVar2 = param_3;
    func_0x00010bfe5ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
    lVar3 = param_3;
    func_0x00010c110360(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar7,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c111400(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c1113e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_3;
    func_0x00010c0fe440(param_3);
    _objc_release(param_3);
    func_0x00010c01ffc0(puVar5,param_2,lVar2,puVar7,lVar4,lVar6,lVar9,puVar8,puVar1);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(puVar7);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(puVar8);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1066c23e0; end: 1066c2503; +[SCLensExplorerStoryItem lensExplorerItemWithTopicTile:containerId:] */

void FUN_1066c23e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  func_0x00010c0931a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cce78;
  uVar1 = param_1;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0932c0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c2aad20(puVar2,param_2,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ccea8;
  func_0x00010c093720(PTR_PTR_1126ccea8,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3180(puVar3,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066c2504; end: 1066c26ab; +[SCLensExplorerStoryItem lensExplorerItemWithStoryTile:] */

void FUN_1066c2504(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126ccd40;
  puVar4 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010c0b3b20(puVar1,param_2,7,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ccd48;
    lVar2 = param_3;
    func_0x00010bfe5ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25bba0(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar4 = PTR_PTR_1126ccc48;
    _objc_alloc(PTR_PTR_1126ccc48);
    lVar2 = param_3;
    func_0x00010bfe5ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
    lVar5 = param_3;
    func_0x00010c110360(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar6,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010c111400(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x00010c1113e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_3;
    func_0x00010c29c5c0(param_3);
    _objc_release(param_3);
    func_0x00010c01ffc0(puVar4,param_2,lVar2,puVar6,lVar7,lVar8,lVar9,puVar3,puVar1);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066c26ac; end: 1066c27cf; +[SCLensExplorerStoryItem lensExplorerItemWithStoryTile:containerId:] */

void FUN_1066c26ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  func_0x00010c093160(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cce78;
  uVar1 = param_1;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0932c0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c2aad20(puVar2,param_2,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ccea8;
  func_0x00010c093720(PTR_PTR_1126ccea8,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3180(puVar3,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066c27d0; end: 1066c2843; -[SCLensExplorerLensCellViewModelDataProviderConfigurationFactory initWithLStudySettingsProvider:] */

undefined1 * FUN_1066c27d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f26e0;
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



/* Entry: 1066c2844; end: 1066c28fb; -[SCLensExplorerLensCellViewModelDataProviderConfigurationFactory configurationWithSectionId:minVisibleItemsCount:cellType:creatorPageEnabled:infoCardEnabled:viewCountEnabled:prefferedCellSize:lensNameEnabled:] */

void FUN_1066c2844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ccf70;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c02c120(param_1,param_2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066c28fc; end: 1066c2907; -[SCLensExplorerLensCellViewModelDataProviderConfigurationFactory .cxx_destruct] */

void FUN_1066c28fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066c2908; end: 1066c2a4f; -[SCLensExplorerLensFeedItem identifier] */

void FUN_1066c2908(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_f8 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1066c2a50;
  uStack_30 = 0x1066c2a60;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1066c2a68;
  puStack_60 = &UNK_1109345c8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1066c2aa8;
  puStack_88 = &UNK_1109345f8;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x1066c2ae8;
  puStack_b0 = &UNK_110934528;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x1066c2b28;
  puStack_d8 = &UNK_110933448;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x1066c2b68;
  puStack_100 = &UNK_110934558;
  puStack_d0 = puStack_f8;
  puStack_a8 = puStack_f8;
  puStack_80 = puStack_f8;
  puStack_58 = puStack_f8;
  puStack_48 = puStack_f8;
  func_0x00010c0be960(param_1,param_2,&puStack_78,&puStack_a0,&puStack_c8,&puStack_f0,&puStack_118);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066c2a50; end: 1066c2a67;  */

void FUN_1066c2a50(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1066c2a68; end: 1066c2ba7;  */

void FUN_1066c2a68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066c2ba8; end: 1066c2c57; -[SCLensExplorerLensFeedItem isContainer] */

undefined1 FUN_1066c2ba8(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1066c2c58;
  puStack_50 = &UNK_110933448;
  puStack_38 = puStack_48;
  func_0x00010c0be960(param_1,param_2,0,0,0,&puStack_68,0);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1066c2c58; end: 1066c2c6b;  */

void FUN_1066c2c58(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1066c2c6c; end: 1066c2c6f; -[SCLensExplorerLensItem identifier] */

void FUN_1066c2c6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2810b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_unlockableId_11267de50);
  return;
}


