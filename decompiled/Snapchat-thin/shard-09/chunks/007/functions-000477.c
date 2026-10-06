/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107056260; end: 10705626f; -[SCMessageChatViewModel belowMessageAccessoryContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107056260(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127634f0);
}



/* Entry: 107056270; end: 10705627f; -[SCMessageChatViewModel ctaAccessoryContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107056270(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127634ec);
}



/* Entry: 107056280; end: 10705628f; -[SCMessageChatViewModel postSnapActionsParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107056280(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127634f4);
}



/* Entry: 107056290; end: 10705629f; -[SCMessageChatViewModel senderHeaderViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107056290(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276351c);
}



/* Entry: 1070562a0; end: 1070562af; -[SCMessageChatViewModel blizzardLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070562a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763518);
}



/* Entry: 1070562b0; end: 1070562ef; -[SCMessageChatViewModel setBlizzardLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070562b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763518;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070562f0; end: 1070562ff; -[SCMessageChatViewModel hasDateHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1070562f0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276345c);
}



/* Entry: 107056300; end: 10705630f; -[SCMessageChatViewModel hasSenderHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107056300(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112763460);
}



/* Entry: 107056310; end: 10705631f; -[SCMessageChatViewModel hasSenderLine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107056310(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112763464);
}



/* Entry: 107056320; end: 10705632f; -[SCMessageChatViewModel hasTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107056320(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112763468);
}



/* Entry: 107056330; end: 10705633f; -[SCMessageChatViewModel hasFoldIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107056330(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276346c);
}



/* Entry: 107056340; end: 10705634f; -[SCMessageChatViewModel displayBelowTheFold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107056340(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127634c0);
}



/* Entry: 107056350; end: 10705635f; -[SCMessageChatViewModel isUnseenMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107056350(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127634c4);
}



/* Entry: 107056360; end: 10705658f; -[SCMessageChatViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107056360(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112763518,0);
  _objc_storeStrong(param_1 + _DAT_11276351c,0);
  _objc_storeStrong(param_1 + _DAT_1127634f4,0);
  _objc_storeStrong(param_1 + _DAT_1127634ec,0);
  _objc_storeStrong(param_1 + _DAT_1127634f0,0);
  _objc_storeStrong(param_1 + _DAT_1127634e8,0);
  _objc_storeStrong(param_1 + _DAT_1127634cc,0);
  _objc_storeStrong(param_1 + _DAT_112763490,0);
  _objc_storeStrong(param_1 + _DAT_11276348c,0);
  _objc_storeStrong(param_1 + _DAT_1127634b0,0);
  _objc_storeStrong(param_1 + _DAT_1127634ac,0);
  _objc_storeStrong(param_1 + _DAT_1127634e4,0);
  _objc_storeStrong(param_1 + _DAT_112763510,0);
  _objc_storeStrong(param_1 + _DAT_112763454,0);
  _objc_storeStrong(param_1 + _DAT_112763494,0);
  _objc_storeStrong(param_1 + _DAT_112763488,0);
  _objc_storeStrong(param_1 + _DAT_112763480,0);
  _objc_storeStrong(param_1 + _DAT_112763484,0);
  _objc_storeStrong(param_1 + _DAT_11276347c,0);
  _objc_storeStrong(param_1 + _DAT_112763478,0);
  _objc_storeStrong(param_1 + _DAT_112763500,0);
  _objc_storeStrong(param_1 + _DAT_1127634fc,0);
  _objc_storeStrong(param_1 + _DAT_1127634b4,0);
  _objc_storeStrong(param_1 + _DAT_112763458,0);
  _objc_storeStrong(param_1 + _DAT_1127634d0,0);
  _objc_storeStrong(param_1 + _DAT_112763444,0);
  _objc_storeStrong(param_1 + _DAT_112763514,0);
  _objc_storeStrong(param_1 + _DAT_1127634a8,0);
  _objc_storeStrong(param_1 + _DAT_11276349c,0);
  _objc_storeStrong(param_1 + _DAT_112763498,0);
  _objc_storeStrong(param_1 + _DAT_1127634d8,0);
  _objc_storeStrong(param_1 + _DAT_1127634c8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112763520,0);
  return;
}



/* Entry: 107056590; end: 107056627; -[SCSavableItemChatViewModel initWithMessage:props:] */

