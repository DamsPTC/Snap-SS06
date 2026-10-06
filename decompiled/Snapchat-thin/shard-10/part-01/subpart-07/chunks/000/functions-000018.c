/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10795d500; end: 10795d54f; -[SCSnapDocThumbnailResolverImpl _validationConfigFromMediaContextType:] */

void FUN_10795d500(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c7c50;
  _objc_alloc(PTR_PTR_1126c7c50);
  func_0x00010c029140();
  puVar2 = puVar1;
  func_0x00010bf220e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10795d940; end: 10795da5f;  */

void FUN_10795d940(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  _objc_retain();
  func_0x00010795d830();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010795d8b8();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067fc0();
  _objc_release(lVar3);
  _objc_release(lVar1);
  if ((lVar2 != 0) && (lVar4 - 1U < 2)) {
    if (lVar4 == 2) {
      func_0x00010795d8b8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
    }
    else {
      func_0x00010795d830();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3e0();
      _objc_release(lVar1);
      func_0x00010795d8b8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3e0();
    }
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10795e2ac; end: 10795e2b3; -[SCMemoriesStorySavingLoggingStatus savingCompleteEvent] */

undefined8 FUN_10795e2ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10795e4ac; end: 10795e567;  */

void FUN_10795e4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d57c8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc_init(puVar1);
  func_0x00010c237ee0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10795ec34; end: 10795ec4b; -[SCS2RBaseAdapter userSession] */

void FUN_10795ec34(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10795f004; end: 10795f07f; -[SCShakeSeparatorView _setupLine] */

void FUN_10795f004(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010befbb60(param_1,param_2,puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c380(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10795f4f8; end: 10795f503; -[SCSnapchatAirPerformer perform:] */

void FUN_10795f4f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f7fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam0000000113726ff0,PTR_s_perform__11261ba10);
  return;
}



/* Entry: 10795f6f4; end: 10795f6ff;  */

void FUN_10795f6f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010795f6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10795fb38; end: 10795fbab;  */

void FUN_10795fb38(long param_1,long param_2,undefined8 param_3,int param_4)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 != 0) {
    func_0x00010c14aae0(PTR_PTR_1126b6c20);
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



/* Entry: 10796026c; end: 10796041b; +[SCShakeLogFileManager saveExtraAttachmentsVideos:videos:inPath:] */

void FUN_10796026c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
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
        if (uVar2 != 0) {
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110ea69f8);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beeb940(param_1,param_2,puVar3,puVar4,uVar1);
          func_0x00010befa120(puVar5,param_2,puVar3);
          _objc_release(puVar4);
          _objc_release(puVar3);
        }
        _objc_release(uVar2);
        uVar2 = param_4;
        func_0x00010bf529e0();
        uVar6 = uVar6 + 1;
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



/* Entry: 107960dbc; end: 107960e5f; +[SCShakeLogFileManager deleteAllLogsInPath:] */

undefined * FUN_107960dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad320(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c12cc60();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 1079612f4; end: 10796138f; -[SCShakeSyncManager init] */

undefined1 * FUN_1079612f4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8f50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d57f0;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1c1200(puVar1);
    func_0x00010c1c11e0(puVar1);
    func_0x00010c1c1380(puVar1);
    func_0x00010c1c1320(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10796181c; end: 1079618ab;  */

void FUN_10796181c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0b5e20();
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(lVar4 + 0x18);
  if (lVar2 != 0) {
    func_0x00010c0b5de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde34e0(lVar4);
    _objc_release(lVar2);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = 0;
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar4,PTR_s__transitionToState__112591648,1);
  return;
}



/* Entry: 107961c6c; end: 107961c73; -[SCShakeSyncManager setMCurrentState:] */

void FUN_107961c6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 107961cf8; end: 1079622ab; -[SCShakeTicket initWithId:mReportType:mReportSource:mDescription:mFeature:mSubFeature:selfAssign:mNotificationEmails:mIsAutoTicket:mShouldCreateJiraTicket:mWithScreenshot:mNetworkBandwidth:mNetworkConnectionType:mShakeSensitivityType:mCreateTimeStamp:mWithAttachments:mViewControllerName:mViewControllerFeature:mJiraMetaInfo:mHasScreenCaptured:mHasVideoAttached:mHasCameraRollAttachment:mCameraRollAttachmentFileNames:mJiraLabels:mOtherInfo:carrierInfo:preferenceInfo:blizzardSessionID:activeLensID:lastCaptureSessionID:lastConversationId:safeModeEnabled:traceId:uploadUrl:metadataUploaded:] */

undefined8 *
FUN_107961cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined1 param_18,undefined4 param_19,undefined8 param_20,
             undefined8 param_21,undefined **param_22,undefined4 param_23,undefined4 param_24,
             undefined8 param_25,undefined8 param_26,undefined **param_27,undefined **param_28,
             undefined **param_29,undefined **param_30,undefined **param_31,undefined **param_32,
             undefined **param_33,undefined1 param_34,undefined4 param_35,undefined8 param_36,
             undefined8 param_37,undefined1 param_38)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_retain(param_17);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_36);
  _objc_retain(param_37);
  puStack_70 = PTR_PTR_1126f8f58;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar4 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar4);
    puVar1[4] = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar4 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar4 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar4 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar4 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar4);
    *(undefined1 *)(puVar1 + 1) = param_9;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar4 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_12;
    *(undefined1 *)((long)puVar1 + 10) = param_12._1_1_;
    *(undefined1 *)((long)puVar1 + 0xb) = param_12._2_1_;
    _objc_retain(param_14);
    uVar2 = puVar1[9];
    puVar1[9] = param_14;
    _objc_release(uVar2);
    puVar1[10] = param_15;
    puVar1[0xb] = param_16;
    _objc_retain(param_17);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_17;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0xc) = param_18;
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar4 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_21;
    func_0x00010bf51e00();
    uVar4 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar4);
    if (param_22 == (undefined **)0x0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar3 = param_22;
      func_0x00010bf51e00();
    }
    uVar2 = puVar1[0xf];
    puVar1[0xf] = ppuVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0xd) = (undefined1)param_23;
    *(undefined1 *)((long)puVar1 + 0xe) = param_23._1_1_;
    *(undefined1 *)((long)puVar1 + 0xf) = param_23._2_1_;
    _objc_retain(param_25);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_26;
    _objc_release(uVar2);
    if (param_27 == (undefined **)0x0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar3 = param_27;
      func_0x00010bf51e00();
    }
    uVar2 = puVar1[0x12];
    puVar1[0x12] = ppuVar3;
    _objc_release(uVar2);
    if (param_28 == (undefined **)0x0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar3 = param_28;
      func_0x00010bf51e00();
    }
    uVar2 = puVar1[0x14];
    puVar1[0x14] = ppuVar3;
    _objc_release(uVar2);
    if (param_29 == (undefined **)0x0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar3 = param_29;
      func_0x00010bf51e00();
    }
    uVar2 = puVar1[0x15];
    puVar1[0x15] = ppuVar3;
    _objc_release(uVar2);
    if (param_30 == (undefined **)0x0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar3 = param_30;
      func_0x00010bf51e00();
    }
    uVar2 = puVar1[0x16];
    puVar1[0x16] = ppuVar3;
    _objc_release(uVar2);
    if (param_31 == (undefined **)0x0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar3 = param_31;
      func_0x00010bf51e00();
    }
    uVar2 = puVar1[0x17];
    puVar1[0x17] = ppuVar3;
    _objc_release(uVar2);
    if (param_32 == (undefined **)0x0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar3 = param_32;
      func_0x00010bf51e00();
    }
    uVar2 = puVar1[0x18];
    puVar1[0x18] = ppuVar3;
    _objc_release(uVar2);
    if (param_33 == (undefined **)0x0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar3 = param_33;
      func_0x00010bf51e00();
    }
    uVar2 = puVar1[0x19];
    puVar1[0x19] = ppuVar3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 2) = param_34;
    uVar2 = param_36;
    func_0x00010bf51e00();
    uVar4 = puVar1[0x1a];
    puVar1[0x1a] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_37;
    func_0x00010bf51e00();
    uVar4 = puVar1[0x1b];
    puVar1[0x1b] = uVar2;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + 0x11) = param_38;
  }
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1079622e4; end: 1079622eb; -[SCShakeTicket mIsAutoTicket] */

undefined1 FUN_1079622e4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107962324; end: 10796232b; -[SCShakeTicket mViewControllerName] */

