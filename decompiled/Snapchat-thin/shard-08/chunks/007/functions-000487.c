/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106529fa8; end: 106529fb7; -[SCEmptyChatCellViewModel bannerText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106529fa8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749dfc);
}



/* Entry: 106529fb8; end: 106529ff7; -[SCEmptyChatCellViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106529fb8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112749dfc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749e04,0);
  return;
}



/* Entry: 106529ff8; end: 10652a053; -[SCLoadingChatCellViewModel initServerLoadingViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106529ff8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126f1a98;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithProps__1125ec800,0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112749e08) = 1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112749e0c) = 2;
  }
  return;
}



/* Entry: 10652a054; end: 10652a0df; -[SCLoadingChatCellViewModel initWithProps:paginationToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10652a054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1a98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithProps__1125ec800,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112749e10;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10652a0e0; end: 10652a117; -[SCLoadingChatCellViewModel setConversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652a0e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112749e14);
  *(undefined8 *)(param_1 + _DAT_112749e14) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10652a118; end: 10652a123; -[SCLoadingChatCellViewModel calculateHeight] */

undefined8 FUN_10652a118(void)

{
  return 0x4046000000000000;
}



/* Entry: 10652a124; end: 10652a12f; -[SCLoadingChatCellViewModel reusableCellIdentifier] */

undefined ** FUN_10652a124(void)

{
  return &PTR____CFConstantStringClassReference_110e53618;
}



/* Entry: 10652a130; end: 10652a13b; -[SCLoadingChatCellViewModel identifier] */

undefined ** FUN_10652a130(void)

{
  return &PTR____CFConstantStringClassReference_110e53618;
}



/* Entry: 10652a13c; end: 10652a143; -[SCLoadingChatCellViewModel viewModelType] */

undefined8 FUN_10652a13c(void)

{
  return 2;
}



/* Entry: 10652a144; end: 10652a153; -[SCLoadingChatCellViewModel shouldDisplayBelowFoldInChat] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10652a144(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112749e08);
}



/* Entry: 10652a154; end: 10652a213; -[SCLoadingChatCellViewModel isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10652a154(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  iVar2 = (int)&lStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f1a98;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_isEqual__1125fa0c8,param_3);
  if (iVar2 == 0) {
    bVar3 = false;
  }
  else {
    _objc_retain(param_3);
    lVar4 = param_1;
    func_0x00010c09d440();
    lVar5 = param_3;
    func_0x00010c09d440();
    if (lVar4 == lVar5) {
      bVar1 = *(byte *)(param_1 + _DAT_112749e08);
      lVar4 = param_3;
      func_0x00010bf194c0(param_3);
      bVar3 = (uint)bVar1 == (uint)lVar4;
    }
    else {
      bVar3 = false;
    }
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10652a214; end: 10652a21b; -[SCLoadingChatCellViewModel isFirstViewModel] */

undefined8 FUN_10652a214(void)

{
  return 1;
}



/* Entry: 10652a21c; end: 10652a223; -[SCLoadingChatCellViewModel shouldShowDateHeader] */

undefined8 FUN_10652a21c(void)

{
  return 0;
}



/* Entry: 10652a224; end: 10652a22b; -[SCLoadingChatCellViewModel shouldShowSenderHeader] */

undefined8 FUN_10652a224(void)

{
  return 0;
}



/* Entry: 10652a22c; end: 10652a233; -[SCLoadingChatCellViewModel shouldShowTimestamp] */

undefined8 FUN_10652a22c(void)

{
  return 0;
}



/* Entry: 10652a234; end: 10652a24b; -[SCLoadingChatCellViewModel displayLoadHistoryAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652a234(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126d43e8;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112749e14);
  _objc_retain(0);
  _objc_retain(uVar1);
  _objc_alloc(puVar2);
  func_0x00010c005460();
  _objc_release(0);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10652a24c; end: 10652a263; -[SCLoadingChatCellViewModel tapLoadHistoryAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652a24c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126d43e8;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112749e14);
  _objc_retain(0);
  _objc_retain(uVar1);
  _objc_alloc(puVar2);
  func_0x00010c005460();
  _objc_release(0);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10652a264; end: 10652a273; -[SCLoadingChatCellViewModel loadingStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10652a264(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749e0c);
}



/* Entry: 10652a274; end: 10652a283; -[SCLoadingChatCellViewModel setLoadingStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652a274(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112749e0c) = param_3;
  return;
}



/* Entry: 10652a284; end: 10652a293; -[SCLoadingChatCellViewModel paginationToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10652a284(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749e10);
}



/* Entry: 10652a294; end: 10652a2a3; -[SCLoadingChatCellViewModel belowTheFold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10652a294(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112749e08);
}



/* Entry: 10652a2a4; end: 10652a2b3; -[SCLoadingChatCellViewModel setBelowTheFold:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652a2a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112749e08) = param_3;
  return;
}



/* Entry: 10652a2b4; end: 10652a2f3; -[SCLoadingChatCellViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652a2b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112749e10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749e14,0);
  return;
}



/* Entry: 10652a2f4; end: 10652a303; -[SCPendingStateCellViewModelProps recipient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10652a2f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749e18);
}



/* Entry: 10652a304; end: 10652a30f; -[SCPendingStateCellViewModelProps setRecipient:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652a304(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10652a310; end: 10652a31f; -[SCPendingStateCellViewModelProps pendingSnapNum] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10652a310(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749e1c);
}



/* Entry: 10652a320; end: 10652a32f; -[SCPendingStateCellViewModelProps setPendingSnapNum:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652a320(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112749e1c) = param_3;
  return;
}



/* Entry: 10652a330; end: 10652a33f; -[SCPendingStateCellViewModelProps pendingChatNum] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10652a330(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749e20);
}



/* Entry: 10652a340; end: 10652a34f; -[SCPendingStateCellViewModelProps setPendingChatNum:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652a340(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112749e20) = param_3;
  return;
}



/* Entry: 10652a350; end: 10652a363; -[SCPendingStateCellViewModelProps .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652a350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749e18,0);
  return;
}



/* Entry: 10652a364; end: 10652a433; -[SCPendingStateCellViewModel initWithProps:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10652a364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f1aa0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithProps__1125ec800,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c122a80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c09e940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749e24);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112749e24) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0f7380();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112749e28) = uVar2;
    uVar2 = param_3;
    func_0x00010c0f7980();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112749e2c) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10652a434; end: 10652a43f; -[SCPendingStateCellViewModel calculateHeight] */