undefined1 *
FUN_107056590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8650;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithMessage_props__1125e86f8,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c2175c0(puVar1);
    func_0x00010c1736e0(puVar1);
    func_0x00010c287c20(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107056628; end: 1070566ff; -[SCSavableItemChatViewModel isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107056628(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  long lStack_40;
  undefined *puStack_38;
  
  iVar2 = (int)&lStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8650;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_isEqual__1125fa0c8,param_3);
  if (iVar2 != 0) {
    _objc_opt_class(param_1);
    uVar4 = param_3;
    func_0x00010c077980();
    if ((int)uVar4 != 0) {
      _objc_retain(param_3);
      bVar1 = *(byte *)(param_1 + _DAT_112763524);
      uVar4 = param_3;
      func_0x00010c07d080();
      if ((uint)bVar1 == (uint)uVar4) {
        bVar1 = *(byte *)(param_1 + _DAT_112763528);
        uVar4 = param_3;
        func_0x00010c14b840(param_3);
        bVar3 = (uint)bVar1 == (uint)uVar4;
      }
      else {
        bVar3 = false;
      }
      _objc_release(param_3);
      goto LAB_1070566e0;
    }
  }
  bVar3 = false;
LAB_1070566e0:
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 107056700; end: 107056763; -[SCSavableItemChatViewModel isSavedByParticipant:] */

undefined8 FUN_107056700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0cb940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07d0e0();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107056764; end: 10705681b; -[SCSavableItemChatViewModel updateMessageState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107056764(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276352c);
  *(undefined8 *)(param_1 + _DAT_11276352c) = param_3;
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010c0cb940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c07d080();
  *(char *)(param_1 + _DAT_112763524) = (char)lVar3;
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c0cb940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf60940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c07d0e0(lVar2,param_2,lVar3);
  *(char *)(param_1 + _DAT_112763528) = (char)lVar4;
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10705681c; end: 1070568b3; -[SCSavableItemChatViewModel savedByUsers:snapchattersData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705681c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276352c);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf60940(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_107056bf4(uVar1,param_1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070568b4; end: 10705695f; -[SCSavableItemChatViewModel payloadContainerCornerRadii] */

void FUN_1070568b4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  func_0x00010c12f740();
  if ((int)uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010bf20220();
    uVar1 = 0xe;
    if ((int)uVar2 == 0) {
      uVar1 = 10;
    }
    uVar2 = param_1;
    func_0x00010c234240(param_1);
    uVar3 = param_1;
    func_0x00010c12f740(param_1);
    uVar4 = param_1;
    func_0x00010c07d080(param_1);
    uVar5 = param_1;
    func_0x00010c07d0c0(param_1);
    func_0x00010c07f920(param_1);
    FUN_10706df9c(uVar3,uVar4,uVar5,param_1,uVar1 | uVar2 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107056960; end: 1070569af; -[SCSavableItemChatViewModel cornerRadiusForSenderLine] */

undefined8 FUN_107056960(ulong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = (int)param_1;
  iVar2 = iVar1;
  func_0x00010c12f740();
  uVar3 = 0x4000000000000000;
  if (iVar2 != 0) {
    func_0x00010c14b840(0x4000000000000000);
    uVar3 = 0x4010000000000000;
    if ((param_1 & 1) == 0) {
      func_0x00010c07d080(0x4010000000000000);
      uVar3 = 0x4000000000000000;
      if (iVar1 == 0) {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}



/* Entry: 1070569b0; end: 107056a0b; -[SCSavableItemChatViewModel colorForBackground] */

void FUN_1070569b0(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010c07d080();
  puVar1 = PTR_PTR_1126cb578;
  if ((uVar2 & 1) == 0) {
    func_0x00010c12f740(param_1);
    func_0x00010c2824e0(puVar1,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c14b8a0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107056a0c; end: 107056a6b; -[SCSavableItemChatViewModel widthForSenderLine] */

undefined8 FUN_107056a0c(ulong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = (int)param_1;
  iVar2 = iVar1;
  func_0x00010c12f740();
  func_0x00010c14b840();
  iVar3 = (int)param_1;
  if (iVar2 == 0) {
    uVar4 = 0x4000000000000000;
    uVar5 = 0x4014000000000000;
  }
  else {
    if ((param_1 & 1) != 0) {
      return 0x4010000000000000;
    }
    iVar3 = iVar1;
    func_0x00010c07d080(0x4010000000000000);
    uVar4 = 0;
    uVar5 = 0x4000000000000000;
  }
  if (iVar3 == 0) {
    uVar5 = uVar4;
  }
  return uVar5;
}



/* Entry: 107056a6c; end: 107056a6f; -[SCSavableItemChatViewModel shouldShowSavedLabel] */

void FUN_107056a6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_savedByCurrentUser_112630830);
  return;
}



/* Entry: 107056a70; end: 107056a77; -[SCSavableItemChatViewModel shouldShowChatLabel] */

undefined8 FUN_107056a70(void)

{
  return 1;
}



/* Entry: 107056a78; end: 107056aaf; -[SCSavableItemChatViewModel shouldShowSaveOrUnsaveAnimation] */

uint FUN_107056a78(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010c07d880();
  if ((uVar2 & 1) == 0) {
    func_0x00010c0728e0(param_1);
    uVar1 = (uint)param_1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 107056ab0; end: 107056ab3; -[SCSavableItemChatViewModel containsAllSavedMessages] */

void FUN_107056ab0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07d090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isSaved_1125fce30);
  return;
}



/* Entry: 107056ab4; end: 107056acb; -[SCSavableItemChatViewModel savedColorForBackground] */

void FUN_107056ab4(void)

{
  func_0x00010c12f740();
  FUN_10706814c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107056acc; end: 107056ad3; +[SCSavableItemChatViewModel unsavedColorForBackground:] */

void FUN_107056acc(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x21;
  if (param_3 == 0) {
    uVar1 = 0x114;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107056ad4; end: 107056baf; -[SCSavableItemChatViewModel saveAnimationFromViewModel:] */

undefined8 FUN_107056ad4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = param_3;
    func_0x00010c0cb5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c0cb5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,uVar4);
    if ((uVar2 & 1) == 0) {
      _objc_release(uVar4);
      _objc_release(uVar1);
    }
    else {
      uVar2 = param_3;
      func_0x00010c14b840();
      uVar3 = param_1;
      func_0x00010c14b840();
      _objc_release(uVar4);
      _objc_release(uVar1);
      if ((int)uVar2 != (int)uVar3) {
        func_0x00010c14b840();
        uVar4 = 1;
        if ((int)param_1 == 0) {
          uVar4 = 2;
        }
        goto LAB_107056b90;
      }
    }
  }
  uVar4 = 0;
LAB_107056b90:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 107056bb0; end: 107056bbf; -[SCSavableItemChatViewModel isSaved] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107056bb0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112763524);
}



/* Entry: 107056bc0; end: 107056bcf; -[SCSavableItemChatViewModel savedByCurrentUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107056bc0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112763528);
}



/* Entry: 107056bd0; end: 107056bdf; -[SCSavableItemChatViewModel messageState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107056bd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276352c);
}



/* Entry: 107056be0; end: 107056bf3; -[SCSavableItemChatViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107056be0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276352c,0);
  return;
}



/* Entry: 107056bf4; end: 107056f63;  */

undefined8 ****
FUN_107056bf4(undefined8 ****param_1,undefined8 ****param_2,undefined8 ****param_3,
             undefined8 ****param_4)

{
  int iVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 unaff_x21;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  long lVar8;
  undefined8 ****unaff_x24;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ***pppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 ***pppuStack_198;
  undefined8 ***pppuStack_190;
  undefined8 ***pppuStack_188;
  undefined8 ***pppuStack_180;
  undefined8 uStack_178;
  undefined8 ***pppuStack_170;
  undefined8 ***pppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 ***pppuStack_150;
  undefined8 ***pppuStack_148;
  undefined8 **ppuStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 ***apppuStack_f8 [17];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar9 = param_3;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  pppuStack_148 = param_4;
  _objc_retain(param_4);
  ppppuVar7 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined8 ****)0x0) {
    _objc_retain(ppppuVar7);
    ppppuVar6 = ppppuVar7;
  }
  else {
    ppppuVar9 = param_1;
    func_0x00010c07d0e0();
    if ((int)ppppuVar9 != 0) {
      func_0x000107080d14();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(ppppuVar7);
      _objc_release(ppppuVar9);
    }
    if (param_3 == (undefined8 ****)0x0) {
      unaff_x24 = param_1;
      func_0x00010c14ba60();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppppuVar9 = param_3;
      func_0x00010c0ecc20();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = ppppuVar9;
      func_0x000100504554();
      _objc_release(ppppuVar9);
    }
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    ppuStack_140 = (undefined8 ***)0x0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    pppuStack_150 = ppppuVar7;
    _objc_retain(unaff_x24);
    ppppuVar9 = (undefined8 ****)&ppuStack_140;
    ppppuVar7 = unaff_x24;
    func_0x00010bf52a60();
    if (ppppuVar7 == (undefined8 ****)0x0) {
      unaff_x21 = 1;
    }
    else {
      lVar8 = *plStack_130;
      unaff_x21 = 1;
      do {
        ppppuVar9 = (undefined8 ****)0x0;
        do {
          if (*plStack_130 != lVar8) {
            _objc_enumerationMutation(unaff_x24);
          }
          ppppuVar10 = *(undefined8 *****)(lStack_138 + (long)ppppuVar9 * 8);
          ppppuVar6 = param_1;
          func_0x00010c07d0e0();
          if ((int)ppppuVar6 == 0) {
            unaff_x21 = 0;
          }
          else {
            _objc_retain(param_2);
            _objc_retain(ppppuVar10);
            ppppuVar6 = param_2;
            if (param_2 != ppppuVar10) {
              if (ppppuVar10 == (undefined8 ****)0x0) {
                _objc_release();
              }
              else {
                func_0x00010c071ae0();
                _objc_release(ppppuVar10);
                _objc_release(param_2);
                if (((ulong)ppppuVar6 & 1) != 0) goto LAB_107056e1c;
              }
              ppppuVar6 = (undefined8 ****)pppuStack_148;
              func_0x00010bd869d0(pppuStack_148,&PTR___NSConcreteGlobalBlock_11098cf80,
                                  &PTR___NSConcreteGlobalBlock_11098cfc0);
              func_0x000108ef37e4(ppppuVar10,param_3,ppppuVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(pppuStack_150);
            }
            _objc_release(ppppuVar10);
            _objc_release(ppppuVar6);
          }
LAB_107056e1c:
          ppppuVar9 = (undefined8 ****)((long)ppppuVar9 + 1);
        } while (ppppuVar7 != ppppuVar9);
        ppppuVar9 = (undefined8 ****)&ppuStack_140;
        ppppuVar7 = unaff_x24;
        func_0x00010bf52a60();
      } while (ppppuVar7 != (undefined8 ****)0x0);
    }
    _objc_release(unaff_x24);
    ppppuVar7 = (undefined8 ****)pppuStack_150;
    if (param_3 == (undefined8 ****)0x0) {
      ppppuVar10 = param_1;
      func_0x00010c14ba60();
      _objc_retainAutoreleasedReturnValue();
      param_4 = ppppuVar10;
      func_0x00010bf529e0();
      _objc_release();
      ppppuVar7 = (undefined8 ****)pppuStack_150;
    }
    else {
      ppppuVar10 = (undefined8 ****)pppuStack_150;
      func_0x00010bf529e0();
      param_4 = ppppuVar10;
    }
    if (((uint)unaff_x21 & (uint)((undefined8 ****)0x1 < param_4)) == 1) {
      func_0x000107080d2c();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar9 = apppuStack_f8;
      ppppuVar6 = (undefined8 ****)PTR__OBJC_CLASS___NSArray_1126ae530;
      apppuStack_f8[0] = ppppuVar10;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppppuVar10);
      param_4 = ppppuVar10;
    }
    else {
      ppppuVar6 = ppppuVar7;
      func_0x00010bf51e00();
    }
    _objc_release(unaff_x24);
  }
  _objc_release(ppppuVar7);
  _objc_release(pppuStack_148);
  _objc_release(param_3);
  _objc_release(param_2);
  ppppuVar10 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppppuVar6);
    return ppppuVar6;
  }
  ___stack_chk_fail();
  iVar1 = (int)&pppuStack_1b0;
  pcStack_158 = FUN_107056f64;
  pppuStack_1a0 = param_3;
  pppuStack_198 = ppppuVar6;
  pppuStack_190 = unaff_x24;
  pppuStack_188 = ppppuVar7;
  pppuStack_180 = param_2;
  uStack_178 = unaff_x21;
  pppuStack_170 = param_4;
  pppuStack_168 = param_1;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(ppppuVar9);
  puStack_1a8 = PTR_PTR_1126f8658;
  pppuStack_1b0 = ppppuVar10;
  _objc_msgSendSuper2(&pppuStack_1b0,PTR_s_isEqual__1125fa0c8,ppppuVar9);
  if (iVar1 == 0) {
    ppppuVar7 = (undefined8 ****)0x0;
  }
  else {
    _objc_retain(ppppuVar9);
    ppppuVar7 = ppppuVar10;
    func_0x00010c24d420();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar6 = ppppuVar7;
    func_0x00010bf529e0();
    ppppuVar2 = ppppuVar9;
    func_0x00010c24d420();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar3 = ppppuVar2;
    func_0x00010bf529e0();
    _objc_release(ppppuVar2);
    _objc_release(ppppuVar7);
    if (ppppuVar6 == ppppuVar3) {
      ppppuVar7 = ppppuVar10;
      func_0x00010c24d420();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar6 = ppppuVar7;
      func_0x00010bf529e0();
      _objc_release(ppppuVar7);
      if (ppppuVar6 == (undefined8 ****)0x0) {
        ppppuVar7 = (undefined8 ****)0x1;
      }
      else {
        ppppuVar6 = (undefined8 ****)0x0;
        do {
          ppppuVar2 = ppppuVar10;
          func_0x00010c24d420();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar3 = ppppuVar2;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar4 = ppppuVar9;
          func_0x00010c24d420(ppppuVar9);
          _objc_retainAutoreleasedReturnValue();
          ppppuVar5 = ppppuVar4;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar7 = ppppuVar3;
          func_0x00010c071ae0();
          _objc_release(ppppuVar5);
          _objc_release(ppppuVar4);
          _objc_release(ppppuVar3);
          _objc_release(ppppuVar2);
          if (((ulong)ppppuVar7 & 1) == 0) break;
          ppppuVar6 = (undefined8 ****)((long)ppppuVar6 + 1);
          ppppuVar2 = ppppuVar10;
          func_0x00010c24d420();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar3 = ppppuVar2;
          func_0x00010bf529e0();
          _objc_release(ppppuVar2);
        } while (ppppuVar6 < ppppuVar3);
      }
    }
    else {
      ppppuVar7 = (undefined8 ****)0x0;
    }
    _objc_release(ppppuVar9);
  }
  _objc_release(ppppuVar9);
  return ppppuVar7;
}



/* Entry: 107056f64; end: 107057133; -[SCStackedChatViewModel isEqual:] */

ulong FUN_107056f64(ulong param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uStack_60;
  undefined *puStack_58;
  
  iVar1 = (int)&uStack_60;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126f8658;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_isEqual__1125fa0c8,param_3);
  if (iVar1 == 0) {
    uVar7 = 0;
  }
  else {
    _objc_retain(param_3);
    uVar7 = param_1;
    func_0x00010c24d420();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010bf529e0();
    uVar2 = param_3;
    func_0x00010c24d420();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    _objc_release(uVar7);
    if (uVar6 == uVar3) {
      uVar7 = param_1;
      func_0x00010c24d420();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010bf529e0();
      _objc_release(uVar7);
      if (uVar6 == 0) {
        uVar7 = 1;
      }
      else {
        uVar6 = 0;
        do {
          uVar2 = param_1;
          func_0x00010c24d420();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_3;
          func_0x00010c24d420(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar3;
          func_0x00010c071ae0();
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar2);
          if ((uVar7 & 1) == 0) break;
          uVar6 = uVar6 + 1;
          uVar2 = param_1;
          func_0x00010c24d420();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010bf529e0();
          _objc_release(uVar2);
        } while (uVar6 < uVar3);
      }
    }
    else {
      uVar7 = 0;
    }
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 107057134; end: 10705731b; -[SCStackedChatViewModel saveAnimationFromViewModel:] */

undefined1 * FUN_107057134(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uStack_60;
  undefined *puStack_58;
  
  puVar7 = &uStack_60;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cb308;
  _objc_opt_class(PTR_PTR_1126cb308);
  uVar8 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar8 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar8 = param_3;
    func_0x00010c0cb5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c0cb5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar8);
    if ((int)uVar4 != 0) {
      uVar8 = param_3;
      func_0x00010c24d420();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      func_0x00010bf529e0();
      uVar4 = param_1;
      func_0x00010c24d420();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf529e0();
      _objc_release(uVar4);
      _objc_release(uVar8);
      if (uVar3 == uVar5) {
        uVar8 = param_1;
        func_0x00010c24d420();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar8;
        func_0x00010bf529e0();
        _objc_release(uVar8);
        if (uVar3 != 0) {
          uVar8 = 0;
          puVar6 = (undefined1 *)0x0;
          do {
            uVar3 = param_1;
            func_0x00010c077c60();
            uVar4 = param_3;
            func_0x00010c077c60();
            puVar7 = (ulong *)0x1;
            if ((int)uVar3 == 0) {
              puVar7 = (ulong *)0x2;
            }
            if ((int)uVar3 == (int)uVar4) {
              puVar7 = (ulong *)puVar6;
            }
            uVar8 = uVar8 + 1;
            uVar3 = param_1;
            func_0x00010c24d420();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010bf529e0();
            _objc_release(uVar3);
            puVar6 = (undefined1 *)puVar7;
          } while (uVar8 < uVar4);
          goto LAB_1070572ec;
        }
      }
      puVar7 = (ulong *)0x0;
      goto LAB_1070572ec;
    }
  }
  puStack_58 = PTR_PTR_1126f8658;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_saveAnimationFromViewModel__1126301d8,param_3);
LAB_1070572ec:
  _objc_release(uVar1);
  _objc_release(param_3);
  return (undefined1 *)puVar7;
}



/* Entry: 10705731c; end: 10705752f; -[SCStackedChatViewModel canStackMessage:lastDeletedSequenceNumber:] */

uint FUN_10705731c(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  uVar3 = param_1;
  func_0x00010c0c2500();
  _objc_release(uVar1);
  if (uVar3 <= uVar2) {
    uVar5 = 0;
    goto LAB_10705750c;
  }
  uVar1 = param_1;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar3);
  if (uVar1 == uVar3) {
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar1);
LAB_107057450:
    uVar1 = param_1;
    func_0x00010c0cb560();
    if ((int)uVar1 != 0) {
      uVar1 = param_3;
      func_0x00010c07d080();
      uVar3 = uVar2;
      func_0x00010c07d080();
      if ((int)uVar1 != (int)uVar3) goto LAB_107057500;
    }
    uVar1 = param_1;
    func_0x00010c120dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf529e0();
    if (uVar3 != 0) {
LAB_1070574f8:
      _objc_release(uVar1);
      goto LAB_107057500;
    }
    uVar3 = param_3;
    func_0x00010c120dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    _objc_release(uVar1);
    if (uVar4 != 0) goto LAB_107057500;
    uVar1 = param_1;
    func_0x00010c077c40(param_1,param_2,uVar2,param_4);
    func_0x00010c077c40(param_1,param_2,param_3,param_4);
    uVar5 = (uint)uVar1 ^ (uint)param_1 ^ 1;
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
      goto LAB_1070574f8;
    }
    uVar4 = uVar1;
    func_0x00010c071ae0(uVar1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar1);
    if ((uVar4 & 1) != 0) goto LAB_107057450;
LAB_107057500:
    uVar5 = 0;
  }
  _objc_release(uVar2);
LAB_10705750c:
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 107057530; end: 10705764b; -[SCStackedChatViewModel containsMessage:] */

long FUN_107057530(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *plStack_100;
    do {
      lVar3 = 0;
      do {
        if (*plStack_100 != lVar2) {
          _objc_enumerationMutation(param_1);
        }
        if (*(long *)(lStack_108 + lVar3 * 8) == param_3) {
          lVar2 = 1;
          goto LAB_107057604;
        }
        lVar3 = lVar3 + 1;
      } while (lVar1 != lVar3);
      lVar1 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
    lVar2 = 0;
  }
LAB_107057604:
  _objc_release(param_1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar2;
  }
  ___stack_chk_fail();
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c07d080();
  _objc_release(lVar2);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 10705764c; end: 1070576af; -[SCStackedChatViewModel isMessageSavedAtIndex:] */

undefined8 FUN_10705764c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07d080();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1070576b0; end: 10705773b; -[SCStackedChatViewModel isMessageSavedByCurrentUserAtIndex:] */

undefined8 FUN_1070576b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf60940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07d0e0(uVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10705773c; end: 107057873; -[SCStackedChatViewModel areAllMessagesSavedByCurrentUser] */

long FUN_10705773c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = auStack_d8;
  uVar5 = 0x10;
  lVar6 = lVar1;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  do {
    if (lVar6 == 0) {
      lVar6 = 1;
LAB_107057830:
      _objc_release(lVar1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return lVar6;
      }
      ___stack_chk_fail();
      _objc_retain(uVar5);
      _objc_retain(puVar4);
      lVar6 = lVar1;
      func_0x00010c0cbb20(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf60940(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar3;
      FUN_107056bf4(lVar3,lVar1,puVar4,uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(puVar4);
      _objc_release(lVar1);
      _objc_release(lVar3);
      _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
      return lVar8;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar1);
      }
      iVar7 = (int)*(undefined8 *)(lVar8 * 8);
      lVar2 = param_1;
      func_0x00010bf60940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07d0e0();
      _objc_release(lVar2);
      if (iVar7 == 0) {
        lVar6 = 0;
        goto LAB_107057830;
      }
      lVar8 = lVar8 + 1;
    } while (lVar6 != lVar8);
    puVar4 = auStack_d8;
    uVar5 = 0x10;
    lVar6 = lVar1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107057874; end: 107057943; -[SCStackedChatViewModel savedByUsersAtIndex:group:snapchattersData:] */

void FUN_107057874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0cbb20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf60940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_107056bf4(uVar2,param_1,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107057944; end: 107057973; -[SCStackedChatViewModel isMessage:sentBeforeSequenceNumber:] */

bool FUN_107057944(void)

{
  undefined **ppuVar1;
  undefined **in_x3;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9dd8;
  func_0x00010c282800(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9dd8);
  return ppuVar1 <= in_x3;
}



/* Entry: 107057974; end: 107057a13; -[SCStackedChatViewModel collectionViewCellDictionary] */

undefined8 FUN_107057974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 in_x5;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_2;
  func_0x00010bf40720();
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = uVar1;
  func_0x00010bf406c0();
  puVar5 = &uStack_38;
  uVar6 = 1;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_30 = param_2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return param_1;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar1 = param_3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_3);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar1;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar1);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar1 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  uVar3 = uVar1;
  _objc_retain(uVar4);
  _objc_retain(puVar5);
  _objc_retain(uVar6);
  _objc_retain(in_x5);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar1);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar1 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar6 = uVar1;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar1);
  _objc_exception_throw(puVar2);
  _objc_retain(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar6);
  _objc_exception_throw(puVar2);
  return 0;
}



/* Entry: 107057a14; end: 107057a67; -[SCStackedChatViewModel collectionViewCellClass] */

undefined8
FUN_107057a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
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
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
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
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar4);
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



/* Entry: 107057a68; end: 107057abb; -[SCStackedChatViewModel insetForCollectionViewCell] */

undefined8
FUN_107057a68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
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
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar4);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
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
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar4);
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



