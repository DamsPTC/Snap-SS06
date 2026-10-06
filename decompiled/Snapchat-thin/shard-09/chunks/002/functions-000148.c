/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106acebb0; end: 106acebb7; -[SCBlizzardLogQueueConfigAdapter queuePriority] */

undefined8 FUN_106acebb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106acebb8; end: 106acebbf; -[SCBlizzardLogQueueConfigAdapter setQueuePriority:] */

void FUN_106acebb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 106acebc0; end: 106acebc7; -[SCBlizzardLogQueueConfigAdapter fileEventCount] */

undefined8 FUN_106acebc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106acebc8; end: 106acebcf; -[SCBlizzardLogQueueConfigAdapter setFileEventCount:] */

void FUN_106acebc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 106acebd0; end: 106acebd7; -[SCBlizzardLogQueueConfigAdapter uploadBatchBytes] */

undefined8 FUN_106acebd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106acebd8; end: 106acebdf; -[SCBlizzardLogQueueConfigAdapter setUploadBatchBytes:] */

void FUN_106acebd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 106acebe0; end: 106acebe7; -[SCBlizzardLogQueueConfigAdapter setProtoEventSaveBatch:] */

void FUN_106acebe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 106acebe8; end: 106acebef; -[SCBlizzardLogQueueConfigAdapter setSpectrumMinEventsOnDisk:] */

void FUN_106acebe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 106acebf0; end: 106acebf7; -[SCBlizzardLogQueueConfigAdapter spectrumBytesPerRequest] */

undefined8 FUN_106acebf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 106acebf8; end: 106acebff; -[SCBlizzardLogQueueConfigAdapter setSpectrumBytesPerRequest:] */

void FUN_106acebf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 106acec00; end: 106acec07; -[SCBlizzardLogQueueConfigAdapter spectrumDiskFlushIntervalSecs] */

undefined8 FUN_106acec00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106acec08; end: 106acec0f; -[SCBlizzardLogQueueConfigAdapter setSpectrumDiskFlushIntervalSecs:] */

