/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10795efa0; end: 10795f003; -[SCShakeSeparatorView _setupLines] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10795efa0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010beadbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112766378);
  *(long *)(param_1 + _DAT_112766378) = lVar1;
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010beadbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276637c);
  *(long *)(param_1 + _DAT_11276637c) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10795f4d4; end: 10795f4f7;  */

bool FUN_10795f4d4(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cad08;
  func_0x00010c2827c0(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cad08);
  return ppuVar1 == (undefined **)0x1;
}



/* Entry: 10795f618; end: 10795f6f3; -[SCSnapchatNotificationHandler getLatestNotificationInfo:] */

void FUN_10795f618(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c0dc100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      (**(code **)(param_3 + 0x10))(param_3,0);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0dc100(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      func_0x00010bfc6dc0(uVar2);
      _objc_release(uVar2);
      _objc_release(param_3);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10795fa98; end: 10795fb37;  */

void FUN_10795fa98(long param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14aae0(PTR_PTR_1126b6c20);
    _objc_release(puVar1);
  }
  if (param_4 != 0) {
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1079600bc; end: 10796026b; +[SCShakeLogFileManager saveExtraAttachmentImages:images:inPath:] */

void FUN_1079600bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 == 0) ||
     (uVar6 = param_4, func_0x00010bf529e0(), puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,
     uVar6 == 0)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar6 = param_4;
    func_0x00010bf529e0(param_4);
    func_0x00010bf0a0e0(puVar5,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfc2e00(param_1,param_2,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_4;
    func_0x00010bf529e0();
    if (uVar6 != 0) {
      uVar6 = 0;
      do {
        uVar2 = param_4;
        func_0x00010c0dfd40(param_4,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        _UIImageJPEGRepresentation(0x3fe3333333333333);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        uVar6 = uVar6 + 1;
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110ea69d8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beeb940(param_1,param_2,puVar4,uVar3,uVar1);
        func_0x00010befa120(puVar5,param_2,puVar4);
        _objc_release(puVar4);
        _objc_release(uVar3);
        uVar2 = param_4;
        func_0x00010bf529e0();
      } while (uVar6 < uVar2);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107960d50; end: 107960dbb; +[SCShakeLogFileManager removeTicketFolder:inPath:] */

undefined * FUN_107960d50(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010bfc2e00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c12cc60();
  _objc_release(puVar1);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 1079612b4; end: 1079612f3; -[SCShakeSyncManager processNewTicketForConfiguration:] */

void FUN_1079612b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1c11a0();
  uVar1 = param_1;
  func_0x00010be41000();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,1);
    return;
  }
  return;
}



/* Entry: 107961624; end: 10796181b; -[SCShakeSyncManager _executePendingTicketInternal] */

void FUN_107961624(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010c0b5d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,3);
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0b5de0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be1d220();
  _objc_release(uVar2);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0b5de0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c1380(param_1);
    _objc_release(uVar2);
    func_0x00010c1c1200(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010becf2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__transitionToState_backOffDelayM_112591650,1,lVar1);
    return;
  }
  func_0x00010c1c1380(param_1);
  puVar3 = PTR_PTR_1126d5800;
  _objc_alloc(PTR_PTR_1126d5800);
  lVar1 = param_1;
  func_0x00010c0b5d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c0b5cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0f98a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052160(puVar3);
  _objc_release(uVar2);
  _objc_release(lVar4);
  _objc_release(lVar1);
  func_0x00010c142680(puVar3);
  _objc_release(puVar3);
  return;
}



/* Entry: 107961c64; end: 107961c6b; -[SCShakeSyncManager mCurrentState] */

undefined8 FUN_107961c64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107961cb0; end: 107961cf7; -[SCShakeSyncManager .cxx_destruct] */

void FUN_107961cb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079622dc; end: 1079622e3; -[SCShakeTicket mNotificationEmails] */

undefined8 FUN_1079622dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10796231c; end: 107962323; -[SCShakeTicket mWithAttachments] */

undefined1 FUN_10796231c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10796235c; end: 107962363; -[SCShakeTicket mReportSource] */

undefined8 FUN_10796235c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1079623c4; end: 1079623cb; -[SCShakeTicket lastCaptureSessionID] */

undefined8 FUN_1079623c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 107962610; end: 107962617; -[SCShakeTicketBuilder mId] */

undefined8 FUN_107962610(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107962650; end: 107962657; -[SCShakeTicketBuilder mSubFeature] */

undefined8 FUN_107962650(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107962690; end: 107962697; -[SCShakeTicketBuilder mShouldCreateJiraTicket] */

undefined1 FUN_107962690(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 1079626f8; end: 1079626ff; -[SCShakeTicketBuilder mShakeSensitivityType] */

undefined8 FUN_1079626f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107962760; end: 107962767; -[SCShakeTicketBuilder mViewControllerFeature] */

undefined8 FUN_107962760(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1079627a0; end: 1079627a7; -[SCShakeTicketBuilder mHasCameraRollAttachment] */

undefined1 FUN_1079627a0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 107962830; end: 107962837; -[SCShakeTicketBuilder mJiraLabels] */

undefined8 FUN_107962830(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107962870; end: 107962877; -[SCShakeTicketBuilder activeLensID] */

undefined8 FUN_107962870(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 1079628b0; end: 1079628b7; -[SCShakeTicketBuilder traceId] */

undefined8 FUN_1079628b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 107962b74; end: 107962bc7; +[SCShakeTicketAdapter willEnterForegroundWithConfiguration:] */

void FUN_107962b74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5810;
  _objc_retain(param_3);
  func_0x00010c22ba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c114f80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10796398c; end: 107963ddf; -[SCShakeTicketAdapter fileInternalShakeTicket:reportType:reportSource:bugDescription:project:subProject:selfAssign:email:shakeCaptureData:createTimestamp:videoFilePath:extraAttachmentImages:extraAttachmentVideos:viewControllerName:viewControllerFeature:jiraMetaInfo:lastCrashReportId:linkedNonFatalId:infoProviderRegistry:withConfiguration:carrierInfo:jiraLabels:] */

void FUN_10796398c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain();
  _objc_retain(param_24);
  _objc_retain(param_19);
  uVar1 = param_1;
  func_0x00010be11fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bdcd200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_19);
  uVar3 = param_1;
  func_0x00010bee7160();
  _objc_retainAutoreleasedReturnValue();
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  puStack_130 = &UNK_107963de0;
  puStack_128 = &UNK_1109f1d40;
  uStack_120 = param_23;
  uStack_108 = param_22;
  uStack_100 = param_12;
  uStack_f8 = param_14;
  uStack_f0 = param_15;
  uStack_e8 = param_16;
  uStack_c8 = param_11;
  uStack_70 = param_9;
  uStack_78 = param_13;
  uStack_c0 = param_17;
  uStack_b8 = param_18;
  uStack_a8 = param_20;
  uStack_98 = param_21;
  uStack_90 = param_24;
  uStack_118 = param_3;
  uStack_110 = param_7;
  uStack_e0 = param_1;
  uStack_d8 = param_6;
  uStack_d0 = param_8;
  uStack_b0 = uVar2;
  uStack_a0 = uVar1;
  uStack_88 = param_4;
  uStack_80 = param_5;
  _objc_retain();
  _objc_retain(param_21);
  _objc_retain(uVar1);
  _objc_retain(param_20);
  _objc_retain(uVar2);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_11);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_12);
  _objc_retain(param_22);
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_retain(param_23);
  func_0x00010007380c(uVar3,&puStack_140);
  _objc_release(uVar3);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_release(param_24);
  _objc_release(param_21);
  _objc_release(uVar1);
  _objc_release(param_20);
  _objc_release(uVar2);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_12);
  _objc_release(param_22);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_23);
  return;
}



/* Entry: 10796551c; end: 1079658af; -[SCShakeTicketAdapter _getUpdatedOtherInfo:withHasScreenshot:jiraMetaInfo:viewControllerName:viewControllerFeature:] */

void FUN_10796551c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  puVar1 = param_3;
  func_0x00010bf64920(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1900();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar3 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar1);
  puVar1 = puVar2;
  if (((ulong)puVar3 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (puVar1 == (undefined *)0x0) {
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  }
  else {
    func_0x00010bf72020();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = param_3;
  func_0x00010c08fa60();
  puVar4 = param_5;
  if (puVar3 != (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (param_5 == (undefined *)0x0) {
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_5);
    }
  }
  puVar3 = PTR_PTR_1126d5820;
  _objc_opt_new(PTR_PTR_1126d5820);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a6a00(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puVar4 != (undefined *)0x0) {
    func_0x00010c1b66a0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (param_6 != 0) {
    func_0x00010c207100(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (param_7 != 0) {
    func_0x00010c207120(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar5 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c271e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  puVar5 = puVar6;
  func_0x00010bf64920(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar8 = puVar7;
  _objc_opt_isKindOfClass(puVar7,puVar5);
  puVar5 = puVar7;
  if (((ulong)puVar8 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar7);
  if (puVar5 != (undefined *)0x0) {
    func_0x00010bef7f60(puVar2);
  }
  puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_release(0);
  if (puVar7 == (undefined *)0x0) {
    _objc_retain(param_3);
    puVar8 = param_3;
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
  }
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(0);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107965c90; end: 107965d17;  */

void FUN_107965c90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d5830;
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c231340(puVar1);
  uVar2 = param_3;
  func_0x00010bf6e340(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107966754; end: 107966833;  */

void FUN_107966754(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d5830;
  func_0x00010c079dc0();
  uVar2 = param_3;
  if ((int)puVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    puVar1 = PTR_PTR_1126d5830;
    func_0x00010c231340(PTR_PTR_1126d5830);
    func_0x00010bf6e340(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,puVar1,uVar2,0);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010bf6e340(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,uVar2);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1079678b0; end: 10796792b; -[SCShakeTicketTable initWithPath:] */

undefined1 * FUN_1079678b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8f70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_3;
    _objc_release(uVar2);
    func_0x00010c228860(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107968ff4; end: 10796914b; -[SCShakeTicketTable _databaseURL] */

void FUN_107968ff4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010c2bd3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad320(puVar2,param_2,param_1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ea7058);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bdc2c60(puVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010c0f5800(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bfacbe0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  if (((ulong)puVar5 & 1) == 0) {
    uStack_48 = 0;
    func_0x00010bf55da0(puVar1,param_2,puVar4,1,0,&uStack_48);
  }
  puVar3 = puVar4;
  func_0x00010bdc2c60(puVar4,param_2,&PTR____CFConstantStringClassReference_110ea7078);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107969618; end: 10796971b;  */

void FUN_107969618(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  func_0x00010be90320(*(undefined8 *)(param_1 + 0x20));
  if ((param_2 != 0) && (lVar1 = param_2, func_0x00010c08fa60(), lVar1 != 0)) {
    lVar1 = param_2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    *(long *)(*(long *)(param_1 + 0x20) + 0x18) = lVar1;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126d57f8;
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c2bd3c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22ba40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c0b5de0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28b060(puVar2);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  func_0x00010be819a0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107969c7c; end: 107969c8b; -[SCShakeTicketUploader _onComplete] */

void FUN_107969c7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107969c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  return;
}



/* Entry: 107969fc8; end: 107969fd7; +[SCShakeUploadThrottleController deleteInstance] */

void FUN_107969fc8(void)

{
  undefined8 uVar1;
  
  uVar1 = uRam0000000113727050;
  uRam0000000113727050 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10796a33c; end: 10796a3eb; -[SCShakeUploadThrottleController _reachedMaxRetryForId:] */

bool FUN_10796a33c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0dff20(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    bVar4 = false;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c0dff20(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar5 = 3;
    }
    else {
      lVar5 = lVar2;
      func_0x00010c067fc0(lVar2);
    }
    lVar3 = lVar1;
    func_0x00010c067fc0(lVar1);
    bVar4 = lVar5 <= lVar3;
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return bVar4;
}



/* Entry: 10796a458; end: 10796a45f; -[SCSnapAirConfiguration notificationHandler] */

undefined8 FUN_10796a458(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10796a62c; end: 10796a6eb; -[SCNativeNotificationProcessedEvent initWithNotification:result:nativeClientReceiveTimestampMs:completion:] */

undefined1 *
FUN_10796a62c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f8fa0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10796a878; end: 10796a8a7; -[SCNativeNotificationProcessedEvent .cxx_destruct] */

void FUN_10796a878(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10796abcc; end: 10796abd3; -[SCRemixOperaMetadata sourceUserId] */

undefined8 FUN_10796abcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10796ad38; end: 10796ad9f; +[MFCCore descriptor] */

void FUN_10796ad38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727068 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b65b10,
                        &PTR____CFConstantStringClassReference_110ea7138,&PTR_DAT_11323b050,
                        &PTR_DAT_11323b068,3,0x18,0x1c);
    puRam0000000113727068 = puVar1;
  }
  return;
}



/* Entry: 10796b0d0; end: 10796b14b; +[MFCStandardMedia descriptor] */

undefined * FUN_10796b0d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137270a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b65de0,
                        &PTR____CFConstantStringClassReference_110ea71d8,&PTR_DAT_11323b648,
                        &PTR_s_contentURL_11323b680,4,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001137270a8 = puVar1;
  }
  return puRam00000001137270a8;
}



/* Entry: 10796b518; end: 10796b577; -[SCDeepLinkingUrlInterceptor interceptURL:isWebViewFullyAppeared:isWebViewLoadedSuccessfully:isWebViewPreloaded:allowAlertView:allowUniversalDeepLink:bypassNavigationRestriction:isSubframe:completion:] */

void FUN_10796b518(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c068f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x48),PTR_s_interceptURL_isWebViewFullyAppea_1125f7dd8);
    return;
  }
  func_0x00010be3d340();
  return;
}



/* Entry: 10796befc; end: 10796c077; -[SCDeepLinkingUrlInterceptor _handleInternalDeeplink:bypassNavigationRestriction:completion:] */

void FUN_10796befc(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = *(undefined **)(param_1 + 0x10);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  }
  else {
    func_0x00010c0d3c80();
  }
  if (param_4 != 0) {
    func_0x00010c1d0640(puVar1,param_2,PTR____kCFBooleanTrue_11034ab68,
                        &PTR____CFConstantStringClassReference_110f83958);
  }
  lVar2 = param_1;
  func_0x00010c068fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c28f640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    func_0x00010bef7f60(puVar1,param_2,lVar3);
  }
  lVar4 = *(long *)(param_1 + 0x38);
  (**(code **)(lVar4 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  puStack_58 = &UNK_10796c078;
  puStack_50 = &UNK_110923ff0;
  uStack_48 = param_5;
  _objc_retain(param_5);
  func_0x00010bfd1bc0(lVar2,param_2,param_3,puVar1,0x41,&puStack_68);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10796c418; end: 10796c497; -[SCDeepLinkingUrlInterceptor hasUniversalLinkSchema:] */

ulong FUN_10796c418(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110dc8d58);
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110dc8d78);
  }
  else {
    uVar2 = 1;
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10796cb7c; end: 10796cbff; -[SCDeepLinkingUrlInterceptor disableInterceptingWebsiteForURL:] */

void FUN_10796cb7c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if ((param_3 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf80190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x48),PTR_s_disableInterceptingWebsiteForURL_1125bda08);
    return;
  }
  lVar1 = param_1;
  func_0x00010be36400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new();
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      *(undefined **)(param_1 + 0x18) = puVar3;
      _objc_release(uVar4);
      lVar2 = *(long *)(param_1 + 0x18);
    }
    func_0x00010befa120(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10796d20c; end: 10796d217; -[SCDeepLinkingUrlInterceptor setInterceptorDelegate:] */

void FUN_10796d20c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 10796da98; end: 10796df37; -[SCStoriesChromeInteractionSession operaViewDidSendEvent:page:params:] */

void FUN_10796da98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126c9a58;
  uVar1 = param_4;
  func_0x00010c118b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07fc00();
  _objc_release(uVar1);
  if ((int)puVar2 == 0) goto LAB_10796dddc;
  uVar1 = param_4;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  _objc_release(uVar6);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  _objc_release(uVar6);
  _objc_release(uVar1);
  uVar7 = *(ulong *)(param_1 + 0x28);
  puVar2 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  _objc_opt_isKindOfClass(uVar7,puVar2);
  if ((uVar7 & 1) == 0) goto LAB_10796dddc;
  puVar2 = PTR_PTR_1126b6160;
  func_0x00010c277180(PTR_PTR_1126b6160);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)uVar1 != 0) {
    func_0x00010beb9e80(param_1);
    goto LAB_10796dddc;
  }
  puVar2 = PTR_PTR_1126b6160;
  func_0x00010c261120(PTR_PTR_1126b6160);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)uVar1 != 0) {
    func_0x00010beb8280(param_1);
    goto LAB_10796dddc;
  }
  puVar2 = PTR_PTR_1126b6160;
  func_0x00010bf3d9e0(PTR_PTR_1126b6160);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)uVar1 != 0) {
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c29cc40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c98a0;
    func_0x00010c0689a0(PTR_PTR_1126c98a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84d40(lVar4);
    _objc_release(puVar2);
    _objc_release(lVar4);
    _objc_release(param_1);
    goto LAB_10796dddc;
  }
  puVar2 = PTR_PTR_1126b2d30;
  func_0x00010bfdffe0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)uVar1 != 0) {
    func_0x00010beb9e80(param_1);
    *(undefined1 *)(param_1 + 0x38) = 1;
    goto LAB_10796dddc;
  }
  puVar2 = PTR_PTR_1126b2d30;
  func_0x00010c25fd00(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    puVar5 = PTR_PTR_1126b2ce8;
    func_0x00010c25fe20(PTR_PTR_1126b2ce8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar5);
    _objc_release(puVar2);
    if ((int)uVar1 != 0) goto LAB_10796dd70;
    uVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar1 == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0();
      if ((int)uVar1 == 0) {
        puVar2 = PTR_PTR_1126b2d30;
        func_0x00010bf5b100(PTR_PTR_1126b2d30);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if ((int)uVar1 == 0) {
          puVar2 = PTR_PTR_1126b2d30;
          func_0x00010bfa1100(PTR_PTR_1126b2d30);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = param_3;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          if ((int)uVar1 == 0) {
            puVar2 = PTR_PTR_1126b6128;
            func_0x00010c15b3c0(PTR_PTR_1126b6128);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = param_3;
            func_0x00010c0720c0();
            _objc_release(puVar2);
            if ((int)uVar1 != 0) {
              func_0x00010be57680(param_1);
            }
          }
          else {
            func_0x00010bed7dc0(param_1);
          }
        }
        else {
          func_0x00010be6d540(param_1);
        }
      }
      else {
        func_0x00010be27500(param_1);
      }
      goto LAB_10796dddc;
    }
    func_0x00010c1f9640(PTR_PTR_1126c55c0);
  }
  else {
    _objc_release(puVar2);
LAB_10796dd70:
    func_0x00010c1f9640(PTR_PTR_1126c55c0);
    uVar1 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf1f3c0();
    if ((int)uVar3 != 0) {
      func_0x000108f48110(*(undefined8 *)(param_1 + 0x78));
    }
    _objc_release(uVar1);
  }
  func_0x00010be313a0(param_1);
LAB_10796dddc:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10796ebdc; end: 10796ecbf;  */

void FUN_10796ebdc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126afca8;
  if (param_2 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc46f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc46f8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238760(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    ppuVar2 = (undefined **)(param_1 + 0x28);
    _objc_loadWeakRetained(ppuVar2);
    func_0x00010bdfe0a0();
  }
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10796f3fc; end: 10796f43f; -[SCStoriesChromeInteractionSession friendProfileWillAppear] */

void FUN_10796f3fc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0cfb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfba0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10796fc18; end: 1079703e3; -[SCStoriesSharingSession initWithUserSession:viewLocation:operaControlling:operaPageProvider:operaPlaylistItemController:externalLinkSendingService:grapheneRegistry:storiesMediaCoordinator:temporaryFileWriter:notificationOSSettingsRetriever:offPlatformShareServices:discoverFeedPageSessionId:triggeringSection:discoverFeedEventsController:spotlightShareSender:spotlightPlatformAnalyticsCreator:circumstanceEngine:shareNotificationService:] */

undefined8 *
FUN_10796fc18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  puStack_80 = PTR_PTR_1126f8fc8;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[5];
    puVar1[5] = param_3;
    _objc_release(uVar2);
    puVar1[6] = param_4;
    _objc_storeWeak(puVar1 + 8,param_5);
    _objc_storeWeak(puVar1 + 9,param_6);
    puVar3 = puVar1 + 10;
    _objc_storeWeak(puVar3,param_7);
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126be718);
    puVar4 = puVar3;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar4;
    _objc_release(uVar2);
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126c14c0);
    puVar4 = puVar3;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar4;
    _objc_release(uVar2);
    _objc_release();
    func_0x000108f21604();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release();
    func_0x000100c67ae4();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release();
    func_0x000108f216a8();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = uVar6;
    _objc_release(uVar2);
    uVar6 = puVar1[0x12];
    func_0x00010bef9980();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126afea0);
    uVar2 = uVar6;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar7);
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126afea0);
    uVar2 = uVar6;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    _objc_release(uVar7);
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bdb40);
    uVar2 = uVar6;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[0x16];
    puVar1[0x16] = uVar2;
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar6 = puVar1[0x18];
    puVar1[0x18] = 0;
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d5070);
    uVar2 = uVar6;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar7);
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126cd710);
    uVar2 = uVar6;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[0x19];
    puVar1[0x19] = uVar2;
    _objc_release(uVar7);
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d5870);
    uVar2 = uVar6;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[0x1a];
    puVar1[0x1a] = uVar2;
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_retain(param_8);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_19;
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    _objc_retain(param_19);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    _objc_retain(param_19);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x20];
    puVar1[0x20] = puVar5;
    _objc_release(uVar2);
    uVar6 = puVar1[0x1c];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c07b760();
    *(char *)(puVar1 + 0x1e) = (char)uVar2;
    _objc_release(uVar6);
    _objc_retain(param_9);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_9;
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126c2120;
    _objc_opt_new();
    uVar2 = puVar1[0x22];
    puVar1[0x22] = puVar5;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_13;
    _objc_release(uVar2);
    uVar2 = param_13;
    func_0x00010bfa2a40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0x27];
    puVar1[0x27] = uVar2;
    _objc_release(uVar6);
    _objc_retain(param_14);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_14;
    _objc_release(uVar2);
    puVar1[7] = param_15;
    _objc_retain(param_16);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_20;
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = puVar5;
    _objc_release(uVar2);
    _objc_release(param_19);
    _objc_release(param_19);
  }
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107971a10; end: 107971baf; -[SCStoriesSharingSession _presentShareNotificationWithAttribution:] */