/* Entry: 107057abc; end: 107057b0f; -[SCStackedChatViewModel collectionViewCellReuseIdentifier] */

undefined8
FUN_107057abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
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
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar4);
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



/* Entry: 107057b10; end: 107057b97; -[SCStackedChatViewModel collectionView:cellForItemAtIndexPath:stackedCollectionCellActionDelegate:parentVC:] */

undefined8
FUN_107057b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
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
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar4);
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



/* Entry: 107057b98; end: 107057beb; -[SCStackedChatViewModel insetsForCollectionView] */

undefined8 FUN_107057b98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
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
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar4);
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



/* Entry: 107057bec; end: 107057c3f; -[SCStackedChatViewModel maxItemCapacityForCollectionView] */

undefined8 FUN_107057bec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar3);
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



/* Entry: 107057c40; end: 107057c9f; -[SCStackedChatViewModel sizeForItemAtIndexPath:] */

undefined8 FUN_107057c40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
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



/* Entry: 107057ca0; end: 107057ca7; -[SCStackedChatViewModel interitemSpacingBetweenCollectionViewCells] */

undefined8 FUN_107057ca0(void)

{
  return 0;
}



/* Entry: 107057ca8; end: 107057caf; -[SCStackedChatViewModel minimumLineSpacingInCollectionView] */

