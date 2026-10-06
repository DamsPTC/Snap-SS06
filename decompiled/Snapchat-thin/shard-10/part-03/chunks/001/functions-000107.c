/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f17774; end: 107f1777b; -[SCCloudSyncCreateSnapDocEntrySnapshot entryPlaceholder] */

undefined8 FUN_107f17774(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107f1777c; end: 107f17783; -[SCCloudSyncCreateSnapDocEntrySnapshot snapIdToReplace] */

undefined8 FUN_107f1777c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107f17784; end: 107f1778b; -[SCCloudSyncCreateSnapDocEntrySnapshot snapsOrder] */

undefined8 FUN_107f17784(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107f1778c; end: 107f17803; -[SCCloudSyncCreateSnapDocEntrySnapshot .cxx_destruct] */

void FUN_107f1778c(long param_1)

{
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



/* Entry: 107f17804; end: 107f1788b; -[SCCloudSyncAddEntryAssetEntity initWithCoder:] */

undefined1 * FUN_107f17804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fba98;
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



/* Entry: 107f1788c; end: 107f17903; -[SCCloudSyncAddEntryAssetEntity initWithEntryAsset:] */

undefined1 * FUN_107f1788c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fba98;
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



/* Entry: 107f17904; end: 107f17927; -[SCCloudSyncAddEntryAssetEntity copyWithZone:] */

undefined8 FUN_107f17904(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f17928; end: 107f1793f; -[SCCloudSyncAddEntryAssetEntity encodeWithCoder:] */

void FUN_107f17928(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sc_encodeObject_forKey__112630ce0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110ec4338);
  return;
}



/* Entry: 107f17940; end: 107f17947; -[SCCloudSyncAddEntryAssetEntity hash] */

void FUN_107f17940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 107f17948; end: 107f179d7; -[SCCloudSyncAddEntryAssetEntity isEqual:] */

long FUN_107f17948(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107f179bc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_107f179bc;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_107f179bc;
    }
  }
  lVar3 = 1;
LAB_107f179bc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107f179d8; end: 107f179df; -[SCCloudSyncAddEntryAssetEntity entryAsset] */

undefined8 FUN_107f179d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f179e0; end: 107f179eb; -[SCCloudSyncAddEntryAssetEntity .cxx_destruct] */

void FUN_107f179e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f179ec; end: 107f179f7; -[SCCloudSyncBackgroundUploadSchedulingServices .cxx_destruct] */

void FUN_107f179ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f179f8; end: 107f17a07; -[SCCloudSyncDependencyProvidingServices releaseMemoriesAssetRepository] */

void FUN_107f179f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f17a08; end: 107f17a0f; -[SCCloudSyncDependencyProvidingServices profile] */

undefined8 FUN_107f17a08(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f17a10; end: 107f17a17; -[SCCloudSyncDependencyProvidingServices memoriesProfileHandler] */

undefined8 FUN_107f17a10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f17a18; end: 107f17a1f; -[SCCloudSyncDependencyProvidingServices dataObjectContext] */

undefined8 FUN_107f17a18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107f17a20; end: 107f17a27; -[SCCloudSyncDependencyProvidingServices boltDataUploader] */

undefined8 FUN_107f17a20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107f17a28; end: 107f17a2f; -[SCCloudSyncDependencyProvidingServices cloudFS] */

undefined8 FUN_107f17a28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f17a30; end: 107f17a37; -[SCCloudSyncDependencyProvidingServices notificationPool] */

undefined8 FUN_107f17a30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107f17a38; end: 107f17a3f; -[SCCloudSyncDependencyProvidingServices logger] */

undefined8 FUN_107f17a38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107f17a40; end: 107f17a47; -[SCCloudSyncDependencyProvidingServices cloudSyncDataCapManager] */

undefined8 FUN_107f17a40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107f17a48; end: 107f17a4f; -[SCCloudSyncDependencyProvidingServices memoriesUserDefaultsManager] */

undefined8 FUN_107f17a48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107f17a50; end: 107f17a57; -[SCCloudSyncDependencyProvidingServices fileManager] */

undefined8 FUN_107f17a50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107f17a58; end: 107f17a5f; -[SCCloudSyncDependencyProvidingServices userSession] */

undefined8 FUN_107f17a58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107f17a60; end: 107f17a67; -[SCCloudSyncDependencyProvidingServices statusServices] */

undefined8 FUN_107f17a60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107f17a68; end: 107f17a6f; -[SCCloudSyncDependencyProvidingServices memoriesCSAMKeyIvFetcherObjc] */

undefined8 FUN_107f17a68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107f17a70; end: 107f17a77; -[SCCloudSyncDependencyProvidingServices memoriesCSAMKeyIvSaver] */

undefined8 FUN_107f17a70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107f17a78; end: 107f17a7f; -[SCCloudSyncDependencyProvidingServices memoriesLegacyBackupDeprecationLogger] */

undefined8 FUN_107f17a78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 107f17a80; end: 107f17b6f; -[SCCloudSyncDependencyProvidingServices .cxx_destruct] */

void FUN_107f17a80(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 107f17b70; end: 107f17d27;  */

undefined8
FUN_107f17b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined **param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  long lStack_208;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110ec4378;
  uStack_40 = param_4;
  _objc_retain(param_4);
  func_0x00010bf72080(puVar1,param_3,&uStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110ec4358;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_90 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar7 != (undefined **)0x0) {
      ppuStack_90 = ppuVar7;
    }
    ppuStack_98 = &PTR____CFConstantStringClassReference_110ec4498;
    _objc_retain(ppuVar7);
    func_0x00010bf72080(puVar1,param_3,&ppuStack_90,&ppuStack_98,1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110ec4358;
    uVar8 = 0x138c;
    func_0x00010bf99240(puVar2,param_3,&PTR____CFConstantStringClassReference_110ec4358,0x138c,
                        puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      func_0x00010b26c6bc(uVar8);
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      ppuStack_108 = &PTR____CFConstantStringClassReference_110ec43b8;
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_100 = &PTR____CFConstantStringClassReference_110f9c8d8;
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_f8 = puVar1;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_f0 = puVar3;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_f8,&ppuStack_108
                          ,2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = &PTR____CFConstantStringClassReference_110ec4358;
      uVar8 = 0x138b;
      ppuVar10 = ppuVar4;
      func_0x00010bf99240(puVar2,param_3,&PTR____CFConstantStringClassReference_110ec4358,0x138b);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
      _objc_release(puVar3);
      _objc_release(puVar1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
        ___stack_chk_fail();
        puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_188 = &PTR____CFConstantStringClassReference_110ec44b8;
        _objc_retain(ppuVar10);
        func_0x00010c0df780(puVar1,param_3,ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_180 = &PTR____CFConstantStringClassReference_110ec44d8;
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_170 = puVar1;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar8);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_178 = &PTR____CFConstantStringClassReference_110ec4498;
        ppuStack_160 = &PTR____CFConstantStringClassReference_110daafd8;
        if (ppuVar10 != (undefined **)0x0) {
          ppuStack_160 = ppuVar10;
        }
        puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_168 = puVar3;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_170,
                            &ppuStack_188,3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = &PTR____CFConstantStringClassReference_110ec4358;
        lVar9 = 0x138d;
        puVar11 = puVar5;
        func_0x00010bf99240(puVar2,param_3,&PTR____CFConstantStringClassReference_110ec4358);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar10);
        _objc_release(puVar5);
        _objc_release(puVar3);
        _objc_release(puVar1);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
          ___stack_chk_fail();
          lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
          _objc_retain(lVar9);
          _objc_retain(puVar11);
          _objc_retain(param_7);
          _objc_retain(param_8);
          _objc_retain(param_9);
          _objc_retain(ppuStack_190);
          ppuStack_248 = &PTR____CFConstantStringClassReference_110ec4398;
          puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,ppuVar7);
          _objc_retainAutoreleasedReturnValue();
          ppuStack_240 = &PTR____CFConstantStringClassReference_110ec43d8;
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          puStack_228 = puVar1;
          func_0x00010c0df720(param_1);
          _objc_retainAutoreleasedReturnValue();
          ppuStack_218 = &PTR____CFConstantStringClassReference_110daafd8;
          if (param_9 != (undefined **)0x0) {
            ppuStack_218 = param_9;
          }
          ppuStack_238 = &PTR____CFConstantStringClassReference_110ec43f8;
          ppuStack_230 = &PTR____CFConstantStringClassReference_110ec4498;
          ppuStack_210 = &PTR____CFConstantStringClassReference_110daafd8;
          if (ppuStack_190 != (undefined **)0x0) {
            ppuStack_210 = ppuStack_190;
          }
          puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_220 = puVar2;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_228,
                              &ppuStack_248,4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          _objc_release(puVar1);
          puVar1 = puVar3;
          if (puVar11 != (undefined *)0x0) {
            func_0x00010c0d3c80(puVar3);
            func_0x00010c1d0640();
            _objc_release(puVar3);
          }
          puVar2 = puVar1;
          if (lVar9 != 0) {
            func_0x00010c0d3c80(puVar1);
            func_0x00010c1d0640();
            _objc_release(puVar1);
          }
          puVar1 = puVar2;
          if (param_7 != 0) {
            func_0x00010c0d3c80(puVar2);
            func_0x00010c1d0640();
            _objc_release(puVar2);
          }
          puVar3 = puVar1;
          if (param_8 != 0) {
            func_0x00010c0d3c80(puVar1);
            func_0x00010c1d0640();
            _objc_release(puVar1);
          }
          puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_3,
                              &PTR____CFConstantStringClassReference_110ec4358,0x138a,puVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          _objc_release(ppuStack_190);
          _objc_release(param_9);
          _objc_release(param_8);
          _objc_release(param_7);
          _objc_release(puVar11);
          _objc_release(lVar9);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_208) {
            ___stack_chk_fail();
            func_0x00010c292820();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar9;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf885a0();
            _objc_release(lVar6);
            _objc_release(lVar9);
            return param_1;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return param_1;
}



/* Entry: 107f17d28; end: 107f17faf;  */

undefined8
FUN_107f17d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined **param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  long lStack_168;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010b26c6bc(param_5);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110ec43b8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_60 = &PTR____CFConstantStringClassReference_110f9c8d8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_58 = puVar1;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110ec4358;
  uVar8 = 0x138b;
  ppuVar10 = ppuVar3;
  func_0x00010bf99240(puVar4,param_3,&PTR____CFConstantStringClassReference_110ec4358,0x138b);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110ec44b8;
    _objc_retain(ppuVar10);
    func_0x00010c0df780(puVar1,param_3,ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110ec44d8;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_d0 = puVar1;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar8);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110ec4498;
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar10 != (undefined **)0x0) {
      ppuStack_c0 = ppuVar10;
    }
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_c8 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_d0,&ppuStack_e8,3)
    ;
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &PTR____CFConstantStringClassReference_110ec4358;
    lVar9 = 0x138d;
    puVar11 = puVar5;
    func_0x00010bf99240(puVar4,param_3,&PTR____CFConstantStringClassReference_110ec4358);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar10);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(lVar9);
      _objc_retain(puVar11);
      _objc_retain(param_7);
      _objc_retain(param_8);
      _objc_retain(param_9);
      _objc_retain(ppuStack_f0);
      ppuStack_1a8 = &PTR____CFConstantStringClassReference_110ec4398;
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_1a0 = &PTR____CFConstantStringClassReference_110ec43d8;
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_188 = puVar4;
      func_0x00010c0df720(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_178 = &PTR____CFConstantStringClassReference_110daafd8;
      if (param_9 != (undefined **)0x0) {
        ppuStack_178 = param_9;
      }
      ppuStack_198 = &PTR____CFConstantStringClassReference_110ec43f8;
      ppuStack_190 = &PTR____CFConstantStringClassReference_110ec4498;
      ppuStack_170 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuStack_f0 != (undefined **)0x0) {
        ppuStack_170 = ppuStack_f0;
      }
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_180 = puVar1;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_188,
                          &ppuStack_1a8,4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar4);
      puVar4 = puVar2;
      if (puVar11 != (undefined *)0x0) {
        func_0x00010c0d3c80(puVar2);
        func_0x00010c1d0640();
        _objc_release(puVar2);
      }
      puVar1 = puVar4;
      if (lVar9 != 0) {
        func_0x00010c0d3c80(puVar4);
        func_0x00010c1d0640();
        _objc_release(puVar4);
      }
      puVar4 = puVar1;
      if (param_7 != 0) {
        func_0x00010c0d3c80(puVar1);
        func_0x00010c1d0640();
        _objc_release(puVar1);
      }
      puVar1 = puVar4;
      if (param_8 != 0) {
        func_0x00010c0d3c80(puVar4);
        func_0x00010c1d0640();
        _objc_release(puVar4);
      }
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_3,
                          &PTR____CFConstantStringClassReference_110ec4358,0x138a,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(ppuStack_f0);
      _objc_release(param_9);
      _objc_release(param_8);
      _objc_release(param_7);
      _objc_release(puVar11);
      _objc_release(lVar9);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
        ___stack_chk_fail();
        func_0x00010c292820();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar9;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        _objc_release(lVar6);
        _objc_release(lVar9);
        return param_1;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return param_1;
}