void FUN_107971a10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_107971bb0;
  puStack_70 = &UNK_110841fb0;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  ppuVar1 = &puStack_88;
  uStack_68 = param_3;
  _objc_retainBlock();
  func_0x00010be1e240(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  _objc_retain(param_3);
  ppuVar2 = ppuVar1;
  _objc_retain(ppuVar1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(param_1);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_90);
  _objc_release(param_1);
  _objc_release(ppuVar1);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 107972470; end: 1079724eb;  */

void FUN_107972470(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20) + 0x48;
  _objc_loadWeakRetained(lVar2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010bf3cf60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288420(lVar2,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107973530; end: 107973547;  */

void FUN_107973530(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10797459c; end: 10797477f;  */

void FUN_10797459c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_2;
  _objc_retain();
  if (*(long *)(param_1 + 0x40) == 1) {
    func_0x000107d51d8c();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfbf8a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(long *)(lVar6 + 0x28) = lVar3;
    _objc_release(uVar5);
    uVar5 = 3;
  }
  else {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    lVar2 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010be9a5a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    lVar7 = *(long *)(lVar6 + 0x28);
    *(long *)(lVar6 + 0x28) = lVar3;
    uVar5 = 4;
  }
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar5;
  lVar1 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  lVar3 = param_2;
  if (lVar2 == 0) {
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  func_0x00010beec820(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar4);
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107974da0; end: 107974e53;  */

void FUN_107974da0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bea7da0();
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126b1c68;
  lVar3 = *(long *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c29be00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,0,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079755f8; end: 107975697;  */

void FUN_1079755f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf0e960(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c22aec0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfd2c0(lVar2,param_2,uVar1,uVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1079764bc; end: 107976697; -[SCStoriesSharingSession _sendDidShareOnSendToEventWithRecipients:mischiefs:] */

void FUN_1079764bc(long param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined **ppuStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined **ppuStack_f0;
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar9 = lVar2;
  func_0x00010bf99b80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2638;
  func_0x00010bf7b7a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = *(undefined8 *)(param_1 + 8);
  puVar4 = PTR_PTR_1126b6008;
  func_0x00010c122f60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar4;
  func_0x00010bf529e0(param_3);
  _objc_release(param_3);
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = (undefined **)PTR_PTR_1126b6008;
  puStack_78 = puVar5;
  func_0x00010bfcf840();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_80 = ppuVar10;
  func_0x00010bf529e0(param_4);
  _objc_release(param_4);
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar6;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar3;
  uVar13 = uStack_90;
  puVar14 = puVar7;
  func_0x00010c0eb7c0(lVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(ppuVar10);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar9);
  lVar8 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_d0 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puStack_98 = &UNK_107976698;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e0 = ppuVar10;
  puStack_d8 = puVar5;
  puStack_c8 = puVar6;
  puStack_c0 = puVar4;
  puStack_b8 = puVar3;
  lStack_b0 = lVar9;
  lStack_a8 = lVar2;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar12);
  _objc_retain(uVar13);
  _objc_retain(puVar14);
  _objc_retain(param_6);
  lVar9 = *(long *)(lVar8 + 0x68);
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  iVar1 = (int)*(undefined8 *)(lVar8 + 0x10);
  func_0x00010853b9b8();
  if (lVar2 == 0 || iVar1 == 0) {
code_r0x000107976738:
    func_0x00010bea07c0(lVar8);
  }
  else {
    ppuVar10 = *(undefined ***)(lVar8 + 0x10);
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar10;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar11 == (undefined **)0x0) {
      ppuVar11 = *(undefined ***)(lVar8 + 0x58);
      func_0x000108538468();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar10);
      if (ppuVar11 == (undefined **)0x0) goto code_r0x000107976738;
    }
    else {
      _objc_release(ppuVar10);
    }
    _objc_initWeak(auStack_f8,lVar8);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_f0 = ppuVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_140 = 0xc2000000;
    puStack_138 = &UNK_107976960;
    puStack_130 = &UNK_1109f2460;
    _objc_retain(ppuVar11);
    ppuVar10 = &puStack_148;
    param_2 = auStack_f8;
    ppuStack_128 = ppuVar11;
    _objc_copyWeak(auStack_100,param_2);
    _objc_retain(puVar12);
    puStack_120 = puVar12;
    _objc_retain(uVar13);
    uStack_118 = uVar13;
    _objc_retain(puVar14);
    puStack_110 = puVar14;
    _objc_retain(param_6);
    uStack_108 = param_6;
    func_0x00010bfaa4c0(lVar2);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar5);
    _objc_release(uStack_108);
    _objc_release(puStack_110);
    _objc_release(uStack_118);
    _objc_release(puStack_120);
    _objc_destroyWeak(auStack_100);
    _objc_release(ppuStack_128);
    _objc_destroyWeak(auStack_f8);
    _objc_release(ppuVar11);
  }
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar10 + 9);
  _objc_destroyWeak(auStack_f8);
  __Unwind_Resume();
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar12 + 0x48;
  _objc_loadWeakRetained(puVar12);
  func_0x00010bea07c0();
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10797727c; end: 10797727f;  */

void FUN_10797727c(void)

{
  return;
}



/* Entry: 1079784a8; end: 1079784db; -[SCStoriesSharingSession didCancelDeleteStorySnap] */

void FUN_1079784a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bfe63a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107978f2c; end: 1079792db; -[SCStoriesSharingSession didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_107978f2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  _objc_opt_class(uVar3);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  if ((int)uVar4 == 0) goto LAB_10797912c;
  puVar5 = PTR_PTR_1126b4030;
  func_0x00010bf5b2c0(PTR_PTR_1126b4030);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar4 == 0) {
    puVar6 = PTR_PTR_1126b4030;
    func_0x00010bf5b2e0(PTR_PTR_1126b4030);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar6);
    _objc_release(puVar5);
    if ((int)uVar4 == 0) {
      puVar5 = PTR_PTR_1126b4030;
      func_0x00010bf5b300(PTR_PTR_1126b4030);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c0720c0();
      if ((int)uVar4 == 0) {
        puVar6 = PTR_PTR_1126b4030;
        func_0x00010bf5b340(PTR_PTR_1126b4030);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar6);
        _objc_release(puVar5);
        if ((int)uVar4 == 0) goto LAB_10797912c;
      }
      else {
        _objc_release(puVar5);
      }
      iVar2 = (int)*(undefined8 *)(param_1 + 0xe8);
      func_0x00010bf1f440();
      if (iVar2 != 0) {
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0xc2000000;
        puStack_a0 = &UNK_10797931c;
        puStack_98 = &UNK_110842e18;
        lStack_90 = param_1;
        func_0x0001000d76cc("APPSTORE",&puStack_b0);
      }
      goto LAB_10797912c;
    }
  }
  else {
    _objc_release(puVar5);
  }
  puVar5 = PTR_PTR_1126b4038;
  func_0x00010bf5b6e0(PTR_PTR_1126b4038);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b4040;
  _objc_opt_class(PTR_PTR_1126b4040);
  uVar9 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar5);
  uVar1 = uVar7;
  if ((uVar9 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar7);
  uVar7 = uVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf5b080(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010c0720c0();
  if ((int)uVar9 == 0) {
LAB_10797910c:
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar7);
  }
  else {
    uVar9 = *(long *)(param_1 + 0x30) - 0x49;
    if (((uVar9 < 0x1a) && ((1L << (uVar9 & 0x3f) & 0x2020001U) != 0)) ||
       ((uVar8 = *(long *)(param_1 + 0x30) - 0x57, uVar9 = uVar8 >> 1, (uVar9 | uVar8 << 0x3f) < 8
        && ((1L << (uVar9 & 0x3f) & 0xb1U) != 0)))) goto LAB_10797910c;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_initWeak(auStack_58,param_1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    puStack_78 = &UNK_1079792dc;
    puStack_70 = &UNK_110841fb0;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(uVar1);
    uStack_68 = uVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_88);
    _objc_release(uStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(uVar1);
LAB_10797912c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10797952c; end: 10797952f; -[SCStoriesSharingSession shareSheetDismissedWithShareDestination:] */

void FUN_10797952c(void)

{
  return;
}



/* Entry: 1079797cc; end: 1079797d3; -[SCStoriesSharingSession trackingId] */

undefined8 FUN_1079797cc(long param_1)

{
  return *(undefined8 *)(param_1 + 400);
}



/* Entry: 107979b2c; end: 107979b33; -[SCDiscoverFriendStoryTileTapPrecomputedContext updatedRankedFriendStories] */

undefined8 FUN_107979b2c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107979b98; end: 10797a823; -[SCDiscoverFeedActionHandler initWithUserSession:snapTokenProvider:sectionExtensionServices:friendStoriesReplayManager:storiesMediaCoordinator:storiesDataCoordinator:readReceiptCoordinator:storyPositionProvider:optInDataProvider:discoverFeedEventsController:discoverFeedDataFetcher:discoverFeedDataMutator:pageType:cachedReadReceiptViewStateProvider:playableViewModelGenerator:collectionPrefetcher:operaSessionScopeExposer:storiesGrapheneMetricsEmitter:adConfigProvider:actionHandlersFuture:circumstanceEngine:interactionHistoryManager:promotedStoryStateProvider:promotedStoryLogger:userDocObjectContext:snapchattersSynchronousDataFetcher:grapheneRegistry:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:snapchattersDataFetcher:mixerEndpointManager:userSegmentsProvider:isExpandedStoryFeedController:crashLogger:friendStoriesDataCoordinator:spotlightScopeExposer:spotlightScopeServices:contentProductPlaybackExposer:contentProductPlaybackScopeServices:publicGroupsChatScopeLauncher:storiesConfigProvider:networkConnectivityMonitor:upNextV2PlaybackSessionExposer:upNextV2PlaybackSessionScopeServices:postStoryScopeExposer:postStoryScopeServices:creatorSubscriptionsInfoProvider:plusFeatureGating:] */

undefined8 *
FUN_107979b98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined1 param_35,undefined4 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain();
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain();
  _objc_retain();
  _objc_retain(param_50);
  _objc_retain();
  puStack_80 = PTR_PTR_1126f8fd8;
  puVar2 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_44);
    uVar3 = puVar2[0x31];
    puVar2[0x31] = param_44;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar2[2];
    puVar2[2] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar2[0x18];
    puVar2[0x18] = param_16;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[6];
    puVar2[6] = param_6;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = puVar2[0x4f];
    puVar2[0x4f] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[4];
    puVar2[4] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar2[7];
    puVar2[7] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar2[8];
    puVar2[8] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_17);
    uVar3 = puVar2[10];
    puVar2[10] = param_17;
    _objc_release(uVar3);
    _objc_retain(param_18);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = param_18;
    _objc_release(uVar3);
    _objc_storeWeak(puVar2 + 0xc,param_19);
    _objc_retain(param_41);
    uVar3 = puVar2[0x2f];
    puVar2[0x2f] = param_41;
    _objc_release(uVar3);
    _objc_retain(param_42);
    uVar3 = puVar2[0x30];
    puVar2[0x30] = param_42;
    _objc_release(uVar3);
    _objc_retain(param_24);
    uVar3 = puVar2[0xd];
    puVar2[0xd] = param_24;
    _objc_release(uVar3);
    _objc_retain(param_25);
    uVar3 = puVar2[0xe];
    puVar2[0xe] = param_25;
    _objc_release(uVar3);
    _objc_retain(param_26);
    uVar3 = puVar2[0xf];
    puVar2[0xf] = param_26;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar2[0x49];
    puVar2[0x49] = param_10;
    _objc_release(uVar3);
    puVar2[0x4e] = param_15;
    _objc_retain(param_27);
    uVar3 = puVar2[0x10];
    puVar2[0x10] = param_27;
    _objc_release(uVar3);
    _objc_retain(param_50);
    uVar3 = puVar2[0x29];
    puVar2[0x29] = param_50;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar2[9];
    puVar2[9] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_39);
    uVar3 = puVar2[0x2d];
    puVar2[0x2d] = param_39;
    _objc_release(uVar3);
    _objc_retain(param_40);
    uVar3 = puVar2[0x2e];
    puVar2[0x2e] = param_40;
    _objc_release(uVar3);
    *(undefined1 *)(puVar2 + 0x46) = 1;
    _objc_retain(param_13);
    uVar3 = puVar2[0x19];
    puVar2[0x19] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar2[0x1a];
    puVar2[0x1a] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_20);
    uVar3 = puVar2[0x1b];
    puVar2[0x1b] = param_20;
    _objc_release(uVar3);
    _objc_retain(param_21);
    uVar3 = puVar2[0x1d];
    puVar2[0x1d] = param_21;
    _objc_release(uVar3);
    _objc_retain(param_23);
    uVar3 = puVar2[0x1e];
    puVar2[0x1e] = param_23;
    _objc_release(uVar3);
    _objc_retain(param_30);
    uVar3 = puVar2[0x1f];
    puVar2[0x1f] = param_30;
    _objc_release(uVar3);
    _objc_retain(param_31);
    uVar3 = puVar2[0x20];
    puVar2[0x20] = param_31;
    _objc_release(uVar3);
    _objc_retain(param_29);
    uVar3 = puVar2[0x21];
    puVar2[0x21] = param_29;
    _objc_release(uVar3);
    _objc_retain(param_32);
    uVar3 = puVar2[0x22];
    puVar2[0x22] = param_32;
    _objc_release(uVar3);
    _objc_retain(param_33);
    uVar3 = puVar2[0x23];
    puVar2[0x23] = param_33;
    _objc_release(uVar3);
    _objc_retain(param_34);
    uVar3 = puVar2[0x24];
    puVar2[0x24] = param_34;
    _objc_release(uVar3);
    puVar2[0x27] = 0;
    _objc_retain(param_45);
    uVar3 = puVar2[0x38];
    puVar2[0x38] = param_45;
    _objc_release(uVar3);
    _objc_retain(param_43);
    uVar3 = puVar2[0x33];
    puVar2[0x33] = param_43;
    _objc_release(uVar3);
    _objc_retain(param_46);
    uVar3 = puVar2[0x39];
    puVar2[0x39] = param_46;
    _objc_release(uVar3);
    _objc_storeWeak(puVar2 + 0x3a,param_47);
    puVar4 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x3b];
    puVar2[0x3b] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126c1088;
    _objc_alloc_init();
    uVar3 = puVar2[0x1c];
    puVar2[0x1c] = puVar4;
    _objc_release(uVar3);
    puVar2[0x3c] = 0;
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x51];
    puVar2[0x51] = puVar4;
    _objc_release(uVar3);
    _objc_initWeak(auStack_90,puVar2);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    puStack_a8 = &UNK_10797a840;
    puStack_a0 = &UNK_1109f26a0;
    puVar5 = auStack_98;
    _objc_copyWeak(puVar5,auStack_90);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(param_5);
    _objc_release(puVar5);
    puStack_e0 = puVar4;
    uStack_d8 = 0xc2000000;
    puStack_d0 = &UNK_10797a898;
    puStack_c8 = &UNK_110843570;
    puVar5 = auStack_c0;
    _objc_copyWeak(puVar5,auStack_90);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(param_22);
    _objc_release(puVar5);
    puVar6 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar3 = puVar2[0x26];
    puVar2[0x26] = puVar6;
    _objc_release(uVar3);
    _objc_release(puVar7);
    _objc_retain(param_37);
    uVar3 = puVar2[0x2b];
    puVar2[0x2b] = param_37;
    _objc_release(uVar3);
    *(undefined1 *)(puVar2 + 0x2a) = param_35;
    puVar6 = PTR_PTR_1126d5890;
    _objc_alloc();
    puStack_108 = puVar4;
    uStack_100 = 0xc2000000;
    puStack_f8 = &UNK_10797a9cc;
    puStack_f0 = &UNK_1109f26d0;
    _objc_copyWeak(auStack_e8,auStack_90);
    func_0x00010c04cf20();
    uVar3 = puVar2[0x32];
    puVar2[0x32] = puVar6;
    _objc_release(uVar3);
    uVar1 = (undefined1)puVar2[0x1e];
    func_0x000108f4a1f0();
    *(undefined1 *)((long)puVar2 + 0x165) = uVar1;
    puVar4 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = puVar2[0x25];
    puVar2[0x25] = puVar4;
    _objc_release(uVar3);
    *(undefined4 *)(puVar2 + 0x2c) = 0xffffffff;
    uVar8 = param_38;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0e0b20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010c0e0e60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_110,auStack_90);
    uVar10 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar10);
    _objc_release(uVar3);
    _objc_release(puVar4);
    _objc_release(uVar9);
    _objc_release(uVar8);
    puVar4 = PTR_PTR_1126c2120;
    _objc_opt_new();
    uVar3 = puVar2[0x34];
    puVar2[0x34] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_48);
    uVar3 = puVar2[0x3f];
    puVar2[0x3f] = param_48;
    _objc_release(uVar3);
    _objc_retain(param_49);
    uVar3 = puVar2[0x40];
    puVar2[0x40] = param_49;
    _objc_release(uVar3);
    _objc_retain(param_51);
    uVar3 = puVar2[0x41];
    puVar2[0x41] = param_51;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_14);
  _objc_release(param_13);
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
  return puVar2;
}