undefined8 FUN_107057ca8(void)

{
  return 0;
}



/* Entry: 107057cb0; end: 107057d1b; -[SCStackedChatViewModel collectionView:layout:insetForSectionAtIndex:] */

undefined8
FUN_107057cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
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



/* Entry: 107057d1c; end: 107057d23; -[SCStackedChatViewModel payloadVerticalMargin] */

undefined8 FUN_107057d1c(void)

{
  return 0;
}



/* Entry: 107057d24; end: 107057ef7; -[SCStackedChatViewModel updateMessageState:] */

void FUN_107057d24(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uStack_170;
  undefined *puStack_168;
  long lStack_160;
  ulong uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_f8 = PTR_PTR_1126f8658;
  lStack_100 = param_1;
  _objc_msgSendSuper2(&lStack_100,PTR_s_updateMessageState__11267f930,param_3);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  func_0x00010c24d420();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_130;
    do {
      lVar8 = 0;
      do {
        if (*plStack_130 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        puVar2 = PTR_PTR_1126cb578;
        uVar6 = *(ulong *)(lStack_138 + lVar8 * 8);
        _objc_retain(uVar6);
        _objc_opt_class(puVar2);
        uVar3 = uVar6;
        _objc_opt_isKindOfClass(uVar6,puVar2);
        uVar5 = uVar6;
        if ((uVar3 & 1) == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar6);
        uVar3 = uVar5;
        func_0x00010c0cb5a0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_3;
        func_0x00010bf490e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c071ae0();
        _objc_release(uVar6);
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          func_0x00010c287c20(uVar5);
        }
        _objc_release(uVar5);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = param_1;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_1);
  uVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_148 = FUN_107057ef8;
    uVar3 = uVar5;
    lStack_160 = param_1;
    uStack_158 = param_3;
    puStack_150 = &stack0xfffffffffffffff0;
    func_0x00010c12f740();
    if (((int)uVar3 == 0) && (uVar3 = uVar5, func_0x00010bf4b560(), (uVar3 & 1) != 0)) {
      puStack_168 = PTR_PTR_1126f8658;
      uStack_170 = uVar5;
      _objc_msgSendSuper2(&uStack_170,PTR_s_savedColorForBackground_112630848);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 107057ef8; end: 107057f7f; -[SCStackedChatViewModel savedColorForBackground] */

void FUN_107057ef8(ulong param_1)

{
  ulong uVar1;
  ulong uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c12f740();
  if (((int)uVar1 == 0) && (uVar1 = param_1, func_0x00010bf4b560(), (uVar1 & 1) != 0)) {
    puStack_28 = PTR_PTR_1126f8658;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_savedColorForBackground_112630848);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107057f80; end: 107058083; -[SCStackedChatViewModel containsAllSavedMessages] */

undefined * FUN_107057f80(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        iVar1 = (int)*(undefined8 *)(lStack_108 + lVar7 * 8);
        func_0x00010c07d080();
        if (iVar1 == 0) {
          puVar5 = (undefined *)0x0;
          goto LAB_107058044;
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_1;
      puVar3 = &uStack_110;
      func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  puVar5 = (undefined *)0x1;
LAB_107058044:
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0cb9a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f200(puVar5,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  FUN_107069e34();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 107058084; end: 1070580fb; -[SCStackedChatViewModel textForTimeLabelWithMessage:] */

void FUN_107058084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0cb9a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f200(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_107069e34();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070580fc; end: 107058163; -[SCStackedChatViewModel shouldShowSenderLine] */

void FUN_1070580fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c12f740();
  if ((int)uVar1 == 0) {
    puStack_28 = PTR_PTR_1126f8658;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_shouldShowSenderLine_11266aac0);
  }
  else {
    uVar1 = param_1;
    func_0x00010bf4b5e0();
    if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfdbdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hasSenderLine_1125d4938);
      return;
    }
  }
  return;
}



/* Entry: 107058164; end: 1070581c3; -[SCStackedChatViewModel widthForSenderLine] */

undefined8 FUN_107058164(ulong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = (int)param_1;
  iVar2 = iVar1;
  func_0x00010c12f740();
  func_0x00010bf4b620();
  iVar3 = (int)param_1;
  if (iVar2 == 0) {
    uVar4 = 0x4000000000000000;
    uVar5 = 0x4014000000000000;
  }
  else {
    if ((param_1 & 1) != 0) {
      return 0x4010000000000000;
    }
    iVar3 = iVar1;
    func_0x00010bf4b5e0(0x4010000000000000);
    uVar4 = 0;
    uVar5 = 0x4000000000000000;
  }
  if (iVar3 == 0) {
    uVar5 = uVar4;
  }
  return uVar5;
}



/* Entry: 1070581c4; end: 1070582fb; -[SCStackedChatViewModel containsAnyUserSavedMessage] */

ulong FUN_1070581c4(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar6 != 0) {
    uVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar2);
      }
      uVar7 = *(ulong *)(uVar8 * 8);
      uVar3 = param_1;
      func_0x00010bf60940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07d0e0();
      _objc_release(uVar3);
      if ((uVar7 & 1) != 0) {
        uVar6 = 1;
        goto LAB_1070582b8;
      }
      uVar8 = uVar8 + 1;
    } while (uVar6 != uVar8);
    uVar6 = uVar2;
    func_0x00010bf52a60();
  }
  uVar6 = 0;
LAB_1070582b8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar6 = 0;
  if (uVar8 != 0) {
    do {
      uVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar2);
        }
        uVar3 = *(ulong *)(uVar6 * 8);
        func_0x00010c07d080();
        if ((uVar3 & 1) != 0) {
          uVar6 = 1;
          goto LAB_1070583bc;
        }
        uVar6 = uVar6 + 1;
      } while (uVar8 != uVar6);
      uVar8 = uVar2;
      func_0x00010bf52a60();
    } while (uVar8 != 0);
    uVar6 = 0;
  }
