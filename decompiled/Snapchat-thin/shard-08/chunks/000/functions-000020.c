/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105bf9a14; end: 105bf9aa3; -[SCRemoteAssetsLocalMediaReference isEqual:] */

long FUN_105bf9a14(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105bf9a88;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_105bf9a88;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_105bf9a88;
    }
  }
  lVar3 = 1;
LAB_105bf9a88:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105bf9aa4; end: 105bf9aab; -[SCRemoteAssetsLocalMediaReference batchId] */

undefined8 FUN_105bf9aa4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105bf9aac; end: 105bf9ab7; -[SCRemoteAssetsLocalMediaReference .cxx_destruct] */

void FUN_105bf9aac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bf9ab8; end: 105bf9b2f; -[SCLensRemoteAssetDefaultUploadInfo initWithAssetId:] */

undefined1 * FUN_105bf9ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec528;
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



/* Entry: 105bf9b30; end: 105bf9bb7; -[SCLensRemoteAssetDefaultUploadInfo initWithCoder:] */

undefined1 * FUN_105bf9b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec528;
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



/* Entry: 105bf9bb8; end: 105bf9bdb; -[SCLensRemoteAssetDefaultUploadInfo copyWithZone:] */

undefined8 FUN_105bf9bb8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105bf9bdc; end: 105bf9bf3; -[SCLensRemoteAssetDefaultUploadInfo encodeWithCoder:] */

void FUN_105bf9bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sc_encodeObject_forKey__112630ce0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110e21e18);
  return;
}



/* Entry: 105bf9bf4; end: 105bf9bfb; -[SCLensRemoteAssetDefaultUploadInfo hash] */

void FUN_105bf9bf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 105bf9bfc; end: 105bf9c8b; -[SCLensRemoteAssetDefaultUploadInfo isEqual:] */

long FUN_105bf9bfc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105bf9c70;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_105bf9c70;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_105bf9c70;
    }
  }
  lVar3 = 1;
LAB_105bf9c70:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105bf9c8c; end: 105bf9c93; -[SCLensRemoteAssetDefaultUploadInfo assetId] */

undefined8 FUN_105bf9c8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105bf9c94; end: 105bf9c9f; -[SCLensRemoteAssetDefaultUploadInfo .cxx_destruct] */

void FUN_105bf9c94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bf9ca0; end: 105bf9d6f; -[SCLensRemoteAssetsUploadOperationDataModel initWithBatchId:tasks:expirationTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105bf9ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ec530;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112732074);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112732074) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112732078);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112732078) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273207c) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bf9d70; end: 105bf9d93; -[SCLensRemoteAssetsUploadOperationDataModel copyWithZone:] */

undefined8 FUN_105bf9d70(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105bf9d94; end: 105bf9e1f; -[SCLensRemoteAssetsUploadOperationDataModel hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105bf9d94(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732074);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732078);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + _DAT_11273207c);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105bf9ec8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105bf9ed4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (*(long *)((long)puVar3 + (long)_DAT_11273207c) == *(long *)(param_3 + _DAT_11273207c))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_112732074);
      if ((lVar5 == *(long *)(param_3 + _DAT_112732074)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
         ) {
        puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_112732078);
        if (puVar6 != *(undefined1 **)(param_3 + _DAT_112732078)) {
          func_0x00010c071ae0();
          goto LAB_105bf9ed4;
        }
        goto LAB_105bf9ec8;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105bf9ed4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105bf9e20; end: 105bf9eef; -[SCLensRemoteAssetsUploadOperationDataModel isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105bf9e20(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105bf9ec8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105bf9ed4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (*(long *)(param_1 + (long)_DAT_11273207c) == *(long *)(param_3 + (long)_DAT_11273207c))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_112732074);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_112732074)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_112732078);
        if (lVar3 != *(long *)(param_3 + (long)_DAT_112732078)) {
          func_0x00010c071ae0();
          goto LAB_105bf9ed4;
        }
        goto LAB_105bf9ec8;
      }
    }
    lVar3 = 0;
  }
LAB_105bf9ed4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105bf9ef0; end: 105bf9eff; -[SCLensRemoteAssetsUploadOperationDataModel batchId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bf9ef0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112732074);
}



/* Entry: 105bf9f00; end: 105bf9f0f; -[SCLensRemoteAssetsUploadOperationDataModel tasks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bf9f00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112732078);
}



/* Entry: 105bf9f10; end: 105bf9f1f; -[SCLensRemoteAssetsUploadOperationDataModel expirationTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bf9f10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273207c);
}



/* Entry: 105bf9f20; end: 105bf9f5f; -[SCLensRemoteAssetsUploadOperationDataModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bf9f20(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112732078,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112732074,0);
  return;
}



/* Entry: 105bf9f60; end: 105bfa023; -[SCLensRemoteAssetsUploadOperationTaskDataModel initWithAssetId:effectId:state:uploadType:] */

undefined1 *
FUN_105bf9f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ec538;
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
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bfa024; end: 105bfa047; -[SCLensRemoteAssetsUploadOperationTaskDataModel copyWithZone:] */

