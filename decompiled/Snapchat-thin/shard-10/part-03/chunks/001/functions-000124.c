/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f73278; end: 107f73303; -[SCSpectaclesSnapInfo hash] */

ulong * FUN_107f73278(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ushort uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  ulong uVar8;
  
  puVar2 = &uStack_50;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined4 *)(param_1 + 8);
  uVar7 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar6 >> 0x18),
                                          (uint6)(byte)((uint)uVar6 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar6) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar6 >> 8),(short)uVar7);
  uVar8 = CONCAT44((int)(uVar7 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar7 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar5 = (ushort)(uVar7 >> 0x30);
  uStack_50 = (ulong)uVar1 & 0xff;
  uStack_48 = uVar7 >> 0x10 & 0xff;
  uStack_40 = (ulong)CONCAT24(uVar5,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_38 = (ulong)uVar5;
  uStack_30 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_28 = (ulong)*(byte *)(param_1 + 0xd);
  uStack_20 = *(undefined8 *)(param_1 + 0x10);
  func_0x000100505190(&uStack_50,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (ulong *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if (((((ulong)puVar3 & 1) == 0) ||
          (((*(char *)((long)puVar2 + 8) != param_3[8] ||
            (*(char *)((long)puVar2 + 9) != param_3[9])) ||
           (*(char *)((long)puVar2 + 10) != param_3[10])))) ||
         (((*(char *)((long)puVar2 + 0xb) != param_3[0xb] ||
           (*(char *)((long)puVar2 + 0xc) != param_3[0xc])) ||
          (*(char *)((long)puVar2 + 0xd) != param_3[0xd])))) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)(ulong)(*(long *)((long)puVar2 + 0x10) == *(long *)(param_3 + 0x10));
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 107f73304; end: 107f733eb; -[SCSpectaclesSnapInfo isEqual:] */

bool FUN_107f73304(ulong param_1,undefined8 param_2,ulong param_3)

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
          (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
            (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
           (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) ||
         (((*(char *)(param_1 + 0xb) != *(char *)(param_3 + 0xb) ||
           (*(char *)(param_1 + 0xc) != *(char *)(param_3 + 0xc))) ||
          (*(char *)(param_1 + 0xd) != *(char *)(param_3 + 0xd))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107f733ec; end: 107f733f3; -[SCSpectaclesSnapInfo isSpectaclesVideo] */

undefined1 FUN_107f733ec(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107f733f4; end: 107f733fb; -[SCSpectaclesSnapInfo isCircularFormatSpectaclesMedia] */

undefined1 FUN_107f733f4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107f733fc; end: 107f73403; -[SCSpectaclesSnapInfo isCroppableSpectaclesMedia] */

undefined1 FUN_107f733fc(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107f73404; end: 107f7340b; -[SCSpectaclesSnapInfo isTopBottomStereoSpectaclesMedia] */

undefined1 FUN_107f73404(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107f7340c; end: 107f73413; -[SCSpectaclesSnapInfo isRotationalFormatSpectaclesMedia] */

undefined1 FUN_107f7340c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107f73414; end: 107f7341b; -[SCSpectaclesSnapInfo requiresRectification] */

undefined1 FUN_107f73414(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 107f7341c; end: 107f73423; -[SCSpectaclesSnapInfo stereoCamera] */

undefined8 FUN_107f7341c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f73424; end: 107f73467; -[SCPreviewDefaultFilterDataProviderImpl initWithSnapSource:userSession:previewABProvider:checkInOptionFetcher:ucoDataStore:userLocationPermissionManager:locationProvider:ucoServices:] */

void FUN_107f73424(void)

{
  func_0x00010c048820();
  return;
}



/* Entry: 107f73468; end: 107f734af; -[SCPreviewDefaultFilterDataProviderImpl initWithSnapSource:streakCount:userSession:fullScreenImageFuture:mediaOrientation:filterContextData:previewABProvider:checkInOptionFetcher:ucoDataStore:userLocationPermissionManager:locationProvider:ucoServices:] */

void FUN_107f73468(void)

{
  func_0x00010c0487c0();
  return;
}



/* Entry: 107f734b0; end: 107f7350b; -[SCPreviewDefaultFilterDataProviderImpl initWithSnapSource:snapPageSource:userSession:fullScreenImageFuture:mediaOrientation:mediaType:previewABProvider:ucoDataStore:userLocationPermissionManager:locationProvider:ucoServices:] */

void FUN_107f734b0(long param_1)

{
  undefined8 in_x7;
  
  func_0x00010c0487c0();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x110) = in_x7;
  }
  return;
}



/* Entry: 107f7350c; end: 107f7395b; -[SCPreviewDefaultFilterDataProviderImpl initWithSnapSource:snapPageSource:streakCount:userSession:fullScreenImageFuture:mediaOrientation:initialInfoStickerData:previewABProvider:checkInOptionFetcher:contextFilteredImage:venueFilterSelector:weather:altitude:timestamp:batteryStatus:selectedCommandConfiguration:selectedContextFilterId:selectedSmartFilterName:selectedSpeedMotionFilterName:speedMotionFilterConfigs:selectedGeoFilterId:selectedGeoFilterIds:selectedGeoFilters:isReverseMotionFilterSelected:isVenueFilterSelected:isStreakCountSelected:mediaType:cameraType:lensInPreviewContexts:preCaptureLensId:hideAnimatedGeofilters:ucoDataStore:userLocationPermissionManager:locationProvider:ucoServices:] */

long FUN_107f7350c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined4 param_27,undefined4 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined1 param_33,undefined4 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_26);
  _objc_retain(param_25);
  _objc_retain(param_24);
  _objc_retain(param_23);
  _objc_retain(param_22);
  _objc_retain(param_21);
  _objc_retain(param_20);
  _objc_retain(param_19);
  func_0x00010c0487c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,0,param_11,
                      param_12,param_35,param_36,param_37,param_38);
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = param_31;
  _objc_retain(param_31);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c8) = param_14;
  _objc_retain();
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x142) = param_27._1_1_;
  uVar2 = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x170) = param_15;
  _objc_retain(param_15);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = param_16;
  _objc_retain(param_16);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x168) = param_17;
  _objc_retain(param_17);
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + 0x180) = param_18;
  puVar1 = PTR_PTR_1126d8818;
  _objc_alloc();
  func_0x00010c04f9a0();
  uVar2 = *(undefined8 *)(param_1 + 0x178);
  *(undefined **)(param_1 + 0x178) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126bab18;
  uVar3 = *(undefined8 *)(param_1 + 0x178);
  uVar2 = *(undefined8 *)(param_1 + 0x1c8);
  func_0x00010c297dc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2981e0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaf9a0(uVar3,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + 0x1c0) = param_5;
  uVar2 = param_19;
  func_0x00010bf51e00();
  _objc_release(param_19);
  uVar3 = *(undefined8 *)(param_1 + 400);
  *(undefined8 *)(param_1 + 400) = uVar2;
  _objc_release(uVar3);
  uVar2 = param_20;
  func_0x00010bf51e00();
  _objc_release(param_20);
  uVar3 = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a0) = uVar2;
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = param_13;
  _objc_retain(param_13);
  _objc_release(uVar2);
  uVar2 = param_21;
  func_0x00010bf51e00();
  _objc_release(param_21);
  uVar3 = *(undefined8 *)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = uVar2;
  _objc_release(uVar3);
  uVar2 = param_22;
  func_0x00010bf51e00();
  _objc_release(param_22);
  uVar3 = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a8) = uVar2;
  _objc_release(uVar3);
  uVar2 = param_23;
  func_0x00010bf51e00();
  _objc_release(param_23);
  uVar3 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = uVar2;
  _objc_release(uVar3);
  uVar2 = param_24;
  func_0x00010bf51e00();
  _objc_release(param_24);
  uVar3 = *(undefined8 *)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b0) = uVar2;
  _objc_release(uVar3);
  uVar2 = param_25;
  func_0x00010bf51e00();
  _objc_release(param_25);
  uVar3 = *(undefined8 *)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b8) = uVar2;
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + 0x140) = (undefined1)param_27;
  *(undefined1 *)(param_1 + 0x141) = param_27._2_1_;
  *(undefined8 *)(param_1 + 0x110) = param_29;
  *(undefined8 *)(param_1 + 0x118) = param_30;
  uVar2 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = param_32;
  _objc_retain(param_32);
  _objc_release(uVar2);
  uVar2 = param_26;
  func_0x00010bf51e00();
  _objc_release(param_26);
  uVar3 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = uVar2;
  _objc_release(uVar3);
  _objc_release(param_32);
  _objc_release(param_13);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_31);
  *(undefined1 *)(param_1 + 0x130) = param_33;
  return param_1;
}



/* Entry: 107f7395c; end: 107f73a2b; -[SCPreviewDefaultFilterDataProviderImpl initWithSnapSource:snapPageSource:streakCount:userSession:fullScreenImageFuture:mediaOrientation:filterContextData:initialInfoStickerData:previewABProvider:checkInOptionFetcher:ucoDataStore:userLocationPermissionManager:locationProvider:snapDocFiltersEditor:ucoServices:] */

undefined8
FUN_107f7395c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  _objc_retain(param_16);
  func_0x00010c0487c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13,param_14,param_15,param_17);
  func_0x00010be957c0();
  _objc_release(param_16);
  return param_1;
}



/* Entry: 107f73a2c; end: 107f73ef3; -[SCPreviewDefaultFilterDataProviderImpl initWithSnapSource:snapPageSource:streakCount:userSession:fullScreenImageFuture:mediaOrientation:filterContextData:initialInfoStickerData:previewABProvider:checkInOptionFetcher:ucoDataStore:userLocationPermissionManager:locationProvider:ucoServices:] */

undefined8 *
FUN_107f73a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_70 = PTR_PTR_1126fbdf0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    puVar1[0x38] = param_5;
    _objc_retain(param_9);
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = param_9;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    puVar1[5] = param_8;
    _objc_retain(param_16);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[6];
    puVar1[6] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d8820;
    _objc_alloc();
    func_0x00010c04a540();
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c3ca8;
    func_0x00010c2300a0();
    if ((int)puVar3 != 0) {
      _objc_initWeak(auStack_80,puVar1);
      puVar3 = PTR_PTR_1126ae720;
      _objc_copyWeak(auStack_90,auStack_80);
      _objc_retain(param_6);
      uStack_88 = param_8;
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puVar1[10];
      puVar1[10] = puVar3;
      _objc_release(uVar2);
      _objc_release(param_6);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(auStack_80);
    }
    _objc_retain(param_12);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    if (param_10 != 0) {
      lVar4 = param_10;
      func_0x00010c2a2c20();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puVar1[0x2e];
      puVar1[0x2e] = lVar4;
      _objc_release(uVar2);
      lVar4 = param_10;
      func_0x00010c2709c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puVar1[0x2d];
      puVar1[0x2d] = lVar4;
      _objc_release(uVar2);
      lVar4 = param_10;
      func_0x00010bf17720();
      puVar1[0x30] = lVar4;
      lVar4 = param_10;
      func_0x00010bf01f00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puVar1[0x31];
      puVar1[0x31] = lVar4;
      _objc_release(uVar2);
      lVar4 = param_10;
      func_0x00010c09ea00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puVar1[0x43];
      puVar1[0x43] = lVar4;
      _objc_release(uVar2);
      lVar4 = param_10;
      func_0x00010c2709c0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puVar1[0xc];
      puVar1[0xc] = lVar5;
      _objc_release(uVar2);
      _objc_release(lVar4);
    }
    puVar6 = puVar1;
    func_0x00010bebeb40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = puVar6;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x1f) = 0;
    puVar3 = PTR_PTR_1126d8818;
    _objc_alloc();
    func_0x00010c04f9a0();
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = puVar3;
    _objc_release(uVar2);
    func_0x00010bfaf9a0(puVar1[0x2f]);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  return puVar1;
}