/* Entry: 10797aaf4; end: 10797ab23; -[SCDiscoverFeedActionHandler setDiscoverTileTapContextBuilder:] */

void FUN_10797aaf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x228) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10797c5a4; end: 10797c5f3;  */

void FUN_10797c5a4(long param_1)

{
  int iVar1;
  
  func_0x00010bf2eb40(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x280));
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x280);
  func_0x00010c07ab40();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf84cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x280),
               PTR_s_dismissWithAnimation__1125becd8,0);
    return;
  }
  return;
}



/* Entry: 10797cd04; end: 10797d1db; -[SCDiscoverFeedActionHandler _updateReplayStateWithGroupModel:] */

void FUN_10797cd04(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x000107d005a8();
  puVar2 = *(undefined **)(param_1 + 200);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25bac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bdd28;
  if (puVar3 == (undefined *)0x0) goto LAB_10797d190;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  puVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  puVar2 = param_3;
  if (((ulong)puVar4 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126bdd30;
  _objc_retain(param_3);
  _objc_opt_class(puVar4);
  puVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  puVar4 = param_3;
  if (((ulong)puVar5 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  _objc_retain(puVar4);
  _objc_release(param_3);
  puVar5 = PTR_PTR_1126c2118;
  _objc_retain(param_3);
  _objc_opt_class(puVar5);
  puVar6 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar5);
  puVar5 = param_3;
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(param_3);
  puVar6 = PTR_PTR_1126b8e08;
  _objc_retain(param_3);
  _objc_opt_class(puVar6);
  puVar7 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar6);
  puVar6 = param_3;
  if (((ulong)puVar7 & 1) == 0) {
    puVar6 = (undefined *)0x0;
  }
  _objc_retain(puVar6);
  _objc_release(param_3);
  if (puVar2 == (undefined *)0x0 && puVar5 == (undefined *)0x0) {
    if (puVar4 == (undefined *)0x0) {
      if (puVar6 != (undefined *)0x0) {
        uVar8 = *(undefined8 *)(param_1 + 0x70);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = param_3;
        func_0x00010bef52c0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        puVar1 = param_3;
        func_0x00010bef2c20();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bf5ac40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        _objc_release(puVar1);
        uVar12 = uVar8;
        puVar1 = puVar7;
        func_0x00010c06b960();
        _objc_release(puVar7);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(uVar8);
        if ((int)uVar12 == 0) goto LAB_10797d170;
      }
    }
    else {
      puVar7 = param_3;
      func_0x00010c2a2900();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010c0741a0();
      _objc_release(puVar7);
      if (((ulong)puVar9 & 1) == 0) goto LAB_10797d170;
    }
    puVar5 = PTR_PTR_1126c6d78;
    func_0x00010bf82080();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c2140;
    puVar1 = puVar3;
    func_0x00010c25a160(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf82100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c2b09e0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b09e0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba4e0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar7 = puVar5;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a480(uVar12);
    _objc_release(puVar1);
    _objc_release(uVar12);
    uVar12 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x000107bfa524();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar3;
    func_0x00010bf454e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298be0();
    func_0x000108483614(puVar3);
    puVar11 = puVar3;
    func_0x00010bf454e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar9;
    func_0x00010c28a6c0(uVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar12);
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar6);
  }
  else {
LAB_10797d170:
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar2;
  }
  _objc_release(puVar4);
LAB_10797d190:
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    _objc_retain(puVar1);
    puVar2 = puVar1;
    func_0x00010c08fa60();
    if (puVar2 != (undefined *)0x0) {
      puVar2 = PTR_PTR_1126d58b8;
      func_0x00010c251320(PTR_PTR_1126d58b8);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_3 + 0x30);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd12a0();
      _objc_release(uVar12);
      _objc_release(puVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10797d8a8; end: 10797d8bf; -[SCDiscoverFeedActionHandler _navigationTypeForFeedType:] */

ulong FUN_10797d8a8(ulong param_1)

{
  func_0x00010be45660();
  return param_1 & 0xffffffff;
}



/* Entry: 10797db54; end: 10797db93; -[SCDiscoverFeedActionHandler _itemLayoutFromActionModel:] */

undefined8 FUN_10797db54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0b3ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c084740();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10797e1b8; end: 10797e1bf; -[SCDiscoverFeedActionHandler didDismissChatWithScope:] */

void FUN_10797e1b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x198),PTR_s_endLaunchedFeatureWithScope__1125c2cc8);
  return;
}



/* Entry: 10797f134; end: 10797f317; -[SCDiscoverFeedActionHandler _announceAndPlayFriendStoryForActionModel:actionIdentifier:baseView:interactionContext:precomputedContext:] */

void FUN_10797f134(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uStack_70 = param_6;
  _objc_retain(param_7);
  func_0x00010bfef0c0(uVar2);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107980274; end: 1079802bb;  */

void FUN_107980274(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf454e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079813bc; end: 10798229b; -[SCDiscoverFeedActionHandler _playMixedCarouselStoriesWithActionModel:baseView:showStoryReplyPopUp:] */

void FUN_1079813bc(ulong param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined1 uVar20;
  undefined8 *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  long lVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puStack_4b0;
  undefined8 uStack_410;
  undefined8 *puStack_408;
  undefined8 uStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined8 uStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined1 uStack_2d8;
  byte bStack_2d7;
  undefined1 uStack_2d6;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar2);
  uVar3 = param_1;
  func_0x00010bdd9d60();
  if ((uVar3 & 1) == 0) {
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar2);
    goto LAB_107982128;
  }
  puVar2 = param_3;
  func_0x00010c0644a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar6 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar6);
  }
  else {
    puStack_1f8 = &uStack_1c0;
    uStack_1c0 = 0;
    uStack_1b0 = 0x3032000000;
    puStack_1a8 = &UNK_10797c980;
    puStack_1a0 = &UNK_10797c990;
    uStack_198 = 0;
    puStack_220 = &uStack_1f0;
    uStack_1f0 = 0;
    uStack_1e0 = 0x3032000000;
    puStack_1d8 = &UNK_10797c980;
    puStack_1d0 = &UNK_10797c990;
    uStack_1c8 = 0;
    puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_210 = 0xc2000000;
    puStack_208 = &UNK_10798229c;
    puStack_200 = &UNK_1108d41c0;
    puStack_240 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_238 = 0xc2000000;
    puStack_230 = &UNK_1079822d4;
    puStack_228 = &UNK_1108d8070;
    puStack_1e8 = puStack_220;
    puStack_1b8 = puStack_1f8;
    func_0x00010c0bdf60(puVar2);
    puVar6 = PTR_PTR_1126b1118;
    _objc_alloc();
    func_0x00010c043160();
    lVar18 = puStack_1b8[5];
    puVar4 = puVar2;
    func_0x00010798230c();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x1e8);
    *(undefined **)(param_1 + 0x1e8) = puVar4;
    _objc_release(uVar5);
    if (lVar18 == 0) {
      func_0x00010c0741a0(puStack_1e8[5]);
    }
    else {
      func_0x00010bfddf20(puStack_1b8[5]);
    }
    func_0x00010be30ce0(param_1);
    puVar7 = param_3;
    func_0x00010bf004c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x000100504554();
    uVar5 = *(undefined8 *)(param_1 + 0x90);
    *(undefined **)(param_1 + 0x90) = puVar8;
    _objc_release(uVar5);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126d58b0;
    if (lVar18 == 0) {
      func_0x00010bf82160();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bfb8f20();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined **)(param_1 + 0xa0) = puVar7;
    _objc_release(uVar5);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    lStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    puVar22 = param_3;
    func_0x00010bf004c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar22;
    func_0x00010bf52a60();
    if (puVar9 != (undefined *)0x0) {
      lVar24 = *plStack_270;
      do {
        puVar26 = (undefined *)0x0;
        do {
          if (*plStack_270 != lVar24) {
            _objc_enumerationMutation(puVar22);
          }
          puVar14 = PTR___NSConcreteStackBlock_11034bd00;
          uVar5 = *(undefined8 *)(lStack_278 + (long)puVar26 * 8);
          puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_2a0 = 0xc2000000;
          puStack_298 = &UNK_10798240c;
          puStack_290 = &UNK_1108d40d0;
          _objc_retain(puVar8);
          puStack_2d0 = puVar14;
          uStack_2c8 = 0xc2000000;
          puStack_2c0 = &UNK_107982418;
          puStack_2b8 = &UNK_1109f2850;
          puStack_288 = puVar8;
          _objc_retain(puVar7);
          puStack_2b0 = puVar7;
          func_0x00010c0bdf60(uVar5);
          _objc_release(puStack_2b0);
          _objc_release(puStack_288);
          puVar26 = puVar26 + 1;
        } while (puVar9 != puVar26);
        puVar9 = puVar22;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined *)0x0);
    }
    _objc_release(puVar22);
    puVar22 = puVar7;
    func_0x00010bf51e00();
    puVar9 = puVar22;
    func_0x000107af9114();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar22);
    puVar22 = puVar9;
    func_0x00010797fc0c(puVar9,*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 0xf0),
                        *(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x148),
                        *(undefined8 *)(param_1 + 0x208));
    _objc_retainAutoreleasedReturnValue();
    puVar21 = (undefined8 *)(param_1 + 0xb8);
    uVar5 = *puVar21;
    *puVar21 = puVar22;
    _objc_release(uVar5);
    func_0x00010c222640(*puVar21);
    uVar10 = *(ulong *)(param_1 + 0x188);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar10;
    func_0x00010c2582c0();
    if ((uVar3 & 1) == 0) {
      _objc_release(uVar10);
LAB_10798192c:
      puVar22 = param_3;
      func_0x00010bf004c0();
      _objc_retainAutoreleasedReturnValue();
      puStack_328 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_320 = 0xc2000000;
      puStack_318 = &UNK_1079826b4;
      puStack_310 = &UNK_1108d4350;
      _objc_retain(puVar4);
      puStack_4b0 = puVar22;
      puStack_308 = puVar4;
      func_0x0001006372a4(puVar22,&puStack_328);
      _objc_release(puVar22);
      puVar22 = (undefined *)(param_1 + 0x268);
      _objc_loadWeakRetained();
      puVar26 = puVar22;
      func_0x00010bf924c0();
      if ((int)puVar26 == 0) {
        puVar26 = (undefined *)0x0;
      }
      else {
        lVar18 = param_1 + 0x268;
        _objc_loadWeakRetained();
        lVar24 = lVar18;
        func_0x00010bf09be0();
        _objc_release(lVar18);
        _objc_release(puVar22);
        puVar22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        if ((int)lVar24 == 0) {
          puVar26 = (undefined *)0x0;
          puVar22 = puStack_308;
          goto LAB_107981bb4;
        }
        func_0x00010bf529e0(puStack_4b0);
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf529e0(puStack_4b0);
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        puVar26 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        uStack_348 = 0;
        uStack_350 = 0;
        uStack_338 = 0;
        uStack_340 = 0;
        lStack_368 = 0;
        uStack_370 = 0;
        uStack_358 = 0;
        plStack_360 = (long *)0x0;
        _objc_retain(puStack_4b0);
        puVar13 = puStack_4b0;
        func_0x00010bf52a60();
        puVar14 = PTR___NSConcreteStackBlock_11034bd00;
        if (puVar13 != (undefined *)0x0) {
          lVar18 = *plStack_360;
          do {
            puVar25 = (undefined *)0x0;
            do {
              if (*plStack_360 != lVar18) {
                _objc_enumerationMutation(puStack_4b0);
              }
              uVar5 = *(undefined8 *)(lStack_368 + (long)puVar25 * 8);
              puStack_3a8 = puVar14;
              uStack_3a0 = 0xc2000000;
              pcStack_398 = FUN_1079828ec;
              puStack_390 = &UNK_1108d3a50;
              _objc_retain(puVar22);
              puStack_388 = puVar22;
              uStack_380 = uVar5;
              _objc_retain(puVar26);
              puStack_3e0 = puVar14;
              uStack_3d8 = 0xc2000000;
              uStack_3d0 = 0x107982a40;
              puStack_3c8 = &UNK_1108d3a80;
              puStack_378 = puVar26;
              _objc_retain(puVar12);
              puStack_3c0 = puVar12;
              uStack_3b8 = uVar5;
              _objc_retain(puVar26);
              puStack_3b0 = puVar26;
              func_0x00010c0bdf60(uVar5);
              _objc_release(puStack_3b0);
              _objc_release(puStack_3c0);
              _objc_release(puStack_378);
              _objc_release(puStack_388);
              puVar25 = puVar25 + 1;
            } while (puVar13 != puVar25);
            puVar13 = puStack_4b0;
            func_0x00010bf52a60();
          } while (puVar13 != (undefined *)0x0);
        }
        _objc_release(puStack_4b0);
        puVar14 = puVar22;
        func_0x00010bf09f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puStack_4b0);
        _objc_release(puVar12);
        puStack_4b0 = puVar14;
      }
      _objc_release(puVar22);
      puVar22 = puStack_308;
    }
    else {
      lVar11 = *(long *)(param_1 + 0x188);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar24 = lVar11;
      func_0x00010c2582e0();
      _objc_release(lVar11);
      _objc_release(uVar10);
      if (lVar24 != -1) goto LAB_10798192c;
      if (lVar18 == 0) {
        uVar20 = 0;
        bStack_2d7 = 0;
      }
      else {
        uVar20 = (undefined1)puStack_1b8[5];
        func_0x00010c07fde0();
        bVar1 = (byte)puStack_1b8[5];
        func_0x00010c07fde0();
        bStack_2d7 = bVar1 ^ 1;
      }
      puVar22 = param_3;
      func_0x00010bf004c0();
      _objc_retainAutoreleasedReturnValue();
      puStack_300 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2f8 = 0xc2000000;
      puStack_2f0 = &UNK_107982424;
      puStack_2e8 = &UNK_1109f28e0;
      uStack_2d8 = uVar20;
      _objc_retain(puVar4);
      puStack_4b0 = puVar22;
      puStack_2e0 = puVar4;
      uStack_2d6 = lVar18 != 0;
      func_0x0001006372a4(puVar22,&puStack_300);
      _objc_release(puVar22);
      puVar26 = (undefined *)0x0;
      puVar22 = puStack_2e0;
    }