undefined8 FUN_105bfa024(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105bfa048; end: 105bfa0c7; -[SCLensRemoteAssetsUploadOperationTaskDataModel hash] */

undefined8 * FUN_105bfa048(long param_1,undefined8 param_2,undefined8 *param_3)

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
  lStack_38 = (long)*(char *)(param_1 + 8);
  lStack_30 = (long)*(char *)(param_1 + 9);
  puVar3 = &uStack_48;
  uStack_40 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105bfa168:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105bfa174;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[3];
        if (puVar6 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_105bfa174;
        }
        goto LAB_105bfa168;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105bfa174:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105bfa0c8; end: 105bfa18f; -[SCLensRemoteAssetsUploadOperationTaskDataModel isEqual:] */

long FUN_105bfa0c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105bfa168:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105bfa174;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_105bfa174;
        }
        goto LAB_105bfa168;
      }
    }
    lVar3 = 0;
  }
LAB_105bfa174:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105bfa190; end: 105bfa197; -[SCLensRemoteAssetsUploadOperationTaskDataModel assetId] */

undefined8 FUN_105bfa190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105bfa198; end: 105bfa19f; -[SCLensRemoteAssetsUploadOperationTaskDataModel effectId] */

undefined8 FUN_105bfa198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105bfa1a0; end: 105bfa1a7; -[SCLensRemoteAssetsUploadOperationTaskDataModel state] */

long FUN_105bfa1a0(long param_1)

{
  return (long)*(char *)(param_1 + 8);
}



/* Entry: 105bfa1a8; end: 105bfa1af; -[SCLensRemoteAssetsUploadOperationTaskDataModel uploadType] */

long FUN_105bfa1a8(long param_1)

{
  return (long)*(char *)(param_1 + 9);
}



/* Entry: 105bfa1b0; end: 105bfa1df; -[SCLensRemoteAssetsUploadOperationTaskDataModel .cxx_destruct] */

void FUN_105bfa1b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105bfa1e0; end: 105bfa243;  */

undefined ** FUN_105bfa1e0(void)

{
  int iVar1;
  
  if ((bRam000000011381aa70 & 1) == 0) {
    iVar1 = 0x1381aa70;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&SUB_105004938,&PTR_PTR_11311e890,0x100000000);
      ___cxa_guard_release(0x11381aa70);
    }
  }
  return &PTR_PTR_11311e890;
}



/* Entry: 105bfa244; end: 105bfa2cb;  */