void FUN_106acec08(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 106acec10; end: 106acec17; -[SCBlizzardLogQueueConfigAdapter setRegion:] */

void FUN_106acec10(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 106acec18; end: 106acec53; -[SCBlizzardLogQueueConfigAdapter .cxx_destruct] */

void FUN_106acec18(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106acec54; end: 106acede7; -[SCBlizzardLogQueueDefinition jsonDictionary] */

undefined * FUN_106acec54(undefined *param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = param_1;
  puStack_70 = puVar3;
  func_0x00010c11e020();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_68 = puVar5;
  func_0x00010c125a80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar11 = &puStack_70;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar6;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  _objc_release(param_1);
  if (puVar4 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar11);
  ppuVar8 = ppuVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar9 = ppuVar8;
  _objc_opt_isKindOfClass(ppuVar8,puVar3);
  ppuVar1 = ppuVar8;
  if (((ulong)ppuVar9 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar8);
  ppuVar9 = ppuVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar10 = ppuVar9;
  _objc_opt_isKindOfClass(ppuVar9,puVar3);
  ppuVar8 = ppuVar9;
  if (((ulong)ppuVar10 & 1) == 0) {
    ppuVar8 = (undefined **)0x0;
  }
  _objc_retain(ppuVar8);
  _objc_release(ppuVar9);
  ppuVar9 = ppuVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar11);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar10 = ppuVar9;
  _objc_opt_isKindOfClass(ppuVar9,puVar3);
  ppuVar11 = ppuVar9;
  if (((ulong)ppuVar10 & 1) == 0) {
    ppuVar11 = (undefined **)0x0;
  }
  _objc_retain(ppuVar11);
  _objc_release(ppuVar9);
  func_0x00010c02d9e0(puVar2);
  _objc_release(ppuVar11);
  _objc_release(ppuVar8);
  _objc_release(ppuVar1);
  return puVar2;
}



/* Entry: 106acede8; end: 106acef3b; -[SCBlizzardLogQueueDefinition initWithJSONDictionary:] */

undefined8 FUN_106acede8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar2 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  uVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar4 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  func_0x00010c02d9e0(param_1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106acef3c; end: 106acefe3; -[SCBlizzardEventSerializer serializeEvent:] */

void FUN_106acef3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_3;
  func_0x00010c06f9a0(param_3);
  _objc_release(param_3);
  func_0x00010c0df6e0(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e6df58);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106acefe4; end: 106acf11f; -[SCBlizzardEventSerializer serializeEventForExtension:] */

void FUN_106acefe4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d3c80();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_3;
  func_0x00010c06f9a0(param_3);
  func_0x00010c0df6e0(puVar3,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(lVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e6df58);
  _objc_release(puVar3);
  lVar1 = param_3;
  func_0x00010bf9a1a0();
  if (lVar1 != -1) {
    lVar1 = param_3;
    func_0x00010bf9a1a0(param_3);
    func_0x0001002ced14();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(lVar2,param_2,lVar1,&PTR____CFConstantStringClassReference_110e6ef18);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c082920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c082920(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(lVar2,param_2,lVar1,&PTR____CFConstantStringClassReference_110e6ef38);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106acf120; end: 106acf2db; -[SCBlizzardEventSerializer deserializeEventForExtension:appInsightsMetadataStorage:] */

void FUN_106acf120(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  func_0x00010c0d3c80();
  puVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = (undefined *)0x0;
  if (puVar4 != (undefined *)0x0) {
    puVar4 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e6df58);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar4;
    func_0x00010bf1f3c0();
    _objc_release(puVar4);
    func_0x00010c12d3e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e6df58);
  }
  puVar4 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e6ef18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = (undefined *)0xffffffffffffffff;
  }
  else {
    puVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e6ef18);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bc92d70();
    _objc_release(puVar2);
    func_0x00010c12d3e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e6ef18);
  }
  puVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e6ef38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR____kCFBooleanFalse_11034ab60;
  if (puVar2 != (undefined *)0x0) {
    puVar3 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e6ef38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e6ef38);
  }
  puVar2 = PTR_PTR_1126d02f8;
  func_0x00010bf99ea0(PTR_PTR_1126d02f8,param_2,param_3,puVar1,puVar4,puVar3,0,3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106acf2dc; end: 106acf43f; -[SCBlizzardEventSerializer deserializeEventForExtensionWithMapDeserializer:mapDeserializer:appInsightsMetadataStorage:] */

void FUN_106acf2dc(undefined *param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dd1b78);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf99e40(param_4,param_2,param_3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010bf6e900(param_1,param_2,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e6df58);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar3 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e6df58);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf1f3c0();
      _objc_release(lVar3);
    }
    _objc_release(lVar1);
    param_1 = PTR_PTR_1126d02f8;
    func_0x00010bf99ee0(PTR_PTR_1126d02f8,param_2,lVar2,lVar4,3,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106acf440; end: 106acf443; -[SCBlizzardFileSystem jsonDataAtPath:] */

void FUN_106acf440(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf63b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dataFromFileAtPath__1125b6888);
  return;
}



/* Entry: 106acf444; end: 106acf4b3; -[SCBlizzardFileSystem deleteJsonDataAtPath:] */

void FUN_106acf444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfacbe0();
  if ((int)uVar1 == 0) {
    func_0x00010bfcde60(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_106acae7c();
    _objc_release(param_1);
  }
  else {
    func_0x00010bf6bdc0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106acf4b4; end: 106acf52f; -[SCBlizzardFileSystem deleteDirectoryAtPath:] */

void FUN_106acf4b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf4dfa0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bface80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc40();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106acf530; end: 106acf567; -[SCBlizzardFileSystem dataFromFileAtPath:] */

void FUN_106acf530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  func_0x00010bf64aa0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_3,0,&uStack_18);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106acf568; end: 106acf69f; -[SCBlizzardFileSystem moveOldFile:toNewLocation:] */

void FUN_106acf568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bface80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfacbe0();
  if ((int)uVar2 == 0) {
    uVar2 = param_1;
    func_0x00010bface80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfacbe0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 != 0) {
      uVar1 = param_1;
      func_0x00010bface80();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf52000();
      _objc_retain(0);
      _objc_release(uVar1);
      if ((int)uVar2 != 0) {
        func_0x00010bface80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12cc40();
        _objc_release(param_1);
      }
    }
  }
  else {
    _objc_release(uVar1);
  }
  _objc_release(0);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106acf6a0; end: 106acf703; -[SCBlizzardFileSystem fileExistsAtPath:] */

undefined8 FUN_106acf6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bface80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfacbe0();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106acf704; end: 106acf767; -[SCBlizzardFileSystem deleteFileAtPath:] */

void FUN_106acf704(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bface80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc40();
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 106acf768; end: 106acf797; -[SCBlizzardFileSystem setFileManager:] */

void FUN_106acf768(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106acf798; end: 106acf79f; -[SCBlizzardFileSystem graphene] */

undefined8 FUN_106acf798(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106acf7a0; end: 106acf7cf; -[SCBlizzardFileSystem setGraphene:] */

void FUN_106acf7a0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106acf7d0; end: 106acf7d7; -[SCBlizzardFileSystem nsDataWriter] */

undefined8 FUN_106acf7d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106acf7d8; end: 106acf807; -[SCBlizzardFileSystem setNsDataWriter:] */

void FUN_106acf7d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106acf808; end: 106acf843; -[SCBlizzardFileSystem .cxx_destruct] */

void FUN_106acf808(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106acf844; end: 106acfb63; -[SCBlizzardJsonSerializer serializeAsJsonObject:] */

/* WARNING: Possible PIC construction at 0x000106acfabc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106acfac0) */
/* WARNING: Removing unreachable block (ram,0x000106acfb00) */
/* WARNING: Removing unreachable block (ram,0x000106acfa50) */

void FUN_106acf844(uint param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  if (param_4 == (undefined *)0x0) {
LAB_106acf8d8:
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,param_3);
    puVar4 = param_4;
    if (((ulong)puVar2 & 1) == 0) {
      param_3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
      puVar2 = param_4;
      _objc_opt_isKindOfClass(param_4,param_3);
      if (((ulong)puVar2 & 1) == 0) {
        param_3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        puVar2 = param_4;
        _objc_opt_isKindOfClass(param_4,param_3);
        if (((ulong)puVar2 & 1) == 0) {
          param_3 = PTR__OBJC_CLASS___NSArray_1126ae530;
          _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
          puVar2 = param_4;
          _objc_opt_isKindOfClass(param_4,param_3);
          if (((ulong)puVar2 & 1) == 0) {
            param_3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            puVar2 = param_4;
            _objc_opt_isKindOfClass(param_4,param_3);
            if (((ulong)puVar2 & 1) == 0) {
              func_0x00010bf6e340(param_4);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
              func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
              _objc_retainAutoreleasedReturnValue();
              _objc_retain(param_4);
              func_0x00010bf52a60();
              uVar1 = uRam0000000000000000;
              if (puVar4 != (undefined *)0x0) {
                puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
                uVar3 = uVar1;
                _objc_opt_isKindOfClass(uVar1,puVar2);
                if ((uVar3 & 1) == 0) {
                  func_0x00010bf6e340(uVar1);
                  _objc_retainAutoreleasedReturnValue();
                }
                else {
                  _objc_retain(uVar1);
                }
                func_0x00010c0e00e0(param_4);
                _objc_retainAutoreleasedReturnValue();
                goto code_r0x00010c15e860;
              }
              _objc_release(param_4);
              puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar2);
            }
          }
          else {
            func_0x00010c0b8600(param_4);
            _objc_retainAutoreleasedReturnValue();
          }
          goto LAB_106acf8e8;
        }
        func_0x00010bfb2c80(param_4);
        if (0x7f7fffff < (param_1 & 0x7fffffff)) goto LAB_106acf8d8;
      }
    }
    _objc_retain(param_4);
  }
LAB_106acf8e8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  param_2 = *(undefined8 *)(param_4 + 0x20);
  param_4 = param_3;
code_r0x00010c15e860:
                    /* WARNING: Could not recover jumptable at 0x00010c15e870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_serializeAsJsonObject__112635438,param_4);
  return;
}



/* Entry: 106acfb64; end: 106acfb6f;  */

void FUN_106acfb64(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15e870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_serializeAsJsonObject__112635438,param_2);
  return;
}



/* Entry: 106acfb70; end: 106acfc13; -[SCBlizzardJsonSerializer serializeAsJsonData:] */

void FUN_106acfb70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_38;
  
  func_0x00010c15e860();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010c082de0(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_1);
  if ((int)puVar2 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lStack_38 = 0;
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_1,0,&lStack_38
                       );
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined *)0x0;
    if (lStack_38 == 0) {
      _objc_retain(puVar1);
      puVar2 = puVar1;
    }
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106acfc14; end: 106acfd63; -[SCBlizzardEagerUploadClient uploadEvents:eagerUploadId:eventCount:priority:region:seqItemsCount:isSpectrum:] */

void FUN_106acfc14(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 in_stack_00000000;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  long lStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_2 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e44c0(uVar2);
  _objc_release(puVar1);
  _objc_initWeak(auStack_68,param_2);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  _objc_copyWeak(auStack_88,auStack_68);
  uStack_70 = in_stack_00000000;
  uStack_80 = param_5;
  lStack_78 = (long)param_1;
  func_0x00010c28dc40(uVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  return;
}



/* Entry: 106acfd64; end: 106acfdcf;  */

void FUN_106acfd64(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be2d340(param_1);
    _CACurrentMediaTime();
    func_0x00010be528a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106acfdd0; end: 106acfe87; -[SCBlizzardEagerUploadClient _handleOnEagerUploadCompletionWithEagerUploadId:isSpectrum:didCompleteWithSucess:] */

void FUN_106acfdd0(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,int param_5
                  )

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **unaff_x19;
  undefined **unaff_x20;
  long *plVar11;
  long lVar12;
  long *unaff_x21;
  undefined1 *puVar13;
  undefined8 *unaff_x22;
  undefined8 uVar14;
  undefined8 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  char acStack_4c9 [264];
  char acStack_3c1 [160];
  char acStack_321 [160];
  char acStack_281 [160];
  char acStack_1e1 [152];
  char acStack_149 [201];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  uVar14 = *(undefined8 *)(param_1 + 8);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar10 = param_4;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110db8118;
  if ((int)param_4 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110db8138;
  }
  ppuVar2 = ppuVar3;
  if (param_5 == 0) {
    func_0x00010c0e44a0(uVar14);
    _objc_release(puVar9);
    lVar12 = *(long *)(param_1 + 0x10);
    puVar9 = (undefined *)0x1;
    puVar1 = &uStack_80;
    puVar7 = &uStack_80;
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(ppuVar3);
    unaff_x21 = (long *)0x0;
    if (lVar12 != 0) {
      unaff_x21 = *(long **)(lVar12 + 8);
      _objc_retain(ppuVar3);
      if (ppuVar3 == (undefined **)0x0) {
        ppuVar2 = (undefined **)&UNK_10f3adf9b;
      }
      else {
        ppuVar2 = ppuVar3;
        _objc_retainAutorelease(ppuVar3);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar3);
      unaff_x23 = auStack_60;
      func_0x00010002b838(auStack_60,ppuVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      ppuVar2 = (undefined **)&UNK_11095d8c0;
      puVar10 = (undefined *)0x1;
      (**(code **)(*unaff_x21 + 0x18))(unaff_x21,&UNK_11095d8c0,&uStack_80,1);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      puVar9 = (undefined *)puVar7;
      unaff_x22 = &uStack_80;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar9 = (undefined *)puVar7;
        unaff_x22 = &uStack_80;
      }
    }
    unaff_x20 = ppuVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(ppuVar3);
    _objc_release(ppuVar3);
    unaff_x30 = FUN_106acb068;
    ppuVar6 = unaff_x20;
    __Unwind_Resume();
  }
  else {
    func_0x00010c0e44e0();
    _objc_release(puVar9);
    ppuVar6 = *(undefined ***)(param_1 + 0x10);
    puVar9 = (undefined *)0x1;
    puVar1 = (undefined8 *)register0x00000008;
    ppuVar3 = unaff_x19;
  }
  puVar8 = (undefined *)((long)puVar1 + -0x80);
  *(undefined1 **)((long)puVar1 + -0x40) = unaff_x24;
  *(undefined8 **)((long)puVar1 + -0x38) = unaff_x23;
  *(undefined8 **)((long)puVar1 + -0x30) = unaff_x22;
  *(long **)((long)puVar1 + -0x28) = unaff_x21;
  *(undefined ***)((long)puVar1 + -0x20) = unaff_x20;
  *(undefined ***)((long)puVar1 + -0x18) = ppuVar3;
  *(undefined1 **)((long)puVar1 + -0x10) = unaff_x29;
  *(code **)((long)puVar1 + -8) = unaff_x30;
  *(undefined8 *)((long)puVar1 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar2;
  puVar5 = puVar9;
  _objc_retain(ppuVar2);
  plVar11 = (long *)0x0;
  if (ppuVar6 != (undefined **)0x0) {
    plVar11 = (long *)ppuVar6[1];
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar3 = ppuVar2;
      _objc_retainAutorelease(ppuVar2);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar2);
    unaff_x23 = (undefined8 *)((long)puVar1 + -0x60);
    func_0x00010002b838((undefined1 *)((long)puVar1 + -0x60),ppuVar3);
    *(undefined8 *)((long)puVar1 + -0x80) = 0;
    *(undefined8 *)((long)puVar1 + -0x78) = 0;
    *(undefined8 *)((long)puVar1 + -0x70) = 0;
    func_0x00010007e1e8((undefined1 *)((long)puVar1 + -0x80),(undefined1 *)((long)puVar1 + -0x60),
                        (undefined1 *)((long)puVar1 + -0x48),1);
    ppuVar3 = (undefined **)&UNK_11095d910;
    (**(code **)(*plVar11 + 0x18))
              (plVar11,&UNK_11095d910,(undefined1 *)((long)puVar1 + -0x80),puVar9);
    *(undefined1 **)((long)puVar1 + -0x68) = (undefined1 *)((long)puVar1 + -0x80);
    func_0x00010007e5dc((undefined1 *)((long)puVar1 + -0x68));
    puVar5 = puVar8;
    puVar10 = puVar9;
    unaff_x22 = (undefined8 *)((long)puVar1 + -0x80);
    if (*(char *)((long)puVar1 + -0x49) < '\0') {
      __ZdlPv(*(undefined8 *)((long)puVar1 + -0x60));
      puVar5 = puVar8;
      puVar10 = puVar9;
      unaff_x22 = (undefined8 *)((long)puVar1 + -0x80);
    }
  }
  ppuVar6 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x48)) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar2);
  _objc_release(ppuVar2);
  ppuVar4 = ppuVar6;
  __Unwind_Resume();
  puVar8 = (undefined *)((long)puVar1 + -0x100);
  *(undefined1 **)((long)puVar1 + -0xc0) = unaff_x24;
  *(undefined8 **)((long)puVar1 + -0xb8) = unaff_x23;
  *(undefined8 **)((long)puVar1 + -0xb0) = unaff_x22;
  *(long **)((long)puVar1 + -0xa8) = plVar11;
  *(undefined ***)((long)puVar1 + -0xa0) = ppuVar6;
  *(undefined ***)((long)puVar1 + -0x98) = ppuVar2;
  *(undefined1 **)((long)puVar1 + -0x90) = (undefined1 *)((long)puVar1 + -0x10);
  *(code **)((long)puVar1 + -0x88) = FUN_106acb1dc;
  *(undefined8 *)((long)puVar1 + -200) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar3;
  puVar9 = puVar5;
  _objc_retain(ppuVar3);
  plVar11 = (long *)0x0;
  if (ppuVar4 != (undefined **)0x0) {
    plVar11 = (long *)ppuVar4[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar2 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar2 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    unaff_x23 = (undefined8 *)((long)puVar1 + -0xe0);
    func_0x00010002b838((undefined1 *)((long)puVar1 + -0xe0),ppuVar2);
    *(undefined8 *)((long)puVar1 + -0x100) = 0;
    *(undefined8 *)((long)puVar1 + -0xf8) = 0;
    *(undefined8 *)((long)puVar1 + -0xf0) = 0;
    func_0x00010007e1e8((undefined1 *)((long)puVar1 + -0x100),(undefined1 *)((long)puVar1 + -0xe0),
                        (undefined1 *)((long)puVar1 + -200),1);
    ppuVar2 = (undefined **)&UNK_11095d960;
    (**(code **)(*plVar11 + 0x18))
              (plVar11,&UNK_11095d960,(undefined1 *)((long)puVar1 + -0x100),puVar5);
    *(undefined1 **)((long)puVar1 + -0xe8) = (undefined1 *)((long)puVar1 + -0x100);
    func_0x00010007e5dc((undefined1 *)((long)puVar1 + -0xe8));
    puVar9 = puVar8;
    puVar10 = puVar5;
    unaff_x22 = (undefined8 *)((long)puVar1 + -0x100);
    if (*(char *)((long)puVar1 + -0xc9) < '\0') {
      __ZdlPv(*(undefined8 *)((long)puVar1 + -0xe0));
      puVar9 = puVar8;
      puVar10 = puVar5;
      unaff_x22 = (undefined8 *)((long)puVar1 + -0x100);
    }
  }
  ppuVar6 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -200)) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  ppuVar4 = ppuVar6;
  __Unwind_Resume();
  *(undefined1 **)((long)puVar1 + -0x140) = unaff_x24;
  *(undefined8 **)((long)puVar1 + -0x138) = unaff_x23;
  *(undefined8 **)((long)puVar1 + -0x130) = unaff_x22;
  *(long **)((long)puVar1 + -0x128) = plVar11;
  *(undefined ***)((long)puVar1 + -0x120) = ppuVar6;
  *(undefined ***)((long)puVar1 + -0x118) = ppuVar3;
  *(undefined1 **)((long)puVar1 + -0x110) = (undefined1 *)((long)puVar1 + -0x90);
  *(code **)((long)puVar1 + -0x108) = FUN_106acb350;
  *(undefined8 *)((long)puVar1 + -0x148) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar2;
  puVar5 = puVar9;
  puVar8 = puVar10;
  _objc_retain(ppuVar2);
  _objc_retain(puVar9);
  puVar13 = (undefined1 *)0x0;
  if (ppuVar4 != (undefined **)0x0) {
    plVar11 = (long *)ppuVar4[1];
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar3 = ppuVar2;
      _objc_retainAutorelease(ppuVar2);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar2);
    unaff_x24 = (undefined1 *)((long)puVar1 + -0x178);
    func_0x00010002b838((undefined1 *)((long)puVar1 + -0x178),ppuVar3);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar5 = &UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar5 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838((undefined1 *)((long)puVar1 + -0x160),puVar5);
    *(undefined8 *)((long)puVar1 + -0x198) = 0;
    *(undefined8 *)((long)puVar1 + -400) = 0;
    *(undefined8 *)((long)puVar1 + -0x188) = 0;
    func_0x00010007e1e8((undefined1 *)((long)puVar1 + -0x198),(undefined1 *)((long)puVar1 + -0x178),
                        (undefined1 *)((long)puVar1 + -0x148),2);
    ppuVar3 = (undefined **)&UNK_11095d9b0;
    unaff_x23 = (undefined8 *)((long)puVar1 + -0x198);
    puVar5 = (undefined *)((long)puVar1 + -0x198);
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095d9b0,puVar5,puVar10);
    *(undefined8 **)((long)puVar1 + -0x180) = unaff_x23;
    func_0x00010007e5dc((undefined1 *)((long)puVar1 + -0x180));
    lVar12 = 0;
    puVar13 = (undefined1 *)((long)puVar1 + -0x178);
    puVar8 = puVar10;
    do {
      if ((char)puVar13[lVar12 + 0x2f] < '\0') {
        __ZdlPv(*(undefined8 *)(puVar13 + lVar12 + 0x18));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar9);
  ppuVar6 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x148)) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (*(char *)((long)puVar1 + -0x161) < '\0') {
    __ZdlPv(*(undefined8 *)((long)puVar1 + -0x178));
  }
  _objc_release(puVar9);
  _objc_release(ppuVar2);
  ppuVar4 = ppuVar6;
  __Unwind_Resume();
  *(undefined1 **)((long)puVar1 + -0x1e0) = unaff_x24;
  *(undefined8 **)((long)puVar1 + -0x1d8) = unaff_x23;
  *(undefined1 **)((long)puVar1 + -0x1d0) = puVar13;
  *(undefined ***)((long)puVar1 + -0x1c8) = ppuVar6;
  *(undefined **)((long)puVar1 + -0x1c0) = puVar9;
  *(undefined ***)((long)puVar1 + -0x1b8) = ppuVar2;
  *(undefined1 **)((long)puVar1 + -0x1b0) = (undefined1 *)((long)puVar1 + -0x110);
  *(code **)((long)puVar1 + -0x1a8) = FUN_106acb580;
  *(undefined8 *)((long)puVar1 + -0x1e8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar3;
  puVar9 = puVar5;
  puVar10 = puVar8;
  _objc_retain(ppuVar3);
  _objc_retain(puVar5);
  puVar13 = (undefined1 *)0x0;
  if (ppuVar4 != (undefined **)0x0) {
    plVar11 = (long *)ppuVar4[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar2 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar2 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    unaff_x24 = (undefined1 *)((long)puVar1 + -0x218);
    func_0x00010002b838((undefined1 *)((long)puVar1 + -0x218),ppuVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar9 = &UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar9 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838((undefined1 *)((long)puVar1 + -0x200),puVar9);
    *(undefined8 *)((long)puVar1 + -0x238) = 0;
    *(undefined8 *)((long)puVar1 + -0x230) = 0;
    *(undefined8 *)((long)puVar1 + -0x228) = 0;
    func_0x00010007e1e8((undefined1 *)((long)puVar1 + -0x238),(undefined1 *)((long)puVar1 + -0x218),
                        (undefined1 *)((long)puVar1 + -0x1e8),2);
    ppuVar2 = (undefined **)&UNK_11095da00;
    unaff_x23 = (undefined8 *)((long)puVar1 + -0x238);
    puVar9 = (undefined *)((long)puVar1 + -0x238);
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095da00,puVar9,puVar8);
    *(undefined8 **)((long)puVar1 + -0x220) = unaff_x23;
    func_0x00010007e5dc((undefined1 *)((long)puVar1 + -0x220));
    lVar12 = 0;
    puVar13 = (undefined1 *)((long)puVar1 + -0x218);
    puVar10 = puVar8;
    do {
      if ((char)puVar13[lVar12 + 0x2f] < '\0') {
        __ZdlPv(*(undefined8 *)(puVar13 + lVar12 + 0x18));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar5);
  ppuVar6 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x1e8)) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (*(char *)((long)puVar1 + -0x201) < '\0') {
    __ZdlPv(*(undefined8 *)((long)puVar1 + -0x218));
  }
  _objc_release(puVar5);
  _objc_release(ppuVar3);
  ppuVar4 = ppuVar6;
  __Unwind_Resume();
  *(undefined1 **)((long)puVar1 + -0x280) = unaff_x24;
  *(undefined8 **)((long)puVar1 + -0x278) = unaff_x23;
  *(undefined1 **)((long)puVar1 + -0x270) = puVar13;
  *(undefined ***)((long)puVar1 + -0x268) = ppuVar6;
  *(undefined **)((long)puVar1 + -0x260) = puVar5;
  *(undefined ***)((long)puVar1 + -600) = ppuVar3;
  *(undefined1 **)((long)puVar1 + -0x250) = (undefined1 *)((long)puVar1 + -0x1b0);
  *(code **)((long)puVar1 + -0x248) = FUN_106acb7b0;
  *(undefined8 *)((long)puVar1 + -0x288) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar2;
  puVar5 = puVar9;
  puVar8 = puVar10;
  _objc_retain(ppuVar2);
  _objc_retain(puVar9);
  puVar13 = (undefined1 *)0x0;
  if (ppuVar4 != (undefined **)0x0) {
    plVar11 = (long *)ppuVar4[1];
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar3 = ppuVar2;
      _objc_retainAutorelease(ppuVar2);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar2);
    unaff_x24 = (undefined1 *)((long)puVar1 + -0x2b8);
    func_0x00010002b838((undefined1 *)((long)puVar1 + -0x2b8),ppuVar3);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar5 = &UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar5 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838((undefined1 *)((long)puVar1 + -0x2a0),puVar5);
    *(undefined8 *)((long)puVar1 + -0x2d8) = 0;
    *(undefined8 *)((long)puVar1 + -0x2d0) = 0;
    *(undefined8 *)((long)puVar1 + -0x2c8) = 0;
    func_0x00010007e1e8((undefined1 *)((long)puVar1 + -0x2d8),(undefined1 *)((long)puVar1 + -0x2b8),
                        (undefined1 *)((long)puVar1 + -0x288),2);
    ppuVar3 = (undefined **)&UNK_11095da50;
    unaff_x23 = (undefined8 *)((long)puVar1 + -0x2d8);
    puVar5 = (undefined *)((long)puVar1 + -0x2d8);
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095da50,puVar5,puVar10);
    *(undefined8 **)((long)puVar1 + -0x2c0) = unaff_x23;
    func_0x00010007e5dc((undefined1 *)((long)puVar1 + -0x2c0));
    lVar12 = 0;
    puVar13 = (undefined1 *)((long)puVar1 + -0x2b8);
    puVar8 = puVar10;
    do {
      if ((char)puVar13[lVar12 + 0x2f] < '\0') {
        __ZdlPv(*(undefined8 *)(puVar13 + lVar12 + 0x18));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar9);
  ppuVar6 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x288)) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (*(char *)((long)puVar1 + -0x2a1) < '\0') {
    __ZdlPv(*(undefined8 *)((long)puVar1 + -0x2b8));
  }
  _objc_release(puVar9);
  _objc_release(ppuVar2);
  ppuVar4 = ppuVar6;
  __Unwind_Resume();
  *(undefined1 **)((long)puVar1 + -800) = unaff_x24;
  *(undefined8 **)((long)puVar1 + -0x318) = unaff_x23;
  *(undefined1 **)((long)puVar1 + -0x310) = puVar13;
  *(undefined ***)((long)puVar1 + -0x308) = ppuVar6;
  *(undefined **)((long)puVar1 + -0x300) = puVar9;
  *(undefined ***)((long)puVar1 + -0x2f8) = ppuVar2;
  *(undefined1 **)((long)puVar1 + -0x2f0) = (undefined1 *)((long)puVar1 + -0x250);
  *(code **)((long)puVar1 + -0x2e8) = FUN_106acb9e0;
  *(undefined8 *)((long)puVar1 + -0x328) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar3;
  puVar9 = puVar5;
  _objc_retain(ppuVar3);
  _objc_retain(puVar5);
  puVar13 = (undefined1 *)0x0;
  if (ppuVar4 != (undefined **)0x0) {
    plVar11 = (long *)ppuVar4[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar2 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar2 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    unaff_x24 = (undefined1 *)((long)puVar1 + -0x358);
    func_0x00010002b838((undefined1 *)((long)puVar1 + -0x358),ppuVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar9 = &UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar9 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838((undefined1 *)((long)puVar1 + -0x340),puVar9);
    *(undefined8 *)((long)puVar1 + -0x378) = 0;
    *(undefined8 *)((long)puVar1 + -0x370) = 0;
    *(undefined8 *)((long)puVar1 + -0x368) = 0;
    func_0x00010007e1e8((undefined1 *)((long)puVar1 + -0x378),(undefined1 *)((long)puVar1 + -0x358),
                        (undefined1 *)((long)puVar1 + -0x328),2);
    ppuVar2 = (undefined **)&UNK_11095daa0;
    unaff_x23 = (undefined8 *)((long)puVar1 + -0x378);
    puVar9 = (undefined *)((long)puVar1 + -0x378);
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095daa0,puVar9,puVar8);
    *(undefined8 **)((long)puVar1 + -0x360) = unaff_x23;
    func_0x00010007e5dc((undefined1 *)((long)puVar1 + -0x360));
    lVar12 = 0;
    puVar13 = (undefined1 *)((long)puVar1 + -0x358);
    do {
      if ((char)puVar13[lVar12 + 0x2f] < '\0') {
        __ZdlPv(*(undefined8 *)(puVar13 + lVar12 + 0x18));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar5);
  ppuVar6 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x328)) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (*(char *)((long)puVar1 + -0x341) < '\0') {
    __ZdlPv(*(undefined8 *)((long)puVar1 + -0x358));
  }
  _objc_release(puVar5);
  _objc_release(ppuVar3);
  ppuVar4 = ppuVar6;
  __Unwind_Resume();
  puVar8 = (undefined *)((long)puVar1 + -0x400);
  *(undefined1 **)((long)puVar1 + -0x3c0) = unaff_x24;
  *(undefined8 **)((long)puVar1 + -0x3b8) = unaff_x23;
  *(undefined1 **)((long)puVar1 + -0x3b0) = puVar13;
  *(undefined ***)((long)puVar1 + -0x3a8) = ppuVar6;
  *(undefined **)((long)puVar1 + -0x3a0) = puVar5;
  *(undefined ***)((long)puVar1 + -0x398) = ppuVar3;
  *(undefined1 **)((long)puVar1 + -0x390) = (undefined1 *)((long)puVar1 + -0x2f0);
  *(code **)((long)puVar1 + -0x388) = FUN_106acbc10;
  *(undefined8 *)((long)puVar1 + -0x3c8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar2;
  puVar10 = puVar9;
  _objc_retain(ppuVar2);
  plVar11 = (long *)0x0;
  if (ppuVar4 != (undefined **)0x0) {
    plVar11 = (long *)ppuVar4[1];
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar3 = ppuVar2;
      _objc_retainAutorelease(ppuVar2);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar2);
    unaff_x23 = (undefined8 *)((long)puVar1 + -0x3e0);
    func_0x00010002b838((undefined1 *)((long)puVar1 + -0x3e0),ppuVar3);
    *(undefined8 *)((long)puVar1 + -0x400) = 0;
    *(undefined8 *)((long)puVar1 + -0x3f8) = 0;
    *(undefined8 *)((long)puVar1 + -0x3f0) = 0;
    func_0x00010007e1e8((undefined1 *)((long)puVar1 + -0x400),(undefined1 *)((long)puVar1 + -0x3e0),
                        (undefined1 *)((long)puVar1 + -0x3c8),1);
    ppuVar3 = (undefined **)&UNK_11095db40;
    (**(code **)(*plVar11 + 0x18))
              (plVar11,&UNK_11095db40,(undefined1 *)((long)puVar1 + -0x400),puVar9);
    *(undefined1 **)((long)puVar1 + -1000) = (undefined1 *)((long)puVar1 + -0x400);
    func_0x00010007e5dc((undefined1 *)((long)puVar1 + -1000));
    puVar10 = puVar8;
    puVar13 = (undefined1 *)((long)puVar1 + -0x400);
    if (*(char *)((long)puVar1 + -0x3c9) < '\0') {
      __ZdlPv(*(undefined8 *)((long)puVar1 + -0x3e0));
      puVar10 = puVar8;
      puVar13 = (undefined1 *)((long)puVar1 + -0x400);
    }
  }
  ppuVar6 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x3c8)) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar2);
  _objc_release(ppuVar2);
  ppuVar4 = ppuVar6;
  __Unwind_Resume();
  *(undefined1 **)((long)puVar1 + -0x440) = unaff_x24;
  *(undefined8 **)((long)puVar1 + -0x438) = unaff_x23;
  *(undefined1 **)((long)puVar1 + -0x430) = puVar13;
  *(long **)((long)puVar1 + -0x428) = plVar11;
  *(undefined ***)((long)puVar1 + -0x420) = ppuVar6;
  *(undefined ***)((long)puVar1 + -0x418) = ppuVar2;
  *(undefined1 **)((long)puVar1 + -0x410) = (undefined1 *)((long)puVar1 + -0x390);
  *(code **)((long)puVar1 + -0x408) = FUN_106acbd84;
  *(undefined8 *)((long)puVar1 + -0x448) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar3;
  _objc_retain(ppuVar3);
  if (ppuVar4 != (undefined **)0x0) {
    plVar11 = (long *)ppuVar4[1];
    ppuVar2 = (undefined **)&UNK_11095dbe0;
    (**(code **)(*plVar11 + 0x28))(plVar11,&UNK_11095dbe0);
    if ((int)plVar11 != 0) {
      plVar11 = (long *)ppuVar4[1];
      _objc_retain(ppuVar3);
      if (ppuVar3 == (undefined **)0x0) {
        ppuVar2 = (undefined **)&UNK_10f3adf9b;
      }
      else {
        ppuVar2 = ppuVar3;
        _objc_retainAutorelease(ppuVar3);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar3);
      func_0x00010002b838((undefined1 *)((long)puVar1 + -0x460),ppuVar2);
      *(undefined8 *)((long)puVar1 + -0x480) = 0;
      *(undefined8 *)((long)puVar1 + -0x478) = 0;
      *(undefined8 *)((long)puVar1 + -0x470) = 0;
      func_0x00010007e1e8((undefined1 *)((long)puVar1 + -0x480),
                          (undefined1 *)((long)puVar1 + -0x460),
                          (undefined1 *)((long)puVar1 + -0x448),1);
      ppuVar2 = (undefined **)&UNK_11095dbe0;
      (**(code **)(*plVar11 + 0x18))
                (plVar11,&UNK_11095dbe0,(undefined1 *)((long)puVar1 + -0x480),puVar10);
      *(undefined1 **)((long)puVar1 + -0x468) = (undefined1 *)((long)puVar1 + -0x480);
      func_0x00010007e5dc((undefined1 *)((long)puVar1 + -0x468));
      if (*(char *)((long)puVar1 + -0x449) < '\0') {
        __ZdlPv(*(undefined8 *)((long)puVar1 + -0x460));
      }
    }
  }
  ppuVar6 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x448)) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  ppuVar4 = ppuVar6;
  __Unwind_Resume();
  *(undefined ***)((long)puVar1 + -0x4a0) = ppuVar6;
  *(undefined ***)((long)puVar1 + -0x498) = ppuVar3;
  *(undefined1 **)((long)puVar1 + -0x490) = (undefined1 *)((long)puVar1 + -0x410);
  *(code **)((long)puVar1 + -0x488) = FUN_106acbf18;
  if (ppuVar4 != (undefined **)0x0) {
    plVar11 = (long *)ppuVar4[1];
    *(undefined8 *)((long)puVar1 + -0x4c0) = 0;
    *(undefined8 *)((long)puVar1 + -0x4b8) = 0;
    *(undefined8 *)((long)puVar1 + -0x4b0) = 0;
    (**(code **)(*plVar11 + 0x18))
              (plVar11,&UNK_11095dc30,(undefined1 *)((long)puVar1 + -0x4c0),ppuVar2);
    *(undefined1 **)((long)puVar1 + -0x4a8) = (undefined1 *)((long)puVar1 + -0x4c0);
    func_0x00010007e5dc((undefined1 *)((long)puVar1 + -0x4a8));
  }
  return;
}