undefined8 FUN_107962324(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107962364; end: 10796236b; -[SCShakeTicket mOtherInfo] */

undefined8 FUN_107962364(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1079623cc; end: 1079623d3; -[SCShakeTicket lastConversationId] */

undefined8 FUN_1079623cc(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 107962618; end: 10796261f; -[SCShakeTicketBuilder setMId:] */

void FUN_107962618(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107962658; end: 10796265f; -[SCShakeTicketBuilder setMSubFeature:] */

void FUN_107962658(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107962698; end: 10796269f; -[SCShakeTicketBuilder setMShouldCreateJiraTicket:] */

void FUN_107962698(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 107962700; end: 107962707; -[SCShakeTicketBuilder setMShakeSensitivityType:] */

void FUN_107962700(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 107962768; end: 10796276f; -[SCShakeTicketBuilder setMViewControllerFeature:] */

void FUN_107962768(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1079627a8; end: 1079627af; -[SCShakeTicketBuilder setMHasCameraRollAttachment:] */

void FUN_1079627a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xf) = param_3;
  return;
}



/* Entry: 107962838; end: 10796283f; -[SCShakeTicketBuilder setMJiraLabels:] */

void FUN_107962838(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107962878; end: 10796287f; -[SCShakeTicketBuilder setActiveLensID:] */

void FUN_107962878(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1079628b8; end: 1079628bf; -[SCShakeTicketBuilder setTraceId:] */

void FUN_1079628b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107962bc8; end: 107962ccf; -[SCShakeTicketAdapter _userShakeQueue] */

void FUN_107962bc8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x107962c50;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam0000000113727028 != -1) {
    func_0x00010002a2fc(0x113727028,&puStack_48);
  }
  uVar1 = uRam0000000113727020;
  _objc_retain(uRam0000000113727020);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107963de0; end: 1079643b3;  */

void FUN_107963de0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  puVar2 = PTR_PTR_1126d57f8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2bd3c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22ba40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfc8040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b6c20;
  if (puVar3 == (undefined *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2bd3c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6b4a0(puVar2);
    _objc_release(uVar1);
  }
  puVar2 = PTR_PTR_1126b6c20;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b3620(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2bd3c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14a900(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126d5818;
  func_0x00010c22bc20(PTR_PTR_1126d5818);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2bd3c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8af40(puVar2);
  _objc_release(uVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b6c20;
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c29e280(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2bd3c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14aae0(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126b6c20;
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c29c360(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2bd3c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14aae0(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar5);
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar8);
  func_0x00010bf97de0(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c151860(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2bd3c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14acc0();
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2bd3c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14b660();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b6c20;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2bd3c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14a5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b6c20;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2bd3c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14a5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010befa160(puVar6);
  }
  if (puVar3 != (undefined *)0x0) {
    func_0x00010befa160(puVar6);
  }
  func_0x00010c0b3620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a120();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c151860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be15a20(uVar1);
  _objc_release(uVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar8);
  _objc_release(uVar5);
  __Block_object_dispose(&uStack_88,8);
  return;
}



/* Entry: 1079658b0; end: 1079658f7; -[SCShakeTicketAdapter .cxx_destruct] */

void FUN_1079658b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107965d18; end: 107965e8f; -[SCShakeTicketManager uploadShakeTicket:configuration:onSuccess:onDuplicate:onTransientError:onPermanentError:] */

void FUN_107965d18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_4;
  func_0x00010c0dc100(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_107965e90;
  puStack_90 = &UNK_1109f1e60;
  uStack_88 = param_1;
  uStack_80 = param_3;
  uStack_78 = param_4;
  uStack_70 = param_5;
  uStack_68 = param_6;
  uStack_60 = param_7;
  uStack_58 = param_8;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfc6dc0(uVar1,param_2,&puStack_a8);
  _objc_release(uVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107966834; end: 10796702b; -[SCShakeTicketManager _authorizedRequestPayload:latestNotificationInfo:] */

void FUN_107966834(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

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
  undefined *puVar11;
  ulong uVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d5840;
  _objc_alloc_init();
  uVar12 = param_3;
  func_0x00010c0b5de0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99a0(puVar1,param_2,uVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar12);
  uVar12 = param_3;
  func_0x00010c0b5f40(param_3);
  func_0x00010b767e90();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb5c0(puVar1,param_2,uVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar12);
  uVar12 = param_3;
  func_0x00010c0b5d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be46660(param_1,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c120(puVar1,param_2,param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar12);
  uVar12 = param_3;
  func_0x00010c0b5d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a840(puVar1,param_2,uVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar12);
  uVar12 = param_3;
  func_0x00010c0b5fa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20ec80(puVar1,param_2,uVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar12);
  uVar12 = param_3;
  func_0x00010c0b5e80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16eec0(puVar1,param_2,uVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar12);
  uVar12 = param_3;
  func_0x00010c0b5ea0(param_3);
  func_0x00010b767794();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c180f60(puVar1,param_2,uVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar12);
  uVar12 = param_3;
  func_0x00010c0b5f60(param_3);
  func_0x00010b767fb8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe940(puVar1,param_2,uVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar12);
  uVar12 = param_3;
  func_0x00010c0b5f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d6ae0(puVar1,param_2,uVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar12);
  uVar12 = param_3;
  func_0x00010c0b5f20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb540(puVar1,param_2,uVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar12);
  uVar12 = param_3;
  func_0x00010bf32d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5ca0(puVar1,param_2,uVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar12);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar12 = param_3;
  func_0x00010c15ac60(param_3);
  func_0x00010c0df6e0(puVar2,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fbba0(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar4 = puVar2;
  func_0x00010c271c60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c560(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  uVar12 = param_3;
  func_0x00010c0cc860();
  if ((uVar12 & 1) == 0) {
    uVar12 = param_3;
    func_0x00010c0b5f80(param_3);
  }
  else {
    uVar12 = 0;
  }
  puVar5 = PTR_PTR_1126d5848;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185180(puVar5,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar12 = param_3;
  func_0x00010c0b6000(param_3);
  func_0x00010c0df6e0(puVar4,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ce60(puVar5,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c1a1160(puVar5,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c0b5e40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6660(puVar5,param_2,uVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar12);
  puVar4 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c271e60();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 != (undefined *)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar7,1,0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar8 != (undefined *)0x0) {
      uVar12 = param_3;
      func_0x00010c0b5dc0(param_3);
      func_0x00010c0df6e0(puVar9,param_2,uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar8,param_2,puVar9,&PTR____CFConstantStringClassReference_110ea6c38);
      _objc_release(puVar9);
      puVar9 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar8,0,0);
      _objc_retainAutoreleasedReturnValue();
      if (puVar9 != (undefined *)0x0) {
        puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc();
        func_0x00010c008340();
        if (puVar10 != (undefined *)0x0) {
          _objc_retain(puVar10);
          _objc_release(puVar6);
          puVar6 = puVar10;
        }
        _objc_release(puVar10);
      }
      _objc_release(puVar9);
      _objc_release(puVar8);
    }
  }
  if (puVar6 != (undefined *)0x0) {
    func_0x00010c1d0560(puVar3,param_2,puVar6,&PTR____CFConstantStringClassReference_110e69d38);
  }
  puVar9 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  uVar12 = param_3;
  func_0x00010c0b5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64b60(puVar9,param_2,uVar12,1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  func_0x00010c1d0560(puVar3,param_2,puVar8,&PTR____CFConstantStringClassReference_110e69d18);
  uVar12 = param_3;
  func_0x00010bef0a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar12 != 0) {
    uVar12 = param_3;
    func_0x00010bef0a60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3,param_2,uVar12,&PTR____CFConstantStringClassReference_110e69898);
    _objc_release(uVar12);
  }
  uVar12 = param_3;
  func_0x00010c0884a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar12 != 0) {
    uVar12 = param_3;
    func_0x00010c0884a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3,param_2,uVar12,&PTR____CFConstantStringClassReference_110e698b8);
    _objc_release(uVar12);
  }
  uVar12 = param_3;
  func_0x00010c088800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar12 != 0) {
    uVar12 = param_3;
    func_0x00010c088800(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126cbba0;
    func_0x00010c088820(PTR_PTR_1126cbba0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3,param_2,uVar12,puVar10);
    _objc_release(puVar10);
    _objc_release(uVar12);
  }
  if (param_4 != 0) {
    puVar10 = PTR_PTR_1126cbba0;
    func_0x00010c089800(PTR_PTR_1126cbba0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3,param_2,param_4,puVar10);
    _objc_release(puVar10);
  }
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar12 = param_3;
  func_0x00010c149240(param_3);
  func_0x00010c0df6e0(puVar10,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126cbba0;
  func_0x00010c149260(PTR_PTR_1126cbba0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,puVar10,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar10);
  uVar12 = param_3;
  func_0x00010c2776c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar12 != 0) {
    uVar12 = param_3;
    func_0x00010c2776c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3,param_2,uVar12,&PTR____CFConstantStringClassReference_110e698f8);
    _objc_release(uVar12);
  }
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10796792c; end: 1079679db; -[SCShakeTicketTable deleteDatabase] */

void FUN_10796792c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = param_1;
  func_0x00010bdf8000(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc60();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return;
}



/* Entry: 10796914c; end: 107969153; -[SCShakeTicketTable workDir] */

undefined8 FUN_10796914c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10796971c; end: 107969747;  */

void FUN_10796971c(long param_1)

{
  func_0x00010be90320(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010be819b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processNextStep__11257e008,4);
  return;
}



/* Entry: 107969c8c; end: 107969d17; -[SCShakeTicketUploader _reportShakeError:shakeSetp:] */

void FUN_107969c8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf99fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b5de0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0af5a0(uVar2,param_2,uVar1,param_3,param_4,1);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107969fd8; end: 10796a027; -[SCShakeUploadThrottleController getCurrentRetryCountForId:] */

long FUN_107969fd8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c067fc0(lVar1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 10796a3ec; end: 10796a427; -[SCShakeUploadThrottleController .cxx_destruct] */

void FUN_10796a3ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10796a460; end: 10796a4cb; -[SCSnapAirConfiguration .cxx_destruct] */

void FUN_10796a460(long param_1)

{
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



/* Entry: 10796a6ec; end: 10796a70f; -[SCNativeNotificationProcessedEvent copyWithZone:] */

undefined8 FUN_10796a6ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10796a8a8; end: 10796a8af; -[SCRemixOperaServices pluginProvider] */

undefined8 FUN_10796a8a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10796abd4; end: 10796abdb; -[SCRemixOperaMetadata sourceSnapId] */

undefined8 FUN_10796abd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10796ada0; end: 10796ae1b; +[MFCCreator descriptor] */

undefined * FUN_10796ada0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727070 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b65b60,
                        &PTR____CFConstantStringClassReference_110ea7158,&PTR_DAT_11323b050,
                        &PTR_s_userId_11323b2a8,0x13,0x88,0x1c);
    func_0x00010c2289e0();
    puRam0000000113727070 = puVar1;
  }
  return puRam0000000113727070;
}



/* Entry: 10796b14c; end: 10796b157; -[SCDeepLinkingUrlInterceptor initWithCircumstanceEngine:] */

void FUN_10796b14c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01db50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithInitialConfig_circumstan_1125e50b8,0,param_3);
  return;
}



/* Entry: 10796b578; end: 10796ba03; -[SCDeepLinkingUrlInterceptor _interceptURL:isWebViewFullyAppeared:isWebViewLoadedSuccessfully:isWebViewPreloaded:allowAlertView:allowUniversalDeepLink:bypassNavigationRestriction:isSubframe:onDestinationReached:completion:additionalInfo:] */

long FUN_10796b578(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  ulong param_6,int param_7,int param_8,uint param_9,undefined4 param_10,
                  long param_11,undefined8 param_12,long param_13)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  uVar1 = param_3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  if (uVar2 == 0) {
LAB_10796b7e8:
    lVar8 = 0;
    goto LAB_10796b7ec;
  }
  uVar1 = param_1;
  func_0x00010c082dc0();
  uVar2 = param_3;
  if ((int)uVar1 == 0) {
    uVar1 = param_1;
    func_0x00010c231460();
    if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c072680(), (int)uVar1 == 0))
    goto LAB_10796b7e8;
    if ((param_4 & 1) == 0) {
      if ((param_6 & 1) != 0) goto LAB_10796b7e8;
    }
    else {
      lVar8 = 0;
      if (((param_9 & 0x100) != 0) || ((*(byte *)(param_1 + 8) & 1) != 0)) goto LAB_10796b7ec;
    }
    puVar3 = PTR____NSDictionary0__struct_11034ab58;
    if ((param_8 != 0) &&
       ((uVar1 = param_1, func_0x00010c06c500(), puVar3 = PTR____NSDictionary0__struct_11034ab58,
        (uVar1 & 1) == 0 &&
        (uVar1 = param_1, func_0x00010bfddc60(), puVar3 = PTR____NSDictionary0__struct_11034ab58,
        (int)uVar1 != 0)))) {
      uStack_78 = *(undefined8 *)PTR__UIApplicationOpenURLOptionUniversalLinksOnly_110345a88;
      puStack_70 = PTR____kCFBooleanTrue_11034ab68;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar1 = param_3;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010bf32ee0();
    _objc_release(uVar1);
    if (uVar6 == 0) {
      uVar2 = param_1;
      func_0x00010bdfb200();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
    }
    if (*(long *)(param_1 + 0x18) == 0) {
LAB_10796b95c:
      if (param_7 != 0) {
        uVar1 = param_1;
        func_0x00010be9bb00();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar2;
        func_0x00010c1504a0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar6;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar1;
        func_0x00010bf4b900();
        _objc_release(uVar4);
        _objc_release(uVar6);
        _objc_release(uVar1);
        if ((uVar7 & 1) == 0) {
          lVar8 = 1;
          *(undefined1 *)(param_1 + 8) = 1;
          func_0x00010c235be0(param_1);
          goto LAB_10796b7d8;
        }
      }
      func_0x00010be6d8e0(param_1);
      goto LAB_10796b7d4;
    }
    uVar1 = param_1;
    func_0x00010be36400();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c08fa60();
    if (uVar6 == 0) {
LAB_10796b954:
      _objc_release(uVar1);
      goto LAB_10796b95c;
    }
    uVar6 = *(ulong *)(param_1 + 0x18);
    func_0x00010bf4b900();
    if ((uVar6 & 1) == 0) goto LAB_10796b954;
    _objc_release(uVar1);
    lVar8 = 0;
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x10);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    }
    else {
      func_0x00010c0d3c80();
    }
    if ((char)param_9 != '\0') {
      func_0x00010c1d0640(puVar3);
    }
    uVar1 = param_1;
    func_0x00010c068fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c28f640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (uVar6 != 0) {
      func_0x00010bef7f60(puVar3);
    }
    if (param_13 != 0) {
      func_0x00010bef7f60(puVar3);
    }
    uVar4 = *(ulong *)(param_1 + 0x38);
    (**(code **)(uVar4 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    puStack_90 = &UNK_10796ba04;
    puStack_88 = &UNK_110923ff0;
    _objc_retain(param_12);
    uStack_80 = param_12;
    ppuVar5 = &puStack_a0;
    _objc_retainBlock(ppuVar5);
    if ((param_11 == 0) ||
       (uVar4 = uVar1,
       _objc_opt_respondsToSelector(uVar1,PTR_s_handleOpenURL_additionalInfo_sou_1125d20a0),
       (uVar4 & 1) == 0)) {
      func_0x00010bfd1bc0(uVar1);
    }
    else {
      func_0x00010bfd1be0(uVar1);
    }
    _objc_release(ppuVar5);
    _objc_release(uStack_80);
    _objc_release(uVar1);
    _objc_release(uVar6);
LAB_10796b7d4:
    lVar8 = 1;
  }
LAB_10796b7d8:
  _objc_release(puVar3);
  param_3 = uVar2;
LAB_10796b7ec:
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar8;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)(param_3 + 0x20);
  if (lVar8 == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010796ba14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 0x10))(lVar8,1);
  return lVar8;
}



/* Entry: 10796c078; end: 10796c147;  */

void FUN_10796c078(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0be280(param_2);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(puStack_38 + 3));
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_2);
  return;
}



/* Entry: 10796c498; end: 10796c4a3; -[SCDeepLinkingUrlInterceptor isAppleDeeplinkURL:] */

/* WARNING: Removing unreachable block (ram,0x000108b8fc1c) */

bool FUN_10796c498(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  func_0x00010c25d780(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_3;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if ((uVar4 & 1) == 0) {
      uVar4 = param_3;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar8);
      _objc_retain(uVar4);
      uVar5 = uVar4;
      func_0x00010c08fa60();
      if (uVar5 == 0) {
        bVar1 = false;
      }
      else {
        puVar6 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
        func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60(uVar4);
        puVar7 = puVar6;
        func_0x00010bfb1800(puVar6);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = puVar7 != (undefined *)0x0;
        _objc_release();
        _objc_release(puVar6);
      }
      _objc_release(uVar4);
      _objc_release(uVar8);
      _objc_release(uVar4);
    }
    else {
      bVar1 = true;
    }
    _objc_release(uVar3);
  }
  else {
    bVar1 = true;
  }
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10796cc00; end: 10796cc43; -[SCDeepLinkingUrlInterceptor urlInterceptorConfigUpdates] */

void FUN_10796cc00(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c068fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c28f640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10796d218; end: 10796d22f; -[SCDeepLinkingUrlInterceptor interceptorDataSource] */

void FUN_10796d218(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10796df38; end: 10796e263; -[SCStoriesChromeInteractionSession _logPublicStoryReplyActionForPage:] */

void FUN_10796df38(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x78);
  func_0x000108f484e8();
  if (iVar1 != 0) {
    lVar4 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar2;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c23a020();
    _objc_release(lVar4);
    if ((int)lVar3 != 0) {
      lVar4 = *(long *)(param_1 + 0x30);
      func_0x000108538708();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        lVar3 = param_3;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar11;
        func_0x00010c067fc0();
        _objc_release(lVar11);
        _objc_release(lVar3);
        func_0x000108534aec();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar5 = lVar4;
        func_0x00010c156360();
        _objc_retainAutoreleasedReturnValue();
      }
      lVar3 = param_3;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar11;
      func_0x000108f2174c();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar11;
      func_0x00010799a354(lVar11,lVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar11);
      _objc_release(lVar3);
      if (lVar8 != 0) {
        uVar9 = 0x76;
        func_0x000107cb4cfc(0x76,lVar8,3,*(undefined8 *)(param_1 + 0xb0));
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c0d3c80();
        _objc_release(uVar9);
        lVar11 = *(long *)(param_1 + 0x28);
        func_0x00010bf5b080();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar11;
        func_0x00010bf5b440();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 == 0) {
          puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar10);
          _objc_release(puVar12);
        }
        else {
          func_0x00010c1d0640(uVar10);
        }
        _objc_release(lVar3);
        _objc_release(lVar11);
        if (*(long *)(param_1 + 0x50) == 0) {
          puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar10);
          _objc_release(puVar12);
        }
        else {
          func_0x00010c1d0640(uVar10);
        }
        uVar9 = *(undefined8 *)(param_1 + 0x80);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7dbc0();
        _objc_release(uVar9);
        _objc_release(uVar10);
      }
      _objc_release(lVar8);
      _objc_release(lVar4);
      _objc_release(lVar5);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10796ecc0; end: 10796edd3; -[SCStoriesChromeInteractionSession _showBusinessProfileWithSponsor] */

void FUN_10796ecc0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c24a0a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010c24a0a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c24a0a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = 0x17;
      func_0x00010bb0584c(0x17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beb8260(param_1,param_2,uVar7,uVar8);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar5);
      return;
    }
  }
  return;
}



/* Entry: 10796f440; end: 10796f517; -[SCStoriesChromeInteractionSession businessProfilesPresenterScopeWillDismiss:] */

void FUN_10796f440(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29cc40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18eba0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf07b60();
    _objc_release(puVar3);
    if (puVar4 != (undefined *)0x2) {
      lVar1 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c29e000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13d1c0();
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    func_0x00010bf94c80(*(undefined8 *)(param_1 + 0x60),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079703e4; end: 107970423;  */

void FUN_1079703e4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf501b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_conversationDestinationParser_1125b1a10);
  return;
}



/* Entry: 107971bb0; end: 107971be3;  */

void FUN_107971bb0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be279e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079724ec; end: 1079726bf; -[SCStoriesSharingSession _handleNotificationOptInForOperaEventWithParams:targetUserId:] */

void FUN_1079724ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b5bf0;
  _objc_retain(param_4);
  func_0x00010c0ebe20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    puStack_70 = &UNK_1079726c0;
    puStack_68 = &UNK_110841f80;
    uStack_60 = uVar3;
    lStack_58 = param_1;
    _objc_retain(uVar3);
    func_0x000100162d98("APPSTORE",&puStack_80);
    _objc_release(uStack_60);
    _objc_release(uVar3);
  }
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  puVar1 = PTR_PTR_1126b4028;
  func_0x00010c258c40(PTR_PTR_1126b4028);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f9280(uVar3);
  _objc_release(param_4);
  _objc_release(puVar1);
  func_0x00010be53b00(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 107973548; end: 10797377f;  */

void FUN_107973548(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  uVar7 = param_4;
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x38) == 1) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x00010c23fc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = (undefined *)0x0;
    uVar7 = uVar4;
    func_0x00010c2bda80(uVar4,param_2,lVar8,uVar3,0,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puStack_58;
    _objc_retain(puStack_58);
    _objc_release(lVar8);
    _objc_release(uVar4);
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    if ((puVar2 == (undefined *)0x0) && (puVar5 != (undefined *)0x0)) {
      puVar6 = PTR_PTR_1126b1c68;
      func_0x00010c29be00(PTR_PTR_1126b1c68,param_2,puVar5,0,0);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar4 = *(undefined8 *)(lVar8 + 0x28);
      *(undefined **)(lVar8 + 0x28) = puVar6;
      _objc_release(uVar4);
    }
    _objc_release(puVar5);
    _objc_release(uVar7);
    _objc_release(uVar3);
  }
  else {
    if (*(long *)(param_1 + 0x38) != 0) goto LAB_10797374c;
    lVar8 = param_3;
    func_0x00010c23fc80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar8;
    func_0x00010c08fa60();
    _objc_release(lVar8);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (lVar1 == 0) goto LAB_10797374c;
    lVar8 = param_3;
    func_0x00010c23fc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d040(puVar2,param_2,lVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    puVar5 = PTR_PTR_1126b1c68;
    func_0x00010bfe94e0(PTR_PTR_1126b1c68,param_2,puVar2,0,0);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar7 = *(undefined8 *)(lVar8 + 0x28);
    *(undefined **)(lVar8 + 0x28) = puVar5;
    _objc_release(uVar7);
  }
  _objc_release(puVar2);
LAB_10797374c:
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107974780; end: 107974787;  */

void FUN_107974780(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24c310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_spotlightSnapDownloader_112670ae8);
  return;
}



/* Entry: 107974e54; end: 107974e63;  */

void FUN_107974e54(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000107974e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,0);
  return;
}



/* Entry: 107975698; end: 10797569b; -[SCStoriesSharingSession legacySendToScopeTrayDidChangeExpansion:] */

void FUN_107975698(void)

{
  return;
}



/* Entry: 107976698; end: 10797695f; -[SCStoriesSharingSession _sendStoryShareToSortedRecipients:additionalText:destinationInfo:sendToSessionId:] */

void FUN_107976698(long param_1,undefined1 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **unaff_x26;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 0x68);
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010853b9b8();
  if (lVar3 == 0 || iVar1 == 0) {
LAB_107976738:
    func_0x00010bea07c0(param_1);
  }
  else {
    unaff_x26 = *(undefined ***)(param_1 + 0x10);
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = unaff_x26;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar4 = *(undefined ***)(param_1 + 0x58);
      func_0x000108538468();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x26);
      if (ppuVar4 == (undefined **)0x0) goto LAB_107976738;
    }
    else {
      _objc_release(unaff_x26);
    }
    _objc_initWeak(auStack_68,param_1);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_60 = ppuVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    puStack_a8 = &UNK_107976960;
    puStack_a0 = &UNK_1109f2460;
    _objc_retain(ppuVar4);
    unaff_x26 = &puStack_b8;
    param_2 = auStack_68;
    ppuStack_98 = ppuVar4;
    _objc_copyWeak(auStack_70,param_2);
    _objc_retain(param_3);
    lStack_90 = param_3;
    _objc_retain(param_4);
    uStack_88 = param_4;
    _objc_retain(param_5);
    uStack_80 = param_5;
    _objc_retain(param_6);
    uStack_78 = param_6;
    func_0x00010bfaa4c0(lVar3);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar5);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(lStack_90);
    _objc_destroyWeak(auStack_70);
    _objc_release(ppuStack_98);
    _objc_destroyWeak(auStack_68);
    _objc_release(ppuVar4);
  }
  _objc_release(lVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 9);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  param_3 = param_3 + 0x48;
  _objc_loadWeakRetained(param_3);
  func_0x00010bea07c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107977280; end: 1079773d7; -[SCStoriesSharingSession _spotlightPlatformAnalyticsDataModelWithDestinationInfo:sendToSessionId:storyId:streamId:sendUiType:] */

void FUN_107977280(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c15f2e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf5b080(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf579a0(uVar5,param_2,param_3,param_4,uVar6,param_5,uVar1,uVar3,
                      *(undefined8 *)(param_1 + 0x180),*(undefined8 *)(param_1 + 0x150),param_6,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1079784dc; end: 1079785eb; -[SCStoriesSharingSession didDeleteSnapProStorySnaps:] */

void FUN_1079784dc(long param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_3;
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained();
    lVar1 = param_1;
    func_0x00010bf99b80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110ea2c98;
    ppuStack_58 = &PTR____CFConstantStringClassReference_110dcab78;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_50 = param_3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_50,&ppuStack_58,1
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(lVar1,param_2,&PTR____CFConstantStringClassReference_110ea2c98,0,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar4);
  ppuVar3 = param_3 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (ppuVar3 != (undefined **)0x0) {
    param_3 = param_3 + 8;
    _objc_loadWeakRetained(param_3);
    ppuVar3 = param_3;
    func_0x00010bf99b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb780();
    _objc_release(ppuVar3);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 1079792dc; end: 107979377;  */

void FUN_1079792dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c079480(uVar2);
  func_0x00010beba280(lVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107979530; end: 10797959f; -[SCStoriesSharingSession _poiIdFromMockStoryId:] */

void FUN_107979530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bfda7c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e32678);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e32678;
    func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110e32678);
    uVar2 = param_3;
    func_0x00010c260c00(param_3,param_2,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1079797d4; end: 1079797db; -[SCStoriesSharingSession setTrackingId:] */

void FUN_1079797d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107979b34; end: 107979b3b; -[SCDiscoverFriendStoryTileTapPrecomputedContext setUpdatedRankedFriendStories:] */

void FUN_107979b34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10797a824; end: 10797a83f;  */

void FUN_10797a824(void)

{
  _objc_opt_new(PTR_PTR_1126ae568);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10797ab24; end: 10797c28f; -[SCDiscoverFeedActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_10797ab24(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4,ulong param_5,
                   long param_6)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  ulong uVar22;
  ulong uVar23;
  undefined *puStack_220;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  ulong uStack_178;
  long lStack_170;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  ulong uStack_140;
  long lStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  ulong uStack_108;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar21 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar21);
  if ((*(byte *)(param_2 + 0x230) & 1) == 0) {
    func_0x00010852b500(*(undefined8 *)(param_2 + 0xe0),1);
    puVar21 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar21);
    uVar23 = 0;
    goto LAB_10797ba80;
  }
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x1f0) = param_1;
  uVar23 = param_5;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar6 = uVar23;
  _objc_opt_isKindOfClass(uVar23,puVar21);
  uVar1 = uVar23;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar23);
  uVar23 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR_PTR_1126b1118;
  _objc_opt_class(PTR_PTR_1126b1118);
  uVar7 = uVar23;
  _objc_opt_isKindOfClass(uVar23,puVar21);
  uVar6 = uVar23;
  if ((uVar7 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar23);
  uVar23 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR_PTR_1126c2098;
  _objc_opt_class(PTR_PTR_1126c2098);
  uVar8 = uVar23;
  _objc_opt_isKindOfClass(uVar23,puVar21);
  uVar7 = uVar23;
  if ((uVar8 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(uVar23);
  uVar23 = param_5;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR_PTR_1126c2380;
  _objc_opt_class(PTR_PTR_1126c2380);
  uVar12 = uVar23;
  _objc_opt_isKindOfClass(uVar23,puVar21);
  uVar8 = uVar23;
  if ((uVar12 & 1) == 0) {
    uVar8 = 0;
  }
  _objc_retain(uVar8);
  _objc_release(uVar23);
  uVar23 = param_5;
  func_0x00010bfe5ec0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcb6a0(param_2);
  _objc_release(uVar23);
  func_0x00010bec4100(param_2);
  uVar23 = uVar6;
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar21 = PTR_PTR_1126c55c0;
  if (uVar23 != 0) {
    uVar23 = uVar6;
    func_0x00010c155f60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dcc80(puVar21);
    _objc_release(uVar23);
  }
  uVar23 = param_5;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar23;
  func_0x00010c0720c0();
  _objc_release(uVar23);
  if ((int)uVar12 == 0) {
    uVar23 = param_5;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar23;
    func_0x00010c0720c0();
    _objc_release(uVar23);
    if ((int)uVar12 == 0) {
      uVar23 = param_5;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar23;
      func_0x00010c0720c0();
      _objc_release(uVar23);
      if ((int)uVar12 == 0) {
        uVar23 = param_5;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar23;
        func_0x00010c0720c0();
        if ((int)uVar12 == 0) {
          uVar12 = param_5;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar22 = uVar12;
          func_0x00010c0720c0();
          _objc_release(uVar12);
          _objc_release(uVar23);
          if ((int)uVar22 == 0) {
            uVar23 = param_5;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar23;
            func_0x00010c0720c0();
            _objc_release(uVar23);
            if ((int)uVar12 == 0) {
              uVar23 = param_5;
              func_0x00010bfe5ec0();
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar23;
              func_0x00010c0720c0();
              _objc_release(uVar23);
              if ((int)uVar12 == 0) {
                uVar23 = param_5;
                func_0x00010bfe5ec0();
                _objc_retainAutoreleasedReturnValue();
                uVar12 = uVar23;
                func_0x00010c0720c0();
                _objc_release(uVar23);
                if ((int)uVar12 != 0) {
                  uVar9 = *(undefined8 *)(param_2 + 0x210);
                  func_0x00010c269d40(uVar9);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c123ac0();
                  _objc_release(uVar9);
                  func_0x00010be7c940(param_2);
                  goto LAB_10797ae28;
                }
                uVar23 = param_5;
                func_0x00010bfe5ec0();
                _objc_retainAutoreleasedReturnValue();
                uVar12 = uVar23;
                func_0x00010c0720c0();
                _objc_release(uVar23);
                if ((int)uVar12 != 0) {
                  lVar10 = param_2 + 0x260;
                  _objc_loadWeakRetained(lVar10);
                  func_0x00010bf7d860();
                  _objc_release(lVar10);
                  puVar21 = PTR_PTR_1126ae4e8;
                  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
                  _objc_retainAutoreleasedReturnValue();
                  goto LAB_10797ae44;
                }
                uVar23 = param_5;
                func_0x00010bfe5ec0();
                _objc_retainAutoreleasedReturnValue();
                uVar12 = uVar23;
                func_0x00010c0720c0();
                _objc_release(uVar23);
                if ((int)uVar12 != 0) {
                  uVar12 = param_5;
                  func_0x00010beee2e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                  uVar22 = uVar12;
                  _objc_opt_isKindOfClass(uVar12,puVar21);
                  uVar23 = uVar12;
                  if ((uVar22 & 1) == 0) {
                    uVar23 = 0;
                  }
                  _objc_retain(uVar23);
                  _objc_release(uVar12);
                  uVar22 = uVar23;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar23);
                  puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
                  uVar23 = uVar22;
                  _objc_opt_isKindOfClass(uVar22,puVar21);
                  uVar12 = uVar22;
                  if ((uVar23 & 1) == 0) {
                    uVar12 = 0;
                  }
                  _objc_retain(uVar12);
                  _objc_release(uVar22);
                  func_0x00010be7dd80(param_2);
                  goto LAB_10797b6fc;
                }
                uVar23 = param_5;
                func_0x00010bfe5ec0();
                _objc_retainAutoreleasedReturnValue();
                uVar12 = uVar23;
                func_0x00010c0720c0();
                _objc_release(uVar23);
                if ((int)uVar12 != 0) {
                  uVar15 = param_5;
                  func_0x00010beee2e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar21 = PTR_PTR_1126d5898;
                  _objc_opt_class(PTR_PTR_1126d5898);
                  uVar23 = uVar15;
                  _objc_opt_isKindOfClass(uVar15,puVar21);
                  uVar22 = uVar15;
                  if ((uVar23 & 1) == 0) {
                    uVar22 = 0;
                  }
                  _objc_retain(uVar22);
                  _objc_release(uVar15);
                  uVar23 = param_5;
                  func_0x00010beee2e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar21 = PTR_PTR_1126d58a0;
                  _objc_opt_class(PTR_PTR_1126d58a0);
                  uVar16 = uVar23;
                  _objc_opt_isKindOfClass(uVar23,puVar21);
                  uVar12 = uVar23;
                  if ((uVar16 & 1) == 0) {
                    uVar12 = 0;
                  }
                  _objc_retain(uVar12);
                  _objc_release(uVar23);
                  if (uVar22 == 0) {
                    uVar23 = uVar12;
                    func_0x00010c0723e0();
                    if (((int)uVar23 == 0) || (*(char *)(param_2 + 0x150) != '\x01'))
                    goto LAB_10797b6fc;
                    _objc_initWeak(&puStack_128,param_2);
                    puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
                    uStack_190 = 0xc2000000;
                    puStack_188 = &UNK_10797c2d0;
                    puStack_180 = &UNK_110848218;
                    _objc_copyWeak(auStack_168,&puStack_128);
                    uStack_178 = uVar12;
                    _objc_retain(param_6);
                    ppuVar17 = &puStack_198;
                    lStack_170 = param_6;
                    _objc_retainBlock(ppuVar17);
                    puVar21 = *(undefined **)(param_2 + 0x200);
                    uVar23 = (ulong)(puVar21 != (undefined *)0x0);
                    if (puVar21 == (undefined *)0x0) {
                      puVar21 = PTR_PTR_1126ae4e8;
                      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bf95660();
                    }
                    else {
                      lVar10 = param_2 + 0x238;
                      _objc_loadWeakRetained(lVar10);
                      uVar15 = uVar12;
                      func_0x00010c2923e0(uVar12);
                      _objc_retainAutoreleasedReturnValue();
                      uVar16 = uVar12;
                      func_0x00010beee760(uVar12);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bf236c0(puVar21);
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(uVar16);
                      _objc_release(uVar15);
                      _objc_release(lVar10);
                      func_0x00010bf9d620(*(undefined8 *)(param_2 + 0x1f8));
                      puVar18 = PTR_PTR_1126ae4e8;
                      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bf95660();
                      _objc_release(puVar18);
                    }
                    _objc_release(puVar21);
                    _objc_release(ppuVar17);
                    _objc_release(lStack_170);
                    _objc_destroyWeak(auStack_168);
                    _objc_destroyWeak(&puStack_128);
                  }
                  else {
                    uVar23 = uVar15;
                    func_0x00010c2923e0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar16 = uVar23;
                    func_0x00010c08fa60();
                    _objc_release(uVar23);
                    if (uVar16 == 0) {
                      puVar21 = PTR_PTR_1126ae4e8;
                      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bf95660();
                      _objc_release(puVar21);
                      uVar23 = 0;
                    }
                    else {
                      _objc_initWeak(&puStack_128,param_2);
                      puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
                      uStack_158 = 0xc2000000;
                      puStack_150 = &UNK_10797c290;
                      puStack_148 = &UNK_110848218;
                      _objc_copyWeak(auStack_130,&puStack_128);
                      uStack_140 = uVar22;
                      _objc_retain(param_6);
                      ppuVar17 = &puStack_160;
                      lStack_138 = param_6;
                      _objc_retainBlock(ppuVar17);
                      puVar21 = *(undefined **)(param_2 + 0x200);
                      uVar23 = (ulong)(puVar21 != (undefined *)0x0);
                      if (puVar21 == (undefined *)0x0) {
                        puVar21 = PTR_PTR_1126ae4e8;
                        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bf95660();
                      }
                      else {
                        lVar10 = param_2 + 0x238;
                        _objc_loadWeakRetained(lVar10);
                        uVar16 = uVar15;
                        func_0x00010c2923e0(uVar15);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010beee760(uVar15);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bf236c0(puVar21);
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release(uVar15);
                        _objc_release(uVar16);
                        _objc_release(lVar10);
                        func_0x00010bf9d620(*(undefined8 *)(param_2 + 0x1f8));
                        puVar18 = PTR_PTR_1126ae4e8;
                        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bf95660();
                        _objc_release(puVar18);
                      }
                      _objc_release(puVar21);
                      _objc_release(ppuVar17);
                      _objc_release(lStack_138);
                      _objc_destroyWeak(auStack_130);
                      _objc_destroyWeak(&puStack_128);
                    }
                  }
                  _objc_release(uVar12);
                  _objc_release(uVar22);
                  goto LAB_10797ba5c;
                }
              }
              else {
                uVar12 = *(ulong *)(param_2 + 0x30);
                func_0x00010c269d40(uVar12);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf9bc60();
LAB_10797b6fc:
                _objc_release(uVar12);
              }
              uVar23 = param_5;
              func_0x00010bfe5ec0();
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar23;
              func_0x00010c0720c0();
              _objc_release(uVar23);
              if ((int)uVar12 != 0) {
                puVar21 = (undefined *)(param_2 + 0x238);
                _objc_loadWeakRetained(puVar21);
                func_0x000107c6b824(uVar7,uVar6,param_4,param_6,puVar21,
                                    *(undefined8 *)(param_2 + 200),*(undefined8 *)(param_2 + 0x28));
                goto LAB_10797ae48;
              }
              lVar20 = *(long *)(param_2 + 0x28);
              _objc_retain(lVar20);
              lVar10 = lVar20;
              func_0x00010bf52a60();
              lVar2 = lRam0000000000000000;
              while (lVar10 != 0) {
                lVar19 = 0;
                do {
                  if (lRam0000000000000000 != lVar2) {
                    _objc_enumerationMutation(lVar20);
                  }
                  puVar21 = PTR_DAT_1126a4e80;
                  uVar22 = *(ulong *)(lVar19 * 8);
                  _objc_retain(uVar22);
                  uVar12 = uVar22;
                  func_0x00010010fab4(uVar22,puVar21);
                  uVar23 = uVar22;
                  if ((int)uVar12 == 0) {
                    uVar23 = 0;
                  }
                  _objc_retain(uVar23);
                  _objc_release(uVar22);
                  uVar12 = uVar23;
                  func_0x00010c10fd00();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (uVar12 == 0) {
                    lVar14 = param_2 + 0x238;
                    _objc_loadWeakRetained(lVar14);
                    func_0x00010c1e1580(uVar23);
                    _objc_release(lVar14);
                  }
                  func_0x00010bdd2100(param_2);
                  func_0x00010bfd0140();
                  if ((uVar22 & 1) != 0) {
                    puVar21 = PTR_PTR_1126ae4e8;
                    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf95660();
                    _objc_release(puVar21);
                    _objc_release(uVar23);
                    _objc_release(lVar20);
                    goto LAB_10797ba54;
                  }
                  _objc_release(uVar23);
                  lVar19 = lVar19 + 1;
                } while (lVar10 != lVar19);
                lVar10 = lVar20;
                func_0x00010bf52a60();
              }
              _objc_release(lVar20);
              puVar21 = PTR_PTR_1126ae4e8;
              func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf95660();
              _objc_release(puVar21);
              goto LAB_10797afb4;
            }
            uVar12 = uVar1;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar21 = PTR_PTR_1126c2098;
            _objc_opt_class(PTR_PTR_1126c2098);
            uVar22 = uVar12;
            _objc_opt_isKindOfClass(uVar12,puVar21);
            uVar23 = uVar12;
            if ((uVar22 & 1) == 0) {
              uVar23 = 0;
            }
            _objc_retain(uVar23);
            _objc_release(uVar12);
            if (uVar23 != 0) {
              uVar9 = *(undefined8 *)(param_2 + 0x58);
              puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
              uStack_80 = uVar23;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf2ea80(uVar9);
              _objc_release(puVar21);
            }
            puVar21 = PTR_PTR_1126ae4e8;
            func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf95660();
            _objc_release(puVar21);
            _objc_release(uVar23);
            goto LAB_10797ba54;
          }
        }
        else {
          _objc_release(uVar23);
        }
        uVar23 = param_5;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        _objc_release(uVar23);
        uVar23 = uVar1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar22 = uVar23;
        _objc_opt_isKindOfClass(uVar23,puVar21);
        uVar12 = uVar23;
        if ((uVar22 & 1) == 0) {
          uVar12 = 0;
        }
        _objc_retain(uVar12);
        _objc_release(uVar23);
        uVar23 = uVar1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar15 = uVar23;
        _objc_opt_isKindOfClass(uVar23,puVar21);
        uVar22 = uVar23;
        if ((uVar15 & 1) == 0) {
          uVar22 = 0;
        }
        _objc_retain(uVar22);
        _objc_release(uVar23);
        uVar23 = 1;
        uVar15 = param_5;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be74b60(param_2);
        _objc_release(uVar22);
        _objc_release(uVar12);
        _objc_release(uVar15);
        puVar21 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf95660();
        _objc_release(puVar21);
      }
      else {
        uVar9 = *(undefined8 *)(param_2 + 0x210);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c123ac0();
        _objc_release(uVar9);
        uVar5 = (uint)*(undefined8 *)(param_2 + 0xf0);
        func_0x00010bf1f440();
        uVar23 = uVar7;
        func_0x00010c25b720();
        if ((uVar23 == 2) || (uVar23 = uVar7, func_0x00010c25b720(), uVar23 == 3)) {
          bVar3 = true;
        }
        else {
          uVar23 = uVar7;
          func_0x00010c25b720();
          bVar3 = uVar23 == 1;
          if ((!bVar3) && (((uVar5 ^ 1) & 1) == 0)) {
            uVar23 = uVar7;
            func_0x00010c25b720();
            bVar3 = uVar23 == 0xb;
          }
        }
        uVar11 = *(undefined8 *)(param_2 + 0x188);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = PTR_PTR_1126c2320;
        func_0x00010c107b80(PTR_PTR_1126c2320);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar11;
        func_0x00010bf1f320();
        _objc_release(puVar21);
        _objc_release(uVar11);
        puStack_220 = (undefined *)0x0;
        if (((int)uVar9 != 0) && (bVar3)) {
          uVar23 = uVar6;
          func_0x00010bfa4340();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067fc0();
          _objc_release(uVar23);
          if (uVar5 == 0) {
            uVar9 = 0;
            puStack_220 = (undefined *)0x0;
          }
          else {
            puVar21 = PTR_PTR_1126ae4e8;
            func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf18ba0();
            _objc_release(puVar21);
            puStack_220 = *(undefined **)(param_2 + 400);
            func_0x00010bf447a0();
            _objc_retainAutoreleasedReturnValue();
            puVar21 = puStack_220;
            func_0x00010bf009c0();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = *(undefined8 *)(param_2 + 0x188);
            func_0x00010c269d40(uVar11);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar11;
            func_0x00010bf67ac0();
            puVar18 = puVar21;
            func_0x00010799b108(puVar21,uVar9,0,*(undefined8 *)(param_2 + 0x158),0);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar11);
            _objc_release(puVar21);
            puVar21 = puVar18;
            func_0x000107af9ddc(puVar18,uVar7);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar18);
            puVar18 = puVar21;
            func_0x00010bf529e0();
            if (puVar18 == (undefined *)0x0) {
              puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
              uStack_78 = uVar7;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar21);
              puVar21 = puVar18;
            }
            uVar11 = *(undefined8 *)(param_2 + 0x228);
            func_0x00010c269d40(uVar11);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar11;
            func_0x00010c2831a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar11);
            puVar18 = PTR_PTR_1126ae4e8;
            func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf95660();
            _objc_release(puVar18);
            _objc_release(puVar21);
          }
          uVar11 = *(undefined8 *)(param_2 + 0x218);
          func_0x00010c269d40(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1074a0();
          _objc_release(uVar11);
          _objc_release(uVar9);
        }
        _objc_retain(uVar7);
        uVar12 = uVar1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar22 = uVar12;
        _objc_opt_isKindOfClass(uVar12,puVar21);
        uVar23 = uVar12;
        if ((uVar22 & 1) == 0) {
          uVar23 = 0;
        }
        _objc_retain(uVar23);
        _objc_release(uVar12);
        if (uVar23 == 0) {
          uVar12 = uVar7;
          func_0x00010c25a160();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0741a0();
          _objc_release(uVar12);
        }
        else {
          func_0x00010c067fc0();
        }
        _objc_release(uVar23);
        _objc_release(uVar7);
        uVar12 = uVar1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
        uVar22 = uVar12;
        _objc_opt_isKindOfClass(uVar12,puVar21);
        uVar23 = uVar12;
        if ((uVar22 & 1) == 0) {
          uVar23 = 0;
        }
        _objc_retain(uVar23);
        _objc_release(uVar12);
        uVar22 = uVar1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
        uVar15 = uVar22;
        _objc_opt_isKindOfClass(uVar22,puVar21);
        uVar12 = uVar22;
        if ((uVar15 & 1) == 0) {
          uVar12 = 0;
        }
        _objc_retain(uVar12);
        _objc_release(uVar22);
        uVar15 = param_5;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar13 = uVar16;
        _objc_opt_isKindOfClass(uVar16,puVar21);
        uVar22 = uVar16;
        if ((uVar13 & 1) == 0) {
          uVar22 = 0;
        }
        _objc_retain(uVar22);
        _objc_release(uVar16);
        func_0x00010c067fc0();
        _objc_release(uVar22);
        func_0x00010be02200();
        func_0x00010be74600(param_2);
        _objc_release(uVar12);
        _objc_release(uVar23);
        _objc_release(uVar15);
        puVar21 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf95660();
        _objc_release(puVar21);
        _objc_release(puStack_220);
LAB_10797ba54:
        uVar23 = 1;
      }
    }
    else {
      uVar9 = *(undefined8 *)(param_2 + 0x210);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c123ac0();
      _objc_release(uVar9);
      uVar23 = param_2;
      func_0x00010be76c00();
      _objc_retainAutoreleasedReturnValue();
      iVar4 = (int)*(undefined8 *)(param_2 + 0xf0);
      func_0x00010bf1f440();
      if (iVar4 == 0) {
        uVar12 = *(ulong *)(param_2 + 0x210);
        func_0x00010c269d40(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1071a0();
      }
      else {
        puVar21 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf18ba0();
        _objc_release(puVar21);
        lVar10 = *(long *)(param_2 + 0x220);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar10 != 0) {
          uVar9 = *(undefined8 *)(param_2 + 0x220);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb9520();
          _objc_release(uVar9);
        }
        uVar22 = uVar23;
        func_0x00010c28d560(uVar23);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar8;
        func_0x00010bf5ed80();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_120 = 0xc2000000;
        puStack_118 = &UNK_107986860;
        puStack_110 = &UNK_1109494d0;
        uVar16 = uVar22;
        uStack_108 = uVar15;
        func_0x0001006372a4(uVar22,&puStack_128);
        uVar12 = uVar16;
        func_0x000100504554();
        _objc_release(uVar16);
        _objc_release(uStack_108);
        _objc_release(uVar15);
        _objc_release(uVar22);
        uVar22 = uVar23;
        func_0x00010c283000(uVar23);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        _objc_release(uVar22);
        puVar21 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf95660();
        _objc_release(puVar21);
        uVar9 = *(undefined8 *)(param_2 + 0x210);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar22 = uVar8;
        func_0x00010bf5ed80(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar22;
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1071c0(uVar9);
        _objc_release(uVar15);
        _objc_release(uVar22);
        _objc_release(uVar9);
      }
      _objc_release(uVar12);
      func_0x00010be02200();
      func_0x00010bdcb6c0(param_2);
      puVar21 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95660();
      _objc_release(puVar21);
      _objc_release(uVar23);
      uVar23 = 1;
    }
  }
  else {
    uVar23 = param_2;
    func_0x00010be411a0();
    if ((uVar23 & 1) != 0) {
      uVar12 = param_5;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = PTR_PTR_1126c2108;
      _objc_opt_class(PTR_PTR_1126c2108);
      uVar22 = uVar12;
      _objc_opt_isKindOfClass(uVar12,puVar21);
      uVar23 = uVar12;
      if ((uVar22 & 1) == 0) {
        uVar23 = 0;
      }
      _objc_retain(uVar23);
      _objc_release(uVar12);
      func_0x00010be3a0a0(param_2);
      _objc_release(uVar23);
LAB_10797ae28:
      puVar21 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
LAB_10797ae44:
      func_0x00010bf95660();
LAB_10797ae48:
      _objc_release(puVar21);
      goto LAB_10797ba54;
    }
    puVar21 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar21);
LAB_10797afb4:
    uVar23 = 0;
  }
LAB_10797ba5c:
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar1);
LAB_10797ba80:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar23;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_6 + 0x30);
  _objc_destroyWeak(&puStack_128);
  __Unwind_Resume();
  uVar23 = param_4 + 0x30;
  _objc_loadWeakRetained();
  if (uVar23 != 0) {
    func_0x00010be01120(uVar23);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar23);
  return uVar23;
}