/* Entry: 107f73ef4; end: 107f73f53;  */

void FUN_107f73ef4(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c3ca8;
    _objc_alloc(PTR_PTR_1126c3ca8);
    func_0x00010c05db40();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f73f54; end: 107f73f87; -[SCPreviewDefaultFilterDataProviderImpl clear] */

void FUN_107f73f54(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f73f88; end: 107f7408f; -[SCPreviewDefaultFilterDataProviderImpl _addStreakFilter] */

void FUN_107f73f88(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = *(undefined ***)(param_1 + 0x1c0);
  puVar3 = param_1;
  if (2 < (long)ppuVar5) {
    ppuStack_48 = &PTR____CFConstantStringClassReference_110ecaf78;
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_40 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&ppuStack_48,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    param_1 = param_1 + 0x200;
    _objc_loadWeakRetained();
    ppuVar5 = &PTR____CFConstantStringClassReference_110f274d8;
    param_5 = 5;
    param_4 = puVar3;
    func_0x00010befa420();
    _objc_release(param_1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar5);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar4 = ppuVar5;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar4 != (undefined **)0x0) {
    func_0x00010c1d0640(*(undefined8 *)(puVar3 + 0x68),param_2,ppuVar5,ppuVar4);
    func_0x00010c1d0640(*(undefined8 *)(puVar3 + 0x70),param_2,param_4,ppuVar4);
    func_0x00010c1d0640(*(undefined8 *)(puVar3 + 0x78),param_2,param_5,ppuVar4);
    puVar3 = puVar3 + 0x148;
    _objc_loadWeakRetained(puVar3);
    func_0x00010c110f40();
    _objc_release(puVar3);
  }
  _objc_release(ppuVar4);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 107f74090; end: 107f7415f; -[SCPreviewDefaultFilterDataProviderImpl insertFilter:geoFilterImage:geoFilterAppearanceSetting:] */

void FUN_107f74090(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x68),param_2,param_3,lVar1);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x70),param_2,param_4,lVar1);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x78),param_2,param_5,lVar1);
    param_1 = param_1 + 0x148;
    _objc_loadWeakRetained(param_1);
    func_0x00010c110f40();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f74160; end: 107f742b7; -[SCPreviewDefaultFilterDataProviderImpl removeFilter:] */

void FUN_107f74160(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bfadea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x68);
      lVar1 = param_3;
      func_0x00010bfadea0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar4);
      _objc_release(lVar1);
      uVar4 = *(undefined8 *)(param_1 + 0x70);
      lVar1 = param_3;
      func_0x00010bfadea0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar4);
      _objc_release(lVar1);
      uVar4 = *(undefined8 *)(param_1 + 0x78);
      lVar1 = param_3;
      func_0x00010bfadea0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar4);
      _objc_release(lVar1);
      uVar2 = param_1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      _objc_opt_respondsToSelector();
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) {
        uVar2 = param_1;
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c110f00();
        _objc_release(uVar2);
      }
      lVar1 = param_1 + 0x148;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c110f40();
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f742b8; end: 107f742f7; -[SCPreviewDefaultFilterDataProviderImpl geoFilters] */

void FUN_107f742b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f742f8; end: 107f7437f; -[SCPreviewDefaultFilterDataProviderImpl geoFilterImages] */

void FUN_107f742f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f74380; end: 107f744a7;  */

ulong FUN_107f74380(float param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  
  lVar4 = *(long *)(*(long *)(param_2 + 0x20) + 0x68);
  _objc_retain(param_4);
  func_0x00010bfadea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar5 = *(long *)(*(long *)(param_2 + 0x20) + 0x68);
  uVar2 = param_4;
  func_0x00010bfadea0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar3 = (ulong)(lVar4 != 0 || lVar5 != 0);
  if (lVar4 != 0) {
    uVar3 = 0xffffffffffffffff;
  }
  if (lVar4 != 0 && lVar5 != 0) {
    func_0x00010beec700(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x1e8));
    fVar6 = param_1;
    func_0x00010beec700(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x1e8));
    uVar1 = 0xffffffffffffffff;
    if (param_1 == fVar6 || param_1 < fVar6) {
      uVar1 = 1;
    }
    uVar3 = 0;
    if (param_1 != fVar6) {
      uVar3 = uVar1;
    }
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  return uVar3;
}



/* Entry: 107f744a8; end: 107f744cf; -[SCPreviewDefaultFilterDataProviderImpl geoFilterAppearanceSettingsDictionary] */

void FUN_107f744a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f744d0; end: 107f744d7; -[SCPreviewDefaultFilterDataProviderImpl venues] */

void FUN_107f744d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c297dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1c8),PTR_s_venueFilters_112683998);
  return;
}



/* Entry: 107f744d8; end: 107f745a7; -[SCPreviewDefaultFilterDataProviderImpl currentVenueFilterInfo] */

void FUN_107f744d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1c8);
  func_0x00010c159620(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d8828;
  _objc_alloc(PTR_PTR_1126d8828);
  uVar3 = uVar1;
  func_0x00010c0d4f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c297e20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c09e300(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bec60(*(undefined8 *)(param_1 + 0x1c8));
  func_0x00010c02dc80(puVar2,param_2,uVar3,uVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f745a8; end: 107f74673; -[SCPreviewDefaultFilterDataProviderImpl speedMotionFilterConfigs] */

void FUN_107f745a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined **ppuStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined **ppuStack_1c8;
  long lStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_138 [128];
  long lStack_b8;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000108edf3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_50 = param_1;
  func_0x000108edf514();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  lStack_48 = lVar2;
  func_0x000108edf60c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_40 = lVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_50,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_58 = FUN_107f74674;
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puStack_60 = &stack0xfffffffffffffff0;
    _objc_opt_new();
    uVar7 = 0;
    lStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    plStack_170 = (long *)0x0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    func_0x00010c249d60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar9 = *plStack_170;
      do {
        lVar10 = 0;
        do {
          if (*plStack_170 != lVar9) {
            _objc_enumerationMutation(param_1);
          }
          lVar8 = *(long *)(lStack_178 + lVar10 * 8);
          lVar3 = lVar8;
          func_0x00010c0e00e0(lVar8,param_2,PTR_PTR_11329cf60);
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 != 0) {
            func_0x00010c1d0640(puVar1,param_2,lVar8,lVar3);
          }
          _objc_release(lVar3);
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = param_1;
        func_0x00010bf52a60(param_1,param_2,&uStack_180,auStack_138,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      pcStack_188 = FUN_107f747c8;
      lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_1c8 = &PTR____CFConstantStringClassReference_110f27638;
      ppuStack_1e8 = &PTR____CFConstantStringClassReference_110f27758;
      puStack_1e0 = PTR_PTR_11329cf60;
      lVar2 = 3;
      lStack_1a0 = param_1;
      puStack_198 = puVar1;
      ppuStack_190 = &puStack_60;
      func_0x000108edf4d4();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_1b8 = &PTR____CFConstantStringClassReference_110ec9838;
      puStack_1d8 = PTR_PTR_11329cf68;
      puStack_1d0 = PTR_PTR_11329cf70;
      ppuStack_1b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cd258;
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      lStack_1c0 = lVar2;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_1c8,
                          &ppuStack_1e8,4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
        ___stack_chk_fail();
        puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = *(long *)(lVar2 + 0x1f8);
        func_0x00010c09ef40();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010bf01f00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar9);
        _objc_release(lVar3);
        if (lVar10 != 0) {
          puVar4 = PTR_PTR_1126d2768;
          _objc_alloc();
          func_0x00010c0cc920(lVar10);
          lVar9 = lVar2;
          func_0x00010be4f520(lVar2);
          func_0x00010bff2c20(uVar7,puVar4,param_2,lVar9,1);
          uVar7 = *(undefined8 *)(lVar2 + 0x188);
          *(undefined **)(lVar2 + 0x188) = puVar4;
          _objc_release(uVar7);
          _objc_retain(puVar1);
          uVar7 = *(undefined8 *)(lVar2 + 0x60);
          *(undefined **)(lVar2 + 0x60) = puVar1;
          _objc_release(uVar7);
        }
        if (*(long *)(lVar2 + 0x168) == 0) {
          puVar4 = PTR_PTR_1126d2760;
          _objc_alloc();
          puVar5 = PTR__OBJC_CLASS___NSLocale_1126af788;
          func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
          func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c009540(puVar4,param_2,puVar1,puVar5,puVar6);
          uVar7 = *(undefined8 *)(lVar2 + 0x168);
          *(undefined **)(lVar2 + 0x168) = puVar4;
          _objc_release(uVar7);
          _objc_release(puVar6);
          _objc_release(puVar5);
        }
        lVar9 = lVar2;
        func_0x00010be1d320();
        *(long *)(lVar2 + 0x180) = lVar9;
        _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar1);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f74674; end: 107f747c7; -[SCPreviewDefaultFilterDataProviderImpl _speedMotionFiltersConfigMap] */

void FUN_107f74674(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined **ppuStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  long lStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar7 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c249d60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        lVar8 = *(long *)(lStack_128 + lVar10 * 8);
        lVar3 = lVar8;
        func_0x00010c0e00e0(lVar8,param_2,PTR_PTR_11329cf60);
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          func_0x00010c1d0640(puVar1,param_2,lVar8,lVar3);
        }
        _objc_release(lVar3);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_107f747c8;
    lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_178 = &PTR____CFConstantStringClassReference_110f27638;
    ppuStack_198 = &PTR____CFConstantStringClassReference_110f27758;
    puStack_190 = PTR_PTR_11329cf60;
    lVar2 = 3;
    lStack_150 = param_1;
    puStack_148 = puVar1;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x000108edf4d4();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_168 = &PTR____CFConstantStringClassReference_110ec9838;
    puStack_188 = PTR_PTR_11329cf68;
    puStack_180 = PTR_PTR_11329cf70;
    ppuStack_160 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cd258;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_170 = lVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_178,&ppuStack_198
                        ,4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
      ___stack_chk_fail();
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(lVar2 + 0x1f8);
      func_0x00010c09ef40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010bf01f00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      _objc_release(lVar3);
      if (lVar10 != 0) {
        puVar4 = PTR_PTR_1126d2768;
        _objc_alloc();
        func_0x00010c0cc920(lVar10);
        lVar9 = lVar2;
        func_0x00010be4f520(lVar2);
        func_0x00010bff2c20(uVar7,puVar4,param_2,lVar9,1);
        uVar7 = *(undefined8 *)(lVar2 + 0x188);
        *(undefined **)(lVar2 + 0x188) = puVar4;
        _objc_release(uVar7);
        _objc_retain(puVar1);
        uVar7 = *(undefined8 *)(lVar2 + 0x60);
        *(undefined **)(lVar2 + 0x60) = puVar1;
        _objc_release(uVar7);
      }
      if (*(long *)(lVar2 + 0x168) == 0) {
        puVar4 = PTR_PTR_1126d2760;
        _objc_alloc();
        puVar5 = PTR__OBJC_CLASS___NSLocale_1126af788;
        func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
        func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c009540(puVar4,param_2,puVar1,puVar5,puVar6);
        uVar7 = *(undefined8 *)(lVar2 + 0x168);
        *(undefined **)(lVar2 + 0x168) = puVar4;
        _objc_release(uVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
      lVar9 = lVar2;
      func_0x00010be1d320();
      *(long *)(lVar2 + 0x180) = lVar9;
      _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f747c8; end: 107f748b7; -[SCPreviewDefaultFilterDataProviderImpl reverseMotionFilterConfig] */

void FUN_107f747c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **ppuStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f27638;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f27758;
  puStack_60 = PTR_PTR_11329cf60;
  lVar1 = 3;
  func_0x000108edf4d4();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_38 = &PTR____CFConstantStringClassReference_110ec9838;
  puStack_58 = PTR_PTR_11329cf68;
  puStack_50 = PTR_PTR_11329cf70;
  ppuStack_30 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cd258;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_40 = lVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_48,&ppuStack_68,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(lVar1 + 0x1f8);
  func_0x00010c09ef40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf01f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (lVar5 != 0) {
    puVar6 = PTR_PTR_1126d2768;
    _objc_alloc();
    func_0x00010c0cc920(lVar5);
    lVar4 = lVar1;
    func_0x00010be4f520(lVar1);
    func_0x00010bff2c20(param_1,puVar6,param_3,lVar4,1);
    uVar9 = *(undefined8 *)(lVar1 + 0x188);
    *(undefined **)(lVar1 + 0x188) = puVar6;
    _objc_release(uVar9);
    _objc_retain(puVar2);
    uVar9 = *(undefined8 *)(lVar1 + 0x60);
    *(undefined **)(lVar1 + 0x60) = puVar2;
    _objc_release(uVar9);
  }
  if (*(long *)(lVar1 + 0x168) == 0) {
    puVar6 = PTR_PTR_1126d2760;
    _objc_alloc();
    puVar7 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
    func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c009540(puVar6,param_3,puVar2,puVar7,puVar8);
    uVar9 = *(undefined8 *)(lVar1 + 0x168);
    *(undefined **)(lVar1 + 0x168) = puVar6;
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  lVar4 = lVar1;
  func_0x00010be1d320();
  *(long *)(lVar1 + 0x180) = lVar4;
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107f748b8; end: 107f74a3b; -[SCPreviewDefaultFilterDataProviderImpl updateInfoStickerData] */

void FUN_107f748b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_2 + 0x1f8);
  func_0x00010c09ef40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf01f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 != 0) {
    puVar5 = PTR_PTR_1126d2768;
    _objc_alloc();
    func_0x00010c0cc920(lVar4);
    lVar3 = param_2;
    func_0x00010be4f520(param_2);
    func_0x00010bff2c20(param_1,puVar5,param_3,lVar3,1);
    uVar8 = *(undefined8 *)(param_2 + 0x188);
    *(undefined **)(param_2 + 0x188) = puVar5;
    _objc_release(uVar8);
    _objc_retain(puVar1);
    uVar8 = *(undefined8 *)(param_2 + 0x60);
    *(undefined **)(param_2 + 0x60) = puVar1;
    _objc_release(uVar8);
  }
  if (*(long *)(param_2 + 0x168) == 0) {
    puVar5 = PTR_PTR_1126d2760;
    _objc_alloc();
    puVar6 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
    func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c009540(puVar5,param_3,puVar1,puVar6,puVar7);
    uVar8 = *(undefined8 *)(param_2 + 0x168);
    *(undefined **)(param_2 + 0x168) = puVar5;
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  lVar3 = param_2;
  func_0x00010be1d320();
  *(long *)(param_2 + 0x180) = lVar3;
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f74a3c; end: 107f74a8b; -[SCPreviewDefaultFilterDataProviderImpl startUpdatingFilterData] */

void FUN_107f74a3c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  func_0x00010c2868a0();
  func_0x00010bec1fe0(param_1);
  func_0x00010bec1fa0(param_1);
  func_0x00010be208c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdd0db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__attemptStartUpdatingVenueSticke_112551d08);
  return;
}



/* Entry: 107f74a8c; end: 107f74b27; -[SCPreviewDefaultFilterDataProviderImpl stopUpdatingFilterData] */

void FUN_107f74a8c(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x188);
    *(undefined8 *)(param_1 + 0x188) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0x170) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x168) = 0;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + 0x180) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107f74b28; end: 107f74b2b; -[SCPreviewDefaultFilterDataProviderImpl updateVenueFilterData] */