/* Entry: 106acfe88; end: 106acfeb3; -[SCBlizzardEagerUploadClient _logEagerUploadLatencyWithStartTimeMillis:endTimeMillis:isSpectrum:] */

void FUN_106acfe88(long param_1,undefined8 param_2,long param_3,undefined8 *param_4,int param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  long *plStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined **ppuStack_328;
  undefined8 *puStack_320;
  undefined **ppuStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 auStack_2d8 [2];
  char cStack_2c1;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined **ppuStack_288;
  undefined8 *puStack_280;
  undefined **ppuStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 *puStack_1e0;
  undefined **ppuStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined **ppuStack_148;
  undefined8 *puStack_140;
  undefined **ppuStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar11 = (undefined8 *)(((long)param_4 - param_3) * 1000);
  lVar6 = *(long *)(param_1 + 0x10);
  ppuVar3 = &PTR____CFConstantStringClassReference_110db8118;
  if (param_5 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110db8138;
  }
  puVar8 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = ppuVar3;
  puVar5 = puVar11;
  _objc_retain(ppuVar3);
  if (lVar6 != 0) {
    plVar13 = *(long **)(lVar6 + 8);
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar1 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,ppuVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar1 = (undefined **)&UNK_11095d960;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095d960,&uStack_80,puVar11);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar8;
    param_4 = puVar11;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar8;
      param_4 = puVar11;
    }
  }
  ppuVar2 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  __Unwind_Resume();
  pcStack_88 = FUN_106acb350;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar1;
  puVar11 = puVar5;
  puVar10 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar1);
  _objc_retain(puVar5);
  puVar8 = (undefined8 *)0x0;
  if (ppuVar2 != (undefined **)0x0) {
    plVar13 = (long *)ppuVar2[1];
    _objc_retain(ppuVar1);
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar3 = ppuVar1;
      _objc_retainAutorelease(ppuVar1);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,ppuVar3);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar11 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_e0,puVar11);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    ppuVar3 = (undefined **)&UNK_11095d9b0;
    unaff_x23 = &uStack_118;
    puVar11 = &uStack_118;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095d9b0,puVar11,param_4);
    puStack_100 = unaff_x23;
    func_0x00010007e5dc(&puStack_100);
    lVar6 = 0;
    puVar8 = auStack_f8;
    puVar10 = param_4;
    do {
      if ((&cStack_c9)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(puVar5);
  ppuVar2 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(ppuVar1);
  ppuVar4 = ppuVar2;
  __Unwind_Resume();
  pcStack_128 = FUN_106acb580;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar3;
  puVar9 = puVar11;
  puVar12 = puVar10;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar8;
  ppuStack_148 = ppuVar2;
  puStack_140 = puVar5;
  ppuStack_138 = ppuVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(ppuVar3);
  _objc_retain(puVar11);
  puVar5 = (undefined8 *)0x0;
  if (ppuVar4 != (undefined **)0x0) {
    plVar13 = (long *)ppuVar4[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar1 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,ppuVar1);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar5 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_180,puVar5);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    ppuVar7 = (undefined **)&UNK_11095da00;
    unaff_x23 = &uStack_1b8;
    puVar9 = &uStack_1b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095da00,puVar9,puVar10);
    puStack_1a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1a0);
    lVar6 = 0;
    puVar5 = auStack_198;
    puVar12 = puVar10;
    do {
      if ((&cStack_169)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(puVar11);
  ppuVar1 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar11);
  _objc_release(ppuVar3);
  ppuVar4 = ppuVar1;
  __Unwind_Resume();
  pcStack_1c8 = FUN_106acb7b0;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar7;
  puVar8 = puVar9;
  puVar10 = puVar12;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar5;
  ppuStack_1e8 = ppuVar1;
  puStack_1e0 = puVar11;
  ppuStack_1d8 = ppuVar3;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(ppuVar7);
  _objc_retain(puVar9);
  puVar11 = (undefined8 *)0x0;
  if (ppuVar4 != (undefined **)0x0) {
    plVar13 = (long *)ppuVar4[1];
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar3 = ppuVar7;
      _objc_retainAutorelease(ppuVar7);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar7);
    unaff_x24 = auStack_238;
    func_0x00010002b838(auStack_238,ppuVar3);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar11 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_220,puVar11);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x00010007e1e8(&uStack_258,auStack_238,&lStack_208,2);
    ppuVar2 = (undefined **)&UNK_11095da50;
    unaff_x23 = &uStack_258;
    puVar8 = &uStack_258;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095da50,puVar8,puVar12);
    puStack_240 = unaff_x23;
    func_0x00010007e5dc(&puStack_240);
    lVar6 = 0;
    puVar11 = auStack_238;
    puVar10 = puVar12;
    do {
      if ((&cStack_209)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(puVar9);
  ppuVar3 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_221 < '\0') {
    __ZdlPv(auStack_238[0]);
  }
  _objc_release(puVar9);
  _objc_release(ppuVar7);
  ppuVar4 = ppuVar3;
  __Unwind_Resume();
  pcStack_268 = FUN_106acb9e0;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = ppuVar2;
  puVar5 = puVar8;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  puStack_290 = puVar11;
  ppuStack_288 = ppuVar3;
  puStack_280 = puVar9;
  ppuStack_278 = ppuVar7;
  pppuStack_270 = &pppuStack_1d0;
  _objc_retain(ppuVar2);
  _objc_retain(puVar8);
  puVar11 = (undefined8 *)0x0;
  if (ppuVar4 != (undefined **)0x0) {
    plVar13 = (long *)ppuVar4[1];
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar3 = ppuVar2;
      _objc_retainAutorelease(ppuVar2);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar2);
    unaff_x24 = auStack_2d8;
    func_0x00010002b838(auStack_2d8,ppuVar3);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar11 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_2c0,puVar11);
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    func_0x00010007e1e8(&uStack_2f8,auStack_2d8,&lStack_2a8,2);
    ppuVar1 = (undefined **)&UNK_11095daa0;
    unaff_x23 = &uStack_2f8;
    puVar5 = &uStack_2f8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095daa0,puVar5,puVar10);
    puStack_2e0 = unaff_x23;
    func_0x00010007e5dc(&puStack_2e0);
    lVar6 = 0;
    puVar11 = auStack_2d8;
    do {
      if ((&cStack_2a9)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2c0 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(puVar8);
  ppuVar3 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_2c1 < '\0') {
    __ZdlPv(auStack_2d8[0]);
  }
  _objc_release(puVar8);
  _objc_release(ppuVar2);
  ppuVar4 = ppuVar3;
  __Unwind_Resume();
  puVar9 = &uStack_380;
  pcStack_308 = FUN_106acbc10;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar1;
  puVar10 = puVar5;
  puStack_340 = unaff_x24;
  puStack_338 = unaff_x23;
  puStack_330 = puVar11;
  ppuStack_328 = ppuVar3;
  puStack_320 = puVar8;
  ppuStack_318 = ppuVar2;
  pppuStack_310 = &pppuStack_270;
  _objc_retain(ppuVar1);
  plVar13 = (long *)0x0;
  if (ppuVar4 != (undefined **)0x0) {
    plVar13 = (long *)ppuVar4[1];
    _objc_retain(ppuVar1);
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar3 = ppuVar1;
      _objc_retainAutorelease(ppuVar1);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar1);
    unaff_x23 = auStack_360;
    func_0x00010002b838(auStack_360,ppuVar3);
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_348,1);
    ppuVar7 = (undefined **)&UNK_11095db40;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095db40,&uStack_380,puVar5);
    puStack_368 = (undefined1 *)&uStack_380;
    func_0x00010007e5dc(&puStack_368);
    puVar10 = puVar9;
    puVar11 = &uStack_380;
    if (cStack_349 < '\0') {
      __ZdlPv(auStack_360[0]);
      puVar10 = puVar9;
      puVar11 = &uStack_380;
    }
  }
  ppuVar3 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  ppuVar4 = ppuVar3;
  __Unwind_Resume();
  pcStack_388 = FUN_106acbd84;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar7;
  puStack_3c0 = unaff_x24;
  puStack_3b8 = unaff_x23;
  puStack_3b0 = puVar11;
  plStack_3a8 = plVar13;
  ppuStack_3a0 = ppuVar3;
  ppuStack_398 = ppuVar1;
  pppuStack_390 = &pppuStack_310;
  _objc_retain(ppuVar7);
  if (ppuVar4 != (undefined **)0x0) {
    plVar13 = (long *)ppuVar4[1];
    ppuVar2 = (undefined **)&UNK_11095dbe0;
    (**(code **)(*plVar13 + 0x28))(plVar13,&UNK_11095dbe0);
    if ((int)plVar13 != 0) {
      plVar13 = (long *)ppuVar4[1];
      _objc_retain(ppuVar7);
      if (ppuVar7 == (undefined **)0x0) {
        ppuVar3 = (undefined **)&UNK_10f3adf9b;
      }
      else {
        ppuVar3 = ppuVar7;
        _objc_retainAutorelease(ppuVar7);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar7);
      func_0x00010002b838(auStack_3e0,ppuVar3);
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      func_0x00010007e1e8(&uStack_400,auStack_3e0,&lStack_3c8,1);
      ppuVar2 = (undefined **)&UNK_11095dbe0;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095dbe0,&uStack_400,puVar10);
      puStack_3e8 = (undefined1 *)&uStack_400;
      func_0x00010007e5dc(&puStack_3e8);
      if (cStack_3c9 < '\0') {
        __ZdlPv(auStack_3e0[0]);
      }
    }
  }
  ppuVar3 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar7);
  _objc_release(ppuVar7);
  ppuVar1 = ppuVar3;
  __Unwind_Resume();
  puStack_428 = (undefined1 *)&uStack_440;
  pcStack_408 = FUN_106acbf18;
  if (ppuVar1 != (undefined **)0x0) {
    uStack_440 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    ppuStack_420 = ppuVar3;
    ppuStack_418 = ppuVar7;
    pppuStack_410 = &pppuStack_390;
    (**(code **)(*(long *)ppuVar1[1] + 0x18))(ppuVar1[1],&UNK_11095dc30,&uStack_440,ppuVar2);
    func_0x00010007e5dc(&puStack_428);
  }
  return;
}



