/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106256160; end: 10625635f; -[SCSpotlightRepliesApproveRejectAllButtonView _setupView] */

/* WARNING: Possible PIC construction at 0x000106256330: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106256334) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106256160(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  func_0x00010c1a7f60(param_1,param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc_init();
  lVar4 = (long)_DAT_112744098;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c207380(0x403e000000000000,*(undefined8 *)(param_1 + lVar4));
  func_0x00010c190b80(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(param_1);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11274409c;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x000106261bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar3);
  _objc_release(uVar2);
  func_0x00010c16e480(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c216380(*(undefined8 *)(param_1 + lVar6));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_1127440a0;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x000106261ba8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar3);
  _objc_release(uVar2);
  func_0x00010c16e480(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c216380(*(undefined8 *)(param_1 + lVar5));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010befbd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar6),PTR_s_addTarget_action_forControlEvent_11259c900,
             param_1,PTR_s__rejectAllTapped_11252ff00,0x40);
  return;
}



/* Entry: 106256360; end: 1062565af; -[SCSpotlightRepliesApproveRejectAllButtonView _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106256360(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_112744098;
  lVar1 = *(long *)(param_1 + lVar11);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf49480(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c1e3380(0x437a0000,lVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf49520(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar4);
  func_0x00010c1e3380(0x437a0000,uVar5);
  uVar6 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf493c0(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(uVar6);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(puVar8);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(lVar3 + _DAT_112744094);
  func_0x00010bfa9c80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar3 + _DAT_112744090);
  uVar5 = uVar4;
  FUN_106255f7c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar10);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1062565b0; end: 106256637; -[SCSpotlightRepliesApproveRejectAllButtonView _rejectAllTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062565b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744094);
  func_0x00010bfa9c80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112744090);
  uVar2 = uVar1;
  FUN_106255f7c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106256638; end: 1062566bf; -[SCSpotlightRepliesApproveRejectAllButtonView _approveAllTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106256638(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744094);
  func_0x00010bfa9c80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112744090);
  uVar2 = uVar1;
  FUN_106255f7c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062566c0; end: 10625679f; -[SCSpotlightRepliesApproveRejectAllButtonView didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_1062566c0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((((uVar1 & 1) != 0) || (uVar1 = param_3, func_0x00010c0720c0(), (uVar1 & 1) != 0)) ||
     (uVar1 = param_3, func_0x00010c0720c0(), (int)uVar1 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1062567a0;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1062567a0; end: 1062567cb;  */

void FUN_1062567a0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be35fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062567cc; end: 106256807; -[SCSpotlightRepliesApproveRejectAllButtonView _hideViewIfNoRepliesPending] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062567cc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112744094);
  func_0x00010c1317a0(lVar1,param_2,4);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHidden__1126479f8,lVar1 == 0);
  return;
}



/* Entry: 106256808; end: 106256817; -[SCSpotlightRepliesApproveRejectAllButtonView rejectAllButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106256808(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274409c);
}



/* Entry: 106256818; end: 106256827; -[SCSpotlightRepliesApproveRejectAllButtonView approveAllButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106256818(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127440a0);
}



/* Entry: 106256828; end: 106256897; -[SCSpotlightRepliesApproveRejectAllButtonView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106256828(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112744094,0);
  _objc_storeStrong(param_1 + _DAT_112744090,0);
  _objc_storeStrong(param_1 + _DAT_112744098,0);
  _objc_storeStrong(param_1 + _DAT_11274409c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127440a0,0);
  return;
}



/* Entry: 106256898; end: 10625699b; -[SCSpotlightRepliesCommentSharePreviewView initWithCommentPosterDisplayName:replyTimestampMs:commentContentString:replyPosterUserId:avatarImage:attachmentImage:] */