/* Entry: 10797c5f4; end: 10797c63b; -[SCDiscoverFeedActionHandler didCompletePostStoryScope:] */

void FUN_10797c5f4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1f8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x1f8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10797d1dc; end: 10797d26b; -[SCDiscoverFeedActionHandler _handleStartToPlayStoryWithStoryId:hasUnviewedSnaps:] */

void FUN_10797d1dc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d58b8;
    func_0x00010c251320(PTR_PTR_1126d58b8,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd12a0();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10797d8c0; end: 10797d8d7; -[SCDiscoverFeedActionHandler _navigationStyleForFeedType:] */

ulong FUN_10797d8c0(ulong param_1)

{
  func_0x00010be45660();
  return param_1 & 0xffffffff;
}



/* Entry: 10797db94; end: 10797dbdf; -[SCDiscoverFeedActionHandler _firstStoryIdForStoryReplayReplyPopUpDialogWithActionModel:storyId:] */

void FUN_10797db94(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c231b00();
  uVar1 = param_4;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10797e1c0; end: 10797e1d7; -[SCDiscoverFeedActionHandler _discoverTileTapPrefetchDedupEnabled] */

void FUN_10797e1c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xf0),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110ea7438,0,0);
  return;
}



/* Entry: 10797f318; end: 10797f413;  */

