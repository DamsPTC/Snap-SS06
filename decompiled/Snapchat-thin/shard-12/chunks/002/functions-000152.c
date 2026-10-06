/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108eae090; end: 108eae09f; -[SCMediaVideoImportBlizzardLogger _imageOrientationIsMirrored:] */

bool FUN_108eae090(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (param_3 & 0xfffffffffffffffc) == 4;
}



/* Entry: 108eae0a0; end: 108eae28f; -[SCMediaVideoImportBlizzardLogger _appendOutputMedatataWithEvent:outputVideoURL:] */

void FUN_108eae0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (param_6 != 0) {
    _objc_retain(param_6);
    func_0x00010bf71e20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68,param_4,param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    func_0x00010c29b220(PTR_PTR_1126b0010,param_4,puVar2,0);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar3,&PTR____CFConstantStringClassReference_110db1238);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_2,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar3,&PTR____CFConstantStringClassReference_110db1258);
    _objc_release(puVar3);
    puVar4 = puVar2;
    func_0x00010c279200(puVar2,param_4,*(undefined8 *)PTR__AVMediaTypeAudio_110348070);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar5 = puVar4;
    func_0x00010bf529e0();
    func_0x00010c0df840(puVar3,param_4,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar3,&PTR____CFConstantStringClassReference_110efddb8);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010c082de0(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_4,puVar1);
    if ((int)puVar3 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_4,puVar1,0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
      func_0x00010c1d70a0(param_5,param_4,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108eae290; end: 108eae8bf; -[SCMediaVideoImportBlizzardLogger _appendInputMedatataWithEvent:avAsset:] */

void FUN_108eae290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long alStack_90 [3];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_6;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar3 != 1) {
      func_0x00010bf529e0(lVar2);
      func_0x00010c0df840(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar4);
    }
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar3 != 0) {
      func_0x00010bf99700(lVar3);
      func_0x00010c0df740(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      FUN_109125f48(lVar3);
      func_0x00010c0df740(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0d5d20(lVar3);
      func_0x00010c0df720(param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0d5d20(lVar3);
      func_0x00010c0df720(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar4);
      func_0x00010c106f40(alStack_90,lVar3);
      plVar5 = alStack_90;
      func_0x00010b691288();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010be37540(param_3);
      func_0x00010c0df6e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar4);
      if (plVar5 == (long *)0x7) {
        uVar6 = 1;
      }
      else {
        uVar6 = *(undefined8 *)(&UNK_10dfa3ee8 + (long)plVar5 * 8);
      }
      func_0x00010b9f906c(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(uVar6);
      lVar7 = lVar3;
      func_0x00010bfb5b00();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar7);
      if (lVar8 != 0) {
        lVar7 = lVar8;
        _CMFormatDescriptionGetMediaSubType();
        FUN_109127900();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar7;
        func_0x00010c08fa60();
        if (lVar9 != 0) {
          func_0x00010c1d0640(puVar1);
        }
        _CMFormatDescriptionGetExtension
                  (lVar8,*(undefined8 *)PTR__kCVImageBufferColorPrimariesKey_11034a2b8);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010c08fa60();
        if (lVar9 != 0) {
          func_0x00010c1d0640(puVar1);
        }
        _objc_release(lVar8);
        _objc_release(lVar7);
      }
      func_0x00010c26f620(alStack_90,lVar3);
      uStack_a8 = uStack_70;
      lStack_b0 = lStack_78;
      uStack_a0 = uStack_68;
      _CMTimeGetSeconds(&lStack_b0);
    }
    lVar7 = param_6;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0();
    func_0x00010c0df840(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar4);
    lVar8 = lVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 != 0) {
      alStack_90[0] = -1;
      lStack_b8 = -1;
      lStack_b0 = -1;
      lVar9 = lVar8;
      FUN_109125e70(lVar8,alStack_90,&lStack_b0,&lStack_b8);
      _objc_retainAutoreleasedReturnValue();
      if (alStack_90[0] != -1) {
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(puVar4);
      }
      if (lStack_b0 != -1) {
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(puVar4);
      }
      if (lStack_b8 != -1) {
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(puVar4);
      }
      lVar10 = lVar9;
      func_0x00010c08fa60();
      if (lVar10 != 0) {
        func_0x00010c1d0640(puVar1);
      }
      _objc_release(lVar9);
    }
    lVar9 = param_6;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf529e0();
    _objc_release(lVar9);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar10 != 0) {
      lVar9 = param_6;
      func_0x00010c279200(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c0df840(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar4);
      _objc_release(lVar9);
    }
    puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010c082de0();
    if ((int)puVar4 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
      func_0x00010c1ad500(param_5);
      _objc_release(puVar11);
      _objc_release(puVar4);
    }
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 108eae8c0; end: 108eaea4b; -[SCMediaVideoImportBlizzardLogger _appendError:withEvent:mediaImportStage:] */

void FUN_108eae8c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) goto LAB_108eaea2c;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 1) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110efdfd8;
    ppuVar5 = &PTR____CFConstantStringClassReference_110efdfb8;
LAB_108eae940:
    lVar2 = param_3;
    func_0x00010bf6e340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,lVar2,ppuVar5);
    _objc_release(lVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar2 = param_3;
    func_0x00010bf3ec40(param_3);
    func_0x00010c0df780(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,ppuVar4);
    _objc_release(puVar3);
  }
  else if (param_5 == 2) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110efe018;
    ppuVar5 = &PTR____CFConstantStringClassReference_110efdff8;
    goto LAB_108eae940;
  }
  puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010c082de0(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar1);
  if ((int)puVar3 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e3c398;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar1,0,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
    _objc_release(puVar3);
  }
  func_0x00010c1972e0(param_4,param_2,ppuVar4);
  _objc_release(puVar1);
  _objc_release(ppuVar4);
LAB_108eaea2c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108eaea4c; end: 108eaec3b; -[SCMediaVideoImportBlizzardLogger _appendSkipTranscodingFailureReason:withEvent:outputVideoURL:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_108eaea4c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = (uint)param_3;
    if ((param_3 & 1) != 0) {
      func_0x00010c1d0640(puVar1,param_2,PTR____kCFBooleanTrue_11034ab68,
                          &PTR____CFConstantStringClassReference_110efe038);
      uVar4 = param_5;
      func_0x00010c0f58c0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_2,uVar4,&PTR____CFConstantStringClassReference_110efe058);
      _objc_release(uVar4);
    }
    if ((uVar5 >> 1 & 1) != 0) {
      func_0x00010c1d0640(puVar1,param_2,PTR____kCFBooleanTrue_11034ab68,
                          &PTR____CFConstantStringClassReference_110efe078);
    }
    if ((uVar5 >> 2 & 1) != 0) {
      func_0x00010c1d0640(puVar1,param_2,PTR____kCFBooleanTrue_11034ab68,
                          &PTR____CFConstantStringClassReference_110efe098);
    }
    if ((uVar5 >> 3 & 1) != 0) {
      func_0x00010c1d0640(puVar1,param_2,PTR____kCFBooleanTrue_11034ab68,
                          &PTR____CFConstantStringClassReference_110efe0b8);
    }
    if ((uVar5 >> 4 & 1) != 0) {
      func_0x00010c1d0640(puVar1,param_2,PTR____kCFBooleanTrue_11034ab68,
                          &PTR____CFConstantStringClassReference_110efe0d8);
    }
    if ((uVar5 >> 5 & 1) != 0) {
      func_0x00010c1d0640(puVar1,param_2,PTR____kCFBooleanTrue_11034ab68,
                          &PTR____CFConstantStringClassReference_110efe0f8);
    }
    if ((uVar5 >> 6 & 1) != 0) {
      func_0x00010c1d0640(puVar1,param_2,PTR____kCFBooleanTrue_11034ab68,
                          &PTR____CFConstantStringClassReference_110efe118);
    }
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010c082de0(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar1);
    if ((int)puVar2 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar1,0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
      func_0x00010c2030c0(param_4,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108eaec3c; end: 108eaec77; -[SCMediaVideoImportBlizzardLogger .cxx_destruct] */

void FUN_108eaec3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108eaec78; end: 108eaed2b; -[SCMediaVideoImportBlockLogger initWithImportLoggingBlock:exportLoggingBlock:logEventsToNetwork:] */

undefined1 *
FUN_108eaec78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff050;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108eaed2c; end: 108eaed4b; -[SCMediaVideoImportBlockLogger logAVAssetImportSuccess:error:retryCount:] */

void FUN_108eaed2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108eaed44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4,param_5);
    return;
  }
  return;
}



/* Entry: 108eaed4c; end: 108eaed73; -[SCMediaVideoImportBlockLogger logImportedAVAssetExportSuccess:error:retryCount:exportStatus:outputURL:] */

void FUN_108eaed4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108eaed6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  return;
}



/* Entry: 108eaed74; end: 108eaed7b; -[SCMediaVideoImportBlockLogger logEventsToNetwork] */

undefined1 FUN_108eaed74(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 108eaed7c; end: 108eaedab; -[SCMediaVideoImportBlockLogger .cxx_destruct] */

void FUN_108eaed7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108eaedac; end: 108eaedf3; -[SCMediaVideoImportProcessorImportCanceler cancel] */

void FUN_108eaedac(long param_1)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_1 + 8) = 1;
  puVar1 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108eaedf4; end: 108eaedfb; -[SCMediaVideoImportProcessorImportCanceler isCancelled] */

undefined1 FUN_108eaedf4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108eaedfc; end: 108eaee03; -[SCMediaVideoImportProcessorImportCanceler requestId] */

undefined4 FUN_108eaedfc(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 108eaee04; end: 108eaee0b; -[SCMediaVideoImportProcessorImportCanceler setRequestId:] */

void FUN_108eaee04(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 108eaee0c; end: 108eaee5b; -[SCMediaVideoImportProcessorExportCanceler cancel] */

void FUN_108eaee0c(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 8) = 1;
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf2e3c0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf2e3c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108eaee5c; end: 108eaee63; -[SCMediaVideoImportProcessorExportCanceler isCancelled] */

undefined1 FUN_108eaee5c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108eaee64; end: 108eaee7b; -[SCMediaVideoImportProcessorExportCanceler exportSession] */

void FUN_108eaee64(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108eaee7c; end: 108eaee87; -[SCMediaVideoImportProcessorExportCanceler setExportSession:] */

void FUN_108eaee7c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 108eaee88; end: 108eaee9f; -[SCMediaVideoImportProcessorExportCanceler sloMoExporter] */

void FUN_108eaee88(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108eaeea0; end: 108eaeeab; -[SCMediaVideoImportProcessorExportCanceler setSloMoExporter:] */

void FUN_108eaeea0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 108eaeeac; end: 108eaeed3; -[SCMediaVideoImportProcessorExportCanceler .cxx_destruct] */

void FUN_108eaeeac(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 108eaeed4; end: 108eaeedb; -[SCMediaVideoImportProcessorImportPlusExportCanceler cancel] */

void FUN_108eaeed4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 108eaeedc; end: 108eaeee3; -[SCMediaVideoImportProcessorImportPlusExportCanceler isCancelled] */

void FUN_108eaeedc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06e0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isCancelled_1125f9248);
  return;
}



/* Entry: 108eaeee4; end: 108eaeeeb; -[SCMediaVideoImportProcessorImportPlusExportCanceler currentCanceler] */

undefined8 FUN_108eaeee4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108eaeeec; end: 108eaef1b; -[SCMediaVideoImportProcessorImportPlusExportCanceler setCurrentCanceler:] */

void FUN_108eaeeec(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108eaef1c; end: 108eaef27; -[SCMediaVideoImportProcessorImportPlusExportCanceler .cxx_destruct] */

void FUN_108eaef1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108eaef28; end: 108eaef2f; -[SCMediaVideoImportDefaultStrategy init] */

void FUN_108eaef28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c040410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithRotateLandscapeVideoToPo_1125edb00,0)
  ;
  return;
}



/* Entry: 108eaef30; end: 108eaef3f; -[SCMediaVideoImportDefaultStrategy initWithRotateLandscapeVideoToPortraitOrientationRight:] */

void FUN_108eaef30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c040430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithRotateLandscapeVideoToPo_1125edb08,param_3,
             *(undefined8 *)PTR__AVAssetExportPresetPassthrough_110347ec8);
  return;
}



/* Entry: 108eaef40; end: 108eaefc3; -[SCMediaVideoImportDefaultStrategy initWithRotateLandscapeVideoToPortraitOrientationRight:initialPreset:] */

