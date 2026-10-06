/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10553fad8; end: 10553fb0b; -[SCBatteryStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

bool FUN_10553fad8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010bfee020(param_3);
    return param_3 == 0x170d39ed;
  }
  return false;
}



/* Entry: 10553fb0c; end: 10553fb43; -[SCBatteryStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_10553fb0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10553fb44(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 10553fb44; end: 10553fc2b;  */

void FUN_10553fb44(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 != 0) {
    _objc_retain(param_1);
    lVar1 = param_1;
    func_0x00010c0840e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfede40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar2 = lVar1;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar2;
    func_0x00010bf17860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (param_1 != 0) {
      _objc_retain(param_1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10553fc2c; end: 10553fc33; -[SCBatteryStickerInjectorImpl isConversionSupportedForCTPItem:] */

bool FUN_10553fc2c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain();
  if ((param_3 == 0) || (uVar2 = param_3, func_0x00010bf96f00(), uVar2 != 4)) {
    bVar1 = false;
  }
  else {
    uVar3 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ba8d8;
    _objc_opt_class(PTR_PTR_1126ba8d8);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    if (uVar2 == 0) {
      bVar1 = false;
    }
    else {
      func_0x00010bfee000(uVar3);
      bVar1 = uVar3 == 2;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10553fc34; end: 10553fceb;  */

bool FUN_10553fc34(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain();
  if ((param_1 == 0) || (uVar2 = param_1, func_0x00010bf96f00(), uVar2 != 4)) {
    bVar1 = false;
  }
  else {
    uVar3 = param_1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ba8d8;
    _objc_opt_class(PTR_PTR_1126ba8d8);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    if (uVar2 == 0) {
      bVar1 = false;
    }
    else {
      func_0x00010bfee000(uVar3);
      bVar1 = uVar3 == 2;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10553fcec; end: 10553fd83; -[SCBatteryStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_10553fcec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010bfee000(), lVar2 != 4)) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x000105d0b390(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac5e0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf21f60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10553fd84; end: 10553fe8b; -[SCBatteryStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_10553fd84(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfee020(), lVar1 != 0x170d39ed)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5cd00(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba7d8;
    func_0x00010bfedfa0(PTR_PTR_1126ba7d8,param_2,param_3,4,param_1,param_6,param_5,0,param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10553fe8c; end: 10553ff73; -[SCBatteryStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_10553fe8c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfee020(), lVar1 != 0x170d39ed)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar2 = 0x170d39ed;
    func_0x000105d0bdcc(0x170d39ed,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf17400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c098a20();
    func_0x00010bdd3060(param_1);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b13b0;
    func_0x00010bf17840(PTR_PTR_1126b13b0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10553ff74; end: 105540023; -[SCBatteryStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_10553ff74(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  FUN_10553fb44();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x000105d0b830(param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac5e0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf21f60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105540024; end: 105540123; -[SCBatteryStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

void FUN_105540024(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  FUN_10553fb44();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c098a00(param_3);
    func_0x00010bdc3ba0(param_1,param_2,lVar1);
    puVar2 = PTR_PTR_1126ba930;
    _objc_alloc_init(PTR_PTR_1126ba930);
    func_0x00010c1bd820();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ba8c8;
    _objc_alloc_init(PTR_PTR_1126ba8c8);
    func_0x00010c21ace0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16f9a0(puVar3,param_2,puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105540124; end: 1055401c7; -[SCBatteryStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_105540124(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c2465a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    uVar2 = param_4;
    func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_1108e5888);
    func_0x00010bf5cd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055401c8; end: 1055402db; -[SCBatteryStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

void FUN_1055401c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  FUN_10553fc34();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1055402dc;
    uStack_40 = 0x1055402ec;
    uStack_38 = 0;
    func_0x00010c0c11a0(param_4);
    uVar1 = puStack_58[5];
    _objc_retain(uVar1);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055402dc; end: 1055402f3;  */

void FUN_1055402dc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1055402f4; end: 1055403ff;  */

void FUN_1055402f4(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126ba8d0;
  _objc_opt_class(PTR_PTR_1126ba8d0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar3 = param_2;
    func_0x00010bfc6da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfede80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc2f40();
    _objc_release(uVar4);
    func_0x00010bf17540(PTR_PTR_1126ba938);
    puVar2 = PTR_PTR_1126b13b0;
    func_0x00010bf17840(PTR_PTR_1126b13b0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ba940;
    _objc_alloc();
    func_0x00010c020180();
    lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar6 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar5;
    _objc_release(uVar6);
    _objc_release(puVar2);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105540400; end: 105540463; -[SCBatteryStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_105540400(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_10553fb44();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126ba940;
    _objc_alloc(PTR_PTR_1126ba940);
    func_0x00010c020180();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105540464; end: 10554046b; -[SCBatteryStickerInjectorImpl shouldRenderValdiViewForItem:] */

bool FUN_105540464(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain();
  if ((param_3 == 0) || (uVar2 = param_3, func_0x00010bf96f00(), uVar2 != 4)) {
    bVar1 = false;
  }
  else {
    uVar3 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ba8d8;
    _objc_opt_class(PTR_PTR_1126ba8d8);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    if (uVar2 == 0) {
      bVar1 = false;
    }
    else {
      func_0x00010bfee000(uVar3);
      bVar1 = uVar3 == 2;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10554046c; end: 105540527; -[SCBatteryStickerInjectorImpl shouldFilterCTPItem:presentationModelProvider:] */

bool FUN_10554046c(void)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong in_x3;
  
  _objc_retain(in_x3);
  puVar3 = PTR_PTR_1126ba8d0;
  _objc_opt_class(PTR_PTR_1126ba8d0);
  uVar4 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar3);
  uVar1 = in_x3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    bVar2 = true;
  }
  else {
    uVar4 = in_x3;
    func_0x00010bfc6da0(in_x3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfede80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfc2f40();
    bVar2 = uVar6 == 0;
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  _objc_release(in_x3);
  return bVar2;
}



/* Entry: 105540528; end: 105540543; -[SCBatteryStickerInjectorImpl _batteryStickerMetadataLevelForSOJUBatteryInfoFilterLevel:] */

undefined4 FUN_105540528(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_3 == 0x211a8f) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 105540544; end: 105540573; -[SCBatteryStickerInjectorImpl _SOJUBatteryInfoFilterLevelForBatteryStickerMetadataLevel:] */

undefined4 FUN_105540544(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x3f08d2d;
  if (param_3 == 2) {
    uVar2 = 0x211a8f;
  }
  uVar1 = 0;
  if (param_3 != -0x4524111 && param_3 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 105540574; end: 10554058f;  */

void FUN_105540574(void)

{
  _objc_alloc_init(PTR_PTR_1126ba948);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105540590; end: 10554059f; -[SCBatteryStickerInjectorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105540590(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127257c8);
  return;
}



/* Entry: 1055405a0; end: 10554070b; -[SCCameraRollStickerInjectorImpl initWithPhotoPermissionCoordinator:coreConfigProvider:grapheneRegistry:downloader:applicationLifecycleEvents:boltUploader:temporaryFileWriter:fetchLimit:] */

undefined8 *
FUN_1055405a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e8ea0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ba958;
    _objc_alloc();
    func_0x00010c035d20();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar1[2];
    puVar1[2] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10554070c; end: 1055409a7; -[SCCameraRollStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

undefined * FUN_10554070c(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((param_3 != (undefined *)0x0) && (param_4 != 0)) &&
     (lVar3 = param_4, func_0x00010bf529e0(), lVar3 != 0)) {
    puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    _objc_opt_new();
    _objc_retain(param_4);
    lVar3 = param_4;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_4);
        }
        puVar5 = PTR_PTR_1126ba960;
        uVar9 = *(ulong *)(lVar8 * 8);
        _objc_retain(uVar9);
        _objc_opt_class(puVar5);
        uVar6 = uVar9;
        _objc_opt_isKindOfClass(uVar9,puVar5);
        uVar1 = uVar9;
        if ((uVar6 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar9);
        uVar6 = uVar1;
        func_0x00010bf4dce0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        puVar5 = PTR_PTR_1126ba968;
        _objc_opt_class(PTR_PTR_1126ba968);
        uVar9 = uVar6;
        _objc_opt_isKindOfClass(uVar6,puVar5);
        uVar1 = uVar6;
        if ((uVar9 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar6);
        if (uVar1 != 0) {
          func_0x00010bf96da0();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar6;
          func_0x00010c22a600();
          _objc_release(uVar6);
          func_0x000108eb9088();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08fa60();
          func_0x00010bf06ba0(puVar4);
          _objc_release(uVar9);
        }
        _objc_release(uVar1);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = param_4;
      func_0x00010bf52a60();
    }
    _objc_release(param_4);
    func_0x00010c2a9e60(param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2a9e80(param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    FUN_1055409e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    return (undefined *)(ulong)(puVar5 != (undefined *)0x0);
  }
  return param_3;
}



/* Entry: 1055409a8; end: 1055409df; -[SCCameraRollStickerInjectorImpl isConversionSupportedForStickerState:] */

bool FUN_1055409a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_1055409e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 1055409e0; end: 105540a6f;  */

void FUN_1055409e0(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee000(), lVar2 != 0x11)) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0846e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_105540be8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      _objc_retain(lVar2);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105540a70; end: 105540aa7; -[SCCameraRollStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

bool FUN_105540a70(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_105540aa8(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 105540aa8; end: 105540baf;  */

void FUN_105540aa8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar1 = param_1, func_0x00010bfee020(), lVar1 != -0x32dd6a9)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfedfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf2a6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      lVar1 = lVar2;
      func_0x00010c27dd80(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x000108eb9000();
      _objc_release(lVar1);
      puVar4 = PTR_PTR_1126ba978;
      _objc_alloc(PTR_PTR_1126ba978);
      lVar1 = lVar2;
      func_0x00010bfe8fe0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01c180(puVar4,param_2,0,lVar1,lVar3);
      _objc_release(lVar1);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105540bb0; end: 105540be7; -[SCCameraRollStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_105540bb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_105540be8(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 105540be8; end: 105540cc3;  */

void FUN_105540be8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96ee0();
    _objc_release(lVar1);
    _objc_release(lVar3);
    if ((int)lVar2 == 0x18) {
      lVar3 = param_1;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar3;
      func_0x00010bf2aae0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      if (lVar1 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = param_1;
        func_0x000108eb92ec(param_1,0);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(lVar1);
      goto LAB_105540ca8;
    }
  }
  lVar3 = 0;
LAB_105540ca8:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105540cc4; end: 105540d8f; -[SCCameraRollStickerInjectorImpl isConversionSupportedForCTPItem:] */

bool FUN_105540cc4(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x000105540cfc(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 105540d90; end: 105540ecf; -[SCCameraRollStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_105540d90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  FUN_1055409e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR_PTR_1126ba8a8;
  if (lVar1 == 0) {
    param_3 = 0;
  }
  else {
    lVar1 = param_5;
    func_0x00010c2790e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1281e0(param_5);
    uVar3 = param_1;
    uVar6 = param_2;
    func_0x00010bf345e0(param_5);
    uVar4 = uVar3;
    func_0x00010c14e120(param_5);
    uVar5 = uVar4;
    func_0x00010c141a80(param_5);
    func_0x00010c2551c0(param_1,param_2,uVar3,uVar6,uVar4,uVar5,puVar2,param_4,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010c0846e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246580(param_3,param_4,lVar1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105540ed0; end: 105540fe3; -[SCCameraRollStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_105540ed0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  FUN_105540aa8();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5cd00(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba7d8;
    func_0x00010bfedfa0(PTR_PTR_1126ba7d8,param_2,param_3,0x11,param_1,param_6,param_5,1,param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105540fe4; end: 10554103b; -[SCCameraRollStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_105540fe4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  FUN_105540aa8();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x000108eb9100(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10554103c; end: 105541203; -[SCCameraRollStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_10554103c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  FUN_105540be8();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126ba970;
    _objc_alloc_init(PTR_PTR_1126ba970);
    lVar6 = lVar1;
    func_0x00010bfe9020(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aabc0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar6);
    func_0x00010c22a600();
    func_0x00010c21ace0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ba8b8;
    _objc_alloc_init(PTR_PTR_1126ba8b8);
    puVar4 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176d00(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    lVar5 = param_3;
    func_0x000105d0b830(param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac5e0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac5a0(lVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    lVar6 = lVar5;
    func_0x00010bf21f60(lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105541204; end: 10554120b; -[SCCameraRollStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

undefined8 FUN_105541204(void)

{
  return 0;
}



/* Entry: 10554120c; end: 1055412af; -[SCCameraRollStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_10554120c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c2465a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    uVar2 = param_4;
    func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_1108e5888);
    func_0x00010bf5cd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055412b0; end: 105541353; -[SCCameraRollStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

void FUN_1055412b0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  func_0x000105540cfc();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126ba978;
    _objc_opt_class(PTR_PTR_1126ba978);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    puVar3 = PTR_PTR_1126ba980;
    _objc_alloc(PTR_PTR_1126ba980);
    if ((uVar2 & 1) == 0) {
      func_0x00010bfeeaa0();
    }
    else {
      func_0x00010c00ffa0();
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105541354; end: 1055413af; -[SCCameraRollStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_105541354(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  FUN_105540be8();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ba980;
    _objc_alloc(PTR_PTR_1126ba980);
    func_0x00010c00ffa0();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055413b0; end: 1055413f3; -[SCCameraRollStickerInjectorImpl shouldPrepareCTPItem:forAction:] */

bool FUN_1055413b0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  
  if (param_4 == 0) {
    func_0x000105540cfc(param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = param_3 != 0;
    _objc_release();
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1055413f4; end: 105541553; -[SCCameraRollStickerInjectorImpl shouldPrepareStickerView:forAction:] */

bool FUN_1055413f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  iVar2 = 0x1117ed60;
  func_0x00010bf4b900(&PTR__OBJC_CLASS___NSConstantArray_11117ed60,param_2,puVar3);
  _objc_release(puVar3);
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar4 = param_3;
    func_0x000105541490(param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar4 != 0;
    _objc_release();
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105541554; end: 1055416b7; -[SCCameraRollStickerInjectorImpl prepareCTPItem:forAction:presentingViewController:completion:] */

void FUN_105541554(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    uVar1 = param_1;
    func_0x00010c231ea0();
    if ((uVar1 & 1) == 0) {
      (**(code **)(param_6 + 0x10))(param_6,0);
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_6);
      func_0x00010c08ba00(uVar2);
      _objc_release(uVar2);
      _objc_release(param_6);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1055416b8; end: 1055416c3;  */

void FUN_1055416b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ba968,PTR_s_targetImageSizeWithImageSize__112678210);
  return;
}



/* Entry: 1055416c4; end: 105541717;  */

void FUN_1055416c4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a940();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105541718; end: 1055418e7; -[SCCameraRollStickerInjectorImpl prepareStickerView:forAction:completion:] */

void FUN_105541718(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_5 != 0) {
    if (param_3 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = 0;
      func_0x00010bf4b900(&PTR__OBJC_CLASS___NSConstantArray_11117ed60,param_2,puVar1);
      _objc_release(puVar1);
      if ((uVar2 & 1) != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12bfa0();
        _objc_release(uVar3);
        lVar4 = param_3;
        func_0x000105541490();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bfe9020();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c08fa60();
        _objc_release(lVar6);
        _objc_release(lVar5);
        if (lVar7 == 0) {
          lVar5 = lVar4;
          func_0x00010bf96da0(lVar4);
          _objc_retainAutoreleasedReturnValue();
          puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_78 = 0xc2000000;
          pcStack_70 = FUN_1055418e8;
          puStack_68 = &UNK_110896650;
          _objc_retain(lVar4);
          lStack_60 = lVar4;
          _objc_retain(param_5);
          lStack_58 = param_5;
          func_0x00010be73140(param_1,param_2,lVar5,&puStack_80);
          _objc_release(lVar5);
          _objc_release(lStack_58);
          _objc_release(lStack_60);
        }
        else {
          (**(code **)(param_5 + 0x10))(param_5);
        }
        _objc_release(lVar4);
        goto LAB_1055418bc;
      }
    }
    (**(code **)(param_5 + 0x10))(param_5);
  }
LAB_1055418bc:
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1055418e8; end: 10554191b;  */

void FUN_1055418e8(long param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010c285880(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000105541918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 10554191c; end: 1055419b7; -[SCCameraRollStickerInjectorImpl shouldPresentHintForStickerView:forAction:] */

bool FUN_10554191c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf2d700();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      lVar4 = param_3;
      func_0x000105541490(param_3);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar4 != 0;
      _objc_release();
      goto LAB_10554199c;
    }
  }
  bVar1 = false;
LAB_10554199c:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1055419b8; end: 105541a53; -[SCCameraRollStickerInjectorImpl presentHintForStickerView:forAction:] */

void FUN_1055419b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c231f80(param_1,param_2,param_3,param_4);
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000105d0c32c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237c20(uVar2,param_2,uVar3,&PTR____CFConstantStringClassReference_110f38718,param_3
                       );
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105541a54; end: 105541aff; -[SCCameraRollStickerInjectorImpl setDependencies:] */

void FUN_105541a54(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0c8e20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      _objc_retain(lVar1);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      *(long *)(param_1 + 0x18) = lVar1;
      _objc_release(uVar2);
      func_0x00010c1c60c0(*(undefined8 *)(param_1 + 8),param_2,lVar1);
    }
    lVar3 = param_3;
    func_0x00010bf5af80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      _objc_retain(lVar3);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      *(long *)(param_1 + 0x20) = lVar3;
      _objc_release(uVar2);
    }
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105541b00; end: 105541d1b; -[SCCameraRollStickerInjectorImpl _handleImage:completion:] */

/* WARNING: Removing unreachable block (ram,0x000105541bf8) */

void FUN_105541b00(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf83d60();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar3 = lVar2;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c2bda80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126ba978;
    _objc_alloc(PTR_PTR_1126ba978);
    func_0x00010c01c180();
    puVar6 = PTR_PTR_1126ba980;
    _objc_alloc(PTR_PTR_1126ba980);
    func_0x00010c00ffa0();
    (**(code **)(param_4 + 0x10))(param_4,puVar6);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(0);
    func_0x00010bf83d60(uVar1);
    _objc_release(uVar1);
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
  _objc_release(uVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105541d1c; end: 105541f3f; -[SCCameraRollStickerInjectorImpl _persistEntityImage:completion:] */

void FUN_105541d1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bfe6ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _UIImagePNGRepresentation();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b5988;
  func_0x00010bfeb740(PTR_PTR_1126b5988,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ba988;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar8 = puVar5;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dea518);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0035e0(puVar4,param_2,puVar6,8,0,puVar3,2,0,(ulong)puVar8 & 0xffffffffffffff00,0,0,0,
                      0);
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105541f40;
  puStack_78 = &UNK_110896680;
  uStack_70 = param_3;
  _objc_retain(param_4);
  puStack_b8 = puVar5;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10554201c;
  puStack_a0 = &UNK_1108966b0;
  uStack_98 = param_4;
  uStack_68 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c28eb40(uVar7,param_2,puVar4,uVar1,&puStack_90,&puStack_b8);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uStack_98);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 105541f40; end: 10554201b;  */

void FUN_105541f40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ba978;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe6ac0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf4db80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar3;
  func_0x00010beec820(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22a600(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c01c180(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10554201c; end: 10554202b;  */

void FUN_10554201c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105542028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10554202c; end: 1055420f7; -[SCCameraRollStickerInjectorImpl .cxx_destruct] */

void FUN_10554202c(long param_1)

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



/* Entry: 1055420f8; end: 105542177; -[SCCameraRollStickerInjectorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055420f8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127257f8);
  _objc_destroyWeak(param_1 + _DAT_1127257f4);
  _objc_destroyWeak(param_1 + _DAT_1127257ec);
  _objc_destroyWeak(param_1 + _DAT_1127257e8);
  _objc_destroyWeak(param_1 + _DAT_1127257e4);
  _objc_destroyWeak(param_1 + _DAT_1127257f0);
  _objc_destroyWeak(param_1 + _DAT_1127257e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127257fc);
  return;
}



/* Entry: 105542178; end: 1055421fb; -[SCDateTimeSticker initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105542178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e8ea8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112725800;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055421fc; end: 10554232f; -[SCDateTimeSticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055421fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ba898;
  _objc_retain(param_12);
  _objc_retain(param_9);
  _objc_alloc(puVar1);
  lVar2 = param_7;
  func_0x00010c27dd80(param_7);
  lVar3 = param_7;
  func_0x00010bfee0e0(param_7);
  func_0x00010c055c20(param_1,param_2,param_3,param_4,param_5,param_6,puVar1,param_8,lVar2,lVar3,0,0
                      ,0,*(undefined8 *)(param_7 + _DAT_112725800),param_9,param_10);
  _objc_release(param_12);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105542330; end: 10554233b; -[SCDateTimeSticker stickerId] */

void FUN_105542330(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  return;
}



/* Entry: 10554233c; end: 105542437; -[SCDateTimeSticker shortLoggingName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10554233c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112725800);
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf654e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release();
  func_0x00010b759ffc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c27dd80(uVar3);
  uVar4 = uVar1;
  func_0x00010c26c080(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dea558);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000108ebb9cc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105542438; end: 10554243f; -[SCDateTimeSticker toCTPItem] */

undefined8 FUN_105542438(void)

{
  return 0;
}



/* Entry: 105542440; end: 10554246f; -[SCDateTimeSticker toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105542440(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112725800);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105542470; end: 105542477; -[SCDateTimeSticker supportedFlows] */

undefined8 FUN_105542470(void)

{
  return 0;
}



/* Entry: 105542478; end: 1055424af; -[SCDateTimeSticker updateItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105542478(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112725800);
  *(undefined8 *)(param_1 + _DAT_112725800) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1055424b0; end: 1055424b7; -[SCDateTimeSticker infoType] */

undefined8 FUN_1055424b0(void)

{
  return 0;
}



/* Entry: 1055424b8; end: 1055424cb; -[SCDateTimeSticker intrinsicSize] */

void FUN_1055424b8(void)

{
  return;
}



/* Entry: 1055424cc; end: 10554257b; -[SCDateTimeSticker isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1055424cc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ba9a0;
  _objc_opt_class(PTR_PTR_1126ba9a0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112725800);
    uVar3 = param_3;
    func_0x00010c271a60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10554257c; end: 10554258b; -[SCDateTimeSticker hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10554257c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112725800),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10554258c; end: 10554259f; -[SCDateTimeSticker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10554258c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112725800,0);
  return;
}



/* Entry: 1055425a0; end: 1055425a3; -[SCDateTimeStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

void FUN_1055425a0(void)

{
  return;
}



/* Entry: 1055425a4; end: 1055425ab; -[SCDateTimeStickerInjectorImpl isConversionSupportedForStickerState:] */

bool FUN_1055425a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010bfee000(), lVar2 != 0)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0846e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_105542738();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1055425ac; end: 105542633;  */

bool FUN_1055425ac(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee000(), lVar2 != 0)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0846e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_105542738();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 105542634; end: 10554266b; -[SCDateTimeStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

bool FUN_105542634(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10554266c(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 10554266c; end: 1055426ff;  */

void FUN_10554266c(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x00010bfee020();
    if (lVar2 == 0x1fe7ae) {
      lVar1 = param_1;
      func_0x00010bfedfc0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (lVar2 != 0) {
        _objc_retain(lVar2);
      }
      _objc_release(lVar2);
      goto LAB_1055426e4;
    }
  }
  lVar2 = 0;
LAB_1055426e4:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105542700; end: 105542737; -[SCDateTimeStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_105542700(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_105542738(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 105542738; end: 10554281f;  */

void FUN_105542738(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 != 0) {
    _objc_retain(param_1);
    lVar1 = param_1;
    func_0x00010c0840e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfede40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar2 = lVar1;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar2;
    func_0x00010bf654e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (param_1 != 0) {
      _objc_retain(param_1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105542820; end: 105542827; -[SCDateTimeStickerInjectorImpl isConversionSupportedForCTPItem:] */

bool FUN_105542820(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain();
  if ((param_3 == 0) || (uVar2 = param_3, func_0x00010bf96f00(), uVar2 != 4)) {
    bVar1 = false;
  }
  else {
    uVar3 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ba8d8;
    _objc_opt_class(PTR_PTR_1126ba8d8);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    if (uVar2 == 0) {
      bVar1 = false;
    }
    else {
      func_0x00010bfee000(uVar3);
      bVar1 = uVar3 == 3;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105542828; end: 1055428df;  */

bool FUN_105542828(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain();
  if ((param_1 == 0) || (uVar2 = param_1, func_0x00010bf96f00(), uVar2 != 4)) {
    bVar1 = false;
  }
  else {
    uVar3 = param_1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ba8d8;
    _objc_opt_class(PTR_PTR_1126ba8d8);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    if (uVar2 == 0) {
      bVar1 = false;
    }
    else {
      func_0x00010bfee000(uVar3);
      bVar1 = uVar3 == 3;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1055428e0; end: 105542a0f; -[SCDateTimeStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_1055428e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  uVar1 = param_5;
  FUN_1055425ac();
  puVar2 = PTR_PTR_1126ba8a8;
  if ((int)uVar1 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = param_5;
    func_0x00010c2790e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1281e0(param_5);
    uVar3 = param_1;
    uVar6 = param_2;
    func_0x00010bf345e0(param_5);
    uVar4 = uVar3;
    func_0x00010c14e120(param_5);
    uVar5 = uVar4;
    func_0x00010c141a80(param_5);
    func_0x00010c2551c0(param_1,param_2,uVar3,uVar6,uVar4,uVar5,puVar2,param_4,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c0846e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246580(param_3,param_4,uVar1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105542a10; end: 105542b1f; -[SCDateTimeStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_105542a10(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  FUN_10554266c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5cd00(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba7d8;
    func_0x00010bfedfa0(PTR_PTR_1126ba7d8,param_2,param_3,0,param_1,param_6,param_5,0,param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105542b20; end: 105542c6b; -[SCDateTimeStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_105542b20(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  FUN_10554266c();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c27dde0(param_3);
    func_0x00010bdf8100(param_1,param_2,lVar1);
    puVar6 = PTR_PTR_1126b13b0;
    lVar1 = param_3;
    func_0x00010c26f000(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c282800();
    func_0x00010bf654c0(puVar6,param_2,lVar2,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c26fc80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_3;
      func_0x00010c26fc80(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar6;
      func_0x00010c0cc0c0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bfedf20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf654e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216020();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105542c6c; end: 105542e6b; -[SCDateTimeStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_105542c6c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  FUN_105542738();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x00010c27dd80(lVar1);
    func_0x00010bebdd40(param_1);
    puVar2 = PTR_PTR_1126ba9a8;
    _objc_alloc_init(PTR_PTR_1126ba9a8);
    func_0x00010c26f000(lVar1);
    func_0x00010c2156c0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c21ace0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c270d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010c08fa60();
    _objc_release(lVar6);
    if (lVar3 != 0) {
      lVar6 = lVar1;
      func_0x00010c270d40(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c215860(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar6);
    }
    puVar4 = PTR_PTR_1126ba8b8;
    _objc_alloc_init(PTR_PTR_1126ba8b8);
    puVar5 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189a20(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    lVar3 = param_3;
    func_0x000105d0b830(param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac5e0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac5a0(lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    lVar6 = lVar3;
    func_0x00010bf21f60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105542e6c; end: 105542fe3; -[SCDateTimeStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

void FUN_105542e6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  FUN_105542738();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c27dd80(param_3);
    func_0x00010bebdd40(param_1,param_2,lVar1);
    puVar2 = PTR_PTR_1126ba9a8;
    _objc_alloc_init(PTR_PTR_1126ba9a8);
    lVar1 = param_3;
    func_0x00010c26f000(param_3);
    func_0x00010c2156c0(puVar2,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c21ace0(puVar2,param_2,param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c270d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar3 != 0) {
      lVar1 = param_3;
      func_0x00010c270d40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c215860(puVar2,param_2,lVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
    puVar4 = PTR_PTR_1126ba8c8;
    _objc_alloc_init(PTR_PTR_1126ba8c8);
    func_0x00010c21ace0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189a20(puVar4,param_2,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105542fe4; end: 105543087; -[SCDateTimeStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_105542fe4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c2465a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    uVar2 = param_4;
    func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_1108e5888);
    func_0x00010bf5cd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105543088; end: 10554319f; -[SCDateTimeStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

void FUN_105543088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  FUN_105542828();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1055431a0;
    uStack_40 = 0x1055431b0;
    uStack_38 = 0;
    func_0x00010c0c11a0(param_4);
    uVar1 = puStack_58[5];
    _objc_retain(uVar1);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055431a0; end: 1055431b7;  */

void FUN_1055431a0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1055431b8; end: 1055433ff;  */

void FUN_1055431b8(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126ba8d0;
  _objc_opt_class(PTR_PTR_1126ba8d0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar3 = param_2;
    func_0x00010bfc6da0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfede80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfcb380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar5;
    func_0x00010bf64de0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(uVar4);
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c27dd80(uVar5);
    func_0x00010bdf8100(uVar12);
    puVar2 = PTR_PTR_1126b13b0;
    func_0x00010bf654c0(PTR_PTR_1126b13b0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c26fc80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c08fa60();
    _objc_release(uVar6);
    _objc_release(uVar4);
    if (uVar7 != 0) {
      uVar4 = uVar5;
      func_0x00010c26fc80();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010c0cc0c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bfedf20();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bf654e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216020();
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(uVar6);
      _objc_release(uVar4);
    }
    puVar8 = PTR_PTR_1126ba9a0;
    _objc_alloc();
    func_0x00010c020180();
    lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar12 = *(undefined8 *)(lVar11 + 0x28);
    *(undefined **)(lVar11 + 0x28) = puVar8;
    _objc_release(uVar12);
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105543400; end: 105543463; -[SCDateTimeStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_105543400(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_105542738();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126ba9a0;
    _objc_alloc(PTR_PTR_1126ba9a0);
    func_0x00010c020180();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105543464; end: 10554346b; -[SCDateTimeStickerInjectorImpl isContextUnlockSupportedForStickerState:] */

bool FUN_105543464(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010bfee000(), lVar2 != 0)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0846e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_105542738();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10554346c; end: 105543473; -[SCDateTimeStickerInjectorImpl shouldPrepareItemInstanceForContextAction:] */

undefined8 FUN_10554346c(void)

{
  return 1;
}



/* Entry: 105543474; end: 105543593; -[SCDateTimeStickerInjectorImpl prepareItemInstanceForContextAction:] */

void FUN_105543474(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar4 = uVar2;
  func_0x00010c0cc0c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf654e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214bc0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  func_0x00010bf43d60(puVar1,param_2,uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105543594; end: 1055435e3; -[SCDateTimeStickerInjectorImpl _sojuDateInfoFilterTypeForDateTimeStickerMetadataType:] */

undefined8 FUN_105543594(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x274acd;
  if (param_3 < 1) {
    if ((param_3 == -0x4524111) || (param_3 == 0)) {
      uVar2 = 0;
    }
    return uVar2;
  }
  if (param_3 == 2) {
    uVar2 = 0x45eeabef;
  }
  uVar1 = 0xffffffffb38fa6ed;
  if (param_3 != 1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 1055435e4; end: 10554361b; -[SCDateTimeStickerInjectorImpl _dateTimeStickerMetadataTypeForSOJUDateInfoFilterType:] */

undefined4 FUN_1055435e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 3;
  if (param_3 == 0x45eeabef) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = uVar2;
  }
  uVar2 = 1;
  if (param_3 != -0x4c705913) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 10554361c; end: 105543637;  */

void FUN_10554361c(void)

{
  _objc_alloc_init(PTR_PTR_1126ba9b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105543638; end: 105543647; -[SCDateTimeStickerInjectorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105543638(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112725804);
  return;
}



/* Entry: 105543648; end: 1055436cb; -[SCDiscoverDeeplinkSticker initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105543648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e8eb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112725808;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055436cc; end: 105543733; -[SCDiscoverDeeplinkSticker isEqual:] */

uint FUN_1055436cc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    puVar1 = PTR_PTR_1126ba9c0;
    _objc_opt_class(PTR_PTR_1126ba9c0);
    lVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    uVar3 = (uint)(param_3 != 0) & (uint)lVar2;
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105543734; end: 105543743; -[SCDiscoverDeeplinkSticker hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105543734(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112725808),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 105543744; end: 105543877; -[SCDiscoverDeeplinkSticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105543744(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ba898;
  _objc_retain(param_12);
  _objc_retain(param_9);
  _objc_alloc(puVar1);
  lVar2 = param_7;
  func_0x00010c27dd80(param_7);
  lVar3 = param_7;
  func_0x00010bfee0e0(param_7);
  func_0x00010c055c20(param_1,param_2,param_3,param_4,param_5,param_6,puVar1,param_8,lVar2,lVar3,0,0
                      ,0,*(undefined8 *)(param_7 + _DAT_112725808),param_9,param_10);
  _objc_release(param_12);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105543878; end: 105543883; -[SCDiscoverDeeplinkSticker stickerId] */

void FUN_105543878(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  return;
}



/* Entry: 105543884; end: 10554388f; -[SCDiscoverDeeplinkSticker shortLoggingName] */

void FUN_105543884(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  return;
}



/* Entry: 105543890; end: 105543897; -[SCDiscoverDeeplinkSticker toCTPItem] */

undefined8 FUN_105543890(void)

{
  return 0;
}


