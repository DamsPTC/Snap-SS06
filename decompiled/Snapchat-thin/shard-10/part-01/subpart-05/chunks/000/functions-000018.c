/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10795ebbc; end: 10795ec2f; -[SCDynamicHeightCollectionView layoutSubviews] */

void FUN_10795ebbc(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  bool bVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f8f20;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  func_0x00010c0699c0(param_5);
  bVar1 = false;
  if ((param_3 == param_1) && (bVar1 = false, !NAN(param_4) && !NAN(param_2))) {
    bVar1 = param_4 == param_2;
  }
  if (!bVar1) {
    func_0x00010c069fa0(param_5);
  }
  return;
}



/* Entry: 10795ee18; end: 10795ef9f;  */

void FUN_10795ee18(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c113d60();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10795f484; end: 10795f4d3; -[SCShakeSeparatorView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10795f484(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112766374,0);
  _objc_storeStrong(param_1 + _DAT_11276637c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112766378,0);
  return;
}



/* Entry: 10795f60c; end: 10795f617; -[SCSnapchatDeviceInfoProvider .cxx_destruct] */

void FUN_10795f60c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10795f8a8; end: 10795fa97; -[SCShakeAsyncLogManager dumpLogsAsyncForShakeId:project:infoProviderRegistry:inPath:] */

void FUN_10795f8a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar2 = param_5;
  _objc_retain();
  _dispatch_group_create();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_10795fa98;
  puStack_90 = &UNK_1109f1b10;
  _objc_retain(param_3);
  uStack_88 = param_3;
  _objc_retain(param_6);
  uStack_80 = param_6;
  _objc_retain(uVar2);
  ppuVar3 = &puStack_a8;
  uStack_78 = uVar2;
  _objc_retainBlock();
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  puStack_d0 = &UNK_10795fb38;
  puStack_c8 = &UNK_1109f1b40;
  uStack_c0 = param_3;
  uStack_b8 = param_6;
  _objc_retain(uVar2);
  uStack_b0 = uVar2;
  _objc_retain(param_6);
  _objc_retain(param_3);
  ppuVar4 = &puStack_e0;
  _objc_retainBlock();
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  puStack_110 = &UNK_10795fbac;
  puStack_108 = &UNK_1109f1bd0;
  uStack_100 = param_4;
  uStack_f8 = uVar2;
  ppuStack_f0 = ppuVar3;
  ppuStack_e8 = ppuVar4;
  _objc_retain(uVar2);
  _objc_retain(param_4);
  func_0x00010bf97ae0(param_5,param_2,&puStack_120);
  _objc_release(param_5);
  func_0x00010c220220(*(undefined8 *)(param_1 + 8),param_2,uVar2,param_3);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(ppuVar4);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(ppuVar3);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 10795ffe8; end: 1079600bb; +[SCShakeLogFileManager saveVideo:atPath:inPath:] */

undefined8
FUN_10795ffe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_4 != 0) {
    _objc_retain(param_4);
    uVar1 = param_1;
    func_0x00010bfc2e00(param_1,param_2,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf4df60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(puVar2);
    func_0x00010beeb940(param_1,param_2,&PTR____CFConstantStringClassReference_110ea69b8,puVar3,
                        uVar1);
    _objc_release(puVar3);
    _objc_release(uVar1);
    return param_1;
  }
  return 0;
}



/* Entry: 107960cd8; end: 107960d4f; +[SCShakeLogFileManager getCompressedFileSize:inPath:] */