/* Entry: 106acfeb4; end: 106acfeef; -[SCBlizzardEagerUploadClient .cxx_destruct] */

void FUN_106acfeb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106acfef0; end: 106acff2b; -[SCBlizzardEagerUploadIdProvider getNextId] */

long FUN_106acfef0(long param_1)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 8) + 1;
  *(long *)(param_1 + 8) = lVar1;
  _os_unfair_lock_unlock(param_1 + 0x10);
  return lVar1;
}



/* Entry: 106acff2c; end: 106acffcf; -[SCBlizzardEagerUploadStatusManager getFileEagerUploadStatus:] */

long FUN_106acff2c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = 3;
    }
    else {
      lVar2 = lVar1;
      func_0x00010c067fc0(lVar1);
    }
    _objc_release(lVar1);
  }
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 106acffd0; end: 106ad0033; -[SCBlizzardEagerUploadStatusManager onFileEagerUploadSuccess:] */

void FUN_106acffd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8110,param_3);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ad0034; end: 106ad0097; -[SCBlizzardEagerUploadStatusManager onFileEagerUploadFail:] */

void FUN_106ad0034(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8128,param_3);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ad0098; end: 106ad00fb; -[SCBlizzardEagerUploadStatusManager onFileEagerUploadInProgress:] */

