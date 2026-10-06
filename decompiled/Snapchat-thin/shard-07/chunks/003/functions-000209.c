/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053bf6ec; end: 1053bf71b; -[SCAdRankingSnapData setSnapsInLastNSeconds:] */

void FUN_1053bf6ec(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1053bf71c; end: 1053bf74b; -[SCAdRankingSnapData .cxx_destruct] */

void FUN_1053bf71c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053bf74c; end: 1053bf963; -[SCAdSingleSessionViewingHistory initWithViewingSessionId:viewLocation:captureLastNSnapCount:captureLastNStoryCount:captureSnapInLastNSeconds:captureSnapsForStoryAdView:adConfigProviderV2:] */

undefined1 *
FUN_1053bf74c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  uVar4 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e7ea8;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined **)((long)puVar1 + 0xa0) = puVar3;
    _objc_release(uVar2);
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar4;
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined **)((long)puVar1 + 0x80) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 200);
    *(undefined **)((long)puVar1 + 200) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0xd0);
    *(undefined **)((long)puVar1 + 0xd0) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0xd8);
    *(undefined **)((long)puVar1 + 0xd8) = puVar3;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + 0xb0) = param_6;
    *(undefined8 *)((long)puVar1 + 0xc0) = param_1;
    *(undefined1 *)((long)puVar1 + 0xb8) = param_8;
    *(undefined8 *)((long)puVar1 + 0xf8) = 0;
    *(undefined8 *)((long)puVar1 + 0x100) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x108);
    *(undefined **)((long)puVar1 + 0x108) = puVar3;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + 0x110) = param_7;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0xf0);
    *(undefined **)((long)puVar1 + 0xf0) = puVar3;
    _objc_release(uVar4);
    _objc_retain(param_9);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x118);
    *(undefined8 *)((long)puVar1 + 0x118) = param_9;
    _objc_release(uVar4);
  }
  _objc_release(param_9);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1053bf964; end: 1053bfa9b; -[SCAdSingleSessionViewingHistory didStartViewSnap:serveItemId:] */

