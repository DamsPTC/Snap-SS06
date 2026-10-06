/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6f71b8; end: 10b6f71bf; -[SCGallerySnapTransientState bgMediaUploadState] */

undefined4 FUN_10b6f71b8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b6f71c0; end: 10b6f71c7; -[SCGallerySnapTransientState snapId] */

undefined8 FUN_10b6f71c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6f71c8; end: 10b6f7203; -[SCGallerySnapTransientState .cxx_destruct] */

void FUN_10b6f71c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6f7204; end: 10b6f72ef; +[SCGallerySnapTransientStateBuilder withGallerySnapTransientState:] */

void FUN_10b6f7204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126e05b8;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf19aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf19ac0();
  *(int *)(puVar1 + 0x18) = (int)uVar2;
  uVar2 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x20);
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6f72f0; end: 10b6f7327; -[SCGallerySnapTransientStateBuilder build] */

void FUN_10b6f72f0(void)

{
  _objc_alloc(PTR_PTR_1126bc810);
  func_0x00010c030820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6f7328; end: 10b6f735f; -[SCGallerySnapTransientStateBuilder setObjectID:] */

long FUN_10b6f7328(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b6f7360; end: 10b6f7397; -[SCGallerySnapTransientStateBuilder setBgMediaUploadKey:] */

long FUN_10b6f7360(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b6f7398; end: 10b6f739f; -[SCGallerySnapTransientStateBuilder setBgMediaUploadState:] */

void FUN_10b6f7398(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b6f73a0; end: 10b6f73d7; -[SCGallerySnapTransientStateBuilder setSnapId:] */

long FUN_10b6f73a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b6f73d8; end: 10b6f7413; -[SCGallerySnapTransientStateBuilder .cxx_destruct] */

void FUN_10b6f73d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6f7414; end: 10b6f757f; -[SCGalleryUserDefaults initWithObjectID:completedImportFromCameraRoll:didInitialCloudSync:dismissedImportButtonBelowSnaps:displayedCameraRollTabIntroPopup:displayedInitialCreateStoryPopup:displayedInitialNeedsPhotoAccessPopup:displayedPostLongVideoToStoryPopup:displayedSaveOptionPrompt:latestAckedBackupErrorTime:readFeaturedStoryIds:viewedFeaturedStoryIds:] */

undefined8 *
FUN_10b6f7414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_112709de0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined1 *)((long)puVar1 + 10) = param_6;
    *(undefined1 *)((long)puVar1 + 0xb) = param_7;
    *(undefined1 *)((long)puVar1 + 0xc) = param_8;
    *(undefined1 *)((long)puVar1 + 0xd) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0xe) = param_9._1_1_;
    *(undefined1 *)((long)puVar1 + 0xf) = param_9._2_1_;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b6f7580; end: 10b6f75a3; -[SCGalleryUserDefaults copyWithZone:] */

undefined8 FUN_10b6f7580(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6f75a4; end: 10b6f7743; -[SCGalleryUserDefaults initWithCoder:] */

undefined1 * FUN_10b6f75a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709de0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xc) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xd) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xe) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xf) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6f7744; end: 10b6f786b; -[SCGalleryUserDefaults encodeWithCoder:] */

void FUN_10b6f7744(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f71258);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f6f8f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f6f938);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110f6f978);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                      &PTR____CFConstantStringClassReference_110df3cb8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110f6f9d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xd),
                      &PTR____CFConstantStringClassReference_110f6fa18);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xe),
                      &PTR____CFConstantStringClassReference_110f6fa58);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xf),
                      &PTR____CFConstantStringClassReference_110df3cd8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f6fa98);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f6fab8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f6fad8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6f786c; end: 10b6f7873; -[SCGalleryUserDefaults preferFasterCoding] */

undefined8 FUN_10b6f786c(void)

{
  return 1;
}



/* Entry: 10b6f7874; end: 10b6f793b; -[SCGalleryUserDefaults encodeWithFasterCoder:] */