undefined1 *
FUN_106256898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f0970;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb1160(puVar1);
    func_0x00010beaf200(puVar1);
    func_0x00010beabac0(puVar1);
    func_0x00010beb1680(param_1,puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10625699c; end: 106256a6b; -[SCSpotlightRepliesCommentSharePreviewView updateAvatarImage:] */

void FUN_10625699c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106256a6c;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106256a6c; end: 106256a9f;  */

void FUN_106256a6c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed38a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106256aa0; end: 106256aaf; -[SCSpotlightRepliesCommentSharePreviewView _updateAvatarImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106256aa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127440a4),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 106256ab0; end: 106256b7f; -[SCSpotlightRepliesCommentSharePreviewView updateAttachmentImage:] */

void FUN_106256ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106256b80;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106256b80; end: 106256bb3;  */

void FUN_106256b80(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed3440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106256bb4; end: 106256c1f; -[SCSpotlightRepliesCommentSharePreviewView _updateAttachmentImage:] */

/* WARNING: Possible PIC construction at 0x000106256bfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106256c00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106256bb4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    lVar1 = (long)_DAT_1127440a8;
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar1));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0x4046800000000000,*(undefined8 *)(param_1 + _DAT_1127440ac),
               PTR_s_setConstant__11263de70);
    return;
  }
  return;
}



/* Entry: 106256c20; end: 106256cc7; -[SCSpotlightRepliesCommentSharePreviewView _setupPriority] */

/* WARNING: Possible PIC construction at 0x000106256c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106256c90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106256c70) */
/* WARNING: Removing unreachable block (ram,0x000106256c94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106256c20(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127440b4;
  func_0x00010c181f00(0x447a0000,*(undefined8 *)(param_1 + lVar1),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c181cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x437a0000,*(undefined8 *)(param_1 + lVar1),
             PTR_s_setContentCompressionResistanceP_11263e150,0);
  return;
}



/* Entry: 106256cc8; end: 106256e87; -[SCSpotlightRepliesCommentSharePreviewView _setupWithCommentPosterDisplayName:replyTimestampMs:commentContentString:replyPosterUserId:avatarImage:attachmentImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106256cc8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar3 = *(long *)(param_2 + _DAT_1127440c0);
  _objc_retain(param_8);
  func_0x00010c212f20();
  func_0x00010623d78c(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_2 + _DAT_1127440bc));
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + _DAT_1127440b8));
  }
  uVar4 = *(undefined8 *)(param_2 + _DAT_1127440b4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x000106261c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(uVar4);
    _objc_release(lVar1);
  }
  else {
    func_0x00010c212f20(uVar4);
  }
  if (param_7 == 0) {
    uVar4 = param_6;
    func_0x000108ffe710(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0;
    func_0x000108ffef38(0,uVar4,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_2 + _DAT_1127440a4));
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
  else {
    func_0x00010c1a9f00(*(undefined8 *)(param_2 + _DAT_1127440a4));
  }
  func_0x00010bed3440(param_2);
  _objc_release(param_8);
  _objc_release(lVar3);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106256e88; end: 10625737f; -[SCSpotlightRepliesCommentSharePreviewView _setupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106256e88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined *puVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined *puVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined *puVar55;
  long lVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  
  lVar56 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  lVar59 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(lVar59);
  func_0x00010c17d4c0(param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar59 = (long)_DAT_1127440c4;
  uVar57 = *(undefined8 *)(param_1 + lVar59);
  *(undefined **)(param_1 + lVar59) = puVar1;
  _objc_release(uVar57);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar59));
  uVar57 = *(undefined8 *)(param_1 + lVar59);
  func_0x00010c08c0e0(uVar57);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4034000000000000);
  _objc_release(uVar57);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar59));
  _objc_release(puVar1);
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar60 = (long)_DAT_1127440a4;
  uVar57 = *(undefined8 *)(param_1 + lVar60);
  *(undefined **)(param_1 + lVar60) = puVar1;
  _objc_release(uVar57);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar60));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar60));
  uVar57 = *(undefined8 *)(param_1 + lVar60);
  func_0x00010c08c0e0(uVar57);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4034000000000000);
  _objc_release(uVar57);
  uVar57 = *(undefined8 *)(param_1 + lVar60);
  func_0x00010c08c0e0(uVar57);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar57);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar59));
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar61 = (long)_DAT_1127440b4;
  uVar57 = *(undefined8 *)(param_1 + lVar61);
  *(undefined **)(param_1 + lVar61) = puVar1;
  _objc_release(uVar57);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar61));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar61));
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSShadow_1126b6158;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fdccccccccccccd,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740(puVar1);
  _objc_release(puVar2);
  func_0x00010c1fe7a0(0,0,puVar1);
  func_0x00010c1fe720(0x4018000000000000,puVar1);
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar62 = (long)_DAT_1127440b8;
  uVar57 = *(undefined8 *)(param_1 + lVar62);
  *(undefined **)(param_1 + lVar62) = puVar2;
  _objc_release(uVar57);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar62));
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar2);
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar62));
  _objc_release(puVar2);
  _objc_release(puVar3);
  func_0x00010befbb60(param_1);
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar60 = (long)_DAT_1127440bc;
  uVar57 = *(undefined8 *)(param_1 + lVar60);
  *(undefined **)(param_1 + lVar60) = puVar2;
  _objc_release(uVar57);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar60));
  func_0x00010befbb60(param_1);
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar63 = (long)_DAT_1127440c0;
  uVar57 = *(undefined8 *)(param_1 + lVar63);
  *(undefined **)(param_1 + lVar63) = puVar2;
  _objc_release(uVar57);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar63));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar63));
  func_0x00010befbb60(param_1);
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar59 = (long)_DAT_1127440a8;
  uVar57 = *(undefined8 *)(param_1 + lVar59);
  *(undefined **)(param_1 + lVar59) = puVar2;
  _objc_release(uVar57);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar59));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar59));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar59));
  func_0x00010befbb60(param_1);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar63));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar61));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar62));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar60));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar61));
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar62));
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar60));
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar63));
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar56) {
    return;
  }
  ___stack_chk_fail();
  lVar59 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar60 = (long)_DAT_1127440a4;
  uVar4 = *(undefined8 *)(puVar1 + lVar60);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = (long)_DAT_1127440c4;
  uVar5 = *(undefined8 *)(puVar1 + lVar56);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar57 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar1 + lVar60);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar1 + lVar56);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar50 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar1 + lVar60);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar1 + lVar56);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(puVar1 + lVar60);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar1 + lVar56);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar58 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar1 + lVar56);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = uVar12;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(puVar1 + lVar56);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar53 = uVar13;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(puVar1 + lVar56);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar54 = uVar14;
  func_0x00010bf493c0(0x401c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(puVar1 + lVar56);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(puVar1 + lVar56);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar17;
  func_0x00010bf49520(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar60 = (long)_DAT_1127440b4;
  uVar20 = *(undefined8 *)(puVar1 + lVar60);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(puVar1 + lVar56);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar20;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(puVar1 + lVar60);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(puVar1 + lVar56);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar23;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = (long)_DAT_1127440b8;
  uVar26 = *(undefined8 *)(puVar1 + lVar61);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(puVar1 + lVar60);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar26;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(puVar1 + lVar61);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(puVar1 + lVar60);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar29;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = (long)_DAT_1127440bc;
  uVar32 = *(undefined8 *)(puVar1 + lVar62);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(puVar1 + lVar61);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar32;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)(puVar1 + lVar62);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = *(undefined8 *)(puVar1 + lVar61);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar35;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = *(undefined8 *)(puVar1 + lVar62);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar39 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar38;
  func_0x00010bf49520(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar61 = (long)_DAT_1127440c0;
  uVar41 = *(undefined8 *)(puVar1 + lVar61);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = *(undefined8 *)(puVar1 + lVar60);
  func_0x00010bf1ff80(uVar42);
  _objc_retainAutoreleasedReturnValue();
  uVar43 = uVar41;
  func_0x00010bf493c0(0x4004000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar44 = *(undefined8 *)(puVar1 + lVar61);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = *(undefined8 *)(puVar1 + lVar56);
  func_0x00010c2793a0(uVar45);
  _objc_retainAutoreleasedReturnValue();
  uVar46 = uVar44;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar47 = *(undefined8 *)(puVar1 + lVar61);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar48 = puVar1;
  func_0x00010c2793a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar49 = uVar47;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar55 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar49);
  _objc_release(puVar48);
  _objc_release(uVar47);
  _objc_release(uVar46);
  _objc_release(uVar45);
  _objc_release(uVar44);
  _objc_release(uVar43);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(puVar39);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(puVar3);
  _objc_release(uVar15);
  _objc_release(uVar54);
  _objc_release(puVar2);
  _objc_release(uVar14);
  _objc_release(uVar53);
  _objc_release(uVar13);
  _objc_release(uVar52);
  _objc_release(uVar12);
  _objc_release(uVar58);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar51);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar50);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar57);
  _objc_release(uVar5);
  _objc_release(uVar4);
  lVar56 = (long)_DAT_1127440a8;
  uVar50 = *(undefined8 *)(puVar1 + lVar56);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = *(undefined8 *)(puVar1 + lVar61);
  func_0x00010bf1ff80(uVar51);
  _objc_retainAutoreleasedReturnValue();
  uVar57 = uVar50;
  func_0x00010bf493c0(0);
  _objc_retainAutoreleasedReturnValue();
  uVar58 = *(undefined8 *)(puVar1 + _DAT_1127440b0);
  *(undefined8 *)(puVar1 + _DAT_1127440b0) = uVar57;
  _objc_release(uVar58);
  _objc_release(uVar51);
  _objc_release(uVar50);
  uVar50 = *(undefined8 *)(puVar1 + lVar56);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar57 = uVar50;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  uVar51 = *(undefined8 *)(puVar1 + _DAT_1127440ac);
  *(undefined8 *)(puVar1 + _DAT_1127440ac) = uVar57;
  _objc_release(uVar51);
  _objc_release(uVar50);
  uVar58 = *(undefined8 *)(puVar1 + lVar56);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = *(undefined8 *)(puVar1 + lVar61);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar50 = uVar58;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar53 = *(undefined8 *)(puVar1 + lVar56);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = uVar53;
  func_0x00010bf49420(0x4046800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar54 = *(undefined8 *)(puVar1 + lVar56);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar57 = uVar54;
  func_0x00010bf493c0(0xc01c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar57);
  _objc_release(puVar1);
  _objc_release(uVar54);
  _objc_release(uVar51);
  _objc_release(uVar53);
  _objc_release(uVar50);
  _objc_release(uVar52);
  _objc_release(uVar58);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(puVar2);
  _objc_release(puVar55);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar59) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar55 + _DAT_1127440b0,0);
  _objc_storeStrong(puVar55 + _DAT_1127440ac,0);
  _objc_storeStrong(puVar55 + _DAT_1127440a8,0);
  _objc_storeStrong(puVar55 + _DAT_1127440c0,0);
  _objc_storeStrong(puVar55 + _DAT_1127440bc,0);
  _objc_storeStrong(puVar55 + _DAT_1127440b8,0);
  _objc_storeStrong(puVar55 + _DAT_1127440b4,0);
  _objc_storeStrong(puVar55 + _DAT_1127440c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar55 + _DAT_1127440a4,0);
  return;
}



/* Entry: 106257380; end: 106257d4f; -[SCSpotlightRepliesCommentSharePreviewView _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106257380(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined *puVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined *puVar53;
  long lVar54;
  undefined8 uVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  
  lVar54 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar57 = (long)_DAT_1127440a4;
  uVar1 = *(undefined8 *)(param_1 + lVar57);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = (long)_DAT_1127440c4;
  uVar2 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar57);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar48 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar57);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar49 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar57);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar55 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar50 = uVar10;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = uVar11;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = uVar12;
  func_0x00010bf493c0(0x401c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar13;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar16;
  func_0x00010bf49520(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar58 = (long)_DAT_1127440b4;
  uVar19 = *(undefined8 *)(param_1 + lVar58);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar19;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar58);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar22;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = (long)_DAT_1127440b8;
  uVar25 = *(undefined8 *)(param_1 + lVar59);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar58);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar25;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + lVar59);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar58);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar28;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar60 = (long)_DAT_1127440bc;
  uVar31 = *(undefined8 *)(param_1 + lVar60);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_1 + lVar59);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = uVar31;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = *(undefined8 *)(param_1 + lVar60);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)(param_1 + lVar59);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar34;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = *(undefined8 *)(param_1 + lVar60);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = uVar37;
  func_0x00010bf49520(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar60 = (long)_DAT_1127440c0;
  uVar39 = *(undefined8 *)(param_1 + lVar60);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = *(undefined8 *)(param_1 + lVar58);
  func_0x00010bf1ff80(uVar40);
  _objc_retainAutoreleasedReturnValue();
  uVar41 = uVar39;
  func_0x00010bf493c0(0x4004000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar42 = *(undefined8 *)(param_1 + lVar60);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010c2793a0(uVar43);
  _objc_retainAutoreleasedReturnValue();
  uVar44 = uVar42;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar45 = *(undefined8 *)(param_1 + lVar60);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar46 = uVar45;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar47 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar46);
  _objc_release(lVar56);
  _objc_release(uVar45);
  _objc_release(uVar44);
  _objc_release(uVar43);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(lVar59);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(lVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(uVar13);
  _objc_release(uVar52);
  _objc_release(lVar57);
  _objc_release(uVar12);
  _objc_release(uVar51);
  _objc_release(uVar11);
  _objc_release(uVar50);
  _objc_release(uVar10);
  _objc_release(uVar55);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar49);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar48);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar57 = (long)_DAT_1127440a8;
  uVar48 = *(undefined8 *)(param_1 + lVar57);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar49 = *(undefined8 *)(param_1 + lVar60);
  func_0x00010bf1ff80(uVar49);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar48;
  func_0x00010bf493c0(0);
  _objc_retainAutoreleasedReturnValue();
  uVar55 = *(undefined8 *)(param_1 + _DAT_1127440b0);
  *(undefined8 *)(param_1 + _DAT_1127440b0) = uVar3;
  _objc_release(uVar55);
  _objc_release(uVar49);
  _objc_release(uVar48);
  uVar48 = *(undefined8 *)(param_1 + lVar57);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar48;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  uVar49 = *(undefined8 *)(param_1 + _DAT_1127440ac);
  *(undefined8 *)(param_1 + _DAT_1127440ac) = uVar3;
  _objc_release(uVar49);
  _objc_release(uVar48);
  uVar55 = *(undefined8 *)(param_1 + lVar57);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar50 = *(undefined8 *)(param_1 + lVar60);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar48 = uVar55;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = *(undefined8 *)(param_1 + lVar57);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar49 = uVar51;
  func_0x00010bf49420(0x4046800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar52 = *(undefined8 *)(param_1 + lVar57);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar52;
  func_0x00010bf493c0(0xc01c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar53 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar52);
  _objc_release(uVar49);
  _objc_release(uVar51);
  _objc_release(uVar48);
  _objc_release(uVar50);
  _objc_release(uVar55);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(puVar53);
  _objc_release(puVar47);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar54) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar47 + _DAT_1127440b0,0);
  _objc_storeStrong(puVar47 + _DAT_1127440ac,0);
  _objc_storeStrong(puVar47 + _DAT_1127440a8,0);
  _objc_storeStrong(puVar47 + _DAT_1127440c0,0);
  _objc_storeStrong(puVar47 + _DAT_1127440bc,0);
  _objc_storeStrong(puVar47 + _DAT_1127440b8,0);
  _objc_storeStrong(puVar47 + _DAT_1127440b4,0);
  _objc_storeStrong(puVar47 + _DAT_1127440c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar47 + _DAT_1127440a4,0);
  return;
}



/* Entry: 106257d50; end: 106257dff; -[SCSpotlightRepliesCommentSharePreviewView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106257d50(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127440b0,0);
  _objc_storeStrong(param_1 + _DAT_1127440ac,0);
  _objc_storeStrong(param_1 + _DAT_1127440a8,0);
  _objc_storeStrong(param_1 + _DAT_1127440c0,0);
  _objc_storeStrong(param_1 + _DAT_1127440bc,0);
  _objc_storeStrong(param_1 + _DAT_1127440b8,0);
  _objc_storeStrong(param_1 + _DAT_1127440b4,0);
  _objc_storeStrong(param_1 + _DAT_1127440c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127440a4,0);
  return;
}



/* Entry: 106257e00; end: 106257f53; -[SCSpotlightRepliesHighlightingCommentView initWithCommentPosterDisplayName:replyTimestampMs:commentContentString:replyPosterUserId:avatarImage:attachmentImage:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106257e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f0978;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127440c8),param_9);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010beb1500(param_1,puVar1);
    func_0x00010beabaa0(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106257f54; end: 106257f63; -[SCSpotlightRepliesHighlightingCommentView updateAvatarImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106257f54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c283af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127440cc),PTR_s_updateAvatarImage__11267e8e0);
  return;
}



/* Entry: 106257f64; end: 106257f73; -[SCSpotlightRepliesHighlightingCommentView updateAttachmentImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106257f64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c283790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127440cc),PTR_s_updateAttachmentImage__11267e808);
  return;
}



/* Entry: 106257f74; end: 106258213; -[SCSpotlightRepliesHighlightingCommentView _setupViewsWithCommentPosterDisplayName:replyTimestampMs:commentContentString:replyPosterUserId:avatarImage:attachmentImage:] */

/* WARNING: Possible PIC construction at 0x0001062580b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001062580bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106257f74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new();
  lVar3 = (long)_DAT_1127440d0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  func_0x00010c181f00(0x443b8000,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c181cc0(0x443b8000,*(undefined8 *)(param_1 + lVar3));
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 106258214; end: 1062585f7; -[SCSpotlightRepliesHighlightingCommentView _setupConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106258214(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_3,
                      &PTR____CFConstantStringClassReference_110e461b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar25 = (long)_DAT_1127440cc;
  lVar2 = *(long *)(param_2 + lVar25);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493c0(0x4024000000000000,lVar2,param_3,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + lVar25);
  lStack_c0 = lVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493c0(0xc024000000000000,uVar5,param_3,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + lVar25);
  uStack_b8 = uVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493c0(0x4024000000000000,uVar8,param_3,lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_1127440d0;
  uVar11 = *(undefined8 *)(param_2 + lVar26);
  uStack_b0 = uVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_2 + lVar25);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493c0(0x4024000000000000,uVar11,param_3,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_2 + lVar26);
  uStack_a8 = uVar13;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_2 + lVar25);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493a0(uVar14,param_3,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_2 + lVar26);
  uStack_a0 = uVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_2;
  func_0x00010c2793a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bf493c0(0xc024000000000000,uVar17,param_3,lVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_2 + lVar26);
  uStack_98 = uVar18;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar19;
  func_0x00010bf493c0(0xc024000000000000,uVar19,param_3,lVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_2 + lVar26);
  uStack_90 = uVar21;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010bf49420(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_c0,8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_3,puVar24);
  _objc_release(puVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(lVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(lVar25);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = lVar2 + _DAT_1127440c8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf7cea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1062585f8; end: 10625862b; -[SCSpotlightRepliesHighlightingCommentView _didTapOnCancelReplyButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062585f8(long param_1)

{
  param_1 = param_1 + _DAT_1127440c8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7cea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10625862c; end: 106258677; -[SCSpotlightRepliesHighlightingCommentView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625862c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127440c8);
  _objc_storeStrong(param_1 + _DAT_1127440d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127440cc,0);
  return;
}



/* Entry: 106258678; end: 106258a83; -[SCSpotlightRepliesInputView initWithBitmojiSelfieProvider:avatarProvider:userID:repliesLogger:repliesFetcher:repliesActionsConfig:commentsSnapReplyActionsConfig:commentPosterThumbnailFetcher:circumstanceEngine:storiesConfigProvider:commentsStickerPickerExposer:creatorAvatarId:commentsAttachmentFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106258678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126f0980;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c9208;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127440dc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127440dc) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127440e0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127440e0) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127440e4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127440e4) = puVar2;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_1127440e8;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_1127440ec;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_1127440f0;
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_1127440f4;
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_1127440f8;
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127440fc) = 5;
    func_0x00010c22e040();
    func_0x00010c185100(puVar1);
    lVar5 = (long)_DAT_112744100;
    _objc_retain(param_10);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112744104);
    *(undefined **)((long)puVar1 + (long)_DAT_112744104) = puVar2;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112744108;
    _objc_retain(param_8);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11274410c;
    _objc_retain(param_9);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112744110;
    _objc_retain(param_11);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_11;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112744114;
    _objc_retain(param_13);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_13;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112744118;
    _objc_retain(param_15);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_15;
    _objc_release(uVar4);
    uVar4 = param_12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf1c3e0();
    *(char *)((long)puVar1 + (long)_DAT_11274411c) = (char)uVar3;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112744120;
    _objc_retain(param_14);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_14;
    _objc_release(uVar4);
    func_0x00010beb14e0(puVar1);
    func_0x00010beabac0(puVar1);
    func_0x00010be10080(puVar1);
    func_0x00010bdea300(puVar1);
    func_0x00010beb0b40(puVar1);
    func_0x00010beb0b40(puVar1);
  }
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



/* Entry: 106258a84; end: 106258d43; -[SCSpotlightRepliesInputView _createAccessoryStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106258a84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  lVar15 = (long)_DAT_112744128;
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar14);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15),param_2,0);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar15),param_2,1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar15));
  lVar2 = *(long *)(param_1 + lVar15);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c1e3380(0x437a0000,lVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  uStack_90 = uVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar15);
  uStack_88 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_112744124);
  func_0x00010c274200(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar15);
  uStack_80 = uVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar12;
  lStack_70 = lVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_90,5);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar16;
  func_0x00010beef8c0(puVar1,param_2,puVar16);
  _objc_release(puVar16);
  _objc_release(uVar12);
  _objc_release(param_1);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar14);
  _objc_release(lVar2);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar16 = *(undefined **)(lVar3 + _DAT_112744104);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(puVar16,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar16 == (undefined *)0x0) {
    puVar16 = PTR_PTR_1126b0870;
    _objc_alloc_init(PTR_PTR_1126b0870);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar16,param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010befc520(lVar3,param_2,puVar16,puVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 106258d44; end: 106258e07; -[SCSpotlightRepliesInputView topAccessoryViewWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106258d44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = *(undefined **)(param_1 + _DAT_112744104);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b0870;
    _objc_alloc_init(PTR_PTR_1126b0870);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2,param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010befc520(param_1,param_2,puVar2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106258e08; end: 10625904f; -[SCSpotlightRepliesInputView addTopAccessoryView:type:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_106258e08(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112744128;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_1a0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_1a0 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        uVar5 = *(undefined8 *)(lStack_1a8 + lVar8 * 8);
        func_0x00010c12b280(*(undefined8 *)(param_1 + lVar6),param_2,uVar5);
        func_0x00010c12c960(uVar5);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  lVar8 = (long)_DAT_112744104;
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar5,param_2,param_3,puVar3);
  _objc_release(puVar3);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  lVar2 = param_1;
  func_0x00010bebf2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar9 = *plStack_1e0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1e0 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        lVar4 = *(long *)(param_1 + lVar8);
        func_0x00010c0e00e0(lVar4,param_2,*(undefined8 *)(lStack_1e8 + lVar10 * 8));
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar6),param_2,lVar4);
        }
        _objc_release(lVar4);
        lVar10 = lVar10 + 1;
      } while (lVar7 != lVar10);
      lVar7 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_1f0,auStack_170,0x10);
    } while (lVar7 != 0);
  }
  _objc_release(lVar2);
  func_0x00010c1cbf40(param_1);
  func_0x00010c1cbe20(param_1);
  _objc_release(lVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  return &PTR__OBJC_CLASS___NSConstantArray_111180800;
}



/* Entry: 106259050; end: 10625905b; -[SCSpotlightRepliesInputView _stackViewOrderedArray] */

undefined ** FUN_106259050(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_111180800;
}



/* Entry: 10625905c; end: 106259067; -[SCSpotlightRepliesInputView removeTopAccessoryViewType:] */

void FUN_10625905c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010befc530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addTopAccessoryView_type__11259caf0,0,param_3);
  return;
}



