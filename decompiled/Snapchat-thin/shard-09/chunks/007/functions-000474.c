/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107051ea4; end: 107051f0b;  */

void FUN_107051ea4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  uVar2 = param_2;
  FUN_107051aac();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107051f0c; end: 107051f1b; -[SCMessageChatTableViewCell payloadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107051f0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763308);
}



/* Entry: 107051f1c; end: 107051f5b; -[SCMessageChatTableViewCell setPayloadView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107051f1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763308;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107051f5c; end: 107051f6b; -[SCMessageChatTableViewCell statusLabelView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107051f5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763314);
}



/* Entry: 107051f6c; end: 107051fab; -[SCMessageChatTableViewCell setStatusLabelView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107051f6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763314;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107051fac; end: 107051fbb; -[SCMessageChatTableViewCell payloadAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107051fac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763318);
}



/* Entry: 107051fbc; end: 107051ffb; -[SCMessageChatTableViewCell setPayloadAccessoryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107051fbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763318;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107051ffc; end: 10705200b; -[SCMessageChatTableViewCell timeLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107051ffc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763304);
}



/* Entry: 10705200c; end: 10705204b; -[SCMessageChatTableViewCell setTimeLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705200c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763304;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10705204c; end: 10705205b; -[SCMessageChatTableViewCell senderLine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10705204c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276330c);
}



/* Entry: 10705205c; end: 10705209b; -[SCMessageChatTableViewCell setSenderLine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705205c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276330c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10705209c; end: 1070520ab; -[SCMessageChatTableViewCell headerStatusView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10705209c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763300);
}



/* Entry: 1070520ac; end: 1070520eb; -[SCMessageChatTableViewCell setHeaderStatusView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070520ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763300;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070520ec; end: 1070520fb; -[SCMessageChatTableViewCell quotedMessageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070520ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763330);
}



/* Entry: 1070520fc; end: 10705213b; -[SCMessageChatTableViewCell setQuotedMessageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070520fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763330;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10705213c; end: 10705215b; -[SCMessageChatTableViewCell reactableDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705213c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112763340);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10705215c; end: 10705216f; -[SCMessageChatTableViewCell setReactableDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705215c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112763340,param_3);
  return;
}



/* Entry: 107052170; end: 10705218f; -[SCMessageChatTableViewCell quotedMessageDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107052170(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112763334);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107052190; end: 1070521a3; -[SCMessageChatTableViewCell setQuotedMessageDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107052190(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112763334,param_3);
  return;
}



/* Entry: 1070521a4; end: 1070521b3; -[SCMessageChatTableViewCell valdiRuntimeProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070521a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763344);
}



/* Entry: 1070521b4; end: 1070521f3; -[SCMessageChatTableViewCell setValdiRuntimeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070521b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763344;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070521f4; end: 107052407; -[SCMessageChatTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070521f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112763344,0);
  _objc_destroyWeak(param_1 + _DAT_112763334);
  _objc_destroyWeak(param_1 + _DAT_112763340);
  _objc_storeStrong(param_1 + _DAT_112763330,0);
  _objc_storeStrong(param_1 + _DAT_112763300,0);
  _objc_storeStrong(param_1 + _DAT_11276330c,0);
  _objc_storeStrong(param_1 + _DAT_112763304,0);
  _objc_storeStrong(param_1 + _DAT_112763318,0);
  _objc_storeStrong(param_1 + _DAT_112763314,0);
  _objc_storeStrong(param_1 + _DAT_112763308,0);
  _objc_destroyWeak(param_1 + _DAT_11276333c);
  _objc_destroyWeak(param_1 + _DAT_1127632b8);
  _objc_storeStrong(param_1 + _DAT_11276329c,0);
  _objc_storeStrong(param_1 + _DAT_1127632b0,0);
  _objc_destroyWeak(param_1 + _DAT_1127632a0);
  _objc_storeStrong(param_1 + _DAT_112763328,0);
  _objc_storeStrong(param_1 + _DAT_112763324,0);
  _objc_storeStrong(param_1 + _DAT_112763320,0);
  _objc_storeStrong(param_1 + _DAT_11276331c,0);
  _objc_storeStrong(param_1 + _DAT_1127632ac,0);
  _objc_destroyWeak(param_1 + _DAT_1127632f0);
  _objc_destroyWeak(param_1 + _DAT_1127632ec);
  _objc_storeStrong(param_1 + _DAT_1127632cc,0);
  _objc_storeStrong(param_1 + _DAT_1127632c8,0);
  _objc_storeStrong(param_1 + _DAT_1127632d0,0);
  _objc_storeStrong(param_1 + _DAT_1127632c4,0);
  _objc_storeStrong(param_1 + _DAT_1127632c0,0);
  _objc_storeStrong(param_1 + _DAT_1127632a8,0);
  _objc_storeStrong(param_1 + _DAT_112763310,0);
  _objc_storeStrong(param_1 + _DAT_1127632a4,0);
  _objc_storeStrong(param_1 + _DAT_1127632f8,0);
  _objc_storeStrong(param_1 + _DAT_1127632b4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276332c,0);
  return;
}



/* Entry: 107052408; end: 1070524bb; -[SCBaseChatCellViewModel initWithProps:] */