undefined8 FUN_10652a434(void)

{
  return 0x4041000000000000;
}



/* Entry: 10652a440; end: 10652a44b; -[SCPendingStateCellViewModel reusableCellIdentifier] */

undefined ** FUN_10652a440(void)

{
  return &PTR____CFConstantStringClassReference_110e53638;
}



/* Entry: 10652a44c; end: 10652a50b; -[SCPendingStateCellViewModel identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652a44c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined8 *)(param_1 + _DAT_112749e2c));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined8 *)(param_1 + _DAT_112749e28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dc5ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10652a50c; end: 10652a513; -[SCPendingStateCellViewModel viewModelType] */

undefined8 FUN_10652a50c(void)

{
  return 4;
}



/* Entry: 10652a514; end: 10652a51b; -[SCPendingStateCellViewModel shouldDisplayBelowFoldInChat] */

undefined8 FUN_10652a514(void)

{
  return 1;
}



/* Entry: 10652a51c; end: 10652a523; -[SCPendingStateCellViewModel isReleaseByCurrentUser] */

undefined8 FUN_10652a51c(void)

{
  return 1;
}



/* Entry: 10652a524; end: 10652a52b; -[SCPendingStateCellViewModel shouldShowDateHeader] */

undefined8 FUN_10652a524(void)

{
  return 0;
}



/* Entry: 10652a52c; end: 10652a533; -[SCPendingStateCellViewModel shouldShowSenderHeader] */

undefined8 FUN_10652a52c(void)

{
  return 0;
}



/* Entry: 10652a534; end: 10652a53b; -[SCPendingStateCellViewModel shouldShowTimestamp] */

undefined8 FUN_10652a534(void)

{
  return 0;
}



/* Entry: 10652a53c; end: 10652a5fb; -[SCPendingStateCellViewModel isEqual:] */

bool FUN_10652a53c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  iVar1 = (int)&lStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f1aa0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_isEqual__1125fa0c8,param_3);
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else {
    _objc_retain(param_3);
    lVar3 = param_1;
    func_0x00010c0f7380();
    lVar4 = param_3;
    func_0x00010c0f7380();
    if (lVar3 == lVar4) {
      func_0x00010c0f7980(param_1);
      lVar3 = param_3;
      func_0x00010c0f7980(param_3);
      bVar2 = param_1 == lVar3;
    }
    else {
      bVar2 = false;
    }
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 10652a5fc; end: 10652a6ef; -[SCPendingStateCellViewModel textforPendingNotificationLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652a5fc(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = *(long *)(param_1 + _DAT_112749e28);
  if (*(long *)(param_1 + _DAT_112749e2c) < 1) {
    if (lVar2 == 1) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e53678;
    }
    else {
      if (lVar2 < 2) {
        puVar3 = (undefined *)0x0;
        goto LAB_10652a6d0;
      }
      ppuVar1 = &PTR____CFConstantStringClassReference_110e53698;
    }
  }
  else if (lVar2 < 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e536b8;
    if (*(long *)(param_1 + _DAT_112749e2c) != 1) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e536d8;
    }
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e53658;
  }
  func_0x00010bcbeaa8(ppuVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
LAB_10652a6d0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10652a6f0; end: 10652a6ff; +[SCPendingStateCellViewModel pendingLabelFont] */

void FUN_10652a6f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4022000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_demiBoldAvenirNextFontOfSize__1125b8f48);
  return;
}



/* Entry: 10652a700; end: 10652a70f; +[SCPendingStateCellViewModel pendingLabelColor] */

void FUN_10652a700(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x81);
  return;
}



/* Entry: 10652a710; end: 10652a71f; -[SCPendingStateCellViewModel recipient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10652a710(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749e24);
}



/* Entry: 10652a720; end: 10652a72f; -[SCPendingStateCellViewModel pendingSnapNum] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10652a720(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749e2c);
}



/* Entry: 10652a730; end: 10652a73f; -[SCPendingStateCellViewModel pendingChatNum] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10652a730(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749e28);
}



/* Entry: 10652a740; end: 10652a753; -[SCPendingStateCellViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652a740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749e24,0);
  return;
}



/* Entry: 10652a754; end: 10652a75b; -[SCPlaceholderChatViewModel calculateHeight] */

undefined8 FUN_10652a754(void)

{
  return 0x401c000000000000;
}



/* Entry: 10652a75c; end: 10652a767; -[SCPlaceholderChatViewModel reusableCellIdentifier] */

undefined ** FUN_10652a75c(void)

{
  return &PTR____CFConstantStringClassReference_110e536f8;
}



/* Entry: 10652a768; end: 10652a773; -[SCPlaceholderChatViewModel identifier] */

undefined ** FUN_10652a768(void)

{
  return &PTR____CFConstantStringClassReference_110e536f8;
}



/* Entry: 10652a774; end: 10652a77b; -[SCPlaceholderChatViewModel viewModelType] */

undefined8 FUN_10652a774(void)

{
  return 5;
}



/* Entry: 10652a77c; end: 10652a783; -[SCPlaceholderChatViewModel shouldDisplayBelowFoldInChat] */

undefined8 FUN_10652a77c(void)

{
  return 1;
}



/* Entry: 10652a784; end: 10652a78b; -[SCPlaceholderChatViewModel shouldShowDateHeader] */

undefined8 FUN_10652a784(void)

{
  return 0;
}



/* Entry: 10652a78c; end: 10652a793; -[SCPlaceholderChatViewModel shouldShowSenderHeader] */

undefined8 FUN_10652a78c(void)

