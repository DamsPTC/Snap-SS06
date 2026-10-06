/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10568c520; end: 10568c533;  */

void FUN_10568c520(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010568c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10568c534; end: 10568c53b; -[SCPercMLVisionBarcodeDetectionModel approximateSizeInBytes] */

undefined8 FUN_10568c534(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10568c53c; end: 10568c543; -[SCPercMLVisionBarcodeDetectionModel modelKey] */

undefined8 FUN_10568c53c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10568c544; end: 10568c54b; -[SCPercMLVisionBarcodeDetectionModel modelId] */

undefined8 FUN_10568c544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10568c54c; end: 10568c553; -[SCPercMLVisionBarcodeDetectionModel supportedSymbologies] */

undefined8 FUN_10568c54c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10568c554; end: 10568c5a7; -[SCPercMLVisionBarcodeDetectionModel .cxx_destruct] */

void FUN_10568c554(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10568c5a8; end: 10568c5fb;  */

void FUN_10568c5a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_code_userInfo__1125c3e38,
             &PTR____CFConstantStringClassReference_110df4af8,1,0);
  return;
}



/* Entry: 10568c5fc; end: 10568c6d7;  */

char * FUN_10568c5fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40();
  uVar2 = param_1;
  func_0x00010c09e4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c14de00(pcVar3,param_2,&PTR____CFConstantStringClassReference_110df4b18);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  pcVar5 = "Unknown";
  if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
    pcVar5 = pcVar4;
  }
  _objc_release(pcVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return pcVar5;
}



/* Entry: 10568c6d8; end: 10568c9f7; -[SCPercMLDefaultModelProvider initWithDeliverableModelHandleProvider:deliverableModelProvider:modelFactory:modelAPICache:perceptionConfigurationServices:logger:] */

undefined8 *
FUN_10568c6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e98f8;
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
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
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
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c25de20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[10];
    puVar1[10] = param_6;
    _objc_release(uVar2);
    *(bool *)(puVar1 + 0xb) = puVar1[10] != 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10568c9f8; end: 10568ca9f; -[SCPercMLDefaultModelProvider didReceiveMemoryWarning] */

void FUN_10568c9f8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10568caa0; end: 10568cacb;  */

void FUN_10568caa0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddff60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10568cacc; end: 10568cadb; -[SCPercMLDefaultModelProvider modelWithKey:cofConfigKey:completionQueue:completion:] */

void FUN_10568cacc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d01d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_modelWithKey_cofConfigKey_loadSt_112611a88,param_3,param_4,0,param_5,
             param_6);
  return;
}



/* Entry: 10568cadc; end: 10568cc53; -[SCPercMLDefaultModelProvider modelWithKey:cofConfigKey:loadStrategy:completionQueue:completion:] */

void FUN_10568cadc(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,long param_7)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((((param_3 != 0) && (param_4 != 0)) && (param_6 != 0)) && (param_7 != 0)) {
    _objc_initWeak(auStack_58,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_4);
    uStack_60 = param_5;
    _objc_retain(param_6);
    _objc_retain(param_7);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10568cc54; end: 10568cc8f;  */

void FUN_10568cc54(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be60fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10568cc90; end: 10568cc97; -[SCPercMLDefaultModelProvider modelWithKey:cofConfigKey:] */

void FUN_10568cc90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d01b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_modelWithKey_cofConfigKey_loadSt_112611a80,param_3,param_4,0);
  return;
}



/* Entry: 10568cc98; end: 10568cf2b; -[SCPercMLDefaultModelProvider modelWithKey:cofConfigKey:loadStrategy:] */