void FUN_10797f318(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_10797f414;
  puStack_68 = &UNK_110853740;
  _objc_copyWeak(auStack_40,param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  _objc_retain(uVar3);
  uStack_38 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar3;
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 1079802bc; end: 10798062b; -[SCDiscoverFeedActionHandler _prepareContentProductPlaybackScopeWithViewLocation:initialGroupDataModel:initialStoryId:baseView:allGroupDataModels:storyLoggingFieldsOverrideDict:discoverFeedStories:friendStories:source:layout:firstReplayStoryId:interactionContext:sectionKey:pageType:navigationStyle:isNonFriendStoriesOnlyPlayback:triggeringSection:] */

void FUN_1079802bc(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,char param_19,undefined4 param_20,
                  undefined8 param_21)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  
  lVar6 = *(long *)(param_2 + 0x178);
  _objc_retain();
  _objc_retain(param_14);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_2 + 0x178));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126b4d30;
  _objc_alloc();
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c04bca0(puVar1,param_3,7,param_17,(long)(param_1 * 1000.0),param_4,param_5,param_6,0,
                      param_21);
  _objc_release(param_6);
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126b4d40;
  _objc_alloc(PTR_PTR_1126b4d40);
  lVar6 = param_2 + 0x238;
  _objc_loadWeakRetained(lVar6);
  uVar3 = param_2;
  func_0x00010be411a0(param_2);
  func_0x00010bff7200(puVar2,param_3,param_7,lVar6,param_18,param_2,param_2,uVar3 & 0xffffffff,0,
                      param_2);
  _objc_release(param_7);
  _objc_release(lVar6);
  puVar4 = PTR_PTR_1126b4d38;
  func_0x00010c258d40(PTR_PTR_1126b4d38,param_3,param_8,param_9,param_10,param_11,param_12,param_13,
                      param_14,param_15,param_16,*(undefined1 *)(param_2 + 0x150));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_16);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  puVar5 = PTR_PTR_1126b4d48;
  _objc_alloc(PTR_PTR_1126b4d48);
  dVar9 = *(double *)(param_2 + 0x1f0);
  func_0x00010bff0a00(dVar9);
  uVar7 = *(undefined8 *)(param_2 + 0x180);
  lVar6 = param_2 + 0x240;
  _objc_loadWeakRetained(lVar6);
  uVar8 = 1;
  if (param_19 == '\0') {
    uVar8 = 2;
  }
  func_0x00010bf22a20(uVar7,param_3,puVar1,puVar2,lVar6,uVar8,puVar4,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  uVar8 = *(undefined8 *)(param_2 + 0xd8);
  dVar10 = *(double *)(param_2 + 0x1f0);
  _CACurrentMediaTime();
  func_0x000108534a80(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab9c0((double)(long)((dVar9 - dVar10) * 1000.0),uVar8,param_3,
                      &PTR____CFConstantStringClassReference_110dc6038,param_4);
  _objc_release(param_4);
  func_0x00010bf9d620(*(undefined8 *)(param_2 + 0x178),param_3,uVar7);
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10798229c; end: 10798230b;  */

void FUN_10798229c(long param_1,undefined8 param_2)

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



/* Entry: 107982b88; end: 107982b97;  */

void FUN_107982b88(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf822b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c2138,PTR_s_discoverFeedStoryWithDiscoverFee_1125be250,param_2);
  return;
}



/* Entry: 107983324; end: 1079833a7; -[SCDiscoverFeedActionHandler _upNextV2TriggeringSourceWithIsFriendStory:isFromBadging:isFromNotification:feedType:] */

undefined4
FUN_107983324(ulong param_1,undefined8 param_2,int param_3,int param_4,uint param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  func_0x00010be411a0();
  uVar2 = 4;
  if (param_6 != 3) {
    uVar2 = 0;
  }
  uVar3 = 3;
  if (param_6 != 2) {
    uVar3 = uVar2;
  }
  uVar2 = 8;
  if ((param_5 & 1) == 0) {
    uVar2 = uVar3;
  }
  uVar3 = 7;
  if (param_5 == 0) {
    uVar3 = 1;
  }
  uVar1 = 5;
  if (param_4 == 0) {
    uVar1 = uVar3;
  }
  if (param_3 != 0) {
    uVar2 = uVar1;
  }
  uVar3 = 9;
  if ((param_1 & 1) == 0) {
    uVar3 = uVar2;
  }
  return uVar3;
}



/* Entry: 107983f68; end: 1079840db; -[SCDiscoverFeedActionHandler didTapToPlayFriendStory:rankedFriendStories:allFriendStories:loggingInfo:itemSource:baseView:exitOperaOffsetArray:] */

void FUN_107983f68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c2380;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0070a0(0);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bdcb6a0(param_1,param_2,puVar2,0,0,0xffffffffffffffff,
                      &PTR____CFConstantStringClassReference_110eb8b38);
  _objc_release(puVar2);
  func_0x00010bdcb6c0(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110eb8b38,
                      param_8,0xffffffffffffffff,0);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107984ab4; end: 107984ae3; -[SCDiscoverFeedActionHandler operaPresenterDidFailToPresent:] */

void FUN_107984ab4(long param_1)

{
  *(undefined1 *)(param_1 + 0xa8) = 0;
  param_1 = param_1 + 0x260;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0eb3c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107985410; end: 107985413; -[SCDiscoverFeedActionHandler playbackPresenterDidCancelDismissing:playbackScope:] */

void FUN_107985410(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eadf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterDidCancelDismissin_112618590);
  return;
}



/* Entry: 1079854c0; end: 10798563f; -[SCDiscoverFeedActionHandler isPresenting] */

void FUN_1079854c0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined **unaff_x21;
  undefined *unaff_x22;
  long lVar16;
  ulong unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  undefined **unaff_x26;
  undefined *puVar17;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_4c0;
  long lStack_4b8;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long lStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  long lStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  undefined *puStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined1 ***pppuStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_2d0;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  long lStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  undefined *puStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  long lStack_278;
  undefined1 **ppuStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_1a0;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  long lStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  long lStack_148;
  undefined1 *puStack_140;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar13 = *(undefined ***)(param_1 + 0x28);
  _objc_retain(ppuVar13);
  ppuVar14 = ppuVar13;
  func_0x00010bf52a60();
  if (ppuVar14 != (undefined **)0x0) {
    unaff_x25 = *plStack_120;
    unaff_x26 = &PTR_s_isOverlaySeparatedFromImageMedia_1125fc000;
    unaff_x27 = &PTR_DAT_1126a4000;
    unaff_x21 = ppuVar14;
    do {
      unaff_x22 = PTR_s_isPresenting_1125fc4e0;
      unaff_x28 = (undefined **)0x0;
      do {
        if (*plStack_120 != unaff_x25) {
          _objc_enumerationMutation(ppuVar13);
        }
        puVar6 = PTR_DAT_1126a4e80;
        unaff_x24 = *(ulong *)(lStack_128 + (long)unaff_x28 * 8);
        _objc_retain(unaff_x24);
        uVar3 = unaff_x24;
        func_0x00010010fab4(unaff_x24,puVar6);
        unaff_x23 = unaff_x24;
        if ((int)uVar3 == 0) {
          unaff_x23 = 0;
        }
        _objc_retain(unaff_x23);
        _objc_release(unaff_x24);
        uVar3 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,unaff_x22);
        if (((uVar3 & 1) != 0) && (uVar3 = unaff_x23, func_0x00010c07ab40(), (uVar3 & 1) != 0)) {
          _objc_release(unaff_x23);
          _objc_release(ppuVar13);
          lVar4 = 1;
          goto LAB_107985604;
        }
        _objc_release(unaff_x23);
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (unaff_x21 != unaff_x28);
      unaff_x21 = ppuVar13;
      func_0x00010bf52a60();
    } while (unaff_x21 != (undefined **)0x0);
  }
  _objc_release(ppuVar13);
  lVar4 = *(long *)(param_1 + 0x280);
  func_0x00010c07ab40();
LAB_107985604:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puStack_138 = &UNK_107985640;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  ppuVar14 = *(undefined ***)(lVar4 + 0x28);
  ppuStack_190 = unaff_x28;
  ppuStack_188 = unaff_x27;
  ppuStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  uStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  puStack_160 = unaff_x22;
  ppuStack_158 = unaff_x21;
  ppuStack_150 = ppuVar13;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar14);
  ppuVar13 = ppuVar14;
  func_0x00010bf52a60();
  if (ppuVar13 != (undefined **)0x0) {
    unaff_x25 = *plStack_250;
    unaff_x26 = &PTR_s_isOverlaySeparatedFromImageMedia_1125fc000;
    unaff_x27 = &PTR_DAT_1126a4000;
    unaff_x21 = ppuVar13;
    do {
      unaff_x22 = PTR_s_isPresentingOtherViewController_1125fc518;
      unaff_x28 = (undefined **)0x0;
      do {
        if (*plStack_250 != unaff_x25) {
          _objc_enumerationMutation(ppuVar14);
        }
        puVar6 = PTR_DAT_1126a4e80;
        unaff_x24 = *(ulong *)(lStack_258 + (long)unaff_x28 * 8);
        _objc_retain(unaff_x24);
        uVar3 = unaff_x24;
        func_0x00010010fab4(unaff_x24,puVar6);
        unaff_x23 = unaff_x24;
        if ((int)uVar3 == 0) {
          unaff_x23 = 0;
        }
        _objc_retain(unaff_x23);
        _objc_release(unaff_x24);
        uVar3 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,unaff_x22);
        if (((uVar3 & 1) != 0) && (uVar3 = unaff_x23, func_0x00010c07ac20(), (uVar3 & 1) != 0)) {
          _objc_release(unaff_x23);
          _objc_release(ppuVar14);
          lVar5 = 1;
          goto code_r0x000107985784;
        }
        _objc_release(unaff_x23);
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (unaff_x21 != unaff_x28);
      unaff_x21 = ppuVar14;
      func_0x00010bf52a60();
    } while (unaff_x21 != (undefined **)0x0);
  }
  _objc_release(ppuVar14);
  lVar5 = *(long *)(lVar4 + 0x280);
  func_0x00010c07ac20();