{
  return 0;
}



/* Entry: 10652a794; end: 10652a79b; -[SCPlaceholderChatViewModel shouldShowTimestamp] */

undefined8 FUN_10652a794(void)

{
  return 0;
}



/* Entry: 10652a79c; end: 10652a8db; -[SCStackedBitmojiChatViewModel initWithMessage:props:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10652a79c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f1aa8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithMessage_props__1125e86f8,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749e30);
    *(undefined **)((long)puVar1 + (long)_DAT_112749e30) = puVar2;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112749e34;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010bf5d860();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749e38);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112749e38) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_3;
    func_0x00010c07fa40();
    *(char *)((long)puVar1 + (long)_DAT_112749e3c) = (char)uVar3;
    uVar3 = param_4;
    func_0x00010c108300(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c201840(puVar1);
    _objc_release(uVar3);
    func_0x00010befb940(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10652a8dc; end: 10652a8e7; -[SCStackedBitmojiChatViewModel reusableCellIdentifier] */

undefined ** FUN_10652a8dc(void)

{
  return &PTR____CFConstantStringClassReference_110e53718;
}



/* Entry: 10652a8e8; end: 10652a8ef; -[SCStackedBitmojiChatViewModel viewModelType] */

undefined8 FUN_10652a8e8(void)

{
  return 7;
}



/* Entry: 10652a8f0; end: 10652a8f3; -[SCStackedBitmojiChatViewModel payloadBodyHeight] */

void FUN_10652a8f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddc3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cellSize_112554a88);
  return;
}



/* Entry: 10652a8f4; end: 10652a957; -[SCStackedBitmojiChatViewModel payloadAccessoryHeight] */

double FUN_10652a8f4(undefined8 param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x00010c236220();
  dVar2 = 42.0;
  dVar3 = 42.0;
  if ((int)uVar1 == 0) {
    dVar3 = 0.0;
  }
  puStack_38 = PTR_PTR_1126f1aa8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(0x4045000000000000,&uStack_40,PTR_s_payloadAccessoryHeight_11261b330);
  return dVar3 + dVar2;
}



/* Entry: 10652a958; end: 10652aabb; -[SCStackedBitmojiChatViewModel bodyContentWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10652a958(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar1 = param_2;
  func_0x00010c12f740();
  if (((uVar1 & 1) == 0) && (*(char *)(param_2 + (long)_DAT_112749e3c) != '\x01')) {
    uVar1 = param_2;
    func_0x00010c24d420();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    uVar3 = param_2;
    func_0x00010c0c2500();
    _objc_release(uVar1);
    dVar6 = 50.0;
    dVar7 = 50.0;
    if (uVar3 <= uVar2) {
      dVar7 = 0.0;
    }
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c292ae0();
    _objc_release(puVar4);
    dVar9 = 1.0;
    if (puVar5 != (undefined *)0x1) {
      uVar1 = param_2;
      func_0x00010c24d420();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf529e0();
      _objc_release(uVar1);
      uVar1 = param_2;
      func_0x00010c0c2500();
      dVar6 = (double)uVar1;
      dVar8 = (double)uVar2 / dVar6;
      func_0x00010bddc340(param_2);
      dVar6 = dVar6 * (double)uVar2;
      dVar9 = dVar6;
      if (dVar6 <= dVar8) {
        dVar9 = dVar8;
      }
    }
    func_0x00010c0f6780(param_2);
    dVar8 = dVar6;
    func_0x00010c2a50e0(param_2);
    param_1 = dVar7 + dVar8 + dVar9 * dVar6;
  }
  else {
    uVar1 = param_2;
    func_0x00010c24d420(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    func_0x00010bddc3a0(param_2);
    param_1 = param_1 * (double)uVar2;
    _objc_release(uVar1);
  }
  return param_1;
}



/* Entry: 10652aabc; end: 10652abb3; -[SCStackedBitmojiChatViewModel isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10652aabc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  long lStack_40;
  undefined *puStack_38;
  
  iVar3 = (int)&lStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f1aa8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_isEqual__1125fa0c8,param_3);
  puVar5 = PTR_PTR_1126cb328;
  if (iVar3 == 0) {
    bVar4 = false;
  }
  else {
    _objc_retain(param_3);
    _objc_opt_class(puVar5);
    uVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    uVar1 = param_3;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    if ((uVar1 == 0) ||
       (bVar2 = *(byte *)(param_1 + _DAT_112749e40), uVar6 = param_3, func_0x00010c236220(),
       (uint)bVar2 != (uint)uVar6)) {
      bVar4 = false;
    }
    else {
      bVar2 = *(byte *)(param_1 + _DAT_112749e3c);
      uVar6 = param_3;
      func_0x00010c07bbc0(param_3);
      bVar4 = (uint)bVar2 == (uint)uVar6;
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return bVar4;
}



/* Entry: 10652abb4; end: 10652abbf; -[SCStackedBitmojiChatViewModel collectionViewCellClass] */

void FUN_10652abb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126cb5f8);
  return;
}



/* Entry: 10652abc0; end: 10652abe3; -[SCStackedBitmojiChatViewModel insetForCollectionViewCell] */

undefined8 FUN_10652abc0(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12f740();
  uVar1 = 0;
  if (param_1 == 0) {
    uVar1 = 0x4010000000000000;
  }
  return uVar1;
}



/* Entry: 10652abe4; end: 10652abef; -[SCStackedBitmojiChatViewModel collectionViewCellReuseIdentifier] */

undefined ** FUN_10652abe4(void)

{
  return &PTR____CFConstantStringClassReference_110e53738;
}



/* Entry: 10652abf0; end: 10652ad17; -[SCStackedBitmojiChatViewModel collectionView:cellForItemAtIndexPath:stackedCollectionCellActionDelegate:parentVC:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652abf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf40720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf6e0c0(param_3,param_2,lVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  func_0x00010c18b5e0(uVar2,param_2,param_6);
  _objc_release(param_6);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112749e30);
  uVar3 = param_4;
  func_0x00010c142240(param_4);
  _objc_release(param_4);
  func_0x00010c0dfd40(uVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112749e38);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112749e34);
  func_0x00010bf398e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47d80(uVar2,param_2,uVar4,uVar5,1,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10652ad18; end: 10652adb3; -[SCStackedBitmojiChatViewModel insetsForCollectionView] */