void FUN_107f74b28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd0d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__attemptStartUpdatingVenueData_112551d00);
  return;
}



/* Entry: 107f74b2c; end: 107f74b2f; -[SCPreviewDefaultFilterDataProviderImpl updateVenueStickerData] */

void FUN_107f74b2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd0db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__attemptStartUpdatingVenueSticke_112551d08);
  return;
}



/* Entry: 107f74b30; end: 107f74b3b; -[SCPreviewDefaultFilterDataProviderImpl _getBatteryStatus] */

void FUN_107f74b30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf17730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ba938,PTR_s_batteryStatus_1125a3770);
  return;
}



/* Entry: 107f74b3c; end: 107f74cef; -[SCPreviewDefaultFilterDataProviderImpl _generateArSegmentationImageForGeofilterImage:appearanceSetting:] */

void FUN_107f74b3c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c3ca8;
  func_0x00010c2300a0();
  if ((int)puVar1 != 0) {
    lVar2 = param_3;
    func_0x00010bf4e760();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = param_3;
      func_0x00010bfaea60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      if (lVar3 == 0) {
        _objc_initWeak(auStack_48,param_1);
        uVar4 = *(undefined8 *)(param_1 + 0x50);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_3;
        func_0x00010bf4e760(param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(PTR___dispatch_main_q_11034be20);
        _objc_copyWeak(auStack_50,auStack_48);
        _objc_retain(param_3);
        _objc_retain(param_4);
        func_0x00010bfbf3a0(uVar4);
        _objc_release(PTR___dispatch_main_q_11034be20);
        _objc_release(lVar2);
        _objc_release(uVar4);
        _objc_release(param_4);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_50);
        _objc_destroyWeak(auStack_48);
      }
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f74cf0; end: 107f74f2b;  */

void FUN_107f74cf0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      uVar3 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf4e760();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c234c20();
      _objc_release(uVar3);
      if ((uVar4 & 1) != 0) goto LAB_107f74f04;
      uVar6 = *(undefined8 *)(lVar1 + 0x68);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfadea0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3e0(uVar6);
    }
    else {
      lVar5 = *(long *)(lVar1 + 0x70);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfadea0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar2);
      if (lVar5 == 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        uVar6 = *(undefined8 *)(lVar1 + 0x70);
        func_0x00010bfadea0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar6);
        _objc_release(uVar2);
      }
      uVar6 = *(undefined8 *)(lVar1 + 0x70);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfadea0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19c820();
      _objc_release(uVar6);
      _objc_release(uVar2);
      lVar5 = *(long *)(lVar1 + 0x78);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfadea0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar2);
      if (lVar5 == 0) {
        uVar6 = *(undefined8 *)(lVar1 + 0x78);
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bfadea0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar6);
        _objc_release(uVar2);
      }
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_107f74f2c;
      puStack_58 = &UNK_110841f80;
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      lStack_50 = lVar1;
      _objc_retain(uVar2);
      uStack_48 = uVar2;
      func_0x000100162d98("APPSTORE",&puStack_70);
      uVar2 = uStack_48;
    }
    _objc_release(uVar2);
  }
LAB_107f74f04:
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 107f74f2c; end: 107f7500f;  */

void FUN_107f74f2c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x148;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c110f40();
  _objc_release(lVar1);
  uVar2 = *(long *)(param_1 + 0x20) + 0x148;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x20) + 0x148;
    _objc_loadWeakRetained(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
    func_0x00010bfadea0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c110f60(lVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 107f75010; end: 107f7522b; -[SCPreviewDefaultFilterDataProviderImpl updateGeoFilter:] */

void FUN_107f75010(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x68);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = &uStack_130;
  ppuVar2 = (undefined **)puVar1;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    lVar10 = *plStack_120;
    do {
      puVar11 = (undefined8 *)0x0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(puVar1);
        }
        puVar8 = *(undefined8 **)(lStack_128 + (long)puVar11 * 8);
        puVar3 = puVar8;
        func_0x00010bfadea0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        puVar7 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        if (((ulong)puVar4 & 1) != 0) {
          _objc_retain(puVar8);
          _objc_release(puVar1);
          if (puVar8 == (undefined8 *)0x0) goto LAB_107f751bc;
          _objc_initWeak(auStack_138,param_1);
          puVar5 = PTR_PTR_1126b2718;
          _objc_alloc();
          func_0x00010c0044c0();
          puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_158 = 0xc2000000;
          pcStack_150 = FUN_107f7522c;
          puStack_148 = &UNK_110a152f0;
          param_2 = auStack_138;
          _objc_copyWeak(auStack_140);
          puVar7 = puVar8;
          func_0x00010c286240(puVar5);
          _objc_release(puVar5);
          _objc_destroyWeak(auStack_140);
          _objc_destroyWeak(auStack_138);
          puVar1 = puVar8;
          ppuVar2 = &puStack_160;
          goto LAB_107f751b4;
        }
        puVar11 = (undefined8 *)((long)puVar11 + 1);
      } while (ppuVar2 != (undefined **)puVar11);
      puVar7 = &uStack_130;
      ppuVar2 = (undefined **)puVar1;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
  }
LAB_107f751b4:
  _objc_release(puVar1);
LAB_107f751bc:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_destroyWeak(ppuVar2 + 4);
    _objc_destroyWeak(auStack_138);
    __Unwind_Resume();
    _objc_retain(param_2);
    _objc_retain(puVar7);
    param_3 = param_3 + 4;
    _objc_loadWeakRetained();
    if (param_3 != (undefined8 *)0x0) {
      func_0x00010be1aa80(param_3);
      puVar6 = param_2;
      func_0x00010c07bc80();
      if ((int)puVar6 != 0) {
        uVar9 = param_3[0xe];
        puVar6 = param_2;
        func_0x00010bfadea0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar9);
        _objc_release(puVar6);
        uVar9 = param_3[0xf];
        puVar6 = param_2;
        func_0x00010bfadea0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar9);
        _objc_release(puVar6);
        puVar1 = param_3 + 0x29;
        _objc_loadWeakRetained(puVar1);
        func_0x00010c110f40();
        _objc_release(puVar1);
      }
    }
    _objc_release(param_3);
    _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 107f7522c; end: 107f7532b;  */

void FUN_107f7522c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be1aa80(param_1);
    uVar1 = param_2;
    func_0x00010c07bc80();
    if ((int)uVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x70);
      uVar1 = param_2;
      func_0x00010bfadea0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3);
      _objc_release(uVar1);
      uVar3 = *(undefined8 *)(param_1 + 0x78);
      uVar1 = param_2;
      func_0x00010bfadea0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3);
      _objc_release(uVar1);
      lVar2 = param_1 + 0x148;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c110f40();
      _objc_release(lVar2);
    }
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f7532c; end: 107f75333; -[SCPreviewDefaultFilterDataProviderImpl geofilterByFilterId:] */

void FUN_107f7532c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x68),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 107f75334; end: 107f755b3; -[SCPreviewDefaultFilterDataProviderImpl _restoreSavedFiltersFrom:] */

void FUN_107f75334(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf07de0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_107f755b4;
  uStack_118 = 0x107f755c4;
  uStack_110 = 0;
  _objc_retain(lVar2);
  lVar4 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar6 = *(undefined8 *)(lVar7 * 8);
      _objc_retain(puVar3);
      _objc_retain(puVar3);
      func_0x00010c0bd2a0(uVar6);
      _objc_release(puVar3);
      _objc_release(puVar3);
      lVar7 = lVar7 + 1;
    } while (lVar4 != lVar7);
    lVar4 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  uVar5 = puStack_130[5];
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c8) = uVar5;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x128);
  *(undefined **)(param_1 + 0x128) = puVar3;
  _objc_retain(puVar3);
  _objc_release(uVar6);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(uStack_110);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = 8;
  __Block_object_dispose(&uStack_138);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  return;
}



/* Entry: 107f755b4; end: 107f755cb;  */

void FUN_107f755b4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f755cc; end: 107f75723;  */

