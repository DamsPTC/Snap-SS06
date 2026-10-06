/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f45e68; end: 107f45e6f; -[SCGalleryTagsDataModel locationClusterName] */

undefined8 FUN_107f45e68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107f45e70; end: 107f45e77; -[SCGalleryTagsDataModel caption] */

undefined8 FUN_107f45e70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107f45e78; end: 107f45e7f; -[SCGalleryTagsDataModel tinyClipCaptionToConfidenceMapArray] */

undefined8 FUN_107f45e78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107f45e80; end: 107f45e87; -[SCGalleryTagsDataModel tinyClipEmbeddings] */

undefined8 FUN_107f45e80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107f45e88; end: 107f45e8f; -[SCGalleryTagsDataModel tinyClipModelVersion] */

undefined8 FUN_107f45e88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107f45e90; end: 107f45f1f; -[SCGalleryTagsDataModel .cxx_destruct] */

void FUN_107f45e90(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107f45f20; end: 107f460b3;  */

void FUN_107f45f20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb6e0(puVar1);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c177fe0(puVar1);
    _objc_retain(puVar1);
    _objc_release(param_1);
    puVar2 = puVar1;
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0c0800(param_2);
  return;
}



/* Entry: 107f460b4; end: 107f4612f;  */

void FUN_107f460b4(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107f46130;
  puStack_20 = &UNK_11088b6c8;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x107f4613c;
  puStack_48 = &UNK_110849810;
  uStack_18 = uStack_40;
  func_0x00010c0c0800(param_2,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 107f46130; end: 107f4614f;  */

void FUN_107f46130(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbb710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_fulfillWithSuccessValue__1125cc768,param_2);
  return;
}



/* Entry: 107f46150; end: 107f46317; -[SCMemoriesVisualTagAnalyzer initWithModelKey:modelProvider:applicationLifecycleEvents:] */

undefined1 *
FUN_107f46150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126fbb98;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release();
    func_0x000108ec1b10();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d8710;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    *(undefined8 *)((long)puVar1 + 0x40) = 0;
    func_0x00010bdff1c0(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f46318; end: 107f46333; -[SCMemoriesVisualTagAnalyzer isReady] */

bool FUN_107f46318(int param_1)

{
  func_0x00010c298be0();
  return param_1 != 0;
}



/* Entry: 107f46334; end: 107f4640b; -[SCMemoriesVisualTagAnalyzer version] */

ulong FUN_107f46334(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c291940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar2 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  uVar3 = uVar2;
  func_0x00010c067ec0(uVar2);
  _objc_release(uVar2);
  return uVar3;
}



/* Entry: 107f4640c; end: 107f4655f; -[SCMemoriesVisualTagAnalyzer classify:] */

void FUN_107f4640c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_107f46560;
    uStack_40 = 0x107f46570;
    uStack_38 = 0;
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar2);
    uVar2 = puStack_58[5];
    _objc_retain(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f46560; end: 107f46577;  */

void FUN_107f46560(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f46578; end: 107f4662b;  */

void FUN_107f46578(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  if (param_1 - *(double *)(*(long *)(param_2 + 0x20) + 0x40) <= 300.0) {
    lVar3 = *(long *)(*(long *)(param_2 + 0x30) + 8);
    lVar5 = *(long *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = 0;
  }
  else {
    lVar5 = param_2 + 0x38;
    _objc_loadWeakRetained();
    lVar3 = lVar5;
    func_0x00010bddeda0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_2 + 0x30) + 8);
    uVar2 = *(undefined8 *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = lVar3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 107f4662c; end: 107f4677b; -[SCMemoriesVisualTagAnalyzer classifyWithoutMemoryCheck:] */

void FUN_107f4662c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_107f46560;
    uStack_40 = 0x107f46570;
    uStack_38 = 0;
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar2);
    uVar2 = puStack_58[5];
    _objc_retain(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f4677c; end: 107f467cf;  */

void FUN_107f4677c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bddeda0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f467d0; end: 107f468c7; -[SCMemoriesVisualTagAnalyzer _classify:] */

void FUN_107f467d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bdfb960(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      lVar2 = param_1;
      func_0x00010bdfb9c0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        puVar4 = PTR_PTR_1126d8638;
        _objc_alloc(PTR_PTR_1126d8638);
        lVar3 = lVar1;
        func_0x00010bf09f80(lVar1,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c298be0(param_1);
        func_0x00010c03fe60(puVar4,param_2,lVar3,param_1);
        _objc_release(lVar3);
      }
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f468c8; end: 107f46c07; -[SCMemoriesVisualTagAnalyzer _detectContentTagsWithImagesAsync:] */

void FUN_107f468c8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d0160();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf04b00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfe70c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010be79ae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = auStack_58;
    _objc_initWeak(puVar6,param_1);
    puStack_80 = &uStack_88;
    uStack_88 = 0;
    uStack_78 = 0x3032000000;
    pcStack_70 = FUN_107f46560;
    uStack_68 = 0x107f46570;
    uStack_60 = 0;
    puStack_b0 = &uStack_b8;
    uStack_b8 = 0;
    uStack_a8 = 0x3032000000;
    pcStack_a0 = FUN_107f46560;
    uStack_98 = 0x107f46570;
    uStack_90 = 0;
    _dispatch_group_create();
    _dispatch_group_enter();
    uVar7 = param_3;
    func_0x00010bf529e0();
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    if (uVar7 < 2) {
      func_0x00010c11de00(uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar6);
      _objc_copyWeak(auStack_100,auStack_58);
      func_0x00010c106480(lVar5);
      _objc_release(uVar8);
      _objc_destroyWeak(auStack_100);
      puVar9 = puVar6;
    }
    else {
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f0 = 0xc2000000;
      pcStack_e8 = FUN_107f46c08;
      puStack_e0 = &UNK_110a14348;
      puStack_d0 = &uStack_88;
      _objc_retain(puVar6);
      puStack_c8 = &uStack_b8;
      puStack_d8 = puVar6;
      _objc_copyWeak(auStack_c0,auStack_58);
      func_0x00010c106440(lVar5);
      _objc_release(uVar8);
      _objc_destroyWeak(auStack_c0);
      puVar9 = puStack_d8;
    }
    _objc_release(puVar9);
    _dispatch_group_wait(puVar6,0xffffffffffffffff);
    if (puStack_80[5] == 0) {
      uVar8 = puStack_b0[5];
      _objc_retain(uVar8);
    }
    else {
      uVar8 = 0;
    }
    _objc_release(puVar6);
    __Block_object_dispose(&uStack_b8,8);
    _objc_release(uStack_90);
    __Block_object_dispose(&uStack_88,8);
    _objc_release(uStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar2);
  }
  _objc_release(lVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 107f46c08; end: 107f46d8f;  */

void FUN_107f46c08(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar3 = param_1 + 0x38;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010bdded60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = lVar4;
    _objc_release(uVar1);
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(param_3);
    lVar3 = *(long *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = param_3;
  }
  _objc_release(lVar3);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f46d90; end: 107f4706f; -[SCMemoriesVisualTagAnalyzer _detectContentTagsWithImagesSync:] */

void FUN_107f46d90(ulong param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c0d0160();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf04b00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfe70c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar1);
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar4;
    func_0x00010c262f40();
    if ((int)lVar6 == 0) {
      func_0x00010be79ae0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_3);
      param_1 = param_3;
    }
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_107f46560;
    uStack_60 = 0x107f46570;
    ppuStack_58 = &PTR____CFConstantStringClassReference_110e3d838;
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x3032000000;
    pcStack_98 = FUN_107f46560;
    uStack_90 = 0x107f46570;
    uStack_88 = 0;
    uVar5 = param_3;
    func_0x00010bf529e0();
    lVar6 = lVar4;
    if (uVar5 < 2) {
      func_0x00010c106460(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bf0a0();
    }
    else {
      func_0x00010c106420(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bf0a0();
    }
    _objc_release(lVar6);
    lVar6 = puStack_a8[5];
    if (lVar6 != 0) {
      _objc_retain(lVar6);
    }
    __Block_object_dispose(&uStack_b0,8);
    _objc_release(uStack_88);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(ppuStack_58);
    _objc_release(param_1);
  }
  _objc_release(lVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 107f47070; end: 107f47153;  */

void FUN_107f47070(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107f47154; end: 107f471bf;  */

void FUN_107f47154(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdded60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f471c0; end: 107f473ef; -[SCMemoriesVisualTagAnalyzer _detectFaceTagsWithImages:] */

void FUN_107f471c0(long param_1,int param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  _objc_retain(param_3);
  puVar6 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar6 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf6f9a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar2);
      _objc_release(uVar3);
      puVar7 = puVar7 + 1;
    } while (puVar6 != puVar7);
    puVar6 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar6 = puVar2;
  func_0x00010bf529e0();
  puVar7 = puVar2;
  func_0x00010bfece40();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (puVar6 != (undefined *)0x0) {
    puVar6 = PTR_PTR_1126d8718;
    _objc_alloc(PTR_PTR_1126d8718);
    func_0x00010c000da0(0x3feccccccccccccd);
    func_0x00010befa120(puVar4);
    _objc_release(puVar6);
  }
  if (puVar7 != (undefined *)0x7fffffffffffffff) {
    puVar6 = PTR_PTR_1126d8718;
    _objc_alloc(PTR_PTR_1126d8718);
    func_0x00010c000da0(0x3feccccccccccccd);
    func_0x00010befa120(puVar4);
    _objc_release(puVar6);
  }
  puVar6 = puVar4;
  func_0x00010bf51e00(puVar4);
  while( true ) {
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) break;
    ___stack_chk_fail();
    do {
      __Unwind_Resume();
    } while (param_2 != 1);
    _objc_begin_catch();
    _objc_end_catch();
    puVar6 = (undefined *)0x0;
    puVar4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107f473f0; end: 107f47417;  */

void FUN_107f473f0(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined1 *param_4)

{
  func_0x00010bfdc200();
  *param_4 = param_2;
  return;
}



/* Entry: 107f47418; end: 107f47593; -[SCMemoriesVisualTagAnalyzer _classificationsToContentResults:] */

void FUN_107f47418(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  float fVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  undefined1 auStack_2c0 [8];
  undefined1 auStack_2b8 [8];
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined1 *puStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_1b8;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  dVar13 = 0.0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_5);
  lVar8 = param_5;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        fVar12 = SUB84(dVar13,0);
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_5);
        }
        unaff_x22 = PTR_PTR_1126d8718;
        _objc_alloc();
        lVar2 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        dVar13 = (double)fVar12;
        func_0x00010c000da0(dVar13);
        func_0x00010befa120(puVar1);
        _objc_release(unaff_x22);
        _objc_release(lVar2);
        lVar11 = lVar11 + 1;
      } while (lVar8 != lVar11);
      lVar8 = param_5;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar8 != 0);
  }
  _objc_release(param_5);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar7 = &uStack_280;
    pcStack_138 = FUN_107f47594;
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar6);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    dVar13 = 0.0;
    lStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    _objc_retain(puVar6);
    puVar3 = (undefined1 *)puVar6;
    func_0x00010bf52a60();
    if (puVar3 != (undefined1 *)0x0) {
      lVar8 = *plStack_270;
      do {
        puVar10 = (undefined1 *)0x0;
        do {
          if (*plStack_270 != lVar8) {
            _objc_enumerationMutation(puVar6);
          }
          unaff_x22 = *(undefined **)(lStack_278 + (long)puVar10 * 8);
          func_0x00010c23d0a0(unaff_x22);
          dVar15 = dVar13;
          func_0x00010c14e120(unaff_x22);
          dVar13 = dVar13 * dVar15;
          func_0x00010c23d0a0(unaff_x22);
          func_0x00010c14e120(unaff_x22);
          param_2 = param_2 * dVar15;
          dVar15 = (param_2 / dVar13) * 256.0;
          if (param_2 < dVar13) {
            dVar15 = 256.0;
          }
          dVar17 = 256.0;
          if (param_2 < dVar13) {
            dVar17 = (dVar13 / param_2) * 256.0;
          }
          uVar14 = NEON_ucvtf((long)dVar17);
          uVar16 = NEON_ucvtf((long)dVar15);
          func_0x00010c14e6c0(uVar14,uVar16,0x3ff0000000000000);
          _objc_retainAutoreleasedReturnValue();
          dVar13 = (double)NEON_ucvtf((long)(dVar17 * 0.5 + -112.0));
          param_2 = (double)NEON_ucvtf((long)(dVar15 * 0.5 + -112.0));
          puVar4 = unaff_x22;
          func_0x00010bf5c7a0(dVar13,param_2,0x406c000000000000,0x406c000000000000);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(puVar4);
          _objc_release(unaff_x22);
          puVar10 = puVar10 + 1;
        } while (puVar3 != puVar10);
        puVar3 = (undefined1 *)puVar6;
        puVar7 = &uStack_280;
        func_0x00010bf52a60();
        unaff_x21 = 0;
      } while (puVar3 != (undefined1 *)0x0);
    }
    _objc_release(puVar6);
    puVar3 = (undefined1 *)puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
      ___stack_chk_fail();
      pcStack_288 = FUN_107f477a8;
      puStack_2b0 = unaff_x22;
      uStack_2a8 = unaff_x21;
      puStack_2a0 = puVar1;
      puStack_298 = (undefined1 *)puVar6;
      ppuStack_290 = &puStack_140;
      _objc_retain(puVar7);
      _objc_initWeak(auStack_2b8,puVar3);
      puVar10 = (undefined1 *)puVar7;
      func_0x00010bf79200();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_2c0,auStack_2b8);
      puVar5 = puVar10;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(puVar3 + 0x30);
      *(undefined1 **)(puVar3 + 0x30) = puVar5;
      _objc_release(uVar14);
      _objc_release(puVar10);
      _objc_destroyWeak(auStack_2c0);
      _objc_destroyWeak(auStack_2b8);
      _objc_release(puVar7);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f47594; end: 107f477a7; -[SCMemoriesVisualTagAnalyzer _preprocessImagesForContentTagger:] */

void FUN_107f47594(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  puVar5 = &uStack_150;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  dVar11 = 0.0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(param_5);
  lVar2 = param_5;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_140;
    do {
      lVar7 = 0;
      do {
        if (*plStack_140 != lVar6) {
          _objc_enumerationMutation(param_5);
        }
        unaff_x22 = *(undefined8 *)(lStack_148 + lVar7 * 8);
        func_0x00010c23d0a0(unaff_x22);
        dVar9 = dVar11;
        func_0x00010c14e120(unaff_x22);
        dVar11 = dVar11 * dVar9;
        func_0x00010c23d0a0(unaff_x22);
        func_0x00010c14e120(unaff_x22);
        param_2 = param_2 * dVar9;
        dVar9 = (param_2 / dVar11) * 256.0;
        if (param_2 < dVar11) {
          dVar9 = 256.0;
        }
        dVar12 = 256.0;
        if (param_2 < dVar11) {
          dVar12 = (dVar11 / param_2) * 256.0;
        }
        uVar8 = NEON_ucvtf((long)dVar12);
        uVar10 = NEON_ucvtf((long)dVar9);
        func_0x00010c14e6c0(uVar8,uVar10,0x3ff0000000000000);
        _objc_retainAutoreleasedReturnValue();
        dVar11 = (double)NEON_ucvtf((long)(dVar12 * 0.5 + -112.0));
        param_2 = (double)NEON_ucvtf((long)(dVar9 * 0.5 + -112.0));
        uVar8 = unaff_x22;
        func_0x00010bf5c7a0(dVar11,param_2,0x406c000000000000,0x406c000000000000);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(uVar8);
        _objc_release(unaff_x22);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_5;
      puVar5 = &uStack_150;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(param_5);
  lVar2 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_107f477a8;
  uStack_180 = unaff_x22;
  uStack_178 = unaff_x21;
  puStack_170 = puVar1;
  lStack_168 = param_5;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_initWeak(auStack_188,lVar2);
  puVar3 = (undefined1 *)puVar5;
  func_0x00010bf79200();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_190,auStack_188);
  puVar4 = puVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined1 **)(lVar2 + 0x30) = puVar4;
  _objc_release(uVar8);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_188);
  _objc_release(puVar5);
  return;
}



/* Entry: 107f477a8; end: 107f478a3; -[SCMemoriesVisualTagAnalyzer _didReceiveApplicationLifecycleEvents:] */

void FUN_107f477a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010bf79200();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107f478a4; end: 107f478eb;  */

void FUN_107f478a4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff680();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f478ec; end: 107f479af; -[SCMemoriesVisualTagAnalyzer _didReceiveMemoryWarning:] */

void FUN_107f478ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107f479b0; end: 107f479db;  */

void FUN_107f479b0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be87800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f479dc; end: 107f47a1b; -[SCMemoriesVisualTagAnalyzer _recordMemoryWarning] */

void FUN_107f479dc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  *(undefined8 *)(param_2 + 0x40) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f47a1c; end: 107f47ac7; -[SCMemoriesVisualTagAnalyzer .cxx_destruct] */

void FUN_107f47a1c(long param_1)

{
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



/* Entry: 107f47ac8; end: 107f47bf3; -[SCMemoriesVisualTagAnalyzerServiceProvider _memoriesVisualTagAnalyzer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f47ac8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1 + _DAT_112771b14;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf522a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126d8728;
  _objc_alloc(PTR_PTR_1126d8728);
  lVar4 = lVar2;
  func_0x00010c269d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x000108ec1a8c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_112771b18;
  _objc_loadWeakRetained(lVar1);
  lVar6 = lVar1;
  func_0x00010c0d0060();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112771b1c;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c720(puVar3,param_2,lVar5,lVar6,lVar7);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f47bf4; end: 107f47c43; -[SCMemoriesVisualTagAnalyzerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f47bf4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112771b14);
  _objc_destroyWeak(param_1 + _DAT_112771b18);
  _objc_destroyWeak(param_1 + _DAT_112771b1c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112771b20);
  return;
}



/* Entry: 107f47c44; end: 107f47cd7;  */

void FUN_107f47c44(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010bdc10e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) goto LAB_107f47cbc;
    puVar1 = param_1;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    _CGImageRetain();
    if (puVar1 != (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___CIImage_1126b3128;
      func_0x00010bfe9240(PTR__OBJC_CLASS___CIImage_1126b3128,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _CGImageRelease(puVar1);
      goto LAB_107f47cbc;
    }
  }
  puVar2 = (undefined *)0x0;
LAB_107f47cbc:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f47cd8; end: 107f47db3;  */

undefined * FUN_107f47cd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)PTR__CIDetectorImageOrientation_11034ac50;
  FUN_107f47db4();
  func_0x00010c0df820(puVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  uStack_50 = *(undefined8 *)PTR__CIDetectorSmile_11034ac68;
  puStack_38 = PTR____kCFBooleanTrue_11034ab68;
  uStack_48 = *(undefined8 *)PTR__CIDetectorEyeBlink_11034ac48;
  puStack_30 = PTR____kCFBooleanTrue_11034ab68;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&uStack_58,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010bfe8380();
  if (puVar2 + -1 < (undefined *)0x7) {
    puVar2 = (undefined *)(ulong)*(uint *)(&UNK_10dee86a0 + (long)(puVar2 + -1) * 4);
  }
  else {
    puVar2 = (undefined *)0x1;
  }
  return puVar2;
}



/* Entry: 107f47db4; end: 107f47de7;  */

undefined4 FUN_107f47db4(long param_1)

{
  undefined4 uVar1;
  
  func_0x00010bfe8380();
  if (param_1 - 1U < 7) {
    uVar1 = *(undefined4 *)(&UNK_10dee86a0 + (param_1 - 1U) * 4);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 107f47de8; end: 107f47fe3;  */

undefined1 * FUN_107f47de8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined1 *unaff_x22;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = (undefined1 *)0x0;
  uStack_78 = unaff_x19;
  if (param_1 != 0) {
    unaff_x20 = param_1;
    _CGImageGetWidth();
    uVar2 = param_1;
    _CGImageGetHeight();
    puStack_a0 = (undefined1 *)0x0;
    uStack_78 = param_1;
    if ((unaff_x20 != 0) && (uVar2 != 0)) {
      uVar1 = unaff_x20;
      if (unaff_x20 <= uVar2) {
        uVar1 = uVar2;
      }
      if (0x400 < uVar1) {
        uVar9 = unaff_x20 << 10;
        unaff_x20 = 0;
        if (uVar1 != 0) {
          unaff_x20 = uVar9 / uVar1;
        }
        if (unaff_x20 < 2) {
          unaff_x20 = 1;
        }
        uVar9 = uVar2 << 10;
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = uVar9 / uVar1;
        }
        if (uVar2 < 2) {
          uVar2 = 1;
        }
      }
      unaff_x20 = (ulong)(double)unaff_x20;
      unaff_x21 = (ulong)(double)uVar2;
      puStack_60 = (undefined1 *)0x0;
      unaff_x22 = *(undefined1 **)PTR__kCFAllocatorDefault_11034ab78;
      uStack_58 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
      puStack_50 = PTR____NSDictionary0__struct_11034ab58;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      puVar4 = unaff_x22;
      _CVPixelBufferCreate(unaff_x22,unaff_x20,unaff_x21,0x42475241,puVar3,&puStack_60);
      puStack_a0 = (undefined1 *)0x0;
      if ((int)puVar4 == 0 && puStack_60 != (undefined1 *)0x0) {
        puVar4 = puStack_60;
        _CVPixelBufferLockBaseAddress(puStack_60,0);
        if ((int)puVar4 == 0) {
          _CGColorSpaceCreateDeviceRGB();
          unaff_x22 = puStack_60;
          _CVPixelBufferGetBaseAddress();
          puVar5 = puStack_60;
          _CVPixelBufferGetBytesPerRow(puStack_60);
          _CGBitmapContextCreate(unaff_x22,unaff_x20,unaff_x21,8,puVar5,puVar4,0x2002);
          _CGColorSpaceRelease(puVar4);
          if (unaff_x22 != (undefined1 *)0x0) {
            _CGContextSetBlendMode(unaff_x22,0x11);
            _CGContextDrawImage(0,0,(double)unaff_x20,(double)unaff_x21,unaff_x22,param_1);
            _CGContextRelease(unaff_x22);
            _CVPixelBufferUnlockBaseAddress(puStack_60,0);
            puStack_a0 = puStack_60;
            goto LAB_107f47fa0;
          }
          _CVPixelBufferUnlockBaseAddress(puStack_60,0);
        }
        _CVPixelBufferRelease(puStack_60);
        puStack_a0 = (undefined1 *)0x0;
      }
    }
  }
LAB_107f47fa0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puStack_a0;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_a0;
  pcStack_68 = FUN_107f47fe4;
  puStack_98 = PTR_PTR_1126fbba0;
  puStack_90 = unaff_x22;
  uStack_88 = unaff_x21;
  uStack_80 = unaff_x20;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
  if (ppuVar6 != (undefined1 **)0x0) {
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar8 = *(undefined8 *)((long)ppuVar6 + 0x10);
    *(undefined **)((long)ppuVar6 + 0x10) = puVar3;
    _objc_release(uVar8);
    _objc_release(puVar7);
  }
  return (undefined1 *)ppuVar6;
}



/* Entry: 107f47fe4; end: 107f48093; -[SCFaceDetector init] */

undefined1 * FUN_107f47fe4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fbba0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107f48094; end: 107f481d3; -[SCFaceDetector _setup] */

undefined **
FUN_107f48094(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
             undefined8 param_6,undefined **param_7)

{
  int iVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  uint uVar12;
  undefined **unaff_x20;
  undefined *puVar13;
  undefined **unaff_x22;
  undefined **ppuVar14;
  undefined *unaff_x24;
  undefined **ppuVar15;
  undefined *unaff_x25;
  long lVar16;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  double dVar17;
  undefined8 unaff_d8;
  double dVar18;
  undefined8 unaff_d9;
  double dVar19;
  double unaff_d10;
  double dVar20;
  double unaff_d11;
  undefined1 auStack_3c0 [8];
  undefined1 auStack_3b8 [8];
  undefined8 uStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  undefined1 uStack_398;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined1 ***pppuStack_370;
  code *pcStack_368;
  undefined *puStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined **ppuStack_318;
  undefined **ppuStack_290;
  long lStack_288;
  double dStack_280;
  double dStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined1 **ppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_110;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = *(undefined ***)(param_5 + 0x10);
  func_0x00010c06fc80();
  if ((int)ppuVar2 == 0) goto LAB_107f4818c;
  if (*(long *)(param_5 + 8) != 0) goto LAB_107f4818c;
  uStack_58 = *(undefined8 *)PTR__CIDetectorAccuracy_11034ac30;
  uStack_48 = *(undefined8 *)PTR__CIDetectorAccuracyHigh_11034ac38;
  uStack_50 = *(undefined8 *)PTR__CIDetectorMinFeatureSize_11034ac60;
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185230;
  unaff_x20 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  unaff_x22 = (undefined **)PTR__OBJC_CLASS___CIDetector_1126bd658;
  puVar13 = PTR__OBJC_CLASS___CIContext_1126b3120;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  param_7 = *(undefined ***)PTR__CIDetectorTypeFace_11034ac78;
  puVar3 = (undefined *)unaff_x22;
  func_0x00010bf6fba0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_5 + 8);
  *(undefined **)(param_5 + 8) = puVar3;
  _objc_release(uVar10);
  _objc_release(puVar13);
  while( true ) {
    ppuVar2 = unaff_x20;
    _objc_release();
LAB_107f4818c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return ppuVar2;
    }
    ___stack_chk_fail();
    if ((int)param_6 != 1) break;
    _objc_begin_catch();
    _objc_end_catch();
  }
  __Unwind_Resume();
  pcStack_68 = FUN_107f481d4;
  lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = param_7;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(param_7);
  iVar1 = (int)ppuVar2[2];
  func_0x00010c06fc80();
  ppuVar14 = (undefined **)0x0;
  if ((param_7 != (undefined **)0x0) && (iVar1 != 0)) {
    func_0x00010beaa4c0(ppuVar2);
    unaff_x20 = param_7;
    FUN_107f47c44();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = (undefined **)ppuVar2[1];
    ppuStack_1e8 = param_7;
    FUN_107f47cd8(param_7);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1f0 = unaff_x20;
    func_0x00010bfa3560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    unaff_x22 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar10 = 0;
    lStack_1c8 = 0;
    puStack_1d0 = (undefined *)0x0;
    uStack_1b8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    _objc_retain(ppuVar2);
    ppuVar11 = &puStack_1d0;
    ppuVar14 = ppuVar2;
    func_0x00010bf52a60();
    if (ppuVar14 != (undefined **)0x0) {
      unaff_x28 = *plStack_1c0;
      unaff_x20 = &PTR_PTR_1126d8000;
      do {
        ppuVar11 = (undefined **)0x0;
        do {
          unaff_d11 = param_4;
          unaff_d10 = param_3;
          unaff_d9 = param_2;
          unaff_d8 = uVar10;
          if (*plStack_1c0 != unaff_x28) {
            _objc_enumerationMutation(ppuVar2);
          }
          uVar10 = *(undefined8 *)(lStack_1c8 + (long)ppuVar11 * 8);
          unaff_x25 = PTR_PTR_1126d8730;
          _objc_alloc();
          func_0x00010bf20c00(uVar10);
          uStack_1e0 = unaff_d9;
          uStack_1d8 = unaff_d8;
          func_0x00010c08e660(uVar10);
          unaff_x26 = uVar10;
          func_0x00010c08e640();
          func_0x00010c140ae0(uVar10);
          unaff_x27 = uVar10;
          func_0x00010c140ac0();
          func_0x00010c0d1340(uVar10);
          func_0x00010bfdc200(uVar10);
          unaff_x24 = unaff_x25;
          uVar10 = uStack_1d8;
          param_2 = uStack_1e0;
          param_3 = unaff_d10;
          param_4 = unaff_d11;
          uStack_200 = unaff_d8;
          uStack_1f8 = unaff_d9;
          func_0x00010bff9560();
          func_0x00010befa120(unaff_x22);
          _objc_release(unaff_x24);
          ppuVar11 = (undefined **)((long)ppuVar11 + 1);
        } while (ppuVar14 != ppuVar11);
        ppuVar11 = &puStack_1d0;
        ppuVar14 = ppuVar2;
        func_0x00010bf52a60();
      } while (ppuVar14 != (undefined **)0x0);
    }
    _objc_release(ppuVar2);
    ppuVar14 = unaff_x22;
    func_0x00010bf51e00();
    _objc_release(unaff_x22);
    _objc_release(ppuVar2);
    _objc_release(ppuStack_1f0);
    param_7 = ppuStack_1e8;
  }
  ppuVar4 = param_7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar14);
    return ppuVar14;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_360;
  pcStack_208 = FUN_107f48474;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = ppuVar11;
  dStack_280 = unaff_d11;
  dStack_278 = unaff_d10;
  uStack_270 = unaff_d9;
  uStack_268 = unaff_d8;
  lStack_260 = unaff_x28;
  uStack_258 = unaff_x27;
  uStack_250 = unaff_x26;
  puStack_248 = unaff_x25;
  puStack_240 = unaff_x24;
  ppuStack_238 = ppuVar14;
  ppuStack_230 = unaff_x22;
  ppuStack_228 = ppuVar2;
  ppuStack_220 = unaff_x20;
  ppuStack_218 = param_7;
  ppuStack_210 = &puStack_70;
  _objc_retain(ppuVar11);
  iVar1 = (int)ppuVar4[2];
  func_0x00010c06fc80();
  if (iVar1 != 0) {
    ppuVar14 = ppuVar11;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    _CGImageRetain();
    if (ppuVar14 != (undefined **)0x0) {
      ppuVar15 = ppuVar14;
      FUN_107f47de8();
      _CGImageRelease(ppuVar14);
      ppuVar4 = ppuVar14;
      if (ppuVar15 != (undefined **)0x0) {
        ppuVar2 = ppuVar11;
        FUN_107f47db4();
        ppuVar4 = ppuVar15;
        _CVPixelBufferGetWidth();
        ppuVar5 = ppuVar15;
        _CVPixelBufferGetHeight();
        ppuVar14 = ppuVar4;
        if (3 < (int)ppuVar2 - 5U) {
          ppuVar14 = ppuVar5;
          ppuVar5 = ppuVar4;
        }
        ppuVar4 = (undefined **)PTR__OBJC_CLASS___VNDetectFaceRectanglesRequest_1126d8738;
        _objc_alloc_init();
        ppuVar2 = (undefined **)PTR__OBJC_CLASS___VNImageRequestHandler_1126bcaf0;
        _objc_alloc();
        func_0x00010bffa660();
        ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        ppuStack_290 = ppuVar4;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_318 = (undefined **)0x0;
        ppuVar7 = ppuVar2;
        ppuVar8 = ppuVar6;
        func_0x00010c0f8dc0();
        unaff_x22 = ppuStack_318;
        _objc_retain(ppuStack_318);
        _objc_release(ppuVar6);
        _CVPixelBufferRelease(ppuVar15);
        if ((int)ppuVar7 == 0) {
          ppuVar15 = (undefined **)0x0;
        }
        else {
          uStack_338 = 0;
          uStack_340 = 0;
          uStack_328 = 0;
          uStack_330 = 0;
          lStack_358 = 0;
          puStack_360 = (undefined *)0x0;
          uStack_348 = 0;
          plStack_350 = (long *)0x0;
          ppuVar8 = ppuVar4;
          func_0x00010c13cf20();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar8;
          func_0x00010bf52a60();
          ppuVar15 = (undefined **)0x0;
          if (ppuVar6 != (undefined **)0x0) {
            dVar18 = (double)ppuVar14;
            dVar19 = (double)ppuVar5;
            lVar16 = *plStack_350;
            dVar20 = dVar19;
            if (dVar18 <= dVar19) {
              dVar20 = dVar18;
            }
            do {
              ppuVar14 = (undefined **)0x0;
              do {
                if (*plStack_350 != lVar16) {
                  _objc_enumerationMutation(ppuVar8);
                }
                func_0x00010bf20ae0(*(undefined8 *)(lStack_358 + (long)ppuVar14 * 8));
                if (0.0 < dVar20) {
                  dVar17 = param_3 * dVar19;
                  if (param_4 * dVar18 <= param_3 * dVar19) {
                    dVar17 = param_4 * dVar18;
                  }
                  if (dVar20 * 0.25 <= dVar17) {
                    ppuVar15 = (undefined **)0x1;
                    goto LAB_107f486dc;
                  }
                }
                ppuVar14 = (undefined **)((long)ppuVar14 + 1);
              } while (ppuVar6 != ppuVar14);
              ppuVar6 = ppuVar8;
              ppuVar9 = &puStack_360;
              func_0x00010bf52a60();
            } while (ppuVar6 != (undefined **)0x0);
            ppuVar15 = (undefined **)0x0;
          }
LAB_107f486dc:
          _objc_release(ppuVar8);
          ppuVar8 = ppuVar9;
        }
        _objc_release(unaff_x22);
        _objc_release(ppuVar2);
        _objc_release(ppuVar4);
        goto LAB_107f48684;
      }
    }
  }
  ppuVar15 = (undefined **)0x0;
LAB_107f48684:
  ppuVar14 = ppuVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_288) {
    ___stack_chk_fail();
    pcStack_368 = FUN_107f48704;
    ppuStack_390 = unaff_x22;
    ppuStack_388 = ppuVar2;
    ppuStack_380 = ppuVar4;
    ppuStack_378 = ppuVar11;
    pppuStack_370 = &ppuStack_210;
    _objc_retain(ppuVar8);
    if (ppuVar8 == (undefined **)0x0) {
      uVar12 = 0;
    }
    else {
      puStack_3a8 = &uStack_3b0;
      uStack_3b0 = 0;
      uStack_3a0 = 0x2020000000;
      uStack_398 = 0;
      _objc_initWeak(auStack_3b8,ppuVar14);
      puVar13 = ppuVar14[2];
      _objc_copyWeak(auStack_3c0,auStack_3b8);
      _objc_retain(ppuVar8);
      func_0x00010c0f8240(puVar13);
      uVar12 = (uint)*(byte *)(puStack_3a8 + 3);
      _objc_release(ppuVar8);
      _objc_destroyWeak(auStack_3c0);
      _objc_destroyWeak(auStack_3b8);
      __Block_object_dispose(&uStack_3b0,8);
    }
    _objc_release(ppuVar8);
    return (undefined **)(ulong)(uVar12 & 1);
  }
  return ppuVar15;
}



/* Entry: 107f481d4; end: 107f48473; -[SCFaceDetector _detectFacesInImage:] */

undefined *
FUN_107f481d4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,undefined *param_5
             ,undefined8 param_6,undefined **param_7)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  uint uVar10;
  undefined **unaff_x20;
  undefined *unaff_x22;
  undefined *puVar11;
  undefined *unaff_x24;
  undefined8 uVar12;
  undefined *unaff_x25;
  long lVar13;
  undefined8 unaff_x26;
  undefined **ppuVar14;
  undefined8 unaff_x27;
  long unaff_x28;
  double dVar15;
  undefined8 unaff_d8;
  double dVar16;
  undefined8 unaff_d9;
  double dVar17;
  double unaff_d10;
  double dVar18;
  double unaff_d11;
  undefined1 auStack_360 [8];
  undefined1 auStack_358 [8];
  undefined8 uStack_350;
  undefined8 *puStack_348;
  undefined8 uStack_340;
  undefined1 uStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined1 **ppuStack_310;
  code *pcStack_308;
  undefined *puStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2b8;
  undefined **ppuStack_230;
  long lStack_228;
  double dStack_220;
  double dStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = param_7;
  _objc_retain(param_7);
  iVar1 = (int)*(undefined8 *)(param_5 + 0x10);
  func_0x00010c06fc80();
  puVar11 = (undefined *)0x0;
  if ((param_7 != (undefined **)0x0) && (iVar1 != 0)) {
    func_0x00010beaa4c0(param_5);
    unaff_x20 = param_7;
    FUN_107f47c44();
    _objc_retainAutoreleasedReturnValue();
    param_5 = *(undefined **)(param_5 + 8);
    ppuStack_188 = param_7;
    FUN_107f47cd8(param_7);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_190 = unaff_x20;
    func_0x00010bfa3560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    unaff_x22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar12 = 0;
    lStack_168 = 0;
    puStack_170 = (undefined *)0x0;
    uStack_158 = 0;
    plStack_160 = (long *)0x0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    _objc_retain(param_5);
    ppuVar8 = &puStack_170;
    puVar11 = param_5;
    func_0x00010bf52a60();
    if (puVar11 != (undefined *)0x0) {
      unaff_x28 = *plStack_160;
      unaff_x20 = &PTR_PTR_1126d8000;
      do {
        puVar9 = (undefined *)0x0;
        do {
          unaff_d11 = param_4;
          unaff_d10 = param_3;
          unaff_d9 = param_2;
          unaff_d8 = uVar12;
          if (*plStack_160 != unaff_x28) {
            _objc_enumerationMutation(param_5);
          }
          uVar12 = *(undefined8 *)(lStack_168 + (long)puVar9 * 8);
          unaff_x25 = PTR_PTR_1126d8730;
          _objc_alloc();
          func_0x00010bf20c00(uVar12);
          uStack_180 = unaff_d9;
          uStack_178 = unaff_d8;
          func_0x00010c08e660(uVar12);
          unaff_x26 = uVar12;
          func_0x00010c08e640();
          func_0x00010c140ae0(uVar12);
          unaff_x27 = uVar12;
          func_0x00010c140ac0();
          func_0x00010c0d1340(uVar12);
          func_0x00010bfdc200(uVar12);
          unaff_x24 = unaff_x25;
          uVar12 = uStack_178;
          param_2 = uStack_180;
          param_3 = unaff_d10;
          param_4 = unaff_d11;
          uStack_1a0 = unaff_d8;
          uStack_198 = unaff_d9;
          func_0x00010bff9560();
          func_0x00010befa120(unaff_x22);
          _objc_release(unaff_x24);
          puVar9 = puVar9 + 1;
        } while (puVar11 != puVar9);
        ppuVar8 = &puStack_170;
        puVar11 = param_5;
        func_0x00010bf52a60();
      } while (puVar11 != (undefined *)0x0);
    }
    _objc_release(param_5);
    puVar11 = unaff_x22;
    func_0x00010bf51e00();
    _objc_release(unaff_x22);
    _objc_release(param_5);
    _objc_release(ppuStack_190);
    param_7 = ppuStack_188;
  }
  ppuVar2 = param_7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return puVar11;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_300;
  pcStack_1a8 = FUN_107f48474;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar8;
  dStack_220 = unaff_d11;
  dStack_218 = unaff_d10;
  uStack_210 = unaff_d9;
  uStack_208 = unaff_d8;
  lStack_200 = unaff_x28;
  uStack_1f8 = unaff_x27;
  uStack_1f0 = unaff_x26;
  puStack_1e8 = unaff_x25;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = puVar11;
  puStack_1d0 = unaff_x22;
  puStack_1c8 = param_5;
  ppuStack_1c0 = unaff_x20;
  ppuStack_1b8 = param_7;
  puStack_1b0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar8);
  iVar1 = (int)ppuVar2[2];
  func_0x00010c06fc80();
  if (iVar1 != 0) {
    ppuVar14 = ppuVar8;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    _CGImageRetain();
    if (ppuVar14 != (undefined **)0x0) {
      ppuVar3 = ppuVar14;
      FUN_107f47de8();
      _CGImageRelease(ppuVar14);
      ppuVar2 = ppuVar14;
      if (ppuVar3 != (undefined **)0x0) {
        ppuVar2 = ppuVar8;
        FUN_107f47db4();
        ppuVar4 = ppuVar3;
        _CVPixelBufferGetWidth();
        ppuVar5 = ppuVar3;
        _CVPixelBufferGetHeight();
        ppuVar14 = ppuVar4;
        if (3 < (int)ppuVar2 - 5U) {
          ppuVar14 = ppuVar5;
          ppuVar5 = ppuVar4;
        }
        ppuVar2 = (undefined **)PTR__OBJC_CLASS___VNDetectFaceRectanglesRequest_1126d8738;
        _objc_alloc_init();
        param_5 = PTR__OBJC_CLASS___VNImageRequestHandler_1126bcaf0;
        _objc_alloc();
        func_0x00010bffa660();
        ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        ppuStack_230 = ppuVar2;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        puStack_2b8 = (undefined *)0x0;
        puVar11 = param_5;
        ppuVar4 = ppuVar6;
        func_0x00010c0f8dc0();
        unaff_x22 = puStack_2b8;
        _objc_retain(puStack_2b8);
        _objc_release(ppuVar6);
        _CVPixelBufferRelease(ppuVar3);
        if ((int)puVar11 == 0) {
          puVar11 = (undefined *)0x0;
        }
        else {
          uStack_2d8 = 0;
          uStack_2e0 = 0;
          uStack_2c8 = 0;
          uStack_2d0 = 0;
          lStack_2f8 = 0;
          puStack_300 = (undefined *)0x0;
          uStack_2e8 = 0;
          plStack_2f0 = (long *)0x0;
          ppuVar4 = ppuVar2;
          func_0x00010c13cf20();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar4;
          func_0x00010bf52a60();
          puVar11 = (undefined *)0x0;
          if (ppuVar3 != (undefined **)0x0) {
            dVar16 = (double)ppuVar14;
            dVar17 = (double)ppuVar5;
            lVar13 = *plStack_2f0;
            dVar18 = dVar17;
            if (dVar16 <= dVar17) {
              dVar18 = dVar16;
            }
            do {
              ppuVar14 = (undefined **)0x0;
              do {
                if (*plStack_2f0 != lVar13) {
                  _objc_enumerationMutation(ppuVar4);
                }
                func_0x00010bf20ae0(*(undefined8 *)(lStack_2f8 + (long)ppuVar14 * 8));
                if (0.0 < dVar18) {
                  dVar15 = param_3 * dVar17;
                  if (param_4 * dVar16 <= param_3 * dVar17) {
                    dVar15 = param_4 * dVar16;
                  }
                  if (dVar18 * 0.25 <= dVar15) {
                    puVar11 = (undefined *)0x1;
                    goto LAB_107f486dc;
                  }
                }
                ppuVar14 = (undefined **)((long)ppuVar14 + 1);
              } while (ppuVar3 != ppuVar14);
              ppuVar3 = ppuVar4;
              ppuVar7 = &puStack_300;
              func_0x00010bf52a60();
            } while (ppuVar3 != (undefined **)0x0);
            puVar11 = (undefined *)0x0;
          }
LAB_107f486dc:
          _objc_release(ppuVar4);
          ppuVar4 = ppuVar7;
        }
        _objc_release(unaff_x22);
        _objc_release(param_5);
        _objc_release(ppuVar2);
        goto LAB_107f48684;
      }
    }
  }
  puVar11 = (undefined *)0x0;
LAB_107f48684:
  ppuVar7 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
    ___stack_chk_fail();
    pcStack_308 = FUN_107f48704;
    puStack_330 = unaff_x22;
    puStack_328 = param_5;
    ppuStack_320 = ppuVar2;
    ppuStack_318 = ppuVar8;
    ppuStack_310 = &puStack_1b0;
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined **)0x0) {
      uVar10 = 0;
    }
    else {
      puStack_348 = &uStack_350;
      uStack_350 = 0;
      uStack_340 = 0x2020000000;
      uStack_338 = 0;
      _objc_initWeak(auStack_358,ppuVar7);
      puVar11 = ppuVar7[2];
      _objc_copyWeak(auStack_360,auStack_358);
      _objc_retain(ppuVar4);
      func_0x00010c0f8240(puVar11);
      uVar10 = (uint)*(byte *)(puStack_348 + 3);
      _objc_release(ppuVar4);
      _objc_destroyWeak(auStack_360);
      _objc_destroyWeak(auStack_358);
      __Block_object_dispose(&uStack_350,8);
    }
    _objc_release(ppuVar4);
    return (undefined *)(ulong)(uVar10 & 1);
  }
  return puVar11;
}



/* Entry: 107f48474; end: 107f48703; -[SCFaceDetector _containsFaceInImage:] */

byte FUN_107f48474(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined *param_5,undefined8 param_6,undefined *param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined *unaff_x21;
  undefined8 unaff_x22;
  long lVar10;
  undefined *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined *puStack_90;
  long lStack_88;
  
  puVar7 = &uStack_160;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_7;
  _objc_retain(param_7);
  iVar1 = (int)*(undefined8 *)(param_5 + 0x10);
  func_0x00010c06fc80();
  if (iVar1 != 0) {
    puVar11 = param_7;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    _CGImageRetain();
    if (puVar11 != (undefined *)0x0) {
      puVar2 = puVar11;
      FUN_107f47de8();
      _CGImageRelease(puVar11);
      param_5 = puVar11;
      if (puVar2 != (undefined *)0x0) {
        puVar3 = param_7;
        FUN_107f47db4();
        puVar4 = puVar2;
        _CVPixelBufferGetWidth();
        puVar5 = puVar2;
        _CVPixelBufferGetHeight();
        puVar11 = puVar4;
        if (3 < (int)puVar3 - 5U) {
          puVar11 = puVar5;
          puVar5 = puVar4;
        }
        param_5 = PTR__OBJC_CLASS___VNDetectFaceRectanglesRequest_1126d8738;
        _objc_alloc_init();
        unaff_x21 = PTR__OBJC_CLASS___VNImageRequestHandler_1126bcaf0;
        _objc_alloc();
        func_0x00010bffa660();
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_90 = param_5;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        uStack_118 = 0;
        puVar6 = unaff_x21;
        puVar3 = puVar4;
        func_0x00010c0f8dc0();
        unaff_x22 = uStack_118;
        _objc_retain(uStack_118);
        _objc_release(puVar4);
        _CVPixelBufferRelease(puVar2);
        if ((int)puVar6 == 0) {
          bVar8 = 0;
        }
        else {
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          lStack_158 = 0;
          uStack_160 = 0;
          uStack_148 = 0;
          plStack_150 = (long *)0x0;
          puVar3 = param_5;
          func_0x00010c13cf20();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar3;
          func_0x00010bf52a60();
          bVar8 = 0;
          if (puVar2 != (undefined *)0x0) {
            dVar13 = (double)puVar11;
            dVar14 = (double)puVar5;
            lVar10 = *plStack_150;
            dVar15 = dVar14;
            if (dVar13 <= dVar14) {
              dVar15 = dVar13;
            }
            do {
              puVar11 = (undefined *)0x0;
              do {
                if (*plStack_150 != lVar10) {
                  _objc_enumerationMutation(puVar3);
                }
                func_0x00010bf20ae0(*(undefined8 *)(lStack_158 + (long)puVar11 * 8));
                if (0.0 < dVar15) {
                  dVar12 = param_3 * dVar14;
                  if (param_4 * dVar13 <= param_3 * dVar14) {
                    dVar12 = param_4 * dVar13;
                  }
                  if (dVar15 * 0.25 <= dVar12) {
                    bVar8 = 1;
                    goto LAB_107f486dc;
                  }
                }
                puVar11 = puVar11 + 1;
              } while (puVar2 != puVar11);
              puVar2 = puVar3;
              puVar7 = &uStack_160;
              func_0x00010bf52a60();
            } while (puVar2 != (undefined *)0x0);
            bVar8 = 0;
          }
LAB_107f486dc:
          _objc_release(puVar3);
          puVar3 = (undefined *)puVar7;
        }
        _objc_release(unaff_x22);
        _objc_release(unaff_x21);
        _objc_release(param_5);
        goto LAB_107f48684;
      }
    }
  }
  bVar8 = 0;
LAB_107f48684:
  puVar11 = param_7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    pcStack_168 = FUN_107f48704;
    uStack_190 = unaff_x22;
    puStack_188 = unaff_x21;
    puStack_180 = param_5;
    puStack_178 = param_7;
    puStack_170 = &stack0xfffffffffffffff0;
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      bVar8 = 0;
    }
    else {
      puStack_1a8 = &uStack_1b0;
      uStack_1b0 = 0;
      uStack_1a0 = 0x2020000000;
      uStack_198 = 0;
      _objc_initWeak(auStack_1b8,puVar11);
      uVar9 = *(undefined8 *)(puVar11 + 0x10);
      _objc_copyWeak(auStack_1c0,auStack_1b8);
      _objc_retain(puVar3);
      func_0x00010c0f8240(uVar9);
      bVar8 = *(byte *)(puStack_1a8 + 3);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_1c0);
      _objc_destroyWeak(auStack_1b8);
      __Block_object_dispose(&uStack_1b0,8);
    }
    _objc_release(puVar3);
    return bVar8 & 1;
  }
  return bVar8;
}



/* Entry: 107f48704; end: 107f48827; -[SCFaceDetector containsFaceInImageSynchronously:] */

byte FUN_107f48704(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    bVar1 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar2);
    bVar1 = *(byte *)(puStack_48 + 3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(param_3);
  return bVar1 & 1;
}



/* Entry: 107f48828; end: 107f4886f;  */

void FUN_107f48828(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bde7940(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f48870; end: 107f489ab; -[SCFaceDetector detectFacesInImageSynchronously:] */

void FUN_107f48870(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107f489ac;
  uStack_40 = 0x107f489bc;
  uStack_38 = 0;
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f489ac; end: 107f489c3;  */

void FUN_107f489ac(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f489c4; end: 107f48a1f;  */

void FUN_107f489c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bdfb9e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = lVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f48a20; end: 107f48b57; -[SCFaceDetector detectFacesInImageAsynchronously:completion:queue:] */

void FUN_107f48a20(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 != 0) && (param_5 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f48b58; end: 107f48c1b;  */

void FUN_107f48b58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x00010bdfb9e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107f48c1c;
    puStack_48 = &UNK_11084aaa8;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    lStack_40 = lVar4;
    uStack_38 = uVar2;
    _objc_retain(lVar4);
    func_0x00010007380c(uVar1,&puStack_60);
    _objc_release(lStack_40);
    _objc_release(uStack_38);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 107f48c1c; end: 107f48c2b;  */

void FUN_107f48c1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f48c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107f48c2c; end: 107f48c5b; -[SCFaceDetector .cxx_destruct] */

void FUN_107f48c2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f48c5c; end: 107f48d13; -[SCFaceDetectionResult initWithBounds:leftEyePosition:leftEyeClosed:rightEyePosition:rightEyeClosed:mouthPosition:hasSmile:] */

void FUN_107f48c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined1 param_12,
                  undefined1 param_13)

{
  undefined8 *puVar1;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  puStack_78 = PTR_PTR_1126fbba8;
  uStack_80 = param_9;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x40) = param_1;
    *(undefined8 *)((long)puVar1 + 0x48) = param_2;
    *(undefined8 *)((long)puVar1 + 0x50) = param_3;
    *(undefined8 *)((long)puVar1 + 0x58) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    *(undefined1 *)((long)puVar1 + 8) = param_11;
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = param_12;
    *(undefined8 *)((long)puVar1 + 0x30) = in_stack_00000000;
    *(undefined8 *)((long)puVar1 + 0x38) = in_stack_00000008;
    *(undefined1 *)((long)puVar1 + 10) = param_13;
  }
  return;
}



/* Entry: 107f48d14; end: 107f48d37; -[SCFaceDetectionResult copyWithZone:] */

undefined8 FUN_107f48d14(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f48d38; end: 107f48edf; -[SCFaceDetectionResult hash] */

ulong * FUN_107f48d38(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  int iVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar3 = &uStack_80;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_80 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_78 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_70 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_68 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_60 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_58 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uStack_50 = (ulong)*(byte *)(param_1 + 8);
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_48 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_40 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uVar6 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_30 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_28 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uStack_20 = (ulong)*(byte *)(param_1 + 10);
  func_0x000100505190(&uStack_80,0xd);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar7 = (undefined1 *)puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar7);
      iVar2 = (int)puVar4;
      if (((((ulong)puVar4 & 1) == 0) ||
          (((*(char *)((long)puVar3 + 8) != param_3[8] ||
            (*(char *)((long)puVar3 + 9) != param_3[9])) ||
           (*(char *)((long)puVar3 + 10) != param_3[10])))) ||
         (_CGRectEqualToRect(*(undefined8 *)((long)puVar3 + 0x40),
                             *(undefined8 *)((long)puVar3 + 0x48),
                             *(undefined8 *)((long)puVar3 + 0x50),
                             *(undefined8 *)((long)puVar3 + 0x58),*(undefined8 *)(param_3 + 0x40),
                             *(undefined8 *)(param_3 + 0x48),*(undefined8 *)(param_3 + 0x50),
                             *(undefined8 *)(param_3 + 0x58)), iVar2 == 0)) {
        puVar7 = (undefined1 *)0x0;
      }
      else {
        puVar7 = (undefined1 *)0x0;
        if (((*(double *)((long)puVar3 + 0x10) == *(double *)(param_3 + 0x10)) &&
            (*(double *)((long)puVar3 + 0x18) == *(double *)(param_3 + 0x18))) &&
           ((puVar7 = (undefined1 *)0x0,
            *(double *)((long)puVar3 + 0x20) == *(double *)(param_3 + 0x20) &&
            (*(double *)((long)puVar3 + 0x28) == *(double *)(param_3 + 0x28))))) {
          uVar5 = 0;
          if (*(double *)((long)puVar3 + 0x38) == *(double *)(param_3 + 0x38)) {
            uVar5 = (uint)(*(double *)((long)puVar3 + 0x30) == *(double *)(param_3 + 0x30));
          }
          puVar7 = (undefined1 *)(ulong)uVar5;
        }
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar7;
}



/* Entry: 107f48ee0; end: 107f48fff; -[SCFaceDetectionResult isEqual:] */

bool FUN_107f48ee0(ulong param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      iVar1 = (int)uVar3;
      if ((((uVar3 & 1) == 0) ||
          (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
            (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
           (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) ||
         (_CGRectEqualToRect(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                             *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                             *(undefined8 *)(param_3 + 0x40),*(undefined8 *)(param_3 + 0x48),
                             *(undefined8 *)(param_3 + 0x50),*(undefined8 *)(param_3 + 0x58)),
         iVar1 == 0)) {
        bVar4 = false;
      }
      else {
        bVar4 = false;
        if (((*(double *)(param_1 + 0x10) == *(double *)(param_3 + 0x10)) &&
            (*(double *)(param_1 + 0x18) == *(double *)(param_3 + 0x18))) &&
           ((bVar4 = false, *(double *)(param_1 + 0x20) == *(double *)(param_3 + 0x20) &&
            (*(double *)(param_1 + 0x28) == *(double *)(param_3 + 0x28))))) {
          bVar4 = false;
          if (*(double *)(param_1 + 0x38) == *(double *)(param_3 + 0x38)) {
            bVar4 = *(double *)(param_1 + 0x30) == *(double *)(param_3 + 0x30);
          }
        }
      }
    }
  }
  _objc_release(param_3);
  return bVar4;
}



/* Entry: 107f49000; end: 107f4900b; -[SCFaceDetectionResult bounds] */

undefined8 FUN_107f49000(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107f4900c; end: 107f49013; -[SCFaceDetectionResult leftEyePosition] */

undefined1  [16] FUN_107f4900c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}



/* Entry: 107f49014; end: 107f4901b; -[SCFaceDetectionResult leftEyeClosed] */

undefined1 FUN_107f49014(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107f4901c; end: 107f49023; -[SCFaceDetectionResult rightEyePosition] */

undefined1  [16] FUN_107f4901c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 107f49024; end: 107f4902b; -[SCFaceDetectionResult rightEyeClosed] */

undefined1 FUN_107f49024(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107f4902c; end: 107f49033; -[SCFaceDetectionResult mouthPosition] */

undefined1  [16] FUN_107f4902c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x30);
}



/* Entry: 107f49034; end: 107f4903b; -[SCFaceDetectionResult hasSmile] */

undefined1 FUN_107f49034(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107f4903c; end: 107f490a7; +[SCServiceCloudSyncStatusNotifier notifierForStatus:cloudSync:] */

void FUN_107f4903c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3c30;
  _objc_retain(param_4);
  _objc_alloc_init();
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = 0x41b2cc0300000000;
  puVar1[8] = 0;
  func_0x00010bef9980(param_4,param_2,puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f490a8; end: 107f4910b; +[SCServiceCloudSyncStatusNotifier notifierForFullySyncedStatus:] */

void FUN_107f490a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3c30;
  _objc_retain(param_3);
  _objc_alloc_init();
  *(undefined8 *)(puVar1 + 0x18) = 0x41b2cc0300000000;
  puVar1[8] = 1;
  func_0x00010bef9980(param_3,param_2,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f4910c; end: 107f491bf; -[SCServiceCloudSyncStatusNotifier cloudSync:didChangeStatus:isBackingUpNow:mayUpload:requiresUpgrade:] */

void FUN_107f4910c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c3a00;
  func_0x00010c22ba80(PTR_PTR_1126c3a00);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107f491c0;
  puStack_50 = &UNK_110844b80;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f8b40(puVar1,param_2,&puStack_68);
  _objc_release(puVar1);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 107f491c0; end: 107f4922f;  */

void FUN_107f491c0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar2 + 8) == '\x01') {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c074180();
    uVar3 = 0;
    if (iVar1 == 0) {
      uVar3 = 0x41b2cc0300000000;
    }
    lVar2 = *(long *)(param_1 + 0x20);
  }
  else {
    uVar3 = 0;
    if (*(long *)(lVar2 + 0x10) != *(long *)(param_1 + 0x30)) {
      uVar3 = 0x41b2cc0300000000;
    }
  }
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
  return;
}



/* Entry: 107f49230; end: 107f49237; -[SCServiceCloudSyncStatusNotifier waitUntil:] */

undefined8 FUN_107f49230(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f49238; end: 107f492af;  */

long FUN_107f49238(double param_1,double param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  
  _objc_retain();
  if ((param_3 != 0) && (func_0x00010bfe4080(param_3), 0.0 <= param_1)) {
    lVar4 = param_3;
    func_0x00010bf51c80(param_3);
    param_1 = ABS(param_1);
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (1.1920928955078125e-07 < ABS(param_2)) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_1)) {
        bVar1 = param_1 < 1.1920928955078125e-07;
        bVar2 = param_1 == 1.1920928955078125e-07;
        bVar3 = false;
      }
    }
    if (!bVar2 && bVar1 == bVar3) {
      _CLLocationCoordinate2DIsValid();
      goto LAB_107f4928c;
    }
  }
  lVar4 = 0;
LAB_107f4928c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107f492b0; end: 107f4933b;  */

bool FUN_107f492b0(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  double dVar3;
  
  dVar3 = param_1;
  _objc_retain();
  uVar1 = param_2;
  FUN_107f49238();
  if ((int)uVar1 == 0) {
    bVar2 = false;
  }
  else {
    uVar1 = param_2;
    func_0x00010c2709c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    bVar2 = -dVar3 < param_1 + 2.220446049250313e-16;
    _objc_release(uVar1);
  }
  _objc_release(param_2);
  return bVar2;
}



/* Entry: 107f4933c; end: 107f49423;  */

undefined8 * FUN_107f4933c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  puVar1 = (undefined8 *)0xc8;
  __Znwm();
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x18] = 0;
  *(undefined4 *)(puVar1 + 4) = 0x3f800000;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 9) = 0x3f800000;
  *(undefined4 *)(puVar1 + 0xe) = 0x3f800000;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0x3f800000;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0x3f800000;
  *param_1 = puVar1;
  func_0x00010002b838(auStack_38,&UNK_10f4664ae);
  FUN_107f49424(puVar1,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 107f49424; end: 107f49467;  */

/* WARNING: Removing unreachable block (ram,0x000107f4bb28) */
/* WARNING: Removing unreachable block (ram,0x000107f4b878) */
/* WARNING: Removing unreachable block (ram,0x000107f4bd88) */
/* WARNING: Removing unreachable block (ram,0x000107f4bb38) */
/* WARNING: Removing unreachable block (ram,0x000107f4bcbc) */
/* WARNING: Removing unreachable block (ram,0x000107f4bccc) */

void FUN_107f49424(long param_1,undefined8 ******param_2)

{
  char ******ppppppcVar1;
  char ******ppppppcVar2;
  char cVar3;
  char *pcVar4;
  undefined7 uVar5;
  undefined7 uVar6;
  byte bVar7;
  undefined7 uVar8;
  undefined1 uVar9;
  undefined7 uVar10;
  undefined *puVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined8 ******ppppppuVar15;
  undefined8 ******ppppppuVar16;
  undefined8 ***pppuVar17;
  undefined8 *extraout_x8;
  long lVar18;
  undefined8 ******ppppppuVar19;
  undefined8 ******unaff_x21;
  char ******ppppppcVar20;
  undefined1 *unaff_x22;
  char ******ppppppcVar21;
  undefined8 ******unaff_x23;
  char *****pppppcVar22;
  undefined8 ******unaff_x24;
  undefined8 ******unaff_x25;
  undefined8 ****ppppuVar23;
  char *****apppppcStack_300 [2];
  long lStack_2f0;
  char *****pppppcStack_2e0;
  undefined8 ****ppppuStack_2d8;
  undefined8 ****ppppuStack_2d0;
  undefined8 ***pppuStack_2c0;
  undefined8 *****pppppuStack_2b8;
  undefined8 *****pppppuStack_2b0;
  undefined8 *****pppppuStack_2a8;
  undefined1 *puStack_2a0;
  undefined8 *****pppppuStack_298;
  undefined8 *****pppppuStack_290;
  undefined8 *****pppppuStack_288;
  undefined1 *puStack_280;
  code *pcStack_278;
  undefined8 *****pppppuStack_270;
  undefined8 ***pppuStack_268;
  undefined1 *puStack_260;
  undefined8 *****pppppuStack_258;
  undefined8 *puStack_250;
  long lStack_248;
  undefined8 *****pppppuStack_240;
  undefined7 uStack_238;
  undefined1 uStack_231;
  undefined7 uStack_230;
  byte bStack_229;
  undefined8 *****pppppuStack_220;
  undefined7 uStack_218;
  undefined1 uStack_211;
  undefined7 uStack_210;
  byte bStack_209;
  undefined8 *****apppppuStack_200 [4];
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined1 auStack_160 [8];
  undefined8 ****appppuStack_158 [3];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [8];
  undefined1 *puStack_120;
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  undefined7 *puStack_f8;
  undefined8 *****pppppuStack_f0;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  undefined8 *****pppppuStack_d8;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  undefined7 uStack_c8;
  byte bStack_c1;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [16];
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined8 ***pppuStack_80;
  long lStack_78;
  
  FUN_107f4a238();
  FUN_107f4aa4c(param_1,param_2);
  FUN_107f4b144(param_1,param_2);
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_248 = param_1;
  func_0x00010002b838(&pppppuStack_f0,&UNK_10f466519);
  FUN_107f4dbf4(&pppuStack_110);
  pppuStack_268 = pppuStack_108;
  ppppuVar23 = (undefined8 ****)pppuStack_110;
  if (pppuStack_110 != pppuStack_108) {
    pppppuStack_258 = &pppppuStack_d8;
    puStack_260 = auStack_c0;
    puStack_250 = auStack_a8;
    pppppuStack_270 = appppuStack_158;
    unaff_x25 = &pppppuStack_220;
    unaff_x21 = &pppppuStack_240;
    do {
      FUN_107f4c860(auStack_128,*ppppuVar23,0x2c);
      pppuVar17 = *ppppuVar23;
      if (*(char *)((long)pppuVar17 + 0x2f) < '\0') {
        func_0x000100033dac(&puStack_180,pppuVar17[3],pppuVar17[4]);
      }
      else {
        puStack_178 = pppuVar17[4];
        puStack_180 = pppuVar17[3];
        puStack_170 = pppuVar17[5];
      }
      FUN_107f4bf6c(&pppppuStack_f0,&puStack_180);
      pppuVar17 = *ppppuVar23;
      if (*(char *)((long)pppuVar17 + 0x47) < '\0') {
        func_0x000100033dac(&puStack_1a0,pppuVar17[6],pppuVar17[7]);
      }
      else {
        puStack_198 = pppuVar17[7];
        puStack_1a0 = pppuVar17[6];
        puStack_190 = pppuVar17[8];
      }
      FUN_107f4bf6c(pppppuStack_258,&puStack_1a0);
      pppuVar17 = *ppppuVar23;
      if (*(char *)((long)pppuVar17 + 0x5f) < '\0') {
        func_0x000100033dac(&puStack_1c0,pppuVar17[9],pppuVar17[10]);
      }
      else {
        puStack_1b8 = pppuVar17[10];
        puStack_1c0 = pppuVar17[9];
        puStack_1b0 = pppuVar17[0xb];
      }
      FUN_107f4bf6c(puStack_260,&puStack_1c0);
      pppuVar17 = *ppppuVar23;
      if (*(char *)((long)pppuVar17 + 0x77) < '\0') {
        func_0x000100033dac(&puStack_1e0,pppuVar17[0xc],pppuVar17[0xd]);
      }
      else {
        puStack_1d8 = pppuVar17[0xd];
        puStack_1e0 = pppuVar17[0xc];
        puStack_1d0 = pppuVar17[0xe];
      }
      FUN_107f4bf6c(puStack_250,&puStack_1e0);
      uStack_90 = 0;
      uStack_89 = 0;
      uStack_88 = 0;
      uStack_81 = 0;
      pppuStack_80 = (undefined8 ***)0x0;
      func_0x00010007e1e8(&uStack_90,&pppppuStack_f0,&uStack_90,4);
      FUN_107f4caa8(auStack_160,2,&uStack_90,auStack_128);
      puStack_f8 = &uStack_90;
      func_0x00010007e5dc(&puStack_f8);
      lVar18 = 0;
      do {
        if ((&cStack_91)[lVar18] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_a8 + lVar18));
        }
        lVar18 = lVar18 + -0x18;
      } while (lVar18 != -0x60);
      if ((long)puStack_1d0 < 0) {
        __ZdlPv(puStack_1e0);
      }
      if ((long)puStack_1b0 < 0) {
        __ZdlPv(puStack_1c0);
      }
      if ((long)puStack_190 < 0) {
        __ZdlPv(puStack_1a0);
      }
      if ((long)puStack_170 < 0) {
        __ZdlPv(puStack_180);
      }
      if (*(char *)((long)appppuStack_158[0] + 0x17) < '\0') {
        func_0x000100033dac(apppppuStack_200,*appppuStack_158[0],appppuStack_158[0][1]);
      }
      else {
        apppppuStack_200[2] = (undefined8 *****)appppuStack_158[0][2];
        apppppuStack_200[1] = (undefined8 *****)appppuStack_158[0][1];
        apppppuStack_200[0] = (undefined8 *****)*appppuStack_158[0];
      }
      ppppppuVar15 = (undefined8 ******)apppppuStack_200[0];
      param_2 = (undefined8 ******)((long)apppppuStack_200[0] + (long)apppppuStack_200[1]);
      if (-1 < (long)apppppuStack_200[2]) {
        ppppppuVar15 = apppppuStack_200;
        param_2 = (undefined8 ******)((long)apppppuStack_200 + ((ulong)apppppuStack_200[2] >> 0x38))
        ;
      }
      for (; ppppppuVar15 != param_2; ppppppuVar15 = (undefined8 ******)((long)ppppppuVar15 + 1)) {
        uVar12 = *(undefined1 *)ppppppuVar15;
        ___tolower();
        *(undefined1 *)ppppppuVar15 = uVar12;
      }
      uStack_88 = SUB87(apppppuStack_200[1],0);
      uStack_81 = (undefined1)((ulong)apppppuStack_200[1] >> 0x38);
      uStack_90 = SUB87(apppppuStack_200[0],0);
      uStack_89 = (undefined1)((ulong)apppppuStack_200[0] >> 0x38);
      pppuStack_80 = apppppuStack_200[2];
      apppppuStack_200[1] = (undefined8 *****)0x0;
      apppppuStack_200[2] = (undefined8 *****)0x0;
      apppppuStack_200[0] = (undefined8 ******)0x0;
      FUN_107f4c680(&pppppuStack_f0,&uStack_90,auStack_160);
      FUN_107f4c154(lStack_248,&pppppuStack_f0);
      func_0x00010046a278(auStack_b8);
      puStack_f8 = &uStack_d0;
      func_0x00010007e5dc(&puStack_f8);
      unaff_x22 = puStack_120;
      if ((long)apppppuStack_200[2] < 0) {
        __ZdlPv(apppppuStack_200[0]);
        unaff_x22 = puStack_120;
      }
      for (; unaff_x23 = &pppppuStack_f0, unaff_x22 != auStack_128;
          unaff_x22 = *(undefined1 **)(unaff_x22 + 8)) {
        if ((char)unaff_x22[0x27] < '\0') {
          func_0x000100033dac(&pppppuStack_220,*(undefined8 *)(unaff_x22 + 0x10),
                              *(undefined8 *)(unaff_x22 + 0x18));
        }
        else {
          uStack_218 = (undefined7)*(undefined8 *)(unaff_x22 + 0x18);
          uStack_211 = (undefined1)((ulong)*(undefined8 *)(unaff_x22 + 0x18) >> 0x38);
          pppppuStack_220 = *(undefined8 *******)(unaff_x22 + 0x10);
          uStack_210 = (undefined7)*(undefined8 *)(unaff_x22 + 0x20);
          bStack_209 = (byte)((ulong)*(undefined8 *)(unaff_x22 + 0x20) >> 0x38);
        }
        param_2 = (undefined8 ******)(ulong)(uint)(int)(char)bStack_209;
        ppppppuVar15 = (undefined8 ******)pppppuStack_220;
        ppppppuVar16 = (undefined8 ******)((long)pppppuStack_220 + CONCAT17(uStack_211,uStack_218));
        if (-1 < (char)bStack_209) {
          ppppppuVar15 = unaff_x25;
          ppppppuVar16 = (undefined8 ******)((long)unaff_x25 + (ulong)bStack_209);
        }
        ppppppuVar19 = (undefined8 ******)pppppuStack_220;
        if (ppppppuVar15 != ppppppuVar16) {
          do {
            uVar12 = *(undefined1 *)ppppppuVar15;
            ___tolower();
            ppppppuVar19 = (undefined8 ******)((long)ppppppuVar15 + 1);
            *(undefined1 *)ppppppuVar15 = uVar12;
            ppppppuVar15 = ppppppuVar19;
          } while (ppppppuVar19 != ppppppuVar16);
          param_2 = (undefined8 ******)(ulong)bStack_209;
          ppppppuVar19 = (undefined8 ******)pppppuStack_220;
        }
        uStack_90 = uStack_218;
        uStack_89 = uStack_211;
        uStack_88 = uStack_210;
        uStack_218 = 0;
        uStack_211 = 0;
        uStack_210 = 0;
        bStack_209 = 0;
        pppppuStack_220 = (undefined8 ******)0x0;
        if (*(char *)((long)appppuStack_158[0] + 0x17) < '\0') {
          func_0x000100033dac(&pppppuStack_240,*appppuStack_158[0],appppuStack_158[0][1]);
        }
        else {
          uStack_230 = SUB87(appppuStack_158[0][2],0);
          bStack_229 = (byte)((ulong)appppuStack_158[0][2] >> 0x38);
          uStack_238 = SUB87(appppuStack_158[0][1],0);
          uStack_231 = (undefined1)((ulong)appppuStack_158[0][1] >> 0x38);
          pppppuStack_240 = (undefined8 *****)*appppuStack_158[0];
        }
        ppppppuVar15 = (undefined8 ******)pppppuStack_240;
        ppppppuVar16 = (undefined8 ******)pppppuStack_240;
        uVar5 = uStack_238;
        uVar12 = uStack_231;
        uVar6 = uStack_230;
        bVar7 = bStack_229;
        uVar8 = uStack_90;
        uVar9 = uStack_89;
        uVar10 = uStack_88;
        unaff_x24 = (undefined8 ******)((long)pppppuStack_240 + CONCAT17(uStack_231,uStack_238));
        if (-1 < (char)bStack_229) {
          ppppppuVar15 = unaff_x21;
          unaff_x24 = (undefined8 ******)((long)unaff_x21 + (ulong)bStack_229);
        }
        for (; ppppppuVar15 != unaff_x24; ppppppuVar15 = (undefined8 ******)((long)ppppppuVar15 + 1)
            ) {
          uVar13 = *(undefined1 *)ppppppuVar15;
          pppppuStack_240 = ppppppuVar16;
          uStack_238 = uVar5;
          uStack_231 = uVar12;
          uStack_230 = uVar6;
          bStack_229 = bVar7;
          uStack_90 = uVar8;
          uStack_89 = uVar9;
          uStack_88 = uVar10;
          ___tolower();
          *(undefined1 *)ppppppuVar15 = uVar13;
          ppppppuVar16 = (undefined8 ******)pppppuStack_240;
          uVar5 = uStack_238;
          uVar12 = uStack_231;
          uVar6 = uStack_230;
          bVar7 = bStack_229;
          uVar8 = uStack_90;
          uVar9 = uStack_89;
          uVar10 = uStack_88;
        }
        uStack_238 = 0;
        uStack_231 = 0;
        uStack_230 = 0;
        bStack_229 = 0;
        pppppuStack_240 = (undefined8 ******)0x0;
        uStack_d9 = SUB81(param_2,0);
        uStack_90 = 0;
        uStack_89 = 0;
        uStack_88 = 0;
        pppppuStack_f0 = ppppppuVar19;
        uStack_e8 = uVar8;
        uStack_e1 = uVar9;
        uStack_e0 = uVar10;
        pppppuStack_d8 = ppppppuVar16;
        uStack_d0 = uVar5;
        uStack_c9 = uVar12;
        uStack_c8 = uVar6;
        bStack_c1 = bVar7;
        func_0x0001002a9c20(lStack_248 + 0xa0,&pppppuStack_f0,&pppppuStack_f0);
        if ((char)bStack_229 < '\0') {
          __ZdlPv(pppppuStack_240);
        }
        if ((char)bStack_209 < '\0') {
          __ZdlPv(pppppuStack_220);
        }
      }
      func_0x00010046a278(auStack_140);
      pppppuStack_f0 = pppppuStack_270;
      func_0x00010007e5dc(&pppppuStack_f0);
      func_0x00010046a278(auStack_128);
      ppppuVar23 = ppppuVar23 + 3;
    } while (ppppuVar23 != (undefined8 ****)pppuStack_268);
  }
  pppppuStack_f0 = (undefined8 *****)&pppuStack_110;
  ppppppuVar15 = &pppppuStack_f0;
  func_0x000100151ae0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  ppppppuVar16 = ppppppuVar15;
  __Unwind_Resume();
  pppuStack_2c0 = ppppuVar23;
  pppppuStack_2b8 = unaff_x25;
  pppppuStack_2b0 = unaff_x24;
  pppppuStack_2a8 = unaff_x23;
  puStack_2a0 = unaff_x22;
  pppppuStack_298 = unaff_x21;
  pppppuStack_290 = ppppppuVar15;
  pppppuStack_288 = param_2;
  puStack_280 = &stack0xfffffffffffffff0;
  pcStack_278 = FUN_107f4bf6c;
  if (*(char *)((long)ppppppuVar16 + 0x17) < '\0') {
    func_0x000100033dac(apppppcStack_300,*ppppppuVar16,ppppppuVar16[1]);
  }
  else {
    apppppcStack_300[1] = (char *****)ppppppuVar16[1];
    apppppcStack_300[0] = (char *****)*ppppppuVar16;
    lStack_2f0 = (long)ppppppuVar16[2];
  }
  puVar11 = PTR___DefaultRuneLocale_11034bcf8;
  ppppppcVar21 = (char ******)((long)apppppcStack_300[0] + (long)apppppcStack_300[1]);
  ppppppcVar2 = (char ******)apppppcStack_300[0];
  if (-1 < lStack_2f0) {
    ppppppcVar21 = (char ******)((long)apppppcStack_300 + ((ulong)lStack_2f0 >> 0x38));
    ppppppcVar2 = apppppcStack_300;
  }
  do {
    ppppppcVar20 = ppppppcVar2;
    if (ppppppcVar21 == ppppppcVar2) break;
    cVar3 = *(char *)((long)ppppppcVar21 + -1);
    lVar18 = (long)cVar3;
    if (cVar3 < 0) {
      ___maskrune(lVar18,0x4000);
      uVar14 = (uint)lVar18;
    }
    else {
      uVar14 = *(uint *)(puVar11 + (ulong)(uint)(int)cVar3 * 4 + 0x3c) & 0x4000;
    }
    ppppppcVar20 = ppppppcVar21;
    ppppppcVar21 = (char ******)((long)ppppppcVar21 + -1);
  } while (uVar14 != 0);
  ppppppcVar2 = (char ******)apppppcStack_300[0];
  pcVar4 = (char *)((long)apppppcStack_300[0] + (long)apppppcStack_300[1]);
  if (-1 < lStack_2f0) {
    ppppppcVar2 = apppppcStack_300;
    pcVar4 = (char *)((long)apppppcStack_300 + ((ulong)lStack_2f0 >> 0x38));
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
            (apppppcStack_300,(long)ppppppcVar20 - (long)ppppppcVar2,
             (long)pcVar4 - (long)ppppppcVar20);
  lVar18 = lStack_2f0;
  pppppcVar22 = apppppcStack_300[1];
  ppppppcVar2 = (char ******)apppppcStack_300[0];
  ppppuStack_2d0 = (undefined8 ****)lStack_2f0;
  ppppuStack_2d8 = apppppcStack_300[1];
  pppppcStack_2e0 = apppppcStack_300[0];
  apppppcStack_300[1] = (char *****)0x0;
  lStack_2f0 = 0;
  apppppcStack_300[0] = (char *****)0x0;
  if (-1 < lVar18) {
    pppppcVar22 = (char *****)((ulong)lVar18 >> 0x38);
    ppppppcVar2 = &pppppcStack_2e0;
  }
  ppppppcVar21 = ppppppcVar2;
  if (pppppcVar22 != (char *****)0x0) {
    ppppppcVar1 = (char ******)((long)ppppppcVar2 + (long)pppppcVar22);
    ppppppcVar20 = ppppppcVar2;
    do {
      cVar3 = *(char *)ppppppcVar20;
      lVar18 = (long)cVar3;
      if (cVar3 < 0) {
        ___maskrune(lVar18,0x4000);
        uVar14 = (uint)lVar18;
      }
      else {
        uVar14 = *(uint *)(puVar11 + (ulong)(uint)(int)cVar3 * 4 + 0x3c) & 0x4000;
      }
      ppppppcVar21 = ppppppcVar20;
      if (uVar14 == 0) break;
      ppppppcVar20 = (char ******)((long)ppppppcVar20 + 1);
      pppppcVar22 = (char *****)((long)pppppcVar22 + -1);
      ppppppcVar21 = ppppppcVar1;
    } while (pppppcVar22 != (char *****)0x0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
            (&pppppcStack_2e0,0,(long)ppppppcVar21 - (long)ppppppcVar2);
  extraout_x8[1] = ppppuStack_2d8;
  *extraout_x8 = pppppcStack_2e0;
  extraout_x8[2] = ppppuStack_2d0;
  ppppuStack_2d8 = (undefined8 ****)0x0;
  ppppuStack_2d0 = (undefined8 ****)0x0;
  pppppcStack_2e0 = (char *****)0x0;
  if (lStack_2f0 < 0) {
    __ZdlPv(apppppcStack_300[0]);
  }
  return;
}



/* Entry: 107f49468; end: 107f49527;  */

void FUN_107f49468(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
            (&uStack_50,param_2,0,0x32,&uStack_31);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __ZdlPv(*param_2);
  }
  param_2[1] = uStack_48;
  *param_2 = uStack_50;
  param_2[2] = uStack_40;
  param_4[0x19] = 0;
  param_4[0x18] = 0;
  param_4[0x17] = 0;
  param_4[0x16] = 0;
  param_4[0x15] = 0;
  param_4[0x14] = 0;
  param_4[0x13] = 0;
  param_4[0x12] = 0;
  param_4[0x11] = 0;
  param_4[0x10] = 0;
  param_4[0xf] = 0;
  param_4[0xe] = 0;
  param_4[0xd] = 0;
  param_4[0xc] = 0;
  param_4[0xb] = 0;
  param_4[10] = 0;
  param_4[9] = 0;
  param_4[8] = 0;
  param_4[7] = 0;
  param_4[6] = 0;
  param_4[5] = 0;
  param_4[4] = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  param_4[1] = 0;
  *param_4 = 0xffffffffffffffff;
  FUN_107f49528(*param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 107f49528; end: 107f4a237;  */

/* WARNING: Removing unreachable block (ram,0x000107f4a034) */
/* WARNING: Removing unreachable block (ram,0x000107f49ebc) */
/* WARNING: Removing unreachable block (ram,0x000107f49e24) */
/* WARNING: Removing unreachable block (ram,0x000107f49d18) */
/* WARNING: Removing unreachable block (ram,0x000107f499e4) */
/* WARNING: Removing unreachable block (ram,0x000107f49a4c) */
/* WARNING: Removing unreachable block (ram,0x000107f4987c) */
/* WARNING: Removing unreachable block (ram,0x000107f497a0) */
/* WARNING: Removing unreachable block (ram,0x000107f49758) */
/* WARNING: Removing unreachable block (ram,0x000107f49830) */
/* WARNING: Removing unreachable block (ram,0x000107f49908) */
/* WARNING: Removing unreachable block (ram,0x000107f49998) */
/* WARNING: Removing unreachable block (ram,0x000107f49ce4) */
/* WARNING: Removing unreachable block (ram,0x000107f49dfc) */
/* WARNING: Removing unreachable block (ram,0x000107f49eac) */
/* WARNING: Removing unreachable block (ram,0x000107f49fb8) */
/* WARNING: Removing unreachable block (ram,0x000107f4a044) */

void FUN_107f49528(long param_1,undefined8 *param_2,uint param_3,undefined8 *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *****ppppplVar9;
  undefined8 *puVar10;
  long *****ppppplVar11;
  bool bVar12;
  long lVar13;
  undefined1 *puVar14;
  long ******pppppplVar15;
  char ******ppppppcVar16;
  undefined1 *puVar17;
  char ******ppppppcVar18;
  char ******ppppppcVar19;
  undefined1 *puVar20;
  long *plVar21;
  long ******pppppplVar22;
  long *plVar23;
  long ******pppppplVar24;
  long *plVar25;
  undefined1 auStack_198 [8];
  undefined1 *puStack_190;
  char *****pppppcStack_180;
  long lStack_178;
  ulong uStack_170;
  char *****pppppcStack_160;
  long lStack_158;
  ulong uStack_150;
  char *****pppppcStack_140;
  long lStack_138;
  ulong uStack_130;
  long *****ppppplStack_128;
  long *****ppppplStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long *****ppppplStack_108;
  long *****ppppplStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *****ppppplStack_b0;
  long ****pppplStack_a8;
  long ****pppplStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000100033dac(&pppppcStack_180,*param_2,param_2[1]);
  }
  else {
    lStack_178 = param_2[1];
    pppppcStack_180 = (char *****)*param_2;
    uStack_170 = param_2[2];
  }
  ppppppcVar16 = (char ******)pppppcStack_180;
  ppppppcVar18 = (char ******)((long)pppppcStack_180 + lStack_178);
  if (-1 < (long)uStack_170) {
    ppppppcVar16 = &pppppcStack_180;
    ppppppcVar18 = (char ******)((long)&pppppcStack_180 + (uStack_170 >> 0x38));
  }
  for (; uStack_130 = uStack_170, lStack_138 = lStack_178, pppppcStack_140 = pppppcStack_180,
      puVar1 = PTR___DefaultRuneLocale_11034bcf8, ppppppcVar16 != ppppppcVar18;
      ppppppcVar16 = (char ******)((long)ppppppcVar16 + 1)) {
    cVar3 = *(char *)ppppppcVar16;
    ___tolower();
    *(char *)ppppppcVar16 = cVar3;
  }
  uStack_150 = uStack_170;
  lStack_158 = lStack_178;
  pppppcStack_160 = pppppcStack_180;
  lStack_178 = 0;
  uStack_170 = 0;
  pppppcStack_180 = (char *****)0x0;
  ppppppcVar18 = (char ******)pppppcStack_140;
  ppppppcVar16 = (char ******)((long)pppppcStack_140 + lStack_138);
  if (-1 < (long)uStack_130) {
    ppppppcVar18 = &pppppcStack_160;
    ppppppcVar16 = (char ******)((long)&pppppcStack_160 + (uStack_130 >> 0x38));
  }
  if (ppppppcVar18 == ppppppcVar16) {
  }
  else {
    do {
      cVar3 = *(char *)ppppppcVar18;
      lVar13 = (long)cVar3;
      if (cVar3 < 0) {
        ___maskrune(lVar13,0x2000);
        uVar4 = (uint)lVar13;
      }
      else {
        uVar4 = *(uint *)(puVar1 + (ulong)(uint)(int)cVar3 * 4 + 0x3c) & 0x2000;
      }
      if (uVar4 != 0) {
        cVar3 = ' ';
      }
      ppppppcVar19 = (char ******)((long)ppppppcVar18 + 1);
      *(char *)ppppppcVar18 = cVar3;
      ppppppcVar18 = ppppppcVar19;
    } while (ppppppcVar19 != ppppppcVar16);
    lStack_138 = lStack_158;
    pppppcStack_140 = pppppcStack_160;
    uStack_130 = uStack_150;
    if ((long)uStack_170 < 0) {
      __ZdlPv(pppppcStack_180);
    }
  }
  FUN_107f4c860(auStack_198,&pppppcStack_140,0x20);
  ppppplStack_128 = (long *****)&ppppplStack_128;
  lStack_118 = 0;
  ppppplStack_120 = ppppplStack_128;
  if (puStack_190 != auStack_198) {
    puVar14 = puStack_190;
    do {
      iVar5 = (int)puVar14 + 0x10;
      FUN_107f4cb30();
      puVar17 = *(undefined1 **)(puVar14 + 8);
      if (iVar5 != 0) {
        if (puVar17 == auStack_198) {
          puVar20 = (undefined1 *)0x1;
        }
        else {
          do {
            puVar20 = puVar17 + 0x10;
            FUN_107f4cb30();
            if ((int)puVar20 == 0) break;
            puVar17 = *(undefined1 **)(puVar17 + 8);
          } while (puVar17 != auStack_198);
        }
        FUN_107f4cd48(&ppppplStack_128,&ppppplStack_128,auStack_198,puVar14,puVar17);
        if (((ulong)puVar20 & 1) == 0) {
          puVar17 = *(undefined1 **)(puVar17 + 8);
        }
      }
      puVar14 = puVar17;
    } while (puVar14 != auStack_198);
  }
  func_0x00010046a278(&ppppplStack_128);
  FUN_107f4cdc0(&ppppplStack_128,auStack_198);
  func_0x00010002b838(&uStack_90,&UNK_10f4664d3);
  lVar13 = param_1;
  FUN_107f4cf04(param_1,&ppppplStack_128,&uStack_90);
  if (lVar13 != 0) {
    uVar4 = *(uint *)(lVar13 + 0x28);
    if (2 < uVar4) {
      uVar4 = 0xffffffff;
    }
    *(undefined4 *)param_4 = 0;
    *(uint *)((long)param_4 + 4) = uVar4;
    func_0x00010002b838(&ppppplStack_b0,&UNK_10f4664ae);
    FUN_107f4d3e0(param_4,(uint *)(lVar13 + 0x28),&ppppplStack_b0);
  }
  if (lStack_118 < 0) {
    __ZdlPv(ppppplStack_128);
  }
  if (lVar13 != 0) goto LAB_107f4a05c;
  if ((param_3 & 1) != 0) {
    FUN_107f4cdc0(&ppppplStack_128,auStack_198);
    lVar13 = param_1 + 0x78;
    func_0x000104bdb3d4(lVar13,&ppppplStack_128);
    bVar12 = false;
    if (lVar13 != 0) {
      if (*(char *)(lVar13 + 0x27) < '\0') {
        func_0x000100033dac(&uStack_90,*(undefined8 *)(lVar13 + 0x10),*(undefined8 *)(lVar13 + 0x18)
                           );
      }
      else {
        uStack_88 = *(undefined8 *)(lVar13 + 0x18);
        uStack_90 = *(undefined8 *)(lVar13 + 0x10);
        uStack_80 = *(undefined8 *)(lVar13 + 0x20);
      }
      lVar6 = param_1;
      FUN_107f4d644(param_1,lVar13 + 0x28,&uStack_90);
      bVar12 = false;
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x28) == 1) {
          *param_4 = 0x100000000;
          func_0x00010002b838(&ppppplStack_b0,&UNK_10f4664ae);
          FUN_107f4d3e0(param_4,(int *)(lVar6 + 0x28),&ppppplStack_b0);
          bVar12 = true;
        }
        else {
          bVar12 = false;
        }
      }
    }
    if (lStack_118 < 0) {
      __ZdlPv(ppppplStack_128);
    }
    if (bVar12) goto LAB_107f4a05c;
  }
  if ((param_3 >> 1 & 1) != 0) {
    FUN_107f4cdc0(&ppppplStack_128,auStack_198);
    lVar13 = param_1 + 0x28;
    func_0x000104bdb3d4(lVar13,&ppppplStack_128);
    bVar12 = false;
    if (lVar13 != 0) {
      func_0x00010002b838(&uStack_90,&UNK_10f4664d3);
      lVar6 = param_1;
      FUN_107f4cf04(param_1,lVar13 + 0x28,&uStack_90);
      bVar12 = false;
      if (lVar6 != 0) {
        *(undefined4 *)param_4 = 0;
        uVar4 = *(uint *)(lVar6 + 0x28);
        if (2 < uVar4) {
          uVar4 = 0xffffffff;
        }
        *(uint *)((long)param_4 + 4) = uVar4;
        FUN_107f4d3e0(param_4,(uint *)(lVar6 + 0x28),*(undefined8 *)(lVar6 + 0x30));
        bVar12 = true;
      }
    }
    if (lStack_118 < 0) {
      __ZdlPv(ppppplStack_128);
    }
    if (bVar12) goto LAB_107f4a05c;
    FUN_107f4cdc0(&ppppplStack_128,auStack_198);
    lVar13 = param_1 + 0x50;
    func_0x000104bdb3d4(lVar13,&ppppplStack_128);
    bVar12 = false;
    if (lVar13 != 0) {
      func_0x00010002b838(&uStack_90,&UNK_10f4664d3);
      lVar6 = param_1;
      FUN_107f4cf04(param_1,lVar13 + 0x28,&uStack_90);
      bVar12 = false;
      if (lVar6 != 0) {
        *(undefined4 *)param_4 = 0;
        uVar4 = *(uint *)(lVar6 + 0x28);
        if (2 < uVar4) {
          uVar4 = 0xffffffff;
        }
        *(uint *)((long)param_4 + 4) = uVar4;
        FUN_107f4d3e0(param_4,(uint *)(lVar6 + 0x28),*(undefined8 *)(lVar6 + 0x30));
        bVar12 = true;
      }
    }
    if (lStack_118 < 0) {
      __ZdlPv(ppppplStack_128);
    }
    if (bVar12) goto LAB_107f4a05c;
  }
  if ((param_3 & 1) == 0) {
    if ((param_3 >> 2 & 1) == 0) goto LAB_107f4a05c;
  }
  else {
    FUN_107f4cdc0(&ppppplStack_128,auStack_198);
    lVar13 = param_1 + 0xa0;
    func_0x000104bdb3d4(lVar13,&ppppplStack_128);
    bVar12 = false;
    if (lVar13 != 0) {
      func_0x00010002b838(&uStack_90,&UNK_10f4664d3);
      lVar6 = param_1;
      FUN_107f4cf04(param_1,lVar13 + 0x28,&uStack_90);
      bVar12 = false;
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x28) == 2) {
          *param_4 = 0x200000000;
          func_0x00010002b838(&ppppplStack_b0,&UNK_10f4664ae);
          FUN_107f4d3e0(param_4,(int *)(lVar6 + 0x28),&ppppplStack_b0);
          bVar12 = true;
        }
        else {
          bVar12 = false;
        }
      }
    }
    if (lStack_118 < 0) {
      __ZdlPv(ppppplStack_128);
    }
    if ((param_3 & 4) == 0) {
      bVar12 = true;
    }
    if (bVar12) goto LAB_107f4a05c;
  }
  FUN_107f4cdc0(&uStack_90,auStack_198);
  ppppplStack_128 = (long *****)CONCAT44(ppppplStack_128._4_4_,0xffffffff);
  ppppplStack_120 = (long *****)0x0;
  lStack_118 = 0;
  uStack_110 = 0;
  lStack_f8 = 0;
  plVar25 = *(long **)(param_1 + 0x10);
  ppppplStack_108 = (long *****)&ppppplStack_108;
  ppppplStack_100 = (long *****)&ppppplStack_108;
  if (plVar25 == (long *)0x0) {
LAB_107f49cb8:
    bVar12 = false;
  }
  else {
    plVar21 = (long *)0x3e8;
    do {
      uVar8 = (ulong)*(char *)((long)plVar25 + 0x27);
      if ((long)uVar8 < 0) {
        uVar8 = plVar25[3];
      }
      if (4 < uVar8) {
        plVar7 = plVar25 + 2;
        FUN_107f4d908(plVar7,&uStack_90);
        if ((uint)plVar7 < (uint)plVar21) {
          ppppplStack_128 = (long *****)CONCAT44(ppppplStack_128._4_4_,*(undefined4 *)(plVar25 + 5))
          ;
          if (&ppppplStack_128 != (long ******)(plVar25 + 5)) {
            func_0x000104c351d0(&ppppplStack_120,plVar25[6],plVar25[7],
                                (plVar25[7] - plVar25[6] >> 3) * -0x5555555555555555);
            plVar21 = plVar25 + 9;
            plVar23 = (long *)plVar25[10];
            pppppplVar22 = (long ******)ppppplStack_100;
            if ((plVar23 != plVar21) && ((long ******)ppppplStack_100 != &ppppplStack_108)) {
              do {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                          (pppppplVar22 + 2,plVar23 + 2);
                plVar23 = (long *)plVar23[1];
                pppppplVar22 = (long ******)pppppplVar22[1];
              } while (plVar23 != plVar21 && pppppplVar22 != &ppppplStack_108);
            }
            if (pppppplVar22 == &ppppplStack_108) {
              if (plVar23 != plVar21) {
                pppppplVar22 = &ppppplStack_108;
                func_0x000100469cc8(&ppppplStack_108,0,0,plVar23 + 2);
                plVar23 = (long *)plVar23[1];
                if (plVar23 == plVar21) {
                  lVar13 = 1;
                  pppppplVar15 = pppppplVar22;
                }
                else {
                  lVar13 = 1;
                  pppppplVar24 = pppppplVar22;
                  do {
                    pppppplVar15 = &ppppplStack_108;
                    func_0x000100469cc8(&ppppplStack_108,pppppplVar24,0,plVar23 + 2);
                    pppppplVar24[1] = (long *****)pppppplVar15;
                    lVar13 = lVar13 + 1;
                    plVar23 = (long *)plVar23[1];
                    pppppplVar24 = pppppplVar15;
                  } while (plVar23 != plVar21);
                }
                ppppplStack_108[1] = (long ****)pppppplVar22;
                *pppppplVar22 = ppppplStack_108;
                pppppplVar15[1] = (long *****)&ppppplStack_108;
                lStack_f8 = lStack_f8 + lVar13;
                ppppplStack_108 = (long *****)pppppplVar15;
              }
            }
            else {
              ppppplVar9 = (long *****)ppppplStack_108[1];
              ppppplVar11 = *pppppplVar22;
              ppppplVar11[1] = (long ****)ppppplVar9;
              *ppppplVar9 = (long ****)ppppplVar11;
              do {
                pppppplVar15 = (long ******)pppppplVar22[1];
                lStack_f8 = lStack_f8 + -1;
                func_0x00010046a248(&ppppplStack_108,pppppplVar22);
                pppppplVar22 = pppppplVar15;
              } while (pppppplVar15 != &ppppplStack_108);
            }
          }
          plVar21 = plVar7;
          if ((uint)plVar7 < 2) goto LAB_107f49c88;
        }
      }
      plVar25 = (long *)*plVar25;
    } while (plVar25 != (long *)0x0);
    if (2 < (uint)plVar21) goto LAB_107f49cb8;
LAB_107f49c88:
    uVar4 = (uint)ppppplStack_128;
    if (2 < (uint)ppppplStack_128) {
      uVar4 = 0xffffffff;
    }
    *(undefined4 *)param_4 = 0;
    *(uint *)((long)param_4 + 4) = uVar4;
    if (*(char *)((long)ppppplStack_120 + 0x17) < '\0') {
      func_0x000100033dac(&ppppplStack_b0,*ppppplStack_120,ppppplStack_120[1]);
    }
    else {
      pppplStack_a8 = ppppplStack_120[1];
      ppppplStack_b0 = (long *****)*ppppplStack_120;
      pppplStack_a0 = ppppplStack_120[2];
    }
    FUN_107f4d3e0(param_4,&ppppplStack_128,&ppppplStack_b0);
    bVar12 = true;
  }
  func_0x00010046a278(&ppppplStack_108);
  ppppplStack_b0 = (long *****)&ppppplStack_120;
  func_0x00010007e5dc(&ppppplStack_b0);
  if (bVar12) goto LAB_107f4a05c;
  FUN_107f4cdc0(&ppppplStack_128,auStack_198);
  func_0x00010002b838(&uStack_90,&UNK_10f4664ae);
  plVar25 = *(long **)(param_1 + 0x88);
  if (plVar25 == (long *)0x0) {
LAB_107f49da0:
    bVar12 = false;
  }
  else {
    plVar21 = (long *)0x3e8;
    do {
      uVar8 = (ulong)*(char *)((long)plVar25 + 0x27);
      if ((long)uVar8 < 0) {
        uVar8 = plVar25[3];
      }
      if (4 < uVar8) {
        plVar7 = plVar25 + 2;
        FUN_107f4d908(plVar7,&ppppplStack_128);
        if (((uint)plVar7 < (uint)plVar21) &&
           (__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&uStack_90,plVar25 + 2), plVar21 = plVar7, (uint)plVar7 < 2))
        goto LAB_107f49da8;
      }
      plVar25 = (long *)*plVar25;
    } while (plVar25 != (long *)0x0);
    if (2 < (uint)plVar21) goto LAB_107f49da0;
LAB_107f49da8:
    lVar13 = param_1 + 0x78;
    func_0x000104bdb3d4(lVar13,&uStack_90);
    if (lVar13 == 0) {
      func_0x000104c03f28(&UNK_10f639994);
      goto LAB_107f4a190;
    }
    if (*(char *)(lVar13 + 0x3f) < '\0') {
      func_0x000100033dac(&ppppplStack_b0,*(undefined8 *)(lVar13 + 0x28),
                          *(undefined8 *)(lVar13 + 0x30));
    }
    else {
      pppplStack_a8 = *(long *****)(lVar13 + 0x30);
      ppppplStack_b0 = *(long ******)(lVar13 + 0x28);
      pppplStack_a0 = *(long *****)(lVar13 + 0x38);
    }
    uStack_c8 = uStack_88;
    uStack_d0 = uStack_90;
    uStack_c0 = uStack_80;
    lVar13 = param_1;
    FUN_107f4d644(param_1,&ppppplStack_b0,&uStack_d0);
    if ((lVar13 == 0) || (*(int *)(lVar13 + 0x28) != 1)) {
      bVar12 = false;
    }
    else {
      *param_4 = 0x100000000;
      puVar10 = *(undefined8 **)(lVar13 + 0x30);
      if (*(char *)((long)puVar10 + 0x17) < '\0') {
        func_0x000100033dac(&uStack_f0,*puVar10,puVar10[1]);
      }
      else {
        uStack_e8 = puVar10[1];
        uStack_f0 = *puVar10;
        lStack_e0 = puVar10[2];
      }
      FUN_107f4d3e0(param_4,(int *)(lVar13 + 0x28),&uStack_f0);
      if (lStack_e0 < 0) {
        __ZdlPv(uStack_f0);
      }
      bVar12 = true;
    }
  }
  if (lStack_118 < 0) {
    __ZdlPv(ppppplStack_128);
  }
  if (!bVar12) {
    FUN_107f4cdc0(&ppppplStack_128,auStack_198);
    func_0x00010002b838(&uStack_90,&UNK_10f4664ae);
    plVar25 = *(long **)(param_1 + 0xb0);
    if (plVar25 != (long *)0x0) {
      plVar21 = (long *)0x3e8;
      do {
        uVar8 = (ulong)*(char *)((long)plVar25 + 0x27);
        if ((long)uVar8 < 0) {
          uVar8 = plVar25[3];
        }
        if (4 < uVar8) {
          plVar7 = plVar25 + 2;
          FUN_107f4d908(plVar7,&ppppplStack_128);
          if (((uint)plVar7 < (uint)plVar21) &&
             (__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (&uStack_90,plVar25 + 2), plVar21 = plVar7, (uint)plVar7 < 2))
          goto LAB_107f49f54;
        }
        plVar25 = (long *)*plVar25;
      } while (plVar25 != (long *)0x0);
      if ((uint)plVar21 < 3) {
LAB_107f49f54:
        lVar13 = param_1 + 0xa0;
        func_0x000104bdb3d4(lVar13,&uStack_90);
        if (lVar13 == 0) {
          func_0x000104c03f28(&UNK_10f639994);
LAB_107f4a190:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x107f4a194);
          (*pcVar2)();
        }
        if (*(char *)(lVar13 + 0x3f) < '\0') {
          func_0x000100033dac(&ppppplStack_b0,*(undefined8 *)(lVar13 + 0x28),
                              *(undefined8 *)(lVar13 + 0x30));
        }
        else {
          pppplStack_a8 = *(long *****)(lVar13 + 0x30);
          ppppplStack_b0 = *(long ******)(lVar13 + 0x28);
          pppplStack_a0 = *(long *****)(lVar13 + 0x38);
        }
        func_0x00010002b838(&uStack_d0,&UNK_10f4664d3);
        FUN_107f4cf04(param_1,&ppppplStack_b0,&uStack_d0);
        if ((param_1 != 0) && (*(int *)(param_1 + 0x28) == 2)) {
          *param_4 = 0x200000000;
          puVar10 = *(undefined8 **)(param_1 + 0x30);
          if (*(char *)((long)puVar10 + 0x17) < '\0') {
            func_0x000100033dac(&uStack_f0,*puVar10,puVar10[1]);
          }
          else {
            uStack_e8 = puVar10[1];
            uStack_f0 = *puVar10;
            lStack_e0 = puVar10[2];
          }
          FUN_107f4d3e0(param_4,(int *)(param_1 + 0x28),&uStack_f0);
          if (lStack_e0 < 0) {
            __ZdlPv(uStack_f0);
          }
        }
      }
    }
    if (lStack_118 < 0) {
      __ZdlPv(ppppplStack_128);
    }
  }
LAB_107f4a05c:
  func_0x00010046a278(auStack_198);
  if ((long)uStack_130 < 0) {
    __ZdlPv(pppppcStack_140);
  }
  return;
}



/* Entry: 107f4a238; end: 107f4aa4b;  */

/* WARNING: Removing unreachable block (ram,0x000107f4bb28) */
/* WARNING: Removing unreachable block (ram,0x000107f4b654) */
/* WARNING: Removing unreachable block (ram,0x000107f4b1a0) */
/* WARNING: Removing unreachable block (ram,0x000107f4ad28) */
/* WARNING: Removing unreachable block (ram,0x000107f4a848) */
/* WARNING: Removing unreachable block (ram,0x000107f4a5f0) */
/* WARNING: Removing unreachable block (ram,0x000107f4a510) */
/* WARNING: Removing unreachable block (ram,0x000107f4a294) */
/* WARNING: Removing unreachable block (ram,0x000107f4a784) */
/* WARNING: Removing unreachable block (ram,0x000107f4a520) */
/* WARNING: Removing unreachable block (ram,0x000107f4aaa8) */
/* WARNING: Removing unreachable block (ram,0x000107f4af80) */
/* WARNING: Removing unreachable block (ram,0x000107f4b3fc) */
/* WARNING: Removing unreachable block (ram,0x000107f4b878) */
/* WARNING: Removing unreachable block (ram,0x000107f4bd88) */
/* WARNING: Removing unreachable block (ram,0x000107f4b40c) */
/* WARNING: Removing unreachable block (ram,0x000107f4a600) */
/* WARNING: Removing unreachable block (ram,0x000107f4ad38) */
/* WARNING: Removing unreachable block (ram,0x000107f4bb38) */
/* WARNING: Removing unreachable block (ram,0x000107f4b584) */
/* WARNING: Removing unreachable block (ram,0x000107f4a794) */
/* WARNING: Removing unreachable block (ram,0x000107f4aebc) */
/* WARNING: Removing unreachable block (ram,0x000107f4bcbc) */
/* WARNING: Removing unreachable block (ram,0x000107f4b594) */
/* WARNING: Removing unreachable block (ram,0x000107f4aecc) */
/* WARNING: Removing unreachable block (ram,0x000107f4bccc) */

void FUN_107f4a238(long param_1,long ******param_2)

{
  char ******ppppppcVar1;
  char ******ppppppcVar2;
  char cVar3;
  char *pcVar4;
  byte bVar5;
  undefined7 uVar6;
  undefined7 uVar7;
  byte bVar8;
  undefined7 uVar9;
  undefined1 uVar10;
  undefined7 uVar11;
  undefined *puVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  uint uVar15;
  long ******pppppplVar16;
  long ******pppppplVar17;
  long ******pppppplVar18;
  long ******pppppplVar19;
  undefined8 ******ppppppuVar20;
  undefined8 ******ppppppuVar21;
  long ***ppplVar22;
  long *****ppppplVar23;
  undefined8 *extraout_x8;
  undefined1 *puVar24;
  long ****pppplVar25;
  long ******pppppplVar26;
  long ******pppppplVar27;
  undefined8 ******ppppppuVar28;
  long ******unaff_x21;
  long lVar29;
  char ******ppppppcVar30;
  long ******unaff_x22;
  char ******ppppppcVar31;
  long ******unaff_x23;
  char *****pppppcVar32;
  long ******unaff_x24;
  undefined8 ******unaff_x25;
  undefined8 *unaff_x27;
  char *****apppppcStack_9a0 [2];
  long lStack_990;
  char *****pppppcStack_980;
  undefined8 ****ppppuStack_978;
  undefined8 ****ppppuStack_970;
  long ***ppplStack_960;
  undefined8 *****pppppuStack_958;
  long *****ppppplStack_950;
  long *****ppppplStack_948;
  long *****ppppplStack_940;
  long *****ppppplStack_938;
  undefined8 *****pppppuStack_930;
  long *****ppppplStack_928;
  undefined1 ****ppppuStack_920;
  code *pcStack_918;
  undefined8 *****pppppuStack_910;
  long ***ppplStack_908;
  undefined1 *puStack_900;
  long *****ppppplStack_8f8;
  undefined8 *puStack_8f0;
  long *****ppppplStack_8e8;
  long *****ppppplStack_8e0;
  undefined7 uStack_8d8;
  undefined1 uStack_8d1;
  undefined7 uStack_8d0;
  byte bStack_8c9;
  undefined8 *****pppppuStack_8c0;
  undefined7 uStack_8b8;
  undefined1 uStack_8b1;
  undefined7 uStack_8b0;
  byte bStack_8a9;
  long *****appppplStack_8a0 [4];
  long *plStack_880;
  long *plStack_878;
  long *plStack_870;
  long *plStack_860;
  long *plStack_858;
  long *plStack_850;
  long *plStack_840;
  long *plStack_838;
  long *plStack_830;
  long *plStack_820;
  long *plStack_818;
  long *plStack_810;
  undefined1 auStack_800 [8];
  undefined8 ****appppuStack_7f8 [3];
  undefined1 auStack_7e0 [24];
  long ****pppplStack_7c8;
  long *****ppppplStack_7c0;
  long ***ppplStack_7b0;
  long ***ppplStack_7a8;
  undefined7 *puStack_798;
  undefined8 *****pppppuStack_790;
  undefined7 uStack_788;
  undefined1 uStack_781;
  undefined7 uStack_780;
  undefined1 uStack_779;
  long *****ppppplStack_778;
  undefined7 uStack_770;
  undefined1 uStack_769;
  undefined7 uStack_768;
  byte bStack_761;
  undefined1 auStack_760 [8];
  undefined1 auStack_758 [16];
  undefined8 auStack_748 [2];
  char cStack_731;
  undefined7 uStack_730;
  undefined1 uStack_729;
  undefined7 uStack_728;
  undefined1 uStack_721;
  undefined8 ***pppuStack_720;
  long lStack_718;
  long *****ppppplStack_700;
  undefined8 *puStack_6f8;
  long *****ppppplStack_6f0;
  undefined8 *****pppppuStack_6e8;
  long *****ppppplStack_6e0;
  long *****ppppplStack_6d8;
  long *****ppppplStack_6d0;
  long *****ppppplStack_6c8;
  long *****ppppplStack_6c0;
  long ***ppplStack_6b8;
  undefined1 ***pppuStack_6b0;
  code *pcStack_6a8;
  long *****ppppplStack_6a0;
  long ***ppplStack_698;
  long *****ppppplStack_690;
  undefined8 *puStack_688;
  long ***ppplStack_680;
  long *****ppppplStack_678;
  long *****ppppplStack_670;
  undefined7 uStack_668;
  undefined1 uStack_661;
  undefined7 uStack_660;
  byte bStack_659;
  long *****ppppplStack_650;
  undefined7 uStack_648;
  undefined1 uStack_641;
  undefined7 uStack_640;
  byte bStack_639;
  long *****ppppplStack_630;
  long ***ppplStack_628;
  long ***ppplStack_620;
  long *plStack_610;
  long *plStack_608;
  long *plStack_600;
  long *plStack_5f0;
  long *plStack_5e8;
  long *plStack_5e0;
  long *plStack_5d0;
  long *plStack_5c8;
  long *plStack_5c0;
  undefined1 auStack_5b0 [8];
  long ****apppplStack_5a8 [3];
  undefined1 auStack_590 [24];
  undefined1 auStack_578 [8];
  undefined1 *puStack_570;
  long ***ppplStack_560;
  long ***ppplStack_558;
  undefined8 *puStack_548;
  long *****ppppplStack_540;
  undefined7 uStack_538;
  undefined1 uStack_531;
  undefined7 uStack_530;
  undefined1 uStack_529;
  long *****ppppplStack_528;
  undefined8 uStack_520;
  undefined7 uStack_518;
  byte bStack_511;
  undefined8 uStack_510;
  undefined1 auStack_508 [15];
  char acStack_4f9 [9];
  undefined8 uStack_4f0;
  undefined7 uStack_4e8;
  undefined1 uStack_4e1;
  long ***ppplStack_4e0;
  long lStack_4d8;
  long *****ppppplStack_4c0;
  undefined8 *puStack_4b8;
  long *****ppppplStack_4b0;
  undefined8 *****pppppuStack_4a8;
  long *****ppppplStack_4a0;
  long *****ppppplStack_498;
  long *****ppppplStack_490;
  long *****ppppplStack_488;
  long *****ppppplStack_480;
  long *****ppppplStack_478;
  undefined1 **ppuStack_470;
  code *pcStack_468;
  undefined8 *****pppppuStack_460;
  long *****ppppplStack_458;
  long *****ppppplStack_450;
  long *****ppppplStack_448;
  long *****ppppplStack_440;
  undefined7 uStack_438;
  undefined1 uStack_431;
  undefined7 uStack_430;
  byte bStack_429;
  undefined8 *****pppppuStack_420;
  undefined7 uStack_418;
  undefined1 uStack_411;
  undefined7 uStack_410;
  byte bStack_409;
  undefined8 *****pppppuStack_400;
  long ***ppplStack_3f8;
  long ***ppplStack_3f0;
  long ***ppplStack_3e0;
  long ***ppplStack_3d8;
  long ***ppplStack_3d0;
  long ***ppplStack_3c0;
  long ***ppplStack_3b8;
  long ***ppplStack_3b0;
  undefined4 auStack_3a8 [2];
  long ****pppplStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 *****pppppuStack_388;
  undefined8 *****pppppuStack_380;
  undefined8 uStack_378;
  long ***ppplStack_370;
  long ***ppplStack_368;
  long ***ppplStack_360;
  undefined8 *****pppppuStack_358;
  undefined8 uStack_350;
  undefined7 uStack_348;
  byte bStack_341;
  long *****ppppplStack_340;
  long *****ppppplStack_338;
  undefined8 *puStack_328;
  long *****ppppplStack_320;
  undefined7 uStack_318;
  undefined1 uStack_311;
  undefined7 uStack_310;
  byte bStack_309;
  long *****ppppplStack_308;
  undefined8 uStack_300;
  undefined7 uStack_2f8;
  byte bStack_2f1;
  long ****pppplStack_2f0;
  undefined1 auStack_2e8 [15];
  char acStack_2d9 [9];
  undefined8 uStack_2d0;
  undefined7 uStack_2c8;
  undefined1 uStack_2c1;
  long ***ppplStack_2c0;
  long lStack_2b8;
  long lStack_2a0;
  undefined8 *puStack_298;
  long ***ppplStack_290;
  undefined8 *****pppppuStack_288;
  long *****ppppplStack_280;
  long *****ppppplStack_278;
  long *****ppppplStack_270;
  long *****ppppplStack_268;
  long *****ppppplStack_260;
  long *****ppppplStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  long *****ppppplStack_240;
  long lStack_238;
  long ***ppplStack_230;
  long *****ppppplStack_228;
  long *****ppppplStack_220;
  undefined7 uStack_218;
  undefined1 uStack_211;
  undefined7 uStack_210;
  byte bStack_209;
  undefined8 *****pppppuStack_200;
  undefined7 uStack_1f8;
  undefined1 uStack_1f1;
  undefined7 uStack_1f0;
  byte bStack_1e9;
  undefined8 *****pppppuStack_1e0;
  long ***ppplStack_1d8;
  long ***ppplStack_1d0;
  undefined8 *****pppppuStack_1c0;
  long ***ppplStack_1b8;
  long ***ppplStack_1b0;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  undefined4 auStack_168 [2];
  long ****pppplStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *****pppppuStack_148;
  long *****ppppplStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined8 *****pppppuStack_118;
  undefined8 uStack_110;
  undefined7 uStack_108;
  byte bStack_101;
  long ***ppplStack_100;
  long ***ppplStack_f8;
  undefined8 *puStack_e8;
  long *****ppppplStack_e0;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  byte bStack_c9;
  long *****ppppplStack_c8;
  undefined8 uStack_c0;
  undefined7 uStack_b8;
  byte bStack_b1;
  long ****pppplStack_b0;
  undefined1 auStack_a8 [15];
  char acStack_99 [9];
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  long ***ppplStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010002b838(&ppppplStack_e0,&UNK_10f4664af);
  pppppplVar19 = param_2;
  FUN_107f4dbf4(&ppplStack_100);
  ppplStack_230 = ppplStack_f8;
  pppplVar25 = (long ****)ppplStack_100;
  if (ppplStack_100 != ppplStack_f8) {
    unaff_x24 = &ppppplStack_e0;
    ppppplStack_228 = (long *****)&ppppplStack_c8;
    param_2 = (long ******)&pppplStack_b0;
    unaff_x22 = (long ******)&pppplStack_160;
    unaff_x21 = &pppppuStack_148;
    unaff_x27 = &uStack_c0;
    ppppplStack_240 = (long *****)unaff_x21;
    lStack_238 = param_1;
    do {
      ppplVar22 = *pppplVar25;
      if (*(char *)((long)ppplVar22 + 0x17) < '\0') {
        func_0x000100033dac(&plStack_130,*ppplVar22,ppplVar22[1]);
      }
      else {
        plStack_128 = (long *)ppplVar22[1];
        plStack_130 = (long *)*ppplVar22;
        plStack_120 = (long *)ppplVar22[2];
      }
      FUN_107f4bf6c(&pppppuStack_118,&plStack_130);
      if ((long)plStack_120 < 0) {
        __ZdlPv(plStack_130);
      }
      ppplVar22 = *pppplVar25;
      if (*(char *)((long)ppplVar22 + 0x2f) < '\0') {
        func_0x000100033dac(&plStack_180,ppplVar22[3],ppplVar22[4]);
      }
      else {
        plStack_178 = (long *)ppplVar22[4];
        plStack_180 = (long *)ppplVar22[3];
        plStack_170 = (long *)ppplVar22[5];
      }
      FUN_107f4bf6c(&ppppplStack_e0,&plStack_180);
      ppplVar22 = *pppplVar25;
      if (*(char *)((long)ppplVar22 + 0x47) < '\0') {
        func_0x000100033dac(&plStack_1a0,ppplVar22[6],ppplVar22[7]);
      }
      else {
        plStack_198 = (long *)ppplVar22[7];
        plStack_1a0 = (long *)ppplVar22[6];
        plStack_190 = (long *)ppplVar22[8];
      }
      FUN_107f4bf6c(ppppplStack_228,&plStack_1a0);
      func_0x00010002b838(param_2,&UNK_10f4664d3);
      uStack_90._0_7_ = 0;
      uStack_90._7_1_ = 0;
      uStack_88 = 0;
      uStack_81 = 0;
      ppplStack_80 = (long ***)0x0;
      func_0x00010007e1e8(&uStack_90,&ppppplStack_e0,acStack_99 + 1,3);
      auStack_168[0] = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      pppplStack_160 = (long ****)0x0;
      func_0x00010015bcc4(unaff_x22,CONCAT17(uStack_90._7_1_,(undefined7)uStack_90),
                          CONCAT17(uStack_81,uStack_88),
                          (CONCAT17(uStack_81,uStack_88) -
                           CONCAT17(uStack_90._7_1_,(undefined7)uStack_90) >> 3) *
                          -0x5555555555555555);
      pppppuStack_148 = &pppppuStack_148;
      uStack_138 = 0;
      puStack_e8 = &uStack_90;
      ppppplStack_140 = (long *****)unaff_x21;
      func_0x00010007e5dc(&puStack_e8);
      lVar29 = 0;
      do {
        if (acStack_99[lVar29] < '\0') {
          __ZdlPv(*(undefined8 *)((long)&pppplStack_b0 + lVar29));
        }
        lVar29 = lVar29 + -0x18;
      } while (lVar29 != -0x48);
      if ((long)plStack_190 < 0) {
        __ZdlPv(plStack_1a0);
      }
      if ((long)plStack_170 < 0) {
        __ZdlPv(plStack_180);
      }
      if (*(char *)((long)pppplStack_160 + 0x17) < '\0') {
        func_0x000100033dac(&pppppuStack_1c0,*pppplStack_160,pppplStack_160[1]);
      }
      else {
        ppplStack_1b0 = pppplStack_160[2];
        ppplStack_1b8 = pppplStack_160[1];
        pppppuStack_1c0 = (undefined8 *****)*pppplStack_160;
      }
      ppppppuVar21 = (undefined8 ******)pppppuStack_1c0;
      ppppppuVar20 = (undefined8 ******)((long)pppppuStack_1c0 + (long)ppplStack_1b8);
      if (-1 < (long)ppplStack_1b0) {
        ppppppuVar21 = &pppppuStack_1c0;
        ppppppuVar20 = (undefined8 ******)((long)&pppppuStack_1c0 + ((ulong)ppplStack_1b0 >> 0x38));
      }
      for (; ppppppuVar21 != ppppppuVar20;
          ppppppuVar21 = (undefined8 ******)((long)ppppppuVar21 + 1)) {
        uVar13 = *(undefined1 *)ppppppuVar21;
        ___tolower();
        *(undefined1 *)ppppppuVar21 = uVar13;
      }
      uStack_88 = SUB87(ppplStack_1b8,0);
      uStack_81 = (undefined1)((ulong)ppplStack_1b8 >> 0x38);
      uStack_90._0_7_ = SUB87(pppppuStack_1c0,0);
      uStack_90._7_1_ = (undefined1)((ulong)pppppuStack_1c0 >> 0x38);
      ppplStack_80 = ppplStack_1b0;
      ppplStack_1b8 = (long ***)0x0;
      ppplStack_1b0 = (long ***)0x0;
      pppppuStack_1c0 = (undefined8 ******)0x0;
      FUN_107f4c680(&ppppplStack_e0,&uStack_90,auStack_168);
      FUN_107f4c154(param_1,&ppppplStack_e0);
      func_0x00010046a278(auStack_a8);
      puStack_e8 = unaff_x27;
      func_0x00010007e5dc(&puStack_e8);
      if ((long)ppplStack_1b0 < 0) {
        __ZdlPv(pppppuStack_1c0);
      }
      if (*(char *)((long)pppplStack_160 + 0x2f) < '\0') {
        func_0x000100033dac(&pppppuStack_1e0,pppplStack_160[3],pppplStack_160[4]);
      }
      else {
        ppplStack_1d8 = pppplStack_160[4];
        pppppuStack_1e0 = (undefined8 *****)pppplStack_160[3];
        ppplStack_1d0 = pppplStack_160[5];
      }
      ppppppuVar21 = (undefined8 ******)pppppuStack_1e0;
      ppppppuVar20 = (undefined8 ******)((long)pppppuStack_1e0 + (long)ppplStack_1d8);
      if (-1 < (long)ppplStack_1d0) {
        ppppppuVar21 = &pppppuStack_1e0;
        ppppppuVar20 = (undefined8 ******)((long)&pppppuStack_1e0 + ((ulong)ppplStack_1d0 >> 0x38));
      }
      for (; ppppppuVar21 != ppppppuVar20;
          ppppppuVar21 = (undefined8 ******)((long)ppppppuVar21 + 1)) {
        uVar13 = *(undefined1 *)ppppppuVar21;
        ___tolower();
        *(undefined1 *)ppppppuVar21 = uVar13;
      }
      uStack_88 = SUB87(ppplStack_1d8,0);
      uStack_81 = (undefined1)((ulong)ppplStack_1d8 >> 0x38);
      uStack_90._0_7_ = SUB87(pppppuStack_1e0,0);
      uStack_90._7_1_ = (undefined1)((ulong)pppppuStack_1e0 >> 0x38);
      ppplStack_80 = ppplStack_1d0;
      ppplStack_1d8 = (long ***)0x0;
      ppplStack_1d0 = (long ***)0x0;
      pppppuStack_1e0 = (undefined8 ******)0x0;
      FUN_107f4c680(&ppppplStack_e0,&uStack_90,auStack_168);
      FUN_107f4c154(param_1,&ppppplStack_e0);
      func_0x00010046a278(auStack_a8);
      puStack_e8 = unaff_x27;
      func_0x00010007e5dc(&puStack_e8);
      if ((long)ppplStack_1d0 < 0) {
        __ZdlPv(pppppuStack_1e0);
      }
      if ((char)bStack_101 < '\0') {
        func_0x000100033dac(&pppppuStack_200,pppppuStack_118,uStack_110);
      }
      else {
        uStack_1f8 = (undefined7)uStack_110;
        uStack_1f1 = (undefined1)((ulong)uStack_110 >> 0x38);
        pppppuStack_200 = pppppuStack_118;
        uStack_1f0 = uStack_108;
        bStack_1e9 = bStack_101;
      }
      ppppppuVar21 = (undefined8 ******)pppppuStack_200;
      unaff_x25 = (undefined8 ******)pppppuStack_200;
      bVar5 = bStack_1e9;
      ppppppuVar20 = (undefined8 ******)((long)pppppuStack_200 + CONCAT17(uStack_1f1,uStack_1f8));
      if (-1 < (char)bStack_1e9) {
        ppppppuVar21 = &pppppuStack_200;
        ppppppuVar20 = (undefined8 ******)((long)&pppppuStack_200 + (ulong)bStack_1e9);
      }
      for (; ppppppuVar21 != ppppppuVar20;
          ppppppuVar21 = (undefined8 ******)((long)ppppppuVar21 + 1)) {
        uVar13 = *(undefined1 *)ppppppuVar21;
        pppppuStack_200 = unaff_x25;
        bStack_1e9 = bVar5;
        ___tolower();
        *(undefined1 *)ppppppuVar21 = uVar13;
        unaff_x25 = (undefined8 ******)pppppuStack_200;
        bVar5 = bStack_1e9;
      }
      uStack_90._0_7_ = uStack_1f8;
      uStack_90._7_1_ = uStack_1f1;
      uStack_88 = uStack_1f0;
      uStack_1f8 = 0;
      uStack_1f1 = 0;
      uStack_1f0 = 0;
      bStack_1e9 = 0;
      pppppuStack_200 = (undefined8 ******)0x0;
      if (*(char *)((long)pppplStack_160 + 0x17) < '\0') {
        func_0x000100033dac(&ppppplStack_220,*pppplStack_160,pppplStack_160[1]);
      }
      else {
        uStack_210 = SUB87(pppplStack_160[2],0);
        bStack_209 = (byte)((ulong)pppplStack_160[2] >> 0x38);
        uStack_218 = SUB87(pppplStack_160[1],0);
        uStack_211 = (undefined1)((ulong)pppplStack_160[1] >> 0x38);
        ppppplStack_220 = (long *****)*pppplStack_160;
      }
      pppppplVar19 = (long ******)ppppplStack_220;
      param_1 = lStack_238;
      pppppplVar16 = (long ******)ppppplStack_220;
      uVar6 = uStack_218;
      uVar13 = uStack_211;
      uVar7 = uStack_210;
      bVar8 = bStack_209;
      uVar9 = (undefined7)uStack_90;
      uVar10 = uStack_90._7_1_;
      uVar11 = uStack_88;
      unaff_x23 = (long ******)((long)ppppplStack_220 + CONCAT17(uStack_211,uStack_218));
      if (-1 < (char)bStack_209) {
        pppppplVar19 = &ppppplStack_220;
        unaff_x23 = (long ******)((long)&ppppplStack_220 + (ulong)bStack_209);
      }
      for (; lStack_238 = param_1, pppppplVar19 != unaff_x23;
          pppppplVar19 = (long ******)((long)pppppplVar19 + 1)) {
        uVar14 = *(undefined1 *)pppppplVar19;
        ppppplStack_220 = (long *****)pppppplVar16;
        uStack_218 = uVar6;
        uStack_211 = uVar13;
        uStack_210 = uVar7;
        bStack_209 = bVar8;
        uStack_90._0_7_ = uVar9;
        uStack_90._7_1_ = uVar10;
        uStack_88 = uVar11;
        ___tolower();
        *(undefined1 *)pppppplVar19 = uVar14;
        param_1 = lStack_238;
        pppppplVar16 = (long ******)ppppplStack_220;
        uVar6 = uStack_218;
        uVar13 = uStack_211;
        uVar7 = uStack_210;
        bVar8 = bStack_209;
        uVar9 = (undefined7)uStack_90;
        uVar10 = uStack_90._7_1_;
        uVar11 = uStack_88;
      }
      uStack_218 = 0;
      uStack_211 = 0;
      uStack_210 = 0;
      bStack_209 = 0;
      ppppplStack_220 = (long *****)0x0;
      uStack_90._0_7_ = 0;
      uStack_90._7_1_ = 0;
      uStack_88 = 0;
      pppppplVar19 = &ppppplStack_e0;
      ppppplStack_e0 = (long *****)unaff_x25;
      uStack_d8 = uVar9;
      uStack_d1 = uVar10;
      uStack_d0 = uVar11;
      bStack_c9 = bVar5;
      ppppplStack_c8 = (long *****)pppppplVar16;
      uStack_c0._0_7_ = uVar6;
      uStack_c0._7_1_ = uVar13;
      uStack_b8 = uVar7;
      bStack_b1 = bVar8;
      func_0x0001002a9c20(param_1 + 0x28,pppppplVar19,&ppppplStack_e0);
      unaff_x21 = (long ******)ppppplStack_240;
      if ((char)bStack_209 < '\0') {
        __ZdlPv(ppppplStack_220);
      }
      if ((char)bStack_1e9 < '\0') {
        __ZdlPv(pppppuStack_200);
      }
      func_0x00010046a278(unaff_x21);
      ppppplStack_e0 = (long *****)unaff_x22;
      func_0x00010007e5dc(&ppppplStack_e0);
      if ((char)bStack_101 < '\0') {
        __ZdlPv(pppppuStack_118);
      }
      pppplVar25 = pppplVar25 + 3;
    } while (pppplVar25 != (long ****)ppplStack_230);
  }
  ppppplStack_e0 = (long *****)&ppplStack_100;
  pppppplVar16 = &ppppplStack_e0;
  func_0x000100151ae0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pppppplVar17 = pppppplVar16;
  __Unwind_Resume();
  pcStack_248 = FUN_107f4aa4c;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_2a0 = param_1;
  puStack_298 = unaff_x27;
  ppplStack_290 = (long ***)pppplVar25;
  pppppuStack_288 = unaff_x25;
  ppppplStack_280 = (long *****)unaff_x24;
  ppppplStack_278 = (long *****)unaff_x23;
  ppppplStack_270 = (long *****)unaff_x22;
  ppppplStack_268 = (long *****)unaff_x21;
  ppppplStack_260 = (long *****)pppppplVar16;
  ppppplStack_258 = (long *****)param_2;
  puStack_250 = &stack0xfffffffffffffff0;
  func_0x00010002b838(&ppppplStack_320,&UNK_10f4664d7);
  pppppplVar26 = pppppplVar19;
  FUN_107f4dbf4(&ppppplStack_340);
  ppppplStack_450 = ppppplStack_338;
  pppppplVar16 = (long ******)ppppplStack_340;
  if (ppppplStack_340 != ppppplStack_338) {
    unaff_x24 = &ppppplStack_320;
    ppppplStack_448 = (long *****)&ppppplStack_308;
    pppppplVar19 = (long ******)&pppplStack_2f0;
    unaff_x22 = (long ******)&pppplStack_3a0;
    ppppppuVar20 = &pppppuStack_388;
    unaff_x27 = &uStack_300;
    pppppuStack_460 = ppppppuVar20;
    ppppplStack_458 = (long *****)pppppplVar17;
    do {
      ppppplVar23 = *pppppplVar16;
      if (*(char *)((long)ppppplVar23 + 0x17) < '\0') {
        func_0x000100033dac(&ppplStack_370,*ppppplVar23,ppppplVar23[1]);
      }
      else {
        ppplStack_368 = (long ***)ppppplVar23[1];
        ppplStack_370 = (long ***)*ppppplVar23;
        ppplStack_360 = (long ***)ppppplVar23[2];
      }
      FUN_107f4bf6c(&pppppuStack_358,&ppplStack_370);
      if ((long)ppplStack_360 < 0) {
        __ZdlPv(ppplStack_370);
      }
      ppppplVar23 = *pppppplVar16;
      if (*(char *)((long)ppppplVar23 + 0x2f) < '\0') {
        func_0x000100033dac(&ppplStack_3c0,ppppplVar23[3],ppppplVar23[4]);
      }
      else {
        ppplStack_3b8 = (long ***)ppppplVar23[4];
        ppplStack_3c0 = (long ***)ppppplVar23[3];
        ppplStack_3b0 = (long ***)ppppplVar23[5];
      }
      FUN_107f4bf6c(&ppppplStack_320,&ppplStack_3c0);
      ppppplVar23 = *pppppplVar16;
      if (*(char *)((long)ppppplVar23 + 0x47) < '\0') {
        func_0x000100033dac(&ppplStack_3e0,ppppplVar23[6],ppppplVar23[7]);
      }
      else {
        ppplStack_3d8 = (long ***)ppppplVar23[7];
        ppplStack_3e0 = (long ***)ppppplVar23[6];
        ppplStack_3d0 = (long ***)ppppplVar23[8];
      }
      FUN_107f4bf6c(ppppplStack_448,&ppplStack_3e0);
      func_0x00010002b838(pppppplVar19,&UNK_10f4664d3);
      uStack_2d0._0_7_ = 0;
      uStack_2d0._7_1_ = 0;
      uStack_2c8 = 0;
      uStack_2c1 = 0;
      ppplStack_2c0 = (long ***)0x0;
      func_0x00010007e1e8(&uStack_2d0,&ppppplStack_320,acStack_2d9 + 1,3);
      auStack_3a8[0] = 1;
      uStack_398 = 0;
      uStack_390 = 0;
      pppplStack_3a0 = (long ****)0x0;
      func_0x00010015bcc4(unaff_x22,CONCAT17(uStack_2d0._7_1_,(undefined7)uStack_2d0),
                          CONCAT17(uStack_2c1,uStack_2c8),
                          (CONCAT17(uStack_2c1,uStack_2c8) -
                           CONCAT17(uStack_2d0._7_1_,(undefined7)uStack_2d0) >> 3) *
                          -0x5555555555555555);
      pppppuStack_388 = &pppppuStack_388;
      uStack_378 = 0;
      puStack_328 = &uStack_2d0;
      pppppuStack_380 = ppppppuVar20;
      func_0x00010007e5dc(&puStack_328);
      lVar29 = 0;
      do {
        if (acStack_2d9[lVar29] < '\0') {
          __ZdlPv(*(undefined8 *)((long)&pppplStack_2f0 + lVar29));
        }
        lVar29 = lVar29 + -0x18;
      } while (lVar29 != -0x48);
      if ((long)ppplStack_3d0 < 0) {
        __ZdlPv(ppplStack_3e0);
      }
      if ((long)ppplStack_3b0 < 0) {
        __ZdlPv(ppplStack_3c0);
      }
      if (*(char *)((long)pppplStack_3a0 + 0x17) < '\0') {
        func_0x000100033dac(&pppppuStack_400,*pppplStack_3a0,pppplStack_3a0[1]);
      }
      else {
        ppplStack_3f0 = pppplStack_3a0[2];
        ppplStack_3f8 = pppplStack_3a0[1];
        pppppuStack_400 = (undefined8 *****)*pppplStack_3a0;
      }
      ppppppuVar21 = (undefined8 ******)pppppuStack_400;
      ppppppuVar20 = (undefined8 ******)((long)pppppuStack_400 + (long)ppplStack_3f8);
      if (-1 < (long)ppplStack_3f0) {
        ppppppuVar21 = &pppppuStack_400;
        ppppppuVar20 = (undefined8 ******)((long)&pppppuStack_400 + ((ulong)ppplStack_3f0 >> 0x38));
      }
      for (; ppppppuVar21 != ppppppuVar20;
          ppppppuVar21 = (undefined8 ******)((long)ppppppuVar21 + 1)) {
        uVar13 = *(undefined1 *)ppppppuVar21;
        ___tolower();
        *(undefined1 *)ppppppuVar21 = uVar13;
      }
      uStack_2c8 = SUB87(ppplStack_3f8,0);
      uStack_2c1 = (undefined1)((ulong)ppplStack_3f8 >> 0x38);
      uStack_2d0._0_7_ = SUB87(pppppuStack_400,0);
      uStack_2d0._7_1_ = (undefined1)((ulong)pppppuStack_400 >> 0x38);
      ppplStack_2c0 = ppplStack_3f0;
      ppplStack_3f8 = (long ***)0x0;
      ppplStack_3f0 = (long ***)0x0;
      pppppuStack_400 = (undefined8 ******)0x0;
      FUN_107f4c680(&ppppplStack_320,&uStack_2d0,auStack_3a8);
      FUN_107f4c154(pppppplVar17,&ppppplStack_320);
      func_0x00010046a278(auStack_2e8);
      puStack_328 = unaff_x27;
      func_0x00010007e5dc(&puStack_328);
      if ((long)ppplStack_3f0 < 0) {
        __ZdlPv(pppppuStack_400);
      }
      if ((char)bStack_341 < '\0') {
        func_0x000100033dac(&pppppuStack_420,pppppuStack_358,uStack_350);
      }
      else {
        uStack_418 = (undefined7)uStack_350;
        uStack_411 = (undefined1)((ulong)uStack_350 >> 0x38);
        pppppuStack_420 = pppppuStack_358;
        uStack_410 = uStack_348;
        bStack_409 = bStack_341;
      }
      ppppppuVar21 = (undefined8 ******)pppppuStack_420;
      unaff_x25 = (undefined8 ******)pppppuStack_420;
      bVar5 = bStack_409;
      ppppppuVar20 = (undefined8 ******)((long)pppppuStack_420 + CONCAT17(uStack_411,uStack_418));
      if (-1 < (char)bStack_409) {
        ppppppuVar21 = &pppppuStack_420;
        ppppppuVar20 = (undefined8 ******)((long)&pppppuStack_420 + (ulong)bStack_409);
      }
      for (; ppppppuVar21 != ppppppuVar20;
          ppppppuVar21 = (undefined8 ******)((long)ppppppuVar21 + 1)) {
        uVar13 = *(undefined1 *)ppppppuVar21;
        pppppuStack_420 = unaff_x25;
        bStack_409 = bVar5;
        ___tolower();
        *(undefined1 *)ppppppuVar21 = uVar13;
        unaff_x25 = (undefined8 ******)pppppuStack_420;
        bVar5 = bStack_409;
      }
      uStack_2d0._0_7_ = uStack_418;
      uStack_2d0._7_1_ = uStack_411;
      uStack_2c8 = uStack_410;
      uStack_418 = 0;
      uStack_411 = 0;
      uStack_410 = 0;
      bStack_409 = 0;
      pppppuStack_420 = (undefined8 ******)0x0;
      if (*(char *)((long)pppplStack_3a0 + 0x17) < '\0') {
        func_0x000100033dac(&ppppplStack_440,*pppplStack_3a0,pppplStack_3a0[1]);
      }
      else {
        uStack_430 = SUB87(pppplStack_3a0[2],0);
        bStack_429 = (byte)((ulong)pppplStack_3a0[2] >> 0x38);
        uStack_438 = SUB87(pppplStack_3a0[1],0);
        uStack_431 = (undefined1)((ulong)pppplStack_3a0[1] >> 0x38);
        ppppplStack_440 = (long *****)*pppplStack_3a0;
      }
      unaff_x23 = (long ******)ppppplStack_440;
      pppppplVar17 = (long ******)ppppplStack_458;
      pppppplVar27 = (long ******)ppppplStack_440;
      uVar6 = uStack_438;
      uVar13 = uStack_431;
      uVar7 = uStack_430;
      bVar8 = bStack_429;
      uVar9 = (undefined7)uStack_2d0;
      uVar10 = uStack_2d0._7_1_;
      uVar11 = uStack_2c8;
      pppppplVar26 = (long ******)((long)ppppplStack_440 + CONCAT17(uStack_431,uStack_438));
      if (-1 < (char)bStack_429) {
        unaff_x23 = &ppppplStack_440;
        pppppplVar26 = (long ******)((long)&ppppplStack_440 + (ulong)bStack_429);
      }
      for (; ppppplStack_458 = (long *****)pppppplVar17, unaff_x23 != pppppplVar26;
          unaff_x23 = (long ******)((long)unaff_x23 + 1)) {
        uVar14 = *(undefined1 *)unaff_x23;
        ppppplStack_440 = (long *****)pppppplVar27;
        uStack_438 = uVar6;
        uStack_431 = uVar13;
        uStack_430 = uVar7;
        bStack_429 = bVar8;
        uStack_2d0._0_7_ = uVar9;
        uStack_2d0._7_1_ = uVar10;
        uStack_2c8 = uVar11;
        ___tolower();
        *(undefined1 *)unaff_x23 = uVar14;
        pppppplVar17 = (long ******)ppppplStack_458;
        pppppplVar27 = (long ******)ppppplStack_440;
        uVar6 = uStack_438;
        uVar13 = uStack_431;
        uVar7 = uStack_430;
        bVar8 = bStack_429;
        uVar9 = (undefined7)uStack_2d0;
        uVar10 = uStack_2d0._7_1_;
        uVar11 = uStack_2c8;
      }
      uStack_438 = 0;
      uStack_431 = 0;
      uStack_430 = 0;
      bStack_429 = 0;
      ppppplStack_440 = (long *****)0x0;
      uStack_2d0._0_7_ = 0;
      unaff_x21 = &pppppuStack_358;
      uStack_2d0._7_1_ = 0;
      uStack_2c8 = 0;
      pppppplVar26 = &ppppplStack_320;
      ppppplStack_320 = (long *****)unaff_x25;
      uStack_318 = uVar9;
      uStack_311 = uVar10;
      uStack_310 = uVar11;
      bStack_309 = bVar5;
      ppppplStack_308 = (long *****)pppppplVar27;
      uStack_300._0_7_ = uVar6;
      uStack_300._7_1_ = uVar13;
      uStack_2f8 = uVar7;
      bStack_2f1 = bVar8;
      func_0x0001002a9c20(pppppplVar17 + 10,pppppplVar26,&ppppplStack_320);
      ppppppuVar20 = (undefined8 ******)pppppuStack_460;
      if ((char)bStack_429 < '\0') {
        __ZdlPv(ppppplStack_440);
      }
      if ((char)bStack_409 < '\0') {
        __ZdlPv(pppppuStack_420);
      }
      func_0x00010046a278(ppppppuVar20);
      ppppplStack_320 = (long *****)unaff_x22;
      func_0x00010007e5dc(&ppppplStack_320);
      if ((char)bStack_341 < '\0') {
        __ZdlPv(pppppuStack_358);
      }
      pppppplVar16 = pppppplVar16 + 3;
    } while (pppppplVar16 != (long ******)ppppplStack_450);
  }
  ppppplStack_320 = (long *****)&ppppplStack_340;
  pppppplVar27 = &ppppplStack_320;
  func_0x000100151ae0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return;
  }
  ___stack_chk_fail();
  pppppplVar18 = pppppplVar27;
  __Unwind_Resume();
  pcStack_468 = FUN_107f4b144;
  lStack_4d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplStack_678 = (long *****)pppppplVar18;
  ppppplStack_4c0 = (long *****)pppppplVar17;
  puStack_4b8 = unaff_x27;
  ppppplStack_4b0 = (long *****)pppppplVar16;
  pppppuStack_4a8 = unaff_x25;
  ppppplStack_4a0 = (long *****)unaff_x24;
  ppppplStack_498 = (long *****)unaff_x23;
  ppppplStack_490 = (long *****)unaff_x22;
  ppppplStack_488 = (long *****)unaff_x21;
  ppppplStack_480 = (long *****)pppppplVar27;
  ppppplStack_478 = (long *****)pppppplVar19;
  ppuStack_470 = &puStack_250;
  func_0x00010002b838(&ppppplStack_540,&UNK_10f4664f6);
  FUN_107f4dbf4(&ppplStack_560);
  ppplStack_698 = ppplStack_558;
  pppplVar25 = (long ****)ppplStack_560;
  if (ppplStack_560 != ppplStack_558) {
    unaff_x25 = (undefined8 ******)&uStack_4f0;
    pppppplVar16 = &ppppplStack_540;
    ppppplStack_690 = (long *****)&ppppplStack_528;
    puStack_688 = &uStack_510;
    ppppplStack_6a0 = apppplStack_5a8;
    unaff_x27 = &uStack_520;
    pppppplVar17 = &ppppplStack_650;
    unaff_x24 = &ppppplStack_670;
    do {
      FUN_107f4c860(auStack_578,*pppplVar25,0x2c);
      ppplVar22 = *pppplVar25;
      if (*(char *)((long)ppplVar22 + 0x2f) < '\0') {
        func_0x000100033dac(&plStack_5d0,ppplVar22[3],ppplVar22[4]);
      }
      else {
        plStack_5c8 = (long *)ppplVar22[4];
        plStack_5d0 = (long *)ppplVar22[3];
        plStack_5c0 = (long *)ppplVar22[5];
      }
      FUN_107f4bf6c(&ppppplStack_540,&plStack_5d0);
      ppplVar22 = *pppplVar25;
      if (*(char *)((long)ppplVar22 + 0x47) < '\0') {
        func_0x000100033dac(&plStack_5f0,ppplVar22[6],ppplVar22[7]);
      }
      else {
        plStack_5e8 = (long *)ppplVar22[7];
        plStack_5f0 = (long *)ppplVar22[6];
        plStack_5e0 = (long *)ppplVar22[8];
      }
      FUN_107f4bf6c(ppppplStack_690,&plStack_5f0);
      ppplVar22 = *pppplVar25;
      if (*(char *)((long)ppplVar22 + 0x5f) < '\0') {
        func_0x000100033dac(&plStack_610,ppplVar22[9],ppplVar22[10]);
      }
      else {
        plStack_608 = (long *)ppplVar22[10];
        plStack_610 = (long *)ppplVar22[9];
        plStack_600 = (long *)ppplVar22[0xb];
      }
      FUN_107f4bf6c(puStack_688,&plStack_610);
      uStack_4f0._0_7_ = 0;
      uStack_4f0._7_1_ = 0;
      uStack_4e8 = 0;
      uStack_4e1 = 0;
      ppplStack_4e0 = (long ***)0x0;
      func_0x00010007e1e8(&uStack_4f0,&ppppplStack_540,acStack_4f9 + 1,3);
      ppplStack_680 = (long ***)pppplVar25;
      FUN_107f4caa8(auStack_5b0,1,&uStack_4f0,auStack_578);
      puStack_548 = &uStack_4f0;
      func_0x00010007e5dc(&puStack_548);
      lVar29 = 0;
      do {
        if (acStack_4f9[lVar29] < '\0') {
          __ZdlPv(*(undefined8 *)((long)&uStack_510 + lVar29));
        }
        lVar29 = lVar29 + -0x18;
      } while (lVar29 != -0x48);
      if ((long)plStack_600 < 0) {
        __ZdlPv(plStack_610);
      }
      if ((long)plStack_5e0 < 0) {
        __ZdlPv(plStack_5f0);
      }
      if ((long)plStack_5c0 < 0) {
        __ZdlPv(plStack_5d0);
      }
      if (*(char *)((long)apppplStack_5a8[0] + 0x17) < '\0') {
        func_0x000100033dac(&ppppplStack_630,*apppplStack_5a8[0],apppplStack_5a8[0][1]);
      }
      else {
        ppplStack_620 = apppplStack_5a8[0][2];
        ppplStack_628 = apppplStack_5a8[0][1];
        ppppplStack_630 = (long *****)*apppplStack_5a8[0];
      }
      unaff_x21 = (long ******)ppppplStack_630;
      pppppplVar19 = (long ******)((long)ppppplStack_630 + (long)ppplStack_628);
      if (-1 < (long)ppplStack_620) {
        unaff_x21 = &ppppplStack_630;
        pppppplVar19 = (long ******)((long)&ppppplStack_630 + ((ulong)ppplStack_620 >> 0x38));
      }
      for (; unaff_x21 != pppppplVar19; unaff_x21 = (long ******)((long)unaff_x21 + 1)) {
        uVar13 = *(undefined1 *)unaff_x21;
        ___tolower();
        *(undefined1 *)unaff_x21 = uVar13;
      }
      uStack_4e8 = SUB87(ppplStack_628,0);
      uStack_4e1 = (undefined1)((ulong)ppplStack_628 >> 0x38);
      uStack_4f0._0_7_ = SUB87(ppppplStack_630,0);
      uStack_4f0._7_1_ = (undefined1)((ulong)ppppplStack_630 >> 0x38);
      ppplStack_4e0 = ppplStack_620;
      ppplStack_628 = (long ***)0x0;
      ppplStack_620 = (long ***)0x0;
      ppppplStack_630 = (long *****)0x0;
      FUN_107f4c680(&ppppplStack_540,&uStack_4f0,auStack_5b0);
      pppppplVar26 = &ppppplStack_540;
      FUN_107f4c154(ppppplStack_678);
      func_0x00010046a278(auStack_508);
      puStack_548 = unaff_x27;
      func_0x00010007e5dc(&puStack_548);
      puVar24 = puStack_570;
      if ((long)ppplStack_620 < 0) {
        __ZdlPv(ppppplStack_630);
        puVar24 = puStack_570;
      }
      for (; puVar24 != auStack_578; puVar24 = *(undefined1 **)(puVar24 + 8)) {
        if ((char)puVar24[0x27] < '\0') {
          func_0x000100033dac(&ppppplStack_650,*(undefined8 *)(puVar24 + 0x10),
                              *(undefined8 *)(puVar24 + 0x18));
        }
        else {
          uStack_648 = (undefined7)*(undefined8 *)(puVar24 + 0x18);
          uStack_641 = (undefined1)((ulong)*(undefined8 *)(puVar24 + 0x18) >> 0x38);
          ppppplStack_650 = (long *****)*(long *******)(puVar24 + 0x10);
          uStack_640 = (undefined7)*(undefined8 *)(puVar24 + 0x20);
          bStack_639 = (byte)((ulong)*(undefined8 *)(puVar24 + 0x20) >> 0x38);
        }
        unaff_x21 = (long ******)(ulong)(uint)(int)(char)bStack_639;
        pppppplVar19 = (long ******)ppppplStack_650;
        pppppplVar26 = (long ******)((long)ppppplStack_650 + CONCAT17(uStack_641,uStack_648));
        if (-1 < (char)bStack_639) {
          pppppplVar19 = pppppplVar17;
          pppppplVar26 = (long ******)((long)pppppplVar17 + (ulong)bStack_639);
        }
        unaff_x22 = (long ******)ppppplStack_650;
        if (pppppplVar19 != pppppplVar26) {
          do {
            uVar13 = *(undefined1 *)pppppplVar19;
            ___tolower();
            pppppplVar27 = (long ******)((long)pppppplVar19 + 1);
            *(undefined1 *)pppppplVar19 = uVar13;
            pppppplVar19 = pppppplVar27;
          } while (pppppplVar27 != pppppplVar26);
          unaff_x21 = (long ******)(ulong)bStack_639;
          unaff_x22 = (long ******)ppppplStack_650;
        }
        uStack_4f0._0_7_ = uStack_648;
        uStack_4f0._7_1_ = uStack_641;
        uStack_4e8 = uStack_640;
        uStack_648 = 0;
        uStack_641 = 0;
        uStack_640 = 0;
        bStack_639 = 0;
        ppppplStack_650 = (long *****)0x0;
        if (*(char *)((long)apppplStack_5a8[0] + 0x17) < '\0') {
          func_0x000100033dac(&ppppplStack_670,*apppplStack_5a8[0],apppplStack_5a8[0][1]);
        }
        else {
          uStack_660 = SUB87(apppplStack_5a8[0][2],0);
          bStack_659 = (byte)((ulong)apppplStack_5a8[0][2] >> 0x38);
          uStack_668 = SUB87(apppplStack_5a8[0][1],0);
          uStack_661 = (undefined1)((ulong)apppplStack_5a8[0][1] >> 0x38);
          ppppplStack_670 = (long *****)*apppplStack_5a8[0];
        }
        pppppplVar19 = (long ******)ppppplStack_670;
        pppppplVar27 = (long ******)ppppplStack_670;
        uVar6 = uStack_668;
        uVar13 = uStack_661;
        uVar7 = uStack_660;
        bVar5 = bStack_659;
        uVar9 = (undefined7)uStack_4f0;
        uVar10 = uStack_4f0._7_1_;
        uVar11 = uStack_4e8;
        unaff_x23 = (long ******)((long)ppppplStack_670 + CONCAT17(uStack_661,uStack_668));
        if (-1 < (char)bStack_659) {
          pppppplVar19 = unaff_x24;
          unaff_x23 = (long ******)((long)unaff_x24 + (ulong)bStack_659);
        }
        for (; pppppplVar19 != unaff_x23; pppppplVar19 = (long ******)((long)pppppplVar19 + 1)) {
          uVar14 = *(undefined1 *)pppppplVar19;
          ppppplStack_670 = (long *****)pppppplVar27;
          uStack_668 = uVar6;
          uStack_661 = uVar13;
          uStack_660 = uVar7;
          bStack_659 = bVar5;
          uStack_4f0._0_7_ = uVar9;
          uStack_4f0._7_1_ = uVar10;
          uStack_4e8 = uVar11;
          ___tolower();
          *(undefined1 *)pppppplVar19 = uVar14;
          pppppplVar27 = (long ******)ppppplStack_670;
          uVar6 = uStack_668;
          uVar13 = uStack_661;
          uVar7 = uStack_660;
          bVar5 = bStack_659;
          uVar9 = (undefined7)uStack_4f0;
          uVar10 = uStack_4f0._7_1_;
          uVar11 = uStack_4e8;
        }
        uStack_668 = 0;
        uStack_661 = 0;
        uStack_660 = 0;
        bStack_659 = 0;
        ppppplStack_670 = (long *****)0x0;
        uStack_529 = SUB81(unaff_x21,0);
        uStack_4f0._0_7_ = 0;
        uStack_4f0._7_1_ = 0;
        uStack_4e8 = 0;
        pppppplVar26 = &ppppplStack_540;
        ppppplStack_540 = (long *****)unaff_x22;
        uStack_538 = uVar9;
        uStack_531 = uVar10;
        uStack_530 = uVar11;
        ppppplStack_528 = (long *****)pppppplVar27;
        uStack_520._0_7_ = uVar6;
        uStack_520._7_1_ = uVar13;
        uStack_518 = uVar7;
        bStack_511 = bVar5;
        func_0x0001002a9c20(ppppplStack_678 + 0xf,pppppplVar26,&ppppplStack_540);
        if ((char)bStack_659 < '\0') {
          __ZdlPv(ppppplStack_670);
        }
        if ((char)bStack_639 < '\0') {
          __ZdlPv(ppppplStack_650);
        }
      }
      func_0x00010046a278(auStack_590);
      ppppplStack_540 = ppppplStack_6a0;
      func_0x00010007e5dc(&ppppplStack_540);
      func_0x00010046a278(auStack_578);
      pppplVar25 = (long ****)(ppplStack_680 + 3);
    } while (pppplVar25 != (long ****)ppplStack_698);
  }
  ppppplStack_540 = (long *****)&ppplStack_560;
  pppppplVar19 = &ppppplStack_540;
  func_0x000100151ae0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4d8) {
    return;
  }
  ___stack_chk_fail();
  pppppplVar27 = pppppplVar19;
  __Unwind_Resume();
  pcStack_6a8 = FUN_107f4b81c;
  lStack_718 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplStack_8e8 = (long *****)pppppplVar27;
  ppppplStack_700 = (long *****)pppppplVar17;
  puStack_6f8 = unaff_x27;
  ppppplStack_6f0 = (long *****)pppppplVar16;
  pppppuStack_6e8 = unaff_x25;
  ppppplStack_6e0 = (long *****)unaff_x24;
  ppppplStack_6d8 = (long *****)unaff_x23;
  ppppplStack_6d0 = (long *****)unaff_x22;
  ppppplStack_6c8 = (long *****)unaff_x21;
  ppppplStack_6c0 = (long *****)pppppplVar19;
  ppplStack_6b8 = (long ***)pppplVar25;
  pppuStack_6b0 = &ppuStack_470;
  func_0x00010002b838(&pppppuStack_790,&UNK_10f466519);
  FUN_107f4dbf4(&ppplStack_7b0);
  ppplStack_908 = ppplStack_7a8;
  pppplVar25 = (long ****)ppplStack_7b0;
  if (ppplStack_7b0 != ppplStack_7a8) {
    ppppplStack_8f8 = (long *****)&ppppplStack_778;
    puStack_900 = auStack_760;
    puStack_8f0 = auStack_748;
    pppppuStack_910 = appppuStack_7f8;
    unaff_x25 = &pppppuStack_8c0;
    unaff_x21 = &ppppplStack_8e0;
    do {
      FUN_107f4c860(&pppplStack_7c8,*pppplVar25,0x2c);
      ppplVar22 = *pppplVar25;
      if (*(char *)((long)ppplVar22 + 0x2f) < '\0') {
        func_0x000100033dac(&plStack_820,ppplVar22[3],ppplVar22[4]);
      }
      else {
        plStack_818 = (long *)ppplVar22[4];
        plStack_820 = (long *)ppplVar22[3];
        plStack_810 = (long *)ppplVar22[5];
      }
      FUN_107f4bf6c(&pppppuStack_790,&plStack_820);
      ppplVar22 = *pppplVar25;
      if (*(char *)((long)ppplVar22 + 0x47) < '\0') {
        func_0x000100033dac(&plStack_840,ppplVar22[6],ppplVar22[7]);
      }
      else {
        plStack_838 = (long *)ppplVar22[7];
        plStack_840 = (long *)ppplVar22[6];
        plStack_830 = (long *)ppplVar22[8];
      }
      FUN_107f4bf6c(ppppplStack_8f8,&plStack_840);
      ppplVar22 = *pppplVar25;
      if (*(char *)((long)ppplVar22 + 0x5f) < '\0') {
        func_0x000100033dac(&plStack_860,ppplVar22[9],ppplVar22[10]);
      }
      else {
        plStack_858 = (long *)ppplVar22[10];
        plStack_860 = (long *)ppplVar22[9];
        plStack_850 = (long *)ppplVar22[0xb];
      }
      FUN_107f4bf6c(puStack_900,&plStack_860);
      ppplVar22 = *pppplVar25;
      if (*(char *)((long)ppplVar22 + 0x77) < '\0') {
        func_0x000100033dac(&plStack_880,ppplVar22[0xc],ppplVar22[0xd]);
      }
      else {
        plStack_878 = (long *)ppplVar22[0xd];
        plStack_880 = (long *)ppplVar22[0xc];
        plStack_870 = (long *)ppplVar22[0xe];
      }
      FUN_107f4bf6c(puStack_8f0,&plStack_880);
      uStack_730 = 0;
      uStack_729 = 0;
      uStack_728 = 0;
      uStack_721 = 0;
      pppuStack_720 = (undefined8 ***)0x0;
      func_0x00010007e1e8(&uStack_730,&pppppuStack_790,&uStack_730,4);
      FUN_107f4caa8(auStack_800,2,&uStack_730,&pppplStack_7c8);
      puStack_798 = &uStack_730;
      func_0x00010007e5dc(&puStack_798);
      lVar29 = 0;
      do {
        if ((&cStack_731)[lVar29] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_748 + lVar29));
        }
        lVar29 = lVar29 + -0x18;
      } while (lVar29 != -0x60);
      if ((long)plStack_870 < 0) {
        __ZdlPv(plStack_880);
      }
      if ((long)plStack_850 < 0) {
        __ZdlPv(plStack_860);
      }
      if ((long)plStack_830 < 0) {
        __ZdlPv(plStack_840);
      }
      if ((long)plStack_810 < 0) {
        __ZdlPv(plStack_820);
      }
      if (*(char *)((long)appppuStack_7f8[0] + 0x17) < '\0') {
        func_0x000100033dac(appppplStack_8a0,*appppuStack_7f8[0],appppuStack_7f8[0][1]);
      }
      else {
        appppplStack_8a0[2] = (long *****)appppuStack_7f8[0][2];
        appppplStack_8a0[1] = (long *****)appppuStack_7f8[0][1];
        appppplStack_8a0[0] = (long *****)*appppuStack_7f8[0];
      }
      pppppplVar19 = (long ******)appppplStack_8a0[0];
      pppppplVar26 = (long ******)((long)appppplStack_8a0[0] + (long)appppplStack_8a0[1]);
      if (-1 < (long)appppplStack_8a0[2]) {
        pppppplVar19 = appppplStack_8a0;
        pppppplVar26 = (long ******)((long)appppplStack_8a0 + ((ulong)appppplStack_8a0[2] >> 0x38));
      }
      for (; pppppplVar19 != pppppplVar26; pppppplVar19 = (long ******)((long)pppppplVar19 + 1)) {
        uVar13 = *(undefined1 *)pppppplVar19;
        ___tolower();
        *(undefined1 *)pppppplVar19 = uVar13;
      }
      uStack_728 = SUB87(appppplStack_8a0[1],0);
      uStack_721 = (undefined1)((ulong)appppplStack_8a0[1] >> 0x38);
      uStack_730 = SUB87(appppplStack_8a0[0],0);
      uStack_729 = (undefined1)((ulong)appppplStack_8a0[0] >> 0x38);
      pppuStack_720 = appppplStack_8a0[2];
      appppplStack_8a0[1] = (long *****)0x0;
      appppplStack_8a0[2] = (long *****)0x0;
      appppplStack_8a0[0] = (long *****)0x0;
      FUN_107f4c680(&pppppuStack_790,&uStack_730,auStack_800);
      FUN_107f4c154(ppppplStack_8e8,&pppppuStack_790);
      func_0x00010046a278(auStack_758);
      puStack_798 = &uStack_770;
      func_0x00010007e5dc(&puStack_798);
      unaff_x22 = (long ******)ppppplStack_7c0;
      if ((long)appppplStack_8a0[2] < 0) {
        __ZdlPv(appppplStack_8a0[0]);
        unaff_x22 = (long ******)ppppplStack_7c0;
      }
      for (; unaff_x23 = &pppppuStack_790, unaff_x22 != (long ******)&pppplStack_7c8;
          unaff_x22 = (long ******)unaff_x22[1]) {
        if (*(char *)((long)unaff_x22 + 0x27) < '\0') {
          func_0x000100033dac(&pppppuStack_8c0,unaff_x22[2],unaff_x22[3]);
        }
        else {
          uStack_8b8 = SUB87(unaff_x22[3],0);
          uStack_8b1 = (undefined1)((ulong)unaff_x22[3] >> 0x38);
          pppppuStack_8c0 = unaff_x22[2];
          uStack_8b0 = SUB87(unaff_x22[4],0);
          bStack_8a9 = (byte)((ulong)unaff_x22[4] >> 0x38);
        }
        pppppplVar26 = (long ******)(ulong)(uint)(int)(char)bStack_8a9;
        ppppppuVar20 = (undefined8 ******)pppppuStack_8c0;
        ppppppuVar21 = (undefined8 ******)((long)pppppuStack_8c0 + CONCAT17(uStack_8b1,uStack_8b8));
        if (-1 < (char)bStack_8a9) {
          ppppppuVar20 = unaff_x25;
          ppppppuVar21 = (undefined8 ******)((long)unaff_x25 + (ulong)bStack_8a9);
        }
        ppppppuVar28 = (undefined8 ******)pppppuStack_8c0;
        if (ppppppuVar20 != ppppppuVar21) {
          do {
            uVar13 = *(undefined1 *)ppppppuVar20;
            ___tolower();
            ppppppuVar28 = (undefined8 ******)((long)ppppppuVar20 + 1);
            *(undefined1 *)ppppppuVar20 = uVar13;
            ppppppuVar20 = ppppppuVar28;
          } while (ppppppuVar28 != ppppppuVar21);
          pppppplVar26 = (long ******)(ulong)bStack_8a9;
          ppppppuVar28 = (undefined8 ******)pppppuStack_8c0;
        }
        uStack_730 = uStack_8b8;
        uStack_729 = uStack_8b1;
        uStack_728 = uStack_8b0;
        uStack_8b8 = 0;
        uStack_8b1 = 0;
        uStack_8b0 = 0;
        bStack_8a9 = 0;
        pppppuStack_8c0 = (undefined8 ******)0x0;
        if (*(char *)((long)appppuStack_7f8[0] + 0x17) < '\0') {
          func_0x000100033dac(&ppppplStack_8e0,*appppuStack_7f8[0],appppuStack_7f8[0][1]);
        }
        else {
          uStack_8d0 = SUB87(appppuStack_7f8[0][2],0);
          bStack_8c9 = (byte)((ulong)appppuStack_7f8[0][2] >> 0x38);
          uStack_8d8 = SUB87(appppuStack_7f8[0][1],0);
          uStack_8d1 = (undefined1)((ulong)appppuStack_7f8[0][1] >> 0x38);
          ppppplStack_8e0 = (long *****)*appppuStack_7f8[0];
        }
        pppppplVar19 = (long ******)ppppplStack_8e0;
        pppppplVar16 = (long ******)ppppplStack_8e0;
        uVar6 = uStack_8d8;
        uVar13 = uStack_8d1;
        uVar7 = uStack_8d0;
        bVar5 = bStack_8c9;
        uVar9 = uStack_730;
        uVar10 = uStack_729;
        uVar11 = uStack_728;
        unaff_x24 = (long ******)((long)ppppplStack_8e0 + CONCAT17(uStack_8d1,uStack_8d8));
        if (-1 < (char)bStack_8c9) {
          pppppplVar19 = unaff_x21;
          unaff_x24 = (long ******)((long)unaff_x21 + (ulong)bStack_8c9);
        }
        for (; pppppplVar19 != unaff_x24; pppppplVar19 = (long ******)((long)pppppplVar19 + 1)) {
          uVar14 = *(undefined1 *)pppppplVar19;
          ppppplStack_8e0 = (long *****)pppppplVar16;
          uStack_8d8 = uVar6;
          uStack_8d1 = uVar13;
          uStack_8d0 = uVar7;
          bStack_8c9 = bVar5;
          uStack_730 = uVar9;
          uStack_729 = uVar10;
          uStack_728 = uVar11;
          ___tolower();
          *(undefined1 *)pppppplVar19 = uVar14;
          pppppplVar16 = (long ******)ppppplStack_8e0;
          uVar6 = uStack_8d8;
          uVar13 = uStack_8d1;
          uVar7 = uStack_8d0;
          bVar5 = bStack_8c9;
          uVar9 = uStack_730;
          uVar10 = uStack_729;
          uVar11 = uStack_728;
        }
        uStack_8d8 = 0;
        uStack_8d1 = 0;
        uStack_8d0 = 0;
        bStack_8c9 = 0;
        ppppplStack_8e0 = (long *****)0x0;
        uStack_779 = SUB81(pppppplVar26,0);
        uStack_730 = 0;
        uStack_729 = 0;
        uStack_728 = 0;
        pppppuStack_790 = ppppppuVar28;
        uStack_788 = uVar9;
        uStack_781 = uVar10;
        uStack_780 = uVar11;
        ppppplStack_778 = (long *****)pppppplVar16;
        uStack_770 = uVar6;
        uStack_769 = uVar13;
        uStack_768 = uVar7;
        bStack_761 = bVar5;
        func_0x0001002a9c20(ppppplStack_8e8 + 0x14,&pppppuStack_790,&pppppuStack_790);
        if ((char)bStack_8c9 < '\0') {
          __ZdlPv(ppppplStack_8e0);
        }
        if ((char)bStack_8a9 < '\0') {
          __ZdlPv(pppppuStack_8c0);
        }
      }
      func_0x00010046a278(auStack_7e0);
      pppppuStack_790 = pppppuStack_910;
      func_0x00010007e5dc(&pppppuStack_790);
      func_0x00010046a278(&pppplStack_7c8);
      pppplVar25 = pppplVar25 + 3;
    } while (pppplVar25 != (long ****)ppplStack_908);
  }
  pppppuStack_790 = (undefined8 *****)&ppplStack_7b0;
  ppppppuVar20 = &pppppuStack_790;
  func_0x000100151ae0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_718) {
    return;
  }
  ___stack_chk_fail();
  ppppppuVar21 = ppppppuVar20;
  __Unwind_Resume();
  ppplStack_960 = (long ***)pppplVar25;
  pppppuStack_958 = unaff_x25;
  ppppplStack_950 = (long *****)unaff_x24;
  ppppplStack_948 = (long *****)unaff_x23;
  ppppplStack_940 = (long *****)unaff_x22;
  ppppplStack_938 = (long *****)unaff_x21;
  pppppuStack_930 = ppppppuVar20;
  ppppplStack_928 = (long *****)pppppplVar26;
  ppppuStack_920 = &pppuStack_6b0;
  pcStack_918 = FUN_107f4bf6c;
  if (*(char *)((long)ppppppuVar21 + 0x17) < '\0') {
    func_0x000100033dac(apppppcStack_9a0,*ppppppuVar21,ppppppuVar21[1]);
  }
  else {
    apppppcStack_9a0[1] = (char *****)ppppppuVar21[1];
    apppppcStack_9a0[0] = (char *****)*ppppppuVar21;
    lStack_990 = (long)ppppppuVar21[2];
  }
  puVar12 = PTR___DefaultRuneLocale_11034bcf8;
  ppppppcVar31 = (char ******)((long)apppppcStack_9a0[0] + (long)apppppcStack_9a0[1]);
  ppppppcVar2 = (char ******)apppppcStack_9a0[0];
  if (-1 < lStack_990) {
    ppppppcVar31 = (char ******)((long)apppppcStack_9a0 + ((ulong)lStack_990 >> 0x38));
    ppppppcVar2 = apppppcStack_9a0;
  }
  do {
    ppppppcVar30 = ppppppcVar2;
    if (ppppppcVar31 == ppppppcVar2) break;
    cVar3 = *(char *)((long)ppppppcVar31 + -1);
    lVar29 = (long)cVar3;
    if (cVar3 < 0) {
      ___maskrune(lVar29,0x4000);
      uVar15 = (uint)lVar29;
    }
    else {
      uVar15 = *(uint *)(puVar12 + (ulong)(uint)(int)cVar3 * 4 + 0x3c) & 0x4000;
    }
    ppppppcVar30 = ppppppcVar31;
    ppppppcVar31 = (char ******)((long)ppppppcVar31 + -1);
  } while (uVar15 != 0);
  ppppppcVar2 = (char ******)apppppcStack_9a0[0];
  pcVar4 = (char *)((long)apppppcStack_9a0[0] + (long)apppppcStack_9a0[1]);
  if (-1 < lStack_990) {
    ppppppcVar2 = apppppcStack_9a0;
    pcVar4 = (char *)((long)apppppcStack_9a0 + ((ulong)lStack_990 >> 0x38));
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
            (apppppcStack_9a0,(long)ppppppcVar30 - (long)ppppppcVar2,
             (long)pcVar4 - (long)ppppppcVar30);
  lVar29 = lStack_990;
  pppppcVar32 = apppppcStack_9a0[1];
  ppppppcVar2 = (char ******)apppppcStack_9a0[0];
  ppppuStack_970 = (undefined8 ****)lStack_990;
  ppppuStack_978 = apppppcStack_9a0[1];
  pppppcStack_980 = apppppcStack_9a0[0];
  apppppcStack_9a0[1] = (char *****)0x0;
  lStack_990 = 0;
  apppppcStack_9a0[0] = (char *****)0x0;
  if (-1 < lVar29) {
    pppppcVar32 = (char *****)((ulong)lVar29 >> 0x38);
    ppppppcVar2 = &pppppcStack_980;
  }
  ppppppcVar31 = ppppppcVar2;
  if (pppppcVar32 != (char *****)0x0) {
    ppppppcVar1 = (char ******)((long)ppppppcVar2 + (long)pppppcVar32);
    ppppppcVar30 = ppppppcVar2;
    do {
      cVar3 = *(char *)ppppppcVar30;
      lVar29 = (long)cVar3;
      if (cVar3 < 0) {
        ___maskrune(lVar29,0x4000);
        uVar15 = (uint)lVar29;
      }
      else {
        uVar15 = *(uint *)(puVar12 + (ulong)(uint)(int)cVar3 * 4 + 0x3c) & 0x4000;
      }
      ppppppcVar31 = ppppppcVar30;
      if (uVar15 == 0) break;
      ppppppcVar30 = (char ******)((long)ppppppcVar30 + 1);
      pppppcVar32 = (char *****)((long)pppppcVar32 + -1);
      ppppppcVar31 = ppppppcVar1;
    } while (pppppcVar32 != (char *****)0x0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
            (&pppppcStack_980,0,(long)ppppppcVar31 - (long)ppppppcVar2);
  extraout_x8[1] = ppppuStack_978;
  *extraout_x8 = pppppcStack_980;
  extraout_x8[2] = ppppuStack_970;
  ppppuStack_978 = (undefined8 ****)0x0;
  ppppuStack_970 = (undefined8 ****)0x0;
  pppppcStack_980 = (char *****)0x0;
  if (lStack_990 < 0) {
    __ZdlPv(apppppcStack_9a0[0]);
  }
  return;
}



/* Entry: 107f4aa4c; end: 107f4b143;  */

/* WARNING: Removing unreachable block (ram,0x000107f4bb28) */
/* WARNING: Removing unreachable block (ram,0x000107f4b654) */
/* WARNING: Removing unreachable block (ram,0x000107f4b1a0) */
/* WARNING: Removing unreachable block (ram,0x000107f4ad28) */
/* WARNING: Removing unreachable block (ram,0x000107f4aaa8) */
/* WARNING: Removing unreachable block (ram,0x000107f4af80) */
/* WARNING: Removing unreachable block (ram,0x000107f4b3fc) */
/* WARNING: Removing unreachable block (ram,0x000107f4b878) */
/* WARNING: Removing unreachable block (ram,0x000107f4bd88) */
/* WARNING: Removing unreachable block (ram,0x000107f4b40c) */
/* WARNING: Removing unreachable block (ram,0x000107f4ad38) */
/* WARNING: Removing unreachable block (ram,0x000107f4bb38) */
/* WARNING: Removing unreachable block (ram,0x000107f4b584) */
/* WARNING: Removing unreachable block (ram,0x000107f4aebc) */
/* WARNING: Removing unreachable block (ram,0x000107f4bcbc) */
/* WARNING: Removing unreachable block (ram,0x000107f4b594) */
/* WARNING: Removing unreachable block (ram,0x000107f4aecc) */
/* WARNING: Removing unreachable block (ram,0x000107f4bccc) */

void FUN_107f4aa4c(undefined8 ******param_1,long ******param_2)

{
  char ******ppppppcVar1;
  char ******ppppppcVar2;
  char cVar3;
  char *pcVar4;
  byte bVar5;
  undefined7 uVar6;
  undefined7 uVar7;
  byte bVar8;
  undefined7 uVar9;
  undefined1 uVar10;
  undefined7 uVar11;
  long ******pppppplVar12;
  undefined *puVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  uint uVar16;
  undefined8 ******ppppppuVar17;
  undefined8 ******ppppppuVar18;
  undefined8 *****pppppuVar19;
  long ***ppplVar20;
  undefined8 *extraout_x8;
  undefined1 *puVar21;
  long ****pppplVar22;
  long ******pppppplVar23;
  long lVar24;
  undefined8 ******ppppppuVar25;
  undefined8 ******ppppppuVar26;
  long ******unaff_x21;
  char ******ppppppcVar27;
  undefined8 ******unaff_x22;
  long ******pppppplVar28;
  char ******ppppppcVar29;
  long ******unaff_x23;
  char *****pppppcVar30;
  long ******unaff_x24;
  undefined8 ******unaff_x25;
  undefined8 *unaff_x27;
  char *****apppppcStack_760 [2];
  long lStack_750;
  char *****pppppcStack_740;
  undefined8 ****ppppuStack_738;
  undefined8 ****ppppuStack_730;
  long ***ppplStack_720;
  undefined8 *****pppppuStack_718;
  long *****ppppplStack_710;
  long *****ppppplStack_708;
  undefined8 *****pppppuStack_700;
  long *****ppppplStack_6f8;
  undefined8 *****pppppuStack_6f0;
  long *****ppppplStack_6e8;
  undefined1 ***pppuStack_6e0;
  code *pcStack_6d8;
  undefined8 *****pppppuStack_6d0;
  long ***ppplStack_6c8;
  undefined1 *puStack_6c0;
  long *****ppppplStack_6b8;
  undefined8 *puStack_6b0;
  undefined8 *****pppppuStack_6a8;
  long *****ppppplStack_6a0;
  undefined7 uStack_698;
  undefined1 uStack_691;
  undefined7 uStack_690;
  byte bStack_689;
  undefined8 *****pppppuStack_680;
  undefined7 uStack_678;
  undefined1 uStack_671;
  undefined7 uStack_670;
  byte bStack_669;
  long *****appppplStack_660 [4];
  long *plStack_640;
  long *plStack_638;
  long *plStack_630;
  long *plStack_620;
  long *plStack_618;
  long *plStack_610;
  long *plStack_600;
  long *plStack_5f8;
  long *plStack_5f0;
  long *plStack_5e0;
  long *plStack_5d8;
  long *plStack_5d0;
  undefined1 auStack_5c0 [8];
  undefined8 ****appppuStack_5b8 [3];
  undefined1 auStack_5a0 [24];
  undefined8 ****ppppuStack_588;
  undefined8 *****pppppuStack_580;
  long ***ppplStack_570;
  long ***ppplStack_568;
  undefined7 *puStack_558;
  undefined8 *****pppppuStack_550;
  undefined7 uStack_548;
  undefined1 uStack_541;
  undefined7 uStack_540;
  undefined1 uStack_539;
  long *****ppppplStack_538;
  undefined7 uStack_530;
  undefined1 uStack_529;
  undefined7 uStack_528;
  byte bStack_521;
  undefined1 auStack_520 [8];
  undefined1 auStack_518 [16];
  undefined8 auStack_508 [2];
  char cStack_4f1;
  undefined7 uStack_4f0;
  undefined1 uStack_4e9;
  undefined7 uStack_4e8;
  undefined1 uStack_4e1;
  undefined8 ***pppuStack_4e0;
  long lStack_4d8;
  undefined8 *****pppppuStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *****pppppuStack_4b0;
  undefined8 *****pppppuStack_4a8;
  long *****ppppplStack_4a0;
  long *****ppppplStack_498;
  undefined8 *****pppppuStack_490;
  long *****ppppplStack_488;
  undefined8 *****pppppuStack_480;
  long ***ppplStack_478;
  undefined1 **ppuStack_470;
  code *pcStack_468;
  undefined8 *****pppppuStack_460;
  long ***ppplStack_458;
  long *****ppppplStack_450;
  undefined8 *puStack_448;
  long ***ppplStack_440;
  long *****ppppplStack_438;
  long *****ppppplStack_430;
  undefined7 uStack_428;
  undefined1 uStack_421;
  undefined7 uStack_420;
  byte bStack_419;
  undefined8 *****pppppuStack_410;
  undefined7 uStack_408;
  undefined1 uStack_401;
  undefined7 uStack_400;
  byte bStack_3f9;
  long *****appppplStack_3f0 [4];
  long *plStack_3d0;
  long *plStack_3c8;
  long *plStack_3c0;
  long *plStack_3b0;
  long *plStack_3a8;
  long *plStack_3a0;
  long *plStack_390;
  long *plStack_388;
  long *plStack_380;
  undefined1 auStack_370 [8];
  undefined8 ****appppuStack_368 [3];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [8];
  undefined1 *puStack_330;
  long ***ppplStack_320;
  long ***ppplStack_318;
  undefined8 *puStack_308;
  undefined8 *****pppppuStack_300;
  undefined7 uStack_2f8;
  undefined1 uStack_2f1;
  undefined7 uStack_2f0;
  undefined1 uStack_2e9;
  long *****ppppplStack_2e8;
  undefined8 uStack_2e0;
  undefined7 uStack_2d8;
  byte bStack_2d1;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [15];
  char acStack_2b9 [9];
  undefined8 uStack_2b0;
  undefined7 uStack_2a8;
  undefined1 uStack_2a1;
  undefined8 ***pppuStack_2a0;
  long lStack_298;
  undefined8 *****pppppuStack_280;
  undefined8 *puStack_278;
  undefined8 *****pppppuStack_270;
  undefined8 *****pppppuStack_268;
  long *****ppppplStack_260;
  long *****ppppplStack_258;
  undefined8 *****pppppuStack_250;
  long *****ppppplStack_248;
  long *****ppppplStack_240;
  long *****ppppplStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  undefined8 *****pppppuStack_220;
  undefined8 *****pppppuStack_218;
  undefined8 *****pppppuStack_210;
  long *****ppppplStack_208;
  long *****ppppplStack_200;
  undefined7 uStack_1f8;
  undefined1 uStack_1f1;
  undefined7 uStack_1f0;
  byte bStack_1e9;
  undefined8 *****pppppuStack_1e0;
  undefined7 uStack_1d8;
  undefined1 uStack_1d1;
  undefined7 uStack_1d0;
  byte bStack_1c9;
  undefined8 *****apppppuStack_1c0 [4];
  undefined8 ***pppuStack_1a0;
  undefined8 ***pppuStack_198;
  undefined8 ***pppuStack_190;
  undefined8 ***pppuStack_180;
  undefined8 ***pppuStack_178;
  undefined8 ***pppuStack_170;
  undefined4 auStack_168 [2];
  undefined8 ****ppppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *****pppppuStack_148;
  undefined8 *****pppppuStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  undefined8 ***pppuStack_128;
  undefined8 ***pppuStack_120;
  undefined8 *****pppppuStack_118;
  undefined8 uStack_110;
  undefined7 uStack_108;
  byte bStack_101;
  undefined8 *****pppppuStack_100;
  undefined8 *****pppppuStack_f8;
  undefined8 *puStack_e8;
  undefined8 *****pppppuStack_e0;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  byte bStack_c9;
  long *****ppppplStack_c8;
  undefined8 uStack_c0;
  undefined7 uStack_b8;
  byte bStack_b1;
  long ****pppplStack_b0;
  undefined1 auStack_a8 [15];
  char acStack_99 [9];
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined8 ***pppuStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010002b838(&pppppuStack_e0,&UNK_10f4664d7);
  pppppplVar23 = param_2;
  FUN_107f4dbf4(&pppppuStack_100);
  pppppuStack_210 = pppppuStack_f8;
  ppppppuVar18 = (undefined8 ******)pppppuStack_100;
  if (pppppuStack_100 != pppppuStack_f8) {
    unaff_x24 = &pppppuStack_e0;
    ppppplStack_208 = (long *****)&ppppplStack_c8;
    param_2 = (long ******)&pppplStack_b0;
    unaff_x22 = (undefined8 ******)&ppppuStack_160;
    ppppppuVar17 = &pppppuStack_148;
    unaff_x27 = &uStack_c0;
    pppppuStack_220 = ppppppuVar17;
    pppppuStack_218 = param_1;
    do {
      pppppuVar19 = *ppppppuVar18;
      if (*(char *)((long)pppppuVar19 + 0x17) < '\0') {
        func_0x000100033dac(&pppuStack_130,*pppppuVar19,pppppuVar19[1]);
      }
      else {
        pppuStack_128 = pppppuVar19[1];
        pppuStack_130 = *pppppuVar19;
        pppuStack_120 = pppppuVar19[2];
      }
      FUN_107f4bf6c(&pppppuStack_118,&pppuStack_130);
      if ((long)pppuStack_120 < 0) {
        __ZdlPv(pppuStack_130);
      }
      pppppuVar19 = *ppppppuVar18;
      if (*(char *)((long)pppppuVar19 + 0x2f) < '\0') {
        func_0x000100033dac(&pppuStack_180,pppppuVar19[3],pppppuVar19[4]);
      }
      else {
        pppuStack_178 = pppppuVar19[4];
        pppuStack_180 = pppppuVar19[3];
        pppuStack_170 = pppppuVar19[5];
      }
      FUN_107f4bf6c(&pppppuStack_e0,&pppuStack_180);
      pppppuVar19 = *ppppppuVar18;
      if (*(char *)((long)pppppuVar19 + 0x47) < '\0') {
        func_0x000100033dac(&pppuStack_1a0,pppppuVar19[6],pppppuVar19[7]);
      }
      else {
        pppuStack_198 = pppppuVar19[7];
        pppuStack_1a0 = pppppuVar19[6];
        pppuStack_190 = pppppuVar19[8];
      }
      FUN_107f4bf6c(ppppplStack_208,&pppuStack_1a0);
      func_0x00010002b838(param_2,&UNK_10f4664d3);
      uStack_90._0_7_ = 0;
      uStack_90._7_1_ = 0;
      uStack_88 = 0;
      uStack_81 = 0;
      pppuStack_80 = (undefined8 ***)0x0;
      func_0x00010007e1e8(&uStack_90,&pppppuStack_e0,acStack_99 + 1,3);
      auStack_168[0] = 1;
      uStack_158 = 0;
      uStack_150 = 0;
      ppppuStack_160 = (undefined8 *****)0x0;
      func_0x00010015bcc4(unaff_x22,CONCAT17(uStack_90._7_1_,(undefined7)uStack_90),
                          CONCAT17(uStack_81,uStack_88),
                          (CONCAT17(uStack_81,uStack_88) -
                           CONCAT17(uStack_90._7_1_,(undefined7)uStack_90) >> 3) *
                          -0x5555555555555555);
      pppppuStack_148 = &pppppuStack_148;
      uStack_138 = 0;
      puStack_e8 = &uStack_90;
      pppppuStack_140 = ppppppuVar17;
      func_0x00010007e5dc(&puStack_e8);
      lVar24 = 0;
      do {
        if (acStack_99[lVar24] < '\0') {
          __ZdlPv(*(undefined8 *)((long)&pppplStack_b0 + lVar24));
        }
        lVar24 = lVar24 + -0x18;
      } while (lVar24 != -0x48);
      if ((long)pppuStack_190 < 0) {
        __ZdlPv(pppuStack_1a0);
      }
      if ((long)pppuStack_170 < 0) {
        __ZdlPv(pppuStack_180);
      }
      if (*(char *)((long)ppppuStack_160 + 0x17) < '\0') {
        func_0x000100033dac(apppppuStack_1c0,*ppppuStack_160,ppppuStack_160[1]);
      }
      else {
        apppppuStack_1c0[2] = (undefined8 *****)ppppuStack_160[2];
        apppppuStack_1c0[1] = (undefined8 *****)ppppuStack_160[1];
        apppppuStack_1c0[0] = (undefined8 *****)*ppppuStack_160;
      }
      ppppppuVar26 = (undefined8 ******)apppppuStack_1c0[0];
      ppppppuVar17 = (undefined8 ******)((long)apppppuStack_1c0[0] + (long)apppppuStack_1c0[1]);
      if (-1 < (long)apppppuStack_1c0[2]) {
        ppppppuVar26 = apppppuStack_1c0;
        ppppppuVar17 = (undefined8 ******)
                       ((long)apppppuStack_1c0 + ((ulong)apppppuStack_1c0[2] >> 0x38));
      }
      for (; ppppppuVar26 != ppppppuVar17;
          ppppppuVar26 = (undefined8 ******)((long)ppppppuVar26 + 1)) {
        uVar14 = *(undefined1 *)ppppppuVar26;
        ___tolower();
        *(undefined1 *)ppppppuVar26 = uVar14;
      }
      uStack_88 = SUB87(apppppuStack_1c0[1],0);
      uStack_81 = (undefined1)((ulong)apppppuStack_1c0[1] >> 0x38);
      uStack_90._0_7_ = SUB87(apppppuStack_1c0[0],0);
      uStack_90._7_1_ = (undefined1)((ulong)apppppuStack_1c0[0] >> 0x38);
      pppuStack_80 = apppppuStack_1c0[2];
      apppppuStack_1c0[1] = (undefined8 *****)0x0;
      apppppuStack_1c0[2] = (undefined8 *****)0x0;
      apppppuStack_1c0[0] = (undefined8 ******)0x0;
      FUN_107f4c680(&pppppuStack_e0,&uStack_90,auStack_168);
      FUN_107f4c154(param_1,&pppppuStack_e0);
      func_0x00010046a278(auStack_a8);
      puStack_e8 = unaff_x27;
      func_0x00010007e5dc(&puStack_e8);
      if ((long)apppppuStack_1c0[2] < 0) {
        __ZdlPv(apppppuStack_1c0[0]);
      }
      if ((char)bStack_101 < '\0') {
        func_0x000100033dac(&pppppuStack_1e0,pppppuStack_118,uStack_110);
      }
      else {
        uStack_1d8 = (undefined7)uStack_110;
        uStack_1d1 = (undefined1)((ulong)uStack_110 >> 0x38);
        pppppuStack_1e0 = pppppuStack_118;
        uStack_1d0 = uStack_108;
        bStack_1c9 = bStack_101;
      }
      ppppppuVar26 = (undefined8 ******)pppppuStack_1e0;
      unaff_x25 = (undefined8 ******)pppppuStack_1e0;
      bVar5 = bStack_1c9;
      ppppppuVar17 = (undefined8 ******)((long)pppppuStack_1e0 + CONCAT17(uStack_1d1,uStack_1d8));
      if (-1 < (char)bStack_1c9) {
        ppppppuVar26 = &pppppuStack_1e0;
        ppppppuVar17 = (undefined8 ******)((long)&pppppuStack_1e0 + (ulong)bStack_1c9);
      }
      for (; ppppppuVar26 != ppppppuVar17;
          ppppppuVar26 = (undefined8 ******)((long)ppppppuVar26 + 1)) {
        uVar14 = *(undefined1 *)ppppppuVar26;
        pppppuStack_1e0 = unaff_x25;
        bStack_1c9 = bVar5;
        ___tolower();
        *(undefined1 *)ppppppuVar26 = uVar14;
        unaff_x25 = (undefined8 ******)pppppuStack_1e0;
        bVar5 = bStack_1c9;
      }
      uStack_90._0_7_ = uStack_1d8;
      uStack_90._7_1_ = uStack_1d1;
      uStack_88 = uStack_1d0;
      uStack_1d8 = 0;
      uStack_1d1 = 0;
      uStack_1d0 = 0;
      bStack_1c9 = 0;
      pppppuStack_1e0 = (undefined8 ******)0x0;
      if (*(char *)((long)ppppuStack_160 + 0x17) < '\0') {
        func_0x000100033dac(&ppppplStack_200,*ppppuStack_160,ppppuStack_160[1]);
      }
      else {
        uStack_1f0 = SUB87(ppppuStack_160[2],0);
        bStack_1e9 = (byte)((ulong)ppppuStack_160[2] >> 0x38);
        uStack_1f8 = SUB87(ppppuStack_160[1],0);
        uStack_1f1 = (undefined1)((ulong)ppppuStack_160[1] >> 0x38);
        ppppplStack_200 = (long *****)*ppppuStack_160;
      }
      unaff_x23 = (long ******)ppppplStack_200;
      param_1 = (undefined8 ******)pppppuStack_218;
      pppppplVar28 = (long ******)ppppplStack_200;
      uVar6 = uStack_1f8;
      uVar14 = uStack_1f1;
      uVar7 = uStack_1f0;
      bVar8 = bStack_1e9;
      uVar9 = (undefined7)uStack_90;
      uVar10 = uStack_90._7_1_;
      uVar11 = uStack_88;
      pppppplVar23 = (long ******)((long)ppppplStack_200 + CONCAT17(uStack_1f1,uStack_1f8));
      if (-1 < (char)bStack_1e9) {
        unaff_x23 = &ppppplStack_200;
        pppppplVar23 = (long ******)((long)&ppppplStack_200 + (ulong)bStack_1e9);
      }
      for (; pppppuStack_218 = param_1, unaff_x23 != pppppplVar23;
          unaff_x23 = (long ******)((long)unaff_x23 + 1)) {
        uVar15 = *(undefined1 *)unaff_x23;
        ppppplStack_200 = (long *****)pppppplVar28;
        uStack_1f8 = uVar6;
        uStack_1f1 = uVar14;
        uStack_1f0 = uVar7;
        bStack_1e9 = bVar8;
        uStack_90._0_7_ = uVar9;
        uStack_90._7_1_ = uVar10;
        uStack_88 = uVar11;
        ___tolower();
        *(undefined1 *)unaff_x23 = uVar15;
        param_1 = (undefined8 ******)pppppuStack_218;
        pppppplVar28 = (long ******)ppppplStack_200;
        uVar6 = uStack_1f8;
        uVar14 = uStack_1f1;
        uVar7 = uStack_1f0;
        bVar8 = bStack_1e9;
        uVar9 = (undefined7)uStack_90;
        uVar10 = uStack_90._7_1_;
        uVar11 = uStack_88;
      }
      uStack_1f8 = 0;
      uStack_1f1 = 0;
      uStack_1f0 = 0;
      bStack_1e9 = 0;
      ppppplStack_200 = (long *****)0x0;
      uStack_90._0_7_ = 0;
      unaff_x21 = &pppppuStack_118;
      uStack_90._7_1_ = 0;
      uStack_88 = 0;
      pppppplVar23 = &pppppuStack_e0;
      pppppuStack_e0 = unaff_x25;
      uStack_d8 = uVar9;
      uStack_d1 = uVar10;
      uStack_d0 = uVar11;
      bStack_c9 = bVar5;
      ppppplStack_c8 = (long *****)pppppplVar28;
      uStack_c0._0_7_ = uVar6;
      uStack_c0._7_1_ = uVar14;
      uStack_b8 = uVar7;
      bStack_b1 = bVar8;
      func_0x0001002a9c20(param_1 + 10,pppppplVar23,&pppppuStack_e0);
      ppppppuVar17 = (undefined8 ******)pppppuStack_220;
      if ((char)bStack_1e9 < '\0') {
        __ZdlPv(ppppplStack_200);
      }
      if ((char)bStack_1c9 < '\0') {
        __ZdlPv(pppppuStack_1e0);
      }
      func_0x00010046a278(ppppppuVar17);
      pppppuStack_e0 = unaff_x22;
      func_0x00010007e5dc(&pppppuStack_e0);
      if ((char)bStack_101 < '\0') {
        __ZdlPv(pppppuStack_118);
      }
      ppppppuVar18 = ppppppuVar18 + 3;
    } while (ppppppuVar18 != (undefined8 ******)pppppuStack_210);
  }
  pppppuStack_e0 = &pppppuStack_100;
  ppppppuVar17 = &pppppuStack_e0;
  func_0x000100151ae0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  ppppppuVar26 = ppppppuVar17;
  __Unwind_Resume();
  pcStack_228 = FUN_107f4b144;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplStack_438 = (long *****)ppppppuVar26;
  pppppuStack_280 = param_1;
  puStack_278 = unaff_x27;
  pppppuStack_270 = ppppppuVar18;
  pppppuStack_268 = unaff_x25;
  ppppplStack_260 = (long *****)unaff_x24;
  ppppplStack_258 = (long *****)unaff_x23;
  pppppuStack_250 = unaff_x22;
  ppppplStack_248 = (long *****)unaff_x21;
  ppppplStack_240 = (long *****)ppppppuVar17;
  ppppplStack_238 = (long *****)param_2;
  puStack_230 = &stack0xfffffffffffffff0;
  func_0x00010002b838(&pppppuStack_300,&UNK_10f4664f6);
  FUN_107f4dbf4(&ppplStack_320);
  ppplStack_458 = ppplStack_318;
  pppplVar22 = (long ****)ppplStack_320;
  if (ppplStack_320 != ppplStack_318) {
    unaff_x25 = (undefined8 ******)&uStack_2b0;
    ppppppuVar18 = &pppppuStack_300;
    ppppplStack_450 = (long *****)&ppppplStack_2e8;
    puStack_448 = &uStack_2d0;
    pppppuStack_460 = appppuStack_368;
    unaff_x27 = &uStack_2e0;
    param_1 = &pppppuStack_410;
    unaff_x24 = &ppppplStack_430;
    do {
      FUN_107f4c860(auStack_338,*pppplVar22,0x2c);
      ppplVar20 = *pppplVar22;
      if (*(char *)((long)ppplVar20 + 0x2f) < '\0') {
        func_0x000100033dac(&plStack_390,ppplVar20[3],ppplVar20[4]);
      }
      else {
        plStack_388 = (long *)ppplVar20[4];
        plStack_390 = (long *)ppplVar20[3];
        plStack_380 = (long *)ppplVar20[5];
      }
      FUN_107f4bf6c(&pppppuStack_300,&plStack_390);
      ppplVar20 = *pppplVar22;
      if (*(char *)((long)ppplVar20 + 0x47) < '\0') {
        func_0x000100033dac(&plStack_3b0,ppplVar20[6],ppplVar20[7]);
      }
      else {
        plStack_3a8 = (long *)ppplVar20[7];
        plStack_3b0 = (long *)ppplVar20[6];
        plStack_3a0 = (long *)ppplVar20[8];
      }
      FUN_107f4bf6c(ppppplStack_450,&plStack_3b0);
      ppplVar20 = *pppplVar22;
      if (*(char *)((long)ppplVar20 + 0x5f) < '\0') {
        func_0x000100033dac(&plStack_3d0,ppplVar20[9],ppplVar20[10]);
      }
      else {
        plStack_3c8 = (long *)ppplVar20[10];
        plStack_3d0 = (long *)ppplVar20[9];
        plStack_3c0 = (long *)ppplVar20[0xb];
      }
      FUN_107f4bf6c(puStack_448,&plStack_3d0);
      uStack_2b0._0_7_ = 0;
      uStack_2b0._7_1_ = 0;
      uStack_2a8 = 0;
      uStack_2a1 = 0;
      pppuStack_2a0 = (undefined8 ***)0x0;
      func_0x00010007e1e8(&uStack_2b0,&pppppuStack_300,acStack_2b9 + 1,3);
      ppplStack_440 = (long ***)pppplVar22;
      FUN_107f4caa8(auStack_370,1,&uStack_2b0,auStack_338);
      puStack_308 = &uStack_2b0;
      func_0x00010007e5dc(&puStack_308);
      lVar24 = 0;
      do {
        if (acStack_2b9[lVar24] < '\0') {
          __ZdlPv(*(undefined8 *)((long)&uStack_2d0 + lVar24));
        }
        lVar24 = lVar24 + -0x18;
      } while (lVar24 != -0x48);
      if ((long)plStack_3c0 < 0) {
        __ZdlPv(plStack_3d0);
      }
      if ((long)plStack_3a0 < 0) {
        __ZdlPv(plStack_3b0);
      }
      if ((long)plStack_380 < 0) {
        __ZdlPv(plStack_390);
      }
      if (*(char *)((long)appppuStack_368[0] + 0x17) < '\0') {
        func_0x000100033dac(appppplStack_3f0,*appppuStack_368[0],appppuStack_368[0][1]);
      }
      else {
        appppplStack_3f0[2] = (long *****)appppuStack_368[0][2];
        appppplStack_3f0[1] = (long *****)appppuStack_368[0][1];
        appppplStack_3f0[0] = (long *****)*appppuStack_368[0];
      }
      unaff_x21 = (long ******)appppplStack_3f0[0];
      pppppplVar23 = (long ******)((long)appppplStack_3f0[0] + (long)appppplStack_3f0[1]);
      if (-1 < (long)appppplStack_3f0[2]) {
        unaff_x21 = appppplStack_3f0;
        pppppplVar23 = (long ******)((long)appppplStack_3f0 + ((ulong)appppplStack_3f0[2] >> 0x38));
      }
      for (; unaff_x21 != pppppplVar23; unaff_x21 = (long ******)((long)unaff_x21 + 1)) {
        uVar14 = *(undefined1 *)unaff_x21;
        ___tolower();
        *(undefined1 *)unaff_x21 = uVar14;
      }
      uStack_2a8 = SUB87(appppplStack_3f0[1],0);
      uStack_2a1 = (undefined1)((ulong)appppplStack_3f0[1] >> 0x38);
      uStack_2b0._0_7_ = SUB87(appppplStack_3f0[0],0);
      uStack_2b0._7_1_ = (undefined1)((ulong)appppplStack_3f0[0] >> 0x38);
      pppuStack_2a0 = appppplStack_3f0[2];
      appppplStack_3f0[1] = (long *****)0x0;
      appppplStack_3f0[2] = (long *****)0x0;
      appppplStack_3f0[0] = (long *****)0x0;
      FUN_107f4c680(&pppppuStack_300,&uStack_2b0,auStack_370);
      pppppplVar23 = &pppppuStack_300;
      FUN_107f4c154(ppppplStack_438);
      func_0x00010046a278(auStack_2c8);
      puStack_308 = unaff_x27;
      func_0x00010007e5dc(&puStack_308);
      puVar21 = puStack_330;
      if ((long)appppplStack_3f0[2] < 0) {
        __ZdlPv(appppplStack_3f0[0]);
        puVar21 = puStack_330;
      }
      for (; puVar21 != auStack_338; puVar21 = *(undefined1 **)(puVar21 + 8)) {
        if ((char)puVar21[0x27] < '\0') {
          func_0x000100033dac(&pppppuStack_410,*(undefined8 *)(puVar21 + 0x10),
                              *(undefined8 *)(puVar21 + 0x18));
        }
        else {
          uStack_408 = (undefined7)*(undefined8 *)(puVar21 + 0x18);
          uStack_401 = (undefined1)((ulong)*(undefined8 *)(puVar21 + 0x18) >> 0x38);
          pppppuStack_410 = *(undefined8 *******)(puVar21 + 0x10);
          uStack_400 = (undefined7)*(undefined8 *)(puVar21 + 0x20);
          bStack_3f9 = (byte)((ulong)*(undefined8 *)(puVar21 + 0x20) >> 0x38);
        }
        unaff_x21 = (long ******)(ulong)(uint)(int)(char)bStack_3f9;
        ppppppuVar17 = (undefined8 ******)pppppuStack_410;
        ppppppuVar26 = (undefined8 ******)((long)pppppuStack_410 + CONCAT17(uStack_401,uStack_408));
        if (-1 < (char)bStack_3f9) {
          ppppppuVar17 = param_1;
          ppppppuVar26 = (undefined8 ******)((long)param_1 + (ulong)bStack_3f9);
        }
        unaff_x22 = (undefined8 ******)pppppuStack_410;
        if (ppppppuVar17 != ppppppuVar26) {
          do {
            uVar14 = *(undefined1 *)ppppppuVar17;
            ___tolower();
            ppppppuVar25 = (undefined8 ******)((long)ppppppuVar17 + 1);
            *(undefined1 *)ppppppuVar17 = uVar14;
            ppppppuVar17 = ppppppuVar25;
          } while (ppppppuVar25 != ppppppuVar26);
          unaff_x21 = (long ******)(ulong)bStack_3f9;
          unaff_x22 = (undefined8 ******)pppppuStack_410;
        }
        uStack_2b0._0_7_ = uStack_408;
        uStack_2b0._7_1_ = uStack_401;
        uStack_2a8 = uStack_400;
        uStack_408 = 0;
        uStack_401 = 0;
        uStack_400 = 0;
        bStack_3f9 = 0;
        pppppuStack_410 = (undefined8 ******)0x0;
        if (*(char *)((long)appppuStack_368[0] + 0x17) < '\0') {
          func_0x000100033dac(&ppppplStack_430,*appppuStack_368[0],appppuStack_368[0][1]);
        }
        else {
          uStack_420 = SUB87(appppuStack_368[0][2],0);
          bStack_419 = (byte)((ulong)appppuStack_368[0][2] >> 0x38);
          uStack_428 = SUB87(appppuStack_368[0][1],0);
          uStack_421 = (undefined1)((ulong)appppuStack_368[0][1] >> 0x38);
          ppppplStack_430 = (long *****)*appppuStack_368[0];
        }
        pppppplVar23 = (long ******)ppppplStack_430;
        pppppplVar28 = (long ******)ppppplStack_430;
        uVar6 = uStack_428;
        uVar14 = uStack_421;
        uVar7 = uStack_420;
        bVar5 = bStack_419;
        uVar9 = (undefined7)uStack_2b0;
        uVar10 = uStack_2b0._7_1_;
        uVar11 = uStack_2a8;
        unaff_x23 = (long ******)((long)ppppplStack_430 + CONCAT17(uStack_421,uStack_428));
        if (-1 < (char)bStack_419) {
          pppppplVar23 = unaff_x24;
          unaff_x23 = (long ******)((long)unaff_x24 + (ulong)bStack_419);
        }
        for (; pppppplVar23 != unaff_x23; pppppplVar23 = (long ******)((long)pppppplVar23 + 1)) {
          uVar15 = *(undefined1 *)pppppplVar23;
          ppppplStack_430 = (long *****)pppppplVar28;
          uStack_428 = uVar6;
          uStack_421 = uVar14;
          uStack_420 = uVar7;
          bStack_419 = bVar5;
          uStack_2b0._0_7_ = uVar9;
          uStack_2b0._7_1_ = uVar10;
          uStack_2a8 = uVar11;
          ___tolower();
          *(undefined1 *)pppppplVar23 = uVar15;
          pppppplVar28 = (long ******)ppppplStack_430;
          uVar6 = uStack_428;
          uVar14 = uStack_421;
          uVar7 = uStack_420;
          bVar5 = bStack_419;
          uVar9 = (undefined7)uStack_2b0;
          uVar10 = uStack_2b0._7_1_;
          uVar11 = uStack_2a8;
        }
        uStack_428 = 0;
        uStack_421 = 0;
        uStack_420 = 0;
        bStack_419 = 0;
        ppppplStack_430 = (long *****)0x0;
        uStack_2e9 = SUB81(unaff_x21,0);
        uStack_2b0._0_7_ = 0;
        uStack_2b0._7_1_ = 0;
        uStack_2a8 = 0;
        pppppplVar23 = &pppppuStack_300;
        pppppuStack_300 = unaff_x22;
        uStack_2f8 = uVar9;
        uStack_2f1 = uVar10;
        uStack_2f0 = uVar11;
        ppppplStack_2e8 = (long *****)pppppplVar28;
        uStack_2e0._0_7_ = uVar6;
        uStack_2e0._7_1_ = uVar14;
        uStack_2d8 = uVar7;
        bStack_2d1 = bVar5;
        func_0x0001002a9c20(ppppplStack_438 + 0xf,pppppplVar23,&pppppuStack_300);
        if ((char)bStack_419 < '\0') {
          __ZdlPv(ppppplStack_430);
        }
        if ((char)bStack_3f9 < '\0') {
          __ZdlPv(pppppuStack_410);
        }
      }
      func_0x00010046a278(auStack_350);
      pppppuStack_300 = pppppuStack_460;
      func_0x00010007e5dc(&pppppuStack_300);
      func_0x00010046a278(auStack_338);
      pppplVar22 = (long ****)(ppplStack_440 + 3);
    } while (pppplVar22 != (long ****)ppplStack_458);
  }
  pppppuStack_300 = (undefined8 *****)&ppplStack_320;
  ppppppuVar17 = &pppppuStack_300;
  func_0x000100151ae0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  ppppppuVar26 = ppppppuVar17;
  __Unwind_Resume();
  pcStack_468 = FUN_107f4b81c;
  lStack_4d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuStack_6a8 = ppppppuVar26;
  pppppuStack_4c0 = param_1;
  puStack_4b8 = unaff_x27;
  pppppuStack_4b0 = ppppppuVar18;
  pppppuStack_4a8 = unaff_x25;
  ppppplStack_4a0 = (long *****)unaff_x24;
  ppppplStack_498 = (long *****)unaff_x23;
  pppppuStack_490 = unaff_x22;
  ppppplStack_488 = (long *****)unaff_x21;
  pppppuStack_480 = ppppppuVar17;
  ppplStack_478 = (long ***)pppplVar22;
  ppuStack_470 = &puStack_230;
  func_0x00010002b838(&pppppuStack_550,&UNK_10f466519);
  FUN_107f4dbf4(&ppplStack_570);
  ppplStack_6c8 = ppplStack_568;
  pppplVar22 = (long ****)ppplStack_570;
  if (ppplStack_570 != ppplStack_568) {
    ppppplStack_6b8 = (long *****)&ppppplStack_538;
    puStack_6c0 = auStack_520;
    puStack_6b0 = auStack_508;
    pppppuStack_6d0 = appppuStack_5b8;
    unaff_x25 = &pppppuStack_680;
    unaff_x21 = &ppppplStack_6a0;
    do {
      FUN_107f4c860(&ppppuStack_588,*pppplVar22,0x2c);
      ppplVar20 = *pppplVar22;
      if (*(char *)((long)ppplVar20 + 0x2f) < '\0') {
        func_0x000100033dac(&plStack_5e0,ppplVar20[3],ppplVar20[4]);
      }
      else {
        plStack_5d8 = (long *)ppplVar20[4];
        plStack_5e0 = (long *)ppplVar20[3];
        plStack_5d0 = (long *)ppplVar20[5];
      }
      FUN_107f4bf6c(&pppppuStack_550,&plStack_5e0);
      ppplVar20 = *pppplVar22;
      if (*(char *)((long)ppplVar20 + 0x47) < '\0') {
        func_0x000100033dac(&plStack_600,ppplVar20[6],ppplVar20[7]);
      }
      else {
        plStack_5f8 = (long *)ppplVar20[7];
        plStack_600 = (long *)ppplVar20[6];
        plStack_5f0 = (long *)ppplVar20[8];
      }
      FUN_107f4bf6c(ppppplStack_6b8,&plStack_600);
      ppplVar20 = *pppplVar22;
      if (*(char *)((long)ppplVar20 + 0x5f) < '\0') {
        func_0x000100033dac(&plStack_620,ppplVar20[9],ppplVar20[10]);
      }
      else {
        plStack_618 = (long *)ppplVar20[10];
        plStack_620 = (long *)ppplVar20[9];
        plStack_610 = (long *)ppplVar20[0xb];
      }
      FUN_107f4bf6c(puStack_6c0,&plStack_620);
      ppplVar20 = *pppplVar22;
      if (*(char *)((long)ppplVar20 + 0x77) < '\0') {
        func_0x000100033dac(&plStack_640,ppplVar20[0xc],ppplVar20[0xd]);
      }
      else {
        plStack_638 = (long *)ppplVar20[0xd];
        plStack_640 = (long *)ppplVar20[0xc];
        plStack_630 = (long *)ppplVar20[0xe];
      }
      FUN_107f4bf6c(puStack_6b0,&plStack_640);
      uStack_4f0 = 0;
      uStack_4e9 = 0;
      uStack_4e8 = 0;
      uStack_4e1 = 0;
      pppuStack_4e0 = (undefined8 ***)0x0;
      func_0x00010007e1e8(&uStack_4f0,&pppppuStack_550,&uStack_4f0,4);
      FUN_107f4caa8(auStack_5c0,2,&uStack_4f0,&ppppuStack_588);
      puStack_558 = &uStack_4f0;
      func_0x00010007e5dc(&puStack_558);
      lVar24 = 0;
      do {
        if ((&cStack_4f1)[lVar24] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_508 + lVar24));
        }
        lVar24 = lVar24 + -0x18;
      } while (lVar24 != -0x60);
      if ((long)plStack_630 < 0) {
        __ZdlPv(plStack_640);
      }
      if ((long)plStack_610 < 0) {
        __ZdlPv(plStack_620);
      }
      if ((long)plStack_5f0 < 0) {
        __ZdlPv(plStack_600);
      }
      if ((long)plStack_5d0 < 0) {
        __ZdlPv(plStack_5e0);
      }
      if (*(char *)((long)appppuStack_5b8[0] + 0x17) < '\0') {
        func_0x000100033dac(appppplStack_660,*appppuStack_5b8[0],appppuStack_5b8[0][1]);
      }
      else {
        appppplStack_660[2] = (long *****)appppuStack_5b8[0][2];
        appppplStack_660[1] = (long *****)appppuStack_5b8[0][1];
        appppplStack_660[0] = (long *****)*appppuStack_5b8[0];
      }
      pppppplVar28 = (long ******)appppplStack_660[0];
      pppppplVar23 = (long ******)((long)appppplStack_660[0] + (long)appppplStack_660[1]);
      if (-1 < (long)appppplStack_660[2]) {
        pppppplVar28 = appppplStack_660;
        pppppplVar23 = (long ******)((long)appppplStack_660 + ((ulong)appppplStack_660[2] >> 0x38));
      }
      for (; pppppplVar28 != pppppplVar23; pppppplVar28 = (long ******)((long)pppppplVar28 + 1)) {
        uVar14 = *(undefined1 *)pppppplVar28;
        ___tolower();
        *(undefined1 *)pppppplVar28 = uVar14;
      }
      uStack_4e8 = SUB87(appppplStack_660[1],0);
      uStack_4e1 = (undefined1)((ulong)appppplStack_660[1] >> 0x38);
      uStack_4f0 = SUB87(appppplStack_660[0],0);
      uStack_4e9 = (undefined1)((ulong)appppplStack_660[0] >> 0x38);
      pppuStack_4e0 = appppplStack_660[2];
      appppplStack_660[1] = (long *****)0x0;
      appppplStack_660[2] = (long *****)0x0;
      appppplStack_660[0] = (long *****)0x0;
      FUN_107f4c680(&pppppuStack_550,&uStack_4f0,auStack_5c0);
      FUN_107f4c154(pppppuStack_6a8,&pppppuStack_550);
      func_0x00010046a278(auStack_518);
      puStack_558 = &uStack_530;
      func_0x00010007e5dc(&puStack_558);
      unaff_x22 = (undefined8 ******)pppppuStack_580;
      if ((long)appppplStack_660[2] < 0) {
        __ZdlPv(appppplStack_660[0]);
        unaff_x22 = (undefined8 ******)pppppuStack_580;
      }
      for (; unaff_x23 = &pppppuStack_550, unaff_x22 != (undefined8 ******)&ppppuStack_588;
          unaff_x22 = (undefined8 ******)unaff_x22[1]) {
        if (*(char *)((long)unaff_x22 + 0x27) < '\0') {
          func_0x000100033dac(&pppppuStack_680,unaff_x22[2],unaff_x22[3]);
        }
        else {
          uStack_678 = SUB87(unaff_x22[3],0);
          uStack_671 = (undefined1)((ulong)unaff_x22[3] >> 0x38);
          pppppuStack_680 = unaff_x22[2];
          uStack_670 = SUB87(unaff_x22[4],0);
          bStack_669 = (byte)((ulong)unaff_x22[4] >> 0x38);
        }
        pppppplVar23 = (long ******)(ulong)(uint)(int)(char)bStack_669;
        ppppppuVar18 = (undefined8 ******)pppppuStack_680;
        ppppppuVar17 = (undefined8 ******)((long)pppppuStack_680 + CONCAT17(uStack_671,uStack_678));
        if (-1 < (char)bStack_669) {
          ppppppuVar18 = unaff_x25;
          ppppppuVar17 = (undefined8 ******)((long)unaff_x25 + (ulong)bStack_669);
        }
        ppppppuVar26 = (undefined8 ******)pppppuStack_680;
        if (ppppppuVar18 != ppppppuVar17) {
          do {
            uVar14 = *(undefined1 *)ppppppuVar18;
            ___tolower();
            ppppppuVar26 = (undefined8 ******)((long)ppppppuVar18 + 1);
            *(undefined1 *)ppppppuVar18 = uVar14;
            ppppppuVar18 = ppppppuVar26;
          } while (ppppppuVar26 != ppppppuVar17);
          pppppplVar23 = (long ******)(ulong)bStack_669;
          ppppppuVar26 = (undefined8 ******)pppppuStack_680;
        }
        uStack_4f0 = uStack_678;
        uStack_4e9 = uStack_671;
        uStack_4e8 = uStack_670;
        uStack_678 = 0;
        uStack_671 = 0;
        uStack_670 = 0;
        bStack_669 = 0;
        pppppuStack_680 = (undefined8 ******)0x0;
        if (*(char *)((long)appppuStack_5b8[0] + 0x17) < '\0') {
          func_0x000100033dac(&ppppplStack_6a0,*appppuStack_5b8[0],appppuStack_5b8[0][1]);
        }
        else {
          uStack_690 = SUB87(appppuStack_5b8[0][2],0);
          bStack_689 = (byte)((ulong)appppuStack_5b8[0][2] >> 0x38);
          uStack_698 = SUB87(appppuStack_5b8[0][1],0);
          uStack_691 = (undefined1)((ulong)appppuStack_5b8[0][1] >> 0x38);
          ppppplStack_6a0 = (long *****)*appppuStack_5b8[0];
        }
        pppppplVar28 = (long ******)ppppplStack_6a0;
        pppppplVar12 = (long ******)ppppplStack_6a0;
        uVar6 = uStack_698;
        uVar14 = uStack_691;
        uVar7 = uStack_690;
        bVar5 = bStack_689;
        uVar9 = uStack_4f0;
        uVar10 = uStack_4e9;
        uVar11 = uStack_4e8;
        unaff_x24 = (long ******)((long)ppppplStack_6a0 + CONCAT17(uStack_691,uStack_698));
        if (-1 < (char)bStack_689) {
          pppppplVar28 = unaff_x21;
          unaff_x24 = (long ******)((long)unaff_x21 + (ulong)bStack_689);
        }
        for (; pppppplVar28 != unaff_x24; pppppplVar28 = (long ******)((long)pppppplVar28 + 1)) {
          uVar15 = *(undefined1 *)pppppplVar28;
          ppppplStack_6a0 = (long *****)pppppplVar12;
          uStack_698 = uVar6;
          uStack_691 = uVar14;
          uStack_690 = uVar7;
          bStack_689 = bVar5;
          uStack_4f0 = uVar9;
          uStack_4e9 = uVar10;
          uStack_4e8 = uVar11;
          ___tolower();
          *(undefined1 *)pppppplVar28 = uVar15;
          pppppplVar12 = (long ******)ppppplStack_6a0;
          uVar6 = uStack_698;
          uVar14 = uStack_691;
          uVar7 = uStack_690;
          bVar5 = bStack_689;
          uVar9 = uStack_4f0;
          uVar10 = uStack_4e9;
          uVar11 = uStack_4e8;
        }
        uStack_698 = 0;
        uStack_691 = 0;
        uStack_690 = 0;
        bStack_689 = 0;
        ppppplStack_6a0 = (long *****)0x0;
        uStack_539 = SUB81(pppppplVar23,0);
        uStack_4f0 = 0;
        uStack_4e9 = 0;
        uStack_4e8 = 0;
        pppppuStack_550 = ppppppuVar26;
        uStack_548 = uVar9;
        uStack_541 = uVar10;
        uStack_540 = uVar11;
        ppppplStack_538 = (long *****)pppppplVar12;
        uStack_530 = uVar6;
        uStack_529 = uVar14;
        uStack_528 = uVar7;
        bStack_521 = bVar5;
        func_0x0001002a9c20(pppppuStack_6a8 + 0x14,&pppppuStack_550,&pppppuStack_550);
        if ((char)bStack_689 < '\0') {
          __ZdlPv(ppppplStack_6a0);
        }
        if ((char)bStack_669 < '\0') {
          __ZdlPv(pppppuStack_680);
        }
      }
      func_0x00010046a278(auStack_5a0);
      pppppuStack_550 = pppppuStack_6d0;
      func_0x00010007e5dc(&pppppuStack_550);
      func_0x00010046a278(&ppppuStack_588);
      pppplVar22 = pppplVar22 + 3;
    } while (pppplVar22 != (long ****)ppplStack_6c8);
  }
  pppppuStack_550 = (undefined8 *****)&ppplStack_570;
  ppppppuVar18 = &pppppuStack_550;
  func_0x000100151ae0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4d8) {
    return;
  }
  ___stack_chk_fail();
  ppppppuVar17 = ppppppuVar18;
  __Unwind_Resume();
  ppplStack_720 = (long ***)pppplVar22;
  pppppuStack_718 = unaff_x25;
  ppppplStack_710 = (long *****)unaff_x24;
  ppppplStack_708 = (long *****)unaff_x23;
  pppppuStack_700 = unaff_x22;
  ppppplStack_6f8 = (long *****)unaff_x21;
  pppppuStack_6f0 = ppppppuVar18;
  ppppplStack_6e8 = (long *****)pppppplVar23;
  pppuStack_6e0 = &ppuStack_470;
  pcStack_6d8 = FUN_107f4bf6c;
  if (*(char *)((long)ppppppuVar17 + 0x17) < '\0') {
    func_0x000100033dac(apppppcStack_760,*ppppppuVar17,ppppppuVar17[1]);
  }
  else {
    apppppcStack_760[1] = (char *****)ppppppuVar17[1];
    apppppcStack_760[0] = (char *****)*ppppppuVar17;
    lStack_750 = (long)ppppppuVar17[2];
  }
  puVar13 = PTR___DefaultRuneLocale_11034bcf8;
  ppppppcVar29 = (char ******)((long)apppppcStack_760[0] + (long)apppppcStack_760[1]);
  ppppppcVar2 = (char ******)apppppcStack_760[0];
  if (-1 < lStack_750) {
    ppppppcVar29 = (char ******)((long)apppppcStack_760 + ((ulong)lStack_750 >> 0x38));
    ppppppcVar2 = apppppcStack_760;
  }
  do {
    ppppppcVar27 = ppppppcVar2;
    if (ppppppcVar29 == ppppppcVar2) break;
    cVar3 = *(char *)((long)ppppppcVar29 + -1);
    lVar24 = (long)cVar3;
    if (cVar3 < 0) {
      ___maskrune(lVar24,0x4000);
      uVar16 = (uint)lVar24;
    }
    else {
      uVar16 = *(uint *)(puVar13 + (ulong)(uint)(int)cVar3 * 4 + 0x3c) & 0x4000;
    }
    ppppppcVar27 = ppppppcVar29;
    ppppppcVar29 = (char ******)((long)ppppppcVar29 + -1);
  } while (uVar16 != 0);
  ppppppcVar2 = (char ******)apppppcStack_760[0];
  pcVar4 = (char *)((long)apppppcStack_760[0] + (long)apppppcStack_760[1]);
  if (-1 < lStack_750) {
    ppppppcVar2 = apppppcStack_760;
    pcVar4 = (char *)((long)apppppcStack_760 + ((ulong)lStack_750 >> 0x38));
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
            (apppppcStack_760,(long)ppppppcVar27 - (long)ppppppcVar2,
             (long)pcVar4 - (long)ppppppcVar27);
  lVar24 = lStack_750;
  pppppcVar30 = apppppcStack_760[1];
  ppppppcVar2 = (char ******)apppppcStack_760[0];
  ppppuStack_730 = (undefined8 ****)lStack_750;
  ppppuStack_738 = apppppcStack_760[1];
  pppppcStack_740 = apppppcStack_760[0];
  apppppcStack_760[1] = (char *****)0x0;
  lStack_750 = 0;
  apppppcStack_760[0] = (char *****)0x0;
  if (-1 < lVar24) {
    pppppcVar30 = (char *****)((ulong)lVar24 >> 0x38);
    ppppppcVar2 = &pppppcStack_740;
  }
  ppppppcVar29 = ppppppcVar2;
  if (pppppcVar30 != (char *****)0x0) {
    ppppppcVar1 = (char ******)((long)ppppppcVar2 + (long)pppppcVar30);
    ppppppcVar27 = ppppppcVar2;
    do {
      cVar3 = *(char *)ppppppcVar27;
      lVar24 = (long)cVar3;
      if (cVar3 < 0) {
        ___maskrune(lVar24,0x4000);
        uVar16 = (uint)lVar24;
      }
      else {
        uVar16 = *(uint *)(puVar13 + (ulong)(uint)(int)cVar3 * 4 + 0x3c) & 0x4000;
      }
      ppppppcVar29 = ppppppcVar27;
      if (uVar16 == 0) break;
      ppppppcVar27 = (char ******)((long)ppppppcVar27 + 1);
      pppppcVar30 = (char *****)((long)pppppcVar30 + -1);
      ppppppcVar29 = ppppppcVar1;
    } while (pppppcVar30 != (char *****)0x0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
            (&pppppcStack_740,0,(long)ppppppcVar29 - (long)ppppppcVar2);
  extraout_x8[1] = ppppuStack_738;
  *extraout_x8 = pppppcStack_740;
  extraout_x8[2] = ppppuStack_730;
  ppppuStack_738 = (undefined8 ****)0x0;
  ppppuStack_730 = (undefined8 ****)0x0;
  pppppcStack_740 = (char *****)0x0;
  if (lStack_750 < 0) {
    __ZdlPv(apppppcStack_760[0]);
  }
  return;
}



/* Entry: 107f4b144; end: 107f4b81b;  */

/* WARNING: Removing unreachable block (ram,0x000107f4bb28) */
/* WARNING: Removing unreachable block (ram,0x000107f4b654) */
/* WARNING: Removing unreachable block (ram,0x000107f4b1a0) */
/* WARNING: Removing unreachable block (ram,0x000107f4b3fc) */
/* WARNING: Removing unreachable block (ram,0x000107f4b878) */
/* WARNING: Removing unreachable block (ram,0x000107f4bd88) */
/* WARNING: Removing unreachable block (ram,0x000107f4b40c) */
/* WARNING: Removing unreachable block (ram,0x000107f4bb38) */
/* WARNING: Removing unreachable block (ram,0x000107f4b584) */
/* WARNING: Removing unreachable block (ram,0x000107f4bcbc) */
/* WARNING: Removing unreachable block (ram,0x000107f4b594) */
/* WARNING: Removing unreachable block (ram,0x000107f4bccc) */

void FUN_107f4b144(long param_1,long ******param_2)

{
  char ******ppppppcVar1;
  char ******ppppppcVar2;
  char cVar3;
  char *pcVar4;
  long ******pppppplVar5;
  undefined7 uVar6;
  undefined7 uVar7;
  byte bVar8;
  undefined7 uVar9;
  undefined1 uVar10;
  undefined7 uVar11;
  undefined *puVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  uint uVar15;
  undefined8 ******ppppppuVar16;
  undefined8 ******ppppppuVar17;
  long ***ppplVar18;
  undefined8 *extraout_x8;
  long lVar19;
  undefined1 *puVar20;
  long ****pppplVar21;
  undefined8 ******ppppppuVar22;
  long ******unaff_x21;
  char ******ppppppcVar23;
  undefined8 ******unaff_x22;
  long ******pppppplVar24;
  char ******ppppppcVar25;
  long ******unaff_x23;
  char *****pppppcVar26;
  long ******unaff_x24;
  undefined8 ******unaff_x25;
  undefined8 ******unaff_x26;
  undefined8 *unaff_x27;
  undefined8 ******unaff_x28;
  char *****apppppcStack_540 [2];
  long lStack_530;
  char *****pppppcStack_520;
  undefined8 ****ppppuStack_518;
  undefined8 ****ppppuStack_510;
  long ***ppplStack_500;
  undefined8 *****pppppuStack_4f8;
  long *****ppppplStack_4f0;
  long *****ppppplStack_4e8;
  undefined8 *****pppppuStack_4e0;
  long *****ppppplStack_4d8;
  undefined8 *****pppppuStack_4d0;
  long *****ppppplStack_4c8;
  undefined1 **ppuStack_4c0;
  code *pcStack_4b8;
  undefined8 *****pppppuStack_4b0;
  long ***ppplStack_4a8;
  undefined1 *puStack_4a0;
  long *****ppppplStack_498;
  undefined8 *puStack_490;
  undefined8 *****pppppuStack_488;
  long *****ppppplStack_480;
  undefined7 uStack_478;
  undefined1 uStack_471;
  undefined7 uStack_470;
  byte bStack_469;
  undefined8 *****pppppuStack_460;
  undefined7 uStack_458;
  undefined1 uStack_451;
  undefined7 uStack_450;
  byte bStack_449;
  long *****appppplStack_440 [4];
  long *plStack_420;
  long *plStack_418;
  long *plStack_410;
  long *plStack_400;
  long *plStack_3f8;
  long *plStack_3f0;
  long *plStack_3e0;
  long *plStack_3d8;
  long *plStack_3d0;
  long *plStack_3c0;
  long *plStack_3b8;
  long *plStack_3b0;
  undefined1 auStack_3a0 [8];
  undefined8 ****appppuStack_398 [3];
  undefined1 auStack_380 [24];
  undefined8 ****ppppuStack_368;
  undefined8 *****pppppuStack_360;
  long ***ppplStack_350;
  long ***ppplStack_348;
  undefined7 *puStack_338;
  undefined8 *****pppppuStack_330;
  undefined7 uStack_328;
  undefined1 uStack_321;
  undefined7 uStack_320;
  undefined1 uStack_319;
  long *****ppppplStack_318;
  undefined7 uStack_310;
  undefined1 uStack_309;
  undefined7 uStack_308;
  byte bStack_301;
  undefined1 auStack_300 [8];
  undefined1 auStack_2f8 [16];
  undefined8 auStack_2e8 [2];
  char cStack_2d1;
  undefined7 uStack_2d0;
  undefined1 uStack_2c9;
  undefined7 uStack_2c8;
  undefined1 uStack_2c1;
  undefined8 ***pppuStack_2c0;
  long lStack_2b8;
  undefined8 *****pppppuStack_2a0;
  undefined8 *puStack_298;
  undefined8 *****pppppuStack_290;
  undefined8 *****pppppuStack_288;
  long *****ppppplStack_280;
  long *****ppppplStack_278;
  undefined8 *****pppppuStack_270;
  long *****ppppplStack_268;
  undefined8 *****pppppuStack_260;
  long ***ppplStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  undefined8 *****pppppuStack_240;
  long ***ppplStack_238;
  long *****ppppplStack_230;
  undefined8 *puStack_228;
  long ***ppplStack_220;
  long lStack_218;
  long *****ppppplStack_210;
  undefined7 uStack_208;
  undefined1 uStack_201;
  undefined7 uStack_200;
  byte bStack_1f9;
  undefined8 *****pppppuStack_1f0;
  undefined7 uStack_1e8;
  undefined1 uStack_1e1;
  undefined7 uStack_1e0;
  byte bStack_1d9;
  long *****appppplStack_1d0 [4];
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  undefined1 auStack_150 [8];
  undefined8 ****appppuStack_148 [3];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [8];
  undefined1 *puStack_110;
  long ***ppplStack_100;
  long ***ppplStack_f8;
  undefined8 *puStack_e8;
  undefined8 *****pppppuStack_e0;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  long *****ppppplStack_c8;
  undefined8 uStack_c0;
  undefined7 uStack_b8;
  byte bStack_b1;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [15];
  char acStack_99 [9];
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined8 ***pppuStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_218 = param_1;
  func_0x00010002b838(&pppppuStack_e0,&UNK_10f4664f6);
  FUN_107f4dbf4(&ppplStack_100);
  ppplStack_238 = ppplStack_f8;
  pppplVar21 = (long ****)ppplStack_100;
  if (ppplStack_100 != ppplStack_f8) {
    unaff_x25 = (undefined8 ******)&uStack_90;
    unaff_x26 = &pppppuStack_e0;
    ppppplStack_230 = (long *****)&ppppplStack_c8;
    puStack_228 = &uStack_b0;
    pppppuStack_240 = appppuStack_148;
    unaff_x27 = &uStack_c0;
    unaff_x28 = &pppppuStack_1f0;
    unaff_x24 = &ppppplStack_210;
    do {
      FUN_107f4c860(auStack_118,*pppplVar21,0x2c);
      ppplVar18 = *pppplVar21;
      if (*(char *)((long)ppplVar18 + 0x2f) < '\0') {
        func_0x000100033dac(&plStack_170,ppplVar18[3],ppplVar18[4]);
      }
      else {
        plStack_168 = (long *)ppplVar18[4];
        plStack_170 = (long *)ppplVar18[3];
        plStack_160 = (long *)ppplVar18[5];
      }
      FUN_107f4bf6c(&pppppuStack_e0,&plStack_170);
      ppplVar18 = *pppplVar21;
      if (*(char *)((long)ppplVar18 + 0x47) < '\0') {
        func_0x000100033dac(&plStack_190,ppplVar18[6],ppplVar18[7]);
      }
      else {
        plStack_188 = (long *)ppplVar18[7];
        plStack_190 = (long *)ppplVar18[6];
        plStack_180 = (long *)ppplVar18[8];
      }
      FUN_107f4bf6c(ppppplStack_230,&plStack_190);
      ppplVar18 = *pppplVar21;
      if (*(char *)((long)ppplVar18 + 0x5f) < '\0') {
        func_0x000100033dac(&plStack_1b0,ppplVar18[9],ppplVar18[10]);
      }
      else {
        plStack_1a8 = (long *)ppplVar18[10];
        plStack_1b0 = (long *)ppplVar18[9];
        plStack_1a0 = (long *)ppplVar18[0xb];
      }
      FUN_107f4bf6c(puStack_228,&plStack_1b0);
      uStack_90._0_7_ = 0;
      uStack_90._7_1_ = 0;
      uStack_88 = 0;
      uStack_81 = 0;
      pppuStack_80 = (undefined8 ***)0x0;
      func_0x00010007e1e8(&uStack_90,&pppppuStack_e0,acStack_99 + 1,3);
      ppplStack_220 = (long ***)pppplVar21;
      FUN_107f4caa8(auStack_150,1,&uStack_90,auStack_118);
      puStack_e8 = &uStack_90;
      func_0x00010007e5dc(&puStack_e8);
      lVar19 = 0;
      do {
        if (acStack_99[lVar19] < '\0') {
          __ZdlPv(*(undefined8 *)((long)&uStack_b0 + lVar19));
        }
        lVar19 = lVar19 + -0x18;
      } while (lVar19 != -0x48);
      if ((long)plStack_1a0 < 0) {
        __ZdlPv(plStack_1b0);
      }
      if ((long)plStack_180 < 0) {
        __ZdlPv(plStack_190);
      }
      if ((long)plStack_160 < 0) {
        __ZdlPv(plStack_170);
      }
      if (*(char *)((long)appppuStack_148[0] + 0x17) < '\0') {
        func_0x000100033dac(appppplStack_1d0,*appppuStack_148[0],appppuStack_148[0][1]);
      }
      else {
        appppplStack_1d0[2] = (long *****)appppuStack_148[0][2];
        appppplStack_1d0[1] = (long *****)appppuStack_148[0][1];
        appppplStack_1d0[0] = (long *****)*appppuStack_148[0];
      }
      unaff_x21 = (long ******)appppplStack_1d0[0];
      pppppplVar24 = (long ******)((long)appppplStack_1d0[0] + (long)appppplStack_1d0[1]);
      if (-1 < (long)appppplStack_1d0[2]) {
        unaff_x21 = appppplStack_1d0;
        pppppplVar24 = (long ******)((long)appppplStack_1d0 + ((ulong)appppplStack_1d0[2] >> 0x38));
      }
      for (; unaff_x21 != pppppplVar24; unaff_x21 = (long ******)((long)unaff_x21 + 1)) {
        uVar13 = *(undefined1 *)unaff_x21;
        ___tolower();
        *(undefined1 *)unaff_x21 = uVar13;
      }
      uStack_88 = SUB87(appppplStack_1d0[1],0);
      uStack_81 = (undefined1)((ulong)appppplStack_1d0[1] >> 0x38);
      uStack_90._0_7_ = SUB87(appppplStack_1d0[0],0);
      uStack_90._7_1_ = (undefined1)((ulong)appppplStack_1d0[0] >> 0x38);
      pppuStack_80 = appppplStack_1d0[2];
      appppplStack_1d0[1] = (long *****)0x0;
      appppplStack_1d0[2] = (long *****)0x0;
      appppplStack_1d0[0] = (long *****)0x0;
      FUN_107f4c680(&pppppuStack_e0,&uStack_90,auStack_150);
      param_2 = &pppppuStack_e0;
      FUN_107f4c154(lStack_218);
      func_0x00010046a278(auStack_a8);
      puStack_e8 = unaff_x27;
      func_0x00010007e5dc(&puStack_e8);
      puVar20 = puStack_110;
      if ((long)appppplStack_1d0[2] < 0) {
        __ZdlPv(appppplStack_1d0[0]);
        puVar20 = puStack_110;
      }
      for (; puVar20 != auStack_118; puVar20 = *(undefined1 **)(puVar20 + 8)) {
        if ((char)puVar20[0x27] < '\0') {
          func_0x000100033dac(&pppppuStack_1f0,*(undefined8 *)(puVar20 + 0x10),
                              *(undefined8 *)(puVar20 + 0x18));
        }
        else {
          uStack_1e8 = (undefined7)*(undefined8 *)(puVar20 + 0x18);
          uStack_1e1 = (undefined1)((ulong)*(undefined8 *)(puVar20 + 0x18) >> 0x38);
          pppppuStack_1f0 = *(undefined8 *******)(puVar20 + 0x10);
          uStack_1e0 = (undefined7)*(undefined8 *)(puVar20 + 0x20);
          bStack_1d9 = (byte)((ulong)*(undefined8 *)(puVar20 + 0x20) >> 0x38);
        }
        unaff_x21 = (long ******)(ulong)(uint)(int)(char)bStack_1d9;
        ppppppuVar16 = (undefined8 ******)pppppuStack_1f0;
        ppppppuVar17 = (undefined8 ******)((long)pppppuStack_1f0 + CONCAT17(uStack_1e1,uStack_1e8));
        if (-1 < (char)bStack_1d9) {
          ppppppuVar16 = unaff_x28;
          ppppppuVar17 = (undefined8 ******)((long)unaff_x28 + (ulong)bStack_1d9);
        }
        unaff_x22 = (undefined8 ******)pppppuStack_1f0;
        if (ppppppuVar16 != ppppppuVar17) {
          do {
            uVar13 = *(undefined1 *)ppppppuVar16;
            ___tolower();
            ppppppuVar22 = (undefined8 ******)((long)ppppppuVar16 + 1);
            *(undefined1 *)ppppppuVar16 = uVar13;
            ppppppuVar16 = ppppppuVar22;
          } while (ppppppuVar22 != ppppppuVar17);
          unaff_x21 = (long ******)(ulong)bStack_1d9;
          unaff_x22 = (undefined8 ******)pppppuStack_1f0;
        }
        uStack_90._0_7_ = uStack_1e8;
        uStack_90._7_1_ = uStack_1e1;
        uStack_88 = uStack_1e0;
        uStack_1e8 = 0;
        uStack_1e1 = 0;
        uStack_1e0 = 0;
        bStack_1d9 = 0;
        pppppuStack_1f0 = (undefined8 ******)0x0;
        if (*(char *)((long)appppuStack_148[0] + 0x17) < '\0') {
          func_0x000100033dac(&ppppplStack_210,*appppuStack_148[0],appppuStack_148[0][1]);
        }
        else {
          uStack_200 = SUB87(appppuStack_148[0][2],0);
          bStack_1f9 = (byte)((ulong)appppuStack_148[0][2] >> 0x38);
          uStack_208 = SUB87(appppuStack_148[0][1],0);
          uStack_201 = (undefined1)((ulong)appppuStack_148[0][1] >> 0x38);
          ppppplStack_210 = (long *****)*appppuStack_148[0];
        }
        pppppplVar24 = (long ******)ppppplStack_210;
        pppppplVar5 = (long ******)ppppplStack_210;
        uVar6 = uStack_208;
        uVar13 = uStack_201;
        uVar7 = uStack_200;
        bVar8 = bStack_1f9;
        uVar9 = (undefined7)uStack_90;
        uVar10 = uStack_90._7_1_;
        uVar11 = uStack_88;
        unaff_x23 = (long ******)((long)ppppplStack_210 + CONCAT17(uStack_201,uStack_208));
        if (-1 < (char)bStack_1f9) {
          pppppplVar24 = unaff_x24;
          unaff_x23 = (long ******)((long)unaff_x24 + (ulong)bStack_1f9);
        }
        for (; pppppplVar24 != unaff_x23; pppppplVar24 = (long ******)((long)pppppplVar24 + 1)) {
          uVar14 = *(undefined1 *)pppppplVar24;
          ppppplStack_210 = (long *****)pppppplVar5;
          uStack_208 = uVar6;
          uStack_201 = uVar13;
          uStack_200 = uVar7;
          bStack_1f9 = bVar8;
          uStack_90._0_7_ = uVar9;
          uStack_90._7_1_ = uVar10;
          uStack_88 = uVar11;
          ___tolower();
          *(undefined1 *)pppppplVar24 = uVar14;
          pppppplVar5 = (long ******)ppppplStack_210;
          uVar6 = uStack_208;
          uVar13 = uStack_201;
          uVar7 = uStack_200;
          bVar8 = bStack_1f9;
          uVar9 = (undefined7)uStack_90;
          uVar10 = uStack_90._7_1_;
          uVar11 = uStack_88;
        }
        uStack_208 = 0;
        uStack_201 = 0;
        uStack_200 = 0;
        bStack_1f9 = 0;
        ppppplStack_210 = (long *****)0x0;
        uStack_c9 = SUB81(unaff_x21,0);
        uStack_90._0_7_ = 0;
        uStack_90._7_1_ = 0;
        uStack_88 = 0;
        param_2 = &pppppuStack_e0;
        pppppuStack_e0 = unaff_x22;
        uStack_d8 = uVar9;
        uStack_d1 = uVar10;
        uStack_d0 = uVar11;
        ppppplStack_c8 = (long *****)pppppplVar5;
        uStack_c0._0_7_ = uVar6;
        uStack_c0._7_1_ = uVar13;
        uStack_b8 = uVar7;
        bStack_b1 = bVar8;
        func_0x0001002a9c20(lStack_218 + 0x78,param_2,&pppppuStack_e0);
        if ((char)bStack_1f9 < '\0') {
          __ZdlPv(ppppplStack_210);
        }
        if ((char)bStack_1d9 < '\0') {
          __ZdlPv(pppppuStack_1f0);
        }
      }
      func_0x00010046a278(auStack_130);
      pppppuStack_e0 = pppppuStack_240;
      func_0x00010007e5dc(&pppppuStack_e0);
      func_0x00010046a278(auStack_118);
      pppplVar21 = (long ****)(ppplStack_220 + 3);
    } while (pppplVar21 != (long ****)ppplStack_238);
  }
  pppppuStack_e0 = (undefined8 *****)&ppplStack_100;
  ppppppuVar16 = &pppppuStack_e0;
  func_0x000100151ae0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  ppppppuVar17 = ppppppuVar16;
  __Unwind_Resume();
  pcStack_248 = FUN_107f4b81c;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuStack_488 = ppppppuVar17;
  pppppuStack_2a0 = unaff_x28;
  puStack_298 = unaff_x27;
  pppppuStack_290 = unaff_x26;
  pppppuStack_288 = unaff_x25;
  ppppplStack_280 = (long *****)unaff_x24;
  ppppplStack_278 = (long *****)unaff_x23;
  pppppuStack_270 = unaff_x22;
  ppppplStack_268 = (long *****)unaff_x21;
  pppppuStack_260 = ppppppuVar16;
  ppplStack_258 = (long ***)pppplVar21;
  puStack_250 = &stack0xfffffffffffffff0;
  func_0x00010002b838(&pppppuStack_330,&UNK_10f466519);
  FUN_107f4dbf4(&ppplStack_350);
  ppplStack_4a8 = ppplStack_348;
  pppplVar21 = (long ****)ppplStack_350;
  if (ppplStack_350 != ppplStack_348) {
    ppppplStack_498 = (long *****)&ppppplStack_318;
    puStack_4a0 = auStack_300;
    puStack_490 = auStack_2e8;
    pppppuStack_4b0 = appppuStack_398;
    unaff_x25 = &pppppuStack_460;
    unaff_x21 = &ppppplStack_480;
    do {
      FUN_107f4c860(&ppppuStack_368,*pppplVar21,0x2c);
      ppplVar18 = *pppplVar21;
      if (*(char *)((long)ppplVar18 + 0x2f) < '\0') {
        func_0x000100033dac(&plStack_3c0,ppplVar18[3],ppplVar18[4]);
      }
      else {
        plStack_3b8 = (long *)ppplVar18[4];
        plStack_3c0 = (long *)ppplVar18[3];
        plStack_3b0 = (long *)ppplVar18[5];
      }
      FUN_107f4bf6c(&pppppuStack_330,&plStack_3c0);
      ppplVar18 = *pppplVar21;
      if (*(char *)((long)ppplVar18 + 0x47) < '\0') {
        func_0x000100033dac(&plStack_3e0,ppplVar18[6],ppplVar18[7]);
      }
      else {
        plStack_3d8 = (long *)ppplVar18[7];
        plStack_3e0 = (long *)ppplVar18[6];
        plStack_3d0 = (long *)ppplVar18[8];
      }
      FUN_107f4bf6c(ppppplStack_498,&plStack_3e0);
      ppplVar18 = *pppplVar21;
      if (*(char *)((long)ppplVar18 + 0x5f) < '\0') {
        func_0x000100033dac(&plStack_400,ppplVar18[9],ppplVar18[10]);
      }
      else {
        plStack_3f8 = (long *)ppplVar18[10];
        plStack_400 = (long *)ppplVar18[9];
        plStack_3f0 = (long *)ppplVar18[0xb];
      }
      FUN_107f4bf6c(puStack_4a0,&plStack_400);
      ppplVar18 = *pppplVar21;
      if (*(char *)((long)ppplVar18 + 0x77) < '\0') {
        func_0x000100033dac(&plStack_420,ppplVar18[0xc],ppplVar18[0xd]);
      }
      else {
        plStack_418 = (long *)ppplVar18[0xd];
        plStack_420 = (long *)ppplVar18[0xc];
        plStack_410 = (long *)ppplVar18[0xe];
      }
      FUN_107f4bf6c(puStack_490,&plStack_420);
      uStack_2d0 = 0;
      uStack_2c9 = 0;
      uStack_2c8 = 0;
      uStack_2c1 = 0;
      pppuStack_2c0 = (undefined8 ***)0x0;
      func_0x00010007e1e8(&uStack_2d0,&pppppuStack_330,&uStack_2d0,4);
      FUN_107f4caa8(auStack_3a0,2,&uStack_2d0,&ppppuStack_368);
      puStack_338 = &uStack_2d0;
      func_0x00010007e5dc(&puStack_338);
      lVar19 = 0;
      do {
        if ((&cStack_2d1)[lVar19] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2e8 + lVar19));
        }
        lVar19 = lVar19 + -0x18;
      } while (lVar19 != -0x60);
      if ((long)plStack_410 < 0) {
        __ZdlPv(plStack_420);
      }
      if ((long)plStack_3f0 < 0) {
        __ZdlPv(plStack_400);
      }
      if ((long)plStack_3d0 < 0) {
        __ZdlPv(plStack_3e0);
      }
      if ((long)plStack_3b0 < 0) {
        __ZdlPv(plStack_3c0);
      }
      if (*(char *)((long)appppuStack_398[0] + 0x17) < '\0') {
        func_0x000100033dac(appppplStack_440,*appppuStack_398[0],appppuStack_398[0][1]);
      }
      else {
        appppplStack_440[2] = (long *****)appppuStack_398[0][2];
        appppplStack_440[1] = (long *****)appppuStack_398[0][1];
        appppplStack_440[0] = (long *****)*appppuStack_398[0];
      }
      pppppplVar24 = (long ******)appppplStack_440[0];
      param_2 = (long ******)((long)appppplStack_440[0] + (long)appppplStack_440[1]);
      if (-1 < (long)appppplStack_440[2]) {
        pppppplVar24 = appppplStack_440;
        param_2 = (long ******)((long)appppplStack_440 + ((ulong)appppplStack_440[2] >> 0x38));
      }
      for (; pppppplVar24 != param_2; pppppplVar24 = (long ******)((long)pppppplVar24 + 1)) {
        uVar13 = *(undefined1 *)pppppplVar24;
        ___tolower();
        *(undefined1 *)pppppplVar24 = uVar13;
      }
      uStack_2c8 = SUB87(appppplStack_440[1],0);
      uStack_2c1 = (undefined1)((ulong)appppplStack_440[1] >> 0x38);
      uStack_2d0 = SUB87(appppplStack_440[0],0);
      uStack_2c9 = (undefined1)((ulong)appppplStack_440[0] >> 0x38);
      pppuStack_2c0 = appppplStack_440[2];
      appppplStack_440[1] = (long *****)0x0;
      appppplStack_440[2] = (long *****)0x0;
      appppplStack_440[0] = (long *****)0x0;
      FUN_107f4c680(&pppppuStack_330,&uStack_2d0,auStack_3a0);
      FUN_107f4c154(pppppuStack_488,&pppppuStack_330);
      func_0x00010046a278(auStack_2f8);
      puStack_338 = &uStack_310;
      func_0x00010007e5dc(&puStack_338);
      unaff_x22 = (undefined8 ******)pppppuStack_360;
      if ((long)appppplStack_440[2] < 0) {
        __ZdlPv(appppplStack_440[0]);
        unaff_x22 = (undefined8 ******)pppppuStack_360;
      }
      for (; unaff_x23 = &pppppuStack_330, unaff_x22 != (undefined8 ******)&ppppuStack_368;
          unaff_x22 = (undefined8 ******)unaff_x22[1]) {
        if (*(char *)((long)unaff_x22 + 0x27) < '\0') {
          func_0x000100033dac(&pppppuStack_460,unaff_x22[2],unaff_x22[3]);
        }
        else {
          uStack_458 = SUB87(unaff_x22[3],0);
          uStack_451 = (undefined1)((ulong)unaff_x22[3] >> 0x38);
          pppppuStack_460 = unaff_x22[2];
          uStack_450 = SUB87(unaff_x22[4],0);
          bStack_449 = (byte)((ulong)unaff_x22[4] >> 0x38);
        }
        param_2 = (long ******)(ulong)(uint)(int)(char)bStack_449;
        ppppppuVar16 = (undefined8 ******)pppppuStack_460;
        ppppppuVar17 = (undefined8 ******)((long)pppppuStack_460 + CONCAT17(uStack_451,uStack_458));
        if (-1 < (char)bStack_449) {
          ppppppuVar16 = unaff_x25;
          ppppppuVar17 = (undefined8 ******)((long)unaff_x25 + (ulong)bStack_449);
        }
        ppppppuVar22 = (undefined8 ******)pppppuStack_460;
        if (ppppppuVar16 != ppppppuVar17) {
          do {
            uVar13 = *(undefined1 *)ppppppuVar16;
            ___tolower();
            ppppppuVar22 = (undefined8 ******)((long)ppppppuVar16 + 1);
            *(undefined1 *)ppppppuVar16 = uVar13;
            ppppppuVar16 = ppppppuVar22;
          } while (ppppppuVar22 != ppppppuVar17);
          param_2 = (long ******)(ulong)bStack_449;
          ppppppuVar22 = (undefined8 ******)pppppuStack_460;
        }
        uStack_2d0 = uStack_458;
        uStack_2c9 = uStack_451;
        uStack_2c8 = uStack_450;
        uStack_458 = 0;
        uStack_451 = 0;
        uStack_450 = 0;
        bStack_449 = 0;
        pppppuStack_460 = (undefined8 ******)0x0;
        if (*(char *)((long)appppuStack_398[0] + 0x17) < '\0') {
          func_0x000100033dac(&ppppplStack_480,*appppuStack_398[0],appppuStack_398[0][1]);
        }
        else {
          uStack_470 = SUB87(appppuStack_398[0][2],0);
          bStack_469 = (byte)((ulong)appppuStack_398[0][2] >> 0x38);
          uStack_478 = SUB87(appppuStack_398[0][1],0);
          uStack_471 = (undefined1)((ulong)appppuStack_398[0][1] >> 0x38);
          ppppplStack_480 = (long *****)*appppuStack_398[0];
        }
        pppppplVar24 = (long ******)ppppplStack_480;
        pppppplVar5 = (long ******)ppppplStack_480;
        uVar6 = uStack_478;
        uVar13 = uStack_471;
        uVar7 = uStack_470;
        bVar8 = bStack_469;
        uVar9 = uStack_2d0;
        uVar10 = uStack_2c9;
        uVar11 = uStack_2c8;
        unaff_x24 = (long ******)((long)ppppplStack_480 + CONCAT17(uStack_471,uStack_478));
        if (-1 < (char)bStack_469) {
          pppppplVar24 = unaff_x21;
          unaff_x24 = (long ******)((long)unaff_x21 + (ulong)bStack_469);
        }
        for (; pppppplVar24 != unaff_x24; pppppplVar24 = (long ******)((long)pppppplVar24 + 1)) {
          uVar14 = *(undefined1 *)pppppplVar24;
          ppppplStack_480 = (long *****)pppppplVar5;
          uStack_478 = uVar6;
          uStack_471 = uVar13;
          uStack_470 = uVar7;
          bStack_469 = bVar8;
          uStack_2d0 = uVar9;
          uStack_2c9 = uVar10;
          uStack_2c8 = uVar11;
          ___tolower();
          *(undefined1 *)pppppplVar24 = uVar14;
          pppppplVar5 = (long ******)ppppplStack_480;
          uVar6 = uStack_478;
          uVar13 = uStack_471;
          uVar7 = uStack_470;
          bVar8 = bStack_469;
          uVar9 = uStack_2d0;
          uVar10 = uStack_2c9;
          uVar11 = uStack_2c8;
        }
        uStack_478 = 0;
        uStack_471 = 0;
        uStack_470 = 0;
        bStack_469 = 0;
        ppppplStack_480 = (long *****)0x0;
        uStack_319 = SUB81(param_2,0);
        uStack_2d0 = 0;
        uStack_2c9 = 0;
        uStack_2c8 = 0;
        pppppuStack_330 = ppppppuVar22;
        uStack_328 = uVar9;
        uStack_321 = uVar10;
        uStack_320 = uVar11;
        ppppplStack_318 = (long *****)pppppplVar5;
        uStack_310 = uVar6;
        uStack_309 = uVar13;
        uStack_308 = uVar7;
        bStack_301 = bVar8;
        func_0x0001002a9c20(pppppuStack_488 + 0x14,&pppppuStack_330,&pppppuStack_330);
        if ((char)bStack_469 < '\0') {
          __ZdlPv(ppppplStack_480);
        }
        if ((char)bStack_449 < '\0') {
          __ZdlPv(pppppuStack_460);
        }
      }
      func_0x00010046a278(auStack_380);
      pppppuStack_330 = pppppuStack_4b0;
      func_0x00010007e5dc(&pppppuStack_330);
      func_0x00010046a278(&ppppuStack_368);
      pppplVar21 = pppplVar21 + 3;
    } while (pppplVar21 != (long ****)ppplStack_4a8);
  }
  pppppuStack_330 = (undefined8 *****)&ppplStack_350;
  ppppppuVar16 = &pppppuStack_330;
  func_0x000100151ae0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return;
  }
  ___stack_chk_fail();
  ppppppuVar17 = ppppppuVar16;
  __Unwind_Resume();
  ppplStack_500 = (long ***)pppplVar21;
  pppppuStack_4f8 = unaff_x25;
  ppppplStack_4f0 = (long *****)unaff_x24;
  ppppplStack_4e8 = (long *****)unaff_x23;
  pppppuStack_4e0 = unaff_x22;
  ppppplStack_4d8 = (long *****)unaff_x21;
  pppppuStack_4d0 = ppppppuVar16;
  ppppplStack_4c8 = (long *****)param_2;
  ppuStack_4c0 = &puStack_250;
  pcStack_4b8 = FUN_107f4bf6c;
  if (*(char *)((long)ppppppuVar17 + 0x17) < '\0') {
    func_0x000100033dac(apppppcStack_540,*ppppppuVar17,ppppppuVar17[1]);
  }
  else {
    apppppcStack_540[1] = (char *****)ppppppuVar17[1];
    apppppcStack_540[0] = (char *****)*ppppppuVar17;
    lStack_530 = (long)ppppppuVar17[2];
  }
  puVar12 = PTR___DefaultRuneLocale_11034bcf8;
  ppppppcVar25 = (char ******)((long)apppppcStack_540[0] + (long)apppppcStack_540[1]);
  ppppppcVar2 = (char ******)apppppcStack_540[0];
  if (-1 < lStack_530) {
    ppppppcVar25 = (char ******)((long)apppppcStack_540 + ((ulong)lStack_530 >> 0x38));
    ppppppcVar2 = apppppcStack_540;
  }
  do {
    ppppppcVar23 = ppppppcVar2;
    if (ppppppcVar25 == ppppppcVar2) break;
    cVar3 = *(char *)((long)ppppppcVar25 + -1);
    lVar19 = (long)cVar3;
    if (cVar3 < 0) {
      ___maskrune(lVar19,0x4000);
      uVar15 = (uint)lVar19;
    }
    else {
      uVar15 = *(uint *)(puVar12 + (ulong)(uint)(int)cVar3 * 4 + 0x3c) & 0x4000;
    }
    ppppppcVar23 = ppppppcVar25;
    ppppppcVar25 = (char ******)((long)ppppppcVar25 + -1);
  } while (uVar15 != 0);
  ppppppcVar2 = (char ******)apppppcStack_540[0];
  pcVar4 = (char *)((long)apppppcStack_540[0] + (long)apppppcStack_540[1]);
  if (-1 < lStack_530) {
    ppppppcVar2 = apppppcStack_540;
    pcVar4 = (char *)((long)apppppcStack_540 + ((ulong)lStack_530 >> 0x38));
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
            (apppppcStack_540,(long)ppppppcVar23 - (long)ppppppcVar2,
             (long)pcVar4 - (long)ppppppcVar23);
  lVar19 = lStack_530;
  pppppcVar26 = apppppcStack_540[1];
  ppppppcVar2 = (char ******)apppppcStack_540[0];
  ppppuStack_510 = (undefined8 ****)lStack_530;
  ppppuStack_518 = apppppcStack_540[1];
  pppppcStack_520 = apppppcStack_540[0];
  apppppcStack_540[1] = (char *****)0x0;
  lStack_530 = 0;
  apppppcStack_540[0] = (char *****)0x0;
  if (-1 < lVar19) {
    pppppcVar26 = (char *****)((ulong)lVar19 >> 0x38);
    ppppppcVar2 = &pppppcStack_520;
  }
  ppppppcVar25 = ppppppcVar2;
  if (pppppcVar26 != (char *****)0x0) {
    ppppppcVar1 = (char ******)((long)ppppppcVar2 + (long)pppppcVar26);
    ppppppcVar23 = ppppppcVar2;
    do {
      cVar3 = *(char *)ppppppcVar23;
      lVar19 = (long)cVar3;
      if (cVar3 < 0) {
        ___maskrune(lVar19,0x4000);
        uVar15 = (uint)lVar19;
      }
      else {
        uVar15 = *(uint *)(puVar12 + (ulong)(uint)(int)cVar3 * 4 + 0x3c) & 0x4000;
      }
      ppppppcVar25 = ppppppcVar23;
      if (uVar15 == 0) break;
      ppppppcVar23 = (char ******)((long)ppppppcVar23 + 1);
      pppppcVar26 = (char *****)((long)pppppcVar26 + -1);
      ppppppcVar25 = ppppppcVar1;
    } while (pppppcVar26 != (char *****)0x0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
            (&pppppcStack_520,0,(long)ppppppcVar25 - (long)ppppppcVar2);
  extraout_x8[1] = ppppuStack_518;
  *extraout_x8 = pppppcStack_520;
  extraout_x8[2] = ppppuStack_510;
  ppppuStack_518 = (undefined8 ****)0x0;
  ppppuStack_510 = (undefined8 ****)0x0;
  pppppcStack_520 = (char *****)0x0;
  if (lStack_530 < 0) {
    __ZdlPv(apppppcStack_540[0]);
  }
  return;
}



/* Entry: 107f4b81c; end: 107f4bf6b;  */

/* WARNING: Removing unreachable block (ram,0x000107f4bb28) */
/* WARNING: Removing unreachable block (ram,0x000107f4b878) */
/* WARNING: Removing unreachable block (ram,0x000107f4bd88) */
/* WARNING: Removing unreachable block (ram,0x000107f4bb38) */
/* WARNING: Removing unreachable block (ram,0x000107f4bcbc) */
/* WARNING: Removing unreachable block (ram,0x000107f4bccc) */

void FUN_107f4b81c(long param_1,undefined8 ******param_2)

{
  char ******ppppppcVar1;
  char ******ppppppcVar2;
  char cVar3;
  char *pcVar4;
  undefined7 uVar5;
  undefined7 uVar6;
  byte bVar7;
  undefined7 uVar8;
  undefined1 uVar9;
  undefined7 uVar10;
  undefined *puVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined8 ******ppppppuVar15;
  undefined8 ******ppppppuVar16;
  undefined8 ***pppuVar17;
  undefined8 *extraout_x8;
  long lVar18;
  undefined8 ******ppppppuVar19;
  undefined8 ******unaff_x21;
  char ******ppppppcVar20;
  undefined1 *unaff_x22;
  char ******ppppppcVar21;
  undefined8 ******unaff_x23;
  char *****pppppcVar22;
  undefined8 ******unaff_x24;
  undefined8 ******unaff_x25;
  undefined8 ****ppppuVar23;
  char *****apppppcStack_300 [2];
  long lStack_2f0;
  char *****pppppcStack_2e0;
  undefined8 ****ppppuStack_2d8;
  undefined8 ****ppppuStack_2d0;
  undefined8 ***pppuStack_2c0;
  undefined8 *****pppppuStack_2b8;
  undefined8 *****pppppuStack_2b0;
  undefined8 *****pppppuStack_2a8;
  undefined1 *puStack_2a0;
  undefined8 *****pppppuStack_298;
  undefined8 *****pppppuStack_290;
  undefined8 *****pppppuStack_288;
  undefined1 *puStack_280;
  code *pcStack_278;
  undefined8 *****pppppuStack_270;
  undefined8 ***pppuStack_268;
  undefined1 *puStack_260;
  undefined8 *****pppppuStack_258;
  undefined8 *puStack_250;
  long lStack_248;
  undefined8 *****pppppuStack_240;
  undefined7 uStack_238;
  undefined1 uStack_231;
  undefined7 uStack_230;
  byte bStack_229;
  undefined8 *****pppppuStack_220;
  undefined7 uStack_218;
  undefined1 uStack_211;
  undefined7 uStack_210;
  byte bStack_209;
  undefined8 *****apppppuStack_200 [4];
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined1 auStack_160 [8];
  undefined8 ****appppuStack_158 [3];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [8];
  undefined1 *puStack_120;
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  undefined7 *puStack_f8;
  undefined8 *****pppppuStack_f0;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  undefined8 *****pppppuStack_d8;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  undefined7 uStack_c8;
  byte bStack_c1;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [16];
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined8 ***pppuStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_248 = param_1;
  func_0x00010002b838(&pppppuStack_f0,&UNK_10f466519);
  FUN_107f4dbf4(&pppuStack_110);
  pppuStack_268 = pppuStack_108;
  ppppuVar23 = (undefined8 ****)pppuStack_110;
  if (pppuStack_110 != pppuStack_108) {
    pppppuStack_258 = &pppppuStack_d8;
    puStack_260 = auStack_c0;
    puStack_250 = auStack_a8;
    pppppuStack_270 = appppuStack_158;
    unaff_x25 = &pppppuStack_220;
    unaff_x21 = &pppppuStack_240;
    do {
      FUN_107f4c860(auStack_128,*ppppuVar23,0x2c);
      pppuVar17 = *ppppuVar23;
      if (*(char *)((long)pppuVar17 + 0x2f) < '\0') {
        func_0x000100033dac(&puStack_180,pppuVar17[3],pppuVar17[4]);
      }
      else {
        puStack_178 = pppuVar17[4];
        puStack_180 = pppuVar17[3];
        puStack_170 = pppuVar17[5];
      }
      FUN_107f4bf6c(&pppppuStack_f0,&puStack_180);
      pppuVar17 = *ppppuVar23;
      if (*(char *)((long)pppuVar17 + 0x47) < '\0') {
        func_0x000100033dac(&puStack_1a0,pppuVar17[6],pppuVar17[7]);
      }
      else {
        puStack_198 = pppuVar17[7];
        puStack_1a0 = pppuVar17[6];
        puStack_190 = pppuVar17[8];
      }
      FUN_107f4bf6c(pppppuStack_258,&puStack_1a0);
      pppuVar17 = *ppppuVar23;
      if (*(char *)((long)pppuVar17 + 0x5f) < '\0') {
        func_0x000100033dac(&puStack_1c0,pppuVar17[9],pppuVar17[10]);
      }
      else {
        puStack_1b8 = pppuVar17[10];
        puStack_1c0 = pppuVar17[9];
        puStack_1b0 = pppuVar17[0xb];
      }
      FUN_107f4bf6c(puStack_260,&puStack_1c0);
      pppuVar17 = *ppppuVar23;
      if (*(char *)((long)pppuVar17 + 0x77) < '\0') {
        func_0x000100033dac(&puStack_1e0,pppuVar17[0xc],pppuVar17[0xd]);
      }
      else {
        puStack_1d8 = pppuVar17[0xd];
        puStack_1e0 = pppuVar17[0xc];
        puStack_1d0 = pppuVar17[0xe];
      }
      FUN_107f4bf6c(puStack_250,&puStack_1e0);
      uStack_90 = 0;
      uStack_89 = 0;
      uStack_88 = 0;
      uStack_81 = 0;
      pppuStack_80 = (undefined8 ***)0x0;
      func_0x00010007e1e8(&uStack_90,&pppppuStack_f0,&uStack_90,4);
      FUN_107f4caa8(auStack_160,2,&uStack_90,auStack_128);
      puStack_f8 = &uStack_90;
      func_0x00010007e5dc(&puStack_f8);
      lVar18 = 0;
      do {
        if ((&cStack_91)[lVar18] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_a8 + lVar18));
        }
        lVar18 = lVar18 + -0x18;
      } while (lVar18 != -0x60);
      if ((long)puStack_1d0 < 0) {
        __ZdlPv(puStack_1e0);
      }
      if ((long)puStack_1b0 < 0) {
        __ZdlPv(puStack_1c0);
      }
      if ((long)puStack_190 < 0) {
        __ZdlPv(puStack_1a0);
      }
      if ((long)puStack_170 < 0) {
        __ZdlPv(puStack_180);
      }
      if (*(char *)((long)appppuStack_158[0] + 0x17) < '\0') {
        func_0x000100033dac(apppppuStack_200,*appppuStack_158[0],appppuStack_158[0][1]);
      }
      else {
        apppppuStack_200[2] = (undefined8 *****)appppuStack_158[0][2];
        apppppuStack_200[1] = (undefined8 *****)appppuStack_158[0][1];
        apppppuStack_200[0] = (undefined8 *****)*appppuStack_158[0];
      }
      ppppppuVar15 = (undefined8 ******)apppppuStack_200[0];
      param_2 = (undefined8 ******)((long)apppppuStack_200[0] + (long)apppppuStack_200[1]);
      if (-1 < (long)apppppuStack_200[2]) {
        ppppppuVar15 = apppppuStack_200;
        param_2 = (undefined8 ******)((long)apppppuStack_200 + ((ulong)apppppuStack_200[2] >> 0x38))
        ;
      }
      for (; ppppppuVar15 != param_2; ppppppuVar15 = (undefined8 ******)((long)ppppppuVar15 + 1)) {
        uVar12 = *(undefined1 *)ppppppuVar15;
        ___tolower();
        *(undefined1 *)ppppppuVar15 = uVar12;
      }
      uStack_88 = SUB87(apppppuStack_200[1],0);
      uStack_81 = (undefined1)((ulong)apppppuStack_200[1] >> 0x38);
      uStack_90 = SUB87(apppppuStack_200[0],0);
      uStack_89 = (undefined1)((ulong)apppppuStack_200[0] >> 0x38);
      pppuStack_80 = apppppuStack_200[2];
      apppppuStack_200[1] = (undefined8 *****)0x0;
      apppppuStack_200[2] = (undefined8 *****)0x0;
      apppppuStack_200[0] = (undefined8 ******)0x0;
      FUN_107f4c680(&pppppuStack_f0,&uStack_90,auStack_160);
      FUN_107f4c154(lStack_248,&pppppuStack_f0);
      func_0x00010046a278(auStack_b8);
      puStack_f8 = &uStack_d0;
      func_0x00010007e5dc(&puStack_f8);
      unaff_x22 = puStack_120;
      if ((long)apppppuStack_200[2] < 0) {
        __ZdlPv(apppppuStack_200[0]);
        unaff_x22 = puStack_120;
      }
      for (; unaff_x23 = &pppppuStack_f0, unaff_x22 != auStack_128;
          unaff_x22 = *(undefined1 **)(unaff_x22 + 8)) {
        if ((char)unaff_x22[0x27] < '\0') {
          func_0x000100033dac(&pppppuStack_220,*(undefined8 *)(unaff_x22 + 0x10),
                              *(undefined8 *)(unaff_x22 + 0x18));
        }
        else {
          uStack_218 = (undefined7)*(undefined8 *)(unaff_x22 + 0x18);
          uStack_211 = (undefined1)((ulong)*(undefined8 *)(unaff_x22 + 0x18) >> 0x38);
          pppppuStack_220 = *(undefined8 *******)(unaff_x22 + 0x10);
          uStack_210 = (undefined7)*(undefined8 *)(unaff_x22 + 0x20);
          bStack_209 = (byte)((ulong)*(undefined8 *)(unaff_x22 + 0x20) >> 0x38);
        }
        param_2 = (undefined8 ******)(ulong)(uint)(int)(char)bStack_209;
        ppppppuVar15 = (undefined8 ******)pppppuStack_220;
        ppppppuVar16 = (undefined8 ******)((long)pppppuStack_220 + CONCAT17(uStack_211,uStack_218));
        if (-1 < (char)bStack_209) {
          ppppppuVar15 = unaff_x25;
          ppppppuVar16 = (undefined8 ******)((long)unaff_x25 + (ulong)bStack_209);
        }
        ppppppuVar19 = (undefined8 ******)pppppuStack_220;
        if (ppppppuVar15 != ppppppuVar16) {
          do {
            uVar12 = *(undefined1 *)ppppppuVar15;
            ___tolower();
            ppppppuVar19 = (undefined8 ******)((long)ppppppuVar15 + 1);
            *(undefined1 *)ppppppuVar15 = uVar12;
            ppppppuVar15 = ppppppuVar19;
          } while (ppppppuVar19 != ppppppuVar16);
          param_2 = (undefined8 ******)(ulong)bStack_209;
          ppppppuVar19 = (undefined8 ******)pppppuStack_220;
        }
        uStack_90 = uStack_218;
        uStack_89 = uStack_211;
        uStack_88 = uStack_210;
        uStack_218 = 0;
        uStack_211 = 0;
        uStack_210 = 0;
        bStack_209 = 0;
        pppppuStack_220 = (undefined8 ******)0x0;
        if (*(char *)((long)appppuStack_158[0] + 0x17) < '\0') {
          func_0x000100033dac(&pppppuStack_240,*appppuStack_158[0],appppuStack_158[0][1]);
        }
        else {
          uStack_230 = SUB87(appppuStack_158[0][2],0);
          bStack_229 = (byte)((ulong)appppuStack_158[0][2] >> 0x38);
          uStack_238 = SUB87(appppuStack_158[0][1],0);
          uStack_231 = (undefined1)((ulong)appppuStack_158[0][1] >> 0x38);
          pppppuStack_240 = (undefined8 *****)*appppuStack_158[0];
        }
        ppppppuVar15 = (undefined8 ******)pppppuStack_240;
        ppppppuVar16 = (undefined8 ******)pppppuStack_240;
        uVar5 = uStack_238;
        uVar12 = uStack_231;
        uVar6 = uStack_230;
        bVar7 = bStack_229;
        uVar8 = uStack_90;
        uVar9 = uStack_89;
        uVar10 = uStack_88;
        unaff_x24 = (undefined8 ******)((long)pppppuStack_240 + CONCAT17(uStack_231,uStack_238));
        if (-1 < (char)bStack_229) {
          ppppppuVar15 = unaff_x21;
          unaff_x24 = (undefined8 ******)((long)unaff_x21 + (ulong)bStack_229);
        }
        for (; ppppppuVar15 != unaff_x24; ppppppuVar15 = (undefined8 ******)((long)ppppppuVar15 + 1)
            ) {
          uVar13 = *(undefined1 *)ppppppuVar15;
          pppppuStack_240 = ppppppuVar16;
          uStack_238 = uVar5;
          uStack_231 = uVar12;
          uStack_230 = uVar6;
          bStack_229 = bVar7;
          uStack_90 = uVar8;
          uStack_89 = uVar9;
          uStack_88 = uVar10;
          ___tolower();
          *(undefined1 *)ppppppuVar15 = uVar13;
          ppppppuVar16 = (undefined8 ******)pppppuStack_240;
          uVar5 = uStack_238;
          uVar12 = uStack_231;
          uVar6 = uStack_230;
          bVar7 = bStack_229;
          uVar8 = uStack_90;
          uVar9 = uStack_89;
          uVar10 = uStack_88;
        }
        uStack_238 = 0;
        uStack_231 = 0;
        uStack_230 = 0;
        bStack_229 = 0;
        pppppuStack_240 = (undefined8 ******)0x0;
        uStack_d9 = SUB81(param_2,0);
        uStack_90 = 0;
        uStack_89 = 0;
        uStack_88 = 0;
        pppppuStack_f0 = ppppppuVar19;
        uStack_e8 = uVar8;
        uStack_e1 = uVar9;
        uStack_e0 = uVar10;
        pppppuStack_d8 = ppppppuVar16;
        uStack_d0 = uVar5;
        uStack_c9 = uVar12;
        uStack_c8 = uVar6;
        bStack_c1 = bVar7;
        func_0x0001002a9c20(lStack_248 + 0xa0,&pppppuStack_f0,&pppppuStack_f0);
        if ((char)bStack_229 < '\0') {
          __ZdlPv(pppppuStack_240);
        }
        if ((char)bStack_209 < '\0') {
          __ZdlPv(pppppuStack_220);
        }
      }
      func_0x00010046a278(auStack_140);
      pppppuStack_f0 = pppppuStack_270;
      func_0x00010007e5dc(&pppppuStack_f0);
      func_0x00010046a278(auStack_128);
      ppppuVar23 = ppppuVar23 + 3;
    } while (ppppuVar23 != (undefined8 ****)pppuStack_268);
  }
  pppppuStack_f0 = (undefined8 *****)&pppuStack_110;
  ppppppuVar15 = &pppppuStack_f0;
  func_0x000100151ae0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  ppppppuVar16 = ppppppuVar15;
  __Unwind_Resume();
  pppuStack_2c0 = ppppuVar23;
  pppppuStack_2b8 = unaff_x25;
  pppppuStack_2b0 = unaff_x24;
  pppppuStack_2a8 = unaff_x23;
  puStack_2a0 = unaff_x22;
  pppppuStack_298 = unaff_x21;
  pppppuStack_290 = ppppppuVar15;
  pppppuStack_288 = param_2;
  puStack_280 = &stack0xfffffffffffffff0;
  pcStack_278 = FUN_107f4bf6c;
  if (*(char *)((long)ppppppuVar16 + 0x17) < '\0') {
    func_0x000100033dac(apppppcStack_300,*ppppppuVar16,ppppppuVar16[1]);
  }
  else {
    apppppcStack_300[1] = (char *****)ppppppuVar16[1];
    apppppcStack_300[0] = (char *****)*ppppppuVar16;
    lStack_2f0 = (long)ppppppuVar16[2];
  }
  puVar11 = PTR___DefaultRuneLocale_11034bcf8;
  ppppppcVar21 = (char ******)((long)apppppcStack_300[0] + (long)apppppcStack_300[1]);
  ppppppcVar2 = (char ******)apppppcStack_300[0];
  if (-1 < lStack_2f0) {
    ppppppcVar21 = (char ******)((long)apppppcStack_300 + ((ulong)lStack_2f0 >> 0x38));
    ppppppcVar2 = apppppcStack_300;
  }
  do {
    ppppppcVar20 = ppppppcVar2;
    if (ppppppcVar21 == ppppppcVar2) break;
    cVar3 = *(char *)((long)ppppppcVar21 + -1);
    lVar18 = (long)cVar3;
    if (cVar3 < 0) {
      ___maskrune(lVar18,0x4000);
      uVar14 = (uint)lVar18;
    }
    else {
      uVar14 = *(uint *)(puVar11 + (ulong)(uint)(int)cVar3 * 4 + 0x3c) & 0x4000;
    }
    ppppppcVar20 = ppppppcVar21;
    ppppppcVar21 = (char ******)((long)ppppppcVar21 + -1);
  } while (uVar14 != 0);
  ppppppcVar2 = (char ******)apppppcStack_300[0];
  pcVar4 = (char *)((long)apppppcStack_300[0] + (long)apppppcStack_300[1]);
  if (-1 < lStack_2f0) {
    ppppppcVar2 = apppppcStack_300;
    pcVar4 = (char *)((long)apppppcStack_300 + ((ulong)lStack_2f0 >> 0x38));
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
            (apppppcStack_300,(long)ppppppcVar20 - (long)ppppppcVar2,
             (long)pcVar4 - (long)ppppppcVar20);
  lVar18 = lStack_2f0;
  pppppcVar22 = apppppcStack_300[1];
  ppppppcVar2 = (char ******)apppppcStack_300[0];
  ppppuStack_2d0 = (undefined8 ****)lStack_2f0;
  ppppuStack_2d8 = apppppcStack_300[1];
  pppppcStack_2e0 = apppppcStack_300[0];
  apppppcStack_300[1] = (char *****)0x0;
  lStack_2f0 = 0;
  apppppcStack_300[0] = (char *****)0x0;
  if (-1 < lVar18) {
    pppppcVar22 = (char *****)((ulong)lVar18 >> 0x38);
    ppppppcVar2 = &pppppcStack_2e0;
  }
  ppppppcVar21 = ppppppcVar2;
  if (pppppcVar22 != (char *****)0x0) {
    ppppppcVar1 = (char ******)((long)ppppppcVar2 + (long)pppppcVar22);
    ppppppcVar20 = ppppppcVar2;
    do {
      cVar3 = *(char *)ppppppcVar20;
      lVar18 = (long)cVar3;
      if (cVar3 < 0) {
        ___maskrune(lVar18,0x4000);
        uVar14 = (uint)lVar18;
      }
      else {
        uVar14 = *(uint *)(puVar11 + (ulong)(uint)(int)cVar3 * 4 + 0x3c) & 0x4000;
      }
      ppppppcVar21 = ppppppcVar20;
      if (uVar14 == 0) break;
      ppppppcVar20 = (char ******)((long)ppppppcVar20 + 1);
      pppppcVar22 = (char *****)((long)pppppcVar22 + -1);
      ppppppcVar21 = ppppppcVar1;
    } while (pppppcVar22 != (char *****)0x0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
            (&pppppcStack_2e0,0,(long)ppppppcVar21 - (long)ppppppcVar2);
  extraout_x8[1] = ppppuStack_2d8;
  *extraout_x8 = pppppcStack_2e0;
  extraout_x8[2] = ppppuStack_2d0;
  ppppuStack_2d8 = (undefined8 ****)0x0;
  ppppuStack_2d0 = (undefined8 ****)0x0;
  pppppcStack_2e0 = (char *****)0x0;
  if (lStack_2f0 < 0) {
    __ZdlPv(apppppcStack_300[0]);
  }
  return;
}



/* Entry: 107f4bf6c; end: 107f4c153;  */

void FUN_107f4bf6c(undefined8 *param_1,undefined8 *param_2)

{
  char ****ppppcVar1;
  char ****ppppcVar2;
  char cVar3;
  char *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  char ****ppppcVar9;
  char ****ppppcVar10;
  ulong uVar11;
  char ***pppcStack_90;
  ulong uStack_88;
  ulong uStack_80;
  char ***pppcStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000100033dac(&pppcStack_90,*param_2,param_2[1]);
  }
  else {
    uStack_88 = param_2[1];
    pppcStack_90 = (char ***)*param_2;
    uStack_80 = param_2[2];
  }
  puVar5 = PTR___DefaultRuneLocale_11034bcf8;
  ppppcVar10 = (char ****)((long)pppcStack_90 + uStack_88);
  ppppcVar2 = (char ****)pppcStack_90;
  if (-1 < (long)uStack_80) {
    ppppcVar10 = (char ****)((long)&pppcStack_90 + (uStack_80 >> 0x38));
    ppppcVar2 = &pppcStack_90;
  }
  do {
    ppppcVar9 = ppppcVar2;
    if (ppppcVar10 == ppppcVar2) break;
    cVar3 = *(char *)((long)ppppcVar10 + -1);
    lVar8 = (long)cVar3;
    if (cVar3 < 0) {
      ___maskrune(lVar8,0x4000);
      uVar7 = (uint)lVar8;
    }
    else {
      uVar7 = *(uint *)(puVar5 + (ulong)(uint)(int)cVar3 * 4 + 0x3c) & 0x4000;
    }
    ppppcVar9 = ppppcVar10;
    ppppcVar10 = (char ****)((long)ppppcVar10 + -1);
  } while (uVar7 != 0);
  ppppcVar2 = (char ****)pppcStack_90;
  pcVar4 = (char *)((long)pppcStack_90 + uStack_88);
  if (-1 < (long)uStack_80) {
    ppppcVar2 = &pppcStack_90;
    pcVar4 = (char *)((long)&pppcStack_90 + (uStack_80 >> 0x38));
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
            (&pppcStack_90,(long)ppppcVar9 - (long)ppppcVar2,(long)pcVar4 - (long)ppppcVar9);
  uVar6 = uStack_80;
  uVar11 = uStack_88;
  ppppcVar2 = (char ****)pppcStack_90;
  uStack_60 = uStack_80;
  uStack_68 = uStack_88;
  pppcStack_70 = pppcStack_90;
  uStack_88 = 0;
  uStack_80 = 0;
  pppcStack_90 = (char ***)0x0;
  if (-1 < (long)uVar6) {
    uVar11 = uVar6 >> 0x38;
    ppppcVar2 = &pppcStack_70;
  }
  ppppcVar10 = ppppcVar2;
  if (uVar11 != 0) {
    ppppcVar1 = (char ****)((long)ppppcVar2 + uVar11);
    ppppcVar9 = ppppcVar2;
    do {
      cVar3 = *(char *)ppppcVar9;
      lVar8 = (long)cVar3;
      if (cVar3 < 0) {
        ___maskrune(lVar8,0x4000);
        uVar7 = (uint)lVar8;
      }
      else {
        uVar7 = *(uint *)(puVar5 + (ulong)(uint)(int)cVar3 * 4 + 0x3c) & 0x4000;
      }
      ppppcVar10 = ppppcVar9;
      if (uVar7 == 0) break;
      ppppcVar9 = (char ****)((long)ppppcVar9 + 1);
      uVar11 = uVar11 - 1;
      ppppcVar10 = ppppcVar1;
    } while (uVar11 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
            (&pppcStack_70,0,(long)ppppcVar10 - (long)ppppcVar2);
  param_1[1] = uStack_68;
  *param_1 = pppcStack_70;
  param_1[2] = uStack_60;
  uStack_68 = 0;
  uStack_60 = 0;
  pppcStack_70 = (char ***)0x0;
  if ((long)uStack_80 < 0) {
    __ZdlPv(pppcStack_90);
  }
  return;
}



/* Entry: 107f4c154; end: 107f4c67f;  */

void FUN_107f4c154(long *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  float *pfVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  byte bVar22;
  float fVar23;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  float *pfVar7;
  
  plVar14 = param_1 + 2;
  plVar5 = (long *)0x60;
  __Znwm();
  uStack_68 = 0;
  *plVar5 = 0;
  plVar5[1] = 0;
  plStack_78 = plVar5;
  plStack_70 = plVar14;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000100033dac(plVar5 + 2,*param_2,param_2[1]);
  }
  else {
    lVar11 = *param_2;
    plVar5[3] = param_2[1];
    plVar5[2] = lVar11;
    plVar5[4] = param_2[2];
  }
  *(int *)(plVar5 + 5) = (int)param_2[3];
  lVar11 = param_2[4];
  plVar5[7] = param_2[5];
  plVar5[6] = lVar11;
  lVar11 = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  plVar13 = plVar5 + 9;
  plVar5[8] = lVar11;
  plVar5[9] = (long)plVar13;
  plVar5[10] = (long)plVar13;
  plVar5[0xb] = 0;
  lVar11 = param_2[9];
  if (lVar11 != 0) {
    lVar6 = param_2[7];
    plVar19 = (long *)param_2[8];
    plVar15 = *(long **)(lVar6 + 8);
    lVar16 = *plVar19;
    *(long **)(lVar16 + 8) = plVar15;
    *plVar15 = lVar16;
    lVar16 = plVar5[9];
    *(long **)(lVar16 + 8) = plVar19;
    *plVar19 = lVar16;
    plVar5[9] = lVar6;
    *(long **)(lVar6 + 8) = plVar13;
    plVar5[0xb] = lVar11;
    param_2[9] = 0;
  }
  uStack_68 = CONCAT71(uStack_68._1_7_,1);
  plVar13 = param_1 + 3;
  func_0x000100102e7c(plVar13,plVar5 + 2);
  plVar5[1] = (long)plVar13;
  plVar13 = param_1 + 3;
  func_0x000100102e7c(plVar13,plVar5 + 2);
  pfVar18 = (float *)(param_1 + 4);
  fVar23 = *pfVar18;
  plVar5[1] = (long)plVar13;
  plVar19 = (long *)param_1[1];
  if ((plVar19 != (long *)0x0) && ((float)(param_1[3] + 1) <= fVar23 * (float)plVar19))
  goto LAB_107f4c488;
  uVar20 = 1;
  if ((long *)0x2 < plVar19) {
    uVar20 = (ulong)(((ulong)plVar19 & (long)plVar19 - 1U) != 0);
  }
  plVar15 = (long *)(uVar20 | (long)plVar19 << 1);
  plVar12 = (long *)(long)((float)(param_1[3] + 1) / fVar23);
  if (plVar15 <= plVar12) {
    plVar15 = plVar12;
  }
  if ((long)plVar15 - 1U == 0) {
    plVar15 = (long *)0x2;
  }
  else if (((ulong)plVar15 & (long)plVar15 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar19 = (long *)param_1[1];
  }
  if (plVar19 < plVar15) {
LAB_107f4c2dc:
    if ((ulong)plVar15 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x107f4c668);
      (*pcVar2)();
    }
    lVar11 = (long)plVar15 << 3;
    __Znwm();
    lVar6 = *param_1;
    *param_1 = lVar11;
    if (lVar6 != 0) {
      __ZdlPv();
      lVar11 = *param_1;
    }
    param_1[1] = (long)plVar15;
    _bzero(lVar11,(long)plVar15 << 3);
    plVar19 = (long *)param_1[2];
    if (plVar19 != (long *)0x0) {
      plVar12 = (long *)plVar19[1];
      uVar20 = (long)plVar15 - 1;
      if (((ulong)plVar15 & uVar20) == 0) {
        plVar12 = (long *)((ulong)plVar12 & uVar20);
      }
      else if (plVar15 <= plVar12) {
        uVar1 = 0;
        if (plVar15 != (long *)0x0) {
          uVar1 = (ulong)plVar12 / (ulong)plVar15;
        }
        plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar15);
      }
      *(long **)(lVar11 + (long)plVar12 * 8) = plVar14;
      while (plVar10 = plVar19, plVar19 = (long *)*plVar10, plVar19 != (long *)0x0) {
        plVar21 = (long *)plVar19[1];
        if (((ulong)plVar15 & uVar20) == 0) {
          plVar21 = (long *)((ulong)plVar21 & uVar20);
        }
        else if (plVar15 <= plVar21) {
          uVar1 = 0;
          if (plVar15 != (long *)0x0) {
            uVar1 = (ulong)plVar21 / (ulong)plVar15;
          }
          plVar21 = (long *)((long)plVar21 - uVar1 * (long)plVar15);
        }
        if (plVar21 != plVar12) {
          if (*(long *)(lVar11 + (long)plVar21 * 8) == 0) {
            *(long **)(lVar11 + (long)plVar21 * 8) = plVar10;
            plVar12 = plVar21;
          }
          else {
            lVar6 = *plVar19;
            plVar9 = plVar19;
            if (lVar6 == 0) {
              plVar8 = (long *)0x0;
            }
            else {
              do {
                pfVar7 = pfVar18;
                func_0x000100105738(pfVar18,plVar19 + 2,lVar6 + 0x10);
                plVar8 = (long *)*plVar9;
                if ((int)pfVar7 == 0) goto LAB_107f4c434;
                lVar6 = *plVar8;
                plVar9 = plVar8;
              } while (lVar6 != 0);
              plVar8 = (long *)0x0;
LAB_107f4c434:
              lVar11 = *param_1;
            }
            *plVar10 = (long)plVar8;
            *plVar9 = **(long **)(lVar11 + (long)plVar21 * 8);
            **(undefined8 **)(lVar11 + (long)plVar21 * 8) = plVar19;
            plVar19 = plVar10;
          }
        }
      }
    }
  }
  else if (plVar15 < plVar19) {
    plVar12 = (long *)(long)((float)(ulong)param_1[3] / *pfVar18);
    if ((plVar19 < (long *)0x3) || (((ulong)plVar19 & (long)plVar19 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar12) {
      plVar12 = (long *)(1L << (-LZCOUNT((long)plVar12 + -1) & 0x3fU));
    }
    if (plVar15 <= plVar12) {
      plVar15 = plVar12;
    }
    if (plVar15 < plVar19) {
      if (plVar15 != (long *)0x0) goto LAB_107f4c2dc;
      lVar11 = *param_1;
      *param_1 = 0;
      if (lVar11 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
  }
  plVar19 = (long *)param_1[1];
LAB_107f4c488:
  bVar22 = POPCOUNT((char)plVar19) + POPCOUNT((char)((ulong)plVar19 >> 8)) +
           POPCOUNT((char)((ulong)plVar19 >> 0x10)) + POPCOUNT((char)((ulong)plVar19 >> 0x18)) +
           POPCOUNT((char)((ulong)plVar19 >> 0x20)) + POPCOUNT((char)((ulong)plVar19 >> 0x28)) +
           POPCOUNT((char)((ulong)plVar19 >> 0x30)) + POPCOUNT((char)((ulong)plVar19 >> 0x38));
  uVar20 = (long)plVar19 - 1;
  if (((ulong)plVar19 & uVar20) == 0) {
    plVar15 = (long *)(uVar20 & (ulong)plVar13);
  }
  else {
    plVar15 = plVar13;
    if (plVar19 <= plVar13) {
      uVar1 = 0;
      if (plVar19 != (long *)0x0) {
        uVar1 = (ulong)plVar13 / (ulong)plVar19;
      }
      plVar15 = (long *)((long)plVar13 - uVar1 * (long)plVar19);
    }
  }
  plVar12 = *(long **)(*param_1 + (long)plVar15 * 8);
  if ((plVar12 != (long *)0x0) && (lVar11 = *plVar12, lVar11 != 0)) {
    uVar17 = 0;
    bVar22 = 0;
    do {
      plVar10 = *(long **)(lVar11 + 8);
      if (((ulong)plVar19 & uVar20) == 0) {
        plVar21 = (long *)((ulong)plVar10 & uVar20);
      }
      else {
        plVar21 = plVar10;
        if (plVar19 <= plVar10) {
          uVar1 = 0;
          if (plVar19 != (long *)0x0) {
            uVar1 = (ulong)plVar10 / (ulong)plVar19;
          }
          plVar21 = (long *)((long)plVar10 - uVar1 * (long)plVar19);
        }
      }
      if (plVar21 != plVar15) break;
      if (plVar10 == plVar13) {
        pfVar7 = pfVar18;
        func_0x000100105738(pfVar18,lVar11 + 0x10,plVar5 + 2);
        uVar4 = (uint)pfVar7;
      }
      else {
        uVar4 = 0;
      }
      bVar3 = uVar4 != uVar17;
      if ((bool)(bVar22 & bVar3)) break;
      uVar17 = uVar17 | bVar3;
      bVar22 = bVar22 | bVar3;
      plVar12 = (long *)*plVar12;
      lVar11 = *plVar12;
    } while (lVar11 != 0);
    plVar19 = (long *)param_1[1];
    bVar22 = POPCOUNT((char)plVar19) + POPCOUNT((char)((ulong)plVar19 >> 8)) +
             POPCOUNT((char)((ulong)plVar19 >> 0x10)) + POPCOUNT((char)((ulong)plVar19 >> 0x18)) +
             POPCOUNT((char)((ulong)plVar19 >> 0x20)) + POPCOUNT((char)((ulong)plVar19 >> 0x28)) +
             POPCOUNT((char)((ulong)plVar19 >> 0x30)) + POPCOUNT((char)((ulong)plVar19 >> 0x38));
  }
  plVar13 = (long *)plVar5[1];
  if (bVar22 < 2) {
    plVar13 = (long *)((ulong)plVar13 & (long)plVar19 - 1U);
  }
  else if (plVar19 <= plVar13) {
    uVar20 = 0;
    if (plVar19 != (long *)0x0) {
      uVar20 = (ulong)plVar13 / (ulong)plVar19;
    }
    plVar13 = (long *)((long)plVar13 - uVar20 * (long)plVar19);
  }
  if (plVar12 == (long *)0x0) {
    *plVar5 = param_1[2];
    param_1[2] = (long)plVar5;
    lVar11 = *param_1;
    *(long **)(lVar11 + (long)plVar13 * 8) = plVar14;
    if (*plVar5 != 0) {
      plVar14 = *(long **)(*plVar5 + 8);
      if (bVar22 < 2) {
        plVar14 = (long *)((ulong)plVar14 & (long)plVar19 - 1U);
      }
      else if (plVar19 <= plVar14) {
        uVar20 = 0;
        if (plVar19 != (long *)0x0) {
          uVar20 = (ulong)plVar14 / (ulong)plVar19;
        }
        plVar14 = (long *)((long)plVar14 - uVar20 * (long)plVar19);
      }
      *(long **)(lVar11 + (long)plVar14 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar12;
    *plVar12 = (long)plVar5;
    if (*plVar5 != 0) {
      plVar14 = *(long **)(*plVar5 + 8);
      if (bVar22 < 2) {
        plVar14 = (long *)((ulong)plVar14 & (long)plVar19 - 1U);
      }
      else if (plVar19 <= plVar14) {
        uVar20 = 0;
        if (plVar19 != (long *)0x0) {
          uVar20 = (ulong)plVar14 / (ulong)plVar19;
        }
        plVar14 = (long *)((long)plVar14 - uVar20 * (long)plVar19);
      }
      if (plVar14 != plVar13) {
        *(long **)(*param_1 + (long)plVar14 * 8) = plVar5;
      }
    }
  }
  param_1[3] = param_1[3] + 1;
  plStack_78 = (long *)0x0;
  func_0x000107f4c7cc(&plStack_78);
  return;
}



/* Entry: 107f4c680; end: 107f4c73b;  */

undefined8 * FUN_107f4c680(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = *param_3;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 3) = uVar1;
  param_1[5] = 0;
  param_1[6] = 0;
  func_0x00010015bcc4(param_1 + 4,*(long *)(param_3 + 2),*(long *)(param_3 + 4),
                      (*(long *)(param_3 + 4) - *(long *)(param_3 + 2) >> 3) * -0x5555555555555555);
  func_0x000100469d44(param_1 + 7,param_3 + 8);
  return param_1;
}



/* Entry: 107f4c73c; end: 107f4c85f;  */

undefined8 * FUN_107f4c73c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  func_0x00010046a278(param_1 + 7);
  puStack_28 = param_1 + 4;
  func_0x00010007e5dc(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 107f4c860; end: 107f4caa7;  */

void FUN_107f4c860(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined ***pppuVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  ulong uStack_190;
  undefined7 uStack_188;
  byte bStack_181;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined **appuStack_168 [2];
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined1 auStack_148 [56];
  undefined8 uStack_110;
  char cStack_f9;
  undefined **appuStack_e8 [19];
  
  *param_1 = (long)param_1;
  param_1[1] = (long)param_1;
  param_1[2] = 0;
  func_0x0001078d8678(appuStack_168,param_2,0x18);
  uStack_180 = 0;
  uStack_178 = 0;
  lStack_170 = 0;
  while( true ) {
    pppuVar3 = appuStack_168;
    func_0x000105c43344(pppuVar3,&uStack_180,param_3);
    if ((*(byte *)((long)pppuVar3 + (long)((*pppuVar3)[-3] + 0x20)) & 5) != 0) break;
    if (lStack_170 < 0) {
      func_0x000100033dac(&uStack_1b0,uStack_180,uStack_178);
    }
    else {
      uStack_1a8 = uStack_178;
      uStack_1b0 = uStack_180;
      lStack_1a0 = lStack_170;
    }
    FUN_107f4bf6c(&lStack_198,&uStack_1b0);
    if (lStack_1a0 < 0) {
      __ZdlPv(uStack_1b0);
    }
    uVar2 = uStack_190;
    uVar6 = (uint)(char)bStack_181;
    uVar1 = uStack_190;
    if (-1 < (int)uVar6) {
      uVar1 = (ulong)bStack_181;
    }
    if (uVar1 != 0) {
      plVar4 = (long *)0x28;
      __Znwm();
      *plVar4 = 0;
      plVar4[1] = 0;
      if ((int)uVar6 < 0) {
        func_0x000100033dac(plVar4 + 2,lStack_198,uVar2);
      }
      else {
        plVar4[3] = uStack_190;
        plVar4[2] = lStack_198;
        plVar4[4] = CONCAT17(bStack_181,uStack_188);
      }
      lVar5 = *param_1;
      *plVar4 = lVar5;
      plVar4[1] = (long)param_1;
      *(long **)(lVar5 + 8) = plVar4;
      *param_1 = (long)plVar4;
      param_1[2] = param_1[2] + 1;
      uVar6 = (uint)bStack_181;
    }
    if ((uVar6 >> 7 & 1) != 0) {
      __ZdlPv(lStack_198);
    }
  }
  if (lStack_170 < 0) {
    __ZdlPv(uStack_180);
  }
  appuStack_168[0] = &PTR_DAT_1108a5a38;
  ppuStack_158 = &PTR_DAT_1108a5a60;
  appuStack_e8[0] = &PTR_DAT_1108a5a88;
  ppuStack_150 = &PTR_DAT_11088d7b0;
  if (cStack_f9 < '\0') {
    __ZdlPv(uStack_110);
  }
  ppuStack_150 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_148);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_168,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_e8);
  return;
}



/* Entry: 107f4caa8; end: 107f4cb2f;  */

undefined4 * FUN_107f4caa8(undefined4 *param_1,undefined4 param_2,long *param_3,undefined8 param_4)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  func_0x00010015bcc4(param_1 + 2,*param_3,param_3[1],
                      (param_3[1] - *param_3 >> 3) * -0x5555555555555555);
  func_0x000100469d44(param_1 + 8,param_4);
  return param_1;
}



/* Entry: 107f4cb30; end: 107f4cd47;  */

void FUN_107f4cb30(long *param_1,undefined8 param_2,ulong param_3,long *param_4,long *param_5)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined1 *unaff_x21;
  char *pcVar5;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113728530 & 1) == 0) {
    iVar1 = 0x13728530;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010002b838(auStack_108,&DAT_10f43ffe9);
      func_0x00010002b838(auStack_f0,"from");
      func_0x00010002b838(auStack_d8,&DAT_10f3ed971);
      func_0x00010002b838(auStack_c0,&UNK_10f46652a);
      func_0x00010002b838(auStack_a8,&UNK_10f46652f);
      func_0x00010002b838(auStack_90,&DAT_10f414fa3);
      func_0x00010002b838(auStack_78,&UNK_10f466533);
      func_0x00010002b838(auStack_60,&UNK_10f46653a);
      unaff_x21 = auStack_108;
      func_0x0001074e1df0(0x113728538,auStack_108,8);
      lVar4 = 0;
      do {
        if ((&cStack_49)[lVar4] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
        }
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != -0xc0);
      param_3 = 0x100000000;
      ___cxa_atexit(0x107f4cdbc,0x113728538);
      ___cxa_guard_release(0x113728530);
    }
  }
  lVar4 = 0x113728538;
  func_0x00010596ff94();
  uVar2 = (ulong)(lVar4 != 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = -0xc0;
  pcVar5 = unaff_x21 + 0xbf;
  do {
    if (*pcVar5 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar5 + -0x17));
    }
    lVar4 = lVar4 + 0x18;
    pcVar5 = pcVar5 + -0x18;
  } while (lVar4 != 0);
  ___cxa_guard_abort(0x113728530);
  __Unwind_Resume();
  if (param_4 != param_5) {
    param_5 = (long *)*param_5;
    if (uVar2 != param_3) {
      lVar4 = 1;
      for (plVar3 = param_4; plVar3 != param_5; plVar3 = (long *)plVar3[1]) {
        lVar4 = lVar4 + 1;
      }
      *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) - lVar4;
      *(long *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + lVar4;
    }
    plVar3 = (long *)param_5[1];
    lVar4 = *param_4;
    *(long **)(lVar4 + 8) = plVar3;
    *plVar3 = lVar4;
    lVar4 = *param_1;
    *(long **)(lVar4 + 8) = param_4;
    *param_4 = lVar4;
    *param_1 = (long)param_5;
    param_5[1] = (long)param_1;
  }
  return;
}



/* Entry: 107f4cd48; end: 107f4cdbf;  */

void FUN_107f4cd48(long param_1,long *param_2,long param_3,long *param_4,long *param_5)

{
  long lVar1;
  long *plVar2;
  
  if (param_4 != param_5) {
    param_5 = (long *)*param_5;
    if (param_1 != param_3) {
      lVar1 = 1;
      for (plVar2 = param_4; plVar2 != param_5; plVar2 = (long *)plVar2[1]) {
        lVar1 = lVar1 + 1;
      }
      *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) - lVar1;
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar1;
    }
    plVar2 = (long *)param_5[1];
    lVar1 = *param_4;
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    lVar1 = *param_2;
    *(long **)(lVar1 + 8) = param_4;
    *param_4 = lVar1;
    *param_2 = (long)param_5;
    param_5[1] = (long)param_2;
  }
  return;
}



/* Entry: 107f4cdc0; end: 107f4cf03;  */

void FUN_107f4cdc0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 **ppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  lVar3 = *(long *)(param_2 + 8);
  if (lVar3 != param_2) {
    do {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&ppuStack_70," ",lVar3 + 0x10);
      uVar1 = uStack_68;
      pppuVar2 = (undefined8 ***)ppuStack_70;
      if (-1 < (char)bStack_59) {
        uVar1 = (ulong)bStack_59;
        pppuVar2 = &ppuStack_70;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&uStack_58,pppuVar2,uVar1);
      if ((char)bStack_59 < '\0') {
        __ZdlPv(ppuStack_70);
      }
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar3 != param_2);
    if (lStack_48 < 0) {
      func_0x000100033dac(&uStack_90,uStack_58,uStack_50);
      goto LAB_107f4ce74;
    }
  }
  uStack_88 = uStack_50;
  uStack_90 = uStack_58;
  lStack_80 = lStack_48;
LAB_107f4ce74:
  FUN_107f4bf6c(param_1,&uStack_90);
  if (lStack_80 < 0) {
    __ZdlPv(uStack_90);
  }
  if (lStack_48 < 0) {
    __ZdlPv(uStack_58);
  }
  return;
}



/* Entry: 107f4cf04; end: 107f4d3df;  */

/* WARNING: Type propagation algorithm not settling */

ulong ******* FUN_107f4cf04(ulong *******param_1,ulong *******param_2,ulong *******param_3)

{
  ulong *******pppppppuVar1;
  int iVar2;
  char cVar3;
  ulong *****pppppuVar4;
  bool bVar5;
  ulong *******pppppppuVar6;
  ulong *******pppppppuVar7;
  ulong ******ppppppuVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong *******pppppppuVar11;
  byte bVar12;
  ulong *******pppppppuVar13;
  ulong *******apppppppuStack_f0 [2];
  ulong *****pppppuStack_e0;
  ulong *******apppppppuStack_d0 [2];
  ulong *****pppppuStack_c0;
  ulong *******apppppppuStack_b0 [2];
  ulong *****pppppuStack_a0;
  ulong *******pppppppuStack_90;
  ulong ******ppppppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined7 uStack_68;
  undefined1 uStack_61;
  ulong *****pppppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar11 = param_3;
  FUN_107f4d52c();
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    param_2 = (ulong *******)*param_3;
    pppppppuVar11 = (ulong *******)param_3[1];
    pppppppuVar6 = (ulong *******)&pppppppuStack_90;
    func_0x000100033dac();
  }
  else {
    ppppppuStack_88 = param_3[1];
    pppppppuStack_90 = (ulong *******)*param_3;
    uStack_80 = param_3[2];
    pppppppuVar6 = param_1;
  }
  pppppppuVar7 = pppppppuStack_90;
  pppppppuVar1 = (ulong *******)((long)pppppppuStack_90 + (long)ppppppuStack_88);
  if (-1 < (long)uStack_80) {
    pppppppuVar7 = (ulong *******)&pppppppuStack_90;
    pppppppuVar1 = (ulong *******)((long)&pppppppuStack_90 + (ulong)uStack_80._7_1_);
  }
  pppppppuVar13 = pppppppuStack_90;
  bVar12 = uStack_80._7_1_;
  if (pppppppuVar7 != pppppppuVar1) {
    do {
      pppppppuVar6 = (ulong *******)(long)*(char *)pppppppuVar7;
      ___tolower();
      pppppppuVar13 = (ulong *******)((long)pppppppuVar7 + 1);
      *(char *)pppppppuVar7 = (char)pppppppuVar6;
      pppppppuVar7 = pppppppuVar13;
    } while (pppppppuVar13 != pppppppuVar1);
    bVar12 = (byte)((ulong)uStack_80 >> 0x38);
    pppppppuVar13 = pppppppuStack_90;
  }
  puVar9 = (undefined8 *)((ulong)&pppppppuStack_90 | 8);
  uStack_70._0_7_ = (undefined7)*puVar9;
  uVar10 = *(undefined8 *)((long)puVar9 + 7);
  uStack_70._7_1_ = (undefined1)uVar10;
  uStack_68 = (undefined7)((ulong)uVar10 >> 8);
  ppppppuStack_88 = (ulong ******)0x0;
  uStack_80 = (ulong ******)0x0;
  pppppppuStack_90 = (ulong *******)0x0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    pppppppuVar6 = (ulong *******)*param_3;
    __ZdlPv();
    *param_3 = (ulong ******)pppppppuVar13;
    param_3[1] = (ulong ******)CONCAT17(uStack_70._7_1_,(undefined7)uStack_70);
    *(ulong *)((long)param_3 + 0xf) = CONCAT71(uStack_68,uStack_70._7_1_);
    *(byte *)((long)param_3 + 0x17) = bVar12;
    if ((long)uStack_80 < 0) {
      pppppppuVar6 = pppppppuStack_90;
      __ZdlPv();
    }
  }
  else {
    *param_3 = (ulong ******)pppppppuVar13;
    param_3[1] = (ulong ******)CONCAT17(uStack_70._7_1_,(undefined7)uStack_70);
    *(undefined8 *)((long)param_3 + 0xf) = uVar10;
    *(byte *)((long)param_3 + 0x17) = bVar12;
  }
  if (param_1 != (ulong *******)0x0) {
    do {
      iVar2 = *(int *)(param_1 + 5);
      if (iVar2 == 2) {
        ppppppuVar8 = param_1[6];
        if (*(char *)((long)ppppppuVar8 + 0x5f) < '\0') {
          param_2 = (ulong *******)ppppppuVar8[9];
          pppppppuVar6 = (ulong *******)apppppppuStack_f0;
          func_0x000100033dac(apppppppuStack_f0,param_2,ppppppuVar8[10]);
        }
        else {
          apppppppuStack_f0[1] = (ulong *******)ppppppuVar8[10];
          apppppppuStack_f0[0] = (ulong *******)ppppppuVar8[9];
          pppppuStack_e0 = ppppppuVar8[0xb];
        }
        pppppppuVar7 = apppppppuStack_f0[0];
        pppppppuVar11 = (ulong *******)((long)apppppppuStack_f0[0] + (long)apppppppuStack_f0[1]);
        if (-1 < (long)pppppuStack_e0) {
          pppppppuVar7 = (ulong *******)apppppppuStack_f0;
          pppppppuVar11 = (ulong *******)((long)apppppppuStack_f0 + ((ulong)pppppuStack_e0 >> 0x38))
          ;
        }
        for (; pppppuVar4 = pppppuStack_e0, pppppppuVar1 = apppppppuStack_f0[1],
            pppppppuVar13 = apppppppuStack_f0[0], pppppppuVar7 != pppppppuVar11;
            pppppppuVar7 = (ulong *******)((long)pppppppuVar7 + 1)) {
          pppppppuVar6 = (ulong *******)(long)*(char *)pppppppuVar7;
          ___tolower();
          *(char *)pppppppuVar7 = (char)pppppppuVar6;
        }
        pppppuStack_60 = pppppuStack_e0;
        uStack_68 = SUB87(apppppppuStack_f0[1],0);
        uStack_61 = (undefined1)((ulong)apppppppuStack_f0[1] >> 0x38);
        uStack_70._0_7_ = SUB87(apppppppuStack_f0[0],0);
        uStack_70._7_1_ = (undefined1)((ulong)apppppppuStack_f0[0] >> 0x38);
        apppppppuStack_f0[1] = (ulong *******)0x0;
        pppppuStack_e0 = (ulong *****)0x0;
        apppppppuStack_f0[0] = (ulong *******)0x0;
        bVar12 = *(byte *)((long)param_3 + 0x17);
        pppppppuVar11 = (ulong *******)param_3[1];
        if (-1 < (char)bVar12) {
          pppppppuVar11 = (ulong *******)(ulong)bVar12;
        }
        if (-1 < (long)pppppuVar4) {
          pppppppuVar1 = (ulong *******)((ulong)pppppuVar4 >> 0x38);
        }
        if (pppppppuVar11 == pppppppuVar1) {
          pppppppuVar6 = (ulong *******)*param_3;
          if (-1 < (char)bVar12) {
            pppppppuVar6 = param_3;
          }
          param_2 = pppppppuVar13;
          if (-1 < (long)pppppuVar4) {
            param_2 = (ulong *******)&uStack_70;
          }
          _memcmp();
          bVar5 = (int)pppppppuVar6 == 0;
        }
        else {
          bVar5 = false;
        }
        if ((long)pppppuVar4 < 0) {
          pppppppuVar6 = (ulong *******)CONCAT17(uStack_70._7_1_,(undefined7)uStack_70);
          __ZdlPv();
          pppppppuVar7 = apppppppuStack_f0[0];
          pppppuVar4 = pppppuStack_e0;
joined_r0x000107f4d244:
          if ((long)pppppuVar4 < 0) {
            __ZdlPv();
            pppppppuVar6 = pppppppuVar7;
          }
        }
LAB_107f4d328:
        if (bVar5) break;
      }
      else {
        if (iVar2 == 1) {
          ppppppuVar8 = param_1[6];
          if (*(char *)((long)ppppppuVar8 + 0x47) < '\0') {
            param_2 = (ulong *******)ppppppuVar8[6];
            pppppppuVar6 = (ulong *******)apppppppuStack_d0;
            func_0x000100033dac(pppppppuVar6,param_2,ppppppuVar8[7]);
          }
          else {
            apppppppuStack_d0[1] = (ulong *******)ppppppuVar8[7];
            apppppppuStack_d0[0] = (ulong *******)ppppppuVar8[6];
            pppppuStack_c0 = ppppppuVar8[8];
          }
          pppppppuVar7 = apppppppuStack_d0[0];
          pppppppuVar11 = (ulong *******)((long)apppppppuStack_d0[0] + (long)apppppppuStack_d0[1]);
          if (-1 < (long)pppppuStack_c0) {
            pppppppuVar7 = (ulong *******)apppppppuStack_d0;
            pppppppuVar11 =
                 (ulong *******)((long)apppppppuStack_d0 + ((ulong)pppppuStack_c0 >> 0x38));
          }
          for (; pppppuVar4 = pppppuStack_c0, pppppppuVar1 = apppppppuStack_d0[1],
              pppppppuVar13 = apppppppuStack_d0[0], pppppppuVar7 != pppppppuVar11;
              pppppppuVar7 = (ulong *******)((long)pppppppuVar7 + 1)) {
            pppppppuVar6 = (ulong *******)(long)*(char *)pppppppuVar7;
            ___tolower();
            *(char *)pppppppuVar7 = (char)pppppppuVar6;
          }
          pppppuStack_60 = pppppuStack_c0;
          uStack_68 = SUB87(apppppppuStack_d0[1],0);
          uStack_61 = (undefined1)((ulong)apppppppuStack_d0[1] >> 0x38);
          uStack_70._0_7_ = SUB87(apppppppuStack_d0[0],0);
          uStack_70._7_1_ = (undefined1)((ulong)apppppppuStack_d0[0] >> 0x38);
          apppppppuStack_d0[1] = (ulong *******)0x0;
          pppppuStack_c0 = (ulong *****)0x0;
          apppppppuStack_d0[0] = (ulong *******)0x0;
          bVar12 = *(byte *)((long)param_3 + 0x17);
          pppppppuVar11 = (ulong *******)param_3[1];
          if (-1 < (char)bVar12) {
            pppppppuVar11 = (ulong *******)(ulong)bVar12;
          }
          if (-1 < (long)pppppuVar4) {
            pppppppuVar1 = (ulong *******)((ulong)pppppuVar4 >> 0x38);
          }
          if (pppppppuVar11 == pppppppuVar1) {
            pppppppuVar6 = (ulong *******)*param_3;
            if (-1 < (char)bVar12) {
              pppppppuVar6 = param_3;
            }
            param_2 = pppppppuVar13;
            if (-1 < (long)pppppuVar4) {
              param_2 = (ulong *******)&uStack_70;
            }
            _memcmp();
            bVar5 = (int)pppppppuVar6 == 0;
          }
          else {
            bVar5 = false;
          }
          if ((long)pppppuVar4 < 0) {
            pppppppuVar6 = (ulong *******)CONCAT17(uStack_70._7_1_,(undefined7)uStack_70);
            __ZdlPv();
            pppppppuVar7 = apppppppuStack_d0[0];
            pppppuVar4 = pppppuStack_c0;
            goto joined_r0x000107f4d244;
          }
          goto LAB_107f4d328;
        }
        if (iVar2 == 0) {
          ppppppuVar8 = param_1[6];
          if (*(char *)((long)ppppppuVar8 + 0x47) < '\0') {
            param_2 = (ulong *******)ppppppuVar8[6];
            pppppppuVar6 = (ulong *******)apppppppuStack_b0;
            func_0x000100033dac(pppppppuVar6,param_2,ppppppuVar8[7]);
          }
          else {
            apppppppuStack_b0[1] = (ulong *******)ppppppuVar8[7];
            apppppppuStack_b0[0] = (ulong *******)ppppppuVar8[6];
            pppppuStack_a0 = ppppppuVar8[8];
          }
          pppppppuVar7 = apppppppuStack_b0[0];
          pppppppuVar11 = (ulong *******)((long)apppppppuStack_b0[0] + (long)apppppppuStack_b0[1]);
          if (-1 < (long)pppppuStack_a0) {
            pppppppuVar7 = (ulong *******)apppppppuStack_b0;
            pppppppuVar11 =
                 (ulong *******)((long)apppppppuStack_b0 + ((ulong)pppppuStack_a0 >> 0x38));
          }
          for (; pppppuVar4 = pppppuStack_a0, pppppppuVar1 = apppppppuStack_b0[1],
              pppppppuVar13 = apppppppuStack_b0[0], pppppppuVar7 != pppppppuVar11;
              pppppppuVar7 = (ulong *******)((long)pppppppuVar7 + 1)) {
            pppppppuVar6 = (ulong *******)(long)*(char *)pppppppuVar7;
            ___tolower();
            *(char *)pppppppuVar7 = (char)pppppppuVar6;
          }
          pppppuStack_60 = pppppuStack_a0;
          uStack_68 = SUB87(apppppppuStack_b0[1],0);
          uStack_61 = (undefined1)((ulong)apppppppuStack_b0[1] >> 0x38);
          uStack_70._0_7_ = SUB87(apppppppuStack_b0[0],0);
          uStack_70._7_1_ = (undefined1)((ulong)apppppppuStack_b0[0] >> 0x38);
          apppppppuStack_b0[1] = (ulong *******)0x0;
          pppppuStack_a0 = (ulong *****)0x0;
          apppppppuStack_b0[0] = (ulong *******)0x0;
          bVar12 = *(byte *)((long)param_3 + 0x17);
          pppppppuVar11 = (ulong *******)param_3[1];
          if (-1 < (char)bVar12) {
            pppppppuVar11 = (ulong *******)(ulong)bVar12;
          }
          if (-1 < (long)pppppuVar4) {
            pppppppuVar1 = (ulong *******)((ulong)pppppuVar4 >> 0x38);
          }
          if (pppppppuVar11 == pppppppuVar1) {
            pppppppuVar6 = (ulong *******)*param_3;
            if (-1 < (char)bVar12) {
              pppppppuVar6 = param_3;
            }
            param_2 = pppppppuVar13;
            if (-1 < (long)pppppuVar4) {
              param_2 = (ulong *******)&uStack_70;
            }
            _memcmp();
            bVar5 = (int)pppppppuVar6 == 0;
          }
          else {
            bVar5 = false;
          }
          if ((long)pppppuVar4 < 0) {
            pppppppuVar6 = (ulong *******)CONCAT17(uStack_70._7_1_,(undefined7)uStack_70);
            __ZdlPv();
            pppppppuVar7 = apppppppuStack_b0[0];
            pppppuVar4 = pppppuStack_a0;
            goto joined_r0x000107f4d244;
          }
          goto LAB_107f4d328;
        }
      }
      param_1 = (ulong *******)*param_1;
    } while (param_1 != (ulong *******)0x0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  __Unwind_Resume(pppppppuVar6);
  iVar2 = *(int *)param_2;
  if (iVar2 == 2) {
    ppppppuVar8 = param_2[1];
    if (*(char *)((long)ppppppuVar8 + 0x17) < '\0') {
      ppppppuVar8 = (ulong ******)*ppppppuVar8;
    }
    _strncpy(pppppppuVar6 + 1,ppppppuVar8,0x27);
    ppppppuVar8 = param_2[1] + 3;
    if (*(char *)((long)param_2[1] + 0x2f) < '\0') {
      ppppppuVar8 = (ulong ******)*ppppppuVar8;
    }
    _strncpy(pppppppuVar6 + 6,ppppppuVar8,0x27);
    ppppppuVar8 = param_2[1] + 6;
    if (*(char *)((long)param_2[1] + 0x47) < '\0') {
      ppppppuVar8 = (ulong ******)*ppppppuVar8;
    }
    _strncpy(pppppppuVar6 + 0xb,ppppppuVar8,0x27);
    ppppppuVar8 = param_2[1] + 9;
    cVar3 = *(char *)((long)param_2[1] + 0x5f);
joined_r0x000107f4d524:
    if (cVar3 < '\0') {
      ppppppuVar8 = (ulong ******)*ppppppuVar8;
    }
    pppppppuVar7 = pppppppuVar6 + 0x10;
    _strncpy(pppppppuVar7,ppppppuVar8,0x27);
  }
  else {
    if (iVar2 == 1) {
      ppppppuVar8 = param_2[1];
      if (*(char *)((long)ppppppuVar8 + 0x17) < '\0') {
        ppppppuVar8 = (ulong ******)*ppppppuVar8;
      }
      _strncpy(pppppppuVar6 + 6,ppppppuVar8,0x27);
LAB_107f4d434:
      ppppppuVar8 = param_2[1] + 3;
      if (*(char *)((long)param_2[1] + 0x2f) < '\0') {
        ppppppuVar8 = (ulong ******)*ppppppuVar8;
      }
      _strncpy(pppppppuVar6 + 0xb,ppppppuVar8,0x27);
      ppppppuVar8 = param_2[1] + 6;
      cVar3 = *(char *)((long)param_2[1] + 0x47);
      goto joined_r0x000107f4d524;
    }
    pppppppuVar7 = pppppppuVar6;
    if (iVar2 == 0) goto LAB_107f4d434;
  }
  if (*(char *)((long)pppppppuVar11 + 0x17) < '\0') {
    if (pppppppuVar11[1] != (ulong ******)0x0) {
      pppppppuVar11 = (ulong *******)*pppppppuVar11;
      goto LAB_107f4d490;
    }
  }
  else if (*(char *)((long)pppppppuVar11 + 0x17) != '\0') {
LAB_107f4d490:
    pppppppuVar6 = pppppppuVar6 + 0x15;
                    /* WARNING: Could not recover jumptable at 0x00010bdbfeb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__strncpy_11034cc08)(pppppppuVar6,pppppppuVar11,0x27);
    return pppppppuVar6;
  }
  return pppppppuVar7;
}



/* Entry: 107f4d3e0; end: 107f4d52b;  */

void FUN_107f4d3e0(long param_1,int *param_2,long *param_3)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 2) {
    plVar3 = *(long **)(param_2 + 2);
    if (*(char *)((long)plVar3 + 0x17) < '\0') {
      plVar3 = (long *)*plVar3;
    }
    _strncpy(param_1 + 8,plVar3,0x27);
    plVar3 = (long *)(*(long *)(param_2 + 2) + 0x18);
    if (*(char *)(*(long *)(param_2 + 2) + 0x2f) < '\0') {
      plVar3 = (long *)*plVar3;
    }
    _strncpy(param_1 + 0x30,plVar3,0x27);
    plVar3 = (long *)(*(long *)(param_2 + 2) + 0x30);
    if (*(char *)(*(long *)(param_2 + 2) + 0x47) < '\0') {
      plVar3 = (long *)*plVar3;
    }
    _strncpy(param_1 + 0x58,plVar3,0x27);
    plVar3 = (long *)(*(long *)(param_2 + 2) + 0x48);
    cVar2 = *(char *)(*(long *)(param_2 + 2) + 0x5f);
joined_r0x000107f4d524:
    if (cVar2 < '\0') {
      plVar3 = (long *)*plVar3;
    }
    _strncpy(param_1 + 0x80,plVar3,0x27);
  }
  else {
    if (iVar1 == 1) {
      plVar3 = *(long **)(param_2 + 2);
      if (*(char *)((long)plVar3 + 0x17) < '\0') {
        plVar3 = (long *)*plVar3;
      }
      _strncpy(param_1 + 0x30,plVar3,0x27);
LAB_107f4d434:
      plVar3 = (long *)(*(long *)(param_2 + 2) + 0x18);
      if (*(char *)(*(long *)(param_2 + 2) + 0x2f) < '\0') {
        plVar3 = (long *)*plVar3;
      }
      _strncpy(param_1 + 0x58,plVar3,0x27);
      plVar3 = (long *)(*(long *)(param_2 + 2) + 0x30);
      cVar2 = *(char *)(*(long *)(param_2 + 2) + 0x47);
      goto joined_r0x000107f4d524;
    }
    if (iVar1 == 0) goto LAB_107f4d434;
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    if (param_3[1] != 0) {
      param_3 = (long *)*param_3;
      goto LAB_107f4d490;
    }
  }
  else if (*(char *)((long)param_3 + 0x17) != '\0') {
LAB_107f4d490:
                    /* WARNING: Could not recover jumptable at 0x00010bdbfeb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__strncpy_11034cc08)(param_1 + 0xa8,param_3,0x27);
    return;
  }
  return;
}



/* Entry: 107f4d52c; end: 107f4d643;  */

undefined1  [16] FUN_107f4d52c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 == (long *)0x0) || (plVar2 = param_1 + 3, *plVar2 == 0)) {
LAB_107f4d5f8:
    plVar3 = (long *)0x0;
  }
  else {
    func_0x000100102e7c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar3 == (long *)0x0) goto LAB_107f4d5f8;
    for (plVar3 = (long *)*plVar3; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      plVar4 = (long *)plVar3[1];
      if (plVar4 == plVar2) {
        plVar4 = param_1 + 4;
        func_0x000100105738(plVar4,plVar3 + 2,param_2);
        plVar5 = plVar3;
        if (((ulong)plVar4 & 1) != 0) goto LAB_107f4d624;
      }
      else {
        if (((ulong)plVar6 & uVar7) == 0) {
          plVar4 = (long *)((ulong)plVar4 & uVar7);
        }
        else if (plVar6 <= plVar4) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar4 / (ulong)plVar6;
          }
          plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
        }
        if (plVar4 != plVar8) goto LAB_107f4d5f8;
      }
    }
  }
  plVar5 = (long *)0x0;
LAB_107f4d600:
  auVar9._8_8_ = plVar5;
  auVar9._0_8_ = plVar3;
  return auVar9;
  while( true ) {
    plVar6 = param_1 + 4;
    func_0x000100105738(plVar6,plVar5 + 2,param_2);
    if (((ulong)plVar6 & 1) == 0) break;
LAB_107f4d624:
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) break;
  }
  goto LAB_107f4d600;
}



/* Entry: 107f4d644; end: 107f4d907;  */

ulong ***** FUN_107f4d644(ulong *****param_1,ulong *****param_2,ulong *****param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint *puVar3;
  ulong ****ppppuVar4;
  ulong ****ppppuVar5;
  ulong ****ppppuVar6;
  ulong *****pppppuVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong ***pppuVar11;
  code *pcVar12;
  bool bVar13;
  int iVar14;
  ulong *****pppppuVar15;
  long *****ppppplVar16;
  ulong *****pppppuVar17;
  long ****pppplVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  ulong uVar21;
  long *****ppppplVar22;
  long lVar23;
  byte bVar24;
  ulong *****pppppuVar25;
  ulong *****pppppuVar26;
  long lVar27;
  long ****pppplStack_160;
  long ***ppplStack_158;
  long ****pppplStack_148;
  long ****pppplStack_140;
  long ****pppplStack_138;
  long ****pppplStack_130;
  undefined1 uStack_128;
  ulong ****ppppuStack_c0;
  ulong ***pppuStack_b8;
  ulong ***pppuStack_b0;
  ulong ****ppppuStack_a0;
  ulong ***pppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined7 uStack_78;
  undefined1 uStack_71;
  ulong ***pppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_107f4d52c();
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    pppppuVar17 = (ulong *****)*param_3;
    pppppuVar15 = &ppppuStack_a0;
    func_0x000100033dac(pppppuVar15,pppppuVar17,param_3[1]);
  }
  else {
    pppuStack_98 = (ulong ***)param_3[1];
    ppppuStack_a0 = *param_3;
    uStack_90 = param_3[2];
    pppppuVar15 = param_1;
    pppppuVar17 = param_2;
  }
  pppppuVar25 = (ulong *****)ppppuStack_a0;
  pppppuVar7 = (ulong *****)((long)ppppuStack_a0 + (long)pppuStack_98);
  if (-1 < (long)uStack_90) {
    pppppuVar25 = &ppppuStack_a0;
    pppppuVar7 = (ulong *****)((long)&ppppuStack_a0 + (ulong)uStack_90._7_1_);
  }
  pppppuVar26 = (ulong *****)ppppuStack_a0;
  bVar24 = uStack_90._7_1_;
  if (pppppuVar25 != pppppuVar7) {
    do {
      pppppuVar15 = (ulong *****)(long)*(char *)pppppuVar25;
      ___tolower();
      pppppuVar26 = (ulong *****)((long)pppppuVar25 + 1);
      *(char *)pppppuVar25 = (char)pppppuVar15;
      pppppuVar25 = pppppuVar26;
    } while (pppppuVar26 != pppppuVar7);
    bVar24 = (byte)((ulong)uStack_90 >> 0x38);
    pppppuVar26 = (ulong *****)ppppuStack_a0;
  }
  puVar19 = (undefined8 *)((ulong)&ppppuStack_a0 | 8);
  uStack_80._0_7_ = (undefined7)*puVar19;
  uVar20 = *(undefined8 *)((long)puVar19 + 7);
  uStack_80._7_1_ = (undefined1)uVar20;
  uStack_78 = (undefined7)((ulong)uVar20 >> 8);
  pppuStack_98 = (ulong ***)0x0;
  uStack_90 = (ulong ****)0x0;
  ppppuStack_a0 = (ulong ****)0x0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    pppppuVar15 = (ulong *****)*param_3;
    __ZdlPv();
    *param_3 = (ulong ****)pppppuVar26;
    param_3[1] = (ulong ****)CONCAT17(uStack_80._7_1_,(undefined7)uStack_80);
    *(ulong *)((long)param_3 + 0xf) = CONCAT71(uStack_78,uStack_80._7_1_);
    *(byte *)((long)param_3 + 0x17) = bVar24;
    if ((long)uStack_90 < 0) {
      pppppuVar15 = (ulong *****)ppppuStack_a0;
      __ZdlPv();
    }
  }
  else {
    *param_3 = (ulong ****)pppppuVar26;
    param_3[1] = (ulong ****)CONCAT17(uStack_80._7_1_,(undefined7)uStack_80);
    *(undefined8 *)((long)param_3 + 0xf) = uVar20;
    *(byte *)((long)param_3 + 0x17) = bVar24;
  }
  if (param_1 != param_2) {
    do {
      for (pppppuVar25 = (ulong *****)param_1[10]; pppppuVar25 != param_1 + 9;
          pppppuVar25 = (ulong *****)pppppuVar25[1]) {
        if (*(char *)((long)pppppuVar25 + 0x27) < '\0') {
          pppppuVar17 = (ulong *****)pppppuVar25[2];
          pppppuVar15 = &ppppuStack_c0;
          func_0x000100033dac(&ppppuStack_c0,pppppuVar17,pppppuVar25[3]);
        }
        else {
          pppuStack_b8 = (ulong ***)pppppuVar25[3];
          ppppuStack_c0 = pppppuVar25[2];
          pppuStack_b0 = (ulong ***)pppppuVar25[4];
        }
        pppppuVar26 = (ulong *****)ppppuStack_c0;
        pppppuVar7 = (ulong *****)((long)ppppuStack_c0 + (long)pppuStack_b8);
        if (-1 < (long)pppuStack_b0) {
          pppppuVar26 = &ppppuStack_c0;
          pppppuVar7 = (ulong *****)((long)&ppppuStack_c0 + ((ulong)pppuStack_b0 >> 0x38));
        }
        for (; pppuVar11 = pppuStack_b0, ppppuVar4 = (ulong ****)pppuStack_b8,
            ppppuVar6 = ppppuStack_c0, pppppuVar26 != pppppuVar7;
            pppppuVar26 = (ulong *****)((long)pppppuVar26 + 1)) {
          pppppuVar15 = (ulong *****)(long)*(char *)pppppuVar26;
          ___tolower();
          *(char *)pppppuVar26 = (char)pppppuVar15;
        }
        pppuStack_70 = pppuStack_b0;
        uStack_78 = SUB87(pppuStack_b8,0);
        uStack_71 = (undefined1)((ulong)pppuStack_b8 >> 0x38);
        uStack_80._0_7_ = SUB87(ppppuStack_c0,0);
        uStack_80._7_1_ = (undefined1)((ulong)ppppuStack_c0 >> 0x38);
        pppuStack_b8 = (ulong ***)0x0;
        pppuStack_b0 = (ulong ***)0x0;
        ppppuStack_c0 = (ulong ****)0x0;
        if (-1 < (long)pppuVar11) {
          ppppuVar4 = (ulong ****)((ulong)pppuVar11 >> 0x38);
        }
        bVar24 = *(byte *)((long)param_3 + 0x17);
        ppppuVar5 = param_3[1];
        if (-1 < (char)bVar24) {
          ppppuVar5 = (ulong ****)(ulong)bVar24;
        }
        if (ppppuVar4 == ppppuVar5) {
          pppppuVar15 = (ulong *****)ppppuVar6;
          if (-1 < (long)pppuVar11) {
            pppppuVar15 = (ulong *****)&uStack_80;
          }
          pppppuVar17 = (ulong *****)*param_3;
          if (-1 < (char)bVar24) {
            pppppuVar17 = param_3;
          }
          _memcmp();
          bVar13 = (int)pppppuVar15 == 0;
        }
        else {
          bVar13 = false;
        }
        if ((long)pppuVar11 < 0) {
          pppppuVar15 = (ulong *****)CONCAT17(uStack_80._7_1_,(undefined7)uStack_80);
          __ZdlPv();
          if ((long)pppuStack_b0 < 0) {
            pppppuVar15 = (ulong *****)ppppuStack_c0;
            __ZdlPv();
          }
        }
        if (bVar13) goto LAB_107f4d768;
      }
      param_1 = (ulong *****)*param_1;
    } while (param_1 != param_2);
  }
  param_1 = (ulong *****)0x0;
LAB_107f4d768:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  ppppuVar4 = pppppuVar15[1];
  if (-1 < (char)*(byte *)((long)pppppuVar15 + 0x17)) {
    ppppuVar4 = (ulong ****)(ulong)*(byte *)((long)pppppuVar15 + 0x17);
  }
  ppppuVar6 = pppppuVar17[1];
  if (-1 < (char)*(byte *)((long)pppppuVar17 + 0x17)) {
    ppppuVar6 = (ulong ****)(ulong)*(byte *)((long)pppppuVar17 + 0x17);
  }
  uVar1 = (long)ppppuVar4 + 1;
  uVar2 = (long)ppppuVar6 + 1;
  func_0x0001073f610c(&pppplStack_160,uVar2);
  pppplStack_148 = (long ****)0x0;
  pppplStack_140 = (long ****)0x0;
  pppplStack_130 = (long ****)&pppplStack_148;
  pppplStack_138 = (long ****)0x0;
  uStack_128 = 0;
  ppppplVar22 = (long *****)pppplStack_140;
  if (ppppuVar4 != (ulong ****)0xffffffffffffffff) {
    if (0xaaaaaaaaaaaaaaa < uVar1) {
      func_0x000107442c08();
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x107f4db40);
      (*pcVar12)();
    }
    ppppplVar16 = &pppplStack_138;
    uVar21 = uVar1;
    func_0x000107442c7c();
    pppplStack_138 = (long ****)(ppppplVar16 + uVar21 * 3);
    lVar27 = uVar1 * 0x18;
    ppppplVar22 = ppppplVar16 + uVar1 * 3;
    pppplStack_148 = (long ****)ppppplVar16;
    pppplStack_140 = (long ****)ppppplVar16;
    do {
      *ppppplVar16 = (long ****)0x0;
      ppppplVar16[1] = (long ****)0x0;
      ppppplVar16[2] = (long ****)0x0;
      func_0x000105536ef4(ppppplVar16,pppplStack_160,ppplStack_158,
                          (long)ppplStack_158 - (long)pppplStack_160 >> 2);
      ppppplVar16 = ppppplVar16 + 3;
      lVar27 = lVar27 + -0x18;
    } while (lVar27 != 0);
  }
  pppplStack_140 = (long ****)ppppplVar22;
  if (pppplStack_160 != (long ****)0x0) {
    ppplStack_158 = (long ***)pppplStack_160;
    __ZdlPv();
  }
  uVar21 = 0;
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  do {
    lVar27 = 0;
    ppppplVar22 = (long *****)(pppplStack_148 + uVar21 * 3);
    lVar23 = -1;
    do {
      if (uVar21 == 0) {
        iVar14 = (int)lVar23 + 1;
        pppplVar18 = (long ****)*pppplStack_148;
LAB_107f4da90:
        *(int *)((long)pppplVar18 + lVar27) = iVar14;
      }
      else if (lVar23 == -1) {
        *(int *)*ppppplVar22 = (int)uVar21;
      }
      else {
        pppppuVar25 = (ulong *****)*pppppuVar15;
        if (-1 < *(char *)((long)pppppuVar15 + 0x17)) {
          pppppuVar25 = pppppuVar15;
        }
        pppppuVar7 = (ulong *****)*pppppuVar17;
        if (-1 < *(char *)((long)pppppuVar17 + 0x17)) {
          pppppuVar7 = pppppuVar17;
        }
        if (*(char *)((long)pppppuVar25 + (uVar21 - 1)) == *(char *)((long)pppppuVar7 + lVar23)) {
          iVar14 = *(int *)((long)ppppplVar22[-3] + lVar27 + -4);
          pppplVar18 = *ppppplVar22;
          goto LAB_107f4da90;
        }
        uVar9 = ((int *)((long)*ppppplVar22 + lVar27))[-1];
        puVar3 = (uint *)((long)ppppplVar22[-3] + lVar27);
        uVar8 = puVar3[-1];
        uVar10 = *puVar3;
        if (uVar9 <= uVar10) {
          uVar10 = uVar9;
        }
        if (uVar10 <= uVar8) {
          uVar8 = uVar10;
        }
        *(int *)((long)*ppppplVar22 + lVar27) = uVar8 + 1;
      }
      lVar27 = lVar27 + 4;
      lVar23 = lVar23 + 1;
    } while (lVar23 - uVar2 != -1);
    uVar21 = uVar21 + 1;
    if (uVar21 == uVar1) {
      uVar10 = *(uint *)((long)pppplStack_148[(long)ppppuVar4 * 3] + (long)ppppuVar6 * 4);
      pppplStack_160 = (long ****)&pppplStack_148;
      func_0x000107442f1c(&pppplStack_160);
      return (ulong *****)(ulong)uVar10;
    }
  } while( true );
}



/* Entry: 107f4d908; end: 107f4db6f;  */

undefined4 FUN_107f4d908(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  code *pcVar12;
  int iVar13;
  long *****ppppplVar14;
  long ****pppplVar15;
  ulong uVar16;
  long *****ppppplVar17;
  long lVar18;
  long lVar19;
  long ****pppplStack_a0;
  long ***ppplStack_98;
  long ****pppplStack_88;
  long ****pppplStack_80;
  long ****pppplStack_78;
  long ****pppplStack_70;
  undefined1 uStack_68;
  
  uVar4 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar4 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  uVar5 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar5 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  uVar1 = uVar4 + 1;
  uVar2 = uVar5 + 1;
  func_0x0001073f610c(&pppplStack_a0,uVar2);
  pppplStack_88 = (long ****)0x0;
  pppplStack_80 = (long ****)0x0;
  pppplStack_70 = (long ****)&pppplStack_88;
  pppplStack_78 = (long ****)0x0;
  uStack_68 = 0;
  ppppplVar17 = (long *****)pppplStack_80;
  if (uVar4 != 0xffffffffffffffff) {
    if (0xaaaaaaaaaaaaaaa < uVar1) {
      func_0x000107442c08();
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x107f4db40);
      (*pcVar12)();
    }
    ppppplVar14 = &pppplStack_78;
    uVar16 = uVar1;
    func_0x000107442c7c();
    pppplStack_78 = (long ****)(ppppplVar14 + uVar16 * 3);
    lVar19 = uVar1 * 0x18;
    ppppplVar17 = ppppplVar14 + uVar1 * 3;
    pppplStack_88 = (long ****)ppppplVar14;
    pppplStack_80 = (long ****)ppppplVar14;
    do {
      *ppppplVar14 = (long ****)0x0;
      ppppplVar14[1] = (long ****)0x0;
      ppppplVar14[2] = (long ****)0x0;
      func_0x000105536ef4(ppppplVar14,pppplStack_a0,ppplStack_98,
                          (long)ppplStack_98 - (long)pppplStack_a0 >> 2);
      ppppplVar14 = ppppplVar14 + 3;
      lVar19 = lVar19 + -0x18;
    } while (lVar19 != 0);
  }
  pppplStack_80 = (long ****)ppppplVar17;
  if (pppplStack_a0 != (long ****)0x0) {
    ppplStack_98 = (long ***)pppplStack_a0;
    __ZdlPv();
  }
  uVar16 = 0;
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  do {
    lVar19 = 0;
    ppppplVar17 = (long *****)(pppplStack_88 + uVar16 * 3);
    lVar18 = -1;
    do {
      if (uVar16 == 0) {
        iVar13 = (int)lVar18 + 1;
        pppplVar15 = (long ****)*pppplStack_88;
LAB_107f4da90:
        *(int *)((long)pppplVar15 + lVar19) = iVar13;
      }
      else if (lVar18 == -1) {
        *(int *)*ppppplVar17 = (int)uVar16;
      }
      else {
        plVar6 = (long *)*param_1;
        if (-1 < *(char *)((long)param_1 + 0x17)) {
          plVar6 = param_1;
        }
        plVar7 = (long *)*param_2;
        if (-1 < *(char *)((long)param_2 + 0x17)) {
          plVar7 = param_2;
        }
        if (*(char *)((long)plVar6 + (uVar16 - 1)) == *(char *)((long)plVar7 + lVar18)) {
          iVar13 = *(int *)((long)ppppplVar17[-3] + lVar19 + -4);
          pppplVar15 = *ppppplVar17;
          goto LAB_107f4da90;
        }
        uVar10 = ((int *)((long)*ppppplVar17 + lVar19))[-1];
        puVar3 = (uint *)((long)ppppplVar17[-3] + lVar19);
        uVar8 = puVar3[-1];
        uVar9 = *puVar3;
        if (uVar10 <= uVar9) {
          uVar9 = uVar10;
        }
        if (uVar9 <= uVar8) {
          uVar8 = uVar9;
        }
        *(int *)((long)*ppppplVar17 + lVar19) = uVar8 + 1;
      }
      lVar19 = lVar19 + 4;
      lVar18 = lVar18 + 1;
    } while (lVar18 - uVar2 != -1);
    uVar16 = uVar16 + 1;
    if (uVar16 == uVar1) {
      uVar11 = *(undefined4 *)((long)pppplStack_88[uVar4 * 3] + uVar5 * 4);
      pppplStack_a0 = (long ****)&pppplStack_88;
      func_0x000107442f1c(&pppplStack_a0);
      return uVar11;
    }
  } while( true );
}



/* Entry: 107f4db70; end: 107f4dbf3;  */

void FUN_107f4db70(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  func_0x00010028ad98(param_2 + 0x14);
  func_0x00010028ad98(param_2 + 0xf);
  func_0x00010028ad98(param_2 + 10);
  func_0x00010028ad98(param_2 + 5);
  plVar1 = (long *)param_2[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x000107f4c814(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_2;
  *param_2 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 107f4dbf4; end: 107f4e323;  */

/* WARNING: Removing unreachable block (ram,0x000107f4de2c) */
/* WARNING: Removing unreachable block (ram,0x000107f4dd18) */
/* WARNING: Removing unreachable block (ram,0x000107f4e12c) */

void FUN_107f4dbf4(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  long *plVar11;
  long *plVar12;
  undefined **ppuVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **appuStack_190 [7];
  undefined8 uStack_158;
  char cStack_141;
  undefined **appuStack_130 [19];
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000100033dac(&uStack_220,*param_3,param_3[1]);
  }
  else {
    uStack_218 = param_3[1];
    uStack_220 = *param_3;
    uStack_210 = param_3[2];
  }
  uVar15 = uStack_218;
  if (-1 < (long)uStack_210) {
    uVar15 = uStack_210 >> 0x38;
  }
  if (uVar15 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(&uStack_220,"/",1);
  }
  uVar15 = param_2[1];
  puVar4 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar15 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar4 = param_2;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_220,puVar4,uVar15);
  puVar4 = &uStack_220;
  func_0x00010530c730(puVar4,&DAT_10f62a9de,0xffffffffffffffff);
  pppuVar5 = &ppuStack_1b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
            (pppuVar5,&uStack_220,0,puVar4,&puStack_80);
  _CFBundleGetMainBundle();
  ppuVar6 = &puStack_98;
  func_0x00010002b838(ppuVar6,&UNK_10f466543);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
  puStack_78 = ppuVar6[1];
  puStack_80 = *ppuVar6;
  puStack_70 = ppuVar6[2];
  ppuVar6[1] = (undefined *)0x0;
  ppuVar6[2] = (undefined *)0x0;
  *ppuVar6 = (undefined *)0x0;
  uVar7 = 0;
  _CFStringCreateWithCStringNoCopy(0,&puStack_80,0,0);
  _CFBundleCopyResourceURL(pppuVar5,uVar7,&PTR____CFConstantStringClassReference_110ec8238,0);
  pppuVar8 = pppuVar5;
  _CFURLCopyFileSystemPath();
  pppuVar9 = pppuVar8;
  _CFStringGetSystemEncoding();
  pppuVar10 = pppuVar8;
  _CFStringGetCStringPtr(pppuVar8,pppuVar9);
  plVar11 = (long *)0x240;
  __Znwm();
  plVar11[0x3b] = 0;
  plVar11[0x35] = (long)&PTR___ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_11087cfe0;
  *plVar11 = (long)&PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_11087cfb8;
  plVar11[1] = 0;
  __ZNSt3__18ios_base4initEPv(plVar11 + 0x35,plVar11 + 2);
  plVar11[0x46] = 0;
  *(undefined4 *)(plVar11 + 0x47) = 0xffffffff;
  *plVar11 = (long)&PTR_DAT_11087cf48;
  plVar11[0x35] = (long)&PTR_DAT_11087cf70;
  func_0x0001000daff0(plVar11 + 2);
  plVar12 = plVar11 + 2;
  func_0x0001000db35c(plVar12,pppuVar10,8);
  if (plVar12 == (long *)0x0) {
    lVar17 = (long)plVar11 + *(long *)(*plVar11 + -0x18);
    __ZNSt3__18ios_base5clearEj(lVar17,*(uint *)(lVar17 + 0x20) | 4);
  }
  _CFRelease(pppuVar8);
  _CFRelease(pppuVar5);
  _CFRelease(uVar7);
  if ((long)ppuStack_1a0 < 0) {
    __ZdlPv(ppuStack_1b0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  ppuVar6 = (undefined **)(param_1 + 2);
  *ppuVar6 = (undefined *)0x0;
  puStack_80 = (undefined *)0x0;
  puStack_78 = (undefined *)0x0;
  puStack_70 = (undefined *)0x0;
  puVar1 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
  do {
    __ZNKSt3__18ios_base6getlocEv(&ppuStack_1b0,(long)plVar11 + *(long *)(*plVar11 + -0x18));
    pppuVar5 = &ppuStack_1b0;
    __ZNKSt3__16locale9use_facetERNS0_2idE(pppuVar5,PTR___ZNSt3__15ctypeIcE2idE_110346770);
    (*(code *)(*pppuVar5)[7])();
    __ZNSt3__16localeD1Ev(&ppuStack_1b0);
    plVar12 = plVar11;
    func_0x000105c43344(plVar11,&puStack_80,pppuVar5);
    if ((*(byte *)((long)plVar12 + *(long *)(*plVar12 + -0x18) + 0x20) & 5) != 0) {
      (**(code **)(*plVar11 + 8))(plVar11);
      if ((long)uStack_210 < 0) {
        __ZdlPv(uStack_220);
      }
      return;
    }
    puStack_98 = (undefined *)0x0;
    lStack_90 = 0;
    uStack_88 = 0;
    func_0x0001078d8678(&ppuStack_1b0,&puStack_80,0x18);
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    lStack_1b8 = 0;
    while( true ) {
      pppuVar5 = &ppuStack_1b0;
      func_0x000105c43344(pppuVar5,&uStack_1c8,9);
      if ((*(byte *)((long)pppuVar5 + (long)((*pppuVar5)[-3] + 0x20)) & 5) != 0) break;
      if (lStack_1b8 < 0) {
        func_0x000100033dac(&uStack_200,uStack_1c8,uStack_1c0);
      }
      else {
        uStack_1f8 = uStack_1c0;
        uStack_200 = uStack_1c8;
        lStack_1f0 = lStack_1b8;
      }
      FUN_107f4bf6c(auStack_1e0,&uStack_200);
      func_0x000100c93e64(&puStack_98,auStack_1e0);
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
      }
      if (lStack_1f0 < 0) {
        __ZdlPv(uStack_200);
      }
    }
    if (lStack_1b8 < 0) {
      __ZdlPv(uStack_1c8);
    }
    ppuStack_1b0 = &PTR_DAT_1108a5a38;
    ppuStack_1a0 = &PTR_DAT_1108a5a60;
    ppuStack_198 = &PTR_DAT_11088d7b0;
    appuStack_130[0] = &PTR_DAT_1108a5a88;
    if (cStack_141 < '\0') {
      __ZdlPv(uStack_158);
    }
    ppuStack_198 = (undefined **)puVar1;
    __ZNSt3__16localeD1Ev(appuStack_190);
    __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_1b0,&PTR_PTR_1108a5aa0);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_130);
    puVar4 = (undefined8 *)param_1[1];
    if (puVar4 < (undefined8 *)param_1[2]) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      func_0x00010015bcc4(puVar4,puStack_98,lStack_90,
                          (lStack_90 - (long)puStack_98 >> 3) * -0x5555555555555555);
      puVar4 = puVar4 + 3;
    }
    else {
      lVar17 = (long)puVar4 - *param_1;
      uVar15 = (lVar17 >> 3) * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar15) {
        FUN_107f4e324();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x107f4e17c);
        (*pcVar3)();
      }
      lVar14 = param_1[2] - *param_1 >> 3;
      uVar16 = lVar14 * 0x5555555555555556;
      if (uVar16 < uVar15 || uVar16 - uVar15 == 0) {
        uVar16 = uVar15;
      }
      if (0x555555555555554 < (ulong)(lVar14 * -0x5555555555555555)) {
        uVar16 = 0xaaaaaaaaaaaaaaa;
      }
      appuStack_190[0] = ppuVar6;
      if (uVar16 == 0) {
        ppuVar13 = (undefined **)0x0;
      }
      else {
        ppuVar13 = ppuVar6;
        FUN_107f4e338();
      }
      puVar2 = (undefined8 *)((long)ppuVar13 + lVar17);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      ppuStack_1b0 = ppuVar13;
      ppuStack_1a8 = (undefined **)puVar2;
      ppuStack_1a0 = (undefined **)puVar2;
      ppuStack_198 = ppuVar13 + uVar16 * 3;
      func_0x00010015bcc4(puVar2,puStack_98,lStack_90,
                          (lStack_90 - (long)puStack_98 >> 3) * -0x5555555555555555);
      puVar4 = puVar2 + 3;
      lVar17 = (long)puVar2 - (param_1[1] - *param_1);
      _memcpy(lVar17);
      ppuStack_1b0 = (undefined **)*param_1;
      *param_1 = lVar17;
      param_1[1] = (long)puVar4;
      ppuStack_198 = (undefined **)param_1[2];
      param_1[2] = (long)(ppuVar13 + uVar16 * 3);
      ppuStack_1a8 = ppuStack_1b0;
      ppuStack_1a0 = ppuStack_1b0;
      func_0x000107f4e37c(&ppuStack_1b0);
    }
    param_1[1] = (long)puVar4;
    ppuStack_1b0 = &puStack_98;
    func_0x00010007e5dc(&ppuStack_1b0);
  } while( true );
}



/* Entry: 107f4e324; end: 107f4e337;  */

undefined1  [16] FUN_107f4e324(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  plVar1 = (long *)&UNK_10f46655c;
  func_0x000104bd47e8();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar2 = param_2 * 0x18;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000104bd35f4();
  func_0x000107f4e3ac();
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 107f4e338; end: 107f4e3fb;  */

undefined1  [16] FUN_107f4e338(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  func_0x000107f4e3ac();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 107f4e3fc; end: 107f4e63f;  */

/* WARNING: Removing unreachable block (ram,0x000107f506b4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_107f4e3fc(byte *param_1)

{
  byte *******pppppppbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  byte *pbVar8;
  bool bVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte bVar13;
  ushort uVar14;
  ulong uVar15;
  char *pcVar16;
  int *piVar17;
  ulong uVar18;
  long lVar19;
  ushort uVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  long lVar26;
  byte *pbVar27;
  undefined1 *unaff_x19;
  long lVar28;
  byte *unaff_x21;
  int iVar29;
  char *unaff_x22;
  byte *pbVar30;
  undefined8 auStack_818 [2];
  char cStack_801;
  undefined8 auStack_800 [2];
  char cStack_7e9;
  undefined8 auStack_7e8 [2];
  char cStack_7d1;
  undefined8 auStack_7d0 [2];
  char cStack_7b9;
  undefined8 auStack_7b8 [2];
  char cStack_7a1;
  undefined8 auStack_7a0 [2];
  char cStack_789;
  undefined8 auStack_788 [2];
  char cStack_771;
  undefined8 auStack_770 [2];
  char cStack_759;
  undefined8 auStack_758 [2];
  char cStack_741;
  undefined8 auStack_740 [2];
  char cStack_729;
  undefined8 auStack_728 [2];
  char cStack_711;
  undefined8 auStack_710 [2];
  char cStack_6f9;
  undefined8 auStack_6f8 [2];
  char cStack_6e1;
  undefined8 auStack_6e0 [2];
  char cStack_6c9;
  byte *******pppppppbStack_6c8;
  ulong uStack_6c0;
  undefined7 uStack_6b8;
  byte bStack_6b1;
  undefined1 auStack_6b0 [24];
  undefined1 auStack_698 [24];
  undefined1 auStack_680 [24];
  undefined1 auStack_668 [24];
  undefined1 auStack_650 [24];
  undefined1 auStack_638 [24];
  undefined1 auStack_620 [24];
  undefined1 auStack_608 [24];
  undefined1 auStack_5f0 [24];
  undefined1 auStack_5d8 [24];
  undefined1 auStack_5c0 [24];
  undefined1 auStack_5a8 [24];
  undefined1 auStack_590 [24];
  undefined1 auStack_578 [24];
  undefined1 auStack_560 [24];
  undefined1 auStack_548 [48];
  undefined1 auStack_518 [48];
  undefined1 auStack_4e8 [48];
  undefined1 auStack_4b8 [48];
  undefined1 auStack_488 [48];
  undefined1 auStack_458 [48];
  undefined1 auStack_428 [48];
  undefined1 auStack_3f8 [48];
  undefined1 auStack_3c8 [48];
  undefined1 auStack_398 [48];
  undefined1 auStack_368 [48];
  undefined1 auStack_338 [48];
  undefined1 auStack_308 [48];
  undefined1 auStack_2d8 [48];
  long lStack_2a8;
  undefined1 auStack_248 [48];
  undefined1 auStack_218 [48];
  undefined1 auStack_1e8 [48];
  undefined1 auStack_1b8 [48];
  undefined1 auStack_188 [48];
  undefined1 auStack_158 [48];
  undefined1 auStack_128 [48];
  undefined1 auStack_f8 [48];
  undefined1 auStack_c8 [48];
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [48];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113728560 & 1) == 0) {
    param_1 = (byte *)0x113728560;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      FUN_107f50d68(auStack_248,&UNK_10f466563,&UNK_10f466568);
      FUN_107f50db8(auStack_218,&UNK_10f46656c,&DAT_10f2db6ac);
      FUN_107f50db8(auStack_1e8,&UNK_10f466572,&UNK_10f466578);
      FUN_107f50db8(auStack_1b8,&UNK_10f46657c,&UNK_10f466582);
      FUN_107f50db8(auStack_188,&UNK_10f466586,&DAT_10f46658c);
      FUN_107f50d68(auStack_158,&UNK_10f466590,&UNK_10f466595);
      FUN_107f50e08(auStack_128,&UNK_10f466599,&UNK_10f4665a0);
      FUN_107f50e58(auStack_f8,&UNK_10f4665a6,&UNK_10f4665ab);
      FUN_107f50ea8(auStack_c8);
      FUN_107f50e58(auStack_98,&UNK_10f4665b6,&UNK_10f4665bb);
      FUN_107f50e08(auStack_68,&UNK_10f4665c0,&UNK_10f4665c7);
      unaff_x19 = auStack_248;
      func_0x000104bd4884(0x1137285c8,auStack_248,0xb);
      lVar28 = 0x1e0;
      do {
        func_0x000104acfb5c(unaff_x19 + lVar28);
        lVar28 = lVar28 + -0x30;
      } while (lVar28 != -0x30);
      param_1 = (byte *)0x113728560;
      ___cxa_guard_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = unaff_x19 + 0x1e0;
  lVar28 = -0x210;
  do {
    func_0x000104acfb5c(puVar10);
    puVar10 = puVar10 + -0x30;
    lVar28 = lVar28 + 0x30;
  } while (lVar28 != 0);
  ___cxa_guard_abort(0x113728560);
  pbVar11 = param_1;
  __Unwind_Resume();
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar13 = pbVar11[0x17];
  uVar15 = (ulong)bVar13;
  uVar24 = *(ulong *)(pbVar11 + 8);
  uVar18 = uVar24;
  if (-1 < (char)bVar13) {
    uVar18 = uVar15;
  }
  pbVar12 = (byte *)0x0;
  if (uVar18 < 3) goto LAB_107f4e808;
  pbVar12 = pbVar11;
  if ((char)bVar13 < '\0') {
    if (uVar24 == 3) {
      piVar17 = *(int **)pbVar11;
      if ((short)*piVar17 == 0x733c && *(char *)((long)piVar17 + 2) == '>') goto LAB_107f4e808;
    }
    else {
      if (uVar24 != 4) goto LAB_107f4e708;
      piVar17 = *(int **)pbVar11;
      if (*piVar17 == 0x3e732f3c) goto LAB_107f4e808;
    }
LAB_107f4e790:
    if ((char)*piVar17 == '\'') {
      uVar15 = *(ulong *)(pbVar11 + 8);
      goto LAB_107f4e7a0;
    }
  }
  else {
    if (bVar13 == 3) {
      if (*(short *)pbVar11 == 0x733c && pbVar11[2] == 0x3e) goto LAB_107f4e808;
      uVar15 = 3;
    }
    else {
      uVar24 = uVar15;
      if (bVar13 == 4 && *(int *)pbVar11 == 0x3e732f3c) goto LAB_107f4e808;
LAB_107f4e708:
      if (0x23 < uVar24) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                  (&pppppppbStack_6c8,pbVar11,0,0x23,auStack_6e0);
        if ((char)pbVar11[0x17] < '\0') {
          __ZdlPv(*(long *)pbVar11);
        }
        *(ulong *)(pbVar11 + 8) = uStack_6c0;
        *(byte ********)pbVar11 = pppppppbStack_6c8;
        *(long *)(pbVar11 + 0x10) = CONCAT17(bStack_6b1,uStack_6b8);
        uVar15 = (ulong)bStack_6b1;
      }
      if ((uint)uVar15 >> 7 != 0) {
        piVar17 = *(int **)pbVar11;
        goto LAB_107f4e790;
      }
    }
    if (*pbVar11 == 0x27) {
LAB_107f4e7a0:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (&pppppppbStack_6c8,pbVar11,1,uVar15 - 1,auStack_6e0);
      if ((char)pbVar11[0x17] < '\0') {
        __ZdlPv(*(long *)pbVar11);
      }
      *(ulong *)(pbVar11 + 8) = uStack_6c0;
      *(byte ********)pbVar11 = pppppppbStack_6c8;
      *(long *)(pbVar11 + 0x10) = CONCAT17(bStack_6b1,uStack_6b8);
    }
  }
  FUN_107f4e3fc();
  param_1 = (byte *)0x1137285c8;
  func_0x000100ab9b18(0x1137285c8,pbVar11);
  FUN_107f4e3fc();
  if (param_1 != (byte *)0x0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(pbVar11,param_1 + 0x28)
    ;
    goto LAB_107f4e808;
  }
  unaff_x21 = (byte *)(ulong)pbVar11[0x17];
  if ((char)pbVar11[0x17] < '\0') {
    lVar28 = *(long *)(pbVar11 + 8);
    if (lVar28 < 5) {
      if (lVar28 == 3) {
        uVar14 = (ushort)*(byte *)(*(short **)pbVar11 + 1);
        bVar9 = **(short **)pbVar11 == 0x6b73;
        uVar20 = 0x79;
        goto LAB_107f4ea10;
      }
      if (lVar28 == 4) {
        piVar17 = *(int **)pbVar11;
        if (*piVar17 == 0x7377656e) goto LAB_107f4e808;
        if (*piVar17 == 0x65776f68) goto LAB_107f4e808;
        if (*piVar17 == 0x73616962) goto LAB_107f4e808;
      }
    }
    else {
      if (lVar28 == 5) {
        piVar17 = *(int **)pbVar11;
        uVar20 = 0x73;
        if (*piVar17 == 0x616c7461 && (char)piVar17[1] == 's') goto LAB_107f4e808;
        uVar14 = (ushort)*(byte *)(piVar17 + 1);
        bVar9 = *piVar17 == 0x65646e61;
      }
      else {
        if (lVar28 != 6) goto LAB_107f4ea18;
        uVar14 = *(ushort *)(*(int **)pbVar11 + 1);
        bVar9 = **(int **)pbVar11 == 0x6d736f63;
        uVar20 = 0x736f;
      }
LAB_107f4ea10:
      if (bVar9 && uVar14 == uVar20) goto LAB_107f4e808;
    }
LAB_107f4ea18:
    pbVar12 = *(byte **)pbVar11;
    bVar13 = *pbVar12;
  }
  else {
    if (unaff_x21 < (byte *)0x5) {
      if (unaff_x21 == (byte *)0x3) {
        uVar20 = (ushort)pbVar11[2];
        bVar9 = *(short *)pbVar11 == 0x6b73;
        uVar14 = 0x79;
LAB_107f4e968:
        if (bVar9 && uVar20 == uVar14) goto LAB_107f4e808;
      }
      else if (unaff_x21 == (byte *)0x4) {
        iVar29 = *(int *)pbVar11;
        if (iVar29 == 0x65776f68) goto LAB_107f4e808;
        if (iVar29 == 0x73616962) goto LAB_107f4e808;
        if (iVar29 == 0x7377656e) goto LAB_107f4e808;
      }
    }
    else if (unaff_x21 == (byte *)0x5) {
      if (*(int *)pbVar11 == 0x616c7461 && pbVar11[4] == 0x73) goto LAB_107f4e808;
      if (*(int *)pbVar11 == 0x65646e61 && pbVar11[4] == 0x73) goto LAB_107f4e808;
    }
    else if (unaff_x21 == (byte *)0x6) {
      uVar20 = *(ushort *)(pbVar11 + 4);
      bVar9 = *(int *)pbVar11 == 0x6d736f63;
      uVar14 = 0x736f;
      goto LAB_107f4e968;
    }
    bVar13 = *pbVar11;
  }
  if (bVar13 == 0x79) {
    *pbVar12 = 0x59;
    unaff_x21 = (byte *)(ulong)pbVar11[0x17];
  }
  bVar9 = (char)unaff_x21 < '\0';
  pbVar25 = *(byte **)(pbVar11 + 8);
  pbVar12 = pbVar25;
  if (!bVar9) {
    pbVar12 = unaff_x21;
  }
  if ((byte *)0x1 < pbVar12) {
    pbVar27 = *(byte **)pbVar11;
    pbVar12 = (byte *)0x1;
    do {
      pbVar30 = pbVar27;
      if (!bVar9) {
        pbVar30 = pbVar11;
      }
      if ((pbVar30[(long)pbVar12] == 0x79) &&
         (uVar21 = (pbVar30 + (long)pbVar12)[-1] - 0x61 >> 1,
         (uVar21 & 0x7f | ((pbVar30 + (long)pbVar12)[-1] - 0x61) * 0x80 & 0xff) < 0xb &&
         (1 << (ulong)(uVar21 & 0x1f) & 0x495U) != 0)) {
        pbVar30[(long)pbVar12] = 0x59;
        pbVar12 = pbVar12 + 1;
        unaff_x21 = (byte *)(ulong)pbVar11[0x17];
        pbVar27 = *(byte **)pbVar11;
        pbVar25 = *(byte **)(pbVar11 + 8);
      }
      pbVar12 = pbVar12 + 1;
      bVar9 = (char)unaff_x21 < '\0';
      pbVar30 = pbVar25;
      if (!bVar9) {
        pbVar30 = unaff_x21;
      }
    } while (pbVar12 < pbVar30);
  }
  if ((uint)unaff_x21 >> 7 == 0) {
    if (unaff_x21 < (byte *)0x5) goto LAB_107f4ec64;
    bVar2 = *pbVar11;
    bVar3 = pbVar11[1];
    bVar4 = pbVar11[2];
    bVar5 = pbVar11[3];
    bVar13 = pbVar11[4];
    if (((bVar2 == 0x67) && (bVar3 == 0x65)) &&
       ((bVar4 == 0x6e && ((bVar5 == 0x65 && (bVar13 == 0x72)))))) {
LAB_107f4eb1c:
      param_1 = (byte *)0x5;
    }
    else {
      if (((unaff_x21 == (byte *)0x5) ||
          ((((bVar2 != 99 || (bVar3 != 0x6f)) || (bVar4 != 0x6d)) ||
           ((bVar5 != 0x6d || (bVar13 != 0x75)))))) || (pbVar11[5] != 0x6e)) {
        if (((bVar2 == 0x61) && (bVar3 == 0x72)) && ((bVar4 == 0x73 && (bVar5 == 0x65)))) {
LAB_107f4ec24:
          if (bVar13 == 0x6e) goto LAB_107f4eb1c;
        }
        goto LAB_107f4ec64;
      }
LAB_107f4ebac:
      param_1 = (byte *)0x6;
    }
  }
  else {
    if ((byte *)0x4 < pbVar25) {
      pcVar16 = *(char **)pbVar11;
      cVar6 = *pcVar16;
      if (cVar6 == 'g') {
        if ((pcVar16[1] == 'e') &&
           (((pcVar16[2] == 'n' && (pcVar16[3] == 'e')) && (pcVar16[4] == 'r'))))
        goto LAB_107f4eb1c;
      }
      else if ((pbVar25 == (byte *)0x5) || (cVar6 != 'c')) {
        if ((cVar6 == 'a') && (((pcVar16[1] == 'r' && (pcVar16[2] == 's')) && (pcVar16[3] == 'e'))))
        {
          bVar13 = pcVar16[4];
          goto LAB_107f4ec24;
        }
      }
      else if (((pcVar16[1] == 'o') && (pcVar16[2] == 'm')) &&
              ((pcVar16[3] == 'm' && ((pcVar16[4] == 'u' && (pcVar16[5] == 'n'))))))
      goto LAB_107f4ebac;
    }
LAB_107f4ec64:
    param_1 = pbVar11;
    FUN_107f50a1c(pbVar11,1);
  }
  if (-1 < (char)unaff_x21) {
    pbVar25 = unaff_x21;
  }
  unaff_x21 = param_1;
  if (param_1 != pbVar25) {
    unaff_x21 = pbVar11;
    FUN_107f50a1c(pbVar11,param_1 + 1);
  }
  func_0x00010002b838(&pppppppbStack_6c8,&UNK_10f4666c8);
  func_0x00010002b838(auStack_6e0,"");
  pbVar12 = pbVar11;
  FUN_107f50ae8(pbVar11,&pppppppbStack_6c8,auStack_6e0,0);
  if (((ulong)pbVar12 & 1) == 0) {
    func_0x00010002b838(auStack_6f8,&UNK_10f4666cc);
    func_0x00010002b838(auStack_710,"");
    pbVar12 = pbVar11;
    FUN_107f50ae8(pbVar11,auStack_6f8,auStack_710,0);
    if (((ulong)pbVar12 & 1) == 0) {
      func_0x00010002b838(auStack_728,&DAT_10f638984);
      func_0x00010002b838(auStack_740,"");
      FUN_107f50ae8(pbVar11,auStack_728,auStack_740,0);
      if (cStack_729 < '\0') {
        __ZdlPv(auStack_740[0]);
      }
      if (cStack_711 < '\0') {
        __ZdlPv(auStack_728[0]);
      }
    }
    if (cStack_6f9 < '\0') {
      __ZdlPv(auStack_710[0]);
    }
    if (cStack_6e1 < '\0') {
      __ZdlPv(auStack_6f8[0]);
    }
  }
  if (cStack_6c9 < '\0') {
    __ZdlPv(auStack_6e0[0]);
  }
  if ((char)bStack_6b1 < '\0') {
    __ZdlPv(pppppppbStack_6c8);
  }
  func_0x00010002b838(&pppppppbStack_6c8,&UNK_10f4666cf);
  func_0x00010002b838(auStack_6e0,&DAT_10f3b4066);
  unaff_x22 = (char *)pbVar11;
  FUN_107f50ae8(pbVar11,&pppppppbStack_6c8,auStack_6e0,0);
  if (cStack_6c9 < '\0') {
    __ZdlPv(auStack_6e0[0]);
  }
  if ((char)bStack_6b1 < '\0') {
    __ZdlPv(pppppppbStack_6c8);
  }
  if (((ulong)unaff_x22 & 1) == 0) {
    func_0x00010002b838(&pppppppbStack_6c8,&UNK_10f4666d4);
    pbVar12 = pbVar11;
    FUN_107f50c84(pbVar11,&pppppppbStack_6c8);
    if (((ulong)pbVar12 & 1) == 0) {
      func_0x00010002b838(auStack_6e0,&UNK_10f4666d8);
      unaff_x22 = (char *)pbVar11;
      FUN_107f50c84(pbVar11,auStack_6e0);
      if (cStack_6c9 < '\0') {
        __ZdlPv(auStack_6e0[0]);
      }
    }
    else {
      unaff_x22 = (char *)0x1;
    }
    if ((char)bStack_6b1 < '\0') {
      __ZdlPv(pppppppbStack_6c8);
    }
    pbVar12 = pbVar11;
    if ((int)unaff_x22 != 0) {
      bVar13 = pbVar11[0x17];
      if ((long)(char)bVar13 < 0) {
        pbVar12 = *(byte **)pbVar11;
        uVar18 = *(ulong *)(pbVar11 + 8);
        pbVar25 = (byte *)(uVar18 - 1);
        *(byte **)(pbVar11 + 8) = pbVar25;
        if (4 < uVar18) goto LAB_107f4eee8;
      }
      else {
        pbVar25 = (byte *)((long)(char)bVar13 + -1);
        if (4 < bVar13) {
          pbVar11[0x17] = (byte)pbVar25;
LAB_107f4eee8:
          pbVar12[(long)pbVar25] = 0;
          if ((long)(char)pbVar11[0x17] < 0) {
            pbVar12 = *(byte **)pbVar11;
            pbVar25 = *(byte **)(pbVar11 + 8);
            goto LAB_107f4ef98;
          }
          pbVar25 = (byte *)((long)(char)pbVar11[0x17] + -1);
        }
        pbVar11[0x17] = (byte)pbVar25 & 0x7f;
        pbVar12 = pbVar11;
      }
LAB_107f4ef9c:
      pbVar12[(long)pbVar25] = 0;
      goto LAB_107f4efa0;
    }
    func_0x00010002b838(&pppppppbStack_6c8,"s");
    pbVar25 = pbVar11;
    FUN_107f50c84(pbVar11,&pppppppbStack_6c8);
    if ((int)pbVar25 == 0) {
      unaff_x22 = (char *)0x0;
    }
    else {
      func_0x00010002b838(auStack_6e0,&DAT_10f4666dc);
      pbVar25 = pbVar11;
      FUN_107f50c84(pbVar11,auStack_6e0);
      if (((ulong)pbVar25 & 1) == 0) {
        func_0x00010002b838(auStack_6f8,&DAT_10f3b4066);
        pbVar25 = pbVar11;
        FUN_107f50c84(pbVar11,auStack_6f8);
        unaff_x22 = (char *)(ulong)((uint)pbVar25 ^ 1);
        if (cStack_6e1 < '\0') {
          __ZdlPv(auStack_6f8[0]);
        }
      }
      else {
        unaff_x22 = (char *)0x0;
      }
      if (cStack_6c9 < '\0') {
        __ZdlPv(auStack_6e0[0]);
      }
    }
    if ((char)bStack_6b1 < '\0') {
      __ZdlPv(pppppppbStack_6c8);
    }
    if ((int)unaff_x22 == 0) goto LAB_107f4efa0;
    bVar13 = pbVar11[0x17];
    uVar18 = (ulong)(uint)bVar13;
    if ((char)bVar13 < '\0') {
      unaff_x22 = *(char **)(pbVar11 + 8);
      if ((byte *)0x1 < unaff_x22 && (byte *)(unaff_x22 + -2) != (byte *)0x0) {
        FUN_107f50cfc(pbVar11,unaff_x22 + -2);
        if (((ulong)pbVar12 & 1) == 0) goto LAB_107f4efa0;
        pbVar12 = *(byte **)pbVar11;
        pbVar25 = (byte *)unaff_x22;
LAB_107f4ef98:
        pbVar25 = pbVar25 + -1;
        *(byte **)(pbVar11 + 8) = pbVar25;
        goto LAB_107f4ef9c;
      }
      goto LAB_107f4f050;
    }
    if (2 < bVar13) {
      unaff_x22 = (char *)(ulong)bVar13;
      pbVar25 = pbVar11;
      FUN_107f50cfc(pbVar11,unaff_x22 + -2);
      if (((ulong)pbVar25 & 1) != 0) {
        pbVar25 = (byte *)(unaff_x22 + -1);
        pbVar11[0x17] = (byte)pbVar25;
        goto LAB_107f4ef9c;
      }
      goto LAB_107f4efa0;
    }
LAB_107f4efac:
    if ((int)uVar18 == 6) {
      if (((*(int *)pbVar11 == 0x696e6e69 && *(short *)(pbVar11 + 4) == 0x676e) ||
          (*(int *)pbVar11 == 0x6974756f && *(short *)(pbVar11 + 4) == 0x676e)) ||
         (*(int *)pbVar11 == 0x65637865 && *(short *)(pbVar11 + 4) == 0x6465)) {
LAB_107f4f180:
        pbVar25 = pbVar11 + uVar18;
LAB_107f4f37c:
        do {
          if (*pbVar11 == 0x59) {
            *pbVar11 = 0x79;
          }
          pbVar12 = pbVar11 + 1;
          pbVar11 = pbVar12;
          if (pbVar12 == pbVar25) goto LAB_107f4e808;
        } while( true );
      }
    }
    else if ((int)uVar18 == 7) {
      if ((((*(int *)pbVar11 == 0x6e6e6163 && *(int *)(pbVar11 + 3) == 0x676e696e) ||
           (*(int *)pbVar11 == 0x72726568 && *(int *)(pbVar11 + 3) == 0x676e6972)) ||
          (*(int *)pbVar11 == 0x72726165 && *(int *)(pbVar11 + 3) == 0x676e6972)) ||
         (*(int *)pbVar11 == 0x636f7270 && *(int *)(pbVar11 + 3) == 0x64656563)) goto LAB_107f4f180;
      bVar9 = false;
      uVar18 = 7;
      pbVar12 = pbVar11;
LAB_107f4f0e8:
      if (*(int *)pbVar12 == 0x63637573 && *(int *)(pbVar12 + 3) == 0x64656563) {
        uVar24 = *(ulong *)(pbVar11 + 8);
        pbVar12 = *(byte **)pbVar11;
        if (!bVar9) {
          uVar24 = uVar18;
          pbVar12 = pbVar11;
        }
        goto LAB_107f4f370;
      }
    }
  }
  else {
LAB_107f4efa0:
    uVar18 = (ulong)pbVar11[0x17];
    if (-1 < (char)pbVar11[0x17]) goto LAB_107f4efac;
    unaff_x22 = *(char **)(pbVar11 + 8);
LAB_107f4f050:
    if ((byte *)unaff_x22 == (byte *)0x6) {
      piVar17 = *(int **)pbVar11;
      if (((*piVar17 != 0x696e6e69 || (short)piVar17[1] != 0x676e) &&
          (*piVar17 != 0x6974756f || (short)piVar17[1] != 0x676e)) &&
         (*piVar17 != 0x65637865 || (short)piVar17[1] != 0x6465)) goto LAB_107f4f1e8;
LAB_107f4f36c:
      uVar24 = *(ulong *)(pbVar11 + 8);
      pbVar12 = *(byte **)pbVar11;
LAB_107f4f370:
      if (uVar24 == 0) goto LAB_107f4e808;
      pbVar25 = pbVar12 + uVar24;
      pbVar11 = pbVar12;
      goto LAB_107f4f37c;
    }
    if ((byte *)unaff_x22 == (byte *)0x7) {
      pbVar12 = *(byte **)pbVar11;
      if (((*(int *)pbVar12 == 0x6e6e6163 && *(int *)(pbVar12 + 3) == 0x676e696e) ||
          (*(int *)pbVar12 == 0x72726568 && *(int *)(pbVar12 + 3) == 0x676e6972)) ||
         ((*(int *)pbVar12 == 0x72726165 && *(int *)(pbVar12 + 3) == 0x676e6972 ||
          (*(int *)pbVar12 == 0x636f7270 && *(int *)(pbVar12 + 3) == 0x64656563))))
      goto LAB_107f4f36c;
      bVar9 = true;
      goto LAB_107f4f0e8;
    }
  }
LAB_107f4f1e8:
  func_0x00010002b838(&pppppppbStack_6c8,&UNK_10f4666ee);
  pbVar12 = pbVar11;
  FUN_107f50c84(pbVar11,&pppppppbStack_6c8);
  if (((ulong)pbVar12 & 1) == 0) {
    func_0x00010002b838(auStack_6e0,&UNK_10f4666f4);
    pbVar12 = pbVar11;
    FUN_107f50c84(pbVar11,auStack_6e0);
    iVar29 = (int)pbVar12;
    if (cStack_6c9 < '\0') {
      __ZdlPv(auStack_6e0[0]);
    }
  }
  else {
    iVar29 = 1;
  }
  if ((char)bStack_6b1 < '\0') {
    __ZdlPv(pppppppbStack_6c8);
  }
  if (iVar29 != 0) {
    func_0x00010002b838(&pppppppbStack_6c8,&UNK_10f4666ee);
    func_0x00010002b838(auStack_6e0,&UNK_10f4666f8);
    pbVar12 = pbVar11;
    FUN_107f50ae8(pbVar11,&pppppppbStack_6c8,auStack_6e0,param_1);
    if (((ulong)pbVar12 & 1) == 0) {
      func_0x00010002b838(auStack_6f8,&UNK_10f4666f4);
      func_0x00010002b838(auStack_710,&UNK_10f4666f8);
      FUN_107f50ae8(pbVar11,auStack_6f8,auStack_710,param_1);
      if (cStack_6f9 < '\0') {
        __ZdlPv(auStack_710[0]);
      }
      if (cStack_6e1 < '\0') {
        __ZdlPv(auStack_6f8[0]);
      }
    }
    if (cStack_6c9 < '\0') {
      __ZdlPv(auStack_6e0[0]);
    }
    if ((char)bStack_6b1 < '\0') {
      __ZdlPv(pppppppbStack_6c8);
    }
    goto LAB_107f4f818;
  }
  uVar18 = *(ulong *)(pbVar11 + 8);
  if (-1 < (char)pbVar11[0x17]) {
    uVar18 = (ulong)pbVar11[0x17];
  }
  pbVar12 = pbVar11;
  FUN_107f50cfc(pbVar11,uVar18 - 2);
  if ((int)pbVar12 == 0) {
LAB_107f4f39c:
    pbVar25 = pbVar11;
    FUN_107f50cfc(pbVar11,uVar18 - 4);
    if ((int)pbVar25 == 0) {
LAB_107f4f3f0:
      pbVar27 = pbVar11;
      FUN_107f50cfc(pbVar11,uVar18 - 3);
      if ((int)pbVar27 == 0) {
        pbVar30 = pbVar11;
        FUN_107f50cfc(pbVar11,uVar18 - 5);
        if ((int)pbVar30 == 0) {
          pbVar30 = (byte *)0x0;
        }
        else {
LAB_107f4f490:
          func_0x00010002b838(&pppppppbStack_6c8,&UNK_10f466707);
          func_0x00010002b838(auStack_6e0,"");
          pbVar30 = pbVar11;
          FUN_107f50ae8(pbVar11,&pppppppbStack_6c8,auStack_6e0,0);
          if (cStack_6c9 < '\0') {
            __ZdlPv(auStack_6e0[0]);
          }
          if ((char)bStack_6b1 < '\0') {
            __ZdlPv(pppppppbStack_6c8);
          }
          if ((int)pbVar27 != 0) goto LAB_107f4f500;
        }
        if ((int)pbVar25 == 0) goto LAB_107f4f4f0;
        goto LAB_107f4f524;
      }
      func_0x00010002b838(auStack_800,&UNK_10f466703);
      func_0x00010002b838(auStack_818,"");
      pbVar30 = pbVar11;
      FUN_107f50ae8(pbVar11,auStack_800,auStack_818,0);
      if (((ulong)pbVar30 & 1) == 0) {
        pbVar30 = pbVar11;
        FUN_107f50cfc(pbVar11,uVar18 - 5);
        if (((ulong)pbVar30 & 1) != 0) goto LAB_107f4f490;
        pbVar30 = (byte *)0x0;
      }
      else {
        pbVar30 = (byte *)0x1;
      }
LAB_107f4f500:
      if (cStack_801 < '\0') {
        __ZdlPv(auStack_818[0]);
      }
      if (cStack_7e9 < '\0') {
        __ZdlPv(auStack_800[0]);
      }
      if (((ulong)pbVar25 & 1) != 0) goto LAB_107f4f524;
LAB_107f4f4f0:
      iVar29 = (int)pbVar30;
      if ((int)pbVar12 != 0) goto LAB_107f4f548;
    }
    else {
      func_0x00010002b838(auStack_7d0,&UNK_10f4666fe);
      func_0x00010002b838(auStack_7e8,"");
      pbVar27 = pbVar11;
      FUN_107f50ae8(pbVar11,auStack_7d0,auStack_7e8,0);
      if (((ulong)pbVar27 & 1) == 0) goto LAB_107f4f3f0;
      pbVar30 = (byte *)0x1;
LAB_107f4f524:
      iVar29 = (int)pbVar30;
      if (cStack_7d1 < '\0') {
        __ZdlPv(auStack_7e8[0]);
      }
      if (cStack_7b9 < '\0') {
        __ZdlPv(auStack_7d0[0]);
      }
      if (((ulong)pbVar12 & 1) != 0) goto LAB_107f4f548;
    }
    if (iVar29 == 0) goto LAB_107f4f818;
  }
  else {
    func_0x00010002b838(auStack_7a0,&UNK_10f4666fb);
    func_0x00010002b838(auStack_7b8,"");
    pbVar25 = pbVar11;
    FUN_107f50ae8(pbVar11,auStack_7a0,auStack_7b8,0);
    if (((ulong)pbVar25 & 1) == 0) goto LAB_107f4f39c;
    pbVar30 = (byte *)0x1;
LAB_107f4f548:
    if (cStack_7a1 < '\0') {
      __ZdlPv(auStack_7b8[0]);
    }
    if (cStack_789 < '\0') {
      __ZdlPv(auStack_7a0[0]);
    }
    if (((ulong)pbVar30 & 1) == 0) goto LAB_107f4f818;
  }
  func_0x00010002b838(&pppppppbStack_6c8,&DAT_10f37dda3);
  pbVar12 = pbVar11;
  FUN_107f50c84(pbVar11,&pppppppbStack_6c8);
  if (((ulong)pbVar12 & 1) == 0) {
    func_0x00010002b838(auStack_6e0,&UNK_10f46670d);
    pbVar12 = pbVar11;
    FUN_107f50c84(pbVar11,auStack_6e0);
    if (((ulong)pbVar12 & 1) == 0) {
      func_0x00010002b838(auStack_6f8,&UNK_10f466710);
      pbVar12 = pbVar11;
      FUN_107f50c84(pbVar11,auStack_6f8);
      iVar29 = (int)pbVar12;
      if (cStack_6e1 < '\0') {
        __ZdlPv(auStack_6f8[0]);
      }
    }
    else {
      iVar29 = 1;
    }
    if (cStack_6c9 < '\0') {
      __ZdlPv(auStack_6e0[0]);
    }
  }
  else {
    iVar29 = 1;
  }
  if ((char)bStack_6b1 < '\0') {
    __ZdlPv(pppppppbStack_6c8);
  }
  if (iVar29 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(pbVar11,0x65);
    goto LAB_107f4f818;
  }
  bVar13 = pbVar11[0x17];
  pbVar12 = (byte *)(long)(char)bVar13;
  if ((long)pbVar12 < 0) {
    pbVar25 = *(byte **)(pbVar11 + 8);
    if ((byte *)0x1 < *(byte **)(pbVar11 + 8)) goto LAB_107f4f644;
  }
  else {
    pbVar25 = pbVar12;
    if (1 < bVar13) {
LAB_107f4f644:
      pbVar30 = *(byte **)pbVar11;
      pbVar27 = *(byte **)(pbVar11 + 8);
      pbVar8 = pbVar30;
      if (-1 < (char)bVar13) {
        pbVar27 = pbVar12;
        pbVar8 = pbVar11;
      }
      if ((((uint)(pbVar8 + (long)pbVar25)[-1] == (uint)(pbVar8 + (long)pbVar27)[-2]) &&
          (uVar21 = (pbVar8 + (long)pbVar25)[-1] - 0x62, uVar21 < 0x13)) &&
         ((1 << (ulong)(uVar21 & 0x1f) & 0x55835U) != 0)) {
        if ((char)bVar13 < '\0') {
          pbVar12 = (byte *)(*(long *)(pbVar11 + 8) + -1);
          *(byte **)(pbVar11 + 8) = pbVar12;
        }
        else {
          pbVar12 = pbVar12 + -1;
          pbVar11[0x17] = (byte)pbVar12;
          pbVar30 = pbVar11;
        }
        pbVar30[(long)pbVar12] = 0;
        goto LAB_107f4f818;
      }
    }
  }
  pbVar25 = *(byte **)(pbVar11 + 8);
  if (-1 < (char)bVar13) {
    pbVar25 = pbVar12;
  }
  if (param_1 != pbVar25) goto LAB_107f4f818;
  if (param_1 < (byte *)0x3) {
    if (param_1 != (byte *)0x2) goto LAB_107f4f818;
    pbVar12 = *(byte **)pbVar11;
    if (-1 < (char)bVar13) {
      pbVar12 = pbVar11;
    }
    uVar21 = *pbVar12 - 0x61 >> 1;
    if ((0xc < (uVar21 & 0x7f | (*pbVar12 - 0x61) * 0x80 & 0xff)) ||
       ((1 << (ulong)(uVar21 & 0x1f) & 0x1495U) == 0)) goto LAB_107f4f818;
    uVar21 = pbVar12[1] - 0x61 >> 1;
    if ((uVar21 & 0x7f | (pbVar12[1] - 0x61) * 0x80 & 0xff) < 0xd) {
      uVar21 = 1 << (ulong)(uVar21 & 0x1f) & 0x1495;
      goto joined_r0x000107f4f7f4;
    }
  }
  else {
    pbVar12 = *(byte **)pbVar11;
    if (-1 < (char)bVar13) {
      pbVar12 = pbVar11;
    }
    uVar21 = (pbVar12 + (long)param_1)[-3] - 0x61;
    uVar23 = uVar21 >> 1;
    if (((((uVar23 & 0x7f | uVar21 * 0x80 & 0xff) < 0xd) &&
         ((1 << (ulong)(uVar23 & 0x1f) & 0x1495U) != 0)) ||
        (uVar21 = (pbVar12 + (long)param_1)[-2] - 0x61, uVar23 = uVar21 >> 1,
        0xc < (uVar23 & 0x7f | uVar21 * 0x80 & 0xff))) ||
       ((1 << (ulong)(uVar23 & 0x1f) & 0x1495U) == 0)) goto LAB_107f4f818;
    uVar21 = (pbVar12 + (long)param_1)[-1] - 0x61;
    uVar23 = uVar21 >> 1;
    if (((uVar23 & 0x7f | uVar21 * 0x80 & 0xff) < 0xd) &&
       ((1 << (ulong)(uVar23 & 0x1f) & 0x1495U) != 0)) goto LAB_107f4f818;
    uVar21 = (pbVar12 + (long)param_1)[-1] - 0x59;
    if (uVar21 < 0x20) {
      uVar21 = 1 << (ulong)(uVar21 & 0x1f) & 0xc0000001;
joined_r0x000107f4f7f4:
      if (uVar21 != 0) goto LAB_107f4f818;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(pbVar11,0x65);
LAB_107f4f818:
  bVar13 = pbVar11[0x17];
  uVar18 = *(ulong *)(pbVar11 + 8);
  if (-1 < (char)bVar13) {
    uVar18 = (ulong)bVar13;
  }
  if (2 < uVar18) {
    pbVar12 = *(byte **)pbVar11;
    if (-1 < (char)bVar13) {
      pbVar12 = pbVar11;
    }
    if (((pbVar12[uVar18 - 1] | 0x20) == 0x79) &&
       ((uVar21 = pbVar12[uVar18 - 2] - 0x61 >> 1,
        10 < (uVar21 & 0x7f | (pbVar12[uVar18 - 2] - 0x61) * 0x80 & 0xff) ||
        ((1 << (ulong)(uVar21 & 0x1f) & 0x495U) == 0)))) {
      pbVar12[uVar18 - 1] = 0x69;
    }
  }
  unaff_x22 = (char *)0x113728580;
  if ((bRam0000000113728568 & 1) == 0) goto LAB_107f5012c;
  do {
    lVar19 = *(long *)(unaff_x22 + 8);
    for (lVar28 = *(long *)unaff_x22; lVar28 != lVar19; lVar28 = lVar28 + 0x30) {
      pbVar12 = pbVar11;
      FUN_107f50ae8(pbVar11,lVar28,lVar28 + 0x18,param_1);
      if (((ulong)pbVar12 & 1) != 0) goto LAB_107f4fbe0;
    }
    func_0x00010002b838(&pppppppbStack_6c8,&UNK_10f466713);
    func_0x00010002b838(auStack_6e0,&DAT_10f3dd908);
    pbVar12 = pbVar11;
    FUN_107f50ae8(pbVar11,&pppppppbStack_6c8,auStack_6e0,param_1 + -1);
    if (cStack_6c9 < '\0') {
      __ZdlPv(auStack_6e0[0]);
    }
    if ((char)bStack_6b1 < '\0') {
      __ZdlPv(pppppppbStack_6c8);
    }
    if (((ulong)pbVar12 & 1) == 0) {
      func_0x00010002b838(&pppppppbStack_6c8,&UNK_10f466718);
      pbVar12 = pbVar11;
      FUN_107f50c84(pbVar11,&pppppppbStack_6c8);
      if ((int)pbVar12 == 0) {
        uVar21 = 0;
      }
      else {
        func_0x00010002b838(auStack_6e0,&UNK_10f4665f9);
        pbVar12 = pbVar11;
        FUN_107f50c84(pbVar11,auStack_6e0);
        if (((ulong)pbVar12 & 1) == 0) {
          func_0x00010002b838(auStack_6f8,&UNK_10f466603);
          pbVar12 = pbVar11;
          FUN_107f50c84(pbVar11,auStack_6f8);
          if (((ulong)pbVar12 & 1) == 0) {
            func_0x00010002b838(auStack_710,&UNK_10f466632);
            pbVar12 = pbVar11;
            FUN_107f50c84(pbVar11,auStack_710);
            if (((ulong)pbVar12 & 1) == 0) {
              func_0x00010002b838(auStack_728,&UNK_10f466638);
              pbVar12 = pbVar11;
              FUN_107f50c84(pbVar11,auStack_728);
              if (((ulong)pbVar12 & 1) == 0) {
                func_0x00010002b838(auStack_740,&UNK_10f466649);
                pbVar12 = pbVar11;
                FUN_107f50c84(pbVar11,auStack_740);
                if (((ulong)pbVar12 & 1) == 0) {
                  func_0x00010002b838(auStack_758,&UNK_10f466674);
                  pbVar12 = pbVar11;
                  FUN_107f50c84(pbVar11,auStack_758);
                  if (((ulong)pbVar12 & 1) == 0) {
                    func_0x00010002b838(auStack_770,&UNK_10f466678);
                    pbVar12 = pbVar11;
                    FUN_107f50c84(pbVar11,auStack_770);
                    if (((ulong)pbVar12 & 1) == 0) {
                      func_0x00010002b838(auStack_788,&UNK_10f46667e);
                      pbVar12 = pbVar11;
                      FUN_107f50c84(pbVar11,auStack_788);
                      uVar21 = (uint)pbVar12 ^ 1;
                      if (cStack_771 < '\0') {
                        __ZdlPv(auStack_788[0]);
                      }
                    }
                    else {
                      uVar21 = 0;
                    }
                    if (cStack_759 < '\0') {
                      __ZdlPv(auStack_770[0]);
                    }
                  }
                  else {
                    uVar21 = 0;
                  }
                  if (cStack_741 < '\0') {
                    __ZdlPv(auStack_758[0]);
                  }
                }
                else {
                  uVar21 = 0;
                }
                if (cStack_729 < '\0') {
                  __ZdlPv(auStack_740[0]);
                }
              }
              else {
                uVar21 = 0;
              }
              if (cStack_711 < '\0') {
                __ZdlPv(auStack_728[0]);
              }
            }
            else {
              uVar21 = 0;
            }
            if (cStack_6f9 < '\0') {
              __ZdlPv(auStack_710[0]);
            }
          }
          else {
            uVar21 = 0;
          }
          if (cStack_6e1 < '\0') {
            __ZdlPv(auStack_6f8[0]);
          }
        }
        else {
          uVar21 = 0;
        }
        if (cStack_6c9 < '\0') {
          __ZdlPv(auStack_6e0[0]);
        }
      }
      if ((char)bStack_6b1 < '\0') {
        __ZdlPv(pppppppbStack_6c8);
      }
      if (uVar21 != 0) {
        bVar13 = pbVar11[0x17];
        uVar18 = (ulong)(char)bVar13;
        if ((long)uVar18 < 0) {
          uVar24 = *(ulong *)(pbVar11 + 8);
          if (3 < *(ulong *)(pbVar11 + 8)) goto LAB_107f4fb50;
        }
        else {
          uVar24 = uVar18;
          if (3 < bVar13) {
LAB_107f4fb50:
            if (param_1 <= (byte *)(uVar24 - 2)) {
              pbVar25 = *(byte **)pbVar11;
              pbVar12 = pbVar25;
              if (-1 < (char)bVar13) {
                pbVar12 = pbVar11;
              }
              if ((pbVar12[uVar24 - 3] - 99 < 0x12) &&
                 ((1 << (ulong)(pbVar12[uVar24 - 3] - 99 & 0x1f) & 0x28d37U) != 0)) {
                if ((char)bVar13 < '\0') {
                  lVar28 = *(long *)(pbVar11 + 8) + -1;
                  *(long *)(pbVar11 + 8) = lVar28;
                }
                else {
                  lVar28 = uVar18 - 1;
                  pbVar11[0x17] = (byte)lVar28;
                  pbVar25 = pbVar11;
                }
                pbVar25[lVar28] = 0;
                if ((long)(char)pbVar11[0x17] < 0) {
                  pbVar12 = *(byte **)pbVar11;
                  lVar28 = *(long *)(pbVar11 + 8) + -1;
                  *(long *)(pbVar11 + 8) = lVar28;
                }
                else {
                  lVar28 = (long)(char)pbVar11[0x17] + -1;
                  pbVar11[0x17] = (byte)lVar28 & 0x7f;
                  pbVar12 = pbVar11;
                }
                pbVar12[lVar28] = 0;
              }
            }
          }
        }
      }
    }
LAB_107f4fbe0:
    lVar19 = lRam0000000113728598;
    lVar28 = lRam00000001137285a0;
    if ((bRam0000000113728570 & 1) == 0) {
      iVar29 = 0x13728570;
      ___cxa_guard_acquire();
      lVar19 = lRam0000000113728598;
      lVar28 = lRam00000001137285a0;
      if (iVar29 != 0) {
        FUN_107f50f00(&pppppppbStack_6c8,&UNK_10f4665cd,&UNK_10f4665d5);
        FUN_107f50f50(auStack_698,&UNK_10f4665d9,&UNK_10f4665e0);
        FUN_107f51090(auStack_668,&UNK_10f46668a,&DAT_10f46662f);
        FUN_107f51090(auStack_638,&UNK_10f466690,&UNK_10f466696);
        FUN_107f51090(auStack_608,&UNK_10f466699,&UNK_10f466696);
        FUN_107f510e0(auStack_5d8,&UNK_10f46669f,&UNK_10f466696);
        FUN_107f511e0(auStack_5a8);
        FUN_107f51238(auStack_578);
        lRam0000000113728598 = 0;
        lRam00000001137285a0 = 0;
        uRam00000001137285a8 = 0;
        func_0x0001006075ec(0x113728598,&pppppppbStack_6c8,auStack_548,8);
        lVar28 = 0x150;
        do {
          func_0x000104ad962c((long)&pppppppbStack_6c8 + lVar28);
          lVar28 = lVar28 + -0x30;
        } while (lVar28 != -0x30);
        ___cxa_guard_release(0x113728570);
        lVar19 = lRam0000000113728598;
        lVar28 = lRam00000001137285a0;
      }
    }
    for (; lVar19 != lVar28; lVar19 = lVar19 + 0x30) {
      pbVar12 = pbVar11;
      FUN_107f50ae8(pbVar11,lVar19,lVar19 + 0x18,param_1);
      if (((ulong)pbVar12 & 1) != 0) goto LAB_107f4fc78;
    }
    func_0x00010002b838(&pppppppbStack_6c8,&UNK_10f46671b);
    func_0x00010002b838(auStack_6e0,"");
    FUN_107f50ae8(pbVar11,&pppppppbStack_6c8,auStack_6e0,unaff_x21);
    if (cStack_6c9 < '\0') {
      __ZdlPv(auStack_6e0[0]);
    }
    if ((char)bStack_6b1 < '\0') {
      __ZdlPv(pppppppbStack_6c8);
    }
LAB_107f4fc78:
    if ((bRam0000000113728578 & 1) == 0) {
      iVar29 = 0x13728578;
      ___cxa_guard_acquire();
      if (iVar29 != 0) {
        func_0x00010002b838(&pppppppbStack_6c8,&DAT_10f46662f);
        func_0x00010002b838(auStack_6b0,&UNK_10f4665f4);
        func_0x00010002b838(auStack_698,&UNK_10f4665ea);
        func_0x00010002b838(auStack_680,&UNK_10f4666a9);
        func_0x00010002b838(auStack_668,&UNK_10f466696);
        func_0x00010002b838(auStack_650,&UNK_10f4665fe);
        func_0x00010002b838(auStack_638,&UNK_10f4666ac);
        func_0x00010002b838(auStack_620,&UNK_10f4666b1);
        func_0x00010002b838(auStack_608,&UNK_10f4666b5);
        func_0x00010002b838(auStack_5f0,&UNK_10f4666bb);
        func_0x00010002b838(auStack_5d8,&UNK_10f4666c0);
        func_0x00010002b838(auStack_5c0,&UNK_10f4665d5);
        func_0x00010002b838(auStack_5a8,&UNK_10f4666c4);
        func_0x00010002b838(auStack_590,&UNK_10f46664f);
        func_0x00010002b838(auStack_578,&UNK_10f466663);
        func_0x00010002b838(auStack_560,&UNK_10f466612);
        lRam00000001137285b0 = 0;
        lRam00000001137285b8 = 0;
        uRam00000001137285c0 = 0;
        func_0x00010007e1e8(0x1137285b0,&pppppppbStack_6c8,auStack_548,0x10);
        lVar28 = 0x180;
        do {
          lVar28 = lVar28 + -0x18;
        } while (lVar28 != 0);
        ___cxa_guard_release(0x113728578);
      }
    }
    lVar28 = lRam00000001137285b8;
    if (lRam00000001137285b0 != lRam00000001137285b8) {
      unaff_x22 = "";
      lVar19 = lRam00000001137285b0;
      do {
        func_0x00010002b838(&pppppppbStack_6c8,"");
        pbVar12 = pbVar11;
        FUN_107f50ae8(pbVar11,lVar19,&pppppppbStack_6c8,unaff_x21);
        if ((char)bStack_6b1 < '\0') {
          __ZdlPv(pppppppbStack_6c8);
        }
        if (((ulong)pbVar12 & 1) != 0) goto LAB_107f4fe60;
        lVar19 = lVar19 + 0x18;
      } while (lVar19 != lVar28);
    }
    func_0x00010002b838(&pppppppbStack_6c8,&UNK_10f4666b5);
    pbVar12 = pbVar11;
    FUN_107f50c84(pbVar11,&pppppppbStack_6c8);
    if (((ulong)pbVar12 & 1) == 0) {
      func_0x00010002b838(auStack_6e0,&UNK_10f4666bb);
      pbVar12 = pbVar11;
      FUN_107f50c84(pbVar11,auStack_6e0);
      uVar21 = (uint)pbVar12 ^ 1;
      if (cStack_6c9 < '\0') {
        __ZdlPv(auStack_6e0[0]);
      }
    }
    else {
      uVar21 = 0;
    }
    if ((char)bStack_6b1 < '\0') {
      __ZdlPv(pppppppbStack_6c8);
    }
    if (uVar21 == 0) {
LAB_107f4fdb0:
      func_0x00010002b838(&pppppppbStack_6c8,&UNK_10f466721);
      func_0x00010002b838(auStack_6e0,"s");
      unaff_x22 = (char *)(unaff_x21 + -1);
      pbVar12 = pbVar11;
      FUN_107f50ae8(pbVar11,&pppppppbStack_6c8,auStack_6e0,unaff_x22);
      if (((ulong)pbVar12 & 1) == 0) {
        func_0x00010002b838(auStack_6f8,&UNK_10f4665e0);
        func_0x00010002b838(auStack_710,"t");
        FUN_107f50ae8(pbVar11,auStack_6f8,auStack_710,unaff_x22);
        if (cStack_6f9 < '\0') {
          __ZdlPv(auStack_710[0]);
        }
        if (cStack_6e1 < '\0') {
          __ZdlPv(auStack_6f8[0]);
        }
      }
      if (cStack_6c9 < '\0') {
        __ZdlPv(auStack_6e0[0]);
      }
      if ((char)bStack_6b1 < '\0') {
        __ZdlPv(pppppppbStack_6c8);
      }
    }
    else {
      func_0x00010002b838(&pppppppbStack_6c8,&UNK_10f466609);
      func_0x00010002b838(auStack_6e0,"");
      unaff_x22 = (char *)pbVar11;
      FUN_107f50ae8(pbVar11,&pppppppbStack_6c8,auStack_6e0,unaff_x21);
      if (cStack_6c9 < '\0') {
        __ZdlPv(auStack_6e0[0]);
      }
      if ((char)bStack_6b1 < '\0') {
        __ZdlPv(pppppppbStack_6c8);
      }
      if (((ulong)unaff_x22 & 1) == 0) goto LAB_107f4fdb0;
    }
LAB_107f4fe60:
    bVar13 = pbVar11[0x17];
    lVar22 = (long)(char)bVar13;
    lVar19 = *(long *)(pbVar11 + 8);
    lVar28 = lVar19;
    if (-1 < (char)bVar13) {
      lVar28 = lVar22;
    }
    pbVar12 = (byte *)(lVar28 + -1);
    if (lVar22 < 0) {
      pbVar25 = *(byte **)pbVar11;
      lVar28 = lVar19;
      if (pbVar25[(long)pbVar12] != 0x65) goto LAB_107f4ffa8;
      if (pbVar12 < unaff_x21) goto LAB_107f4fec0;
      lVar22 = lVar19 + -1;
      *(long *)(pbVar11 + 8) = lVar22;
LAB_107f5000c:
      pbVar25[lVar22] = 0;
      goto LAB_107f500e8;
    }
    lVar28 = lVar22;
    if (pbVar11[(long)pbVar12] == 0x65) {
      if (unaff_x21 <= pbVar12) {
        lVar22 = lVar22 + -1;
        pbVar11[0x17] = (byte)lVar22 & 0x7f;
        pbVar25 = pbVar11;
        goto LAB_107f5000c;
      }
LAB_107f4fec0:
      if (pbVar12 < param_1) goto LAB_107f500e8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (&pppppppbStack_6c8,pbVar11,0,pbVar12,auStack_6e0);
      uVar18 = uStack_6c0;
      if (-1 < (char)bStack_6b1) {
        uVar18 = (ulong)bStack_6b1;
      }
      if (uVar18 < 3) {
        if (uVar18 != 2) goto LAB_107f500a0;
        pppppppbVar1 = pppppppbStack_6c8;
        if (-1 < (char)bStack_6b1) {
          pppppppbVar1 = (byte *******)&pppppppbStack_6c8;
        }
        uVar21 = *(byte *)pppppppbVar1 - 0x61 >> 1;
        param_1 = (byte *)0x1;
        if ((uVar21 & 0x7f | (*(byte *)pppppppbVar1 - 0x61) * 0x80 & 0xff) < 0xd &&
            (1 << (ulong)(uVar21 & 0x1f) & 0x1495U) != 0) {
          pppppppbVar1 = pppppppbStack_6c8;
          if (-1 < (char)bStack_6b1) {
            pppppppbVar1 = (byte *******)&pppppppbStack_6c8;
          }
          uVar23 = *(byte *)((long)pppppppbVar1 + 1) - 0x61;
          uVar21 = uVar23 >> 1 & 0x7f;
          if ((uVar21 | uVar23 * 0x80 & 0xff) < 0xd) {
            uVar23 = 0x1495;
            goto LAB_107f50098;
          }
LAB_107f500a8:
          param_1 = (byte *)0x0;
        }
      }
      else {
        pppppppbVar1 = pppppppbStack_6c8;
        if (-1 < (char)bStack_6b1) {
          pppppppbVar1 = (byte *******)&pppppppbStack_6c8;
        }
        uVar21 = *(byte *)((long)pppppppbVar1 + (uVar18 - 3)) - 0x61;
        uVar23 = uVar21 >> 1;
        if (((uVar23 & 0x7f | uVar21 * 0x80 & 0xff) < 0xd) &&
           ((0x1495U >> (ulong)(uVar23 & 0x1f) & 1) != 0)) {
LAB_107f500a0:
          param_1 = (byte *)0x1;
        }
        else {
          uVar21 = *(byte *)((long)pppppppbVar1 + (uVar18 - 2)) - 0x61;
          uVar23 = uVar21 >> 1;
          param_1 = (byte *)0x1;
          if ((uVar23 & 0x7f | uVar21 * 0x80 & 0xff) < 0xd &&
              (1 << (ulong)(uVar23 & 0x1f) & 0x1495U) != 0) {
            uVar21 = (uint)*(byte *)((long)pppppppbVar1 + (uVar18 - 1));
            uVar23 = uVar21 - 0x61;
            uVar7 = uVar23 >> 1;
            if ((0xc < (uVar7 & 0x7f | uVar23 * 0x80 & 0xff)) ||
               ((0x1495U >> (ulong)(uVar7 & 0x1f) & 1) == 0)) {
              uVar21 = uVar21 - 0x59;
              if (0x1f < (uVar21 & 0xff)) goto LAB_107f500a8;
              uVar23 = 0xc0000001;
LAB_107f50098:
              param_1 = (byte *)(ulong)(uVar23 >> (ulong)(uVar21 & 0x1f));
            }
          }
        }
      }
      if ((char)bStack_6b1 < '\0') {
        __ZdlPv(pppppppbStack_6c8);
      }
      if (((ulong)param_1 & 1) == 0) goto LAB_107f500e8;
      lVar22 = (long)(char)pbVar11[0x17];
      if (lVar22 < 0) {
        pbVar12 = *(byte **)pbVar11;
        lVar19 = *(long *)(pbVar11 + 8);
LAB_107f500dc:
        lVar19 = lVar19 + -1;
        *(long *)(pbVar11 + 8) = lVar19;
      }
      else {
LAB_107f500c8:
        lVar19 = lVar22 + -1;
        pbVar11[0x17] = (byte)lVar19 & 0x7f;
        pbVar12 = pbVar11;
      }
      pbVar12[lVar19] = 0;
    }
    else {
LAB_107f4ffa8:
      if ((char)bVar13 < '\0') {
        lVar26 = lVar19;
        if (*(char *)(*(long *)pbVar11 + lVar28 + -1) == 'l' && unaff_x21 <= (byte *)(lVar19 + -1))
        goto LAB_107f4ffe8;
      }
      else {
        lVar26 = lVar22;
        if (pbVar11[lVar28 + -1] == 0x6c && unaff_x21 <= (byte *)(lVar22 + -1)) {
LAB_107f4ffe8:
          if ((char)bVar13 < '\0') {
            pbVar12 = *(byte **)pbVar11;
            if (pbVar12[lVar26 + -2] == 0x6c) goto LAB_107f500dc;
          }
          else if (pbVar11[lVar26 + -2] == 0x6c) goto LAB_107f500c8;
        }
      }
    }
LAB_107f500e8:
    uVar18 = *(ulong *)(pbVar11 + 8);
    pbVar25 = *(byte **)pbVar11;
    if (-1 < (char)pbVar11[0x17]) {
      uVar18 = (ulong)pbVar11[0x17];
      pbVar25 = pbVar11;
    }
    for (; pbVar12 = pbVar11, uVar18 != 0; uVar18 = uVar18 - 1) {
      if (*pbVar25 == 0x59) {
        *pbVar25 = 0x79;
      }
      pbVar25 = pbVar25 + 1;
    }
LAB_107f4e808:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
      return;
    }
    ___stack_chk_fail();
    pbVar11 = pbVar12;
LAB_107f5012c:
    iVar29 = 0x13728568;
    ___cxa_guard_acquire();
    if (iVar29 != 0) {
      FUN_107f50f00(&pppppppbStack_6c8,&UNK_10f4665cd,&UNK_10f4665d5);
      FUN_107f50f50(auStack_698,&UNK_10f4665d9,&UNK_10f4665e0);
      FUN_107f50fa0(auStack_668,&UNK_10f4665e5,&UNK_10f4665ea);
      FUN_107f50fa0(auStack_638,&UNK_10f4665ef,&UNK_10f4665f4);
      FUN_107f50fa0(auStack_608,&UNK_10f4665f9,&UNK_10f4665fe);
      FUN_107f50ff0(auStack_5d8,&UNK_10f466603,&UNK_10f466609);
      FUN_107f51040(auStack_5a8,&UNK_10f46660d,&UNK_10f466612);
      FUN_107f50f00(auStack_578,&UNK_10f466616,&UNK_10f466612);
      FUN_107f50ff0(auStack_548,&UNK_10f46661e,&UNK_10f4665d5);
      FUN_107f51040(auStack_518,&UNK_10f466624,&UNK_10f4665d5);
      FUN_107f51090(auStack_4e8,&UNK_10f466629,&DAT_10f46662f);
      FUN_107f51090(auStack_4b8,&UNK_10f466632,&DAT_10f46662f);
      FUN_107f510e0(auStack_488,&UNK_10f466638,&DAT_10f46662f);
      FUN_107f50f00(auStack_458,&UNK_10f46663d,&UNK_10f466645);
      FUN_107f50ff0(auStack_428,&UNK_10f466649,&UNK_10f46664f);
      FUN_107f50f00(auStack_3f8,&UNK_10f466653,&UNK_10f46664f);
      FUN_107f50f00(auStack_3c8,&UNK_10f46665b,&UNK_10f466663);
      FUN_107f50ff0(auStack_398,&UNK_10f466667,&UNK_10f466663);
      FUN_107f51130(auStack_368);
      FUN_107f51188(auStack_338);
      FUN_107f50ff0(auStack_308,&UNK_10f466678,&UNK_10f466645);
      FUN_107f50f50(auStack_2d8,&UNK_10f46667e,&UNK_10f466685);
      unaff_x22[0] = 0;
      unaff_x22[1] = 0;
      unaff_x22[2] = 0;
      unaff_x22[3] = 0;
      unaff_x22[4] = 0;
      unaff_x22[5] = 0;
      unaff_x22[6] = 0;
      unaff_x22[7] = 0;
      unaff_x22[8] = 0;
      unaff_x22[9] = 0;
      unaff_x22[10] = 0;
      unaff_x22[0xb] = 0;
      unaff_x22[0xc] = 0;
      unaff_x22[0xd] = 0;
      unaff_x22[0xe] = 0;
      unaff_x22[0xf] = 0;
      unaff_x22[0x10] = 0;
      unaff_x22[0x11] = 0;
      unaff_x22[0x12] = 0;
      unaff_x22[0x13] = 0;
      unaff_x22[0x14] = 0;
      unaff_x22[0x15] = 0;
      unaff_x22[0x16] = 0;
      unaff_x22[0x17] = 0;
      func_0x0001006075ec(unaff_x22,&pppppppbStack_6c8,&lStack_2a8,0x16);
      lVar28 = 0x3f0;
      do {
        func_0x000104ad962c((long)&pppppppbStack_6c8 + lVar28);
        lVar28 = lVar28 + -0x30;
      } while (lVar28 != -0x30);
      ___cxa_guard_release(0x113728568);
    }
  } while( true );
}



/* Entry: 107f4e640; end: 107f50a1b;  */

/* WARNING: Removing unreachable block (ram,0x000107f506b4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_107f4e640(byte *param_1)

{
  byte *******pppppppbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  byte *pbVar8;
  bool bVar9;
  byte *pbVar10;
  byte bVar11;
  ushort uVar12;
  ulong uVar13;
  char *pcVar14;
  int *piVar15;
  ulong uVar16;
  long lVar17;
  ushort uVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  long lVar24;
  byte *pbVar25;
  byte *unaff_x19;
  byte *unaff_x20;
  byte *unaff_x21;
  int iVar26;
  char *unaff_x22;
  long lVar27;
  byte *pbVar28;
  undefined8 auStack_5c8 [2];
  char cStack_5b1;
  undefined8 auStack_5b0 [2];
  char cStack_599;
  undefined8 auStack_598 [2];
  char cStack_581;
  undefined8 auStack_580 [2];
  char cStack_569;
  undefined8 auStack_568 [2];
  char cStack_551;
  undefined8 auStack_550 [2];
  char cStack_539;
  undefined8 auStack_538 [2];
  char cStack_521;
  undefined8 auStack_520 [2];
  char cStack_509;
  undefined8 auStack_508 [2];
  char cStack_4f1;
  undefined8 auStack_4f0 [2];
  char cStack_4d9;
  undefined8 auStack_4d8 [2];
  char cStack_4c1;
  undefined8 auStack_4c0 [2];
  char cStack_4a9;
  undefined8 auStack_4a8 [2];
  char cStack_491;
  undefined8 auStack_490 [2];
  char cStack_479;
  byte *******pppppppbStack_478;
  ulong uStack_470;
  undefined7 uStack_468;
  byte bStack_461;
  undefined1 auStack_460 [24];
  undefined1 auStack_448 [24];
  undefined1 auStack_430 [24];
  undefined1 auStack_418 [24];
  undefined1 auStack_400 [24];
  undefined1 auStack_3e8 [24];
  undefined1 auStack_3d0 [24];
  undefined1 auStack_3b8 [24];
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [24];
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [48];
  undefined1 auStack_2c8 [48];
  undefined1 auStack_298 [48];
  undefined1 auStack_268 [48];
  undefined1 auStack_238 [48];
  undefined1 auStack_208 [48];
  undefined1 auStack_1d8 [48];
  undefined1 auStack_1a8 [48];
  undefined1 auStack_178 [48];
  undefined1 auStack_148 [48];
  undefined1 auStack_118 [48];
  undefined1 auStack_e8 [48];
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [48];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar11 = param_1[0x17];
  uVar13 = (ulong)bVar11;
  uVar22 = *(ulong *)(param_1 + 8);
  uVar16 = uVar22;
  if (-1 < (char)bVar11) {
    uVar16 = uVar13;
  }
  if (uVar16 < 3) goto LAB_107f4e808;
  unaff_x19 = param_1;
  if ((char)bVar11 < '\0') {
    if (uVar22 == 3) {
      piVar15 = *(int **)param_1;
      if ((short)*piVar15 == 0x733c && *(char *)((long)piVar15 + 2) == '>') goto LAB_107f4e808;
    }
    else {
      if (uVar22 != 4) goto LAB_107f4e708;
      piVar15 = *(int **)param_1;
      if (*piVar15 == 0x3e732f3c) goto LAB_107f4e808;
    }
LAB_107f4e790:
    if ((char)*piVar15 == '\'') {
      uVar13 = *(ulong *)(param_1 + 8);
      goto LAB_107f4e7a0;
    }
  }
  else {
    if (bVar11 == 3) {
      if (*(short *)param_1 == 0x733c && param_1[2] == 0x3e) goto LAB_107f4e808;
      uVar13 = 3;
    }
    else {
      uVar22 = uVar13;
      if (bVar11 == 4 && *(int *)param_1 == 0x3e732f3c) goto LAB_107f4e808;
LAB_107f4e708:
      if (0x23 < uVar22) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                  (&pppppppbStack_478,param_1,0,0x23,auStack_490);
        if ((char)param_1[0x17] < '\0') {
          __ZdlPv(*(long *)param_1);
        }
        *(ulong *)(param_1 + 8) = uStack_470;
        *(byte ********)param_1 = pppppppbStack_478;
        *(long *)(param_1 + 0x10) = CONCAT17(bStack_461,uStack_468);
        uVar13 = (ulong)bStack_461;
      }
      if ((uint)uVar13 >> 7 != 0) {
        piVar15 = *(int **)param_1;
        goto LAB_107f4e790;
      }
    }
    if (*param_1 == 0x27) {
LAB_107f4e7a0:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (&pppppppbStack_478,param_1,1,uVar13 - 1,auStack_490);
      if ((char)param_1[0x17] < '\0') {
        __ZdlPv(*(long *)param_1);
      }
      *(ulong *)(param_1 + 8) = uStack_470;
      *(byte ********)param_1 = pppppppbStack_478;
      *(long *)(param_1 + 0x10) = CONCAT17(bStack_461,uStack_468);
    }
  }
  FUN_107f4e3fc();
  unaff_x20 = (byte *)0x1137285c8;
  func_0x000100ab9b18(0x1137285c8,param_1);
  FUN_107f4e3fc();
  if (unaff_x20 != (byte *)0x0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1,unaff_x20 + 0x28);
    goto LAB_107f4e808;
  }
  unaff_x21 = (byte *)(ulong)param_1[0x17];
  if ((char)param_1[0x17] < '\0') {
    lVar27 = *(long *)(param_1 + 8);
    if (lVar27 < 5) {
      if (lVar27 == 3) {
        uVar12 = (ushort)*(byte *)(*(short **)param_1 + 1);
        bVar9 = **(short **)param_1 == 0x6b73;
        uVar18 = 0x79;
        goto LAB_107f4ea10;
      }
      if (lVar27 == 4) {
        piVar15 = *(int **)param_1;
        if (*piVar15 == 0x7377656e) goto LAB_107f4e808;
        if (*piVar15 == 0x65776f68) goto LAB_107f4e808;
        if (*piVar15 == 0x73616962) goto LAB_107f4e808;
      }
    }
    else {
      if (lVar27 == 5) {
        piVar15 = *(int **)param_1;
        uVar18 = 0x73;
        if (*piVar15 == 0x616c7461 && (char)piVar15[1] == 's') goto LAB_107f4e808;
        uVar12 = (ushort)*(byte *)(piVar15 + 1);
        bVar9 = *piVar15 == 0x65646e61;
      }
      else {
        if (lVar27 != 6) goto LAB_107f4ea18;
        uVar12 = *(ushort *)(*(int **)param_1 + 1);
        bVar9 = **(int **)param_1 == 0x6d736f63;
        uVar18 = 0x736f;
      }
LAB_107f4ea10:
      if (bVar9 && uVar12 == uVar18) goto LAB_107f4e808;
    }
LAB_107f4ea18:
    pbVar10 = *(byte **)param_1;
    bVar11 = *pbVar10;
  }
  else {
    if (unaff_x21 < (byte *)0x5) {
      if (unaff_x21 == (byte *)0x3) {
        uVar18 = (ushort)param_1[2];
        bVar9 = *(short *)param_1 == 0x6b73;
        uVar12 = 0x79;
LAB_107f4e968:
        if (bVar9 && uVar18 == uVar12) goto LAB_107f4e808;
      }
      else if (unaff_x21 == (byte *)0x4) {
        iVar26 = *(int *)param_1;
        if (iVar26 == 0x65776f68) goto LAB_107f4e808;
        if (iVar26 == 0x73616962) goto LAB_107f4e808;
        if (iVar26 == 0x7377656e) goto LAB_107f4e808;
      }
    }
    else if (unaff_x21 == (byte *)0x5) {
      if (*(int *)param_1 == 0x616c7461 && param_1[4] == 0x73) goto LAB_107f4e808;
      if (*(int *)param_1 == 0x65646e61 && param_1[4] == 0x73) goto LAB_107f4e808;
    }
    else if (unaff_x21 == (byte *)0x6) {
      uVar18 = *(ushort *)(param_1 + 4);
      bVar9 = *(int *)param_1 == 0x6d736f63;
      uVar12 = 0x736f;
      goto LAB_107f4e968;
    }
    bVar11 = *param_1;
    pbVar10 = param_1;
  }
  if (bVar11 == 0x79) {
    *pbVar10 = 0x59;
    unaff_x21 = (byte *)(ulong)param_1[0x17];
  }
  bVar9 = (char)unaff_x21 < '\0';
  pbVar23 = *(byte **)(param_1 + 8);
  pbVar10 = pbVar23;
  if (!bVar9) {
    pbVar10 = unaff_x21;
  }
  if ((byte *)0x1 < pbVar10) {
    pbVar25 = *(byte **)param_1;
    pbVar10 = (byte *)0x1;
    do {
      pbVar28 = pbVar25;
      if (!bVar9) {
        pbVar28 = param_1;
      }
      if ((pbVar28[(long)pbVar10] == 0x79) &&
         (uVar19 = (pbVar28 + (long)pbVar10)[-1] - 0x61 >> 1,
         (uVar19 & 0x7f | ((pbVar28 + (long)pbVar10)[-1] - 0x61) * 0x80 & 0xff) < 0xb &&
         (1 << (ulong)(uVar19 & 0x1f) & 0x495U) != 0)) {
        pbVar28[(long)pbVar10] = 0x59;
        pbVar10 = pbVar10 + 1;
        unaff_x21 = (byte *)(ulong)param_1[0x17];
        pbVar25 = *(byte **)param_1;
        pbVar23 = *(byte **)(param_1 + 8);
      }
      pbVar10 = pbVar10 + 1;
      bVar9 = (char)unaff_x21 < '\0';
      pbVar28 = pbVar23;
      if (!bVar9) {
        pbVar28 = unaff_x21;
      }
    } while (pbVar10 < pbVar28);
  }
  if ((uint)unaff_x21 >> 7 == 0) {
    if (unaff_x21 < (byte *)0x5) goto LAB_107f4ec64;
    bVar2 = *param_1;
    bVar3 = param_1[1];
    bVar4 = param_1[2];
    bVar5 = param_1[3];
    bVar11 = param_1[4];
    if (((bVar2 == 0x67) && (bVar3 == 0x65)) &&
       ((bVar4 == 0x6e && ((bVar5 == 0x65 && (bVar11 == 0x72)))))) {
LAB_107f4eb1c:
      unaff_x20 = (byte *)0x5;
    }
    else {
      if (((unaff_x21 == (byte *)0x5) ||
          ((((bVar2 != 99 || (bVar3 != 0x6f)) || (bVar4 != 0x6d)) ||
           ((bVar5 != 0x6d || (bVar11 != 0x75)))))) || (param_1[5] != 0x6e)) {
        if (((bVar2 == 0x61) && (bVar3 == 0x72)) && ((bVar4 == 0x73 && (bVar5 == 0x65)))) {
LAB_107f4ec24:
          if (bVar11 == 0x6e) goto LAB_107f4eb1c;
        }
        goto LAB_107f4ec64;
      }
LAB_107f4ebac:
      unaff_x20 = (byte *)0x6;
    }
  }
  else {
    if ((byte *)0x4 < pbVar23) {
      pcVar14 = *(char **)param_1;
      cVar6 = *pcVar14;
      if (cVar6 == 'g') {
        if ((pcVar14[1] == 'e') &&
           (((pcVar14[2] == 'n' && (pcVar14[3] == 'e')) && (pcVar14[4] == 'r'))))
        goto LAB_107f4eb1c;
      }
      else if ((pbVar23 == (byte *)0x5) || (cVar6 != 'c')) {
        if ((cVar6 == 'a') && (((pcVar14[1] == 'r' && (pcVar14[2] == 's')) && (pcVar14[3] == 'e'))))
        {
          bVar11 = pcVar14[4];
          goto LAB_107f4ec24;
        }
      }
      else if (((pcVar14[1] == 'o') && (pcVar14[2] == 'm')) &&
              ((pcVar14[3] == 'm' && ((pcVar14[4] == 'u' && (pcVar14[5] == 'n'))))))
      goto LAB_107f4ebac;
    }
LAB_107f4ec64:
    unaff_x20 = param_1;
    FUN_107f50a1c(param_1,1);
  }
  if (-1 < (char)unaff_x21) {
    pbVar23 = unaff_x21;
  }
  unaff_x21 = unaff_x20;
  if (unaff_x20 != pbVar23) {
    unaff_x21 = param_1;
    FUN_107f50a1c(param_1,unaff_x20 + 1);
  }
  func_0x00010002b838(&pppppppbStack_478,&UNK_10f4666c8);
  func_0x00010002b838(auStack_490,"");
  pbVar10 = param_1;
  FUN_107f50ae8(param_1,&pppppppbStack_478,auStack_490,0);
  if (((ulong)pbVar10 & 1) == 0) {
    func_0x00010002b838(auStack_4a8,&UNK_10f4666cc);
    func_0x00010002b838(auStack_4c0,"");
    pbVar10 = param_1;
    FUN_107f50ae8(param_1,auStack_4a8,auStack_4c0,0);
    if (((ulong)pbVar10 & 1) == 0) {
      func_0x00010002b838(auStack_4d8,&DAT_10f638984);
      func_0x00010002b838(auStack_4f0,"");
      FUN_107f50ae8(param_1,auStack_4d8,auStack_4f0,0);
      if (cStack_4d9 < '\0') {
        __ZdlPv(auStack_4f0[0]);
      }
      if (cStack_4c1 < '\0') {
        __ZdlPv(auStack_4d8[0]);
      }
    }
    if (cStack_4a9 < '\0') {
      __ZdlPv(auStack_4c0[0]);
    }
    if (cStack_491 < '\0') {
      __ZdlPv(auStack_4a8[0]);
    }
  }
  if (cStack_479 < '\0') {
    __ZdlPv(auStack_490[0]);
  }
  if ((char)bStack_461 < '\0') {
    __ZdlPv(pppppppbStack_478);
  }
  func_0x00010002b838(&pppppppbStack_478,&UNK_10f4666cf);
  func_0x00010002b838(auStack_490,&DAT_10f3b4066);
  unaff_x22 = (char *)param_1;
  FUN_107f50ae8(param_1,&pppppppbStack_478,auStack_490,0);
  if (cStack_479 < '\0') {
    __ZdlPv(auStack_490[0]);
  }
  if ((char)bStack_461 < '\0') {
    __ZdlPv(pppppppbStack_478);
  }
  if (((ulong)unaff_x22 & 1) == 0) {
    func_0x00010002b838(&pppppppbStack_478,&UNK_10f4666d4);
    pbVar10 = param_1;
    FUN_107f50c84(param_1,&pppppppbStack_478);
    if (((ulong)pbVar10 & 1) == 0) {
      func_0x00010002b838(auStack_490,&UNK_10f4666d8);
      unaff_x22 = (char *)param_1;
      FUN_107f50c84(param_1,auStack_490);
      if (cStack_479 < '\0') {
        __ZdlPv(auStack_490[0]);
      }
    }
    else {
      unaff_x22 = (char *)0x1;
    }
    if ((char)bStack_461 < '\0') {
      __ZdlPv(pppppppbStack_478);
    }
    pbVar10 = param_1;
    if ((int)unaff_x22 != 0) {
      bVar11 = param_1[0x17];
      if ((long)(char)bVar11 < 0) {
        pbVar10 = *(byte **)param_1;
        uVar16 = *(ulong *)(param_1 + 8);
        pbVar23 = (byte *)(uVar16 - 1);
        *(byte **)(param_1 + 8) = pbVar23;
        if (4 < uVar16) goto LAB_107f4eee8;
      }
      else {
        pbVar23 = (byte *)((long)(char)bVar11 + -1);
        if (4 < bVar11) {
          param_1[0x17] = (byte)pbVar23;
LAB_107f4eee8:
          pbVar10[(long)pbVar23] = 0;
          if ((long)(char)param_1[0x17] < 0) {
            pbVar10 = *(byte **)param_1;
            pbVar23 = *(byte **)(param_1 + 8);
            goto LAB_107f4ef98;
          }
          pbVar23 = (byte *)((long)(char)param_1[0x17] + -1);
        }
        param_1[0x17] = (byte)pbVar23 & 0x7f;
        pbVar10 = param_1;
      }
LAB_107f4ef9c:
      pbVar10[(long)pbVar23] = 0;
      goto LAB_107f4efa0;
    }
    func_0x00010002b838(&pppppppbStack_478,"s");
    pbVar23 = param_1;
    FUN_107f50c84(param_1,&pppppppbStack_478);
    if ((int)pbVar23 == 0) {
      unaff_x22 = (char *)0x0;
    }
    else {
      func_0x00010002b838(auStack_490,&DAT_10f4666dc);
      pbVar23 = param_1;
      FUN_107f50c84(param_1,auStack_490);
      if (((ulong)pbVar23 & 1) == 0) {
        func_0x00010002b838(auStack_4a8,&DAT_10f3b4066);
        pbVar23 = param_1;
        FUN_107f50c84(param_1,auStack_4a8);
        unaff_x22 = (char *)(ulong)((uint)pbVar23 ^ 1);
        if (cStack_491 < '\0') {
          __ZdlPv(auStack_4a8[0]);
        }
      }
      else {
        unaff_x22 = (char *)0x0;
      }
      if (cStack_479 < '\0') {
        __ZdlPv(auStack_490[0]);
      }
    }
    if ((char)bStack_461 < '\0') {
      __ZdlPv(pppppppbStack_478);
    }
    if ((int)unaff_x22 == 0) goto LAB_107f4efa0;
    bVar11 = param_1[0x17];
    uVar16 = (ulong)(uint)bVar11;
    if ((char)bVar11 < '\0') {
      unaff_x22 = *(char **)(param_1 + 8);
      if ((byte *)0x1 < unaff_x22 && (byte *)(unaff_x22 + -2) != (byte *)0x0) {
        FUN_107f50cfc(param_1,unaff_x22 + -2);
        if (((ulong)pbVar10 & 1) == 0) goto LAB_107f4efa0;
        pbVar10 = *(byte **)param_1;
        pbVar23 = (byte *)unaff_x22;
LAB_107f4ef98:
        pbVar23 = pbVar23 + -1;
        *(byte **)(param_1 + 8) = pbVar23;
        goto LAB_107f4ef9c;
      }
      goto LAB_107f4f050;
    }
    if (2 < bVar11) {
      unaff_x22 = (char *)(ulong)bVar11;
      pbVar23 = param_1;
      FUN_107f50cfc(param_1,unaff_x22 + -2);
      if (((ulong)pbVar23 & 1) != 0) {
        pbVar23 = (byte *)(unaff_x22 + -1);
        param_1[0x17] = (byte)pbVar23;
        goto LAB_107f4ef9c;
      }
      goto LAB_107f4efa0;
    }
LAB_107f4efac:
    if ((int)uVar16 == 6) {
      if (((*(int *)param_1 == 0x696e6e69 && *(short *)(param_1 + 4) == 0x676e) ||
          (*(int *)param_1 == 0x6974756f && *(short *)(param_1 + 4) == 0x676e)) ||
         (*(int *)param_1 == 0x65637865 && *(short *)(param_1 + 4) == 0x6465)) {
LAB_107f4f180:
        pbVar10 = param_1 + uVar16;
LAB_107f4f37c:
        do {
          if (*param_1 == 0x59) {
            *param_1 = 0x79;
          }
          unaff_x19 = param_1 + 1;
          param_1 = unaff_x19;
          if (unaff_x19 == pbVar10) goto LAB_107f4e808;
        } while( true );
      }
    }
    else if ((int)uVar16 == 7) {
      if ((((*(int *)param_1 == 0x6e6e6163 && *(int *)(param_1 + 3) == 0x676e696e) ||
           (*(int *)param_1 == 0x72726568 && *(int *)(param_1 + 3) == 0x676e6972)) ||
          (*(int *)param_1 == 0x72726165 && *(int *)(param_1 + 3) == 0x676e6972)) ||
         (*(int *)param_1 == 0x636f7270 && *(int *)(param_1 + 3) == 0x64656563)) goto LAB_107f4f180;
      bVar9 = false;
      uVar16 = 7;
      pbVar10 = param_1;
LAB_107f4f0e8:
      if (*(int *)pbVar10 == 0x63637573 && *(int *)(pbVar10 + 3) == 0x64656563) {
        uVar22 = *(ulong *)(param_1 + 8);
        unaff_x19 = *(byte **)param_1;
        if (!bVar9) {
          uVar22 = uVar16;
          unaff_x19 = param_1;
        }
        goto LAB_107f4f370;
      }
    }
  }
  else {
LAB_107f4efa0:
    uVar16 = (ulong)param_1[0x17];
    if (-1 < (char)param_1[0x17]) goto LAB_107f4efac;
    unaff_x22 = *(char **)(param_1 + 8);
LAB_107f4f050:
    if ((byte *)unaff_x22 == (byte *)0x6) {
      piVar15 = *(int **)param_1;
      if (((*piVar15 != 0x696e6e69 || (short)piVar15[1] != 0x676e) &&
          (*piVar15 != 0x6974756f || (short)piVar15[1] != 0x676e)) &&
         (*piVar15 != 0x65637865 || (short)piVar15[1] != 0x6465)) goto LAB_107f4f1e8;
LAB_107f4f36c:
      uVar22 = *(ulong *)(param_1 + 8);
      unaff_x19 = *(byte **)param_1;
LAB_107f4f370:
      if (uVar22 == 0) goto LAB_107f4e808;
      pbVar10 = unaff_x19 + uVar22;
      param_1 = unaff_x19;
      goto LAB_107f4f37c;
    }
    if ((byte *)unaff_x22 == (byte *)0x7) {
      pbVar10 = *(byte **)param_1;
      if (((*(int *)pbVar10 == 0x6e6e6163 && *(int *)(pbVar10 + 3) == 0x676e696e) ||
          (*(int *)pbVar10 == 0x72726568 && *(int *)(pbVar10 + 3) == 0x676e6972)) ||
         ((*(int *)pbVar10 == 0x72726165 && *(int *)(pbVar10 + 3) == 0x676e6972 ||
          (*(int *)pbVar10 == 0x636f7270 && *(int *)(pbVar10 + 3) == 0x64656563))))
      goto LAB_107f4f36c;
      bVar9 = true;
      goto LAB_107f4f0e8;
    }
  }
LAB_107f4f1e8:
  func_0x00010002b838(&pppppppbStack_478,&UNK_10f4666ee);
  pbVar10 = param_1;
  FUN_107f50c84(param_1,&pppppppbStack_478);
  if (((ulong)pbVar10 & 1) == 0) {
    func_0x00010002b838(auStack_490,&UNK_10f4666f4);
    pbVar10 = param_1;
    FUN_107f50c84(param_1,auStack_490);
    iVar26 = (int)pbVar10;
    if (cStack_479 < '\0') {
      __ZdlPv(auStack_490[0]);
    }
  }
  else {
    iVar26 = 1;
  }
  if ((char)bStack_461 < '\0') {
    __ZdlPv(pppppppbStack_478);
  }
  if (iVar26 != 0) {
    func_0x00010002b838(&pppppppbStack_478,&UNK_10f4666ee);
    func_0x00010002b838(auStack_490,&UNK_10f4666f8);
    pbVar10 = param_1;
    FUN_107f50ae8(param_1,&pppppppbStack_478,auStack_490,unaff_x20);
    if (((ulong)pbVar10 & 1) == 0) {
      func_0x00010002b838(auStack_4a8,&UNK_10f4666f4);
      func_0x00010002b838(auStack_4c0,&UNK_10f4666f8);
      FUN_107f50ae8(param_1,auStack_4a8,auStack_4c0,unaff_x20);
      if (cStack_4a9 < '\0') {
        __ZdlPv(auStack_4c0[0]);
      }
      if (cStack_491 < '\0') {
        __ZdlPv(auStack_4a8[0]);
      }
    }
    if (cStack_479 < '\0') {
      __ZdlPv(auStack_490[0]);
    }
    if ((char)bStack_461 < '\0') {
      __ZdlPv(pppppppbStack_478);
    }
    goto LAB_107f4f818;
  }
  uVar16 = *(ulong *)(param_1 + 8);
  if (-1 < (char)param_1[0x17]) {
    uVar16 = (ulong)param_1[0x17];
  }
  pbVar10 = param_1;
  FUN_107f50cfc(param_1,uVar16 - 2);
  if ((int)pbVar10 == 0) {
LAB_107f4f39c:
    pbVar23 = param_1;
    FUN_107f50cfc(param_1,uVar16 - 4);
    if ((int)pbVar23 == 0) {
LAB_107f4f3f0:
      pbVar25 = param_1;
      FUN_107f50cfc(param_1,uVar16 - 3);
      if ((int)pbVar25 == 0) {
        pbVar28 = param_1;
        FUN_107f50cfc(param_1,uVar16 - 5);
        if ((int)pbVar28 == 0) {
          pbVar28 = (byte *)0x0;
        }
        else {
LAB_107f4f490:
          func_0x00010002b838(&pppppppbStack_478,&UNK_10f466707);
          func_0x00010002b838(auStack_490,"");
          pbVar28 = param_1;
          FUN_107f50ae8(param_1,&pppppppbStack_478,auStack_490,0);
          if (cStack_479 < '\0') {
            __ZdlPv(auStack_490[0]);
          }
          if ((char)bStack_461 < '\0') {
            __ZdlPv(pppppppbStack_478);
          }
          if ((int)pbVar25 != 0) goto LAB_107f4f500;
        }
        if ((int)pbVar23 == 0) goto LAB_107f4f4f0;
        goto LAB_107f4f524;
      }
      func_0x00010002b838(auStack_5b0,&UNK_10f466703);
      func_0x00010002b838(auStack_5c8,"");
      pbVar28 = param_1;
      FUN_107f50ae8(param_1,auStack_5b0,auStack_5c8,0);
      if (((ulong)pbVar28 & 1) == 0) {
        pbVar28 = param_1;
        FUN_107f50cfc(param_1,uVar16 - 5);
        if (((ulong)pbVar28 & 1) != 0) goto LAB_107f4f490;
        pbVar28 = (byte *)0x0;
      }
      else {
        pbVar28 = (byte *)0x1;
      }
LAB_107f4f500:
      if (cStack_5b1 < '\0') {
        __ZdlPv(auStack_5c8[0]);
      }
      if (cStack_599 < '\0') {
        __ZdlPv(auStack_5b0[0]);
      }
      if (((ulong)pbVar23 & 1) != 0) goto LAB_107f4f524;
LAB_107f4f4f0:
      iVar26 = (int)pbVar28;
      if ((int)pbVar10 != 0) goto LAB_107f4f548;
    }
    else {
      func_0x00010002b838(auStack_580,&UNK_10f4666fe);
      func_0x00010002b838(auStack_598,"");
      pbVar25 = param_1;
      FUN_107f50ae8(param_1,auStack_580,auStack_598,0);
      if (((ulong)pbVar25 & 1) == 0) goto LAB_107f4f3f0;
      pbVar28 = (byte *)0x1;
LAB_107f4f524:
      iVar26 = (int)pbVar28;
      if (cStack_581 < '\0') {
        __ZdlPv(auStack_598[0]);
      }
      if (cStack_569 < '\0') {
        __ZdlPv(auStack_580[0]);
      }
      if (((ulong)pbVar10 & 1) != 0) goto LAB_107f4f548;
    }
    if (iVar26 == 0) goto LAB_107f4f818;
  }
  else {
    func_0x00010002b838(auStack_550,&UNK_10f4666fb);
    func_0x00010002b838(auStack_568,"");
    pbVar23 = param_1;
    FUN_107f50ae8(param_1,auStack_550,auStack_568,0);
    if (((ulong)pbVar23 & 1) == 0) goto LAB_107f4f39c;
    pbVar28 = (byte *)0x1;
LAB_107f4f548:
    if (cStack_551 < '\0') {
      __ZdlPv(auStack_568[0]);
    }
    if (cStack_539 < '\0') {
      __ZdlPv(auStack_550[0]);
    }
    if (((ulong)pbVar28 & 1) == 0) goto LAB_107f4f818;
  }
  func_0x00010002b838(&pppppppbStack_478,&DAT_10f37dda3);
  pbVar10 = param_1;
  FUN_107f50c84(param_1,&pppppppbStack_478);
  if (((ulong)pbVar10 & 1) == 0) {
    func_0x00010002b838(auStack_490,&UNK_10f46670d);
    pbVar10 = param_1;
    FUN_107f50c84(param_1,auStack_490);
    if (((ulong)pbVar10 & 1) == 0) {
      func_0x00010002b838(auStack_4a8,&UNK_10f466710);
      pbVar10 = param_1;
      FUN_107f50c84(param_1,auStack_4a8);
      iVar26 = (int)pbVar10;
      if (cStack_491 < '\0') {
        __ZdlPv(auStack_4a8[0]);
      }
    }
    else {
      iVar26 = 1;
    }
    if (cStack_479 < '\0') {
      __ZdlPv(auStack_490[0]);
    }
  }
  else {
    iVar26 = 1;
  }
  if ((char)bStack_461 < '\0') {
    __ZdlPv(pppppppbStack_478);
  }
  if (iVar26 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_1,0x65);
    goto LAB_107f4f818;
  }
  bVar11 = param_1[0x17];
  pbVar10 = (byte *)(long)(char)bVar11;
  if ((long)pbVar10 < 0) {
    pbVar23 = *(byte **)(param_1 + 8);
    if ((byte *)0x1 < *(byte **)(param_1 + 8)) goto LAB_107f4f644;
  }
  else {
    pbVar23 = pbVar10;
    if (1 < bVar11) {
LAB_107f4f644:
      pbVar28 = *(byte **)param_1;
      pbVar25 = *(byte **)(param_1 + 8);
      pbVar8 = pbVar28;
      if (-1 < (char)bVar11) {
        pbVar25 = pbVar10;
        pbVar8 = param_1;
      }
      if ((((uint)(pbVar8 + (long)pbVar23)[-1] == (uint)(pbVar8 + (long)pbVar25)[-2]) &&
          (uVar19 = (pbVar8 + (long)pbVar23)[-1] - 0x62, uVar19 < 0x13)) &&
         ((1 << (ulong)(uVar19 & 0x1f) & 0x55835U) != 0)) {
        if ((char)bVar11 < '\0') {
          pbVar10 = (byte *)(*(long *)(param_1 + 8) + -1);
          *(byte **)(param_1 + 8) = pbVar10;
        }
        else {
          pbVar10 = pbVar10 + -1;
          param_1[0x17] = (byte)pbVar10;
          pbVar28 = param_1;
        }
        pbVar28[(long)pbVar10] = 0;
        goto LAB_107f4f818;
      }
    }
  }
  pbVar23 = *(byte **)(param_1 + 8);
  if (-1 < (char)bVar11) {
    pbVar23 = pbVar10;
  }
  if (unaff_x20 != pbVar23) goto LAB_107f4f818;
  if (unaff_x20 < (byte *)0x3) {
    if (unaff_x20 != (byte *)0x2) goto LAB_107f4f818;
    pbVar10 = *(byte **)param_1;
    if (-1 < (char)bVar11) {
      pbVar10 = param_1;
    }
    uVar19 = *pbVar10 - 0x61 >> 1;
    if ((0xc < (uVar19 & 0x7f | (*pbVar10 - 0x61) * 0x80 & 0xff)) ||
       ((1 << (ulong)(uVar19 & 0x1f) & 0x1495U) == 0)) goto LAB_107f4f818;
    uVar19 = pbVar10[1] - 0x61 >> 1;
    if ((uVar19 & 0x7f | (pbVar10[1] - 0x61) * 0x80 & 0xff) < 0xd) {
      uVar19 = 1 << (ulong)(uVar19 & 0x1f) & 0x1495;
      goto joined_r0x000107f4f7f4;
    }
  }
  else {
    pbVar10 = *(byte **)param_1;
    if (-1 < (char)bVar11) {
      pbVar10 = param_1;
    }
    uVar19 = (pbVar10 + (long)unaff_x20)[-3] - 0x61;
    uVar21 = uVar19 >> 1;
    if (((((uVar21 & 0x7f | uVar19 * 0x80 & 0xff) < 0xd) &&
         ((1 << (ulong)(uVar21 & 0x1f) & 0x1495U) != 0)) ||
        (uVar19 = (pbVar10 + (long)unaff_x20)[-2] - 0x61, uVar21 = uVar19 >> 1,
        0xc < (uVar21 & 0x7f | uVar19 * 0x80 & 0xff))) ||
       ((1 << (ulong)(uVar21 & 0x1f) & 0x1495U) == 0)) goto LAB_107f4f818;
    uVar19 = (pbVar10 + (long)unaff_x20)[-1] - 0x61;
    uVar21 = uVar19 >> 1;
    if (((uVar21 & 0x7f | uVar19 * 0x80 & 0xff) < 0xd) &&
       ((1 << (ulong)(uVar21 & 0x1f) & 0x1495U) != 0)) goto LAB_107f4f818;
    uVar19 = (pbVar10 + (long)unaff_x20)[-1] - 0x59;
    if (uVar19 < 0x20) {
      uVar19 = 1 << (ulong)(uVar19 & 0x1f) & 0xc0000001;
joined_r0x000107f4f7f4:
      if (uVar19 != 0) goto LAB_107f4f818;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_1,0x65);
LAB_107f4f818:
  bVar11 = param_1[0x17];
  uVar16 = *(ulong *)(param_1 + 8);
  if (-1 < (char)bVar11) {
    uVar16 = (ulong)bVar11;
  }
  if (2 < uVar16) {
    pbVar10 = *(byte **)param_1;
    if (-1 < (char)bVar11) {
      pbVar10 = param_1;
    }
    if (((pbVar10[uVar16 - 1] | 0x20) == 0x79) &&
       ((uVar19 = pbVar10[uVar16 - 2] - 0x61 >> 1,
        10 < (uVar19 & 0x7f | (pbVar10[uVar16 - 2] - 0x61) * 0x80 & 0xff) ||
        ((1 << (ulong)(uVar19 & 0x1f) & 0x495U) == 0)))) {
      pbVar10[uVar16 - 1] = 0x69;
    }
  }
  unaff_x22 = (char *)0x113728580;
  if ((bRam0000000113728568 & 1) == 0) goto LAB_107f5012c;
  do {
    lVar17 = *(long *)(unaff_x22 + 8);
    for (lVar27 = *(long *)unaff_x22; lVar27 != lVar17; lVar27 = lVar27 + 0x30) {
      pbVar10 = param_1;
      FUN_107f50ae8(param_1,lVar27,lVar27 + 0x18,unaff_x20);
      if (((ulong)pbVar10 & 1) != 0) goto LAB_107f4fbe0;
    }
    func_0x00010002b838(&pppppppbStack_478,&UNK_10f466713);
    func_0x00010002b838(auStack_490,&DAT_10f3dd908);
    pbVar10 = param_1;
    FUN_107f50ae8(param_1,&pppppppbStack_478,auStack_490,unaff_x20 + -1);
    if (cStack_479 < '\0') {
      __ZdlPv(auStack_490[0]);
    }
    if ((char)bStack_461 < '\0') {
      __ZdlPv(pppppppbStack_478);
    }
    if (((ulong)pbVar10 & 1) == 0) {
      func_0x00010002b838(&pppppppbStack_478,&UNK_10f466718);
      pbVar10 = param_1;
      FUN_107f50c84(param_1,&pppppppbStack_478);
      if ((int)pbVar10 == 0) {
        uVar19 = 0;
      }
      else {
        func_0x00010002b838(auStack_490,&UNK_10f4665f9);
        pbVar10 = param_1;
        FUN_107f50c84(param_1,auStack_490);
        if (((ulong)pbVar10 & 1) == 0) {
          func_0x00010002b838(auStack_4a8,&UNK_10f466603);
          pbVar10 = param_1;
          FUN_107f50c84(param_1,auStack_4a8);
          if (((ulong)pbVar10 & 1) == 0) {
            func_0x00010002b838(auStack_4c0,&UNK_10f466632);
            pbVar10 = param_1;
            FUN_107f50c84(param_1,auStack_4c0);
            if (((ulong)pbVar10 & 1) == 0) {
              func_0x00010002b838(auStack_4d8,&UNK_10f466638);
              pbVar10 = param_1;
              FUN_107f50c84(param_1,auStack_4d8);
              if (((ulong)pbVar10 & 1) == 0) {
                func_0x00010002b838(auStack_4f0,&UNK_10f466649);
                pbVar10 = param_1;
                FUN_107f50c84(param_1,auStack_4f0);
                if (((ulong)pbVar10 & 1) == 0) {
                  func_0x00010002b838(auStack_508,&UNK_10f466674);
                  pbVar10 = param_1;
                  FUN_107f50c84(param_1,auStack_508);
                  if (((ulong)pbVar10 & 1) == 0) {
                    func_0x00010002b838(auStack_520,&UNK_10f466678);
                    pbVar10 = param_1;
                    FUN_107f50c84(param_1,auStack_520);
                    if (((ulong)pbVar10 & 1) == 0) {
                      func_0x00010002b838(auStack_538,&UNK_10f46667e);
                      pbVar10 = param_1;
                      FUN_107f50c84(param_1,auStack_538);
                      uVar19 = (uint)pbVar10 ^ 1;
                      if (cStack_521 < '\0') {
                        __ZdlPv(auStack_538[0]);
                      }
                    }
                    else {
                      uVar19 = 0;
                    }
                    if (cStack_509 < '\0') {
                      __ZdlPv(auStack_520[0]);
                    }
                  }
                  else {
                    uVar19 = 0;
                  }
                  if (cStack_4f1 < '\0') {
                    __ZdlPv(auStack_508[0]);
                  }
                }
                else {
                  uVar19 = 0;
                }
                if (cStack_4d9 < '\0') {
                  __ZdlPv(auStack_4f0[0]);
                }
              }
              else {
                uVar19 = 0;
              }
              if (cStack_4c1 < '\0') {
                __ZdlPv(auStack_4d8[0]);
              }
            }
            else {
              uVar19 = 0;
            }
            if (cStack_4a9 < '\0') {
              __ZdlPv(auStack_4c0[0]);
            }
          }
          else {
            uVar19 = 0;
          }
          if (cStack_491 < '\0') {
            __ZdlPv(auStack_4a8[0]);
          }
        }
        else {
          uVar19 = 0;
        }
        if (cStack_479 < '\0') {
          __ZdlPv(auStack_490[0]);
        }
      }
      if ((char)bStack_461 < '\0') {
        __ZdlPv(pppppppbStack_478);
      }
      if (uVar19 != 0) {
        bVar11 = param_1[0x17];
        uVar16 = (ulong)(char)bVar11;
        if ((long)uVar16 < 0) {
          uVar22 = *(ulong *)(param_1 + 8);
          if (3 < *(ulong *)(param_1 + 8)) goto LAB_107f4fb50;
        }
        else {
          uVar22 = uVar16;
          if (3 < bVar11) {
LAB_107f4fb50:
            if (unaff_x20 <= (byte *)(uVar22 - 2)) {
              pbVar23 = *(byte **)param_1;
              pbVar10 = pbVar23;
              if (-1 < (char)bVar11) {
                pbVar10 = param_1;
              }
              if ((pbVar10[uVar22 - 3] - 99 < 0x12) &&
                 ((1 << (ulong)(pbVar10[uVar22 - 3] - 99 & 0x1f) & 0x28d37U) != 0)) {
                if ((char)bVar11 < '\0') {
                  lVar27 = *(long *)(param_1 + 8) + -1;
                  *(long *)(param_1 + 8) = lVar27;
                }
                else {
                  lVar27 = uVar16 - 1;
                  param_1[0x17] = (byte)lVar27;
                  pbVar23 = param_1;
                }
                pbVar23[lVar27] = 0;
                if ((long)(char)param_1[0x17] < 0) {
                  pbVar10 = *(byte **)param_1;
                  lVar27 = *(long *)(param_1 + 8) + -1;
                  *(long *)(param_1 + 8) = lVar27;
                }
                else {
                  lVar27 = (long)(char)param_1[0x17] + -1;
                  param_1[0x17] = (byte)lVar27 & 0x7f;
                  pbVar10 = param_1;
                }
                pbVar10[lVar27] = 0;
              }
            }
          }
        }
      }
    }
LAB_107f4fbe0:
    lVar17 = lRam0000000113728598;
    lVar27 = lRam00000001137285a0;
    if ((bRam0000000113728570 & 1) == 0) {
      iVar26 = 0x13728570;
      ___cxa_guard_acquire();
      lVar17 = lRam0000000113728598;
      lVar27 = lRam00000001137285a0;
      if (iVar26 != 0) {
        FUN_107f50f00(&pppppppbStack_478,&UNK_10f4665cd,&UNK_10f4665d5);
        FUN_107f50f50(auStack_448,&UNK_10f4665d9,&UNK_10f4665e0);
        FUN_107f51090(auStack_418,&UNK_10f46668a,&DAT_10f46662f);
        FUN_107f51090(auStack_3e8,&UNK_10f466690,&UNK_10f466696);
        FUN_107f51090(auStack_3b8,&UNK_10f466699,&UNK_10f466696);
        FUN_107f510e0(auStack_388,&UNK_10f46669f,&UNK_10f466696);
        FUN_107f511e0(auStack_358);
        FUN_107f51238(auStack_328);
        lRam0000000113728598 = 0;
        lRam00000001137285a0 = 0;
        uRam00000001137285a8 = 0;
        func_0x0001006075ec(0x113728598,&pppppppbStack_478,auStack_2f8,8);
        lVar27 = 0x150;
        do {
          func_0x000104ad962c((long)&pppppppbStack_478 + lVar27);
          lVar27 = lVar27 + -0x30;
        } while (lVar27 != -0x30);
        ___cxa_guard_release(0x113728570);
        lVar17 = lRam0000000113728598;
        lVar27 = lRam00000001137285a0;
      }
    }
    for (; lVar17 != lVar27; lVar17 = lVar17 + 0x30) {
      pbVar10 = param_1;
      FUN_107f50ae8(param_1,lVar17,lVar17 + 0x18,unaff_x20);
      if (((ulong)pbVar10 & 1) != 0) goto LAB_107f4fc78;
    }
    func_0x00010002b838(&pppppppbStack_478,&UNK_10f46671b);
    func_0x00010002b838(auStack_490,"");
    FUN_107f50ae8(param_1,&pppppppbStack_478,auStack_490,unaff_x21);
    if (cStack_479 < '\0') {
      __ZdlPv(auStack_490[0]);
    }
    if ((char)bStack_461 < '\0') {
      __ZdlPv(pppppppbStack_478);
    }
LAB_107f4fc78:
    if ((bRam0000000113728578 & 1) == 0) {
      iVar26 = 0x13728578;
      ___cxa_guard_acquire();
      if (iVar26 != 0) {
        func_0x00010002b838(&pppppppbStack_478,&DAT_10f46662f);
        func_0x00010002b838(auStack_460,&UNK_10f4665f4);
        func_0x00010002b838(auStack_448,&UNK_10f4665ea);
        func_0x00010002b838(auStack_430,&UNK_10f4666a9);
        func_0x00010002b838(auStack_418,&UNK_10f466696);
        func_0x00010002b838(auStack_400,&UNK_10f4665fe);
        func_0x00010002b838(auStack_3e8,&UNK_10f4666ac);
        func_0x00010002b838(auStack_3d0,&UNK_10f4666b1);
        func_0x00010002b838(auStack_3b8,&UNK_10f4666b5);
        func_0x00010002b838(auStack_3a0,&UNK_10f4666bb);
        func_0x00010002b838(auStack_388,&UNK_10f4666c0);
        func_0x00010002b838(auStack_370,&UNK_10f4665d5);
        func_0x00010002b838(auStack_358,&UNK_10f4666c4);
        func_0x00010002b838(auStack_340,&UNK_10f46664f);
        func_0x00010002b838(auStack_328,&UNK_10f466663);
        func_0x00010002b838(auStack_310,&UNK_10f466612);
        lRam00000001137285b0 = 0;
        lRam00000001137285b8 = 0;
        uRam00000001137285c0 = 0;
        func_0x00010007e1e8(0x1137285b0,&pppppppbStack_478,auStack_2f8,0x10);
        lVar27 = 0x180;
        do {
          lVar27 = lVar27 + -0x18;
        } while (lVar27 != 0);
        ___cxa_guard_release(0x113728578);
      }
    }
    lVar27 = lRam00000001137285b8;
    if (lRam00000001137285b0 != lRam00000001137285b8) {
      unaff_x22 = "";
      lVar17 = lRam00000001137285b0;
      do {
        func_0x00010002b838(&pppppppbStack_478,"");
        pbVar10 = param_1;
        FUN_107f50ae8(param_1,lVar17,&pppppppbStack_478,unaff_x21);
        if ((char)bStack_461 < '\0') {
          __ZdlPv(pppppppbStack_478);
        }
        if (((ulong)pbVar10 & 1) != 0) goto LAB_107f4fe60;
        lVar17 = lVar17 + 0x18;
      } while (lVar17 != lVar27);
    }
    func_0x00010002b838(&pppppppbStack_478,&UNK_10f4666b5);
    pbVar10 = param_1;
    FUN_107f50c84(param_1,&pppppppbStack_478);
    if (((ulong)pbVar10 & 1) == 0) {
      func_0x00010002b838(auStack_490,&UNK_10f4666bb);
      pbVar10 = param_1;
      FUN_107f50c84(param_1,auStack_490);
      uVar19 = (uint)pbVar10 ^ 1;
      if (cStack_479 < '\0') {
        __ZdlPv(auStack_490[0]);
      }
    }
    else {
      uVar19 = 0;
    }
    if ((char)bStack_461 < '\0') {
      __ZdlPv(pppppppbStack_478);
    }
    if (uVar19 == 0) {
LAB_107f4fdb0:
      func_0x00010002b838(&pppppppbStack_478,&UNK_10f466721);
      func_0x00010002b838(auStack_490,"s");
      unaff_x22 = (char *)(unaff_x21 + -1);
      pbVar10 = param_1;
      FUN_107f50ae8(param_1,&pppppppbStack_478,auStack_490,unaff_x22);
      if (((ulong)pbVar10 & 1) == 0) {
        func_0x00010002b838(auStack_4a8,&UNK_10f4665e0);
        func_0x00010002b838(auStack_4c0,"t");
        FUN_107f50ae8(param_1,auStack_4a8,auStack_4c0,unaff_x22);
        if (cStack_4a9 < '\0') {
          __ZdlPv(auStack_4c0[0]);
        }
        if (cStack_491 < '\0') {
          __ZdlPv(auStack_4a8[0]);
        }
      }
      if (cStack_479 < '\0') {
        __ZdlPv(auStack_490[0]);
      }
      if ((char)bStack_461 < '\0') {
        __ZdlPv(pppppppbStack_478);
      }
    }
    else {
      func_0x00010002b838(&pppppppbStack_478,&UNK_10f466609);
      func_0x00010002b838(auStack_490,"");
      unaff_x22 = (char *)param_1;
      FUN_107f50ae8(param_1,&pppppppbStack_478,auStack_490,unaff_x21);
      if (cStack_479 < '\0') {
        __ZdlPv(auStack_490[0]);
      }
      if ((char)bStack_461 < '\0') {
        __ZdlPv(pppppppbStack_478);
      }
      if (((ulong)unaff_x22 & 1) == 0) goto LAB_107f4fdb0;
    }
LAB_107f4fe60:
    bVar11 = param_1[0x17];
    lVar20 = (long)(char)bVar11;
    lVar17 = *(long *)(param_1 + 8);
    lVar27 = lVar17;
    if (-1 < (char)bVar11) {
      lVar27 = lVar20;
    }
    pbVar10 = (byte *)(lVar27 + -1);
    if (lVar20 < 0) {
      pbVar23 = *(byte **)param_1;
      lVar27 = lVar17;
      if (pbVar23[(long)pbVar10] != 0x65) goto LAB_107f4ffa8;
      if (pbVar10 < unaff_x21) goto LAB_107f4fec0;
      lVar20 = lVar17 + -1;
      *(long *)(param_1 + 8) = lVar20;
LAB_107f5000c:
      pbVar23[lVar20] = 0;
      goto LAB_107f500e8;
    }
    lVar27 = lVar20;
    if (param_1[(long)pbVar10] == 0x65) {
      if (unaff_x21 <= pbVar10) {
        lVar20 = lVar20 + -1;
        param_1[0x17] = (byte)lVar20 & 0x7f;
        pbVar23 = param_1;
        goto LAB_107f5000c;
      }
LAB_107f4fec0:
      if (pbVar10 < unaff_x20) goto LAB_107f500e8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (&pppppppbStack_478,param_1,0,pbVar10,auStack_490);
      uVar16 = uStack_470;
      if (-1 < (char)bStack_461) {
        uVar16 = (ulong)bStack_461;
      }
      if (uVar16 < 3) {
        if (uVar16 != 2) goto LAB_107f500a0;
        pppppppbVar1 = pppppppbStack_478;
        if (-1 < (char)bStack_461) {
          pppppppbVar1 = (byte *******)&pppppppbStack_478;
        }
        uVar19 = *(byte *)pppppppbVar1 - 0x61 >> 1;
        unaff_x20 = (byte *)0x1;
        if ((uVar19 & 0x7f | (*(byte *)pppppppbVar1 - 0x61) * 0x80 & 0xff) < 0xd &&
            (1 << (ulong)(uVar19 & 0x1f) & 0x1495U) != 0) {
          pppppppbVar1 = pppppppbStack_478;
          if (-1 < (char)bStack_461) {
            pppppppbVar1 = (byte *******)&pppppppbStack_478;
          }
          uVar21 = *(byte *)((long)pppppppbVar1 + 1) - 0x61;
          uVar19 = uVar21 >> 1 & 0x7f;
          if ((uVar19 | uVar21 * 0x80 & 0xff) < 0xd) {
            uVar21 = 0x1495;
            goto LAB_107f50098;
          }
LAB_107f500a8:
          unaff_x20 = (byte *)0x0;
        }
      }
      else {
        pppppppbVar1 = pppppppbStack_478;
        if (-1 < (char)bStack_461) {
          pppppppbVar1 = (byte *******)&pppppppbStack_478;
        }
        uVar19 = *(byte *)((long)pppppppbVar1 + (uVar16 - 3)) - 0x61;
        uVar21 = uVar19 >> 1;
        if (((uVar21 & 0x7f | uVar19 * 0x80 & 0xff) < 0xd) &&
           ((0x1495U >> (ulong)(uVar21 & 0x1f) & 1) != 0)) {
LAB_107f500a0:
          unaff_x20 = (byte *)0x1;
        }
        else {
          uVar19 = *(byte *)((long)pppppppbVar1 + (uVar16 - 2)) - 0x61;
          uVar21 = uVar19 >> 1;
          unaff_x20 = (byte *)0x1;
          if ((uVar21 & 0x7f | uVar19 * 0x80 & 0xff) < 0xd &&
              (1 << (ulong)(uVar21 & 0x1f) & 0x1495U) != 0) {
            uVar19 = (uint)*(byte *)((long)pppppppbVar1 + (uVar16 - 1));
            uVar21 = uVar19 - 0x61;
            uVar7 = uVar21 >> 1;
            if ((0xc < (uVar7 & 0x7f | uVar21 * 0x80 & 0xff)) ||
               ((0x1495U >> (ulong)(uVar7 & 0x1f) & 1) == 0)) {
              uVar19 = uVar19 - 0x59;
              if (0x1f < (uVar19 & 0xff)) goto LAB_107f500a8;
              uVar21 = 0xc0000001;
LAB_107f50098:
              unaff_x20 = (byte *)(ulong)(uVar21 >> (ulong)(uVar19 & 0x1f));
            }
          }
        }
      }
      if ((char)bStack_461 < '\0') {
        __ZdlPv(pppppppbStack_478);
      }
      if (((ulong)unaff_x20 & 1) == 0) goto LAB_107f500e8;
      lVar20 = (long)(char)param_1[0x17];
      if (lVar20 < 0) {
        pbVar10 = *(byte **)param_1;
        lVar17 = *(long *)(param_1 + 8);
LAB_107f500dc:
        lVar17 = lVar17 + -1;
        *(long *)(param_1 + 8) = lVar17;
      }
      else {
LAB_107f500c8:
        lVar17 = lVar20 + -1;
        param_1[0x17] = (byte)lVar17 & 0x7f;
        pbVar10 = param_1;
      }
      pbVar10[lVar17] = 0;
    }
    else {
LAB_107f4ffa8:
      if ((char)bVar11 < '\0') {
        lVar24 = lVar17;
        if (*(char *)(*(long *)param_1 + lVar27 + -1) == 'l' && unaff_x21 <= (byte *)(lVar17 + -1))
        goto LAB_107f4ffe8;
      }
      else {
        lVar24 = lVar20;
        if (param_1[lVar27 + -1] == 0x6c && unaff_x21 <= (byte *)(lVar20 + -1)) {
LAB_107f4ffe8:
          if ((char)bVar11 < '\0') {
            pbVar10 = *(byte **)param_1;
            if (pbVar10[lVar24 + -2] == 0x6c) goto LAB_107f500dc;
          }
          else if (param_1[lVar24 + -2] == 0x6c) goto LAB_107f500c8;
        }
      }
    }
LAB_107f500e8:
    uVar16 = *(ulong *)(param_1 + 8);
    pbVar10 = *(byte **)param_1;
    if (-1 < (char)param_1[0x17]) {
      uVar16 = (ulong)param_1[0x17];
      pbVar10 = param_1;
    }
    for (; unaff_x19 = param_1, uVar16 != 0; uVar16 = uVar16 - 1) {
      if (*pbVar10 == 0x59) {
        *pbVar10 = 0x79;
      }
      pbVar10 = pbVar10 + 1;
    }
LAB_107f4e808:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
    param_1 = unaff_x19;
LAB_107f5012c:
    iVar26 = 0x13728568;
    ___cxa_guard_acquire();
    if (iVar26 != 0) {
      FUN_107f50f00(&pppppppbStack_478,&UNK_10f4665cd,&UNK_10f4665d5);
      FUN_107f50f50(auStack_448,&UNK_10f4665d9,&UNK_10f4665e0);
      FUN_107f50fa0(auStack_418,&UNK_10f4665e5,&UNK_10f4665ea);
      FUN_107f50fa0(auStack_3e8,&UNK_10f4665ef,&UNK_10f4665f4);
      FUN_107f50fa0(auStack_3b8,&UNK_10f4665f9,&UNK_10f4665fe);
      FUN_107f50ff0(auStack_388,&UNK_10f466603,&UNK_10f466609);
      FUN_107f51040(auStack_358,&UNK_10f46660d,&UNK_10f466612);
      FUN_107f50f00(auStack_328,&UNK_10f466616,&UNK_10f466612);
      FUN_107f50ff0(auStack_2f8,&UNK_10f46661e,&UNK_10f4665d5);
      FUN_107f51040(auStack_2c8,&UNK_10f466624,&UNK_10f4665d5);
      FUN_107f51090(auStack_298,&UNK_10f466629,&DAT_10f46662f);
      FUN_107f51090(auStack_268,&UNK_10f466632,&DAT_10f46662f);
      FUN_107f510e0(auStack_238,&UNK_10f466638,&DAT_10f46662f);
      FUN_107f50f00(auStack_208,&UNK_10f46663d,&UNK_10f466645);
      FUN_107f50ff0(auStack_1d8,&UNK_10f466649,&UNK_10f46664f);
      FUN_107f50f00(auStack_1a8,&UNK_10f466653,&UNK_10f46664f);
      FUN_107f50f00(auStack_178,&UNK_10f46665b,&UNK_10f466663);
      FUN_107f50ff0(auStack_148,&UNK_10f466667,&UNK_10f466663);
      FUN_107f51130(auStack_118);
      FUN_107f51188(auStack_e8);
      FUN_107f50ff0(auStack_b8,&UNK_10f466678,&UNK_10f466645);
      FUN_107f50f50(auStack_88,&UNK_10f46667e,&UNK_10f466685);
      unaff_x22[0] = 0;
      unaff_x22[1] = 0;
      unaff_x22[2] = 0;
      unaff_x22[3] = 0;
      unaff_x22[4] = 0;
      unaff_x22[5] = 0;
      unaff_x22[6] = 0;
      unaff_x22[7] = 0;
      unaff_x22[8] = 0;
      unaff_x22[9] = 0;
      unaff_x22[10] = 0;
      unaff_x22[0xb] = 0;
      unaff_x22[0xc] = 0;
      unaff_x22[0xd] = 0;
      unaff_x22[0xe] = 0;
      unaff_x22[0xf] = 0;
      unaff_x22[0x10] = 0;
      unaff_x22[0x11] = 0;
      unaff_x22[0x12] = 0;
      unaff_x22[0x13] = 0;
      unaff_x22[0x14] = 0;
      unaff_x22[0x15] = 0;
      unaff_x22[0x16] = 0;
      unaff_x22[0x17] = 0;
      func_0x0001006075ec(unaff_x22,&pppppppbStack_478,&lStack_58,0x16);
      lVar27 = 0x3f0;
      do {
        func_0x000104ad962c((long)&pppppppbStack_478 + lVar27);
        lVar27 = lVar27 + -0x30;
      } while (lVar27 != -0x30);
      ___cxa_guard_release(0x113728568);
    }
  } while( true );
}



/* Entry: 107f50a1c; end: 107f50ae7;  */

ulong FUN_107f50a1c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  
  bVar3 = *(byte *)((long)param_1 + 0x17);
  if (param_2 != 0) {
    uVar1 = param_1[1];
    if (-1 < (char)bVar3) {
      uVar1 = (ulong)bVar3;
    }
    if (param_2 < uVar1) {
      plVar2 = (long *)*param_1;
      if (-1 < (char)bVar3) {
        plVar2 = param_1;
      }
      uVar5 = ~param_2;
      pbVar6 = (byte *)((long)plVar2 + param_2);
      lVar7 = uVar1 - param_2;
      do {
        uVar4 = *pbVar6 - 0x61 >> 1;
        if ((0xc < (uVar4 & 0x7f | (*pbVar6 - 0x61) * 0x80 & 0xff) ||
             (1 << (ulong)(uVar4 & 0x1f) & 0x1495U) == 0) &&
           (uVar4 = pbVar6[-1] - 0x61 >> 1,
           (uVar4 & 0x7f | (pbVar6[-1] - 0x61) * 0x80 & 0xff) < 0xd &&
           (1 << (ulong)(uVar4 & 0x1f) & 0x1495U) != 0)) {
          return -uVar5;
        }
        uVar5 = uVar5 - 1;
        pbVar6 = pbVar6 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  if ((char)bVar3 < '\0') {
    return param_1[1];
  }
  return (ulong)bVar3;
}



/* Entry: 107f50ae8; end: 107f50c83;  */

long * FUN_107f50ae8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined1 uVar7;
  byte bVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined1 uStack_59;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar2 = (ulong)bVar6;
  }
  uVar13 = (ulong)*(char *)((long)param_1 + 0x17);
  uVar3 = uVar13;
  if ((long)uVar13 < 0) {
    uVar3 = param_1[1];
  }
  if ((uVar2 <= uVar3) && (param_4 <= uVar3 - uVar2)) {
    uVar1 = param_1[1];
    puVar11 = (undefined8 *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      uVar1 = uVar13;
      puVar11 = param_1;
    }
    lVar9 = (uVar3 - uVar2) + (long)puVar11;
    puVar12 = (undefined8 *)*param_2;
    if (-1 < (char)bVar6) {
      puVar12 = param_2;
    }
    _memcmp(lVar9,puVar12,(long)puVar11 + (uVar1 - lVar9));
    param_2 = puVar12;
    if ((int)lVar9 == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (auStack_78,param_1,0,uVar1 - uVar2,&uStack_59);
      uVar2 = param_3[1];
      param_2 = (undefined8 *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        uVar2 = (ulong)*(byte *)((long)param_3 + 0x17);
        param_2 = param_3;
      }
      puVar11 = auStack_78;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar11,param_2,uVar2);
      uVar5 = *puVar11;
      uStack_58 = (undefined7)puVar11[1];
      uStack_51 = (undefined1)*(undefined8 *)((long)puVar11 + 0xf);
      uStack_50 = (undefined7)((ulong)*(undefined8 *)((long)puVar11 + 0xf) >> 8);
      uVar7 = *(undefined1 *)((long)puVar11 + 0x17);
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = 0;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      *param_1 = uVar5;
      param_1[1] = CONCAT17(uStack_51,uStack_58);
      *(ulong *)((long)param_1 + 0xf) = CONCAT71(uStack_50,uStack_51);
      *(undefined1 *)((long)param_1 + 0x17) = uVar7;
      if (cStack_61 < '\0') {
        __ZdlPv(auStack_78[0]);
      }
      plVar10 = (long *)0x1;
      goto LAB_107f50b98;
    }
  }
  plVar10 = (long *)0x0;
LAB_107f50b98:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar10;
  }
  ___stack_chk_fail();
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  __Unwind_Resume();
  bVar6 = *(byte *)((long)plVar10 + 0x17);
  uVar2 = plVar10[1];
  if (-1 < (char)bVar6) {
    uVar2 = (ulong)bVar6;
  }
  bVar8 = *(byte *)((long)param_2 + 0x17);
  uVar3 = param_2[1];
  if (-1 < (char)bVar8) {
    uVar3 = (ulong)bVar8;
  }
  if (uVar2 < uVar3) {
    return (long *)0x0;
  }
  plVar4 = (long *)*plVar10;
  if (-1 < (char)bVar6) {
    plVar4 = plVar10;
  }
  lVar9 = (uVar2 - uVar3) + (long)plVar4;
  puVar11 = (undefined8 *)*param_2;
  if (-1 < (char)bVar8) {
    puVar11 = param_2;
  }
  _memcmp(lVar9,puVar11,(long)plVar4 + (uVar2 - lVar9));
  return (long *)(ulong)((int)lVar9 == 0);
}