undefined1 *
FUN_108eaef40(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff058;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108eaefc4; end: 108eaefcb; -[SCMediaVideoImportDefaultStrategy retryAVAssetImportMaxAttempts] */

undefined8 FUN_108eaefc4(void)

{
  return 3;
}



/* Entry: 108eaefcc; end: 108eaeff3; -[SCMediaVideoImportDefaultStrategy initialExportSessionPreset] */

void FUN_108eaefcc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108eaeff4; end: 108eaf043; -[SCMediaVideoImportDefaultStrategy exportSessionPresetForFailedExportWithPreset:failureCount:] */

void FUN_108eaeff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0720c0(param_3,param_2,*(undefined8 *)PTR__AVAssetExportPresetPassthrough_110347ec8);
  if ((int)param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)PTR__AVAssetExportPresetHighestQuality_110347eb8;
    _objc_retain(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108eaf044; end: 108eaf04b; -[SCMediaVideoImportDefaultStrategy outputFilePath] */

undefined8 FUN_108eaf044(void)

{
  return 0;
}



/* Entry: 108eaf04c; end: 108eaf053; -[SCMediaVideoImportDefaultStrategy rotateLandscapeVideoToPortraitOrientationRight] */

undefined1 FUN_108eaf04c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108eaf054; end: 108eaf05b; -[SCMediaVideoImportDefaultStrategy allowDownloadFromiCloud] */

undefined8 FUN_108eaf054(void)

{
  return 1;
}



/* Entry: 108eaf05c; end: 108eaf063; -[SCMediaVideoImportDefaultStrategy requestUnmodifiedOriginal] */

undefined8 FUN_108eaf05c(void)

{
  return 0;
}



/* Entry: 108eaf064; end: 108eaf06f; -[SCMediaVideoImportDefaultStrategy .cxx_destruct] */

void FUN_108eaf064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108eaf070; end: 108eaf68b;  */

undefined1 *
FUN_108eaf070(float param_1,undefined8 param_2,undefined1 *param_3,undefined ***param_4,
             undefined ***param_5,undefined ***param_6,undefined8 param_7)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined1 *puVar9;
  undefined1 **ppuVar10;
  undefined8 uVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  float fVar14;
  undefined **ppuVar15;
  undefined1 *puStack_150;
  undefined *puStack_148;
  undefined ***pppuStack_140;
  undefined ***pppuStack_138;
  undefined ***pppuStack_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined ***pppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar13 = param_5;
  pppuVar12 = param_6;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 != (undefined ***)0x0) {
    pppuVar1 = param_4;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    pppuVar13 = pppuVar1;
    func_0x00010bf529e0();
    if (pppuVar13 != (undefined ***)0x1) {
      func_0x00010bf529e0(pppuVar1);
      func_0x00010c2221c0(param_3);
    }
    pppuStack_110 = pppuVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (pppuVar1 != (undefined ***)0x0) {
      func_0x00010bf99700(pppuVar1);
      func_0x00010c2211c0((double)param_1,param_3);
      func_0x00010c26f620(&ppuStack_e0,pppuVar1);
      ppuStack_a8 = ppuStack_c0;
      ppuStack_b0 = ppuStack_c8;
      uStack_a0 = uStack_b8;
      ppuVar15 = ppuStack_c8;
      _CMTimeGetSeconds(&ppuStack_b0);
      param_2 = 0x408f400000000000;
      fVar14 = SUB84((double)ppuVar15 * 1000.0,0);
      func_0x00010c2215c0(param_3);
      FUN_109125f48(pppuVar1);
      func_0x00010c221660((double)fVar14,param_3);
      func_0x00010c0d5d20(pppuVar1);
      func_0x00010c2218c0(param_3);
      func_0x00010c106f40(&ppuStack_e0,pppuVar1);
      func_0x00010b691288();
      func_0x00010c221940(param_3);
      func_0x00010c221b40(param_3);
      func_0x00010c0d5d20(pppuVar1);
      func_0x00010c222340(param_3);
      pppuVar13 = pppuVar1;
      func_0x00010bfb5b00();
      _objc_retainAutoreleasedReturnValue();
      pppuVar2 = pppuVar13;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(pppuVar13);
      if (pppuVar2 != (undefined ***)0x0) {
        pppuVar13 = pppuVar2;
        _CMFormatDescriptionGetMediaSubType();
        FUN_109127900();
        _objc_retainAutoreleasedReturnValue();
        pppuVar3 = pppuVar13;
        func_0x00010c08fa60();
        if (pppuVar3 != (undefined ***)0x0) {
          func_0x00010c221320(param_3);
        }
        _CMFormatDescriptionGetExtension
                  (pppuVar2,*(undefined8 *)PTR__kCVImageBufferColorPrimariesKey_11034a2b8);
        _objc_retainAutoreleasedReturnValue();
        if (pppuVar2 == (undefined ***)0x0) {
          _objc_release();
        }
        else {
          ppuStack_b0 = *(undefined ***)PTR__AVVideoColorPrimaries_ITU_R_709_2_110348140;
          ppuStack_a8 = *(undefined ***)PTR__kCVImageBufferColorPrimaries_EBU_3213_11034a2c0;
          ppuStack_e0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0810;
          ppuStack_d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0828;
          uStack_a0 = *(undefined8 *)PTR__AVVideoColorPrimaries_SMPTE_C_110348150;
          uStack_98 = *(undefined8 *)PTR__kCMFormatDescriptionColorPrimaries_ITU_R_2020_110348570;
          ppuStack_d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0840;
          ppuStack_c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0858;
          uStack_90 = *(undefined8 *)PTR__AVVideoColorPrimaries_P3_D65_110348148;
          ppuStack_c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0870;
          pppuVar12 = &ppuStack_b0;
          param_7 = 5;
          puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c067fc0();
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(pppuVar2);
          if (puVar6 != (undefined *)0xffffffffffffffff) {
            func_0x00010c221380(param_3);
          }
        }
        _objc_release(pppuVar13);
      }
    }
    pppuVar2 = param_4;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    pppuVar13 = pppuVar2;
    func_0x00010bf529e0();
    if (pppuVar13 != (undefined ***)0x1) {
      func_0x00010bf529e0(pppuVar2);
      func_0x00010c16c560(param_3);
    }
    pppuVar3 = pppuVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (pppuVar3 != (undefined ***)0x0) {
      ppuStack_e0 = (undefined **)0xffffffffffffffff;
      ppuStack_b0 = (undefined **)0xffffffffffffffff;
      ppuStack_108 = (undefined **)0xffffffffffffffff;
      pppuVar12 = &ppuStack_108;
      pppuVar13 = pppuVar3;
      FUN_109125e70(pppuVar3,&ppuStack_e0,&ppuStack_b0);
      _objc_retainAutoreleasedReturnValue();
      if (ppuStack_e0 != (undefined **)0xffffffffffffffff) {
        func_0x00010c16c240(param_3);
      }
      if (ppuStack_b0 != (undefined **)0xffffffffffffffff) {
        func_0x00010c16ba20(param_3);
      }
      if (ppuStack_108 != (undefined **)0xffffffffffffffff) {
        func_0x00010c16baa0(param_3);
      }
      pppuVar7 = pppuVar13;
      func_0x00010c08fa60();
      if (pppuVar7 != (undefined ***)0x0) {
        func_0x00010c16bac0(param_3);
      }
      _objc_release(pppuVar13);
    }
    pppuVar13 = *(undefined ****)PTR__AVMediaTypeClosedCaption_110348078;
    pppuVar7 = param_4;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = pppuVar7;
    func_0x00010bf529e0();
    _objc_release(pppuVar7);
    if (pppuVar8 != (undefined ***)0x0) {
      pppuVar7 = param_4;
      func_0x00010c279200();
      _objc_retainAutoreleasedReturnValue();
      pppuVar13 = pppuVar7;
      func_0x00010bf529e0();
      func_0x00010c178ba0(param_3);
      _objc_release(pppuVar7);
    }
    _objc_release(pppuVar3);
    _objc_release(pppuVar2);
    _objc_release(pppuVar1);
    _objc_release(pppuStack_110);
  }
  if (param_5 != (undefined ***)0x0) {
    func_0x00010c29b240(PTR_PTR_1126b0010);
    ppuStack_100 = &PTR____CFConstantStringClassReference_110db1238;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110db1258;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_f0 = puVar4;
    func_0x00010c0df720(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_e8 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    param_7 = 0;
    puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    _objc_retainAutoreleasedReturnValue();
    pppuVar1 = (undefined ***)PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    pppuVar12 = (undefined ***)0x4;
    func_0x00010c008340();
    pppuVar13 = pppuVar1;
    func_0x00010c1d70a0(param_3);
    _objc_release(pppuVar1);
    _objc_release(puVar4);
    _objc_release(puVar6);
  }
  if (param_6 != (undefined ***)0x0) {
    pppuVar13 = param_6;
    func_0x00010bf6e340(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1972e0(param_3);
    _objc_release(pppuVar13);
    pppuVar13 = param_6;
    func_0x00010bf3ec40();
    func_0x00010c196fe0(param_3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar9 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar9;
  }
  ___stack_chk_fail();
  ppuVar10 = &puStack_150;
  pcStack_118 = FUN_108eaf68c;
  pppuStack_140 = param_6;
  pppuStack_138 = param_5;
  pppuStack_130 = param_4;
  puStack_128 = param_3;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(pppuVar13);
  _objc_retain(pppuVar12);
  _objc_retain(param_7);
  puStack_148 = PTR_PTR_1126ff060;
  puStack_150 = puVar9;
  _objc_msgSendSuper2(&puStack_150,PTR_s_init_1125d9248);
  if (ppuVar10 != (undefined1 **)0x0) {
    _objc_retain(pppuVar13);
    uVar11 = *(undefined8 *)((long)ppuVar10 + 8);
    *(undefined ****)((long)ppuVar10 + 8) = pppuVar13;
    _objc_release(uVar11);
    _objc_retain(pppuVar12);
    uVar11 = *(undefined8 *)((long)ppuVar10 + 0x10);
    *(undefined ****)((long)ppuVar10 + 0x10) = pppuVar12;
    _objc_release(uVar11);
    _objc_retain(param_7);
    uVar11 = *(undefined8 *)((long)ppuVar10 + 0x20);
    *(undefined8 *)((long)ppuVar10 + 0x20) = param_7;
    _objc_release(uVar11);
    puVar4 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)ppuVar10 + 0x18);
    *(undefined **)((long)ppuVar10 + 0x18) = puVar4;
    _objc_release(uVar11);
    puVar4 = PTR_PTR_1126dc588;
    _objc_opt_new();
    uVar11 = *(undefined8 *)((long)ppuVar10 + 0x30);
    *(undefined **)((long)ppuVar10 + 0x30) = puVar4;
    _objc_release(uVar11);
  }
  _objc_release(param_7);
  _objc_release(pppuVar12);
  _objc_release(pppuVar13);
  return (undefined1 *)ppuVar10;
}



/* Entry: 108eaf68c; end: 108eaf797; -[SCMediaVideoImportProcessor initWithPerformer:userBlizzardLogger:cofEngine:] */

undefined1 *
FUN_108eaf68c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ff060;
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
    puVar3 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126dc588;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108eaf798; end: 108eaf903; -[SCMediaVideoImportProcessor AVAssetForImportedCameraRollVideo:strategy:logger:context:importedContentId:] */

void FUN_108eaf798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_5 == (undefined *)0x0) {
    param_5 = PTR_PTR_1126dc590;
    _objc_opt_new(PTR_PTR_1126dc590);
  }
  _CACurrentMediaTime();
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  puVar2 = PTR_PTR_1126dc568;
  _objc_opt_new(PTR_PTR_1126dc568);
  puVar3 = PTR_PTR_1126dc570;
  _objc_alloc(PTR_PTR_1126dc570);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016a40(puVar3,param_3,puVar4,puVar2);
  _objc_release(puVar4);
  func_0x00010be960e0(param_1,param_2,param_3,puVar1,puVar3,puVar2,param_4,param_5,0,param_6,param_7
                      ,param_8);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108eaf904; end: 108eafc8b; -[SCMediaVideoImportProcessor _retrieveAVAssetPromise:response:canceler:importedCameraRollVideo:strategy:retryCount:logger:context:importedContentId:startTime:] */