code_r0x000107985784:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_390;
  puStack_268 = &UNK_1079857c0;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar2 = (int)*(undefined8 *)(lVar5 + 0x280);
  ppuStack_2c0 = unaff_x28;
  ppuStack_2b8 = unaff_x27;
  ppuStack_2b0 = unaff_x26;
  lStack_2a8 = unaff_x25;
  uStack_2a0 = unaff_x24;
  uStack_298 = unaff_x23;
  puStack_290 = unaff_x22;
  ppuStack_288 = unaff_x21;
  ppuStack_280 = ppuVar14;
  lStack_278 = lVar4;
  ppuStack_270 = &puStack_140;
  func_0x00010c07ab40();
  if (iVar2 != 0) {
    func_0x00010bf84cc0(*(undefined8 *)(lVar5 + 0x280));
  }
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  lStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  plStack_380 = (long *)0x0;
  ppuVar12 = *(undefined ***)(lVar5 + 0x28);
  _objc_retain(ppuVar12);
  ppuVar13 = ppuVar12;
  func_0x00010bf52a60();
  if (ppuVar13 != (undefined **)0x0) {
    unaff_x25 = *plStack_380;
    unaff_x27 = &PTR_s_canStopEditingCaption__1125a9000;
    unaff_x28 = &PTR_DAT_1126a4000;
    do {
      unaff_x21 = (undefined **)PTR_s_isPresenting_1125fc4e0;
      unaff_x22 = PTR_s_cancelPresentation_1125a9470;
      unaff_x26 = (undefined **)0x0;
      do {
        if (*plStack_380 != unaff_x25) {
          _objc_enumerationMutation(ppuVar12);
        }
        puVar6 = PTR_DAT_1126a4e80;
        unaff_x24 = *(ulong *)(lStack_388 + (long)unaff_x26 * 8);
        _objc_retain(unaff_x24);
        uVar3 = unaff_x24;
        func_0x00010010fab4(unaff_x24,puVar6);
        unaff_x23 = unaff_x24;
        if ((int)uVar3 == 0) {
          unaff_x23 = 0;
        }
        _objc_retain(unaff_x23);
        _objc_release(unaff_x24);
        uVar3 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,unaff_x21);
        if ((((uVar3 & 1) != 0) && (uVar3 = unaff_x23, func_0x00010c07ab40(), (int)uVar3 != 0)) &&
           (uVar3 = unaff_x23, _objc_opt_respondsToSelector(unaff_x23,unaff_x22), (uVar3 & 1) != 0))
        {
          func_0x00010bf2eb20(unaff_x23);
        }
        _objc_release(unaff_x23);
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar13 != unaff_x26);
      ppuVar13 = ppuVar12;
      puVar8 = &uStack_390;
      func_0x00010bf52a60();
      ppuVar14 = (undefined **)0x0;
    } while (ppuVar13 != (undefined **)0x0);
  }
  ppuVar13 = ppuVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
    return;
  }
  ___stack_chk_fail();
  puVar11 = &uStack_4c0;
  puStack_398 = &UNK_107985958;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_3f0 = unaff_x28;
  ppuStack_3e8 = unaff_x27;
  ppuStack_3e0 = unaff_x26;
  lStack_3d8 = unaff_x25;
  uStack_3d0 = unaff_x24;
  uStack_3c8 = unaff_x23;
  puStack_3c0 = unaff_x22;
  ppuStack_3b8 = unaff_x21;
  ppuStack_3b0 = ppuVar14;
  ppuStack_3a8 = ppuVar12;
  pppuStack_3a0 = &ppuStack_270;
  _objc_retain(puVar8);
  _objc_storeWeak(ppuVar13 + 0x47,puVar8);
  uVar18 = 0;
  lStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  plStack_4b0 = (long *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  puVar15 = ppuVar13[5];
  _objc_retain(puVar15);
  puVar6 = puVar15;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    lVar4 = *plStack_4b0;
    do {
      puVar17 = (undefined *)0x0;
      do {
        if (*plStack_4b0 != lVar4) {
          _objc_enumerationMutation(puVar15);
        }
        puVar1 = PTR_DAT_1126a4e80;
        lVar16 = *(long *)(lStack_4b8 + (long)puVar17 * 8);
        _objc_retain(lVar16);
        lVar7 = lVar16;
        func_0x00010010fab4(lVar16,puVar1);
        lVar5 = lVar16;
        if ((int)lVar7 == 0) {
          lVar5 = 0;
        }
        _objc_retain(lVar5);
        _objc_release(lVar16);
        if (lVar5 != 0) {
          func_0x00010c1e1580(lVar16);
        }
        _objc_release(lVar5);
        puVar17 = puVar17 + 1;
      } while (puVar6 != puVar17);
      puVar6 = puVar15;
      puVar11 = &uStack_4c0;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  if ((*(byte *)((long)puVar8 + 0x164) & 1) == 0) {
    if (puVar11 == (undefined8 *)0x0) {
      puVar9 = (undefined1 *)((long)puVar8 + 0x238);
      _objc_loadWeakRetained(puVar9);
      puVar10 = puVar9;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetMaxY();
      uVar19 = *(undefined8 *)PTR__CGRectZero_110347608;
      uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
      uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
      uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
      func_0x00010bc8525c(uVar19,uVar20,uVar21,uVar22,uVar18);
      _objc_release(puVar10);
      _objc_release(puVar9);
      func_0x00010c283ba0(*(undefined8 *)((long)puVar8 + 0x280));
      func_0x00010c283c00(uVar19,uVar20,uVar21,uVar22,*(undefined8 *)((long)puVar8 + 0x280));
    }
    else {
      func_0x00010c283ba0(*(undefined8 *)((long)puVar8 + 0x280));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 107985c10; end: 107985c1f; -[SCDiscoverFeedActionHandler resumePlayback] */

void FUN_107985c10(long param_1)

{
  if (*(long *)(param_1 + 0x280) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c13d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x280),PTR_s_resumeOpera_11262cf70);
    return;
  }
  return;
}



/* Entry: 107986190; end: 1079861b3;  */

uint FUN_107986190(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cff98;
  func_0x00010c06b8a0(PTR_PTR_1126cff98,param_2,param_2);
  return (uint)puVar1 ^ 1;
}



/* Entry: 1079863a8; end: 1079863b3; -[SCDiscoverFeedActionHandler setDeckContainerFactory:] */

void FUN_1079863a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x240,param_3);
  return;
}