void FUN_107f755cc(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar5 = param_3;
  func_0x00010c0cc820();
  if ((int)uVar5 == 7) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x142) = 1;
    puVar1 = PTR_PTR_1126bcd50;
    func_0x00010c297d00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar1;
    _objc_release(uVar5);
  }
  lVar6 = param_2;
  func_0x00010bfadea0();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar6 != 0) {
    func_0x00010bfadea0();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d2770;
    _objc_alloc(PTR_PTR_1126d2770);
    func_0x00010c012f60();
    puVar3 = PTR_PTR_1126d2778;
    func_0x00010bfc1400(PTR_PTR_1126d2778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
    puVar4 = puVar1;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1b0);
    *(undefined **)(*(long *)(param_1 + 0x20) + 0x1b0) = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f75724; end: 107f75a93;  */

void FUN_107f75724(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  long lStack_e0;
  long lStack_b8;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_2;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe5ea0();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfdd8c0();
  if ((int)lVar1 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = PTR_PTR_1126c4d70;
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c278f20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      lStack_b8 = 0;
    }
    else {
      lStack_e0 = param_2;
      func_0x00010c278f20();
      _objc_retainAutoreleasedReturnValue();
      lStack_b8 = lStack_e0;
      func_0x00010c11fae0();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar5 = param_2;
    func_0x00010c278f20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c11fa40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c08fa60();
    if (lVar7 == 0) {
      lVar14 = 0;
      lVar8 = param_1;
    }
    else {
      lVar8 = param_2;
      func_0x00010c278f20();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar8;
      func_0x00010c11fa40();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar9 = param_2;
    func_0x00010c278f20();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff1ea0();
    _objc_release(lVar10);
    _objc_release(lVar9);
    if (lVar7 != 0) {
      _objc_release(lVar14);
      _objc_release(lVar8);
    }
    _objc_release(lVar6);
    _objc_release(lVar5);
    if (lVar4 != 0) {
      _objc_release(lStack_b8);
      _objc_release(lStack_e0);
    }
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = 0;
  lVar1 = param_2;
  func_0x00010c08fb40(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf6e7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf980c0();
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar11 = PTR_PTR_1126b3898;
  func_0x00010c27e700(PTR_PTR_1126b3898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  puVar12 = puVar2;
  func_0x00010bf51e00();
  uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x1b0);
  *(undefined **)(*(long *)(param_1 + 0x28) + 0x1b0) = puVar12;
  _objc_release(uVar13);
  _objc_release(puVar11);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(puVar15);
  _objc_release(puVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 107f75a94; end: 107f75ab3;  */

void FUN_107f75a94(long param_1,int param_2,undefined8 param_3,undefined1 *param_4)

{
  if (param_2 == 0x29) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
    *param_4 = 1;
  }
  return;
}



/* Entry: 107f75ab4; end: 107f75b5f; -[SCPreviewDefaultFilterDataProviderImpl ucoIntegrationToolbox] */

void FUN_107f75ab4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x98);
  if (lVar6 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c27e640();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c14fe40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010beef6e0(*(undefined8 *)(param_1 + 0x98));
    lVar6 = *(long *)(param_1 + 0x98);
  }
  _objc_retain(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 107f75b60; end: 107f75bcf; -[SCPreviewDefaultFilterDataProviderImpl _mixerNamespaceServiceManager] */

void FUN_107f75b60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 200);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x208);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0cf140();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    lVar4 = *(long *)(param_1 + 200);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107f75bd0; end: 107f75c73; -[SCPreviewDefaultFilterDataProviderImpl _updateNamespace] */

void FUN_107f75bd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d8830;
  _objc_alloc(PTR_PTR_1126d8830);
  uVar2 = param_1;
  func_0x00010bdf6900(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059ac0(puVar1,param_2,0,uVar2);
  _objc_release(uVar2);
  func_0x00010be60ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251680();
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f75c74; end: 107f75f6b; -[SCPreviewDefaultFilterDataProviderImpl _getMixerItems] */

void FUN_107f75c74(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (*(long *)(param_1 + 200) == 0) {
    if (*(long *)(param_1 + 0x1e0) == 0) {
      uVar1 = *(ulong *)(param_1 + 0x110);
      lVar2 = *(long *)(param_1 + 0x118);
      if (2 < lVar2 - 1U) {
        lVar2 = 0;
      }
      if (uVar1 != 2) {
        uVar1 = (ulong)(uVar1 == 1);
      }
      puVar8 = PTR_PTR_1126b38a8;
      func_0x00010c0d8800(PTR_PTR_1126b38a8,param_2,lVar2,uVar1,*(undefined8 *)(param_1 + 0x100),
                          *(undefined8 *)(param_1 + 0x120));
      uVar7 = *(undefined8 *)(param_1 + 0x1e0);
      *(undefined **)(param_1 + 0x1e0) = puVar8;
      _objc_release(uVar7);
    }
    lVar2 = param_1;
    func_0x00010c27e980();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c297ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar5 = PTR_PTR_1126d8838;
    _objc_alloc();
    func_0x00010bdda240(param_1);
    func_0x00010bdda1c0(param_1);
    func_0x00010c013020();
    uVar7 = *(undefined8 *)(param_1 + 0x1d0);
    *(undefined **)(param_1 + 0x1d0) = puVar5;
    _objc_release(uVar7);
    lVar2 = param_1;
    func_0x00010c27e7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf92240();
    _objc_release(lVar2);
    if ((int)lVar3 == 0) {
      func_0x00010bedc000(param_1);
      _objc_initWeak(auStack_58,param_1);
      uVar6 = *(undefined8 *)(param_1 + 200);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0cae00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(lVar4);
      uVar6 = uVar7;
      func_0x00010c25ff60(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar6);
      _objc_release(lVar4);
      _objc_destroyWeak(auStack_60);
      _objc_release(uVar7);
      _objc_destroyWeak(auStack_58);
    }
    else {
      lVar2 = param_1;
      func_0x00010c27e7c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c27efe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar3;
      func_0x00010c0b8600(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be2c5e0(param_1);
      _objc_release(lVar2);
      _objc_release(lVar3);
    }
    _objc_release(puVar8);
    _objc_release(lVar4);
  }
  return;
}



/* Entry: 107f75f6c; end: 107f75f7b;  */

void FUN_107f75f6c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c098150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d8840,PTR_s_lensWithLensMetadata__112603a60,param_2);
  return;
}



/* Entry: 107f75f7c; end: 107f760ab;  */

void FUN_107f75f7c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c08a660(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar2);
    _objc_release(uVar3);
    _objc_release(puVar2);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_107f760ac;
    puStack_78 = &UNK_110858b70;
    lStack_70 = lVar1;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    uStack_68 = param_3;
    uStack_58 = 1.0 < param_1;
    _objc_retain(uVar3);
    uStack_60 = uVar3;
    func_0x0001000d76cc("APPSTORE",&puStack_90);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107f760ac; end: 107f760fb;  */

void FUN_107f760ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bef09a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2c5e0(uVar1,param_2,uVar2,*(undefined1 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f760fc; end: 107f76487; -[SCPreviewDefaultFilterDataProviderImpl _handleEmptyState] */

/* WARNING: Possible PIC construction at 0x000107f76214: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107f76218) */

void FUN_107f760fc(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x200;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfae8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010c2a0440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010c0d3c80();
  _objc_release(lVar11);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  uVar5 = param_1;
  func_0x00010c249d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4000();
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = param_1;
  func_0x00010c1400e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 == 0) {
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retain(lVar3);
    lVar1 = lVar3;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar3);
        }
        puVar8 = PTR_PTR_1126d8848;
        _objc_alloc(PTR_PTR_1126d8848);
        func_0x00010c01b340();
        func_0x00010befa120(puVar7);
        _objc_release(puVar8);
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      lVar1 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    func_0x00010bdc8f00(param_1);
    uVar5 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c22eea0();
    _objc_release(uVar5);
    if ((uVar6 & 1) == 0) {
      _objc_retain(puVar4);
      puVar8 = puVar4;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar8 != (undefined *)0x0) {
        puVar12 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar4);
          }
          puVar9 = PTR_PTR_1126d8848;
          _objc_alloc(PTR_PTR_1126d8848);
          func_0x00010c01b340();
          func_0x00010befa120(puVar7);
          _objc_release(puVar9);
          puVar12 = puVar12 + 1;
        } while (puVar8 != puVar12);
        puVar8 = puVar4;
        func_0x00010bf52a60();
      }
      _objc_release(puVar4);
    }
    func_0x00010be92c40(param_1);
    lVar1 = param_1 + 0x148;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c110ea0();
    _objc_release(lVar1);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(lVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    func_0x00010c1400e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107f76488; end: 107f7649b;  */

void FUN_107f76488(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_objectForKeyedSubscript__112615a50,PTR_PTR_11329cf60);
  return;
}



/* Entry: 107f7649c; end: 107f7664f; -[SCPreviewDefaultFilterDataProviderImpl _comparePreviewFilterItems:] */