/* Entry: 106259068; end: 1062590f7; -[SCSpotlightRepliesInputView dismissKeyboard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106259068(long param_1)

{
  int iVar1;
  long lVar2;
  
  func_0x00010c13a0e0(*(undefined8 *)(param_1 + _DAT_11274412c));
  lVar2 = (long)_DAT_112744130;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c07d660();
  if (iVar1 != 0) {
    func_0x00010c1fadc0(*(undefined8 *)(param_1 + lVar2));
    lVar2 = param_1 + _DAT_112744134;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c24bec0();
    _objc_release(lVar2);
    func_0x00010be8d5e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be590d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logStickerDrawerEventOpen__112573dd0,0);
    return;
  }
  return;
}



/* Entry: 1062590f8; end: 1062590ff; -[SCSpotlightRepliesInputView setViewModel:] */

void FUN_1062590f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setViewModel_forceUpdate__1126663f0,param_3,0);
  return;
}



/* Entry: 106259100; end: 10625931b; -[SCSpotlightRepliesInputView setViewModel:forceUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106259100(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c9180;
  _objc_opt_class(PTR_PTR_1126c9180);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar5 = uVar1;
  func_0x00010c0f3b40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112744138);
  *(ulong *)(param_1 + _DAT_112744138) = uVar5;
  _objc_release(uVar4);
  uVar5 = uVar1;
  func_0x00010c0f3b60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274413c);
  *(ulong *)(param_1 + _DAT_11274413c) = uVar5;
  _objc_release(uVar4);
  uVar5 = uVar1;
  func_0x00010c0f3b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010be433e0();
  _objc_release(uVar5);
  if ((int)lVar6 != 0) {
    func_0x00010bf179a0(*(undefined8 *)(param_1 + _DAT_11274412c));
  }
  if ((param_4 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + _DAT_112744140);
    _objc_retain(uVar5);
    _objc_retain(param_3);
    if (uVar5 == param_3) {
      _objc_release(param_3);
      _objc_release(uVar5);
      goto LAB_1062592f0;
    }
    if (param_3 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_1062592f0;
    }
  }
  uVar5 = uVar1;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112744140);
  *(ulong *)(param_1 + _DAT_112744140) = uVar5;
  _objc_release(uVar4);
  uVar5 = uVar1;
  func_0x00010c0fda20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11274412c;
  func_0x00010c1dc9c0(*(undefined8 *)(param_1 + lVar6));
  _objc_release(uVar5);
  uVar5 = uVar1;
  func_0x00010bf6a6e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6));
  _objc_release(uVar5);
  uVar5 = uVar1;
  func_0x00010bf6a6e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedb900(param_1);
  _objc_release(uVar5);
  func_0x00010c1cbe20(param_1);
LAB_1062592f0:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10625931c; end: 10625934b; -[SCSpotlightRepliesInputView textDidChangeEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625931c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127440e0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10625934c; end: 10625935b; -[SCSpotlightRepliesInputView emitTextDidChangeWithRepliesInputTextEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625934c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127440e0),PTR_s_next__112614028);
  return;
}



/* Entry: 10625935c; end: 106259543; -[SCSpotlightRepliesInputView addNewMention:replacementRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625935c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar5 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcf4b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  lVar9 = (long)_DAT_11274412c;
  lVar2 = *(long *)(param_1 + lVar9);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08fa60();
  puVar3 = puVar1;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (puVar3 + (lVar4 - param_5) < (undefined *)0xfb) {
    func_0x00010be673e0(param_1,param_2,puVar1,*(undefined8 *)(param_1 + lVar9),param_4,param_5);
    lVar4 = *(long *)(param_1 + lVar9);
    func_0x00010bf193c0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c1042e0(uVar5,param_2,lVar4,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c1042e0(uVar6,param_2,uVar5,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c26c600(uVar7,param_2,uVar5,uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1310a0(*(undefined8 *)(param_1 + lVar9),param_2,uVar7,puVar1);
    func_0x00010bef9c40(*(undefined8 *)(param_1 + _DAT_1127440dc),param_2,param_3);
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c26b700(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedb900(param_1,param_2,uVar8);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  else {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24bf00();
    lVar4 = param_1;
  }
  _objc_release(lVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106259544; end: 10625965f; -[SCSpotlightRepliesInputView _updateMentionRenderingForText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106259544(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_1127440dc;
  if (*(long *)(param_1 + lVar6) != 0) {
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      func_0x00010c12ada0(*(undefined8 *)(param_1 + lVar6));
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010b87f3b0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bfb3e40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010bf004a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      FUN_10623bf4c(param_3,puVar2,puVar4,uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11274412c));
      _objc_release(lVar6);
      _objc_release(uVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106259660; end: 10625966b; -[SCSpotlightRepliesInputView _isReplyingToCommentWithParentCommentId:] */

bool FUN_106259660(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0;
}



/* Entry: 10625966c; end: 106259b6f; -[SCSpotlightRepliesInputView _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625966c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar6 = (long)_DAT_112744124;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar2);
  func_0x00010befbb60(param_1);
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar7 = (long)_DAT_112744144;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar2;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar7));
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127440e8);
  func_0x000108ffe710(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  func_0x000108ffef38(0,uVar4,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar7));
  _objc_release(uVar3);
  _objc_release(uVar4);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar6));
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  dVar10 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),dVar10,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar7 = (long)_DAT_112744148;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar2;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar7));
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4034000000000000);
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar7));
  _objc_release(puVar2);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar6));
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar5 = (long)_DAT_11274414c;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4034000000000000);
  _objc_release(uVar4);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar6));
  puVar2 = PTR_PTR_1126c9210;
  _objc_alloc_init();
  lVar6 = (long)_DAT_11274412c;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release(uVar4);
  func_0x00010c2134a0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c2034c0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c203420(*(undefined8 *)(param_1 + lVar6));
  uVar4 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  lVar7 = (long)_DAT_1127440dc;
  if ((int)uVar4 != 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c1ad0c0(uVar4);
  }
  if (*(long *)(param_1 + lVar7) == 0) {
    func_0x000106261da0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000106261db8();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1dc9c0(*(undefined8 *)(param_1 + lVar6));
  _objc_release(uVar4);
  func_0x00010c1dca60(*(undefined8 *)(param_1 + lVar6));
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c1dcaa0(uVar3);
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar6));
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar2);
  func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c1edbe0(*(undefined8 *)(param_1 + lVar6));
  dVar8 = 5.0;
  func_0x00010c165aa0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar5));
  *(undefined8 *)(param_1 + _DAT_112744150) = 0x4044000000000000;
  func_0x00010c26ba40(*(undefined8 *)(param_1 + lVar6));
  dVar9 = dVar8;
  func_0x00010c26ba40(*(undefined8 *)(param_1 + lVar6));
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bfb3a80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  *(double *)(param_1 + _DAT_112744154) = (double)(float)(int)(dVar8 + dVar10 + dVar9 * 3.0);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126c9218;
  _objc_alloc();
  func_0x00010bff4b20();
  lVar7 = (long)_DAT_112744158;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar2;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar7));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar5));
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11274410c);
  func_0x00010bf91280();
  if (iVar1 != 0) {
    func_0x00010beab500(param_1);
  }
  func_0x00010bea99c0(param_1);
  func_0x00010bea9680(param_1);
  if (*(char *)(param_1 + _DAT_11274411c) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bea9ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setUpStickerDrawerButton_112588050);
    return;
  }
  return;
}



/* Entry: 106259b70; end: 106259b8b; -[SCSpotlightRepliesInputView inputViewHeight] */

double FUN_106259b70(double param_1)

{
  func_0x00010becb800();
  return param_1 + 20.0;
}