void FUN_10568cc98(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  lVar1 = param_4;
  _objc_retain();
  if ((param_3 == 0) || (param_4 == 0)) {
    puVar5 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_10568cf2c;
    uStack_70 = 0x10568cf3c;
    uStack_68 = 0;
    puStack_b8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b0 = 0x3032000000;
    pcStack_a8 = FUN_10568cf2c;
    uStack_a0 = 0x10568cf3c;
    uStack_98 = 0;
    _dispatch_group_create();
    _dispatch_group_enter();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar1);
    func_0x00010c0d01c0(param_1);
    _objc_release(uVar2);
    _dispatch_group_wait(lVar1,0xffffffffffffffff);
    puVar5 = PTR_PTR_1126ae750;
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar3 = puStack_b8[5];
    if (lVar3 == 0) {
      func_0x00010c2468a0(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3ec40();
      uVar2 = puStack_b8[5];
      func_0x00010c09e4e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bf260e0();
      func_0x00010bf993e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(uVar2);
      _objc_release(lVar3);
    }
    _objc_release(lVar1);
    _objc_release(lVar1);
    __Block_object_dispose(&uStack_c0,8);
    _objc_release(uStack_98);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10568cf2c; end: 10568cf43;  */

void FUN_10568cf2c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10568cf44; end: 10568cfd3;  */

void FUN_10568cf44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10568cfd4; end: 10568d14b; -[SCPercMLDefaultModelProvider userDataForModelWithKey:cofConfigKey:] */

void FUN_10568cfd4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  if (param_3 == 0) {
    puVar2 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = *(undefined **)(param_1 + 8);
    func_0x00010bf6d160();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae750;
    puVar3 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      FUN_10568e628();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126ae750;
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar4 = puVar3;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3ec40();
      puVar5 = puVar3;
      func_0x00010c09e4e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110df4b78);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      _objc_retainAutorelease();
      func_0x00010bf260e0();
      func_0x00010bf993e0(puVar2,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    else {
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR____NSDictionary0__struct_11034ab58;
      if (puVar3 != (undefined *)0x0) {
        puVar6 = puVar3;
      }
      func_0x00010c2468a0(puVar2,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10568d14c; end: 10568d203; -[SCPercMLDefaultModelProvider setLoggingDisabled:] */

void FUN_10568d14c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10568d204; end: 10568d237;  */

void FUN_10568d204(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea5760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10568d238; end: 10568d23f; -[SCPercMLDefaultModelProvider _setLoggingDisabled:] */

void FUN_10568d238(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 10568d240; end: 10568d467; -[SCPercMLDefaultModelProvider _modelWithKey:cofConfigKey:loadStrategy:completionQueue:completion:] */

void FUN_10568d240(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bcb08;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010bff8d40();
  _objc_release(param_7);
  _objc_release(param_6);
  puVar2 = *(undefined **)(param_1 + 8);
  func_0x00010bf6d160(puVar2,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (puVar2 == (undefined *)0x0) {
    FUN_10568e628();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0b900(param_1,param_2,puVar1,param_3,
                        &PTR____CFConstantStringClassReference_110df4b38,0,param_4);
  }
  else {
    param_4 = param_1;
    func_0x00010bdd8240(param_1,param_2,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    if (param_4 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110df1ff8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010be89380(param_1,param_2,puVar3,puVar1);
      if ((uVar4 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          puVar5 = puVar2;
          func_0x00010c0cff20(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b3de0(uVar6,param_2,param_3,puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x60),param_2,uVar6,puVar3);
          _objc_release(uVar6);
          _objc_release(puVar5);
        }
        func_0x00010be12a40(param_1,param_2,param_3,puVar3,puVar2,param_5);
      }
    }
    else {
      puVar3 = puVar2;
      func_0x00010c0cff20(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be0b900(param_1,param_2,puVar1,param_3,puVar3,param_4,0);
    }
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10568d468; end: 10568d63f; -[SCPercMLDefaultModelProvider _fetchModelWithModelKey:requestKey:handle:loadStrategy:] */

void FUN_10568d468(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_5;
  func_0x00010c0cff20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar2);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_70 = param_6;
  func_0x00010bf6d1a0(uVar3);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10568d640; end: 10568d6bf;  */

void FUN_10568d640(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010bf880e0(*(undefined8 *)(param_1 + 0x20));
  }
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfcd20();
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10568d6c0; end: 10568d91f; -[SCPercMLDefaultModelProvider _didCompleteFetchForDeliverableModelWithModelKey:requestKey:handle:loadStrategy:deliverableModel:error:] */

void FUN_10568d6c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_5;
  func_0x00010c0cff20(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_8);
  if (param_6 != 1) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
    goto LAB_10568d7e0;
  }
  if (param_8 == 0) {
    ppuVar5 = &PTR_PTR_1108a66e8;
LAB_10568d7d4:
    ppuVar5 = (undefined **)*ppuVar5;
    _objc_retain(ppuVar5);
  }
  else {
    lVar2 = param_8;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0720c0();
    _objc_release(lVar2);
    if ((int)lVar3 != 0) {
      lVar2 = param_8;
      func_0x00010bf3ec40();
      if (lVar2 - 3U < 4) {
        ppuVar5 = (undefined **)(&PTR_PTR_1108a6648)[lVar2 - 3U];
        goto LAB_10568d7d4;
      }
    }
    ppuVar5 = &PTR____CFConstantStringClassReference_110df4b58;
  }
LAB_10568d7e0:
  _objc_release(param_8);
  func_0x00010c0aa680(uVar6,param_2,param_3,uVar1,param_8 != 0,ppuVar5);
  _objc_release(ppuVar5);
  _objc_release(uVar1);
  if (param_8 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uStack_68 = 0;
    func_0x00010c0d01e0(uVar4,param_2,param_3,param_5,param_7,*(undefined8 *)(param_1 + 0x68),
                        &uStack_68);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uStack_68;
    _objc_retain(uStack_68);
    uVar6 = param_5;
    func_0x00010c0cff20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdfcec0(param_1,param_2,param_3,param_4,uVar6,uVar4,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar6);
    _objc_release(uVar4);
  }
  else {
    uVar1 = param_5;
    func_0x00010c0cff20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdfcec0(param_1,param_2,param_3,param_4,uVar1,0,param_8);
    _objc_release(uVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10568d920; end: 10568daa7; -[SCPercMLDefaultModelProvider _didCompleteRetrievalForModelWithModelKey:requestKey:modelId:model:error:] */

void FUN_10568d920(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10568daa8; end: 10568dae3;  */

void FUN_10568daa8(long param_1)

{
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2f540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10568dae4; end: 10568dbff; -[SCPercMLDefaultModelProvider _handleRetrievalForModelWithModelKey:requestKey:modelId:model:error:] */

void FUN_10568dae4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    if (param_7 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c0e00e0(uVar1,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf880e0();
      _objc_release(uVar1);
    }
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x60),param_2,param_4);
  }
  if (param_6 != 0) {
    lVar2 = param_6;
    func_0x00010bf04b00(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd7b60(param_1,param_2,lVar2,param_3);
    _objc_release(lVar2);
  }
  func_0x00010be3dca0(param_1,param_2,param_4,param_3,param_5,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10568dc00; end: 10568dd97; -[SCPercMLDefaultModelProvider _cachedModelForModelKey:handle:] */

void FUN_10568dc00(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    puVar7 = (undefined *)0x0;
    goto LAB_10568dd6c;
  }
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c0dff20(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010be880a0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) goto LAB_10568dc7c;
LAB_10568dd60:
    puVar7 = (undefined *)0x0;
  }
  else {
LAB_10568dc7c:
    uVar2 = param_4;
    func_0x00010c0cff20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf16160(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0cff20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0720c0(uVar2,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
    if ((int)uVar5 == 0) goto LAB_10568dd60;
    puVar7 = PTR_PTR_1126bca50;
    _objc_alloc(PTR_PTR_1126bca50);
    uVar2 = param_4;
    func_0x00010c291840(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf51e00();
    func_0x00010bff3240(puVar7,param_2,lVar1,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar6 = puVar7;
    func_0x00010bf04b00(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd7b60(param_1,param_2,puVar6,param_3);
    _objc_release(puVar6);
  }
  _objc_release(lVar1);
LAB_10568dd6c:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10568dd98; end: 10568deb3; -[SCPercMLDefaultModelProvider _referenceCachedModelAPIForModelKey:] */

void FUN_10568dd98(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x48);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010010fab4();
    puVar3 = PTR_DAT_1126a4fa0;
    if (lVar1 == 0 || (int)lVar2 == 0) {
      _objc_retain(lVar1);
      lVar2 = lVar1;
      func_0x00010010fab4(lVar1,puVar3);
      _objc_release(lVar1);
      puVar3 = PTR_DAT_1126a4fa8;
      if ((lVar1 == 0) || ((int)lVar2 == 0)) {
        _objc_retain(lVar1);
        lVar2 = lVar1;
        func_0x00010010fab4(lVar1,puVar3);
        _objc_release(lVar1);
        puVar3 = (undefined *)0x0;
        if ((lVar1 != 0) && ((int)lVar2 != 0)) {
          puVar3 = PTR_PTR_1126bca58;
          func_0x00010bf15b80(PTR_PTR_1126bca58);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        puVar3 = PTR_PTR_1126bca58;
        func_0x00010bfe70e0(PTR_PTR_1126bca58);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      puVar3 = PTR_PTR_1126bca58;
      func_0x00010bf9f100(PTR_PTR_1126bca58);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10568deb4; end: 10568df7f; -[SCPercMLDefaultModelProvider _cacheModelAPI:withModelKey:] */

void FUN_10568deb4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 == 0) || (param_4 == 0)) goto LAB_10568df44;
  if (*(char *)(param_1 + 0x58) == '\x01') {
LAB_10568def4:
    lVar4 = *(long *)(param_1 + 0x50);
LAB_10568df14:
    lVar1 = param_1;
    func_0x00010bdd76a0(param_1,param_2,param_3);
    func_0x00010c1d0580(lVar4,param_2,param_3,param_4,lVar1);
  }
  else {
    lVar4 = param_1;
    func_0x00010be42000(param_1,param_2,param_3);
    if ((int)lVar4 != 0) {
      lVar4 = *(long *)(param_1 + 0x50);
      if (lVar4 == 0) {
        puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
        _objc_alloc_init();
        uVar3 = *(undefined8 *)(param_1 + 0x50);
        *(undefined **)(param_1 + 0x50) = puVar2;
        _objc_release(uVar3);
        goto LAB_10568def4;
      }
      goto LAB_10568df14;
    }
  }
  func_0x00010be88080(param_1,param_2,param_3,param_4);
LAB_10568df44:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10568df80; end: 10568e063; -[SCPercMLDefaultModelProvider _isModelODINBased:] */

undefined1 FUN_10568df80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0be520(param_3);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10568e064; end: 10568e093;  */

void FUN_10568e064(long param_1,undefined1 param_2)

{
  func_0x00010c262f40();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 10568e094; end: 10568e0a7;  */

void FUN_10568e094(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10568e0a8; end: 10568e123; -[SCPercMLDefaultModelProvider _referenceCacheModelAPI:withModelKey:] */

void FUN_10568e0a8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(param_4);
    func_0x00010bf16160(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar1,param_2,param_3,param_4);
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 10568e124; end: 10568e16f; -[SCPercMLDefaultModelProvider _cacheCostForModelAPI:] */

long FUN_10568e124(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    func_0x00010bf16160(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf08ce0();
    _objc_release(param_3);
    return lVar1;
  }
  return 0;
}



/* Entry: 10568e170; end: 10568e177; -[SCPercMLDefaultModelProvider _clearCache] */

void FUN_10568e170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10568e178; end: 10568e28b; -[SCPercMLDefaultModelProvider _registerCompletionForModelKey:completion:] */

undefined *
FUN_10568e178(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_c0;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = param_4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0d3c80();
    puVar6 = puVar3;
    puVar5 = param_3;
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40));
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    puVar6 = param_4;
    func_0x00010befa120(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (undefined *)(ulong)(lVar1 != 0);
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_10568e28c;
  lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_6;
  uVar8 = param_7;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lVar4 = *(long *)(param_3 + 0x40);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_170;
    do {
      lVar10 = 0;
      do {
        if (*plStack_170 != lVar9) {
          _objc_enumerationMutation(lVar4);
        }
        uVar7 = param_6;
        uVar8 = param_7;
        func_0x00010be0b900(param_3);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar4;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar4);
  puVar3 = puVar6;
  func_0x00010c12d3e0(*(undefined8 *)(param_3 + 0x40));
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar5);
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_10568e41c;
  puStack_1c0 = param_3;
  uStack_1b8 = param_7;
  uStack_1b0 = param_6;
  uStack_1a8 = param_5;
  puStack_1a0 = puVar5;
  puStack_198 = puVar6;
  ppuStack_190 = &puStack_60;
  _objc_retain(puVar3);
  _objc_retain(uVar7);
  _objc_retain(uVar8);
  func_0x00010c0aa700(*(undefined8 *)(puVar2 + 0x20));
  puVar5 = puVar3;
  func_0x00010c11de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f0 = 0xc2000000;
  pcStack_1e8 = FUN_10568e538;
  puStack_1e0 = &UNK_110848ba8;
  puStack_1d8 = puVar3;
  uStack_1d0 = uVar7;
  uStack_1c8 = uVar8;
  _objc_retain(uVar8);
  _objc_retain(uVar7);
  _objc_retain(puVar3);
  func_0x00010007380c(puVar5,&puStack_1f8);
  _objc_release(puVar5);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1d0);
  _objc_release(puStack_1d8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar3);
  return puVar3;
}



/* Entry: 10568e28c; end: 10568e41b; -[SCPercMLDefaultModelProvider _invokeCompletionsForRequestKey:modelKey:modelId:model:error:] */

void FUN_10568e28c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_6;
  uVar4 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(lVar1);
        }
        uVar3 = param_6;
        uVar4 = param_7;
        func_0x00010be0b900(param_1);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x40));
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10568e41c;
  lStack_170 = param_1;
  uStack_168 = param_7;
  uStack_160 = param_6;
  uStack_158 = param_5;
  uStack_150 = param_4;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(lVar1);
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  func_0x00010c0aa700(*(undefined8 *)(lVar2 + 0x20));
  lVar2 = lVar1;
  func_0x00010c11de00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_10568e538;
  puStack_190 = &UNK_110848ba8;
  lStack_188 = lVar1;
  uStack_180 = uVar3;
  uStack_178 = uVar4;
  _objc_retain(uVar4);
  _objc_retain(uVar3);
  _objc_retain(lVar1);
  func_0x00010007380c(lVar2,&puStack_1a8);
  _objc_release(lVar2);
  _objc_release(uStack_178);
  _objc_release(uStack_180);
  _objc_release(lStack_188);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  return;
}



/* Entry: 10568e41c; end: 10568e537; -[SCPercMLDefaultModelProvider _executeCompletion:modelKey:modelId:model:error:] */

void FUN_10568e41c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c0aa700(*(undefined8 *)(param_1 + 0x20));
  uVar1 = param_3;
  func_0x00010c11de00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10568e538;
  puStack_60 = &UNK_110848ba8;
  uStack_58 = param_3;
  uStack_50 = param_6;
  uStack_48 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_78);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 10568e538; end: 10568e577;  */

void FUN_10568e538(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf1d1e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10568e578; end: 10568e57f; -[SCPercMLDefaultModelProvider loggingDisabled] */

undefined1 FUN_10568e578(long param_1)

{
  return *(undefined1 *)(param_1 + 0x70);
}



/* Entry: 10568e580; end: 10568e627; -[SCPercMLDefaultModelProvider .cxx_destruct] */

void FUN_10568e580(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 10568e628; end: 10568e643;  */

void FUN_10568e628(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_code_userInfo__1125c3e38,
             &PTR____CFConstantStringClassReference_110df4b98,1,0);
  return;
}



/* Entry: 10568e644; end: 10568e6eb; -[SCPercMLModelProviderCompletion initWithBlock:queue:] */

undefined1 *
FUN_10568e644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9900;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10568e6ec; end: 10568e6f3; -[SCPercMLModelProviderCompletion block] */

undefined8 FUN_10568e6ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10568e6f4; end: 10568e6fb; -[SCPercMLModelProviderCompletion queue] */

undefined8 FUN_10568e6f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10568e6fc; end: 10568e72b; -[SCPercMLModelProviderCompletion .cxx_destruct] */

void FUN_10568e6fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10568e72c; end: 10568e79f; -[SCPercMLDefaultDeliverableModelProvider initWithContentDelivery:] */

undefined1 * FUN_10568e72c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9908;
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



/* Entry: 10568e7a0; end: 10568e873; -[SCPercMLDefaultDeliverableModelProvider deliverableModelWithHandle:requiresMappedFileForLargeDeliverable:completionQueue:completion:] */

void FUN_10568e7a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (((param_3 != 0) && (param_5 != 0)) && (param_6 != 0)) {
    lVar1 = param_3;
    func_0x00010bfd1a80();
    if ((int)lVar1 == 0) {
      func_0x00010568f48c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be0b8e0(param_1,param_2,param_6,param_5,0,lVar1);
      _objc_release(lVar1);
    }
    else if ((int)lVar1 == 2) {
      func_0x00010be276e0(param_1,param_2,param_3,param_4,param_5,param_6);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10568e874; end: 10568e967; -[SCPercMLDefaultDeliverableModelProvider _handleContentObjectFetchForHandle:requiresMappedFileForLargeDeliverable:completionQueue:completion:] */

void FUN_10568e874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b08b8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0cff20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0295e0(puVar1,param_2,uVar2,0xd);
  uVar3 = param_3;
  func_0x00010bf4cce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be890a0(param_1,param_2,puVar1,uVar3,param_4,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10568e968; end: 10568eaf7; -[SCPercMLDefaultDeliverableModelProvider _registerAndFetchWithContentKey:contentObject:requiresMappedFileForLargeDeliverable:completionQueue:completion:] */

void FUN_10568e968(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  uStack_60 = param_5;
  func_0x00010c125e00(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10568eaf8; end: 10568eb83;  */

void FUN_10568eaf8(long param_1,ulong param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  if ((param_2 & 1) == 0) {
    lVar1 = param_1;
    func_0x00010568f4a8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0b8e0(param_1);
    _objc_release(lVar1);
  }
  else {
    func_0x00010be15600(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10568eb84; end: 10568ed9f; -[SCPercMLDefaultDeliverableModelProvider _fetchWithContentKey:requiresMappedFileForLargeDeliverable:completionQueue:completion:] */

void FUN_10568eb84(long param_1,undefined1 *param_2,long param_3,int param_4,undefined *param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *unaff_x26;
  undefined **ppuVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  ppuVar7 = &puStack_a0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 == 0) {
    _objc_initWeak(auStack_68,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b1060;
    _objc_alloc();
    puVar3 = PTR_PTR_1126b19f8;
    func_0x00010c0f7e40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032f60();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10568eda0;
    puStack_88 = &UNK_1108a6668;
    param_2 = auStack_68;
    _objc_copyWeak(auStack_70,param_2);
    _objc_retain(param_6);
    uStack_78 = param_6;
    _objc_retain(param_5);
    puVar6 = puVar2;
    puStack_80 = param_5;
    func_0x00010c13e480(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar1);
    _objc_release(puStack_80);
    _objc_release(uStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  else {
    puVar6 = param_5;
    func_0x00010be12520(param_1);
    ppuVar7 = (undefined **)unaff_x26;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)ppuVar7 + 0x30));
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x30;
  _objc_loadWeakRetained(param_3);
  if (((ulong)puVar6 & 1) == 0) {
    lVar5 = param_3;
    func_0x00010568f4a8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0b8e0(param_3);
    _objc_release(lVar5);
  }
  else {
    func_0x00010be700a0(param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10568eda0; end: 10568ee3f;  */

void FUN_10568eda0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  if ((param_4 & 1) == 0) {
    lVar1 = param_1;
    func_0x00010568f4a8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0b8e0(param_1);
    _objc_release(lVar1);
  }
  else {
    func_0x00010be700a0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10568ee40; end: 10568f04f; -[SCPercMLDefaultDeliverableModelProvider _fetchMappedWithContentKey:completionQueue:completion:] */

void FUN_10568ee40(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(&puStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b1060;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b19f8;
  func_0x00010c0f7e40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032f60();
  _objc_retain(param_3);
  ppuVar6 = &puStack_68;
  _objc_copyWeak(auStack_70);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c13e560(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_3);
  _objc_destroyWeak(&puStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(&puStack_68);
  __Unwind_Resume();
  _objc_retain(ppuVar6);
  ppuVar7 = &PTR____CFConstantStringClassReference_110df4bd8;
  ppuVar9 = ppuVar7;
  _objc_retain(&PTR____CFConstantStringClassReference_110df4bd8);
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar4 = ppuVar6;
    func_0x00010bfcb5a0();
    ppuVar9 = ppuVar6;
    func_0x00010bfcaaa0();
    if (ppuVar9 == (undefined **)0x0) {
      if (0xffff < (long)ppuVar4) {
        ppuVar4 = ppuVar6;
        func_0x00010bfc5880();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar4;
        func_0x00010c08fa60();
        if (ppuVar9 == (undefined **)0x0) {
          func_0x00010568f4e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = &PTR____CFConstantStringClassReference_110df4bf8;
          _objc_retain(&PTR____CFConstantStringClassReference_110df4bf8);
        }
        else {
          ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010bf64aa0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = (undefined **)0x0;
          _objc_retain(0);
          if (ppuVar5 != (undefined **)0x0) {
            ppuVar7 = &PTR____CFConstantStringClassReference_110df4c38;
            _objc_retain(&PTR____CFConstantStringClassReference_110df4c38);
            _objc_release(&PTR____CFConstantStringClassReference_110df4bd8);
            _objc_release(0);
            _objc_release(ppuVar4);
            goto LAB_10568f1dc;
          }
          ppuVar9 = ppuVar7;
          func_0x00010568f4fc(0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = &PTR____CFConstantStringClassReference_110df4c18;
          _objc_retain(&PTR____CFConstantStringClassReference_110df4c18);
          _objc_release(&PTR____CFConstantStringClassReference_110df4bd8);
        }
        _objc_release(ppuVar7);
        _objc_release(ppuVar4);
        puVar8 = (undefined *)0x0;
        goto LAB_10568f0c0;
      }
      ppuVar5 = ppuVar6;
      func_0x00010c13e900();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        _objc_release(&PTR____CFConstantStringClassReference_110df4bd8);
        ppuVar7 = &PTR____CFConstantStringClassReference_110dc02f8;
LAB_10568f1dc:
        puVar8 = PTR_PTR_1126bcb10;
        func_0x00010c0f40e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = (undefined **)0x0;
        _objc_retain(0);
        if (puVar8 == (undefined *)0x0) {
          func_0x00010568f5d4(0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = &PTR____CFConstantStringClassReference_110df4c58;
          _objc_retain(&PTR____CFConstantStringClassReference_110df4c58);
          _objc_release(ppuVar7);
        }
        else {
          ppuVar9 = (undefined **)0x0;
          ppuVar10 = ppuVar7;
        }
        _objc_release(0);
        _objc_release(ppuVar5);
        goto LAB_10568f0c0;
      }
    }
  }
  func_0x00010568f4c4();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = (undefined *)0x0;
  ppuVar10 = ppuVar7;
LAB_10568f0c0:
  func_0x00010bfb7400(ppuVar6);
  param_3 = param_3 + 0x38;
  _objc_loadWeakRetained(param_3);
  func_0x00010be0b8e0();
  _objc_release(param_3);
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  _objc_release(puVar8);
  _objc_release(ppuVar6);
  return;
}



/* Entry: 10568f050; end: 10568f2d7;  */

void FUN_10568f050(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_2);
  ppuVar3 = &PTR____CFConstantStringClassReference_110df4bd8;
  ppuVar5 = ppuVar3;
  _objc_retain(&PTR____CFConstantStringClassReference_110df4bd8);
  if (param_2 != (undefined **)0x0) {
    ppuVar1 = param_2;
    func_0x00010bfcb5a0();
    ppuVar5 = param_2;
    func_0x00010bfcaaa0();
    if (ppuVar5 == (undefined **)0x0) {
      if (0xffff < (long)ppuVar1) {
        ppuVar1 = param_2;
        func_0x00010bfc5880();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar1;
        func_0x00010c08fa60();
        if (ppuVar5 == (undefined **)0x0) {
          func_0x00010568f4e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = &PTR____CFConstantStringClassReference_110df4bf8;
          _objc_retain(&PTR____CFConstantStringClassReference_110df4bf8);
        }
        else {
          ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010bf64aa0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = (undefined **)0x0;
          _objc_retain(0);
          if (ppuVar2 != (undefined **)0x0) {
            ppuVar3 = &PTR____CFConstantStringClassReference_110df4c38;
            _objc_retain(&PTR____CFConstantStringClassReference_110df4c38);
            _objc_release(&PTR____CFConstantStringClassReference_110df4bd8);
            _objc_release(0);
            _objc_release(ppuVar1);
            goto LAB_10568f1dc;
          }
          ppuVar5 = ppuVar3;
          func_0x00010568f4fc(0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = &PTR____CFConstantStringClassReference_110df4c18;
          _objc_retain(&PTR____CFConstantStringClassReference_110df4c18);
          _objc_release(&PTR____CFConstantStringClassReference_110df4bd8);
        }
        _objc_release(ppuVar3);
        _objc_release(ppuVar1);
        puVar4 = (undefined *)0x0;
        goto LAB_10568f0c0;
      }
      ppuVar2 = param_2;
      func_0x00010c13e900();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = (undefined **)0x0;
      if (ppuVar2 != (undefined **)0x0) {
        _objc_release(&PTR____CFConstantStringClassReference_110df4bd8);
        ppuVar3 = &PTR____CFConstantStringClassReference_110dc02f8;
LAB_10568f1dc:
        puVar4 = PTR_PTR_1126bcb10;
        func_0x00010c0f40e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = (undefined **)0x0;
        _objc_retain(0);
        if (puVar4 == (undefined *)0x0) {
          func_0x00010568f5d4(0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = &PTR____CFConstantStringClassReference_110df4c58;
          _objc_retain(&PTR____CFConstantStringClassReference_110df4c58);
          _objc_release(ppuVar3);
        }
        else {
          ppuVar5 = (undefined **)0x0;
          ppuVar6 = ppuVar3;
        }
        _objc_release(0);
        _objc_release(ppuVar2);
        goto LAB_10568f0c0;
      }
    }
  }
  func_0x00010568f4c4();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined *)0x0;
  ppuVar6 = ppuVar3;
LAB_10568f0c0:
  func_0x00010bfb7400(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0b8e0();
  _objc_release(param_1);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  return;
}



/* Entry: 10568f2d8; end: 10568f393; -[SCPercMLDefaultDeliverableModelProvider _parseDeliverableModelData:completionQueue:completion:] */

void FUN_10568f2d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_48;
  
  puVar2 = PTR_PTR_1126bcb10;
  uStack_48 = 0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f40e0(puVar2,param_2,param_3,&uStack_48);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_48;
  _objc_retain(uStack_48);
  func_0x00010be0b8e0(param_1,param_2,param_5,param_4,puVar2,uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10568f394; end: 10568f46b; -[SCPercMLDefaultDeliverableModelProvider _executeCompletion:completionQueue:deliverableModel:error:] */

void FUN_10568f394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10568f46c;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_5;
  uStack_40 = param_6;
  uStack_38 = param_3;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010007380c(param_4,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10568f46c; end: 10568f47f;  */

void FUN_10568f46c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010568f47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10568f480; end: 10568f4fb; -[SCPercMLDefaultDeliverableModelProvider .cxx_destruct] */

void FUN_10568f480(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10568f4fc; end: 10568f6ab;  */

undefined1 * FUN_10568f4fc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    uStack_48 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_40 = param_1;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    uStack_58 = 0x10568f5d4;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_60 = &stack0xfffffffffffffff0;
    _objc_retain();
    if (param_1 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      uStack_98 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      lStack_90 = param_1;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar5 = &PTR____CFConstantStringClassReference_110df4bb8;
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    lVar2 = param_1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      plVar3 = &lStack_d0;
      pcStack_a8 = FUN_10568f6ac;
      puStack_c0 = puVar7;
      lStack_b8 = param_1;
      ppuStack_b0 = &puStack_60;
      _objc_retain(ppuVar5);
      puStack_c8 = PTR_PTR_1126e9910;
      lStack_d0 = lVar2;
      _objc_msgSendSuper2(&lStack_d0,PTR_s_init_1125d9248);
      if (plVar3 != (long *)0x0) {
        ppuVar4 = ppuVar5;
        _objc_retainBlock();
        uVar6 = *(undefined8 *)((long)plVar3 + 8);
        *(undefined ***)((long)plVar3 + 8) = ppuVar4;
        _objc_release(uVar6);
        puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)((long)plVar3 + 0x10);
        *(undefined **)((long)plVar3 + 0x10) = puVar7;
        _objc_release(uVar6);
      }
      _objc_release(ppuVar5);
      return (undefined1 *)plVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 10568f6ac; end: 10568f747; -[SCPercMLBlockLoggingTimer initWithBlock:] */

undefined1 * FUN_10568f6ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9910;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10568f748; end: 10568f78b; -[SCPercMLBlockLoggingTimer dealloc] */

void FUN_10568f748(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf880e0();
  puStack_28 = PTR_PTR_1126e9910;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10568f78c; end: 10568f7ef; -[SCPercMLBlockLoggingTimer done] */

void FUN_10568f78c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    (**(code **)(*(long *)(param_1 + 8) + 0x10))();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10568f7f0; end: 10568f7ff; -[SCPercMLBlockLoggingTimer cancel] */

void FUN_10568f7f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10568f800; end: 10568f82f; -[SCPercMLBlockLoggingTimer .cxx_destruct] */

void FUN_10568f800(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10568f830; end: 10568f9b3; -[SCPercMLLoggerImpl initWithBlizzardLogger:grapheneRegistry:] */

undefined8 *
FUN_10568f830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e9918;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
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
    puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10568f9b4; end: 10568f9f3;  */

void FUN_10568f9b4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf1240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10568f9f4; end: 10568fbdb; -[SCPercMLLoggerImpl logModelInferenceLatencyWithModelKey:modelId:taskType:latency:] */

void FUN_10568f9f4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 != 0) && (param_5 != 0)) {
    lVar1 = param_2;
    func_0x00010be41a80(param_2,param_3,param_6);
    if ((int)lVar1 != 0) {
      puVar2 = PTR_PTR_1126bcb18;
      _objc_alloc_init(PTR_PTR_1126bcb18);
      func_0x00010c1c8d60();
      func_0x00010c1c8d40(puVar2,param_3,param_5);
      lVar1 = param_2;
      func_0x00010becac80(param_2,param_3,param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212920(puVar2,param_3,lVar1);
      _objc_release(lVar1);
      lVar1 = param_2;
      func_0x00010becbf40(param_1,param_2);
      func_0x00010c1b92e0(puVar2,param_3,lVar1);
      uVar3 = *(undefined8 *)(param_2 + 8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar3);
      _objc_release(puVar2);
    }
    lVar1 = param_2;
    func_0x00010be454a0(param_2,param_3,param_4);
    if ((int)lVar1 != 0) {
      puVar2 = PTR_PTR_1126bcb20;
      func_0x00010c0cff40(PTR_PTR_1126bcb20);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c2ac460();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_2;
      func_0x00010becac80(param_2,param_3,param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110df4c98,lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(lVar1);
      _objc_release(puVar4);
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010becbf40(param_1,param_2);
      func_0x00010befbfe0(uVar3,param_3,puVar5,param_2);
      _objc_release(uVar3);
      _objc_release(puVar5);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10568fbdc; end: 10568fd07; -[SCPercMLLoggerImpl loggingTimerForModelInferenceLatencyWithModelKey:modelId:taskType:] */

void FUN_10568fbdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126bcb28;
  _objc_alloc(PTR_PTR_1126bcb28);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_50 = param_5;
  func_0x00010bff8d00(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10568fd08; end: 10568fd4f;  */

void FUN_10568fd08(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x30;
  _objc_loadWeakRetained(param_2);
  func_0x00010c0aa6a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10568fd50; end: 10568fd67; -[SCPercMLLoggerImpl logModelInferenceStatusWithModelKey:modelId:taskType:status:] */

void FUN_10568fd50(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  if ((param_3 != 0) && (param_4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c0aa6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_logModelInferenceStatusWithModel_1126083c8)
    ;
    return;
  }
  return;
}



/* Entry: 10568fd68; end: 10568ff0f; -[SCPercMLLoggerImpl logModelInferenceStatusWithModelKey:modelId:taskType:status:reason:] */

void FUN_10568fd68(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  if ((((param_3 != 0) && (param_4 != 0)) && (param_7 != 0)) &&
     ((lVar1 = param_1, func_0x00010be454a0(param_1,param_2,param_3), (int)lVar1 != 0 &&
      (lVar1 = param_1, func_0x00010be45500(param_1,param_2,param_7), (int)lVar1 != 0)))) {
    puVar2 = PTR_PTR_1126bcb20;
    func_0x00010c0cff60(PTR_PTR_1126bcb20);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bec2940(param_1,param_2,param_6,param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf4d8,lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010becac80(param_1,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110df4c98,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar1);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    _objc_release(uVar7);
    _objc_release(puVar6);
  }
  _objc_release(param_7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10568ff10; end: 10568ffeb; -[SCPercMLLoggerImpl logModelWarmupLatencyWithModelKey:modelId:latency:] */

void FUN_10568ff10(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bcb30;
  if ((param_4 != 0) && (param_5 != 0)) {
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_alloc_init(puVar1);
    func_0x00010c1c8d60();
    _objc_release(param_4);
    func_0x00010c1c8d40(puVar1,param_3,param_5);
    _objc_release(param_5);
    lVar2 = param_2;
    func_0x00010becbf40(param_1,param_2);
    func_0x00010c1b92e0(puVar1,param_3,lVar2);
    uVar3 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10568ffec; end: 105690107; -[SCPercMLLoggerImpl loggingTimerForModelWarmupLatencyWithModelKey:modelId:] */

void FUN_10568ffec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126bcb28;
  _objc_alloc(PTR_PTR_1126bcb28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bff8d00(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105690108; end: 10569014b;  */

void FUN_105690108(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x30;
  _objc_loadWeakRetained(param_2);
  func_0x00010c0aa720(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10569014c; end: 10569023b; -[SCPercMLLoggerImpl logModelFetchLatencyWithModelKey:modelId:latency:] */

void FUN_10569014c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (((param_4 != 0) && (param_5 != 0)) &&
     (lVar1 = param_2, func_0x00010be454a0(param_2,param_3,param_4), (int)lVar1 != 0)) {
    puVar2 = PTR_PTR_1126bcb20;
    func_0x00010c0cfea0(PTR_PTR_1126bcb20);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becbf40(param_1,param_2);
    func_0x00010befbfe0(uVar4,param_3,puVar3,param_2);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10569023c; end: 105690357; -[SCPercMLLoggerImpl loggingTimerForModelFetchLatencyWithModelKey:modelId:] */

void FUN_10569023c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126bcb28;
  _objc_alloc(PTR_PTR_1126bcb28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bff8d00(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105690358; end: 10569039b;  */

void FUN_105690358(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x30;
  _objc_loadWeakRetained(param_2);
  func_0x00010c0aa660(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10569039c; end: 1056903a7; -[SCPercMLLoggerImpl logModelFetchStatusWithModelKey:modelId:status:] */

void FUN_10569039c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0aa690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_logModelFetchStatusWithModelKey__1126083b0);
  return;
}



/* Entry: 1056903a8; end: 1056904fb; -[SCPercMLLoggerImpl logModelFetchStatusWithModelKey:modelId:status:reason:] */

void FUN_1056903a8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if ((((param_3 != 0) && (param_4 != 0)) && (param_6 != 0)) &&
     ((lVar1 = param_1, func_0x00010be454a0(param_1,param_2,param_3), (int)lVar1 != 0 &&
      (lVar1 = param_1, func_0x00010be45500(param_1,param_2,param_6), (int)lVar1 != 0)))) {
    puVar2 = PTR_PTR_1126bcb20;
    func_0x00010c0cfec0(PTR_PTR_1126bcb20);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bec2940(param_1,param_2,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf4d8,lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(lVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056904fc; end: 105690623; -[SCPercMLLoggerImpl logModelProvideStatusWithModelKey:modelId:status:] */

void FUN_1056904fc(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((param_3 != 0) && (param_4 != 0)) &&
     (lVar1 = param_1, func_0x00010be454a0(param_1,param_2,param_3), (int)lVar1 != 0)) {
    puVar2 = PTR_PTR_1126bcb20;
    func_0x00010c0d0040(PTR_PTR_1126bcb20);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bec2920(param_1,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf4d8,lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(lVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105690624; end: 10569067f; -[SCPercMLLoggerImpl _isValidMetricValue:] */

undefined8 FUN_105690624(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c08fa60();
  if (uVar1 < 0x41) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf99aa0(uVar2,param_2,param_3);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105690680; end: 1056906ef; -[SCPercMLLoggerImpl _isValidReason:] */

undefined8 FUN_105690680(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c08fa60();
  if (uVar1 == 0) {
    param_1 = 1;
  }
  else {
    uVar1 = param_3;
    func_0x00010c08fa60();
    if (uVar1 < 10) {
      func_0x00010be454a0(param_1,param_2,param_3);
    }
    else {
      param_1 = 0;
    }
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1056906f0; end: 1056906fb; -[SCPercMLLoggerImpl _isLoggableBlizzardTaskType:] */

bool FUN_1056906f0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return param_3 < 2;
}



/* Entry: 1056906fc; end: 105690723; -[SCPercMLLoggerImpl _taskTypeToString:] */

undefined ** FUN_1056906fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 6) {
    return (undefined **)(&PTR_PTR_1108a6758)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110df4cd8;
}



/* Entry: 105690724; end: 10569074f; -[SCPercMLLoggerImpl _statusToString:] */

undefined ** FUN_105690724(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad2d8;
  if (param_3 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dcedb8;
  if (param_3 != 2) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 105690750; end: 1056907f7; -[SCPercMLLoggerImpl _statusToString:withReason:] */

void FUN_105690750(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  func_0x00010bec2920(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    _objc_retain(param_1);
    puVar2 = param_1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dc0f98);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056907f8; end: 10569080b; -[SCPercMLLoggerImpl _timeIntervalToMs:] */

long FUN_1056907f8(double param_1)

{
  return (long)(param_1 * 1000.0);
}



/* Entry: 10569080c; end: 105690853; -[SCPercMLLoggerImpl _createPercMLRegisteredGrapheneMetric] */

void FUN_10569080c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f7e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105690854; end: 10569089b; -[SCPercMLLoggerImpl .cxx_destruct] */

void FUN_105690854(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10569089c; end: 1056908c7; +[SCGraphenePerceptionMlMetric modelProvideStatus] */

void FUN_10569089c(void)

{
  _objc_alloc(PTR_PTR_1126bcb20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056908c8; end: 1056908f3; +[SCGraphenePerceptionMlMetric modelFetchStatus] */

void FUN_1056908c8(void)

{
  _objc_alloc(PTR_PTR_1126bcb20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056908f4; end: 10569091f; +[SCGraphenePerceptionMlMetric modelFetchLatency] */

void FUN_1056908f4(void)

{
  _objc_alloc(PTR_PTR_1126bcb20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105690920; end: 10569094b; +[SCGraphenePerceptionMlMetric modelInferenceStatus] */

void FUN_105690920(void)

{
  _objc_alloc(PTR_PTR_1126bcb20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10569094c; end: 105690977; +[SCGraphenePerceptionMlMetric modelInferenceLatency] */

void FUN_10569094c(void)

{
  _objc_alloc(PTR_PTR_1126bcb20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105690978; end: 105690a17; -[SCGraphenePerceptionMlMetric description] */

void FUN_105690978(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110df4db8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110df4db8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e9920;
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



/* Entry: 105690a18; end: 105690b83; -[SCGrapheneRegistry perceptionMlGraphene] */

void FUN_105690a18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105690aa0;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bd460 != -1) {
    func_0x00010002a2fc(0x1136bd460,&puStack_48);
  }
  uVar1 = uRam00000001136bd458;
  _objc_retain(uRam00000001136bd458);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