undefined8 FUN_10652ad18(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c12f740();
  if ((int)uVar1 == 0) {
    func_0x00010bddc3a0(param_1);
    func_0x00010c0c2500(param_1);
    func_0x00010c0f6780(param_1);
    func_0x00010c0f6740(param_1);
    func_0x00010c0f6740(param_1);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  }
  return uVar1;
}



/* Entry: 10652adb4; end: 10652adbb; -[SCStackedBitmojiChatViewModel maxItemCapacityForCollectionView] */

undefined8 FUN_10652adb4(void)

{
  return 3;
}



/* Entry: 10652adbc; end: 10652add3; -[SCStackedBitmojiChatViewModel sizeForItemAtIndexPath:] */

void FUN_10652adbc(void)

{
  func_0x00010bddc3a0();
  return;
}



/* Entry: 10652add4; end: 10652adf3; -[SCStackedBitmojiChatViewModel stackedViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652add4(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + _DAT_112749e30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10652adf4; end: 10652ae6b; -[SCStackedBitmojiChatViewModel addStackedViewModelFromMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652adf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cb608;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02b440();
  _objc_release(param_3);
  func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_112749e30),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10652ae6c; end: 10652af17; -[SCStackedBitmojiChatViewModel _cellSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10652ae6c(double param_1,long param_2)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  dVar3 = param_1;
  func_0x00010bddc340(param_2);
  _objc_release(puVar1);
  dVar2 = 53.0;
  if (*(char *)(param_2 + _DAT_112749e3c) == '\0') {
    dVar2 = param_1 * dVar3 + 8.0;
  }
  func_0x00010c0cb560();
  dVar3 = 150.0;
  if ((int)param_2 == 0) {
    dVar3 = 200.0;
  }
  if (dVar3 <= dVar2) {
    dVar2 = dVar3;
  }
  return (long)dVar2;
}



/* Entry: 10652af18; end: 10652af7b; -[SCStackedBitmojiChatViewModel _cellPercentWidth] */

undefined8 FUN_10652af18(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c24d420();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  if (lVar1 == 0) {
    uVar2 = 0x3fdcccccc0000000;
  }
  else {
    if (2 < lVar1) {
      lVar1 = 3;
    }
    uVar2 = *(undefined8 *)(&UNK_10dddc968 + lVar1 * 8);
  }
  return uVar2;
}



/* Entry: 10652af7c; end: 10652af8b; -[SCStackedBitmojiChatViewModel showBitmojiCreateCTA] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10652af7c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112749e40);
}



/* Entry: 10652af8c; end: 10652af9b; -[SCStackedBitmojiChatViewModel setShowBitmojiCreateCTA:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652af8c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112749e40) = param_3;
  return;
}



/* Entry: 10652af9c; end: 10652afab; -[SCStackedBitmojiChatViewModel isReaction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10652af9c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112749e3c);
}



/* Entry: 10652afac; end: 10652afbb; -[SCStackedBitmojiChatViewModel setIsReaction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652afac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112749e3c) = param_3;
  return;
}



/* Entry: 10652afbc; end: 10652b00b; -[SCStackedBitmojiChatViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652afbc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112749e38,0);
  _objc_storeStrong(param_1 + _DAT_112749e34,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749e30,0);
  return;
}



/* Entry: 10652b00c; end: 10652b11f; -[SCStackedStickerChatViewModel initWithMessage:props:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10652b00c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f1ab0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithMessage_props__1125e86f8,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749e44);
    *(undefined **)((long)puVar1 + (long)_DAT_112749e44) = puVar2;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112749e48;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010bf5d860();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749e4c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112749e4c) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_3;
    func_0x00010c07fa40();
    *(char *)((long)puVar1 + (long)_DAT_112749e50) = (char)uVar3;
    func_0x00010befb940(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10652b120; end: 10652b12b; -[SCStackedStickerChatViewModel reusableCellIdentifier] */

undefined ** FUN_10652b120(void)

{
  return &PTR____CFConstantStringClassReference_110e53758;
}



/* Entry: 10652b12c; end: 10652b133; -[SCStackedStickerChatViewModel viewModelType] */

undefined8 FUN_10652b12c(void)

{
  return 8;
}



/* Entry: 10652b134; end: 10652b137; -[SCStackedStickerChatViewModel payloadBodyHeight] */

void FUN_10652b134(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0b430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__estimatedStickerCellSideLength_1125606a8);
  return;
}



/* Entry: 10652b138; end: 10652b2d3; -[SCStackedStickerChatViewModel bodyContentWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10652b138(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar1 = param_2;
  func_0x00010c12f740();
  if (((uVar1 & 1) != 0) || (*(char *)(param_2 + (long)_DAT_112749e50) == '\x01')) {
    uVar1 = param_2;
    func_0x00010c24d420(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    func_0x00010be0b420(param_2);
    _objc_release(uVar1);
    return param_1 * (double)uVar2;
  }
  uVar1 = param_2;
  func_0x00010c24d420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  uVar3 = param_2;
  func_0x00010c0c2500();
  if (uVar2 < uVar3) {
    _objc_release(uVar1);
  }
  else {
    uVar2 = param_2;
    func_0x00010be43b20();
    _objc_release(uVar1);
    dVar8 = 0.0;
    if ((uVar2 & 1) == 0) goto LAB_10652b210;
  }
  func_0x00010c0f6600(param_2);
  dVar8 = param_1 * 2.0 + 0.0;
LAB_10652b210:
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c292ae0();
  _objc_release(puVar4);
  dVar9 = 1.0;
  dVar6 = param_1;
  if (puVar5 != (undefined *)0x1) {
    uVar1 = param_2;
    func_0x00010be43b20();
    if ((int)uVar1 == 0) {
      uVar1 = param_2;
      func_0x00010c24d420(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf529e0();
      uVar3 = param_2;
      func_0x00010c0c2500(param_2);
      dVar6 = (double)uVar3;
      dVar9 = (double)uVar2 / dVar6;
      _objc_release(uVar1);
    }
    else {
      func_0x00010be0b420(param_2);
      dVar6 = param_1;
      func_0x00010c0f6780(param_2);
      dVar9 = param_1 / dVar6;
    }
  }
  func_0x00010c0f6780(param_2);
  dVar7 = dVar6;
  func_0x00010c2a50e0(param_2);
  return dVar8 + dVar7 + dVar9 * dVar6;
}



/* Entry: 10652b2d4; end: 10652b33b; -[SCStackedStickerChatViewModel _isShowingBitmoji] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10652b2d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112749e44);
  func_0x00010c089820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06d4a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10652b33c; end: 10652b3cb; -[SCStackedStickerChatViewModel canStackMessage:lastDeletedSequenceNumber:] */