/* Entry: 106259b8c; end: 106259eb7; -[SCSpotlightRepliesInputView _setupCameraButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106259b8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_11274415c;
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar13);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar15),param_2,
                      &PTR____CFConstantStringClassReference_110e461f8);
  puVar2 = PTR_PTR_1126b0c40;
  func_0x00010bfe7b00(0x4031800000000000,0x4031800000000000,PTR_PTR_1126b0c40,param_2,0x65,0x52);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(*(undefined8 *)(param_1 + lVar15),param_2,puVar2,0);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar15),param_2,0);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar15),param_2,param_1,
                      PTR_s__cameraButtonTapped_11252ff28,0x40);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,99);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar15),param_2,puVar1);
  _objc_release(puVar1);
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08c0e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4031800000000000);
  _objc_release(uVar13);
  lVar14 = (long)_DAT_112744124;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar14),param_2,*(undefined8 *)(param_1 + lVar15));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010bf493c0(0xc02c000000000000,uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  uStack_98 = uVar13;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11274412c);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493c0(*(double *)(param_1 + _DAT_112744150) * 0.5,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar15);
  uStack_90 = uVar7;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49420(0x4041800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar15);
  uStack_88 = uVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf49420(0x4041800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar13);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_112744160;
  uVar13 = *(undefined8 *)(puVar2 + lVar15);
  *(undefined **)(puVar2 + lVar15) = puVar1;
  _objc_release(uVar13);
  func_0x00010c160fc0(*(undefined8 *)(puVar2 + lVar15),param_2,
                      &PTR____CFConstantStringClassReference_110e46218);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e46238);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  func_0x00010bfe77e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c1a9fc0(*(undefined8 *)(puVar2 + lVar15),param_2,puVar12,0);
  func_0x00010c219b60(*(undefined8 *)(puVar2 + lVar15),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(puVar2 + lVar15),param_2,1);
  func_0x00010befbd60(*(undefined8 *)(puVar2 + lVar15),param_2,puVar2,
                      PTR_s__sendCommentFromButton_11252ff30,0x40);
  lVar14 = (long)_DAT_112744124;
  func_0x00010befbb60(*(undefined8 *)(puVar2 + lVar14),param_2,*(undefined8 *)(puVar2 + lVar15));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(puVar2 + lVar15);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(puVar2 + lVar14);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010bf493c0(0xc02c000000000000,uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar2 + lVar15);
  uStack_148 = uVar13;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar2 + _DAT_11274412c);
  func_0x00010c274200(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493c0(*(double *)(puVar2 + _DAT_112744150) * 0.5,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar2 + lVar15);
  uStack_140 = uVar7;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49420(0x4041800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(puVar2 + lVar15);
  uStack_138 = uVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf49420(0x4041800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_130 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_148,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar13);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar14 = (long)_DAT_112744164;
  uVar13 = *(undefined8 *)(puVar12 + lVar14);
  *(undefined **)(puVar12 + lVar14) = puVar1;
  _objc_release(uVar13);
  puVar1 = PTR_PTR_1126b0c40;
  func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40,param_2,0x48,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(puVar12 + lVar14),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(puVar12 + lVar14),param_2,0);
  func_0x00010c182220(*(undefined8 *)(puVar12 + lVar14),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar15 = (long)_DAT_112744168;
  uVar13 = *(undefined8 *)(puVar12 + lVar15);
  *(undefined **)(puVar12 + lVar15) = puVar1;
  _objc_release(uVar13);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(puVar12 + lVar15),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(*(undefined8 *)(puVar12 + lVar15),param_2,puVar1);
  func_0x00010c21e900(*(undefined8 *)(puVar12 + lVar15),param_2,1);
  func_0x00010c219b60(*(undefined8 *)(puVar12 + lVar15),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(puVar12 + lVar15),param_2,
                      &PTR____CFConstantStringClassReference_110e46258);
  func_0x00010befbb60(*(undefined8 *)(puVar12 + _DAT_11274414c),param_2,
                      *(undefined8 *)(puVar12 + lVar15));
  func_0x00010befbb60(*(undefined8 *)(puVar12 + lVar15),param_2,*(undefined8 *)(puVar12 + lVar14));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106259eb8; end: 10625a19b; -[SCSpotlightRepliesInputView _setUpSendButtonV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106259eb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_112744160;
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar13);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar15),param_2,
                      &PTR____CFConstantStringClassReference_110e46218);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e46238);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe77e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c1a9fc0(*(undefined8 *)(param_1 + lVar15),param_2,puVar2,0);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar15),param_2,1);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar15),param_2,param_1,
                      PTR_s__sendCommentFromButton_11252ff30,0x40);
  lVar14 = (long)_DAT_112744124;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar14),param_2,*(undefined8 *)(param_1 + lVar15));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010bf493c0(0xc02c000000000000,uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  uStack_98 = uVar13;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11274412c);
  func_0x00010c274200(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493c0(*(double *)(param_1 + _DAT_112744150) * 0.5,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar15);
  uStack_90 = uVar7;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49420(0x4041800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar15);
  uStack_88 = uVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf49420(0x4041800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar13);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar14 = (long)_DAT_112744164;
  uVar13 = *(undefined8 *)(puVar2 + lVar14);
  *(undefined **)(puVar2 + lVar14) = puVar1;
  _objc_release(uVar13);
  puVar1 = PTR_PTR_1126b0c40;
  func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40,param_2,0x48,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(puVar2 + lVar14),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(puVar2 + lVar14),param_2,0);
  func_0x00010c182220(*(undefined8 *)(puVar2 + lVar14),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar15 = (long)_DAT_112744168;
  uVar13 = *(undefined8 *)(puVar2 + lVar15);
  *(undefined **)(puVar2 + lVar15) = puVar1;
  _objc_release(uVar13);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(puVar2 + lVar15),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(*(undefined8 *)(puVar2 + lVar15),param_2,puVar1);
  func_0x00010c21e900(*(undefined8 *)(puVar2 + lVar15),param_2,1);
  func_0x00010c219b60(*(undefined8 *)(puVar2 + lVar15),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(puVar2 + lVar15),param_2,
                      &PTR____CFConstantStringClassReference_110e46258);
  func_0x00010befbb60(*(undefined8 *)(puVar2 + _DAT_11274414c),param_2,
                      *(undefined8 *)(puVar2 + lVar15));
  func_0x00010befbb60(*(undefined8 *)(puVar2 + lVar15),param_2,*(undefined8 *)(puVar2 + lVar14));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10625a19c; end: 10625a31b; -[SCSpotlightRepliesInputView _setUpMentionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625a19c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar3 = (long)_DAT_112744164;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b0c40;
  func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40,param_2,0x48,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar3),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_112744168;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4),param_2,1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4),param_2,
                      &PTR____CFConstantStringClassReference_110e46258);
  func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_11274414c),param_2,
                      *(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar4),param_2,*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10625a31c; end: 10625a6c7; -[SCSpotlightRepliesInputView _updateMentionRangesForFinalTextToBeSent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625a31c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + _DAT_11274412c);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain();
  func_0x00010c2a4bc0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c06a520();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c11f340();
  _objc_release(lVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  lVar13 = (long)_DAT_1127440dc;
  lVar6 = *(long *)(param_1 + lVar13);
  func_0x00010bf004a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010bf529e0();
  _objc_release(lVar6);
  if (lVar2 != 0 && lVar5 != 0) {
    lVar6 = param_3;
    func_0x00010623ba90();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar7 = *(long *)(param_1 + lVar13);
    func_0x00010bf004a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
joined_r0x00010625a468:
    if (lVar5 == 0) {
      _objc_release(lVar7);
      func_0x00010c28ca00(*(undefined8 *)(param_1 + lVar13));
    }
    else {
      lVar15 = 0;
LAB_10625a488:
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar7);
      }
      uVar16 = *(undefined8 *)(lVar15 * 8);
      puVar4 = PTR_PTR_1126c0ed8;
      func_0x00010c24c000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f2a0(uVar16);
      func_0x00010c11f2a0(uVar16);
      func_0x00010c2b66e0(puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar8 = puVar4;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      _objc_retain(lVar6);
      _objc_retain(lVar6);
      lVar9 = lVar6;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar9 != 0) {
        lVar14 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar6);
          }
          puVar10 = *(undefined **)(lVar14 * 8);
          func_0x00010c11f2a0();
          puVar11 = puVar8;
          func_0x00010c11f2a0();
          if (puVar10 == puVar11) {
            _objc_release(lVar6);
            _objc_release(lVar6);
            _objc_release(puVar8);
            func_0x00010befa120(puVar3);
            _objc_release(puVar8);
            _objc_release(puVar4);
            lVar15 = lVar15 + 1;
            if (lVar15 != lVar5) goto LAB_10625a488;
            lVar5 = lVar7;
            func_0x00010bf52a60();
            goto joined_r0x00010625a468;
          }
          lVar14 = lVar14 + 1;
        } while (lVar9 != lVar14);
        lVar9 = lVar6;
        func_0x00010bf52a60();
      }
      _objc_release(lVar6);
      _objc_release(lVar6);
      _objc_release(puVar8);
      _objc_release(puVar8);
      _objc_release(puVar4);
      _objc_release(lVar7);
      func_0x00010c12ada0(*(undefined8 *)(param_1 + lVar13));
    }
    _objc_release(puVar3);
    _objc_release(lVar6);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be9ecd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 10625a6c8; end: 10625a6cf; -[SCSpotlightRepliesInputView _sendCommentFromButton] */

void FUN_10625a6c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9ecd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendCommentWithGesture__1125854d8,5);
  return;
}



/* Entry: 10625a6d0; end: 10625a87f; -[SCSpotlightRepliesInputView _sendCommentWithGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625a6d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = (long)_DAT_11274412c;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000108f4df78();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010bedb8e0(param_1,param_2,lVar2);
  lVar7 = (long)_DAT_112744158;
  lVar3 = *(long *)(param_1 + lVar7);
  func_0x00010bf5e080();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0 || lVar3 != 0) {
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_112744138);
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127440dc);
    func_0x00010bf004a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24bea0(lVar1,param_2,param_1,lVar2,lVar3,uVar5,uVar4,param_3,
                        *(undefined8 *)(param_1 + _DAT_11274413c));
    _objc_release(uVar4);
    _objc_release(lVar1);
  }
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6),param_2,0);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_1127440e0),param_2,
                      *(undefined8 *)(param_1 + _DAT_11274416c));
  func_0x00010bf83c40(param_1);
  func_0x00010bf3a9c0(*(undefined8 *)(param_1 + lVar7));
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c26b700(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedb900(param_1,param_2,uVar4);
  _objc_release(uVar4);
  func_0x00010be35c80(param_1);
  func_0x00010c12ebe0(param_1,param_2,2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10625a880; end: 10625a8b7; -[SCSpotlightRepliesInputView _cameraButtonTapped] */