void FUN_10b6f7874(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92d80(param_3,param_2,uVar1);
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 9));
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 10));
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 0xb));
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 0xc));
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 0xd));
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 0xe));
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 0xf));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6f793c; end: 10b6f7a4f; -[SCGalleryUserDefaults decodeWithFasterDecoder:] */

void FUN_10b6f793c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf66cc0();
  *(char *)(param_1 + 8) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf66cc0();
  *(char *)(param_1 + 9) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf66cc0();
  *(char *)(param_1 + 10) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf66cc0();
  *(char *)(param_1 + 0xb) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf66cc0();
  *(char *)(param_1 + 0xc) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf66cc0();
  *(char *)(param_1 + 0xd) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf66cc0();
  *(char *)(param_1 + 0xe) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf66cc0();
  *(char *)(param_1 + 0xf) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b6f7a50; end: 10b6f7b2f; -[SCGalleryUserDefaults setObject:forUInt64Key:] */

void FUN_10b6f7a50(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 < 0x7a5d62ed8c606e) {
    if (param_4 == 0x3288efe842418) {
      lVar2 = 0x28;
    }
    else {
      if (param_4 != 0x372166c35095f9) goto LAB_10b6f7b1c;
      lVar2 = 0x20;
    }
  }
  else if (param_4 == 0x8ad0bc578d3da8) {
    lVar2 = 0x18;
  }
  else {
    if (param_4 != 0x7a5d62ed8c606e) goto LAB_10b6f7b1c;
    lVar2 = 0x10;
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
LAB_10b6f7b1c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6f7b30; end: 10b6f7c7b; -[SCGalleryUserDefaults setBool:forUInt64Key:] */

void FUN_10b6f7b30(long param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 < 0x5393fc0e54fa0f) {
    if (param_4 < 0x2cf8ced436b4f0) {
      if (param_4 == 0x99916a0f30019) {
        lVar1 = 0xe;
      }
      else {
        if (param_4 != 0x1e2d5a3110e107) {
          return;
        }
        lVar1 = 0xb;
      }
    }
    else if (param_4 == 0x2cf8ced436b4f0) {
      lVar1 = 9;
    }
    else {
      if (param_4 != 0x4d82a68c650553) {
        return;
      }
      lVar1 = 8;
    }
  }
  else if (param_4 < 0x92f466c62adfcb) {
    if (param_4 == 0x5393fc0e54fa0f) {
      lVar1 = 0xd;
    }
    else {
      if (param_4 != 0x90de033bc6b5f7) {
        return;
      }
      lVar1 = 0xf;
    }
  }
  else if (param_4 == 0x92f466c62adfcb) {
    lVar1 = 0xc;
  }
  else {
    if (param_4 != 0xed0911eca055d8) {
      return;
    }
    lVar1 = 10;
  }
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10b6f7c7c; end: 10b6f7c8f; +[SCGalleryUserDefaults fasterCodingVersion] */

undefined8 FUN_10b6f7c7c(void)

{
  return 0xe7aea5e6e9199a00;
}



/* Entry: 10b6f7c90; end: 10b6f7c9b; +[SCGalleryUserDefaults fasterCodingKeys] */

undefined8 FUN_10b6f7c90(void)

{
  return 0x1133bc2e8;
}



/* Entry: 10b6f7c9c; end: 10b6f7d93; -[SCGalleryUserDefaults isEqual:] */

bool FUN_10b6f7c9c(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bc85c34(param_1,param_3,0x1137f7dd0,0x1137f7dd8,0xc,4);
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    _objc_retain(param_3);
    if ((((*(char *)(param_3 + 8) == *(char *)(param_1 + 8)) &&
         (*(char *)(param_3 + 9) == *(char *)(param_1 + 9))) &&
        (*(char *)(param_3 + 10) == *(char *)(param_1 + 10))) &&
       (((*(char *)(param_3 + 0xb) == *(char *)(param_1 + 0xb) &&
         (*(char *)(param_3 + 0xc) == *(char *)(param_1 + 0xc))) &&
        ((*(char *)(param_3 + 0xd) == *(char *)(param_1 + 0xd) &&
         (*(char *)(param_3 + 0xe) == *(char *)(param_1 + 0xe))))))) {
      bVar1 = *(char *)(param_3 + 0xf) == *(char *)(param_1 + 0xf);
    }
    else {
      bVar1 = false;
    }
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b6f7d94; end: 10b6f7e9f; -[SCGalleryUserDefaults hash] */

undefined * FUN_10b6f7d94(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ushort uVar10;
  undefined4 uVar11;
  ulong uVar12;
  ulong auStack_88 [12];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = *(undefined **)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar11 = *(undefined4 *)(param_1 + 8);
  uVar12 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar11 >> 0x18),
                                           (uint6)(byte)((uint)uVar11 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar11) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar11 >> 8),(short)uVar12);
  uVar9 = CONCAT44((int)(uVar12 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar9 = CONCAT26((short)(uVar9 >> 0x30),CONCAT24((short)(uVar12 >> 0x20),(int)uVar9)) &
          0xff01ff01ffffffff;
  uVar10 = (ushort)(uVar9 >> 0x30);
  auStack_88[1] = (ulong)uVar1 & 0xff;
  auStack_88[2] = uVar9 >> 0x10 & 0xff;
  auStack_88[3] = (ulong)CONCAT24(uVar10,(uint)(ushort)(uVar9 >> 0x20)) & 0xffffffff;
  auStack_88[4] = (ulong)uVar10;
  uVar11 = *(undefined4 *)(param_1 + 0xc);
  uVar9 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar11 >> 0x18),
                                          (uint6)(byte)((uint)uVar11 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar11) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar11 >> 8),(short)uVar9);
  uVar12 = CONCAT44((int)(uVar9 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar9 = CONCAT26((short)(uVar12 >> 0x30),CONCAT24((short)(uVar9 >> 0x20),(int)uVar12)) &
          0xff01ff01ffffffff;
  uVar10 = (ushort)(uVar9 >> 0x30);
  auStack_88[5] = (ulong)uVar1 & 0xff;
  auStack_88[6] = uVar9 >> 0x10 & 0xff;
  auStack_88[7] = (ulong)CONCAT24(uVar10,(uint)(ushort)(uVar9 >> 0x20)) & 0xffffffff;
  auStack_88[8] = (ulong)uVar10;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  auStack_88[9] = uVar3;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x28);
  auStack_88[10] = uVar4;
  func_0x00010bfde980();
  auStack_88[0xb] = lVar5;
  lVar8 = 8;
  do {
    uVar9 = *(ulong *)((long)auStack_88 + lVar8) | (long)puVar2 << 0x20;
    uVar9 = ~uVar9 + uVar9 * 0x40000;
    uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
    uVar9 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
    puVar2 = (undefined *)(uVar9 ^ uVar9 >> 0x16);
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0x60);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0();
  uVar3 = *(undefined8 *)(lVar5 + 0x10);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71278);
  _objc_release(uVar3);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(lVar5 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f72478);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(lVar5 + 9));
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f72498);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(lVar5 + 10));
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f724b8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(lVar5 + 0xb));
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f724d8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(lVar5 + 0xc));
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f724f8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(lVar5 + 0xd));
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f72518);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(lVar5 + 0xe));
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f72538);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(lVar5 + 0xf));
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f72558);
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar3 = *(undefined8 *)(lVar5 + 0x18);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f72578);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar5 + 0x20);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f72598);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f725b8);
  _objc_release(uVar3);
  func_0x00010bf070e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e59558);
  puVar6 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 10b6f7ea0; end: 10b6f8243; -[SCGalleryUserDefaults description] */