undefined * FUN_107960cd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010be1df20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = puVar1;
    func_0x00010c08fa60(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 107961284; end: 1079612b3; +[SCShakeSyncManager deleteInstance] */

void FUN_107961284(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1c1320(uRam0000000113727018,param_2,1);
  uVar1 = uRam0000000113727018;
  uRam0000000113727018 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107961548; end: 107961623; -[SCShakeSyncManager _checkNextTicketInternal] */

void FUN_107961548(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010c0b5d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126d57f8;
  if (lVar1 != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c2bd3c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22ba40(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfc8040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c1200(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010c0b5d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar2 = 2;
  if (lVar1 == 0) {
    uVar2 = 3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,uVar2);
  return;
}



/* Entry: 107961c5c; end: 107961c63; -[SCShakeSyncManager setMCurrentTicket:] */

void FUN_107961c5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 107961ca8; end: 107961caf; -[SCShakeSyncManager setMConfiguration:] */

void FUN_107961ca8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1079622d4; end: 1079622db; -[SCShakeTicket selfAssign] */

undefined1 FUN_1079622d4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107962314; end: 10796231b; -[SCShakeTicket mCreateTimeStamp] */

undefined8 FUN_107962314(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107962354; end: 10796235b; -[SCShakeTicket mCameraRollAttachmentsFileNames] */

undefined8 FUN_107962354(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1079623bc; end: 1079623c3; -[SCShakeTicket activeLensID] */

undefined8 FUN_1079623bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 107962514; end: 10796260f; -[SCShakeTicketBuilder build] */

void FUN_107962514(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5808;
  _objc_alloc();
  func_0x00010c01b2a0(puVar1,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x88),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107962648; end: 10796264f; -[SCShakeTicketBuilder setMFeature:] */

void FUN_107962648(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107962688; end: 10796268f; -[SCShakeTicketBuilder setMIsAutoTicket:] */

void FUN_107962688(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 1079626f0; end: 1079626f7; -[SCShakeTicketBuilder setMNetworkConnectionType:] */

void FUN_1079626f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 107962758; end: 10796275f; -[SCShakeTicketBuilder setMViewControllerName:] */

void FUN_107962758(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107962798; end: 10796279f; -[SCShakeTicketBuilder setMHasVideoAttached:] */

void FUN_107962798(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xe) = param_3;
  return;
}



/* Entry: 107962800; end: 10796282f; -[SCShakeTicketBuilder setMOtherInfo:] */

void FUN_107962800(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107962868; end: 10796286f; -[SCShakeTicketBuilder setBlizzardSessionID:] */

void FUN_107962868(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1079628a8; end: 1079628af; -[SCShakeTicketBuilder setSafeModeEnabled:] */

void FUN_1079628a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 107962a78; end: 107962b73; -[SCShakeTicketAdapter initWithCircumstanceEngine:networkConnectivityMonitor:blizzardSessionIDProvider:appInsightsMetadataStorage:] */

undefined1 *
FUN_107962a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f8f60;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107963698; end: 10796398b;  */

void FUN_107963698(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar9);
  lVar5 = lVar9;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  puVar6 = PTR_s_completeProcessingMetaInfoFile__1125ae860;
  while (PTR_s_completeProcessingMetaInfoFile__1125ae860 = puVar6, lVar5 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar9);
      }
      puVar3 = PTR_PTR_1126b6c20;
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c2bd3c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14a600();
      _objc_release(uVar2);
      if ((int)puVar3 != 0) {
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = 1;
      }
      uVar4 = *(ulong *)(param_1 + 0x38);
      _objc_opt_respondsToSelector(uVar4,puVar6);
      if ((uVar4 & 1) != 0) {
        func_0x00010bf43ae0(*(undefined8 *)(param_1 + 0x38));
      }
      lVar10 = lVar10 + 1;
    } while (lVar5 != lVar10);
    lVar5 = lVar9;
    func_0x00010bf52a60();
    puVar6 = PTR_s_completeProcessingMetaInfoFile__1125ae860;
  }
  _objc_release(lVar9);
  lVar5 = *(long *)(param_1 + 0x40);
  _dispatch_group_leave();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(lVar5 + 0x20);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a120();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x80) + 8) + 0x28);
  func_0x00010bf51e00();
  func_0x00010be15a20(uVar2);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 107964990; end: 10796551b; -[SCShakeTicketAdapter _fileShakeTicket:reportType:reportSource:bugDescription:project:subProject:emails:selfAssign:isAutoTicket:withScreenshot:createTimestamp:shouldCreateJiraTicket:withAttachments:viewControllerName:viewControllerFeature:jiraMetaInfo:configuration:hasScreenCaptured:hasVideoAttachedL:hasCameraRollAttachment:cameraRollAttachmentFileNames:spectaclesVersion:lastCrashReportId:otherInfo:allJiraLabels:linkedNonFatalId:carrierInfo:] */

void FUN_107964990(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined1 param_19,undefined4 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined **ppuVar1;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_6f;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  uStack_120 = 0x107964dac;
  puStack_118 = &UNK_1109f1dd0;
  _objc_retain(param_18);
  uStack_110 = param_18;
  _objc_retain(param_24);
  uStack_108 = param_24;
  _objc_retain(param_15);
  uStack_100 = param_15;
  _objc_retain(param_16);
  uStack_f8 = param_16;
  _objc_retain(param_17);
  uStack_f0 = param_17;
  uStack_6f = param_19;
  _objc_retain(param_21);
  uStack_e8 = param_21;
  _objc_retain(param_22);
  uStack_e0 = param_22;
  _objc_retain(param_23);
  uStack_d8 = param_23;
  _objc_retain(param_26);
  uStack_d0 = param_26;
  lStack_c8 = param_1;
  _objc_retain(param_3);
  uStack_c0 = param_3;
  uStack_88 = param_4;
  uStack_80 = param_5;
  _objc_retain(param_6);
  uStack_b8 = param_6;
  _objc_retain(param_7);
  uStack_b0 = param_7;
  _objc_retain(param_8);
  uStack_6b = param_10;
  uStack_a8 = param_8;
  _objc_retain(param_9);
  uStack_6a = param_13;
  uStack_a0 = param_9;
  uStack_78 = param_12;
  _objc_retain(param_25);
  uStack_98 = param_25;
  _objc_retain(param_27);
  uStack_90 = param_27;
  ppuVar1 = &puStack_130;
  _objc_retainBlock();
  if (*(long *)(param_1 + 8) == 0) {
    (*(code *)ppuVar1[2])(ppuVar1,0);
  }
  else {
    func_0x00010bf46540();
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 107965c80; end: 107965c8f;  */

void FUN_107965c80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107965c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1079666d8; end: 107966753;  */

void FUN_1079666d8(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),7);
  return;
}



/* Entry: 107967870; end: 1079678af;  */

void FUN_107967870(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d57f8;
  _objc_alloc();
  func_0x00010c0345e0();
  uVar1 = puRam0000000113727040;
  puRam0000000113727040 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107968db4; end: 107968ff3; -[SCShakeTicketTable setupDatabase] */

void FUN_107968db4(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = param_1;
  func_0x00010bdf8000();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d5850;
  _objc_alloc();
  lVar4 = lVar2;
  func_0x00010c0f5800(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034700(puVar3,param_2,lVar4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar3;
  _objc_release(uVar5);
  _objc_release(lVar4);
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar5 = uVar6;
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110ea6f78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9afc0(uVar6,param_2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  lVar4 = *(long *)(param_1 + 8);
  if ((lVar4 != 0) && (func_0x00010c088a40(), (int)lVar4 != 0xe)) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c088a40();
    if (iVar1 != 5) {
      iVar1 = (int)*(undefined8 *)(param_1 + 8);
      func_0x00010c088a40();
      if (iVar1 != 0xb) goto LAB_107968ee0;
    }
  }
  func_0x00010bf6bac0(param_1);
  puVar3 = PTR_PTR_1126d5850;
  _objc_alloc();
  lVar4 = lVar2;
  func_0x00010c0f5800(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034700(puVar3,param_2,lVar4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar3;
  _objc_release(uVar5);
  _objc_release(lVar4);
LAB_107968ee0:
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar5 = uVar6;
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110ea6f98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b060(uVar6,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c252980(uVar5,param_2,&PTR____CFConstantStringClassReference_110ea6fb8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  _objc_release(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c252980(uVar5,param_2,&PTR____CFConstantStringClassReference_110ea6fd8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  _objc_release(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c252980(uVar5,param_2,&PTR____CFConstantStringClassReference_110ea6ff8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  _objc_release(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c252980(uVar5,param_2,&PTR____CFConstantStringClassReference_110ea7018);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  _objc_release(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c252980(uVar5,param_2,&PTR____CFConstantStringClassReference_110ea7038);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1079694ac; end: 107969617; -[SCShakeTicketUploader _uploadTicket] */

void FUN_1079694ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126d5818;
  func_0x00010c22bc20(PTR_PTR_1126d5818);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b5de0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a1400(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d5830;
  _objc_alloc(PTR_PTR_1126d5830);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0f98a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c2bd3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03c5c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_107969618;
  puStack_40 = &UNK_1108450c8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_10796971c;
  puStack_68 = &UNK_110842e18;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_107969748;
  puStack_90 = &UNK_1109f1c00;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_107969758;
  puStack_b8 = &UNK_1108450c8;
  lStack_b0 = param_1;
  lStack_88 = param_1;
  lStack_60 = param_1;
  lStack_38 = param_1;
  func_0x00010c28e6e0(puVar1,param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                      &puStack_58,&puStack_80,&puStack_a8,&puStack_d0);
  _objc_release(puVar1);
  return;
}



/* Entry: 107969b90; end: 107969c7b;  */

void FUN_107969b90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d57f8;
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(param_2);
  func_0x00010c2bd3c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22ba40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c0b5de0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28b060(puVar1);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(uVar4);
  func_0x00010be90300(*(undefined8 *)(param_1 + 0x20));
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x40);
  (**(code **)(lVar3 + 0x10))(lVar3,param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010be819b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processNextStep__11257e008,3);
  return;
}



/* Entry: 107969f48; end: 107969fc7; +[SCShakeUploadThrottleController sharedInstance] */

void FUN_107969f48(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  if (lRam0000000113727050 == 0) {
    lVar2 = param_1;
    _objc_alloc_init();
    lVar1 = lRam0000000113727050;
    lRam0000000113727050 = lVar2;
    _objc_release(lVar1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  lVar1 = lRam0000000113727050;
  _objc_retain(lRam0000000113727050);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10796a280; end: 10796a33b; -[SCShakeUploadThrottleController _plusOneToNumberInDictionary:forKey:initVal:] */

void FUN_10796a280(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0dff20(param_3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    param_5 = lVar1;
    func_0x00010c067fc0(lVar1);
    param_5 = param_5 + 1;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(param_3,param_2,puVar2,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10796a450; end: 10796a457; -[SCSnapAirConfiguration performer] */

undefined8 FUN_10796a450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10796a5fc; end: 10796a62b; -[SCNativeNotificationHandlingServices .cxx_destruct] */

void FUN_10796a5fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10796a870; end: 10796a877; -[SCNativeNotificationProcessedEvent completion] */

undefined8 FUN_10796a870(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10796abc4; end: 10796abcb; -[SCRemixOperaMetadata replyParameters] */

undefined8 FUN_10796abc4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10796acd0; end: 10796ad37; +[MFCFeedCard descriptor] */

void FUN_10796acd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727060 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b65ac0,
                        &PTR____CFConstantStringClassReference_110ea7118,&PTR_DAT_11323b050,
                        &PTR_DAT_11323b1a8,8,0x48,0x1c);
    puRam0000000113727060 = puVar1;
  }
  return;
}



/* Entry: 10796b044; end: 10796b0cf; +[MFCMedia descriptor] */

undefined * FUN_10796b044(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137270a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b65d90,
                        &PTR____CFConstantStringClassReference_110e133f8,&PTR_DAT_11323b648,
                        &PTR_DAT_11323b660,1,0x10,0x1c);
    func_0x00010c229040();
    puRam00000001137270a0 = puVar1;
  }
  return puRam00000001137270a0;
}



/* Entry: 10796b46c; end: 10796b517; -[SCDeepLinkingUrlInterceptor isValidInternalDeeplinkURL:] */

long FUN_10796b46c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  if ((param_3 == 0) || (lVar2 = *(long *)(param_1 + 0x48), lVar2 == 0)) {
    lVar3 = *(long *)(param_1 + 0x38);
    pcVar4 = *(code **)(lVar3 + 0x10);
    _objc_retain(param_3);
    (*pcVar4)(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c082da0();
    _objc_release(param_3);
    _objc_release(lVar1);
  }
  else {
    _objc_retain(param_3);
    func_0x00010c082dc0(lVar2,param_2,param_3);
    lVar3 = param_3;
  }
  _objc_release(lVar3);
  return lVar2;
}



/* Entry: 10796bcf0; end: 10796befb; -[SCDeepLinkingUrlInterceptor _handleExternalDeeplink:allowAlertView:allowUniversalDeepLink:isWebViewLoadedSuccessfully:completion:] */

void FUN_10796bcf0(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_7);
  uVar1 = param_1;
  func_0x00010c06c500(param_1,param_2,param_3);
  puVar5 = PTR____NSDictionary0__struct_11034ab58;
  if (((uVar1 & 1) == 0) &&
     (uVar1 = param_1, func_0x00010bfddc60(param_1,param_2,param_3),
     puVar5 = PTR____NSDictionary0__struct_11034ab58, (int)uVar1 != 0)) {
    uStack_78 = *(undefined8 *)PTR__UIApplicationOpenURLOptionUniversalLinksOnly_110345a88;
    puStack_70 = PTR____kCFBooleanTrue_11034ab68;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&uStack_78,1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = param_3;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf32ee0();
  _objc_release(uVar1);
  if (uVar2 == 0) {
    uVar1 = param_1;
    func_0x00010bdfb200(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    param_3 = uVar1;
  }
  uVar1 = param_3;
  uVar11 = param_7;
  if ((int)param_4 != 0) {
    param_4 = param_1;
    func_0x00010be9bb00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c1504a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010bf4b900(param_4,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_4);
    if ((uVar4 & 1) == 0) {
      *(undefined1 *)(param_1 + 8) = 1;
      uVar10 = param_6;
      func_0x00010c235be0(param_1,param_2,param_3);
      iVar8 = (int)uVar10;
      goto LAB_10796bea8;
    }
  }
  puVar9 = puVar5;
  func_0x00010be6d8e0(param_1,param_2,param_3);
  iVar8 = (int)puVar9;
LAB_10796bea8:
  _objc_release(puVar5);
  _objc_release(param_7);
  uVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puStack_88 = &UNK_10796befc;
    uStack_c0 = param_4;
    puStack_b8 = puVar5;
    uStack_b0 = param_1;
    uStack_a8 = param_6;
    uStack_a0 = param_3;
    uStack_98 = param_7;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_retain(uVar1);
    _objc_retain(uVar11);
    puVar5 = *(undefined **)(uVar2 + 0x10);
    if (puVar5 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    }
    else {
      func_0x00010c0d3c80();
    }
    if (iVar8 != 0) {
      func_0x00010c1d0640(puVar5,param_2,PTR____kCFBooleanTrue_11034ab68,
                          &PTR____CFConstantStringClassReference_110f83958);
    }
    uVar3 = uVar2;
    func_0x00010c068fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c28f640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (uVar4 != 0) {
      func_0x00010bef7f60(puVar5,param_2,uVar4);
    }
    lVar6 = *(long *)(uVar2 + 0x38);
    (**(code **)(lVar6 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    puStack_d8 = &UNK_10796c078;
    puStack_d0 = &UNK_110923ff0;
    uStack_c8 = uVar11;
    _objc_retain(uVar11);
    func_0x00010bfd1bc0(lVar7,param_2,uVar1,puVar5,0x41,&puStack_e8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(uStack_c8);
    _objc_release(uVar11);
    _objc_release(uVar4);
    _objc_release(puVar5);
    _objc_release(uVar1);
    return;
  }
  return;
}



/* Entry: 10796c330; end: 10796c417; -[SCDeepLinkingUrlInterceptor isExternalDeepLinkURL:allowUniversalDeepLink:] */

ulong FUN_10796c330(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfddc60(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf32ee0();
    _objc_release(uVar1);
    if (uVar2 == 0) {
      func_0x00010bdfb200(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      param_4 = (ulong)(param_1 != 0);
    }
    else {
      param_1 = param_3;
      func_0x00010beec820(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      param_4 = (ulong)((uint)uVar2 ^ 1);
      _objc_release(uVar1);
    }
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return param_4;
}



/* Entry: 10796c9d0; end: 10796cb7b; -[SCDeepLinkingUrlInterceptor _destinationForSafariDeeplinkURL:] */

void FUN_10796c9d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  func_0x00010bf44780();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010c08fa60();
  _objc_release(puVar8);
  if (puVar2 < (undefined *)0x2) {
    puVar8 = (undefined *)0x0;
    goto LAB_10796cb58;
  }
  puVar8 = puVar1;
  func_0x00010c0f5800(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010c260c00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25cf40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar8);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar8;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0720c0();
  if ((int)puVar5 == 0) {
    puVar5 = puVar2;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0720c0();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar8);
    if ((int)puVar7 != 0) goto LAB_10796cb34;
    puVar8 = (undefined *)0x0;
  }
  else {
    _objc_release(puVar4);
    _objc_release(puVar8);
LAB_10796cb34:
    _objc_retain(puVar2);
    puVar8 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
LAB_10796cb58:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10796d1f4; end: 10796d20b; -[SCDeepLinkingUrlInterceptor interceptorDelegate] */

void FUN_10796d1f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10796d8c0; end: 10796da97; -[SCStoriesChromeInteractionSession registeredEventsForOperaSession] */

void FUN_10796d8c0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined8 in_x4;
  undefined8 uVar16;
  ulong uVar17;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  ppuVar14 = &puStack_c0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b6160;
  func_0x00010bf3d9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6160;
  puStack_c0 = puVar1;
  func_0x00010c277180();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b6160;
  puStack_b8 = puVar2;
  func_0x00010c261120();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2d30;
  puStack_b0 = puVar3;
  func_0x00010bfdffe0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110eb0218;
  puVar5 = PTR_PTR_1126b2d30;
  puStack_a8 = puVar4;
  func_0x00010bf5b100();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2d30;
  puStack_98 = puVar5;
  func_0x00010c25fd00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2ce8;
  puStack_90 = puVar6;
  func_0x00010c25fe20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2d30;
  puStack_88 = puVar7;
  func_0x00010bfa1100();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110eb0258;
  puVar9 = PTR_PTR_1126b6128;
  puStack_80 = puVar8;
  func_0x00010c15b3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = 0xb;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar14);
  _objc_retain(uVar15);
  _objc_retain(in_x4);
  puVar2 = PTR_PTR_1126c9a58;
  uVar11 = uVar15;
  func_0x00010c118b40(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07fc00();
  _objc_release(uVar11);
  if ((int)puVar2 == 0) goto code_r0x00010796dddc;
  uVar11 = uVar15;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(puVar1 + 0x30);
  *(undefined8 *)(puVar1 + 0x30) = uVar12;
  _objc_release(uVar16);
  _objc_release(uVar11);
  uVar11 = uVar15;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(puVar1 + 0x28);
  *(undefined8 *)(puVar1 + 0x28) = uVar12;
  _objc_release(uVar16);
  _objc_release(uVar11);
  uVar17 = *(ulong *)(puVar1 + 0x28);
  puVar2 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  _objc_opt_isKindOfClass(uVar17,puVar2);
  if ((uVar17 & 1) == 0) goto code_r0x00010796dddc;
  puVar2 = PTR_PTR_1126b6160;
  func_0x00010c277180(PTR_PTR_1126b6160);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = (undefined1 *)ppuVar14;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)puVar13 != 0) {
    func_0x00010beb9e80(puVar1);
    goto code_r0x00010796dddc;
  }
  puVar2 = PTR_PTR_1126b6160;
  func_0x00010c261120(PTR_PTR_1126b6160);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = (undefined1 *)ppuVar14;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)puVar13 != 0) {
    func_0x00010beb8280(puVar1);
    goto code_r0x00010796dddc;
  }
  puVar2 = PTR_PTR_1126b6160;
  func_0x00010bf3d9e0(PTR_PTR_1126b6160);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = (undefined1 *)ppuVar14;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)puVar13 != 0) {
    puVar1 = puVar1 + 0x18;
    _objc_loadWeakRetained(puVar1);
    puVar2 = puVar1;
    func_0x00010c29cc40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c98a0;
    func_0x00010c0689a0(PTR_PTR_1126c98a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84d40(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    goto code_r0x00010796dddc;
  }
  puVar2 = PTR_PTR_1126b2d30;
  func_0x00010bfdffe0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = (undefined1 *)ppuVar14;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)puVar13 != 0) {
    func_0x00010beb9e80(puVar1);
    puVar1[0x38] = 1;
    goto code_r0x00010796dddc;
  }
  puVar2 = PTR_PTR_1126b2d30;
  func_0x00010c25fd00(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = (undefined1 *)ppuVar14;
  func_0x00010c0720c0();
  if ((int)puVar13 == 0) {
    puVar3 = PTR_PTR_1126b2ce8;
    func_0x00010c25fe20(PTR_PTR_1126b2ce8);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = (undefined1 *)ppuVar14;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((int)puVar13 != 0) goto code_r0x00010796dd70;
    puVar13 = (undefined1 *)ppuVar14;
    func_0x00010c0720c0();
    if ((int)puVar13 == 0) {
      puVar13 = (undefined1 *)ppuVar14;
      func_0x00010c0720c0();
      if ((int)puVar13 == 0) {
        puVar2 = PTR_PTR_1126b2d30;
        func_0x00010bf5b100(PTR_PTR_1126b2d30);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = (undefined1 *)ppuVar14;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if ((int)puVar13 == 0) {
          puVar2 = PTR_PTR_1126b2d30;
          func_0x00010bfa1100(PTR_PTR_1126b2d30);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = (undefined1 *)ppuVar14;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          if ((int)puVar13 == 0) {
            puVar2 = PTR_PTR_1126b6128;
            func_0x00010c15b3c0(PTR_PTR_1126b6128);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = (undefined1 *)ppuVar14;
            func_0x00010c0720c0();
            _objc_release(puVar2);
            if ((int)puVar13 != 0) {
              func_0x00010be57680(puVar1);
            }
          }
          else {
            func_0x00010bed7dc0(puVar1);
          }
        }
        else {
          func_0x00010be6d540(puVar1);
        }
      }
      else {
        func_0x00010be27500(puVar1);
      }
      goto code_r0x00010796dddc;
    }
    func_0x00010c1f9640(PTR_PTR_1126c55c0);
  }
  else {
    _objc_release(puVar2);
code_r0x00010796dd70:
    func_0x00010c1f9640(PTR_PTR_1126c55c0);
    uVar11 = in_x4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf1f3c0();
    if ((int)uVar12 != 0) {
      func_0x000108f48110(*(undefined8 *)(puVar1 + 0x78));
    }
    _objc_release(uVar11);
  }
  func_0x00010be313a0(puVar1);
code_r0x00010796dddc:
  _objc_release(in_x4);
  _objc_release(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar14);
  return;
}



/* Entry: 10796ea0c; end: 10796ebdb; -[SCStoriesChromeInteractionSession _showMiniProfileWithStoriesPlaybackSequence] */

void FUN_10796ea0c(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **unaff_x23;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = lVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    puStack_78 = &UNK_10796ebdc;
    puStack_70 = &UNK_1109f2020;
    _objc_retain(lVar2);
    unaff_x23 = &puStack_88;
    param_2 = auStack_58;
    lStack_68 = lVar2;
    _objc_copyWeak(auStack_60);
    func_0x00010bfaa4c0(uVar4);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_60);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 5);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126afca8;
  if (param_2 == (undefined1 *)0x0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dc46f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc46f8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238760(puVar5);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  else {
    ppuVar6 = (undefined **)(lVar2 + 0x28);
    _objc_loadWeakRetained(ppuVar6);
    func_0x00010bdfe0a0();
  }
  _objc_release(ppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10796f36c; end: 10796f3fb; -[SCStoriesChromeInteractionSession friendProfileDidDismiss:] */

void FUN_10796f36c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010bf75040(param_1);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0cfb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bfb8800(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10796f9f4; end: 10796fc17;  */

void FUN_10796f9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5868;
  _objc_retain();
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_alloc();
  func_0x00010c05ed60();
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10797192c; end: 107971a0f;  */

void FUN_10797192c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27dd80();
  uVar1 = lVar3 + 1;
  if (((uVar1 < 0x1c && (1L << (uVar1 & 0x3f) & 0xb4b5dbbU) != 0) && uVar1 < 0x1b) &&
      (1L << (uVar1 & 0x3f) & 0x6c6bd77U) != 0) {
    _objc_release(lVar2);
    lVar2 = *(long *)(param_1 + 0x20) + 0x40;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c29e000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13c000();
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1079722a8; end: 10797246f; -[SCStoriesSharingSession _fetchCreatorSettingSuccess:posterUserId:] */

void FUN_1079722a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  func_0x00010c1d0640(puVar1);
  func_0x00010c1d0640(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c079480(param_3);
  _objc_release(param_3);
  func_0x00010c0df6e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  func_0x00010c1d0640(puVar1);
  puVar2 = PTR_PTR_1126ceed8;
  _objc_alloc(PTR_PTR_1126ceed8);
  func_0x00010c04dee0();
  _objc_release(param_4);
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_107972470;
  puStack_68 = &UNK_110841f80;
  uStack_60 = param_1;
  puStack_58 = puVar1;
  _objc_retain(puVar1);
  func_0x0001000d76cc("APPSTORE",&puStack_80);
  _objc_release(puStack_58);
  _objc_release(puVar1);
  return;
}



/* Entry: 107973398; end: 10797352f;  */

void FUN_107973398(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  puStack_68 = &UNK_107973530;
  puStack_60 = &UNK_107973540;
  lStack_58 = 0;
  uVar3 = 0;
  _dispatch_semaphore_create();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  func_0x00010c11d620(uVar1);
  _dispatch_semaphore_wait(uVar3,0xffffffffffffffff);
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (puStack_78[5] != 0) {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = puStack_78[5];
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_80,8);
  lVar5 = lStack_58;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    lVar6 = 8;
    __Block_object_dispose(&uStack_80);
    __Unwind_Resume();
    *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(lVar6 + 0x28) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1079741e8; end: 10797459b;  */

void FUN_1079741e8(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar6 = PTR_PTR_1126ae558;
  ppuVar5 = &puStack_f0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x3032000000;
  puStack_70 = &UNK_107973530;
  puStack_68 = &UNK_107973540;
  lStack_60 = 0;
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x2020000000;
  uStack_90 = 0;
  lVar11 = *(long *)(param_1 + 0x38);
  if (lVar11 < 3) {
    if (lVar11 == 1) {
LAB_1079742bc:
      puVar6 = param_1 + 0x30;
      _objc_loadWeakRetained();
      puVar2 = puVar6;
      func_0x00010be1e240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      puStack_e0 = &UNK_10797459c;
      puStack_d8 = &UNK_1109f2340;
      uStack_b0 = *(undefined8 *)(param_1 + 0x38);
      puStack_c8 = &uStack_88;
      uVar14 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar14);
      puStack_c0 = &uStack_a8;
      uStack_d0 = uVar14;
      _objc_copyWeak(auStack_b8,param_1 + 0x30);
      puVar1 = puVar2;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_destroyWeak(auStack_b8);
      _objc_release(uStack_d0);
      goto LAB_1079744f8;
    }
    if (lVar11 != 2) {
LAB_107974370:
      puVar2 = *(undefined **)(param_1 + 0x28);
      _objc_opt_class(puVar2);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_50 = &PTR____CFConstantStringClassReference_110ea72d8;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar6;
      func_0x00010bfe9c80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      ppuVar5 = (undefined **)puVar6;
      goto LAB_1079744f8;
    }
    func_0x000107d51d8c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = (undefined **)param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined *)ppuVar5;
    func_0x00010bfbf840();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = 1;
  }
  else {
    if (lVar11 != 3) {
      if (lVar11 != 4) goto LAB_107974370;
      goto LAB_1079742bc;
    }
    func_0x000107d51d8c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = (undefined **)param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined *)ppuVar5;
    func_0x00010bfbf860();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = 10;
  }
  uVar12 = puStack_80[5];
  puStack_80[5] = puVar6;
  _objc_release(uVar12);
  _objc_release(ppuVar5);
  _objc_release(param_1);
  puStack_a0[3] = uVar14;
  puVar2 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar14 = puStack_80[5];
  func_0x00010beec820(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar2);
  _objc_release(uVar14);
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0();
  _objc_retainAutoreleasedReturnValue();
LAB_1079744f8:
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_a8,8);
  __Block_object_dispose(&uStack_88,8);
  lVar11 = lStack_60;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_destroyWeak((undefined *)((long)ppuVar5 + 0x38));
    __Block_object_dispose(&uStack_a8,8);
    lVar10 = 8;
    __Block_object_dispose(&uStack_88);
    __Unwind_Resume();
    lVar7 = lVar10;
    _objc_retain();
    if (*(long *)(lVar11 + 0x40) == 1) {
      func_0x000107d51d8c();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar10;
      func_0x00010c294420(lVar10);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bfbf8a0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = *(long *)(*(long *)(lVar11 + 0x28) + 8);
      uVar14 = *(undefined8 *)(lVar13 + 0x28);
      *(long *)(lVar13 + 0x28) = lVar9;
      _objc_release(uVar14);
      uVar14 = 3;
    }
    else {
      lVar7 = lVar11 + 0x38;
      _objc_loadWeakRetained();
      lVar8 = lVar10;
      func_0x00010c294420(lVar10);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar7;
      func_0x00010be9a5a0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = *(long *)(*(long *)(lVar11 + 0x28) + 8);
      lVar15 = *(long *)(lVar13 + 0x28);
      *(long *)(lVar13 + 0x28) = lVar9;
      uVar14 = 4;
    }
    _objc_release(lVar15);
    _objc_release(lVar8);
    _objc_release(lVar7);
    *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x30) + 8) + 0x18) = uVar14;
    lVar7 = lVar10;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c08fa60();
    lVar9 = lVar10;
    if (lVar8 == 0) {
      func_0x00010c294420(lVar10);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf85d80(lVar10);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar7);
    puVar1 = PTR_PTR_1126b0800;
    _objc_alloc(PTR_PTR_1126b0800);
    uVar14 = *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x28) + 8) + 0x28);
    func_0x00010beec820(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051840(puVar1);
    _objc_release(uVar14);
    _objc_release(lVar9);
    _objc_release(lVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107974c84; end: 107974d9f;  */

void FUN_107974c84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_58,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 107975384; end: 1079755f7; -[SCStoriesSharingSession legacySendToScopeWillSend:sendToSelection:] */

void FUN_107975384(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf0e960(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0af260();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf6f440(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  _objc_release(uVar1);
  func_0x00010be8d520(param_1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079763f4; end: 1079764bb;  */

void FUN_1079763f4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf50b20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf026a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x0001086063f4(uVar2,*(undefined8 *)(param_1 + 0x38),0,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea07a0(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10797706c; end: 10797727b;  */

void FUN_10797706c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(lVar1 + 0x30);
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  uVar5 = *(undefined8 *)(lVar1 + 0xe8);
  _objc_retain(param_3);
  func_0x000107972d54(uVar3,uVar4,uVar5);
  lVar1 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  func_0x00010c25c580(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebee80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar4 = *(undefined8 *)(lVar2 + 0x28);
  *(long *)(lVar2 + 0x28) = lVar1;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107977f74; end: 1079784a7; -[SCStoriesSharingSession didSelectDeleteStorySnaps:clientIdsBeingDeleted:] */

void FUN_107977f74(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  if (*(long *)(param_1 + 0x148) != 0) {
    (**(code **)(*(long *)(param_1 + 0x148) + 0x10))();
    uVar2 = *(undefined8 *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x148) = 0;
    _objc_release(uVar2);
  }
  lVar16 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar16);
  lVar15 = lVar16;
  func_0x00010c2bf380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bf1c0();
  _objc_release(lVar15);
  _objc_release(lVar16);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_4);
  lStack_138 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_f0,0x10);
  if (lStack_138 != 0) {
    lVar16 = *plStack_120;
    do {
      lVar15 = 0;
      do {
        if (*plStack_120 != lVar16) {
          _objc_enumerationMutation(param_4);
        }
        uVar3 = param_1 + 0x50;
        _objc_loadWeakRetained();
        uVar4 = uVar3;
        func_0x00010c101420();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        iVar1 = (int)*(undefined8 *)(param_1 + 0xe8);
        func_0x000108f485b4();
        if (iVar1 != 0 && uVar4 != 0) {
          uVar3 = param_1 + 0x50;
          _objc_loadWeakRetained();
          uVar12 = uVar3;
          func_0x00010c101260();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar12;
          func_0x00010bf5ee40();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf5f0a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar5);
          _objc_release(uVar12);
          _objc_release(uVar3);
          if (uVar4 == uVar6) {
            uVar3 = param_1 + 0x50;
            _objc_loadWeakRetained();
            uVar5 = uVar3;
            func_0x00010c101260();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(uVar4);
            _objc_retain(uVar5);
            uVar6 = uVar4;
            func_0x00010bfce400();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            uVar12 = 0;
            if (uVar6 != 0) {
              uVar12 = uVar4;
              func_0x00010bfce400();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar12;
              func_0x00010c084fc0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar12);
              uVar12 = uVar6;
              func_0x00010bfecde0(uVar6,param_2,uVar4);
              if (uVar12 == 0) {
                uVar12 = uVar6;
                func_0x00010bf529e0();
                if (uVar12 < 2) goto LAB_1079781d8;
                lVar11 = 1;
LAB_1079781c4:
                uVar12 = uVar6;
                func_0x00010c0dfd40(uVar6,param_2,lVar11);
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                if (uVar12 != 0x7fffffffffffffff) {
                  lVar11 = uVar12 - 1;
                  goto LAB_1079781c4;
                }
LAB_1079781d8:
                uVar7 = uVar5;
                func_0x00010bfcf800();
                _objc_retainAutoreleasedReturnValue();
                uVar12 = uVar4;
                func_0x00010bfce400(uVar4);
                _objc_retainAutoreleasedReturnValue();
                uVar14 = uVar7;
                func_0x00010bfecde0(uVar7,param_2,uVar12);
                _objc_release(uVar12);
                if (uVar14 == 0x7fffffffffffffff) {
                  uVar12 = 0;
                }
                else {
                  if (0 < (long)uVar14) {
                    uVar13 = uVar14 + 1;
                    do {
                      uVar8 = uVar7;
                      func_0x00010c0dfd40(uVar7,param_2,uVar13 - 2);
                      _objc_retainAutoreleasedReturnValue();
                      uVar9 = uVar8;
                      func_0x00010c084fc0();
                      _objc_retainAutoreleasedReturnValue();
                      uVar12 = uVar9;
                      func_0x00010c089820();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(uVar9);
                      _objc_release(uVar8);
                      if (uVar12 != 0) goto LAB_107978318;
                      uVar13 = uVar13 - 1;
                    } while (1 < uVar13);
                  }
                  do {
                    uVar14 = uVar14 + 1;
                    uVar12 = uVar7;
                    func_0x00010bf529e0();
                    if (uVar12 <= uVar14) {
                      uVar12 = 0;
                      break;
                    }
                    uVar13 = uVar7;
                    func_0x00010c0dfd40(uVar7,param_2,uVar14);
                    _objc_retainAutoreleasedReturnValue();
                    uVar8 = uVar13;
                    func_0x00010c084fc0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar12 = uVar8;
                    func_0x00010bfb1920();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar8);
                    _objc_release(uVar13);
                  } while (uVar12 == 0);
                }
LAB_107978318:
                _objc_release(uVar7);
              }
              _objc_release(uVar6);
            }
            _objc_release(uVar5);
            _objc_release(uVar4);
            _objc_release(uVar5);
            _objc_release(uVar3);
            uVar3 = uVar12;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar3;
            func_0x00010c08fa60();
            _objc_release(uVar3);
            if (uVar5 != 0) {
              lVar11 = param_1 + 0x50;
              _objc_loadWeakRetained(lVar11);
              uVar3 = uVar12;
              func_0x00010be36bc0(uVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1ddd60(lVar11,param_2,uVar3,0);
              _objc_release(uVar3);
              _objc_release(lVar11);
            }
            _objc_release(uVar12);
          }
        }
        lVar11 = param_1 + 0x50;
        _objc_loadWeakRetained(lVar11);
        func_0x00010c12db80();
        _objc_release(lVar11);
        _objc_release(uVar4);
        lVar15 = lVar15 + 1;
      } while (lVar15 != lStack_138);
      lStack_138 = param_4;
      func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_f0,0x10);
    } while (lStack_138 != 0);
  }
  _objc_release(param_4);
  uVar10 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar10;
  func_0x00010c076220();
  _objc_release(uVar10);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(param_3 + 0xa0);
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107978c30; end: 107978f2b; -[SCStoriesSharingSession _getCreatorSnapchatter] */

void FUN_107978c30(long param_1,undefined *param_2,undefined8 param_3,undefined **param_4,
                  undefined *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar6 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar3);
    _objc_retain(puVar4);
    param_4 = &PTR____CFConstantStringClassReference_110ea72f8;
    param_5 = PTR___dispatch_main_q_11034be20;
    func_0x00010bfaa4c0(uVar13);
    _objc_release(puVar6);
    _objc_release(uVar13);
    _objc_release(uVar5);
    puVar6 = puVar4;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  uVar13 = *(undefined8 *)(lVar3 + 0x28);
  if (param_2 == (undefined *)0x0) {
    uVar5 = *(undefined8 *)(lVar3 + 0x30);
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_4 = (undefined **)0x0;
    param_5 = puVar4;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010bf43ca0(uVar13);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(uVar5);
  }
  else {
    puVar9 = param_2;
    func_0x00010bf43d60(uVar13);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar13 = *(undefined8 *)(param_2 + 0x90);
  _objc_opt_class(uVar13);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = param_4;
  func_0x00010c0720c0();
  _objc_release(uVar13);
  if ((int)ppuVar7 == 0) goto code_r0x00010797912c;
  puVar6 = PTR_PTR_1126b4030;
  func_0x00010bf5b2c0(PTR_PTR_1126b4030);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar9;
  func_0x00010c0720c0();
  if ((int)puVar4 == 0) {
    puVar4 = PTR_PTR_1126b4030;
    func_0x00010bf5b2e0(PTR_PTR_1126b4030);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    _objc_release(puVar6);
    if ((int)puVar8 == 0) {
      puVar6 = PTR_PTR_1126b4030;
      func_0x00010bf5b300(PTR_PTR_1126b4030);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar9;
      func_0x00010c0720c0();
      if ((int)puVar4 == 0) {
        puVar4 = PTR_PTR_1126b4030;
        func_0x00010bf5b340(PTR_PTR_1126b4030);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar9;
        func_0x00010c0720c0();
        _objc_release(puVar4);
        _objc_release(puVar6);
        if ((int)puVar8 == 0) goto code_r0x00010797912c;
      }
      else {
        _objc_release(puVar6);
      }
      iVar1 = (int)*(undefined8 *)(param_2 + 0xe8);
      func_0x00010bf1f440();
      if (iVar1 != 0) {
        puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_198 = 0xc2000000;
        puStack_190 = &UNK_10797931c;
        puStack_188 = &UNK_110842e18;
        puStack_180 = param_2;
        func_0x0001000d76cc("APPSTORE",&puStack_1a0);
      }
      goto code_r0x00010797912c;
    }
  }
  else {
    _objc_release(puVar6);
  }
  puVar6 = PTR_PTR_1126b4038;
  func_0x00010bf5b6e0(PTR_PTR_1126b4038);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126b4040;
  _objc_opt_class(PTR_PTR_1126b4040);
  puVar8 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar6);
  puVar6 = puVar4;
  if (((ulong)puVar8 & 1) == 0) {
    puVar6 = (undefined *)0x0;
  }
  _objc_retain(puVar6);
  _objc_release(puVar4);
  puVar4 = puVar6;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010bf5b080(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar5;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x00010c0720c0();
  if ((int)puVar8 == 0) {
code_r0x00010797910c:
    _objc_release(uVar13);
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  else {
    uVar12 = *(long *)(param_2 + 0x30) - 0x49;
    if (((uVar12 < 0x1a) && ((1L << (uVar12 & 0x3f) & 0x2020001U) != 0)) ||
       ((uVar11 = *(long *)(param_2 + 0x30) - 0x57, uVar12 = uVar11 >> 1,
        (uVar12 | uVar11 << 0x3f) < 8 && ((1L << (uVar12 & 0x3f) & 0xb1U) != 0))))
    goto code_r0x00010797910c;
    _objc_release(uVar13);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_initWeak(auStack_148,param_2);
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    puStack_168 = &UNK_1079792dc;
    puStack_160 = &UNK_110841fb0;
    _objc_copyWeak(auStack_150,auStack_148);
    _objc_retain(puVar6);
    puStack_158 = puVar6;
    func_0x0001000d76cc("APPSTORE",&puStack_178);
    _objc_release(puStack_158);
    _objc_destroyWeak(auStack_150);
    _objc_destroyWeak(auStack_148);
  }
  _objc_release(puVar6);
code_r0x00010797912c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar9);
  return;
}



/* Entry: 107979524; end: 10797952b; -[SCStoriesSharingSession handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_107979524(void)

{
  return 0;
}



/* Entry: 10797979c; end: 1079797cb; -[SCStoriesSharingSession setMediaPlaybackSessionId:] */

void FUN_10797979c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107979afc; end: 107979b2b; -[SCDiscoverFeedActionHandlerStoryOpenContext .cxx_destruct] */

void FUN_107979afc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107979b90; end: 107979b97; -[SCDiscoverFeedActionHandler removeListener:] */

void FUN_107979b90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x278),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10797aac4; end: 10797aaf3; -[SCDiscoverFeedActionHandler setFriendingInterstitialPluginService:] */

void FUN_10797aac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x220) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10797c598; end: 10797c5a3;  */

void FUN_10797c598(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x280),
             PTR_s_cancelPresentingIfNecessary_1125a9478);
  return;
}



/* Entry: 10797cb74; end: 10797cd03;  */

void FUN_10797cb74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  _objc_retain(param_2);
  uVar7 = *(ulong *)(param_1 + 0x20);
  _objc_retain(uVar7);
  puVar1 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar2 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar1);
  uVar4 = uVar7;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  if (((uVar4 == 0) || (uVar2 = uVar7, func_0x000108538878(), (uVar2 & 1) != 0)) ||
     (uVar2 = uVar7, func_0x000108538ba0(), (int)uVar2 != 0)) {
    _objc_release(uVar4);
    _objc_release(uVar7);
  }
  else {
    uVar4 = uVar7;
    func_0x000108539290();
    _objc_release(uVar7);
    _objc_release(uVar7);
    if ((uVar4 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bee5240();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      lVar8 = *(long *)(lVar5 + 0x28);
      *(undefined8 *)(lVar5 + 0x28) = uVar3;
      goto LAB_10797cca0;
    }
  }
  lVar8 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 200);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010799a354(lVar8,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar8 != 0) {
    lVar5 = *(long *)(param_1 + 0x28);
    func_0x00010be0eee0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126d58b0;
    if (lVar5 != 0) {
      func_0x00010c2827c0(lVar5);
      func_0x00010bf82160();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar3 = *(undefined8 *)(lVar6 + 0x28);
      *(undefined **)(lVar6 + 0x28) = puVar1;
      _objc_release(uVar3);
    }
    _objc_release(lVar5);
  }
LAB_10797cca0:
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10797d864; end: 10797d8a7; -[SCDiscoverFeedActionHandler _friendStoriesSectionIdentifierFromPageType] */

void FUN_10797d864(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010be411a0();
  lVar1 = 0xc0;
  if (param_1 == 0) {
    lVar1 = 0x30;
  }
  uVar2 = *(undefined8 *)((long)&PTR_PTR_110cab530 + lVar1);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10797da08; end: 10797db53; -[SCDiscoverFeedActionHandler _friendStoriesPlaybackOverrideDictWithActionModel:] */

void FUN_10797da08(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27c440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 != 0) {
    lVar2 = param_3;
    func_0x00010c0b3ae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27c440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,lVar3,&PTR____CFConstantStringClassReference_110eb6298);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0dc140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_3;
    func_0x00010c0dc140(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110f42398);
    _objc_release(lVar2);
  }
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10797e0c8; end: 10797e1b7; -[SCDiscoverFeedActionHandler _presentPublicGroupChatWithConversationId:] */

void FUN_10797e0c8(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x198);
  func_0x00010c071800();
  if ((iVar1 != 0) && (lVar2 = param_3, func_0x00010c08fa60(), lVar2 != 0)) {
    puVar3 = PTR_PTR_1126b3530;
    _objc_alloc(PTR_PTR_1126b3530);
    lVar2 = param_1 + 0x238;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c038f40(puVar3,param_2,lVar2,1);
    _objc_release(lVar2);
    puVar4 = PTR_PTR_1126b5c08;
    _objc_alloc(PTR_PTR_1126b5c08);
    lVar2 = param_1 + 0x238;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c039140(puVar4,param_2,lVar2,param_3,2,puVar3,param_1);
    _objc_release(lVar2);
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x198),param_2,puVar4,param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10797ef8c; end: 10797f133;  */

void FUN_10797ef8c(long param_1,long param_2,undefined8 *param_3,undefined8 param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  if ((0 < param_1) || (param_5 != 0)) {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x2020000000;
    uStack_58 = 0;
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x2020000000;
    lStack_78 = param_1;
    if (param_2 != 0) {
      if (param_5 != 0) {
        func_0x00010bfecde0();
      }
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      uVar3 = *param_3;
      _objc_retain(param_2);
      _objc_retain(puVar1);
      func_0x00010bf97e80(uVar3);
      puVar2 = puVar1;
      func_0x00010bf51e00();
      _objc_autorelease();
      *param_3 = puVar2;
      _objc_release(puVar1);
      _objc_release(param_2);
      _objc_release(puVar1);
    }
    __Block_object_dispose(&uStack_90,8);
    __Block_object_dispose(&uStack_70,8);
  }
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 10797fe4c; end: 107980273; -[SCDiscoverFeedActionHandler _presentFriendStoriesOperaWithAllStoriesDataModels:friendStoryIds:allNonFriendGroupDataModels:actionModel:firstDisplayGroupDataModel:baseView:rankedFriendSummaryData:upNextDefaultFallbackStories:firstStory:isFromBadging:actionIdentifier:presentingConfig:interactionContext:] */

void FUN_10797fe4c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,byte param_12)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 in_stack_00000028;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(in_stack_00000028);
  puVar2 = PTR_PTR_1126ae4e8;
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_4);
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar2);
  uVar3 = param_4;
  func_0x00010c0d3c80();
  _objc_release(param_4);
  uVar4 = param_10;
  func_0x000100504554(param_10,&PTR___NSConcreteGlobalBlock_1109f27d0);
  func_0x00010befa160(uVar3);
  _objc_release(uVar4);
  _objc_retain(param_6);
  lVar8 = param_6;
  func_0x00010c084b00();
  if (lVar8 != 1) {
    func_0x00010c084b00(param_6);
  }
  _objc_release(param_6);
  func_0x00010bed2340(param_1);
  uVar4 = uVar3;
  func_0x00010bf51e00(uVar3);
  uVar5 = param_11;
  func_0x00010c259cc0(param_11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be488a0(param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  lVar8 = param_3;
  func_0x00010bf529e0();
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_3;
    func_0x00010bf529e0();
    lVar8 = lVar8 + -1;
  }
  *(long *)(param_1 + 0x1e0) = lVar8;
  func_0x00010bea8aa0(param_1);
  _objc_retain(param_6);
  lVar8 = param_6;
  func_0x00010c084b00();
  if (lVar8 == 1) {
    _objc_release();
  }
  else {
    lVar8 = param_6;
    func_0x00010c084b00();
    _objc_release(param_6);
    if (lVar8 != 2) {
      bVar1 = false;
      goto LAB_10798009c;
    }
  }
  func_0x000107b018f8(0,0x1a,*(undefined8 *)(param_1 + 0x1a0));
  bVar1 = true;
LAB_10798009c:
  func_0x00010be195a0();
  uVar4 = param_11;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010be19500();
  _objc_retainAutoreleasedReturnValue();
  if (((param_12 & 1) != 0) || (bVar1)) {
    func_0x00010c084b00();
  }
  func_0x00010be45f00();
  uVar5 = param_11;
  func_0x00010c259cc0(param_11);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010be17d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d6c60();
  lVar7 = param_6;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27c4a0();
  func_0x00010be78160(param_1);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar8);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(in_stack_00000028);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107981384; end: 1079813bb;  */

void FUN_107981384(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be747e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079827dc; end: 1079828eb;  */

void FUN_1079827dc(long param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_2;
    func_0x00010bfddf20();
    uVar1 = (undefined1)uVar3;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107983234; end: 1079832ef;  */

void FUN_107983234(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  puStack_50 = &UNK_1079832f0;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 107983e5c; end: 107983f5f; -[SCDiscoverFeedActionHandler didBlockUserWithCreatorId:similarStoryIdFpsArray:] */

void FUN_107983e5c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x188);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c0e00;
    func_0x00010c0d7580(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf1f320(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    if ((int)uVar4 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0xd0);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                          &PTR__OBJC_CLASS___NSConstantArray_1111816e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12e640(uVar4,param_2,param_3,param_4,puVar3);
      _objc_release(puVar3);
      _objc_release(uVar4);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107984978; end: 10798497b; -[SCDiscoverFeedActionHandler operaPresenterDidCancelDismissing:] */

void FUN_107984978(void)

{
  return;
}



/* Entry: 107985408; end: 10798540b; -[SCDiscoverFeedActionHandler playbackPresenter:didBeginPlayingStory:playbackScope:] */

void FUN_107985408(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ead70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenter_didBeginPlayingPl_112618570);
  return;
}



/* Entry: 107985428; end: 10798542b; -[SCDiscoverFeedActionHandler playbackPresenterWillBeginPresenting:transitionAnimator:playbackScope:] */

void FUN_107985428(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eb030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterWillBeginPresentin_112618620);
  return;
}



/* Entry: 107985bac; end: 107985bff; -[SCDiscoverFeedActionHandler timeBeforeReturningToCamera] */

double FUN_107985bac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f54a48(uVar2,uVar1);
  _objc_release(uVar1);
  return (double)(int)uVar2;
}



/* Entry: 107986128; end: 107986147;  */

void FUN_107986128(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removePlaylistItemGroupForID__112629110,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107986378; end: 10798638f; -[SCDiscoverFeedActionHandler presentingViewController] */

void FUN_107986378(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x238);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107986418; end: 10798641f; -[SCDiscoverFeedActionHandler setCurrentPageSessionId:] */

void FUN_107986418(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107986480; end: 107986487; -[SCDiscoverFeedActionHandler setPageType:] */

void FUN_107986480(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x270) = param_3;
  return;
}



/* Entry: 107986510; end: 10798685f; -[SCDiscoverFeedActionHandler .cxx_destruct] */

void FUN_107986510(long param_1)

{
  _objc_storeStrong(param_1 + 0x288,0);
  _objc_storeStrong(param_1 + 0x280,0);
  _objc_storeStrong(param_1 + 0x278,0);
  _objc_destroyWeak(param_1 + 0x268);
  _objc_destroyWeak(param_1 + 0x260);
  _objc_storeStrong(param_1 + 600,0);
  _objc_destroyWeak(param_1 + 0x250);
  _objc_storeStrong(param_1 + 0x248,0);
  _objc_destroyWeak(param_1 + 0x240);
  _objc_destroyWeak(param_1 + 0x238);
  _objc_storeStrong(param_1 + 0x228,0);
  _objc_storeStrong(param_1 + 0x220,0);
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_destroyWeak(param_1 + 0x1d0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
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



/* Entry: 107986b5c; end: 107986b63; -[SCDiscoverFeedActionSheetActionHandler removeListener:] */

void FUN_107986b5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1079885a0; end: 1079886fb; -[SCDiscoverFeedActionSheetActionHandler _submitHideRequestWithToken:forStory:] */

void FUN_1079885a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010846cd9c(uVar1,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c135d00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010c25f5e0(uVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107988d98; end: 1079890bf; -[SCDiscoverFeedActionSheetActionHandler _sendPublisherURLForActionDataModel:] */

void FUN_107988d98(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc();
  lVar2 = param_1 + 0x1d0;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126b1b28;
  lVar2 = param_3;
  func_0x00010bf68980(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c25a160(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010c1057a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11b760(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126b1b30;
  _objc_alloc();
  func_0x00010c056660();
  _objc_initWeak(auStack_90,param_1);
  lVar2 = param_1 + 0x1c8;
  _objc_loadWeakRetained(lVar2);
  _objc_copyWeak(auStack_98,auStack_90);
  _objc_retain(puVar5);
  func_0x00010bf83dc0(lVar2);
  _objc_release(lVar2);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  lVar2 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110ea8b98;
  func_0x00010c259740(param_3);
  func_0x00010c0df880();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110ea8c18;
  puVar9 = *(undefined **)(param_1 + 0x18);
  puVar7 = puVar9;
  puStack_78 = puVar6;
  if (puVar9 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar10);
  _objc_release(puVar8);
  if (puVar9 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    __Unwind_Resume();
    param_3 = param_3 + 0x28;
    _objc_loadWeakRetained();
    if (param_3 != 0) {
      func_0x00010bf9d620(*(undefined8 *)(param_3 + 0xd0));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 107989750; end: 10798977b;  */

void FUN_107989750(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079897f8; end: 10798990b; -[SCDiscoverFeedActionSheetActionHandler _dismissActionSheetAndPresentPublicProfile:sourceView:] */

void FUN_1079897f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + 0x1c8;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf83dc0(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10798a330; end: 10798a443; -[SCDiscoverFeedActionSheetActionHandler _dismissActionSheetAndPresentPublisherProfile:sourceView:] */

void FUN_10798a330(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + 0x1c8;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf83dc0(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10798a87c; end: 10798a913; -[SCDiscoverFeedActionSheetActionHandler _creatorIdForStory:] */

void FUN_10798a87c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x000107c03ddc();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    lVar3 = lVar1;
    if (lVar2 == 0) {
      lVar2 = param_3;
      func_0x00010c25a160(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(lVar2);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10798b490; end: 10798b4a7;  */

void FUN_10798b490(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10798bdd4; end: 10798bddf;  */

void FUN_10798bdd4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,param_2);
  return;
}



/* Entry: 10798c398; end: 10798c3d3;  */

void FUN_10798c398(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0xb8),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10798c9fc; end: 10798cb07;  */

void FUN_10798c9fc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf54200();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  (**(code **)(param_2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c2600e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10798ce40; end: 10798ce73;  */

void FUN_10798ce40(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be0cd20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10798d52c; end: 10798d56b;  */

void FUN_10798d52c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259740(uVar2);
  func_0x00010bdfc500(lVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10798d7dc; end: 10798d7e7; -[SCDiscoverFeedActionSheetActionHandler setCustomStatusBarStyleContextController:] */

void FUN_10798d7dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1d8,param_3);
  return;
}



/* Entry: 10798e478; end: 10798e513;  */

void FUN_10798e478(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010798df54(param_3,param_3,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),param_4,*(undefined1 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