void FUN_10625a880(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24bee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10625a8b8; end: 10625ab27; -[SCSpotlightRepliesInputView _mentionButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625a8b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  func_0x00010be52020(param_1,param_2,8);
  lVar10 = (long)_DAT_11274412c;
  lVar11 = *(long *)(param_1 + lVar10);
  lVar1 = lVar11;
  func_0x00010bf193c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c15a1e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c24d960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1ce0(lVar11,param_2,lVar1,uVar7);
  uVar12 = *(undefined8 *)(param_1 + lVar10);
  uVar3 = uVar12;
  func_0x00010c15a1e0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c24d960();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c15a1e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf940a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1ce0(uVar12,param_2,uVar4,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(lVar1);
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c26b700(uVar7);
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 != 0) {
    func_0x00010bf35920(uVar7,param_2,lVar11 + -1);
    puVar8 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c2a4be0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf359c0();
    _objc_release(puVar8);
    if (((ulong)puVar9 & 1) == 0) {
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110e46278);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be3ca40(param_1,param_2,puVar8,lVar11,uVar12);
      _objc_release(puVar8);
      goto LAB_10625aa94;
    }
  }
  func_0x00010be3ca40(param_1,param_2,&PTR____CFConstantStringClassReference_110dae4f8,lVar11,uVar12
                     );
LAB_10625aa94:
  puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + _DAT_112744138) != 0) {
    func_0x00010c1d0640(puVar8,param_2,*(long *)(param_1 + _DAT_112744138),
                        &PTR____CFConstantStringClassReference_110f43038);
  }
  func_0x00010c1d0640(puVar8,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c52d8,
                      &PTR____CFConstantStringClassReference_110f430b8);
  func_0x00010c0a5a20(*(undefined8 *)(param_1 + _DAT_1127440f4),param_2,0x21,puVar8);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 10625ab28; end: 10625abaf; -[SCSpotlightRepliesInputView _insertTextWhenEligible:selectedRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625ab28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11274412c;
  lVar1 = param_1;
  func_0x00010c26caa0(param_1,param_2,*(undefined8 *)(param_1 + lVar2),param_4,param_5,param_3);
  if ((int)lVar1 != 0) {
    func_0x00010c0670e0(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
    func_0x00010c26cb00(param_1,param_2,*(undefined8 *)(param_1 + lVar2));
    func_0x00010bf179a0(*(undefined8 *)(param_1 + lVar2));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10625abb0; end: 10625ad63; -[SCSpotlightRepliesInputView _logCreateCommentIfNeededWithCommentsInteractionContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625abb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(param_1 + _DAT_11274412c);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  lVar3 = *(long *)(param_1 + _DAT_112744158);
  func_0x00010bf5e080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112744138);
    _objc_retain(uVar5);
    uVar8 = *(undefined8 *)(param_1 + _DAT_1127440fc);
    lVar2 = param_1;
    func_0x00010bf552c0();
    uVar6 = *(undefined8 *)(param_1 + _DAT_1127440f4);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + _DAT_1127440f8);
    _objc_retain(uVar7);
    uVar4 = 0x11;
    _dispatch_get_global_queue(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10625ad64;
    puStack_88 = &UNK_1108e74c8;
    uStack_80 = uVar6;
    uStack_78 = uVar5;
    uStack_70 = uVar7;
    uStack_68 = uVar8;
    lStack_60 = lVar2;
    uStack_58 = param_3;
    _objc_retain(uVar7);
    _objc_retain(uVar5);
    _objc_retain(uVar6);
    func_0x00010007380c(uVar4,&puStack_a0);
    _objc_release(uVar4);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  return;
}



/* Entry: 10625ad64; end: 10625af53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625ad64(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  long lVar37;
  undefined8 uVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  
  lVar37 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar38 = *(undefined8 *)(param_1 + 0x20);
  puVar10 = *(undefined **)(param_1 + 0x28);
  puVar2 = puVar10;
  if (puVar10 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = *(undefined **)(param_1 + 0x30);
  func_0x00010c24c080();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar9;
  FUN_10623cbd8();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5a20(uVar38);
  _objc_release(puVar8);
  _objc_release(puVar7);
  if (puVar5 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release();
  if (puVar10 == (undefined *)0x0) {
    _objc_release();
    puVar3 = puVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar37) {
    return;
  }
  ___stack_chk_fail();
  lVar37 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = *(undefined **)(puVar3 + _DAT_1127440f0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar10;
  func_0x00010c08fa60();
  _objc_release(puVar10);
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar40 = (long)_DAT_112744170;
    uVar38 = *(undefined8 *)(puVar3 + lVar40);
    *(undefined **)(puVar3 + lVar40) = puVar10;
    _objc_release(uVar38);
    func_0x00010c219b60(*(undefined8 *)(puVar3 + lVar40));
    puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(puVar3 + lVar40));
    _objc_release(puVar10);
    func_0x00010c21e900(*(undefined8 *)(puVar3 + lVar40));
    puVar9 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)(puVar3 + lVar40));
    lVar39 = (long)_DAT_11274414c;
    func_0x00010befbb60(*(undefined8 *)(puVar3 + lVar39));
    puVar10 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar41 = (long)_DAT_112744130;
    uVar38 = *(undefined8 *)(puVar3 + lVar41);
    *(undefined **)(puVar3 + lVar41) = puVar10;
    _objc_release(uVar38);
    puVar10 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(*(undefined8 *)(puVar3 + lVar41));
    func_0x00010c1a9fc0(*(undefined8 *)(puVar3 + lVar41));
    func_0x00010c219b60(*(undefined8 *)(puVar3 + lVar41));
    func_0x00010c1a7f60(*(undefined8 *)(puVar3 + lVar41));
    func_0x00010c21e900(*(undefined8 *)(puVar3 + lVar41));
    func_0x00010befbb60(*(undefined8 *)(puVar3 + lVar40));
    lVar11 = *(long *)(puVar3 + _DAT_112744168);
    if (lVar11 == 0) {
      lVar11 = *(long *)(puVar3 + lVar39);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar12 = *(undefined8 *)(puVar3 + lVar40);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar38 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(puVar3 + lVar40);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(puVar3 + _DAT_11274412c);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(puVar3 + lVar40);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar3 + lVar39);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(puVar3 + lVar40);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(puVar3 + _DAT_112744158);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(puVar3 + lVar40);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar22;
    func_0x00010bf49420(0x4042000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(puVar3 + lVar41);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)(puVar3 + lVar40);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar24;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar27 = *(undefined8 *)(puVar3 + lVar41);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = *(undefined8 *)(puVar3 + lVar40);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar27;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = *(undefined8 *)(puVar3 + lVar41);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar31 = uVar30;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar32 = *(undefined8 *)(puVar3 + lVar41);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar32;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar33);
    _objc_release(uVar32);
    _objc_release(uVar31);
    _objc_release(uVar30);
    _objc_release(uVar29);
    _objc_release(uVar28);
    _objc_release(uVar27);
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar38);
    _objc_release(uVar12);
    _objc_release(lVar11);
    _objc_release(puVar2);
    _objc_release(puVar10);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar37) {
    return;
  }
  ___stack_chk_fail();
  lVar37 = (long)_DAT_112744130;
  uVar38 = *(undefined8 *)(puVar9 + lVar37);
  func_0x00010c07d660(uVar38);
  func_0x00010c1fadc0(uVar38);
  iVar1 = (int)*(undefined8 *)(puVar9 + lVar37);
  func_0x00010c07d660();
  func_0x00010be590c0(puVar9);
  puVar10 = puVar9 + _DAT_112744134;
  _objc_loadWeakRetained(puVar10);
  func_0x00010c24bec0();
  _objc_release(puVar10);
  if (iVar1 != 0) {
    puVar10 = puVar9;
    func_0x00010bdf5f40();
    if ((int)puVar10 == 0) {
      uVar38 = 0;
    }
    else {
      uVar34 = *(ulong *)(puVar9 + _DAT_1127440f0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar35 = uVar34;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      lVar37 = (long)_DAT_112744120;
      uVar36 = uVar35;
      func_0x00010c0720c0();
      if ((uVar36 & 1) == 0) {
        uVar38 = *(undefined8 *)(puVar9 + lVar37);
      }
      else {
        uVar38 = 0;
      }
      _objc_retain(uVar38);
      _objc_release(uVar35);
      _objc_release(uVar34);
    }
    puVar2 = PTR_PTR_1126c9220;
    _objc_alloc(PTR_PTR_1126c9220);
    puVar10 = puVar9 + _DAT_112744174;
    _objc_loadWeakRetained(puVar10);
    func_0x00010c058280(puVar2);
    _objc_release(puVar10);
    func_0x00010c18b5e0(puVar2);
    func_0x00010bf9d620(*(undefined8 *)(puVar9 + _DAT_112744114));
    lVar37 = (long)_DAT_11274412c;
    iVar1 = (int)*(undefined8 *)(puVar9 + lVar37);
    func_0x00010c073040();
    if (iVar1 != 0) {
      func_0x00010c13a0e0(*(undefined8 *)(puVar9 + lVar37));
    }
    func_0x00010be52020(puVar9);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar38);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8d5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar9,PTR_s__removeStickerPickerScope_112580f18);
  return;
}



/* Entry: 10625af54; end: 10625b4ff; -[SCSpotlightRepliesInputView _setUpStickerDrawerButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625af54(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined *puVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  undefined8 uVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  
  lVar33 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = *(undefined **)(param_1 + _DAT_1127440f0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c08fa60();
  _objc_release(puVar4);
  _objc_release();
  if (puVar5 != (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar36 = (long)_DAT_112744170;
    uVar34 = *(undefined8 *)(param_1 + lVar36);
    *(undefined **)(param_1 + lVar36) = puVar4;
    _objc_release(uVar34);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar36));
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar36));
    _objc_release(puVar4);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar36));
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)(param_1 + lVar36));
    lVar35 = (long)_DAT_11274414c;
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar35));
    puVar4 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar37 = (long)_DAT_112744130;
    uVar34 = *(undefined8 *)(param_1 + lVar37);
    *(undefined **)(param_1 + lVar37) = puVar4;
    _objc_release(uVar34);
    puVar4 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(*(undefined8 *)(param_1 + lVar37));
    func_0x00010c1a9fc0(*(undefined8 *)(param_1 + lVar37));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar37));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar37));
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar37));
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar36));
    lVar6 = *(long *)(param_1 + _DAT_112744168);
    if (lVar6 == 0) {
      lVar6 = *(long *)(param_1 + lVar35);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar7 = *(undefined8 *)(param_1 + lVar36);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar36);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + _DAT_11274412c);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar36);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + lVar35);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + lVar36);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + _DAT_112744158);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + lVar36);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010bf49420(0x4042000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_1 + lVar37);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(param_1 + lVar36);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar19;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(param_1 + lVar37);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(param_1 + lVar36);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)(param_1 + lVar37);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar25;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar27 = *(undefined8 *)(param_1 + lVar37);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = uVar27;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar29 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar29);
    _objc_release(uVar28);
    _objc_release(uVar27);
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar34);
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar33) {
    return;
  }
  ___stack_chk_fail();
  lVar33 = (long)_DAT_112744130;
  uVar34 = *(undefined8 *)(puVar3 + lVar33);
  func_0x00010c07d660(uVar34);
  func_0x00010c1fadc0(uVar34);
  iVar2 = (int)*(undefined8 *)(puVar3 + lVar33);
  func_0x00010c07d660();
  func_0x00010be590c0(puVar3);
  puVar4 = puVar3 + _DAT_112744134;
  _objc_loadWeakRetained(puVar4);
  func_0x00010c24bec0();
  _objc_release(puVar4);
  if (iVar2 != 0) {
    puVar4 = puVar3;
    func_0x00010bdf5f40();
    if ((int)puVar4 == 0) {
      uVar34 = 0;
    }
    else {
      uVar30 = *(ulong *)(puVar3 + _DAT_1127440f0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar31 = uVar30;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      lVar33 = (long)_DAT_112744120;
      uVar32 = uVar31;
      func_0x00010c0720c0();
      if ((uVar32 & 1) == 0) {
        uVar34 = *(undefined8 *)(puVar3 + lVar33);
      }
      else {
        uVar34 = 0;
      }
      _objc_retain(uVar34);
      _objc_release(uVar31);
      _objc_release(uVar30);
    }
    puVar5 = PTR_PTR_1126c9220;
    _objc_alloc(PTR_PTR_1126c9220);
    puVar4 = puVar3 + _DAT_112744174;
    _objc_loadWeakRetained(puVar4);
    func_0x00010c058280(puVar5);
    _objc_release(puVar4);
    func_0x00010c18b5e0(puVar5);
    func_0x00010bf9d620(*(undefined8 *)(puVar3 + _DAT_112744114));
    lVar33 = (long)_DAT_11274412c;
    iVar2 = (int)*(undefined8 *)(puVar3 + lVar33);
    func_0x00010c073040();
    if (iVar2 != 0) {
      func_0x00010c13a0e0(*(undefined8 *)(puVar3 + lVar33));
    }
    func_0x00010be52020(puVar3);
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar34);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8d5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s__removeStickerPickerScope_112580f18);
  return;
}



/* Entry: 10625b500; end: 10625b6af; -[SCSpotlightRepliesInputView _stickerButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625b500(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_112744130;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c07d660(uVar6);
  func_0x00010c1fadc0(uVar6);
  iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010c07d660();
  func_0x00010be590c0(param_1);
  lVar7 = param_1 + _DAT_112744134;
  _objc_loadWeakRetained(lVar7);
  func_0x00010c24bec0();
  _objc_release(lVar7);
  if (iVar1 != 0) {
    lVar7 = param_1;
    func_0x00010bdf5f40();
    if ((int)lVar7 == 0) {
      uVar6 = 0;
    }
    else {
      uVar2 = *(ulong *)(param_1 + _DAT_1127440f0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)_DAT_112744120;
      uVar4 = uVar3;
      func_0x00010c0720c0();
      if ((uVar4 & 1) == 0) {
        uVar6 = *(undefined8 *)(param_1 + lVar7);
      }
      else {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    puVar5 = PTR_PTR_1126c9220;
    _objc_alloc(PTR_PTR_1126c9220);
    lVar7 = param_1 + _DAT_112744174;
    _objc_loadWeakRetained(lVar7);
    func_0x00010c058280(puVar5);
    _objc_release(lVar7);
    func_0x00010c18b5e0(puVar5);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112744114));
    lVar7 = (long)_DAT_11274412c;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
    func_0x00010c073040();
    if (iVar1 != 0) {
      func_0x00010c13a0e0(*(undefined8 *)(param_1 + lVar7));
    }
    func_0x00010be52020(param_1);
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8d5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeStickerPickerScope_112580f18);
  return;
}



/* Entry: 10625b6b0; end: 10625b6ef; -[SCSpotlightRepliesInputView _creatorHasValidFriendmojiPolicy] */

bool FUN_10625b6b0(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010bf5b160();
  if (lVar2 == 1) {
    bVar1 = false;
  }
  else {
    func_0x00010bf5b160(param_1);
    bVar1 = param_1 != 0;
  }
  return bVar1;
}



/* Entry: 10625b6f0; end: 10625b76b; -[SCSpotlightRepliesInputView _removeStickerPickerScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625b6f0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112744114;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + _DAT_112744174;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf6f440();
    _objc_release(lVar1);
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10625b76c; end: 10625b7b7; -[SCSpotlightRepliesInputView didDismissStickerDrawer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625b76c(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112744130;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c07d660();
  if (iVar1 != 0) {
    func_0x00010c1fadc0(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010be8d5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeStickerPickerScope_112580f18);
    return;
  }
  return;
}



/* Entry: 10625b7b8; end: 10625b853; -[SCSpotlightRepliesInputView _logStickerDrawerEventOpen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625b7b8(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + _DAT_112744138) != 0) {
    func_0x00010c1d0640(puVar2,param_2,*(long *)(param_1 + _DAT_112744138),
                        &PTR____CFConstantStringClassReference_110f43038);
  }
  func_0x00010c1d0640(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c52d8,
                      &PTR____CFConstantStringClassReference_110f430b8);
  uVar1 = 0x23;
  if (param_3 == 0) {
    uVar1 = 0x24;
  }
  func_0x00010c0a5a20(*(undefined8 *)(param_1 + _DAT_1127440f4),param_2,uVar1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10625b854; end: 10625ba83; -[SCSpotlightRepliesInputView stickerPickerDidSelectWithSticker:sectionName:searchQueryText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625b854(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b5ff8;
  func_0x00010bf5cda0(PTR_PTR_1126b5ff8,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc5ec0(param_1,param_2,puVar1);
  uStack_c0 = *(undefined8 *)(param_1 + _DAT_1127440f4);
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110f43038;
  puVar11 = *(undefined **)(param_1 + _DAT_112744138);
  puVar2 = puVar11;
  if (puVar11 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c52d8;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110f430b8;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110f43658;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_90 = puVar2;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110f43638;
  puVar4 = param_5;
  puStack_80 = puVar3;
  if (param_5 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f43618;
  puVar5 = param_3;
  puStack_78 = puVar4;
  FUN_10623ccbc();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_90,&ppuStack_b8,5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0x25;
  func_0x00010c0a5a20(uStack_c0,param_2,0x25,puVar7);
  _objc_release(puVar7);
  if (puVar5 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  if (param_5 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  if (puVar11 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_10625ba84;
  puStack_f0 = puVar11;
  puStack_e8 = puVar1;
  puStack_e0 = param_5;
  puStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(uVar8);
  func_0x00010bdc5ec0(puVar2,param_2,uVar8);
  uVar10 = *(undefined8 *)(puVar2 + _DAT_1127440f4);
  uVar9 = *(undefined8 *)(puVar2 + _DAT_112744138);
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_10625bb40;
  puStack_108 = &UNK_110918010;
  uStack_100 = uVar10;
  uStack_f8 = uVar9;
  _objc_retain(uVar9);
  _objc_retain(uVar10);
  func_0x00010c0bd240(uVar8,param_2,&puStack_120);
  _objc_release(uVar8);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return;
}



/* Entry: 10625ba84; end: 10625bb3f; -[SCSpotlightRepliesInputView addReplyAttachmentToCurrentComment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625ba84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010bdc5ec0(param_1,param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127440f4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744138);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10625bb40;
  puStack_48 = &UNK_110918010;
  uStack_40 = uVar2;
  uStack_38 = uVar1;
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  func_0x00010c0bd240(param_3,param_2,&puStack_60);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10625bb40; end: 10625bce3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625bb40(long param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = *(undefined **)(param_1 + 0x28);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_2;
  FUN_10623ccbc();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5a20(uVar1);
  _objc_release(puVar7);
  if (puVar5 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0d9840(*(undefined8 *)(param_2 + _DAT_1127440e4));
  lVar9 = (long)_DAT_11274412c;
  uVar8 = *(ulong *)(param_2 + lVar9);
  func_0x00010c073040();
  if ((uVar8 & 1) == 0) {
    func_0x00010bf179a0(*(undefined8 *)(param_2 + lVar9));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bedf9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateSendButtonVisibilityIfNec_112595820);
  return;
}



/* Entry: 10625bce4; end: 10625bd2f; -[SCSpotlightRepliesInputView _addAttachmentToCurrentComment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625bce4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_1127440e4));
  lVar2 = (long)_DAT_11274412c;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x00010c073040();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf179a0(*(undefined8 *)(param_1 + lVar2));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bedf9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSendButtonVisibilityIfNec_112595820);
  return;
}



/* Entry: 10625bd30; end: 10625becf; -[SCSpotlightRepliesInputView didTapRemoveAttachment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10625bd30(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                    long param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  long lStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  func_0x00010bedf9e0(param_5);
  uVar6 = *(undefined8 *)(param_5 + _DAT_1127440f4);
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f43038;
  puVar7 = *(undefined **)(param_5 + _DAT_112744138);
  puVar1 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c52d8;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110f430b8;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f43618;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_90 = param_7;
  puStack_70 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&lStack_90,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_10623ce14();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&puStack_70,&ppuStack_88,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5a20(uVar6,param_6,0x26,puVar5);
  _objc_release(puVar5);
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (puVar7 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(param_7 + _DAT_11274412c);
  func_0x00010bfb68e0(uVar6);
  func_0x00010c23d5a0(param_3,uVar6);
  dVar8 = (double)(float)(int)param_4;
  if ((double)(float)(int)param_4 <= *(double *)(param_7 + _DAT_112744150)) {
    dVar8 = *(double *)(param_7 + _DAT_112744150);
  }
  dVar9 = *(double *)(param_7 + _DAT_112744154);
  if (dVar8 <= *(double *)(param_7 + _DAT_112744154)) {
    dVar9 = dVar8;
  }
  return dVar9;
}



/* Entry: 10625bed0; end: 10625bf43; -[SCSpotlightRepliesInputView _textViewHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10625bed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                    long param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = *(undefined8 *)(param_5 + _DAT_11274412c);
  func_0x00010bfb68e0(uVar1);
  func_0x00010c23d5a0(param_3,uVar1);
  dVar2 = (double)(float)(int)param_4;
  if ((double)(float)(int)param_4 <= *(double *)(param_5 + _DAT_112744150)) {
    dVar2 = *(double *)(param_5 + _DAT_112744150);
  }
  dVar3 = *(double *)(param_5 + _DAT_112744154);
  if (dVar2 <= *(double *)(param_5 + _DAT_112744154)) {
    dVar3 = dVar2;
  }
  return dVar3;
}



/* Entry: 10625bf44; end: 10625bf77; -[SCSpotlightRepliesInputView _setupConstraints] */

void FUN_10625bf44(undefined8 param_1)

{
  func_0x00010beabc20();
  func_0x00010beaabc0(param_1);
  func_0x00010bead380(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bea96b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setUpMentionButtonConstraints_112587f50);
  return;
}



/* Entry: 10625bf78; end: 10625bfa3; -[SCSpotlightRepliesInputView updateTextViewHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625bf78(long param_1)

{
  func_0x00010becb800();
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744178),PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 10625bfa4; end: 10625c52f; -[SCSpotlightRepliesInputView _setupInputContainerViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625bfa4(long param_1,undefined8 param_2)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  double dVar30;
  undefined *puStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined *puStack_378;
  undefined8 **ppuStack_370;
  code *pcStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined *puStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  long lStack_120;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = (long)_DAT_11274415c;
  lVar1 = *(long *)(param_1 + lVar25);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + _DAT_112744124);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar28 = *(long *)(param_1 + lVar25);
  lVar25 = *(long *)(param_1 + _DAT_112744170);
  if (lVar25 == 0) {
    lVar25 = *(long *)(param_1 + _DAT_112744164);
  }
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_11274412c;
  uVar2 = *(undefined8 *)(param_1 + lVar26);
  lStack_120 = lVar25;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf49420(*(undefined8 *)(param_1 + _DAT_112744150));
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_112744178;
  uVar24 = *(undefined8 *)(param_1 + lVar27);
  *(undefined8 *)(param_1 + lVar27) = uVar3;
  _objc_release(uVar24);
  _objc_release(uVar2);
  lVar25 = (long)_DAT_11274414c;
  uVar3 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0xc038000000000000;
  if (lVar28 != 0) {
    uVar2 = 0xc020000000000000;
  }
  uVar24 = uVar3;
  func_0x00010bf493c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar29 = (long)_DAT_11274417c;
  uVar2 = *(undefined8 *)(param_1 + lVar29);
  *(undefined8 *)(param_1 + lVar29) = uVar24;
  _objc_release(uVar2);
  _objc_release(uVar3);
  puStack_128 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112744148);
  uStack_d8 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_e0 = uVar3;
  func_0x00010bf493c0(0x4024000000000000,uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar25);
  uStack_e8 = uVar2;
  uStack_d0 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_112744124;
  uVar3 = *(undefined8 *)(param_1 + lVar28);
  uStack_f0 = uVar24;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = uVar3;
  func_0x00010bf493c0(0x4024000000000000,uVar24,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar25);
  uStack_100 = uVar24;
  uStack_c8 = uVar24;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar28);
  uStack_108 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_110 = uVar3;
  func_0x00010bf493c0(0xc024000000000000,uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = *(undefined8 *)(param_1 + lVar29);
  uVar24 = *(undefined8 *)(param_1 + lVar26);
  uStack_118 = uVar2;
  uStack_c0 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar25);
  uStack_130 = uVar24;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_138 = uVar3;
  func_0x00010bf493c0(0x4024000000000000,uVar24,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar26);
  uStack_140 = uVar24;
  uStack_b0 = uVar24;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar25);
  uStack_148 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_158 = uVar3;
  func_0x00010bf493a0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = *(undefined8 *)(param_1 + lVar27);
  uVar3 = *(undefined8 *)(param_1 + lVar26);
  uStack_160 = uVar2;
  uStack_a8 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_168 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_112744158;
  uVar2 = *(undefined8 *)(param_1 + lVar28);
  uStack_170 = uVar3;
  uStack_98 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar26);
  uStack_178 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_180 = uVar3;
  func_0x00010bf493a0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar28);
  uStack_188 = uVar2;
  uStack_90 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar28);
  lStack_150 = lVar1;
  uStack_88 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar28);
  uStack_80 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar24;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_d0,0xc);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_128,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar24);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uStack_188);
  _objc_release(uStack_180);
  _objc_release(uStack_178);
  _objc_release(uStack_170);
  _objc_release(uStack_168);
  _objc_release(uStack_160);
  _objc_release(uStack_158);
  _objc_release(uStack_148);
  _objc_release(uStack_140);
  _objc_release(uStack_138);
  _objc_release(uStack_130);
  _objc_release(uStack_118);
  _objc_release(uStack_110);
  _objc_release(uStack_108);
  _objc_release(uStack_100);
  _objc_release(uStack_f8);
  _objc_release(uStack_f0);
  _objc_release(uStack_e8);
  _objc_release(uStack_e0);
  _objc_release(uStack_d8);
  _objc_release(lStack_120);
  lVar1 = lStack_150;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_10625c530;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_218 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar29 = (long)_DAT_112744124;
  lVar27 = *(long *)(lVar1 + lVar29);
  uStack_1f0 = uVar7;
  uStack_1e8 = uVar6;
  uStack_1e0 = uVar3;
  uStack_1d8 = uVar5;
  uStack_1d0 = uVar9;
  uStack_1c8 = uVar4;
  puStack_1c0 = puVar10;
  uStack_1b8 = uVar24;
  uStack_1b0 = uVar8;
  uStack_1a8 = uVar2;
  puStack_1a0 = &stack0xfffffffffffffff0;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar27;
  func_0x00010bf493a0(lVar27,param_2,lVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar1 + lVar29);
  lStack_210 = lVar28;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar24;
  func_0x00010bf493a0(uVar24,param_2,lVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar1 + lVar29);
  uStack_208 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_200 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_210,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_218,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar26);
  _objc_release(uVar24);
  _objc_release(lVar28);
  _objc_release(lVar25);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_10625c6fc;
  lStack_2a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  ppuStack_230 = &puStack_1a0;
  _objc_alloc();
  lVar25 = (long)_DAT_112744144;
  uVar2 = *(undefined8 *)(lVar27 + lVar25);
  puStack_330 = puVar10;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = (long)_DAT_112744148;
  uVar3 = *(undefined8 *)(lVar27 + lVar1);
  uStack_2e8 = uVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_2f0 = uVar3;
  func_0x00010bf493a0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar27 + lVar25);
  uStack_2f8 = uVar2;
  uStack_2e0 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar27 + lVar1);
  uStack_300 = uVar24;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_308 = uVar3;
  func_0x00010bf493a0(uVar24,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar27 + lVar25);
  uStack_310 = uVar24;
  uStack_2d8 = uVar24;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar27 + lVar1);
  uStack_318 = uVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_320 = uVar3;
  func_0x00010bf49500(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar27 + lVar25);
  uStack_328 = uVar2;
  uStack_2d0 = uVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar27 + lVar1);
  uStack_338 = uVar24;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_340 = uVar3;
  func_0x00010bf49500(uVar24,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar27 + lVar1);
  uStack_348 = uVar24;
  uStack_2c8 = uVar24;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_350 = uVar3;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar27 + lVar1);
  uStack_358 = uVar3;
  uStack_2c0 = uVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar27 + lVar1);
  uStack_2b8 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar27 + _DAT_112744124);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  dVar30 = 14.0;
  uVar2 = uVar5;
  func_0x00010bf493c0(0x402c000000000000,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar27 + lVar1);
  uStack_2b0 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar27 + _DAT_11274412c);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_2a8 = uVar24;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_2e0,8);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puStack_330;
  func_0x00010bff4000(puStack_330,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar24);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uStack_358);
  _objc_release(uStack_350);
  _objc_release(uStack_348);
  _objc_release(uStack_340);
  _objc_release(uStack_338);
  _objc_release(uStack_328);
  _objc_release(uStack_320);
  _objc_release(uStack_318);
  _objc_release(uStack_310);
  _objc_release(uStack_308);
  _objc_release(uStack_300);
  _objc_release(uStack_2f8);
  _objc_release(uStack_2f0);
  _objc_release(uStack_2e8);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar11);
  puVar12 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_368 = FUN_10625caa8;
  lStack_3d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = (long)_DAT_112744168;
  puVar13 = *(undefined **)(puVar12 + lVar1);
  puVar23 = puVar13;
  uStack_3c0 = uVar2;
  uStack_3b8 = uVar6;
  uStack_3b0 = uVar5;
  uStack_3a8 = uVar3;
  uStack_3a0 = uVar4;
  puStack_398 = puVar10;
  uStack_390 = uVar24;
  uStack_388 = uVar8;
  uStack_380 = uVar7;
  puStack_378 = puVar11;
  ppuStack_370 = &ppuStack_230;
  if (puVar13 != (undefined *)0x0) {
    lVar25 = (long)_DAT_112744164;
    if (*(long *)(puVar12 + lVar25) != 0) {
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar28 = (long)_DAT_11274414c;
      uVar7 = *(undefined8 *)(puVar12 + lVar28);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar13;
      func_0x00010bf493a0(puVar13,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(puVar12 + lVar1);
      puStack_408 = puVar10;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(puVar12 + _DAT_11274412c);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      func_0x00010bf493a0(uVar8,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(puVar12 + lVar1);
      uStack_400 = uVar3;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(puVar12 + _DAT_112744158);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar14;
      func_0x00010bf493a0(uVar14,param_2,uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(puVar12 + lVar1);
      uStack_3f8 = uVar2;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = *(undefined8 *)(puVar12 + lVar28);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar24 = uVar16;
      func_0x00010bf493a0(uVar16,param_2,uVar17);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = *(undefined8 *)(puVar12 + lVar1);
      uStack_3f0 = uVar24;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0699c0(*(undefined8 *)(puVar12 + lVar25));
      uVar4 = uVar18;
      func_0x00010bf49420(dVar30 + 15.0);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)(puVar12 + lVar25);
      uStack_3e8 = uVar4;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = *(undefined8 *)(puVar12 + lVar1);
      func_0x00010c2793a0(uVar20);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar19;
      func_0x00010bf493c0(0xc02e000000000000,uVar19,param_2,uVar20);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = *(undefined8 *)(puVar12 + lVar25);
      uStack_3e0 = uVar5;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = *(undefined8 *)(puVar12 + lVar1);
      func_0x00010c274200(uVar22);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar21;
      func_0x00010bf493c0(0x4020000000000000,uVar21,param_2,uVar22);
      _objc_retainAutoreleasedReturnValue();
      puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_3d8 = uVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_408,7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar22);
      _objc_release(uVar21);
      _objc_release(uVar5);
      _objc_release(uVar20);
      _objc_release(uVar19);
      _objc_release(uVar4);
      _objc_release(uVar18);
      _objc_release(uVar24);
      _objc_release(uVar17);
      _objc_release(uVar16);
      _objc_release(uVar2);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar3);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(puVar10);
      _objc_release(uVar7);
      _objc_release(puVar13);
      func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar23);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d0) {
    return;
  }
  ___stack_chk_fail();
  puVar23[_DAT_112744180] = 1;
  return;
}



/* Entry: 10625c530; end: 10625c6fb; -[SCSpotlightRepliesInputView _setupContentViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625c530(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  double dVar29;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_88 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar28 = (long)_DAT_112744124;
  lVar1 = *(long *)(param_1 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar1;
  func_0x00010bf493a0(lVar1,param_2,lVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar28);
  lStack_80 = lVar27;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar28);
  uStack_78 = uVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_88,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(lVar26);
  _objc_release(uVar2);
  _objc_release(lVar27);
  _objc_release(lVar25);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_10625c6fc;
  lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  lVar27 = (long)_DAT_112744144;
  uVar5 = *(undefined8 *)(lVar1 + lVar27);
  puStack_1a0 = puVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_112744148;
  uVar6 = *(undefined8 *)(lVar1 + lVar25);
  uStack_158 = uVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_160 = uVar6;
  func_0x00010bf493a0(uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar1 + lVar27);
  uStack_168 = uVar5;
  uStack_150 = uVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar1 + lVar25);
  uStack_170 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_178 = uVar6;
  func_0x00010bf493a0(uVar2,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar1 + lVar27);
  uStack_180 = uVar2;
  uStack_148 = uVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar1 + lVar25);
  uStack_188 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_190 = uVar6;
  func_0x00010bf49500(uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar1 + lVar27);
  uStack_198 = uVar5;
  uStack_140 = uVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar1 + lVar25);
  uStack_1a8 = uVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_1b0 = uVar6;
  func_0x00010bf49500(uVar2,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar1 + lVar25);
  uStack_1b8 = uVar2;
  uStack_138 = uVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_1c0 = uVar6;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar1 + lVar25);
  uStack_1c8 = uVar6;
  uStack_130 = uVar6;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar1 + lVar25);
  uStack_128 = uVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar1 + _DAT_112744124);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  dVar29 = 14.0;
  uVar5 = uVar7;
  func_0x00010bf493c0(0x402c000000000000,uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar1 + lVar25);
  uStack_120 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar1 + _DAT_11274412c);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_118 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_150,8);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puStack_1a0;
  func_0x00010bff4000(puStack_1a0,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1b0);
  _objc_release(uStack_1a8);
  _objc_release(uStack_198);
  _objc_release(uStack_190);
  _objc_release(uStack_188);
  _objc_release(uStack_180);
  _objc_release(uStack_178);
  _objc_release(uStack_170);
  _objc_release(uStack_168);
  _objc_release(uStack_160);
  _objc_release(uStack_158);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar11);
  puVar12 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1d8 = FUN_10625caa8;
  lStack_240 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = (long)_DAT_112744168;
  puVar13 = *(undefined **)(puVar12 + lVar25);
  puVar24 = puVar13;
  uStack_230 = uVar5;
  uStack_228 = uVar8;
  uStack_220 = uVar7;
  uStack_218 = uVar6;
  uStack_210 = uVar3;
  puStack_208 = puVar4;
  uStack_200 = uVar2;
  uStack_1f8 = uVar10;
  uStack_1f0 = uVar9;
  puStack_1e8 = puVar11;
  ppuStack_1e0 = &puStack_a0;
  if (puVar13 != (undefined *)0x0) {
    lVar27 = (long)_DAT_112744164;
    if (*(long *)(puVar12 + lVar27) != 0) {
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar26 = (long)_DAT_11274414c;
      uVar9 = *(undefined8 *)(puVar12 + lVar26);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar13;
      func_0x00010bf493a0(puVar13,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(puVar12 + lVar25);
      puStack_278 = puVar4;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(puVar12 + _DAT_11274412c);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar10;
      func_0x00010bf493a0(uVar10,param_2,uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(puVar12 + lVar25);
      uStack_270 = uVar6;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(puVar12 + _DAT_112744158);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar15;
      func_0x00010bf493a0(uVar15,param_2,uVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = *(undefined8 *)(puVar12 + lVar25);
      uStack_268 = uVar5;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = *(undefined8 *)(puVar12 + lVar26);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar17;
      func_0x00010bf493a0(uVar17,param_2,uVar18);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)(puVar12 + lVar25);
      uStack_260 = uVar2;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0699c0(*(undefined8 *)(puVar12 + lVar27));
      uVar3 = uVar19;
      func_0x00010bf49420(dVar29 + 15.0);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = *(undefined8 *)(puVar12 + lVar27);
      uStack_258 = uVar3;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = *(undefined8 *)(puVar12 + lVar25);
      func_0x00010c2793a0(uVar21);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar20;
      func_0x00010bf493c0(0xc02e000000000000,uVar20,param_2,uVar21);
      _objc_retainAutoreleasedReturnValue();
      uVar22 = *(undefined8 *)(puVar12 + lVar27);
      uStack_250 = uVar7;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = *(undefined8 *)(puVar12 + lVar25);
      func_0x00010c274200(uVar23);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar22;
      func_0x00010bf493c0(0x4020000000000000,uVar22,param_2,uVar23);
      _objc_retainAutoreleasedReturnValue();
      puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_248 = uVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_278,7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar23);
      _objc_release(uVar22);
      _objc_release(uVar7);
      _objc_release(uVar21);
      _objc_release(uVar20);
      _objc_release(uVar3);
      _objc_release(uVar19);
      _objc_release(uVar2);
      _objc_release(uVar18);
      _objc_release(uVar17);
      _objc_release(uVar5);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar6);
      _objc_release(uVar14);
      _objc_release(uVar10);
      _objc_release(puVar4);
      _objc_release(uVar9);
      _objc_release(puVar13);
      func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar24);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_240) {
    return;
  }
  ___stack_chk_fail();
  puVar24[_DAT_112744180] = 1;
  return;
}



/* Entry: 10625c6fc; end: 10625caa7; -[SCSpotlightRepliesInputView _setupAvatarConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625c6fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  double dVar27;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
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
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  lVar26 = (long)_DAT_112744144;
  uVar2 = *(undefined8 *)(param_1 + lVar26);
  puStack_110 = puVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_112744148;
  uVar3 = *(undefined8 *)(param_1 + lVar24);
  uStack_c8 = uVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_d0 = uVar3;
  func_0x00010bf493a0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar26);
  uStack_d8 = uVar2;
  uStack_c0 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar24);
  uStack_e0 = uVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_e8 = uVar3;
  func_0x00010bf493a0(uVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar26);
  uStack_f0 = uVar4;
  uStack_b8 = uVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar24);
  uStack_f8 = uVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_100 = uVar3;
  func_0x00010bf49500(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar26);
  uStack_108 = uVar2;
  uStack_b0 = uVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar24);
  uStack_118 = uVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_120 = uVar3;
  func_0x00010bf49500(uVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar24);
  uStack_128 = uVar4;
  uStack_a8 = uVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_130 = uVar3;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar24);
  uStack_138 = uVar3;
  uStack_a0 = uVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar24);
  uStack_98 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112744124);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  dVar27 = 14.0;
  uVar2 = uVar6;
  func_0x00010bf493c0(0x402c000000000000,uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar24);
  uStack_90 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_11274412c);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_c0,8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puStack_110;
  func_0x00010bff4000(puStack_110,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uStack_138);
  _objc_release(uStack_130);
  _objc_release(uStack_128);
  _objc_release(uStack_120);
  _objc_release(uStack_118);
  _objc_release(uStack_108);
  _objc_release(uStack_100);
  _objc_release(uStack_f8);
  _objc_release(uStack_f0);
  _objc_release(uStack_e8);
  _objc_release(uStack_e0);
  _objc_release(uStack_d8);
  _objc_release(uStack_d0);
  _objc_release(uStack_c8);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar10);
  puVar11 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10625caa8;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = (long)_DAT_112744168;
  puVar12 = *(undefined **)(puVar11 + lVar24);
  puVar23 = puVar12;
  uStack_1a0 = uVar2;
  uStack_198 = uVar7;
  uStack_190 = uVar6;
  uStack_188 = uVar3;
  uStack_180 = uVar5;
  puStack_178 = puVar1;
  uStack_170 = uVar4;
  uStack_168 = uVar9;
  uStack_160 = uVar8;
  puStack_158 = puVar10;
  puStack_150 = &stack0xfffffffffffffff0;
  if (puVar12 != (undefined *)0x0) {
    lVar26 = (long)_DAT_112744164;
    if (*(long *)(puVar11 + lVar26) != 0) {
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar25 = (long)_DAT_11274414c;
      uVar8 = *(undefined8 *)(puVar11 + lVar25);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar12;
      func_0x00010bf493a0(puVar12,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(puVar11 + lVar24);
      puStack_1e8 = puVar1;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(puVar11 + _DAT_11274412c);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar9;
      func_0x00010bf493a0(uVar9,param_2,uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(puVar11 + lVar24);
      uStack_1e0 = uVar3;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(puVar11 + _DAT_112744158);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar14;
      func_0x00010bf493a0(uVar14,param_2,uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(puVar11 + lVar24);
      uStack_1d8 = uVar2;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = *(undefined8 *)(puVar11 + lVar25);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar16;
      func_0x00010bf493a0(uVar16,param_2,uVar17);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = *(undefined8 *)(puVar11 + lVar24);
      uStack_1d0 = uVar4;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0699c0(*(undefined8 *)(puVar11 + lVar26));
      uVar5 = uVar18;
      func_0x00010bf49420(dVar27 + 15.0);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)(puVar11 + lVar26);
      uStack_1c8 = uVar5;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = *(undefined8 *)(puVar11 + lVar24);
      func_0x00010c2793a0(uVar20);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar19;
      func_0x00010bf493c0(0xc02e000000000000,uVar19,param_2,uVar20);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = *(undefined8 *)(puVar11 + lVar26);
      uStack_1c0 = uVar6;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = *(undefined8 *)(puVar11 + lVar24);
      func_0x00010c274200(uVar22);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar21;
      func_0x00010bf493c0(0x4020000000000000,uVar21,param_2,uVar22);
      _objc_retainAutoreleasedReturnValue();
      puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_1b8 = uVar7;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1e8,7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(uVar22);
      _objc_release(uVar21);
      _objc_release(uVar6);
      _objc_release(uVar20);
      _objc_release(uVar19);
      _objc_release(uVar5);
      _objc_release(uVar18);
      _objc_release(uVar4);
      _objc_release(uVar17);
      _objc_release(uVar16);
      _objc_release(uVar2);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar3);
      _objc_release(uVar13);
      _objc_release(uVar9);
      _objc_release(puVar1);
      _objc_release(uVar8);
      _objc_release(puVar12);
      func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar23);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return;
  }
  ___stack_chk_fail();
  puVar23[_DAT_112744180] = 1;
  return;
}



/* Entry: 10625caa8; end: 10625ce0b; -[SCSpotlightRepliesInputView _setUpMentionButtonConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625caa8(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = (long)_DAT_112744168;
  puVar1 = *(undefined **)(param_2 + lVar22);
  puVar21 = puVar1;
  if (puVar1 != (undefined *)0x0) {
    lVar23 = (long)_DAT_112744164;
    if (*(long *)(param_2 + lVar23) != 0) {
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar24 = (long)_DAT_11274414c;
      uVar2 = *(undefined8 *)(param_2 + lVar24);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010bf493a0(puVar1,param_3,uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_2 + lVar22);
      puStack_a8 = puVar3;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_2 + _DAT_11274412c);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bf493a0(uVar4,param_3,uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_2 + lVar22);
      uStack_a0 = uVar6;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_2 + _DAT_112744158);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010bf493a0(uVar7,param_3,uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_2 + lVar22);
      uStack_98 = uVar9;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_2 + lVar24);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar10;
      func_0x00010bf493a0(uVar10,param_3,uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_2 + lVar22);
      uStack_90 = uVar12;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0699c0(*(undefined8 *)(param_2 + lVar23));
      uVar14 = uVar13;
      func_0x00010bf49420(param_1 + 15.0);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_2 + lVar23);
      uStack_88 = uVar14;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(param_2 + lVar22);
      func_0x00010c2793a0(uVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar15;
      func_0x00010bf493c0(0xc02e000000000000,uVar15,param_3,uVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = *(undefined8 *)(param_2 + lVar23);
      uStack_80 = uVar17;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)(param_2 + lVar22);
      func_0x00010c274200(uVar19);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar18;
      func_0x00010bf493c0(0x4020000000000000,uVar18,param_3,uVar19);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_78 = uVar20;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_a8,7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar20);
      _objc_release(uVar19);
      _objc_release(uVar18);
      _objc_release(uVar17);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(puVar3);
      _objc_release(uVar2);
      _objc_release(puVar1);
      func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_3,puVar21);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar21[_DAT_112744180] = 1;
  return;
}



/* Entry: 10625ce0c; end: 10625ce1f; -[SCSpotlightRepliesInputView willPasteTextIntoTextInputView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625ce0c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112744180) = 1;
  return;
}



/* Entry: 10625ce20; end: 10625ce5b; -[SCSpotlightRepliesInputView textViewDidBeginEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625ce20(long param_1,undefined8 param_2)

{
  func_0x00010be52020(param_1,param_2,2);
  *(undefined8 *)(param_1 + _DAT_1127440fc) = 5;
                    /* WARNING: Could not recover jumptable at 0x00010c185110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCreateCommentInteractionConte_11263ee60,9)
  ;
  return;
}



/* Entry: 10625ce5c; end: 10625d0df; -[SCSpotlightRepliesInputView textView:shouldChangeTextInRange:replacementText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10625ce5c(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if (*(char *)(param_1 + (long)_DAT_112744180) == '\x01') {
    *(undefined1 *)(param_1 + (long)_DAT_112744180) = 0;
    uVar7 = param_3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_6;
    func_0x000108f4df78();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c08fa60();
    lVar2 = lVar5;
    func_0x00010c08fa60();
    bVar1 = 0xfa < (uVar6 - param_5) + lVar2;
    if (bVar1) {
      uVar6 = uVar7;
      func_0x00010c08fa60();
      lVar2 = (param_5 - uVar6) + 0xfa;
      if (lVar2 != 0) {
        lVar3 = param_6;
        func_0x00010c260c20(param_6,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_3;
        func_0x00010c26b700(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar6;
        func_0x00010c25cf80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20(param_3,param_2,uVar4);
        _objc_release(uVar4);
        _objc_release(uVar6);
        _objc_release(lVar3);
      }
    }
    _objc_release(lVar5);
  }
  else {
    lVar5 = param_6;
    func_0x00010c0720c0(param_6,param_2,&PTR____CFConstantStringClassReference_110db2db8);
    if ((int)lVar5 != 0) {
      func_0x00010be9ecc0(param_1,param_2,0x15);
      bVar1 = false;
      goto LAB_10625d0b0;
    }
    uVar6 = param_3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c25cf80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar6 = uVar7;
    func_0x00010c08fa60();
    bVar1 = 0xfa < uVar6;
    if (bVar1) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24bf00();
    }
    else {
      func_0x00010bdfa320(param_1,param_2,param_4,param_5,param_6);
      func_0x00010be673e0(param_1,param_2,param_6,param_3,param_4,param_5);
      puVar8 = PTR_PTR_1126c9228;
      _objc_alloc();
      uVar6 = param_3;
      func_0x00010c26b700(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0310a0(puVar8,param_2,uVar6,uVar7,param_6,param_4,param_5);
      uVar9 = *(undefined8 *)(param_1 + (long)_DAT_11274416c);
      *(undefined **)(param_1 + (long)_DAT_11274416c) = puVar8;
      _objc_release(uVar9);
      param_1 = uVar6;
    }
    _objc_release(param_1);
  }
  bVar1 = !bVar1;
  _objc_release(uVar7);
LAB_10625d0b0:
  _objc_release(param_6);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10625d0e0; end: 10625d22f; -[SCSpotlightRepliesInputView textViewDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625d0e0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  func_0x00010bedf9e0(param_1);
  if (*(long *)(param_1 + _DAT_1127440dc) != 0) {
    lVar1 = param_3;
    func_0x00010c0bbdc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar6 = (long)_DAT_11274412c;
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      uVar4 = uVar5;
      func_0x00010bf193c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c15a1e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf940a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e1ce0(uVar5,param_2,uVar4,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar4);
      lVar6 = (long)_DAT_11274416c;
      if (*(long *)(param_1 + lVar6) != 0) {
        func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_1127440e0));
        uVar4 = *(undefined8 *)(param_1 + lVar6);
        *(undefined8 *)(param_1 + lVar6) = 0;
        _objc_release(uVar4);
        lVar6 = param_3;
        func_0x00010c26b700(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bedb900(param_1,param_2,lVar6);
        _objc_release(lVar6);
      }
      func_0x00010c1fb500(param_3,param_2,uVar5,0);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10625d230; end: 10625d31f; -[SCSpotlightRepliesInputView _updateSendButtonVisibilityIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625d230(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112744160;
  if (*(long *)(param_1 + lVar6) != 0) {
    lVar3 = *(long *)(param_1 + _DAT_11274412c);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    lVar5 = *(long *)(param_1 + _DAT_112744158);
    func_0x00010bf5e080();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010bf529e0();
    _objc_release(lVar5);
    iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
    func_0x00010c074c20();
    if (iVar1 != 0 && (lVar4 != 0 || lVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bebac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showSendButtonV2_11258c4a8);
      return;
    }
    uVar2 = (uint)*(undefined8 *)(param_1 + lVar6);
    func_0x00010c074c20();
    if ((uVar2 & 1) == 0 && (lVar4 == 0 && lVar3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be35c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideSendButtonV2_11256b0c0);
      return;
    }
  }
  return;
}



/* Entry: 10625d320; end: 10625d39f; -[SCSpotlightRepliesInputView _showSendButtonV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625d320(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112744160;
  if (*(long *)(param_1 + lVar2) == 0) {
    return;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11274410c);
  func_0x00010bf91280();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec91b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__swapButton_withButton__11258fe10,
               *(undefined8 *)(param_1 + _DAT_11274415c),*(undefined8 *)(param_1 + lVar2));
    return;
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bee1ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateTextViewWidthWithShowSend_112596160,1)
  ;
  return;
}



/* Entry: 10625d3a0; end: 10625d41f; -[SCSpotlightRepliesInputView _hideSendButtonV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625d3a0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112744160;
  if (*(long *)(param_1 + lVar3) == 0) {
    return;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11274410c);
  func_0x00010bf91280();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec91b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__swapButton_withButton__11258fe10,uVar2,
               *(undefined8 *)(param_1 + _DAT_11274415c));
    return;
  }
  func_0x00010c1a7f60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bee1ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateTextViewWidthWithShowSend_112596160,0)
  ;
  return;
}



/* Entry: 10625d420; end: 10625d543; -[SCSpotlightRepliesInputView _swapButton:withButton:] */

void FUN_10625d420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c1a7f60(param_4,param_2,0);
  func_0x00010c1677c0(0,param_4);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10625d544;
  puStack_58 = &UNK_110841f80;
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10625d574;
  puStack_88 = &UNK_110848bd8;
  uStack_80 = param_3;
  uStack_78 = param_4;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf03420(0x3fc999999999999a,puVar2,param_2,&puStack_70,&puStack_a0);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10625d544; end: 10625d573;  */

/* WARNING: Possible PIC construction at 0x00010625d55c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010625d560) */

void FUN_10625d544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10625d574; end: 10625d5c7;  */

void FUN_10625d574(long param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  
  bVar2 = (int)param_2 == 0;
  lVar1 = 0x20;
  if (bVar2) {
    lVar1 = 0x28;
  }
  uVar3 = 0x3ff0000000000000;
  if (bVar2) {
    uVar3 = 0;
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1),param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar3,*(undefined8 *)(param_1 + lVar1),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10625d5c8; end: 10625d643; -[SCSpotlightRepliesInputView _updateTextViewWidthWithShowSendButton:] */

void FUN_10625d5c8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xc04c800000000000;
  if (param_3 == 0) {
    uStack_18 = 0xc02c000000000000;
  }
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10625d644;
  puStack_28 = &UNK_110848c48;
  uStack_20 = param_1;
  func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_40);
  return;
}



/* Entry: 10625d644; end: 10625d687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625d644(long param_1)

{
  func_0x00010c181140(*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274417c));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112744124),
             PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 10625d688; end: 10625d7eb; -[SCSpotlightRepliesInputView _fetchBitmojiSelfie] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625d688(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar1 = &puStack_80;
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10625d7ec;
  puStack_68 = &UNK_110917d40;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retainBlock(&puStack_80);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112744100);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127440ec);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15ade0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127440f0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa5580(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10625d7ec; end: 10625d83b;  */

void FUN_10625d7ec(long param_1,int param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    _objc_retain(param_3);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdfcda0();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10625d83c; end: 10625d853; -[SCSpotlightRepliesInputView _didCompleteFetchingSelfieWithImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625d83c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112744144),PTR_s_setImage__1126481e8);
    return;
  }
  return;
}



