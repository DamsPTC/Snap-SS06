/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105bf5340; end: 105bf535b; +[SCLensRemoteAssetsUploadOperationStoreCleanupJob _completeWithResult:error:completion:] */

void FUN_105bf5340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  if (param_5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105bf5354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_5 + 0x10))(param_5,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 105bf535c; end: 105bf5367; -[SCLensRemoteAssetsUploadOperationStoreCleanupJob .cxx_destruct] */

void FUN_105bf535c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bf5368; end: 105bf5417; -[SCLensRemoteAssetsUploadOperationTask initAssetWithAssetInfo:effectId:uploadType:] */

undefined1 *
FUN_105bf5368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ec4e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bf5418; end: 105bf557f; -[SCLensRemoteAssetsUploadOperationTask initWithCoder:] */

undefined1 * FUN_105bf5418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ec4e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_s_state_112672338;
    _NSStringFromSelector(PTR_s_state_112672338);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(puVar2);
    puVar2 = PTR_s_assetInfo_1125a0678;
    _NSStringFromSelector(PTR_s_assetInfo_1125a0678);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    puVar2 = PTR_s_effectId_1125c0d10;
    _NSStringFromSelector(PTR_s_effectId_1125c0d10);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    puVar2 = PTR_s_uploadType_112681490;
    _NSStringFromSelector(PTR_s_uploadType_112681490);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf4bc00();
    if ((int)uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = param_3;
      func_0x00010bf66f40();
    }
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bf5580; end: 105bf5687; -[SCLensRemoteAssetsUploadOperationTask encodeWithCoder:] */

void FUN_105bf5580(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_s_state_112672338;
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  _NSStringFromSelector(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf92fc0(param_3,param_2,uVar2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_s_assetInfo_1125a0678;
  _NSStringFromSelector(PTR_s_assetInfo_1125a0678);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_s_effectId_1125c0d10;
  _NSStringFromSelector(PTR_s_effectId_1125c0d10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_s_uploadType_112681490;
  _NSStringFromSelector(PTR_s_uploadType_112681490);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf92fc0(param_3,param_2,uVar2,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105bf5688; end: 105bf57ff; -[SCLensRemoteAssetsUploadOperationTask isEqual:] */

bool FUN_105bf5688(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126c30f0;
  _objc_opt_class(PTR_PTR_1126c30f0);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar4 = param_1;
    _objc_opt_class(param_1);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar4);
    if ((uVar5 & 1) != 0) {
      if (uVar1 == param_1) {
        bVar2 = true;
        goto LAB_105bf57b4;
      }
      lVar7 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(param_3 + 0x10);
      _objc_retain(lVar7);
      _objc_retain(lVar8);
      if (lVar7 == lVar8) {
        _objc_release(lVar8);
        _objc_release(lVar7);
LAB_105bf575c:
        lVar7 = *(long *)(param_1 + 0x18);
        lVar8 = *(long *)(param_3 + 0x18);
        _objc_retain(lVar7);
        _objc_retain(lVar8);
        if (lVar7 == lVar8) {
          _objc_release(lVar8);
          _objc_release(lVar7);
        }
        else {
          if (lVar8 == 0) goto LAB_105bf57a8;
          lVar6 = lVar7;
          func_0x00010c071ae0();
          _objc_release(lVar8);
          _objc_release(lVar7);
          if ((int)lVar6 == 0) goto LAB_105bf57b0;
        }
        bVar2 = *(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20);
        goto LAB_105bf57b4;
      }
      if (lVar8 != 0) {
        lVar6 = lVar7;
        func_0x00010c071ae0();
        _objc_release(lVar8);
        _objc_release(lVar7);
        if ((int)lVar6 == 0) goto LAB_105bf57b0;
        goto LAB_105bf575c;
      }
LAB_105bf57a8:
      _objc_release(lVar7);
    }
  }
LAB_105bf57b0:
  bVar2 = false;
LAB_105bf57b4:
  _objc_release(uVar1);
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 105bf5800; end: 105bf58ab; -[SCLensRemoteAssetsUploadOperationTask hash] */

ulong FUN_105bf5800(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong auStack_40 [4];
  
  auStack_40[3] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bfde980(uVar1);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bfde980();
  auStack_40[1] = lVar2;
  auStack_40[2] = *(undefined8 *)(param_1 + 0x20);
  lVar3 = 8;
  do {
    uVar1 = *(ulong *)((long)auStack_40 + lVar3) | uVar1 << 0x20;
    uVar1 = ~uVar1 + uVar1 * 0x40000;
    uVar1 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
    uVar1 = (uVar1 ^ uVar1 >> 0xb) * 0x41;
    uVar1 = uVar1 ^ uVar1 >> 0x16;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_40[3]) {
    return uVar1;
  }
  ___stack_chk_fail();
  return *(ulong *)(lVar2 + 8);
}



/* Entry: 105bf58ac; end: 105bf58b3; -[SCLensRemoteAssetsUploadOperationTask state] */

undefined8 FUN_105bf58ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105bf58b4; end: 105bf58bb; -[SCLensRemoteAssetsUploadOperationTask setState:] */

void FUN_105bf58b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105bf58bc; end: 105bf58c3; -[SCLensRemoteAssetsUploadOperationTask assetInfo] */

undefined8 FUN_105bf58bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105bf58c4; end: 105bf58cb; -[SCLensRemoteAssetsUploadOperationTask effectId] */

undefined8 FUN_105bf58c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105bf58cc; end: 105bf58d3; -[SCLensRemoteAssetsUploadOperationTask uploadType] */

undefined8 FUN_105bf58cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105bf58d4; end: 105bf5903; -[SCLensRemoteAssetsUploadOperationTask .cxx_destruct] */

void FUN_105bf58d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105bf5904; end: 105bf599b; -[SCLensRemoteAssetsBlobUploadOperation initWithBatchId:performer:] */

undefined8
FUN_105bf5904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1607a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff74e0(param_1,param_2,param_3,param_4,1,puVar1,0,1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 105bf599c; end: 105bf5a4b; -[SCLensRemoteAssetsBlobUploadOperation initWithBatchId:] */

undefined8 FUN_105bf599c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f33012c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x11,0,0xe);
  _objc_release(puVar2);
  func_0x00010bff74c0(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 105bf5a4c; end: 105bf5b6b; -[SCLensRemoteAssetsBlobUploadOperation initWithCoder:] */

undefined8 FUN_105bf5a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_110e21c18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f33012c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar2,param_2,puVar3,0x11,0,0xe);
  _objc_release(puVar3);
  uVar4 = param_3;
  func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_110e21c38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar4;
  func_0x00010c0d3c80(uVar4);
  func_0x00010bff74e0(param_1,param_2,uVar1,puVar2,0,uVar5,0,0);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105bf5b6c; end: 105bf5c7b; -[SCLensRemoteAssetsBlobUploadOperation initWithBatchId:performer:isValid:tasks:state:isAwoken:] */

undefined1 *
FUN_105bf5b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126ec4f0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x29) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    *(undefined1 *)((long)puVar1 + 0x28) = param_8;
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bf5c7c; end: 105bf5cdb; -[SCLensRemoteAssetsBlobUploadOperation encodeWithCoder:] */

void FUN_105bf5c7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e21c18);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e21c38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bf5cdc; end: 105bf5f9f; +[SCLensRemoteAssetsBlobUploadOperation operationFromRetrievableData:] */

void FUN_105bf5cdc(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *puVar10;
  undefined *unaff_x24;
  undefined8 uVar11;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long unaff_x27;
  undefined **unaff_x28;
  undefined1 auStack_2e8 [8];
  undefined1 uStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1b0;
  undefined **ppuStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
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
  puVar1 = param_3;
  func_0x00010bf0af60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  puVar7 = (undefined *)0x0;
  if (puVar6 != (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puStack_140 = param_3;
    func_0x00010c26a9e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = param_3;
    func_0x00010bf52a60();
    if (param_3 != (undefined *)0x0) {
      unaff_x27 = *plStack_120;
      unaff_x28 = &PTR_PTR_1126c3000;
      do {
        puVar7 = (undefined *)0x0;
        do {
          if (*plStack_120 != unaff_x27) {
            _objc_enumerationMutation(puStack_138);
          }
          puVar10 = *(undefined **)(lStack_128 + (long)puVar7 * 8);
          puVar6 = PTR_PTR_1126c30f8;
          _objc_alloc(PTR_PTR_1126c30f8);
          puVar2 = puVar10;
          func_0x00010bf0b260(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bff4380(puVar6);
          _objc_release(puVar2);
          unaff_x25 = PTR_PTR_1126c30f0;
          _objc_alloc();
          unaff_x26 = puVar10;
          func_0x00010bf8cda0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c28e9a0(puVar10);
          func_0x00010bfee3a0();
          _objc_release(unaff_x26);
          func_0x00010c252440(puVar10);
          func_0x00010c209fc0(unaff_x25);
          func_0x00010befa120(puVar1);
          _objc_release(unaff_x25);
          _objc_release(puVar6);
          puVar7 = puVar7 + 1;
        } while (param_3 != puVar7);
        param_3 = puStack_138;
        func_0x00010bf52a60();
      } while (param_3 != (undefined *)0x0);
    }
    _objc_release(puStack_138);
    puVar7 = PTR_PTR_1126c30c0;
    _objc_alloc();
    param_3 = puStack_140;
    unaff_x22 = puStack_140;
    func_0x00010bf0af60();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = PTR_PTR_1126ae790;
    _objc_alloc();
    unaff_x24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    _objc_release(unaff_x24);
    func_0x00010bff74e0();
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(puVar1);
  }
  puVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_148 = FUN_105bf5fa0;
    lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    ppuStack_1a0 = unaff_x28;
    lStack_198 = unaff_x27;
    puStack_190 = unaff_x26;
    puStack_188 = unaff_x25;
    puStack_180 = unaff_x24;
    puStack_178 = unaff_x23;
    puStack_170 = unaff_x22;
    puStack_168 = puVar7;
    puStack_160 = puVar1;
    puStack_158 = param_3;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_opt_new();
    puVar7 = puVar6;
    puStack_280 = puVar6;
    func_0x00010bdf72e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uVar5 = 0x10;
    puStack_278 = puVar7;
    func_0x00010bf52a60();
    if (puVar7 != (undefined *)0x0) {
      lVar8 = *plStack_260;
      do {
        puVar6 = (undefined *)0x0;
        do {
          if (*plStack_260 != lVar8) {
            _objc_enumerationMutation(puStack_278);
          }
          puVar10 = *(undefined **)(lStack_268 + (long)puVar6 * 8);
          unaff_x24 = PTR_PTR_1126c30c8;
          _objc_alloc();
          unaff_x25 = puVar10;
          func_0x00010bf0b340();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010bf0b260();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar10;
          func_0x00010bf8cda0(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c252440(puVar10);
          func_0x00010c28e9a0(puVar10);
          puVar10 = unaff_x24;
          func_0x00010bff4460(unaff_x24);
          _objc_release(puVar1);
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
          func_0x00010befa120(puVar2);
          _objc_release(puVar10);
          puVar6 = puVar6 + 1;
        } while (puVar7 != puVar6);
        uVar5 = 0x10;
        puVar7 = puStack_278;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined *)0x0);
    }
    puVar1 = PTR_PTR_1126c30d0;
    _objc_alloc();
    uVar9 = *(undefined8 *)(puStack_280 + 0x10);
    puVar10 = puVar2;
    func_0x00010bf51e00();
    puVar7 = puVar1;
    puVar4 = puVar10;
    func_0x00010bff4320();
    _objc_release(puVar10);
    _objc_release(puStack_278);
    puVar3 = puVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
      ___stack_chk_fail();
      pcStack_288 = FUN_105bf61a8;
      puStack_2d0 = unaff_x26;
      puStack_2c8 = unaff_x25;
      puStack_2c0 = unaff_x24;
      puStack_2b8 = puVar10;
      puStack_2b0 = puVar1;
      puStack_2a8 = puVar7;
      puStack_2a0 = puVar6;
      puStack_298 = puVar2;
      ppuStack_290 = &puStack_150;
      _objc_retain(uVar9);
      _objc_retain(puVar4);
      puVar7 = PTR_PTR_1126c30f8;
      _objc_alloc(PTR_PTR_1126c30f8);
      func_0x00010bff4380();
      puVar1 = PTR_PTR_1126c30f0;
      _objc_alloc();
      func_0x00010bfee3a0();
      _objc_initWeak(auStack_2d8,puVar3);
      uVar11 = *(undefined8 *)(puVar3 + 8);
      _objc_copyWeak(auStack_2e8,auStack_2d8);
      _objc_retain(puVar1);
      uStack_2e0 = uVar5;
      func_0x00010c0f88c0(uVar11);
      _objc_release(puVar1);
      _objc_destroyWeak(auStack_2e8);
      _objc_destroyWeak(auStack_2d8);
      _objc_release(puVar1);
      _objc_release(puVar7);
      _objc_release(puVar4);
      _objc_release(uVar9);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105bf5fa0; end: 105bf61a7; -[SCLensRemoteAssetsBlobUploadOperation retrievableData] */

void FUN_105bf5fa0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 auStack_1a8 [8];
  undefined1 uStack_1a0;
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar2 = param_1;
  lStack_140 = param_1;
  func_0x00010bdf72e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar8 = 0x10;
  lStack_138 = lVar2;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      param_1 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lStack_138);
        }
        uVar11 = *(undefined8 *)(lStack_128 + param_1 * 8);
        unaff_x24 = PTR_PTR_1126c30c8;
        _objc_alloc();
        unaff_x25 = uVar11;
        func_0x00010bf0b340();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x25;
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar11;
        func_0x00010bf8cda0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c252440(uVar11);
        func_0x00010c28e9a0(uVar11);
        puVar3 = unaff_x24;
        func_0x00010bff4460(unaff_x24);
        _objc_release(uVar10);
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        func_0x00010befa120(puVar1);
        _objc_release(puVar3);
        param_1 = param_1 + 1;
      } while (lVar2 != param_1);
      uVar8 = 0x10;
      lVar2 = lStack_138;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  puVar3 = PTR_PTR_1126c30d0;
  _objc_alloc();
  uVar10 = *(undefined8 *)(lStack_140 + 0x10);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  puVar5 = puVar3;
  puVar7 = puVar4;
  func_0x00010bff4320();
  _objc_release(puVar4);
  _objc_release(lStack_138);
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_105bf61a8;
  uStack_190 = unaff_x26;
  uStack_188 = unaff_x25;
  puStack_180 = unaff_x24;
  puStack_178 = puVar4;
  puStack_170 = puVar3;
  puStack_168 = puVar5;
  lStack_160 = param_1;
  puStack_158 = puVar1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(uVar10);
  _objc_retain(puVar7);
  puVar1 = PTR_PTR_1126c30f8;
  _objc_alloc(PTR_PTR_1126c30f8);
  func_0x00010bff4380();
  puVar3 = PTR_PTR_1126c30f0;
  _objc_alloc();
  func_0x00010bfee3a0();
  _objc_initWeak(auStack_198,puVar6);
  uVar11 = *(undefined8 *)(puVar6 + 8);
  _objc_copyWeak(auStack_1a8,auStack_198);
  _objc_retain(puVar3);
  uStack_1a0 = uVar8;
  func_0x00010c0f88c0(uVar11);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_1a8);
  _objc_destroyWeak(auStack_198);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar7);
  _objc_release(uVar10);
  return;
}



