/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107183768; end: 1071837f7; -[SCChatInputStickerAccessory didResignActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107183768(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf7a180(*(undefined8 *)(param_1 + _DAT_1127649bc));
  lVar1 = param_1 + _DAT_1127648e4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c065f40();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11276499c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c10c840();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112764930);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3d9e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1071837f8; end: 107183823; -[SCChatInputStickerAccessory willResumeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071837f8(long param_1)

{
  func_0x00010be885a0();
                    /* WARNING: Could not recover jumptable at 0x00010c2a6ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127649bc),PTR_s_willResumeActive_1126874d0);
  return;
}



/* Entry: 107183824; end: 107183873; -[SCChatInputStickerAccessory willSuspendActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107183824(long param_1)

{
  func_0x00010c2a6f20(*(undefined8 *)(param_1 + _DAT_1127649bc));
  if (*(long *)(param_1 + _DAT_1127649ec) != 0) {
    func_0x00010bf82f40();
                    /* WARNING: Could not recover jumptable at 0x00010beeead0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_actionMenuDidDismiss_112599458);
    return;
  }
  return;
}



/* Entry: 107183874; end: 1071838b3; -[SCChatInputStickerAccessory didActivateDrawerWithDeeplinkIdentifier:subitemDeeplinkIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107183874(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127649f0);
  *(undefined8 *)(param_1 + _DAT_1127649f0) = param_4;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be6d750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__openSuperCategoryByDeeplinkIfNe_112578f70);
  return;
}



/* Entry: 1071838b4; end: 107183917; -[SCChatInputStickerAccessory preferredTargetState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1071838b4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112764904);
  func_0x00010c072340();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1 + _DAT_11276499c;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c252440();
    _objc_release(uVar1);
    if (uVar2 < 2) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



/* Entry: 107183918; end: 10718393f; -[SCChatInputStickerAccessory shouldForceMaximumHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107183918(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + _DAT_1127649e4) != 0) {
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764904);
                    /* WARNING: Could not recover jumptable at 0x00010c072350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_isExpandChatStickerPickerEnabled_1125fa2e0);
  return uVar1;
}



/* Entry: 107183940; end: 1071839d3; -[SCChatInputStickerAccessory _lowerDrawerAfterStickerSelectionIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107183940(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112764904);
  func_0x00010c072340();
  if (iVar1 != 0) {
    lVar4 = (long)_DAT_11276499c;
    lVar2 = param_1 + lVar4;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c252440();
    _objc_release(lVar2);
    if (lVar3 == 2) {
      param_1 = param_1 + lVar4;
      _objc_loadWeakRetained(param_1);
      func_0x00010c27a900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1071839d4; end: 107183a0f; -[SCChatInputStickerAccessory performLocalStickerSearch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071839d4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  if ((int)puVar1 != 0) {
    *(undefined1 *)(param_1 + _DAT_1127649f4) = 1;
  }
  return;
}



/* Entry: 107183a10; end: 107183aeb; -[SCChatInputStickerAccessory stickerSearchBarDidBeginEditing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107183a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107183aec;
  puStack_50 = &UNK_110842e18;
  uVar4 = 0x3fd0000000000000;
  lStack_48 = param_4;
  func_0x00010bf03400(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_5,&puStack_68);
  lVar3 = (long)_DAT_11276499c;
  lVar1 = param_4 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar3 = param_4 + lVar3;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf89dc0();
  func_0x00010c23d160(param_3,uVar4,param_4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 107183aec; end: 107183b4f;  */

void FUN_107183aec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c065880(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83ba0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c065880(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27a900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107183b50; end: 107183c2b; -[SCChatInputStickerAccessory stickerSearchBarDidEndEditing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107183b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107183c2c;
  puStack_50 = &UNK_110842e18;
  uVar4 = 0x3fd0000000000000;
  lStack_48 = param_4;
  func_0x00010bf03400(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_5,&puStack_68);
  lVar3 = (long)_DAT_11276499c;
  lVar1 = param_4 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar3 = param_4 + lVar3;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf89dc0();
  func_0x00010c23d160(param_3,uVar4,param_4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 107183c2c; end: 107183c9b;  */

void FUN_107183c2c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c065880(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10c840();
  _objc_release(uVar1);
  func_0x00010bf693e0(*(undefined8 *)(param_2 + 0x20));
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c065880(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c191880(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107183c9c; end: 107183d5f; -[SCChatInputStickerAccessory _sinkConversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107183c9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107183d60;
  puStack_40 = &UNK_110904f68;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107183da0;
  puStack_68 = &UNK_1108450c8;
  lStack_60 = param_1;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0bf0a0(param_3,param_2,&puStack_58,&puStack_80);
  uVar1 = param_3;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127649ac);
  *(undefined8 *)(param_1 + _DAT_1127649ac) = uVar1;
  _objc_release(uVar2);
  return;
}



/* Entry: 107183d60; end: 107183d9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107183d60(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127648c8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2564c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107183da0; end: 107183da7;  */

void FUN_107183da0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be92a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__resetDrawerOnConversationChange_112582440);
  return;
}



/* Entry: 107183da8; end: 107183ddf; -[SCChatInputStickerAccessory _resetDrawerOnConversationChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107183da8(long param_1,undefined8 param_2)

{
  func_0x00010be92b60();
  func_0x00010be923c0(param_1,param_2,0);
  *(undefined1 *)(param_1 + _DAT_1127649f8) = 0;
  return;
}



/* Entry: 107183de0; end: 107183ec7; -[SCChatInputStickerAccessory _textViewDidBeginEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107183de0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010bde04a0(param_1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  _objc_release(uVar1);
  if ((((ulong)puVar2 & 1) == 0) &&
     (lVar3 = (long)_DAT_1127649f8, *(char *)(param_1 + lVar3) == '\x01')) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_107183ec8;
    puStack_40 = &UNK_110842e18;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_58);
    *(undefined1 *)(param_1 + lVar3) = 0;
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107183ec8; end: 107183ed3;  */

void FUN_107183ec8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1586d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_selectAll__112633bd0,0);
  return;
}



/* Entry: 107183ed4; end: 107183f33; -[SCChatInputStickerAccessory _recordAndPublishStickerSend:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107183ed4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(long *)(param_1 + _DAT_1127649e4) = *(long *)(param_1 + _DAT_1127649e4) + 1;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127648b8);
  puVar1 = PTR_PTR_1126cf980;
  func_0x00010c2553a0(PTR_PTR_1126cf980);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107183f34; end: 107183f9f; -[SCChatInputStickerAccessory _buildChatStickerSearchIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107183f34(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127648b0;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  func_0x00010bf57500(*(undefined8 *)(param_1 + lVar2));
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010be89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__registerLocalSearchResultsObser_11257ffe8);
  return;
}



/* Entry: 107183fa0; end: 1071840bb; -[SCChatInputStickerAccessory _registerLocalSearchResultsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107183fa0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127648b0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1540e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1071840bc; end: 107184103;  */

void FUN_1071840bc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b900();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107184104; end: 1071841a7; -[SCChatInputStickerAccessory _handleLocalSearchResults:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107184104(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010be3f5a0();
  if ((int)lVar1 == 0) {
    *(undefined1 *)(param_1 + _DAT_1127648bc) = 1;
  }
  else {
    func_0x00010bee0c60(param_1);
    uVar2 = param_1 + _DAT_1127648e4;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010bfd3be0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + _DAT_112764930);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e9940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
  }
  return;
}



/* Entry: 1071841a8; end: 1071841c3; -[SCChatInputStickerAccessory _clearExplicitStickerSearchIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071841a8(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127649d8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be71710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__performCTPSearchWithSearchText__112579f60,0);
    return;
  }
  return;
}



/* Entry: 1071841c4; end: 107184243; -[SCChatInputStickerAccessory _resetAutosuggestViewWithAnimationStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071841c4(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_1127649fc));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764a00);
  *(undefined8 *)(param_1 + _DAT_112764a00) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764a04);
  *(undefined8 *)(param_1 + _DAT_112764a04) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + _DAT_112764a08) = 0;
  param_1 = param_1 + _DAT_1127649e0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c138d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107184244; end: 10718438b; -[SCChatInputStickerAccessory _stickerPickerController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107184244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d4e90;
  _objc_alloc(PTR_PTR_1126d4e90);
  func_0x00010be5de00(param_5);
  lVar2 = param_5 + _DAT_1127648b4;
  uVar4 = param_3;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x00010c061bc0(param_1,param_2,param_3,param_4,uVar4,puVar1,param_6,lVar2,
                      *(undefined8 *)(param_5 + _DAT_112764910),param_5,
                      *(undefined8 *)(param_5 + _DAT_1127648ec),
                      *(undefined8 *)(param_5 + _DAT_112764944),
                      *(undefined8 *)(param_5 + _DAT_1127648d8),
                      *(undefined8 *)(param_5 + _DAT_11276492c),
                      *(undefined8 *)(param_5 + _DAT_1127648f8),
                      *(undefined8 *)(param_5 + _DAT_1127648fc),
                      *(undefined8 *)(param_5 + _DAT_11276490c),
                      *(undefined8 *)(param_5 + _DAT_112764954),
                      *(undefined8 *)(param_5 + _DAT_112764908),
                      *(undefined8 *)(param_5 + _DAT_112764924),
                      *(undefined8 *)(param_5 + _DAT_112764904));
  _objc_release(lVar2);
  puVar3 = puVar1;
  func_0x00010bf4dce0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10718438c; end: 10718440f; -[SCChatInputStickerAccessory _refreshDrawerHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718438c(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  func_0x00010c0c3420();
  lVar1 = (long)_DAT_112764a0c;
  dVar2 = param_1;
  func_0x00010bf49220(*(undefined8 *)(param_2 + lVar1));
  if (0.5 < ABS(dVar2 - param_1)) {
    func_0x00010c181140(param_1,*(undefined8 *)(param_2 + lVar1));
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbe20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 107184410; end: 107184707; -[SCChatInputStickerAccessory _insertStickerPickerControllerConetentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107184410(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar17 = param_1;
  func_0x00010bf8aee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  func_0x00010c219b60(param_3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf8aee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar17;
  func_0x00010bfb6da0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf8aee0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bfb6da0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf8aee0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bfb6da0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar18);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar16);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar17);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0c3420(param_1);
  uVar5 = uVar2;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_112764a0c;
  uVar16 = *(undefined8 *)(param_1 + lVar17);
  *(undefined8 *)(param_1 + lVar17) = uVar5;
  _objc_release(uVar16);
  _objc_release(uVar2);
  lVar17 = *(long *)(param_1 + lVar17);
  func_0x00010c162480();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  uVar18 = *(undefined8 *)(lVar17 + _DAT_1127649e8);
  uVar16 = *(undefined8 *)(lVar17 + _DAT_1127648ec);
  func_0x00010c088c60(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar16;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286080(uVar18);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar16);
  if (*(long *)(lVar17 + _DAT_112764948) == 0) {
    func_0x00010be11220(lVar17);
  }
  else {
    func_0x00010be29720(lVar17);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8ad30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar17,PTR_s__reloadStickerDataProvider_1125804e8);
  return;
}



/* Entry: 107184708; end: 1071847c3; -[SCChatInputStickerAccessory _updateStickerManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107184708(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127649e8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127648ec);
  func_0x00010c088c60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286080(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)(param_1 + _DAT_112764948) == 0) {
    func_0x00010be11220(param_1);
  }
  else {
    func_0x00010be29720(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8ad30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reloadStickerDataProvider_1125804e8);
  return;
}



/* Entry: 1071847c4; end: 107184927; -[SCChatInputStickerAccessory _doesCustomStickerContainMediaContent:] */

byte FUN_1071847c4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  byte bVar6;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c271a80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf96f00();
  if (uVar2 == 3) {
    uVar3 = uVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ba838;
    _objc_opt_class(PTR_PTR_1126ba838);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    uVar3 = uVar2;
    func_0x00010c0c45e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c1100();
    _objc_release(uVar3);
    bVar6 = *(byte *)(puStack_58 + 3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uVar2);
  }
  else {
    bVar6 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return bVar6 & 1;
}



/* Entry: 107184928; end: 10718492b;  */

void FUN_107184928(void)

{
  return;
}



/* Entry: 10718492c; end: 107184963;  */

void FUN_10718492c(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c08fa60();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3 != 0;
  return;
}



/* Entry: 107184964; end: 1071849af; -[SCChatInputStickerAccessory _chatStickerSearchSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107184964(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + _DAT_1127648e4;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127649c0);
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}



/* Entry: 1071849b0; end: 107184bb7; -[SCChatInputStickerAccessory _openToInitialStickerPickerCategory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071849b0(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
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
  lVar7 = (long)_DAT_112764930;
  ppuVar1 = *(undefined ***)((long)param_1 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0df460();
  _objc_release();
  if ((0 < (long)ppuVar2) && (ppuVar1 = param_1, func_0x00010be6d740(), ((ulong)ppuVar1 & 1) == 0))
  {
    lVar8 = (long)param_1 + (long)_DAT_1127648e4;
    _objc_loadWeakRetained();
    lVar3 = lVar8;
    func_0x00010bfd3be0();
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_1111815f8;
    if ((int)lVar3 == 0) {
      ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_111181610;
    }
    _objc_retain(ppuVar1);
    _objc_release(lVar8);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    ppuVar2 = ppuVar1;
    func_0x00010bf52a60(ppuVar1,param_2,&uStack_130,auStack_e8,0x10);
    if (ppuVar2 != (undefined **)0x0) {
      lVar8 = *plStack_120;
      do {
        ppuVar9 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(ppuVar1);
          }
          uVar4 = *(undefined8 *)(lStack_128 + (long)ppuVar9 * 8);
          func_0x00010c067fc0(uVar4);
          uVar5 = *(undefined8 *)((long)param_1 + (long)_DAT_1127649a0);
          func_0x00010c254b00(uVar5,param_2,uVar4);
          if ((int)uVar5 != 0) {
            uVar4 = *(undefined8 *)((long)param_1 + lVar7);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e9940();
            goto LAB_107184b6c;
          }
          ppuVar9 = (undefined **)((long)ppuVar9 + 1);
        } while (ppuVar2 != ppuVar9);
        ppuVar2 = ppuVar1;
        func_0x00010bf52a60(ppuVar1,param_2,&uStack_130,auStack_e8,0x10);
      } while (ppuVar2 != (undefined **)0x0);
    }
    uVar4 = *(undefined8 *)((long)param_1 + lVar7);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e8f00(uVar4,param_2,puVar6,0);
    _objc_release(puVar6);
LAB_107184b6c:
    _objc_release(uVar4);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)((long)ppuVar1 + (long)_DAT_112764930);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becd560(ppuVar1);
  func_0x00010c28c280(uVar4,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107184bb8; end: 107184c07; -[SCChatInputStickerAccessory _scrollToTopOfCategory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107184bb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764930);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becd560(param_1);
  func_0x00010c28c280(uVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107184c08; end: 107184f5b; -[SCChatInputStickerAccessory _updateStickerDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107184c08(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar17 = (long)_DAT_1127649a0;
  if (*(long *)(param_1 + lVar17) == 0) {
    lVar3 = param_1;
    func_0x00010bdf2e60();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_1127649c8;
    uVar6 = *(undefined8 *)(param_1 + lVar12);
    *(long *)(param_1 + lVar12) = lVar3;
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126d4cd8;
    _objc_alloc();
    uVar7 = *(undefined8 *)(param_1 + lVar12);
    lVar5 = param_1;
    func_0x00010bddd100();
    lVar3 = param_1 + _DAT_1127648e4;
    _objc_loadWeakRetained(lVar3);
    lVar13 = lVar3;
    func_0x00010bf60960();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010bf62020();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + _DAT_1127648b4;
    _objc_loadWeakRetained();
    uVar8 = *(undefined8 *)(param_1 + _DAT_1127649d8);
    uVar11 = *(undefined8 *)(param_1 + _DAT_1127648c4);
    uVar9 = *(undefined8 *)(param_1 + _DAT_1127648d0);
    uVar10 = *(undefined8 *)(param_1 + _DAT_112764944);
    uVar15 = *(undefined8 *)(param_1 + _DAT_112764918);
    uVar14 = *(undefined8 *)(param_1 + _DAT_1127648ec);
    uVar16 = *(undefined8 *)(param_1 + _DAT_1127648f8);
    uVar1 = (undefined1)*(undefined8 *)(param_1 + _DAT_112764904);
    func_0x00010c06e680();
    func_0x00010bfee8c0(puVar4,param_2,uVar7,lVar5,lVar13,uVar6,lVar12,param_1,uVar8,uVar11,uVar9,
                        uVar10,uVar15,uVar14,uVar16,uVar1);
    uVar7 = *(undefined8 *)(param_1 + lVar17);
    *(undefined **)(param_1 + lVar17) = puVar4;
    _objc_release(uVar7);
    _objc_release(lVar12);
    _objc_release(uVar6);
  }
  else {
    lVar3 = param_1;
    func_0x00010bedf120(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c720(puVar2,param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bed5240(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c720(puVar2,param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bed4180(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c720(puVar2,param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bee03a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c720(puVar2,param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bed7e80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c720(puVar2,param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bed8de0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c720(puVar2,param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bed7640(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c720(puVar2,param_2,lVar3);
    _objc_release(lVar3);
    lVar13 = *(long *)(param_1 + lVar17);
    lVar3 = *(long *)(param_1 + _DAT_112764950);
    func_0x00010c0dff20(lVar3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca300);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a9a0(lVar13,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c720(puVar2,param_2,lVar13);
  }
  _objc_release(lVar13);
  _objc_release(lVar3);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112764930);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6b20();
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107184f5c; end: 10718508f; -[SCChatInputStickerAccessory _updateSearchStickersIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107184f5c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = param_1;
  func_0x00010bdf2e60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_1127649c8;
  uVar2 = uVar1;
  func_0x00010c071ae0();
  lVar6 = (long)_DAT_1127649d8;
  lVar3 = *(long *)(param_1 + lVar6);
  if (((lVar3 == 0) == (bool)*(char *)(param_1 + (long)_DAT_112764a10)) || ((uVar2 & 1) == 0)) {
    *(bool *)(param_1 + (long)_DAT_112764a10) = lVar3 != 0;
    _objc_retain(uVar1);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar1;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + (long)_DAT_1127649a0);
    if (*(long *)(param_1 + lVar6) == 0) {
      uVar2 = param_1;
      func_0x00010bddd100(param_1);
      lVar3 = param_1 + (long)_DAT_1127648e4;
      _objc_loadWeakRetained(lVar3);
      lVar5 = lVar3;
      func_0x00010bf60960();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c284480(uVar4,param_2,uVar1,uVar2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar3);
    }
    else {
      func_0x00010c284460(uVar4);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    uVar4 = 0;
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107185090; end: 1071850fb; -[SCChatInputStickerAccessory _updateRecentStickersIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107185090(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127649a0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764950);
  func_0x00010c0dff20(uVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca2a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a9a0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1071850fc; end: 107185167; -[SCChatInputStickerAccessory _updateChatHometabIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071850fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127649a0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764950);
  func_0x00010c0dff20(uVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca318);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a9a0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107185168; end: 1071851fb; -[SCChatInputStickerAccessory _updateBitmojiStickersIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107185168(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = (long)_DAT_1127649a0;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c22f3a0();
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112764950);
    func_0x00010c0dff20(uVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca330);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a9a0(uVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  else {
    func_0x00010c283d00(uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1071851fc; end: 107185267; -[SCChatInputStickerAccessory _updateSnapchatAndSnapartStickersIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071851fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127649a0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764950);
  func_0x00010c0dff20(uVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca348);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a9a0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107185268; end: 1071852d3; -[SCChatInputStickerAccessory _updateFavoritesStickersIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107185268(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127649a0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764950);
  func_0x00010c0dff20(uVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca360);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a9a0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1071852d4; end: 10718533f; -[SCChatInputStickerAccessory _updateEmojiStickersIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071852d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127649a0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764950);
  func_0x00010c0dff20(uVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca378);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a9a0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107185340; end: 1071853ab; -[SCChatInputStickerAccessory _updateGiphyStickersIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107185340(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127649a0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764950);
  func_0x00010c0dff20(uVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca390);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a9a0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1071853ac; end: 10718540f; -[SCChatInputStickerAccessory _maximumDrawerFrame] */

undefined8 FUN_1071853ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  func_0x00010c0c3420(param_1);
  _objc_release(uVar1);
  return 0;
}



/* Entry: 107185410; end: 107185593; -[SCChatInputStickerAccessory dummyScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107185410(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar4 = (long)_DAT_112764a14;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar4),param_2,0);
    lVar3 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar3);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x10718550c;
    puStack_40 = &UNK_1108471b0;
    lStack_38 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_58);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107185594; end: 10718564b; -[SCChatInputStickerAccessory customStickerDataDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107185594(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010be3f5a0();
  if ((int)lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127649a0);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112764950);
    func_0x00010c0dff20(uVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca300);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a9a0(uVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112764930);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128c00();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10718564c; end: 1071858b3; -[SCChatInputStickerAccessory tappedCreateStickerFromChatDrawer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718564c(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar1 = *(undefined8 *)(param_1 + (long)_DAT_1127648e8);
  func_0x00010c253960(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a4460();
  _objc_release(uVar8);
  _objc_release(uVar1);
  lVar9 = (long)_DAT_112764960;
  puVar2 = *(undefined **)(param_1 + lVar9);
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    uVar3 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c06d1a0();
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + (long)_DAT_112764974);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar1;
    func_0x00010bf037c0();
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126aff70;
    _objc_alloc(PTR_PTR_1126aff70);
    puVar5 = puVar2;
    func_0x000108edf110();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053560(puVar2,param_2,puVar5,0,0,0,1,1,0,(char)uVar8);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126aff58;
    _objc_alloc(PTR_PTR_1126aff58);
    func_0x00010c038f60();
    puVar6 = PTR_PTR_1126d4e98;
    _objc_alloc();
    func_0x00010c00a2c0();
    uVar8 = *(undefined8 *)(param_1 + (long)_DAT_112764a18);
    *(undefined **)(param_1 + (long)_DAT_112764a18) = puVar6;
    _objc_retain();
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)(param_1 + (long)_DAT_112764964);
    puVar7 = PTR_PTR_1126aff78;
    func_0x00010bf68ba0(PTR_PTR_1126aff78,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf24140(uVar8,param_2,puVar5,puVar2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar9),param_2,uVar8);
    _objc_release(puVar6);
    _objc_release(uVar8);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1071858b4; end: 1071858f3; -[SCChatInputStickerAccessory shouldIncludeLocationButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1071858b4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127648e4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c2311c0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1071858f4; end: 1071859d3; -[SCChatInputStickerAccessory tappedLocationFromChatDrawer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071858f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = (long)_DAT_1127649ac;
  if (*(long *)(param_1 + lVar3) != 0) {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276497c);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar3);
    param_1 = param_1 + _DAT_11276499c;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010bf89e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd1fe0(uVar2,param_2,puVar1,uVar4,lVar3);
    _objc_release(lVar3);
    _objc_release(param_1);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1071859d4; end: 107185a13; -[SCChatInputStickerAccessory shouldIncludePlanButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1071859d4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127648e4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c231200();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 107185a14; end: 107185aa7; -[SCChatInputStickerAccessory tappedPlanFromChatDrawer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107185a14(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + _DAT_1127649ac) != 0) {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112764980);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2000();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107185aa8; end: 107185ae7; -[SCChatInputStickerAccessory shouldIncludePollButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107185aa8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127648e4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c231220();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 107185ae8; end: 107185b57; -[SCChatInputStickerAccessory tappedPollFromChatDrawer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107185ae8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + _DAT_1127649ac) != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112764984);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107185b58; end: 107185c5b; -[SCChatInputStickerAccessory memoriesPickerV2DidSelectItemsWithMediaSegments:] */

void FUN_107185b58(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_38,param_1);
    puVar2 = auStack_40;
    _objc_copyWeak(puVar2,auStack_38);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar1);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107185c5c; end: 107185ef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107185c5c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if ((param_2 == 0) || (param_3 != 0)) {
      lVar2 = (long)_DAT_112764960;
      lVar1 = *(long *)(param_1 + lVar2);
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
    }
    else {
      puStack_78 = &uStack_80;
      uStack_80 = 0;
      uStack_70 = 0x3032000000;
      pcStack_68 = FUN_107185ef4;
      uStack_60 = 0x107185f04;
      uStack_58 = 0;
      puStack_a8 = &uStack_b0;
      uStack_b0 = 0;
      uStack_a0 = 0x3032000000;
      pcStack_98 = FUN_107185ef4;
      uStack_90 = 0x107185f04;
      uStack_88 = 0;
      puStack_d8 = &uStack_e0;
      uStack_e0 = 0;
      uStack_d0 = 0x3032000000;
      pcStack_c8 = FUN_107185ef4;
      uStack_c0 = 0x107185f04;
      uStack_b8 = 0;
      lVar1 = param_2;
      func_0x00010bfea600(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0be500();
      _objc_release(lVar1);
      if (puStack_78[5] == 0) {
        if (puStack_a8[5] == 0) {
          if (puStack_d8[5] == 0) {
            lVar2 = (long)_DAT_112764960;
            lVar1 = *(long *)(param_1 + lVar2);
            func_0x00010c150520();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar1 != 0) {
              func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
              _objc_unsafeClaimAutoreleasedReturnValue();
            }
          }
          else {
            func_0x00010be0dbc0(param_1);
          }
        }
        else {
          func_0x00010be2fc40(param_1);
        }
      }
      else {
        func_0x00010be485e0(param_1);
      }
      __Block_object_dispose(&uStack_e0,8);
      _objc_release(uStack_b8);
      __Block_object_dispose(&uStack_b0,8);
      _objc_release(uStack_88);
      __Block_object_dispose(&uStack_80,8);
      _objc_release(uStack_58);
    }
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107185ef4; end: 107185f0b;  */

void FUN_107185ef4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107185f0c; end: 107185f43;  */

void FUN_107185f0c(long param_1,undefined8 param_2)

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



/* Entry: 107185f44; end: 107185fc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107185f44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764974);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf037c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = param_2;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107185fc8; end: 107185fff;  */

void FUN_107185fc8(long param_1,undefined8 param_2)

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



/* Entry: 107186000; end: 1071861ef; -[SCChatInputStickerAccessory _extractMediaFromSnapDocEditor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107186000(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126affe8;
  func_0x00010c09e180(PTR_PTR_1126affe8,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0ff580(param_3,param_2,puVar1,&PTR___NSConcreteGlobalBlock_110990ab0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar5 = (long)_DAT_112764960;
    lVar6 = *(long *)(param_1 + lVar5);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar5));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    goto LAB_1071861c4;
  }
  lVar6 = param_3;
  func_0x00010c0ff640(param_3,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
LAB_107186138:
    lVar7 = (long)_DAT_112764960;
    lVar5 = *(long *)(param_1 + lVar7);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar7));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  else {
    lVar5 = lVar6;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    if (lVar7 == 0) goto LAB_107186138;
    lVar5 = lVar6;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c27dd80();
    _objc_release(lVar5);
    lVar5 = lVar6;
    func_0x00010c0c3fe0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    if ((int)lVar7 == 1) {
      func_0x00010be0dd40();
    }
    else {
      func_0x00010be0db80(param_1,param_2,param_3,lVar4);
    }
    _objc_release(lVar4);
    _objc_release(lVar5);
  }
  _objc_release(lVar6);
LAB_1071861c4:
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071861f0; end: 107186233;  */

bool FUN_1071861f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 5;
}



/* Entry: 107186234; end: 107186353; -[SCChatInputStickerAccessory _extractImageFromSnapDocEditor:mediaId:] */

void FUN_107186234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c0c7240(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = auStack_50;
  _objc_copyWeak(puVar2,auStack_48);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107186354; end: 10718645b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107186354(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if ((param_2 == 0) || (param_3 != 0)) {
      lVar3 = (long)_DAT_112764960;
      lVar2 = *(long *)(param_1 + lVar3);
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
    }
    else {
      puVar1 = PTR_PTR_1126b2720;
      func_0x00010c14d040();
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 == (undefined *)0x0) {
        lVar3 = (long)_DAT_112764960;
        lVar2 = *(long *)(param_1 + lVar3);
        func_0x00010c150520();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar2 != 0) {
          func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
      }
      else {
        func_0x00010be485e0(param_1);
      }
      _objc_release(puVar1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10718645c; end: 1071865e3; -[SCChatInputStickerAccessory _extractVideoFromSnapDocEditor:mediaId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718645c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + _DAT_112764974);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf037c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar6 = (long)_DAT_112764960;
    lVar5 = *(long *)(param_1 + lVar6);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar6));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = param_3;
    func_0x00010c0c6f80(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = auStack_50;
    _objc_copyWeak(puVar4,auStack_48);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar3);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_50);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071865e4; end: 1071866a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071865e4(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if ((param_2 == 0) || (param_3 != 0)) {
      lVar3 = (long)_DAT_112764960;
      lVar2 = *(long *)(param_1 + lVar3);
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
    }
    else {
      puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be2fc40(param_1);
      _objc_release(puVar1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071866a8; end: 10718676f; -[SCChatInputStickerAccessory _handleSelectedAnimatedStickerVideo:sourceTab:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071866a8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112764974);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf03780();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c252440();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 == 3) {
      func_0x00010be47500(param_1,param_2,param_3,param_4);
    }
    else {
      func_0x00010be7a240(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107186770; end: 10718688f; -[SCChatInputStickerAccessory _presentAnimatedStickerPaywall] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107186770(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11276496c;
  lVar1 = *(long *)(param_1 + lVar5);
  if (lVar1 != 0) {
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        puVar2 = PTR_PTR_1126b1da8;
        _objc_alloc(PTR_PTR_1126b1da8);
        func_0x00010c04abe0();
        puVar3 = PTR_PTR_1126aead8;
        _objc_alloc(PTR_PTR_1126aead8);
        func_0x00010c038f40();
        uVar4 = *(undefined8 *)(param_1 + _DAT_112764970);
        func_0x00010bf23e60(uVar4,param_2,puVar3,puVar2,param_1,0,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar5),param_2,uVar4);
        _objc_release(uVar4);
        _objc_release(puVar3);
        _objc_release(puVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 107186890; end: 107186a1b; -[SCChatInputStickerAccessory _launchAnimatedStickerCreationWithVideo:sourceTab:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107186890(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_112764968;
  lVar1 = *(long *)(param_1 + lVar7);
  if (lVar1 != 0) {
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + _DAT_112764960);
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(param_1 + _DAT_1127648e8);
        func_0x00010c253960(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a44e0();
        _objc_release(uVar6);
        _objc_release(uVar2);
        lVar3 = param_1;
        func_0x00010c10f940();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_1;
        if (lVar3 != 0) {
          lVar1 = lVar3;
        }
        _objc_retain(lVar1);
        _objc_release(lVar3);
        puVar4 = PTR_PTR_1126d4ea0;
        _objc_alloc(PTR_PTR_1126d4ea0);
        uVar6 = *(undefined8 *)(param_1 + _DAT_1127649ac);
        puVar5 = PTR_PTR_1126d4ea8;
        func_0x00010c29bd80(PTR_PTR_1126d4ea8,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c038fa0(puVar4,param_2,lVar1,uVar6,puVar5,param_1,0x2b,0);
        _objc_release(puVar5);
        uVar6 = *(undefined8 *)(param_1 + lVar7);
        _objc_release(lVar1);
        func_0x00010bf9d620(uVar6,param_2,puVar4);
        _objc_release(puVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107186a1c; end: 107186bd3; -[SCChatInputStickerAccessory _launchStickerCutoutWithImage:sourceTab:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107186a1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar8 = (long)_DAT_112764968;
  lVar1 = *(long *)(param_1 + lVar8);
  if (lVar1 != 0) {
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + _DAT_112764960);
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(param_1 + _DAT_1127648e8);
        func_0x00010c253960(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a44e0();
        _objc_release(uVar7);
        _objc_release(uVar2);
        lVar3 = param_1;
        func_0x00010c10f940();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_1;
        if (lVar3 != 0) {
          lVar1 = lVar3;
        }
        _objc_retain(lVar1);
        _objc_release(lVar3);
        puVar4 = PTR_PTR_1126d4ea0;
        _objc_alloc(PTR_PTR_1126d4ea0);
        puVar6 = PTR_PTR_1126d4ea8;
        puVar5 = PTR_PTR_1126ae558;
        func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe9460(puVar6,param_2,puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c038fa0(puVar4,param_2,lVar1,0,puVar6,param_1,0x2b,
                            &PTR____CFConstantStringClassReference_110daafd8);
        _objc_release(puVar6);
        _objc_release(puVar5);
        func_0x00010c1b9800(puVar4,param_2,0);
        uVar7 = *(undefined8 *)(param_1 + lVar8);
        _objc_release(lVar1);
        func_0x00010bf9d620(uVar7,param_2,puVar4);
        _objc_release(puVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107186bd4; end: 107186ca3; -[SCChatInputStickerAccessory modularStickerCutoutScope:didDismissWithStickerCreated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107186bd4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112764968;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (param_4 != 0) {
    lVar3 = (long)_DAT_112764960;
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127648fc);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27c2c0();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be11230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchFeedTree_112561e28);
    return;
  }
  return;
}



/* Entry: 107186ca4; end: 107186cfb; -[SCChatInputStickerAccessory modularStickerCutoutScopeDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107186ca4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764968;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107186cfc; end: 107186d67; -[SCChatInputStickerAccessory onBackPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107186cfc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764a18);
  *(undefined8 *)(param_1 + _DAT_112764a18) = 0;
  _objc_release(uVar1);
  lVar3 = (long)_DAT_112764960;
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107186d68; end: 107186e3b; -[SCChatInputStickerAccessory memoriesPickerV2DidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107186d68(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764a18);
  *(undefined8 *)(param_1 + _DAT_112764a18) = 0;
  _objc_release(uVar1);
  lVar3 = (long)_DAT_11276496c;
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar3 = (long)_DAT_112764968;
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar3 = (long)_DAT_112764960;
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107186e3c; end: 107186e3f; -[SCChatInputStickerAccessory openedStickerPickerMenuAtCategory:] */

void FUN_107186e3c(void)

{
  return;
}



/* Entry: 107186e40; end: 107186e43; -[SCChatInputStickerAccessory closedStickerPickerMenuAtCategory:sticker:enterSearchCount:pretypeStickerTagSelectCount:prefixMatchStickerTagSelectCount:] */

void FUN_107186e40(void)

{
  return;
}



/* Entry: 107186e44; end: 10718742b; -[SCChatInputStickerAccessory stickerPickerMenu:didSelectSticker:center:thumbnail:stickerIndex:categoryIndex:isFromRecents:searchTag:searchSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107186e44(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined **param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12)

{
  byte bVar1;
  undefined **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  ppuVar2 = param_6;
  func_0x00010c27dd80();
  if (ppuVar2 == (undefined **)0x5) {
    lVar13 = (long)_DAT_112764904;
    ppuVar2 = param_6;
    func_0x000107d5ecec(param_6,*(undefined8 *)(param_3 + lVar13),0);
    if ((int)ppuVar2 == 0) goto LAB_107186ffc;
    uVar3 = *(ulong *)(param_3 + (long)_DAT_1127648f0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf61fa0();
    if ((uVar4 & 1) == 0) {
      bVar1 = *(byte *)(param_3 + (long)_DAT_112764a1c);
      _objc_release(uVar3);
      if ((bVar1 & 1) == 0) {
        _objc_initWeak(auStack_80,param_3);
        puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_f0 = 0xc2000000;
        pcStack_e8 = FUN_10718742c;
        puStack_e0 = &UNK_110990b00;
        _objc_copyWeak(auStack_b8,auStack_80);
        _objc_retain(param_5);
        uStack_d8 = param_5;
        _objc_retain(param_6);
        ppuStack_d0 = param_6;
        uStack_b0 = param_1;
        uStack_a8 = param_2;
        _objc_retain(param_7);
        uStack_c8 = param_7;
        uStack_a0 = param_8;
        uStack_98 = param_9;
        uStack_88 = param_10;
        _objc_retain(param_11);
        uStack_c0 = param_11;
        uStack_90 = param_12;
        ppuVar2 = &puStack_f8;
        func_0x00010915643c(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c10eda0(param_3);
        _objc_release(ppuVar2);
        _objc_release(uStack_c0);
        _objc_release(uStack_c8);
        _objc_release(ppuStack_d0);
        _objc_release(uStack_d8);
        _objc_destroyWeak(auStack_b8);
        _objc_destroyWeak(auStack_80);
        goto LAB_1071872d0;
      }
    }
    else {
      _objc_release(uVar3);
    }
    uVar5 = *(undefined8 *)(param_3 + lVar13);
    func_0x00010c087020();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c078be0();
    if ((int)uVar7 == 0) {
      _objc_release(uVar5);
      goto LAB_107186ffc;
    }
    uVar4 = param_3;
    func_0x00010be059a0();
    _objc_release(uVar5);
    if ((uVar4 & 1) != 0) goto LAB_107186ffc;
    ppuVar2 = &PTR___NSConcreteGlobalBlock_110990b30;
    func_0x00010915664c(&PTR___NSConcreteGlobalBlock_110990b30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10eda0(param_3);
    uVar5 = *(undefined8 *)(param_3 + (long)_DAT_1127648e8);
    func_0x00010c254380(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1327e0();
    _objc_release(uVar7);
    _objc_release(uVar5);
  }
  else {
LAB_107186ffc:
    ppuVar6 = *(undefined ***)(param_3 + (long)_DAT_112764930);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar6;
    func_0x00010c2550c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar2;
    func_0x00010c27dd80();
    _objc_release(ppuVar2);
    _objc_release(ppuVar6);
    ppuVar2 = param_6;
    func_0x00010c271a80();
    _objc_retainAutoreleasedReturnValue();
    if ((ppuVar2 != (undefined **)0x0) &&
       (ppuVar6 = ppuVar2, func_0x00010914ead4(), (int)ppuVar6 != 0)) {
      uVar7 = *(undefined8 *)(param_3 + (long)_DAT_112764914);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c283fc0();
      _objc_release(uVar7);
    }
    func_0x00010bee0be0(param_3);
    if ((long)ppuVar14 < 3) {
      if ((long)ppuVar14 - 1U < 2) {
        ppuVar14 = &PTR____CFConstantStringClassReference_110e04238;
      }
      else if (ppuVar14 == (undefined **)0x0) {
        *(undefined1 *)(param_3 + (long)_DAT_1127649f8) = 1;
        ppuVar14 = &PTR____CFConstantStringClassReference_110db9e78;
      }
      else {
LAB_10718710c:
        ppuVar6 = param_6;
        func_0x000107d5ecec(param_6,*(undefined8 *)(param_3 + (long)_DAT_112764904),0);
        if ((int)ppuVar6 != 0) {
          ppuVar6 = param_6;
          func_0x00010c271a80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (ppuVar6 != (undefined **)0x0) {
            func_0x000108d12ef8(ppuVar14);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_107187168;
          }
        }
        ppuVar14 = param_6;
        func_0x00010c0f0a00(param_6);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (ppuVar14 == (undefined **)0x3) {
      ppuVar14 = &PTR____CFConstantStringClassReference_110ea0e98;
    }
    else {
      if (ppuVar14 != (undefined **)0x6) goto LAB_10718710c;
      ppuVar14 = &PTR____CFConstantStringClassReference_110ea0e78;
    }
LAB_107187168:
    ppuVar6 = param_6;
    func_0x00010c27dd80();
    if (ppuVar6 == (undefined **)0x5) {
      ppuVar6 = param_6;
      func_0x00010c271a60();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar6;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar8;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar9;
      func_0x00010bf61ca0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar10;
      func_0x00010c0ed1a0();
      _objc_release(ppuVar10);
      _objc_release(ppuVar9);
      _objc_release(ppuVar8);
      if ((int)ppuVar11 == 5) {
        func_0x00010c0e3480(*(undefined8 *)(param_3 + (long)_DAT_112764978));
      }
      _objc_release(ppuVar6);
    }
    puVar12 = PTR_PTR_1126cf978;
    _objc_alloc(PTR_PTR_1126cf978);
    func_0x00010c04c680();
    func_0x00010be87420(param_3);
    ppuVar6 = param_6;
    func_0x000107d5ecec(param_6,*(undefined8 *)(param_3 + (long)_DAT_112764904),0);
    if ((int)ppuVar6 == 0) {
      func_0x00010be90460(param_3);
    }
    else {
      ppuVar6 = param_6;
      func_0x00010c271a80(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf96f00();
      func_0x00010be8f4e0(param_3);
      _objc_release(ppuVar6);
    }
    *(undefined1 *)(param_3 + (long)_DAT_1127649f4) = 1;
    func_0x00010be5b140(param_3);
    _objc_release(puVar12);
    _objc_release(ppuVar14);
  }
  _objc_release(ppuVar2);
LAB_1071872d0:
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10718742c; end: 1071874e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718742c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if ((param_3 != 0) && (lVar1 != 0)) {
    *(undefined1 *)(lVar1 + _DAT_112764a1c) = 1;
    uVar2 = *(undefined8 *)(lVar1 + _DAT_1127648f0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c188a00();
    _objc_release(uVar2);
    func_0x00010c2549e0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1071874e4; end: 1071874f3;  */

void FUN_1071874e4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1071874f4; end: 1071874f7; -[SCChatInputStickerAccessory stickerPickerCategoryCellScrollViewWillBeginDragging:] */

void FUN_1071874f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddbf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__categoryCellScrollViewWillBegin_112554960);
  return;
}



/* Entry: 1071874f8; end: 1071874ff; -[SCChatInputStickerAccessory avatarPickerRequestedWithBitmojiUsers:targetView:friendmojiPickerScopeDelegate:] */

undefined8 FUN_1071874f8(void)

{
  return 0;
}



/* Entry: 107187500; end: 10718767b; -[SCChatInputStickerAccessory friendmojiHintRequestedWithTargetView:friendmojiHintScopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_107187500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_8);
  lVar6 = (long)_DAT_112764920;
  lVar5 = *(long *)(param_5 + lVar6);
  _objc_retain(param_7);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_5 + lVar6));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_storeWeak(param_5 + _DAT_112764a20,param_8);
  uVar1 = param_7;
  func_0x00010c262ca0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar3 = PTR_PTR_1126d4d08;
  _objc_alloc(PTR_PTR_1126d4d08);
  uVar4 = param_7;
  func_0x00010c262ca0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057460(param_1,param_2,param_3,param_4,puVar3);
  _objc_release(param_7);
  _objc_release(uVar4);
  func_0x00010bf9d620(*(undefined8 *)(param_5 + lVar6));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_8);
  return 1;
}



/* Entry: 10718767c; end: 1071876cb; -[SCChatInputStickerAccessory friendmojiAvatarPickerClosedWithFriendmojiType:selectedStickerId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718767c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c0a6f40(PTR_PTR_1126d4ce0,param_2,1,param_4,param_3,0,
                      *(undefined8 *)(param_1 + _DAT_1127649ac),
                      *(undefined8 *)(param_1 + _DAT_112764908));
                    /* WARNING: Could not recover jumptable at 0x00010bed7b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateExplicitSearchResultsFrom_112593868);
  return;
}



/* Entry: 1071876cc; end: 107187723; -[SCChatInputStickerAccessory plusSubscribeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071876cc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276496c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107187724; end: 107187797; -[SCChatInputStickerAccessory bitmojiFriendmojiHintComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107187724(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764920;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  param_1 = param_1 + _DAT_112764a20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1b6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107187798; end: 10718779f; -[SCChatInputStickerAccessory showExplicitSearch] */

void FUN_107187798(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2375d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showExplicitSearchFromCategory__11266b798,0);
  return;
}



/* Entry: 1071877a0; end: 10718780f; -[SCChatInputStickerAccessory showExplicitSearchFromCategory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071877a0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  *(long *)(param_1 + _DAT_1127649dc) = param_3;
  uVar1 = 1;
  if (param_3 != 0) {
    uVar1 = 2;
  }
  *(undefined8 *)(param_1 + _DAT_1127649c0) = uVar1;
  func_0x00010bdc8680();
  lVar2 = (long)_DAT_1127649bc;
  func_0x00010c254e80(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c254df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_stickerSearchBecomeFirstResponde_112672da0);
  return;
}



/* Entry: 107187810; end: 107187833; -[SCChatInputStickerAccessory clearExplicitSearch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107187810(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_1127649dc) = 0;
  *(undefined8 *)(param_1 + _DAT_1127649c0) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be71710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performCTPSearchWithSearchText__112579f60,0)
  ;
  return;
}



/* Entry: 107187834; end: 10718783b; -[SCChatInputStickerAccessory performSearchPillStickerSearch:] */

void FUN_107187834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_performSearchPillStickerSearch_f_11261bdc0,param_3,0);
  return;
}



/* Entry: 10718783c; end: 10718785b; -[SCChatInputStickerAccessory performSearchPillStickerSearch:fromCategory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718783c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + _DAT_1127649c0) = 2;
  *(undefined8 *)(param_1 + _DAT_1127649dc) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010be71710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performCTPSearchWithSearchText__112579f60);
  return;
}



/* Entry: 10718785c; end: 107187a13; -[SCChatInputStickerAccessory stickerPickerMenu:presentStickerMenuForItem:presentationModelProvider:itemViewService:indexPath:superCategoryType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718785c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be8b020(param_1,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d4cf8;
  lVar7 = (long)_DAT_1127648ec;
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c088c80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c088c60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_1127648b4;
  _objc_loadWeakRetained();
  lVar4 = lVar7;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01fcc0(puVar5,param_2,param_4,param_5,param_6,uVar2,uVar3,lVar4,param_1,param_7,
                      param_8,*(undefined8 *)(param_1 + _DAT_1127648fc),
                      *(undefined8 *)(param_1 + _DAT_112764900),
                      *(undefined8 *)(param_1 + _DAT_112764904),3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar8 = (long)_DAT_1127649ec;
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar5;
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (*(long *)(param_1 + lVar8) != 0) {
    func_0x00010c10c380(*(long *)(param_1 + lVar8),param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107187a14; end: 107187a67; -[SCChatInputStickerAccessory _topMargin] */

double FUN_107187a14(double param_1,undefined8 param_2)

{
  double dVar1;
  
  func_0x00010c0c3420();
  dVar1 = param_1;
  func_0x00010c065880(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf89dc0();
  _objc_release(param_2);
  return param_1 - dVar1;
}



/* Entry: 107187a68; end: 107187cd3; -[SCChatInputStickerAccessory _remixStickerHandlerForItem:presentationModelProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107187a68(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar12 = param_3;
  func_0x00010bf96f00();
  if (lVar12 == 3) {
    lVar12 = (long)_DAT_112764978;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar12);
    func_0x00010c071800();
    if (iVar1 != 0) {
      lVar2 = param_3;
      func_0x00010c2721e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c271a60();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        ppuVar11 = (undefined **)0x0;
      }
      else {
        lVar4 = *(long *)(param_1 + _DAT_112764974);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c129a40();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bf60aa0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c252440();
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        if (lVar7 == 1) {
          func_0x00010c0e3d60(*(undefined8 *)(param_1 + lVar12));
        }
        lVar12 = lVar2;
        func_0x00010c2540c0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_3;
        func_0x00010bf96f00();
        uVar8 = *(undefined8 *)(param_1 + _DAT_112764910);
        func_0x00010c254f00();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_1 + _DAT_1127648f8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c06c020();
        _objc_release(uVar9);
        _objc_initWeak(auStack_68,param_1);
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0xc2000000;
        pcStack_a8 = FUN_107187cd4;
        puStack_a0 = &UNK_110958808;
        _objc_copyWeak(auStack_80,auStack_68);
        uStack_70 = (undefined1)uVar10;
        lStack_98 = lVar12;
        uStack_90 = uVar8;
        lStack_78 = lVar5;
        _objc_retain(lVar3);
        lStack_88 = lVar3;
        _objc_retain(uVar8);
        _objc_retain(lVar12);
        ppuVar11 = &puStack_b8;
        _objc_retainBlock(ppuVar11);
        _objc_release(lStack_88);
        _objc_release(uStack_90);
        _objc_release(lStack_98);
        _objc_release(uVar8);
        _objc_release(lVar12);
        _objc_destroyWeak(auStack_80);
        _objc_destroyWeak(auStack_68);
      }
      _objc_release(lVar3);
      _objc_release(lVar2);
      goto LAB_107187ca0;
    }
  }
  ppuVar11 = (undefined **)0x0;
LAB_107187ca0:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar11);
  return;
}



/* Entry: 107187cd4; end: 107187ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107187cd4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_1127648e8);
    func_0x00010c253960(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0b00();
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar4 = *(long *)(lVar1 + _DAT_112764974);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c129a40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c252440();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    if (lVar7 == 1) {
      func_0x00010be7e0e0(lVar1);
    }
    else {
      func_0x00010be7e0c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x30));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107187de0; end: 107187ebb; -[SCChatInputStickerAccessory _presentRemixCutoutTrayForItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107187de0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112764968;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 != 0) {
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126d4ea0;
      _objc_alloc(PTR_PTR_1126d4ea0);
      puVar3 = PTR_PTR_1126d4ea8;
      func_0x00010bf5d840(PTR_PTR_1126d4ea8,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c038fa0(puVar2,param_2,param_1,0,puVar3,param_1,0x2b,0);
      _objc_release(puVar3);
      func_0x00010c1b9800(puVar2,param_2,1);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107187ebc; end: 107187f33; -[SCChatInputStickerAccessory _presentRemixUpsell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107187ebc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764978;
  if (*(long *)(param_1 + lVar2) != 0) {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    func_0x00010c0e7660(*(undefined8 *)(param_1 + lVar2),param_2,puVar1,0x2b,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107187f34; end: 107187f3b; -[SCChatInputStickerAccessory drawerType] */

undefined8 FUN_107187f34(void)

{
  return 1;
}



/* Entry: 107187f3c; end: 107187f4b; -[SCChatInputStickerAccessory sentItemCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107187f3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127649e4);
}



/* Entry: 107187f4c; end: 107187fc3; -[SCChatInputStickerAccessory openedWithSearch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107187f4c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127648e4;
  lVar2 = param_1 + lVar3;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010bf5fc40();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
    _objc_release(param_1);
  }
  return bVar1;
}



/* Entry: 107187fc4; end: 10718802b; -[SCChatInputStickerAccessory suggestionSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107187fc4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127648e4;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = -1;
  }
  else {
    param_1 = param_1 + lVar2;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c2554e0();
    _objc_release(param_1);
  }
  return lVar1;
}