void FUN_1053bf964(undefined8 param_1,long param_2,undefined8 param_3,int param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  *(undefined8 *)(param_2 + 0xe0) = param_1;
  *(char *)(param_2 + 0x98) = (char)param_4;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    lVar2 = *(long *)(param_2 + 0x50);
    *(undefined **)(param_2 + 0x50) = puVar1;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    *(undefined **)(param_2 + 0x48) = puVar1;
    _objc_release(uVar4);
    if (((param_5 == 0) || ((*(byte *)(param_2 + 0xb8) & 1) == 0)) ||
       (lVar2 = *(long *)(param_2 + 0x108), lVar2 == 0)) goto LAB_1053bfa84;
    func_0x00010c0dff20(lVar2,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) goto LAB_1053bfa84;
    lVar2 = param_2;
    func_0x00010be1ff20(param_2,param_3,*(undefined8 *)(param_2 + 0xb0));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010be1cc00(*(undefined8 *)(param_2 + 0xc0),param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b82a8;
    _objc_alloc(PTR_PTR_1126b82a8);
    func_0x00010c0217e0();
    func_0x00010c1d0560(*(undefined8 *)(param_2 + 0x108),param_3,puVar1,param_5);
    _objc_release(puVar1);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
LAB_1053bfa84:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1053bfa9c; end: 1053c0103; -[SCAdSingleSessionViewingHistory snapViewed:topSnapViewTimeInSec:bottomSnapViewTimeInSec:loadingSpinnerTimeInSec:isAd:exitMethod:snapId:wasSwiped:isHammerTap:wasLiked:mediaType:inventoryType:inventorySubtype:adType:preferredAttachmentType:actualAttachmentType:adAttachmentTriggerType:tapAttachmentSource:storyType:storyReplied:] */

void FUN_1053bfa9c(undefined8 param_1,double param_2,double param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,int param_7,undefined8 param_8,long param_9,uint param_10,
                  ulong param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(in_stack_00000008);
  dVar11 = param_2;
  func_0x00010c155420(PTR_PTR_1126afec0);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  dVar15 = dVar11;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_6,
                      &PTR____CFConstantStringClassReference_110dd6b38);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  dVar15 = dVar15 * 1000.0;
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_7 == 0) {
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    func_0x00010c155420(param_1,PTR_PTR_1126afec0);
    func_0x00010c0df720(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar8,param_6,puVar3);
    _objc_release(puVar3);
    uVar8 = *(undefined8 *)(param_5 + 0x20);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    dVar12 = dVar11;
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    fVar14 = SUB84(dVar12,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar8,param_6,puVar3);
    _objc_release(puVar3);
    puVar3 = *(undefined **)(param_5 + 0xf0);
    func_0x00010c0dff20(puVar3,param_6,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b82b0;
    _objc_alloc(PTR_PTR_1126b82b0);
    if (puVar3 == (undefined *)0x0) {
      fVar14 = (float)param_10;
      puVar6 = (undefined *)(ulong)param_10;
      puVar7 = (undefined *)(param_11 & 0xffffffff);
      fVar13 = 1.0;
      dVar12 = param_3;
    }
    else {
      func_0x00010bef5b00(puVar3);
      fVar13 = fVar14 + 1.0;
      func_0x00010bef5b20(puVar3);
      param_2 = param_2 + (double)fVar14;
      dVar15 = param_2;
      func_0x00010bef20c0(puVar3);
      fVar10 = SUB84(dVar15,0);
      fVar14 = fVar10 + (float)param_10;
      func_0x00010bef20e0(puVar3);
      puVar6 = puVar3;
      dVar15 = param_3 + (double)fVar10;
      func_0x00010bef5820(puVar3);
      puVar6 = puVar6 + param_10;
      puVar7 = puVar3;
      func_0x00010c276000(puVar3);
      puVar7 = puVar7 + (param_11 & 0xffffffff);
      func_0x00010c251140(puVar3);
      dVar12 = param_3 + (double)fVar10;
    }
    func_0x00010c01ea00(fVar13,(float)param_2,fVar14,(float)dVar12,0,0,0,0,puVar2,param_6,
                        in_stack_00000008,in_stack_00000010,puVar6,puVar7,0,0,dVar15);
    func_0x00010c1d0560(*(undefined8 *)(param_5 + 0xf0),param_6,puVar2,puVar1);
  }
  else {
    uVar8 = param_1;
    func_0x00010c155420(param_1,PTR_PTR_1126afec0);
    func_0x00010c155420(PTR_PTR_1126afec0);
    uVar9 = *(undefined8 *)(param_5 + 0x28);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(uVar8,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar9,param_6,puVar3);
    _objc_release(puVar3);
    uVar9 = *(undefined8 *)(param_5 + 0x30);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar11,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar9,param_6,puVar3);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b82e0;
    _objc_retain(param_8);
    _objc_alloc(puVar3);
    func_0x00010bff1660(param_4,uVar8);
    fVar14 = (float)param_4;
    _objc_release(param_8);
    func_0x00010befa120(*(undefined8 *)(param_5 + 0xa0),param_6,puVar3);
    func_0x00010be944c0(param_5);
    puVar2 = *(undefined **)(param_5 + 0xf0);
    func_0x00010c0dff20(puVar2,param_6,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b82b0;
    _objc_alloc();
    if (puVar2 == (undefined *)0x0) {
      fVar14 = (float)param_10;
      fVar13 = 1.0;
      dVar15 = param_3;
    }
    else {
      func_0x00010bef5b00(puVar2);
      fVar13 = fVar14 + 1.0;
      func_0x00010bef5b20(puVar2);
      param_2 = param_2 + (double)fVar14;
      dVar15 = param_2;
      func_0x00010bef20c0(puVar2);
      fVar10 = SUB84(dVar15,0);
      fVar14 = fVar10 + (float)param_10;
      func_0x00010bef20e0(puVar2);
      func_0x00010bef5820(puVar2);
      func_0x00010c276000(puVar2);
      func_0x00010c251140(puVar2);
      dVar15 = param_3 + (double)fVar10;
    }
    func_0x00010c01ea00(0,0,0,0,fVar13,(float)param_2,fVar14,(float)dVar15);
    func_0x00010c1d0560(*(undefined8 *)(param_5 + 0xf0),param_6,puVar6,puVar1);
    _objc_release(puVar6);
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
  func_0x00010bddf3e0(param_5);
  if ((0 < *(long *)(param_5 + 0xb0)) && (lVar4 = param_9, func_0x00010c08fa60(), lVar4 != 0)) {
    uVar5 = *(ulong *)(param_5 + 200);
    func_0x00010bf4b900(uVar5,param_6,param_9);
    if ((uVar5 & 1) == 0) {
      func_0x00010befa120(*(undefined8 *)(param_5 + 200),param_6,param_9);
    }
    func_0x00010c155420(param_1,PTR_PTR_1126afec0);
    func_0x00010c155420(param_3,PTR_PTR_1126afec0);
    puVar3 = PTR_PTR_1126b82b8;
    _objc_alloc(PTR_PTR_1126b82b8);
    func_0x00010c047ba0(param_1,dVar11,param_3,*(undefined8 *)(param_5 + 0xe0));
    func_0x00010bdc5c60(param_5,param_6,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(in_stack_00000008);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 1053c0104; end: 1053c01c3; -[SCAdSingleSessionViewingHistory storyViewed:storyViewTimeInMs:storyType:exitMethod:isAd:contentTopsnapViewCount:adTopsnapViewCount:] */

void FUN_1053c0104(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b82c0;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c04dc00(param_1,*(undefined8 *)(param_2 + 0xe8));
  _objc_release(param_6);
  _objc_release(param_4);
  func_0x00010bdc5c80(param_2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053c01c4; end: 1053c01ef; -[SCAdSingleSessionViewingHistory attachmentOpened:] */

void FUN_1053c01c4(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
    *(undefined1 *)(param_1 + 0xa8) = 1;
    return;
  }
  *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
  return;
}



/* Entry: 1053c01f0; end: 1053c0237; -[SCAdSingleSessionViewingHistory attachmentViewed:isAd:] */

void FUN_1053c01f0(double param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  
  func_0x00010c155420(PTR_PTR_1126afec0);
  lVar1 = 0x70;
  if (param_4 == 0) {
    lVar1 = 0x68;
  }
  *(double *)(param_2 + lVar1) = param_1 + *(double *)(param_2 + lVar1);
  return;
}



/* Entry: 1053c0238; end: 1053c0267; -[SCAdSingleSessionViewingHistory availableStoriesCount:] */

void FUN_1053c0238(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1053c0268; end: 1053c02c7; -[SCAdSingleSessionViewingHistory currentGroupChanged:] */

void FUN_1053c0268(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  *(undefined8 *)(param_2 + 0xe8) = param_1;
  *(long *)(param_2 + 0x78) = *(long *)(param_2 + 0x78) + 1;
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x80),param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1053c02c8; end: 1053c0337; -[SCAdSingleSessionViewingHistory stopSessionWithExitMethod:] */

void FUN_1053c02c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    *(long *)(param_1 + 0x90) = param_3;
    _objc_release(uVar2);
  }
  dVar3 = *(double *)(param_1 + 0x40);
  if (dVar3 == 0.0) {
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    *(double *)(param_1 + 0x40) = dVar3;
    func_0x00010bddf3e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053c0338; end: 1053c069f; -[SCAdSingleSessionViewingHistory viewSessionRecordWithViewedAdContextCount:enableHammerTapLogging:contentHammerTapDuration:adsHammerTapDuration:isPastSession:] */

void FUN_1053c0338(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  puStack_d0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  dVar10 = 1.60807493534087e-314;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_1053c06a0;
  puStack_d8 = &UNK_110882340;
  puStack_c0 = puStack_d0;
  func_0x00010bf97e80(*(undefined8 *)(param_3 + 0x28),param_4,&puStack_f0);
  func_0x00010bf529e0();
  if (*(long *)(param_3 + 0x48) != 0) {
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    dVar11 = dVar10;
    func_0x00010bf885a0(*(undefined8 *)(param_3 + 0x48));
    dVar10 = (dVar10 - dVar11) + (double)puStack_c0[3];
    puStack_c0[3] = dVar10;
  }
  func_0x00010bf529e0();
  dVar11 = *(double *)(param_3 + 0x40);
  if (*(double *)(param_3 + 0x40) <= 0.0) {
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    dVar11 = dVar10;
  }
  dVar14 = *(double *)(param_3 + 0x38);
  puVar1 = PTR_PTR_1126b82c8;
  _objc_alloc();
  uVar12 = *(undefined8 *)(param_3 + 0x38);
  dVar15 = *(double *)(param_3 + 0x68);
  dVar10 = *(double *)(param_3 + 0x70);
  uVar13 = puStack_c0[3];
  func_0x00010bf529e0();
  puVar2 = *(undefined **)(param_3 + 0xa0);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  if (puVar3 <= param_5) {
    param_5 = puVar3;
  }
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (param_5 != (undefined *)0x0) {
    func_0x00010bf529e0(puVar2);
    puVar3 = puVar2;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  lVar4 = param_3;
  func_0x00010be23d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010be23d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010be1ff20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010be1ff40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3;
  func_0x00010be22820();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_3 + 0xf0);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045660(uVar12,dVar11 - dVar14,dVar15 + dVar10,uVar13,dVar10,puVar1);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_c8,8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053c06a0; end: 1053c06db;  */

void FUN_1053c06a0(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010bfb2c80(param_3);
  lVar1 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  *(double *)(lVar1 + 0x18) = *(double *)(lVar1 + 0x18) + (double)param_1;
  return;
}



/* Entry: 1053c06dc; end: 1053c070f; -[SCAdSingleSessionViewingHistory getLastNSnaps:] */

void FUN_1053c06dc(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0xb8) & 1) != 0)) {
    func_0x00010be1ff60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c0710; end: 1053c0743; -[SCAdSingleSessionViewingHistory getSnapsInLastNSeconds:] */

void FUN_1053c0710(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0xb8) & 1) != 0)) {
    func_0x00010be22c40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c0744; end: 1053c082f; -[SCAdSingleSessionViewingHistory _getSessionDepth:] */

void FUN_1053c0744(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf529e0();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + 0xf8) = uVar3;
    *(undefined8 *)(param_1 + 0x100) = uVar4;
    puVar7 = PTR_PTR_1126b82d0;
    _objc_alloc(PTR_PTR_1126b82d0);
    func_0x00010c054880();
  }
  else {
    puVar7 = PTR_PTR_1126b82d0;
    _objc_alloc(PTR_PTR_1126b82d0);
    uVar1 = *(undefined8 *)(param_1 + 0xf8);
    uVar2 = *(undefined8 *)(param_1 + 0x100);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054880(puVar7,param_2,uVar1,uVar2,puVar5,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1053c0830; end: 1053c085f; -[SCAdSingleSessionViewingHistory _cleanup] */

void FUN_1053c0830(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1053c0860; end: 1053c0873; -[SCAdSingleSessionViewingHistory _addAdRankingSnapLevelInfo:] */

void FUN_1053c0860(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 0xd0) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0xd0),PTR_s_addObject__11259c1f0);
    return;
  }
  return;
}



/* Entry: 1053c0874; end: 1053c0887; -[SCAdSingleSessionViewingHistory _addAdRankingStoryLevelInfo:] */

void FUN_1053c0874(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 0xd8) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0xd8),PTR_s_addObject__11259c1f0);
    return;
  }
  return;
}