LAB_1070583bc:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return uVar6;
  }
  ___stack_chk_fail();
  uVar6 = uVar2;
  func_0x00010c12f740();
  if ((int)uVar6 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar2;
    func_0x00010bf20220();
    uVar8 = 0xe;
    if ((int)uVar6 == 0) {
      uVar8 = 10;
    }
    uVar3 = uVar2;
    func_0x00010c234240(uVar2);
    uVar6 = uVar2;
    func_0x00010c12f740(uVar2);
    uVar7 = uVar2;
    func_0x00010bf4b5e0(uVar2);
    uVar4 = uVar2;
    func_0x00010bf4b620(uVar2);
    func_0x00010c07f920(uVar2);
    FUN_10706df9c(uVar6,uVar7,uVar4,uVar2,uVar8 | uVar3 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return uVar6;
}



/* Entry: 1070582fc; end: 1070583fb; -[SCStackedChatViewModel containsAnySavedMessage] */

ulong FUN_1070582fc(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar7 = 0;
  if (uVar2 != 0) {
    do {
      uVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar3 = *(ulong *)(uVar7 * 8);
        func_0x00010c07d080();
        if ((uVar3 & 1) != 0) {
          uVar7 = 1;
          goto LAB_1070583bc;
        }
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
      uVar2 = param_1;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
    uVar7 = 0;
  }
LAB_1070583bc:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    uVar7 = param_1;
    func_0x00010c12f740();
    if ((int)uVar7 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = param_1;
      func_0x00010bf20220();
      uVar2 = 0xe;
      if ((int)uVar7 == 0) {
        uVar2 = 10;
      }
      uVar3 = param_1;
      func_0x00010c234240(param_1);
      uVar7 = param_1;
      func_0x00010c12f740(param_1);
      uVar4 = param_1;
      func_0x00010bf4b5e0(param_1);
      uVar5 = param_1;
      func_0x00010bf4b620(param_1);
      func_0x00010c07f920(param_1);
      FUN_10706df9c(uVar7,uVar4,uVar5,param_1,uVar2 | uVar3 & 0xffffffff);
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return uVar7;
  }
  return uVar7;
}



/* Entry: 1070583fc; end: 1070584a7; -[SCStackedChatViewModel payloadContainerCornerRadii] */

void FUN_1070583fc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  func_0x00010c12f740();
  if ((int)uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010bf20220();
    uVar1 = 0xe;
    if ((int)uVar2 == 0) {
      uVar1 = 10;
    }
    uVar2 = param_1;
    func_0x00010c234240(param_1);
    uVar3 = param_1;
    func_0x00010c12f740(param_1);
    uVar4 = param_1;
    func_0x00010bf4b5e0(param_1);
    uVar5 = param_1;
    func_0x00010bf4b620(param_1);
    func_0x00010c07f920(param_1);
    FUN_10706df9c(uVar3,uVar4,uVar5,param_1,uVar1 | uVar2 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070584a8; end: 1070585ef; -[SCStackedChatViewModel messages] */

void FUN_1070584a8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar9 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010be989c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar11 = *plStack_110;
    do {
      lVar12 = 0;
      do {
        if (*plStack_110 != lVar11) {
          _objc_enumerationMutation(param_1);
        }
        uVar4 = *(undefined8 *)(lStack_118 + lVar12 * 8);
        func_0x00010c0cb140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar4);
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      lVar3 = param_1;
      puVar9 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_1);
  puVar5 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    uVar4 = param_2;
    _objc_retain(puVar9);
    puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2803a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    _objc_release(param_2);
    _objc_exception_throw(puVar2);
    puVar5 = PTR__OBJC_CLASS___NSException_1126af520;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2803a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    _objc_release(uVar4);
    _objc_exception_throw();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010c24d420();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (puVar2 != (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(puVar5);
        }
        puVar7 = PTR_PTR_1126cb578;
        uVar10 = *(ulong *)((long)puVar13 * 8);
        _objc_retain(uVar10);
        _objc_opt_class(puVar7);
        uVar8 = uVar10;
        _objc_opt_isKindOfClass(uVar10,puVar7);
        uVar1 = uVar10;
        if ((uVar8 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar10);
        if (uVar1 != 0) {
          func_0x00010befa120(puVar6);
        }
        _objc_release(uVar1);
        puVar13 = puVar13 + 1;
      } while (puVar2 != puVar13);
      puVar2 = puVar5;
      func_0x00010bf52a60();
    }
    _objc_release(puVar5);
    puVar5 = puVar6;
    func_0x00010bf51e00(puVar6);
    _objc_release(puVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c014570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1070585f0; end: 10705864f; -[SCStackedChatViewModel addStackedViewModelFromMessage:] */

void FUN_1070585f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  
  uVar4 = param_2;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar3);
  puVar5 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar4);
  _objc_exception_throw();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010c24d420();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar5;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar5);
      }
      puVar7 = PTR_PTR_1126cb578;
      uVar10 = *(ulong *)((long)puVar11 * 8);
      _objc_retain(uVar10);
      _objc_opt_class(puVar7);
      uVar8 = uVar10;
      _objc_opt_isKindOfClass(uVar10,puVar7);
      uVar1 = uVar10;
      if ((uVar8 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar10);
      if (uVar1 != 0) {
        func_0x00010befa120(puVar6);
      }
      _objc_release(uVar1);
      puVar11 = puVar11 + 1;
    } while (puVar3 != puVar11);
    puVar3 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  puVar3 = puVar6;
  func_0x00010bf51e00(puVar6);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c014570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107058650; end: 1070586a3; -[SCStackedChatViewModel stackedViewModels] */

void FUN_107058650(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  
  puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010c24d420();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar3);
      }
      puVar6 = PTR_PTR_1126cb578;
      uVar9 = *(ulong *)((long)puVar10 * 8);
      _objc_retain(uVar9);
      _objc_opt_class(puVar6);
      uVar7 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar6);
      uVar1 = uVar9;
      if ((uVar7 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar9);
      if (uVar1 != 0) {
        func_0x00010befa120(puVar4);
      }
      _objc_release(uVar1);
      puVar10 = puVar10 + 1;
    } while (puVar5 != puVar10);
    puVar5 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  puVar5 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c014570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1070586a4; end: 107058823; -[SCStackedChatViewModel _savableMessages] */