void FUN_105bfa244(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bfa2cc; end: 105bfa357;  */

void FUN_105bfa2cc(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf16f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bf16f60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105bfa358; end: 105bfa40f;  */

undefined8 FUN_105bfa358(void)

{
  int iVar1;
  
  if ((bRam000000011381aae8 & 1) == 0) {
    iVar1 = 0x1381aae8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381aa80 = 0xe;
      puRam000000011381aa88 = &UNK_10f33039c;
      uRam000000011381aa90 = 0x100;
      pcRam000000011381aa98 = FUN_105bfa410;
      pcRam000000011381aaa0 = FUN_105bfa448;
      ppuRam000000011381aa78 = &PTR_DAT_110864b98;
      uRam000000011381aab8 = 0;
      uRam000000011381aab0 = 0;
      uRam000000011381aac8 = 0;
      uRam000000011381aac0 = 0;
      uRam000000011381aad8 = 0;
      uRam000000011381aad0 = 0;
      uRam000000011381aae0 = 0;
      ___cxa_atexit(&DAT_105077cd4,0x11381aa78,0x100000000);
      ___cxa_guard_release(0x11381aae8);
    }
  }
  return 0x11381aa78;
}



/* Entry: 105bfa410; end: 105bfa447;  */

undefined8 FUN_105bfa410(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar2 != 0)) {
    return *(undefined8 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 105bfa448; end: 105bfa49b;  */

undefined8 FUN_105bfa448(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf9c880(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105bfa49c; end: 105bfa4a7; +[SCLensRemoteAssetsUploadOperationDataModel table] */

undefined * FUN_105bfa49c(void)

{
  return &UNK_10f3303b0;
}



/* Entry: 105bfa4a8; end: 105bfa843; +[SCLensRemoteAssetsUploadOperationDataModel immutableObjectParse:bufferSize:] */

void FUN_105bfa4a8(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  char cVar9;
  ushort uVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  char cVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined *puVar20;
  
  uVar5 = *param_3;
  piVar1 = (int *)((long)param_3 + (ulong)uVar5);
  puVar6 = PTR_PTR_1126c30e0;
  _objc_alloc();
  lVar12 = (long)*piVar1;
  uVar10 = *(ushort *)((long)piVar1 - lVar12);
  if (uVar10 < 5) {
    puVar16 = (undefined *)0x0;
LAB_105bfa744:
    puVar18 = (undefined *)0x0;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar1 - lVar12))[2];
    if (uVar15 == 0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar15);
      puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = (long)*piVar1;
      uVar10 = *(ushort *)((long)piVar1 - lVar12);
    }
    lVar12 = -lVar12;
    if (uVar10 < 7) goto LAB_105bfa744;
    uVar15 = (ulong)*(ushort *)((long)piVar1 + lVar12 + 6);
    if (uVar15 == 0) {
      puVar18 = (undefined *)0x0;
    }
    else {
      uVar19 = (ulong)*(uint *)((long)piVar1 + uVar15);
      puVar2 = (uint *)((long)((long)piVar1 + uVar15) + uVar19);
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
      _objc_retainAutoreleasedReturnValue();
      if (*puVar2 != 0) {
        lVar12 = (long)param_3 + uVar19 + uVar15 + (ulong)uVar5 + 0xe;
        do {
          uVar15 = (ulong)*(uint *)(lVar12 + -10);
          puVar18 = PTR_PTR_1126c30d8;
          _objc_alloc(PTR_PTR_1126c30d8);
          lVar3 = lVar12 + uVar15;
          lVar11 = (long)*(int *)(lVar3 + -10);
          lVar4 = lVar12 + (uVar15 - lVar11);
          uVar10 = *(ushort *)(lVar4 + -10);
          if (uVar10 < 5) {
            puVar17 = (undefined *)0x0;
LAB_105bfa690:
            puVar20 = (undefined *)0x0;
LAB_105bfa694:
            cVar14 = '\0';
LAB_105bfa698:
            cVar9 = '\0';
          }
          else {
            uVar19 = (ulong)*(ushort *)(lVar4 + -6);
            if (uVar19 == 0) {
              puVar17 = (undefined *)0x0;
            }
            else {
              lVar4 = lVar12 + uVar15 + uVar19;
              puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                  lVar4 + (ulong)*(uint *)(lVar4 + -10) + -6);
              _objc_retainAutoreleasedReturnValue();
              lVar11 = (long)*(int *)(lVar3 + -10);
              uVar10 = *(ushort *)(lVar12 + (uVar15 - lVar11) + -10);
            }
            lVar11 = -lVar11;
            if (uVar10 < 7) goto LAB_105bfa690;
            uVar19 = (ulong)*(ushort *)(lVar12 + lVar11 + uVar15 + -4);
            if (uVar19 == 0) {
              puVar20 = (undefined *)0x0;
            }
            else {
              lVar4 = lVar12 + uVar15 + uVar19;
              puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                  lVar4 + (ulong)*(uint *)(lVar4 + -10) + -6);
              _objc_retainAutoreleasedReturnValue();
              lVar11 = -(long)*(int *)(lVar3 + -10);
              uVar10 = *(ushort *)(lVar12 + (uVar15 - (long)*(int *)(lVar3 + -10)) + -10);
            }
            if (uVar10 < 9) goto LAB_105bfa694;
            uVar19 = (ulong)*(ushort *)(lVar12 + lVar11 + uVar15 + -2);
            cVar14 = '\0';
            if (uVar19 != 0) {
              cVar14 = *(char *)(lVar12 + uVar15 + uVar19 + -10);
            }
            if (uVar10 < 0xb) goto LAB_105bfa698;
            uVar19 = (ulong)*(ushort *)(lVar12 + lVar11 + uVar15);
            cVar9 = '\0';
            if (uVar19 != 0) {
              cVar9 = *(char *)(lVar12 + uVar15 + uVar19 + -10);
            }
          }
          func_0x00010bff4460(puVar18,param_2,puVar17,puVar20,(int)cVar14,(int)cVar9);
          _objc_release(puVar20);
          _objc_release(puVar17);
          func_0x00010befa120(puVar7,param_2,puVar18);
          _objc_release(puVar18);
          puVar13 = (uint *)(lVar12 + -6);
          lVar12 = lVar12 + 4;
        } while (puVar13 != puVar2 + (ulong)*puVar2 + 1);
      }
      puVar18 = puVar7;
      func_0x00010bf51e00(puVar7);
      _objc_release(puVar7);
      lVar12 = -(long)*piVar1;
      uVar10 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((8 < uVar10) && (uVar15 = (ulong)*(ushort *)((long)piVar1 + lVar12 + 8), uVar15 != 0)) {
      uVar8 = *(undefined8 *)((long)piVar1 + uVar15);
      goto LAB_105bfa74c;
    }
  }
  uVar8 = 0;
LAB_105bfa74c:
  func_0x00010bff7500(puVar6,param_2,puVar16,puVar18,uVar8);
  _objc_release(puVar18);
  _objc_release(puVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105bfa844; end: 105bfa857; +[SCLensRemoteAssetsUploadOperationDataModel objectClassFunctionPointer] */

undefined1  [16] FUN_105bfa844(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_105bfa880;
  auVar1._0_8_ = FUN_105bfa858;
  return auVar1;
}



/* Entry: 105bfa858; end: 105bfa87f;  */

int FUN_105bfa858(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf289c08;
  _strcmp("expirationTimestamp",param_1);
  return -(uint)(iVar1 != 0);
}



/* Entry: 105bfa880; end: 105bfa91f;  */

bool FUN_105bfa880(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_1 != 0) {
    return false;
  }
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  func_0x0001001b9e08(param_2,&UNK_10f3303db);
  _sqlite3_bind_int64();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar3 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)((long)piVar1 + uVar3);
  }
  _sqlite3_bind_int64(param_2,2,uVar2);
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 105bfa920; end: 105bfa9fb;  */