/* Entry: 1053c0888; end: 1053c08eb; -[SCAdSingleSessionViewingHistory _getLastNSnaps:] */

void FUN_1053c0888(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  if ((param_3 != 0) && (lVar1 = *(long *)(param_1 + 0x108), lVar1 != 0)) {
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar1;
      func_0x00010c089700(lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1053c08ec; end: 1053c094f; -[SCAdSingleSessionViewingHistory _getSnapsInLastNSeconds:] */

void FUN_1053c08ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  if ((param_3 != 0) && (lVar1 = *(long *)(param_1 + 0x108), lVar1 != 0)) {
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar1;
      func_0x00010c2457a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1053c0950; end: 1053c09a3; -[SCAdSingleSessionViewingHistory _getLastNAdRankingSnapLevelInfo:] */

void FUN_1053c0950(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0xd0);
  if ((lVar2 != 0) && (func_0x00010bf529e0(), lVar2 != 0)) {
    lVar3 = *(long *)(param_1 + 0xd0);
    func_0x00010bf529e0();
    lVar2 = lVar3;
    lVar1 = 0;
    if (param_3 <= lVar3) {
      lVar2 = param_3;
      lVar1 = lVar3 - param_3;
    }
    func_0x00010c25e980(*(undefined8 *)(param_1 + 0xd0),param_2,lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c09a4; end: 1053c0aab; -[SCAdSingleSessionViewingHistory _getAdRankingSnapLevelInfoInLastNSeconds:] */

void FUN_1053c09a4(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  
  lVar1 = *(long *)(param_2 + 0xd0);
  if ((lVar1 == 0) || (dVar6 = param_1, func_0x00010bf529e0(), param_1 <= 0.0 || lVar1 == 0)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_2 + 0xd0);
    func_0x00010bf529e0();
    dVar7 = 0.0;
    do {
      lVar1 = lVar1 + -1;
      if (lVar1 < 0) break;
      uVar3 = *(undefined8 *)(param_2 + 0xd0);
      func_0x00010c0dfd40(uVar3,param_3,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c243d00();
      func_0x00010c0cd480(PTR_PTR_1126afec0);
      dVar7 = dVar7 + dVar6;
      func_0x00010befa120(puVar2,param_3,uVar3);
      _objc_release(uVar3);
    } while (dVar7 <= param_1);
    puVar4 = puVar2;
    func_0x00010c140180(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1053c0aac; end: 1053c0aff; -[SCAdSingleSessionViewingHistory _getLastNAdRankingStoryLevelInfo:] */

void FUN_1053c0aac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0xd8);
  if ((lVar2 != 0) && (func_0x00010bf529e0(), lVar2 != 0)) {
    lVar3 = *(long *)(param_1 + 0xd8);
    func_0x00010bf529e0();
    lVar2 = lVar3;
    lVar1 = 0;
    if (param_3 <= lVar3) {
      lVar2 = param_3;
      lVar1 = lVar3 - param_3;
    }
    func_0x00010c25e980(*(undefined8 *)(param_1 + 0xd8),param_2,lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c0b00; end: 1053c0b07; -[SCAdSingleSessionViewingHistory _resetViewedAdStates] */

void FUN_1053c0b00(long param_1)

{
  *(undefined1 *)(param_1 + 0xa8) = 0;
  return;
}



/* Entry: 1053c0b08; end: 1053c0c07; -[SCAdSingleSessionViewingHistory _getViewDuration:enableHammerTapLogging:hammerTapDuration:] */

void FUN_1053c0b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_5 != 0) {
    uVar1 = param_1;
    _objc_retain(param_4);
    func_0x00010be20840(param_2,param_3,param_4);
    uVar2 = uVar1;
    func_0x00010be206e0(param_2,param_3,param_4);
    uVar3 = uVar2;
    func_0x00010be21400(param_2,param_3,param_4);
    uVar4 = uVar3;
    func_0x00010be21420(param_2,param_3,param_4);
    uVar5 = uVar4;
    func_0x00010be21440(param_2,param_3,param_4);
    uVar6 = uVar5;
    func_0x00010be21460(param_2,param_3,param_4);
    func_0x00010bde9f40(param_1,param_2,param_3,param_4);
    _objc_release(param_4);
    _objc_alloc(PTR_PTR_1126b82d8);
    func_0x00010c0548c0(uVar3,uVar4,uVar5,uVar6,uVar1,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c0c08; end: 1053c0d57; -[SCAdSingleSessionViewingHistory _getMinimumTime:] */

double FUN_1053c0c08(double param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_4;
  _objc_retain(param_4);
  puVar2 = param_4;
  func_0x00010bf529e0();
  if (puVar2 == (undefined1 *)0x0) {
    dVar8 = 0.0;
  }
  else {
    puVar2 = param_4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(puVar2);
    dVar7 = 0.0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    _objc_retain(param_4);
    puVar2 = param_4;
    func_0x00010bf52a60();
    dVar8 = param_1;
    if (puVar2 != (undefined1 *)0x0) {
      lVar4 = *plStack_110;
      do {
        puVar5 = (undefined1 *)0x0;
        dVar9 = dVar8;
        do {
          if (*plStack_110 != lVar4) {
            _objc_enumerationMutation(param_4);
          }
          func_0x00010bf885a0(*(undefined8 *)(lStack_118 + (long)puVar5 * 8));
          dVar8 = dVar7;
          if (dVar9 <= dVar7) {
            dVar8 = dVar9;
          }
          puVar5 = puVar5 + 1;
          dVar9 = dVar8;
        } while (puVar2 != puVar5);
        puVar2 = param_4;
        puVar3 = &uStack_120;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(param_4);
    puVar5 = (undefined1 *)puVar3;
    param_1 = dVar7;
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar5);
    puVar2 = puVar5;
    func_0x00010bf529e0();
    if (puVar2 == (undefined1 *)0x0) {
      param_1 = 0.0;
    }
    else {
      puVar2 = puVar5;
      func_0x00010c0dfd40(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(puVar2);
      dVar8 = 0.0;
      _objc_retain(puVar5);
      puVar2 = puVar5;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar2 != (undefined1 *)0x0) {
        puVar6 = (undefined1 *)0x0;
        dVar7 = param_1;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar5);
          }
          func_0x00010bf885a0(*(undefined8 *)((long)puVar6 * 8));
          param_1 = dVar8;
          if (dVar8 <= dVar7) {
            param_1 = dVar7;
          }
          puVar6 = puVar6 + 1;
          dVar7 = param_1;
        } while (puVar2 != puVar6);
        puVar2 = puVar5;
        func_0x00010bf52a60();
      }
      _objc_release(puVar5);
    }
    _objc_release(puVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
      return param_1;
    }
    ___stack_chk_fail();
    dVar8 = 0.25;
                    /* WARNING: Could not recover jumptable at 0x00010bdd8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(0x3fd0000000000000);
    return dVar8;
  }
  return dVar8;
}



/* Entry: 1053c0d58; end: 1053c0ea7; -[SCAdSingleSessionViewingHistory _getMaximumTime:] */

double FUN_1053c0d58(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    param_1 = 0.0;
  }
  else {
    lVar2 = param_4;
    func_0x00010c0dfd40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(lVar2);
    dVar5 = 0.0;
    _objc_retain(param_4);
    lVar2 = param_4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar4 = 0;
      dVar6 = param_1;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_4);
        }
        func_0x00010bf885a0(*(undefined8 *)(lVar4 * 8));
        param_1 = dVar5;
        if (dVar5 <= dVar6) {
          param_1 = dVar6;
        }
        lVar4 = lVar4 + 1;
        dVar6 = param_1;
      } while (lVar2 != lVar4);
      lVar2 = param_4;
      func_0x00010bf52a60();
    }
    _objc_release(param_4);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return param_1;
  }
  ___stack_chk_fail();
  dVar5 = 0.25;
                    /* WARNING: Could not recover jumptable at 0x00010bdd8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0x3fd0000000000000);
  return dVar5;
}



/* Entry: 1053c0ea8; end: 1053c0eaf; -[SCAdSingleSessionViewingHistory _getP25:] */

void FUN_1053c0ea8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fd0000000000000,param_1,PTR_s__calculatePercentileForTimes_per_112553bb8);
  return;
}



/* Entry: 1053c0eb0; end: 1053c0eb7; -[SCAdSingleSessionViewingHistory _getP50:] */

void FUN_1053c0eb0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe0000000000000,param_1,PTR_s__calculatePercentileForTimes_per_112553bb8);
  return;
}



/* Entry: 1053c0eb8; end: 1053c0ebf; -[SCAdSingleSessionViewingHistory _getP75:] */

void FUN_1053c0eb8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe8000000000000,param_1,PTR_s__calculatePercentileForTimes_per_112553bb8);
  return;
}



/* Entry: 1053c0ec0; end: 1053c0ecb; -[SCAdSingleSessionViewingHistory _getP90:] */

void FUN_1053c0ec0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3feccccccccccccd,param_1,PTR_s__calculatePercentileForTimes_per_112553bb8);
  return;
}