uint FUN_10652b33c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  iVar1 = (int)&uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f1ab0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_canStackMessage_lastDeletedSeque_1125a8fd0,param_3,param_4);
  if ((iVar1 == 0) || (func_0x00010be43b20(), (param_1 & 1) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010c06d4a0(param_3);
    uVar3 = (uint)uVar2 ^ 1;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10652b3cc; end: 10652b3d7; -[SCStackedStickerChatViewModel collectionViewCellClass] */

void FUN_10652b3cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126cb5f8);
  return;
}



/* Entry: 10652b3d8; end: 10652b3fb; -[SCStackedStickerChatViewModel insetForCollectionViewCell] */

undefined8 FUN_10652b3d8(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12f740();
  uVar1 = 0;
  if (param_1 == 0) {
    uVar1 = 0x4010000000000000;
  }
  return uVar1;
}



/* Entry: 10652b3fc; end: 10652b407; -[SCStackedStickerChatViewModel collectionViewCellReuseIdentifier] */

undefined ** FUN_10652b3fc(void)

{
  return &PTR____CFConstantStringClassReference_110e53738;
}



/* Entry: 10652b408; end: 10652b52f; -[SCStackedStickerChatViewModel collectionView:cellForItemAtIndexPath:stackedCollectionCellActionDelegate:parentVC:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652b408(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf40720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf6e0c0(param_3,param_2,lVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  func_0x00010c18b5e0(uVar2,param_2,param_6);
  _objc_release(param_6);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112749e44);
  uVar3 = param_4;
  func_0x00010c142240(param_4);
  _objc_release(param_4);
  func_0x00010c0dfd40(uVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112749e4c);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112749e48);
  func_0x00010bf398e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47d80(uVar2,param_2,uVar4,uVar5,0,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10652b530; end: 10652b5cb; -[SCStackedStickerChatViewModel insetsForCollectionView] */

undefined8 FUN_10652b530(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c12f740();
  if ((int)uVar1 == 0) {
    func_0x00010be0b420(param_1);
    func_0x00010c0c2500(param_1);
    func_0x00010c0f6780(param_1);
    func_0x00010c0f6740(param_1);
    func_0x00010c0f6740(param_1);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  }
  return uVar1;
}



/* Entry: 10652b5cc; end: 10652b61f; -[SCStackedStickerChatViewModel maxItemCapacityForCollectionView] */

long FUN_10652b5cc(double param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  
  uVar1 = param_2;
  func_0x00010be43b20();
  if ((uVar1 & 1) == 0) {
    func_0x00010c0f6780(param_2);
    dVar3 = param_1;
    func_0x00010bf6a560(PTR_PTR_1126cb5f8);
    lVar2 = (long)(param_1 / dVar3);
  }
  else {
    lVar2 = 1;
  }
  return lVar2;
}



/* Entry: 10652b620; end: 10652b637; -[SCStackedStickerChatViewModel sizeForItemAtIndexPath:] */

void FUN_10652b620(void)

{
  func_0x00010be0b420();
  return;
}