void FUN_108eaf904(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,int param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  int iStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  lVar1 = param_8;
  func_0x00010c13f2c0();
  if (param_9 < lVar1) {
    puVar2 = PTR__OBJC_CLASS___PHVideoRequestOptions_1126d2ae0;
    _objc_opt_new(PTR__OBJC_CLASS___PHVideoRequestOptions_1126d2ae0);
    func_0x00010c18ba80();
    func_0x00010bf010a0(param_8);
    func_0x00010c1cc000(puVar2);
    lVar1 = param_8;
    func_0x00010c136ea0();
    if ((int)lVar1 != 0) {
      func_0x00010c220e20(puVar2);
    }
    _objc_initWeak(auStack_80,param_2);
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    _objc_copyWeak(auStack_98,auStack_80);
    _objc_retain(param_10);
    iStack_88 = param_9;
    _objc_retain(param_4);
    _objc_retain(param_6);
    uStack_90 = param_1;
    _objc_retain(param_11);
    _objc_retain(param_12);
    _objc_retain(param_5);
    _objc_retain(param_7);
    _objc_retain(param_8);
    func_0x00010c134700(uVar3);
    func_0x00010c1ebd20(param_6);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(param_12);
    _objc_release(param_11);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(param_10);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar2);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(param_4);
    uVar3 = param_10;
    func_0x00010c0a5ce0();
    if ((int)uVar3 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      FUN_108eb00d8(param_1);
      _objc_release(uVar3);
      func_0x00010c29a480(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a2340(param_1);
      _objc_release(param_2);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108eafc8c; end: 108eb00d7;  */

void FUN_108eafc8c(long param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x68;
  _objc_loadWeakRetained();
  if (lVar2 == 0) goto LAB_108eb0090;
  puVar7 = param_2;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar7);
  if (puVar3 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    param_5 = (long)*(int *)(param_1 + 0x78);
    param_4 = puVar7;
    func_0x00010c0a0280(*(undefined8 *)(param_1 + 0x20));
    uVar6 = *(ulong *)(param_1 + 0x30);
    func_0x00010c06e0e0();
    if ((uVar6 & 1) == 0) {
      param_4 = *(undefined **)(param_1 + 0x50);
      param_6 = *(undefined8 *)(param_1 + 0x58);
      param_7 = *(undefined8 *)(param_1 + 0x60);
      param_5 = *(long *)(param_1 + 0x30);
      func_0x00010be960e0(*(undefined8 *)(param_1 + 0x70),lVar2);
    }
LAB_108eafff4:
    _objc_release(puVar7);
LAB_108eafffc:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x00010c06e0e0();
    if (iVar1 == 0) goto LAB_108eb0090;
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0a5ce0();
    if (iVar1 == 0) goto LAB_108eb0090;
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    FUN_108eb00d8(*(undefined8 *)(param_1 + 0x70));
    _objc_release(uVar4);
    puVar7 = *(undefined **)(param_1 + 0x48);
    func_0x00010c29a480();
    _objc_retainAutoreleasedReturnValue();
    param_7 = *(undefined8 *)(param_1 + 0x38);
    param_4 = (undefined *)0x0;
    param_5 = 1;
    param_6 = 3;
    func_0x00010c0a2340(*(undefined8 *)(param_1 + 0x70));
  }
  else {
    puVar3 = PTR_PTR_1126ba150;
    func_0x00010c22e420();
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((int)puVar3 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      puVar7 = param_2;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      param_4 = puVar7;
      func_0x00010c289520(uVar4);
      _objc_release(puVar7);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c06e0e0();
      func_0x00010bf43d60(uVar4);
      uVar6 = *(ulong *)(param_1 + 0x30);
      func_0x00010c06e0e0();
      if ((uVar6 & 1) == 0) {
        param_5 = (long)*(int *)(param_1 + 0x78);
        param_4 = (undefined *)0x0;
        func_0x00010c0a0280(*(undefined8 *)(param_1 + 0x20));
        iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
        func_0x00010c0a5ce0();
        if (iVar1 != 0) {
          uVar4 = *(undefined8 *)(lVar2 + 0x10);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          FUN_108eb00d8(*(undefined8 *)(param_1 + 0x70));
          _objc_release(uVar4);
          puVar7 = *(undefined **)(param_1 + 0x48);
          func_0x00010c29a480();
          _objc_retainAutoreleasedReturnValue();
          param_7 = *(undefined8 *)(param_1 + 0x38);
          param_4 = (undefined *)0x0;
          param_5 = 1;
          param_6 = 1;
          func_0x00010c0a2340(*(undefined8 *)(param_1 + 0x70));
          goto LAB_108eafff4;
        }
      }
      goto LAB_108eafffc;
    }
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    param_5 = (long)*(int *)(param_1 + 0x78);
    param_4 = puVar7;
    func_0x00010c0a0280(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0a5ce0();
    if (iVar1 != 0) {
      func_0x00010c06e0e0();
      iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
      func_0x00010c06e0e0();
      param_6 = 2;
      if (iVar1 != 0) {
        param_6 = 3;
      }
      uVar4 = *(undefined8 *)(lVar2 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      FUN_108eb00d8(*(undefined8 *)(param_1 + 0x70));
      _objc_release(uVar4);
      lVar5 = lVar2;
      func_0x00010c29a480();
      _objc_retainAutoreleasedReturnValue();
      param_7 = *(undefined8 *)(param_1 + 0x38);
      param_4 = (undefined *)0x0;
      param_5 = 1;
      func_0x00010c0a2340(*(undefined8 *)(param_1 + 0x70));
      _objc_release(lVar5);
    }
    uVar6 = *(ulong *)(param_1 + 0x30);
    func_0x00010c06e0e0();
    if ((uVar6 & 1) == 0) {
      func_0x00010c10ae00(PTR_PTR_1126d2ad8);
    }
  }
  _objc_release(puVar7);
LAB_108eb0090:
  _objc_release(lVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_2);
  _CACurrentMediaTime();
  puVar7 = PTR_PTR_1126d87f0;
  _objc_opt_new(PTR_PTR_1126d87f0);
  func_0x00010c182d40();
  _objc_release(param_4);
  func_0x00010c1b92e0(puVar7);
  func_0x00010c1ed9a0(puVar7);
  func_0x00010c209120(puVar7);
  func_0x00010c219740(puVar7);
  func_0x00010c1ab140(puVar7);
  _objc_release(param_5);
  FUN_108eaf070(puVar7,param_6,0,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  func_0x00010c0b2e60(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 108eb00d8; end: 108eb020b;  */

void FUN_108eb00d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _CACurrentMediaTime();
  puVar1 = PTR_PTR_1126d87f0;
  _objc_opt_new(PTR_PTR_1126d87f0);
  func_0x00010c182d40();
  _objc_release(param_4);
  func_0x00010c1b92e0(puVar1);
  func_0x00010c1ed9a0(puVar1);
  func_0x00010c209120(puVar1);
  func_0x00010c219740(puVar1);
  func_0x00010c1ab140(puVar1);
  _objc_release(param_5);
  FUN_108eaf070(puVar1,param_6,0,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  func_0x00010c0b2e60(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108eb020c; end: 108eb06ef; -[SCMediaVideoImportProcessor exportedUrlForImportedCameraRollAVAsset:timeRange:strategy:logger:importedContentId:context:progressHandler:] */

void FUN_108eb020c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bStack_20c;
  long lStack_1f8;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined1 uStack_137;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uVar10 = 0x3032000000;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_108eb06f0;
  uStack_90 = 0x108eb0700;
  _objc_retain(param_3);
  lStack_1f8 = param_5;
  uStack_88 = param_3;
  if (param_5 == 0) {
    lStack_1f8 = param_1;
    func_0x00010be37ce0();
    _objc_retainAutoreleasedReturnValue();
  }
  _CACurrentMediaTime();
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uStack_d8 = param_4[1];
  uStack_e0 = *param_4;
  uStack_c8 = param_4[3];
  uStack_d0 = param_4[2];
  uStack_b8 = param_4[5];
  uStack_c0 = param_4[4];
  uStack_108 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
  uStack_110 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
  uStack_f8 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
  uStack_100 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
  uStack_e8 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
  uStack_f0 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
  puVar3 = &uStack_e0;
  _CMTimeRangeEqual(puVar3,&uStack_110);
  if (((((int)puVar3 == 0) && ((*(byte *)((long)param_4 + 0xc) & 1) != 0)) &&
      ((*(byte *)((long)param_4 + 0x24) & 1) != 0)) &&
     ((param_4[5] == 0 && (-1 < (long)param_4[3])))) {
    if (puStack_a8[5] == 0) {
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_100 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_110);
    }
    uStack_128 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_130 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_120 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    _CMTimeRangeMake(&uStack_e0,&uStack_130,&uStack_110);
    uStack_108 = param_4[1];
    uStack_110 = *param_4;
    uStack_f8 = param_4[3];
    uStack_100 = param_4[2];
    uStack_e8 = param_4[5];
    uStack_f0 = param_4[4];
    puVar3 = &uStack_110;
    _CMTimeRangeEqual(puVar3,&uStack_e0);
    bStack_20c = (int)puVar3 == 0;
  }
  else {
    bStack_20c = false;
  }
  uVar8 = puStack_a8[5];
  _objc_retain(uVar8);
  puVar4 = PTR__OBJC_CLASS___AVComposition_1126cfa20;
  _objc_opt_class(PTR__OBJC_CLASS___AVComposition_1126cfa20);
  uVar5 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar4);
  uVar1 = uVar8;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar8);
  puVar4 = PTR_PTR_1126dc598;
  _objc_opt_new();
  puVar6 = PTR_PTR_1126dc570;
  _objc_alloc();
  puVar7 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016a40();
  _objc_release(puVar7);
  func_0x00010c1ab140(puVar6);
  uVar9 = param_3;
  func_0x00010c0cc0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c289520(param_1);
  _objc_release(uVar9);
  _objc_initWeak(&uStack_e0,param_1);
  uVar9 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_178,&uStack_e0);
  _objc_retain(puVar2);
  _objc_retain(param_6);
  uStack_170 = uVar10;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(puVar6);
  _objc_retain(lStack_1f8);
  uStack_160 = param_4[1];
  uStack_168 = *param_4;
  uStack_150 = param_4[3];
  uStack_158 = param_4[2];
  uStack_140 = param_4[5];
  uStack_148 = param_4[4];
  uStack_138 = uVar1 != 0;
  _objc_retain(puVar4);
  _objc_retain(uVar1);
  uStack_137 = bStack_20c;
  _objc_retain(param_9);
  func_0x00010c0f7fc0(uVar9);
  _objc_retain(puVar6);
  _objc_release(param_9);
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(lStack_1f8);
  _objc_release(puVar6);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(&uStack_e0);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(lStack_1f8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108eb06f0; end: 108eb0707;  */

void FUN_108eb06f0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108eb0708; end: 108eb1b93;  */

void FUN_108eb0708(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined *param_6,undefined **param_7,undefined **param_8,undefined *param_9)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined **ppuVar12;
  ulong uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  long lVar21;
  ulong uVar22;
  undefined *puVar23;
  undefined **ppuVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined *puVar29;
  float fVar30;
  ulong uVar31;
  undefined8 uVar32;
  ulong in_stack_fffffffffffffb90;
  long lStack_440;
  undefined *puStack_438;
  undefined **ppuStack_430;
  undefined *puStack_400;
  ulong uStack_3f0;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  code *pcStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined **ppuStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined8 *puStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  ulong uStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined *puStack_278;
  undefined **ppuStack_270;
  undefined1 uStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined *puVar13;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_3 + 0x78;
  _objc_loadWeakRetained();
  if (lVar6 != 0) {
    param_6 = *(undefined **)(lVar6 + 0x20);
    puVar9 = PTR_PTR_1126ba150;
    func_0x00010c22e420();
    puStack_400 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((int)puVar9 == 0) {
      puVar9 = *(undefined **)(*(long *)(*(long *)(param_3 + 0x70) + 8) + 0x28);
      func_0x00010c279200();
      _objc_retainAutoreleasedReturnValue();
      puStack_400 = puVar9;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      if (puStack_400 == (undefined *)0x0) {
        param_6 = (undefined *)0x2;
        puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
        param_7 = (undefined **)PTR____NSDictionary0__struct_11034ab58;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf43ca0(*(undefined8 *)(param_3 + 0x20));
        iVar4 = (int)*(undefined8 *)(param_3 + 0x28);
        func_0x00010c0a5ce0();
        if (iVar4 != 0) {
          uVar25 = *(undefined8 *)(lVar6 + 0x10);
          func_0x00010c269d40(uVar25);
          _objc_retainAutoreleasedReturnValue();
          uVar32 = *(undefined8 *)(param_3 + 0x80);
          uVar27 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x70) + 8) + 0x28);
          uVar7 = *(undefined8 *)(param_3 + 0x30);
          uVar8 = *(undefined8 *)(param_3 + 0x38);
          uVar26 = *(undefined8 *)(param_3 + 0x40);
          func_0x00010bf9e3a0(uVar26);
          FUN_108eb1b94(uVar32,uVar25,1,0,uVar7,uVar27,0,uVar8,uVar26,puVar9);
          _objc_release(uVar25);
          uVar7 = *(undefined8 *)(param_3 + 0x48);
          func_0x00010c29a480(uVar7);
          _objc_retainAutoreleasedReturnValue();
          param_9 = *(undefined **)(param_3 + 0x30);
          in_stack_fffffffffffffb90 = 0;
          param_6 = (undefined *)0x0;
          param_7 = (undefined **)0x2;
          param_8 = (undefined **)0x2;
          func_0x00010c0a2340(*(undefined8 *)(param_3 + 0x80));
          _objc_release(uVar7);
        }
        _objc_release(puVar9);
        puStack_400 = (undefined *)0x0;
      }
      else {
        puVar10 = *(undefined **)(*(long *)(*(long *)(param_3 + 0x70) + 8) + 0x28);
        func_0x00010c279200();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar10;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        if ((puVar9 != (undefined *)0x0) &&
           (puVar10 = puVar9, func_0x00010c071800(), ((ulong)puVar10 & 1) == 0)) {
          uVar7 = *(undefined8 *)(param_3 + 0x48);
          param_6 = puVar9;
          func_0x00010bdcfa60();
          _objc_retainAutoreleasedReturnValue();
          lVar21 = *(long *)(*(long *)(param_3 + 0x70) + 8);
          uVar8 = *(undefined8 *)(lVar21 + 0x28);
          *(undefined8 *)(lVar21 + 0x28) = uVar7;
          _objc_release(uVar8);
        }
        uVar3 = (undefined1)*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x70) + 8) + 0x28);
        FUN_109126a88();
        func_0x00010c29b200(PTR_PTR_1126b0010);
        if (param_2 <= param_1) {
          param_2 = param_1;
        }
        uVar5 = (uint)*(undefined8 *)(param_3 + 0x50);
        func_0x00010c141980();
        puVar10 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
        uVar22 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x70) + 8) + 0x28);
        _objc_retain(uVar22);
        _objc_opt_class(puVar10);
        uVar11 = uVar22;
        _objc_opt_isKindOfClass(uVar22,puVar10);
        uVar31 = uVar22;
        if ((uVar11 & 1) == 0) {
          uVar31 = 0;
        }
        _objc_retain(uVar31);
        _objc_release(uVar22);
        uVar11 = uVar31;
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar31);
        if (uVar11 != 0) {
          uVar31 = uVar11;
          func_0x00010c0f58c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf32ee0();
          _objc_release(uVar31);
          uVar31 = uVar11;
          func_0x00010c0f58c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf32ee0();
          _objc_release(uVar31);
        }
        puStack_158 = &uStack_160;
        uStack_160 = 0;
        uStack_150 = 0x3032000000;
        pcStack_148 = FUN_108eb06f0;
        uStack_140 = 0x108eb0700;
        uVar7 = *(undefined8 *)(param_3 + 0x50);
        func_0x00010c063dc0();
        _objc_retainAutoreleasedReturnValue();
        puStack_438 = (undefined *)puStack_158[5];
        uStack_138 = uVar7;
        _objc_retain();
        uStack_d8 = *(undefined8 *)(param_3 + 0xa8);
        puStack_e0 = *(undefined **)(param_3 + 0xa0);
        uStack_d0 = *(undefined8 *)(param_3 + 0xb0);
        _CMTimeGetSeconds(&puStack_e0);
        if (*(long *)(*(long *)(*(long *)(param_3 + 0x70) + 8) + 0x28) == 0) {
          puStack_e0 = (undefined *)0x0;
          uStack_d8 = 0;
          uStack_d0 = 0;
        }
        else {
          func_0x00010bf8b160(&puStack_e0);
        }
        _CMTimeGetSeconds(&puStack_e0);
        uStack_d8 = *(undefined8 *)(param_3 + 0x90);
        puStack_e0 = *(undefined **)(param_3 + 0x88);
        uStack_c8 = *(undefined8 *)(param_3 + 0xa0);
        uStack_d0 = *(ulong *)(param_3 + 0x98);
        uStack_b8 = *(undefined8 *)(param_3 + 0xb0);
        puStack_c0 = *(undefined **)(param_3 + 0xa8);
        uStack_108 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
        puStack_110 = *(undefined **)PTR__kCMTimeRangeZero_110348668;
        uStack_f8 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
        uStack_100 = *(ulong *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
        uStack_e8 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
        puStack_f0 = *(undefined **)(PTR__kCMTimeRangeZero_110348668 + 0x20);
        ppuStack_430 = &puStack_110;
        _CMTimeRangeEqual();
        func_0x000108eb5778();
        fVar30 = 1920.0;
        if (1920.0 < (float)param_2) {
          fVar30 = ABS((float)param_2 + -1920.0);
        }
        uVar31 = (ulong)(uint)fVar30;
        lStack_440 = *(long *)(param_3 + 0x48);
        _objc_retain(puStack_438);
        if (lStack_440 == 0) {
          _objc_release(puStack_438);
          lStack_440 = 0;
          ppuStack_430 = (undefined **)0x0;
        }
        else {
          param_6 = puStack_438;
          func_0x00010be0c840();
        }
        puVar2 = puStack_158;
        _objc_retain();
        uVar7 = puVar2[5];
        puVar2[5] = lStack_440;
        _objc_release(uVar7);
        if (puStack_158[5] == 0) {
          uVar7 = *(undefined8 *)(param_3 + 0x48);
          param_6 = *(undefined **)(param_3 + 0x50);
          param_8 = *(undefined ***)(param_3 + 0x20);
          param_9 = *(undefined **)(param_3 + 0x28);
          uVar5 = (uint)*(undefined8 *)(param_3 + 0x40);
          func_0x00010bf9e3a0();
          uStack_d8 = *(undefined8 *)(param_3 + 0x90);
          puStack_e0 = *(undefined **)(param_3 + 0x88);
          uStack_c8 = *(undefined8 *)(param_3 + 0xa0);
          uStack_d0 = *(ulong *)(param_3 + 0x98);
          uStack_b8 = *(undefined8 *)(param_3 + 0xb0);
          puStack_c0 = *(undefined **)(param_3 + 0xa8);
          in_stack_fffffffffffffb90 = (ulong)uVar5;
          param_7 = &puStack_e0;
          func_0x00010bebc760(*(undefined8 *)(param_3 + 0x80),uVar7);
        }
        else {
          uStack_180 = 0;
          uStack_170 = 0x2020000000;
          uStack_168 = 0;
          uStack_1a0 = 0;
          uStack_190 = 0x2020000000;
          uStack_188 = 1;
          uStack_1c0 = 0;
          uStack_1b0 = 0x2020000000;
          uStack_1a8 = 0;
          uStack_1e0 = 0;
          uStack_1d0 = 0x2020000000;
          uStack_1c8 = 0;
          puStack_2b0 = &uStack_200;
          uStack_200 = 0;
          uStack_1f0 = 0x2020000000;
          uStack_1e8 = 0;
          uStack_230 = 0;
          uStack_220 = 0x3032000000;
          pcStack_218 = FUN_108eb06f0;
          uStack_210 = 0x108eb0700;
          uStack_208 = 0;
          uStack_260 = 0;
          uStack_250 = 0x3032000000;
          pcStack_248 = FUN_108eb06f0;
          uStack_240 = 0x108eb0700;
          uStack_238 = 0;
          puStack_328 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_320 = 0xc2000000;
          uStack_318 = 0x108eb1cf4;
          puStack_310 = &UNK_110ac98c8;
          uStack_308 = *(undefined8 *)(param_3 + 0x48);
          uStack_2c0 = *(undefined8 *)(param_3 + 0x70);
          puStack_2b8 = &uStack_160;
          uVar7 = *(undefined8 *)(param_3 + 0x20);
          uStack_268 = uVar3;
          puStack_258 = &uStack_260;
          puStack_228 = &uStack_230;
          puStack_1f8 = puStack_2b0;
          puStack_1d8 = &uStack_1e0;
          puStack_1b8 = &uStack_1c0;
          puStack_198 = &uStack_1a0;
          puStack_178 = &uStack_180;
          _objc_retain(uVar7);
          uVar8 = *(undefined8 *)(param_3 + 0x58);
          uStack_300 = uVar7;
          _objc_retain(uVar8);
          uVar7 = *(undefined8 *)(param_3 + 0x28);
          uStack_2f8 = uVar8;
          _objc_retain(uVar7);
          puVar10 = *(undefined **)(param_3 + 0x80);
          uVar8 = *(undefined8 *)(param_3 + 0x30);
          uStack_2f0 = uVar7;
          lStack_2e8 = lVar6;
          puStack_2a8 = &uStack_1c0;
          puStack_278 = puVar10;
          _objc_retain(uVar8);
          uVar7 = *(undefined8 *)(param_3 + 0x38);
          uStack_2e0 = uVar8;
          _objc_retain(uVar7);
          uVar8 = *(undefined8 *)(param_3 + 0x40);
          uStack_2d8 = uVar7;
          _objc_retain(uVar8);
          ppuStack_270 = ppuStack_430;
          uVar7 = *(undefined8 *)(param_3 + 0x50);
          uStack_2d0 = uVar8;
          puStack_2a0 = &uStack_180;
          puStack_298 = &uStack_1a0;
          _objc_retain(uVar7);
          ppuVar12 = &puStack_328;
          uStack_2c8 = uVar7;
          puStack_290 = &uStack_1e0;
          puStack_288 = &uStack_230;
          puStack_280 = &uStack_260;
          _objc_retainBlock();
          do {
            if (puStack_158[5] == 0) {
              if ((*(byte *)(puStack_1d8 + 3) & 1) == 0) {
                ppuVar20 = &PTR____CFConstantStringClassReference_110efe158;
                if (*(char *)(puStack_178 + 3) == '\0') {
                  ppuVar20 = &PTR____CFConstantStringClassReference_110efe138;
                }
                _objc_retain(ppuVar20);
                param_6 = (undefined *)0x3;
                puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
                param_7 = (undefined **)PTR____NSDictionary0__struct_11034ab58;
                func_0x00010bf99240();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf43ca0(*(undefined8 *)(param_3 + 0x20));
                iVar4 = (int)*(undefined8 *)(param_3 + 0x28);
                func_0x00010c0a5ce0();
                if (iVar4 != 0) {
                  uVar25 = *(undefined8 *)(lVar6 + 0x10);
                  func_0x00010c269d40(uVar25);
                  _objc_retainAutoreleasedReturnValue();
                  uVar32 = *(undefined8 *)(param_3 + 0x80);
                  uVar1 = *(undefined4 *)(puStack_1b8 + 3);
                  uVar27 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x70) + 8) + 0x28);
                  uVar7 = *(undefined8 *)(param_3 + 0x30);
                  uVar8 = *(undefined8 *)(param_3 + 0x38);
                  uVar26 = *(undefined8 *)(param_3 + 0x40);
                  func_0x00010bf9e3a0(uVar26);
                  FUN_108eb1b94(uVar32,uVar25,1,uVar1,uVar7,uVar27,0,uVar8,uVar26,puVar10);
                  _objc_release(uVar25);
                  uVar7 = *(undefined8 *)(param_3 + 0x48);
                  func_0x00010c29a480();
                  _objc_retainAutoreleasedReturnValue();
                  param_9 = *(undefined **)(param_3 + 0x30);
                  in_stack_fffffffffffffb90 = (ulong)*(int *)(puStack_1b8 + 3);
                  param_6 = (undefined *)0x0;
                  param_7 = (undefined **)0x2;
                  param_8 = (undefined **)0x2;
                  func_0x00010c0a2340(*(undefined8 *)(param_3 + 0x80));
                  _objc_release(uVar7);
                }
                _objc_release(puVar10);
                _objc_release(ppuVar20);
              }
              break;
            }
            if ((*(byte *)(puStack_1d8 + 3) & 1) != 0) break;
            if ((*(char *)(puStack_198 + 3) == '\x01') && (*(char *)(param_3 + 0xb8) == '\x01')) {
              puVar13 = PTR_PTR_1126d87e8;
              func_0x00010c2639c0();
              uVar3 = SUB81(puVar13,0);
            }
            else {
              uVar3 = 0;
            }
            *(undefined1 *)(puStack_178 + 3) = uVar3;
            uVar14 = *(ulong *)(param_3 + 0x50);
            func_0x00010c0eece0();
            _objc_retainAutoreleasedReturnValue();
            uVar22 = uVar14;
            _objc_release();
            if (uVar14 == 0) {
              func_0x000107c3129c();
              _objc_retainAutoreleasedReturnValue();
              puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              uVar14 = uVar22;
              func_0x000107c31920();
              _objc_retainAutoreleasedReturnValue();
              in_stack_fffffffffffffb90 = uVar14;
              func_0x00010c14de00(puVar13);
              _objc_retainAutoreleasedReturnValue();
              uStack_3f0 = uVar22;
              func_0x00010c25ce00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar13);
              _objc_release(uVar14);
              _objc_release(uVar22);
            }
            else {
              uStack_3f0 = *(ulong *)(param_3 + 0x50);
              func_0x00010c0eece0();
              _objc_retainAutoreleasedReturnValue();
            }
            puVar13 = PTR__OBJC_CLASS___NSURL_1126ae598;
            func_0x00010bfad300();
            _objc_retainAutoreleasedReturnValue();
            if (*(char *)(puStack_178 + 3) == '\x01') {
              puVar28 = PTR_PTR_1126d87e8;
              _objc_alloc();
              param_7 = (undefined **)puStack_158[5];
              uStack_d8 = *(undefined8 *)(param_3 + 0x90);
              puStack_e0 = *(undefined **)(param_3 + 0x88);
              uStack_c8 = *(undefined8 *)(param_3 + 0xa0);
              uVar31 = *(ulong *)(param_3 + 0x98);
              uStack_b8 = *(undefined8 *)(param_3 + 0xb0);
              puVar10 = *(undefined **)(param_3 + 0xa8);
              param_8 = &puStack_e0;
              param_6 = PTR____NSDictionary0__struct_11034ab58;
              param_9 = puVar13;
              uStack_d0 = uVar31;
              puStack_c0 = puVar10;
              func_0x00010c060b20();
              func_0x00010c2032c0(*(undefined8 *)(param_3 + 0x58));
              puVar29 = (undefined *)0x0;
            }
            else {
              ppuVar24 = *(undefined ***)(*(long *)(*(long *)(param_3 + 0x70) + 8) + 0x28);
              _objc_retain(ppuVar24);
              ppuVar20 = ppuVar24;
              if ((uVar5 & 1) == 0) {
                _objc_retain(ppuVar24);
              }
              else {
                ppuVar15 = ppuVar24;
                func_0x00010c279200();
                _objc_retainAutoreleasedReturnValue();
                ppuVar16 = ppuVar15;
                func_0x00010bfb1920();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar15);
                ppuVar15 = ppuVar24;
                func_0x00010c279200();
                _objc_retainAutoreleasedReturnValue();
                ppuVar17 = ppuVar15;
                func_0x00010bfb1920();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar15);
                ppuVar15 = (undefined **)PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
                func_0x00010bf45600();
                _objc_retainAutoreleasedReturnValue();
                if (ppuVar16 == (undefined **)0x0) {
LAB_108eb12e8:
                  ppuVar20 = ppuVar15;
                  if (ppuVar17 != (undefined **)0x0) {
                    ppuVar19 = ppuVar15;
                    func_0x00010bef9f20();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c26f620(&puStack_110,ppuVar17);
                    uStack_128 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
                    puStack_130 = *(undefined **)PTR__kCMTimeZero_110348670;
                    uStack_120 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
                    param_7 = &puStack_130;
                    param_8 = (undefined **)0x0;
                    func_0x00010c067160(ppuVar19);
                    _objc_release(ppuVar19);
                  }
                }
                else {
                  func_0x00010c106f40(&puStack_e0,ppuVar16);
                  ppuVar18 = &puStack_e0;
                  func_0x00010b691288();
                  ppuVar19 = ppuVar16;
                  FUN_108eb57e8(ppuVar16,1);
                  if (ppuVar19 != ppuVar18) {
                    func_0x00010c0d5d20(ppuVar16);
                    ppuVar20 = ppuVar15;
                    func_0x00010bef9f20(ppuVar15);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c26f620(&puStack_e0,ppuVar16);
                    uStack_108 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
                    puStack_110 = *(undefined **)PTR__kCMTimeZero_110348670;
                    uStack_100 = *(ulong *)(PTR__kCMTimeZero_110348670 + 0x10);
                    param_7 = &puStack_110;
                    param_8 = (undefined **)0x0;
                    func_0x00010c067160(ppuVar20);
                    func_0x00010b69119c(&puStack_e0,puVar10,uVar31,ppuVar19);
                    uStack_108 = uStack_d8;
                    puStack_110 = puStack_e0;
                    uStack_f8 = uStack_c8;
                    uStack_100 = uStack_d0;
                    uStack_e8 = uStack_b8;
                    puStack_f0 = puStack_c0;
                    uVar31 = uStack_d0;
                    func_0x00010c1e0300(ppuVar20);
                    _objc_release(ppuVar20);
                    goto LAB_108eb12e8;
                  }
                }
                _objc_retain(ppuVar20);
                _objc_release(ppuVar15);
                _objc_release(ppuVar17);
                _objc_release(ppuVar16);
              }
              _objc_release(ppuVar24);
              puVar29 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
              _objc_alloc();
              param_6 = (undefined *)puStack_158[5];
              func_0x00010bff4280();
              puVar28 = PTR__OBJC_CLASS___AVMutableVideoComposition_1126d7d20;
              func_0x00010c2998c0(PTR__OBJC_CLASS___AVMutableVideoComposition_1126d7d20);
              _objc_retainAutoreleasedReturnValue();
              _CMTimeMake(&puStack_340,1,0x1e);
              uStack_d8 = uStack_338;
              puStack_e0 = puStack_340;
              uStack_d0 = uStack_330;
              puVar10 = puStack_340;
              func_0x00010c19f2e0(puVar28);
              func_0x00010c2213a0(puVar29);
              if (*(char *)(param_3 + 0xb9) == '\x01') {
                uStack_d8 = *(undefined8 *)(param_3 + 0x90);
                puStack_e0 = *(undefined **)(param_3 + 0x88);
                uStack_c8 = *(undefined8 *)(param_3 + 0xa0);
                uVar31 = *(ulong *)(param_3 + 0x98);
                uStack_b8 = *(undefined8 *)(param_3 + 0xb0);
                puVar10 = *(undefined **)(param_3 + 0xa8);
                uStack_d0 = uVar31;
                puStack_c0 = puVar10;
                func_0x00010c214ec0(puVar29);
              }
              func_0x00010c1d7200(puVar29);
              func_0x00010c1d6fc0(puVar29);
              func_0x00010c198fc0(*(undefined8 *)(param_3 + 0x58));
              _objc_release(puVar28);
              _objc_release(ppuVar20);
              puVar28 = (undefined *)0x0;
            }
            uVar22 = *(ulong *)(param_3 + 0x58);
            func_0x00010c06e0e0();
            if ((int)uVar22 == 0) {
              uVar7 = puStack_228[5];
              puStack_228[5] = 0;
              _objc_release();
              if (*(long *)(param_3 + 0x68) != 0) {
                puVar23 = PTR___dispatch_source_type_timer_11034be38;
                _dispatch_source_create
                          (PTR___dispatch_source_type_timer_11034be38,0,0,
                           PTR___dispatch_main_q_11034be20);
                uVar7 = puStack_228[5];
                puStack_228[5] = puVar23;
                _objc_release(uVar7);
                uVar8 = puStack_228[5];
                uVar7 = 0;
                _dispatch_time(0,0);
                param_6 = (undefined *)0x5f5e100;
                _dispatch_source_set_timer(uVar8,uVar7,330000000,100000000);
                uVar7 = puStack_228[5];
                puStack_380 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_378 = 0xc2000000;
                uStack_370 = 0x108eb222c;
                puStack_368 = &UNK_110883410;
                puStack_348 = &uStack_180;
                uVar8 = *(undefined8 *)(param_3 + 0x68);
                _objc_retain(uVar8);
                uStack_350 = uVar8;
                _objc_retain(puVar28);
                puStack_360 = puVar28;
                _objc_retain(puVar29);
                puStack_358 = puVar29;
                _dispatch_source_set_event_handler(uVar7,&puStack_380);
                _dispatch_resume(puStack_228[5]);
                _objc_release(puStack_358);
                _objc_release(puStack_360);
                uVar7 = uStack_350;
                _objc_release();
              }
              _dispatch_group_create();
              uVar8 = puStack_258[5];
              puStack_258[5] = uVar7;
              _objc_release(uVar8);
              _dispatch_group_enter(puStack_258[5]);
              if (*(char *)(puStack_178 + 3) == '\x01') {
                puStack_3b0 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_3a8 = 0xc2000000;
                pcStack_3a0 = FUN_108eb2274;
                puStack_398 = &UNK_11085ac48;
                puVar23 = *(undefined **)(param_3 + 0x58);
                _objc_retain(puVar23);
                puStack_390 = puVar23;
                _objc_retain(ppuVar12);
                param_7 = &puStack_3b0;
                param_6 = (undefined *)0x0;
                ppuStack_388 = ppuVar12;
                func_0x00010bf9d360(puVar28);
                _objc_release(ppuStack_388);
                puVar23 = puStack_390;
              }
              else {
                _objc_retain(puVar29);
                _objc_retain(ppuVar12);
                _objc_retain(puVar13);
                func_0x00010bf9cee0(puVar29);
                _objc_release(puVar13);
                _objc_release(ppuVar12);
                puVar23 = puVar29;
              }
              _objc_release(puVar23);
              _dispatch_group_wait(puStack_258[5],0xffffffffffffffff);
            }
            else {
              func_0x00010bf43d60(*(undefined8 *)(param_3 + 0x20));
              *(undefined1 *)(puStack_1d8 + 3) = 1;
              param_6 = (undefined *)0x0;
              param_7 = (undefined **)0x0;
              param_8 = (undefined **)0x5;
              param_9 = (undefined *)0x0;
              func_0x00010c0a8100(*(undefined8 *)(param_3 + 0x28));
              iVar4 = (int)*(undefined8 *)(param_3 + 0x28);
              func_0x00010c0a5ce0();
              if (iVar4 != 0) {
                uVar25 = *(undefined8 *)(lVar6 + 0x10);
                func_0x00010c269d40(uVar25);
                _objc_retainAutoreleasedReturnValue();
                uVar32 = *(undefined8 *)(param_3 + 0x80);
                uVar1 = *(undefined4 *)(puStack_1b8 + 3);
                uVar27 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x70) + 8) + 0x28);
                uVar7 = *(undefined8 *)(param_3 + 0x30);
                uVar8 = *(undefined8 *)(param_3 + 0x38);
                uVar26 = *(undefined8 *)(param_3 + 0x40);
                func_0x00010bf9e3a0(uVar26);
                FUN_108eb1b94(uVar32,uVar25,2,uVar1,uVar7,uVar27,0,uVar8,uVar26,0);
                _objc_release(uVar25);
                uVar7 = *(undefined8 *)(param_3 + 0x48);
                func_0x00010c29a480(uVar7);
                _objc_retainAutoreleasedReturnValue();
                puVar10 = *(undefined **)(param_3 + 0x80);
                param_9 = *(undefined **)(param_3 + 0x30);
                in_stack_fffffffffffffb90 = 0;
                param_6 = (undefined *)0x0;
                param_7 = (undefined **)0x2;
                param_8 = (undefined **)0x3;
                func_0x00010c0a2340();
                _objc_release(uVar7);
              }
            }
            _objc_release(puVar28);
            _objc_release(puVar29);
            _objc_release(puVar13);
            _objc_release(uStack_3f0);
          } while ((uVar22 & 1) == 0);
          _objc_release(ppuVar12);
          _objc_release(uStack_2c8);
          _objc_release(uStack_2d0);
          _objc_release(uStack_2d8);
          _objc_release(uStack_2e0);
          _objc_release(uStack_2f0);
          _objc_release(uStack_2f8);
          _objc_release(uStack_300);
          __Block_object_dispose(&uStack_260,8);
          _objc_release(uStack_238);
          __Block_object_dispose(&uStack_230,8);
          _objc_release(uStack_208);
          __Block_object_dispose(&uStack_200,8);
          __Block_object_dispose(&uStack_1e0,8);
          __Block_object_dispose(&uStack_1c0,8);
          __Block_object_dispose(&uStack_1a0,8);
          __Block_object_dispose(&uStack_180,8);
        }
        _objc_release(lStack_440);
        _objc_release(puStack_438);
        __Block_object_dispose(&uStack_160,8);
        _objc_release(uStack_138);
        _objc_release(uVar11);
        _objc_release(puVar9);
      }
    }
    else {
      uStack_a8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110e87178;
      ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      param_6 = (undefined *)0x5;
      param_7 = ppuVar12;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar12);
      func_0x00010bf43ca0(*(undefined8 *)(param_3 + 0x20));
      func_0x00010c10ae00(PTR_PTR_1126d2ad8);
      iVar4 = (int)*(undefined8 *)(param_3 + 0x28);
      func_0x00010c0a5ce0();
      if (iVar4 != 0) {
        uVar7 = *(undefined8 *)(lVar6 + 0x10);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar32 = *(undefined8 *)(param_3 + 0x80);
        uVar25 = *(undefined8 *)(param_3 + 0x30);
        uVar26 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x70) + 8) + 0x28);
        uVar27 = *(undefined8 *)(param_3 + 0x38);
        uVar8 = *(undefined8 *)(param_3 + 0x40);
        func_0x00010bf9e3a0(uVar8);
        FUN_108eb1b94(uVar32,uVar7,1,0,uVar25,uVar26,0,uVar27,uVar8,puStack_400);
        _objc_release(uVar7);
        lVar21 = lVar6;
        func_0x00010c29a480(lVar6);
        _objc_retainAutoreleasedReturnValue();
        param_9 = *(undefined **)(param_3 + 0x30);
        in_stack_fffffffffffffb90 = 0;
        param_6 = (undefined *)0x0;
        param_7 = (undefined **)0x2;
        param_8 = (undefined **)0x2;
        func_0x00010c0a2340(*(undefined8 *)(param_3 + 0x80));
        _objc_release(lVar21);
      }
    }
    _objc_release(puStack_400);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_260,8);
  __Block_object_dispose(&uStack_230,8);
  __Block_object_dispose(&uStack_200,8);
  __Block_object_dispose(&uStack_1e0,8);
  __Block_object_dispose(&uStack_1c0,8);
  __Block_object_dispose(&uStack_1a0,8);
  __Block_object_dispose(&uStack_180,8);
  _objc_release(lStack_440);
  _objc_release(puStack_438);
  __Block_object_dispose(&uStack_160,8);
  __Unwind_Resume(lVar6);
  _objc_retain(in_stack_fffffffffffffb90);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(lVar6);
  _CACurrentMediaTime();
  puVar9 = PTR_PTR_1126d87f0;
  _objc_opt_new(PTR_PTR_1126d87f0);
  func_0x00010c182d40();
  _objc_release(param_6);
  func_0x00010c1b92e0(puVar9);
  func_0x00010c1ed9a0(puVar9);
  func_0x00010c209120(puVar9);
  func_0x00010c219740(puVar9);
  func_0x00010c1ab140(puVar9);
  _objc_release(param_9);
  func_0x00010c221fe0(puVar9);
  FUN_108eaf070(puVar9,param_7,param_8,in_stack_fffffffffffffb90);
  _objc_release(in_stack_fffffffffffffb90);
  _objc_release(param_8);
  _objc_release(param_7);
  func_0x00010c0b2e60(lVar6);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 108eb1b94; end: 108eb206b;  */