/* Entry: 1053c0ecc; end: 1053c0fdf; -[SCAdSingleSessionViewingHistory _countLessThanOrEqualValuesForTimes:lessThanOrEqualToDuration:] */

undefined1 * FUN_1053c0ecc(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  dVar8 = 0.0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_4;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(param_4);
        }
        func_0x00010bf885a0(*(undefined8 *)(lStack_118 + lVar7 * 8));
        if (dVar8 <= param_1) {
          puVar5 = puVar5 + 1;
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = param_4;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar5 = (undefined1 *)puVar4;
  func_0x00010bf529e0();
  if (puVar5 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)puVar4;
    func_0x00010c246d00(puVar4,param_3,PTR_s_compare__1125ae690);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010bf529e0();
    puVar3 = puVar5;
    func_0x00010bf529e0();
    if ((undefined1 *)(long)(dVar8 * (double)(puVar2 + -1)) < puVar3) {
      puVar3 = puVar5;
      func_0x00010c0dfd40(puVar5,param_3,(undefined1 *)(long)(dVar8 * (double)(puVar2 + -1)));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(puVar3);
    }
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  return (undefined1 *)puVar4;
}



/* Entry: 1053c0fe0; end: 1053c10ab; -[SCAdSingleSessionViewingHistory _calculatePercentileForTimes:percentile:] */