/* Entry: 10625d854; end: 10625d903; -[SCSpotlightRepliesInputView _setupTopShadowToView:] */

void FUN_10625d854(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c292b20();
  _objc_release(param_1);
  puVar1 = PTR_PTR_1126b08d8;
  if (lVar2 != 2) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100b74f58(0x401a000000000000,0x3fb999999999999a,0,0xc024000000000000,puVar1,param_3,
                        puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10625d904; end: 10625dacf; -[SCSpotlightRepliesInputView _deleteMentionsInRange:replacementText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625d904(long param_1,ulong param_2,undefined8 *param_3,ulong param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
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
  puVar4 = param_3;
  _objc_retain(param_5);
  lVar10 = (long)_DAT_1127440dc;
  lVar2 = *(long *)(param_1 + lVar10);
  func_0x00010bf004a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + lVar10);
    func_0x00010bf004a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar4 = &uStack_130;
    lVar3 = lVar2;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar12 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar12) {
            _objc_enumerationMutation(lVar2);
          }
          puVar11 = *(undefined8 **)(lStack_128 + lVar9 * 8);
          puVar4 = puVar11;
          func_0x00010c11f2a0(puVar11);
          uVar8 = param_4;
          _NSIntersectionRange(param_3,param_4,puVar4,param_2);
          lVar5 = param_5;
          param_2 = uVar8;
          func_0x00010c08fa60();
          if ((lVar5 == 0) ||
             (puVar4 = puVar11, func_0x00010c11f2a0(),
             param_3 < puVar4 || param_2 <= (ulong)((long)param_3 - (long)puVar4))) {
            bVar1 = false;
          }
          else {
            func_0x00010c11f2a0();
            bVar1 = param_3 != puVar11;
          }
          if (uVar8 != 0 || bVar1) {
            func_0x00010c12d180(*(undefined8 *)(param_1 + lVar10));
          }
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        puVar4 = &uStack_130;
        lVar3 = lVar2;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  lVar10 = (long)_DAT_1127440dc;
  lVar2 = *(long *)(param_5 + lVar10);
  func_0x00010bf004a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    func_0x00010c08fa60();
    uVar6 = *(undefined8 *)(param_5 + lVar10);
    func_0x00010bf004a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x000100504554();
    _objc_release(uVar6);
    func_0x00010c28ca00(*(undefined8 *)(param_5 + lVar10));
    _objc_release(uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10625dad0; end: 10625dcd7; -[SCSpotlightRepliesInputView _offsetMentionsForFinalText:textView:range:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625dad0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_1127440dc;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010bf004a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010c08fa60();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf004a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000100504554();
    _objc_release(uVar3);
    func_0x00010c28ca00(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10625dcd8; end: 10625de2f; -[SCSpotlightRepliesInputView addTextToCurrentSelection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625dcd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar10 = (long)_DAT_11274412c;
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  _objc_retain(param_3);
  uVar1 = uVar8;
  func_0x00010bf193c0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c15a1e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c24d960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1ce0(uVar8,param_2,uVar1,uVar3);
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  uVar4 = uVar9;
  func_0x00010c15a1e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c24d960();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c15a1e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf940a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1ce0(uVar9,param_2,uVar5,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010be3ca40(param_1,param_2,param_3,uVar8,uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10625de30; end: 10625dfab; -[SCSpotlightRepliesInputView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625de30(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_70;
  undefined *puStack_68;
  
  plVar6 = &lStack_70;
  _objc_retain(param_5);
  puVar2 = *(undefined1 **)(param_3 + _DAT_112744104);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c91c0;
  _objc_opt_class(PTR_PTR_1126c91c0);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar1 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  _objc_retain(puVar1);
  if (puVar1 != (undefined1 *)0x0) {
    puVar4 = puVar2;
    func_0x00010c24d260();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    uVar8 = param_2;
    func_0x00010bf51200(param_1,param_2);
    puVar5 = puVar2;
    func_0x00010c074c20();
    if ((((ulong)puVar5 & 1) == 0) &&
       (puVar5 = puVar4, func_0x00010c102b20(uVar7,uVar8), ((ulong)puVar5 & 1) != 0)) {
      plVar6 = (long *)puVar4;
      func_0x00010bfe3a40(uVar7,uVar8,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      goto LAB_10625df70;
    }
    _objc_release(puVar4);
  }
  puStack_68 = PTR_PTR_1126f0980;
  lStack_70 = param_3;
  _objc_msgSendSuper2(param_1,param_2,&lStack_70,PTR_s_hitTest_withEvent__1125d6850,param_5);
  _objc_retainAutoreleasedReturnValue();
LAB_10625df70:
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar6);
  return;
}



/* Entry: 10625dfac; end: 10625dfbb; -[SCSpotlightRepliesInputView textView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10625dfac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274412c);
}



/* Entry: 10625dfbc; end: 10625dfdb; -[SCSpotlightRepliesInputView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625dfbc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112744184);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10625dfdc; end: 10625dfef; -[SCSpotlightRepliesInputView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625dfdc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112744184,param_3);
  return;
}



/* Entry: 10625dff0; end: 10625e00f; -[SCSpotlightRepliesInputView stickerDrawerDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625dff0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112744134);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10625e010; end: 10625e023; -[SCSpotlightRepliesInputView setStickerDrawerDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10625e010(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112744134,param_3);
  return;
}



/* Entry: 10625e024; end: 10625e033; -[SCSpotlightRepliesInputView createRepliesGestureType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10625e024(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127440fc);
}