void FUN_108eb1b94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _CACurrentMediaTime();
  puVar1 = PTR_PTR_1126d87f0;
  _objc_opt_new(PTR_PTR_1126d87f0);
  func_0x00010c182d40();
  _objc_release(param_4);
  func_0x00010c1b92e0(puVar1);
  func_0x00010c1ed9a0(puVar1);
  func_0x00010c209120(puVar1);
  func_0x00010c219740(puVar1);
  func_0x00010c1ab140(puVar1);
  _objc_release(param_7);
  func_0x00010c221fe0(puVar1);
  FUN_108eaf070(puVar1,param_5,param_6,param_9);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010c0b2e60(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108eb206c; end: 108eb2273;  */

void FUN_108eb206c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  __Block_object_assign(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
  __Block_object_assign(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80),8);
  __Block_object_assign(param_1 + 0x88,*(undefined8 *)(param_2 + 0x88),8);
  __Block_object_assign(param_1 + 0x90,*(undefined8 *)(param_2 + 0x90),8);
  __Block_object_assign(param_1 + 0x98,*(undefined8 *)(param_2 + 0x98),8);
  __Block_object_assign(param_1 + 0xa0,*(undefined8 *)(param_2 + 0xa0),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0xa8,*(undefined8 *)(param_2 + 0xa8),8);
  return;
}