LAB_107981bb4:
    _objc_release(puVar22);
    uVar15 = *(undefined8 *)(param_1 + 400);
    func_0x00010c283100();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar15;
    func_0x000100504554();
    puVar14 = puStack_4b0;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    puStack_408 = &uStack_410;
    uStack_410 = 0;
    uStack_400 = 0x3032000000;
    puStack_3f8 = &UNK_10797c980;
    puStack_3f0 = &UNK_10797c990;
    uStack_3e8 = 0;
    puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    for (puVar22 = (undefined *)0x0; puVar13 = puVar14, func_0x00010bf529e0(), puVar22 < puVar13;
        puVar22 = puVar22 + 1) {
      puVar13 = puVar14;
      func_0x00010c0dfd40(puVar14);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar12);
      _objc_retain(puVar4);
      _objc_retain(puVar6);
      _objc_retain(puVar12);
      _objc_retain(puVar4);
      func_0x00010c0bdf60(puVar13);
      _objc_release(puVar4);
      _objc_release(puVar12);
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar12);
      _objc_release(puVar13);
    }
    lVar18 = puStack_408[5];
    if (lVar18 == 0) {
      if (puStack_1b8[5] == 0) {
        if (puStack_1e8[5] != 0) {
          uVar23 = *(undefined8 *)(param_1 + 0xb8);
          puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
          lStack_190 = puStack_1e8[5];
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c066720(uVar23);
          _objc_release(puVar22);
          uVar16 = *(undefined8 *)(param_1 + 0x50);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar23 = uVar16;
          func_0x00010c0fed80();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar23;
          func_0x00010799a5f0();
          _objc_retainAutoreleasedReturnValue();
          uVar19 = puStack_408[5];
          puStack_408[5] = uVar17;
          _objc_release(uVar19);
          goto LAB_107981e54;
        }
      }
      else {
        puVar22 = PTR_PTR_1126b4d28;
        _objc_alloc();
        uVar16 = puStack_1b8[5];
        func_0x00010c259cc0(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c259580(puStack_1b8[5]);
        func_0x000107a88008();
        func_0x00010c04dcc0();
        uVar23 = puStack_408[5];
        puStack_408[5] = puVar22;
LAB_107981e54:
        _objc_release(uVar23);
        _objc_release(uVar16);
        if (puStack_408[5] != 0) {
          func_0x00010c066b00(puVar12);
          lVar18 = puStack_408[5];
          goto LAB_107981e8c;
        }
      }
      lVar18 = 0;
    }
LAB_107981e8c:
    uVar17 = *(undefined8 *)(param_1 + 0x188);
    func_0x00010c269d40(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar17;
    func_0x00010c0ced60();
    func_0x000107982d88(lVar18,uVar23);
    *(long *)(param_1 + 0x138) = lVar18;
    _objc_release(uVar17);
    func_0x00010bed66a0(param_1);
    puVar22 = param_3;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar22;
    func_0x00010c27c4a0();
    if (puVar13 == (undefined *)0x45) {
      _objc_release(puVar22);
LAB_107981f30:
      puVar22 = param_3;
      func_0x00010c0b3ae0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27c4a0();
      _objc_release(puVar22);
    }
    else {
      puVar13 = param_3;
      func_0x00010c0b3ae0();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar13;
      func_0x00010c27c4a0();
      _objc_release(puVar13);
      _objc_release(puVar22);
      if (puVar25 == (undefined *)0x46) goto LAB_107981f30;
    }
    func_0x00010be488a0();
    puVar22 = puVar12;
    func_0x00010bf529e0();
    if (puVar22 == (undefined *)0x0) {
      puVar22 = (undefined *)0x0;
    }
    else {
      puVar22 = puVar12;
      func_0x00010bf529e0();
      puVar22 = puVar22 + -1;
    }
    *(undefined **)(param_1 + 0x1e0) = puVar22;
    puVar22 = puVar26;
    func_0x00010bf51e00(puVar26);
    uVar3 = param_1;
    func_0x00010be60a60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar8;
    func_0x00010bf51e00();
    func_0x00010be78160(param_1);
    _objc_release(puVar13);
    _objc_release(uVar3);
    _objc_release(puVar22);
    puVar22 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar22);
    _objc_release(puVar12);
    __Block_object_dispose(&uStack_410,8);
    _objc_release(uStack_3e8);
    _objc_release(puVar14);
    _objc_release(uVar5);
    _objc_release(uVar15);
    _objc_release(puVar26);
    _objc_release(puStack_4b0);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar6);
    __Block_object_dispose(&uStack_1f0,8);
    _objc_release(uStack_1c8);
    __Block_object_dispose(&uStack_1c0,8);
    _objc_release(uStack_198);
  }
  _objc_release(puVar2);