double FUN_1053c0fe0(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf529e0();
  if (uVar1 == 0) {
    dVar4 = 0.0;
  }
  else {
    uVar1 = param_4;
    func_0x00010c246d00(param_4,param_3,PTR_s_compare__1125ae690);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    param_1 = param_1 * (double)(uVar2 - 1);
    uVar3 = (ulong)param_1;
    uVar2 = uVar1;
    func_0x00010bf529e0();
    dVar4 = 0.0;
    if (uVar3 < uVar2) {
      uVar2 = uVar1;
      func_0x00010c0dfd40(uVar1,param_3,uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(uVar2);
      dVar4 = param_1;
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  return dVar4;
}



/* Entry: 1053c10ac; end: 1053c118f; -[SCAdSingleSessionViewingHistory .cxx_destruct] */

void FUN_1053c10ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053c1190; end: 1053c1203; -[SCGrapheneSponsoredSnapBannerMetric2 init] */

undefined1 * FUN_1053c1190(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7eb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1053c1204; end: 1053c14c3;  */

/* WARNING: Removing unreachable block (ram,0x0001053c148c) */
/* WARNING: Removing unreachable block (ram,0x0001053c174c) */

void FUN_1053c1204(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  char *unaff_x24;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  char *pcStack_1b0;
  char *pcStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar4 = param_3;
  pcVar8 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar10 = 0;
    pcVar4 = pcVar2;
    pcVar8 = param_5;
    do {
      if ((&cStack_59)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar10 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar7 = acStack_180;
  pcStack_c8 = FUN_1053c14c4;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar6 = pcVar4;
  pcVar9 = pcVar8;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  _objc_retain(pcVar8);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_160,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_148,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_130,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,auStack_160,&lStack_118,3);
    pcVar5 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108823c0,acStack_180,pcVar3);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar10 = 0;
    pcVar6 = pcVar7;
    pcVar9 = pcVar3;
    do {
      if ((&cStack_119)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar10 != -0x48);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar4);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(pcVar8);
    puStack_1b8 = auStack_160;
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != puStack_1b8);
    _objc_release(pcVar8);
    _objc_release(pcVar4);
    _objc_release(pcVar1);
    pcVar2 = pcVar3;
    __Unwind_Resume();
    pcStack_188 = FUN_1053c1784;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_1c0 = unaff_x24;
    pcStack_1b0 = pcVar3;
    pcStack_1a8 = pcVar8;
    pcStack_1a0 = pcVar4;
    pcStack_198 = pcVar1;
    ppuStack_190 = &puStack_d0;
    _objc_retain(pcVar5);
    _objc_retain(pcVar6);
    if (pcVar2 != (char *)0x0) {
      plVar11 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar5;
        _objc_retainAutorelease(pcVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_1f8,pcVar1);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar1 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_1e0,pcVar1);
      uStack_218 = 0;
      uStack_210 = 0;
      uStack_208 = 0;
      func_0x00010007e1e8(&uStack_218,auStack_1f8,&lStack_1c8,2);
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110882410,&uStack_218,pcVar9);
      puStack_200 = &uStack_218;
      func_0x00010007e5dc(&puStack_200);
      lVar10 = 0;
      do {
        if ((&cStack_1c9)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x30);
    }
    _objc_release(pcVar6);
    pcVar1 = pcVar5;
    _objc_release(pcVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
      ___stack_chk_fail();
      _objc_release(pcVar6);
      if (cStack_1e1 < '\0') {
        __ZdlPv(auStack_1f8[0]);
      }
      _objc_release(pcVar6);
      _objc_release(pcVar5);
      __Unwind_Resume(pcVar1);
      pcVar1 = pcVar1 + 0x20;
      _objc_loadWeakRetained(pcVar1);
      pcVar4 = pcVar1;
      func_0x00010bdd1c60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar4);
      return;
    }
    return;
  }
  return;
}



/* Entry: 1053c14c4; end: 1053c1783;  */

/* WARNING: Removing unreachable block (ram,0x0001053c174c) */

void FUN_1053c14c4(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  char *unaff_x24;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108823c0,acStack_c0,param_5);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar6 = 0;
    pcVar5 = pcVar2;
    pcVar4 = param_5;
    do {
      if ((&cStack_59)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar6 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f8 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != puStack_f8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_1053c1784;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = unaff_x24;
  pcStack_f0 = pcVar2;
  pcStack_e8 = param_4;
  pcStack_e0 = param_3;
  pcStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  if (pcVar3 != (char *)0x0) {
    plVar7 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_138,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_120,pcVar2);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110882410,&uStack_158,pcVar4);
    puStack_140 = &uStack_158;
    func_0x00010007e5dc(&puStack_140);
    lVar6 = 0;
    do {
      if ((&cStack_109)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar4 = pcVar1;
  _objc_release(pcVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(pcVar5);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar1);
    __Unwind_Resume(pcVar4);
    pcVar4 = pcVar4 + 0x20;
    _objc_loadWeakRetained(pcVar4);
    pcVar1 = pcVar4;
    func_0x00010bdd1c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar1);
    return;
  }
  return;
}



/* Entry: 1053c1784; end: 1053c19b3;  */

void FUN_1053c1784(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110882410,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume(pcVar1);
  pcVar1 = pcVar1 + 0x20;
  _objc_loadWeakRetained(pcVar1);
  pcVar2 = pcVar1;
  func_0x00010bdd1c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar2);
  return;
}



/* Entry: 1053c19b4; end: 1053c1a07;  */

void FUN_1053c19b4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd1c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1053c1a08; end: 1053c1a97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053c1a08(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1 + _DAT_11272280c;
    _objc_loadWeakRetained(lVar2);
  }
  lVar1 = lVar2;
  func_0x00010bf398e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1053c1a98; end: 1053c1af3;  */

void FUN_1053c1a98(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd1c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1053c1af4; end: 1053c1b47;  */

void FUN_1053c1af4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd1d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1053c1b48; end: 1053c1c0f; -[SCBitmojiAvatarBuilderServiceProvider _avatarDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053c1b48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b82f0;
  _objc_alloc(PTR_PTR_1126b82f0);
  param_1 = param_1 + _DAT_112722804;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7ca0(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053c1c10; end: 1053c1d77; -[SCBitmojiAvatarBuilderServiceProvider _avatarDataServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053c1c10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b82f8;
  _objc_alloc(PTR_PTR_1126b82f8);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_112722804;
    _objc_loadWeakRetained(lVar6);
  }
  lVar2 = lVar6;
  func_0x00010bf13100(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = 0;
  if (param_1 != 0) {
    lVar5 = param_1 + _DAT_112722810;
    _objc_loadWeakRetained(lVar5);
  }
  func_0x00010bff7d00(puVar1,param_2,lVar3,uVar4,lVar5);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053c1d78; end: 1053c1d93; -[SCBitmojiAvatarBuilderServiceProvider _avatarImageAssetProvider] */

void FUN_1053c1d78(void)

{
  _objc_opt_new(PTR_PTR_1126b8300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c1d94; end: 1053c1de3; -[SCBitmojiAvatarBuilderServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053c1d94(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112722810);
  _objc_destroyWeak(param_1 + _DAT_11272280c);
  _objc_destroyWeak(param_1 + _DAT_112722804);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112722808);
  return;
}



/* Entry: 1053c1de4; end: 1053c1e3b; -[SCBitmojiAvatarImageAssetProvider captureButtonReplyImage] */

void FUN_1053c1de4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110dd6b58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053c1e3c; end: 1053c1e4f; -[SCBitmojiAvatarImageAssetProvider captureButtonRetryImage] */

void FUN_1053c1e3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_imageNamed__1125d7a50,
             &PTR____CFConstantStringClassReference_110dd6b78);
  return;
}



/* Entry: 1053c1e50; end: 1053c1f73; -[SCBitmojiUserAvatarDataProvider initWithBitmojiAvatarProvider:] */

undefined8 * FUN_1053c1e50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e7eb8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_48,puVar1);
    uVar2 = param_3;
    func_0x00010bf12ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar3 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[2];
    puVar1[2] = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1053c1f74; end: 1053c1f9f;  */

void FUN_1053c1f74(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be3d7c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053c1fa0; end: 1053c1fe7; -[SCBitmojiUserAvatarDataProvider hasAvatarData] */

void FUN_1053c1fa0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 != 0) && (func_0x00010bfbeb80(), lVar1 != 0)) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c25dfa0();
    if (lVar1 != 0) {
      func_0x00010c0ec4a0(*(undefined8 *)(param_1 + 8));
    }
  }
  return;
}