undefined1 *
FUN_107052408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1126f8640;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf652a0(param_4);
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    func_0x00010c2746e0(param_4);
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    uVar2 = param_4;
    func_0x00010c107c20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010c12f740();
    *(char *)((long)puVar1 + 0x10) = (char)uVar2;
    *(undefined1 *)((long)puVar1 + 0x14) = 0;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = 0;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1070524bc; end: 10705250f; -[SCBaseChatCellViewModel viewModelType] */

undefined8 FUN_1070524bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 107052510; end: 107052563; -[SCBaseChatCellViewModel calculateHeight] */

undefined8 FUN_107052510(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 107052564; end: 10705256b; -[SCBaseChatCellViewModel hidden] */

undefined8 FUN_107052564(void)

{
  return 0;
}



/* Entry: 10705256c; end: 107052573; -[SCBaseChatCellViewModel renderAsBubble] */

undefined1 FUN_10705256c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 107052574; end: 10705259f; -[SCBaseChatCellViewModel dateHeaderHeight] */

undefined8 FUN_107052574(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)param_1;
  func_0x00010c2335e0();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
  }
  return uVar2;
}



/* Entry: 1070525a0; end: 1070525a7; -[SCBaseChatCellViewModel dateHeaderWidth] */

undefined8 FUN_1070525a0(void)

{
  return 0;
}



/* Entry: 1070525a8; end: 1070525ef; -[SCBaseChatCellViewModel dateHeaderTopMargin] */