/* Entry: 107f17fb0; end: 107f1823f;  */

undefined8
FUN_107f17fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,long param_6,long param_7,long param_8,undefined **param_9,
             undefined **param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110ec4398;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110ec43d8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_98 = puVar1;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_9 != (undefined **)0x0) {
    ppuStack_88 = param_9;
  }
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110ec43f8;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110ec4498;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_10 != (undefined **)0x0) {
    ppuStack_80 = param_10;
  }
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_90 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_98,&ppuStack_b8,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar3;
  if (param_6 != 0) {
    func_0x00010c0d3c80(puVar3);
    func_0x00010c1d0640();
    _objc_release(puVar3);
  }
  puVar2 = puVar1;
  if (param_5 != 0) {
    func_0x00010c0d3c80(puVar1);
    func_0x00010c1d0640();
    _objc_release(puVar1);
  }
  puVar1 = puVar2;
  if (param_7 != 0) {
    func_0x00010c0d3c80(puVar2);
    func_0x00010c1d0640();
    _objc_release(puVar2);
  }
  puVar2 = puVar1;
  if (param_8 != 0) {
    func_0x00010c0d3c80(puVar1);
    func_0x00010c1d0640();
    _objc_release(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_3,
                      &PTR____CFConstantStringClassReference_110ec4358,0x138a,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(lVar4);
  _objc_release(param_5);
  return param_1;
}



/* Entry: 107f18240; end: 107f182a3;  */

undefined8 FUN_107f18240(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107f182a4; end: 107f1848b;  */

long FUN_107f182a4(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 == 0) {
    lVar2 = -9999;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c067fc0(lVar1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 107f1848c; end: 107f18557;  */

undefined8 FUN_107f1848c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107f18558; end: 107f185a3;  */

void FUN_107f18558(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f185a4; end: 107f1866b;  */

undefined8 FUN_107f185a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107f1866c; end: 107f18693;  */

undefined ** FUN_107f1866c(long param_1)

{
  if (param_1 - 1U < 7) {
    return (undefined **)(&PTR_PTR_110a12f18)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110ec44f8;
}



/* Entry: 107f18694; end: 107f186c7; -[SCCloudSyncLoggingServices .cxx_destruct] */

void FUN_107f18694(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f186c8; end: 107f187bf;  */

void FUN_107f186c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf3ec40();
  switch(param_1) {
  default:
    goto LAB_107f18774;
  case 2:
  case 3:
  case 4:
  case 5:
    goto LAB_107f18774;
  case 6:
  case 7:
    uVar1 = 1;
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
    uVar1 = 4;
    break;
  case 0xc:
  case 0xd:
  case 0xe:
    uVar1 = 2;
    break;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    uVar1 = 5;
    break;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
    uVar1 = 6;
    break;
  case 0x1b:
    uVar1 = 0;
    break;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
    uVar1 = 3;
    break;
  case 0x21:
    uVar1 = 9;
    break;
  case 0x22:
  case 0x23:
  case 0x24:
    uVar1 = 10;
    break;
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
    uVar1 = 8;
    break;
  case 0x29:
  case 0x2a:
  case 0x2b:
    uVar1 = 0xb;
    break;
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
    uVar1 = 0xc;
  }
  FUN_107f194d4(uVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_107f18774:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f187c0; end: 107f1880f;  */

void FUN_107f187c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f18810; end: 107f18843;  */

undefined8 FUN_107f18810(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf3ec40();
  if (param_1 - 1U < 0x2f) {
    uVar1 = *(undefined8 *)(&UNK_10dee83a0 + (param_1 - 1U) * 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 107f18844; end: 107f188d3;  */

void FUN_107f18844(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126d85b0;
  _objc_retain(uVar2);
  _objc_opt_class(puVar3);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f188d4; end: 107f188fb;  */

undefined ** FUN_107f188d4(long param_1)

{
  if (param_1 - 2U < 4) {
    return (undefined **)(&PTR_PTR_110a130e8)[param_1 - 2U];
  }
  return &PTR____CFConstantStringClassReference_110ec48b8;
}



/* Entry: 107f188fc; end: 107f18a27;  */

void FUN_107f188fc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  if (param_2 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  func_0x00010c1d0640(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c00e2e0(puVar4);
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f18a28; end: 107f18a9f;  */

void FUN_107f18a28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_1;
  FUN_107f1953c();
  uVar2 = 4;
  if ((int)uVar1 != 0) {
    uVar2 = 5;
  }
  FUN_107f188fc(uVar2,param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f18aa0; end: 107f18b67;  */

void FUN_107f18aa0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(in_x3);
  func_0x00010bf99480(param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 9;
  FUN_107f188fc(9,puVar1,in_x3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f18b68; end: 107f18c5f;  */

void FUN_107f18b68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(param_2);
  func_0x00010bf99400(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 10;
  FUN_107f188fc(10,puVar1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f18c60; end: 107f18d27;  */

void FUN_107f18c60(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(in_x3);
  func_0x00010bf99480(param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x15;
  FUN_107f188fc(0x15,puVar1,in_x3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f18d28; end: 107f1918b;  */

void FUN_107f18d28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(param_2);
  func_0x00010bf99400(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x16;
  FUN_107f188fc(0x16,puVar1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f1918c; end: 107f19253;  */

void FUN_107f1918c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(in_x3);
  func_0x00010bf99480(param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x2a;
  FUN_107f188fc(0x2a,puVar1,in_x3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f19254; end: 107f192d3;  */

void FUN_107f19254(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(param_2);
  func_0x00010bf99400(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x2b;
  FUN_107f188fc(0x2b,puVar1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f192d4; end: 107f1939b;  */

void FUN_107f192d4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(in_x3);
  func_0x00010bf99480(param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x2d;
  FUN_107f188fc(0x2d,puVar1,in_x3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f1939c; end: 107f1949b;  */

void FUN_107f1939c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(param_2);
  func_0x00010bf99400(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x2e;
  FUN_107f188fc(0x2e,puVar1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f1949c; end: 107f194d3;  */

undefined ** FUN_107f1949c(long param_1)

{
  undefined **ppuVar1;
  
  func_0x00010bf3ec40();
  if (param_1 - 1U < 0x2f) {
    ppuVar1 = (undefined **)(&PTR_PTR_110a13108)[param_1 - 1U];
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ec4f38;
  }
  return ppuVar1;
}



/* Entry: 107f194d4; end: 107f1953b;  */

undefined ** FUN_107f194d4(long param_1)

{
  if (param_1 - 1U < 0xc) {
    return (undefined **)(&PTR_PTR_110a13280)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110ec4f58;
}



/* Entry: 107f1953c; end: 107f19613;  */

undefined8 FUN_107f1953c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0720c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107f19614; end: 107f1963b;  */

void FUN_107f19614(long param_1,undefined8 param_2)

{
  func_0x00010c0d9840(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 107f1963c; end: 107f1992f;  */

void FUN_107f1963c(undefined *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = param_1;
  func_0x00010bf529e0();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126d8530;
    _objc_alloc(PTR_PTR_1126d8530);
    func_0x00010c0611c0();
    puVar6 = PTR_PTR_1126d8538;
    _objc_alloc(PTR_PTR_1126d8538);
    func_0x00010c0551e0();
    goto LAB_107f198b8;
  }
  puVar2 = param_1;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  if (param_3 == 0) {
    puVar1 = PTR____NSArray0__struct_11034ab48;
  }
  _objc_retain(puVar1);
  puVar3 = puVar2;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  puVar5 = puVar2;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf529e0();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = puVar5;
    func_0x00010bf529e0();
    puVar7 = PTR_PTR_1126d8530;
    _objc_alloc();
    func_0x00010bf529e0();
    func_0x00010bf529e0(puVar1);
    func_0x00010bf529e0(puVar2);
    func_0x00010bf529e0(puVar3);
    func_0x00010bf529e0(puVar5);
    if (puVar6 != (undefined *)0x0) goto LAB_107f1985c;
    func_0x00010bf529e0(puVar4);
    func_0x00010c0611c0(puVar7);
    puVar6 = PTR_PTR_1126d8538;
    _objc_alloc(PTR_PTR_1126d8538);
  }
  else {
    puVar7 = PTR_PTR_1126d8530;
    _objc_alloc(PTR_PTR_1126d8530);
    func_0x00010bf529e0(puVar2);
    func_0x00010bf529e0(puVar1);
    func_0x00010bf529e0(puVar2);
    func_0x00010bf529e0(puVar3);
    func_0x00010bf529e0(puVar5);
LAB_107f1985c:
    func_0x00010c0611c0(puVar7);
    puVar6 = PTR_PTR_1126d8538;
    _objc_alloc(PTR_PTR_1126d8538);
  }
  func_0x00010c0551e0();
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
LAB_107f198b8:
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107f19930; end: 107f1995b;  */

uint FUN_107f19930(undefined8 param_1,ulong param_2)

{
  func_0x00010b5fa088(param_2);
  return (uint)(param_2 < 0xd) & 0x1566U >> (ulong)((uint)param_2 & 0x1f);
}



/* Entry: 107f1995c; end: 107f19a37;  */

bool FUN_107f1995c(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010b5fa088();
  if (lVar2 == 1) {
    lVar2 = param_2;
    func_0x00010c247520(param_2);
    bVar1 = (int)lVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 107f19a38; end: 107f19b67;  */

void FUN_107f19a38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c279960(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010af25594();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c15a880(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126d85b8;
  _objc_alloc(PTR_PTR_1126d85b8);
  func_0x00010c0551e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f19b68; end: 107f19bab;  */

void FUN_107f19b68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_code_userInfo__1125c3e38,
             &PTR____CFConstantStringClassReference_110e09198,param_1,0);
  return;
}



/* Entry: 107f19bac; end: 107f19d03;  */

undefined ** FUN_107f19bac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain();
  if (param_1 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110ec53d8;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0720c0();
    _objc_release(lVar1);
    if ((int)lVar2 == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110ec53f8;
    }
    else {
      lVar1 = param_1;
      func_0x00010bf3ec40();
      if (lVar1 - 2U < 0x14) {
        ppuVar3 = (undefined **)(&PTR_PTR_110a133e0)[lVar1 - 2U];
      }
      else {
        ppuVar3 = &PTR____CFConstantStringClassReference_110ec5418;
      }
    }
  }
  _objc_release(param_1);
  return ppuVar3;
}



/* Entry: 107f19d04; end: 107f19d1f;  */

void FUN_107f19d04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_code_userInfo__1125c3e38,
             &PTR____CFConstantStringClassReference_110ec5158,param_1,0);
  return;
}



/* Entry: 107f19d20; end: 107f19edb;  */

/* WARNING: Removing unreachable block (ram,0x000107f19d94) */

void FUN_107f19d20(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126af5d0;
  if (lVar2 == 0) {
    uVar3 = 1;
    FUN_107f19b68(1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  else {
    func_0x00010c12cc60(param_2);
    puVar4 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f19edc; end: 107f19eeb;  */

/* WARNING: Removing unreachable block (ram,0x000107f19d94) */

void FUN_107f19edc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  _objc_retain(uVar5);
  lVar1 = param_2;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126af5d0;
  if (lVar2 == 0) {
    uVar3 = 1;
    FUN_107f19b68(1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  else {
    func_0x00010c12cc60(uVar5);
    puVar4 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f19eec; end: 107f1a0e7;  */

long FUN_107f19eec(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      FUN_107f19d20(*(undefined8 *)(lVar5 * 8),param_4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = param_1;
    func_0x00010bf52a60();
  }
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar3 = param_3;
      func_0x00010c269d40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12bce0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar3);
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  return *(long *)(param_1 + 8);
}



/* Entry: 107f1a0e8; end: 107f1a0ef; -[SCMemoriesBackupTranscodingServices transcoder] */

undefined8 FUN_107f1a0e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f1a0f0; end: 107f1a0f7; -[SCMemoriesBackupTranscodingServices batchTranscoder] */

undefined8 FUN_107f1a0f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f1a0f8; end: 107f1a0ff; -[SCMemoriesBackupTranscodingServices transcodingCache] */

undefined8 FUN_107f1a0f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f1a100; end: 107f1a107; -[SCMemoriesBackupTranscodingServices transcodingHelper] */

undefined8 FUN_107f1a100(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107f1a108; end: 107f1a10f; -[SCMemoriesBackupTranscodingServices bitrateCalculator] */

undefined8 FUN_107f1a108(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107f1a110; end: 107f1a117; -[SCMemoriesBackupTranscodingServices transcodingCanceler] */

undefined8 FUN_107f1a110(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107f1a118; end: 107f1a177; -[SCMemoriesBackupTranscodingServices .cxx_destruct] */

void FUN_107f1a118(long param_1)

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



/* Entry: 107f1a178; end: 107f1a223; -[SCMemoriesBackupTranscodableGallerySnapsResult initWithTranscodableVideoSnaps:selectionMetrics:] */

undefined1 *
FUN_107f1a178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fbac0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f1a224; end: 107f1a247; -[SCMemoriesBackupTranscodableGallerySnapsResult copyWithZone:] */

undefined8 FUN_107f1a224(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f1a248; end: 107f1a2bb; -[SCMemoriesBackupTranscodableGallerySnapsResult hash] */

undefined8 * FUN_107f1a248(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_107f1a33c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107f1a348;
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
          goto LAB_107f1a348;
        }
        goto LAB_107f1a33c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107f1a348:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107f1a2bc; end: 107f1a363; -[SCMemoriesBackupTranscodableGallerySnapsResult isEqual:] */

long FUN_107f1a2bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107f1a33c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107f1a348;
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
          goto LAB_107f1a348;
        }
        goto LAB_107f1a33c;
      }
    }
    lVar3 = 0;
  }
LAB_107f1a348:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107f1a364; end: 107f1a36b; -[SCMemoriesBackupTranscodableGallerySnapsResult transcodableVideoSnaps] */

undefined8 FUN_107f1a364(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f1a36c; end: 107f1a373; -[SCMemoriesBackupTranscodableGallerySnapsResult selectionMetrics] */

undefined8 FUN_107f1a36c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f1a374; end: 107f1a3a3; -[SCMemoriesBackupTranscodableGallerySnapsResult .cxx_destruct] */

void FUN_107f1a374(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f1a3a4; end: 107f1a413; -[SCMemoriesBackupSelectSnapsToTranscodeMetrics initWithVideoSnapCount:videoSnapInMeoCount:videoSnapNotFromSnapchatCameraCount:videoSnapBackgroundUploadedCount:videoSnapTranscodableCount:] */

void FUN_107f1a3a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126fbac8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  return;
}



/* Entry: 107f1a414; end: 107f1a437; -[SCMemoriesBackupSelectSnapsToTranscodeMetrics copyWithZone:] */

undefined8 FUN_107f1a414(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f1a438; end: 107f1a49b; -[SCMemoriesBackupSelectSnapsToTranscodeMetrics hash] */

undefined8 * FUN_107f1a438(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_20 = *(undefined8 *)(param_1 + 0x28);
  func_0x000100505190(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if (((((ulong)puVar2 & 1) == 0) ||
          (((*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8) ||
            (*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10))) ||
           (*(long *)((long)puVar1 + 0x18) != *(long *)(param_3 + 0x18))))) ||
         (*(long *)((long)puVar1 + 0x20) != *(long *)(param_3 + 0x20))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x28) == *(long *)(param_3 + 0x28));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 107f1a49c; end: 107f1a563; -[SCMemoriesBackupSelectSnapsToTranscodeMetrics isEqual:] */

bool FUN_107f1a49c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((((uVar3 & 1) == 0) ||
          (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
            (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
           (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) ||
         (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107f1a564; end: 107f1a56b; -[SCMemoriesBackupSelectSnapsToTranscodeMetrics videoSnapCount] */

undefined8 FUN_107f1a564(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f1a56c; end: 107f1a573; -[SCMemoriesBackupSelectSnapsToTranscodeMetrics videoSnapInMeoCount] */

undefined8 FUN_107f1a56c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f1a574; end: 107f1a57b; -[SCMemoriesBackupSelectSnapsToTranscodeMetrics videoSnapNotFromSnapchatCameraCount] */

undefined8 FUN_107f1a574(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f1a57c; end: 107f1a583; -[SCMemoriesBackupSelectSnapsToTranscodeMetrics videoSnapBackgroundUploadedCount] */

undefined8 FUN_107f1a57c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107f1a584; end: 107f1a58b; -[SCMemoriesBackupSelectSnapsToTranscodeMetrics videoSnapTranscodableCount] */

undefined8 FUN_107f1a584(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107f1a58c; end: 107f1a637; -[SCMemoriesBackupTranscodableMemoriesSnapsResult initWithTranscodableVideoSnaps:selectionMetrics:] */

undefined1 *
FUN_107f1a58c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fbad0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f1a638; end: 107f1a65b; -[SCMemoriesBackupTranscodableMemoriesSnapsResult copyWithZone:] */

undefined8 FUN_107f1a638(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f1a65c; end: 107f1a6cf; -[SCMemoriesBackupTranscodableMemoriesSnapsResult hash] */

undefined8 * FUN_107f1a65c(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_107f1a750:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107f1a75c;
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
          goto LAB_107f1a75c;
        }
        goto LAB_107f1a750;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107f1a75c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107f1a6d0; end: 107f1a777; -[SCMemoriesBackupTranscodableMemoriesSnapsResult isEqual:] */

long FUN_107f1a6d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107f1a750:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107f1a75c;
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
          goto LAB_107f1a75c;
        }
        goto LAB_107f1a750;
      }
    }
    lVar3 = 0;
  }
LAB_107f1a75c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107f1a778; end: 107f1a77f; -[SCMemoriesBackupTranscodableMemoriesSnapsResult transcodableVideoSnaps] */

undefined8 FUN_107f1a778(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f1a780; end: 107f1a787; -[SCMemoriesBackupTranscodableMemoriesSnapsResult selectionMetrics] */

undefined8 FUN_107f1a780(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f1a788; end: 107f1a7b7; -[SCMemoriesBackupTranscodableMemoriesSnapsResult .cxx_destruct] */

void FUN_107f1a788(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f1a7b8; end: 107f1a803; -[SCMemoriesBackupBitrateResult initWithStatus:targetBitrate:] */

void FUN_107f1a7b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fbad8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}