void FUN_106ad0098(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8140,param_3);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ad00fc; end: 106ad0107; -[SCBlizzardEagerUploadStatusManager .cxx_destruct] */

void FUN_106ad00fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ad0108; end: 106ad01d7; -[SCBlizzardAppExtensionEntryPoint begin] */

void FUN_106ad0108(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = 0x11;
  _dispatch_get_global_queue(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x106ad01ac;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(uVar1,&puStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106ad01d8; end: 106ad041f; -[SCBlizzardAppExtensionEntryPoint _beginEventProcessing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ad01d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126d0300;
  _objc_alloc();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112757718;
    _objc_loadWeakRetained(lVar7);
  }
  lVar2 = lVar7;
  func_0x00010c293740(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d0308;
  _objc_alloc_init(PTR_PTR_1126d0308);
  if (param_1 == 0) {
    lVar10 = 0;
    lVar9 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_11275771c;
    _objc_loadWeakRetained(lVar10);
    lVar9 = param_1 + _DAT_112757724;
    _objc_loadWeakRetained(lVar9);
  }
  lVar5 = lVar9;
  func_0x00010bf398e0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b380(puVar1,param_2,lVar3,puVar4,lVar10,lVar5);
  lVar8 = (long)_DAT_112757708;
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar9);
  _objc_release(lVar10);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar7);
  puVar1 = PTR_PTR_1126d0310;
  _objc_alloc(PTR_PTR_1126d0310);
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  lVar7 = param_1 + _DAT_112757720;
  _objc_loadWeakRetained(lVar7);
  lVar2 = lVar7;
  func_0x00010bf058c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010d40(puVar1,param_2,uVar6,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar7);
  lVar7 = param_1 + _DAT_112757714;
  _objc_loadWeakRetained();
  lVar2 = lVar7;
  func_0x00010bf06620();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar3;
  func_0x00010bf54940();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11275770c;
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  *(long *)(param_1 + lVar9) = lVar10;
  _objc_release(uVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar7);
  func_0x00010bf18720(*(undefined8 *)(param_1 + lVar9),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ad0420; end: 106ad04fb; -[SCBlizzardAppExtensionEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ad0420(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  lVar3 = (long)_DAT_112757708;
  if (*(long *)(param_1 + lVar3) == 0) {
    puStack_38 = PTR_PTR_1126f4aa0;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112757710;
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c114a20(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c117720(*(undefined8 *)(param_1 + lVar4));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ad04fc; end: 106ad050f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ad04fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112757710),
             PTR_s_finish_1125c9748);
  return;
}



/* Entry: 106ad0510; end: 106ad05a7; -[SCBlizzardAppExtensionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ad0510(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112757728);
  _objc_destroyWeak(param_1 + _DAT_112757724);
  _objc_destroyWeak(param_1 + _DAT_112757720);
  _objc_destroyWeak(param_1 + _DAT_11275771c);
  _objc_destroyWeak(param_1 + _DAT_112757718);
  _objc_destroyWeak(param_1 + _DAT_112757714);
  _objc_storeStrong(param_1 + _DAT_112757708,0);
  _objc_storeStrong(param_1 + _DAT_112757710,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275770c,0);
  return;
}



/* Entry: 106ad05a8; end: 106ad064b; -[SCBlizzardAppExtensionLifecycleObserver initWithEventProcessor:appLifecycleManager:] */

undefined1 *
FUN_106ad05a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4aa8;
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



/* Entry: 106ad064c; end: 106ad064f; -[SCBlizzardAppExtensionLifecycleObserver onAppDidBecomeActive] */

void FUN_106ad064c(void)

{
  return;
}



/* Entry: 106ad0650; end: 106ad0653; -[SCBlizzardAppExtensionLifecycleObserver onAppDidEnterBackground] */

void FUN_106ad0650(void)

{
  return;
}



/* Entry: 106ad0654; end: 106ad0657; -[SCBlizzardAppExtensionLifecycleObserver onAppDidFinishLaunching] */

void FUN_106ad0654(void)

{
  return;
}



/* Entry: 106ad0658; end: 106ad065b; -[SCBlizzardAppExtensionLifecycleObserver onAppWillEnterForeground] */

void FUN_106ad0658(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be80f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__processEvents_11257dd68);
  return;
}



/* Entry: 106ad065c; end: 106ad065f; -[SCBlizzardAppExtensionLifecycleObserver onAppWillResignActive] */

void FUN_106ad065c(void)

{
  return;
}



/* Entry: 106ad0660; end: 106ad0663; -[SCBlizzardAppExtensionLifecycleObserver onAppWillTerminate] */

void FUN_106ad0660(void)

{
  return;
}



/* Entry: 106ad0664; end: 106ad0667; -[SCBlizzardAppExtensionLifecycleObserver onUserLoggedIn] */

void FUN_106ad0664(void)

{
  return;
}



/* Entry: 106ad0668; end: 106ad066b; -[SCBlizzardAppExtensionLifecycleObserver onUserRegistered] */

void FUN_106ad0668(void)

{
  return;
}



/* Entry: 106ad066c; end: 106ad066f; -[SCBlizzardAppExtensionLifecycleObserver onUserResumed:didLaunchWithDataUnavailable:] */

void FUN_106ad066c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be80f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__processEvents_11257dd68);
  return;
}



/* Entry: 106ad0670; end: 106ad07cb; -[SCBlizzardAppExtensionLifecycleObserver _processEvents] */

void FUN_106ad0670(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR_PTR_1126ae960;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126d0318;
  func_0x00010bf1cd00(PTR_PTR_1126d0318);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf63680(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae970;
  func_0x00010c0b5920(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 9;
  func_0x0001000819a8(9,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c2a14e0(uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106ad07cc; end: 106ad0803;  */

void FUN_106ad07cc(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c114a20(*(undefined8 *)(param_1 + 8),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ad0804; end: 106ad0833; -[SCBlizzardAppExtensionLifecycleObserver .cxx_destruct] */

void FUN_106ad0804(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ad0834; end: 106ad09af; -[SCBlizzardExtensionEventProcessor initWithUserId:grapheneRegistry:logger:circumstanceEngine:] */

undefined1 *
FUN_106ad0834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f4ab0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ba528;
    _objc_alloc();
    func_0x00010bfef8c0();
    puVar4 = puVar3;
    func_0x00010c25e460();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ad09b0; end: 106ad0a3f; -[SCBlizzardExtensionEventProcessor processEvents:] */

void FUN_106ad09b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106ad0a40;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106ad0a40; end: 106ad0a4b;  */

void FUN_106ad0a40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be80f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processEvents__11257dd70,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106ad0a4c; end: 106ad0bfb; -[SCBlizzardExtensionEventProcessor _processEvents:] */

void FUN_106ad0a4c(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_218;
  long lStack_190;
  long lStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long alStack_e0 [17];
  long lStack_58;
  
  plVar18 = &lStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x10);
  alStack_e0[0] = 0;
  plVar14 = alStack_e0;
  func_0x00010bfad480();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = alStack_e0[0];
  _objc_retain(alStack_e0[0]);
  if (lVar13 == 0) {
    uVar20 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = lVar2;
    func_0x00010bf529e0(lVar2);
    FUN_106ac4810(uVar20,lVar3);
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      lVar3 = lVar2;
      func_0x00010c246d00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      lStack_120 = 0;
      uStack_108 = 0;
      plStack_110 = (long *)0x0;
      _objc_retain(lVar3);
      lVar2 = lVar3;
      func_0x00010bf52a60();
      if (lVar2 != 0) {
        lVar22 = *plStack_110;
        do {
          lVar23 = 0;
          do {
            if (*plStack_110 != lVar22) {
              _objc_enumerationMutation(lVar3);
            }
            func_0x00010be80f60(param_1);
            lVar23 = lVar23 + 1;
          } while (lVar2 != lVar23);
          lVar2 = lVar3;
          plVar18 = &lStack_120;
          func_0x00010bf52a60();
        } while (lVar2 != 0);
      }
      _objc_release(lVar3);
      lVar2 = lVar3;
      plVar14 = plVar18;
    }
  }
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(lVar2);
  _objc_release(lVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(plVar14);
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bdc2c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b7490;
    _objc_alloc();
    puVar6 = puVar5;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfef900();
    _objc_release(puVar6);
    puVar6 = puVar4;
    func_0x00010c121280();
    _objc_retainAutoreleasedReturnValue();
    uStack_218 = 0;
    func_0x00010bf6bde0(puVar4);
    uVar20 = uStack_218;
    _objc_retain();
    puVar7 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    puVar8 = puVar7;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = 0;
    uVar25 = 0;
    uVar26 = 0;
    uVar27 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    puVar19 = &uStack_260;
    puVar10 = puVar9;
    func_0x00010bf52a60();
    if (puVar10 != (undefined *)0x0) {
      lVar2 = *plStack_250;
      do {
        puVar21 = (undefined *)0x0;
        do {
          if (*plStack_250 != lVar2) {
            _objc_enumerationMutation(puVar9);
          }
          uVar11 = *(undefined8 *)(param_3 + 0x28);
          func_0x00010c293fc0();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar11;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0af340();
          _objc_release(uVar12);
          _objc_release(uVar11);
          lVar13 = param_3;
          func_0x00010be091c0();
          if ((int)lVar13 != 0) {
            func_0x00010be24620(param_3);
          }
          puVar21 = puVar21 + 1;
        } while (puVar10 != puVar21);
        puVar19 = &uStack_260;
        puVar10 = puVar9;
        func_0x00010bf52a60();
      } while (puVar10 != (undefined *)0x0);
    }
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar20);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_190) {
      ___stack_chk_fail();
      _objc_retain(puVar19);
      puVar15 = puVar19;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
      func_0x00010c0720c0();
      _objc_release(puVar15);
      if ((int)puVar16 != 0) {
        puVar15 = puVar19;
        func_0x00010c0e00e0(puVar19);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar19;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar16;
        func_0x00010c0720c0();
        ppuVar1 = &PTR____CFConstantStringClassReference_110e12638;
        if ((int)puVar17 == 0) {
          ppuVar1 = &PTR____CFConstantStringClassReference_110df09d8;
        }
        _objc_retain(ppuVar1);
        _objc_release(puVar16);
        puVar16 = puVar19;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar16 != (undefined8 *)0x0) {
          lVar2 = plVar14[4];
          puVar16 = puVar19;
          func_0x00010c0e00e0(puVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          FUN_106ac5fe0(lVar2,ppuVar1,puVar15,
                        (long)(double)CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar29,CONCAT14(
                                                  uVar28,CONCAT13(uVar27,CONCAT12(uVar26,CONCAT11(
                                                  uVar25,uVar24))))))));
          _objc_release(puVar16);
        }
        puVar16 = puVar19;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar16;
        func_0x00010bf1f3c0();
        _objc_release(puVar16);
        if ((int)puVar17 != 0) {
          FUN_106ac6670(plVar14[4],ppuVar1,puVar15,1);
        }
        puVar16 = puVar19;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar16 != (undefined8 *)0x0) {
          lVar2 = plVar14[4];
          puVar16 = puVar19;
          func_0x00010c0e00e0(puVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          FUN_106ac6210(lVar2,ppuVar1,puVar15,
                        (long)(double)CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar29,CONCAT14(
                                                  uVar28,CONCAT13(uVar27,CONCAT12(uVar26,CONCAT11(
                                                  uVar25,uVar24))))))));
          _objc_release(puVar16);
        }
        puVar16 = puVar19;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar16 != (undefined8 *)0x0) {
          lVar2 = plVar14[4];
          puVar16 = puVar19;
          func_0x00010c0e00e0(puVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          FUN_106ac6440(lVar2,ppuVar1,puVar15,
                        (long)(double)CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar29,CONCAT14(
                                                  uVar28,CONCAT13(uVar27,CONCAT12(uVar26,CONCAT11(
                                                  uVar25,uVar24))))))));
          _objc_release(puVar16);
        }
        puVar16 = puVar19;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar16 != (undefined8 *)0x0) {
          lVar2 = plVar14[4];
          puVar16 = puVar19;
          func_0x00010c0e00e0(puVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          FUN_106ac5b80(lVar2,ppuVar1,puVar15,
                        (long)(double)CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar29,CONCAT14(
                                                  uVar28,CONCAT13(uVar27,CONCAT12(uVar26,CONCAT11(
                                                  uVar25,uVar24))))))));
          _objc_release(puVar16);
        }
        puVar16 = puVar19;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar16 != (undefined8 *)0x0) {
          lVar2 = plVar14[4];
          puVar16 = puVar19;
          func_0x00010c0e00e0(puVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          FUN_106ac5db0(lVar2,ppuVar1,puVar15,
                        (long)(double)CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar29,CONCAT14(
                                                  uVar28,CONCAT13(uVar27,CONCAT12(uVar26,CONCAT11(
                                                  uVar25,uVar24))))))));
          _objc_release(puVar16);
        }
        _objc_release(ppuVar1);
        _objc_release(puVar15);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar19);
      return;
    }
    return;
  }
  return;
}