LAB_107982128:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_1f0,8);
  uVar15 = 8;
  __Block_object_dispose(&uStack_1c0);
  __Unwind_Resume();
  _objc_retain(uVar15);
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28);
  *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28) = uVar15;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1079828ec; end: 107982b87;  */

void FUN_1079828ec(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  lVar1 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar7 != 0) {
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    lVar1 = param_2;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar8);
    _objc_release(lVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  lVar1 = lVar5;
  _objc_retain(lVar5);
  func_0x00010befa120(uVar8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(*(undefined8 *)(param_2 + 0x20));
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c259740(lVar5);
  _objc_release(lVar5);
  func_0x00010c0df880(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar8);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf822b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c2138,PTR_s_discoverFeedStoryWithDiscoverFee_1125be250,lVar1);
  return;
}



/* Entry: 1079832f0; end: 107983323;  */

void FUN_1079832f0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107983f60; end: 107983f67; -[SCDiscoverFeedActionHandler shouldCancelOperaPresentationIfNecessary] */

void FUN_107983f60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x280),PTR_s_cancelPresentingIfNecessary_1125a9478);
  return;
}



/* Entry: 10798497c; end: 107984ab3; -[SCDiscoverFeedActionHandler operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_10798497c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c27a6a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf38e60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c27a6a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010bf16300(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bf20c00(uVar2);
  _CGRectGetWidth();
  dVar5 = 6.0;
  if (0.0 < param_1) {
    func_0x00010bf20c00(uVar3);
    _CGRectGetWidth();
    dVar5 = param_1;
    func_0x00010bf20c00(uVar2);
    _CGRectGetWidth();
    dVar5 = (param_1 / dVar5) * 6.0;
  }
  uVar1 = uVar3;
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0bc120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10798540c; end: 10798540f; -[SCDiscoverFeedActionHandler playbackPresenter:didFinishPlayingStory:nextStory:playbackScope:] */