undefined1 *
FUN_105bfa920(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126ec540;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 105bfa9fc; end: 105bfad6b;  */

void FUN_105bfa9fc(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010bf16f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar6,&UNK_10f330458);
        if (puVar6 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010bf16f60(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar6,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar6;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar6;
            _sqlite3_column_int64(puVar6,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126c30e0);
            _sqlite3_column_blob(puVar6,1);
            _sqlite3_column_bytes(puVar6,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar6);
            if (puVar3 == (undefined *)0x0) goto LAB_105bfacbc;
            puVar6 = PTR_PTR_1126c3120;
            _objc_alloc(PTR_PTR_1126c3120);
            puVar2 = puVar3;
            func_0x00010bf16f60(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c26a9e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010bf9c880(puVar3);
            FUN_105bfa920(puVar6,puVar1,puVar2,puVar4,puVar5);
            param_1 = puVar3;
            goto LAB_105bfaaf0;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar6 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126c30e0);
      puVar3 = puVar6;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar6);
      if (puVar3 != (undefined *)0x0) {
        puVar6 = PTR_PTR_1126c3120;
        _objc_alloc(PTR_PTR_1126c3120);
        puVar2 = puVar3;
        func_0x00010bf16f60(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c26a9e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bf9c880(puVar3);
        FUN_105bfa920(puVar6,puVar1,puVar2,puVar4,puVar5);
        param_1 = puVar3;
LAB_105bfaaf0:
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_105bfacc4;
      }
LAB_105bfacbc:
      param_1 = (undefined *)0x0;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_105bfacc4:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105bfad6c; end: 105bfaddf;  */

void FUN_105bfad6c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_105bfa9fc();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105bfade0; end: 105bfb00b;  */

void FUN_105bfade0(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c3120;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_105bfa9fc();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar5 = PTR_PTR_1126c3120;
    _objc_retain(param_1);
    _objc_opt_self(puVar5);
    puVar5 = PTR_PTR_1126c3120;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010bf16f60(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c26a9e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010bf9c880(param_1);
      FUN_105bfa920(puVar5,0xffffffffffffffff,puVar2,puVar3,puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar5 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar5 = param_1;
    func_0x00010bf16f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar5);
    puVar5 = param_1;
    func_0x00010c26a9e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar5);
    puVar5 = param_1;
    func_0x00010bf9c880();
    *(undefined **)(puVar1 + 0x28) = puVar5;
    _objc_retain(puVar1);
    puVar5 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105bfb00c; end: 105bfb06f;  */

void FUN_105bfb00c(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c30e0;
    _objc_alloc(PTR_PTR_1126c30e0);
    func_0x00010bff7500();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105bfb070; end: 105bfb09f; -[SCLensRemoteAssetsUploadOperationDataModelChangeRequest .cxx_destruct] */

void FUN_105bfb070(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 105bfb0a0; end: 105bfb0ab; -[SCLensRemoteAssetsUploadOperationDataModelChangeRequest table] */

undefined * FUN_105bfb0a0(void)

{
  return &UNK_10f3303b0;
}



/* Entry: 105bfb0ac; end: 105bfb15f; -[SCLensRemoteAssetsUploadOperationDataModelChangeRequest createTableWithSQLite:] */

void FUN_105bfb0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddcaed8,0x9a,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddcaf72,0x98,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10ddcb00a,0xc9,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 105bfb160; end: 105bfb6f7; -[SCLensRemoteAssetsUploadOperationDataModelChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_105bfb160(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar6 = param_1;
  if (iVar3 == 1) {
    FUN_105bfb00c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_105bfb6f8(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar11;
    func_0x00010bf636c0();
    func_0x00010507cae4();
    _objc_release(puVar11);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f330556);
    if (lVar7 == 0) goto LAB_105bfb654;
    _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
    puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
    _sqlite3_bind_text(lVar7,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar7 != 0x65) goto LAB_105bfb654;
    uVar12 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar8 & 1) != 0) {
      func_0x0001001b9e08(param_3,&UNK_10f3303db);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar10 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)((long)piVar1 + uVar10);
      }
      _sqlite3_bind_int64(param_3,2,uVar9);
      _sqlite3_step();
      if ((int)param_3 != 0x65) goto LAB_105bfb654;
    }
    *(undefined8 *)(param_1 + 8) = uVar12;
    func_0x00010c1eeb60(puVar6);
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126c30e0);
    func_0x00010c21c9a0(puVar11);
LAB_105bfb62c:
    _objc_release(puVar11);
    _objc_retain(puVar6);
    puVar11 = puVar6;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar7 = param_3;
        func_0x0001001b9e08(param_3,&UNK_10f3304b1);
        if (lVar7 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar7 == 0x65) {
            func_0x0001001b9e08(param_3,&UNK_10f3304f7);
            if (param_3 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_3 != 0x65) goto LAB_105bfb28c;
            }
            puVar6 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126c30e0);
            func_0x00010c21c9a0(puVar6);
            _objc_release(puVar11);
            _objc_release(puVar6);
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105bfb660;
          }
        }
      }
LAB_105bfb28c:
      puVar11 = (undefined *)0x0;
      goto LAB_105bfb660;
    }
    FUN_105bfb00c();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_105bfb6f8(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    uVar12 = *(undefined8 *)(param_1 + 8);
    _objc_retain(puVar6);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f3305aa);
    if (lVar7 != 0) {
      _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(lVar7,2,uVar12);
      piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
      puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
      _sqlite3_bind_text(lVar7,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar7 == 0x65) {
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126c30e0);
        puVar8 = puVar11;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar11 = puVar8;
        func_0x00010bf9c880();
        puVar5 = puVar6;
        func_0x00010bf9c880();
        if (puVar11 != puVar5) {
          func_0x0001001b9e08(param_3,&UNK_10f330608);
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
             (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar10 == 0)) {
            uVar9 = 0;
          }
          else {
            uVar9 = *(undefined8 *)((long)piVar1 + uVar10);
          }
          _sqlite3_bind_int64(param_3,1,uVar9);
          _sqlite3_bind_int64(param_3,2,uVar12);
          _sqlite3_step();
          if ((int)param_3 != 0x65) {
            _objc_release(puVar8);
            goto LAB_105bfb64c;
          }
        }
        _objc_release(puVar8);
        _objc_release(puVar6);
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126c30e0);
        func_0x00010c21c9a0(puVar11);
        goto LAB_105bfb62c;
      }
    }