/* Entry: 106ad0bfc; end: 106ad0eab; -[SCBlizzardExtensionEventProcessor _processEventsFile:] */

void FUN_106ad0bfc(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b7490;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfef900();
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00010c121280();
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = 0;
  func_0x00010bf6bde0(puVar2);
  uVar17 = uStack_f8;
  _objc_retain();
  puVar5 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  func_0x00010bfeea60();
  func_0x00010c1ec620();
  puVar6 = puVar5;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puVar15 = &uStack_140;
  puVar8 = puVar7;
  func_0x00010bf52a60();
  if (puVar8 != (undefined *)0x0) {
    lVar18 = *plStack_130;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar18) {
          _objc_enumerationMutation(puVar7);
        }
        uVar9 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c293fc0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0af340();
        _objc_release(uVar10);
        _objc_release(uVar9);
        lVar11 = param_1;
        func_0x00010be091c0();
        if ((int)lVar11 != 0) {
          func_0x00010be24620(param_1);
        }
        puVar16 = puVar16 + 1;
      } while (puVar8 != puVar16);
      puVar15 = &uStack_140;
      puVar8 = puVar7;
      func_0x00010bf52a60();
    } while (puVar8 != (undefined *)0x0);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar17);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar15);
  puVar12 = puVar15;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c0720c0();
  _objc_release(puVar12);
  if ((int)puVar13 != 0) {
    puVar12 = puVar15;
    func_0x00010c0e00e0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar15;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c0720c0();
    ppuVar1 = &PTR____CFConstantStringClassReference_110e12638;
    if ((int)puVar14 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110df09d8;
    }
    _objc_retain(ppuVar1);
    _objc_release(puVar13);
    puVar13 = puVar15;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar13 != (undefined8 *)0x0) {
      uVar17 = *(undefined8 *)(param_3 + 0x20);
      puVar13 = puVar15;
      func_0x00010c0e00e0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      FUN_106ac5fe0(uVar17,ppuVar1,puVar12,
                    (long)(double)CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,
                                                  CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,
                                                  uVar19))))))));
      _objc_release(puVar13);
    }
    puVar13 = puVar15;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf1f3c0();
    _objc_release(puVar13);
    if ((int)puVar14 != 0) {
      FUN_106ac6670(*(undefined8 *)(param_3 + 0x20),ppuVar1,puVar12,1);
    }
    puVar13 = puVar15;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar13 != (undefined8 *)0x0) {
      uVar17 = *(undefined8 *)(param_3 + 0x20);
      puVar13 = puVar15;
      func_0x00010c0e00e0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      FUN_106ac6210(uVar17,ppuVar1,puVar12,
                    (long)(double)CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,
                                                  CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,
                                                  uVar19))))))));
      _objc_release(puVar13);
    }
    puVar13 = puVar15;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar13 != (undefined8 *)0x0) {
      uVar17 = *(undefined8 *)(param_3 + 0x20);
      puVar13 = puVar15;
      func_0x00010c0e00e0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      FUN_106ac6440(uVar17,ppuVar1,puVar12,
                    (long)(double)CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,
                                                  CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,
                                                  uVar19))))))));
      _objc_release(puVar13);
    }
    puVar13 = puVar15;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar13 != (undefined8 *)0x0) {
      uVar17 = *(undefined8 *)(param_3 + 0x20);
      puVar13 = puVar15;
      func_0x00010c0e00e0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      FUN_106ac5b80(uVar17,ppuVar1,puVar12,
                    (long)(double)CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,
                                                  CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,
                                                  uVar19))))))));
      _objc_release(puVar13);
    }
    puVar13 = puVar15;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar13 != (undefined8 *)0x0) {
      uVar17 = *(undefined8 *)(param_3 + 0x20);
      puVar13 = puVar15;
      func_0x00010c0e00e0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      FUN_106ac5db0(uVar17,ppuVar1,puVar12,
                    (long)(double)CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,
                                                  CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,
                                                  uVar19))))))));
      _objc_release(puVar13);
    }
    _objc_release(ppuVar1);
    _objc_release(puVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar15);
  return;
}