void FUN_10798540c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ead90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenter_didFinishViewingP_112618578);
  return;
}



/* Entry: 10798542c; end: 1079854bf; -[SCDiscoverFeedActionHandler playbackDataProvider:] */

void FUN_10798542c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c2a60;
  _objc_opt_class(PTR_PTR_1126c2a60);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  *(ulong *)(param_1 + 0xb8) = uVar1;
  _objc_release(uVar4);
  if (*(long *)(param_1 + 0xb8) != 0) {
    func_0x00010be411a0();
    func_0x00010c222640(*(undefined8 *)(param_1 + 0xb8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107985c00; end: 107985c0f; -[SCDiscoverFeedActionHandler pausePlayback] */

void FUN_107985c00(long param_1)

{
  if (*(long *)(param_1 + 0x280) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0f5e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x280),PTR_s_pauseOpera_11261b1a0);
    return;
  }
  return;
}



/* Entry: 107986148; end: 10798618f; -[SCDiscoverFeedActionHandler _operaCurrentPlaylistExcludingAds] */

void FUN_107986148(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x280);
  func_0x00010c101480(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001006372a4();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107986390; end: 1079863a7; -[SCDiscoverFeedActionHandler deckContainerFactory] */

void FUN_107986390(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107986420; end: 107986437; -[SCDiscoverFeedActionHandler delegate] */

void FUN_107986420(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107986488; end: 10798648f; -[SCDiscoverFeedActionHandler isExpandedStoryFeedController] */

undefined1 FUN_107986488(long param_1)

{
  return *(undefined1 *)(param_1 + 0x150);
}



/* Entry: 107986860; end: 1079868db;  */

bool FUN_107986860(long param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010799aa9c(uVar2,param_2);
  if ((int)uVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_2;
    func_0x00010c259cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    bVar1 = lVar4 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 107986b64; end: 107986b6b; -[SCDiscoverFeedActionSheetActionHandler didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_107986b64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_didTriggerEventWithEventName_ann_1125bd098);
  return;
}



/* Entry: 1079886fc; end: 107988743;  */

void FUN_1079886fc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079890c0; end: 1079890fb;  */

void FUN_1079890c0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0xd0),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10798977c; end: 10798979b; -[SCDiscoverFeedActionSheetActionHandler _dismissPromotedStoryShare] */

void FUN_10798977c(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x80));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10798990c; end: 1079899b7;  */

void FUN_10798990c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c244280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf24ec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7dec0(lVar1,param_2,uVar2,uVar3,uVar4,*(undefined8 *)(param_1 + 0x28),0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10798a444; end: 10798a47b;  */

void FUN_10798a444(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7df00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10798a914; end: 10798ab2b; -[SCDiscoverFeedActionSheetActionHandler _announceViewEvent:sourceView:storyLoggingInfo:] */

void FUN_10798a914(undefined *param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *unaff_x22;
  undefined *puVar9;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_3;
  puVar8 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uStack_b0 = *(undefined8 *)(param_1 + 0x30);
    unaff_x22 = param_1;
    _objc_opt_class();
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110ea8c18;
    puVar9 = *(undefined **)(param_1 + 0x18);
    puVar2 = puVar9;
    if (puVar9 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110ea8b98;
    puStack_88 = puVar2;
    func_0x00010c259740(*(undefined8 *)(param_1 + 0x10));
    func_0x00010c0df880();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_98 = &PTR____CFConstantStringClassReference_110ea8c58;
    puVar4 = param_4;
    puStack_80 = puVar3;
    if (param_4 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_90 = &PTR____CFConstantStringClassReference_110ea8c78;
    puVar5 = param_5;
    puStack_78 = puVar4;
    if (param_5 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    puVar8 = unaff_x22;
    func_0x00010bf7dbc0(uStack_b0);
    _objc_release(puVar6);
    if (param_5 == (undefined *)0x0) {
      _objc_release(puVar5);
    }
    if (param_4 == (undefined *)0x0) {
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    if (puVar9 == (undefined *)0x0) {
      _objc_release(puVar2);
    }
    _objc_release(unaff_x22);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  lVar1 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puStack_b8 = &UNK_10798ab2c;
  puStack_e0 = unaff_x22;
  puStack_d8 = param_5;
  puStack_d0 = param_4;
  lStack_c8 = param_3;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(lVar7);
  _objc_initWeak(auStack_e8,lVar1);
  lVar1 = lVar1 + 0x1c8;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_f8,auStack_e8);
  _objc_retain(lVar7);
  puStack_f0 = puVar8;
  func_0x00010bf83dc0(lVar1);
  _objc_release(lVar1);
  _objc_release(lVar7);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_e8);
  _objc_release(lVar7);
  return;
}



/* Entry: 10798b4a8; end: 10798b703;  */

void FUN_10798b4a8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3 != 0;
  puVar1 = PTR_PTR_1126d5968;
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) == '\x01') {
    _objc_retain(param_6);
    _objc_retain(param_3);
    _objc_retain(param_2);
    _objc_alloc(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052200(puVar1);
    _objc_release(param_6);
    _objc_release(param_2);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b2e98;
    func_0x00010c11b5e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined **)(lVar4 + 0x28) = puVar2;
    _objc_release(uVar3);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10798bde0; end: 10798be1b;  */

void FUN_10798bde0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x98),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10798c3d4; end: 10798c66b; -[SCDiscoverFeedActionSheetActionHandler _presentHideAlertAfterReportWithDisplayName:storyDedupeFp:] */

void FUN_10798c3d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_70,param_1);
  puVar3 = PTR_PTR_1126af180;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea7678;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea7678,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_70);
  uStack_78 = param_4;
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  puVar2 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea7698;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea7698,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea76b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea76b8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110ea76d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea76d8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar3;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar4);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be9ec00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10798cb08; end: 10798cb8b; -[SCDiscoverFeedActionSheetActionHandler _handleSubscribeStoryDedupeFp:] */

void FUN_10798cb08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c259740(param_3);
  uVar2 = param_3;
  func_0x00010c244280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf60240(param_3);
  _objc_release(param_3);
  func_0x00010bfd2b20(uVar4,param_2,uVar1,uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10798ce74; end: 10798cf2f; -[SCDiscoverFeedActionSheetActionHandler _exposeDSAExplainerScope] */

void FUN_10798ce74(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 400);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 400));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126b3530;
  _objc_alloc(PTR_PTR_1126b3530);
  lVar1 = param_1 + 0x1d0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c038f40(puVar2,param_2,lVar1,1);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x198);
  func_0x00010bf23ce0(uVar3,param_2,puVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 400),param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10798d56c; end: 10798d57b;  */

void FUN_10798d56c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10798d7e8; end: 10798dab3; -[SCDiscoverFeedActionSheetActionHandler .cxx_destruct] */

void FUN_10798d7e8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x1d8);
  _objc_destroyWeak(param_1 + 0x1d0);
  _objc_destroyWeak(param_1 + 0x1c8);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
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
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
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
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10798e514; end: 10798e653;  */

void FUN_10798e514(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  puStack_58 = &UNK_10798dd2c;
  puStack_50 = &UNK_10798dd3c;
  uStack_48 = 0;
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0bd820(param_1);
  uVar1 = puStack_68[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10798ec9c; end: 10798eca3;  */

void FUN_10798ec9c(void)

{
  return;
}