/* Entry: 107986438; end: 107986443; -[SCDiscoverFeedActionHandler setDelegate:] */

void FUN_107986438(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x260,param_3);
  return;
}



/* Entry: 107986490; end: 107986497; -[SCDiscoverFeedActionHandler setIsExpandedStoryFeedController:] */

void FUN_107986490(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x150) = param_3;
  return;
}



/* Entry: 1079868dc; end: 1079868e3;  */

void FUN_1079868dc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c259cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storyId_112674158);
  return;
}



/* Entry: 107986b6c; end: 107987593; -[SCDiscoverFeedActionSheetActionHandler initWithUserSession:story:navigationDelegate:subscribeStatusManager:notificationStatusManager:circumstanceEngine:sectionKey:storiesGrapheneMetricsEmitter:impalaProfilePresentHandler:creatorSettingsDataMutator:lazyDiscoverFeedDataMutator:lazyDiscoverFeedInteractionHistoryManager:lazyNotificationOptInRequestManager:lazyDiscoverFeedDataFetcher:lazyDiscoverFeedEventsLogger:lazyBitmojiImageFetcher:lazyBitmojiFriendAvatarProvider:lazyBitmojiAvatarProvider:lazySnapchattersDataFetcher:lazyAdConfigProvider:lazyAdReportPromotedStoryTileEventTrackerProvider:lazyImageDownloader:lazyUserSegmentsProvider:snapchattersDataMutator:snapchattersDataTracker:promotedStoryShareScopeExposer:promotedStoryShareScopeServices:promotedStoryReportScopeExposer:promotedStoryReportScopeServices:promotedStoryAdInfoScopeExposer:promotedStoryAdInfoScopeServices:promotedStoryHideScopeExposer:promotedStoryHideScopeServices:shareFriendScopeExposer:safetyReportScopeExposer:deeplinkSendToScopeExposer:adReportScopeExposer:snapTokenProvider:mixerEndpointManager:subscriptionWorkflow:alertPresenterFactory:grapheneRegistry:storiesConfigProvider:networkConnectivityMonitor:dsaExplainerScopeExposer:dsaExplainerScopeServices:contentBlocker:adRenderDataParser:customAppThemeProvider:locationProvider:] */