bool FUN_107f7649c(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0xe8);
  func_0x00010bf529e0();
  uVar11 = param_3;
  func_0x00010bf529e0();
  if (uVar2 == uVar11) {
    uVar11 = param_3;
    func_0x00010bf529e0();
    if (uVar11 == 0) {
      bVar1 = true;
    }
    else {
      uVar11 = 0;
      do {
        uVar3 = *(undefined8 *)(param_1 + 0xe8);
        func_0x00010c0dfd40(uVar3,param_2,uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bfe5d80();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0dfd40(param_3,param_2,uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010bfe5d80();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        func_0x00010c0720c0(uVar4,param_2,uVar5);
        if ((int)uVar6 == 0) {
          _objc_release(uVar5);
          _objc_release(uVar2);
          _objc_release(uVar4);
          _objc_release(uVar3);
          goto LAB_107f76620;
        }
        uVar7 = *(ulong *)(param_1 + 0xe8);
        func_0x00010c0dfd40(uVar7,param_2,uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c27dd80();
        uVar9 = param_3;
        func_0x00010c0dfd40(param_3,param_2,uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c27dd80();
        _objc_release(uVar9);
        _objc_release(uVar7);
        _objc_release(uVar5);
        _objc_release(uVar2);
        _objc_release(uVar4);
        _objc_release(uVar3);
        bVar1 = uVar8 == uVar10;
        if (!bVar1) break;
        uVar11 = uVar11 + 1;
        uVar2 = param_3;
        func_0x00010bf529e0();
      } while (uVar11 < uVar2);
    }
  }
  else {
LAB_107f76620:
    bVar1 = false;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107f76650; end: 107f7665f; -[SCPreviewDefaultFilterDataProviderImpl _shouldOnlyUseSavedSnapLocation] */

bool FUN_107f76650(long param_1)

{
  return *(long *)(param_1 + 0x18) == 0xc;
}



/* Entry: 107f76660; end: 107f7668b; -[SCPreviewDefaultFilterDataProviderImpl _shouldAddVenueFilter] */

undefined8 FUN_107f76660(long param_1)

{
  if ((*(long *)(param_1 + 0x18) != 0xb) &&
     ((*(long *)(param_1 + 0x18) != 0xc || (*(long *)(param_1 + 0x1c8) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 107f7668c; end: 107f77257; -[SCPreviewDefaultFilterDataProviderImpl _handleMixerItems:fromCache:venueLensId:] */

/* WARNING: Possible PIC construction at 0x000107f767e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107f767ec) */

void FUN_107f7668c(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 uStack_4a0;
  code *pcStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  long lStack_478;
  long *plStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  code *pcStack_3a8;
  undefined *puStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  ulong uStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  byte bStack_358;
  byte bStack_357;
  undefined1 uStack_356;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  code *pcStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010be28d80(param_1);
  }
  else {
    lVar1 = param_1 + 0x200;
    _objc_loadWeakRetained();
    lVar19 = lVar1;
    func_0x00010bfae8e0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar19;
    func_0x00010c2a0440();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar14;
    func_0x00010c0d3c80();
    _objc_release(lVar14);
    _objc_release(lVar19);
    _objc_release(lVar1);
    func_0x00010c13fee0(lVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    uVar4 = param_1;
    func_0x00010c249d60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff4000();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = param_1;
    func_0x00010c1400e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar4 != 0) {
      func_0x00010c1400e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto code_r0x00010c0e00e0;
    }
    func_0x00010c13fee0(puVar3);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puStack_2a8 = &uStack_2b0;
    uStack_2b0 = 0;
    uStack_2a0 = 0x3032000000;
    pcStack_298 = FUN_107f755b4;
    uStack_290 = 0x107f755c4;
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puStack_2d8 = &uStack_2e0;
    uStack_2e0 = 0;
    uStack_2d0 = 0x3032000000;
    pcStack_2c8 = FUN_107f755b4;
    uStack_2c0 = 0x107f755c4;
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_288 = puVar7;
    _objc_opt_new();
    puStack_308 = &uStack_310;
    uStack_310 = 0;
    uStack_300 = 0x3032000000;
    pcStack_2f8 = FUN_107f755b4;
    uStack_2f0 = 0x107f755c4;
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_2b8 = puVar8;
    _objc_opt_new();
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_2e8 = puVar7;
    _objc_opt_new();
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    lStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    plStack_340 = (long *)0x0;
    lVar19 = *(long *)(param_1 + 0x128);
    _objc_retain(lVar19);
    lVar1 = lVar19;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar14 = *plStack_340;
      do {
        lVar17 = 0;
        do {
          if (*plStack_340 != lVar14) {
            _objc_enumerationMutation(lVar19);
          }
          uVar16 = *(undefined8 *)(lStack_348 + lVar17 * 8);
          uVar11 = uVar16;
          func_0x00010c081f00();
          uVar20 = puStack_308[5];
          puVar7 = PTR_PTR_1126d8848;
          if ((int)uVar11 == 0) {
            _objc_alloc(PTR_PTR_1126d8848);
            func_0x00010bfadea0(uVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c01b340(puVar7);
            func_0x00010befa120(uVar20);
          }
          else {
            _objc_alloc(PTR_PTR_1126d8848);
            func_0x00010bfadea0(uVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c01b340(puVar7);
            func_0x00010befa120(uVar20);
          }
          _objc_release(puVar7);
          _objc_release(uVar16);
          func_0x00010befa120(puVar8);
          lVar17 = lVar17 + 1;
        } while (lVar1 != lVar17);
        lVar1 = lVar19;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar19);
    puVar7 = puVar8;
    if (*(char *)(param_1 + 0x130) == '\x01') {
      puVar9 = puVar8;
      func_0x00010bfaea20();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar9;
      func_0x00010c0d3c80();
      _objc_release(puVar8);
      _objc_release(puVar9);
    }
    lVar1 = param_3;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d500(lVar2);
    func_0x00010c12d500(puVar3);
    uVar4 = param_1;
    func_0x00010bdda240();
    uVar5 = param_1;
    func_0x00010bdda1c0();
    uVar10 = param_1;
    func_0x00010beb5460();
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_3b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_3b0 = 0xc2000000;
    pcStack_3a8 = FUN_107f77288;
    puStack_3a0 = &UNK_110a154a0;
    _objc_retain(lVar2);
    lStack_398 = lVar2;
    bStack_358 = (byte)uVar4;
    bStack_357 = (byte)uVar5 & ((byte)uVar4 ^ 1);
    _objc_retain(uVar11);
    puStack_370 = &uStack_310;
    puStack_368 = &uStack_2e0;
    uStack_390 = uVar11;
    uStack_388 = param_1;
    _objc_retain(puVar3);
    puStack_360 = &uStack_2b0;
    puStack_380 = puVar3;
    _objc_retain(param_5);
    uStack_356 = (undefined1)uVar10;
    uStack_378 = param_5;
    func_0x00010bf97e80(param_3);
    uVar4 = param_1;
    func_0x00010bde27a0();
    puVar8 = puVar7;
    if ((uVar4 & 1) == 0) {
      uVar20 = puStack_308[5];
      _objc_retain(uVar20);
      uVar16 = *(undefined8 *)(param_1 + 0xe8);
      *(undefined8 *)(param_1 + 0xe8) = uVar20;
      _objc_release(uVar16);
      lVar19 = param_1 + 0x148;
      _objc_loadWeakRetained(lVar19);
      func_0x00010c110ee0();
      _objc_release(lVar19);
      puVar9 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new();
      uVar16 = *(undefined8 *)(param_1 + 0xe0);
      *(undefined **)(param_1 + 0xe0) = puVar9;
      _objc_release(uVar16);
      puVar9 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      _objc_opt_new();
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3c8 = 0;
      uStack_3d0 = 0;
      lStack_3f8 = 0;
      uStack_400 = 0;
      uStack_3e8 = 0;
      plStack_3f0 = (long *)0x0;
      lVar14 = puStack_308[5];
      _objc_retain(lVar14);
      lVar19 = lVar14;
      func_0x00010bf52a60();
      if (lVar19 != 0) {
        lVar17 = *plStack_3f0;
        do {
          lVar18 = 0;
          do {
            if (*plStack_3f0 != lVar17) {
              _objc_enumerationMutation(lVar14);
            }
            uVar20 = *(undefined8 *)(lStack_3f8 + lVar18 * 8);
            uVar15 = *(undefined8 *)(param_1 + 0xe0);
            uVar16 = uVar20;
            func_0x00010bfe5d80(uVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(uVar15);
            _objc_release(uVar16);
            func_0x00010bfe5d80(uVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf070e0(puVar9);
            _objc_release(uVar20);
            func_0x00010bf070e0(puVar9);
            lVar18 = lVar18 + 1;
          } while (lVar19 != lVar18);
          lVar19 = lVar14;
          func_0x00010bf52a60();
        } while (lVar19 != 0);
      }
      _objc_release(lVar14);
      uStack_418 = 0;
      uStack_420 = 0;
      uStack_408 = 0;
      uStack_410 = 0;
      lStack_438 = 0;
      uStack_440 = 0;
      uStack_428 = 0;
      plStack_430 = (long *)0x0;
      lVar14 = puStack_2a8[5];
      _objc_retain(lVar14);
      lVar19 = lVar14;
      func_0x00010bf52a60();
      if (lVar19 != 0) {
        lVar17 = *plStack_430;
        do {
          lVar18 = 0;
          do {
            if (*plStack_430 != lVar17) {
              _objc_enumerationMutation(lVar14);
            }
            uVar20 = *(undefined8 *)(lStack_438 + lVar18 * 8);
            puVar12 = PTR_PTR_1126d2770;
            _objc_alloc(PTR_PTR_1126d2770);
            func_0x00010bf96da0(uVar20);
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar20;
            func_0x00010bfad780();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c012f60(puVar12);
            _objc_release(uVar16);
            _objc_release(uVar20);
            func_0x00010befa120(puVar6);
            puVar13 = PTR_PTR_1126d2778;
            func_0x00010bfc1400(PTR_PTR_1126d2778);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar7);
            _objc_release(puVar13);
            _objc_release(puVar12);
            lVar18 = lVar18 + 1;
          } while (lVar19 != lVar18);
          lVar19 = lVar14;
          func_0x00010bf52a60();
        } while (lVar19 != 0);
      }
      _objc_release(lVar14);
      _objc_retain(puVar6);
      uVar16 = *(undefined8 *)(param_1 + 0x210);
      *(undefined **)(param_1 + 0x210) = puVar6;
      _objc_release(uVar16);
      uStack_458 = 0;
      uStack_460 = 0;
      uStack_448 = 0;
      uStack_450 = 0;
      lStack_478 = 0;
      uStack_480 = 0;
      uStack_468 = 0;
      plStack_470 = (long *)0x0;
      lVar14 = puStack_2d8[5];
      _objc_retain(lVar14);
      lVar19 = lVar14;
      func_0x00010bf52a60();
      if (lVar19 != 0) {
        lVar17 = *plStack_470;
        do {
          lVar18 = 0;
          do {
            if (*plStack_470 != lVar17) {
              _objc_enumerationMutation(lVar14);
            }
            puVar12 = PTR_PTR_1126d8850;
            func_0x00010902db54(PTR_PTR_1126d8850,*(undefined8 *)(lStack_478 + lVar18 * 8));
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar7);
            _objc_release(puVar12);
            lVar18 = lVar18 + 1;
          } while (lVar19 != lVar18);
          lVar19 = lVar14;
          func_0x00010bf52a60();
        } while (lVar19 != 0);
      }
      _objc_release(lVar14);
      uVar4 = param_1;
      func_0x00010bfc1600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar4 != 0) {
        puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc();
        uVar4 = param_1;
        func_0x00010bfc1600(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bfade40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff4000();
        _objc_release(puVar7);
        _objc_release(uVar5);
        _objc_release(uVar4);
      }
      uVar4 = param_1 + 0x148;
      _objc_loadWeakRetained();
      uVar5 = uVar4;
      _objc_opt_respondsToSelector();
      _objc_release(uVar4);
      if ((uVar5 & 1) != 0) {
        lVar19 = param_1 + 0x148;
        _objc_loadWeakRetained(lVar19);
        func_0x00010bf265e0();
        _objc_release(lVar19);
      }
      puStack_4a8 = &uStack_4b0;
      uStack_4b0 = 0;
      uStack_4a0 = 0x3032000000;
      pcStack_498 = FUN_107f755b4;
      uStack_490 = 0x107f755c4;
      uStack_488 = 0;
      lVar19 = param_1 + 0x200;
      _objc_loadWeakRetained(lVar19);
      _objc_retain(puVar8);
      func_0x00010c0f8c20(lVar19);
      _objc_release(lVar19);
      lVar19 = param_1 + 0x148;
      _objc_loadWeakRetained(lVar19);
      func_0x00010c111080();
      _objc_release(lVar19);
      func_0x00010be112a0(param_1);
      _objc_release(puVar8);
      __Block_object_dispose(&uStack_4b0,8);
      _objc_release(uStack_488);
      _objc_release(puVar9);
    }
    _objc_release(uStack_378);
    _objc_release(puStack_380);
    _objc_release(uStack_390);
    _objc_release(lStack_398);
    _objc_release(uVar11);
    _objc_release(lVar1);
    _objc_release(puVar8);
    __Block_object_dispose(&uStack_310,8);
    _objc_release(puStack_2e8);
    __Block_object_dispose(&uStack_2e0,8);
    _objc_release(puStack_2b8);
    __Block_object_dispose(&uStack_2b0,8);
    _objc_release(puStack_288);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_310,8);
  __Block_object_dispose(&uStack_2e0,8);
  __Block_object_dispose(&uStack_2b0,8);
  __Unwind_Resume(param_3);
code_r0x00010c0e00e0:
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107f77258; end: 107f7726b;  */

void FUN_107f77258(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_objectForKeyedSubscript__112615a50,PTR_PTR_11329cf60);
  return;
}



/* Entry: 107f7726c; end: 107f77287;  */

uint FUN_107f7726c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c06c000(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 107f77288; end: 107f773af;  */

void FUN_107f77288(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(*(undefined8 *)(param_1 + 0x38));
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar3);
  func_0x00010c0bd220(param_2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f773b0; end: 107f778a7;  */

void FUN_107f773b0(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c119e40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010bf97a60();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_2;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c119e40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  if ((int)puVar7 == 1) {
    puVar6 = puVar3;
    func_0x00010bf412c0();
    func_0x000107f7ba84();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      puVar7 = *(undefined **)(param_1 + 0x20);
      func_0x00010c1038a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar6);
      puVar7 = puVar6;
    }
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (puVar7 == (undefined *)0x0) goto LAB_107f77808;
    if (((*(byte *)(param_1 + 0x58) & 1) == 0) && (*(char *)(param_1 + 0x59) != '\x01')) {
      uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
      puVar1 = PTR_PTR_1126d8848;
      _objc_alloc(PTR_PTR_1126d8848);
      func_0x00010c01b340();
      func_0x00010befa120(uVar8);
      _objc_release(puVar1);
    }
    else {
      func_0x00010bdc6500(PTR_PTR_1126b62b0);
    }
  }
  else {
    puVar7 = puVar3;
    func_0x00010bf97a60();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((int)puVar7 == 2) {
      uVar4 = *(ulong *)(param_1 + 0x30);
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c22eea0();
      _objc_release(uVar4);
      if ((uVar5 & 1) != 0) goto LAB_107f77808;
      puVar1 = param_2;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c119e40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c247520();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c0d12c0();
      FUN_107f7bacc();
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 == (undefined *)0x0) {
        puVar7 = *(undefined **)(param_1 + 0x38);
        func_0x00010c1038a0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar6);
        puVar7 = puVar6;
      }
      _objc_release(puVar6);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      if (puVar7 == (undefined *)0x0) goto LAB_107f77808;
      uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
      puVar1 = PTR_PTR_1126d8848;
      _objc_alloc(PTR_PTR_1126d8848);
      func_0x00010c01b340();
      func_0x00010befa120(uVar8);
      _objc_release(puVar1);
    }
    else {
      puVar1 = param_2;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c119e40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c247520();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010bf97a60();
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      if ((int)puVar7 == 6) {
        uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
        puVar7 = PTR_PTR_1126d8848;
        _objc_alloc(PTR_PTR_1126d8848);
        func_0x00010c01b340();
      }
      else {
        puVar1 = param_2;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010c119e40();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c247520();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010bf97a60();
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar1);
        if ((int)puVar7 == 5) {
          func_0x00010bdc8f00(*(undefined8 *)(param_1 + 0x30));
          goto LAB_107f77808;
        }
        puVar1 = param_2;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010bfad780();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bfadea0();
        _objc_release(puVar2);
        _objc_release(puVar1);
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (puVar3 == (undefined *)0x0) goto LAB_107f77808;
        puVar1 = param_2;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010bfad780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfadea0();
        func_0x00010c14de00(puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(puVar1);
        uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
        puVar1 = PTR_PTR_1126d8848;
        _objc_alloc(PTR_PTR_1126d8848);
        func_0x00010c01b340();
        func_0x00010befa120(uVar8);
        _objc_release(puVar1);
        uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28);
      }
      func_0x00010befa120(uVar8);
    }
  }
  _objc_release(puVar7);
LAB_107f77808:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f778a8; end: 107f77a0b;  */

void FUN_107f778a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  
  _objc_retain(param_2);
  iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((iVar4 == 0) || (*(char *)(param_1 + 0x40) != '\x01')) {
    func_0x00010c0c6c60();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c27e7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0764e0();
    _objc_release(uVar2);
    if ((int)uVar1 != 0) {
      uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
      puVar3 = PTR_PTR_1126d8848;
      _objc_alloc(PTR_PTR_1126d8848);
      uVar1 = param_2;
      func_0x00010c094540(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b340(puVar3);
      func_0x00010befa120(uVar2);
      _objc_release(puVar3);
      _objc_release(uVar1);
      func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
    }
  }
  else {
    func_0x00010bdc8f00(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f77a0c; end: 107f77adf;  */

void FUN_107f77a0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x00010be92c40(*(undefined8 *)(param_1 + 0x20),param_2,
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),
                      *(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be641a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar1;
  _objc_release(uVar4);
  func_0x00010bdc7dc0(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(long *)(param_1 + 0x20) + 0x148;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    lVar5 = *(long *)(param_1 + 0x20) + 0x148;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c13c3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar5);
    return;
  }
  return;
}



/* Entry: 107f77ae0; end: 107f77bcb; -[SCPreviewDefaultFilterDataProviderImpl _addVenueFilterIfNeededToPreviewItems:] */

void FUN_107f77ae0(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010beb25a0();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126d8848;
    _objc_alloc(PTR_PTR_1126d8848);
    func_0x00010c01b340();
    func_0x00010befa120(param_3,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126d8848;
    _objc_alloc(PTR_PTR_1126d8848);
    func_0x00010c01b340();
    func_0x00010befa120(param_3,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126d8848;
    _objc_alloc(PTR_PTR_1126d8848);
    func_0x00010c01b340();
    func_0x00010befa120(param_3,param_2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f77bcc; end: 107f77c9f; +[SCPreviewDefaultFilterDataProviderImpl _addColorLensWithName:ucoDataStore:previewItems:ucoLenses:] */

void FUN_107f77bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c104640(param_4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126d8848;
    _objc_alloc(PTR_PTR_1126d8848);
    func_0x00010c01b340();
    func_0x00010befa120(param_5,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010befa120(param_6,param_2,param_4);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107f77ca0; end: 107f77e0f; -[SCPreviewDefaultFilterDataProviderImpl _fetchFilters:] */

void FUN_107f77ca0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0xd8));
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    _objc_initWeak(auStack_58,param_1);
    puVar3 = PTR_PTR_1126b2718;
    _objc_alloc();
    func_0x00010c0044c0();
    uVar1 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined **)(param_1 + 0xd8) = puVar3;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0xd8);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107f77e10;
    puStack_68 = &UNK_110a152f0;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_copyWeak(auStack_88,auStack_58);
    func_0x00010bfa7620(uVar1);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107f77e10; end: 107f77fbf;  */

void FUN_107f77e10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    iVar5 = (int)*(undefined8 *)(param_1 + 0xe0);
    uVar1 = param_2;
    func_0x00010bfadea0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(uVar1);
    if ((iVar5 != 0) && (uVar1 = param_2, func_0x00010c07bc80(), (int)uVar1 != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x70);
      uVar1 = param_2;
      func_0x00010bfadea0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar6);
      _objc_release(uVar1);
      uVar6 = *(undefined8 *)(param_1 + 0x78);
      uVar1 = param_2;
      func_0x00010bfadea0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar6);
      _objc_release(uVar1);
      lVar2 = param_1 + 0x148;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c110f40();
      _objc_release(lVar2);
      uVar3 = param_1 + 0x148;
      _objc_loadWeakRetained();
      uVar4 = uVar3;
      _objc_opt_respondsToSelector();
      _objc_release(uVar3);
      if ((uVar4 & 1) != 0) {
        lVar2 = param_1 + 0x148;
        _objc_loadWeakRetained(lVar2);
        uVar6 = *(undefined8 *)(param_1 + 0x68);
        uVar1 = param_2;
        func_0x00010bfadea0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c110f60(lVar2);
        _objc_release(uVar6);
        _objc_release(uVar1);
        _objc_release(lVar2);
      }
    }
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f77fc0; end: 107f78013;  */

void FUN_107f77fc0(long param_1,undefined8 param_2,ulong param_3)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_3 & 1) == 0) && (param_1 != 0)) {
    func_0x00010bfa7600(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f78014; end: 107f78073; -[SCPreviewDefaultFilterDataProviderImpl _notFetchedFiltersFromFilters:] */

void FUN_107f78014(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107f78074;
  puStack_20 = &UNK_110861678;
  uStack_18 = param_1;
  func_0x00010bfaea20(param_3,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f78074; end: 107f780d3;  */

bool FUN_107f78074(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010bfadea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_2);
  return lVar1 == 0;
}



/* Entry: 107f780d4; end: 107f780db; -[SCPreviewDefaultFilterDataProviderImpl shouldAddReverseMotionFilter] */

undefined1 FUN_107f780d4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf8);
}



/* Entry: 107f780dc; end: 107f78417; -[SCPreviewDefaultFilterDataProviderImpl _resetFiltersWithFilterInfoList:backfillFilters:] */

void FUN_107f780dc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_148;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar11 = param_1 + 0x148;
  _objc_loadWeakRetained(lVar11);
  func_0x00010c256660();
  _objc_release(lVar11);
  lVar11 = param_1 + 0x200;
  _objc_loadWeakRetained(lVar11);
  func_0x00010bf3a840();
  _objc_release(lVar11);
  lVar11 = param_1 + 0x200;
  _objc_loadWeakRetained(lVar11);
  func_0x00010c19c1e0();
  _objc_release(lVar11);
  lStack_148 = param_3;
  func_0x00010beade00(param_1,param_2,param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_138 = puVar2;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_140 = puVar3;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_4);
  lVar11 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar11 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_4);
        }
        uVar12 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        uVar8 = uVar12;
        func_0x00010bfadea0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2,param_2,uVar12,uVar8);
        _objc_release(uVar8);
        lVar13 = *(long *)(param_1 + 0x70);
        uVar8 = uVar12;
        func_0x00010bfadea0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(lVar13,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar8);
        if (lVar13 != 0) {
          uVar14 = *(undefined8 *)(param_1 + 0x70);
          uVar8 = uVar12;
          func_0x00010bfadea0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0(uVar14,param_2,uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar12;
          func_0x00010bfadea0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puStack_138,param_2,uVar14,uVar4);
          _objc_release(uVar4);
          _objc_release(uVar14);
          _objc_release(uVar8);
          uVar8 = uVar12;
          func_0x00010bf068c0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfadea0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puStack_140,param_2,uVar8,uVar12);
          _objc_release(uVar12);
          _objc_release(uVar8);
        }
        lVar10 = lVar10 + 1;
      } while (lVar11 != lVar10);
      lVar11 = param_4;
      func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar11 != 0);
  }
  _objc_release(param_4);
  puVar1 = puStack_138;
  uVar8 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puStack_138;
  _objc_retain(puStack_138);
  _objc_release(uVar8);
  puVar3 = puStack_140;
  uVar8 = *(undefined8 *)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x78) = puStack_140;
  _objc_retain(puStack_140);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar2;
  _objc_release(uVar8);
  _objc_release(puVar3);
  _objc_release(puVar1);
  lVar11 = param_1 + 0x148;
  _objc_loadWeakRetained();
  func_0x00010c110f40();
  _objc_release(lVar11);
  _objc_release(param_4);
  lVar9 = lStack_148;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_260;
  puStack_180 = puVar3;
  puStack_170 = puVar1;
  pcStack_158 = FUN_107f78418;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lVar10 = lVar9 + 0x200;
  puStack_190 = puVar2;
  lStack_188 = param_4;
  lStack_178 = param_1;
  lStack_168 = lVar11;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bfae8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar11;
  func_0x00010c2a0440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar10);
  lVar5 = lVar13;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar11 = *plStack_250;
    do {
      lVar10 = 0;
      do {
        if (*plStack_250 != lVar11) {
          _objc_enumerationMutation(lVar13);
        }
        func_0x00010bdc64e0(lVar9,param_2,*(undefined8 *)(lStack_258 + lVar10 * 8));
        lVar10 = lVar10 + 1;
      } while (lVar5 != lVar10);
      lVar5 = lVar13;
      puVar6 = &uStack_260;
      func_0x00010bf52a60();
      lVar10 = 0;
    } while (lVar5 != 0);
  }
  lVar5 = lVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_107f78540;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_290 = lVar11;
  lStack_288 = lVar10;
  lStack_280 = lVar13;
  lStack_278 = lVar9;
  ppuStack_270 = &puStack_160;
  _objc_retain(puVar6);
  lVar5 = lVar5 + 0x200;
  _objc_loadWeakRetained();
  ppuStack_2a8 = &PTR____CFConstantStringClassReference_110f277f8;
  ppuStack_2a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cd270;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_2a0,&ppuStack_2a8,1
                     );
  _objc_retainAutoreleasedReturnValue();
  puVar7 = (undefined1 *)puVar6;
  func_0x00010befa420(lVar5,param_2,puVar6,puVar2,6);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  lVar11 = lVar5 + 0x200;
  _objc_loadWeakRetained(lVar11);
  uVar8 = *(undefined8 *)(lVar5 + 0xf0);
  func_0x00010c0e00e0(uVar8,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa420(lVar11,param_2,puVar7,uVar8,3);
  _objc_release(puVar7);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar11);
  return;
}