/* Entry: 10652b638; end: 10652b657; -[SCStackedStickerChatViewModel stackedViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652b638(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + _DAT_112749e44));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10652b658; end: 10652b6cf; -[SCStackedStickerChatViewModel addStackedViewModelFromMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652b658(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cb608;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02b440();
  _objc_release(param_3);
  func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_112749e44),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10652b6d0; end: 10652b753; -[SCStackedStickerChatViewModel _estimatedStickerCellSideLength] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10652b6d0(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  func_0x00010bf6a560(PTR_PTR_1126cb5f8);
  dVar2 = 45.0;
  if (*(char *)(param_2 + _DAT_112749e50) == '\0') {
    dVar2 = param_1;
  }
  lVar1 = param_2;
  func_0x00010be43b20();
  dVar3 = dVar2 + dVar2;
  if ((int)lVar1 == 0) {
    dVar3 = dVar2;
  }
  func_0x00010c0cb560();
  lVar1 = 0x4062c00000000000;
  if (((uint)param_2 & (uint)(150.0 < dVar3)) == 0) {
    lVar1 = (long)dVar3;
  }
  return lVar1;
}



/* Entry: 10652b754; end: 10652b7a3; -[SCStackedStickerChatViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652b754(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112749e4c,0);
  _objc_storeStrong(param_1 + _DAT_112749e48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749e44,0);
  return;
}



/* Entry: 10652b7a4; end: 10652ce0b; -[SCChatChildViewControllerFactory initWithUserSession:usernameProvider:groupsDataTracker:groupsDataCreator:groupsDataMutator:groupsDataFetcher:groupSnapchatterRepository:groupsCustomColorsFetcher:snapchatterServices:conversationManager:internalConversationServices:conversationDataFetcher:conversationUpdatesPublisher:myStoriesDataCoordinator:currentPageTracker:legacyChatTooltipService:soundEffects:chatMediaFetchingServices:loadMessageLogger:chatDisplayReadyLogger:grapheneRegistry:blizzardLogger:customStatusBarStyleContextController:typingNotificationSender:pluginManager:accessoryPluginManager:inputPlugins:convoLiveActivityManager:conversationUpdater:polaroidTooltipManager:feedPropertyLogger:friendsFeedDataCoordinator:circumstanceEngine:uberAvatarScopeServices:uberAvatarScopeExposer:storiesReplayManager:valdiRuntimeProvider:composerAnimatedImageViewFactory:cancelMenuActionSheetScopeServices:cancelMenuActionSheetScopeExposer:deepLinkHandling:webBrowserDeepLinkHandler:arroyoChatLogger:chatReplyScopeExposer:chatReplyComposeScopeServices:reactionsDetailScopeExposer:talkServices:talkUIScopeServices:talkUIScopeExposer:spotlightChatHeaderButtonScopeServices:downloaderServices:notificationPool:chatThreatsScanner:friendmojiFilteredContainer:friendProfileScopeExposer:groupProfileScopeExposer:chatContentDelivery:blockedExceptionAlertScopeExposer:blockedExceptionAlertScopeServices:chatCameraScopeExposer:chatCameraScopeServices:messagingExperimentService:sponsoredSnapAdResponseParser:postSnapProvider:navigationDelegate:contentDelivery:bitmojiAvatarBuilderScopeExposer:featureSettingsService:snapTokenProvider:snapchatterUserInfoProvider:userTraceLogger:settingsScopeLauncher:eraseMessageScopeExposer:snapReplayScopeExposer:messagingPlaybackScopeExposer:chatLockedConversationAlertScopeExposer:chatLockedConversationAlertScopeBuilderServices:merlinOnboardingScopeExposer:merlinBioPageScopeFactoryServices:nativeSessionManager:chatTooltipsService:merlinOnboardingStatusManager:streakRestorePurchaseScopeFactoryServices:memoriesExperimentService:lifecycleLogger:plusServices:plusSubscribeScopeExposer:plusSubscribeScopeServices:chatAttachmentHandlerScopeExposer:notificationPermissionUpdateEvents:chatActionMenuScopeExposer:chatActionMenuScopeServices:quotedMessageSubject:audioNotePlayer:networkConnectivityMonitor:application:chatMessageDisplayStateLogger:chatPageStoryPlayer:startupInfoService:mapUpsellRequestService:shareLocationFlowFactoryServices:nativePostSnapInteractionEvents:keepSnapsInChatUpsellScopeExposer:keepSnapsInChatUpsellScopeServices:adResponseProvider:adConfigProviderV2:nglStudySettings:preferences:backgroundPerformer:sponsoredSnapConversationSeqNumProvider:streakMilestoneFriendProfileScopeExposer:bitmojiFriendProfileSharingScopeServices:mapExternalUrlServices:pageLauncher:saturnUpsellTrayScopeExposer:saturnExperimentProvider:saturnSocialContextProvider:applicationStateProvider:] */