undefined8 *
FUN_107986b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_15);
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
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  puStack_70 = PTR_PTR_1126f8fe0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 4,param_5);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[3];
    puVar1[3] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_36;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c2280;
    _objc_alloc();
    func_0x00010c04ab20();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(puVar1[0xb]);
    puVar3 = PTR_PTR_1126c2278;
    _objc_alloc();
    func_0x00010c04ab20();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(puVar1[0xc]);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[5];
    puVar1[5] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_44;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c2120;
    _objc_opt_new();
    uVar2 = puVar1[0x34];
    puVar1[0x34] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_51);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_51;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_46;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_47;
    _objc_release(uVar2);
    _objc_retain(param_48);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_48;
    _objc_release(uVar2);
    _objc_retain(param_49);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_49;
    _objc_release(uVar2);
    _objc_retain(param_50);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_50;
    _objc_release(uVar2);
    _objc_retain(param_52);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_52;
    _objc_release(uVar2);
  }
  _objc_release(param_52);
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
  _objc_release(param_36);
  _objc_release(param_35);
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
  _objc_release(param_15);
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
  return puVar1;
}



/* Entry: 107988744; end: 107988897; -[SCDiscoverFeedActionSheetActionHandler _handleHideResponse:success:] */

void FUN_107988744(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126afca8;
  if ((param_4 & 1) == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110ea7658;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea7658,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237520(puVar1);
    _objc_release(ppuVar3);
  }
  else {
    lVar2 = param_1 + 0x1c8;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010be8d840(param_1);
    }
    else {
      _objc_initWeak(auStack_38,param_1);
      param_1 = param_1 + 0x1c8;
      _objc_loadWeakRetained(param_1);
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(param_3);
      func_0x00010bf83dc0(param_1);
      _objc_release(param_1);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1079890fc; end: 107989187; -[SCDiscoverFeedActionSheetActionHandler didDismissWithRecipientsCount:groupsCount:] */

void FUN_1079890fc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0xd0);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c150520(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xd0));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10798979c; end: 10798979f; -[SCDiscoverFeedActionSheetActionHandler shareFriendActionManagerDidSendUsername] */