/* Entry: 105bf61a8; end: 105bf62f7; -[SCLensRemoteAssetsBlobUploadOperation enqueueRequestAssetUploadWithId:effectId:startImmediately:uploadType:] */

void FUN_105bf61a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c30f8;
  _objc_alloc(PTR_PTR_1126c30f8);
  func_0x00010bff4380();
  puVar2 = PTR_PTR_1126c30f0;
  _objc_alloc();
  func_0x00010bfee3a0();
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(puVar2);
  uStack_60 = param_5;
  func_0x00010c0f88c0(uVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105bf62f8; end: 105bf633f;  */

void FUN_105bf62f8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bdd2000(lVar1);
    func_0x00010be0a2a0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined1 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105bf6340; end: 105bf643f; -[SCLensRemoteAssetsBlobUploadOperation state] */

undefined8 FUN_105bf6340(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_48 = &uStack_50;
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105bf6440;
  puStack_70 = &UNK_110850308;
  _objc_copyWeak(auStack_60,auStack_58);
  ppuVar1 = &puStack_88;
  puStack_68 = &uStack_50;
  _objc_retainBlock(ppuVar1);
  func_0x00010be72b00(param_1);
  uVar2 = puStack_48[3];
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Block_object_dispose(&uStack_50,8);
  return uVar2;
}



/* Entry: 105bf6440; end: 105bf6477;  */

void FUN_105bf6440(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = *(undefined8 *)(lVar1 + 0x30)
    ;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105bf6478; end: 105bf654f; -[SCLensRemoteAssetsBlobUploadOperation stateWithCompletion:] */

void FUN_105bf6478(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105bf6550; end: 105bf6593;  */

void FUN_105bf6550(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x20), lVar2 != 0)) {
    (**(code **)(lVar2 + 0x10))(lVar2,*(undefined8 *)(lVar1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105bf6594; end: 105bf6693; -[SCLensRemoteAssetsBlobUploadOperation isValid] */

undefined1 FUN_105bf6594(undefined8 param_1)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_48 = &uStack_50;
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105bf6694;
  puStack_70 = &UNK_110850308;
  _objc_copyWeak(auStack_60,auStack_58);
  ppuVar2 = &puStack_88;
  puStack_68 = &uStack_50;
  _objc_retainBlock(ppuVar2);
  func_0x00010be72b00(param_1);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 105bf6694; end: 105bf66db;  */

void FUN_105bf6694(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bdd2000(lVar1);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = *(undefined1 *)(lVar1 + 0x29)
    ;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105bf66dc; end: 105bf6703; -[SCLensRemoteAssetsBlobUploadOperation uploadOperationEvent] */

void FUN_105bf66dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bf6704; end: 105bf676f; -[SCLensRemoteAssetsBlobUploadOperation _enqueueTask:startImmediately:] */

void FUN_105bf6704(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
    func_0x00010bee0980(param_1);
    if (param_4 != 0) {
      func_0x00010bec2020(param_1,param_2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bf6770; end: 105bf69ef; -[SCLensRemoteAssetsBlobUploadOperation _startUploadForTask:] */

void FUN_105bf6770(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  ulong uStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  ppuVar6 = &puStack_b0;
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c252440();
  if ((uVar1 | 2) != 3) {
    lVar2 = param_2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0bc20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf0bbe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf0bb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if ((lVar3 != 0) && (lVar4 != 0)) {
      func_0x00010bea7e60(param_2);
      lVar2 = param_2;
      func_0x00010bf6b020(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0bb60();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar2);
      func_0x00010bf0b8a0(lVar5);
      _CACurrentMediaTime();
      _objc_initWeak(auStack_68,param_2);
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_105bf69f0;
      puStack_98 = &UNK_1108dcd40;
      _objc_copyWeak(auStack_78,auStack_68);
      _objc_retain(lVar5);
      lStack_90 = lVar5;
      uStack_70 = param_1;
      _objc_retain(param_4);
      uStack_88 = param_4;
      _objc_retain(lVar4);
      lStack_80 = lVar4;
      _objc_retainBlock(&puStack_b0);
      uVar1 = param_4;
      func_0x00010bf0b340(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar1;
      func_0x00010bf0b260();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28e9a0(param_4);
      func_0x00010c28eaa0(lVar3);
      _objc_release(uVar7);
      _objc_release(uVar1);
      _objc_release(ppuVar6);
      _objc_release(lStack_80);
      _objc_release(uStack_88);
      _objc_release(lStack_90);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_68);
    }
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 105bf69f0; end: 105bf6b4f;  */

void FUN_105bf69f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 8);
    _objc_retain(param_5);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f88c0(uVar4);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(param_5);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105bf6b50; end: 105bf6bdb;  */

void FUN_105bf6b50(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    _CACurrentMediaTime();
    func_0x00010bf0b880(param_1 - *(double *)(param_2 + 0x58),uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be919b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_2 + 0x30),PTR_s__requestSucceededForTask_withAss_112582008,
               *(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40),
               *(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x50));
    return;
  }
  func_0x00010bf3ec40();
  if (lVar1 == 4) {
    func_0x00010c28d980(*(undefined8 *)(param_2 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdcf970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_2 + 0x30),PTR_s__assetNotFoundForTask__1125517f8,
               *(undefined8 *)(param_2 + 0x38));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be90fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x30),PTR_s__requestFailedForTask_withError__112581d90,
             *(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 105bf6bdc; end: 105bf6d53; -[SCLensRemoteAssetsBlobUploadOperation _requestSucceededForTask:withAssetsStore:boltUrl:boltContentObject:] */

void FUN_105bf6bdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bea7e60(param_1);
  uVar1 = param_3;
  func_0x00010bf0b340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0b260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8b640(param_1);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126c3100;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010bf0b340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0b260();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf8cda0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf7c1c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010c0d9840(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be9e810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendAggregateStateNotificationI_1125853a8);
  return;
}



/* Entry: 105bf6d54; end: 105bf6e53; -[SCLensRemoteAssetsBlobUploadOperation _requestFailedForTask:withError:] */

void FUN_105bf6d54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bea7e60(param_1);
  puVar4 = PTR_PTR_1126c3100;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010bf0b340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0b260();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf8cda0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf76440(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0d9840(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be9e810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendAggregateStateNotificationI_1125853a8);
  return;
}



/* Entry: 105bf6e54; end: 105bf6fb3; -[SCLensRemoteAssetsBlobUploadOperation _assetNotFoundForTask:] */

void FUN_105bf6e54(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_3;
  func_0x00010bf0b340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e21c58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&uStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar5,param_2,&PTR____CFConstantStringClassReference_110e21bf8,1,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010be90fc0(param_1,param_2,param_3,puVar5);
  _objc_release(puVar5);
  func_0x00010c069d00(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126c3100;
  if (*(long *)(param_3 + 0x30) == 3) {
    uVar6 = *(undefined8 *)(param_3 + 0x20);
    puVar5 = PTR_PTR_1126c3100;
    func_0x00010bf7c1a0(PTR_PTR_1126c3100);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6,param_2,puVar5);
  }
  else {
    if (*(long *)(param_3 + 0x30) != 2) {
      return;
    }
    uVar6 = *(undefined8 *)(param_3 + 0x20);
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e21bf8,0,
                        PTR____NSDictionary0__struct_11034ab58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf764a0(puVar3,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6,param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105bf6fb4; end: 105bf708b; -[SCLensRemoteAssetsBlobUploadOperation _sendAggregateStateNotificationIfNeeded] */

void FUN_105bf6fb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c3100;
  if (*(long *)(param_1 + 0x30) == 3) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126c3100;
    func_0x00010bf7c1a0(PTR_PTR_1126c3100);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
  }
  else {
    if (*(long *)(param_1 + 0x30) != 2) {
      return;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e21bf8,0,
                        PTR____NSDictionary0__struct_11034ab58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf764a0(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105bf708c; end: 105bf70b3; -[SCLensRemoteAssetsBlobUploadOperation _setState:forTask:] */

void FUN_105bf708c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c209fc0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bee0990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateState_112595c08);
  return;
}



/* Entry: 105bf70b4; end: 105bf70d7; -[SCLensRemoteAssetsBlobUploadOperation _updateState] */

void FUN_105bf70b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bdc9980();
  *(long *)(param_1 + 0x30) = lVar1;
  return;
}



/* Entry: 105bf70d8; end: 105bf720f; -[SCLensRemoteAssetsBlobUploadOperation _aggregateState] */

undefined1 * FUN_105bf70d8(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  long lStack_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar3 = (undefined1 *)0x0;
    lVar1 = 0;
  }
  else {
    puVar2 = *(undefined1 **)(param_1 + 0x18);
    func_0x00010bf04a20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c252440();
    _objc_release(puVar2);
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    param_1 = *(long *)(param_1 + 0x18);
    _objc_retain(param_1);
    lVar1 = param_1;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar4 = *plStack_100;
      do {
        lVar5 = 0;
        do {
          if (*plStack_100 != lVar4) {
            _objc_enumerationMutation(param_1);
          }
          puVar2 = *(undefined1 **)(lStack_108 + lVar5 * 8);
          func_0x00010c252440();
          if (puVar2 <= puVar3) {
            puVar3 = puVar2;
          }
          lVar5 = lVar5 + 1;
        } while (lVar1 != lVar5);
        lVar1 = param_1;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    lVar1 = param_1;
    _objc_release(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_105bf7210;
  lStack_130 = param_1;
  puStack_128 = puVar3;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_138,lVar1);
  _objc_copyWeak(auStack_140,auStack_138);
  func_0x00010be72b00(lVar1);
  _objc_destroyWeak(auStack_140);
  puVar3 = auStack_138;
  _objc_destroyWeak(puVar3);
  return puVar3;
}



/* Entry: 105bf7210; end: 105bf72b3; -[SCLensRemoteAssetsBlobUploadOperation awakeFromCoder] */

void FUN_105bf7210(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010be72b00(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105bf72b4; end: 105bf72e7;  */

void FUN_105bf72b4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdd1fe0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bf72e8; end: 105bf738f; -[SCLensRemoteAssetsBlobUploadOperation start] */

void FUN_105bf72e8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f88c0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105bf7390; end: 105bf74a3;  */

void FUN_105bf7390(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long lVar4;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdd2000(param_1);
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    unaff_x20 = *(long *)(param_1 + 0x18);
    _objc_retain(unaff_x20);
    lVar1 = unaff_x20;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      unaff_x22 = *plStack_100;
      do {
        lVar4 = 0;
        do {
          if (*plStack_100 != unaff_x22) {
            _objc_enumerationMutation(unaff_x20);
          }
          func_0x00010bec2020(param_1);
          lVar4 = lVar4 + 1;
        } while (lVar1 != lVar4);
        lVar1 = unaff_x20;
        func_0x00010bf52a60();
        unaff_x21 = 0;
      } while (lVar1 != 0);
    }
    _objc_release(unaff_x20);
  }
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_105bf74a4;
  lVar4 = lVar1;
  lStack_140 = unaff_x22;
  uStack_138 = unaff_x21;
  lStack_130 = unaff_x20;
  lStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bf0bbe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar2 != 0) {
    _objc_initWeak(auStack_148,lVar1);
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_105bf75b0;
    puStack_160 = &UNK_110841fb0;
    _objc_copyWeak(auStack_150,auStack_148);
    _objc_retain(lVar2);
    ppuVar3 = &puStack_178;
    lStack_158 = lVar2;
    _objc_retainBlock(ppuVar3);
    func_0x00010be72b00(lVar1);
    _objc_release(ppuVar3);
    _objc_release(lStack_158);
    _objc_destroyWeak(auStack_150);
    _objc_destroyWeak(auStack_148);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 105bf74a4; end: 105bf75af; -[SCLensRemoteAssetsBlobUploadOperation invalidate] */

void FUN_105bf74a4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0bbe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105bf75b0;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(lVar2);
    ppuVar3 = &puStack_68;
    lStack_48 = lVar2;
    _objc_retainBlock(ppuVar3);
    func_0x00010be72b00(param_1);
    _objc_release(ppuVar3);
    _objc_release(lStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 105bf75b0; end: 105bf773f;  */

void FUN_105bf75b0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdd2000(param_1);
    lVar5 = *(long *)(param_1 + 0x18);
    _objc_retain(lVar5);
    lVar2 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        lVar6 = *(long *)(lVar7 * 8);
        lVar3 = lVar6;
        func_0x00010c252440();
        if ((lVar3 != 3) && (lVar3 = lVar6, func_0x00010c252440(), lVar3 != 0)) {
          _objc_release(lVar5);
          goto LAB_105bf76fc;
        }
        func_0x00010bf0b340(lVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar6;
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be8b640(param_1);
        _objc_release(lVar3);
        _objc_release(lVar6);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
LAB_105bf76fc:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdd1ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105bf7740; end: 105bf774f; -[SCLensRemoteAssetsBlobUploadOperation _awakeFromCoderIfNeeded] */

void FUN_105bf7740(long param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdd1ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__awakeFromCoder_112552198);
  return;
}



/* Entry: 105bf7750; end: 105bf79bf; -[SCLensRemoteAssetsBlobUploadOperation _awakeFromCoder] */

void FUN_105bf7750(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *unaff_x22;
  undefined1 uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [8];
  undefined1 *puStack_220;
  undefined1 *puStack_218;
  undefined1 *puStack_210;
  undefined1 *puStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
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
  undefined1 auStack_170 [256];
  long lStack_70;
  
  puVar5 = &uStack_1f0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  puVar10 = param_1;
  func_0x00010bf0bbe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar3 = unaff_x22;
  if (puVar1 != (undefined1 *)0x0) {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    lVar6 = *(long *)(param_1 + 0x18);
    _objc_retain(lVar6);
    lVar14 = lVar6;
    func_0x00010bf52a60();
    if (lVar14 != 0) {
      lVar12 = *plStack_1a0;
      do {
        lVar13 = 0;
        do {
          if (*plStack_1a0 != lVar12) {
            _objc_enumerationMutation(lVar6);
          }
          lVar9 = *(long *)(lStack_1a8 + lVar13 * 8);
          lVar2 = lVar9;
          func_0x00010c252440();
          if (lVar2 == 1) {
            func_0x00010c209fc0(lVar9);
          }
          lVar13 = lVar13 + 1;
        } while (lVar14 != lVar13);
        lVar14 = lVar6;
        func_0x00010bf52a60();
        unaff_x22 = (undefined1 *)0x0;
      } while (lVar14 != 0);
    }
    _objc_release(lVar6);
    func_0x00010bee0980(param_1);
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    puVar7 = *(undefined1 **)(param_1 + 0x18);
    _objc_retain(puVar7);
    param_4 = auStack_170;
    puVar3 = puVar7;
    func_0x00010bf52a60();
    if (puVar3 == (undefined1 *)0x0) {
      uVar8 = 1;
      puVar3 = unaff_x22;
    }
    else {
      lVar14 = *plStack_1e0;
      puVar10 = (undefined1 *)0x1;
      do {
        puVar15 = (undefined1 *)0x0;
        do {
          if (*plStack_1e0 != lVar14) {
            _objc_enumerationMutation(puVar7);
          }
          if (((ulong)puVar10 & 1) == 0) {
            uVar8 = 0;
            goto LAB_105bf796c;
          }
          puVar11 = *(undefined1 **)(lStack_1e8 + (long)puVar15 * 8);
          puVar10 = puVar11;
          func_0x00010c252440();
          if (puVar10 < (undefined1 *)0x3) {
            func_0x00010bf0b340();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar11;
            func_0x00010bf0b260();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = param_1;
            puVar5 = (undefined8 *)puVar4;
            param_4 = puVar1;
            func_0x00010bdcf840();
            _objc_release(puVar4);
            _objc_release(puVar11);
          }
          else {
            puVar10 = (undefined1 *)0x1;
          }
          uVar8 = SUB81(puVar10,0);
          puVar15 = puVar15 + 1;
        } while (puVar3 != puVar15);
        param_4 = auStack_170;
        puVar3 = puVar7;
        puVar5 = &uStack_1f0;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined1 *)0x0);
    }
LAB_105bf796c:
    _objc_release(puVar7);
    param_1[0x29] = uVar8;
    param_1[0x28] = 1;
    puVar10 = (undefined1 *)puVar5;
  }
  puVar15 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_1f8 = FUN_105bf79c0;
    puStack_220 = puVar3;
    puStack_218 = puVar7;
    puStack_210 = puVar1;
    puStack_208 = param_1;
    puStack_200 = &stack0xfffffffffffffff0;
    _objc_retain(puVar10);
    _objc_retain(param_4);
    _objc_initWeak(auStack_228,puVar15);
    _objc_copyWeak(auStack_230,auStack_228);
    _objc_retain(puVar10);
    func_0x00010c12b2e0(param_4);
    _objc_release(puVar10);
    _objc_destroyWeak(auStack_230);
    _objc_destroyWeak(auStack_228);
    _objc_release(param_4);
    _objc_release(puVar10);
    return;
  }
  return;
}



/* Entry: 105bf79c0; end: 105bf7aab; -[SCLensRemoteAssetsBlobUploadOperation _removeAssetWithAssetId:store:] */

void FUN_105bf79c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c12b2e0(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105bf7aac; end: 105bf7ac3;  */

void FUN_105bf7aac(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105bf7ac4; end: 105bf7aeb; -[SCLensRemoteAssetsBlobUploadOperation _assetExistsWithId:store:] */

void FUN_105bf7ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  func_0x00010bf0b1e0(param_4,param_2,param_3,&uStack_18);
  return;
}



/* Entry: 105bf7aec; end: 105bf7bfb; -[SCLensRemoteAssetsBlobUploadOperation _currentTasks] */

void FUN_105bf7aec(undefined8 param_1)

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
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105bf7bfc;
  uStack_40 = 0x105bf7c0c;
  uStack_38 = 0;
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010be72b00(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bf7bfc; end: 105bf7c13;  */

void FUN_105bf7bfc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105bf7c14; end: 105bf7c63;  */

void FUN_105bf7c14(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    func_0x00010bf51e00();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105bf7c64; end: 105bf7cc3; -[SCLensRemoteAssetsBlobUploadOperation _performSyncWithBlock:] */

void FUN_105bf7c64(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c06fc80();
  if (iVar1 == 0) {
    func_0x00010c0f8240(*(undefined8 *)(param_1 + 8),param_2,param_3);
  }
  else {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bf7cc4; end: 105bf7cdb; -[SCLensRemoteAssetsBlobUploadOperation delegate] */

void FUN_105bf7cc4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bf7cdc; end: 105bf7ce7; -[SCLensRemoteAssetsBlobUploadOperation setDelegate:] */

void FUN_105bf7cdc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 105bf7ce8; end: 105bf7d37; -[SCLensRemoteAssetsBlobUploadOperation .cxx_destruct] */

void FUN_105bf7ce8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bf7d38; end: 105bf7ddb; -[SCLensRemoteAssetsEncryptor initWithFileManager:archiver:] */

undefined1 *
FUN_105bf7d38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ec4f8;
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



/* Entry: 105bf7ddc; end: 105bf7edf; -[SCLensRemoteAssetsEncryptor archiveAndEncryptAssetWithPath:encryptionKey:encryptionIv:deleteOriginalAsset:error:] */

void FUN_105bf7ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lStack_58 = 0;
  uVar2 = param_1;
  func_0x00010bdcf140(param_1,param_2,param_3,&lStack_58);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_58;
  _objc_retain(lStack_58);
  if (lVar1 == 0) {
    func_0x00010be09460(param_1,param_2,uVar2,param_4,param_5,param_6,param_3,param_7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bea3b60(param_1,param_2,lVar1,param_7);
    param_1 = 0;
  }
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105bf7ee0; end: 105bf7ff7; -[SCLensRemoteAssetsEncryptor encryptArchivedAssetWithPath:encryptionKey:encryptionIv:deleteOriginalAsset:error:] */

void FUN_105bf7ee0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf4df60(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e21c78,
                        &PTR____CFConstantStringClassReference_110e21c98,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea3b60(param_1,param_2,puVar2,param_7);
    _objc_release(puVar2);
    param_1 = 0;
  }
  else {
    func_0x00010be09460(param_1,param_2,lVar1,param_4,param_5,param_6,param_3,param_7);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105bf7ff8; end: 105bf80df; -[SCLensRemoteAssetsEncryptor _encryptAssetData:encryptionKey:encryptionIv:deleteOriginalAsset:assetPath:error:] */

void FUN_105bf7ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_58;
  
  _objc_retain(param_7);
  lStack_58 = 0;
  uVar2 = param_1;
  func_0x00010be09480(param_1,param_2,param_3,param_4,param_5,&lStack_58);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_58;
  _objc_retain(lStack_58);
  if (lVar1 == 0) {
    if (param_6 != 0) {
      func_0x00010be8b680(param_1,param_2,param_7,param_8);
    }
    _objc_retain(uVar2);
    uVar3 = uVar2;
  }
  else {
    func_0x00010bea3b60(param_1,param_2,lVar1,param_8);
    uVar3 = 0;
  }
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105bf80e0; end: 105bf8263; -[SCLensRemoteAssetsEncryptor _archiveAssetWithPath:error:] */

void FUN_105bf80e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  ulong uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuStack_58;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bfacbe0(uVar2,param_2,param_3);
  if ((uVar2 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e21c78,
                        &PTR____CFConstantStringClassReference_110e21ad8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea3b60(param_1,param_2,puVar5,param_4);
    _objc_release(puVar5);
    lVar6 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x10);
    ppuStack_58 = (undefined **)0x0;
    func_0x00010bf09560(lVar3,param_2,param_3,&ppuStack_58);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuStack_58;
    _objc_retain(ppuStack_58);
    lVar6 = lVar3;
    func_0x00010c08fa60();
    if (lVar6 == 0 || ppuVar1 != (undefined **)0x0) {
      if (ppuVar1 == (undefined **)0x0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110e21cb8;
      }
      else {
        ppuVar4 = ppuVar1;
        func_0x00010c09e4e0(ppuVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110e21c78,ppuVar4,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea3b60(param_1,param_2,puVar5,param_4);
      _objc_release(puVar5);
      _objc_release(ppuVar4);
      lVar6 = 0;
    }
    else {
      _objc_retain(lVar3);
      lVar6 = lVar3;
    }
    _objc_release(lVar3);
    _objc_release(ppuVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105bf8264; end: 105bf83ef; -[SCLensRemoteAssetsEncryptor _encryptAssetData:encryptionKey:encryptionIv:error:] */

void FUN_105bf8264(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = param_4;
  func_0x00010c08fa60();
  if ((puVar3 == (undefined *)0x10) && (lVar1 = param_5, func_0x00010c08fa60(), lVar1 == 0)) {
    puVar3 = param_4;
    func_0x00010bcb41bc(param_4,param_3,0,0);
    _objc_retainAutoreleasedReturnValue();
LAB_105bf8368:
    puVar2 = puVar3;
    func_0x00010c08fa60();
    if (puVar2 != (undefined *)0x0) goto LAB_105bf8374;
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea3b60(param_1);
    _objc_release(puVar2);
  }
  else {
    puVar3 = param_4;
    func_0x00010c08fa60();
    if ((puVar3 == (undefined *)0x20) && (lVar1 = param_5, func_0x00010c08fa60(), lVar1 == 0x10)) {
      puVar3 = param_3;
      func_0x00010c156ce0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105bf8368;
    }
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea3b60(param_1);
  }
  _objc_release(puVar3);
  puVar3 = (undefined *)0x0;
LAB_105bf8374:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105bf83f0; end: 105bf84bf; -[SCLensRemoteAssetsEncryptor _removeAssetWithPath:error:] */

/* WARNING: Removing unreachable block (ram,0x000105bf8438) */

void FUN_105bf83f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c12cc40();
  _objc_retain(0);
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e21c78,
                        &PTR____CFConstantStringClassReference_110e21d18,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea3b60(param_1,param_2,puVar2,param_4);
    _objc_release(puVar2);
    _objc_release(&PTR____CFConstantStringClassReference_110e21d18);
  }
  _objc_release(0);
  return;
}



/* Entry: 105bf84c0; end: 105bf84eb; -[SCLensRemoteAssetsEncryptor _setError:toWrappedWithCheckError:] */

void FUN_105bf84c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  if (param_4 != (undefined8 *)0x0) {
    _objc_retainAutorelease();
    *param_4 = param_3;
  }
  return;
}



/* Entry: 105bf84ec; end: 105bf851b; -[SCLensRemoteAssetsEncryptor .cxx_destruct] */

void FUN_105bf84ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bf851c; end: 105bf855f; -[SCRemoteAssetsLocalMediaReferenceConverter localMediaReferenceWithBatchId:] */

void FUN_105bf851c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0fe2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000107d6ae14();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bf8560; end: 105bf85cb; -[SCRemoteAssetsLocalMediaReferenceConverter platformLocalMediaReferenceWithBatchId:] */

void FUN_105bf8560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3108;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02df60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105bf85cc; end: 105bf8677; -[SCRemoteAssetsLocalMediaReferenceConverter batchIdFromLocalMediaReference:] */

void FUN_105bf85cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfe5d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x000107d6b14c();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010bf16fa0(param_1,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105bf8678; end: 105bf86e7; -[SCRemoteAssetsLocalMediaReferenceConverter batchIdFromPlatformLocalMediaReference:] */

void FUN_105bf8678(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (((param_3 == 0) || (lVar1 = param_3, func_0x00010c0c6f00(), lVar1 != 1)) ||
     (lVar1 = param_3, func_0x00010c0c6220(), lVar1 != 4)) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105bf86e8; end: 105bf875b; -[SCSendingRemoteAssetsUploadInfoProvider initWithConverter:] */

undefined1 * FUN_105bf86e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec500;
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



/* Entry: 105bf875c; end: 105bf883f; -[SCSendingRemoteAssetsUploadInfoProvider sendingUploadInfoWithOnRequestUploadOperationBlock:onRequestBatchIdForFutureUseBlock:] */

void FUN_105bf875c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  puVar1 = PTR_PTR_1126c3110;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105bf8840;
  puStack_48 = &UNK_1108dcd70;
  uStack_40 = uVar2;
  uStack_38 = param_4;
  _objc_retain(uVar2);
  _objc_retain(param_4);
  func_0x00010c031680(puVar1,param_2,param_3,&puStack_60);
  _objc_release(param_3);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105bf8840; end: 105bf88b3;  */

void FUN_105bf8840(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    (**(code **)(lVar1 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c09dbe0(uVar3,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105bf88b4; end: 105bf88bf; -[SCSendingRemoteAssetsUploadInfoProvider .cxx_destruct] */

void FUN_105bf88b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bf88c0; end: 105bf896b; -[SCSendingRemoteAssetsUploadInfo initWithOnRequestUploadOperationBlock:onRequestLocalMediaReferenceBlock:] */

undefined1 *
FUN_105bf88c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ec508;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bf896c; end: 105bf8993; -[SCSendingRemoteAssetsUploadInfo requestUploadOperation] */

void FUN_105bf896c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(param_1 + 8) + 0x10))();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bf8994; end: 105bf89bb; -[SCSendingRemoteAssetsUploadInfo requestLocalMediaReference] */

void FUN_105bf8994(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bf89bc; end: 105bf89eb; -[SCSendingRemoteAssetsUploadInfo .cxx_destruct] */

void FUN_105bf89bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bf89ec; end: 105bf8a5f; -[SCLensRemoteAssetsBoltUploader initWithBoltUploader:] */

undefined1 * FUN_105bf89ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec510;
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



/* Entry: 105bf8a60; end: 105bf8b23; -[SCLensRemoteAssetsBoltUploader uploadUserGeneratedRemoteAssetData:withId:completion:] */

void FUN_105bf8a60(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010bf43840(PTR_PTR_1126c3118,param_2,0,&PTR____CFConstantStringClassReference_110e21d38
                        ,param_5);
  }
  else {
    lVar1 = param_4;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      func_0x00010bf43840(PTR_PTR_1126c3118,param_2,1,
                          &PTR____CFConstantStringClassReference_110e21d58,param_5);
    }
    func_0x00010bee59c0(param_1,param_2,param_3,param_4,param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bf8b24; end: 105bf8d3f; -[SCLensRemoteAssetsBoltUploader _uploadLensAssetToBoltBackend:withId:completion:] */

void FUN_105bf8b24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b5980;
  func_0x00010bf1f1e0(PTR_PTR_1126b5980);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aade0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b3a20(puVar1,param_2,3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc180(puVar1,param_2,0xb);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8800(puVar1,param_2,0xd);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5988;
  func_0x00010bfeb740(PTR_PTR_1126b5988,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2abca0(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105bf8d40;
  puStack_78 = &UNK_110896680;
  _objc_retain(param_5);
  puStack_c0 = puVar2;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105bf8df8;
  puStack_a8 = &UNK_1108dcda0;
  uStack_a0 = param_4;
  uStack_98 = param_5;
  uStack_70 = param_3;
  uStack_68 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c28eb40(uVar3,param_2,puVar4,puVar5,&puStack_90,&puStack_c0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_70);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 105bf8d40; end: 105bf8df7;  */

void FUN_105bf8d40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010c08fa60(uVar4);
    uVar1 = param_2;
    func_0x00010bf4db80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c15ea20(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    (**(code **)(lVar3 + 0x10))(lVar3,uVar4,uVar1,uVar2,0);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105bf8df8; end: 105bf8f0f;  */

void FUN_105bf8df8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c13b720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252ee0();
  uVar2 = param_2;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c09e4e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bfa00c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c14de00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf43840(PTR_PTR_1126c3118);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105bf8f10; end: 105bf8f1b; -[SCLensRemoteAssetsBoltUploader .cxx_destruct] */

void FUN_105bf8f10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bf8f1c; end: 105bf8fa3; +[SCLensRemoteAssetsUploaderUtils completeBoltUploadWithErrorCode:description:completion:] */

void FUN_105bf8f1c(void)

{
  undefined *puVar1;
  long in_x4;
  
  puVar1 = PTR_PTR_1126c3118;
  if (in_x4 != 0) {
    _objc_retain(in_x4);
    func_0x00010be0b260(puVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(in_x4 + 0x10))(in_x4,0,0,0,puVar1);
    _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105bf8fa4; end: 105bf8fbb; +[SCLensRemoteAssetsUploaderUtils _errorWithCode:description:] */

void FUN_105bf8fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_description_code_1125c3e40,
             &PTR____CFConstantStringClassReference_110e21d98,param_4,param_3);
  return;
}



/* Entry: 105bf8fbc; end: 105bf905f; -[SCLensStoredRemoteAssetsUploader initWithStoredRemoteAssetsProvider:lensBoltAssetsUploader:] */

undefined1 *
FUN_105bf8fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ec518;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bf9060; end: 105bf9193; -[SCLensStoredRemoteAssetsUploader uploadUserGeneratedAssetWithId:uploadType:completion:] */

void FUN_105bf9060(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_4;
  func_0x00010bf0b220(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105bf9194; end: 105bf92b3;  */

void FUN_105bf9194(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_2;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0,0,0,param_3);
    }
    goto LAB_105bf9294;
  }
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    if (*(long *)(param_1 + 0x38) == 1) {
      puVar1 = *(undefined **)(lVar2 + 8);
      func_0x00010c269d40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28eac0();
    }
    else {
      lVar3 = *(long *)(param_1 + 0x28);
      if (lVar3 == 0) goto LAB_105bf928c;
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,0,0,0,puVar1);
    }
    _objc_release(puVar1);
  }
LAB_105bf928c:
  _objc_release(lVar2);
LAB_105bf9294:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105bf92b4; end: 105bf92e3; -[SCLensStoredRemoteAssetsUploader .cxx_destruct] */

void FUN_105bf92b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bf92e4; end: 105bf9567;  */

void FUN_105bf92e4(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126c30e0);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  FUN_105bfa1e0();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_2);
  ppuStack_188 = &PTR_SUB_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_2;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_SUB_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_SUB_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105bf9568; end: 105bf97bb;  */

void FUN_105bf9568(double param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_1a4;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  long lStack_158;
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
  _objc_opt_class(PTR_PTR_1126c30e0);
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
  FUN_105bfa358();
  lStack_158 = (long)param_1;
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  ppuStack_188 = &PTR_DAT_110864b98;
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
  ppuStack_110 = &PTR_DAT_110864b38;
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
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar3,&ppuStack_110,&lStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (lStack_1a0 != 0) {
    lStack_198 = lStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_DAT_110864b38;
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
  ppuStack_188 = &PTR_DAT_110864b98;
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
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105bf97bc; end: 105bf9847;  */

void FUN_105bf97bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c3120;
  FUN_105bfad6c(PTR_PTR_1126c3120,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bf9848; end: 105bf98cf;  */

void FUN_105bf9848(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_105bfade0(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bf98d0; end: 105bf9947; -[SCRemoteAssetsLocalMediaReference initWithBatchId:] */

undefined1 * FUN_105bf98d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec520;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bf9948; end: 105bf99cf; -[SCRemoteAssetsLocalMediaReference initWithCoder:] */

undefined1 * FUN_105bf9948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec520;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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



/* Entry: 105bf99d0; end: 105bf99f3; -[SCRemoteAssetsLocalMediaReference copyWithZone:] */

undefined8 FUN_105bf99d0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105bf99f4; end: 105bf9a0b; -[SCRemoteAssetsLocalMediaReference encodeWithCoder:] */

void FUN_105bf99f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sc_encodeObject_forKey__112630ce0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110e21df8);
  return;
}



/* Entry: 105bf9a0c; end: 105bf9a13; -[SCRemoteAssetsLocalMediaReference hash] */

void FUN_105bf9a0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}