/* Entry: 107f78418; end: 107f7853f; -[SCPreviewDefaultFilterDataProviderImpl _addColorFilters] */

void FUN_107f78418(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
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
  
  puVar5 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar8 = param_1 + 0x200;
  _objc_loadWeakRetained();
  lVar7 = lVar8;
  func_0x00010bfae8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010c2a0440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar8);
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_100;
    do {
      lVar8 = 0;
      do {
        if (*plStack_100 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010bdc64e0(param_1,param_2,*(undefined8 *)(lStack_108 + lVar8 * 8));
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      puVar5 = &uStack_110;
      func_0x00010bf52a60();
      lVar8 = 0;
    } while (lVar2 != 0);
  }
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_107f78540;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_140 = lVar7;
  lStack_138 = lVar8;
  lStack_130 = lVar1;
  lStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  lVar2 = lVar2 + 0x200;
  _objc_loadWeakRetained();
  ppuStack_158 = &PTR____CFConstantStringClassReference_110f277f8;
  ppuStack_150 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cd270;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_150,&ppuStack_158,1
                     );
  _objc_retainAutoreleasedReturnValue();
  puVar6 = (undefined1 *)puVar5;
  func_0x00010befa420(lVar2,param_2,puVar5,puVar3,6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  lVar8 = lVar2 + 0x200;
  _objc_loadWeakRetained(lVar8);
  uVar4 = *(undefined8 *)(lVar2 + 0xf0);
  func_0x00010c0e00e0(uVar4,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa420(lVar8,param_2,puVar6,uVar4,3);
  _objc_release(puVar6);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 107f78540; end: 107f78617; -[SCPreviewDefaultFilterDataProviderImpl _addColorFilterWithName:] */

void FUN_107f78540(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  param_1 = param_1 + 0x200;
  _objc_loadWeakRetained();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f277f8;
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cd270;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010befa420(param_1,param_2,param_3,puVar1,6);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar4);
  lVar2 = param_1 + 0x200;
  _objc_loadWeakRetained(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c0e00e0(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa420(lVar2,param_2,uVar4,uVar3,3);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107f78618; end: 107f78693; -[SCPreviewDefaultFilterDataProviderImpl _addSpeedMotionFilterWithName:] */

void FUN_107f78618(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x200;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c0e00e0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa420(lVar1,param_2,param_3,uVar2,3);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f78694; end: 107f78873; -[SCPreviewDefaultFilterDataProviderImpl _addPlaceholdersForGeoFilters:filterItems:] */

void FUN_107f78694(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c0ba200();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      uVar3 = uVar7;
      func_0x00010bfe5d80(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010bf4b900();
      _objc_release(uVar3);
      puVar5 = PTR_PTR_1126b38b8;
      if ((int)uVar4 != 0) {
        func_0x00010bfe5d80(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe5de0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        func_0x00010c27dd80();
        func_0x00010bdc7da0(param_1);
        _objc_release(puVar5);
      }
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfadeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_filterId_1125c9150);
  return;
}



/* Entry: 107f78874; end: 107f7887b;  */

void FUN_107f78874(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfadeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_filterId_1125c9150);
  return;
}



/* Entry: 107f7887c; end: 107f7895b; -[SCPreviewDefaultFilterDataProviderImpl _addPlaceholderWithFilterName:type:] */

void FUN_107f7887c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  param_1 = param_1 + 0x200;
  _objc_loadWeakRetained();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010befa420(param_1);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar5);
  *(undefined1 *)(param_1 + 0xf8) = 0;
  lVar12 = lVar5;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  do {
    if (lVar12 == 0) {
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
        return;
      }
      ___stack_chk_fail();
      uVar6 = *(undefined8 *)(lVar5 + 0x68);
      func_0x00010bf00d20(uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar5;
      func_0x00010be641a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      lVar7 = lVar12;
      func_0x00010bf529e0();
      if (lVar7 != 0) {
        if (lRam0000000113728958 != -1) {
          func_0x00010002a2fc(0x113728958,&PTR___NSConcreteGlobalBlock_110a15620);
        }
        if ((bRam0000000113728950 & 1) == 0) {
          lVar7 = lVar5 + 0x148;
          _objc_loadWeakRetained(lVar7);
          func_0x00010c256660();
          _objc_release(lVar7);
        }
        lVar7 = lVar5 + 0x200;
        _objc_loadWeakRetained(lVar7);
        func_0x00010c0f8c20();
        _objc_release(lVar7);
      }
      uVar6 = *(undefined8 *)(lVar5 + 0x70);
      func_0x00010c086e80(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      _objc_release(uVar6);
      puVar1 = PTR_PTR_1126bcff8;
      func_0x00010bfc17c0(PTR_PTR_1126bcff8);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar1;
      func_0x00010c2ac460(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar9);
      func_0x00010b256a70();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar1;
      func_0x00010c281040();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(puVar11);
      _objc_release(puVar1);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar10);
      lVar7 = lVar5 + 0x148;
      _objc_loadWeakRetained(lVar7);
      func_0x00010c110ec0();
      _objc_release(lVar7);
      lVar5 = lVar5 + 0x148;
      _objc_loadWeakRetained(lVar5);
      func_0x00010c110ea0();
      _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar12);
      return;
    }
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(lVar5);
      }
      lVar15 = *(long *)(lVar14 * 8);
      lVar2 = lVar15;
      func_0x00010c27dd80();
      if (lVar2 == 1) {
        func_0x00010bfe5d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc64e0(param_1);
        lVar2 = lVar15;
        goto LAB_107f78a38;
      }
      lVar2 = lVar15;
      func_0x00010c27dd80();
      if (lVar2 == 6) {
        func_0x00010bdc8740(param_1);
      }
      else {
        lVar2 = lVar15;
        func_0x00010c27dd80();
        if (lVar2 == 5) {
          lVar2 = lVar15;
          func_0x00010bfe5d80();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar2;
          func_0x00010c0720c0();
          _objc_release(lVar2);
          if ((int)lVar16 != 0) {
            func_0x00010bfe5d80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdc7da0(param_1);
            _objc_release(lVar15);
            func_0x00010bdd0d80(param_1);
            goto LAB_107f78bdc;
          }
        }
        lVar2 = lVar15;
        func_0x00010c27dd80();
        if (lVar2 == 2) {
          lVar16 = *(long *)(param_1 + 0xf0);
          lVar2 = lVar15;
          func_0x00010bfe5d80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar2);
          lVar2 = lVar15;
          func_0x00010bfe5d80();
          _objc_retainAutoreleasedReturnValue();
          if (lVar16 == 0) {
            lVar16 = param_1;
            func_0x00010c1400e0();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar16;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar2;
            func_0x00010c0720c0();
            if ((int)lVar4 != 0) {
              lVar4 = param_1;
              func_0x00010bdda220();
              _objc_release(lVar3);
              _objc_release(lVar16);
              _objc_release(lVar2);
              if ((int)lVar4 != 0) {
                func_0x00010bfe5d80();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bdc7da0(param_1);
                _objc_release(lVar15);
                *(undefined1 *)(param_1 + 0xf8) = 1;
              }
              goto LAB_107f78bdc;
            }
            _objc_release(lVar3);
            _objc_release(lVar16);
          }
          else {
            func_0x00010bdc85a0();
          }
LAB_107f78a38:
          _objc_release(lVar2);
        }
      }
LAB_107f78bdc:
      lVar14 = lVar14 + 1;
    } while (lVar12 != lVar14);
    lVar12 = lVar5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107f7895c; end: 107f78c63; -[SCPreviewDefaultFilterDataProviderImpl _setupLocalFiltersWithItems:] */

void FUN_107f7895c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0xf8) = 0;
  lVar1 = param_3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  do {
    if (lVar1 == 0) {
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        return;
      }
      ___stack_chk_fail();
      uVar5 = *(undefined8 *)(param_3 + 0x68);
      func_0x00010bf00d20(uVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010be641a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      lVar6 = lVar1;
      func_0x00010bf529e0();
      if (lVar6 != 0) {
        if (lRam0000000113728958 != -1) {
          func_0x00010002a2fc(0x113728958,&PTR___NSConcreteGlobalBlock_110a15620);
        }
        if ((bRam0000000113728950 & 1) == 0) {
          lVar6 = param_3 + 0x148;
          _objc_loadWeakRetained(lVar6);
          func_0x00010c256660();
          _objc_release(lVar6);
        }
        lVar6 = param_3 + 0x200;
        _objc_loadWeakRetained(lVar6);
        func_0x00010c0f8c20();
        _objc_release(lVar6);
      }
      uVar5 = *(undefined8 *)(param_3 + 0x70);
      func_0x00010c086e80(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      _objc_release(uVar5);
      puVar7 = PTR_PTR_1126bcff8;
      func_0x00010bfc17c0(PTR_PTR_1126bcff8);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar7;
      func_0x00010c2ac460(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar9);
      func_0x00010b256a70();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar7;
      func_0x00010c281040();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(puVar11);
      _objc_release(puVar7);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar10);
      lVar6 = param_3 + 0x148;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c110ec0();
      _objc_release(lVar6);
      param_3 = param_3 + 0x148;
      _objc_loadWeakRetained(param_3);
      func_0x00010c110ea0();
      _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_3);
      }
      lVar14 = *(long *)(lVar13 * 8);
      lVar2 = lVar14;
      func_0x00010c27dd80();
      if (lVar2 == 1) {
        func_0x00010bfe5d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc64e0(param_1);
        lVar2 = lVar14;
        goto LAB_107f78a38;
      }
      lVar2 = lVar14;
      func_0x00010c27dd80();
      if (lVar2 == 6) {
        func_0x00010bdc8740(param_1);
      }
      else {
        lVar2 = lVar14;
        func_0x00010c27dd80();
        if (lVar2 == 5) {
          lVar2 = lVar14;
          func_0x00010bfe5d80();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar2;
          func_0x00010c0720c0();
          _objc_release(lVar2);
          if ((int)lVar15 != 0) {
            func_0x00010bfe5d80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdc7da0(param_1);
            _objc_release(lVar14);
            func_0x00010bdd0d80(param_1);
            goto LAB_107f78bdc;
          }
        }
        lVar2 = lVar14;
        func_0x00010c27dd80();
        if (lVar2 == 2) {
          lVar15 = *(long *)(param_1 + 0xf0);
          lVar2 = lVar14;
          func_0x00010bfe5d80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar2);
          lVar2 = lVar14;
          func_0x00010bfe5d80();
          _objc_retainAutoreleasedReturnValue();
          if (lVar15 == 0) {
            lVar15 = param_1;
            func_0x00010c1400e0();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar15;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar2;
            func_0x00010c0720c0();
            if ((int)lVar4 != 0) {
              lVar4 = param_1;
              func_0x00010bdda220();
              _objc_release(lVar3);
              _objc_release(lVar15);
              _objc_release(lVar2);
              if ((int)lVar4 != 0) {
                func_0x00010bfe5d80();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bdc7da0(param_1);
                _objc_release(lVar14);
                *(undefined1 *)(param_1 + 0xf8) = 1;
              }
              goto LAB_107f78bdc;
            }
            _objc_release(lVar3);
            _objc_release(lVar15);
          }
          else {
            func_0x00010bdc85a0();
          }
LAB_107f78a38:
          _objc_release(lVar2);
        }
      }