undefined8 FUN_1070525a8(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_1;
  func_0x00010c12f740();
  func_0x00010c2335e0();
  uVar2 = 0x4020000000000000;
  if (iVar1 == 0) {
    uVar2 = 0x4008000000000000;
  }
  if (param_1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 1070525f0; end: 10705262b; -[SCBaseChatCellViewModel dateHeaderBottomMargin] */

undefined8 FUN_1070525f0(uint param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c12f740();
  func_0x00010c2335e0();
  uVar2 = 0x4020000000000000;
  if ((param_1 & uVar1) == 0) {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10705262c; end: 10705264f; -[SCBaseChatCellViewModel dateHeaderLeadingMargin] */

undefined8 FUN_10705262c(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010c2335e0();
  uVar1 = 0x4020000000000000;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 107052650; end: 107052673; -[SCBaseChatCellViewModel dateHeaderTrailingMargin] */

undefined8 FUN_107052650(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010c2335e0();
  uVar1 = 0x4020000000000000;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 107052674; end: 1070526b3; -[SCBaseChatCellViewModel dateHeaderBubbleLeadingInset] */

undefined8 FUN_107052674(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_1;
  func_0x00010c12f740();
  uVar2 = 0;
  if (iVar1 != 0) {
    func_0x00010c2335e0(0);
    uVar2 = 0x4028000000000000;
    if (param_1 == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* Entry: 1070526b4; end: 1070526f3; -[SCBaseChatCellViewModel dateHeaderBubbleTrailingInset] */

undefined8 FUN_1070526b4(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_1;
  func_0x00010c12f740();
  uVar2 = 0;
  if (iVar1 != 0) {
    func_0x00010c2335e0(0);
    uVar2 = 0x4028000000000000;
    if (param_1 == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* Entry: 1070526f4; end: 107052733; -[SCBaseChatCellViewModel dateHeaderBubbleTopInset] */

undefined8 FUN_1070526f4(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_1;
  func_0x00010c12f740();
  uVar2 = 0;
  if (iVar1 != 0) {
    func_0x00010c2335e0(0);
    uVar2 = 0x4020000000000000;
    if (param_1 == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* Entry: 107052734; end: 107052773; -[SCBaseChatCellViewModel dateHeaderBubbleBottomInset] */

undefined8 FUN_107052734(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_1;
  func_0x00010c12f740();
  uVar2 = 0;
  if (iVar1 != 0) {
    func_0x00010c2335e0(0);
    uVar2 = 0x4020000000000000;
    if (param_1 == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* Entry: 107052774; end: 10705277b; -[SCBaseChatCellViewModel foldIndicatorHeight] */

undefined8 FUN_107052774(void)

{
  return 0;
}



/* Entry: 10705277c; end: 1070527bf; -[SCBaseChatCellViewModel bodyTopMargin] */

undefined8 FUN_10705277c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_2;
  func_0x00010c0730e0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_2, func_0x00010c0d7360(), (int)uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c2746f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_topMargin_11267abe0);
    return param_1;
  }
  return 0;
}



/* Entry: 1070527c0; end: 10705281b; -[SCBaseChatCellViewModel additionalBodyInsets] */

undefined8 FUN_1070527c0(ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_1;
  func_0x00010c12f740();
  puVar2 = (undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  if (((uVar1 & 1) != 0) &&
     (func_0x00010c234240(), puVar2 = (undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
     (param_1 & 1) != 0)) {
    puVar2 = (undefined8 *)&UNK_10de1e9c0;
  }
  return *puVar2;
}



/* Entry: 10705281c; end: 10705282f; -[SCBaseChatCellViewModel payloadViewInsets] */

undefined8 FUN_10705281c(void)

{
  return *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
}



/* Entry: 107052830; end: 107052833; -[SCBaseChatCellViewModel identifier] */

void FUN_107052830(void)

{
  return;
}



/* Entry: 107052834; end: 107052887; -[SCBaseChatCellViewModel reusableCellIdentifier] */

undefined8 FUN_107052834(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 107052888; end: 1070528db; -[SCBaseChatCellViewModel shouldDisplayBelowFoldInChat] */

undefined8 FUN_107052888(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 1070528dc; end: 1070528e3; -[SCBaseChatCellViewModel isUnseenMessageInChat] */

undefined8 FUN_1070528dc(void)

{
  return 0;
}



/* Entry: 1070528e4; end: 1070528e7; -[SCBaseChatCellViewModel shouldDisplayBelowFoldInChatForPreviewMode] */

void FUN_1070528e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22f350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_shouldDisplayBelowFoldInChat_1126696f8);
  return;
}



/* Entry: 1070528e8; end: 1070528ef; -[SCBaseChatCellViewModel needsExtraSpacingOnTop] */

undefined8 FUN_1070528e8(void)

{
  return 0;
}



/* Entry: 1070528f0; end: 107052943; -[SCBaseChatCellViewModel shouldShowDateHeader] */

undefined8 FUN_1070528f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 107052944; end: 107052997; -[SCBaseChatCellViewModel shouldShowSenderHeader] */

undefined8 FUN_107052944(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 107052998; end: 1070529eb; -[SCBaseChatCellViewModel shouldShowTimestamp] */

undefined8 FUN_107052998(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 1070529ec; end: 107052a3f; -[SCBaseChatCellViewModel shouldShowSenderLine] */

undefined8 FUN_1070529ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 107052a40; end: 107052a47; -[SCBaseChatCellViewModel shouldShowFoldIndicator] */

undefined8 FUN_107052a40(void)

{
  return 0;
}



/* Entry: 107052a48; end: 107052a4f; -[SCBaseChatCellViewModel intervalFromPrevious] */

undefined8 FUN_107052a48(void)

{
  return 0;
}



/* Entry: 107052a50; end: 107052a53; -[SCBaseChatCellViewModel refreshViewModel] */

void FUN_107052a50(void)

{
  return;
}



/* Entry: 107052a54; end: 107052a5b; -[SCBaseChatCellViewModel isReactable] */

undefined8 FUN_107052a54(void)

{
  return 0;
}



/* Entry: 107052a5c; end: 107052a63; -[SCBaseChatCellViewModel reactionsHeight] */

undefined8 FUN_107052a5c(void)

{
  return 0;
}



/* Entry: 107052a64; end: 107052a6f; -[SCBaseChatCellViewModel reactions] */

undefined * FUN_107052a64(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 107052a70; end: 107052a73; +[SCBaseChatCellViewModel dateHeaderLabelFont] */

void FUN_107052a70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4023000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_demiBoldAvenirNextFontOfSize__1125b8f48);
  return;
}



/* Entry: 107052a74; end: 107052a77; +[SCBaseChatCellViewModel dateHeaderLabelColor] */

void FUN_107052a74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xc0);
  return;
}



/* Entry: 107052a78; end: 107052a7b; +[SCBaseChatCellViewModel notificationLabelFont] */

void FUN_107052a78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4023000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_demiBoldAvenirNextFontOfSize__1125b8f48);
  return;
}



/* Entry: 107052a7c; end: 107052bc3; -[SCBaseChatCellViewModel isEqual:] */

undefined8 FUN_107052a7c(double param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  
  _objc_retain(param_4);
  if (param_2 == param_4) {
    uVar5 = 1;
  }
  else {
    lVar3 = param_2;
    _objc_opt_class(param_2);
    lVar4 = param_4;
    func_0x00010c077980(param_4,param_3,lVar3);
    if ((int)lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      _objc_retain(param_4);
      bVar2 = *(byte *)(param_2 + 0x15);
      lVar3 = param_4;
      func_0x00010c274860();
      if (((((uint)bVar2 == (uint)lVar3) &&
           (bVar2 = *(byte *)(param_2 + 0x16), lVar3 = param_4, func_0x00010bf20400(),
           (uint)bVar2 == (uint)lVar3)) &&
          (bVar2 = *(byte *)(param_2 + 0x17), lVar3 = param_4, func_0x00010bf20220(),
          (uint)bVar2 == (uint)lVar3)) &&
         (((iVar1 = *(int *)(param_2 + 0x18), lVar3 = param_4, func_0x00010bfdf5a0(),
           iVar1 == (int)lVar3 &&
           (dVar6 = *(double *)(param_2 + 8), func_0x00010bf652a0(param_4), dVar6 == param_1)) &&
          ((dVar6 = *(double *)(param_2 + 0x28), func_0x00010c2746e0(param_4), dVar6 == param_1 &&
           (bVar2 = *(byte *)(param_2 + 0x13), lVar3 = param_4, func_0x00010c076100(),
           (uint)bVar2 == (uint)lVar3)))))) {
        uVar5 = *(undefined8 *)(param_2 + 0x50);
        lVar3 = param_4;
        func_0x00010c15df40(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0(uVar5,param_3,lVar3);
        _objc_release(lVar3);
      }
      else {
        uVar5 = 0;
      }
      _objc_release(param_4);
    }
  }
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 107052bc4; end: 107052bc7; -[SCBaseChatCellViewModel xLogObjectInfo] */

void FUN_107052bc4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf660b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_debugDescription_1125b71d0);
  return;
}



/* Entry: 107052bc8; end: 107052c33; -[SCBaseChatCellViewModel canBeQuoted] */

ulong FUN_107052bc8(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR_PTR_1126cb4d0;
  _objc_retain();
  _objc_opt_class(puVar2);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010bf2c680(uVar1);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 107052c34; end: 107052ca7; -[SCBaseChatCellViewModel quotedRenderableViewModel] */

void FUN_107052c34(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR_PTR_1126cb4d0;
  _objc_retain();
  _objc_opt_class(puVar2);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010c11edc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107052ca8; end: 107052d23; -[SCBaseChatCellViewModel quotedContentSize] */

undefined1  [16] FUN_107052ca8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_PTR_1126cb4d0;
  _objc_retain();
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010c11eba0(uVar1);
  _objc_release(uVar1);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 107052d24; end: 107052d97; -[SCBaseChatCellViewModel belowMessageAccessoryContent] */

void FUN_107052d24(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR_PTR_1126cb4d0;
  _objc_retain();
  _objc_opt_class(puVar2);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010bf19480(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107052d98; end: 107052e0b; -[SCBaseChatCellViewModel ctaAccessoryContent] */

void FUN_107052d98(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR_PTR_1126cb4d0;
  _objc_retain();
  _objc_opt_class(puVar2);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010bf5d020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107052e0c; end: 107052e87; -[SCBaseChatCellViewModel ctaAccessoryContentSize] */

undefined1  [16] FUN_107052e0c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_PTR_1126cb4d0;
  _objc_retain();
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010bf5d040(uVar1);
  _objc_release(uVar1);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 107052e88; end: 107052efb; -[SCBaseChatCellViewModel senderHeaderViewModel] */

void FUN_107052e88(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR_PTR_1126cb4d0;
  _objc_retain();
  _objc_opt_class(puVar2);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010c15dd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107052efc; end: 107052f03; -[SCBaseChatCellViewModel postSnapActionsParams] */

undefined8 FUN_107052efc(void)

{
  return 0;
}



/* Entry: 107052f04; end: 107052f13; -[SCBaseChatCellViewModel postSnapActionsSize] */

undefined1  [16] FUN_107052f04(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 107052f14; end: 107052f1f; -[SCBaseChatCellViewModel additionalWidthForWhitespaceTapToSave] */

undefined8 FUN_107052f14(void)

{
  return 0x7fefffffffffffff;
}



/* Entry: 107052f20; end: 107052f27; -[SCBaseChatCellViewModel height] */

undefined8 FUN_107052f20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107052f28; end: 107052f2f; -[SCBaseChatCellViewModel setHeight:] */

void FUN_107052f28(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 107052f30; end: 107052f37; -[SCBaseChatCellViewModel isFirstViewModel] */

undefined1 FUN_107052f30(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 107052f38; end: 107052f3f; -[SCBaseChatCellViewModel setIsFirstViewModel:] */

void FUN_107052f38(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 107052f40; end: 107052f47; -[SCBaseChatCellViewModel isLastViewModel] */

undefined1 FUN_107052f40(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 107052f48; end: 107052f4f; -[SCBaseChatCellViewModel setIsLastViewModel:] */

void FUN_107052f48(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x12) = param_3;
  return;
}



/* Entry: 107052f50; end: 107052f57; -[SCBaseChatCellViewModel isLastMessage] */

undefined1 FUN_107052f50(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 107052f58; end: 107052f5f; -[SCBaseChatCellViewModel setIsLastMessage:] */

void FUN_107052f58(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x13) = param_3;
  return;
}



/* Entry: 107052f60; end: 107052f67; -[SCBaseChatCellViewModel topMargin] */

undefined8 FUN_107052f60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107052f68; end: 107052f6f; -[SCBaseChatCellViewModel analyticsMessageId] */

undefined8 FUN_107052f68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107052f70; end: 107052f77; -[SCBaseChatCellViewModel prefetchPluginIdentifier] */

undefined8 FUN_107052f70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107052f78; end: 107052f7f; -[SCBaseChatCellViewModel isGroupConversation] */

undefined1 FUN_107052f78(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 107052f80; end: 107052f87; -[SCBaseChatCellViewModel conversationId] */

undefined8 FUN_107052f80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107052f88; end: 107052f8f; -[SCBaseChatCellViewModel recipientUserId] */

undefined8 FUN_107052f88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107052f90; end: 107052f97; -[SCBaseChatCellViewModel senderUserId] */

undefined8 FUN_107052f90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107052f98; end: 107052f9f; -[SCBaseChatCellViewModel reactableViewModel] */

undefined8 FUN_107052f98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107052fa0; end: 107052fa7; -[SCBaseChatCellViewModel topRightCornerIsRounded] */

undefined1 FUN_107052fa0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* Entry: 107052fa8; end: 107052faf; -[SCBaseChatCellViewModel setTopRightCornerIsRounded:] */

void FUN_107052fa8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x15) = param_3;
  return;
}



/* Entry: 107052fb0; end: 107052fb7; -[SCBaseChatCellViewModel bottomRightCornerIsRounded] */

undefined1 FUN_107052fb0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x16);
}



/* Entry: 107052fb8; end: 107052fbf; -[SCBaseChatCellViewModel setBottomRightCornerIsRounded:] */

void FUN_107052fb8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x16) = param_3;
  return;
}



/* Entry: 107052fc0; end: 107052fc7; -[SCBaseChatCellViewModel bottomLeftCornerIsRounded] */

undefined1 FUN_107052fc0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x17);
}



/* Entry: 107052fc8; end: 107052fcf; -[SCBaseChatCellViewModel setBottomLeftCornerIsRounded:] */

void FUN_107052fc8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x17) = param_3;
  return;
}



/* Entry: 107052fd0; end: 107052fd7; -[SCBaseChatCellViewModel headerIndex] */

undefined4 FUN_107052fd0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 107052fd8; end: 107052fdf; -[SCBaseChatCellViewModel setHeaderIndex:] */

void FUN_107052fd8(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 107052fe0; end: 10705303f; -[SCBaseChatCellViewModel .cxx_destruct] */

void FUN_107052fe0(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 107053040; end: 10705304f; -[SCMessageChatViewModelProps hasDateHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107053040(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112763390);
}



/* Entry: 107053050; end: 10705305f; -[SCMessageChatViewModelProps setHasDateHeader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053050(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112763390) = param_3;
  return;
}



/* Entry: 107053060; end: 10705306f; -[SCMessageChatViewModelProps hasSenderHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107053060(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112763394);
}