void FUN_10b6f7ea0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71278);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f72478);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 9));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f72498);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 10));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f724b8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0xb));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f724d8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0xc));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f724f8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0xd));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f72518);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0xe));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f72538);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0xf));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f72558);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f72578);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f72598);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f725b8);
  _objc_release(uVar2);
  func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e59558);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b6f8244; end: 10b6f824b; -[SCGalleryUserDefaults objectID] */

undefined8 FUN_10b6f8244(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6f824c; end: 10b6f8253; -[SCGalleryUserDefaults completedImportFromCameraRoll] */

undefined1 FUN_10b6f824c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b6f8254; end: 10b6f825b; -[SCGalleryUserDefaults didInitialCloudSync] */

undefined1 FUN_10b6f8254(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b6f825c; end: 10b6f8263; -[SCGalleryUserDefaults dismissedImportButtonBelowSnaps] */

undefined1 FUN_10b6f825c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b6f8264; end: 10b6f826b; -[SCGalleryUserDefaults displayedCameraRollTabIntroPopup] */

undefined1 FUN_10b6f8264(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b6f826c; end: 10b6f8273; -[SCGalleryUserDefaults displayedInitialCreateStoryPopup] */

undefined1 FUN_10b6f826c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10b6f8274; end: 10b6f827b; -[SCGalleryUserDefaults displayedInitialNeedsPhotoAccessPopup] */

undefined1 FUN_10b6f8274(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10b6f827c; end: 10b6f8283; -[SCGalleryUserDefaults displayedPostLongVideoToStoryPopup] */

undefined1 FUN_10b6f827c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 10b6f8284; end: 10b6f828b; -[SCGalleryUserDefaults displayedSaveOptionPrompt] */

undefined1 FUN_10b6f8284(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 10b6f828c; end: 10b6f8293; -[SCGalleryUserDefaults latestAckedBackupErrorTime] */

undefined8 FUN_10b6f828c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6f8294; end: 10b6f829b; -[SCGalleryUserDefaults readFeaturedStoryIds] */

undefined8 FUN_10b6f8294(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6f829c; end: 10b6f82a3; -[SCGalleryUserDefaults viewedFeaturedStoryIds] */

undefined8 FUN_10b6f829c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b6f82a4; end: 10b6f82eb; -[SCGalleryUserDefaults .cxx_destruct] */

void FUN_10b6f82a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6f82ec; end: 10b6f845b; +[SCGalleryUserDefaultsBuilder withGalleryUserDefaults:] */

void FUN_10b6f82ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126e05c0;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf43e80();
  puVar1[0x10] = (char)uVar2;
  uVar2 = param_3;
  func_0x00010bf77540();
  puVar1[0x11] = (char)uVar2;
  uVar2 = param_3;
  func_0x00010bf84fe0();
  puVar1[0x12] = (char)uVar2;
  uVar2 = param_3;
  func_0x00010bf868e0();
  puVar1[0x13] = (char)uVar2;
  uVar2 = param_3;
  func_0x00010bf869e0();
  puVar1[0x14] = (char)uVar2;
  uVar2 = param_3;
  func_0x00010bf86a20();
  puVar1[0x15] = (char)uVar2;
  uVar2 = param_3;
  func_0x00010bf86ae0();
  puVar1[0x16] = (char)uVar2;
  uVar2 = param_3;
  func_0x00010bf86b60();
  puVar1[0x17] = (char)uVar2;
  uVar2 = param_3;
  func_0x00010c08af60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c121520();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x20);
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c29ec40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x28);
  *(undefined8 *)(puVar1 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6f845c; end: 10b6f84c7; -[SCGalleryUserDefaultsBuilder build] */

void FUN_10b6f845c(void)

{
  _objc_alloc(PTR_PTR_1126e0530);
  func_0x00010c030840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6f84c8; end: 10b6f84ff; -[SCGalleryUserDefaultsBuilder setObjectID:] */

long FUN_10b6f84c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b6f8500; end: 10b6f8507; -[SCGalleryUserDefaultsBuilder setCompletedImportFromCameraRoll:] */

void FUN_10b6f8500(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b6f8508; end: 10b6f850f; -[SCGalleryUserDefaultsBuilder setDidInitialCloudSync:] */

void FUN_10b6f8508(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 10b6f8510; end: 10b6f8517; -[SCGalleryUserDefaultsBuilder setDismissedImportButtonBelowSnaps:] */

void FUN_10b6f8510(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x12) = param_3;
  return;
}



/* Entry: 10b6f8518; end: 10b6f851f; -[SCGalleryUserDefaultsBuilder setDisplayedCameraRollTabIntroPopup:] */

void FUN_10b6f8518(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x13) = param_3;
  return;
}



/* Entry: 10b6f8520; end: 10b6f8527; -[SCGalleryUserDefaultsBuilder setDisplayedInitialCreateStoryPopup:] */

void FUN_10b6f8520(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x14) = param_3;
  return;
}



/* Entry: 10b6f8528; end: 10b6f852f; -[SCGalleryUserDefaultsBuilder setDisplayedInitialNeedsPhotoAccessPopup:] */

void FUN_10b6f8528(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x15) = param_3;
  return;
}



/* Entry: 10b6f8530; end: 10b6f8537; -[SCGalleryUserDefaultsBuilder setDisplayedPostLongVideoToStoryPopup:] */

void FUN_10b6f8530(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x16) = param_3;
  return;
}



/* Entry: 10b6f8538; end: 10b6f853f; -[SCGalleryUserDefaultsBuilder setDisplayedSaveOptionPrompt:] */

void FUN_10b6f8538(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x17) = param_3;
  return;
}



/* Entry: 10b6f8540; end: 10b6f8577; -[SCGalleryUserDefaultsBuilder setLatestAckedBackupErrorTime:] */

long FUN_10b6f8540(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b6f8578; end: 10b6f85af; -[SCGalleryUserDefaultsBuilder setReadFeaturedStoryIds:] */

long FUN_10b6f8578(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b6f85b0; end: 10b6f85e7; -[SCGalleryUserDefaultsBuilder setViewedFeaturedStoryIds:] */

long FUN_10b6f85b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b6f85e8; end: 10b6f862f; -[SCGalleryUserDefaultsBuilder .cxx_destruct] */

void FUN_10b6f85e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6f8630; end: 10b6f869b;  */

void FUN_10b6f8630(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d80a0;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c046f40();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6f869c; end: 10b6f873f; -[SCMemoriesSelectionSnap initWithSnap:entry:] */

undefined1 *
FUN_10b6f869c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112709de8;
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



/* Entry: 10b6f8740; end: 10b6f8747; -[SCMemoriesSelectionSnap createTimeUtc] */

void FUN_10b6f8740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf59970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_createTimeUtc_1125b4000)
  ;
  return;
}



/* Entry: 10b6f8748; end: 10b6f874f; -[SCMemoriesSelectionSnap hash] */

void FUN_10b6f8748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b6f8750; end: 10b6f87f7; -[SCMemoriesSelectionSnap isEqual:] */

undefined8 FUN_10b6f8750(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d80a0;
  _objc_opt_class(PTR_PTR_1126d80a0);
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
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = param_3;
    func_0x00010c23f220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b6f87f8; end: 10b6f87ff; -[SCMemoriesSelectionSnap snap] */

undefined8 FUN_10b6f87f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6f8800; end: 10b6f8807; -[SCMemoriesSelectionSnap entry] */

undefined8 FUN_10b6f8800(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6f8808; end: 10b6f8837; -[SCMemoriesSelectionSnap .cxx_destruct] */

void FUN_10b6f8808(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6f8838; end: 10b6f88fb; -[SCMemoriesSnapEncryption initWithCoder:] */

undefined1 * FUN_10b6f8838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709df0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6f88fc; end: 10b6f89af; -[SCMemoriesSnapEncryption initWithKey:IV:isEncrypted:] */

undefined1 *
FUN_10b6f88fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112709df0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6f89b0; end: 10b6f89d3; -[SCMemoriesSnapEncryption copyWithZone:] */

undefined8 FUN_10b6f89b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6f89d4; end: 10b6f8a47; -[SCMemoriesSnapEncryption encodeWithCoder:] */

void FUN_10b6f89d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e2dbb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e8a338);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110eb6d18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6f8a48; end: 10b6f8abf; -[SCMemoriesSnapEncryption hash] */

undefined8 * FUN_10b6f8a48(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b6f8b50:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b6f8b5c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b6f8b5c;
        }
        goto LAB_10b6f8b50;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b6f8b5c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b6f8ac0; end: 10b6f8b77; -[SCMemoriesSnapEncryption isEqual:] */

long FUN_10b6f8ac0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6f8b50:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6f8b5c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b6f8b5c;
        }
        goto LAB_10b6f8b50;
      }
    }
    lVar3 = 0;
  }
LAB_10b6f8b5c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6f8b78; end: 10b6f8b7f; -[SCMemoriesSnapEncryption key] */

undefined8 FUN_10b6f8b78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6f8b80; end: 10b6f8b87; -[SCMemoriesSnapEncryption IV] */

undefined8 FUN_10b6f8b80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6f8b88; end: 10b6f8b8f; -[SCMemoriesSnapEncryption isEncrypted] */

undefined1 FUN_10b6f8b88(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b6f8b90; end: 10b6f8bbf; -[SCMemoriesSnapEncryption .cxx_destruct] */

void FUN_10b6f8b90(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6f8bc0; end: 10b6f8c83; -[SCMemoriesSyncState initWithCoder:] */

undefined1 * FUN_10b6f8bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709df8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6f8c84; end: 10b6f8cf3; -[SCMemoriesSyncState initWithHighestSeqnum:minTimestampSec:lastSeqnum:syncState:lastFullSyncStartAtEpochSec:] */

void FUN_10b6f8c84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_112709df8;
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



/* Entry: 10b6f8cf4; end: 10b6f8d17; -[SCMemoriesSyncState copyWithZone:] */

undefined8 FUN_10b6f8cf4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6f8d18; end: 10b6f8db3; -[SCMemoriesSyncState encodeWithCoder:] */

void FUN_10b6f8d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f725d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f725f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f72618);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f72638);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f72658);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6f8db4; end: 10b6f8e17; -[SCMemoriesSyncState hash] */