void FUN_1070586a4(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010c24d420();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      puVar5 = PTR_PTR_1126cb578;
      uVar8 = *(ulong *)(lVar9 * 8);
      _objc_retain(uVar8);
      _objc_opt_class(puVar5);
      uVar6 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar5);
      uVar1 = uVar8;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar8);
      if (uVar1 != 0) {
        func_0x00010befa120(puVar3);
      }
      _objc_release(uVar1);
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar5 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c014570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107058824; end: 10705882b; -[SCBaseMediaCardView initWithFrame:] */

void FUN_107058824(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c014570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFrame_hasBorder__1125e2b28,1);
  return;
}



/* Entry: 10705882c; end: 1070588df; -[SCBaseMediaCardView initWithFrame:hasBorder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10705882c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8660;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(char *)((long)puVar1 + (long)_DAT_112763530) = (char)param_3;
    if (param_3 == 0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar1);
    }
    else {
      func_0x00010bed5820(puVar1);
      puVar2 = (undefined *)puVar1;
      func_0x00010c22a660(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bdd00(0x3fe0000000000000);
    }
    _objc_release(puVar2);
  }
  return (undefined *)puVar1;
}



/* Entry: 1070588e0; end: 1070589a3; -[SCBaseMediaCardView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070588e0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f8660;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  if (*(char *)(param_1 + _DAT_112763530) == '\x01') {
    lVar1 = param_1;
    func_0x00010bf14480(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    lVar2 = param_1;
    func_0x00010c22a660(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112763534);
    func_0x00010bf20c00(param_1);
    func_0x00010c122080(uVar3);
  }
  return;
}



/* Entry: 1070589a4; end: 1070589eb; -[SCBaseMediaCardView traitCollectionDidChange:] */