LAB_105bfb64c:
    _objc_release(puVar6);
LAB_105bfb654:
    puVar11 = (undefined *)0x0;
  }
  _objc_release(puVar6);
LAB_105bfb660:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105bfb6f8; end: 105bfbbe7;  */

ulong FUN_105bfb6f8(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  ulong uVar5;
  undefined ***pppuVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined4 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  code *pcStack_108;
  undefined ***pppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuStack_110 = &PTR_FUN_1108dcde0;
  pcStack_108 = FUN_105bfbbe8;
  pppuStack_f8 = &ppuStack_110;
  uVar12 = param_2;
  func_0x00010c26a9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(uVar12);
  uVar5 = uVar12;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  puVar19 = (undefined4 *)0x0;
  puVar21 = (undefined4 *)0x0;
  if (uVar5 != 0) {
    puVar15 = (undefined4 *)0x0;
    do {
      uVar16 = 0;
      puVar20 = puVar19;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(uVar12);
        }
        uVar17 = *(undefined8 *)(uVar16 * 8);
        _objc_retain(uVar17);
        _objc_retain(uVar17);
        uStack_118 = uVar17;
        if (pppuStack_f8 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_105bfbafc;
        }
        pppuVar6 = pppuStack_f8;
        (*(code *)(*pppuStack_f8)[6])(pppuStack_f8,param_1,&uStack_118);
        _objc_release(uStack_118);
        if (puVar21 < puVar15) {
          *puVar21 = (int)pppuVar6;
          puVar19 = puVar20;
        }
        else {
          lVar18 = (long)puVar21 - (long)puVar20;
          uVar8 = (lVar18 >> 2) + 1;
          if (uVar8 >> 0x3e != 0) {
            FUN_105bfbe80();
LAB_105bfbafc:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x105bfbb00);
            (*pcVar4)();
          }
          uVar14 = (long)puVar15 - (long)puVar20 >> 1;
          if (uVar14 <= uVar8) {
            uVar14 = uVar8;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar15 - (long)puVar20)) {
            uVar14 = 0x3fffffffffffffff;
          }
          if (uVar14 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_105bfbafc;
          }
          lVar7 = uVar14 << 2;
          __Znwm();
          puVar21 = (undefined4 *)(lVar7 + lVar18);
          puVar15 = (undefined4 *)(lVar7 + uVar14 * 4);
          puVar19 = puVar21 + -(lVar18 >> 2);
          *puVar21 = (int)pppuVar6;
          _memcpy(puVar19,puVar20,lVar18);
          if (puVar20 != (undefined4 *)0x0) {
            __ZdlPv(puVar20);
          }
        }
        puVar21 = puVar21 + 1;
        _objc_release(uVar17);
        uVar16 = uVar16 + 1;
        puVar20 = puVar19;
      } while (uVar5 != uVar16);
      uVar5 = uVar12;
      func_0x00010bf52a60();
    } while (uVar5 != 0);
  }
  _objc_release(uVar12);
  _objc_release(uVar12);
  _objc_release(uVar12);
  if (pppuStack_f8 == &ppuStack_110) {
    lVar13 = 0x20;
  }
  else {
    if (pppuStack_f8 == (undefined ***)0x0) goto LAB_105bfb938;
    lVar13 = 0x28;
  }
  (**(code **)((long)*pppuStack_f8 + lVar13))();
LAB_105bfb938:
  uVar5 = param_2;
  func_0x00010bf16f60();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_1;
  FUN_105bfbd50(param_1,uVar5);
  uVar12 = (long)puVar21 - (long)puVar19;
  puVar15 = (undefined4 *)&UNK_10ddcb36c;
  if (uVar12 != 0) {
    puVar15 = puVar19;
  }
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x0001001cddd0(param_1,uVar12,4);
  func_0x0001001cddd0(param_1,uVar12,4);
  if (puVar19 != puVar21) {
    lVar13 = (long)uVar12 >> 2;
    do {
      iVar3 = puVar15[lVar13 + -1];
      func_0x0001001ce088(param_1,4);
      func_0x0001001ce0bc(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                                   *(int *)(param_1 + 0x28)) - iVar3) + 4);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  uVar8 = param_1;
  func_0x0001001ce0bc(param_1,uVar12 >> 2);
  uVar12 = param_2;
  func_0x00010bf9c880(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x28);
  func_0x0001001ce170(param_1,8,uVar12,0);
  if ((int)uVar8 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,6,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uVar8) + 4,0);
  }
  func_0x0001001ce2e4(param_1,4,uVar16 & 0xffffffff);
  uVar12 = (ulong)(uint)((iVar3 - iVar1) + iVar2);
  func_0x0001001ce548(param_1,uVar12);
  _objc_release(uVar5);
  if (puVar19 != (undefined4 *)0x0) {
    __ZdlPv(puVar19);
  }
  uVar5 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (puVar19 != (undefined4 *)0x0) {
      __ZdlPv(puVar19);
    }
    _objc_release(param_2);
    __Unwind_Resume();
    _objc_retain(uVar12);
    uVar16 = uVar12;
    func_0x00010bf0b260(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    FUN_105bfbd50(uVar5,uVar16);
    uVar14 = uVar12;
    func_0x00010bf8cda0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    FUN_105bfbd50(uVar5,uVar14);
    uVar10 = uVar12;
    func_0x00010c252440(uVar12);
    uVar11 = uVar12;
    func_0x00010c28e9a0(uVar12);
    *(undefined1 *)(uVar5 + 0x46) = 1;
    iVar3 = *(int *)(uVar5 + 0x20);
    iVar1 = *(int *)(uVar5 + 0x30);
    iVar2 = *(int *)(uVar5 + 0x28);
    func_0x0001001ce2e4(uVar5,6,uVar9 & 0xffffffff);
    func_0x0001001ce2e4(uVar5,4,uVar8 & 0xffffffff);
    func_0x0001001ce42c(uVar5,10,uVar11,0);
    func_0x0001001ce42c(uVar5,8,uVar10,0);
    func_0x0001001ce548(uVar5,(iVar3 - iVar1) + iVar2);
    _objc_release(uVar14);
    _objc_release(uVar16);
    _objc_release(uVar12);
    return uVar5;
  }
  return param_1;
}