undefined8 *
FUN_10652b7a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
             undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
             undefined8 param_69,undefined8 param_70)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
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
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_60);
  _objc_retain(param_61);
  _objc_retain(param_62);
  _objc_retain(param_63);
  _objc_retain(param_64);
  _objc_retain(param_65);
  _objc_retain(param_66);
  _objc_retain(param_67);
  _objc_retain(param_68);
  _objc_retain(param_69);
  _objc_retain(param_70);
  _objc_retain(in_stack_000001f0);
  _objc_retain(in_stack_000001f8);
  _objc_retain(in_stack_00000200);
  _objc_retain(in_stack_00000208);
  _objc_retain(in_stack_00000210);
  _objc_retain(in_stack_00000218);
  _objc_retain(in_stack_00000220);
  _objc_retain(in_stack_00000228);
  _objc_retain(in_stack_00000230);
  _objc_retain(in_stack_00000238);
  _objc_retain(in_stack_00000240);
  _objc_retain(in_stack_00000248);
  _objc_retain(in_stack_00000250);
  _objc_retain(in_stack_00000258);
  _objc_retain(in_stack_00000260);
  _objc_retain(in_stack_00000268);
  _objc_retain(in_stack_00000270);
  _objc_retain(in_stack_00000278);
  _objc_retain(in_stack_00000280);
  _objc_retain(in_stack_00000288);
  _objc_retain(in_stack_00000290);
  _objc_retain(in_stack_00000298);
  _objc_retain(in_stack_000002a0);
  _objc_retain(in_stack_000002a8);
  _objc_retain(in_stack_000002b0);
  _objc_retain(in_stack_000002b8);
  _objc_retain(in_stack_000002c0);
  _objc_retain(in_stack_000002c8);
  _objc_retain(in_stack_000002d0);
  _objc_retain(in_stack_000002d8);
  _objc_retain(in_stack_000002e0);
  _objc_retain(in_stack_000002e8);
  _objc_retain(in_stack_000002f0);
  _objc_retain(in_stack_000002f8);
  _objc_retain(in_stack_00000300);
  _objc_retain(in_stack_00000308);
  _objc_retain(in_stack_00000310);
  _objc_retain(in_stack_00000318);
  _objc_retain(in_stack_00000320);
  _objc_retain(in_stack_00000328);
  _objc_retain(in_stack_00000330);
  _objc_retain(in_stack_00000338);
  _objc_retain(in_stack_00000340);
  _objc_retain(in_stack_00000348);
  _objc_retain(in_stack_00000350);
  _objc_retain(in_stack_00000358);
  _objc_retain(in_stack_00000360);
  _objc_retain(in_stack_00000368);
  _objc_retain(in_stack_00000370);
  _objc_retain(in_stack_00000378);
  puStack_70 = PTR_PTR_1126f1ab8;
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
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_65);
    uVar2 = puVar1[0x55];
    puVar1[0x55] = param_65;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_41;
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
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_45;
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
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_49;
    _objc_release(uVar2);
    _objc_retain(param_50);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_50;
    _objc_release(uVar2);
    _objc_retain(param_51);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_51;
    _objc_release(uVar2);
    _objc_retain(param_52);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_52;
    _objc_release(uVar2);
    _objc_retain(param_53);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_53;
    _objc_release(uVar2);
    _objc_retain(param_54);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_54;
    _objc_release(uVar2);
    _objc_retain(param_55);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_55;
    _objc_release(uVar2);
    _objc_retain(param_56);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_56;
    _objc_release(uVar2);
    _objc_retain(param_57);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_57;
    _objc_release(uVar2);
    _objc_retain(param_58);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_58;
    _objc_release(uVar2);
    _objc_retain(param_59);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_59;
    _objc_release(uVar2);
    _objc_retain(param_60);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_60;
    _objc_release(uVar2);
    _objc_retain(param_61);
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = param_61;
    _objc_release(uVar2);
    _objc_retain(param_62);
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = param_62;
    _objc_release(uVar2);
    _objc_retain(param_63);
    uVar2 = puVar1[0x3e];
    puVar1[0x3e] = param_63;
    _objc_release(uVar2);
    _objc_retain(param_64);
    uVar2 = puVar1[0x3f];
    puVar1[0x3f] = param_64;
    _objc_release(uVar2);
    _objc_retain(param_66);
    uVar2 = puVar1[0x41];
    puVar1[0x41] = param_66;
    _objc_release(uVar2);
    _objc_retain(param_67);
    uVar2 = puVar1[0x40];
    puVar1[0x40] = param_67;
    _objc_release(uVar2);
    _objc_retain(param_68);
    uVar2 = puVar1[0x42];
    puVar1[0x42] = param_68;
    _objc_release(uVar2);
    _objc_retain(param_69);
    uVar2 = puVar1[0x43];
    puVar1[0x43] = param_69;
    _objc_release(uVar2);
    _objc_retain(param_70);
    uVar2 = puVar1[0x44];
    puVar1[0x44] = param_70;
    _objc_release(uVar2);
    _objc_retain(in_stack_000001f0);
    uVar2 = puVar1[0x45];
    puVar1[0x45] = in_stack_000001f0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000001f8);
    uVar2 = puVar1[0x46];
    puVar1[0x46] = in_stack_000001f8;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000200);
    uVar2 = puVar1[0x47];
    puVar1[0x47] = in_stack_00000200;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000208);
    uVar2 = puVar1[0x48];
    puVar1[0x48] = in_stack_00000208;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000210);
    uVar2 = puVar1[0x49];
    puVar1[0x49] = in_stack_00000210;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000218);
    uVar2 = puVar1[0x4a];
    puVar1[0x4a] = in_stack_00000218;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000220);
    uVar2 = puVar1[0x4b];
    puVar1[0x4b] = in_stack_00000220;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000228);
    uVar2 = puVar1[0x4c];
    puVar1[0x4c] = in_stack_00000228;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000230);
    uVar2 = puVar1[0x4d];
    puVar1[0x4d] = in_stack_00000230;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000238);
    uVar2 = puVar1[0x4e];
    puVar1[0x4e] = in_stack_00000238;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000240);
    uVar2 = puVar1[0x51];
    puVar1[0x51] = in_stack_00000240;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000340);
    uVar2 = puVar1[0x4f];
    puVar1[0x4f] = in_stack_00000340;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000348);
    uVar2 = puVar1[0x50];
    puVar1[0x50] = in_stack_00000348;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000248);
    uVar2 = puVar1[0x52];
    puVar1[0x52] = in_stack_00000248;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000250);
    uVar2 = puVar1[0x53];
    puVar1[0x53] = in_stack_00000250;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000258);
    uVar2 = puVar1[0x54];
    puVar1[0x54] = in_stack_00000258;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000260);
    uVar2 = puVar1[0x56];
    puVar1[0x56] = in_stack_00000260;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000268);
    uVar2 = puVar1[0x57];
    puVar1[0x57] = in_stack_00000268;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000270);
    uVar2 = puVar1[0x58];
    puVar1[0x58] = in_stack_00000270;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000278);
    uVar2 = puVar1[0x59];
    puVar1[0x59] = in_stack_00000278;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000280);
    uVar2 = puVar1[0x5a];
    puVar1[0x5a] = in_stack_00000280;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000288);
    uVar2 = puVar1[0x5b];
    puVar1[0x5b] = in_stack_00000288;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000290);
    uVar2 = puVar1[0x5c];
    puVar1[0x5c] = in_stack_00000290;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000298);
    uVar2 = puVar1[0x5d];
    puVar1[0x5d] = in_stack_00000298;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002a0);
    uVar2 = puVar1[0x5e];
    puVar1[0x5e] = in_stack_000002a0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002a8);
    uVar2 = puVar1[0x5f];
    puVar1[0x5f] = in_stack_000002a8;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002b0);
    uVar2 = puVar1[0x60];
    puVar1[0x60] = in_stack_000002b0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002b8);
    uVar2 = puVar1[0x61];
    puVar1[0x61] = in_stack_000002b8;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002c0);
    uVar2 = puVar1[0x62];
    puVar1[0x62] = in_stack_000002c0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002c8);
    uVar2 = puVar1[99];
    puVar1[99] = in_stack_000002c8;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002d0);
    uVar2 = puVar1[100];
    puVar1[100] = in_stack_000002d0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002d8);
    uVar2 = puVar1[0x65];
    puVar1[0x65] = in_stack_000002d8;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002e0);
    uVar2 = puVar1[0x66];
    puVar1[0x66] = in_stack_000002e0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002e8);
    uVar2 = puVar1[0x67];
    puVar1[0x67] = in_stack_000002e8;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002f0);
    uVar2 = puVar1[0x68];
    puVar1[0x68] = in_stack_000002f0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002f8);
    uVar2 = puVar1[0x69];
    puVar1[0x69] = in_stack_000002f8;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000300);
    uVar2 = puVar1[0x6a];
    puVar1[0x6a] = in_stack_00000300;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000308);
    uVar2 = puVar1[0x6b];
    puVar1[0x6b] = in_stack_00000308;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000310);
    uVar2 = puVar1[0x6c];
    puVar1[0x6c] = in_stack_00000310;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000318);
    uVar2 = puVar1[0x6d];
    puVar1[0x6d] = in_stack_00000318;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000320);
    uVar2 = puVar1[0x6e];
    puVar1[0x6e] = in_stack_00000320;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000328);
    uVar2 = puVar1[0x6f];
    puVar1[0x6f] = in_stack_00000328;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000330);
    uVar2 = puVar1[0x70];
    puVar1[0x70] = in_stack_00000330;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000338);
    uVar2 = puVar1[0x71];
    puVar1[0x71] = in_stack_00000338;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000350);
    uVar2 = puVar1[0x72];
    puVar1[0x72] = in_stack_00000350;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000358);
    uVar2 = puVar1[0x73];
    puVar1[0x73] = in_stack_00000358;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000360);
    uVar2 = puVar1[0x74];
    puVar1[0x74] = in_stack_00000360;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000368);
    uVar2 = puVar1[0x75];
    puVar1[0x75] = in_stack_00000368;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000370);
    uVar2 = puVar1[0x76];
    puVar1[0x76] = in_stack_00000370;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000378);
    uVar2 = puVar1[0x77];
    puVar1[0x77] = in_stack_00000378;
    _objc_release(uVar2);
  }
  _objc_release(in_stack_00000378);
  _objc_release(in_stack_00000370);
  _objc_release(in_stack_00000368);
  _objc_release(in_stack_00000360);
  _objc_release(in_stack_00000358);
  _objc_release(in_stack_00000350);
  _objc_release(in_stack_00000348);
  _objc_release(in_stack_00000340);
  _objc_release(in_stack_00000338);
  _objc_release(in_stack_00000330);
  _objc_release(in_stack_00000328);
  _objc_release(in_stack_00000320);
  _objc_release(in_stack_00000318);
  _objc_release(in_stack_00000310);
  _objc_release(in_stack_00000308);
  _objc_release(in_stack_00000300);
  _objc_release(in_stack_000002f8);
  _objc_release(in_stack_000002f0);
  _objc_release(in_stack_000002e8);
  _objc_release(in_stack_000002e0);
  _objc_release(in_stack_000002d8);
  _objc_release(in_stack_000002d0);
  _objc_release(in_stack_000002c8);
  _objc_release(in_stack_000002c0);
  _objc_release(in_stack_000002b8);
  _objc_release(in_stack_000002b0);
  _objc_release(in_stack_000002a8);
  _objc_release(in_stack_000002a0);
  _objc_release(in_stack_00000298);
  _objc_release(in_stack_00000290);
  _objc_release(in_stack_00000288);
  _objc_release(in_stack_00000280);
  _objc_release(in_stack_00000278);
  _objc_release(in_stack_00000270);
  _objc_release(in_stack_00000268);
  _objc_release(in_stack_00000260);
  _objc_release(in_stack_00000258);
  _objc_release(in_stack_00000250);
  _objc_release(in_stack_00000248);
  _objc_release(in_stack_00000240);
  _objc_release(in_stack_00000238);
  _objc_release(in_stack_00000230);
  _objc_release(in_stack_00000228);
  _objc_release(in_stack_00000220);
  _objc_release(in_stack_00000218);
  _objc_release(in_stack_00000210);
  _objc_release(in_stack_00000208);
  _objc_release(in_stack_00000200);
  _objc_release(in_stack_000001f8);
  _objc_release(in_stack_000001f0);
  _objc_release(param_70);
  _objc_release(param_69);
  _objc_release(param_68);
  _objc_release(param_67);
  _objc_release(param_66);
  _objc_release(param_65);
  _objc_release(param_64);
  _objc_release(param_63);
  _objc_release(param_62);
  _objc_release(param_61);
  _objc_release(param_60);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
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