/* Entry: 1053c1fe8; end: 1053c200f; -[SCBitmojiUserAvatarDataProvider avatarData] */

void FUN_1053c1fe8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053c2010; end: 1053c203f; -[SCBitmojiUserAvatarDataProvider updateAvatarData:] */

void FUN_1053c2010(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1053c2040; end: 1053c2047; -[SCBitmojiUserAvatarDataProvider _invalidateAvatarData] */

void FUN_1053c2040(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c283ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateAvatarData__11267e8d0,0);
  return;
}



/* Entry: 1053c2048; end: 1053c2077; -[SCBitmojiUserAvatarDataProvider .cxx_destruct] */

void FUN_1053c2048(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053c2078; end: 1053c2083;  */

void FUN_1053c2078(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),PTR_s_next__112614028,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1053c2084; end: 1053c208b; -[SCBitmojiAvatarProvider updateAvatarId:] */

void FUN_1053c2084(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c287570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_updateLocalAvatarId__11267f780);
  return;
}



/* Entry: 1053c208c; end: 1053c20cb; -[SCBitmojiAvatarProvider hasAvatarId] */

bool FUN_1053c208c(long param_1)

{
  long lVar1;
  
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c08fa60();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 1053c20cc; end: 1053c20d3; -[SCBitmojiAvatarProvider setAvatarId:] */

void FUN_1053c20cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 1053c20d4; end: 1053c21e7; -[SCBitmojiAvatarProvider .cxx_destruct] */

void FUN_1053c20d4(long param_1)

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



/* Entry: 1053c21e8; end: 1053c2203; -[SCBitmojiFetchServicesEntryPoint _friendmojiFilteredContainer] */

void FUN_1053c21e8(void)

{
  _objc_opt_new(PTR_PTR_1126b8320);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c2204; end: 1053c2243;  */

void FUN_1053c2204(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bddec00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1053c2244; end: 1053c225f; -[SCBitmojiFetchServicesEntryPoint _remoteVideoURLProvider] */

void FUN_1053c2244(void)

{
  _objc_alloc_init(PTR_PTR_1126b8330);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c2260; end: 1053c23eb; -[SCBitmojiFetchServicesEntryPoint _customojiViewProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053c2260(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126b8338;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112722848;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11272284c;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112722860;
    _objc_loadWeakRetained(lVar11);
  }
  lVar8 = lVar11;
  func_0x00010bf4c240(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = 0;
  if (param_1 != 0) {
    lVar9 = param_1 + _DAT_11272285c;
    _objc_loadWeakRetained(lVar9);
  }
  lVar10 = lVar9;
  func_0x00010bf62f00(lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0195a0(puVar1,param_2,lVar4,lVar7,lVar8,lVar10);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar11);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053c23ec; end: 1053c2433; -[SCBitmojiFetchServicesEntryPoint _circumstanceEngine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053c23ec(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112722850;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1053c2434; end: 1053c2503; -[SCBitmojiFetchServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053c2434(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112722840,0);
  _objc_storeStrong(param_1 + _DAT_11272283c,0);
  _objc_destroyWeak(param_1 + _DAT_112722850);
  _objc_destroyWeak(param_1 + _DAT_112722844);
  _objc_destroyWeak(param_1 + _DAT_112722860);
  _objc_destroyWeak(param_1 + _DAT_11272285c);
  _objc_destroyWeak(param_1 + _DAT_11272284c);
  _objc_destroyWeak(param_1 + _DAT_112722858);
  _objc_destroyWeak(param_1 + _DAT_112722854);
  _objc_destroyWeak(param_1 + _DAT_112722848);
  _objc_storeStrong(param_1 + _DAT_112722834,0);
  _objc_storeStrong(param_1 + _DAT_112722838,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112722830,0);
  return;
}



/* Entry: 1053c2504; end: 1053c26b3; -[SCBitmojiRemoteVideoURLProvider bitmojiRemoteVideoURLFromBaseURL:avatarID:friendAvatarID:] */

void FUN_1053c2504(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar5 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44760(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar1 = param_4;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
      func_0x00010c11d4c0(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0,param_2,
                          &PTR____CFConstantStringClassReference_110dd6b98,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar5);
      _objc_release(puVar5);
    }
    lVar1 = param_5;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
      func_0x00010c11d4c0(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0,param_2,
                          &PTR____CFConstantStringClassReference_110dd6bb8,param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar5);
      _objc_release(puVar5);
    }
    func_0x00010c1e6460(puVar2,param_2,puVar3);
    puVar4 = puVar2;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ae750;
    if (puVar4 == (undefined *)0x0) {
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1053c26b4; end: 1053c2787;  */

void FUN_1053c26b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(&UNK_110883fa0 + param_1 * 8);
  uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _objc_retain();
    puVar2 = puVar1;
    func_0x00010bf933c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puStack_b8 = &uStack_c0;
      uStack_c0 = 0;
      uStack_b0 = 0x3032000000;
      pcStack_a8 = FUN_1053c293c;
      uStack_a0 = 0x1053c294c;
      uStack_98 = 0;
      puVar5 = puVar1;
      func_0x00010bf62f20(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c0c40();
      _objc_release(puVar5);
      puVar3 = puVar2;
      func_0x00010c25ce40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c08fa60();
      if (puVar5 == (undefined *)0x0) {
        puVar5 = (undefined *)0x0;
      }
      else {
        puVar4 = puVar2;
        func_0x00010c25ce40(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        puVar5 = PTR_PTR_1126b08b8;
        _objc_alloc(PTR_PTR_1126b08b8);
        func_0x00010c0295e0();
        puVar2 = puVar4;
      }
      _objc_release(puVar3);
      __Block_object_dispose(&uStack_c0,8);
      _objc_release(uStack_98);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1053c2788; end: 1053c293b;  */

void FUN_1053c2788(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf933c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_1053c293c;
    uStack_50 = 0x1053c294c;
    uStack_48 = 0;
    lVar2 = param_1;
    func_0x00010bf62f20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c0c40();
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      lVar3 = lVar1;
      func_0x00010c25ce40(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar4 = PTR_PTR_1126b08b8;
      _objc_alloc(PTR_PTR_1126b08b8);
      func_0x00010c0295e0();
      lVar1 = lVar3;
    }
    _objc_release(lVar2);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uStack_48);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1053c293c; end: 1053c2953;  */

void FUN_1053c293c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1053c2954; end: 1053c298b;  */

void FUN_1053c2954(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1053c298c; end: 1053c298f;  */

void FUN_1053c298c(void)

{
  return;
}



/* Entry: 1053c2990; end: 1053c2c13;  */

void FUN_1053c2990(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1053c2c14;
  puStack_90 = &UNK_1108826e0;
  _objc_retain(param_3);
  uStack_88 = param_3;
  _objc_retain(param_4);
  ppuVar2 = &puStack_a8;
  uStack_80 = param_4;
  uStack_78 = param_5;
  _objc_retainBlock();
  if (param_1 == 0) {
    puVar6 = (undefined *)0xfffffffffffffcfe;
    FUN_1053c26b4(0xfffffffffffffcfe);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)ppuVar2[2])(ppuVar2,param_2,puVar6);
  }
  else {
    puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe93c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    if (puVar6 == (undefined *)0x0) {
      uVar5 = 0xfffffffffffffcfe;
      FUN_1053c26b4(0xfffffffffffffcfe);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)ppuVar2[2])(ppuVar2,param_2,uVar5);
      _objc_release(uVar5);
      puVar6 = (undefined *)0x0;
    }
    else {
      uStack_d8 = 0;
      uStack_c8 = 0x3032000000;
      pcStack_c0 = FUN_1053c293c;
      uStack_b8 = 0x1053c294c;
      puStack_d0 = &uStack_d8;
      _objc_retain(param_2);
      _objc_opt_class(puVar3);
      uVar4 = param_2;
      _objc_opt_isKindOfClass(param_2,puVar3);
      uStack_b0 = param_2;
      if ((uVar4 & 1) == 0) {
        uStack_b0 = 0;
      }
      _objc_retain(uStack_b0);
      _objc_release(param_2);
      puStack_108 = puVar1;
      uStack_100 = 0xc2000000;
      pcStack_f8 = FUN_1053c2d04;
      puStack_f0 = &UNK_11084b9d0;
      puStack_e0 = &uStack_d8;
      _objc_retain(puVar6);
      puStack_e8 = puVar6;
      func_0x00010006eaa4(PTR___dispatch_main_q_11034be20,&puStack_108);
      (*(code *)ppuVar2[2])(ppuVar2,puStack_d0[5],0);
      _objc_release(puStack_e8);
      __Block_object_dispose(&uStack_d8,8);
      _objc_release(uStack_b0);
    }
  }
  _objc_release(puVar6);
  _objc_release(ppuVar2);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1053c2c14; end: 1053c2ceb;  */

void FUN_1053c2c14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1053c2cec;
  puStack_68 = &UNK_110864938;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_48 = *(undefined1 *)(param_1 + 0x30);
  uStack_60 = param_2;
  uStack_58 = param_3;
  uStack_50 = uVar2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_50);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1053c2cec; end: 1053c2d03;  */

void FUN_1053c2cec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001053c2d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x38));
  return;
}



/* Entry: 1053c2d04; end: 1053c2d63;  */

void FUN_1053c2d04(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined **)(lVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar1,PTR_s_setImage__1126481e8,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1053c2d64; end: 1053c2e3b;  */

void FUN_1053c2d64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1053c2e3c;
  puStack_68 = &UNK_110864938;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_48 = *(undefined1 *)(param_1 + 0x30);
  uStack_60 = param_2;
  uStack_58 = param_3;
  uStack_50 = uVar2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_50);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1053c2e3c; end: 1053c2e57;  */

void FUN_1053c2e3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001053c2e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x38));
  return;
}



/* Entry: 1053c2e58; end: 1053c2f87; -[SCCustomojiRemoteViewProviderImpl initWithGrpcFactory:performerProvider:contentDelivery:customojiLogger:] */

undefined1 *
FUN_1053c2e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e7ec8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053c2f88; end: 1053c3447; -[SCCustomojiRemoteViewProviderImpl renderRequestForCustomojiView:bitmojiImageParams:completionQueue:completion:] */

void FUN_1053c2f88(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    uStack_a8 = 0;
    uStack_98 = 0x2020000000;
    uStack_90 = 0;
    lVar9 = param_4;
    puStack_a0 = &uStack_a8;
    func_0x00010bf62f20(param_4);
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1053c3448;
    puStack_b8 = &UNK_11084aef8;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    uStack_e8 = 0x1053c3460;
    puStack_e0 = &UNK_110842b58;
    puStack_d8 = &uStack_a8;
    puStack_b0 = &uStack_a8;
    func_0x00010c0c0c40();
    _objc_release(lVar9);
    puVar10 = (undefined *)0x0;
    if (((param_6 != 0) && (param_5 != 0)) && ((*(byte *)(puStack_a0 + 3) & 1) != 0)) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain();
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain();
      puVar3 = PTR_PTR_1126ae560;
      _objc_opt_new();
      puVar10 = PTR_PTR_1126b8340;
      _objc_alloc();
      puVar4 = puVar3;
      func_0x00010bfbc3e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c032540();
      _objc_release(puVar4);
      _objc_initWeak(auStack_100,param_1);
      puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_158 = 0xc2000000;
      pcStack_150 = FUN_1053c3470;
      puStack_148 = &UNK_11084d538;
      _objc_copyWeak(auStack_108,auStack_100);
      _objc_retain(puVar3);
      puStack_140 = puVar3;
      _objc_retain(param_4);
      lStack_138 = param_4;
      _objc_retain(param_3);
      lStack_130 = param_3;
      _objc_retain(param_5);
      lStack_128 = param_5;
      _objc_retain(param_6);
      lStack_110 = param_6;
      _objc_retain(uVar1);
      uStack_120 = uVar1;
      _objc_retain(uVar2);
      ppuVar5 = &puStack_160;
      uStack_118 = uVar2;
      _objc_retainBlock();
      lVar9 = param_4;
      FUN_1053c2788();
      _objc_retainAutoreleasedReturnValue();
      if (lVar9 == 0) {
        (*(code *)ppuVar5[2])(ppuVar5);
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126b1060;
        _objc_alloc(PTR_PTR_1126b1060);
        uVar7 = 0xd;
        func_0x00010900605c();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_88 = uVar7;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c032f60(puVar4);
        _objc_release(puVar8);
        _objc_release(uVar7);
        _objc_retain(puVar10);
        _objc_retain(param_3);
        _objc_retain(param_5);
        _objc_retain(param_6);
        _objc_retain(ppuVar5);
        func_0x00010c13e480(uVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(uVar6);
        _objc_release(ppuVar5);
        _objc_release(param_6);
        _objc_release(param_5);
        _objc_release(param_3);
        _objc_release(puVar10);
      }
      _objc_retain(puVar10);
      _objc_release(lVar9);
      _objc_release(ppuVar5);
      _objc_release(uStack_118);
      _objc_release(uStack_120);
      _objc_release(lStack_110);
      _objc_release(lStack_128);
      _objc_release(lStack_130);
      _objc_release(lStack_138);
      _objc_release(puStack_140);
      _objc_release(puVar10);
      _objc_destroyWeak(auStack_108);
      _objc_destroyWeak(auStack_100);
      _objc_release(puVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    __Block_object_dispose(&uStack_a8,8);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  lVar9 = 8;
  __Block_object_dispose(&uStack_a8);
  __Unwind_Resume();
  *(bool *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18) = lVar9 != 0;
  return;
}



/* Entry: 1053c3448; end: 1053c346f;  */

void FUN_1053c3448(long param_1,long param_2)

{
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2 != 0;
  return;
}



/* Entry: 1053c3470; end: 1053c35cb;  */

void FUN_1053c3470(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    _objc_copyWeak(auStack_48,param_1 + 0x58);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar9);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1053c35cc; end: 1053c36fb;  */

void FUN_1053c35cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010be8e320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20),param_2,lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1053c36fc;
  puStack_68 = &UNK_110882730;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar3;
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar4;
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = uVar5;
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar4;
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar5;
  _objc_retain(uVar4);
  uStack_40 = uVar4;
  func_0x00010c0f9440(lVar2,param_2,uVar3,&puStack_80);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(lVar2);
  return;
}



/* Entry: 1053c36fc; end: 1053c3a6f;  */

void FUN_1053c36fc(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  ulong uVar15;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  _objc_retain(uVar4);
  _objc_retain(uVar2);
  _objc_retain(uVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar3);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1053c2d64;
  puStack_80 = &UNK_1108826e0;
  _objc_retain(uVar2);
  uStack_78 = uVar2;
  _objc_retain(uVar6);
  uStack_68 = 0;
  ppuVar7 = &puStack_98;
  uStack_70 = uVar6;
  _objc_retainBlock();
  uVar15 = param_2;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar15 != 0) {
    uVar8 = uVar15;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0720c0();
    _objc_release(uVar8);
    if ((uVar9 & 1) == 0) {
      _objc_release(uVar15);
      uVar15 = 0;
    }
  }
  uVar10 = uVar3;
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c130360(param_2);
  uVar8 = param_2;
  func_0x00010bfe89a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c127fa0();
  func_0x00010c06e0c0(param_2);
  func_0x00010c0ae140(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar10);
  if (uVar15 == 0) {
    uVar15 = param_2;
    func_0x00010bfe89a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar15;
    func_0x00010c127fa0();
    _objc_release(uVar15);
    iVar14 = (int)uVar8;
    if (iVar14 == -0x4524111) {
      uVar15 = 0xfffffffffffffcfe;
LAB_1053c38e4:
      FUN_1053c26b4();
      _objc_retainAutoreleasedReturnValue();
      if (uVar15 != 0) goto LAB_1053c38f8;
    }
    else {
      if (iVar14 == 2) {
        uVar15 = 0xfffffffffffffd00;
        goto LAB_1053c38e4;
      }
      if (iVar14 == 1) {
        uVar15 = 0xfffffffffffffcff;
        goto LAB_1053c38e4;
      }
    }
    uVar8 = param_2;
    func_0x00010bfe89a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar8;
    func_0x00010bfe6f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    if (uVar15 != 0) {
      uVar10 = uVar5;
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar1;
      FUN_1053c2788(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010bf64e40(0x4122750000000000);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14a860(uVar10);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
    }
    FUN_1053c2990(uVar15,uVar4,uVar2,uVar6,0);
  }
  else {
LAB_1053c38f8:
    (*(code *)ppuVar7[2])(ppuVar7,uVar4,uVar15);
  }
  _objc_release(uVar15);
  _objc_release(ppuVar7);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1053c3a70; end: 1053c3af3;  */

void FUN_1053c3a70(long param_1,long param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06e0c0();
  if (iVar1 == 0) {
    if ((param_2 == 0) || (param_4 == 0)) {
      (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
      goto LAB_1053c3ae0;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = 1;
    lVar2 = param_2;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = 0;
    lVar2 = 0;
  }
  FUN_1053c2990(lVar2,uVar3,uVar4,uVar5,uVar6);
LAB_1053c3ae0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053c3af4; end: 1053c3bff; -[SCCustomojiRemoteViewProviderImpl _renderRequest] */

void FUN_1053c3af4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar1 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1eeba0(puVar1,param_2,20000);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar1,param_2,20000);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfcd0c0(uVar4,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf56360(uVar2,param_2,&PTR____CFConstantStringClassReference_110dd6c78,puVar1,uVar4)
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126b8348;
    _objc_alloc();
    func_0x00010c058f80();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  _objc_alloc(PTR_PTR_1126b8350);
  func_0x00010c000c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c3c00; end: 1053c3c5f; -[SCCustomojiRemoteViewProviderImpl .cxx_destruct] */

void FUN_1053c3c00(long param_1)

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



/* Entry: 1053c3c60; end: 1053c3c67; -[SCCustomojiRenderResponse imageResponse] */

undefined8 FUN_1053c3c60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1053c3c68; end: 1053c3c97; -[SCCustomojiRenderResponse setImageResponse:] */

void FUN_1053c3c68(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1053c3c98; end: 1053c3c9f; -[SCCustomojiRenderResponse error] */

undefined8 FUN_1053c3c98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1053c3ca0; end: 1053c3ccf; -[SCCustomojiRenderResponse setError:] */

void FUN_1053c3ca0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1053c3cd0; end: 1053c3cd7; -[SCCustomojiRenderResponse isCanceled] */

undefined1 FUN_1053c3cd0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1053c3cd8; end: 1053c3cdf; -[SCCustomojiRenderResponse setIsCanceled:] */

void FUN_1053c3cd8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1053c3ce0; end: 1053c3ce7; -[SCCustomojiRenderResponse renderTimeMs] */

undefined8 FUN_1053c3ce0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1053c3ce8; end: 1053c3cef; -[SCCustomojiRenderResponse setRenderTimeMs:] */

void FUN_1053c3ce8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 1053c3cf0; end: 1053c3d1f; -[SCCustomojiRenderResponse .cxx_destruct] */

void FUN_1053c3cf0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1053c3d20; end: 1053c3d93; -[SCCustomojiRenderRequest initWithCompositionService:] */

undefined1 * FUN_1053c3d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7ed0;
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



/* Entry: 1053c3d94; end: 1053c3ff3; -[SCCustomojiRenderRequest performWithBitmojiImageParams:completion:] */

void FUN_1053c3d94(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    puVar1 = PTR_PTR_1126b8358;
    _objc_opt_new(PTR_PTR_1126b8358);
    lVar2 = param_3;
    func_0x00010bf12ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16da00(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c26afc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    func_0x00010c189140(puVar1);
    _objc_release(lVar2);
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_1053c3ff4;
    uStack_70 = 0x1053c4004;
    uStack_68 = 0;
    lVar2 = param_3;
    func_0x00010bf62f20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c0c40();
    _objc_release(lVar2);
    func_0x00010c212f20(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c09e220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf3e0(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + 8);
    _objc_retain();
    _objc_retain(param_4);
    func_0x00010c12f8e0(uVar5);
    _objc_release(param_4);
    _objc_release(puVar3);
    _objc_release(puVar3);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053c3ff4; end: 1053c400b;  */

void FUN_1053c3ff4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}