undefined8 * FUN_10b6f8db4(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000107c3191c(&uStack_40,5);
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



/* Entry: 10b6f8e18; end: 10b6f8edf; -[SCMemoriesSyncState isEqual:] */

bool FUN_10b6f8e18(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10b6f8ee0; end: 10b6f8ee7; -[SCMemoriesSyncState highestSeqnum] */

undefined8 FUN_10b6f8ee0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6f8ee8; end: 10b6f8eef; -[SCMemoriesSyncState minTimestampSec] */

undefined8 FUN_10b6f8ee8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6f8ef0; end: 10b6f8ef7; -[SCMemoriesSyncState lastSeqnum] */

undefined8 FUN_10b6f8ef0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6f8ef8; end: 10b6f8eff; -[SCMemoriesSyncState syncState] */

undefined8 FUN_10b6f8ef8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6f8f00; end: 10b6f8f07; -[SCMemoriesSyncState lastFullSyncStartAtEpochSec] */

undefined8 FUN_10b6f8f00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b6f8f08; end: 10b6f906b; -[SCTrackingImageProcessCommandSnapInfo initWithSnapCreateDate:snapTimeZoneName:memoriesSnapId:isSpectacles:needsRectification:croppingState:snapSize:snapDurationSecs:] */

undefined1 *
FUN_10b6f8f08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_112709e00;
  uStack_70 = param_3;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    *(undefined8 *)((long)puVar1 + 0x40) = param_2;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6f906c; end: 10b6f908f; -[SCTrackingImageProcessCommandSnapInfo copyWithZone:] */

undefined8 FUN_10b6f906c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6f9090; end: 10b6f917b; -[SCTrackingImageProcessCommandSnapInfo hash] */

undefined8 * FUN_10b6f9090(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uStack_50 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_40 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_38 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b6f9288:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b6f9294;
    puVar7 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))))
    {
      puVar7 = (undefined1 *)0x0;
      if ((*(double *)((long)puVar3 + 0x38) != *(double *)(param_3 + 0x38)) ||
         (*(double *)((long)puVar3 + 0x40) != *(double *)(param_3 + 0x40))) goto LAB_10b6f9294;
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if (((((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
           ((lVar5 = *(long *)((long)puVar3 + 0x18), lVar5 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
          ((lVar5 = *(long *)((long)puVar3 + 0x20), lVar5 == *(long *)(param_3 + 0x20) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
         ((lVar5 = *(long *)((long)puVar3 + 0x28), lVar5 == *(long *)(param_3 + 0x28) ||
          (func_0x00010c071ae0(), (int)lVar5 != 0)))) {
        puVar7 = *(undefined1 **)((long)puVar3 + 0x30);
        if (puVar7 != *(undefined1 **)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_10b6f9294;
        }
        goto LAB_10b6f9288;
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_10b6f9294:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10b6f917c; end: 10b6f92af; -[SCTrackingImageProcessCommandSnapInfo isEqual:] */

long FUN_10b6f917c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6f9288:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6f9294;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = 0;
      if ((*(double *)(param_1 + 0x38) != *(double *)(param_3 + 0x38)) ||
         (*(double *)(param_1 + 0x40) != *(double *)(param_3 + 0x40))) goto LAB_10b6f9294;
      lVar3 = *(long *)(param_1 + 0x10);
      if (((((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
           ((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
          ((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
         ((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
          (func_0x00010c071ae0(), (int)lVar3 != 0)))) {
        lVar3 = *(long *)(param_1 + 0x30);
        if (lVar3 != *(long *)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_10b6f9294;
        }
        goto LAB_10b6f9288;
      }
    }
    lVar3 = 0;
  }
LAB_10b6f9294:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6f92b0; end: 10b6f92b7; -[SCTrackingImageProcessCommandSnapInfo snapCreateDate] */

undefined8 FUN_10b6f92b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6f92b8; end: 10b6f92bf; -[SCTrackingImageProcessCommandSnapInfo snapTimeZoneName] */

undefined8 FUN_10b6f92b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6f92c0; end: 10b6f92c7; -[SCTrackingImageProcessCommandSnapInfo memoriesSnapId] */

undefined8 FUN_10b6f92c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6f92c8; end: 10b6f92cf; -[SCTrackingImageProcessCommandSnapInfo isSpectacles] */

undefined1 FUN_10b6f92c8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b6f92d0; end: 10b6f92d7; -[SCTrackingImageProcessCommandSnapInfo needsRectification] */

undefined1 FUN_10b6f92d0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b6f92d8; end: 10b6f92df; -[SCTrackingImageProcessCommandSnapInfo croppingState] */

undefined8 FUN_10b6f92d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b6f92e0; end: 10b6f92e7; -[SCTrackingImageProcessCommandSnapInfo snapSize] */

undefined1  [16] FUN_10b6f92e0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x38);
}



/* Entry: 10b6f92e8; end: 10b6f92ef; -[SCTrackingImageProcessCommandSnapInfo snapDurationSecs] */

undefined8 FUN_10b6f92e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b6f92f0; end: 10b6f9343; -[SCTrackingImageProcessCommandSnapInfo .cxx_destruct] */

void FUN_10b6f92f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6f9344; end: 10b6f93c7; -[SCMemoriesCroppingState initWithType:renderingCroppingState:] */

undefined1 *
FUN_10b6f9344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112709e08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6f93c8; end: 10b6f93eb; -[SCMemoriesCroppingState copyWithZone:] */

undefined8 FUN_10b6f93c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6f93ec; end: 10b6f9453; -[SCMemoriesCroppingState hash] */

long * FUN_10b6f93ec(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  func_0x00010bfde980();
  plVar3 = &lStack_28;
  uStack_20 = uVar2;
  func_0x000107c3191c(plVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10b6f94d8;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_10b6f94d8;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b6f94d8;
    }
  }
  plVar5 = (long *)0x1;
LAB_10b6f94d8:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10b6f9454; end: 10b6f94f3; -[SCMemoriesCroppingState isEqual:] */

long FUN_10b6f9454(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6f94d8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b6f94d8;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b6f94d8;
    }
  }
  lVar3 = 1;
LAB_10b6f94d8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6f94f4; end: 10b6f94fb; -[SCMemoriesCroppingState type] */

undefined8 FUN_10b6f94f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6f94fc; end: 10b6f9503; -[SCMemoriesCroppingState renderingCroppingState] */

undefined8 FUN_10b6f94fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