/* Entry: 10652ce0c; end: 10652ce2b; -[SCChatChildViewControllerFactory isChatViewControllerPoolEmpty] */

bool FUN_10652ce0c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0(lVar1);
  return lVar1 == 0;
}



/* Entry: 10652ce2c; end: 10652d3fb; -[SCChatChildViewControllerFactory dequeueChatV3ViewControllerWithMetricsTracker:] */

void FUN_10652ce2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    puVar4 = PTR_PTR_1126cb3e8;
    _objc_alloc();
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    lVar3 = param_1 + 0x3c0;
    _objc_loadWeakRetained();
    func_0x00010c05ec60(puVar4,*(undefined8 *)(param_1 + 0x368),uVar1,uVar2,lVar3,
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                        *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                        *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                        *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                        *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                        *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xa0),
                        *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x1c8),
                        *(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0xa8),
                        *(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8),
                        *(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0),
                        *(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x100),
                        *(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118),
                        *(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x128),
                        *(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x138),
                        *(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x148),
                        *(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x158),
                        *(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x168),
                        *(undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_1 + 0x178),
                        *(undefined8 *)(param_1 + 0x180),*(undefined8 *)(param_1 + 0x198),
                        *(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 400),
                        *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
                        *(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),
                        *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0x1a0),
                        *(undefined8 *)(param_1 + 0x1a8),*(undefined8 *)(param_1 + 0x1b0),
                        *(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(param_1 + 0x1c0),
                        *(undefined8 *)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x1d8),
                        *(undefined8 *)(param_1 + 0x1e0),*(undefined8 *)(param_1 + 0x1e8),
                        *(undefined8 *)(param_1 + 0x1f0),*(undefined8 *)(param_1 + 0x1f8),
                        *(undefined8 *)(param_1 + 0x2a8),*(undefined8 *)(param_1 + 0x208),
                        *(undefined8 *)(param_1 + 0x200),*(undefined8 *)(param_1 + 0x210),
                        *(undefined8 *)(param_1 + 0x218));
    _objc_release(lVar3);
    func_0x00010c278920(param_3);
  }
  else {
    puVar4 = *(undefined **)(param_1 + 0x18);
    func_0x00010c089820(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cd60(*(undefined8 *)(param_1 + 0x18));
  }
  _objc_retain(puVar4);
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}