/* Entry: 106ad0eac; end: 106ad11d3; -[SCBlizzardExtensionEventProcessor _grapheneLogExtensionEvents:] */

void FUN_106ad0eac(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0720c0();
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0720c0();
    ppuVar1 = &PTR____CFConstantStringClassReference_110e12638;
    if ((int)lVar4 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110df09d8;
    }
    _objc_retain(ppuVar1);
    _objc_release(lVar3);
    lVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      lVar3 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      FUN_106ac5fe0(uVar5,ppuVar1,lVar2,(long)param_1);
      _objc_release(lVar3);
    }
    lVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1f3c0();
    _objc_release(lVar3);
    if ((int)lVar4 != 0) {
      FUN_106ac6670(*(undefined8 *)(param_2 + 0x20),ppuVar1,lVar2,1);
    }
    lVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      lVar3 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      FUN_106ac6210(uVar5,ppuVar1,lVar2,(long)param_1);
      _objc_release(lVar3);
    }
    lVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      lVar3 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      FUN_106ac6440(uVar5,ppuVar1,lVar2,(long)param_1);
      _objc_release(lVar3);
    }
    lVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      lVar3 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      FUN_106ac5b80(uVar5,ppuVar1,lVar2,(long)param_1);
      _objc_release(lVar3);
    }
    lVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      lVar3 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      FUN_106ac5db0(uVar5,ppuVar1,lVar2,(long)param_1);
      _objc_release(lVar3);
    }
    _objc_release(ppuVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106ad11d4; end: 106ad11eb; -[SCBlizzardExtensionEventProcessor _enableUplodingNSEBlizzardEventsToGraphene] */

void FUN_106ad11d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e6d538,0,0);
  return;
}