/* Entry: 105bfbbe8; end: 105bfbd4f;  */

ulong FUN_105bfbbe8(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010bf0b260(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_105bfbd50(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010bf8cda0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_105bfbd50(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010c252440(param_2);
  uVar9 = param_2;
  func_0x00010c28e9a0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce2e4(param_1,6,uVar7 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar5 & 0xffffffff);
  func_0x0001001ce42c(param_1,10,uVar9,0);
  func_0x0001001ce42c(param_1,8,uVar8,0);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105bfbd50; end: 105bfbe7f;  */

undefined8 FUN_105bfbd50(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_105bfbe30;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_105bfbe30;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_105bfbdf0;
    param_1 = 0;
  }
  else {
LAB_105bfbdf0:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x0001001cde08(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_105bfbe30:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105bfbe80; end: 105bfbe93;  */

void FUN_105bfbe80(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  return;
}



/* Entry: 105bfbe94; end: 105bfbe9b;  */

void FUN_105bfbe94(void)

{
  return;
}



/* Entry: 105bfbe9c; end: 105bfbecf;  */

void FUN_105bfbe9c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1108dcde0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 105bfbed0; end: 105bfbf0f;  */

void FUN_105bfbed0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1108dcde0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 105bfbf10; end: 105bfbf4b;  */

long FUN_105bfbf10(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1108dce50);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 105bfbf4c; end: 105bfbf57;  */

undefined ** FUN_105bfbf4c(void)

{
  return &PTR_DAT_1108dce50;
}



/* Entry: 105bfbf58; end: 105bfbf83; +[SCGrapheneLensExplorerPrefetchMetric prefetchStarted] */

void FUN_105bfbf58(void)

{
  _objc_alloc(PTR_PTR_1126c3128);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bfbf84; end: 105bfbfaf; +[SCGrapheneLensExplorerPrefetchMetric prefetchCompleted] */

void FUN_105bfbf84(void)

{
  _objc_alloc(PTR_PTR_1126c3128);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bfbfb0; end: 105bfbfdb; +[SCGrapheneLensExplorerPrefetchMetric prefetchSkipped] */

void FUN_105bfbfb0(void)

{
  _objc_alloc(PTR_PTR_1126c3128);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bfbfdc; end: 105bfc07b; -[SCGrapheneLensExplorerPrefetchMetric description] */

void FUN_105bfbfdc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e21e38;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e21e38,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ec548;
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



/* Entry: 105bfc07c; end: 105bfc1d3; -[SCGrapheneRegistry lensExplorerPrefetchGraphene] */

void FUN_105bfc07c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105bfc104;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c1cd8 != -1) {
    func_0x00010002a2fc(0x1136c1cd8,&puStack_48);
  }
  uVar1 = uRam00000001136c1cd0;
  _objc_retain(uRam00000001136c1cd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bfc1d4; end: 105bfc1e3; -[SCLensLoggerVideoEditingSession didMute] */

void FUN_105bfc1d4(long param_1)

{
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  return;
}



/* Entry: 105bfc1e4; end: 105bfc1f3; -[SCLensLoggerVideoEditingSession didUnmute] */

void FUN_105bfc1e4(long param_1)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  return;
}



/* Entry: 105bfc1f4; end: 105bfc203; -[SCLensLoggerVideoEditingSession didRotate] */

void FUN_105bfc1f4(long param_1)

{
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  return;
}



/* Entry: 105bfc204; end: 105bfc213; -[SCLensLoggerVideoEditingSession didTrim] */

void FUN_105bfc204(long param_1)

{
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  return;
}



/* Entry: 105bfc214; end: 105bfc21f; -[SCLensLoggerVideoEditingSession interactionName] */

undefined ** FUN_105bfc214(void)

{
  return &PTR____CFConstantStringClassReference_110e21eb8;
}



/* Entry: 105bfc220; end: 105bfc3bb; -[SCLensLoggerVideoEditingSession jsonRepresentation] */

undefined * FUN_105bfc220(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e21ed8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e21ef8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_68 = puVar1;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e21f18;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_60 = puVar2;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110e21f38;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_58 = puVar3;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_68,&ppuStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar5,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar5 + 8);
}



/* Entry: 105bfc3bc; end: 105bfc3c3; -[SCLensLoggerVideoEditingSession muteCount] */

undefined8 FUN_105bfc3bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105bfc3c4; end: 105bfc3cb; -[SCLensLoggerVideoEditingSession unmuteCount] */

undefined8 FUN_105bfc3c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105bfc3cc; end: 105bfc3d3; -[SCLensLoggerVideoEditingSession rotationCount] */

undefined8 FUN_105bfc3cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105bfc3d4; end: 105bfc3db; -[SCLensLoggerVideoEditingSession trimCount] */

undefined8 FUN_105bfc3d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105bfc3dc; end: 105bfc44f; -[SCLensVideoEditingEventLogger initWithLensLogger:] */

undefined1 * FUN_105bfc3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec550;
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



/* Entry: 105bfc450; end: 105bfc487; -[SCLensVideoEditingEventLogger didStart] */

void FUN_105bfc450(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bf73c80();
  puVar1 = PTR_PTR_1126c3130;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bfc488; end: 105bfc48f; -[SCLensVideoEditingEventLogger didMute] */

void FUN_105bfc488(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf77fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_didMute_1125bb990);
  return;
}



/* Entry: 105bfc490; end: 105bfc497; -[SCLensVideoEditingEventLogger didUnmute] */

void FUN_105bfc490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7def0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_didUnmute_1125bd160);
  return;
}



/* Entry: 105bfc498; end: 105bfc49f; -[SCLensVideoEditingEventLogger didRotate] */

void FUN_105bfc498(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7a290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_didRotate_1125bc248);
  return;
}



/* Entry: 105bfc4a0; end: 105bfc4a7; -[SCLensVideoEditingEventLogger didTrim] */

void FUN_105bfc4a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_didTrim_1125bd0b8);
  return;
}



/* Entry: 105bfc4a8; end: 105bfc55b; -[SCLensVideoEditingEventLogger didComplete] */

void FUN_105bfc4a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar1 = PTR_PTR_1126c3138;
    _objc_alloc(PTR_PTR_1126c3138);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0687a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c085fa0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01e6e0(puVar1,param_2,uVar2,uVar3,1,1,0);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010be52220(param_1,param_2,puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105bfc55c; end: 105bfc6c3; -[SCLensVideoEditingEventLogger _logCustomLensEvent:] */

void FUN_105bfc55c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf2b540(param_3);
  puVar1 = PTR_PTR_1126c3140;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010c0687a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c068960(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160620(param_3);
  func_0x00010beeee60(param_3);
  _objc_release(param_3);
  func_0x00010c01e6e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a4440(uVar3);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 105bfc6c4; end: 105bfc6f3; -[SCLensVideoEditingEventLogger .cxx_destruct] */

void FUN_105bfc6c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bfc6f4; end: 105bfc7fb; -[SCLensVideoEditingLoggingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bfc6f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1 + _DAT_1127320ac;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c094e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126ae720;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105bfc7fc;
  puStack_40 = &UNK_1108dce80;
  _objc_retain(lVar2);
  lStack_38 = lVar2;
  func_0x00010bf11fe0(puVar3,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c3150;
  _objc_alloc(PTR_PTR_1126c3150);
  func_0x00010c060d40();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127320b4);
  }
  func_0x00010bf9d660(uVar5,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lStack_38);
  _objc_release(lVar2);
  return;
}



/* Entry: 105bfc7fc; end: 105bfc82b;  */

void FUN_105bfc7fc(void)

{
  _objc_alloc(PTR_PTR_1126c3148);
  func_0x00010c024ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bfc82c; end: 105bfc873; -[SCLensVideoEditingLoggingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bfc82c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127320b4,0);
  _objc_destroyWeak(param_1 + _DAT_1127320b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127320ac);
  return;
}



/* Entry: 105bfc874; end: 105bfc8e7; -[SCLensVideoEditingLoggingServices initWithVideoEditingLogger:] */

undefined1 * FUN_105bfc874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec558;
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



/* Entry: 105bfc8e8; end: 105bfc8ef; -[SCLensVideoEditingLoggingServices videoEditingLogger] */

undefined8 FUN_105bfc8e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105bfc8f0; end: 105bfc8fb; -[SCLensVideoEditingLoggingServices .cxx_destruct] */

void FUN_105bfc8f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bfc8fc; end: 105bfc99f; -[SCLocationSharingSettingsPageLaunchHandler initWithMainTabNavigationServices:locationSharingSettingsFactoryServices:] */

undefined1 *
FUN_105bfc8fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ec560;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x20) = 0xc;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bfc9a0; end: 105bfcb17; -[SCLocationSharingSettingsPageLaunchHandler launchWithCommand:uiContainer:completion:] */

void FUN_105bfc9a0(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 0x18) == 0) {
    if (param_4 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126b1c10;
      _objc_alloc(PTR_PTR_1126b1c10);
      func_0x00010c063240(*(undefined8 *)PTR__UIWindowLevelNormal_110345e88);
    }
    else {
      _objc_retain(param_4);
      puVar1 = param_4;
    }
    puVar2 = PTR_PTR_1126c3158;
    _objc_alloc(PTR_PTR_1126c3158);
    func_0x00010be5cd40(param_1);
    func_0x00010c0583c0(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    func_0x00010c08bd40(*(undefined8 *)(param_1 + 0x18));
    (**(code **)(param_5 + 0x10))(param_5,0);
    _objc_release(puVar2);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010c00e2e0();
    (**(code **)(param_5 + 0x10))(param_5,puVar1);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bfcb18; end: 105bfcbcb; -[SCLocationSharingSettingsPageLaunchHandler _mapProtoOpenSource:] */

undefined8 FUN_105bfcb18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c247940();
  if ((int)uVar3 == 6) {
    uVar3 = 1;
  }
  else {
    uVar3 = param_3;
    func_0x00010c247940();
    if ((int)uVar3 == 7) {
      uVar3 = param_3;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010c247520();
      iVar2 = (int)uVar1;
      _objc_release(uVar3);
    }
    else {
      uVar3 = param_3;
      func_0x00010bfa1820();
      iVar2 = (int)uVar3;
    }
    if (iVar2 - 3U < 7) {
      uVar3 = *(undefined8 *)(&UNK_10ddcb370 + (ulong)(iVar2 - 3U) * 8);
    }
    else {
      uVar3 = 0xffffffffffffffff;
    }
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105bfcbcc; end: 105bfcbdb; -[SCLocationSharingSettingsPageLaunchHandler locationSharingSettingsScopeDidDismiss] */

void FUN_105bfcbcc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bfcbdc; end: 105bfcbe3; -[SCLocationSharingSettingsPageLaunchHandler screen] */

undefined4 FUN_105bfcbdc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 105bfcbe4; end: 105bfcc1b; -[SCLocationSharingSettingsPageLaunchHandler .cxx_destruct] */

void FUN_105bfcbe4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105bfcc1c; end: 105bfcd27; -[SCMapPageLaunchHandler initWithMainTabNavigationServices:fullMapScopeExposer:fullMapScopeServices:] */

undefined1 *
FUN_105bfcc1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ec568;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x38) = 0x24;
    puVar2 = PTR_PTR_1126c3160;
    _objc_opt_class();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bfcd28; end: 105bfd1a7; -[SCMapPageLaunchHandler launchWithCommand:uiContainer:completion:] */

void FUN_105bfcd28(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x000106875ab0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x0001068762ec();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010bfba180();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf668c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar7 = PTR_PTR_1126b0320;
    func_0x00010c0cf9c0(PTR_PTR_1126b0320);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c2b5c20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c2b52c0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c2ae4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010c0cfa00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar5 = lVar3;
    func_0x00010bfba180();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c0d6280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    _objc_release(lVar5);
    _objc_release(lVar3);
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126b5c58;
      func_0x00010bf6a9e0(PTR_PTR_1126b5c58);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar7 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c3168;
    _objc_alloc();
    func_0x00010c05a5e0();
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar5 = lVar3;
    func_0x00010bfba180();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar11;
    func_0x00010c0eb0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    _objc_release(lVar5);
    _objc_release(lVar3);
    uVar14 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf22260();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    _objc_initWeak(auStack_70,param_1);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010bfba180();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(uVar14);
    _objc_retain(param_5);
    func_0x00010c237940(lVar5);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(param_1);
    _objc_release(param_5);
    _objc_release(uVar14);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_release(uVar14);
    _objc_release(lVar13);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(lVar12);
    _objc_release(lVar4);
    _objc_release(lVar6);
  }
  else if ((puVar1 != (undefined *)0x0) &&
          (puVar7 = puVar1, func_0x0001068763a0(), ((ulong)puVar7 & 1) == 0)) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105bfd1a8; end: 105bfd1fb;  */

void FUN_105bfd1a8(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x10));
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105bfd1fc; end: 105bfd55b; -[SCMapPageLaunchHandler launchInteractivelyWithPayload:completion:] */

void FUN_105bfd1fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  
  _objc_retain(param_3);
  func_0x00010bf51e00();
  uVar15 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_4;
  _objc_release(uVar15);
  puVar1 = PTR_PTR_1126b0ea8;
  _objc_alloc_init();
  func_0x00010c1c1d00();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x000106875ab0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x0001068762ec();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 == 0) {
    lVar4 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010bfba180();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf668c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    puVar8 = PTR_PTR_1126b0320;
    func_0x00010c0cf9c0(PTR_PTR_1126b0320);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c2b5c20();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c2b52c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c2ae4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c2abaa0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x00010c0cfa00(lVar7,param_2,puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    lVar4 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar6 = lVar4;
    func_0x00010bfba180();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c0d6280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar13);
    _objc_release(lVar6);
    _objc_release(lVar4);
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126b5c58;
      func_0x00010bf6a9e0(PTR_PTR_1126b5c58);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar8 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c3168;
    _objc_alloc();
    func_0x00010c05a5e0();
    uVar15 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf22260(uVar15,param_2,param_1,puVar8,*(undefined8 *)(param_1 + 0x20),0,lVar5,lVar5,
                        puVar9,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,puVar2);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,uVar15);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    _objc_release(uVar15);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(lVar14);
    _objc_release(lVar5);
    _objc_release(lVar7);
  }
  else {
    if ((puVar2 != (undefined *)0x0) &&
       (puVar8 = puVar2, func_0x0001068763a0(), ((ulong)puVar8 & 1) == 0)) {
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,puVar2);
    }
    param_1 = 0;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105bfd55c; end: 105bfd567; -[SCMapPageLaunchHandler mapViewControllerDidPresentWithInteractionController:] */

void FUN_105bfd55c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 105bfd568; end: 105bfd5d3; -[SCMapPageLaunchHandler mapScopeDidEnd:] */

void FUN_105bfd568(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105bfd5d4; end: 105bfd63b; -[SCMapPageLaunchHandler mapViewControllerDidFinishPresentingMapScopeInteractively:complete:] */

void FUN_105bfd5d4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar2);
  }
  if ((param_4 & 1) == 0) {
    func_0x00010c0b9ae0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