void FUN_1070589a4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f8660;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bed5820(param_1);
  return;
}



/* Entry: 1070589ec; end: 107058a1f; -[SCBaseMediaCardView backgroundShapePath] */

void FUN_1070589ec(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00();
                    /* WARNING: Could not recover jumptable at 0x00010bf199f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_bezierPathWithRoundedRect_byRoun_1125a4020,0xffffffffffffffff);
  return;
}



/* Entry: 107058a20; end: 107058b0f; -[SCBaseMediaCardView _updateColors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107058a20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  lVar2 = param_1;
  func_0x00010c22a660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(lVar2);
  _objc_release(puVar1);
  if ((*(byte *)(param_1 + _DAT_112763538) & 1) == 0) {
    puVar1 = PTR_PTR_1126d4338;
    func_0x00010bfce100(PTR_PTR_1126d4338);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c22a660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107058b10; end: 107058b63; -[SCBaseMediaCardView height] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107058b10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c2803a0();
  uVar4 = (uint)uVar5;
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  if ((byte)puVar1[_DAT_112763538] == uVar4) {
    return;
  }
  puVar1[_DAT_112763538] = (char)uVar4;
  lVar6 = (long)_DAT_112763534;
  lVar2 = *(long *)(puVar1 + lVar6);
  if (uVar4 == 0) {
    if (lVar2 == 0) {
      return;
    }
    uVar5 = 1;
  }
  else {
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126cb8f8;
      _objc_alloc();
      func_0x00010bff9300(0x3ff0000000000000,0x4014000000000000);
      uVar5 = *(undefined8 *)(puVar1 + lVar6);
      *(undefined **)(puVar1 + lVar6) = puVar3;
      _objc_release(uVar5);
      func_0x00010c22a660(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
    uVar5 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_setHidden__1126479f8,uVar5);
  return;
}



/* Entry: 107058b64; end: 107058c33; -[SCBaseMediaCardView setDisplayPlusGoldBorder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107058b64(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(byte *)(param_1 + _DAT_112763538) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112763538) = (char)param_3;
  lVar4 = (long)_DAT_112763534;
  lVar1 = *(long *)(param_1 + lVar4);
  if (param_3 == 0) {
    if (lVar1 == 0) {
      return;
    }
    uVar3 = 1;
  }
  else {
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126cb8f8;
      _objc_alloc();
      func_0x00010bff9300(0x3ff0000000000000,0x4014000000000000);
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar2;
      _objc_release(uVar3);
      func_0x00010c22a660(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_setHidden__1126479f8,uVar3);
  return;
}



/* Entry: 107058c34; end: 107058c37; +[SCBaseMediaCardView grayFrameColor] */

void FUN_107058c34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xad);
  return;
}



/* Entry: 107058c38; end: 107058c4b; -[SCBaseMediaCardView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107058c38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112763534,0);
  return;
}



/* Entry: 107058c4c; end: 107058fd3; -[SCChatComposerContextHolderView initWithViewEventDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107058c4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_90 = PTR_PTR_1126f8668;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_11276353c,param_3);
    puVar2 = PTR_PTR_1126b1870;
    _objc_alloc();
    func_0x00010c0639c0();
    lVar11 = (long)_DAT_112763540;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar2;
    _objc_release(uVar8);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar11));
    _objc_initWeak(auStack_a0,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_a8,auStack_a0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763544);
    *(undefined **)((long)puVar1 + (long)_DAT_112763544) = puVar2;
    _objc_release(uVar8);
    func_0x00010befbb60(puVar1);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar11);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bfe0660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_112763548;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = uVar8;
    _objc_release(uVar9);
    _objc_release(puVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar11);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c2a5060(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_11276354c;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = uVar8;
    _objc_release(uVar9);
    _objc_release(puVar4);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uStack_88 = *(undefined8 *)((long)puVar1 + lVar10);
    uStack_80 = *(undefined8 *)((long)puVar1 + lVar12);
    uVar9 = *(undefined8 *)((long)puVar1 + lVar11);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf348e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar8;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar11);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf34860(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar7);
    _objc_release(uVar3);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar8);
    _objc_release(puVar4);
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_a0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  __Unwind_Resume(param_3);
  puVar1 = (undefined8 *)(param_3 + 0x20);
  _objc_loadWeakRetained(puVar1);
  puVar4 = puVar1;
  func_0x00010bdeb7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 107058fd4; end: 107059013;  */

void FUN_107058fd4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeb7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107059014; end: 1070590a7; -[SCChatComposerContextHolderView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107059014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f8668;
  lStack_40 = param_5;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  uVar1 = *(undefined8 *)(param_5 + _DAT_112763544);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_5);
  func_0x00010c1842c0(param_3,param_4,uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 1070590a8; end: 107059267; -[SCChatComposerContextHolderView setContextWrapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070590a8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112763554;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  if (param_3 == uVar3) {
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar3);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_10705914c;
    }
    func_0x00010c2bd700(param_3);
    func_0x00010beaa340(param_1);
  }