/* Entry: 106ad11ec; end: 106ad124b; -[SCBlizzardExtensionEventProcessor .cxx_destruct] */

void FUN_106ad11ec(long param_1)

{
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



/* Entry: 106ad124c; end: 106ad128f; -[SCBlizzardBitmojiProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ad124c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d0320;
  param_1 = param_1 + _DAT_11275774c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c170e60(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ad1290; end: 106ad12e7; -[SCBlizzardBitmojiProviderEntryPoint end] */

void FUN_106ad1290(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c170e60(PTR_PTR_1126d0320,param_2,0);
  puStack_28 = PTR_PTR_1126f4ab8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ad12e8; end: 106ad131f; -[SCBlizzardBitmojiProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ad12e8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112757750);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275774c);
  return;
}



/* Entry: 106ad1320; end: 106ad1363; -[SCBlizzardCallingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ad1320(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d0320;
  param_1 = param_1 + _DAT_112757754;
  _objc_loadWeakRetained(param_1);
  func_0x00010c211a80(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ad1364; end: 106ad13bb; -[SCBlizzardCallingEntryPoint end] */

void FUN_106ad1364(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c211a80(PTR_PTR_1126d0320,param_2,0);
  puStack_28 = PTR_PTR_1126f4ac0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ad13bc; end: 106ad13f3; -[SCBlizzardCallingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ad13bc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112757758);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112757754);
  return;
}



/* Entry: 106ad13f4; end: 106ad144b; -[SCActiveUserBlizzardEntryPoint end] */

void FUN_106ad13f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c20c620(PTR_PTR_1126d0320,param_2,0);
  puStack_28 = PTR_PTR_1126f4ac8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ad144c; end: 106ad1493; -[SCActiveUserBlizzardEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ad144c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275775c);
  _objc_destroyWeak(param_1 + _DAT_112757760);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112757764,0);
  return;
}



/* Entry: 106ad1494; end: 106ad14d7; -[SCBlizzardBackgroundUploadEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ad1494(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112757770);
  _objc_destroyWeak(param_1 + _DAT_112757768);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275776c);
  return;
}



/* Entry: 106ad14d8; end: 106ad155b; -[SCBlizzardClientIdProviderImpl renewClientId] */

void FUN_106ad14d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  _os_unfair_lock_lock(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be8e820(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106ad155c; end: 106ad156f; -[SCBlizzardClientIdProviderImpl _addClientIdToKeychain:] */

void FUN_106ad155c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16e550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126aef90,PTR_s_setBackgroundData_forKey__112639370,param_3,
             &PTR____CFConstantStringClassReference_110e6d598);
  return;
}



/* Entry: 106ad1570; end: 106ad1583; -[SCBlizzardClientIdProviderImpl _retrieveClientIdFromKeychain] */

void FUN_106ad1570(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf63b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126aef90,PTR_s_dataForKey__1125b6868,
             &PTR____CFConstantStringClassReference_110e6d598);
  return;
}



/* Entry: 106ad1584; end: 106ad15eb; -[SCBlizzardClientIdProviderImpl _updateBothMemCacheAndUserDefaults:date:] */

void FUN_106ad1584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bdd7980(param_1,param_2,param_3,param_4);
  func_0x00010be98c80(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ad15ec; end: 106ad16e7; -[SCBlizzardClientIdProviderImpl _saveClientIdToUserDefaults:date:] */

void FUN_106ad15ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c24d8e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e6d558;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e6d558;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e6d578;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_58 = param_3;
  uStack_50 = param_4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = puVar2;
  func_0x00010c1d0560(puVar1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  _objc_retain(ppuVar6);
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110e6d558;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110e6d578;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_c8 = puVar4;
  ppuStack_c0 = ppuVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_c8,&ppuStack_d8,2);
  _objc_retainAutoreleasedReturnValue();
  lStack_e0 = 0;
  puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  puVar5 = puVar2;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,puVar2,0,&lStack_e0);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_e0 == 0) {
    puVar5 = puVar3;
    func_0x00010bdc6480(puVar1,param_2,puVar3);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar6);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar5;
  _objc_retain(puVar5);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd7980(puVar4,param_2,puVar1,puVar5);
  func_0x00010be98c80(puVar4,param_2,puVar1,puVar5);
  func_0x00010be98c60(puVar4,param_2,puVar1,puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ad16e8; end: 106ad17f7; -[SCBlizzardClientIdProviderImpl _saveClientIdToKeychain:date:] */

void FUN_106ad16e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e6d558;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e6d578;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_58 = param_3;
  uStack_50 = param_4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  lStack_70 = 0;
  puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  puVar3 = puVar1;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,puVar1,0,&lStack_70);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_70 == 0) {
    puVar3 = puVar2;
    func_0x00010bdc6480(param_1,param_2,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar3;
  _objc_retain(puVar3);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd7980(param_3,param_2,puVar1,puVar3);
  func_0x00010be98c80(param_3,param_2,puVar1,puVar3);
  func_0x00010be98c60(param_3,param_2,puVar1,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ad17f8; end: 106ad1873; -[SCBlizzardClientIdProviderImpl _renewClientIdAndUpdateSources:] */

void FUN_106ad17f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd7980(param_1,param_2,uVar1,param_3);
  func_0x00010be98c80(param_1,param_2,uVar1,param_3);
  func_0x00010be98c60(param_1,param_2,uVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ad1874; end: 106ad187b; -[SCBlizzardClientIdProviderImpl experimentProvider] */

undefined8 FUN_106ad1874(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ad187c; end: 106ad1887; -[SCBlizzardClientIdProviderImpl cachedClientId] */

void FUN_106ad187c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 106ad1888; end: 106ad188f; -[SCBlizzardClientIdProviderImpl setCachedClientId:] */

void FUN_106ad1888(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 106ad1890; end: 106ad189b; -[SCBlizzardClientIdProviderImpl cachedClientIdTimestamp] */

void FUN_106ad1890(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 106ad189c; end: 106ad18a3; -[SCBlizzardClientIdProviderImpl setCachedClientIdTimestamp:] */

void FUN_106ad189c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 106ad18a4; end: 106ad18eb; -[SCBlizzardClientIdProviderImpl .cxx_destruct] */

void FUN_106ad18a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106ad18ec; end: 106ad19cb; -[SCBlizzardNativeLogger logEvent:protoSerializationCallback:] */

void FUN_106ad18ec(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar1 = param_3;
    func_0x00010c082900();
    lVar3 = param_1;
    if ((int)lVar1 == 0) {
      func_0x00010be20ae0(param_1,param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2b20();
    }
    else {
      func_0x00010be20b00(param_1,param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2820();
    }
    _objc_release(uVar2);
    _objc_release(lVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ad19cc; end: 106ad1afb; -[SCBlizzardNativeLogger _getNativeUserTrackedEvent:protoSerializationCallback:] */

void FUN_106ad19cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126d0328;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x00010bf9a060(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0f6620(param_4);
  uVar4 = param_4;
  func_0x00010c11cf40(param_4);
  func_0x00010be21d20(param_2,param_3,uVar4);
  func_0x00010c0f7c20(param_4);
  uVar5 = param_1;
  func_0x00010c0f7b80(param_4);
  uVar4 = param_4;
  uVar6 = uVar5;
  func_0x00010bf99e00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7c40(param_4);
  _objc_release(param_4);
  func_0x00010c010ce0(param_1,uVar5,uVar6,puVar1,param_3,uVar2,uVar3,param_2,uVar4,param_5);
  _objc_release(param_5);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ad1afc; end: 106ad1c2b; -[SCBlizzardNativeLogger _getNativeUserNotTrackedEvent:protoSerializationCallback:] */

void FUN_106ad1afc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126d0330;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x00010bf9a060(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0f6620(param_4);
  uVar4 = param_4;
  func_0x00010c11cf40(param_4);
  func_0x00010be21d20(param_2,param_3,uVar4);
  func_0x00010c0f7c20(param_4);
  uVar5 = param_1;
  func_0x00010c0f7b80(param_4);
  uVar4 = param_4;
  uVar6 = uVar5;
  func_0x00010bf99e00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7c40(param_4);
  _objc_release(param_4);
  func_0x00010c010ce0(param_1,uVar5,uVar6,puVar1,param_3,uVar2,uVar3,param_2,uVar4,param_5);
  _objc_release(param_5);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ad1c2c; end: 106ad1c4b; -[SCBlizzardNativeLogger _getQosFromNativeQosEnum:] */

undefined8 FUN_106ad1c2c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 5) {
    return *(undefined8 *)(&UNK_10dde3cf0 + param_3 * 8);
  }
  return 2;
}



/* Entry: 106ad1c4c; end: 106ad1c57; -[SCBlizzardNativeLogger .cxx_destruct] */

void FUN_106ad1c4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