/* Entry: 108eb2274; end: 108eb22ff;  */

void FUN_108eb2274(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 != 0 && param_3 == 0) {
    uVar2 = 3;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c06e0e0();
    uVar2 = 4;
    if (iVar1 != 0) {
      uVar2 = 5;
    }
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),param_2 != 0 && param_3 == 0,uVar2,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108eb2300; end: 108eb237f;  */

void FUN_108eb2300(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c252d60(lVar2);
  lVar5 = *(long *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c252d60(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf987e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,lVar2 == 3,uVar3,uVar1,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 108eb2380; end: 108eb2437; -[SCMediaVideoImportProcessor _shouldEnabledCameraRollNoAudioFixWithInputAsset:outputURL:currentPreset:] */

undefined8
FUN_108eb2380(long param_1,undefined8 param_2,int param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  FUN_109126d54();
  uVar3 = 0;
  if ((param_3 != 0) && (param_5 != *(long *)PTR__AVAssetExportPresetPassthrough_110347ec8)) {
    puVar1 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVAsset_1126aff38,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    FUN_109126d54();
    if (((ulong)puVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf1f440(uVar3,param_2,&PTR____CFConstantStringClassReference_110efe178,0,0);
    }
    else {
      uVar3 = 0;
    }
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 108eb2438; end: 108eb24ab; -[SCMediaVideoImportProcessor basicLoggerWithImportLoggingBlock:exportLoggingBlock:logEventsToNetwork:] */

void FUN_108eb2438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc5a8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01d340();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108eb24ac; end: 108eb2793; -[SCMediaVideoImportProcessor exportedURLForPHAsset:strategy:logger:context:timeRange:progressHandler:] */

void FUN_108eb24ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  puVar3 = PTR_PTR_1126dc5b0;
  _objc_opt_new();
  puVar4 = PTR_PTR_1126dc570;
  _objc_alloc();
  puVar5 = puVar2;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016a40(puVar4,param_2,puVar5,puVar3);
  _objc_release();
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ab140(puVar4,param_2,puVar5);
  uVar6 = param_1;
  func_0x00010bdc0da0(param_1,param_2,param_3,param_4,param_5,param_6,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar7 = uVar6;
  func_0x00010bf2f5e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c187060(puVar3,param_2,uVar7);
  _objc_release(uVar7);
  uVar7 = uVar6;
  func_0x00010bfbc3e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_108eb2794;
  puStack_f0 = &UNK_110ac9958;
  uStack_90 = param_7[1];
  uStack_98 = *param_7;
  uStack_80 = param_7[3];
  uStack_88 = param_7[2];
  uStack_70 = param_7[5];
  uStack_78 = param_7[4];
  uStack_e8 = uVar6;
  puStack_e0 = puVar2;
  uStack_d8 = param_1;
  uStack_d0 = param_4;
  uStack_c8 = param_5;
  puStack_c0 = puVar5;
  uStack_b8 = param_6;
  puStack_b0 = puVar3;
  uStack_a0 = param_8;
  _objc_retain(puVar4);
  puStack_a8 = puVar4;
  _objc_retain(puVar3);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(puVar5);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(puVar2);
  _objc_retain(uVar6);
  func_0x00010c297260(uVar7,param_2,&puStack_108,0);
  _objc_release(uVar7);
  puVar1 = puStack_a8;
  _objc_retain(puVar4);
  _objc_release(puVar1);
  _objc_release(puStack_b0);
  _objc_release(uStack_a0);
  _objc_release(uStack_b8);
  _objc_release(puStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(puStack_e0);
  _objc_release(uStack_e8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(puVar5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108eb2794; end: 108eb2a43;  */

void FUN_108eb2794(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 != 0) && (param_3 == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf2f5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06e0e0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bf9d400();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010bf2f5e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c187060(*(undefined8 *)(param_1 + 0x58));
      _objc_release(uVar1);
      uVar1 = uVar2;
      func_0x00010bf8dc60(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c194260(*(undefined8 *)(param_1 + 0x60));
      _objc_release(uVar1);
      func_0x00010bf9e3a0(uVar2);
      func_0x00010c1996c0(*(undefined8 *)(param_1 + 0x60));
      uVar1 = uVar2;
      func_0x00010bfbc3e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar4);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar3);
      _objc_retain(uVar2);
      func_0x00010c297260(uVar1);
      _objc_release(uVar1);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_release(uVar2);
      goto LAB_108eb2944;
    }
  }
  func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
LAB_108eb2944:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108eb2a44; end: 108eb2d1b; -[SCMediaVideoImportProcessor optionalExportedURLForPHAsset:strategy:logger:context:timeRange:progressHandler:] */

void FUN_108eb2a44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  puVar3 = PTR_PTR_1126dc5b0;
  _objc_opt_new();
  puVar4 = PTR_PTR_1126dc570;
  _objc_alloc();
  puVar5 = puVar2;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016a40(puVar4,param_2,puVar5,puVar3);
  _objc_release();
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bdc0da0(param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar7 = uVar6;
  func_0x00010bf2f5e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c187060(puVar3,param_2,uVar7);
  _objc_release(uVar7);
  uVar7 = uVar6;
  func_0x00010bfbc3e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_108eb2d1c;
  puStack_f0 = &UNK_110ac9958;
  uStack_90 = param_7[1];
  uStack_98 = *param_7;
  uStack_80 = param_7[3];
  uStack_88 = param_7[2];
  uStack_70 = param_7[5];
  uStack_78 = param_7[4];
  uStack_e8 = uVar6;
  puStack_e0 = puVar2;
  uStack_d8 = param_1;
  uStack_d0 = param_4;
  uStack_c8 = param_5;
  puStack_c0 = puVar5;
  uStack_b8 = param_6;
  puStack_b0 = puVar3;
  uStack_a0 = param_8;
  _objc_retain(puVar4);
  puStack_a8 = puVar4;
  _objc_retain(puVar3);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(puVar5);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(puVar2);
  _objc_retain(uVar6);
  func_0x00010c297260(uVar7,param_2,&puStack_108,0);
  _objc_release(uVar7);
  puVar1 = puStack_a8;
  _objc_retain(puVar4);
  _objc_release(puVar1);
  _objc_release(puStack_b0);
  _objc_release(uStack_a0);
  _objc_release(uStack_b8);
  _objc_release(puStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(puStack_e0);
  _objc_release(uStack_e8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(puVar5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108eb2d1c; end: 108eb3087;  */

void FUN_108eb2d1c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 != 0) && (param_3 == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf2f5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c06e0e0();
    _objc_release(uVar1);
    if ((int)uVar5 == 0) {
      lVar3 = *(long *)(param_1 + 0x30);
      func_0x00010bf9d400();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf2f5e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c187060(*(undefined8 *)(param_1 + 0x58));
      _objc_release(lVar4);
      lVar4 = lVar3;
      func_0x00010bf8dc60(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c194260(*(undefined8 *)(param_1 + 0x60));
      _objc_release(lVar4);
      func_0x00010bf9e3a0(lVar3);
      func_0x00010c1996c0(*(undefined8 *)(param_1 + 0x60));
      lVar4 = lVar3;
      func_0x00010bfbc3e0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar1);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar5);
      _objc_retain(lVar3);
      func_0x00010c297260(lVar4);
      _objc_release(lVar4);
      _objc_release(uVar5);
      _objc_release(lVar3);
      _objc_release(uVar1);
      goto LAB_108eb2f14;
    }
  }
  puVar2 = PTR_PTR_1126ae750;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  lVar3 = param_3;
  func_0x00010bf6e340(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  func_0x00010bf993e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar5);
  _objc_release(puVar2);
LAB_108eb2f14:
  _objc_release(lVar3);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108eb3088; end: 108eb318b; -[SCMediaVideoImportProcessor updateResponse:forAVMetadataItems:] */

void FUN_108eb3088(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c240ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194260(param_3);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf8dc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf9e3c0(param_1);
  }
  func_0x00010c1996c0(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf9e3a0();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_108eb5b34(uVar3,puVar2,1);
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108eb318c; end: 108eb34cb; -[SCMediaVideoImportProcessor externalMediaSourceFromMetadata:] */

/* WARNING: Removing unreachable block (ram,0x000108eb36d4) */

undefined * FUN_108eb318c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined *puVar8;
  long lVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint uStack_134;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  ppuVar6 = &puStack_130;
  lVar1 = param_3;
  func_0x00010bf52a60();
  puVar8 = (undefined *)0x0;
  if (lVar1 == 0) {
LAB_108eb347c:
    _objc_release(param_3);
  }
  else {
    uStack_134 = 0;
    lVar9 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar13 = *(ulong *)(lStack_128 + lVar11 * 8);
        uVar14 = uVar13;
        func_0x00010c086560();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar2 = uVar14;
        _objc_opt_isKindOfClass(uVar14,puVar8);
        uVar3 = uVar14;
        if ((uVar2 & 1) == 0) {
          uVar3 = 0;
        }
        _objc_retain(uVar3);
        _objc_release(uVar14);
        if (uVar3 == 0) {
          uVar14 = 0;
        }
        else {
          uVar3 = uVar14;
          func_0x00010c0720c0();
          if ((int)uVar3 == 0) {
            uVar3 = uVar14;
            func_0x00010c0720c0();
            if ((int)uVar3 == 0) {
              uVar3 = uVar14;
              func_0x00010c0720c0();
              if ((int)uVar3 != 0) {
                func_0x00010c296d80();
                _objc_retainAutoreleasedReturnValue();
                puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
                uVar2 = uVar13;
                _objc_opt_isKindOfClass(uVar13,puVar8);
                uVar3 = uVar13;
                if ((uVar2 & 1) == 0) {
                  uVar3 = 0;
                }
                _objc_retain(uVar3);
                _objc_release(uVar13);
                uVar2 = uVar3;
                func_0x00010c0720c0();
                _objc_release(uVar3);
                uStack_134 = (uint)uVar2 | uStack_134;
              }
            }
            else {
              func_0x00010c296d80();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
              uVar2 = uVar13;
              _objc_opt_isKindOfClass(uVar13,puVar8);
              uVar3 = uVar13;
              if ((uVar2 & 1) == 0) {
                uVar3 = 0;
              }
              _objc_retain(uVar3);
              _objc_release(uVar13);
              if (uVar3 != 0) {
                ppuVar6 = &PTR____CFConstantStringClassReference_110efe218;
                uVar3 = uVar13;
                func_0x00010bf4bb00();
                _objc_release(uVar13);
                if ((uVar3 & 1) != 0) goto LAB_108eb3468;
              }
            }
          }
          else {
            func_0x00010c296d80();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
            uVar2 = uVar13;
            _objc_opt_isKindOfClass(uVar13,puVar8);
            uVar3 = uVar13;
            if ((uVar2 & 1) == 0) {
              uVar3 = 0;
            }
            _objc_retain(uVar3);
            _objc_release(uVar13);
            if (uVar3 != 0) {
              ppuVar6 = &PTR____CFConstantStringClassReference_110efe1b8;
              uVar3 = uVar13;
              func_0x00010bf4bb00();
              if ((int)uVar3 == 0) {
                ppuVar6 = &PTR____CFConstantStringClassReference_110efe1d8;
                uVar3 = uVar13;
                func_0x00010bf4bb00();
                _objc_release(uVar13);
                if ((uVar3 & 1) == 0) goto LAB_108eb3414;
                puVar8 = (undefined *)0x6;
              }
              else {
                _objc_release(uVar13);
LAB_108eb3468:
                puVar8 = (undefined *)0x4;
              }
              _objc_release(uVar14);
              goto LAB_108eb347c;
            }
            _objc_release(0);
          }
        }
LAB_108eb3414:
        _objc_release(uVar14);
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      ppuVar6 = &puStack_130;
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    _objc_release(param_3);
    uVar7 = 8;
    if ((uStack_134 & 1) == 0) {
      uVar7 = 0;
    }
    puVar8 = (undefined *)(ulong)uVar7;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar8;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar6);
  ppuVar4 = ppuVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (ppuVar4 == (undefined **)0x0) {
      puVar12 = (undefined *)0x0;
LAB_108eb373c:
      _objc_release(ppuVar6);
      _objc_release(ppuVar6);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
        ___stack_chk_fail();
        FUN_109126a88();
        puVar12 = PTR_PTR_1126dc590;
        _objc_alloc(PTR_PTR_1126dc590);
        func_0x00010c040420();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
      return puVar12;
    }
    ppuVar10 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(ppuVar6);
      }
      uVar13 = *(ulong *)((long)ppuVar10 * 8);
      uVar14 = uVar13;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar2 = uVar14;
      _objc_opt_isKindOfClass(uVar14,puVar8);
      uVar3 = uVar14;
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar14);
      uVar2 = uVar13;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar5 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar8);
      uVar14 = uVar2;
      if ((uVar5 & 1) == 0) {
        uVar14 = 0;
      }
      _objc_retain(uVar14);
      _objc_release(uVar2);
      uVar2 = uVar14;
      func_0x00010c071f40();
      _objc_release(uVar14);
      if ((((uVar2 & 1) != 0) || (uVar14 = uVar3, func_0x00010c0720c0(), (uVar14 & 1) != 0)) ||
         (uVar14 = uVar3, func_0x00010c0720c0(), (int)uVar14 != 0)) {
        puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar2 = uVar13;
        _objc_opt_isKindOfClass(uVar13,puVar12);
        uVar14 = uVar13;
        if ((uVar2 & 1) == 0) {
          uVar14 = 0;
        }
        _objc_retain(uVar14);
        _objc_release(uVar13);
        func_0x00010bf649c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar14);
        puVar12 = puVar8;
        func_0x00010c08fa60();
        if (puVar12 != (undefined *)0x0) {
          puVar12 = PTR_PTR_1126bcf38;
          _objc_alloc(PTR_PTR_1126bcf38);
          func_0x00010c008360();
          _objc_retain(puVar12);
          _objc_release(puVar12);
          _objc_release(puVar8);
          _objc_release(uVar3);
          goto LAB_108eb373c;
        }
        _objc_release(puVar8);
      }
      _objc_release(uVar3);
      ppuVar10 = (undefined **)((long)ppuVar10 + 1);
    } while (ppuVar4 != ppuVar10);
    ppuVar4 = ppuVar6;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 108eb34cc; end: 108eb378b; -[SCMediaVideoImportProcessor snapEmbeddedMetadataForAVMetadataItems:] */

/* WARNING: Removing unreachable block (ram,0x000108eb36d4) */

void FUN_108eb34cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
LAB_108eb373c:
      _objc_release(param_3);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
        ___stack_chk_fail();
        FUN_109126a88();
        _objc_alloc(PTR_PTR_1126dc590);
        func_0x00010c040420();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_3);
      }
      uVar11 = *(ulong *)(lVar10 * 8);
      uVar4 = uVar11;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar6 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar5);
      uVar1 = uVar4;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar4);
      uVar6 = uVar11;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar7 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar5);
      uVar4 = uVar6;
      if ((uVar7 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar6);
      uVar6 = uVar4;
      func_0x00010c071f40();
      _objc_release(uVar4);
      if ((((uVar6 & 1) != 0) || (uVar4 = uVar1, func_0x00010c0720c0(), (uVar4 & 1) != 0)) ||
         (uVar4 = uVar1, func_0x00010c0720c0(), (int)uVar4 != 0)) {
        puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar6 = uVar11;
        _objc_opt_isKindOfClass(uVar11,puVar8);
        uVar4 = uVar11;
        if ((uVar6 & 1) == 0) {
          uVar4 = 0;
        }
        _objc_retain(uVar4);
        _objc_release(uVar11);
        func_0x00010bf649c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        puVar8 = puVar5;
        func_0x00010c08fa60();
        if (puVar8 != (undefined *)0x0) {
          puVar8 = PTR_PTR_1126bcf38;
          _objc_alloc(PTR_PTR_1126bcf38);
          func_0x00010c008360();
          _objc_retain(puVar8);
          _objc_release(puVar8);
          _objc_release(puVar5);
          _objc_release(uVar1);
          goto LAB_108eb373c;
        }
        _objc_release(puVar5);
      }
      _objc_release(uVar1);
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 108eb378c; end: 108eb37df; -[SCMediaVideoImportProcessor _importStrategyForExportVideoUrlFromAVAsset:] */

void FUN_108eb378c(void)

{
  FUN_109126a88();
  _objc_alloc(PTR_PTR_1126dc590);
  func_0x00010c040420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108eb37e0; end: 108eb37e7; -[SCMediaVideoImportProcessor isCameraRollMediaImportMetricOptimizationEnabled] */

undefined8 FUN_108eb37e0(void)

{
  return 0;
}



/* Entry: 108eb37e8; end: 108eb384f; -[SCMediaVideoImportProcessor videoImportBlizzardLogger] */

void FUN_108eb37e8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010c06df80();
  if ((int)lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 == 0) {
      puVar1 = PTR_PTR_1126dc5b8;
      _objc_alloc();
      func_0x00010c05a940();
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      *(undefined **)(param_1 + 0x28) = puVar1;
      _objc_release(uVar2);
      lVar3 = *(long *)(param_1 + 0x28);
    }
    _objc_retain(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108eb3850; end: 108eb3903; -[SCMediaVideoImportProcessor _exportPresetForVideoProperties:] */

undefined1  [16]
FUN_108eb3850(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = param_3 >> 0x1f & 2;
  if ((param_3 & 0x1010000000000) == 0) {
    uVar1 = uVar1 + 1;
  }
  uVar3 = uVar1 ^ 2 | 4;
  if ((param_3 & 1) == 0) {
    uVar3 = uVar1 ^ 2;
  }
  uVar3 = uVar3 | param_3 >> 0x12 & 0x40;
  if (uVar3 == 0x40) {
    uVar2 = 0;
  }
  else {
    _objc_retain(param_4);
    uVar2 = param_4;
    if ((param_3 & 0x1010000000000) != 0 && (param_3 & 1) == 0) {
      uVar2 = *(undefined8 *)PTR__AVAssetExportPresetPassthrough_110347ec8;
      _objc_retain(uVar2);
      _objc_release(param_4);
    }
  }
  _objc_release(param_4);
  auVar4._8_8_ = uVar3 ^ 0x40;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 108eb3904; end: 108eb3c13; -[SCMediaVideoImportProcessor _skipTranscodingWithAVAsset:strategy:timeRange:urlPromise:logger:importedContentId:externalMediaSource:startTime:context:] */

void FUN_108eb3904(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_9);
  _objc_retain(param_12);
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_opt_class(puVar1);
  uVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  uVar5 = param_4;
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  uVar2 = uVar5;
  func_0x00010bdc2b80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  lVar3 = param_5;
  func_0x00010c0eece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    func_0x000107c3129c();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar4 = param_5;
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5;
    func_0x00010c25ce00(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(lVar4);
    _objc_release(param_5);
  }
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0f5800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf52000(puVar1);
  _objc_release(uVar5);
  puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar7 = PTR_PTR_1126dc5a0;
  _objc_alloc(PTR_PTR_1126dc5a0);
  func_0x00010c0111e0();
  func_0x00010bf43d60(param_7);
  _objc_release(param_7);
  func_0x00010c0a8100(param_8);
  uVar8 = param_8;
  func_0x00010c0a5ce0();
  _objc_release(param_8);
  if ((int)uVar8 != 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    FUN_108eb1b94(param_1);
    _objc_release(uVar8);
    func_0x00010c29a480(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a2340(param_1);
    _objc_release(param_2);
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(lVar3);
  _objc_release(puVar6);
  _objc_release(param_12);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108eb3c14; end: 108eb3ccb; -[SCMediaVideoImportProcessor _timeRangeOKToSkipTranscode:videoDuration:] */

bool FUN_108eb3c14(undefined8 param_1,undefined8 param_2,double *param_3,double *param_4)

{
  bool bVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  
  dStack_48 = param_3[1];
  dStack_50 = *param_3;
  dStack_40 = param_3[2];
  uStack_68 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_70 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_60 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  pdVar2 = &dStack_50;
  _CMTimeCompare(pdVar2,&uStack_70);
  if ((int)pdVar2 == 0) {
    dStack_48 = param_4[1];
    dVar3 = *param_4;
    dStack_40 = param_4[2];
    dStack_50 = dVar3;
    _CMTimeGetSeconds(&dStack_50);
    dStack_48 = param_3[4];
    dVar4 = param_3[3];
    dStack_40 = param_3[5];
    dStack_50 = dVar4;
    _CMTimeGetSeconds(&dStack_50);
    bVar1 = ABS(dVar3 - dVar4) < 0.01;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 108eb3ccc; end: 108eb3e1f; -[SCMediaVideoImportProcessor _assetWithFullyEnabledTracksVideo:audio:] */

void FUN_108eb3ccc(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
  _objc_opt_new(PTR__OBJC_CLASS___AVMutableComposition_1126beaa8);
  puVar2 = puVar1;
  func_0x00010bef9f20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bef9f20(puVar1,param_2,*(undefined8 *)PTR__AVMediaTypeAudio_110348070,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010c26f620(&uStack_70,param_3);
  }
  uVar6 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar5 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar4 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_90 = uVar5;
  uStack_88 = uVar6;
  uStack_80 = uVar4;
  func_0x00010c067160(puVar2,param_2,&uStack_70,param_3,&uStack_90,0,param_7,param_8,uVar5,uVar6);
  if (param_4 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010c26f620(&uStack_70,param_4);
  }
  uStack_90 = uVar5;
  uStack_88 = uVar6;
  uStack_80 = uVar4;
  func_0x00010c067160(puVar3,param_2,&uStack_70,param_4,&uStack_90,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108eb3e20; end: 108eb3e7f; -[SCMediaVideoImportProcessor .cxx_destruct] */

void FUN_108eb3e20(long param_1)

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



/* Entry: 108eb3e80; end: 108eb3f17; +[SCMediaVideoImportSloMoExporter allExportPresets] */

undefined * FUN_108eb3e80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)PTR__AVAssetExportPreset1280x720_110347e90;
  uStack_30 = *(undefined8 *)PTR__AVAssetExportPreset1920x1080_110347e98;
  uStack_28 = *(undefined8 *)PTR__AVAssetExportPreset640x480_110347ea0;
  uStack_20 = *(undefined8 *)PTR__AVAssetExportPresetPassthrough_110347ec8;
  puVar3 = &uStack_38;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar3,4);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  func_0x00010befff60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf4b900();
  _objc_release(puVar3);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 108eb3f18; end: 108eb3f7b; +[SCMediaVideoImportSloMoExporter supportsPresetName:] */

undefined8 FUN_108eb3f18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010befff60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4b900();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108eb3f7c; end: 108eb4117; -[SCMediaVideoImportSloMoExporter initWithVideoAVComposition:avAssetRequestInfo:presetName:timeRange:outputURL:circumstanceEngine:] */

undefined1 *
FUN_108eb3f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ff068;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 1;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    uVar4 = param_6[1];
    uVar2 = *param_6;
    uVar6 = param_6[3];
    uVar5 = param_6[2];
    uVar7 = param_6[4];
    *(undefined8 *)((long)puVar1 + 0x60) = param_6[5];
    *(undefined8 *)((long)puVar1 + 0x58) = uVar7;
    *(undefined8 *)((long)puVar1 + 0x50) = uVar6;
    *(undefined8 *)((long)puVar1 + 0x48) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x40) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b33c0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108eb4118; end: 108eb411f; -[SCMediaVideoImportSloMoExporter cancelExport] */

void FUN_108eb4118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfec290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_increment_1125d8a68);
  return;
}



/* Entry: 108eb4120; end: 108eb431f; -[SCMediaVideoImportSloMoExporter exportWithRotateLandscapeVideoToPortraitOrientationRight:completionQueue:completionHandler:] */

void FUN_108eb4120(long param_1,undefined8 param_2,undefined1 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  ppuVar3 = &puStack_90;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  *(undefined8 *)(param_1 + 8) = 2;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(long *)(param_1 + 0xb0) = param_4;
  _objc_release(uVar1);
  uVar1 = param_5;
  _objc_retainBlock();
  uVar5 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126ba150;
  func_0x00010c22e420();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((int)puVar2 == 0) {
    _objc_initWeak(auStack_60,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_108eb4320;
    puStack_78 = &UNK_11084ceb8;
    _objc_copyWeak(auStack_70,auStack_60);
    uStack_68 = param_3;
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_60);
  }
  else {
    uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110e87178;
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    func_0x00010be17540(param_1);
    func_0x00010c10ae00(PTR_PTR_1126d2ad8);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined *)((long)ppuVar3 + 0x20));
  _objc_destroyWeak(auStack_60);
  __Unwind_Resume();
  param_4 = param_4 + 0x20;
  _objc_loadWeakRetained();
  if (param_4 != 0) {
    func_0x00010be2abc0(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108eb4320; end: 108eb435b;  */

void FUN_108eb4320(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be2abc0(lVar1,param_2,*(undefined1 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108eb435c; end: 108eb43c3; -[SCMediaVideoImportSloMoExporter progressRatio] */

float FUN_108eb435c(long param_1)

{
  double dVar1;
  double dVar2;
  double dStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(double *)(param_1 + 0xa8) != 0.0) {
    uStack_38 = *(undefined8 *)(param_1 + 0x98);
    dVar1 = *(double *)(param_1 + 0x90);
    uStack_30 = *(undefined8 *)(param_1 + 0xa0);
    dStack_40 = dVar1;
    _CMTimeGetSeconds(&dStack_40);
    dVar1 = dVar1 / *(double *)(param_1 + 0xa8);
    dVar2 = 1.0;
    if (dVar1 <= 1.0) {
      dVar2 = dVar1;
    }
    return (float)dVar2;
  }
  return 0.0;
}



/* Entry: 108eb43c4; end: 108eb45c7; -[SCMediaVideoImportSloMoExporter _copyBuffersForMediaIndex:mediaReaderOutput:mediaWriterInput:] */

void FUN_108eb43c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c07bca0();
  if ((int)uVar1 != 0) {
    do {
      lVar2 = param_4;
      func_0x00010bf52120();
      if (lVar2 == 0) {
        func_0x00010c0bb0a0(param_5);
        lVar2 = *(long *)(param_1 + 0x80);
        func_0x00010c252d60();
        if (lVar2 != 1) {
          puStack_78 = &uStack_80;
          uStack_80 = 0;
          uStack_70 = 0x2020000000;
          lVar2 = *(long *)(param_1 + 0x80);
          func_0x00010c252d60();
          uStack_68 = lVar2 == 2;
          puStack_a8 = &uStack_b0;
          uStack_b0 = 0;
          uStack_a0 = 0x3032000000;
          pcStack_98 = FUN_108eb45c8;
          uStack_90 = 0x108eb45d8;
          uStack_88 = 0;
          _objc_initWeak(&uStack_60,param_1);
          uVar3 = *(undefined8 *)(param_1 + 0x88);
          _objc_copyWeak(auStack_b8,&uStack_60);
          func_0x00010bfaff80(uVar3);
          _objc_destroyWeak(auStack_b8);
          _objc_destroyWeak(&uStack_60);
          __Block_object_dispose(&uStack_b0,8);
          _objc_release(uStack_88);
          __Block_object_dispose(&uStack_80,8);
        }
        break;
      }
      _CMSampleBufferGetPresentationTimeStamp(&uStack_80);
      uStack_58 = *(undefined8 *)(param_1 + 0x98);
      uStack_60 = *(undefined8 *)(param_1 + 0x90);
      uStack_50 = *(undefined8 *)(param_1 + 0xa0);
      _CMTimeMaximum(&uStack_b0,&uStack_60,&uStack_80);
      *(undefined8 **)(param_1 + 0x98) = puStack_a8;
      *(undefined8 *)(param_1 + 0x90) = uStack_b0;
      *(undefined8 *)(param_1 + 0xa0) = uStack_a0;
      func_0x00010bf06fe0(param_5);
      _CFRelease(lVar2);
      uVar1 = param_5;
      func_0x00010c07bca0();
    } while ((uVar1 & 1) != 0);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108eb45c8; end: 108eb45df;  */

void FUN_108eb45c8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108eb45e0; end: 108eb467f;  */

void FUN_108eb45e0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108eb4680; end: 108eb46eb;  */

void FUN_108eb4680(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) == '\x01') {
      uVar2 = *(undefined8 *)(lVar1 + 0x68);
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
      uVar2 = 0;
    }
    func_0x00010be17540(lVar1,param_2,uVar2,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108eb46ec; end: 108eb48bb; -[SCMediaVideoImportSloMoExporter _finishWithVideoURL:error:] */

void FUN_108eb46ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = *(long *)(param_1 + 0xb0);
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_1 + 0x78);
    func_0x00010c11de00(lVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar5);
  }
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_108eb48bc;
  pcStack_50 = FUN_108eb48e4;
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  puStack_68 = &uStack_70;
  _objc_retainBlock();
  lVar3 = param_1;
  uStack_48 = uVar2;
  func_0x00010be3eae0();
  iVar1 = (int)lVar3;
  if (param_4 != 0) {
    iVar1 = 1;
  }
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = param_3;
  }
  _objc_retain(uVar2);
  _objc_initWeak(auStack_78,param_1);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_108eb48ec;
  puStack_a0 = &UNK_110843420;
  uStack_98 = uVar2;
  lStack_90 = param_4;
  puStack_88 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(uVar2);
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x000107c27d8c(lVar5,&puStack_b8);
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_80);
  _objc_release(lStack_90);
  _objc_release(uStack_98);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_78);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(lVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108eb48bc; end: 108eb48e3;  */

void FUN_108eb48bc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retainBlock();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 108eb48e4; end: 108eb48eb;  */

void FUN_108eb48e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108eb48ec; end: 108eb4937;  */

void FUN_108eb48ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))
              (lVar1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  }
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108eb4938; end: 108eb498f; -[SCMediaVideoImportSloMoExporter _handleCancellation] */

void FUN_108eb4938(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x00010c252d60();
  if (lVar1 == 1) {
    func_0x00010bf2eca0(*(undefined8 *)(param_1 + 0x80));
  }
  lVar1 = *(long *)(param_1 + 0x88);
  func_0x00010c252d60();
  if (lVar1 == 1) {
    func_0x00010bf2f520(*(undefined8 *)(param_1 + 0x88));
  }
                    /* WARNING: Could not recover jumptable at 0x00010be17550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__finishWithVideoURL_error__1125636f0,0,0);
  return;
}



/* Entry: 108eb4990; end: 108eb55b7; -[SCMediaVideoImportSloMoExporter _handleImportedSloMoVideoWithRotateLandscapeVideoToPortraitOrientationRight:] */

void FUN_108eb4990(double param_1,double param_2,long param_3,undefined8 param_4,int param_5)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_350;
  long lStack_310;
  undefined *puStack_308;
  undefined1 auStack_2c8 [8];
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [48];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = *(undefined1 **)(param_3 + 0x20);
  func_0x00010c279200(puVar2,param_4,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar3 == (undefined1 *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be17540(param_3);
    _objc_release(puVar5);
  }
  else {
    func_0x00010c106f40(auStack_1b8,puVar3);
    puVar2 = auStack_1b8;
    func_0x00010b691288(puVar2);
    func_0x00010c0d5d20(puVar3);
    uVar20 = *(ulong *)(param_3 + 0x30);
    _objc_retain(uVar20);
    puVar5 = PTR_PTR_1126d87e8;
    func_0x00010c2639c0();
    dVar25 = param_2;
    dVar26 = param_1;
    if (((int)puVar5 != 0) && (uVar4 = uVar20, func_0x00010c0720c0(), (uVar4 & 1) == 0)) {
      _objc_retain(uVar20);
      uVar4 = uVar20;
      func_0x00010c0720c0();
      if ((uVar4 & 1) == 0) {
        uVar4 = uVar20;
        func_0x00010c0720c0();
        if ((uVar4 & 1) == 0) {
          uVar4 = uVar20;
          func_0x00010c0720c0();
          bVar1 = (int)uVar4 == 0;
          dVar27 = 480.0;
          if (bVar1) {
            dVar27 = param_2;
          }
          dVar19 = 640.0;
          if (bVar1) {
            dVar19 = param_1;
          }
        }
        else {
          dVar27 = 1080.0;
          dVar19 = 1920.0;
        }
      }
      else {
        dVar27 = 720.0;
        dVar19 = 1280.0;
      }
      _objc_release(uVar20);
      if (((dVar19 != 0.0) && (dVar27 != 0.0)) && ((dVar19 < param_1 || (dVar27 < param_2)))) {
        dVar23 = param_2 / dVar27;
        if (param_2 / dVar27 <= param_1 / dVar19) {
          dVar23 = param_1 / dVar19;
        }
        dVar26 = param_1 / dVar23;
        if (dVar19 <= param_1 / dVar23) {
          dVar26 = dVar19;
        }
        dVar25 = param_2 / dVar23;
        if (dVar27 <= param_2 / dVar23) {
          dVar25 = dVar27;
        }
      }
    }
    _objc_release(uVar20);
    if (param_5 != 0) {
      puVar2 = puVar3;
      FUN_108eb57e8(puVar3,1);
    }
    func_0x00010b69119c(&uStack_1e8,dVar26,dVar25,puVar2);
    puVar5 = PTR__kCMTimeZero_110348670;
    uVar24 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar17 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    *(undefined8 *)(param_3 + 0x98) = uVar24;
    *(undefined8 *)(param_3 + 0x90) = uVar17;
    uVar18 = *(undefined8 *)(puVar5 + 0x10);
    *(undefined8 *)(param_3 + 0xa0) = uVar18;
    uVar6 = uVar17;
    if (*(long *)(param_3 + 0x20) == 0) {
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_220);
    }
    _CMTimeGetSeconds(&uStack_220);
    *(undefined8 *)(param_3 + 0xa8) = uVar6;
    lStack_1f0 = 0;
    puVar5 = PTR__OBJC_CLASS___AVAssetReader_1126bf598;
    func_0x00010bf0b620();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lStack_1f0;
    lStack_310 = lStack_1f0;
    _objc_retain();
    uVar6 = *(undefined8 *)(param_3 + 0x80);
    *(undefined **)(param_3 + 0x80) = puVar5;
    _objc_release(uVar6);
    if (lVar16 == 0) {
      uStack_218 = *(undefined8 *)(param_3 + 0x40);
      uStack_220 = *(undefined8 *)(param_3 + 0x38);
      uStack_208 = *(undefined8 *)(param_3 + 0x50);
      uStack_210 = *(undefined8 *)(param_3 + 0x48);
      uStack_1f8 = *(undefined8 *)(param_3 + 0x60);
      uStack_200 = *(undefined8 *)(param_3 + 0x58);
      uStack_248 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
      uStack_250 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
      uStack_238 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
      uStack_240 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
      uStack_228 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
      uStack_230 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
      puVar7 = &uStack_220;
      _CMTimeRangeEqual(puVar7,&uStack_250);
      if ((int)puVar7 == 0) {
        uStack_218 = *(undefined8 *)(param_3 + 0x40);
        uStack_220 = *(undefined8 *)(param_3 + 0x38);
        uStack_208 = *(undefined8 *)(param_3 + 0x50);
        uStack_210 = *(undefined8 *)(param_3 + 0x48);
        uStack_1f8 = *(undefined8 *)(param_3 + 0x60);
        uStack_200 = *(undefined8 *)(param_3 + 0x58);
        _CMTimeRangeGetEnd(&uStack_250,&uStack_220);
        if (*(long *)(param_3 + 0x20) == 0) {
          uStack_220 = 0;
          uStack_218 = 0;
          uStack_210 = 0;
        }
        else {
          func_0x00010bf8b160(&uStack_220);
        }
        puVar7 = &uStack_250;
        _CMTimeCompare(puVar7,&uStack_220);
        if ((int)puVar7 < 1) {
          uStack_218 = *(undefined8 *)(param_3 + 0x40);
          uStack_220 = *(undefined8 *)(param_3 + 0x38);
          uStack_208 = *(undefined8 *)(param_3 + 0x50);
          uStack_210 = *(undefined8 *)(param_3 + 0x48);
          uStack_1f8 = *(undefined8 *)(param_3 + 0x60);
          uStack_200 = *(undefined8 *)(param_3 + 0x58);
          func_0x00010c214ec0(*(undefined8 *)(param_3 + 0x80));
        }
      }
      puStack_308 = PTR__OBJC_CLASS___AVMutableVideoComposition_1126d7d20;
      func_0x00010c2998c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2071e0(puStack_308);
      _CMTimeMake(&uStack_268,1,0x1e);
      uStack_218 = uStack_260;
      uStack_220 = uStack_268;
      uStack_210 = uStack_258;
      func_0x00010c19f2e0(puStack_308);
      func_0x00010c1ea8e0(dVar26,dVar25,puStack_308);
      puVar5 = PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18;
      func_0x00010c2998a0();
      _objc_retainAutoreleasedReturnValue();
      dVar27 = dVar26 / param_1;
      if (dVar25 / param_2 <= dVar26 / param_1) {
        dVar27 = dVar25 / param_2;
      }
      _CGAffineTransformMakeScale(&uStack_220,dVar27,dVar27);
      uStack_248 = uStack_218;
      uStack_250 = uStack_220;
      uStack_238 = uStack_208;
      uStack_240 = uStack_210;
      uStack_228 = uStack_1f8;
      uStack_230 = uStack_200;
      uStack_280 = uVar17;
      uStack_278 = uVar24;
      uStack_270 = uVar18;
      func_0x00010c219980(puVar5);
      puVar8 = PTR__OBJC_CLASS___AVMutableVideoCompositionInstruction_1126d7d10;
      func_0x00010c299860();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_b0 = puVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b9960(puVar8);
      _objc_release(puVar9);
      func_0x00010c26f620(&uStack_2b0,puVar3);
      uStack_248 = uStack_2a8;
      uStack_250 = uStack_2b0;
      uStack_238 = uStack_298;
      uStack_240 = uStack_2a0;
      uStack_228 = uStack_288;
      uStack_230 = uStack_290;
      func_0x00010c214ec0(puVar8);
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_b8 = puVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1adc60(puStack_308);
      _objc_release(puVar9);
      puVar9 = PTR__OBJC_CLASS___AVAssetReaderVideoCompositionOutput_1126da1e0;
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_c0 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0b600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      func_0x00010c2213a0(puVar9);
      func_0x00010befa4c0(*(undefined8 *)(param_3 + 0x80));
      lStack_2b8 = 0;
      puVar10 = PTR__OBJC_CLASS___AVAssetWriter_1126bf5a8;
      func_0x00010bf0bac0();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lStack_2b8;
      lStack_310 = lStack_2b8;
      _objc_retain();
      uVar6 = *(undefined8 *)(param_3 + 0x88);
      *(undefined **)(param_3 + 0x88) = puVar10;
      _objc_release(uVar6);
      if (lVar16 == 0) {
        uVar20 = *(ulong *)(param_3 + 0x70);
        func_0x000109128224();
        puVar7 = (undefined8 *)PTR__AVVideoCodecTypeH264_110348128;
        if (((int)uVar20 != 0) &&
           (FUN_109128c2c(), puVar7 = (undefined8 *)PTR__AVVideoCodecTypeH264_110348128,
           (uVar20 & 1) != 0)) {
          puVar7 = (undefined8 *)PTR__AVVideoCodecTypeHEVC_110348130;
        }
        puStack_350 = (undefined *)*puVar7;
        _objc_retain(puStack_350);
        uStack_100 = *(undefined8 *)PTR__AVVideoCodecKey_110348120;
        uStack_f8 = *(undefined8 *)PTR__AVVideoWidthKey_1103481a0;
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_e0 = puStack_350;
        func_0x00010c0df720(dVar26);
        _objc_retainAutoreleasedReturnValue();
        uStack_f0 = *(undefined8 *)PTR__AVVideoHeightKey_110348168;
        puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_d8 = puVar10;
        func_0x00010c0df720(dVar25);
        _objc_retainAutoreleasedReturnValue();
        uStack_e8 = *(undefined8 *)PTR__AVVideoCompressionPropertiesKey_110348158;
        uStack_120 = *(undefined8 *)PTR__AVVideoAverageBitRateKey_110348108;
        puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_d0 = puVar11;
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        uStack_118 = *(undefined8 *)PTR__AVVideoAllowFrameReorderingKey_110348100;
        puStack_108 = PTR____kCFBooleanFalse_11034ab60;
        puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_110 = puVar12;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_c8 = puVar13;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        puVar10 = PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
        func_0x00010bf0ba80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c198a40(puVar10);
        uStack_248 = uStack_1e0;
        uStack_250 = uStack_1e8;
        uStack_238 = uStack_1d0;
        uStack_240 = uStack_1d8;
        uStack_228 = uStack_1c0;
        uStack_230 = uStack_1c8;
        func_0x00010c219960(puVar10);
        func_0x00010bef93a0(*(undefined8 *)(param_3 + 0x88));
        lVar15 = *(long *)(param_3 + 0x20);
        func_0x00010c279200();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar15;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar15);
        puStack_360 = PTR__OBJC_CLASS___AVAssetReaderAudioMixOutput_1126dc5c0;
        if (lVar16 == 0) {
          puStack_368 = (undefined *)0x0;
          puStack_360 = (undefined *)0x0;
          lVar15 = 1;
        }
        else {
          puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
          lStack_128 = lVar16;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          uVar22 = *(undefined8 *)PTR__AVFormatIDKey_11034cf30;
          uVar6 = *(undefined8 *)PTR__AVNumberOfChannelsKey_11034cf58;
          ppuStack_138 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d08a0;
          ppuStack_130 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d08b8;
          puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          uStack_148 = uVar22;
          uStack_140 = uVar6;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0b580();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar12);
          _objc_release(puVar11);
          func_0x00010c16c4c0(puStack_360);
          func_0x00010befa4c0(*(undefined8 *)(param_3 + 0x80));
          puStack_368 = PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
          uStack_180 = *(undefined8 *)PTR__AVSampleRateKey_11034cf60;
          ppuStack_168 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d08d0;
          ppuStack_160 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d08e8;
          uStack_170 = *(undefined8 *)PTR__AVEncoderBitRateKey_11034cf28;
          ppuStack_158 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d08b8;
          ppuStack_150 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0900;
          puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          uStack_188 = uVar22;
          uStack_178 = uVar6;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0ba80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          func_0x00010c198a40(puStack_368);
          func_0x00010bef93a0(*(undefined8 *)(param_3 + 0x88));
          lVar15 = 2;
        }
        func_0x00010c250140(*(undefined8 *)(param_3 + 0x80));
        func_0x00010c251d20(*(undefined8 *)(param_3 + 0x88));
        uStack_250 = uVar17;
        uStack_248 = uVar24;
        uStack_240 = uVar18;
        func_0x00010c2508a0(*(undefined8 *)(param_3 + 0x88));
        lVar21 = 0;
        do {
          uVar18 = *(undefined8 *)(param_3 + 0x80);
          func_0x00010c0ef240();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar18;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar18);
          uVar17 = *(undefined8 *)(param_3 + 0x88);
          func_0x00010c066460();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = uVar17;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar17);
          _objc_initWeak(&uStack_250,param_3);
          uVar17 = *(undefined8 *)(param_3 + 0x78);
          func_0x00010c11de00(uVar17);
          _objc_retainAutoreleasedReturnValue();
          _objc_copyWeak(auStack_2c8,&uStack_250);
          lStack_2c0 = lVar21;
          _objc_retain(uVar6);
          _objc_retain(uVar18);
          func_0x00010c135d80(uVar18);
          _objc_release(uVar17);
          _objc_release(uVar18);
          _objc_release(uVar6);
          _objc_destroyWeak(auStack_2c8);
          _objc_destroyWeak(&uStack_250);
          _objc_release(uVar18);
          _objc_release(uVar6);
          lVar21 = lVar21 + 1;
        } while (lVar15 != lVar21);
        _objc_release(lVar16);
        _objc_release(puStack_368);
        _objc_release(puStack_360);
        _objc_release(puVar10);
        _objc_release(puVar14);
      }
      else {
        puStack_350 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be17540(param_3);
      }
      _objc_release(puStack_350);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar5);
    }
    else {
      puStack_308 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be17540(param_3);
    }
    _objc_release(puStack_308);
    _objc_release(lStack_310);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(&uStack_250);
  __Unwind_Resume();
  puVar3 = puVar3 + 0x30;
  _objc_loadWeakRetained();
  puVar2 = puVar3;
  func_0x00010be3eae0();
  if ((int)puVar2 == 0) {
    func_0x00010bde99e0(puVar3);
  }
  else {
    func_0x00010be26e40(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108eb55b8; end: 108eb5607;  */

void FUN_108eb55b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be3eae0();
  if ((int)lVar2 == 0) {
    func_0x00010bde99e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  }
  else {
    func_0x00010be26e40(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108eb5608; end: 108eb5627; -[SCMediaVideoImportSloMoExporter _isCancelled] */

bool FUN_108eb5608(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c296d80(uVar1);
  return 0 < (int)uVar1;
}



/* Entry: 108eb5628; end: 108eb562f; -[SCMediaVideoImportSloMoExporter rotateToPortraitOrientation] */

undefined1 FUN_108eb5628(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc0);
}



/* Entry: 108eb5630; end: 108eb5637; -[SCMediaVideoImportSloMoExporter setRotateToPortraitOrientation:] */

void FUN_108eb5630(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc0) = param_3;
  return;
}



/* Entry: 108eb5638; end: 108eb563f; -[SCMediaVideoImportSloMoExporter presetName] */

undefined8 FUN_108eb5638(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108eb5640; end: 108eb5647; -[SCMediaVideoImportSloMoExporter state] */

undefined8 FUN_108eb5640(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108eb5648; end: 108eb57e7; -[SCMediaVideoImportSloMoExporter .cxx_destruct] */

void FUN_108eb5648(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108eb57e8; end: 108eb587b;  */

undefined1 * FUN_108eb57e8(ulong param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 auStack_60 [48];
  
  puVar3 = auStack_60;
  _objc_retain();
  if (param_1 != 0) {
    func_0x00010c106f40(auStack_60,param_1);
    func_0x00010b691288();
    if (param_2 == 0) goto LAB_108eb585c;
    uVar1 = param_1;
    func_0x000108eb56f0();
    uVar2 = uVar1;
    func_0x00010b6fc1b0();
    if (((uVar2 & 1) != 0) || ((uVar1 & 1) != 0)) goto LAB_108eb585c;
    if (puVar3 < (undefined1 *)0x3) {
      puVar3 = *(undefined1 **)(&UNK_10dfa3f58 + (long)puVar3 * 8);
      goto LAB_108eb585c;
    }
  }
  puVar3 = (undefined1 *)0x0;
LAB_108eb585c:
  _objc_release(param_1);
  return puVar3;
}



/* Entry: 108eb587c; end: 108eb58a7; +[SCGrapheneCameraMediaImportMetric imageImport] */

void FUN_108eb587c(void)

{
  _objc_alloc(PTR_PTR_1126dc578);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108eb58a8; end: 108eb58d3; +[SCGrapheneCameraMediaImportMetric imageEncodeFailure] */

void FUN_108eb58a8(void)

{
  _objc_alloc(PTR_PTR_1126dc578);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108eb58d4; end: 108eb5973; -[SCGrapheneCameraMediaImportMetric description] */

void FUN_108eb58d4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110efe2b8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110efe2b8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ff070;
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



/* Entry: 108eb5974; end: 108eb5abf; -[SCGrapheneRegistry cameraMediaImportGraphene] */

void FUN_108eb5974(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108eb59fc;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011372eaf0 != -1) {
    func_0x000107c27d9c(0x11372eaf0,&puStack_48);
  }
  uVar1 = uRam000000011372eae8;
  _objc_retain(uRam000000011372eae8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108eb5ac0; end: 108eb5b33; -[SCGrapheneVideoImportSourceMetric2 init] */

undefined1 * FUN_108eb5ac0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff078;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108eb5b34; end: 108eb5ca7;  */

void FUN_108eb5b34(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f523089;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110ac9988,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume(puVar1);
  FUN_108eb5cc8();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108eb5ca8; end: 108eb5cc7;  */

void FUN_108eb5ca8(undefined8 param_1)

{
  FUN_108eb5cc8(param_1,0x3c);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