LAB_10705914c:
  if (*(ulong *)(param_1 + lVar4) != param_3) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    uVar3 = param_3;
    func_0x00010c295200(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c194900();
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c295200(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea2d40(param_1);
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0e31e0(uVar2);
    func_0x00010c1cbe20(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107059268; end: 1070592f7;  */

void FUN_107059268(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1070592f8;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1070592f8; end: 107059323;  */

void FUN_1070592f8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed5900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107059324; end: 107059367; -[SCChatComposerContextHolderView prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107059324(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763554;
  func_0x00010c0e31e0(*(undefined8 *)(param_1 + lVar2),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bea2d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setComposerContext__1125864f8,0);
  return;
}



/* Entry: 107059368; end: 1070593cb; -[SCChatComposerContextHolderView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107059368(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  lVar1 = (long)_DAT_112763554;
  if ((*(long *)(param_4 + lVar1) != 0) && (func_0x00010bf20c00(), 0.0 < param_3)) {
    uVar2 = *(undefined8 *)(param_4 + lVar1);
    func_0x00010bf20c00(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bf4d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,uVar2,PTR_s_contentSizeForMaxWidth__1125b0f40);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = param_3;
    return auVar3;
  }
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 1070593cc; end: 10705949b; -[SCChatComposerContextHolderView didChangeVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070593cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112763554;
  if (*(long *)(param_1 + lVar5) != 0) {
    lVar1 = param_1 + _DAT_11276353c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c101c60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c0cb5a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c101d80(lVar2,param_2,uVar3,uVar4,param_3);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10705949c; end: 1070595b7; -[SCChatComposerContextHolderView _setWrapWithBubble:] */

/* WARNING: Possible PIC construction at 0x000107059594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107059598) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705949c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112763544);
  if (param_3 == 0) {
    func_0x00010bfe6360(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    puVar3 = *(undefined **)(param_1 + _DAT_112763550);
    *(undefined8 *)(param_1 + _DAT_112763550) = 0;
    uVar1 = 0;
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126d4330;
    puVar3 = PTR_PTR_1126d4328;
    _objc_alloc(PTR_PTR_1126d4328);
    func_0x00010c054260(0x4020000000000000,0x4020000000000000,0x4020000000000000,0x4020000000000000)
    ;
    func_0x00010bfb23a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + _DAT_112763550);
    *(undefined **)(param_1 + _DAT_112763550) = puVar2;
    _objc_release(uVar1);
    uVar1 = 0xc030000000000000;
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + _DAT_112763548),PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 1070595b8; end: 10705984f; -[SCChatComposerContextHolderView _createBubbleView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070595b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = PTR_PTR_1126d4310;
  _objc_opt_new();
  func_0x00010c219b60();
  puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar16,param_2,puVar12);
  _objc_release(puVar12);
  func_0x00010c1a7f60(puVar16,param_2,1);
  func_0x00010c066fe0(param_1,param_2,puVar16,*(undefined8 *)(param_1 + _DAT_112763540));
  puVar12 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar1 = puVar16;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf493a0(puVar1,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar16;
  puStack_88 = puVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c2a5060(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf493a0(puVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar16;
  puStack_80 = puVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493a0(puVar6,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar16;
  puStack_78 = puVar8;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf493a0(puVar9,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010beef8c0(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(param_1);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar14);
  lVar15 = (long)_DAT_112763558;
  puVar12 = *(undefined **)(puVar1 + lVar15);
  if (puVar12 != puVar14) {
    if (puVar12 != (undefined *)0x0) {
      func_0x00010c141780();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = *(undefined **)(puVar1 + _DAT_112763540);
      _objc_release();
      if (puVar12 == puVar16) {
        func_0x00010c1ee6c0(*(undefined8 *)(puVar1 + lVar15),param_2,0);
      }
    }
    _objc_retain(puVar14);
    uVar13 = *(undefined8 *)(puVar1 + lVar15);
    *(undefined **)(puVar1 + lVar15) = puVar14;
    _objc_release(uVar13);
    func_0x00010c1ee6c0(*(undefined8 *)(puVar1 + lVar15),param_2,
                        *(undefined8 *)(puVar1 + _DAT_112763540));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar14);
  return;
}



/* Entry: 107059850; end: 1070598fb; -[SCChatComposerContextHolderView _setComposerContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107059850(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112763558;
  lVar1 = *(long *)(param_1 + lVar3);
  if (lVar1 != param_3) {
    if (lVar1 != 0) {
      func_0x00010c141780();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(param_1 + _DAT_112763540);
      _objc_release();
      if (lVar1 == lVar4) {
        func_0x00010c1ee6c0(*(undefined8 *)(param_1 + lVar3),param_2,0);
      }
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010c1ee6c0(*(undefined8 *)(param_1 + lVar3),param_2,
                        *(undefined8 *)(param_1 + _DAT_112763540));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070598fc; end: 10705998b; -[SCChatComposerContextHolderView _updateComposerContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070598fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112763554;
  lVar1 = *(long *)(param_1 + lVar3);
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    func_0x00010bfe1300();
  }
  func_0x00010c1a7f60(param_1,param_2,lVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c295200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea2d40(param_1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c069fa0(param_1);
  func_0x00010c262ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10705998c; end: 107059a27; -[SCChatComposerContextHolderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705998c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276354c,0);
  _objc_storeStrong(param_1 + _DAT_112763548,0);
  _objc_storeStrong(param_1 + _DAT_112763550,0);
  _objc_storeStrong(param_1 + _DAT_112763554,0);
  _objc_storeStrong(param_1 + _DAT_112763544,0);
  _objc_storeStrong(param_1 + _DAT_112763558,0);
  _objc_storeStrong(param_1 + _DAT_112763540,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11276353c);
  return;
}



/* Entry: 107059a28; end: 107059b2f;  */

void FUN_107059a28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107059b30;
  uStack_40 = 0x107059b40;
  uStack_38 = 0;
  func_0x00010c0bf880(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107059b30; end: 107059b47;  */

void FUN_107059b30(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107059b48; end: 107059baf;  */

void FUN_107059b48(double param_1,double param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  param_1 = param_1 * *(double *)(param_3 + 0x28);
  if (param_2 <= param_1) {
    param_1 = param_2;
  }
  puVar1 = PTR_PTR_1126d4328;
  _objc_alloc();
  func_0x00010c054260(param_1,param_1,param_1,param_1);
  lVar3 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107059bb0; end: 107059be7;  */

void FUN_107059bb0(long param_1,undefined8 param_2)

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



/* Entry: 107059be8; end: 107059cc7;  */

byte FUN_107059be8(long param_1)

{
  byte bVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  if (param_1 == 0) {
    bVar1 = 0;
  }
  else {
    puStack_38 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    uStack_28 = 0;
    func_0x00010c0bf880(param_1);
    bVar1 = *(byte *)(puStack_38 + 3);
    __Block_object_dispose(&uStack_40,8);
  }
  _objc_release(param_1);
  return bVar1 & 1;
}



/* Entry: 107059cc8; end: 107059ceb;  */

void FUN_107059cc8(double param_1,long param_2)

{
  *(bool *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = param_1 <= 1.0 && 0.0 < param_1;
  return;
}



/* Entry: 107059cec; end: 107059d77;  */

void FUN_107059cec(double param_1,long param_2,long param_3)

{
  bool bVar1;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c2745a0(param_3);
    if (((param_1 == 0.0) && (func_0x00010c274880(param_3), param_1 == 0.0)) &&
       (func_0x00010bf20260(param_3), param_1 == 0.0)) {
      func_0x00010bf20420(param_3);
      bVar1 = param_1 != 0.0;
    }
    else {
      bVar1 = true;
    }
  }
  *(bool *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = bVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