LAB_107f78bdc:
      lVar13 = lVar13 + 1;
    } while (lVar1 != lVar13);
    lVar1 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107f78c64; end: 107f78ec3; -[SCPreviewDefaultFilterDataProviderImpl fetchGeoFilterImagesFinished:cancelled:sponsoredFilterStartCount:] */

void FUN_107f78c64(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be641a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    if (lRam0000000113728958 != -1) {
      func_0x00010002a2fc(0x113728958,&PTR___NSConcreteGlobalBlock_110a15620);
    }
    if ((bRam0000000113728950 & 1) == 0) {
      lVar3 = param_1 + 0x148;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c256660();
      _objc_release(lVar3);
    }
    lVar3 = param_1 + 0x200;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c0f8c20();
    _objc_release(lVar3);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c086e80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126bcff8;
  func_0x00010bfc17c0(PTR_PTR_1126bcff8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c2ac460(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar6);
  func_0x00010b256a70();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x00010c281040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar7);
  lVar3 = param_1 + 0x148;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c110ec0();
  _objc_release(lVar3);
  param_1 = param_1 + 0x148;
  _objc_loadWeakRetained(param_1);
  func_0x00010c110ea0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107f78ec4; end: 107f79033;  */

undefined1 * FUN_107f78ec4(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar6 = *(undefined1 **)(param_1 + 0x20);
  _objc_retain(puVar6);
  puVar1 = puVar6;
  func_0x00010bf52a60(puVar6,param_2,&uStack_130,auStack_e8,0x10);
  if (puVar1 != (undefined1 *)0x0) {
    lVar7 = *plStack_120;
    do {
      puVar8 = (undefined1 *)0x0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(puVar6);
        }
        puVar3 = PTR_PTR_1126b38b8;
        uVar2 = *(undefined8 *)(lStack_128 + (long)puVar8 * 8);
        func_0x00010bfadea0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe5de0(puVar3,param_2,&PTR____CFConstantStringClassReference_110f273f8,uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        lVar4 = *(long *)(param_1 + 0x28) + 0x200;
        _objc_loadWeakRetained(lVar4);
        func_0x00010c12c6e0();
        _objc_release(lVar4);
        _objc_release(puVar3);
        puVar8 = puVar8 + 1;
      } while (puVar1 != puVar8);
      puVar1 = puVar6;
      puVar5 = &uStack_130;
      func_0x00010bf52a60(puVar6,param_2,&uStack_130,auStack_e8,0x10);
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x00010c09d160(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined1 *)puVar5;
  func_0x00010c07f200();
  _objc_release(puVar5);
  return puVar1;
}



/* Entry: 107f79034; end: 107f79073;  */

undefined8 FUN_107f79034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c09d160(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c07f200();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107f79074; end: 107f7913b; -[SCPreviewDefaultFilterDataProviderImpl _currentContextualInfo] */

void FUN_107f79074(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 0x1e0);
  if (lVar1 == 0) {
    uVar6 = 0;
    lVar1 = 0;
  }
  else {
    func_0x00010c0c6c60();
    uVar2 = *(ulong *)(param_1 + 0x1e0);
    func_0x00010c078060();
    if ((uVar2 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x1e0);
      func_0x00010bf291e0(uVar6);
    }
    else {
      uVar6 = 3;
    }
  }
  puVar3 = PTR_PTR_1126d8858;
  func_0x00010bf4f140(PTR_PTR_1126d8858,param_2,*(undefined8 *)(param_1 + 0x18));
  puVar5 = PTR_PTR_1126d8860;
  uVar4 = *(undefined8 *)(param_1 + 0x1e0);
  func_0x00010c105ca0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4f840(puVar5,param_2,lVar1,uVar6,puVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107f7913c; end: 107f7929b; -[SCPreviewDefaultFilterDataProviderImpl _attemptStartUpdatingVenueData] */

void FUN_107f7913c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x1c8) != 0) {
    param_1 = param_1 + 0x148;
    _objc_loadWeakRetained(param_1);
    func_0x00010c110f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  lVar1 = param_1;
  func_0x00010beb25a0();
  if ((int)lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0xb8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf10fa0();
    _objc_release(lVar3);
    if (lVar1 == 1) {
      puVar4 = auStack_38;
      _objc_loadWeakRetained(puVar4);
      func_0x00010be32f20();
      _objc_release(puVar4);
    }
    else {
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010bfa8200(uVar2);
      _objc_destroyWeak(auStack_40);
    }
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 107f7929c; end: 107f792cf;  */

void FUN_107f7929c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f792d0; end: 107f793cb; -[SCPreviewDefaultFilterDataProviderImpl _handleVenueDataUpdateAfterLocationPermissionFetch:] */

void FUN_107f792d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (param_3 == 1) {
    lVar1 = *(long *)(param_1 + 0xb8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c09eaa0();
    _objc_release(lVar1);
    if (lVar2 != 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bec1f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startUpdatingVenueData_11258e180);
      return;
    }
    lVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c111000();
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126d8818;
    _objc_alloc();
    func_0x00010c04f9a0();
    uVar4 = *(undefined8 *)(param_1 + 0x178);
    *(undefined **)(param_1 + 0x178) = puVar3;
    _objc_release(uVar4);
    func_0x00010c216880(*(undefined8 *)(param_1 + 0x178));
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c110fa0();
  }
  else {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c111020();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f793cc; end: 107f794e7; -[SCPreviewDefaultFilterDataProviderImpl _attemptStartUpdatingVenueStickerData] */

void FUN_107f793cc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = param_1;
  func_0x00010beb4a40();
  if ((int)lVar1 == 0) {
    _objc_initWeak(auStack_28,param_1);
    lVar2 = *(long *)(param_1 + 0xb8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf10fa0();
    if (lVar1 == 1) {
      puVar3 = auStack_28;
      _objc_loadWeakRetained(puVar3);
      func_0x00010be32f40();
      _objc_release(puVar3);
    }
    else {
      _objc_copyWeak(auStack_30,auStack_28);
      func_0x00010bfa8200(lVar2);
      _objc_destroyWeak(auStack_30);
    }
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_28);
  }
  else if (*(long *)(param_1 + 0x218) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec1fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startUpdatingVenueStickerData_11258e198);
    return;
  }
  return;
}



/* Entry: 107f794e8; end: 107f7951b;  */

void FUN_107f794e8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f7951c; end: 107f795eb; -[SCPreviewDefaultFilterDataProviderImpl _handleVenueStickerUpdateAfterLocationPermissionFetch:] */

void FUN_107f7951c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_3 != 1) {
    return;
  }
  if (*(long *)(param_1 + 0x178) == 0) {
    puVar1 = PTR_PTR_1126d8818;
    _objc_alloc();
    func_0x00010c04f9a0();
    uVar4 = *(undefined8 *)(param_1 + 0x178);
    *(undefined **)(param_1 + 0x178) = puVar1;
    _objc_release(uVar4);
  }
  lVar2 = *(long *)(param_1 + 0xb8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c09eaa0();
  _objc_release(lVar2);
  if (lVar3 == 1) {
    func_0x00010c216880(*(undefined8 *)(param_1 + 0x178));
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c110fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec1fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startUpdatingVenueStickerData_11258e198);
  return;
}



/* Entry: 107f795ec; end: 107f797d3; -[SCPreviewDefaultFilterDataProviderImpl _startUpdatingVenueStickerData] */

void FUN_107f795ec(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_2 + 0x88) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c26f380();
    _objc_release(puVar1);
    if (param_1 <= 60.0) {
      if (*(long *)(param_2 + 0x178) == 0) {
        return;
      }
      param_2 = param_2 + 0x148;
      _objc_loadWeakRetained(param_2);
      func_0x00010c110fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  *(undefined **)(param_2 + 0x88) = puVar1;
  _objc_release(uVar3);
  lVar2 = *(long *)(param_2 + 0x178);
  if (lVar2 == 0) {
    puVar1 = PTR_PTR_1126d8818;
    _objc_alloc();
    func_0x00010c04f9a0();
    uVar3 = *(undefined8 *)(param_2 + 0x178);
    *(undefined **)(param_2 + 0x178) = puVar1;
    _objc_release(uVar3);
    lVar2 = *(long *)(param_2 + 0x178);
  }
  func_0x00010bf183a0(lVar2);
  lVar2 = param_2 + 0x148;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c110fa0();
  _objc_release(lVar2);
  _objc_initWeak(auStack_48,param_2);
  lVar2 = param_2;
  func_0x00010be627c0();
  if ((int)lVar2 == 0) {
    func_0x00010be04100(param_2);
  }
  else {
    func_0x00010bdf6c80(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    lVar2 = param_2;
    func_0x00010c25ff60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar2);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_50);
  }
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107f797d4; end: 107f797ff;  */

void FUN_107f797d4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be04100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f79800; end: 107f7996f; -[SCPreviewDefaultFilterDataProviderImpl _dispatchVenueStickerFetchOnIdle] */

void FUN_107f79800(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126b6ae8;
  func_0x00010c22ba80(PTR_PTR_1126b6ae8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae960;
  puVar2 = PTR_PTR_1126c49a0;
  func_0x00010c28bd00(PTR_PTR_1126c49a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c110380(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae970;
  func_0x00010bfe2ec0(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c2a14e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107f79970; end: 107f799a3;  */

void FUN_107f79970(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c251640(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f799a4; end: 107f79b5f; -[SCPreviewDefaultFilterDataProviderImpl _startUpdatingVenueData] */

void FUN_107f799a4(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_2 + 0x80) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c26f380();
    _objc_release(puVar1);
    if (param_1 <= 60.0) {
      if (*(long *)(param_2 + 0x178) != 0) {
        lVar2 = param_2 + 0x148;
        _objc_loadWeakRetained(lVar2);
        func_0x00010c110fa0();
        _objc_release(lVar2);
      }
      if (*(long *)(param_2 + 0x1c8) == 0) {
        return;
      }
      param_2 = param_2 + 0x148;
      _objc_loadWeakRetained(param_2);
      func_0x00010c110f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_2 + 0x80);
  *(undefined **)(param_2 + 0x80) = puVar1;
  _objc_release(uVar3);
  _objc_initWeak(auStack_48,param_2);
  lVar2 = param_2;
  func_0x00010be627c0();
  if ((int)lVar2 == 0) {
    func_0x00010bee3280(param_2);
  }
  else {
    func_0x00010bdf6c80(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    lVar2 = param_2;
    func_0x00010c25ff60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar2);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_50);
  }
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107f79b60; end: 107f79b8b;  */

void FUN_107f79b60(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f79b8c; end: 107f79beb; -[SCPreviewDefaultFilterDataProviderImpl _needsRetrieveLocation] */

bool FUN_107f79b8c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x218) == 0) {
    lVar2 = *(long *)(param_1 + 0xc0);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 == 0;
    _objc_release();
    _objc_release(lVar2);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 107f79bec; end: 107f79c0f; -[SCPreviewDefaultFilterDataProviderImpl _updateVenueAndStickerMetadata] */

void FUN_107f79bec(undefined8 param_1)

{
  func_0x00010bec1f80();
                    /* WARNING: Could not recover jumptable at 0x00010bec1fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startUpdatingVenueStickerData_11258e198);
  return;
}



/* Entry: 107f79c10; end: 107f79d53; -[SCPreviewDefaultFilterDataProviderImpl _startUpdatingVenueFilter] */

void FUN_107f79c10(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x218);
  lVar3 = lVar4;
  if (lVar4 == 0) {
    unaff_x20 = *(long *)(param_1 + 0xc0);
    func_0x00010c269d40(unaff_x20);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = unaff_x20;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107f79d54;
  puStack_58 = &UNK_110a15550;
  _objc_copyWeak(auStack_50,auStack_48);
  puVar1 = PTR___dispatch_main_q_11034be20;
  _objc_retain(PTR___dispatch_main_q_11034be20);
  func_0x000108d11a58(uVar2,1,lVar3,&puStack_70,puVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  if (lVar4 == 0) {
    _objc_release(lVar3);
    _objc_release(unaff_x20);
  }
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}