void FUN_10798979c(void)

{
  return;
}



/* Entry: 1079899b8; end: 107989ba3; -[SCDiscoverFeedActionSheetActionHandler _presentPublicUserProfile:userId:businessId:sourceView:storyLoggingInfo:] */

void FUN_1079899b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_5;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    if (param_4 == 0) goto LAB_107989b3c;
    puVar2 = *(undefined **)(param_1 + 0x70);
    param_1 = param_1 + 0x1d0;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfea120(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c10ece0(puVar2);
  }
  else {
    puVar2 = PTR_PTR_1126b0f10;
    _objc_alloc(PTR_PTR_1126b0f10);
    func_0x00010c033440();
    _objc_initWeak(auStack_68,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    lVar1 = param_1 + 0x1d0;
    _objc_loadWeakRetained(lVar1);
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010bfea000(uVar3);
    _objc_release(lVar1);
    func_0x00010bdcc7e0(param_1);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(puVar2);
LAB_107989b3c:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10798a47c; end: 10798a593; -[SCDiscoverFeedActionSheetActionHandler _presentPublisherProfile:sourceView:storyLoggingInfo:] */

void FUN_10798a47c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c259740(uVar3);
  func_0x00010c2600c0(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c259740(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c0dca40(uVar4);
  uVar3 = param_3;
  func_0x0001079d3368(param_3,&PTR____CFConstantStringClassReference_110e1caf8,uVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar1 = param_1 + 0x1d0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x58));
  _objc_release(lVar1);
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x58));
  func_0x00010bdcc7e0(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10798ab2c; end: 10798ac1f; -[SCDiscoverFeedActionSheetActionHandler _dismissActionSheetAndPlayStoryFromSourceView:storyDedupeFp:] */

void FUN_10798ab2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + 0x1c8;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010bf83dc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10798b704; end: 10798b767;  */

void FUN_10798b704(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10798be1c; end: 10798bf07; -[SCDiscoverFeedActionSheetActionHandler _presentAdInfoForActionDataModel:] */

void FUN_10798be1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + 0x1c8;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf83dc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10798c66c; end: 10798c69f;  */

void FUN_10798c66c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9ec00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10798cb8c; end: 10798cbc7; -[SCDiscoverFeedActionSheetActionHandler reportAdScopeDidComplete:didSubmit:] */

void FUN_10798cb8c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar1);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x98));
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bea5cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setNeedsCustomStatusBarStyleCon_1125870d0);
  return;
}


